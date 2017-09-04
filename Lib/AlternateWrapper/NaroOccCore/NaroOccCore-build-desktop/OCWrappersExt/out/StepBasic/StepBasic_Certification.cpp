// File generated by CPPExt (CPP file)
//

#include "StepBasic_Certification.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepBasic_CertificationType.h"


using namespace OCNaroWrappers;

OCStepBasic_Certification::OCStepBasic_Certification(Handle(StepBasic_Certification)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_Certification(*nativeHandle);
}

OCStepBasic_Certification::OCStepBasic_Certification() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_Certification(new StepBasic_Certification());
}

 void OCStepBasic_Certification::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCTCollection_HAsciiString^ aPurpose, OCNaroWrappers::OCStepBasic_CertificationType^ aKind)
{
  (*((Handle_StepBasic_Certification*)nativeHandle))->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((Handle_TCollection_HAsciiString*)aPurpose->Handle), *((Handle_StepBasic_CertificationType*)aKind->Handle));
}

OCTCollection_HAsciiString^ OCStepBasic_Certification::Name()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_StepBasic_Certification*)nativeHandle))->Name();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 void OCStepBasic_Certification::SetName(OCNaroWrappers::OCTCollection_HAsciiString^ Name)
{
  (*((Handle_StepBasic_Certification*)nativeHandle))->SetName(*((Handle_TCollection_HAsciiString*)Name->Handle));
}

OCTCollection_HAsciiString^ OCStepBasic_Certification::Purpose()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_StepBasic_Certification*)nativeHandle))->Purpose();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 void OCStepBasic_Certification::SetPurpose(OCNaroWrappers::OCTCollection_HAsciiString^ Purpose)
{
  (*((Handle_StepBasic_Certification*)nativeHandle))->SetPurpose(*((Handle_TCollection_HAsciiString*)Purpose->Handle));
}

OCStepBasic_CertificationType^ OCStepBasic_Certification::Kind()
{
  Handle(StepBasic_CertificationType) tmp = (*((Handle_StepBasic_Certification*)nativeHandle))->Kind();
  return gcnew OCStepBasic_CertificationType(&tmp);
}

 void OCStepBasic_Certification::SetKind(OCNaroWrappers::OCStepBasic_CertificationType^ Kind)
{
  (*((Handle_StepBasic_Certification*)nativeHandle))->SetKind(*((Handle_StepBasic_CertificationType*)Kind->Handle));
}

