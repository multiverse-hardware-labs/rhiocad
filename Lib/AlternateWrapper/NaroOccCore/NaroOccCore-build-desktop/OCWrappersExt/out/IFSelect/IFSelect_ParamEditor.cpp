// File generated by CPPExt (CPP file)
//

#include "IFSelect_ParamEditor.h"
#include "../Converter.h"
#include "../Interface/Interface_TypedValue.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "IFSelect_EditForm.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "../Standard/Standard_Transient.h"
#include "../Interface/Interface_InterfaceModel.h"
#include "../TColStd/TColStd_HSequenceOfHAsciiString.h"


using namespace OCNaroWrappers;

OCIFSelect_ParamEditor::OCIFSelect_ParamEditor(Handle(IFSelect_ParamEditor)* nativeHandle) : OCIFSelect_Editor((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_IFSelect_ParamEditor(*nativeHandle);
}

OCIFSelect_ParamEditor::OCIFSelect_ParamEditor(Standard_Integer nbmax, System::String^ label) : OCIFSelect_Editor((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IFSelect_ParamEditor(new IFSelect_ParamEditor(nbmax, OCConverter::StringToStandardCString(label)));
}

 void OCIFSelect_ParamEditor::AddValue(OCNaroWrappers::OCInterface_TypedValue^ val, System::String^ shortname)
{
  (*((Handle_IFSelect_ParamEditor*)nativeHandle))->AddValue(*((Handle_Interface_TypedValue*)val->Handle), OCConverter::StringToStandardCString(shortname));
}

 void OCIFSelect_ParamEditor::AddConstantText(System::String^ val, System::String^ shortname, System::String^ completename)
{
  (*((Handle_IFSelect_ParamEditor*)nativeHandle))->AddConstantText(OCConverter::StringToStandardCString(val), OCConverter::StringToStandardCString(shortname), OCConverter::StringToStandardCString(completename));
}

OCTCollection_AsciiString^ OCIFSelect_ParamEditor::Label()
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = (*((Handle_IFSelect_ParamEditor*)nativeHandle))->Label();
  return gcnew OCTCollection_AsciiString(tmp);
}

 System::Boolean OCIFSelect_ParamEditor::Recognize(OCNaroWrappers::OCIFSelect_EditForm^ form)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IFSelect_ParamEditor*)nativeHandle))->Recognize(*((Handle_IFSelect_EditForm*)form->Handle)));
}

OCTCollection_HAsciiString^ OCIFSelect_ParamEditor::StringValue(OCNaroWrappers::OCIFSelect_EditForm^ form, Standard_Integer num)
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_IFSelect_ParamEditor*)nativeHandle))->StringValue(*((Handle_IFSelect_EditForm*)form->Handle), num);
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 System::Boolean OCIFSelect_ParamEditor::Load(OCNaroWrappers::OCIFSelect_EditForm^ form, OCNaroWrappers::OCStandard_Transient^ ent, OCNaroWrappers::OCInterface_InterfaceModel^ model)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IFSelect_ParamEditor*)nativeHandle))->Load(*((Handle_IFSelect_EditForm*)form->Handle), *((Handle_Standard_Transient*)ent->Handle), *((Handle_Interface_InterfaceModel*)model->Handle)));
}

 System::Boolean OCIFSelect_ParamEditor::Apply(OCNaroWrappers::OCIFSelect_EditForm^ form, OCNaroWrappers::OCStandard_Transient^ ent, OCNaroWrappers::OCInterface_InterfaceModel^ model)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IFSelect_ParamEditor*)nativeHandle))->Apply(*((Handle_IFSelect_EditForm*)form->Handle), *((Handle_Standard_Transient*)ent->Handle), *((Handle_Interface_InterfaceModel*)model->Handle)));
}

OCIFSelect_ParamEditor^ OCIFSelect_ParamEditor::StaticEditor(OCNaroWrappers::OCTColStd_HSequenceOfHAsciiString^ list, System::String^ label)
{
  Handle(IFSelect_ParamEditor) tmp = IFSelect_ParamEditor::StaticEditor(*((Handle_TColStd_HSequenceOfHAsciiString*)list->Handle), OCConverter::StringToStandardCString(label));
  return gcnew OCIFSelect_ParamEditor(&tmp);
}


