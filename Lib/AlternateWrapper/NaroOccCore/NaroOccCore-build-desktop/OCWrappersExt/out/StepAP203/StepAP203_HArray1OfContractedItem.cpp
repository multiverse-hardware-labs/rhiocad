// File generated by CPPExt (CPP file)
//

#include "StepAP203_HArray1OfContractedItem.h"
#include "../Converter.h"
#include "StepAP203_ContractedItem.h"
#include "StepAP203_Array1OfContractedItem.h"


using namespace OCNaroWrappers;

OCStepAP203_HArray1OfContractedItem::OCStepAP203_HArray1OfContractedItem(Handle(StepAP203_HArray1OfContractedItem)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepAP203_HArray1OfContractedItem(*nativeHandle);
}

OCStepAP203_HArray1OfContractedItem::OCStepAP203_HArray1OfContractedItem(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepAP203_HArray1OfContractedItem(new StepAP203_HArray1OfContractedItem(Low, Up));
}

OCStepAP203_HArray1OfContractedItem::OCStepAP203_HArray1OfContractedItem(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepAP203_ContractedItem^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepAP203_HArray1OfContractedItem(new StepAP203_HArray1OfContractedItem(Low, Up, *((StepAP203_ContractedItem*)V->Handle)));
}

 void OCStepAP203_HArray1OfContractedItem::Init(OCNaroWrappers::OCStepAP203_ContractedItem^ V)
{
  (*((Handle_StepAP203_HArray1OfContractedItem*)nativeHandle))->Init(*((StepAP203_ContractedItem*)V->Handle));
}

 Standard_Integer OCStepAP203_HArray1OfContractedItem::Length()
{
  return (*((Handle_StepAP203_HArray1OfContractedItem*)nativeHandle))->Length();
}

 Standard_Integer OCStepAP203_HArray1OfContractedItem::Lower()
{
  return (*((Handle_StepAP203_HArray1OfContractedItem*)nativeHandle))->Lower();
}

 Standard_Integer OCStepAP203_HArray1OfContractedItem::Upper()
{
  return (*((Handle_StepAP203_HArray1OfContractedItem*)nativeHandle))->Upper();
}

 void OCStepAP203_HArray1OfContractedItem::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepAP203_ContractedItem^ Value)
{
  (*((Handle_StepAP203_HArray1OfContractedItem*)nativeHandle))->SetValue(Index, *((StepAP203_ContractedItem*)Value->Handle));
}

OCStepAP203_ContractedItem^ OCStepAP203_HArray1OfContractedItem::Value(Standard_Integer Index)
{
  StepAP203_ContractedItem* tmp = new StepAP203_ContractedItem();
  *tmp = (*((Handle_StepAP203_HArray1OfContractedItem*)nativeHandle))->Value(Index);
  return gcnew OCStepAP203_ContractedItem(tmp);
}

OCStepAP203_ContractedItem^ OCStepAP203_HArray1OfContractedItem::ChangeValue(Standard_Integer Index)
{
  StepAP203_ContractedItem* tmp = new StepAP203_ContractedItem();
  *tmp = (*((Handle_StepAP203_HArray1OfContractedItem*)nativeHandle))->ChangeValue(Index);
  return gcnew OCStepAP203_ContractedItem(tmp);
}

OCStepAP203_Array1OfContractedItem^ OCStepAP203_HArray1OfContractedItem::Array1()
{
  StepAP203_Array1OfContractedItem* tmp = new StepAP203_Array1OfContractedItem(0, 0);
  *tmp = (*((Handle_StepAP203_HArray1OfContractedItem*)nativeHandle))->Array1();
  return gcnew OCStepAP203_Array1OfContractedItem(tmp);
}

OCStepAP203_Array1OfContractedItem^ OCStepAP203_HArray1OfContractedItem::ChangeArray1()
{
  StepAP203_Array1OfContractedItem* tmp = new StepAP203_Array1OfContractedItem(0, 0);
  *tmp = (*((Handle_StepAP203_HArray1OfContractedItem*)nativeHandle))->ChangeArray1();
  return gcnew OCStepAP203_Array1OfContractedItem(tmp);
}


