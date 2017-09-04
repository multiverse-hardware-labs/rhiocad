// File generated by CPPExt (CPP file)
//

#include "StepVisual_CurveStyleFontSelect.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "StepVisual_CurveStyleFont.h"
#include "StepVisual_PreDefinedCurveFont.h"
#include "StepVisual_ExternallyDefinedCurveFont.h"


using namespace OCNaroWrappers;

OCStepVisual_CurveStyleFontSelect::OCStepVisual_CurveStyleFontSelect(StepVisual_CurveStyleFontSelect* nativeHandle) : OCStepData_SelectType((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepVisual_CurveStyleFontSelect::OCStepVisual_CurveStyleFontSelect() : OCStepData_SelectType((OCDummy^)nullptr)

{
  nativeHandle = new StepVisual_CurveStyleFontSelect();
}

 Standard_Integer OCStepVisual_CurveStyleFontSelect::CaseNum(OCNaroWrappers::OCStandard_Transient^ ent)
{
  return ((StepVisual_CurveStyleFontSelect*)nativeHandle)->CaseNum(*((Handle_Standard_Transient*)ent->Handle));
}

OCStepVisual_CurveStyleFont^ OCStepVisual_CurveStyleFontSelect::CurveStyleFont()
{
  Handle(StepVisual_CurveStyleFont) tmp = ((StepVisual_CurveStyleFontSelect*)nativeHandle)->CurveStyleFont();
  return gcnew OCStepVisual_CurveStyleFont(&tmp);
}

OCStepVisual_PreDefinedCurveFont^ OCStepVisual_CurveStyleFontSelect::PreDefinedCurveFont()
{
  Handle(StepVisual_PreDefinedCurveFont) tmp = ((StepVisual_CurveStyleFontSelect*)nativeHandle)->PreDefinedCurveFont();
  return gcnew OCStepVisual_PreDefinedCurveFont(&tmp);
}

OCStepVisual_ExternallyDefinedCurveFont^ OCStepVisual_CurveStyleFontSelect::ExternallyDefinedCurveFont()
{
  Handle(StepVisual_ExternallyDefinedCurveFont) tmp = ((StepVisual_CurveStyleFontSelect*)nativeHandle)->ExternallyDefinedCurveFont();
  return gcnew OCStepVisual_ExternallyDefinedCurveFont(&tmp);
}

