// File generated by CPPExt (CPP file)
//

#include "BRepBlend_CurvPointRadInv.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_HCurve.h"
#include "../math/math_Vector.h"
#include "../math/math_Matrix.h"
#include "../gp/gp_Pnt.h"


using namespace OCNaroWrappers;

OCBRepBlend_CurvPointRadInv::OCBRepBlend_CurvPointRadInv(BRepBlend_CurvPointRadInv* nativeHandle) : OCBlend_CurvPointFuncInv((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepBlend_CurvPointRadInv::OCBRepBlend_CurvPointRadInv(OCNaroWrappers::OCAdaptor3d_HCurve^ C1, OCNaroWrappers::OCAdaptor3d_HCurve^ C2) : OCBlend_CurvPointFuncInv((OCDummy^)nullptr)

{
  nativeHandle = new BRepBlend_CurvPointRadInv(*((Handle_Adaptor3d_HCurve*)C1->Handle), *((Handle_Adaptor3d_HCurve*)C2->Handle));
}

 void OCBRepBlend_CurvPointRadInv::Set(Standard_Integer Choix)
{
  ((BRepBlend_CurvPointRadInv*)nativeHandle)->Set(Choix);
}

 Standard_Integer OCBRepBlend_CurvPointRadInv::NbEquations()
{
  return ((BRepBlend_CurvPointRadInv*)nativeHandle)->NbEquations();
}

 System::Boolean OCBRepBlend_CurvPointRadInv::Value(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ F)
{
  return OCConverter::StandardBooleanToBoolean(((BRepBlend_CurvPointRadInv*)nativeHandle)->Value(*((math_Vector*)X->Handle), *((math_Vector*)F->Handle)));
}

 System::Boolean OCBRepBlend_CurvPointRadInv::Derivatives(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Matrix^ D)
{
  return OCConverter::StandardBooleanToBoolean(((BRepBlend_CurvPointRadInv*)nativeHandle)->Derivatives(*((math_Vector*)X->Handle), *((math_Matrix*)D->Handle)));
}

 System::Boolean OCBRepBlend_CurvPointRadInv::Values(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ F, OCNaroWrappers::OCmath_Matrix^ D)
{
  return OCConverter::StandardBooleanToBoolean(((BRepBlend_CurvPointRadInv*)nativeHandle)->Values(*((math_Vector*)X->Handle), *((math_Vector*)F->Handle), *((math_Matrix*)D->Handle)));
}

 void OCBRepBlend_CurvPointRadInv::Set(OCNaroWrappers::OCgp_Pnt^ P)
{
  ((BRepBlend_CurvPointRadInv*)nativeHandle)->Set(*((gp_Pnt*)P->Handle));
}

 void OCBRepBlend_CurvPointRadInv::GetTolerance(OCNaroWrappers::OCmath_Vector^ Tolerance, Standard_Real Tol)
{
  ((BRepBlend_CurvPointRadInv*)nativeHandle)->GetTolerance(*((math_Vector*)Tolerance->Handle), Tol);
}

 void OCBRepBlend_CurvPointRadInv::GetBounds(OCNaroWrappers::OCmath_Vector^ InfBound, OCNaroWrappers::OCmath_Vector^ SupBound)
{
  ((BRepBlend_CurvPointRadInv*)nativeHandle)->GetBounds(*((math_Vector*)InfBound->Handle), *((math_Vector*)SupBound->Handle));
}

 System::Boolean OCBRepBlend_CurvPointRadInv::IsSolution(OCNaroWrappers::OCmath_Vector^ Sol, Standard_Real Tol)
{
  return OCConverter::StandardBooleanToBoolean(((BRepBlend_CurvPointRadInv*)nativeHandle)->IsSolution(*((math_Vector*)Sol->Handle), Tol));
}


