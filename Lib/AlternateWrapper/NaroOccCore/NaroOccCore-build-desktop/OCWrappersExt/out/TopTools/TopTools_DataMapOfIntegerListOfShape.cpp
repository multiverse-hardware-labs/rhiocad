// File generated by CPPExt (CPP file)
//

#include "TopTools_DataMapOfIntegerListOfShape.h"
#include "../Converter.h"
#include "TopTools_ListOfShape.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "TopTools_DataMapNodeOfDataMapOfIntegerListOfShape.h"
#include "TopTools_DataMapIteratorOfDataMapOfIntegerListOfShape.h"


using namespace OCNaroWrappers;

OCTopTools_DataMapOfIntegerListOfShape::OCTopTools_DataMapOfIntegerListOfShape(TopTools_DataMapOfIntegerListOfShape* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTopTools_DataMapOfIntegerListOfShape::OCTopTools_DataMapOfIntegerListOfShape(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new TopTools_DataMapOfIntegerListOfShape(NbBuckets);
}

OCTopTools_DataMapOfIntegerListOfShape^ OCTopTools_DataMapOfIntegerListOfShape::Assign(OCNaroWrappers::OCTopTools_DataMapOfIntegerListOfShape^ Other)
{
  TopTools_DataMapOfIntegerListOfShape* tmp = new TopTools_DataMapOfIntegerListOfShape(0);
  *tmp = ((TopTools_DataMapOfIntegerListOfShape*)nativeHandle)->Assign(*((TopTools_DataMapOfIntegerListOfShape*)Other->Handle));
  return gcnew OCTopTools_DataMapOfIntegerListOfShape(tmp);
}

 void OCTopTools_DataMapOfIntegerListOfShape::ReSize(Standard_Integer NbBuckets)
{
  ((TopTools_DataMapOfIntegerListOfShape*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCTopTools_DataMapOfIntegerListOfShape::Bind(Standard_Integer K, OCNaroWrappers::OCTopTools_ListOfShape^ I)
{
  return OCConverter::StandardBooleanToBoolean(((TopTools_DataMapOfIntegerListOfShape*)nativeHandle)->Bind(K, *((TopTools_ListOfShape*)I->Handle)));
}

 System::Boolean OCTopTools_DataMapOfIntegerListOfShape::IsBound(Standard_Integer K)
{
  return OCConverter::StandardBooleanToBoolean(((TopTools_DataMapOfIntegerListOfShape*)nativeHandle)->IsBound(K));
}

 System::Boolean OCTopTools_DataMapOfIntegerListOfShape::UnBind(Standard_Integer K)
{
  return OCConverter::StandardBooleanToBoolean(((TopTools_DataMapOfIntegerListOfShape*)nativeHandle)->UnBind(K));
}

OCTopTools_ListOfShape^ OCTopTools_DataMapOfIntegerListOfShape::Find(Standard_Integer K)
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = ((TopTools_DataMapOfIntegerListOfShape*)nativeHandle)->Find(K);
  return gcnew OCTopTools_ListOfShape(tmp);
}

OCTopTools_ListOfShape^ OCTopTools_DataMapOfIntegerListOfShape::ChangeFind(Standard_Integer K)
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = ((TopTools_DataMapOfIntegerListOfShape*)nativeHandle)->ChangeFind(K);
  return gcnew OCTopTools_ListOfShape(tmp);
}

 Standard_Address OCTopTools_DataMapOfIntegerListOfShape::Find1(Standard_Integer K)
{
  return ((TopTools_DataMapOfIntegerListOfShape*)nativeHandle)->Find1(K);
}

 Standard_Address OCTopTools_DataMapOfIntegerListOfShape::ChangeFind1(Standard_Integer K)
{
  return ((TopTools_DataMapOfIntegerListOfShape*)nativeHandle)->ChangeFind1(K);
}


