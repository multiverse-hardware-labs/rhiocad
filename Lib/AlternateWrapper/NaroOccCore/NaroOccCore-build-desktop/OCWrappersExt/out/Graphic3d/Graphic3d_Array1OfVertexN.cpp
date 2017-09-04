// File generated by CPPExt (CPP file)
//

#include "Graphic3d_Array1OfVertexN.h"
#include "../Converter.h"
#include "Graphic3d_VertexN.h"


using namespace OCNaroWrappers;

OCGraphic3d_Array1OfVertexN::OCGraphic3d_Array1OfVertexN(Graphic3d_Array1OfVertexN* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCGraphic3d_Array1OfVertexN::OCGraphic3d_Array1OfVertexN(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new Graphic3d_Array1OfVertexN(Low, Up);
}

OCGraphic3d_Array1OfVertexN::OCGraphic3d_Array1OfVertexN(OCNaroWrappers::OCGraphic3d_VertexN^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new Graphic3d_Array1OfVertexN(*((Graphic3d_VertexN*)Item->Handle), Low, Up);
}

 void OCGraphic3d_Array1OfVertexN::Init(OCNaroWrappers::OCGraphic3d_VertexN^ V)
{
  ((Graphic3d_Array1OfVertexN*)nativeHandle)->Init(*((Graphic3d_VertexN*)V->Handle));
}

 System::Boolean OCGraphic3d_Array1OfVertexN::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((Graphic3d_Array1OfVertexN*)nativeHandle)->IsAllocated());
}

OCGraphic3d_Array1OfVertexN^ OCGraphic3d_Array1OfVertexN::Assign(OCNaroWrappers::OCGraphic3d_Array1OfVertexN^ Other)
{
  Graphic3d_Array1OfVertexN* tmp = new Graphic3d_Array1OfVertexN(0, 0);
  *tmp = ((Graphic3d_Array1OfVertexN*)nativeHandle)->Assign(*((Graphic3d_Array1OfVertexN*)Other->Handle));
  return gcnew OCGraphic3d_Array1OfVertexN(tmp);
}

 Standard_Integer OCGraphic3d_Array1OfVertexN::Length()
{
  return ((Graphic3d_Array1OfVertexN*)nativeHandle)->Length();
}

 Standard_Integer OCGraphic3d_Array1OfVertexN::Lower()
{
  return ((Graphic3d_Array1OfVertexN*)nativeHandle)->Lower();
}

 Standard_Integer OCGraphic3d_Array1OfVertexN::Upper()
{
  return ((Graphic3d_Array1OfVertexN*)nativeHandle)->Upper();
}

 void OCGraphic3d_Array1OfVertexN::SetValue(Standard_Integer Index, OCNaroWrappers::OCGraphic3d_VertexN^ Value)
{
  ((Graphic3d_Array1OfVertexN*)nativeHandle)->SetValue(Index, *((Graphic3d_VertexN*)Value->Handle));
}

OCGraphic3d_VertexN^ OCGraphic3d_Array1OfVertexN::Value(Standard_Integer Index)
{
  Graphic3d_VertexN* tmp = new Graphic3d_VertexN();
  *tmp = ((Graphic3d_Array1OfVertexN*)nativeHandle)->Value(Index);
  return gcnew OCGraphic3d_VertexN(tmp);
}

OCGraphic3d_VertexN^ OCGraphic3d_Array1OfVertexN::ChangeValue(Standard_Integer Index)
{
  Graphic3d_VertexN* tmp = new Graphic3d_VertexN();
  *tmp = ((Graphic3d_Array1OfVertexN*)nativeHandle)->ChangeValue(Index);
  return gcnew OCGraphic3d_VertexN(tmp);
}

