// File generated by CPPExt (CPP file)
//

#include "MAT2d_DataMapNodeOfDataMapOfIntegerVec2d.h"
#include "../Converter.h"
#include "../gp/gp_Vec2d.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "MAT2d_DataMapOfIntegerVec2d.h"
#include "MAT2d_DataMapIteratorOfDataMapOfIntegerVec2d.h"


using namespace OCNaroWrappers;

OCMAT2d_DataMapNodeOfDataMapOfIntegerVec2d::OCMAT2d_DataMapNodeOfDataMapOfIntegerVec2d(Handle(MAT2d_DataMapNodeOfDataMapOfIntegerVec2d)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_MAT2d_DataMapNodeOfDataMapOfIntegerVec2d(*nativeHandle);
}

OCMAT2d_DataMapNodeOfDataMapOfIntegerVec2d::OCMAT2d_DataMapNodeOfDataMapOfIntegerVec2d(Standard_Integer K, OCNaroWrappers::OCgp_Vec2d^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_MAT2d_DataMapNodeOfDataMapOfIntegerVec2d(new MAT2d_DataMapNodeOfDataMapOfIntegerVec2d(K, *((gp_Vec2d*)I->Handle), n));
}

 Standard_Integer OCMAT2d_DataMapNodeOfDataMapOfIntegerVec2d::Key()
{
  return (*((Handle_MAT2d_DataMapNodeOfDataMapOfIntegerVec2d*)nativeHandle))->Key();
}

OCgp_Vec2d^ OCMAT2d_DataMapNodeOfDataMapOfIntegerVec2d::Value()
{
  gp_Vec2d* tmp = new gp_Vec2d();
  *tmp = (*((Handle_MAT2d_DataMapNodeOfDataMapOfIntegerVec2d*)nativeHandle))->Value();
  return gcnew OCgp_Vec2d(tmp);
}


