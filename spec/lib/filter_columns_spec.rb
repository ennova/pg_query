require 'spec_helper'

def filter_columns(qstr)
  q = PgQuery.parse(qstr)
  q.filter_columns
end

describe PgQuery, '#filter_columns' do
  it 'finds unqualified names' do
    expect(filter_columns('SELECT * FROM x WHERE y = $1 AND z = 1')).to eq [[nil, 'y'], [nil, 'z']]
  end

  it 'finds qualified names' do
    expect(filter_columns('SELECT * FROM x WHERE x.y = $1 AND x.z = 1')).to eq [['x', 'y'], ['x', 'z']]
  end

  it 'traverses into CTEs' do
    query = 'WITH a AS (SELECT * FROM x WHERE x.y = $1 AND x.z = 1) SELECT * FROM a WHERE b = 5'
    expect(filter_columns(query)).to match_array [['x', 'y'], ['x', 'z'], [nil, 'b']]
  end

  it 'traverses into subselects' do
    query = 'SELECT * FROM (SELECT * FROM y WHERE y.z = 1) AS a'
    expect(filter_columns(query)).to match_array [['y', 'z']]
  end

  it 'traverses into INSERT ... SELECT' do
    query = 'INSERT INTO x SELECT * FROM y WHERE y.z = 1'
    expect(filter_columns(query)).to match_array [['y', 'z']]
  end

  it 'recognizes boolean tests' do
    expect(filter_columns('SELECT * FROM x WHERE x.y IS TRUE AND x.z IS NOT FALSE')).to eq [['x', 'y'], ['x', 'z']]
  end

  it 'finds COALESCE argument names' do
    expect(filter_columns('SELECT * FROM x WHERE x.y = COALESCE(z.a, z.b)')).to eq [['x', 'y'], ['z', 'a'], ['z', 'b']]
  end

  ['UNION', 'UNION ALL', 'EXCEPT', 'EXCEPT ALL', 'INTERSECT', 'INTERSECT ALL'].each do |combiner|
    it "finds unqualified names in #{combiner} query" do
      query = "SELECT * FROM x where y = $1 #{combiner} SELECT * FROM x where z = $2"
      expect(filter_columns(query)).to eq [[nil, 'y'], [nil, 'z']]
    end
  end
end
