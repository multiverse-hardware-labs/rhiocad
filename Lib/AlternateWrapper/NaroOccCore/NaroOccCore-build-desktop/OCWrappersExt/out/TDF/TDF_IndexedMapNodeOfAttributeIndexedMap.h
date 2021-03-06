// File generated by CPPExt (Transient)
//
#ifndef _TDF_IndexedMapNodeOfAttributeIndexedMap_OCWrappers_HeaderFile
#define _TDF_IndexedMapNodeOfAttributeIndexedMap_OCWrappers_HeaderFile

// include the wrapped class
#include <TDF_IndexedMapNodeOfAttributeIndexedMap.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"



namespace OCNaroWrappers
{

ref class OCTDF_Attribute;
ref class OCTColStd_MapTransientHasher;
ref class OCTDF_AttributeIndexedMap;



public ref class OCTDF_IndexedMapNodeOfAttributeIndexedMap : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCTDF_IndexedMapNodeOfAttributeIndexedMap(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDF_IndexedMapNodeOfAttributeIndexedMap(Handle(TDF_IndexedMapNodeOfAttributeIndexedMap)* nativeHandle);

// Methods PUBLIC


OCTDF_IndexedMapNodeOfAttributeIndexedMap(OCNaroWrappers::OCTDF_Attribute^ K1, Standard_Integer K2, TCollection_MapNodePtr n1, TCollection_MapNodePtr n2);


 /*instead*/  OCTDF_Attribute^ Key1() ;


 /*instead*/  Standard_Integer Key2() ;


 /*instead*/  TCollection_MapNodePtr& Next2() ;

~OCTDF_IndexedMapNodeOfAttributeIndexedMap()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
