// File generated by CPPExt (CPP file)
//

#include "StepBasic_HArray1OfProduct.h"
#include "../Converter.h"
#include "StepBasic_Product.h"
#include "StepBasic_Array1OfProduct.h"


using namespace OCNaroWrappers;

OCStepBasic_HArray1OfProduct::OCStepBasic_HArray1OfProduct(Handle(StepBasic_HArray1OfProduct)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_HArray1OfProduct(*nativeHandle);
}

OCStepBasic_HArray1OfProduct::OCStepBasic_HArray1OfProduct(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_HArray1OfProduct(new StepBasic_HArray1OfProduct(Low, Up));
}

OCStepBasic_HArray1OfProduct::OCStepBasic_HArray1OfProduct(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepBasic_Product^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_HArray1OfProduct(new StepBasic_HArray1OfProduct(Low, Up, *((Handle_StepBasic_Product*)V->Handle)));
}

 void OCStepBasic_HArray1OfProduct::Init(OCNaroWrappers::OCStepBasic_Product^ V)
{
  (*((Handle_StepBasic_HArray1OfProduct*)nativeHandle))->Init(*((Handle_StepBasic_Product*)V->Handle));
}

 Standard_Integer OCStepBasic_HArray1OfProduct::Length()
{
  return (*((Handle_StepBasic_HArray1OfProduct*)nativeHandle))->Length();
}

 Standard_Integer OCStepBasic_HArray1OfProduct::Lower()
{
  return (*((Handle_StepBasic_HArray1OfProduct*)nativeHandle))->Lower();
}

 Standard_Integer OCStepBasic_HArray1OfProduct::Upper()
{
  return (*((Handle_StepBasic_HArray1OfProduct*)nativeHandle))->Upper();
}

 void OCStepBasic_HArray1OfProduct::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepBasic_Product^ Value)
{
  (*((Handle_StepBasic_HArray1OfProduct*)nativeHandle))->SetValue(Index, *((Handle_StepBasic_Product*)Value->Handle));
}

OCStepBasic_Product^ OCStepBasic_HArray1OfProduct::Value(Standard_Integer Index)
{
  Handle(StepBasic_Product) tmp = (*((Handle_StepBasic_HArray1OfProduct*)nativeHandle))->Value(Index);
  return gcnew OCStepBasic_Product(&tmp);
}

OCStepBasic_Product^ OCStepBasic_HArray1OfProduct::ChangeValue(Standard_Integer Index)
{
  Handle(StepBasic_Product) tmp = (*((Handle_StepBasic_HArray1OfProduct*)nativeHandle))->ChangeValue(Index);
  return gcnew OCStepBasic_Product(&tmp);
}

OCStepBasic_Array1OfProduct^ OCStepBasic_HArray1OfProduct::Array1()
{
  StepBasic_Array1OfProduct* tmp = new StepBasic_Array1OfProduct(0, 0);
  *tmp = (*((Handle_StepBasic_HArray1OfProduct*)nativeHandle))->Array1();
  return gcnew OCStepBasic_Array1OfProduct(tmp);
}

OCStepBasic_Array1OfProduct^ OCStepBasic_HArray1OfProduct::ChangeArray1()
{
  StepBasic_Array1OfProduct* tmp = new StepBasic_Array1OfProduct(0, 0);
  *tmp = (*((Handle_StepBasic_HArray1OfProduct*)nativeHandle))->ChangeArray1();
  return gcnew OCStepBasic_Array1OfProduct(tmp);
}


