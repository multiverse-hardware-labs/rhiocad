// File generated by CPPExt (CPP file)
//

#include "StepBasic_HArray1OfNamedUnit.h"
#include "../Converter.h"
#include "StepBasic_NamedUnit.h"
#include "StepBasic_Array1OfNamedUnit.h"


using namespace OCNaroWrappers;

OCStepBasic_HArray1OfNamedUnit::OCStepBasic_HArray1OfNamedUnit(Handle(StepBasic_HArray1OfNamedUnit)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_HArray1OfNamedUnit(*nativeHandle);
}

OCStepBasic_HArray1OfNamedUnit::OCStepBasic_HArray1OfNamedUnit(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_HArray1OfNamedUnit(new StepBasic_HArray1OfNamedUnit(Low, Up));
}

OCStepBasic_HArray1OfNamedUnit::OCStepBasic_HArray1OfNamedUnit(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepBasic_NamedUnit^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_HArray1OfNamedUnit(new StepBasic_HArray1OfNamedUnit(Low, Up, *((Handle_StepBasic_NamedUnit*)V->Handle)));
}

 void OCStepBasic_HArray1OfNamedUnit::Init(OCNaroWrappers::OCStepBasic_NamedUnit^ V)
{
  (*((Handle_StepBasic_HArray1OfNamedUnit*)nativeHandle))->Init(*((Handle_StepBasic_NamedUnit*)V->Handle));
}

 Standard_Integer OCStepBasic_HArray1OfNamedUnit::Length()
{
  return (*((Handle_StepBasic_HArray1OfNamedUnit*)nativeHandle))->Length();
}

 Standard_Integer OCStepBasic_HArray1OfNamedUnit::Lower()
{
  return (*((Handle_StepBasic_HArray1OfNamedUnit*)nativeHandle))->Lower();
}

 Standard_Integer OCStepBasic_HArray1OfNamedUnit::Upper()
{
  return (*((Handle_StepBasic_HArray1OfNamedUnit*)nativeHandle))->Upper();
}

 void OCStepBasic_HArray1OfNamedUnit::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepBasic_NamedUnit^ Value)
{
  (*((Handle_StepBasic_HArray1OfNamedUnit*)nativeHandle))->SetValue(Index, *((Handle_StepBasic_NamedUnit*)Value->Handle));
}

OCStepBasic_NamedUnit^ OCStepBasic_HArray1OfNamedUnit::Value(Standard_Integer Index)
{
  Handle(StepBasic_NamedUnit) tmp = (*((Handle_StepBasic_HArray1OfNamedUnit*)nativeHandle))->Value(Index);
  return gcnew OCStepBasic_NamedUnit(&tmp);
}

OCStepBasic_NamedUnit^ OCStepBasic_HArray1OfNamedUnit::ChangeValue(Standard_Integer Index)
{
  Handle(StepBasic_NamedUnit) tmp = (*((Handle_StepBasic_HArray1OfNamedUnit*)nativeHandle))->ChangeValue(Index);
  return gcnew OCStepBasic_NamedUnit(&tmp);
}

OCStepBasic_Array1OfNamedUnit^ OCStepBasic_HArray1OfNamedUnit::Array1()
{
  StepBasic_Array1OfNamedUnit* tmp = new StepBasic_Array1OfNamedUnit(0, 0);
  *tmp = (*((Handle_StepBasic_HArray1OfNamedUnit*)nativeHandle))->Array1();
  return gcnew OCStepBasic_Array1OfNamedUnit(tmp);
}

OCStepBasic_Array1OfNamedUnit^ OCStepBasic_HArray1OfNamedUnit::ChangeArray1()
{
  StepBasic_Array1OfNamedUnit* tmp = new StepBasic_Array1OfNamedUnit(0, 0);
  *tmp = (*((Handle_StepBasic_HArray1OfNamedUnit*)nativeHandle))->ChangeArray1();
  return gcnew OCStepBasic_Array1OfNamedUnit(tmp);
}


