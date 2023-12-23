/*--------------------------------------------------------------------
 * Symbols referenced in this file:
 * - _equalAlias
 * - _equalRangeVar
 * - _equalTableFunc
 * - _equalIntoClause
 * - _equalVar
 * - _equalParam
 * - _equalAggref
 * - _equalGroupingFunc
 * - _equalWindowFunc
 * - _equalSubscriptingRef
 * - _equalFuncExpr
 * - _equalNamedArgExpr
 * - _equalOpExpr
 * - _equalDistinctExpr
 * - _equalNullIfExpr
 * - _equalScalarArrayOpExpr
 * - _equalBoolExpr
 * - _equalSubLink
 * - _equalSubPlan
 * - _equalAlternativeSubPlan
 * - _equalFieldSelect
 * - _equalFieldStore
 * - _equalRelabelType
 * - _equalCoerceViaIO
 * - _equalArrayCoerceExpr
 * - _equalConvertRowtypeExpr
 * - _equalCollateExpr
 * - _equalCaseExpr
 * - _equalCaseWhen
 * - _equalCaseTestExpr
 * - _equalArrayExpr
 * - _equalRowExpr
 * - _equalRowCompareExpr
 * - _equalCoalesceExpr
 * - _equalMinMaxExpr
 * - _equalSQLValueFunction
 * - _equalXmlExpr
 * - _equalJsonFormat
 * - _equalJsonReturning
 * - _equalJsonValueExpr
 * - _equalJsonConstructorExpr
 * - _equalJsonIsPredicate
 * - _equalNullTest
 * - _equalBooleanTest
 * - _equalCoerceToDomain
 * - _equalCoerceToDomainValue
 * - _equalSetToDefault
 * - _equalCurrentOfExpr
 * - _equalNextValueExpr
 * - _equalInferenceElem
 * - _equalTargetEntry
 * - _equalRangeTblRef
 * - _equalJoinExpr
 * - _equalFromExpr
 * - _equalOnConflictExpr
 * - _equalQuery
 * - _equalTypeName
 * - _equalColumnRef
 * - _equalParamRef
 * - _equalA_Expr
 * - _equalTypeCast
 * - _equalCollateClause
 * - _equalRoleSpec
 * - _equalFuncCall
 * - _equalA_Star
 * - _equalA_Indices
 * - _equalA_Indirection
 * - _equalA_ArrayExpr
 * - _equalResTarget
 * - _equalMultiAssignRef
 * - _equalSortBy
 * - _equalWindowDef
 * - _equalRangeSubselect
 * - _equalRangeFunction
 * - _equalRangeTableFunc
 * - _equalRangeTableFuncCol
 * - _equalRangeTableSample
 * - _equalColumnDef
 * - _equalTableLikeClause
 * - _equalIndexElem
 * - _equalDefElem
 * - _equalLockingClause
 * - _equalXmlSerialize
 * - _equalPartitionElem
 * - _equalPartitionSpec
 * - _equalPartitionBoundSpec
 * - _equalPartitionRangeDatum
 * - _equalPartitionCmd
 * - _equalRangeTblEntry
 * - _equalRTEPermissionInfo
 * - _equalRangeTblFunction
 * - _equalTableSampleClause
 * - _equalWithCheckOption
 * - _equalSortGroupClause
 * - _equalGroupingSet
 * - _equalWindowClause
 * - _equalRowMarkClause
 * - _equalWithClause
 * - _equalInferClause
 * - _equalOnConflictClause
 * - _equalCTESearchClause
 * - _equalCTECycleClause
 * - _equalCommonTableExpr
 * - _equalMergeWhenClause
 * - _equalMergeAction
 * - _equalTriggerTransition
 * - _equalJsonOutput
 * - _equalJsonKeyValue
 * - _equalJsonObjectConstructor
 * - _equalJsonArrayConstructor
 * - _equalJsonArrayQueryConstructor
 * - _equalJsonAggConstructor
 * - _equalJsonObjectAgg
 * - _equalJsonArrayAgg
 * - _equalRawStmt
 * - _equalInsertStmt
 * - _equalDeleteStmt
 * - _equalUpdateStmt
 * - _equalMergeStmt
 * - _equalSelectStmt
 * - _equalSetOperationStmt
 * - _equalReturnStmt
 * - _equalPLAssignStmt
 * - _equalCreateSchemaStmt
 * - _equalAlterTableStmt
 * - _equalReplicaIdentityStmt
 * - _equalAlterTableCmd
 * - _equalAlterCollationStmt
 * - _equalAlterDomainStmt
 * - _equalGrantStmt
 * - _equalObjectWithArgs
 * - _equalAccessPriv
 * - _equalGrantRoleStmt
 * - _equalAlterDefaultPrivilegesStmt
 * - _equalCopyStmt
 * - _equalVariableSetStmt
 * - _equalVariableShowStmt
 * - _equalCreateStmt
 * - _equalConstraint
 * - _equalCreateTableSpaceStmt
 * - _equalDropTableSpaceStmt
 * - _equalAlterTableSpaceOptionsStmt
 * - _equalAlterTableMoveAllStmt
 * - _equalCreateExtensionStmt
 * - _equalAlterExtensionStmt
 * - _equalAlterExtensionContentsStmt
 * - _equalCreateFdwStmt
 * - _equalAlterFdwStmt
 * - _equalCreateForeignServerStmt
 * - _equalAlterForeignServerStmt
 * - _equalCreateForeignTableStmt
 * - _equalCreateUserMappingStmt
 * - _equalAlterUserMappingStmt
 * - _equalDropUserMappingStmt
 * - _equalImportForeignSchemaStmt
 * - _equalCreatePolicyStmt
 * - _equalAlterPolicyStmt
 * - _equalCreateAmStmt
 * - _equalCreateTrigStmt
 * - _equalCreateEventTrigStmt
 * - _equalAlterEventTrigStmt
 * - _equalCreatePLangStmt
 * - _equalCreateRoleStmt
 * - _equalAlterRoleStmt
 * - _equalAlterRoleSetStmt
 * - _equalDropRoleStmt
 * - _equalCreateSeqStmt
 * - _equalAlterSeqStmt
 * - _equalDefineStmt
 * - _equalCreateDomainStmt
 * - _equalCreateOpClassStmt
 * - _equalCreateOpClassItem
 * - _equalCreateOpFamilyStmt
 * - _equalAlterOpFamilyStmt
 * - _equalDropStmt
 * - _equalTruncateStmt
 * - _equalCommentStmt
 * - _equalSecLabelStmt
 * - _equalDeclareCursorStmt
 * - _equalClosePortalStmt
 * - _equalFetchStmt
 * - _equalIndexStmt
 * - _equalCreateStatsStmt
 * - _equalStatsElem
 * - _equalAlterStatsStmt
 * - _equalCreateFunctionStmt
 * - _equalFunctionParameter
 * - _equalAlterFunctionStmt
 * - _equalDoStmt
 * - _equalCallStmt
 * - _equalRenameStmt
 * - _equalAlterObjectDependsStmt
 * - _equalAlterObjectSchemaStmt
 * - _equalAlterOwnerStmt
 * - _equalAlterOperatorStmt
 * - _equalAlterTypeStmt
 * - _equalRuleStmt
 * - _equalNotifyStmt
 * - _equalListenStmt
 * - _equalUnlistenStmt
 * - _equalTransactionStmt
 * - _equalCompositeTypeStmt
 * - _equalCreateEnumStmt
 * - _equalCreateRangeStmt
 * - _equalAlterEnumStmt
 * - _equalViewStmt
 * - _equalLoadStmt
 * - _equalCreatedbStmt
 * - _equalAlterDatabaseStmt
 * - _equalAlterDatabaseRefreshCollStmt
 * - _equalAlterDatabaseSetStmt
 * - _equalDropdbStmt
 * - _equalAlterSystemStmt
 * - _equalClusterStmt
 * - _equalVacuumStmt
 * - _equalVacuumRelation
 * - _equalExplainStmt
 * - _equalCreateTableAsStmt
 * - _equalRefreshMatViewStmt
 * - _equalCheckPointStmt
 * - _equalDiscardStmt
 * - _equalLockStmt
 * - _equalConstraintsSetStmt
 * - _equalReindexStmt
 * - _equalCreateConversionStmt
 * - _equalCreateCastStmt
 * - _equalCreateTransformStmt
 * - _equalPrepareStmt
 * - _equalExecuteStmt
 * - _equalDeallocateStmt
 * - _equalDropOwnedStmt
 * - _equalReassignOwnedStmt
 * - _equalAlterTSDictionaryStmt
 * - _equalAlterTSConfigurationStmt
 * - _equalPublicationTable
 * - _equalPublicationObjSpec
 * - _equalCreatePublicationStmt
 * - _equalAlterPublicationStmt
 * - _equalCreateSubscriptionStmt
 * - _equalAlterSubscriptionStmt
 * - _equalDropSubscriptionStmt
 * - _equalPathKey
 * - _equalRestrictInfo
 * - _equalPlaceHolderVar
 * - _equalSpecialJoinInfo
 * - _equalAppendRelInfo
 * - _equalPlaceHolderInfo
 * - _equalInteger
 * - _equalFloat
 * - _equalBoolean
 * - _equalString
 * - _equalBitString
 *--------------------------------------------------------------------
 */

/*-------------------------------------------------------------------------
 *
 * equalfuncs.funcs.c
 *    Generated node infrastructure code
 *
 * Portions Copyright (c) 1996-2023, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * NOTES
 *  ******************************
 *  *** DO NOT EDIT THIS FILE! ***
 *  ******************************
 *
 *  It has been GENERATED by src/backend/nodes/gen_node_support.pl
 *
 *-------------------------------------------------------------------------
 */
#include "access/amapi.h"
#include "access/sdir.h"
#include "access/tableam.h"
#include "access/tsmapi.h"
#include "commands/event_trigger.h"
#include "commands/trigger.h"
#include "executor/tuptable.h"
#include "foreign/fdwapi.h"
#include "nodes/bitmapset.h"
#include "nodes/execnodes.h"
#include "nodes/extensible.h"
#include "nodes/lockoptions.h"
#include "nodes/miscnodes.h"
#include "nodes/nodes.h"
#include "nodes/parsenodes.h"
#include "nodes/pathnodes.h"
#include "nodes/plannodes.h"
#include "nodes/primnodes.h"
#include "nodes/replnodes.h"
#include "nodes/supportnodes.h"
#include "nodes/value.h"
#include "utils/rel.h"

static bool
_equalAlias(const Alias *a, const Alias *b)
{
	COMPARE_STRING_FIELD(aliasname);
	COMPARE_NODE_FIELD(colnames);

	return true;
}

static bool
_equalRangeVar(const RangeVar *a, const RangeVar *b)
{
	COMPARE_STRING_FIELD(catalogname);
	COMPARE_STRING_FIELD(schemaname);
	COMPARE_STRING_FIELD(relname);
	COMPARE_SCALAR_FIELD(inh);
	COMPARE_SCALAR_FIELD(relpersistence);
	COMPARE_NODE_FIELD(alias);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalTableFunc(const TableFunc *a, const TableFunc *b)
{
	COMPARE_NODE_FIELD(ns_uris);
	COMPARE_NODE_FIELD(ns_names);
	COMPARE_NODE_FIELD(docexpr);
	COMPARE_NODE_FIELD(rowexpr);
	COMPARE_NODE_FIELD(colnames);
	COMPARE_NODE_FIELD(coltypes);
	COMPARE_NODE_FIELD(coltypmods);
	COMPARE_NODE_FIELD(colcollations);
	COMPARE_NODE_FIELD(colexprs);
	COMPARE_NODE_FIELD(coldefexprs);
	COMPARE_BITMAPSET_FIELD(notnulls);
	COMPARE_SCALAR_FIELD(ordinalitycol);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalIntoClause(const IntoClause *a, const IntoClause *b)
{
	COMPARE_NODE_FIELD(rel);
	COMPARE_NODE_FIELD(colNames);
	COMPARE_STRING_FIELD(accessMethod);
	COMPARE_NODE_FIELD(options);
	COMPARE_SCALAR_FIELD(onCommit);
	COMPARE_STRING_FIELD(tableSpaceName);
	COMPARE_NODE_FIELD(viewQuery);
	COMPARE_SCALAR_FIELD(skipData);

	return true;
}

static bool
_equalVar(const Var *a, const Var *b)
{
	COMPARE_SCALAR_FIELD(varno);
	COMPARE_SCALAR_FIELD(varattno);
	COMPARE_SCALAR_FIELD(vartype);
	COMPARE_SCALAR_FIELD(vartypmod);
	COMPARE_SCALAR_FIELD(varcollid);
	COMPARE_BITMAPSET_FIELD(varnullingrels);
	COMPARE_SCALAR_FIELD(varlevelsup);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalParam(const Param *a, const Param *b)
{
	COMPARE_SCALAR_FIELD(paramkind);
	COMPARE_SCALAR_FIELD(paramid);
	COMPARE_SCALAR_FIELD(paramtype);
	COMPARE_SCALAR_FIELD(paramtypmod);
	COMPARE_SCALAR_FIELD(paramcollid);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalAggref(const Aggref *a, const Aggref *b)
{
	COMPARE_SCALAR_FIELD(aggfnoid);
	COMPARE_SCALAR_FIELD(aggtype);
	COMPARE_SCALAR_FIELD(aggcollid);
	COMPARE_SCALAR_FIELD(inputcollid);
	COMPARE_NODE_FIELD(aggargtypes);
	COMPARE_NODE_FIELD(aggdirectargs);
	COMPARE_NODE_FIELD(args);
	COMPARE_NODE_FIELD(aggorder);
	COMPARE_NODE_FIELD(aggdistinct);
	COMPARE_NODE_FIELD(aggfilter);
	COMPARE_SCALAR_FIELD(aggstar);
	COMPARE_SCALAR_FIELD(aggvariadic);
	COMPARE_SCALAR_FIELD(aggkind);
	COMPARE_SCALAR_FIELD(agglevelsup);
	COMPARE_SCALAR_FIELD(aggsplit);
	COMPARE_SCALAR_FIELD(aggno);
	COMPARE_SCALAR_FIELD(aggtransno);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalGroupingFunc(const GroupingFunc *a, const GroupingFunc *b)
{
	COMPARE_NODE_FIELD(args);
	COMPARE_SCALAR_FIELD(agglevelsup);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalWindowFunc(const WindowFunc *a, const WindowFunc *b)
{
	COMPARE_SCALAR_FIELD(winfnoid);
	COMPARE_SCALAR_FIELD(wintype);
	COMPARE_SCALAR_FIELD(wincollid);
	COMPARE_SCALAR_FIELD(inputcollid);
	COMPARE_NODE_FIELD(args);
	COMPARE_NODE_FIELD(aggfilter);
	COMPARE_SCALAR_FIELD(winref);
	COMPARE_SCALAR_FIELD(winstar);
	COMPARE_SCALAR_FIELD(winagg);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalSubscriptingRef(const SubscriptingRef *a, const SubscriptingRef *b)
{
	COMPARE_SCALAR_FIELD(refcontainertype);
	COMPARE_SCALAR_FIELD(refelemtype);
	COMPARE_SCALAR_FIELD(refrestype);
	COMPARE_SCALAR_FIELD(reftypmod);
	COMPARE_SCALAR_FIELD(refcollid);
	COMPARE_NODE_FIELD(refupperindexpr);
	COMPARE_NODE_FIELD(reflowerindexpr);
	COMPARE_NODE_FIELD(refexpr);
	COMPARE_NODE_FIELD(refassgnexpr);

	return true;
}

static bool
_equalFuncExpr(const FuncExpr *a, const FuncExpr *b)
{
	COMPARE_SCALAR_FIELD(funcid);
	COMPARE_SCALAR_FIELD(funcresulttype);
	COMPARE_SCALAR_FIELD(funcretset);
	COMPARE_SCALAR_FIELD(funcvariadic);
	COMPARE_SCALAR_FIELD(funccollid);
	COMPARE_SCALAR_FIELD(inputcollid);
	COMPARE_NODE_FIELD(args);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalNamedArgExpr(const NamedArgExpr *a, const NamedArgExpr *b)
{
	COMPARE_NODE_FIELD(arg);
	COMPARE_STRING_FIELD(name);
	COMPARE_SCALAR_FIELD(argnumber);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalOpExpr(const OpExpr *a, const OpExpr *b)
{
	COMPARE_SCALAR_FIELD(opno);
	if (a->opfuncid != b->opfuncid && a->opfuncid != 0 && b->opfuncid != 0)
		return false;
	COMPARE_SCALAR_FIELD(opresulttype);
	COMPARE_SCALAR_FIELD(opretset);
	COMPARE_SCALAR_FIELD(opcollid);
	COMPARE_SCALAR_FIELD(inputcollid);
	COMPARE_NODE_FIELD(args);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalDistinctExpr(const DistinctExpr *a, const DistinctExpr *b)
{
	COMPARE_SCALAR_FIELD(opno);
	if (a->opfuncid != b->opfuncid && a->opfuncid != 0 && b->opfuncid != 0)
		return false;
	COMPARE_SCALAR_FIELD(opresulttype);
	COMPARE_SCALAR_FIELD(opretset);
	COMPARE_SCALAR_FIELD(opcollid);
	COMPARE_SCALAR_FIELD(inputcollid);
	COMPARE_NODE_FIELD(args);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalNullIfExpr(const NullIfExpr *a, const NullIfExpr *b)
{
	COMPARE_SCALAR_FIELD(opno);
	if (a->opfuncid != b->opfuncid && a->opfuncid != 0 && b->opfuncid != 0)
		return false;
	COMPARE_SCALAR_FIELD(opresulttype);
	COMPARE_SCALAR_FIELD(opretset);
	COMPARE_SCALAR_FIELD(opcollid);
	COMPARE_SCALAR_FIELD(inputcollid);
	COMPARE_NODE_FIELD(args);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalScalarArrayOpExpr(const ScalarArrayOpExpr *a, const ScalarArrayOpExpr *b)
{
	COMPARE_SCALAR_FIELD(opno);
	if (a->opfuncid != b->opfuncid && a->opfuncid != 0 && b->opfuncid != 0)
		return false;
	if (a->hashfuncid != b->hashfuncid && a->hashfuncid != 0 && b->hashfuncid != 0)
		return false;
	if (a->negfuncid != b->negfuncid && a->negfuncid != 0 && b->negfuncid != 0)
		return false;
	COMPARE_SCALAR_FIELD(useOr);
	COMPARE_SCALAR_FIELD(inputcollid);
	COMPARE_NODE_FIELD(args);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalBoolExpr(const BoolExpr *a, const BoolExpr *b)
{
	COMPARE_SCALAR_FIELD(boolop);
	COMPARE_NODE_FIELD(args);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalSubLink(const SubLink *a, const SubLink *b)
{
	COMPARE_SCALAR_FIELD(subLinkType);
	COMPARE_SCALAR_FIELD(subLinkId);
	COMPARE_NODE_FIELD(testexpr);
	COMPARE_NODE_FIELD(operName);
	COMPARE_NODE_FIELD(subselect);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalSubPlan(const SubPlan *a, const SubPlan *b)
{
	COMPARE_SCALAR_FIELD(subLinkType);
	COMPARE_NODE_FIELD(testexpr);
	COMPARE_NODE_FIELD(paramIds);
	COMPARE_SCALAR_FIELD(plan_id);
	COMPARE_STRING_FIELD(plan_name);
	COMPARE_SCALAR_FIELD(firstColType);
	COMPARE_SCALAR_FIELD(firstColTypmod);
	COMPARE_SCALAR_FIELD(firstColCollation);
	COMPARE_SCALAR_FIELD(useHashTable);
	COMPARE_SCALAR_FIELD(unknownEqFalse);
	COMPARE_SCALAR_FIELD(parallel_safe);
	COMPARE_NODE_FIELD(setParam);
	COMPARE_NODE_FIELD(parParam);
	COMPARE_NODE_FIELD(args);
	COMPARE_SCALAR_FIELD(startup_cost);
	COMPARE_SCALAR_FIELD(per_call_cost);

	return true;
}

static bool
_equalAlternativeSubPlan(const AlternativeSubPlan *a, const AlternativeSubPlan *b)
{
	COMPARE_NODE_FIELD(subplans);

	return true;
}

static bool
_equalFieldSelect(const FieldSelect *a, const FieldSelect *b)
{
	COMPARE_NODE_FIELD(arg);
	COMPARE_SCALAR_FIELD(fieldnum);
	COMPARE_SCALAR_FIELD(resulttype);
	COMPARE_SCALAR_FIELD(resulttypmod);
	COMPARE_SCALAR_FIELD(resultcollid);

	return true;
}

static bool
_equalFieldStore(const FieldStore *a, const FieldStore *b)
{
	COMPARE_NODE_FIELD(arg);
	COMPARE_NODE_FIELD(newvals);
	COMPARE_NODE_FIELD(fieldnums);
	COMPARE_SCALAR_FIELD(resulttype);

	return true;
}

static bool
_equalRelabelType(const RelabelType *a, const RelabelType *b)
{
	COMPARE_NODE_FIELD(arg);
	COMPARE_SCALAR_FIELD(resulttype);
	COMPARE_SCALAR_FIELD(resulttypmod);
	COMPARE_SCALAR_FIELD(resultcollid);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalCoerceViaIO(const CoerceViaIO *a, const CoerceViaIO *b)
{
	COMPARE_NODE_FIELD(arg);
	COMPARE_SCALAR_FIELD(resulttype);
	COMPARE_SCALAR_FIELD(resultcollid);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalArrayCoerceExpr(const ArrayCoerceExpr *a, const ArrayCoerceExpr *b)
{
	COMPARE_NODE_FIELD(arg);
	COMPARE_NODE_FIELD(elemexpr);
	COMPARE_SCALAR_FIELD(resulttype);
	COMPARE_SCALAR_FIELD(resulttypmod);
	COMPARE_SCALAR_FIELD(resultcollid);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalConvertRowtypeExpr(const ConvertRowtypeExpr *a, const ConvertRowtypeExpr *b)
{
	COMPARE_NODE_FIELD(arg);
	COMPARE_SCALAR_FIELD(resulttype);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalCollateExpr(const CollateExpr *a, const CollateExpr *b)
{
	COMPARE_NODE_FIELD(arg);
	COMPARE_SCALAR_FIELD(collOid);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalCaseExpr(const CaseExpr *a, const CaseExpr *b)
{
	COMPARE_SCALAR_FIELD(casetype);
	COMPARE_SCALAR_FIELD(casecollid);
	COMPARE_NODE_FIELD(arg);
	COMPARE_NODE_FIELD(args);
	COMPARE_NODE_FIELD(defresult);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalCaseWhen(const CaseWhen *a, const CaseWhen *b)
{
	COMPARE_NODE_FIELD(expr);
	COMPARE_NODE_FIELD(result);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalCaseTestExpr(const CaseTestExpr *a, const CaseTestExpr *b)
{
	COMPARE_SCALAR_FIELD(typeId);
	COMPARE_SCALAR_FIELD(typeMod);
	COMPARE_SCALAR_FIELD(collation);

	return true;
}

static bool
_equalArrayExpr(const ArrayExpr *a, const ArrayExpr *b)
{
	COMPARE_SCALAR_FIELD(array_typeid);
	COMPARE_SCALAR_FIELD(array_collid);
	COMPARE_SCALAR_FIELD(element_typeid);
	COMPARE_NODE_FIELD(elements);
	COMPARE_SCALAR_FIELD(multidims);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalRowExpr(const RowExpr *a, const RowExpr *b)
{
	COMPARE_NODE_FIELD(args);
	COMPARE_SCALAR_FIELD(row_typeid);
	COMPARE_NODE_FIELD(colnames);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalRowCompareExpr(const RowCompareExpr *a, const RowCompareExpr *b)
{
	COMPARE_SCALAR_FIELD(rctype);
	COMPARE_NODE_FIELD(opnos);
	COMPARE_NODE_FIELD(opfamilies);
	COMPARE_NODE_FIELD(inputcollids);
	COMPARE_NODE_FIELD(largs);
	COMPARE_NODE_FIELD(rargs);

	return true;
}

static bool
_equalCoalesceExpr(const CoalesceExpr *a, const CoalesceExpr *b)
{
	COMPARE_SCALAR_FIELD(coalescetype);
	COMPARE_SCALAR_FIELD(coalescecollid);
	COMPARE_NODE_FIELD(args);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalMinMaxExpr(const MinMaxExpr *a, const MinMaxExpr *b)
{
	COMPARE_SCALAR_FIELD(minmaxtype);
	COMPARE_SCALAR_FIELD(minmaxcollid);
	COMPARE_SCALAR_FIELD(inputcollid);
	COMPARE_SCALAR_FIELD(op);
	COMPARE_NODE_FIELD(args);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalSQLValueFunction(const SQLValueFunction *a, const SQLValueFunction *b)
{
	COMPARE_SCALAR_FIELD(op);
	COMPARE_SCALAR_FIELD(type);
	COMPARE_SCALAR_FIELD(typmod);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalXmlExpr(const XmlExpr *a, const XmlExpr *b)
{
	COMPARE_SCALAR_FIELD(op);
	COMPARE_STRING_FIELD(name);
	COMPARE_NODE_FIELD(named_args);
	COMPARE_NODE_FIELD(arg_names);
	COMPARE_NODE_FIELD(args);
	COMPARE_SCALAR_FIELD(xmloption);
	COMPARE_SCALAR_FIELD(indent);
	COMPARE_SCALAR_FIELD(type);
	COMPARE_SCALAR_FIELD(typmod);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalJsonFormat(const JsonFormat *a, const JsonFormat *b)
{
	COMPARE_SCALAR_FIELD(format_type);
	COMPARE_SCALAR_FIELD(encoding);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalJsonReturning(const JsonReturning *a, const JsonReturning *b)
{
	COMPARE_NODE_FIELD(format);
	COMPARE_SCALAR_FIELD(typid);
	COMPARE_SCALAR_FIELD(typmod);

	return true;
}

static bool
_equalJsonValueExpr(const JsonValueExpr *a, const JsonValueExpr *b)
{
	COMPARE_NODE_FIELD(raw_expr);
	COMPARE_NODE_FIELD(formatted_expr);
	COMPARE_NODE_FIELD(format);

	return true;
}

static bool
_equalJsonConstructorExpr(const JsonConstructorExpr *a, const JsonConstructorExpr *b)
{
	COMPARE_SCALAR_FIELD(type);
	COMPARE_NODE_FIELD(args);
	COMPARE_NODE_FIELD(func);
	COMPARE_NODE_FIELD(coercion);
	COMPARE_NODE_FIELD(returning);
	COMPARE_SCALAR_FIELD(absent_on_null);
	COMPARE_SCALAR_FIELD(unique);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalJsonIsPredicate(const JsonIsPredicate *a, const JsonIsPredicate *b)
{
	COMPARE_NODE_FIELD(expr);
	COMPARE_NODE_FIELD(format);
	COMPARE_SCALAR_FIELD(item_type);
	COMPARE_SCALAR_FIELD(unique_keys);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalNullTest(const NullTest *a, const NullTest *b)
{
	COMPARE_NODE_FIELD(arg);
	COMPARE_SCALAR_FIELD(nulltesttype);
	COMPARE_SCALAR_FIELD(argisrow);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalBooleanTest(const BooleanTest *a, const BooleanTest *b)
{
	COMPARE_NODE_FIELD(arg);
	COMPARE_SCALAR_FIELD(booltesttype);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalCoerceToDomain(const CoerceToDomain *a, const CoerceToDomain *b)
{
	COMPARE_NODE_FIELD(arg);
	COMPARE_SCALAR_FIELD(resulttype);
	COMPARE_SCALAR_FIELD(resulttypmod);
	COMPARE_SCALAR_FIELD(resultcollid);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalCoerceToDomainValue(const CoerceToDomainValue *a, const CoerceToDomainValue *b)
{
	COMPARE_SCALAR_FIELD(typeId);
	COMPARE_SCALAR_FIELD(typeMod);
	COMPARE_SCALAR_FIELD(collation);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalSetToDefault(const SetToDefault *a, const SetToDefault *b)
{
	COMPARE_SCALAR_FIELD(typeId);
	COMPARE_SCALAR_FIELD(typeMod);
	COMPARE_SCALAR_FIELD(collation);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalCurrentOfExpr(const CurrentOfExpr *a, const CurrentOfExpr *b)
{
	COMPARE_SCALAR_FIELD(cvarno);
	COMPARE_STRING_FIELD(cursor_name);
	COMPARE_SCALAR_FIELD(cursor_param);

	return true;
}

static bool
_equalNextValueExpr(const NextValueExpr *a, const NextValueExpr *b)
{
	COMPARE_SCALAR_FIELD(seqid);
	COMPARE_SCALAR_FIELD(typeId);

	return true;
}

static bool
_equalInferenceElem(const InferenceElem *a, const InferenceElem *b)
{
	COMPARE_NODE_FIELD(expr);
	COMPARE_SCALAR_FIELD(infercollid);
	COMPARE_SCALAR_FIELD(inferopclass);

	return true;
}

static bool
_equalTargetEntry(const TargetEntry *a, const TargetEntry *b)
{
	COMPARE_NODE_FIELD(expr);
	COMPARE_SCALAR_FIELD(resno);
	COMPARE_STRING_FIELD(resname);
	COMPARE_SCALAR_FIELD(ressortgroupref);
	COMPARE_SCALAR_FIELD(resorigtbl);
	COMPARE_SCALAR_FIELD(resorigcol);
	COMPARE_SCALAR_FIELD(resjunk);

	return true;
}

static bool
_equalRangeTblRef(const RangeTblRef *a, const RangeTblRef *b)
{
	COMPARE_SCALAR_FIELD(rtindex);

	return true;
}

static bool
_equalJoinExpr(const JoinExpr *a, const JoinExpr *b)
{
	COMPARE_SCALAR_FIELD(jointype);
	COMPARE_SCALAR_FIELD(isNatural);
	COMPARE_NODE_FIELD(larg);
	COMPARE_NODE_FIELD(rarg);
	COMPARE_NODE_FIELD(usingClause);
	COMPARE_NODE_FIELD(join_using_alias);
	COMPARE_NODE_FIELD(quals);
	COMPARE_NODE_FIELD(alias);
	COMPARE_SCALAR_FIELD(rtindex);

	return true;
}

static bool
_equalFromExpr(const FromExpr *a, const FromExpr *b)
{
	COMPARE_NODE_FIELD(fromlist);
	COMPARE_NODE_FIELD(quals);

	return true;
}

static bool
_equalOnConflictExpr(const OnConflictExpr *a, const OnConflictExpr *b)
{
	COMPARE_SCALAR_FIELD(action);
	COMPARE_NODE_FIELD(arbiterElems);
	COMPARE_NODE_FIELD(arbiterWhere);
	COMPARE_SCALAR_FIELD(constraint);
	COMPARE_NODE_FIELD(onConflictSet);
	COMPARE_NODE_FIELD(onConflictWhere);
	COMPARE_SCALAR_FIELD(exclRelIndex);
	COMPARE_NODE_FIELD(exclRelTlist);

	return true;
}

static bool
_equalQuery(const Query *a, const Query *b)
{
	COMPARE_SCALAR_FIELD(commandType);
	COMPARE_SCALAR_FIELD(querySource);
	COMPARE_SCALAR_FIELD(canSetTag);
	COMPARE_NODE_FIELD(utilityStmt);
	COMPARE_SCALAR_FIELD(resultRelation);
	COMPARE_SCALAR_FIELD(hasAggs);
	COMPARE_SCALAR_FIELD(hasWindowFuncs);
	COMPARE_SCALAR_FIELD(hasTargetSRFs);
	COMPARE_SCALAR_FIELD(hasSubLinks);
	COMPARE_SCALAR_FIELD(hasDistinctOn);
	COMPARE_SCALAR_FIELD(hasRecursive);
	COMPARE_SCALAR_FIELD(hasModifyingCTE);
	COMPARE_SCALAR_FIELD(hasForUpdate);
	COMPARE_SCALAR_FIELD(hasRowSecurity);
	COMPARE_SCALAR_FIELD(isReturn);
	COMPARE_NODE_FIELD(cteList);
	COMPARE_NODE_FIELD(rtable);
	COMPARE_NODE_FIELD(rteperminfos);
	COMPARE_NODE_FIELD(jointree);
	COMPARE_NODE_FIELD(mergeActionList);
	COMPARE_SCALAR_FIELD(mergeUseOuterJoin);
	COMPARE_NODE_FIELD(targetList);
	COMPARE_SCALAR_FIELD(override);
	COMPARE_NODE_FIELD(onConflict);
	COMPARE_NODE_FIELD(returningList);
	COMPARE_NODE_FIELD(groupClause);
	COMPARE_SCALAR_FIELD(groupDistinct);
	COMPARE_NODE_FIELD(groupingSets);
	COMPARE_NODE_FIELD(havingQual);
	COMPARE_NODE_FIELD(windowClause);
	COMPARE_NODE_FIELD(distinctClause);
	COMPARE_NODE_FIELD(sortClause);
	COMPARE_NODE_FIELD(limitOffset);
	COMPARE_NODE_FIELD(limitCount);
	COMPARE_SCALAR_FIELD(limitOption);
	COMPARE_NODE_FIELD(rowMarks);
	COMPARE_NODE_FIELD(setOperations);
	COMPARE_NODE_FIELD(constraintDeps);
	COMPARE_NODE_FIELD(withCheckOptions);
	COMPARE_LOCATION_FIELD(stmt_location);
	COMPARE_SCALAR_FIELD(stmt_len);

	return true;
}

static bool
_equalTypeName(const TypeName *a, const TypeName *b)
{
	COMPARE_NODE_FIELD(names);
	COMPARE_SCALAR_FIELD(typeOid);
	COMPARE_SCALAR_FIELD(setof);
	COMPARE_SCALAR_FIELD(pct_type);
	COMPARE_NODE_FIELD(typmods);
	COMPARE_SCALAR_FIELD(typemod);
	COMPARE_NODE_FIELD(arrayBounds);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalColumnRef(const ColumnRef *a, const ColumnRef *b)
{
	COMPARE_NODE_FIELD(fields);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalParamRef(const ParamRef *a, const ParamRef *b)
{
	COMPARE_SCALAR_FIELD(number);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalA_Expr(const A_Expr *a, const A_Expr *b)
{
	COMPARE_SCALAR_FIELD(kind);
	COMPARE_NODE_FIELD(name);
	COMPARE_NODE_FIELD(lexpr);
	COMPARE_NODE_FIELD(rexpr);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalTypeCast(const TypeCast *a, const TypeCast *b)
{
	COMPARE_NODE_FIELD(arg);
	COMPARE_NODE_FIELD(typeName);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalCollateClause(const CollateClause *a, const CollateClause *b)
{
	COMPARE_NODE_FIELD(arg);
	COMPARE_NODE_FIELD(collname);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalRoleSpec(const RoleSpec *a, const RoleSpec *b)
{
	COMPARE_SCALAR_FIELD(roletype);
	COMPARE_STRING_FIELD(rolename);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalFuncCall(const FuncCall *a, const FuncCall *b)
{
	COMPARE_NODE_FIELD(funcname);
	COMPARE_NODE_FIELD(args);
	COMPARE_NODE_FIELD(agg_order);
	COMPARE_NODE_FIELD(agg_filter);
	COMPARE_NODE_FIELD(over);
	COMPARE_SCALAR_FIELD(agg_within_group);
	COMPARE_SCALAR_FIELD(agg_star);
	COMPARE_SCALAR_FIELD(agg_distinct);
	COMPARE_SCALAR_FIELD(func_variadic);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalA_Star(const A_Star *a, const A_Star *b)
{

	return true;
}

static bool
_equalA_Indices(const A_Indices *a, const A_Indices *b)
{
	COMPARE_SCALAR_FIELD(is_slice);
	COMPARE_NODE_FIELD(lidx);
	COMPARE_NODE_FIELD(uidx);

	return true;
}

static bool
_equalA_Indirection(const A_Indirection *a, const A_Indirection *b)
{
	COMPARE_NODE_FIELD(arg);
	COMPARE_NODE_FIELD(indirection);

	return true;
}

static bool
_equalA_ArrayExpr(const A_ArrayExpr *a, const A_ArrayExpr *b)
{
	COMPARE_NODE_FIELD(elements);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalResTarget(const ResTarget *a, const ResTarget *b)
{
	COMPARE_STRING_FIELD(name);
	COMPARE_NODE_FIELD(indirection);
	COMPARE_NODE_FIELD(val);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalMultiAssignRef(const MultiAssignRef *a, const MultiAssignRef *b)
{
	COMPARE_NODE_FIELD(source);
	COMPARE_SCALAR_FIELD(colno);
	COMPARE_SCALAR_FIELD(ncolumns);

	return true;
}

static bool
_equalSortBy(const SortBy *a, const SortBy *b)
{
	COMPARE_NODE_FIELD(node);
	COMPARE_SCALAR_FIELD(sortby_dir);
	COMPARE_SCALAR_FIELD(sortby_nulls);
	COMPARE_NODE_FIELD(useOp);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalWindowDef(const WindowDef *a, const WindowDef *b)
{
	COMPARE_STRING_FIELD(name);
	COMPARE_STRING_FIELD(refname);
	COMPARE_NODE_FIELD(partitionClause);
	COMPARE_NODE_FIELD(orderClause);
	COMPARE_SCALAR_FIELD(frameOptions);
	COMPARE_NODE_FIELD(startOffset);
	COMPARE_NODE_FIELD(endOffset);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalRangeSubselect(const RangeSubselect *a, const RangeSubselect *b)
{
	COMPARE_SCALAR_FIELD(lateral);
	COMPARE_NODE_FIELD(subquery);
	COMPARE_NODE_FIELD(alias);

	return true;
}

static bool
_equalRangeFunction(const RangeFunction *a, const RangeFunction *b)
{
	COMPARE_SCALAR_FIELD(lateral);
	COMPARE_SCALAR_FIELD(ordinality);
	COMPARE_SCALAR_FIELD(is_rowsfrom);
	COMPARE_NODE_FIELD(functions);
	COMPARE_NODE_FIELD(alias);
	COMPARE_NODE_FIELD(coldeflist);

	return true;
}

static bool
_equalRangeTableFunc(const RangeTableFunc *a, const RangeTableFunc *b)
{
	COMPARE_SCALAR_FIELD(lateral);
	COMPARE_NODE_FIELD(docexpr);
	COMPARE_NODE_FIELD(rowexpr);
	COMPARE_NODE_FIELD(namespaces);
	COMPARE_NODE_FIELD(columns);
	COMPARE_NODE_FIELD(alias);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalRangeTableFuncCol(const RangeTableFuncCol *a, const RangeTableFuncCol *b)
{
	COMPARE_STRING_FIELD(colname);
	COMPARE_NODE_FIELD(typeName);
	COMPARE_SCALAR_FIELD(for_ordinality);
	COMPARE_SCALAR_FIELD(is_not_null);
	COMPARE_NODE_FIELD(colexpr);
	COMPARE_NODE_FIELD(coldefexpr);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalRangeTableSample(const RangeTableSample *a, const RangeTableSample *b)
{
	COMPARE_NODE_FIELD(relation);
	COMPARE_NODE_FIELD(method);
	COMPARE_NODE_FIELD(args);
	COMPARE_NODE_FIELD(repeatable);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalColumnDef(const ColumnDef *a, const ColumnDef *b)
{
	COMPARE_STRING_FIELD(colname);
	COMPARE_NODE_FIELD(typeName);
	COMPARE_STRING_FIELD(compression);
	COMPARE_SCALAR_FIELD(inhcount);
	COMPARE_SCALAR_FIELD(is_local);
	COMPARE_SCALAR_FIELD(is_not_null);
	COMPARE_SCALAR_FIELD(is_from_type);
	COMPARE_SCALAR_FIELD(storage);
	COMPARE_STRING_FIELD(storage_name);
	COMPARE_NODE_FIELD(raw_default);
	COMPARE_NODE_FIELD(cooked_default);
	COMPARE_SCALAR_FIELD(identity);
	COMPARE_NODE_FIELD(identitySequence);
	COMPARE_SCALAR_FIELD(generated);
	COMPARE_NODE_FIELD(collClause);
	COMPARE_SCALAR_FIELD(collOid);
	COMPARE_NODE_FIELD(constraints);
	COMPARE_NODE_FIELD(fdwoptions);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalTableLikeClause(const TableLikeClause *a, const TableLikeClause *b)
{
	COMPARE_NODE_FIELD(relation);
	COMPARE_SCALAR_FIELD(options);
	COMPARE_SCALAR_FIELD(relationOid);

	return true;
}

static bool
_equalIndexElem(const IndexElem *a, const IndexElem *b)
{
	COMPARE_STRING_FIELD(name);
	COMPARE_NODE_FIELD(expr);
	COMPARE_STRING_FIELD(indexcolname);
	COMPARE_NODE_FIELD(collation);
	COMPARE_NODE_FIELD(opclass);
	COMPARE_NODE_FIELD(opclassopts);
	COMPARE_SCALAR_FIELD(ordering);
	COMPARE_SCALAR_FIELD(nulls_ordering);

	return true;
}

static bool
_equalDefElem(const DefElem *a, const DefElem *b)
{
	COMPARE_STRING_FIELD(defnamespace);
	COMPARE_STRING_FIELD(defname);
	COMPARE_NODE_FIELD(arg);
	COMPARE_SCALAR_FIELD(defaction);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalLockingClause(const LockingClause *a, const LockingClause *b)
{
	COMPARE_NODE_FIELD(lockedRels);
	COMPARE_SCALAR_FIELD(strength);
	COMPARE_SCALAR_FIELD(waitPolicy);

	return true;
}

static bool
_equalXmlSerialize(const XmlSerialize *a, const XmlSerialize *b)
{
	COMPARE_SCALAR_FIELD(xmloption);
	COMPARE_NODE_FIELD(expr);
	COMPARE_NODE_FIELD(typeName);
	COMPARE_SCALAR_FIELD(indent);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalPartitionElem(const PartitionElem *a, const PartitionElem *b)
{
	COMPARE_STRING_FIELD(name);
	COMPARE_NODE_FIELD(expr);
	COMPARE_NODE_FIELD(collation);
	COMPARE_NODE_FIELD(opclass);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalPartitionSpec(const PartitionSpec *a, const PartitionSpec *b)
{
	COMPARE_SCALAR_FIELD(strategy);
	COMPARE_NODE_FIELD(partParams);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalPartitionBoundSpec(const PartitionBoundSpec *a, const PartitionBoundSpec *b)
{
	COMPARE_SCALAR_FIELD(strategy);
	COMPARE_SCALAR_FIELD(is_default);
	COMPARE_SCALAR_FIELD(modulus);
	COMPARE_SCALAR_FIELD(remainder);
	COMPARE_NODE_FIELD(listdatums);
	COMPARE_NODE_FIELD(lowerdatums);
	COMPARE_NODE_FIELD(upperdatums);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalPartitionRangeDatum(const PartitionRangeDatum *a, const PartitionRangeDatum *b)
{
	COMPARE_SCALAR_FIELD(kind);
	COMPARE_NODE_FIELD(value);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalPartitionCmd(const PartitionCmd *a, const PartitionCmd *b)
{
	COMPARE_NODE_FIELD(name);
	COMPARE_NODE_FIELD(bound);
	COMPARE_SCALAR_FIELD(concurrent);

	return true;
}

static bool
_equalRangeTblEntry(const RangeTblEntry *a, const RangeTblEntry *b)
{
	COMPARE_SCALAR_FIELD(rtekind);
	COMPARE_SCALAR_FIELD(relid);
	COMPARE_SCALAR_FIELD(relkind);
	COMPARE_SCALAR_FIELD(rellockmode);
	COMPARE_NODE_FIELD(tablesample);
	COMPARE_SCALAR_FIELD(perminfoindex);
	COMPARE_NODE_FIELD(subquery);
	COMPARE_SCALAR_FIELD(security_barrier);
	COMPARE_SCALAR_FIELD(jointype);
	COMPARE_SCALAR_FIELD(joinmergedcols);
	COMPARE_NODE_FIELD(joinaliasvars);
	COMPARE_NODE_FIELD(joinleftcols);
	COMPARE_NODE_FIELD(joinrightcols);
	COMPARE_NODE_FIELD(join_using_alias);
	COMPARE_NODE_FIELD(functions);
	COMPARE_SCALAR_FIELD(funcordinality);
	COMPARE_NODE_FIELD(tablefunc);
	COMPARE_NODE_FIELD(values_lists);
	COMPARE_STRING_FIELD(ctename);
	COMPARE_SCALAR_FIELD(ctelevelsup);
	COMPARE_SCALAR_FIELD(self_reference);
	COMPARE_NODE_FIELD(coltypes);
	COMPARE_NODE_FIELD(coltypmods);
	COMPARE_NODE_FIELD(colcollations);
	COMPARE_STRING_FIELD(enrname);
	COMPARE_SCALAR_FIELD(enrtuples);
	COMPARE_NODE_FIELD(alias);
	COMPARE_NODE_FIELD(eref);
	COMPARE_SCALAR_FIELD(lateral);
	COMPARE_SCALAR_FIELD(inh);
	COMPARE_SCALAR_FIELD(inFromCl);
	COMPARE_NODE_FIELD(securityQuals);

	return true;
}

static bool
_equalRTEPermissionInfo(const RTEPermissionInfo *a, const RTEPermissionInfo *b)
{
	COMPARE_SCALAR_FIELD(relid);
	COMPARE_SCALAR_FIELD(inh);
	COMPARE_SCALAR_FIELD(requiredPerms);
	COMPARE_SCALAR_FIELD(checkAsUser);
	COMPARE_BITMAPSET_FIELD(selectedCols);
	COMPARE_BITMAPSET_FIELD(insertedCols);
	COMPARE_BITMAPSET_FIELD(updatedCols);

	return true;
}

static bool
_equalRangeTblFunction(const RangeTblFunction *a, const RangeTblFunction *b)
{
	COMPARE_NODE_FIELD(funcexpr);
	COMPARE_SCALAR_FIELD(funccolcount);
	COMPARE_NODE_FIELD(funccolnames);
	COMPARE_NODE_FIELD(funccoltypes);
	COMPARE_NODE_FIELD(funccoltypmods);
	COMPARE_NODE_FIELD(funccolcollations);
	COMPARE_BITMAPSET_FIELD(funcparams);

	return true;
}

static bool
_equalTableSampleClause(const TableSampleClause *a, const TableSampleClause *b)
{
	COMPARE_SCALAR_FIELD(tsmhandler);
	COMPARE_NODE_FIELD(args);
	COMPARE_NODE_FIELD(repeatable);

	return true;
}

static bool
_equalWithCheckOption(const WithCheckOption *a, const WithCheckOption *b)
{
	COMPARE_SCALAR_FIELD(kind);
	COMPARE_STRING_FIELD(relname);
	COMPARE_STRING_FIELD(polname);
	COMPARE_NODE_FIELD(qual);
	COMPARE_SCALAR_FIELD(cascaded);

	return true;
}

static bool
_equalSortGroupClause(const SortGroupClause *a, const SortGroupClause *b)
{
	COMPARE_SCALAR_FIELD(tleSortGroupRef);
	COMPARE_SCALAR_FIELD(eqop);
	COMPARE_SCALAR_FIELD(sortop);
	COMPARE_SCALAR_FIELD(nulls_first);
	COMPARE_SCALAR_FIELD(hashable);

	return true;
}

static bool
_equalGroupingSet(const GroupingSet *a, const GroupingSet *b)
{
	COMPARE_SCALAR_FIELD(kind);
	COMPARE_NODE_FIELD(content);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalWindowClause(const WindowClause *a, const WindowClause *b)
{
	COMPARE_STRING_FIELD(name);
	COMPARE_STRING_FIELD(refname);
	COMPARE_NODE_FIELD(partitionClause);
	COMPARE_NODE_FIELD(orderClause);
	COMPARE_SCALAR_FIELD(frameOptions);
	COMPARE_NODE_FIELD(startOffset);
	COMPARE_NODE_FIELD(endOffset);
	COMPARE_NODE_FIELD(runCondition);
	COMPARE_SCALAR_FIELD(startInRangeFunc);
	COMPARE_SCALAR_FIELD(endInRangeFunc);
	COMPARE_SCALAR_FIELD(inRangeColl);
	COMPARE_SCALAR_FIELD(inRangeAsc);
	COMPARE_SCALAR_FIELD(inRangeNullsFirst);
	COMPARE_SCALAR_FIELD(winref);
	COMPARE_SCALAR_FIELD(copiedOrder);

	return true;
}

static bool
_equalRowMarkClause(const RowMarkClause *a, const RowMarkClause *b)
{
	COMPARE_SCALAR_FIELD(rti);
	COMPARE_SCALAR_FIELD(strength);
	COMPARE_SCALAR_FIELD(waitPolicy);
	COMPARE_SCALAR_FIELD(pushedDown);

	return true;
}

static bool
_equalWithClause(const WithClause *a, const WithClause *b)
{
	COMPARE_NODE_FIELD(ctes);
	COMPARE_SCALAR_FIELD(recursive);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalInferClause(const InferClause *a, const InferClause *b)
{
	COMPARE_NODE_FIELD(indexElems);
	COMPARE_NODE_FIELD(whereClause);
	COMPARE_STRING_FIELD(conname);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalOnConflictClause(const OnConflictClause *a, const OnConflictClause *b)
{
	COMPARE_SCALAR_FIELD(action);
	COMPARE_NODE_FIELD(infer);
	COMPARE_NODE_FIELD(targetList);
	COMPARE_NODE_FIELD(whereClause);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalCTESearchClause(const CTESearchClause *a, const CTESearchClause *b)
{
	COMPARE_NODE_FIELD(search_col_list);
	COMPARE_SCALAR_FIELD(search_breadth_first);
	COMPARE_STRING_FIELD(search_seq_column);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalCTECycleClause(const CTECycleClause *a, const CTECycleClause *b)
{
	COMPARE_NODE_FIELD(cycle_col_list);
	COMPARE_STRING_FIELD(cycle_mark_column);
	COMPARE_NODE_FIELD(cycle_mark_value);
	COMPARE_NODE_FIELD(cycle_mark_default);
	COMPARE_STRING_FIELD(cycle_path_column);
	COMPARE_LOCATION_FIELD(location);
	COMPARE_SCALAR_FIELD(cycle_mark_type);
	COMPARE_SCALAR_FIELD(cycle_mark_typmod);
	COMPARE_SCALAR_FIELD(cycle_mark_collation);
	COMPARE_SCALAR_FIELD(cycle_mark_neop);

	return true;
}

static bool
_equalCommonTableExpr(const CommonTableExpr *a, const CommonTableExpr *b)
{
	COMPARE_STRING_FIELD(ctename);
	COMPARE_NODE_FIELD(aliascolnames);
	COMPARE_SCALAR_FIELD(ctematerialized);
	COMPARE_NODE_FIELD(ctequery);
	COMPARE_NODE_FIELD(search_clause);
	COMPARE_NODE_FIELD(cycle_clause);
	COMPARE_LOCATION_FIELD(location);
	COMPARE_SCALAR_FIELD(cterecursive);
	COMPARE_SCALAR_FIELD(cterefcount);
	COMPARE_NODE_FIELD(ctecolnames);
	COMPARE_NODE_FIELD(ctecoltypes);
	COMPARE_NODE_FIELD(ctecoltypmods);
	COMPARE_NODE_FIELD(ctecolcollations);

	return true;
}

static bool
_equalMergeWhenClause(const MergeWhenClause *a, const MergeWhenClause *b)
{
	COMPARE_SCALAR_FIELD(matched);
	COMPARE_SCALAR_FIELD(commandType);
	COMPARE_SCALAR_FIELD(override);
	COMPARE_NODE_FIELD(condition);
	COMPARE_NODE_FIELD(targetList);
	COMPARE_NODE_FIELD(values);

	return true;
}

static bool
_equalMergeAction(const MergeAction *a, const MergeAction *b)
{
	COMPARE_SCALAR_FIELD(matched);
	COMPARE_SCALAR_FIELD(commandType);
	COMPARE_SCALAR_FIELD(override);
	COMPARE_NODE_FIELD(qual);
	COMPARE_NODE_FIELD(targetList);
	COMPARE_NODE_FIELD(updateColnos);

	return true;
}

static bool
_equalTriggerTransition(const TriggerTransition *a, const TriggerTransition *b)
{
	COMPARE_STRING_FIELD(name);
	COMPARE_SCALAR_FIELD(isNew);
	COMPARE_SCALAR_FIELD(isTable);

	return true;
}

static bool
_equalJsonOutput(const JsonOutput *a, const JsonOutput *b)
{
	COMPARE_NODE_FIELD(typeName);
	COMPARE_NODE_FIELD(returning);

	return true;
}

static bool
_equalJsonKeyValue(const JsonKeyValue *a, const JsonKeyValue *b)
{
	COMPARE_NODE_FIELD(key);
	COMPARE_NODE_FIELD(value);

	return true;
}

static bool
_equalJsonObjectConstructor(const JsonObjectConstructor *a, const JsonObjectConstructor *b)
{
	COMPARE_NODE_FIELD(exprs);
	COMPARE_NODE_FIELD(output);
	COMPARE_SCALAR_FIELD(absent_on_null);
	COMPARE_SCALAR_FIELD(unique);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalJsonArrayConstructor(const JsonArrayConstructor *a, const JsonArrayConstructor *b)
{
	COMPARE_NODE_FIELD(exprs);
	COMPARE_NODE_FIELD(output);
	COMPARE_SCALAR_FIELD(absent_on_null);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalJsonArrayQueryConstructor(const JsonArrayQueryConstructor *a, const JsonArrayQueryConstructor *b)
{
	COMPARE_NODE_FIELD(query);
	COMPARE_NODE_FIELD(output);
	COMPARE_NODE_FIELD(format);
	COMPARE_SCALAR_FIELD(absent_on_null);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalJsonAggConstructor(const JsonAggConstructor *a, const JsonAggConstructor *b)
{
	COMPARE_NODE_FIELD(output);
	COMPARE_NODE_FIELD(agg_filter);
	COMPARE_NODE_FIELD(agg_order);
	COMPARE_NODE_FIELD(over);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalJsonObjectAgg(const JsonObjectAgg *a, const JsonObjectAgg *b)
{
	COMPARE_NODE_FIELD(constructor);
	COMPARE_NODE_FIELD(arg);
	COMPARE_SCALAR_FIELD(absent_on_null);
	COMPARE_SCALAR_FIELD(unique);

	return true;
}

static bool
_equalJsonArrayAgg(const JsonArrayAgg *a, const JsonArrayAgg *b)
{
	COMPARE_NODE_FIELD(constructor);
	COMPARE_NODE_FIELD(arg);
	COMPARE_SCALAR_FIELD(absent_on_null);

	return true;
}

static bool
_equalRawStmt(const RawStmt *a, const RawStmt *b)
{
	COMPARE_NODE_FIELD(stmt);
	COMPARE_LOCATION_FIELD(stmt_location);
	COMPARE_SCALAR_FIELD(stmt_len);

	return true;
}

static bool
_equalInsertStmt(const InsertStmt *a, const InsertStmt *b)
{
	COMPARE_NODE_FIELD(relation);
	COMPARE_NODE_FIELD(cols);
	COMPARE_NODE_FIELD(selectStmt);
	COMPARE_NODE_FIELD(onConflictClause);
	COMPARE_NODE_FIELD(returningList);
	COMPARE_NODE_FIELD(withClause);
	COMPARE_SCALAR_FIELD(override);

	return true;
}

static bool
_equalDeleteStmt(const DeleteStmt *a, const DeleteStmt *b)
{
	COMPARE_NODE_FIELD(relation);
	COMPARE_NODE_FIELD(usingClause);
	COMPARE_NODE_FIELD(whereClause);
	COMPARE_NODE_FIELD(returningList);
	COMPARE_NODE_FIELD(withClause);

	return true;
}

static bool
_equalUpdateStmt(const UpdateStmt *a, const UpdateStmt *b)
{
	COMPARE_NODE_FIELD(relation);
	COMPARE_NODE_FIELD(targetList);
	COMPARE_NODE_FIELD(whereClause);
	COMPARE_NODE_FIELD(fromClause);
	COMPARE_NODE_FIELD(returningList);
	COMPARE_NODE_FIELD(withClause);

	return true;
}

static bool
_equalMergeStmt(const MergeStmt *a, const MergeStmt *b)
{
	COMPARE_NODE_FIELD(relation);
	COMPARE_NODE_FIELD(sourceRelation);
	COMPARE_NODE_FIELD(joinCondition);
	COMPARE_NODE_FIELD(mergeWhenClauses);
	COMPARE_NODE_FIELD(withClause);

	return true;
}

static bool
_equalSelectStmt(const SelectStmt *a, const SelectStmt *b)
{
	COMPARE_NODE_FIELD(distinctClause);
	COMPARE_NODE_FIELD(intoClause);
	COMPARE_NODE_FIELD(targetList);
	COMPARE_NODE_FIELD(fromClause);
	COMPARE_NODE_FIELD(whereClause);
	COMPARE_NODE_FIELD(groupClause);
	COMPARE_SCALAR_FIELD(groupDistinct);
	COMPARE_NODE_FIELD(havingClause);
	COMPARE_NODE_FIELD(windowClause);
	COMPARE_NODE_FIELD(valuesLists);
	COMPARE_NODE_FIELD(sortClause);
	COMPARE_NODE_FIELD(limitOffset);
	COMPARE_NODE_FIELD(limitCount);
	COMPARE_SCALAR_FIELD(limitOption);
	COMPARE_NODE_FIELD(lockingClause);
	COMPARE_NODE_FIELD(withClause);
	COMPARE_SCALAR_FIELD(op);
	COMPARE_SCALAR_FIELD(all);
	COMPARE_NODE_FIELD(larg);
	COMPARE_NODE_FIELD(rarg);

	return true;
}

static bool
_equalSetOperationStmt(const SetOperationStmt *a, const SetOperationStmt *b)
{
	COMPARE_SCALAR_FIELD(op);
	COMPARE_SCALAR_FIELD(all);
	COMPARE_NODE_FIELD(larg);
	COMPARE_NODE_FIELD(rarg);
	COMPARE_NODE_FIELD(colTypes);
	COMPARE_NODE_FIELD(colTypmods);
	COMPARE_NODE_FIELD(colCollations);
	COMPARE_NODE_FIELD(groupClauses);

	return true;
}

static bool
_equalReturnStmt(const ReturnStmt *a, const ReturnStmt *b)
{
	COMPARE_NODE_FIELD(returnval);

	return true;
}

static bool
_equalPLAssignStmt(const PLAssignStmt *a, const PLAssignStmt *b)
{
	COMPARE_STRING_FIELD(name);
	COMPARE_NODE_FIELD(indirection);
	COMPARE_SCALAR_FIELD(nnames);
	COMPARE_NODE_FIELD(val);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalCreateSchemaStmt(const CreateSchemaStmt *a, const CreateSchemaStmt *b)
{
	COMPARE_STRING_FIELD(schemaname);
	COMPARE_NODE_FIELD(authrole);
	COMPARE_NODE_FIELD(schemaElts);
	COMPARE_SCALAR_FIELD(if_not_exists);

	return true;
}

static bool
_equalAlterTableStmt(const AlterTableStmt *a, const AlterTableStmt *b)
{
	COMPARE_NODE_FIELD(relation);
	COMPARE_NODE_FIELD(cmds);
	COMPARE_SCALAR_FIELD(objtype);
	COMPARE_SCALAR_FIELD(missing_ok);

	return true;
}

static bool
_equalReplicaIdentityStmt(const ReplicaIdentityStmt *a, const ReplicaIdentityStmt *b)
{
	COMPARE_SCALAR_FIELD(identity_type);
	COMPARE_STRING_FIELD(name);

	return true;
}

static bool
_equalAlterTableCmd(const AlterTableCmd *a, const AlterTableCmd *b)
{
	COMPARE_SCALAR_FIELD(subtype);
	COMPARE_STRING_FIELD(name);
	COMPARE_SCALAR_FIELD(num);
	COMPARE_NODE_FIELD(newowner);
	COMPARE_NODE_FIELD(def);
	COMPARE_SCALAR_FIELD(behavior);
	COMPARE_SCALAR_FIELD(missing_ok);
	COMPARE_SCALAR_FIELD(recurse);

	return true;
}

static bool
_equalAlterCollationStmt(const AlterCollationStmt *a, const AlterCollationStmt *b)
{
	COMPARE_NODE_FIELD(collname);

	return true;
}

static bool
_equalAlterDomainStmt(const AlterDomainStmt *a, const AlterDomainStmt *b)
{
	COMPARE_SCALAR_FIELD(subtype);
	COMPARE_NODE_FIELD(typeName);
	COMPARE_STRING_FIELD(name);
	COMPARE_NODE_FIELD(def);
	COMPARE_SCALAR_FIELD(behavior);
	COMPARE_SCALAR_FIELD(missing_ok);

	return true;
}

static bool
_equalGrantStmt(const GrantStmt *a, const GrantStmt *b)
{
	COMPARE_SCALAR_FIELD(is_grant);
	COMPARE_SCALAR_FIELD(targtype);
	COMPARE_SCALAR_FIELD(objtype);
	COMPARE_NODE_FIELD(objects);
	COMPARE_NODE_FIELD(privileges);
	COMPARE_NODE_FIELD(grantees);
	COMPARE_SCALAR_FIELD(grant_option);
	COMPARE_NODE_FIELD(grantor);
	COMPARE_SCALAR_FIELD(behavior);

	return true;
}

static bool
_equalObjectWithArgs(const ObjectWithArgs *a, const ObjectWithArgs *b)
{
	COMPARE_NODE_FIELD(objname);
	COMPARE_NODE_FIELD(objargs);
	COMPARE_NODE_FIELD(objfuncargs);
	COMPARE_SCALAR_FIELD(args_unspecified);

	return true;
}

static bool
_equalAccessPriv(const AccessPriv *a, const AccessPriv *b)
{
	COMPARE_STRING_FIELD(priv_name);
	COMPARE_NODE_FIELD(cols);

	return true;
}

static bool
_equalGrantRoleStmt(const GrantRoleStmt *a, const GrantRoleStmt *b)
{
	COMPARE_NODE_FIELD(granted_roles);
	COMPARE_NODE_FIELD(grantee_roles);
	COMPARE_SCALAR_FIELD(is_grant);
	COMPARE_NODE_FIELD(opt);
	COMPARE_NODE_FIELD(grantor);
	COMPARE_SCALAR_FIELD(behavior);

	return true;
}

static bool
_equalAlterDefaultPrivilegesStmt(const AlterDefaultPrivilegesStmt *a, const AlterDefaultPrivilegesStmt *b)
{
	COMPARE_NODE_FIELD(options);
	COMPARE_NODE_FIELD(action);

	return true;
}

static bool
_equalCopyStmt(const CopyStmt *a, const CopyStmt *b)
{
	COMPARE_NODE_FIELD(relation);
	COMPARE_NODE_FIELD(query);
	COMPARE_NODE_FIELD(attlist);
	COMPARE_SCALAR_FIELD(is_from);
	COMPARE_SCALAR_FIELD(is_program);
	COMPARE_STRING_FIELD(filename);
	COMPARE_NODE_FIELD(options);
	COMPARE_NODE_FIELD(whereClause);

	return true;
}

static bool
_equalVariableSetStmt(const VariableSetStmt *a, const VariableSetStmt *b)
{
	COMPARE_SCALAR_FIELD(kind);
	COMPARE_STRING_FIELD(name);
	COMPARE_NODE_FIELD(args);
	COMPARE_SCALAR_FIELD(is_local);

	return true;
}

static bool
_equalVariableShowStmt(const VariableShowStmt *a, const VariableShowStmt *b)
{
	COMPARE_STRING_FIELD(name);

	return true;
}

static bool
_equalCreateStmt(const CreateStmt *a, const CreateStmt *b)
{
	COMPARE_NODE_FIELD(relation);
	COMPARE_NODE_FIELD(tableElts);
	COMPARE_NODE_FIELD(inhRelations);
	COMPARE_NODE_FIELD(partbound);
	COMPARE_NODE_FIELD(partspec);
	COMPARE_NODE_FIELD(ofTypename);
	COMPARE_NODE_FIELD(constraints);
	COMPARE_NODE_FIELD(options);
	COMPARE_SCALAR_FIELD(oncommit);
	COMPARE_STRING_FIELD(tablespacename);
	COMPARE_STRING_FIELD(accessMethod);
	COMPARE_SCALAR_FIELD(if_not_exists);

	return true;
}

static bool
_equalConstraint(const Constraint *a, const Constraint *b)
{
	COMPARE_SCALAR_FIELD(contype);
	COMPARE_STRING_FIELD(conname);
	COMPARE_SCALAR_FIELD(deferrable);
	COMPARE_SCALAR_FIELD(initdeferred);
	COMPARE_LOCATION_FIELD(location);
	COMPARE_SCALAR_FIELD(is_no_inherit);
	COMPARE_NODE_FIELD(raw_expr);
	COMPARE_STRING_FIELD(cooked_expr);
	COMPARE_SCALAR_FIELD(generated_when);
	COMPARE_SCALAR_FIELD(nulls_not_distinct);
	COMPARE_NODE_FIELD(keys);
	COMPARE_NODE_FIELD(including);
	COMPARE_NODE_FIELD(exclusions);
	COMPARE_NODE_FIELD(options);
	COMPARE_STRING_FIELD(indexname);
	COMPARE_STRING_FIELD(indexspace);
	COMPARE_SCALAR_FIELD(reset_default_tblspc);
	COMPARE_STRING_FIELD(access_method);
	COMPARE_NODE_FIELD(where_clause);
	COMPARE_NODE_FIELD(pktable);
	COMPARE_NODE_FIELD(fk_attrs);
	COMPARE_NODE_FIELD(pk_attrs);
	COMPARE_SCALAR_FIELD(fk_matchtype);
	COMPARE_SCALAR_FIELD(fk_upd_action);
	COMPARE_SCALAR_FIELD(fk_del_action);
	COMPARE_NODE_FIELD(fk_del_set_cols);
	COMPARE_NODE_FIELD(old_conpfeqop);
	COMPARE_SCALAR_FIELD(old_pktable_oid);
	COMPARE_SCALAR_FIELD(skip_validation);
	COMPARE_SCALAR_FIELD(initially_valid);

	return true;
}

static bool
_equalCreateTableSpaceStmt(const CreateTableSpaceStmt *a, const CreateTableSpaceStmt *b)
{
	COMPARE_STRING_FIELD(tablespacename);
	COMPARE_NODE_FIELD(owner);
	COMPARE_STRING_FIELD(location);
	COMPARE_NODE_FIELD(options);

	return true;
}

static bool
_equalDropTableSpaceStmt(const DropTableSpaceStmt *a, const DropTableSpaceStmt *b)
{
	COMPARE_STRING_FIELD(tablespacename);
	COMPARE_SCALAR_FIELD(missing_ok);

	return true;
}

static bool
_equalAlterTableSpaceOptionsStmt(const AlterTableSpaceOptionsStmt *a, const AlterTableSpaceOptionsStmt *b)
{
	COMPARE_STRING_FIELD(tablespacename);
	COMPARE_NODE_FIELD(options);
	COMPARE_SCALAR_FIELD(isReset);

	return true;
}

static bool
_equalAlterTableMoveAllStmt(const AlterTableMoveAllStmt *a, const AlterTableMoveAllStmt *b)
{
	COMPARE_STRING_FIELD(orig_tablespacename);
	COMPARE_SCALAR_FIELD(objtype);
	COMPARE_NODE_FIELD(roles);
	COMPARE_STRING_FIELD(new_tablespacename);
	COMPARE_SCALAR_FIELD(nowait);

	return true;
}

static bool
_equalCreateExtensionStmt(const CreateExtensionStmt *a, const CreateExtensionStmt *b)
{
	COMPARE_STRING_FIELD(extname);
	COMPARE_SCALAR_FIELD(if_not_exists);
	COMPARE_NODE_FIELD(options);

	return true;
}

static bool
_equalAlterExtensionStmt(const AlterExtensionStmt *a, const AlterExtensionStmt *b)
{
	COMPARE_STRING_FIELD(extname);
	COMPARE_NODE_FIELD(options);

	return true;
}

static bool
_equalAlterExtensionContentsStmt(const AlterExtensionContentsStmt *a, const AlterExtensionContentsStmt *b)
{
	COMPARE_STRING_FIELD(extname);
	COMPARE_SCALAR_FIELD(action);
	COMPARE_SCALAR_FIELD(objtype);
	COMPARE_NODE_FIELD(object);

	return true;
}

static bool
_equalCreateFdwStmt(const CreateFdwStmt *a, const CreateFdwStmt *b)
{
	COMPARE_STRING_FIELD(fdwname);
	COMPARE_NODE_FIELD(func_options);
	COMPARE_NODE_FIELD(options);

	return true;
}

static bool
_equalAlterFdwStmt(const AlterFdwStmt *a, const AlterFdwStmt *b)
{
	COMPARE_STRING_FIELD(fdwname);
	COMPARE_NODE_FIELD(func_options);
	COMPARE_NODE_FIELD(options);

	return true;
}

static bool
_equalCreateForeignServerStmt(const CreateForeignServerStmt *a, const CreateForeignServerStmt *b)
{
	COMPARE_STRING_FIELD(servername);
	COMPARE_STRING_FIELD(servertype);
	COMPARE_STRING_FIELD(version);
	COMPARE_STRING_FIELD(fdwname);
	COMPARE_SCALAR_FIELD(if_not_exists);
	COMPARE_NODE_FIELD(options);

	return true;
}

static bool
_equalAlterForeignServerStmt(const AlterForeignServerStmt *a, const AlterForeignServerStmt *b)
{
	COMPARE_STRING_FIELD(servername);
	COMPARE_STRING_FIELD(version);
	COMPARE_NODE_FIELD(options);
	COMPARE_SCALAR_FIELD(has_version);

	return true;
}

static bool
_equalCreateForeignTableStmt(const CreateForeignTableStmt *a, const CreateForeignTableStmt *b)
{
	COMPARE_NODE_FIELD(base.relation);
	COMPARE_NODE_FIELD(base.tableElts);
	COMPARE_NODE_FIELD(base.inhRelations);
	COMPARE_NODE_FIELD(base.partbound);
	COMPARE_NODE_FIELD(base.partspec);
	COMPARE_NODE_FIELD(base.ofTypename);
	COMPARE_NODE_FIELD(base.constraints);
	COMPARE_NODE_FIELD(base.options);
	COMPARE_SCALAR_FIELD(base.oncommit);
	COMPARE_STRING_FIELD(base.tablespacename);
	COMPARE_STRING_FIELD(base.accessMethod);
	COMPARE_SCALAR_FIELD(base.if_not_exists);
	COMPARE_STRING_FIELD(servername);
	COMPARE_NODE_FIELD(options);

	return true;
}

static bool
_equalCreateUserMappingStmt(const CreateUserMappingStmt *a, const CreateUserMappingStmt *b)
{
	COMPARE_NODE_FIELD(user);
	COMPARE_STRING_FIELD(servername);
	COMPARE_SCALAR_FIELD(if_not_exists);
	COMPARE_NODE_FIELD(options);

	return true;
}

static bool
_equalAlterUserMappingStmt(const AlterUserMappingStmt *a, const AlterUserMappingStmt *b)
{
	COMPARE_NODE_FIELD(user);
	COMPARE_STRING_FIELD(servername);
	COMPARE_NODE_FIELD(options);

	return true;
}

static bool
_equalDropUserMappingStmt(const DropUserMappingStmt *a, const DropUserMappingStmt *b)
{
	COMPARE_NODE_FIELD(user);
	COMPARE_STRING_FIELD(servername);
	COMPARE_SCALAR_FIELD(missing_ok);

	return true;
}

static bool
_equalImportForeignSchemaStmt(const ImportForeignSchemaStmt *a, const ImportForeignSchemaStmt *b)
{
	COMPARE_STRING_FIELD(server_name);
	COMPARE_STRING_FIELD(remote_schema);
	COMPARE_STRING_FIELD(local_schema);
	COMPARE_SCALAR_FIELD(list_type);
	COMPARE_NODE_FIELD(table_list);
	COMPARE_NODE_FIELD(options);

	return true;
}

static bool
_equalCreatePolicyStmt(const CreatePolicyStmt *a, const CreatePolicyStmt *b)
{
	COMPARE_STRING_FIELD(policy_name);
	COMPARE_NODE_FIELD(table);
	COMPARE_STRING_FIELD(cmd_name);
	COMPARE_SCALAR_FIELD(permissive);
	COMPARE_NODE_FIELD(roles);
	COMPARE_NODE_FIELD(qual);
	COMPARE_NODE_FIELD(with_check);

	return true;
}

static bool
_equalAlterPolicyStmt(const AlterPolicyStmt *a, const AlterPolicyStmt *b)
{
	COMPARE_STRING_FIELD(policy_name);
	COMPARE_NODE_FIELD(table);
	COMPARE_NODE_FIELD(roles);
	COMPARE_NODE_FIELD(qual);
	COMPARE_NODE_FIELD(with_check);

	return true;
}

static bool
_equalCreateAmStmt(const CreateAmStmt *a, const CreateAmStmt *b)
{
	COMPARE_STRING_FIELD(amname);
	COMPARE_NODE_FIELD(handler_name);
	COMPARE_SCALAR_FIELD(amtype);

	return true;
}

static bool
_equalCreateTrigStmt(const CreateTrigStmt *a, const CreateTrigStmt *b)
{
	COMPARE_SCALAR_FIELD(replace);
	COMPARE_SCALAR_FIELD(isconstraint);
	COMPARE_STRING_FIELD(trigname);
	COMPARE_NODE_FIELD(relation);
	COMPARE_NODE_FIELD(funcname);
	COMPARE_NODE_FIELD(args);
	COMPARE_SCALAR_FIELD(row);
	COMPARE_SCALAR_FIELD(timing);
	COMPARE_SCALAR_FIELD(events);
	COMPARE_NODE_FIELD(columns);
	COMPARE_NODE_FIELD(whenClause);
	COMPARE_NODE_FIELD(transitionRels);
	COMPARE_SCALAR_FIELD(deferrable);
	COMPARE_SCALAR_FIELD(initdeferred);
	COMPARE_NODE_FIELD(constrrel);

	return true;
}

static bool
_equalCreateEventTrigStmt(const CreateEventTrigStmt *a, const CreateEventTrigStmt *b)
{
	COMPARE_STRING_FIELD(trigname);
	COMPARE_STRING_FIELD(eventname);
	COMPARE_NODE_FIELD(whenclause);
	COMPARE_NODE_FIELD(funcname);

	return true;
}

static bool
_equalAlterEventTrigStmt(const AlterEventTrigStmt *a, const AlterEventTrigStmt *b)
{
	COMPARE_STRING_FIELD(trigname);
	COMPARE_SCALAR_FIELD(tgenabled);

	return true;
}

static bool
_equalCreatePLangStmt(const CreatePLangStmt *a, const CreatePLangStmt *b)
{
	COMPARE_SCALAR_FIELD(replace);
	COMPARE_STRING_FIELD(plname);
	COMPARE_NODE_FIELD(plhandler);
	COMPARE_NODE_FIELD(plinline);
	COMPARE_NODE_FIELD(plvalidator);
	COMPARE_SCALAR_FIELD(pltrusted);

	return true;
}

static bool
_equalCreateRoleStmt(const CreateRoleStmt *a, const CreateRoleStmt *b)
{
	COMPARE_SCALAR_FIELD(stmt_type);
	COMPARE_STRING_FIELD(role);
	COMPARE_NODE_FIELD(options);

	return true;
}

static bool
_equalAlterRoleStmt(const AlterRoleStmt *a, const AlterRoleStmt *b)
{
	COMPARE_NODE_FIELD(role);
	COMPARE_NODE_FIELD(options);
	COMPARE_SCALAR_FIELD(action);

	return true;
}

static bool
_equalAlterRoleSetStmt(const AlterRoleSetStmt *a, const AlterRoleSetStmt *b)
{
	COMPARE_NODE_FIELD(role);
	COMPARE_STRING_FIELD(database);
	COMPARE_NODE_FIELD(setstmt);

	return true;
}

static bool
_equalDropRoleStmt(const DropRoleStmt *a, const DropRoleStmt *b)
{
	COMPARE_NODE_FIELD(roles);
	COMPARE_SCALAR_FIELD(missing_ok);

	return true;
}

static bool
_equalCreateSeqStmt(const CreateSeqStmt *a, const CreateSeqStmt *b)
{
	COMPARE_NODE_FIELD(sequence);
	COMPARE_NODE_FIELD(options);
	COMPARE_SCALAR_FIELD(ownerId);
	COMPARE_SCALAR_FIELD(for_identity);
	COMPARE_SCALAR_FIELD(if_not_exists);

	return true;
}

static bool
_equalAlterSeqStmt(const AlterSeqStmt *a, const AlterSeqStmt *b)
{
	COMPARE_NODE_FIELD(sequence);
	COMPARE_NODE_FIELD(options);
	COMPARE_SCALAR_FIELD(for_identity);
	COMPARE_SCALAR_FIELD(missing_ok);

	return true;
}

static bool
_equalDefineStmt(const DefineStmt *a, const DefineStmt *b)
{
	COMPARE_SCALAR_FIELD(kind);
	COMPARE_SCALAR_FIELD(oldstyle);
	COMPARE_NODE_FIELD(defnames);
	COMPARE_NODE_FIELD(args);
	COMPARE_NODE_FIELD(definition);
	COMPARE_SCALAR_FIELD(if_not_exists);
	COMPARE_SCALAR_FIELD(replace);

	return true;
}

static bool
_equalCreateDomainStmt(const CreateDomainStmt *a, const CreateDomainStmt *b)
{
	COMPARE_NODE_FIELD(domainname);
	COMPARE_NODE_FIELD(typeName);
	COMPARE_NODE_FIELD(collClause);
	COMPARE_NODE_FIELD(constraints);

	return true;
}

static bool
_equalCreateOpClassStmt(const CreateOpClassStmt *a, const CreateOpClassStmt *b)
{
	COMPARE_NODE_FIELD(opclassname);
	COMPARE_NODE_FIELD(opfamilyname);
	COMPARE_STRING_FIELD(amname);
	COMPARE_NODE_FIELD(datatype);
	COMPARE_NODE_FIELD(items);
	COMPARE_SCALAR_FIELD(isDefault);

	return true;
}

static bool
_equalCreateOpClassItem(const CreateOpClassItem *a, const CreateOpClassItem *b)
{
	COMPARE_SCALAR_FIELD(itemtype);
	COMPARE_NODE_FIELD(name);
	COMPARE_SCALAR_FIELD(number);
	COMPARE_NODE_FIELD(order_family);
	COMPARE_NODE_FIELD(class_args);
	COMPARE_NODE_FIELD(storedtype);

	return true;
}

static bool
_equalCreateOpFamilyStmt(const CreateOpFamilyStmt *a, const CreateOpFamilyStmt *b)
{
	COMPARE_NODE_FIELD(opfamilyname);
	COMPARE_STRING_FIELD(amname);

	return true;
}

static bool
_equalAlterOpFamilyStmt(const AlterOpFamilyStmt *a, const AlterOpFamilyStmt *b)
{
	COMPARE_NODE_FIELD(opfamilyname);
	COMPARE_STRING_FIELD(amname);
	COMPARE_SCALAR_FIELD(isDrop);
	COMPARE_NODE_FIELD(items);

	return true;
}

static bool
_equalDropStmt(const DropStmt *a, const DropStmt *b)
{
	COMPARE_NODE_FIELD(objects);
	COMPARE_SCALAR_FIELD(removeType);
	COMPARE_SCALAR_FIELD(behavior);
	COMPARE_SCALAR_FIELD(missing_ok);
	COMPARE_SCALAR_FIELD(concurrent);

	return true;
}

static bool
_equalTruncateStmt(const TruncateStmt *a, const TruncateStmt *b)
{
	COMPARE_NODE_FIELD(relations);
	COMPARE_SCALAR_FIELD(restart_seqs);
	COMPARE_SCALAR_FIELD(behavior);

	return true;
}

static bool
_equalCommentStmt(const CommentStmt *a, const CommentStmt *b)
{
	COMPARE_SCALAR_FIELD(objtype);
	COMPARE_NODE_FIELD(object);
	COMPARE_STRING_FIELD(comment);

	return true;
}

static bool
_equalSecLabelStmt(const SecLabelStmt *a, const SecLabelStmt *b)
{
	COMPARE_SCALAR_FIELD(objtype);
	COMPARE_NODE_FIELD(object);
	COMPARE_STRING_FIELD(provider);
	COMPARE_STRING_FIELD(label);

	return true;
}

static bool
_equalDeclareCursorStmt(const DeclareCursorStmt *a, const DeclareCursorStmt *b)
{
	COMPARE_STRING_FIELD(portalname);
	COMPARE_SCALAR_FIELD(options);
	COMPARE_NODE_FIELD(query);

	return true;
}

static bool
_equalClosePortalStmt(const ClosePortalStmt *a, const ClosePortalStmt *b)
{
	COMPARE_STRING_FIELD(portalname);

	return true;
}

static bool
_equalFetchStmt(const FetchStmt *a, const FetchStmt *b)
{
	COMPARE_SCALAR_FIELD(direction);
	COMPARE_SCALAR_FIELD(howMany);
	COMPARE_STRING_FIELD(portalname);
	COMPARE_SCALAR_FIELD(ismove);

	return true;
}

static bool
_equalIndexStmt(const IndexStmt *a, const IndexStmt *b)
{
	COMPARE_STRING_FIELD(idxname);
	COMPARE_NODE_FIELD(relation);
	COMPARE_STRING_FIELD(accessMethod);
	COMPARE_STRING_FIELD(tableSpace);
	COMPARE_NODE_FIELD(indexParams);
	COMPARE_NODE_FIELD(indexIncludingParams);
	COMPARE_NODE_FIELD(options);
	COMPARE_NODE_FIELD(whereClause);
	COMPARE_NODE_FIELD(excludeOpNames);
	COMPARE_STRING_FIELD(idxcomment);
	COMPARE_SCALAR_FIELD(indexOid);
	COMPARE_SCALAR_FIELD(oldNumber);
	COMPARE_SCALAR_FIELD(oldCreateSubid);
	COMPARE_SCALAR_FIELD(oldFirstRelfilelocatorSubid);
	COMPARE_SCALAR_FIELD(unique);
	COMPARE_SCALAR_FIELD(nulls_not_distinct);
	COMPARE_SCALAR_FIELD(primary);
	COMPARE_SCALAR_FIELD(isconstraint);
	COMPARE_SCALAR_FIELD(deferrable);
	COMPARE_SCALAR_FIELD(initdeferred);
	COMPARE_SCALAR_FIELD(transformed);
	COMPARE_SCALAR_FIELD(concurrent);
	COMPARE_SCALAR_FIELD(if_not_exists);
	COMPARE_SCALAR_FIELD(reset_default_tblspc);

	return true;
}

static bool
_equalCreateStatsStmt(const CreateStatsStmt *a, const CreateStatsStmt *b)
{
	COMPARE_NODE_FIELD(defnames);
	COMPARE_NODE_FIELD(stat_types);
	COMPARE_NODE_FIELD(exprs);
	COMPARE_NODE_FIELD(relations);
	COMPARE_STRING_FIELD(stxcomment);
	COMPARE_SCALAR_FIELD(transformed);
	COMPARE_SCALAR_FIELD(if_not_exists);

	return true;
}

static bool
_equalStatsElem(const StatsElem *a, const StatsElem *b)
{
	COMPARE_STRING_FIELD(name);
	COMPARE_NODE_FIELD(expr);

	return true;
}

static bool
_equalAlterStatsStmt(const AlterStatsStmt *a, const AlterStatsStmt *b)
{
	COMPARE_NODE_FIELD(defnames);
	COMPARE_SCALAR_FIELD(stxstattarget);
	COMPARE_SCALAR_FIELD(missing_ok);

	return true;
}

static bool
_equalCreateFunctionStmt(const CreateFunctionStmt *a, const CreateFunctionStmt *b)
{
	COMPARE_SCALAR_FIELD(is_procedure);
	COMPARE_SCALAR_FIELD(replace);
	COMPARE_NODE_FIELD(funcname);
	COMPARE_NODE_FIELD(parameters);
	COMPARE_NODE_FIELD(returnType);
	COMPARE_NODE_FIELD(options);
	COMPARE_NODE_FIELD(sql_body);

	return true;
}

static bool
_equalFunctionParameter(const FunctionParameter *a, const FunctionParameter *b)
{
	COMPARE_STRING_FIELD(name);
	COMPARE_NODE_FIELD(argType);
	COMPARE_SCALAR_FIELD(mode);
	COMPARE_NODE_FIELD(defexpr);

	return true;
}

static bool
_equalAlterFunctionStmt(const AlterFunctionStmt *a, const AlterFunctionStmt *b)
{
	COMPARE_SCALAR_FIELD(objtype);
	COMPARE_NODE_FIELD(func);
	COMPARE_NODE_FIELD(actions);

	return true;
}

static bool
_equalDoStmt(const DoStmt *a, const DoStmt *b)
{
	COMPARE_NODE_FIELD(args);

	return true;
}

static bool
_equalCallStmt(const CallStmt *a, const CallStmt *b)
{
	COMPARE_NODE_FIELD(funccall);
	COMPARE_NODE_FIELD(funcexpr);
	COMPARE_NODE_FIELD(outargs);

	return true;
}

static bool
_equalRenameStmt(const RenameStmt *a, const RenameStmt *b)
{
	COMPARE_SCALAR_FIELD(renameType);
	COMPARE_SCALAR_FIELD(relationType);
	COMPARE_NODE_FIELD(relation);
	COMPARE_NODE_FIELD(object);
	COMPARE_STRING_FIELD(subname);
	COMPARE_STRING_FIELD(newname);
	COMPARE_SCALAR_FIELD(behavior);
	COMPARE_SCALAR_FIELD(missing_ok);

	return true;
}

static bool
_equalAlterObjectDependsStmt(const AlterObjectDependsStmt *a, const AlterObjectDependsStmt *b)
{
	COMPARE_SCALAR_FIELD(objectType);
	COMPARE_NODE_FIELD(relation);
	COMPARE_NODE_FIELD(object);
	COMPARE_NODE_FIELD(extname);
	COMPARE_SCALAR_FIELD(remove);

	return true;
}

static bool
_equalAlterObjectSchemaStmt(const AlterObjectSchemaStmt *a, const AlterObjectSchemaStmt *b)
{
	COMPARE_SCALAR_FIELD(objectType);
	COMPARE_NODE_FIELD(relation);
	COMPARE_NODE_FIELD(object);
	COMPARE_STRING_FIELD(newschema);
	COMPARE_SCALAR_FIELD(missing_ok);

	return true;
}

static bool
_equalAlterOwnerStmt(const AlterOwnerStmt *a, const AlterOwnerStmt *b)
{
	COMPARE_SCALAR_FIELD(objectType);
	COMPARE_NODE_FIELD(relation);
	COMPARE_NODE_FIELD(object);
	COMPARE_NODE_FIELD(newowner);

	return true;
}

static bool
_equalAlterOperatorStmt(const AlterOperatorStmt *a, const AlterOperatorStmt *b)
{
	COMPARE_NODE_FIELD(opername);
	COMPARE_NODE_FIELD(options);

	return true;
}

static bool
_equalAlterTypeStmt(const AlterTypeStmt *a, const AlterTypeStmt *b)
{
	COMPARE_NODE_FIELD(typeName);
	COMPARE_NODE_FIELD(options);

	return true;
}

static bool
_equalRuleStmt(const RuleStmt *a, const RuleStmt *b)
{
	COMPARE_NODE_FIELD(relation);
	COMPARE_STRING_FIELD(rulename);
	COMPARE_NODE_FIELD(whereClause);
	COMPARE_SCALAR_FIELD(event);
	COMPARE_SCALAR_FIELD(instead);
	COMPARE_NODE_FIELD(actions);
	COMPARE_SCALAR_FIELD(replace);

	return true;
}

static bool
_equalNotifyStmt(const NotifyStmt *a, const NotifyStmt *b)
{
	COMPARE_STRING_FIELD(conditionname);
	COMPARE_STRING_FIELD(payload);

	return true;
}

static bool
_equalListenStmt(const ListenStmt *a, const ListenStmt *b)
{
	COMPARE_STRING_FIELD(conditionname);

	return true;
}

static bool
_equalUnlistenStmt(const UnlistenStmt *a, const UnlistenStmt *b)
{
	COMPARE_STRING_FIELD(conditionname);

	return true;
}

static bool
_equalTransactionStmt(const TransactionStmt *a, const TransactionStmt *b)
{
	COMPARE_SCALAR_FIELD(kind);
	COMPARE_NODE_FIELD(options);
	COMPARE_STRING_FIELD(savepoint_name);
	COMPARE_STRING_FIELD(gid);
	COMPARE_SCALAR_FIELD(chain);

	return true;
}

static bool
_equalCompositeTypeStmt(const CompositeTypeStmt *a, const CompositeTypeStmt *b)
{
	COMPARE_NODE_FIELD(typevar);
	COMPARE_NODE_FIELD(coldeflist);

	return true;
}

static bool
_equalCreateEnumStmt(const CreateEnumStmt *a, const CreateEnumStmt *b)
{
	COMPARE_NODE_FIELD(typeName);
	COMPARE_NODE_FIELD(vals);

	return true;
}

static bool
_equalCreateRangeStmt(const CreateRangeStmt *a, const CreateRangeStmt *b)
{
	COMPARE_NODE_FIELD(typeName);
	COMPARE_NODE_FIELD(params);

	return true;
}

static bool
_equalAlterEnumStmt(const AlterEnumStmt *a, const AlterEnumStmt *b)
{
	COMPARE_NODE_FIELD(typeName);
	COMPARE_STRING_FIELD(oldVal);
	COMPARE_STRING_FIELD(newVal);
	COMPARE_STRING_FIELD(newValNeighbor);
	COMPARE_SCALAR_FIELD(newValIsAfter);
	COMPARE_SCALAR_FIELD(skipIfNewValExists);

	return true;
}

static bool
_equalViewStmt(const ViewStmt *a, const ViewStmt *b)
{
	COMPARE_NODE_FIELD(view);
	COMPARE_NODE_FIELD(aliases);
	COMPARE_NODE_FIELD(query);
	COMPARE_SCALAR_FIELD(replace);
	COMPARE_NODE_FIELD(options);
	COMPARE_SCALAR_FIELD(withCheckOption);

	return true;
}

static bool
_equalLoadStmt(const LoadStmt *a, const LoadStmt *b)
{
	COMPARE_STRING_FIELD(filename);

	return true;
}

static bool
_equalCreatedbStmt(const CreatedbStmt *a, const CreatedbStmt *b)
{
	COMPARE_STRING_FIELD(dbname);
	COMPARE_NODE_FIELD(options);

	return true;
}

static bool
_equalAlterDatabaseStmt(const AlterDatabaseStmt *a, const AlterDatabaseStmt *b)
{
	COMPARE_STRING_FIELD(dbname);
	COMPARE_NODE_FIELD(options);

	return true;
}

static bool
_equalAlterDatabaseRefreshCollStmt(const AlterDatabaseRefreshCollStmt *a, const AlterDatabaseRefreshCollStmt *b)
{
	COMPARE_STRING_FIELD(dbname);

	return true;
}

static bool
_equalAlterDatabaseSetStmt(const AlterDatabaseSetStmt *a, const AlterDatabaseSetStmt *b)
{
	COMPARE_STRING_FIELD(dbname);
	COMPARE_NODE_FIELD(setstmt);

	return true;
}

static bool
_equalDropdbStmt(const DropdbStmt *a, const DropdbStmt *b)
{
	COMPARE_STRING_FIELD(dbname);
	COMPARE_SCALAR_FIELD(missing_ok);
	COMPARE_NODE_FIELD(options);

	return true;
}

static bool
_equalAlterSystemStmt(const AlterSystemStmt *a, const AlterSystemStmt *b)
{
	COMPARE_NODE_FIELD(setstmt);

	return true;
}

static bool
_equalClusterStmt(const ClusterStmt *a, const ClusterStmt *b)
{
	COMPARE_NODE_FIELD(relation);
	COMPARE_STRING_FIELD(indexname);
	COMPARE_NODE_FIELD(params);

	return true;
}

static bool
_equalVacuumStmt(const VacuumStmt *a, const VacuumStmt *b)
{
	COMPARE_NODE_FIELD(options);
	COMPARE_NODE_FIELD(rels);
	COMPARE_SCALAR_FIELD(is_vacuumcmd);

	return true;
}

static bool
_equalVacuumRelation(const VacuumRelation *a, const VacuumRelation *b)
{
	COMPARE_NODE_FIELD(relation);
	COMPARE_SCALAR_FIELD(oid);
	COMPARE_NODE_FIELD(va_cols);

	return true;
}

static bool
_equalExplainStmt(const ExplainStmt *a, const ExplainStmt *b)
{
	COMPARE_NODE_FIELD(query);
	COMPARE_NODE_FIELD(options);

	return true;
}

static bool
_equalCreateTableAsStmt(const CreateTableAsStmt *a, const CreateTableAsStmt *b)
{
	COMPARE_NODE_FIELD(query);
	COMPARE_NODE_FIELD(into);
	COMPARE_SCALAR_FIELD(objtype);
	COMPARE_SCALAR_FIELD(is_select_into);
	COMPARE_SCALAR_FIELD(if_not_exists);

	return true;
}

static bool
_equalRefreshMatViewStmt(const RefreshMatViewStmt *a, const RefreshMatViewStmt *b)
{
	COMPARE_SCALAR_FIELD(concurrent);
	COMPARE_SCALAR_FIELD(skipData);
	COMPARE_NODE_FIELD(relation);

	return true;
}

static bool
_equalCheckPointStmt(const CheckPointStmt *a, const CheckPointStmt *b)
{

	return true;
}

static bool
_equalDiscardStmt(const DiscardStmt *a, const DiscardStmt *b)
{
	COMPARE_SCALAR_FIELD(target);

	return true;
}

static bool
_equalLockStmt(const LockStmt *a, const LockStmt *b)
{
	COMPARE_NODE_FIELD(relations);
	COMPARE_SCALAR_FIELD(mode);
	COMPARE_SCALAR_FIELD(nowait);

	return true;
}

static bool
_equalConstraintsSetStmt(const ConstraintsSetStmt *a, const ConstraintsSetStmt *b)
{
	COMPARE_NODE_FIELD(constraints);
	COMPARE_SCALAR_FIELD(deferred);

	return true;
}

static bool
_equalReindexStmt(const ReindexStmt *a, const ReindexStmt *b)
{
	COMPARE_SCALAR_FIELD(kind);
	COMPARE_NODE_FIELD(relation);
	COMPARE_STRING_FIELD(name);
	COMPARE_NODE_FIELD(params);

	return true;
}

static bool
_equalCreateConversionStmt(const CreateConversionStmt *a, const CreateConversionStmt *b)
{
	COMPARE_NODE_FIELD(conversion_name);
	COMPARE_STRING_FIELD(for_encoding_name);
	COMPARE_STRING_FIELD(to_encoding_name);
	COMPARE_NODE_FIELD(func_name);
	COMPARE_SCALAR_FIELD(def);

	return true;
}

static bool
_equalCreateCastStmt(const CreateCastStmt *a, const CreateCastStmt *b)
{
	COMPARE_NODE_FIELD(sourcetype);
	COMPARE_NODE_FIELD(targettype);
	COMPARE_NODE_FIELD(func);
	COMPARE_SCALAR_FIELD(context);
	COMPARE_SCALAR_FIELD(inout);

	return true;
}

static bool
_equalCreateTransformStmt(const CreateTransformStmt *a, const CreateTransformStmt *b)
{
	COMPARE_SCALAR_FIELD(replace);
	COMPARE_NODE_FIELD(type_name);
	COMPARE_STRING_FIELD(lang);
	COMPARE_NODE_FIELD(fromsql);
	COMPARE_NODE_FIELD(tosql);

	return true;
}

static bool
_equalPrepareStmt(const PrepareStmt *a, const PrepareStmt *b)
{
	COMPARE_STRING_FIELD(name);
	COMPARE_NODE_FIELD(argtypes);
	COMPARE_NODE_FIELD(query);

	return true;
}

static bool
_equalExecuteStmt(const ExecuteStmt *a, const ExecuteStmt *b)
{
	COMPARE_STRING_FIELD(name);
	COMPARE_NODE_FIELD(params);

	return true;
}

static bool
_equalDeallocateStmt(const DeallocateStmt *a, const DeallocateStmt *b)
{
	COMPARE_STRING_FIELD(name);

	return true;
}

static bool
_equalDropOwnedStmt(const DropOwnedStmt *a, const DropOwnedStmt *b)
{
	COMPARE_NODE_FIELD(roles);
	COMPARE_SCALAR_FIELD(behavior);

	return true;
}

static bool
_equalReassignOwnedStmt(const ReassignOwnedStmt *a, const ReassignOwnedStmt *b)
{
	COMPARE_NODE_FIELD(roles);
	COMPARE_NODE_FIELD(newrole);

	return true;
}

static bool
_equalAlterTSDictionaryStmt(const AlterTSDictionaryStmt *a, const AlterTSDictionaryStmt *b)
{
	COMPARE_NODE_FIELD(dictname);
	COMPARE_NODE_FIELD(options);

	return true;
}

static bool
_equalAlterTSConfigurationStmt(const AlterTSConfigurationStmt *a, const AlterTSConfigurationStmt *b)
{
	COMPARE_SCALAR_FIELD(kind);
	COMPARE_NODE_FIELD(cfgname);
	COMPARE_NODE_FIELD(tokentype);
	COMPARE_NODE_FIELD(dicts);
	COMPARE_SCALAR_FIELD(override);
	COMPARE_SCALAR_FIELD(replace);
	COMPARE_SCALAR_FIELD(missing_ok);

	return true;
}

static bool
_equalPublicationTable(const PublicationTable *a, const PublicationTable *b)
{
	COMPARE_NODE_FIELD(relation);
	COMPARE_NODE_FIELD(whereClause);
	COMPARE_NODE_FIELD(columns);

	return true;
}

static bool
_equalPublicationObjSpec(const PublicationObjSpec *a, const PublicationObjSpec *b)
{
	COMPARE_SCALAR_FIELD(pubobjtype);
	COMPARE_STRING_FIELD(name);
	COMPARE_NODE_FIELD(pubtable);
	COMPARE_LOCATION_FIELD(location);

	return true;
}

static bool
_equalCreatePublicationStmt(const CreatePublicationStmt *a, const CreatePublicationStmt *b)
{
	COMPARE_STRING_FIELD(pubname);
	COMPARE_NODE_FIELD(options);
	COMPARE_NODE_FIELD(pubobjects);
	COMPARE_SCALAR_FIELD(for_all_tables);

	return true;
}

static bool
_equalAlterPublicationStmt(const AlterPublicationStmt *a, const AlterPublicationStmt *b)
{
	COMPARE_STRING_FIELD(pubname);
	COMPARE_NODE_FIELD(options);
	COMPARE_NODE_FIELD(pubobjects);
	COMPARE_SCALAR_FIELD(for_all_tables);
	COMPARE_SCALAR_FIELD(action);

	return true;
}

static bool
_equalCreateSubscriptionStmt(const CreateSubscriptionStmt *a, const CreateSubscriptionStmt *b)
{
	COMPARE_STRING_FIELD(subname);
	COMPARE_STRING_FIELD(conninfo);
	COMPARE_NODE_FIELD(publication);
	COMPARE_NODE_FIELD(options);

	return true;
}

static bool
_equalAlterSubscriptionStmt(const AlterSubscriptionStmt *a, const AlterSubscriptionStmt *b)
{
	COMPARE_SCALAR_FIELD(kind);
	COMPARE_STRING_FIELD(subname);
	COMPARE_STRING_FIELD(conninfo);
	COMPARE_NODE_FIELD(publication);
	COMPARE_NODE_FIELD(options);

	return true;
}

static bool
_equalDropSubscriptionStmt(const DropSubscriptionStmt *a, const DropSubscriptionStmt *b)
{
	COMPARE_STRING_FIELD(subname);
	COMPARE_SCALAR_FIELD(missing_ok);
	COMPARE_SCALAR_FIELD(behavior);

	return true;
}

static bool
_equalPathKey(const PathKey *a, const PathKey *b)
{
	COMPARE_SCALAR_FIELD(pk_eclass);
	COMPARE_SCALAR_FIELD(pk_opfamily);
	COMPARE_SCALAR_FIELD(pk_strategy);
	COMPARE_SCALAR_FIELD(pk_nulls_first);

	return true;
}

static bool
_equalRestrictInfo(const RestrictInfo *a, const RestrictInfo *b)
{
	COMPARE_NODE_FIELD(clause);
	COMPARE_SCALAR_FIELD(is_pushed_down);
	COMPARE_SCALAR_FIELD(has_clone);
	COMPARE_SCALAR_FIELD(is_clone);
	COMPARE_SCALAR_FIELD(security_level);
	COMPARE_BITMAPSET_FIELD(required_relids);
	COMPARE_BITMAPSET_FIELD(incompatible_relids);
	COMPARE_BITMAPSET_FIELD(outer_relids);
	COMPARE_SCALAR_FIELD(rinfo_serial);

	return true;
}

static bool
_equalPlaceHolderVar(const PlaceHolderVar *a, const PlaceHolderVar *b)
{
	COMPARE_BITMAPSET_FIELD(phnullingrels);
	COMPARE_SCALAR_FIELD(phid);
	COMPARE_SCALAR_FIELD(phlevelsup);

	return true;
}

static bool
_equalSpecialJoinInfo(const SpecialJoinInfo *a, const SpecialJoinInfo *b)
{
	COMPARE_BITMAPSET_FIELD(min_lefthand);
	COMPARE_BITMAPSET_FIELD(min_righthand);
	COMPARE_BITMAPSET_FIELD(syn_lefthand);
	COMPARE_BITMAPSET_FIELD(syn_righthand);
	COMPARE_SCALAR_FIELD(jointype);
	COMPARE_SCALAR_FIELD(ojrelid);
	COMPARE_BITMAPSET_FIELD(commute_above_l);
	COMPARE_BITMAPSET_FIELD(commute_above_r);
	COMPARE_BITMAPSET_FIELD(commute_below_l);
	COMPARE_BITMAPSET_FIELD(commute_below_r);
	COMPARE_SCALAR_FIELD(lhs_strict);
	COMPARE_SCALAR_FIELD(semi_can_btree);
	COMPARE_SCALAR_FIELD(semi_can_hash);
	COMPARE_NODE_FIELD(semi_operators);
	COMPARE_NODE_FIELD(semi_rhs_exprs);

	return true;
}

static bool
_equalAppendRelInfo(const AppendRelInfo *a, const AppendRelInfo *b)
{
	COMPARE_SCALAR_FIELD(parent_relid);
	COMPARE_SCALAR_FIELD(child_relid);
	COMPARE_SCALAR_FIELD(parent_reltype);
	COMPARE_SCALAR_FIELD(child_reltype);
	COMPARE_NODE_FIELD(translated_vars);
	COMPARE_SCALAR_FIELD(num_child_cols);
	COMPARE_POINTER_FIELD(parent_colnos, a->num_child_cols * sizeof(AttrNumber));
	COMPARE_SCALAR_FIELD(parent_reloid);

	return true;
}

static bool
_equalPlaceHolderInfo(const PlaceHolderInfo *a, const PlaceHolderInfo *b)
{
	COMPARE_SCALAR_FIELD(phid);
	COMPARE_NODE_FIELD(ph_var);
	COMPARE_BITMAPSET_FIELD(ph_eval_at);
	COMPARE_BITMAPSET_FIELD(ph_lateral);
	COMPARE_BITMAPSET_FIELD(ph_needed);
	COMPARE_SCALAR_FIELD(ph_width);

	return true;
}

static bool
_equalInteger(const Integer *a, const Integer *b)
{
	COMPARE_SCALAR_FIELD(ival);

	return true;
}

static bool
_equalFloat(const Float *a, const Float *b)
{
	COMPARE_STRING_FIELD(fval);

	return true;
}

static bool
_equalBoolean(const Boolean *a, const Boolean *b)
{
	COMPARE_SCALAR_FIELD(boolval);

	return true;
}

static bool
_equalString(const String *a, const String *b)
{
	COMPARE_STRING_FIELD(sval);

	return true;
}

static bool
_equalBitString(const BitString *a, const BitString *b)
{
	COMPARE_STRING_FIELD(bsval);

	return true;
}
