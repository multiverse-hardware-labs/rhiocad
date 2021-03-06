// File generated by CPPExt (CPP file)
//

#include "MoniTool_Element.h"
#include "../Converter.h"
#include "../Standard/Standard_Type.h"
#include "MoniTool_AttrList.h"


using namespace OCNaroWrappers;

OCMoniTool_Element::OCMoniTool_Element(Handle(MoniTool_Element)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_MoniTool_Element(*nativeHandle);
}

 Standard_Integer OCMoniTool_Element::GetHashCode()
{
  return (*((Handle_MoniTool_Element*)nativeHandle))->GetHashCode();
}

OCStandard_Type^ OCMoniTool_Element::ValueType()
{
  Handle(Standard_Type) tmp = (*((Handle_MoniTool_Element*)nativeHandle))->ValueType();
  return gcnew OCStandard_Type(&tmp);
}

 System::String^ OCMoniTool_Element::ValueTypeName()
{
  return OCConverter::StandardCStringToString((*((Handle_MoniTool_Element*)nativeHandle))->ValueTypeName());
}

OCMoniTool_AttrList^ OCMoniTool_Element::ListAttr()
{
  MoniTool_AttrList* tmp = new MoniTool_AttrList();
  *tmp = (*((Handle_MoniTool_Element*)nativeHandle))->ListAttr();
  return gcnew OCMoniTool_AttrList(tmp);
}

OCMoniTool_AttrList^ OCMoniTool_Element::ChangeAttr()
{
  MoniTool_AttrList* tmp = new MoniTool_AttrList();
  *tmp = (*((Handle_MoniTool_Element*)nativeHandle))->ChangeAttr();
  return gcnew OCMoniTool_AttrList(tmp);
}


