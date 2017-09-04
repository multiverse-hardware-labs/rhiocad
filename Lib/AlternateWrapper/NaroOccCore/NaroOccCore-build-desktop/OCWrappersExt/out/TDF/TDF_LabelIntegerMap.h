// File generated by CPPExt (MPV)
//
#ifndef _TDF_LabelIntegerMap_OCWrappers_HeaderFile
#define _TDF_LabelIntegerMap_OCWrappers_HeaderFile

// include native header
#include <TDF_LabelIntegerMap.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTDF_Label;
ref class OCTDF_LabelMapHasher;
ref class OCTDF_DataMapNodeOfLabelIntegerMap;
ref class OCTDF_DataMapIteratorOfLabelIntegerMap;



public ref class OCTDF_LabelIntegerMap  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCTDF_LabelIntegerMap(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDF_LabelIntegerMap(TDF_LabelIntegerMap* nativeHandle);

// Methods PUBLIC


OCTDF_LabelIntegerMap(Standard_Integer NbBuckets);


 /*instead*/  OCTDF_LabelIntegerMap^ Assign(OCNaroWrappers::OCTDF_LabelIntegerMap^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(OCNaroWrappers::OCTDF_Label^ K, Standard_Integer I) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCTDF_Label^ K) ;


 /*instead*/  System::Boolean UnBind(OCNaroWrappers::OCTDF_Label^ K) ;


 /*instead*/  Standard_Integer Find(OCNaroWrappers::OCTDF_Label^ K) ;


 /*instead*/  Standard_Integer ChangeFind(OCNaroWrappers::OCTDF_Label^ K) ;


 /*instead*/  Standard_Address Find1(OCNaroWrappers::OCTDF_Label^ K) ;


 /*instead*/  Standard_Address ChangeFind1(OCNaroWrappers::OCTDF_Label^ K) ;

~OCTDF_LabelIntegerMap()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif