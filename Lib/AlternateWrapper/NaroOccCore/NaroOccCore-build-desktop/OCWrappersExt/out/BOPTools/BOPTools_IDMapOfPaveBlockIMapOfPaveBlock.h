// File generated by CPPExt (MPV)
//
#ifndef _BOPTools_IDMapOfPaveBlockIMapOfPaveBlock_OCWrappers_HeaderFile
#define _BOPTools_IDMapOfPaveBlockIMapOfPaveBlock_OCWrappers_HeaderFile

// include native header
#include <BOPTools_IDMapOfPaveBlockIMapOfPaveBlock.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCBOPTools_PaveBlock;
ref class OCBOPTools_IMapOfPaveBlock;
ref class OCBOPTools_PaveBlockMapHasher;
ref class OCBOPTools_IndexedDataMapNodeOfIDMapOfPaveBlockIMapOfPaveBlock;



public ref class OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock(BOPTools_IDMapOfPaveBlockIMapOfPaveBlock* nativeHandle);

// Methods PUBLIC


OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock(Standard_Integer NbBuckets);


 /*instead*/  OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock^ Assign(OCNaroWrappers::OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  Standard_Integer Add(OCNaroWrappers::OCBOPTools_PaveBlock^ K, OCNaroWrappers::OCBOPTools_IMapOfPaveBlock^ I) ;


 /*instead*/  void Substitute(Standard_Integer I, OCNaroWrappers::OCBOPTools_PaveBlock^ K, OCNaroWrappers::OCBOPTools_IMapOfPaveBlock^ T) ;


 /*instead*/  void RemoveLast() ;


 /*instead*/  System::Boolean Contains(OCNaroWrappers::OCBOPTools_PaveBlock^ K) ;


 /*instead*/  OCBOPTools_PaveBlock^ FindKey(Standard_Integer I) ;


 /*instead*/  OCBOPTools_IMapOfPaveBlock^ FindFromIndex(Standard_Integer I) ;


 /*instead*/  OCBOPTools_IMapOfPaveBlock^ ChangeFromIndex(Standard_Integer I) ;


 /*instead*/  Standard_Integer FindIndex(OCNaroWrappers::OCBOPTools_PaveBlock^ K) ;


 /*instead*/  OCBOPTools_IMapOfPaveBlock^ FindFromKey(OCNaroWrappers::OCBOPTools_PaveBlock^ K) ;


 /*instead*/  OCBOPTools_IMapOfPaveBlock^ ChangeFromKey(OCNaroWrappers::OCBOPTools_PaveBlock^ K) ;


 /*instead*/  Standard_Address FindFromKey1(OCNaroWrappers::OCBOPTools_PaveBlock^ K) ;


 /*instead*/  Standard_Address ChangeFromKey1(OCNaroWrappers::OCBOPTools_PaveBlock^ K) ;

~OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif