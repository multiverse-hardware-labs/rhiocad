// File generated by CPPExt (CPP file)
//

#include "Extrema_CCFOfECCOfExtCC.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_Curve.h"
#include "Extrema_CurveTool.h"
#include "Extrema_POnCurv.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"
#include "Extrema_SeqPOnCOfCCFOfECCOfExtCC.h"
#include "Extrema_SequenceNodeOfSeqPOnCOfCCFOfECCOfExtCC.h"
#include "../math/math_Vector.h"
#include "../math/math_Matrix.h"


using namespace OCNaroWrappers;

OCExtrema_CCFOfECCOfExtCC::OCExtrema_CCFOfECCOfExtCC(Extrema_CCFOfECCOfExtCC* nativeHandle) : OCmath_FunctionSetWithDerivatives((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCExtrema_CCFOfECCOfExtCC::OCExtrema_CCFOfECCOfExtCC(Standard_Real thetol) : OCmath_FunctionSetWithDerivatives((OCDummy^)nullptr)

{
  nativeHandle = new Extrema_CCFOfECCOfExtCC(thetol);
}

OCExtrema_CCFOfECCOfExtCC::OCExtrema_CCFOfECCOfExtCC(OCNaroWrappers::OCAdaptor3d_Curve^ C1, OCNaroWrappers::OCAdaptor3d_Curve^ C2, Standard_Real thetol) : OCmath_FunctionSetWithDerivatives((OCDummy^)nullptr)

{
  nativeHandle = new Extrema_CCFOfECCOfExtCC(*((Adaptor3d_Curve*)C1->Handle), *((Adaptor3d_Curve*)C2->Handle), thetol);
}

 void OCExtrema_CCFOfECCOfExtCC::SetCurve(Standard_Integer theRank, OCNaroWrappers::OCAdaptor3d_Curve^ C1)
{
  ((Extrema_CCFOfECCOfExtCC*)nativeHandle)->SetCurve(theRank, *((Adaptor3d_Curve*)C1->Handle));
}

 void OCExtrema_CCFOfECCOfExtCC::SetTolerance(Standard_Real theTol)
{
  ((Extrema_CCFOfECCOfExtCC*)nativeHandle)->SetTolerance(theTol);
}

 Standard_Integer OCExtrema_CCFOfECCOfExtCC::NbVariables()
{
  return ((Extrema_CCFOfECCOfExtCC*)nativeHandle)->NbVariables();
}

 Standard_Integer OCExtrema_CCFOfECCOfExtCC::NbEquations()
{
  return ((Extrema_CCFOfECCOfExtCC*)nativeHandle)->NbEquations();
}

 System::Boolean OCExtrema_CCFOfECCOfExtCC::Value(OCNaroWrappers::OCmath_Vector^ UV, OCNaroWrappers::OCmath_Vector^ F)
{
  return OCConverter::StandardBooleanToBoolean(((Extrema_CCFOfECCOfExtCC*)nativeHandle)->Value(*((math_Vector*)UV->Handle), *((math_Vector*)F->Handle)));
}

 System::Boolean OCExtrema_CCFOfECCOfExtCC::Derivatives(OCNaroWrappers::OCmath_Vector^ UV, OCNaroWrappers::OCmath_Matrix^ DF)
{
  return OCConverter::StandardBooleanToBoolean(((Extrema_CCFOfECCOfExtCC*)nativeHandle)->Derivatives(*((math_Vector*)UV->Handle), *((math_Matrix*)DF->Handle)));
}

 System::Boolean OCExtrema_CCFOfECCOfExtCC::Values(OCNaroWrappers::OCmath_Vector^ UV, OCNaroWrappers::OCmath_Vector^ F, OCNaroWrappers::OCmath_Matrix^ DF)
{
  return OCConverter::StandardBooleanToBoolean(((Extrema_CCFOfECCOfExtCC*)nativeHandle)->Values(*((math_Vector*)UV->Handle), *((math_Vector*)F->Handle), *((math_Matrix*)DF->Handle)));
}

 Standard_Integer OCExtrema_CCFOfECCOfExtCC::GetStateNumber()
{
  return ((Extrema_CCFOfECCOfExtCC*)nativeHandle)->GetStateNumber();
}

 Standard_Integer OCExtrema_CCFOfECCOfExtCC::NbExt()
{
  return ((Extrema_CCFOfECCOfExtCC*)nativeHandle)->NbExt();
}

 Standard_Real OCExtrema_CCFOfECCOfExtCC::SquareDistance(Standard_Integer N)
{
  return ((Extrema_CCFOfECCOfExtCC*)nativeHandle)->SquareDistance(N);
}

 void OCExtrema_CCFOfECCOfExtCC::Points(Standard_Integer N, OCNaroWrappers::OCExtrema_POnCurv^ P1, OCNaroWrappers::OCExtrema_POnCurv^ P2)
{
  ((Extrema_CCFOfECCOfExtCC*)nativeHandle)->Points(N, *((Extrema_POnCurv*)P1->Handle), *((Extrema_POnCurv*)P2->Handle));
}

 Standard_Address OCExtrema_CCFOfECCOfExtCC::CurvePtr(Standard_Integer theRank)
{
  return ((Extrema_CCFOfECCOfExtCC*)nativeHandle)->CurvePtr(theRank);
}

 Standard_Real OCExtrema_CCFOfECCOfExtCC::Tolerance()
{
  return ((Extrema_CCFOfECCOfExtCC*)nativeHandle)->Tolerance();
}


