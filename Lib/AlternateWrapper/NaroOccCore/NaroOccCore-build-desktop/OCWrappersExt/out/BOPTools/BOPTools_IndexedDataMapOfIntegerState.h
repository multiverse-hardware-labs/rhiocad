// File generated by CPPExt (MPV)
//
#ifndef _BOPTools_IndexedDataMapOfIntegerState_OCWrappers_HeaderFile
#define _BOPTools_IndexedDataMapOfIntegerState_OCWrappers_HeaderFile

// include native header
#include <BOPTools_IndexedDataMapOfIntegerState.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"
#include "../BooleanOperations/BooleanOperations_StateOfShape.h"


namespace OCNaroWrappers
{

ref class OCTColStd_MapIntegerHasher;
ref class OCBOPTools_IndexedDataMapNodeOfIndexedDataMapOfIntegerState;



public ref class OCBOPTools_IndexedDataMapOfIntegerState  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCBOPTools_IndexedDataMapOfIntegerState(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCBOPTools_IndexedDataMapOfIntegerState(BOPTools_IndexedDataMapOfIntegerState* nativeHandle);

// Methods PUBLIC


OCBOPTools_IndexedDataMapOfIntegerState(Standard_Integer NbBuckets);


 /*instead*/  OCBOPTools_IndexedDataMapOfIntegerState^ Assign(OCNaroWrappers::OCBOPTools_IndexedDataMapOfIntegerState^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  Standard_Integer Add(Standard_Integer K, OCBooleanOperations_StateOfShape I) ;


 /*instead*/  void Substitute(Standard_Integer I, Standard_Integer K, OCBooleanOperations_StateOfShape T) ;


 /*instead*/  void RemoveLast() ;


 /*instead*/  System::Boolean Contains(Standard_Integer K) ;


 /*instead*/  Standard_Integer FindKey(Standard_Integer I) ;


 /*instead*/  OCBooleanOperations_StateOfShape FindFromIndex(Standard_Integer I) ;


 /*instead*/  OCBooleanOperations_StateOfShape ChangeFromIndex(Standard_Integer I) ;


 /*instead*/  Standard_Integer FindIndex(Standard_Integer K) ;


 /*instead*/  OCBooleanOperations_StateOfShape FindFromKey(Standard_Integer K) ;


 /*instead*/  OCBooleanOperations_StateOfShape ChangeFromKey(Standard_Integer K) ;


 /*instead*/  Standard_Address FindFromKey1(Standard_Integer K) ;


 /*instead*/  Standard_Address ChangeFromKey1(Standard_Integer K) ;

~OCBOPTools_IndexedDataMapOfIntegerState()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
