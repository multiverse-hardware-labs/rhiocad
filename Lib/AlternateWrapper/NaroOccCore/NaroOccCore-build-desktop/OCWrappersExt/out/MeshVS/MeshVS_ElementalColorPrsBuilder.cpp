// File generated by CPPExt (CPP file)
//

#include "MeshVS_ElementalColorPrsBuilder.h"
#include "../Converter.h"
#include "MeshVS_Mesh.h"
#include "MeshVS_DataSource.h"
#include "../Prs3d/Prs3d_Presentation.h"
#include "MeshVS_DataMapOfIntegerColor.h"
#include "../Quantity/Quantity_Color.h"
#include "MeshVS_DataMapOfIntegerTwoColors.h"


using namespace OCNaroWrappers;

OCMeshVS_ElementalColorPrsBuilder::OCMeshVS_ElementalColorPrsBuilder(Handle(MeshVS_ElementalColorPrsBuilder)* nativeHandle) : OCMeshVS_PrsBuilder((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_MeshVS_ElementalColorPrsBuilder(*nativeHandle);
}

OCMeshVS_ElementalColorPrsBuilder::OCMeshVS_ElementalColorPrsBuilder(OCNaroWrappers::OCMeshVS_Mesh^ Parent, MeshVS_DisplayModeFlags Flags, OCNaroWrappers::OCMeshVS_DataSource^ DS, Standard_Integer Id, MeshVS_BuilderPriority Priority) : OCMeshVS_PrsBuilder((OCDummy^)nullptr)

{
  nativeHandle = new Handle_MeshVS_ElementalColorPrsBuilder(new MeshVS_ElementalColorPrsBuilder(*((Handle_MeshVS_Mesh*)Parent->Handle), Flags, *((Handle_MeshVS_DataSource*)DS->Handle), Id, Priority));
}

 void OCMeshVS_ElementalColorPrsBuilder::Build(OCNaroWrappers::OCPrs3d_Presentation^ Prs, TColStd_PackedMapOfInteger IDs, TColStd_PackedMapOfInteger& IDsToExclude, System::Boolean IsElement, Standard_Integer DisplayMode)
{
  (*((Handle_MeshVS_ElementalColorPrsBuilder*)nativeHandle))->Build(*((Handle_Prs3d_Presentation*)Prs->Handle), IDs, IDsToExclude, OCConverter::BooleanToStandardBoolean(IsElement), DisplayMode);
}

OCMeshVS_DataMapOfIntegerColor^ OCMeshVS_ElementalColorPrsBuilder::GetColors1()
{
  MeshVS_DataMapOfIntegerColor* tmp = new MeshVS_DataMapOfIntegerColor(0);
  *tmp = (*((Handle_MeshVS_ElementalColorPrsBuilder*)nativeHandle))->GetColors1();
  return gcnew OCMeshVS_DataMapOfIntegerColor(tmp);
}

 void OCMeshVS_ElementalColorPrsBuilder::SetColors1(OCNaroWrappers::OCMeshVS_DataMapOfIntegerColor^ Map)
{
  (*((Handle_MeshVS_ElementalColorPrsBuilder*)nativeHandle))->SetColors1(*((MeshVS_DataMapOfIntegerColor*)Map->Handle));
}

 System::Boolean OCMeshVS_ElementalColorPrsBuilder::HasColors1()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MeshVS_ElementalColorPrsBuilder*)nativeHandle))->HasColors1());
}

 System::Boolean OCMeshVS_ElementalColorPrsBuilder::GetColor1(Standard_Integer ID, OCNaroWrappers::OCQuantity_Color^ theColor)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MeshVS_ElementalColorPrsBuilder*)nativeHandle))->GetColor1(ID, *((Quantity_Color*)theColor->Handle)));
}

 void OCMeshVS_ElementalColorPrsBuilder::SetColor1(Standard_Integer ID, OCNaroWrappers::OCQuantity_Color^ theColor)
{
  (*((Handle_MeshVS_ElementalColorPrsBuilder*)nativeHandle))->SetColor1(ID, *((Quantity_Color*)theColor->Handle));
}

OCMeshVS_DataMapOfIntegerTwoColors^ OCMeshVS_ElementalColorPrsBuilder::GetColors2()
{
  MeshVS_DataMapOfIntegerTwoColors* tmp = new MeshVS_DataMapOfIntegerTwoColors(0);
  *tmp = (*((Handle_MeshVS_ElementalColorPrsBuilder*)nativeHandle))->GetColors2();
  return gcnew OCMeshVS_DataMapOfIntegerTwoColors(tmp);
}

 void OCMeshVS_ElementalColorPrsBuilder::SetColors2(OCNaroWrappers::OCMeshVS_DataMapOfIntegerTwoColors^ Map)
{
  (*((Handle_MeshVS_ElementalColorPrsBuilder*)nativeHandle))->SetColors2(*((MeshVS_DataMapOfIntegerTwoColors*)Map->Handle));
}

 System::Boolean OCMeshVS_ElementalColorPrsBuilder::HasColors2()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MeshVS_ElementalColorPrsBuilder*)nativeHandle))->HasColors2());
}

 System::Boolean OCMeshVS_ElementalColorPrsBuilder::GetColor2(Standard_Integer ID, MeshVS_TwoColors& theColor)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MeshVS_ElementalColorPrsBuilder*)nativeHandle))->GetColor2(ID, theColor));
}

 System::Boolean OCMeshVS_ElementalColorPrsBuilder::GetColor2(Standard_Integer ID, OCNaroWrappers::OCQuantity_Color^ theColor1, OCNaroWrappers::OCQuantity_Color^ theColor2)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MeshVS_ElementalColorPrsBuilder*)nativeHandle))->GetColor2(ID, *((Quantity_Color*)theColor1->Handle), *((Quantity_Color*)theColor2->Handle)));
}

 void OCMeshVS_ElementalColorPrsBuilder::SetColor2(Standard_Integer ID, MeshVS_TwoColors theTwoColors)
{
  (*((Handle_MeshVS_ElementalColorPrsBuilder*)nativeHandle))->SetColor2(ID, theTwoColors);
}

 void OCMeshVS_ElementalColorPrsBuilder::SetColor2(Standard_Integer ID, OCNaroWrappers::OCQuantity_Color^ theColor1, OCNaroWrappers::OCQuantity_Color^ theColor2)
{
  (*((Handle_MeshVS_ElementalColorPrsBuilder*)nativeHandle))->SetColor2(ID, *((Quantity_Color*)theColor1->Handle), *((Quantity_Color*)theColor2->Handle));
}


