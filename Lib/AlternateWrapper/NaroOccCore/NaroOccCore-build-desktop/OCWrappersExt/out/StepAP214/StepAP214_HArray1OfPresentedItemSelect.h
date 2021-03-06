// File generated by CPPExt (Transient)
//
#ifndef _StepAP214_HArray1OfPresentedItemSelect_OCWrappers_HeaderFile
#define _StepAP214_HArray1OfPresentedItemSelect_OCWrappers_HeaderFile

// include the wrapped class
#include <StepAP214_HArray1OfPresentedItemSelect.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "StepAP214_Array1OfPresentedItemSelect.h"


namespace OCNaroWrappers
{

ref class OCStepAP214_PresentedItemSelect;
ref class OCStepAP214_Array1OfPresentedItemSelect;



public ref class OCStepAP214_HArray1OfPresentedItemSelect : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepAP214_HArray1OfPresentedItemSelect(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepAP214_HArray1OfPresentedItemSelect(Handle(StepAP214_HArray1OfPresentedItemSelect)* nativeHandle);

// Methods PUBLIC


OCStepAP214_HArray1OfPresentedItemSelect(Standard_Integer Low, Standard_Integer Up);


OCStepAP214_HArray1OfPresentedItemSelect(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepAP214_PresentedItemSelect^ V);


 /*instead*/  void Init(OCNaroWrappers::OCStepAP214_PresentedItemSelect^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepAP214_PresentedItemSelect^ Value) ;


 /*instead*/  OCStepAP214_PresentedItemSelect^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepAP214_PresentedItemSelect^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCStepAP214_Array1OfPresentedItemSelect^ Array1() ;


 /*instead*/  OCStepAP214_Array1OfPresentedItemSelect^ ChangeArray1() ;

~OCStepAP214_HArray1OfPresentedItemSelect()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
