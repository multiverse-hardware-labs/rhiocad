// File generated by CPPExt (CPP file)
//

#include "BRepAdaptor_HSurface.h"
#include "../Converter.h"
#include "BRepAdaptor_Surface.h"
#include "../Adaptor3d/Adaptor3d_Surface.h"


using namespace OCNaroWrappers;

OCBRepAdaptor_HSurface::OCBRepAdaptor_HSurface(Handle(BRepAdaptor_HSurface)* nativeHandle) : OCAdaptor3d_HSurface((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRepAdaptor_HSurface(*nativeHandle);
}

OCBRepAdaptor_HSurface::OCBRepAdaptor_HSurface() : OCAdaptor3d_HSurface((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepAdaptor_HSurface(new BRepAdaptor_HSurface());
}

OCBRepAdaptor_HSurface::OCBRepAdaptor_HSurface(OCNaroWrappers::OCBRepAdaptor_Surface^ S) : OCAdaptor3d_HSurface((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepAdaptor_HSurface(new BRepAdaptor_HSurface(*((BRepAdaptor_Surface*)S->Handle)));
}

 void OCBRepAdaptor_HSurface::Set(OCNaroWrappers::OCBRepAdaptor_Surface^ S)
{
  (*((Handle_BRepAdaptor_HSurface*)nativeHandle))->Set(*((BRepAdaptor_Surface*)S->Handle));
}

OCAdaptor3d_Surface^ OCBRepAdaptor_HSurface::Surface()
{
  Adaptor3d_Surface* tmp = new Adaptor3d_Surface();
  *tmp = (*((Handle_BRepAdaptor_HSurface*)nativeHandle))->Surface();
  return gcnew OCAdaptor3d_Surface(tmp);
}

OCBRepAdaptor_Surface^ OCBRepAdaptor_HSurface::ChangeSurface()
{
  BRepAdaptor_Surface* tmp = new BRepAdaptor_Surface();
  *tmp = (*((Handle_BRepAdaptor_HSurface*)nativeHandle))->ChangeSurface();
  return gcnew OCBRepAdaptor_Surface(tmp);
}

