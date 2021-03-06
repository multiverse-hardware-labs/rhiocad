// File generated by CPPExt (CPP file)
//

#include "TopTools_IndexedMapOfShape.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "TopTools_ShapeMapHasher.h"
#include "TopTools_IndexedMapNodeOfIndexedMapOfShape.h"


using namespace OCNaroWrappers;

OCTopTools_IndexedMapOfShape::OCTopTools_IndexedMapOfShape(TopTools_IndexedMapOfShape* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTopTools_IndexedMapOfShape::OCTopTools_IndexedMapOfShape(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new TopTools_IndexedMapOfShape(NbBuckets);
}

OCTopTools_IndexedMapOfShape^ OCTopTools_IndexedMapOfShape::Assign(OCNaroWrappers::OCTopTools_IndexedMapOfShape^ Other)
{
  TopTools_IndexedMapOfShape* tmp = new TopTools_IndexedMapOfShape(0);
  *tmp = ((TopTools_IndexedMapOfShape*)nativeHandle)->Assign(*((TopTools_IndexedMapOfShape*)Other->Handle));
  return gcnew OCTopTools_IndexedMapOfShape(tmp);
}

 void OCTopTools_IndexedMapOfShape::ReSize(Standard_Integer NbBuckets)
{
  ((TopTools_IndexedMapOfShape*)nativeHandle)->ReSize(NbBuckets);
}

 Standard_Integer OCTopTools_IndexedMapOfShape::Add(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((TopTools_IndexedMapOfShape*)nativeHandle)->Add(*((TopoDS_Shape*)K->Handle));
}

 void OCTopTools_IndexedMapOfShape::Substitute(Standard_Integer I, OCNaroWrappers::OCTopoDS_Shape^ K)
{
  ((TopTools_IndexedMapOfShape*)nativeHandle)->Substitute(I, *((TopoDS_Shape*)K->Handle));
}

 void OCTopTools_IndexedMapOfShape::RemoveLast()
{
  ((TopTools_IndexedMapOfShape*)nativeHandle)->RemoveLast();
}

 System::Boolean OCTopTools_IndexedMapOfShape::Contains(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((TopTools_IndexedMapOfShape*)nativeHandle)->Contains(*((TopoDS_Shape*)K->Handle)));
}

OCTopoDS_Shape^ OCTopTools_IndexedMapOfShape::FindKey(Standard_Integer I)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((TopTools_IndexedMapOfShape*)nativeHandle)->FindKey(I);
  return gcnew OCTopoDS_Shape(tmp);
}

 Standard_Integer OCTopTools_IndexedMapOfShape::FindIndex(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((TopTools_IndexedMapOfShape*)nativeHandle)->FindIndex(*((TopoDS_Shape*)K->Handle));
}


