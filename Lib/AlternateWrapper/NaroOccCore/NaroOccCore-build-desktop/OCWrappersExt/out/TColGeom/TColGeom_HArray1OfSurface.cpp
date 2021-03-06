// File generated by CPPExt (CPP file)
//

#include "TColGeom_HArray1OfSurface.h"
#include "../Converter.h"
#include "../Geom/Geom_Surface.h"
#include "TColGeom_Array1OfSurface.h"


using namespace OCNaroWrappers;

OCTColGeom_HArray1OfSurface::OCTColGeom_HArray1OfSurface(Handle(TColGeom_HArray1OfSurface)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColGeom_HArray1OfSurface(*nativeHandle);
}

OCTColGeom_HArray1OfSurface::OCTColGeom_HArray1OfSurface(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColGeom_HArray1OfSurface(new TColGeom_HArray1OfSurface(Low, Up));
}

OCTColGeom_HArray1OfSurface::OCTColGeom_HArray1OfSurface(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCGeom_Surface^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColGeom_HArray1OfSurface(new TColGeom_HArray1OfSurface(Low, Up, *((Handle_Geom_Surface*)V->Handle)));
}

 void OCTColGeom_HArray1OfSurface::Init(OCNaroWrappers::OCGeom_Surface^ V)
{
  (*((Handle_TColGeom_HArray1OfSurface*)nativeHandle))->Init(*((Handle_Geom_Surface*)V->Handle));
}

 Standard_Integer OCTColGeom_HArray1OfSurface::Length()
{
  return (*((Handle_TColGeom_HArray1OfSurface*)nativeHandle))->Length();
}

 Standard_Integer OCTColGeom_HArray1OfSurface::Lower()
{
  return (*((Handle_TColGeom_HArray1OfSurface*)nativeHandle))->Lower();
}

 Standard_Integer OCTColGeom_HArray1OfSurface::Upper()
{
  return (*((Handle_TColGeom_HArray1OfSurface*)nativeHandle))->Upper();
}

 void OCTColGeom_HArray1OfSurface::SetValue(Standard_Integer Index, OCNaroWrappers::OCGeom_Surface^ Value)
{
  (*((Handle_TColGeom_HArray1OfSurface*)nativeHandle))->SetValue(Index, *((Handle_Geom_Surface*)Value->Handle));
}

OCGeom_Surface^ OCTColGeom_HArray1OfSurface::Value(Standard_Integer Index)
{
  Handle(Geom_Surface) tmp = (*((Handle_TColGeom_HArray1OfSurface*)nativeHandle))->Value(Index);
  return gcnew OCGeom_Surface(&tmp);
}

OCGeom_Surface^ OCTColGeom_HArray1OfSurface::ChangeValue(Standard_Integer Index)
{
  Handle(Geom_Surface) tmp = (*((Handle_TColGeom_HArray1OfSurface*)nativeHandle))->ChangeValue(Index);
  return gcnew OCGeom_Surface(&tmp);
}

OCTColGeom_Array1OfSurface^ OCTColGeom_HArray1OfSurface::Array1()
{
  TColGeom_Array1OfSurface* tmp = new TColGeom_Array1OfSurface(0, 0);
  *tmp = (*((Handle_TColGeom_HArray1OfSurface*)nativeHandle))->Array1();
  return gcnew OCTColGeom_Array1OfSurface(tmp);
}

OCTColGeom_Array1OfSurface^ OCTColGeom_HArray1OfSurface::ChangeArray1()
{
  TColGeom_Array1OfSurface* tmp = new TColGeom_Array1OfSurface(0, 0);
  *tmp = (*((Handle_TColGeom_HArray1OfSurface*)nativeHandle))->ChangeArray1();
  return gcnew OCTColGeom_Array1OfSurface(tmp);
}


