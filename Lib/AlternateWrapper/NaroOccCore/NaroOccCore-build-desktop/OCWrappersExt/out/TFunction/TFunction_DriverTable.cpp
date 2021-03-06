// File generated by CPPExt (CPP file)
//

#include "TFunction_DriverTable.h"
#include "../Converter.h"
#include "TFunction_HArray1OfDataMapOfGUIDDriver.h"
#include "../Standard/Standard_GUID.h"
#include "TFunction_Driver.h"


using namespace OCNaroWrappers;

OCTFunction_DriverTable::OCTFunction_DriverTable(Handle(TFunction_DriverTable)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TFunction_DriverTable(*nativeHandle);
}

OCTFunction_DriverTable^ OCTFunction_DriverTable::Get()
{
  Handle(TFunction_DriverTable) tmp = TFunction_DriverTable::Get();
  return gcnew OCTFunction_DriverTable(&tmp);
}

OCTFunction_DriverTable::OCTFunction_DriverTable() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TFunction_DriverTable(new TFunction_DriverTable());
}

 System::Boolean OCTFunction_DriverTable::AddDriver(OCNaroWrappers::OCStandard_GUID^ guid, OCNaroWrappers::OCTFunction_Driver^ driver, Standard_Integer thread)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TFunction_DriverTable*)nativeHandle))->AddDriver(*((Standard_GUID*)guid->Handle), *((Handle_TFunction_Driver*)driver->Handle), thread));
}

 System::Boolean OCTFunction_DriverTable::HasDriver(OCNaroWrappers::OCStandard_GUID^ guid, Standard_Integer thread)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TFunction_DriverTable*)nativeHandle))->HasDriver(*((Standard_GUID*)guid->Handle), thread));
}

 System::Boolean OCTFunction_DriverTable::FindDriver(OCNaroWrappers::OCStandard_GUID^ guid, OCNaroWrappers::OCTFunction_Driver^ driver, Standard_Integer thread)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TFunction_DriverTable*)nativeHandle))->FindDriver(*((Standard_GUID*)guid->Handle), *((Handle_TFunction_Driver*)driver->Handle), thread));
}

 Standard_OStream& OCTFunction_DriverTable::Dump(Standard_OStream& anOS)
{
  return (*((Handle_TFunction_DriverTable*)nativeHandle))->Dump(anOS);
}

 System::Boolean OCTFunction_DriverTable::RemoveDriver(OCNaroWrappers::OCStandard_GUID^ guid, Standard_Integer thread)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TFunction_DriverTable*)nativeHandle))->RemoveDriver(*((Standard_GUID*)guid->Handle), thread));
}

 void OCTFunction_DriverTable::Clear()
{
  (*((Handle_TFunction_DriverTable*)nativeHandle))->Clear();
}


