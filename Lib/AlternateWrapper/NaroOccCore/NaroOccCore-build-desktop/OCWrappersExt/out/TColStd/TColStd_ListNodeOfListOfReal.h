// File generated by CPPExt (Transient)
//
#ifndef _TColStd_ListNodeOfListOfReal_OCWrappers_HeaderFile
#define _TColStd_ListNodeOfListOfReal_OCWrappers_HeaderFile

// include the wrapped class
#include <TColStd_ListNodeOfListOfReal.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"



namespace OCNaroWrappers
{

ref class OCTColStd_ListOfReal;
ref class OCTColStd_ListIteratorOfListOfReal;



public ref class OCTColStd_ListNodeOfListOfReal : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCTColStd_ListNodeOfListOfReal(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_ListNodeOfListOfReal(Handle(TColStd_ListNodeOfListOfReal)* nativeHandle);

// Methods PUBLIC


OCTColStd_ListNodeOfListOfReal(Standard_Real I, TCollection_MapNodePtr n);


 /*instead*/  Standard_Real Value() ;

~OCTColStd_ListNodeOfListOfReal()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif