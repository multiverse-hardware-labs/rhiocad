// File generated by CPPExt (CPP file)
//

#include "gp_Pnt.h"
#include "../Converter.h"
#include "gp_XYZ.h"
#include "gp_Ax1.h"
#include "gp_Ax2.h"
#include "gp_Trsf.h"
#include "gp_Vec.h"


using namespace OCNaroWrappers;

OCgp_Pnt::OCgp_Pnt(gp_Pnt* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCgp_Pnt::OCgp_Pnt() 
{
  nativeHandle = new gp_Pnt();
}

OCgp_Pnt::OCgp_Pnt(OCNaroWrappers::OCgp_XYZ^ Coord) 
{
  nativeHandle = new gp_Pnt(*((gp_XYZ*)Coord->Handle));
}

OCgp_Pnt::OCgp_Pnt(Standard_Real Xp, Standard_Real Yp, Standard_Real Zp) 
{
  nativeHandle = new gp_Pnt(Xp, Yp, Zp);
}

 void OCgp_Pnt::SetCoord(Standard_Integer Index, Standard_Real Xi)
{
  ((gp_Pnt*)nativeHandle)->SetCoord(Index, Xi);
}

 void OCgp_Pnt::SetCoord(Standard_Real Xp, Standard_Real Yp, Standard_Real Zp)
{
  ((gp_Pnt*)nativeHandle)->SetCoord(Xp, Yp, Zp);
}

 void OCgp_Pnt::SetX(Standard_Real X)
{
  ((gp_Pnt*)nativeHandle)->SetX(X);
}

 void OCgp_Pnt::SetY(Standard_Real Y)
{
  ((gp_Pnt*)nativeHandle)->SetY(Y);
}

 void OCgp_Pnt::SetZ(Standard_Real Z)
{
  ((gp_Pnt*)nativeHandle)->SetZ(Z);
}

 void OCgp_Pnt::SetXYZ(OCNaroWrappers::OCgp_XYZ^ Coord)
{
  ((gp_Pnt*)nativeHandle)->SetXYZ(*((gp_XYZ*)Coord->Handle));
}

 Standard_Real OCgp_Pnt::Coord(Standard_Integer Index)
{
  return ((gp_Pnt*)nativeHandle)->Coord(Index);
}

 void OCgp_Pnt::Coord(Standard_Real& Xp, Standard_Real& Yp, Standard_Real& Zp)
{
  ((gp_Pnt*)nativeHandle)->Coord(Xp, Yp, Zp);
}

 Standard_Real OCgp_Pnt::X()
{
  return ((gp_Pnt*)nativeHandle)->X();
}

 Standard_Real OCgp_Pnt::Y()
{
  return ((gp_Pnt*)nativeHandle)->Y();
}

 Standard_Real OCgp_Pnt::Z()
{
  return ((gp_Pnt*)nativeHandle)->Z();
}

OCgp_XYZ^ OCgp_Pnt::XYZ()
{
  gp_XYZ* tmp = new gp_XYZ();
  *tmp = ((gp_Pnt*)nativeHandle)->XYZ();
  return gcnew OCgp_XYZ(tmp);
}

OCgp_XYZ^ OCgp_Pnt::Coord()
{
  gp_XYZ* tmp = new gp_XYZ();
  *tmp = ((gp_Pnt*)nativeHandle)->Coord();
  return gcnew OCgp_XYZ(tmp);
}

OCgp_XYZ^ OCgp_Pnt::ChangeCoord()
{
  gp_XYZ* tmp = new gp_XYZ();
  *tmp = ((gp_Pnt*)nativeHandle)->ChangeCoord();
  return gcnew OCgp_XYZ(tmp);
}

 void OCgp_Pnt::BaryCenter(Standard_Real Alpha, OCNaroWrappers::OCgp_Pnt^ P, Standard_Real Beta)
{
  ((gp_Pnt*)nativeHandle)->BaryCenter(Alpha, *((gp_Pnt*)P->Handle), Beta);
}

 System::Boolean OCgp_Pnt::IsEqual(OCNaroWrappers::OCgp_Pnt^ Other, Standard_Real LinearTolerance)
{
  return OCConverter::StandardBooleanToBoolean(((gp_Pnt*)nativeHandle)->IsEqual(*((gp_Pnt*)Other->Handle), LinearTolerance));
}

 Standard_Real OCgp_Pnt::Distance(OCNaroWrappers::OCgp_Pnt^ Other)
{
  return ((gp_Pnt*)nativeHandle)->Distance(*((gp_Pnt*)Other->Handle));
}

 Standard_Real OCgp_Pnt::SquareDistance(OCNaroWrappers::OCgp_Pnt^ Other)
{
  return ((gp_Pnt*)nativeHandle)->SquareDistance(*((gp_Pnt*)Other->Handle));
}

 void OCgp_Pnt::Mirror(OCNaroWrappers::OCgp_Pnt^ P)
{
  ((gp_Pnt*)nativeHandle)->Mirror(*((gp_Pnt*)P->Handle));
}

OCgp_Pnt^ OCgp_Pnt::Mirrored(OCNaroWrappers::OCgp_Pnt^ P)
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((gp_Pnt*)nativeHandle)->Mirrored(*((gp_Pnt*)P->Handle));
  return gcnew OCgp_Pnt(tmp);
}

 void OCgp_Pnt::Mirror(OCNaroWrappers::OCgp_Ax1^ A1)
{
  ((gp_Pnt*)nativeHandle)->Mirror(*((gp_Ax1*)A1->Handle));
}

OCgp_Pnt^ OCgp_Pnt::Mirrored(OCNaroWrappers::OCgp_Ax1^ A1)
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((gp_Pnt*)nativeHandle)->Mirrored(*((gp_Ax1*)A1->Handle));
  return gcnew OCgp_Pnt(tmp);
}

 void OCgp_Pnt::Mirror(OCNaroWrappers::OCgp_Ax2^ A2)
{
  ((gp_Pnt*)nativeHandle)->Mirror(*((gp_Ax2*)A2->Handle));
}

OCgp_Pnt^ OCgp_Pnt::Mirrored(OCNaroWrappers::OCgp_Ax2^ A2)
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((gp_Pnt*)nativeHandle)->Mirrored(*((gp_Ax2*)A2->Handle));
  return gcnew OCgp_Pnt(tmp);
}

 void OCgp_Pnt::Rotate(OCNaroWrappers::OCgp_Ax1^ A1, Standard_Real Ang)
{
  ((gp_Pnt*)nativeHandle)->Rotate(*((gp_Ax1*)A1->Handle), Ang);
}

OCgp_Pnt^ OCgp_Pnt::Rotated(OCNaroWrappers::OCgp_Ax1^ A1, Standard_Real Ang)
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((gp_Pnt*)nativeHandle)->Rotated(*((gp_Ax1*)A1->Handle), Ang);
  return gcnew OCgp_Pnt(tmp);
}

 void OCgp_Pnt::Scale(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real S)
{
  ((gp_Pnt*)nativeHandle)->Scale(*((gp_Pnt*)P->Handle), S);
}

OCgp_Pnt^ OCgp_Pnt::Scaled(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real S)
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((gp_Pnt*)nativeHandle)->Scaled(*((gp_Pnt*)P->Handle), S);
  return gcnew OCgp_Pnt(tmp);
}

 void OCgp_Pnt::Transform(OCNaroWrappers::OCgp_Trsf^ T)
{
  ((gp_Pnt*)nativeHandle)->Transform(*((gp_Trsf*)T->Handle));
}

OCgp_Pnt^ OCgp_Pnt::Transformed(OCNaroWrappers::OCgp_Trsf^ T)
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((gp_Pnt*)nativeHandle)->Transformed(*((gp_Trsf*)T->Handle));
  return gcnew OCgp_Pnt(tmp);
}

 void OCgp_Pnt::Translate(OCNaroWrappers::OCgp_Vec^ V)
{
  ((gp_Pnt*)nativeHandle)->Translate(*((gp_Vec*)V->Handle));
}

OCgp_Pnt^ OCgp_Pnt::Translated(OCNaroWrappers::OCgp_Vec^ V)
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((gp_Pnt*)nativeHandle)->Translated(*((gp_Vec*)V->Handle));
  return gcnew OCgp_Pnt(tmp);
}

 void OCgp_Pnt::Translate(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2)
{
  ((gp_Pnt*)nativeHandle)->Translate(*((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
}

OCgp_Pnt^ OCgp_Pnt::Translated(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2)
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((gp_Pnt*)nativeHandle)->Translated(*((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
  return gcnew OCgp_Pnt(tmp);
}


