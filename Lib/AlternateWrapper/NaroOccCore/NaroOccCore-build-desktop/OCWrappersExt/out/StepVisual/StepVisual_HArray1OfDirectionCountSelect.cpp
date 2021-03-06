// File generated by CPPExt (CPP file)
//

#include "StepVisual_HArray1OfDirectionCountSelect.h"
#include "../Converter.h"
#include "StepVisual_DirectionCountSelect.h"
#include "StepVisual_Array1OfDirectionCountSelect.h"


using namespace OCNaroWrappers;

OCStepVisual_HArray1OfDirectionCountSelect::OCStepVisual_HArray1OfDirectionCountSelect(Handle(StepVisual_HArray1OfDirectionCountSelect)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepVisual_HArray1OfDirectionCountSelect(*nativeHandle);
}

OCStepVisual_HArray1OfDirectionCountSelect::OCStepVisual_HArray1OfDirectionCountSelect(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepVisual_HArray1OfDirectionCountSelect(new StepVisual_HArray1OfDirectionCountSelect(Low, Up));
}

OCStepVisual_HArray1OfDirectionCountSelect::OCStepVisual_HArray1OfDirectionCountSelect(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepVisual_DirectionCountSelect^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepVisual_HArray1OfDirectionCountSelect(new StepVisual_HArray1OfDirectionCountSelect(Low, Up, *((StepVisual_DirectionCountSelect*)V->Handle)));
}

 void OCStepVisual_HArray1OfDirectionCountSelect::Init(OCNaroWrappers::OCStepVisual_DirectionCountSelect^ V)
{
  (*((Handle_StepVisual_HArray1OfDirectionCountSelect*)nativeHandle))->Init(*((StepVisual_DirectionCountSelect*)V->Handle));
}

 Standard_Integer OCStepVisual_HArray1OfDirectionCountSelect::Length()
{
  return (*((Handle_StepVisual_HArray1OfDirectionCountSelect*)nativeHandle))->Length();
}

 Standard_Integer OCStepVisual_HArray1OfDirectionCountSelect::Lower()
{
  return (*((Handle_StepVisual_HArray1OfDirectionCountSelect*)nativeHandle))->Lower();
}

 Standard_Integer OCStepVisual_HArray1OfDirectionCountSelect::Upper()
{
  return (*((Handle_StepVisual_HArray1OfDirectionCountSelect*)nativeHandle))->Upper();
}

 void OCStepVisual_HArray1OfDirectionCountSelect::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepVisual_DirectionCountSelect^ Value)
{
  (*((Handle_StepVisual_HArray1OfDirectionCountSelect*)nativeHandle))->SetValue(Index, *((StepVisual_DirectionCountSelect*)Value->Handle));
}

OCStepVisual_DirectionCountSelect^ OCStepVisual_HArray1OfDirectionCountSelect::Value(Standard_Integer Index)
{
  StepVisual_DirectionCountSelect* tmp = new StepVisual_DirectionCountSelect();
  *tmp = (*((Handle_StepVisual_HArray1OfDirectionCountSelect*)nativeHandle))->Value(Index);
  return gcnew OCStepVisual_DirectionCountSelect(tmp);
}

OCStepVisual_DirectionCountSelect^ OCStepVisual_HArray1OfDirectionCountSelect::ChangeValue(Standard_Integer Index)
{
  StepVisual_DirectionCountSelect* tmp = new StepVisual_DirectionCountSelect();
  *tmp = (*((Handle_StepVisual_HArray1OfDirectionCountSelect*)nativeHandle))->ChangeValue(Index);
  return gcnew OCStepVisual_DirectionCountSelect(tmp);
}

OCStepVisual_Array1OfDirectionCountSelect^ OCStepVisual_HArray1OfDirectionCountSelect::Array1()
{
  StepVisual_Array1OfDirectionCountSelect* tmp = new StepVisual_Array1OfDirectionCountSelect(0, 0);
  *tmp = (*((Handle_StepVisual_HArray1OfDirectionCountSelect*)nativeHandle))->Array1();
  return gcnew OCStepVisual_Array1OfDirectionCountSelect(tmp);
}

OCStepVisual_Array1OfDirectionCountSelect^ OCStepVisual_HArray1OfDirectionCountSelect::ChangeArray1()
{
  StepVisual_Array1OfDirectionCountSelect* tmp = new StepVisual_Array1OfDirectionCountSelect(0, 0);
  *tmp = (*((Handle_StepVisual_HArray1OfDirectionCountSelect*)nativeHandle))->ChangeArray1();
  return gcnew OCStepVisual_Array1OfDirectionCountSelect(tmp);
}


