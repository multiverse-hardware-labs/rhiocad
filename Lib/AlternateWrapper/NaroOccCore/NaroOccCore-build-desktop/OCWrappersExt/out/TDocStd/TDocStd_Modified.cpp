// File generated by CPPExt (CPP file)
//

#include "TDocStd_Modified.h"
#include "../Converter.h"
#include "../TDF/TDF_Label.h"
#include "../TDF/TDF_LabelMap.h"
#include "../Standard/Standard_GUID.h"
#include "../TDF/TDF_Attribute.h"
#include "../TDF/TDF_RelocationTable.h"


using namespace OCNaroWrappers;

OCTDocStd_Modified::OCTDocStd_Modified(Handle(TDocStd_Modified)* nativeHandle) : OCTDF_Attribute((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDocStd_Modified(*nativeHandle);
}

 System::Boolean OCTDocStd_Modified::IsEmpty(OCNaroWrappers::OCTDF_Label^ access)
{
  return OCConverter::StandardBooleanToBoolean(TDocStd_Modified::IsEmpty(*((TDF_Label*)access->Handle)));
}

 System::Boolean OCTDocStd_Modified::Add(OCNaroWrappers::OCTDF_Label^ alabel)
{
  return OCConverter::StandardBooleanToBoolean(TDocStd_Modified::Add(*((TDF_Label*)alabel->Handle)));
}

 System::Boolean OCTDocStd_Modified::Remove(OCNaroWrappers::OCTDF_Label^ alabel)
{
  return OCConverter::StandardBooleanToBoolean(TDocStd_Modified::Remove(*((TDF_Label*)alabel->Handle)));
}

 System::Boolean OCTDocStd_Modified::Contains(OCNaroWrappers::OCTDF_Label^ alabel)
{
  return OCConverter::StandardBooleanToBoolean(TDocStd_Modified::Contains(*((TDF_Label*)alabel->Handle)));
}

OCTDF_LabelMap^ OCTDocStd_Modified::Get(OCNaroWrappers::OCTDF_Label^ access)
{
  TDF_LabelMap* tmp = new TDF_LabelMap(0);
  *tmp = TDocStd_Modified::Get(*((TDF_Label*)access->Handle));
  return gcnew OCTDF_LabelMap(tmp);
}

 void OCTDocStd_Modified::Clear(OCNaroWrappers::OCTDF_Label^ access)
{
  TDocStd_Modified::Clear(*((TDF_Label*)access->Handle));
}

OCStandard_GUID^ OCTDocStd_Modified::GetID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = TDocStd_Modified::GetID();
  return gcnew OCStandard_GUID(tmp);
}

OCTDocStd_Modified::OCTDocStd_Modified() : OCTDF_Attribute((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDocStd_Modified(new TDocStd_Modified());
}

 System::Boolean OCTDocStd_Modified::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDocStd_Modified*)nativeHandle))->IsEmpty());
}

 void OCTDocStd_Modified::Clear()
{
  (*((Handle_TDocStd_Modified*)nativeHandle))->Clear();
}

 System::Boolean OCTDocStd_Modified::AddLabel(OCNaroWrappers::OCTDF_Label^ L)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDocStd_Modified*)nativeHandle))->AddLabel(*((TDF_Label*)L->Handle)));
}

 System::Boolean OCTDocStd_Modified::RemoveLabel(OCNaroWrappers::OCTDF_Label^ L)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDocStd_Modified*)nativeHandle))->RemoveLabel(*((TDF_Label*)L->Handle)));
}

OCTDF_LabelMap^ OCTDocStd_Modified::Get()
{
  TDF_LabelMap* tmp = new TDF_LabelMap(0);
  *tmp = (*((Handle_TDocStd_Modified*)nativeHandle))->Get();
  return gcnew OCTDF_LabelMap(tmp);
}

OCStandard_GUID^ OCTDocStd_Modified::ID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = (*((Handle_TDocStd_Modified*)nativeHandle))->ID();
  return gcnew OCStandard_GUID(tmp);
}

 void OCTDocStd_Modified::Restore(OCNaroWrappers::OCTDF_Attribute^ With)
{
  (*((Handle_TDocStd_Modified*)nativeHandle))->Restore(*((Handle_TDF_Attribute*)With->Handle));
}

OCTDF_Attribute^ OCTDocStd_Modified::NewEmpty()
{
  Handle(TDF_Attribute) tmp = (*((Handle_TDocStd_Modified*)nativeHandle))->NewEmpty();
  return gcnew OCTDF_Attribute(&tmp);
}

 void OCTDocStd_Modified::Paste(OCNaroWrappers::OCTDF_Attribute^ Into, OCNaroWrappers::OCTDF_RelocationTable^ RT)
{
  (*((Handle_TDocStd_Modified*)nativeHandle))->Paste(*((Handle_TDF_Attribute*)Into->Handle), *((Handle_TDF_RelocationTable*)RT->Handle));
}

 Standard_OStream& OCTDocStd_Modified::Dump(Standard_OStream& anOS)
{
  return (*((Handle_TDocStd_Modified*)nativeHandle))->Dump(anOS);
}


