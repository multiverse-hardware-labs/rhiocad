// File generated by CPPExt (CPP file)
//

#include "BRepMesh_IndexedDataMapNodeOfIDMapOfNodeOfDataStructureOfDelaun.h"
#include "../Converter.h"
#include "BRepMesh_Vertex.h"
#include "BRepMesh_NodeHasherOfDataStructureOfDelaun.h"
#include "BRepMesh_IDMapOfNodeOfDataStructureOfDelaun.h"


using namespace OCNaroWrappers;

OCBRepMesh_IndexedDataMapNodeOfIDMapOfNodeOfDataStructureOfDelaun::OCBRepMesh_IndexedDataMapNodeOfIDMapOfNodeOfDataStructureOfDelaun(Handle(BRepMesh_IndexedDataMapNodeOfIDMapOfNodeOfDataStructureOfDelaun)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRepMesh_IndexedDataMapNodeOfIDMapOfNodeOfDataStructureOfDelaun(*nativeHandle);
}

OCBRepMesh_IndexedDataMapNodeOfIDMapOfNodeOfDataStructureOfDelaun::OCBRepMesh_IndexedDataMapNodeOfIDMapOfNodeOfDataStructureOfDelaun(OCNaroWrappers::OCBRepMesh_Vertex^ K1, Standard_Integer K2, BRepMesh_ListOfInteger I, TCollection_MapNodePtr n1, TCollection_MapNodePtr n2) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepMesh_IndexedDataMapNodeOfIDMapOfNodeOfDataStructureOfDelaun(new BRepMesh_IndexedDataMapNodeOfIDMapOfNodeOfDataStructureOfDelaun(*((BRepMesh_Vertex*)K1->Handle), K2, I, n1, n2));
}

OCBRepMesh_Vertex^ OCBRepMesh_IndexedDataMapNodeOfIDMapOfNodeOfDataStructureOfDelaun::Key1()
{
  BRepMesh_Vertex* tmp = new BRepMesh_Vertex();
  *tmp = (*((Handle_BRepMesh_IndexedDataMapNodeOfIDMapOfNodeOfDataStructureOfDelaun*)nativeHandle))->Key1();
  return gcnew OCBRepMesh_Vertex(tmp);
}

 Standard_Integer OCBRepMesh_IndexedDataMapNodeOfIDMapOfNodeOfDataStructureOfDelaun::Key2()
{
  return (*((Handle_BRepMesh_IndexedDataMapNodeOfIDMapOfNodeOfDataStructureOfDelaun*)nativeHandle))->Key2();
}

 TCollection_MapNodePtr& OCBRepMesh_IndexedDataMapNodeOfIDMapOfNodeOfDataStructureOfDelaun::Next2()
{
  return (*((Handle_BRepMesh_IndexedDataMapNodeOfIDMapOfNodeOfDataStructureOfDelaun*)nativeHandle))->Next2();
}

 BRepMesh_ListOfInteger& OCBRepMesh_IndexedDataMapNodeOfIDMapOfNodeOfDataStructureOfDelaun::Value()
{
  return (*((Handle_BRepMesh_IndexedDataMapNodeOfIDMapOfNodeOfDataStructureOfDelaun*)nativeHandle))->Value();
}

