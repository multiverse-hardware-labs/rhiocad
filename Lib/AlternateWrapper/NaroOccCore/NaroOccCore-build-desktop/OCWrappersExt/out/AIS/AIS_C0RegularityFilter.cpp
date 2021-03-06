// File generated by CPPExt (CPP file)
//

#include "AIS_C0RegularityFilter.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../SelectMgr/SelectMgr_EntityOwner.h"


using namespace OCNaroWrappers;

OCAIS_C0RegularityFilter::OCAIS_C0RegularityFilter(Handle(AIS_C0RegularityFilter)* nativeHandle) : OCSelectMgr_Filter((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_AIS_C0RegularityFilter(*nativeHandle);
}

OCAIS_C0RegularityFilter::OCAIS_C0RegularityFilter(OCNaroWrappers::OCTopoDS_Shape^ aShape) : OCSelectMgr_Filter((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AIS_C0RegularityFilter(new AIS_C0RegularityFilter(*((TopoDS_Shape*)aShape->Handle)));
}

 System::Boolean OCAIS_C0RegularityFilter::ActsOn(OCTopAbs_ShapeEnum aType)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS_C0RegularityFilter*)nativeHandle))->ActsOn((TopAbs_ShapeEnum)aType));
}

 System::Boolean OCAIS_C0RegularityFilter::IsOk(OCNaroWrappers::OCSelectMgr_EntityOwner^ EO)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS_C0RegularityFilter*)nativeHandle))->IsOk(*((Handle_SelectMgr_EntityOwner*)EO->Handle)));
}


