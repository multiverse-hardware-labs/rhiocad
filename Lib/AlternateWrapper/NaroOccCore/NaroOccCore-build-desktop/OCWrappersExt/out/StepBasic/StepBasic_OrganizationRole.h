// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_OrganizationRole_OCWrappers_HeaderFile
#define _StepBasic_OrganizationRole_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_OrganizationRole.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;



public ref class OCStepBasic_OrganizationRole : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepBasic_OrganizationRole(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_OrganizationRole(Handle(StepBasic_OrganizationRole)* nativeHandle);

// Methods PUBLIC

//! Returns a OrganizationRole <br>
OCStepBasic_OrganizationRole();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


 /*instead*/  void SetName(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


 /*instead*/  OCTCollection_HAsciiString^ Name() ;

~OCStepBasic_OrganizationRole()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
