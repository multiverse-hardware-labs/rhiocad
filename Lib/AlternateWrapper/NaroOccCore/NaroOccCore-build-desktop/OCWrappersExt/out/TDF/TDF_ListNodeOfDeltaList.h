// File generated by CPPExt (Transient)
//
#ifndef _TDF_ListNodeOfDeltaList_OCWrappers_HeaderFile
#define _TDF_ListNodeOfDeltaList_OCWrappers_HeaderFile

// include the wrapped class
#include <TDF_ListNodeOfDeltaList.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"



namespace OCNaroWrappers
{

ref class OCTDF_Delta;
ref class OCTDF_DeltaList;
ref class OCTDF_ListIteratorOfDeltaList;



public ref class OCTDF_ListNodeOfDeltaList : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCTDF_ListNodeOfDeltaList(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDF_ListNodeOfDeltaList(Handle(TDF_ListNodeOfDeltaList)* nativeHandle);

// Methods PUBLIC


OCTDF_ListNodeOfDeltaList(OCNaroWrappers::OCTDF_Delta^ I, TCollection_MapNodePtr n);


 /*instead*/  OCTDF_Delta^ Value() ;

~OCTDF_ListNodeOfDeltaList()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
