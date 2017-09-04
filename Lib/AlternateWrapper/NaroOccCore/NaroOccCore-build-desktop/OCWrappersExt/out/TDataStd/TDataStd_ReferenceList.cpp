// File generated by CPPExt (CPP file)
//

#include "TDataStd_ReferenceList.h"
#include "../Converter.h"
#include "../Standard/Standard_GUID.h"
#include "../TDF/TDF_Label.h"
#include "../TDF/TDF_LabelList.h"
#include "../TDF/TDF_Attribute.h"
#include "../TDF/TDF_RelocationTable.h"
#include "../TDF/TDF_DataSet.h"


using namespace OCNaroWrappers;

OCTDataStd_ReferenceList::OCTDataStd_ReferenceList(Handle(TDataStd_ReferenceList)* nativeHandle) : OCTDF_Attribute((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDataStd_ReferenceList(*nativeHandle);
}

OCStandard_GUID^ OCTDataStd_ReferenceList::GetID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = TDataStd_ReferenceList::GetID();
  return gcnew OCStandard_GUID(tmp);
}

OCTDataStd_ReferenceList^ OCTDataStd_ReferenceList::Set(OCNaroWrappers::OCTDF_Label^ label)
{
  Handle(TDataStd_ReferenceList) tmp = TDataStd_ReferenceList::Set(*((TDF_Label*)label->Handle));
  return gcnew OCTDataStd_ReferenceList(&tmp);
}

OCTDataStd_ReferenceList::OCTDataStd_ReferenceList() : OCTDF_Attribute((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDataStd_ReferenceList(new TDataStd_ReferenceList());
}

 System::Boolean OCTDataStd_ReferenceList::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_ReferenceList*)nativeHandle))->IsEmpty());
}

 Standard_Integer OCTDataStd_ReferenceList::Extent()
{
  return (*((Handle_TDataStd_ReferenceList*)nativeHandle))->Extent();
}

 void OCTDataStd_ReferenceList::Prepend(OCNaroWrappers::OCTDF_Label^ value)
{
  (*((Handle_TDataStd_ReferenceList*)nativeHandle))->Prepend(*((TDF_Label*)value->Handle));
}

 void OCTDataStd_ReferenceList::Append(OCNaroWrappers::OCTDF_Label^ value)
{
  (*((Handle_TDataStd_ReferenceList*)nativeHandle))->Append(*((TDF_Label*)value->Handle));
}

 System::Boolean OCTDataStd_ReferenceList::InsertBefore(OCNaroWrappers::OCTDF_Label^ value, OCNaroWrappers::OCTDF_Label^ before_value)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_ReferenceList*)nativeHandle))->InsertBefore(*((TDF_Label*)value->Handle), *((TDF_Label*)before_value->Handle)));
}

 System::Boolean OCTDataStd_ReferenceList::InsertAfter(OCNaroWrappers::OCTDF_Label^ value, OCNaroWrappers::OCTDF_Label^ after_value)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_ReferenceList*)nativeHandle))->InsertAfter(*((TDF_Label*)value->Handle), *((TDF_Label*)after_value->Handle)));
}

 System::Boolean OCTDataStd_ReferenceList::Remove(OCNaroWrappers::OCTDF_Label^ value)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_ReferenceList*)nativeHandle))->Remove(*((TDF_Label*)value->Handle)));
}

 void OCTDataStd_ReferenceList::Clear()
{
  (*((Handle_TDataStd_ReferenceList*)nativeHandle))->Clear();
}

OCTDF_Label^ OCTDataStd_ReferenceList::First()
{
  TDF_Label* tmp = new TDF_Label();
  *tmp = (*((Handle_TDataStd_ReferenceList*)nativeHandle))->First();
  return gcnew OCTDF_Label(tmp);
}

OCTDF_Label^ OCTDataStd_ReferenceList::Last()
{
  TDF_Label* tmp = new TDF_Label();
  *tmp = (*((Handle_TDataStd_ReferenceList*)nativeHandle))->Last();
  return gcnew OCTDF_Label(tmp);
}

OCTDF_LabelList^ OCTDataStd_ReferenceList::List()
{
  TDF_LabelList* tmp = new TDF_LabelList();
  *tmp = (*((Handle_TDataStd_ReferenceList*)nativeHandle))->List();
  return gcnew OCTDF_LabelList(tmp);
}

OCStandard_GUID^ OCTDataStd_ReferenceList::ID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = (*((Handle_TDataStd_ReferenceList*)nativeHandle))->ID();
  return gcnew OCStandard_GUID(tmp);
}

 void OCTDataStd_ReferenceList::Restore(OCNaroWrappers::OCTDF_Attribute^ With)
{
  (*((Handle_TDataStd_ReferenceList*)nativeHandle))->Restore(*((Handle_TDF_Attribute*)With->Handle));
}

OCTDF_Attribute^ OCTDataStd_ReferenceList::NewEmpty()
{
  Handle(TDF_Attribute) tmp = (*((Handle_TDataStd_ReferenceList*)nativeHandle))->NewEmpty();
  return gcnew OCTDF_Attribute(&tmp);
}

 void OCTDataStd_ReferenceList::Paste(OCNaroWrappers::OCTDF_Attribute^ Into, OCNaroWrappers::OCTDF_RelocationTable^ RT)
{
  (*((Handle_TDataStd_ReferenceList*)nativeHandle))->Paste(*((Handle_TDF_Attribute*)Into->Handle), *((Handle_TDF_RelocationTable*)RT->Handle));
}

 void OCTDataStd_ReferenceList::References(OCNaroWrappers::OCTDF_DataSet^ DS)
{
  (*((Handle_TDataStd_ReferenceList*)nativeHandle))->References(*((Handle_TDF_DataSet*)DS->Handle));
}

 Standard_OStream& OCTDataStd_ReferenceList::Dump(Standard_OStream& anOS)
{
  return (*((Handle_TDataStd_ReferenceList*)nativeHandle))->Dump(anOS);
}

