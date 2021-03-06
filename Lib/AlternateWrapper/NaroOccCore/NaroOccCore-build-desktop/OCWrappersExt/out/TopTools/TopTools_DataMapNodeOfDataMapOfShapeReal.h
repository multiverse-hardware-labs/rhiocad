// File generated by CPPExt (Transient)
//
#ifndef _TopTools_DataMapNodeOfDataMapOfShapeReal_OCWrappers_HeaderFile
#define _TopTools_DataMapNodeOfDataMapOfShapeReal_OCWrappers_HeaderFile

// include the wrapped class
#include <TopTools_DataMapNodeOfDataMapOfShapeReal.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "../TopoDS/TopoDS_Shape.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_ShapeMapHasher;
ref class OCTopTools_DataMapOfShapeReal;
ref class OCTopTools_DataMapIteratorOfDataMapOfShapeReal;



public ref class OCTopTools_DataMapNodeOfDataMapOfShapeReal : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCTopTools_DataMapNodeOfDataMapOfShapeReal(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopTools_DataMapNodeOfDataMapOfShapeReal(Handle(TopTools_DataMapNodeOfDataMapOfShapeReal)* nativeHandle);

// Methods PUBLIC


OCTopTools_DataMapNodeOfDataMapOfShapeReal(OCNaroWrappers::OCTopoDS_Shape^ K, Standard_Real I, TCollection_MapNodePtr n);


 /*instead*/  OCTopoDS_Shape^ Key() ;


 /*instead*/  Standard_Real Value() ;

~OCTopTools_DataMapNodeOfDataMapOfShapeReal()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
