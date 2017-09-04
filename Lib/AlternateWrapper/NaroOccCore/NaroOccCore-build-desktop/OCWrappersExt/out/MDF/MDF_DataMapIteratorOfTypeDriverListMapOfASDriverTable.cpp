// File generated by CPPExt (CPP file)
//

#include "MDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable.h"
#include "../Converter.h"
#include "../Standard/Standard_Type.h"
#include "MDF_DriverListOfASDriverTable.h"
#include "../TColStd/TColStd_MapTransientHasher.h"
#include "MDF_TypeDriverListMapOfASDriverTable.h"
#include "MDF_DataMapNodeOfTypeDriverListMapOfASDriverTable.h"


using namespace OCNaroWrappers;

OCMDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable::OCMDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable(MDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCMDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable::OCMDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new MDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable();
}

OCMDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable::OCMDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable(OCNaroWrappers::OCMDF_TypeDriverListMapOfASDriverTable^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new MDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable(*((MDF_TypeDriverListMapOfASDriverTable*)aMap->Handle));
}

 void OCMDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable::Initialize(OCNaroWrappers::OCMDF_TypeDriverListMapOfASDriverTable^ aMap)
{
  ((MDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable*)nativeHandle)->Initialize(*((MDF_TypeDriverListMapOfASDriverTable*)aMap->Handle));
}

OCStandard_Type^ OCMDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable::Key()
{
  Handle(Standard_Type) tmp = ((MDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable*)nativeHandle)->Key();
  return gcnew OCStandard_Type(&tmp);
}

OCMDF_DriverListOfASDriverTable^ OCMDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable::Value()
{
  MDF_DriverListOfASDriverTable* tmp = new MDF_DriverListOfASDriverTable();
  *tmp = ((MDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable*)nativeHandle)->Value();
  return gcnew OCMDF_DriverListOfASDriverTable(tmp);
}

