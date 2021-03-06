// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_GeneralProperty_OCWrappers_HeaderFile
#define _StepBasic_GeneralProperty_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_GeneralProperty.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;


//! Representation of STEP entity GeneralProperty <br>
public ref class OCStepBasic_GeneralProperty : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepBasic_GeneralProperty(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_GeneralProperty(Handle(StepBasic_GeneralProperty)* nativeHandle);

// Methods PUBLIC

//! Empty constructor <br>
OCStepBasic_GeneralProperty();

//! Initialize all fields (own and inherited) <br>
 /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aId, OCNaroWrappers::OCTCollection_HAsciiString^ aName, System::Boolean hasDescription, OCNaroWrappers::OCTCollection_HAsciiString^ aDescription) ;

//! Returns field Id <br>
 /*instead*/  OCTCollection_HAsciiString^ Id() ;

//! Set field Id <br>
 /*instead*/  void SetId(OCNaroWrappers::OCTCollection_HAsciiString^ Id) ;

//! Returns field Name <br>
 /*instead*/  OCTCollection_HAsciiString^ Name() ;

//! Set field Name <br>
 /*instead*/  void SetName(OCNaroWrappers::OCTCollection_HAsciiString^ Name) ;

//! Returns field Description <br>
 /*instead*/  OCTCollection_HAsciiString^ Description() ;

//! Set field Description <br>
 /*instead*/  void SetDescription(OCNaroWrappers::OCTCollection_HAsciiString^ Description) ;

//! Returns True if optional field Description is defined <br>
 /*instead*/  System::Boolean HasDescription() ;

~OCStepBasic_GeneralProperty()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
