// File generated by CPPExt (MPV)
//
#ifndef _AIS_IndexedDataMapOfOwnerPrs_OCWrappers_HeaderFile
#define _AIS_IndexedDataMapOfOwnerPrs_OCWrappers_HeaderFile

// include native header
#include <AIS_IndexedDataMapOfOwnerPrs.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCSelectMgr_EntityOwner;
ref class OCPrs3d_Presentation;
ref class OCTColStd_MapTransientHasher;
ref class OCAIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs;



public ref class OCAIS_IndexedDataMapOfOwnerPrs  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCAIS_IndexedDataMapOfOwnerPrs(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCAIS_IndexedDataMapOfOwnerPrs(AIS_IndexedDataMapOfOwnerPrs* nativeHandle);

// Methods PUBLIC


OCAIS_IndexedDataMapOfOwnerPrs(Standard_Integer NbBuckets);


 /*instead*/  OCAIS_IndexedDataMapOfOwnerPrs^ Assign(OCNaroWrappers::OCAIS_IndexedDataMapOfOwnerPrs^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  Standard_Integer Add(OCNaroWrappers::OCSelectMgr_EntityOwner^ K, OCNaroWrappers::OCPrs3d_Presentation^ I) ;


 /*instead*/  void Substitute(Standard_Integer I, OCNaroWrappers::OCSelectMgr_EntityOwner^ K, OCNaroWrappers::OCPrs3d_Presentation^ T) ;


 /*instead*/  void RemoveLast() ;


 /*instead*/  System::Boolean Contains(OCNaroWrappers::OCSelectMgr_EntityOwner^ K) ;


 /*instead*/  OCSelectMgr_EntityOwner^ FindKey(Standard_Integer I) ;


 /*instead*/  OCPrs3d_Presentation^ FindFromIndex(Standard_Integer I) ;


 /*instead*/  OCPrs3d_Presentation^ ChangeFromIndex(Standard_Integer I) ;


 /*instead*/  Standard_Integer FindIndex(OCNaroWrappers::OCSelectMgr_EntityOwner^ K) ;


 /*instead*/  OCPrs3d_Presentation^ FindFromKey(OCNaroWrappers::OCSelectMgr_EntityOwner^ K) ;


 /*instead*/  OCPrs3d_Presentation^ ChangeFromKey(OCNaroWrappers::OCSelectMgr_EntityOwner^ K) ;


 /*instead*/  Standard_Address FindFromKey1(OCNaroWrappers::OCSelectMgr_EntityOwner^ K) ;


 /*instead*/  Standard_Address ChangeFromKey1(OCNaroWrappers::OCSelectMgr_EntityOwner^ K) ;

~OCAIS_IndexedDataMapOfOwnerPrs()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
