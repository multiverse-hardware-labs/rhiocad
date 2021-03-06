// File generated by CPPExt (Transient)
//
#ifndef _StepData_GeneralModule_OCWrappers_HeaderFile
#define _StepData_GeneralModule_OCWrappers_HeaderFile

// include the wrapped class
#include <StepData_GeneralModule.hxx>
#include "../Converter.h"

#include "../Interface/Interface_GeneralModule.h"



namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCInterface_EntityIterator;
ref class OCInterface_ShareTool;
ref class OCInterface_Check;
ref class OCInterface_CopyTool;


//! Specific features for General Services adapted to STEP <br>
public ref class OCStepData_GeneralModule : OCInterface_GeneralModule {

protected:
  // dummy constructor;
  OCStepData_GeneralModule(OCDummy^) : OCInterface_GeneralModule((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepData_GeneralModule(Handle(StepData_GeneralModule)* nativeHandle);

// Methods PUBLIC

~OCStepData_GeneralModule()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
