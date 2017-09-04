// File generated by CPPExt (Transient)
//
#ifndef _TopLoc_SListNodeOfSListOfItemLocation_OCWrappers_HeaderFile
#define _TopLoc_SListNodeOfSListOfItemLocation_OCWrappers_HeaderFile

// include the wrapped class
#include <TopLoc_SListNodeOfSListOfItemLocation.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "TopLoc_SListOfItemLocation.h"
#include "TopLoc_ItemLocation.h"


namespace OCNaroWrappers
{

ref class OCTopLoc_ItemLocation;
ref class OCTopLoc_SListOfItemLocation;



public ref class OCTopLoc_SListNodeOfSListOfItemLocation : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCTopLoc_SListNodeOfSListOfItemLocation(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopLoc_SListNodeOfSListOfItemLocation(Handle(TopLoc_SListNodeOfSListOfItemLocation)* nativeHandle);

// Methods PUBLIC


OCTopLoc_SListNodeOfSListOfItemLocation(OCNaroWrappers::OCTopLoc_ItemLocation^ I, OCNaroWrappers::OCTopLoc_SListOfItemLocation^ aTail);


 /*instead*/  Standard_Integer Count() ;


 /*instead*/  OCTopLoc_SListOfItemLocation^ Tail() ;


 /*instead*/  OCTopLoc_ItemLocation^ Value() ;

~OCTopLoc_SListNodeOfSListOfItemLocation()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif