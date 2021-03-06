// File generated by CPPExt (CPP file)
//

#include "Graphic3d_Array1OfVector.h"
#include "../Converter.h"
#include "Graphic3d_Vector.h"


using namespace OCNaroWrappers;

OCGraphic3d_Array1OfVector::OCGraphic3d_Array1OfVector(Graphic3d_Array1OfVector* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCGraphic3d_Array1OfVector::OCGraphic3d_Array1OfVector(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new Graphic3d_Array1OfVector(Low, Up);
}

OCGraphic3d_Array1OfVector::OCGraphic3d_Array1OfVector(OCNaroWrappers::OCGraphic3d_Vector^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new Graphic3d_Array1OfVector(*((Graphic3d_Vector*)Item->Handle), Low, Up);
}

 void OCGraphic3d_Array1OfVector::Init(OCNaroWrappers::OCGraphic3d_Vector^ V)
{
  ((Graphic3d_Array1OfVector*)nativeHandle)->Init(*((Graphic3d_Vector*)V->Handle));
}

 System::Boolean OCGraphic3d_Array1OfVector::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((Graphic3d_Array1OfVector*)nativeHandle)->IsAllocated());
}

OCGraphic3d_Array1OfVector^ OCGraphic3d_Array1OfVector::Assign(OCNaroWrappers::OCGraphic3d_Array1OfVector^ Other)
{
  Graphic3d_Array1OfVector* tmp = new Graphic3d_Array1OfVector(0, 0);
  *tmp = ((Graphic3d_Array1OfVector*)nativeHandle)->Assign(*((Graphic3d_Array1OfVector*)Other->Handle));
  return gcnew OCGraphic3d_Array1OfVector(tmp);
}

 Standard_Integer OCGraphic3d_Array1OfVector::Length()
{
  return ((Graphic3d_Array1OfVector*)nativeHandle)->Length();
}

 Standard_Integer OCGraphic3d_Array1OfVector::Lower()
{
  return ((Graphic3d_Array1OfVector*)nativeHandle)->Lower();
}

 Standard_Integer OCGraphic3d_Array1OfVector::Upper()
{
  return ((Graphic3d_Array1OfVector*)nativeHandle)->Upper();
}

 void OCGraphic3d_Array1OfVector::SetValue(Standard_Integer Index, OCNaroWrappers::OCGraphic3d_Vector^ Value)
{
  ((Graphic3d_Array1OfVector*)nativeHandle)->SetValue(Index, *((Graphic3d_Vector*)Value->Handle));
}

OCGraphic3d_Vector^ OCGraphic3d_Array1OfVector::Value(Standard_Integer Index)
{
  Graphic3d_Vector* tmp = new Graphic3d_Vector();
  *tmp = ((Graphic3d_Array1OfVector*)nativeHandle)->Value(Index);
  return gcnew OCGraphic3d_Vector(tmp);
}

OCGraphic3d_Vector^ OCGraphic3d_Array1OfVector::ChangeValue(Standard_Integer Index)
{
  Graphic3d_Vector* tmp = new Graphic3d_Vector();
  *tmp = ((Graphic3d_Array1OfVector*)nativeHandle)->ChangeValue(Index);
  return gcnew OCGraphic3d_Vector(tmp);
}


