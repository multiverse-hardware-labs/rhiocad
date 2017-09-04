// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_ProductCategory_OCWrappers_HeaderFile
#define _StepBasic_ProductCategory_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_ProductCategory.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;



public ref class OCStepBasic_ProductCategory : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepBasic_ProductCategory(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_ProductCategory(Handle(StepBasic_ProductCategory)* nativeHandle);

// Methods PUBLIC

//! Returns a ProductCategory <br>
OCStepBasic_ProductCategory();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, System::Boolean hasAdescription, OCNaroWrappers::OCTCollection_HAsciiString^ aDescription) ;


 /*instead*/  void SetName(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


 /*instead*/  OCTCollection_HAsciiString^ Name() ;


 /*instead*/  void SetDescription(OCNaroWrappers::OCTCollection_HAsciiString^ aDescription) ;


 /*instead*/  void UnSetDescription() ;


 /*instead*/  OCTCollection_HAsciiString^ Description() ;


 /*instead*/  System::Boolean HasDescription() ;

~OCStepBasic_ProductCategory()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif