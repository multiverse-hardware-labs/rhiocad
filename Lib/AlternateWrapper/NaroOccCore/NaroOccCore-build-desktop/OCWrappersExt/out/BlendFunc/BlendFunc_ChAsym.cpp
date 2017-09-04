// File generated by CPPExt (CPP file)
//

#include "BlendFunc_ChAsym.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_HSurface.h"
#include "../Adaptor3d/Adaptor3d_HCurve.h"
#include "../math/math_Vector.h"
#include "../math/math_Matrix.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"
#include "../gp/gp_Vec2d.h"
#include "../gp/gp_Lin.h"
#include "../TColStd/TColStd_Array1OfReal.h"
#include "../TColStd/TColStd_Array1OfInteger.h"
#include "../Blend/Blend_Point.h"
#include "../TColgp/TColgp_Array1OfPnt.h"
#include "../TColgp/TColgp_Array1OfPnt2d.h"
#include "../TColgp/TColgp_Array1OfVec.h"
#include "../TColgp/TColgp_Array1OfVec2d.h"


using namespace OCNaroWrappers;

OCBlendFunc_ChAsym::OCBlendFunc_ChAsym(BlendFunc_ChAsym* nativeHandle) : OCBlend_Function((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBlendFunc_ChAsym::OCBlendFunc_ChAsym(OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2, OCNaroWrappers::OCAdaptor3d_HCurve^ C) : OCBlend_Function((OCDummy^)nullptr)

{
  nativeHandle = new BlendFunc_ChAsym(*((Handle_Adaptor3d_HSurface*)S1->Handle), *((Handle_Adaptor3d_HSurface*)S2->Handle), *((Handle_Adaptor3d_HCurve*)C->Handle));
}

 Standard_Integer OCBlendFunc_ChAsym::NbEquations()
{
  return ((BlendFunc_ChAsym*)nativeHandle)->NbEquations();
}

 void OCBlendFunc_ChAsym::Set(Standard_Real Param)
{
  ((BlendFunc_ChAsym*)nativeHandle)->Set(Param);
}

 void OCBlendFunc_ChAsym::Set(Standard_Real First, Standard_Real Last)
{
  ((BlendFunc_ChAsym*)nativeHandle)->Set(First, Last);
}

 void OCBlendFunc_ChAsym::GetTolerance(OCNaroWrappers::OCmath_Vector^ Tolerance, Standard_Real Tol)
{
  ((BlendFunc_ChAsym*)nativeHandle)->GetTolerance(*((math_Vector*)Tolerance->Handle), Tol);
}

 void OCBlendFunc_ChAsym::GetBounds(OCNaroWrappers::OCmath_Vector^ InfBound, OCNaroWrappers::OCmath_Vector^ SupBound)
{
  ((BlendFunc_ChAsym*)nativeHandle)->GetBounds(*((math_Vector*)InfBound->Handle), *((math_Vector*)SupBound->Handle));
}

 System::Boolean OCBlendFunc_ChAsym::IsSolution(OCNaroWrappers::OCmath_Vector^ Sol, Standard_Real Tol)
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_ChAsym*)nativeHandle)->IsSolution(*((math_Vector*)Sol->Handle), Tol));
}

 Standard_Real OCBlendFunc_ChAsym::GetMinimalDistance()
{
  return ((BlendFunc_ChAsym*)nativeHandle)->GetMinimalDistance();
}

 System::Boolean OCBlendFunc_ChAsym::ComputeValues(OCNaroWrappers::OCmath_Vector^ X, Standard_Integer DegF, Standard_Integer DegL)
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_ChAsym*)nativeHandle)->ComputeValues(*((math_Vector*)X->Handle), DegF, DegL));
}

 System::Boolean OCBlendFunc_ChAsym::Value(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ F)
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_ChAsym*)nativeHandle)->Value(*((math_Vector*)X->Handle), *((math_Vector*)F->Handle)));
}

 System::Boolean OCBlendFunc_ChAsym::Derivatives(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Matrix^ D)
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_ChAsym*)nativeHandle)->Derivatives(*((math_Vector*)X->Handle), *((math_Matrix*)D->Handle)));
}

 System::Boolean OCBlendFunc_ChAsym::Values(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ F, OCNaroWrappers::OCmath_Matrix^ D)
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_ChAsym*)nativeHandle)->Values(*((math_Vector*)X->Handle), *((math_Vector*)F->Handle), *((math_Matrix*)D->Handle)));
}

OCgp_Pnt^ OCBlendFunc_ChAsym::PointOnS1()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((BlendFunc_ChAsym*)nativeHandle)->PointOnS1();
  return gcnew OCgp_Pnt(tmp);
}

OCgp_Pnt^ OCBlendFunc_ChAsym::PointOnS2()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((BlendFunc_ChAsym*)nativeHandle)->PointOnS2();
  return gcnew OCgp_Pnt(tmp);
}

 System::Boolean OCBlendFunc_ChAsym::IsTangencyPoint()
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_ChAsym*)nativeHandle)->IsTangencyPoint());
}

OCgp_Vec^ OCBlendFunc_ChAsym::TangentOnS1()
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((BlendFunc_ChAsym*)nativeHandle)->TangentOnS1();
  return gcnew OCgp_Vec(tmp);
}

OCgp_Vec2d^ OCBlendFunc_ChAsym::Tangent2dOnS1()
{
  gp_Vec2d* tmp = new gp_Vec2d();
  *tmp = ((BlendFunc_ChAsym*)nativeHandle)->Tangent2dOnS1();
  return gcnew OCgp_Vec2d(tmp);
}

OCgp_Vec^ OCBlendFunc_ChAsym::TangentOnS2()
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((BlendFunc_ChAsym*)nativeHandle)->TangentOnS2();
  return gcnew OCgp_Vec(tmp);
}

OCgp_Vec2d^ OCBlendFunc_ChAsym::Tangent2dOnS2()
{
  gp_Vec2d* tmp = new gp_Vec2d();
  *tmp = ((BlendFunc_ChAsym*)nativeHandle)->Tangent2dOnS2();
  return gcnew OCgp_Vec2d(tmp);
}

 System::Boolean OCBlendFunc_ChAsym::TwistOnS1()
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_ChAsym*)nativeHandle)->TwistOnS1());
}

 System::Boolean OCBlendFunc_ChAsym::TwistOnS2()
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_ChAsym*)nativeHandle)->TwistOnS2());
}

 void OCBlendFunc_ChAsym::Tangent(Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2, OCNaroWrappers::OCgp_Vec^ TgFirst, OCNaroWrappers::OCgp_Vec^ TgLast, OCNaroWrappers::OCgp_Vec^ NormFirst, OCNaroWrappers::OCgp_Vec^ NormLast)
{
  ((BlendFunc_ChAsym*)nativeHandle)->Tangent(U1, V1, U2, V2, *((gp_Vec*)TgFirst->Handle), *((gp_Vec*)TgLast->Handle), *((gp_Vec*)NormFirst->Handle), *((gp_Vec*)NormLast->Handle));
}

 void OCBlendFunc_ChAsym::Section(Standard_Real Param, Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2, Standard_Real& Pdeb, Standard_Real& Pfin, OCNaroWrappers::OCgp_Lin^ C)
{
  ((BlendFunc_ChAsym*)nativeHandle)->Section(Param, U1, V1, U2, V2, Pdeb, Pfin, *((gp_Lin*)C->Handle));
}

 System::Boolean OCBlendFunc_ChAsym::IsRational()
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_ChAsym*)nativeHandle)->IsRational());
}

 Standard_Real OCBlendFunc_ChAsym::GetSectionSize()
{
  return ((BlendFunc_ChAsym*)nativeHandle)->GetSectionSize();
}

 void OCBlendFunc_ChAsym::GetMinimalWeight(OCNaroWrappers::OCTColStd_Array1OfReal^ Weigths)
{
  ((BlendFunc_ChAsym*)nativeHandle)->GetMinimalWeight(*((TColStd_Array1OfReal*)Weigths->Handle));
}

 Standard_Integer OCBlendFunc_ChAsym::NbIntervals(OCGeomAbs_Shape S)
{
  return ((BlendFunc_ChAsym*)nativeHandle)->NbIntervals((GeomAbs_Shape)S);
}

 void OCBlendFunc_ChAsym::Intervals(OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S)
{
  ((BlendFunc_ChAsym*)nativeHandle)->Intervals(*((TColStd_Array1OfReal*)T->Handle), (GeomAbs_Shape)S);
}

 void OCBlendFunc_ChAsym::GetShape(Standard_Integer& NbPoles, Standard_Integer& NbKnots, Standard_Integer& Degree, Standard_Integer& NbPoles2d)
{
  ((BlendFunc_ChAsym*)nativeHandle)->GetShape(NbPoles, NbKnots, Degree, NbPoles2d);
}

 void OCBlendFunc_ChAsym::GetTolerance(Standard_Real BoundTol, Standard_Real SurfTol, Standard_Real AngleTol, OCNaroWrappers::OCmath_Vector^ Tol3d, OCNaroWrappers::OCmath_Vector^ Tol1D)
{
  ((BlendFunc_ChAsym*)nativeHandle)->GetTolerance(BoundTol, SurfTol, AngleTol, *((math_Vector*)Tol3d->Handle), *((math_Vector*)Tol1D->Handle));
}

 void OCBlendFunc_ChAsym::Knots(OCNaroWrappers::OCTColStd_Array1OfReal^ TKnots)
{
  ((BlendFunc_ChAsym*)nativeHandle)->Knots(*((TColStd_Array1OfReal*)TKnots->Handle));
}

 void OCBlendFunc_ChAsym::Mults(OCNaroWrappers::OCTColStd_Array1OfInteger^ TMults)
{
  ((BlendFunc_ChAsym*)nativeHandle)->Mults(*((TColStd_Array1OfInteger*)TMults->Handle));
}

 void OCBlendFunc_ChAsym::Section(OCNaroWrappers::OCBlend_Point^ P, OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Poles2d, OCNaroWrappers::OCTColStd_Array1OfReal^ Weigths)
{
  ((BlendFunc_ChAsym*)nativeHandle)->Section(*((Blend_Point*)P->Handle), *((TColgp_Array1OfPnt*)Poles->Handle), *((TColgp_Array1OfPnt2d*)Poles2d->Handle), *((TColStd_Array1OfReal*)Weigths->Handle));
}

 System::Boolean OCBlendFunc_ChAsym::Section(OCNaroWrappers::OCBlend_Point^ P, OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles, OCNaroWrappers::OCTColgp_Array1OfVec^ DPoles, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Poles2d, OCNaroWrappers::OCTColgp_Array1OfVec2d^ DPoles2d, OCNaroWrappers::OCTColStd_Array1OfReal^ Weigths, OCNaroWrappers::OCTColStd_Array1OfReal^ DWeigths)
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_ChAsym*)nativeHandle)->Section(*((Blend_Point*)P->Handle), *((TColgp_Array1OfPnt*)Poles->Handle), *((TColgp_Array1OfVec*)DPoles->Handle), *((TColgp_Array1OfPnt2d*)Poles2d->Handle), *((TColgp_Array1OfVec2d*)DPoles2d->Handle), *((TColStd_Array1OfReal*)Weigths->Handle), *((TColStd_Array1OfReal*)DWeigths->Handle)));
}

 System::Boolean OCBlendFunc_ChAsym::Section(OCNaroWrappers::OCBlend_Point^ P, OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles, OCNaroWrappers::OCTColgp_Array1OfVec^ DPoles, OCNaroWrappers::OCTColgp_Array1OfVec^ D2Poles, OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Poles2d, OCNaroWrappers::OCTColgp_Array1OfVec2d^ DPoles2d, OCNaroWrappers::OCTColgp_Array1OfVec2d^ D2Poles2d, OCNaroWrappers::OCTColStd_Array1OfReal^ Weigths, OCNaroWrappers::OCTColStd_Array1OfReal^ DWeigths, OCNaroWrappers::OCTColStd_Array1OfReal^ D2Weigths)
{
  return OCConverter::StandardBooleanToBoolean(((BlendFunc_ChAsym*)nativeHandle)->Section(*((Blend_Point*)P->Handle), *((TColgp_Array1OfPnt*)Poles->Handle), *((TColgp_Array1OfVec*)DPoles->Handle), *((TColgp_Array1OfVec*)D2Poles->Handle), *((TColgp_Array1OfPnt2d*)Poles2d->Handle), *((TColgp_Array1OfVec2d*)DPoles2d->Handle), *((TColgp_Array1OfVec2d*)D2Poles2d->Handle), *((TColStd_Array1OfReal*)Weigths->Handle), *((TColStd_Array1OfReal*)DWeigths->Handle), *((TColStd_Array1OfReal*)D2Weigths->Handle)));
}

 void OCBlendFunc_ChAsym::Resolution(Standard_Integer IC2d, Standard_Real Tol, Standard_Real& TolU, Standard_Real& TolV)
{
  ((BlendFunc_ChAsym*)nativeHandle)->Resolution(IC2d, Tol, TolU, TolV);
}

 void OCBlendFunc_ChAsym::Set(Standard_Real Dist1, Standard_Real Angle, Standard_Integer Choix)
{
  ((BlendFunc_ChAsym*)nativeHandle)->Set(Dist1, Angle, Choix);
}

