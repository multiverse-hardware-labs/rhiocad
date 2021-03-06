// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus_OCWrappers_HeaderFile
#define _TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"
#include "TopOpeBRepDS_CheckStatus.h"


namespace OCNaroWrappers
{

ref class OCTColStd_MapIntegerHasher;
ref class OCTopOpeBRepDS_DataMapOfCheckStatus;
ref class OCTopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus;



public ref class OCTopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCTopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus(TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus();


OCTopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus(OCNaroWrappers::OCTopOpeBRepDS_DataMapOfCheckStatus^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCTopOpeBRepDS_DataMapOfCheckStatus^ aMap) ;


 /*instead*/  Standard_Integer Key() ;


 /*instead*/  OCTopOpeBRepDS_CheckStatus Value() ;

~OCTopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
