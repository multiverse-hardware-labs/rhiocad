// File generated by CPPExt (Transient)
//
#ifndef _StepData_DefaultGeneral_OCWrappers_HeaderFile
#define _StepData_DefaultGeneral_OCWrappers_HeaderFile

// include the wrapped class
#include <StepData_DefaultGeneral.hxx>
#include "../Converter.h"

#include "StepData_GeneralModule.h"



namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCInterface_EntityIterator;
ref class OCInterface_ShareTool;
ref class OCInterface_Check;
ref class OCInterface_CopyTool;


//! DefaultGeneral defines a GeneralModule which processes <br>
//!           Unknown Entity from StepData  only <br>
public ref class OCStepData_DefaultGeneral : OCStepData_GeneralModule {

protected:
  // dummy constructor;
  OCStepData_DefaultGeneral(OCDummy^) : OCStepData_GeneralModule((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepData_DefaultGeneral(Handle(StepData_DefaultGeneral)* nativeHandle);

// Methods PUBLIC

//! Creates a Default General Module <br>
OCStepData_DefaultGeneral();

//! Specific filling of the list of Entities shared by an Entity <br>
//!           <ent>, which is an UnknownEntity from StepData. <br>
 /*instead*/  void FillSharedCase(Standard_Integer casenum, OCNaroWrappers::OCStandard_Transient^ ent, OCNaroWrappers::OCInterface_EntityIterator^ iter) ;

//! Specific Checking of an Entity <ent> <br>
 /*instead*/  void CheckCase(Standard_Integer casenum, OCNaroWrappers::OCStandard_Transient^ ent, OCNaroWrappers::OCInterface_ShareTool^ shares, OCNaroWrappers::OCInterface_Check^ ach) ;

//! Specific creation of a new void entity <br>
 /*instead*/  System::Boolean NewVoid(Standard_Integer CN, OCNaroWrappers::OCStandard_Transient^ entto) ;

//! Specific Copy ("Deep") from <entfrom> to <entto> (same type) <br>
//!           by using a CopyTool which provides its working Map. <br>
//!           Use method Transferred from TransferControl to work <br>
 /*instead*/  void CopyCase(Standard_Integer casenum, OCNaroWrappers::OCStandard_Transient^ entfrom, OCNaroWrappers::OCStandard_Transient^ entto, OCNaroWrappers::OCInterface_CopyTool^ TC) ;

~OCStepData_DefaultGeneral()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif