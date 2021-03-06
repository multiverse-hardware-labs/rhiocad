// File generated by CPPExt (CPP file)
//

#include "CDM_MetaDataLookUpTable.h"
#include "../Converter.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "CDM_MetaData.h"
#include "CDM_DataMapNodeOfMetaDataLookUpTable.h"
#include "CDM_DataMapIteratorOfMetaDataLookUpTable.h"


using namespace OCNaroWrappers;

OCCDM_MetaDataLookUpTable::OCCDM_MetaDataLookUpTable(CDM_MetaDataLookUpTable* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCCDM_MetaDataLookUpTable::OCCDM_MetaDataLookUpTable(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new CDM_MetaDataLookUpTable(NbBuckets);
}

OCCDM_MetaDataLookUpTable^ OCCDM_MetaDataLookUpTable::Assign(OCNaroWrappers::OCCDM_MetaDataLookUpTable^ Other)
{
  CDM_MetaDataLookUpTable* tmp = new CDM_MetaDataLookUpTable(0);
  *tmp = ((CDM_MetaDataLookUpTable*)nativeHandle)->Assign(*((CDM_MetaDataLookUpTable*)Other->Handle));
  return gcnew OCCDM_MetaDataLookUpTable(tmp);
}

 void OCCDM_MetaDataLookUpTable::ReSize(Standard_Integer NbBuckets)
{
  ((CDM_MetaDataLookUpTable*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCCDM_MetaDataLookUpTable::Bind(OCNaroWrappers::OCTCollection_ExtendedString^ K, OCNaroWrappers::OCCDM_MetaData^ I)
{
  return OCConverter::StandardBooleanToBoolean(((CDM_MetaDataLookUpTable*)nativeHandle)->Bind(*((TCollection_ExtendedString*)K->Handle), *((Handle_CDM_MetaData*)I->Handle)));
}

 System::Boolean OCCDM_MetaDataLookUpTable::IsBound(OCNaroWrappers::OCTCollection_ExtendedString^ K)
{
  return OCConverter::StandardBooleanToBoolean(((CDM_MetaDataLookUpTable*)nativeHandle)->IsBound(*((TCollection_ExtendedString*)K->Handle)));
}

 System::Boolean OCCDM_MetaDataLookUpTable::UnBind(OCNaroWrappers::OCTCollection_ExtendedString^ K)
{
  return OCConverter::StandardBooleanToBoolean(((CDM_MetaDataLookUpTable*)nativeHandle)->UnBind(*((TCollection_ExtendedString*)K->Handle)));
}

OCCDM_MetaData^ OCCDM_MetaDataLookUpTable::Find(OCNaroWrappers::OCTCollection_ExtendedString^ K)
{
  Handle(CDM_MetaData) tmp = ((CDM_MetaDataLookUpTable*)nativeHandle)->Find(*((TCollection_ExtendedString*)K->Handle));
  return gcnew OCCDM_MetaData(&tmp);
}

OCCDM_MetaData^ OCCDM_MetaDataLookUpTable::ChangeFind(OCNaroWrappers::OCTCollection_ExtendedString^ K)
{
  Handle(CDM_MetaData) tmp = ((CDM_MetaDataLookUpTable*)nativeHandle)->ChangeFind(*((TCollection_ExtendedString*)K->Handle));
  return gcnew OCCDM_MetaData(&tmp);
}

 Standard_Address OCCDM_MetaDataLookUpTable::Find1(OCNaroWrappers::OCTCollection_ExtendedString^ K)
{
  return ((CDM_MetaDataLookUpTable*)nativeHandle)->Find1(*((TCollection_ExtendedString*)K->Handle));
}

 Standard_Address OCCDM_MetaDataLookUpTable::ChangeFind1(OCNaroWrappers::OCTCollection_ExtendedString^ K)
{
  return ((CDM_MetaDataLookUpTable*)nativeHandle)->ChangeFind1(*((TCollection_ExtendedString*)K->Handle));
}


