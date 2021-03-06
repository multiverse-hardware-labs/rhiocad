// File generated by CPPExt (CPP file)
//

#include "Prs3d_IsoAspect.h"
#include "../Converter.h"
#include "../Quantity/Quantity_Color.h"


using namespace OCNaroWrappers;

OCPrs3d_IsoAspect::OCPrs3d_IsoAspect(Handle(Prs3d_IsoAspect)* nativeHandle) : OCPrs3d_LineAspect((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Prs3d_IsoAspect(*nativeHandle);
}

OCPrs3d_IsoAspect::OCPrs3d_IsoAspect(OCQuantity_NameOfColor aColor, OCAspect_TypeOfLine aType, Standard_Real aWidth, Standard_Integer aNumber) : OCPrs3d_LineAspect((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Prs3d_IsoAspect(new Prs3d_IsoAspect((Quantity_NameOfColor)aColor, (Aspect_TypeOfLine)aType, aWidth, aNumber));
}

OCPrs3d_IsoAspect::OCPrs3d_IsoAspect(OCNaroWrappers::OCQuantity_Color^ aColor, OCAspect_TypeOfLine aType, Standard_Real aWidth, Standard_Integer aNumber) : OCPrs3d_LineAspect((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Prs3d_IsoAspect(new Prs3d_IsoAspect(*((Quantity_Color*)aColor->Handle), (Aspect_TypeOfLine)aType, aWidth, aNumber));
}

 void OCPrs3d_IsoAspect::SetNumber(Standard_Integer aNumber)
{
  (*((Handle_Prs3d_IsoAspect*)nativeHandle))->SetNumber(aNumber);
}

 Standard_Integer OCPrs3d_IsoAspect::Number()
{
  return (*((Handle_Prs3d_IsoAspect*)nativeHandle))->Number();
}


