// File generated by CPPExt (CPP file)
//

#include "GeomLib.h"
#include "../Converter.h"


using namespace OCNaroWrappers;



OCGeom_Curve^ OCGeomLib::To3d(OCNaroWrappers::OCgp_Ax2^ Position, OCNaroWrappers::OCGeom2d_Curve^ Curve2d)
{
  Handle(Geom_Curve) tmp = GeomLib::To3d(*((gp_Ax2*)Position->Handle), *((Handle_Geom2d_Curve*)Curve2d->Handle));
  return gcnew OCGeom_Curve(&tmp);
}

OCGeom2d_Curve^ OCGeomLib::GTransform(OCNaroWrappers::OCGeom2d_Curve^ Curve, OCNaroWrappers::OCgp_GTrsf2d^ GTrsf)
{
  Handle(Geom2d_Curve) tmp = GeomLib::GTransform(*((Handle_Geom2d_Curve*)Curve->Handle), *((gp_GTrsf2d*)GTrsf->Handle));
  return gcnew OCGeom2d_Curve(&tmp);
}

 void OCGeomLib::SameRange(Standard_Real Tolerance, OCNaroWrappers::OCGeom2d_Curve^ Curve2dPtr, Standard_Real First, Standard_Real Last, Standard_Real RequestedFirst, Standard_Real RequestedLast, OCNaroWrappers::OCGeom2d_Curve^ NewCurve2dPtr)
{
  GeomLib::SameRange(Tolerance, *((Handle_Geom2d_Curve*)Curve2dPtr->Handle), First, Last, RequestedFirst, RequestedLast, *((Handle_Geom2d_Curve*)NewCurve2dPtr->Handle));
}

 void OCGeomLib::BuildCurve3d(Standard_Real Tolerance, OCNaroWrappers::OCAdaptor3d_CurveOnSurface^ CurvePtr, Standard_Real FirstParameter, Standard_Real LastParameter, OCNaroWrappers::OCGeom_Curve^ NewCurvePtr, Standard_Real& MaxDeviation, Standard_Real& AverageDeviation, OCGeomAbs_Shape Continuity, Standard_Integer MaxDegree, Standard_Integer MaxSegment)
{
  GeomLib::BuildCurve3d(Tolerance, *((Adaptor3d_CurveOnSurface*)CurvePtr->Handle), FirstParameter, LastParameter, *((Handle_Geom_Curve*)NewCurvePtr->Handle), MaxDeviation, AverageDeviation, (GeomAbs_Shape)Continuity, MaxDegree, MaxSegment);
}

 void OCGeomLib::AdjustExtremity(OCNaroWrappers::OCGeom_BoundedCurve^ Curve, OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2, OCNaroWrappers::OCgp_Vec^ T1, OCNaroWrappers::OCgp_Vec^ T2)
{
  GeomLib::AdjustExtremity(*((Handle_Geom_BoundedCurve*)Curve->Handle), *((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle), *((gp_Vec*)T1->Handle), *((gp_Vec*)T2->Handle));
}

 void OCGeomLib::ExtendCurveToPoint(OCNaroWrappers::OCGeom_BoundedCurve^ Curve, OCNaroWrappers::OCgp_Pnt^ Point, Standard_Integer Cont, System::Boolean After)
{
  GeomLib::ExtendCurveToPoint(*((Handle_Geom_BoundedCurve*)Curve->Handle), *((gp_Pnt*)Point->Handle), Cont, OCConverter::BooleanToStandardBoolean(After));
}

 void OCGeomLib::ExtendSurfByLength(OCNaroWrappers::OCGeom_BoundedSurface^ Surf, Standard_Real Length, Standard_Integer Cont, System::Boolean InU, System::Boolean After)
{
  GeomLib::ExtendSurfByLength(*((Handle_Geom_BoundedSurface*)Surf->Handle), Length, Cont, OCConverter::BooleanToStandardBoolean(InU), OCConverter::BooleanToStandardBoolean(After));
}

 void OCGeomLib::AxeOfInertia(OCNaroWrappers::OCTColgp_Array1OfPnt^ Points, OCNaroWrappers::OCgp_Ax2^ Axe, System::Boolean& IsSingular, Standard_Real Tol)
{
  GeomLib::AxeOfInertia(*((TColgp_Array1OfPnt*)Points->Handle), *((gp_Ax2*)Axe->Handle), (Standard_Boolean&)(IsSingular), Tol);
}

 void OCGeomLib::Inertia(OCNaroWrappers::OCTColgp_Array1OfPnt^ Points, OCNaroWrappers::OCgp_Pnt^ Bary, OCNaroWrappers::OCgp_Dir^ XDir, OCNaroWrappers::OCgp_Dir^ YDir, Standard_Real& Xgap, Standard_Real& YGap, Standard_Real& ZGap)
{
  GeomLib::Inertia(*((TColgp_Array1OfPnt*)Points->Handle), *((gp_Pnt*)Bary->Handle), *((gp_Dir*)XDir->Handle), *((gp_Dir*)YDir->Handle), Xgap, YGap, ZGap);
}

 void OCGeomLib::RemovePointsFromArray(Standard_Integer NumPoints, OCNaroWrappers::OCTColStd_Array1OfReal^ InParameters, OCNaroWrappers::OCTColStd_HArray1OfReal^ OutParameters)
{
  GeomLib::RemovePointsFromArray(NumPoints, *((TColStd_Array1OfReal*)InParameters->Handle), *((Handle_TColStd_HArray1OfReal*)OutParameters->Handle));
}

 void OCGeomLib::DensifyArray1OfReal(Standard_Integer MinNumPoints, OCNaroWrappers::OCTColStd_Array1OfReal^ InParameters, OCNaroWrappers::OCTColStd_HArray1OfReal^ OutParameters)
{
  GeomLib::DensifyArray1OfReal(MinNumPoints, *((TColStd_Array1OfReal*)InParameters->Handle), *((Handle_TColStd_HArray1OfReal*)OutParameters->Handle));
}

 void OCGeomLib::FuseIntervals(OCNaroWrappers::OCTColStd_Array1OfReal^ Interval1, OCNaroWrappers::OCTColStd_Array1OfReal^ Interval2, OCNaroWrappers::OCTColStd_SequenceOfReal^ Fusion, Standard_Real Confusion)
{
  GeomLib::FuseIntervals(*((TColStd_Array1OfReal*)Interval1->Handle), *((TColStd_Array1OfReal*)Interval2->Handle), *((TColStd_SequenceOfReal*)Fusion->Handle), Confusion);
}

 void OCGeomLib::EvalMaxParametricDistance(OCNaroWrappers::OCAdaptor3d_Curve^ Curve, OCNaroWrappers::OCAdaptor3d_Curve^ AReferenceCurve, Standard_Real Tolerance, OCNaroWrappers::OCTColStd_Array1OfReal^ Parameters, Standard_Real& MaxDistance)
{
  GeomLib::EvalMaxParametricDistance(*((Adaptor3d_Curve*)Curve->Handle), *((Adaptor3d_Curve*)AReferenceCurve->Handle), Tolerance, *((TColStd_Array1OfReal*)Parameters->Handle), MaxDistance);
}

 void OCGeomLib::EvalMaxDistanceAlongParameter(OCNaroWrappers::OCAdaptor3d_Curve^ Curve, OCNaroWrappers::OCAdaptor3d_Curve^ AReferenceCurve, Standard_Real Tolerance, OCNaroWrappers::OCTColStd_Array1OfReal^ Parameters, Standard_Real& MaxDistance)
{
  GeomLib::EvalMaxDistanceAlongParameter(*((Adaptor3d_Curve*)Curve->Handle), *((Adaptor3d_Curve*)AReferenceCurve->Handle), Tolerance, *((TColStd_Array1OfReal*)Parameters->Handle), MaxDistance);
}

 void OCGeomLib::CancelDenominatorDerivative(OCNaroWrappers::OCGeom_BSplineSurface^ BSurf, System::Boolean UDirection, System::Boolean VDirection)
{
  GeomLib::CancelDenominatorDerivative(*((Handle_Geom_BSplineSurface*)BSurf->Handle), OCConverter::BooleanToStandardBoolean(UDirection), OCConverter::BooleanToStandardBoolean(VDirection));
}

 Standard_Integer OCGeomLib::NormEstim(OCNaroWrappers::OCGeom_Surface^ S, OCNaroWrappers::OCgp_Pnt2d^ UV, Standard_Real Tol, OCNaroWrappers::OCgp_Dir^ N)
{
  return GeomLib::NormEstim(*((Handle_Geom_Surface*)S->Handle), *((gp_Pnt2d*)UV->Handle), Tol, *((gp_Dir*)N->Handle));
}

