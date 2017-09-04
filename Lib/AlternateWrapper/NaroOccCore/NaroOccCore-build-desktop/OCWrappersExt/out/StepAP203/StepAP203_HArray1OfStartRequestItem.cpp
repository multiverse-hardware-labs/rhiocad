// File generated by CPPExt (CPP file)
//

#include "StepAP203_HArray1OfStartRequestItem.h"
#include "../Converter.h"
#include "StepAP203_StartRequestItem.h"
#include "StepAP203_Array1OfStartRequestItem.h"


using namespace OCNaroWrappers;

OCStepAP203_HArray1OfStartRequestItem::OCStepAP203_HArray1OfStartRequestItem(Handle(StepAP203_HArray1OfStartRequestItem)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepAP203_HArray1OfStartRequestItem(*nativeHandle);
}

OCStepAP203_HArray1OfStartRequestItem::OCStepAP203_HArray1OfStartRequestItem(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepAP203_HArray1OfStartRequestItem(new StepAP203_HArray1OfStartRequestItem(Low, Up));
}

OCStepAP203_HArray1OfStartRequestItem::OCStepAP203_HArray1OfStartRequestItem(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepAP203_StartRequestItem^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepAP203_HArray1OfStartRequestItem(new StepAP203_HArray1OfStartRequestItem(Low, Up, *((StepAP203_StartRequestItem*)V->Handle)));
}

 void OCStepAP203_HArray1OfStartRequestItem::Init(OCNaroWrappers::OCStepAP203_StartRequestItem^ V)
{
  (*((Handle_StepAP203_HArray1OfStartRequestItem*)nativeHandle))->Init(*((StepAP203_StartRequestItem*)V->Handle));
}

 Standard_Integer OCStepAP203_HArray1OfStartRequestItem::Length()
{
  return (*((Handle_StepAP203_HArray1OfStartRequestItem*)nativeHandle))->Length();
}

 Standard_Integer OCStepAP203_HArray1OfStartRequestItem::Lower()
{
  return (*((Handle_StepAP203_HArray1OfStartRequestItem*)nativeHandle))->Lower();
}

 Standard_Integer OCStepAP203_HArray1OfStartRequestItem::Upper()
{
  return (*((Handle_StepAP203_HArray1OfStartRequestItem*)nativeHandle))->Upper();
}

 void OCStepAP203_HArray1OfStartRequestItem::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepAP203_StartRequestItem^ Value)
{
  (*((Handle_StepAP203_HArray1OfStartRequestItem*)nativeHandle))->SetValue(Index, *((StepAP203_StartRequestItem*)Value->Handle));
}

OCStepAP203_StartRequestItem^ OCStepAP203_HArray1OfStartRequestItem::Value(Standard_Integer Index)
{
  StepAP203_StartRequestItem* tmp = new StepAP203_StartRequestItem();
  *tmp = (*((Handle_StepAP203_HArray1OfStartRequestItem*)nativeHandle))->Value(Index);
  return gcnew OCStepAP203_StartRequestItem(tmp);
}

OCStepAP203_StartRequestItem^ OCStepAP203_HArray1OfStartRequestItem::ChangeValue(Standard_Integer Index)
{
  StepAP203_StartRequestItem* tmp = new StepAP203_StartRequestItem();
  *tmp = (*((Handle_StepAP203_HArray1OfStartRequestItem*)nativeHandle))->ChangeValue(Index);
  return gcnew OCStepAP203_StartRequestItem(tmp);
}

OCStepAP203_Array1OfStartRequestItem^ OCStepAP203_HArray1OfStartRequestItem::Array1()
{
  StepAP203_Array1OfStartRequestItem* tmp = new StepAP203_Array1OfStartRequestItem(0, 0);
  *tmp = (*((Handle_StepAP203_HArray1OfStartRequestItem*)nativeHandle))->Array1();
  return gcnew OCStepAP203_Array1OfStartRequestItem(tmp);
}

OCStepAP203_Array1OfStartRequestItem^ OCStepAP203_HArray1OfStartRequestItem::ChangeArray1()
{
  StepAP203_Array1OfStartRequestItem* tmp = new StepAP203_Array1OfStartRequestItem(0, 0);
  *tmp = (*((Handle_StepAP203_HArray1OfStartRequestItem*)nativeHandle))->ChangeArray1();
  return gcnew OCStepAP203_Array1OfStartRequestItem(tmp);
}

