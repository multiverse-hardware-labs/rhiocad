// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_MeasureWithUnit_OCWrappers_HeaderFile
#define _StepBasic_MeasureWithUnit_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_MeasureWithUnit.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "StepBasic_MeasureValueMember.h"
#include "StepBasic_Unit.h"


namespace OCNaroWrappers
{

ref class OCStepBasic_MeasureValueMember;
ref class OCStepBasic_Unit;



public ref class OCStepBasic_MeasureWithUnit : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepBasic_MeasureWithUnit(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_MeasureWithUnit(Handle(StepBasic_MeasureWithUnit)* nativeHandle);

// Methods PUBLIC

//! Returns a MeasureWithUnit <br>
OCStepBasic_MeasureWithUnit();


virtual /*instead*/  void Init(OCNaroWrappers::OCStepBasic_MeasureValueMember^ aValueComponent, OCNaroWrappers::OCStepBasic_Unit^ aUnitComponent) ;


 /*instead*/  void SetValueComponent(Standard_Real aValueComponent) ;


 /*instead*/  Standard_Real ValueComponent() ;


 /*instead*/  OCStepBasic_MeasureValueMember^ ValueComponentMember() ;


 /*instead*/  void SetValueComponentMember(OCNaroWrappers::OCStepBasic_MeasureValueMember^ val) ;


 /*instead*/  void SetUnitComponent(OCNaroWrappers::OCStepBasic_Unit^ aUnitComponent) ;


 /*instead*/  OCStepBasic_Unit^ UnitComponent() ;

~OCStepBasic_MeasureWithUnit()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
