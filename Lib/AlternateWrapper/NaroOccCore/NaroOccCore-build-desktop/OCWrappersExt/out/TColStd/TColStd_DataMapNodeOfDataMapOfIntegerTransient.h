// File generated by CPPExt (Transient)
//
#ifndef _TColStd_DataMapNodeOfDataMapOfIntegerTransient_OCWrappers_HeaderFile
#define _TColStd_DataMapNodeOfDataMapOfIntegerTransient_OCWrappers_HeaderFile

// include the wrapped class
#include <TColStd_DataMapNodeOfDataMapOfIntegerTransient.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"



namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCTColStd_MapIntegerHasher;
ref class OCTColStd_DataMapOfIntegerTransient;
ref class OCTColStd_DataMapIteratorOfDataMapOfIntegerTransient;



public ref class OCTColStd_DataMapNodeOfDataMapOfIntegerTransient : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCTColStd_DataMapNodeOfDataMapOfIntegerTransient(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_DataMapNodeOfDataMapOfIntegerTransient(Handle(TColStd_DataMapNodeOfDataMapOfIntegerTransient)* nativeHandle);

// Methods PUBLIC


OCTColStd_DataMapNodeOfDataMapOfIntegerTransient(Standard_Integer K, OCNaroWrappers::OCStandard_Transient^ I, TCollection_MapNodePtr n);


 /*instead*/  Standard_Integer Key() ;


 /*instead*/  OCStandard_Transient^ Value() ;

~OCTColStd_DataMapNodeOfDataMapOfIntegerTransient()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
