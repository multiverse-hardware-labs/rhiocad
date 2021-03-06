// File generated by CPPExt (CPP file)
//

#include "BRepOffset_DataMapNodeOfDataMapOfShapeOffset.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "BRepOffset_Offset.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "BRepOffset_DataMapOfShapeOffset.h"
#include "BRepOffset_DataMapIteratorOfDataMapOfShapeOffset.h"


using namespace OCNaroWrappers;

OCBRepOffset_DataMapNodeOfDataMapOfShapeOffset::OCBRepOffset_DataMapNodeOfDataMapOfShapeOffset(Handle(BRepOffset_DataMapNodeOfDataMapOfShapeOffset)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRepOffset_DataMapNodeOfDataMapOfShapeOffset(*nativeHandle);
}

OCBRepOffset_DataMapNodeOfDataMapOfShapeOffset::OCBRepOffset_DataMapNodeOfDataMapOfShapeOffset(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCBRepOffset_Offset^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepOffset_DataMapNodeOfDataMapOfShapeOffset(new BRepOffset_DataMapNodeOfDataMapOfShapeOffset(*((TopoDS_Shape*)K->Handle), *((BRepOffset_Offset*)I->Handle), n));
}

OCTopoDS_Shape^ OCBRepOffset_DataMapNodeOfDataMapOfShapeOffset::Key()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_BRepOffset_DataMapNodeOfDataMapOfShapeOffset*)nativeHandle))->Key();
  return gcnew OCTopoDS_Shape(tmp);
}

OCBRepOffset_Offset^ OCBRepOffset_DataMapNodeOfDataMapOfShapeOffset::Value()
{
  BRepOffset_Offset* tmp = new BRepOffset_Offset();
  *tmp = (*((Handle_BRepOffset_DataMapNodeOfDataMapOfShapeOffset*)nativeHandle))->Value();
  return gcnew OCBRepOffset_Offset(tmp);
}


