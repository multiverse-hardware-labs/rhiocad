// File generated by CPPExt (CPP file)
//

#include "Approx_FitAndDivide2d.h"
#include "../Converter.h"
#include "../AppCont/AppCont_Function2d.h"
#include "../AppCont/AppCont_FunctionTool2d.h"
#include "Approx_MyLeastSquareOfFitAndDivide2d.h"
#include "../AppParCurves/AppParCurves_MultiCurve.h"


using namespace OCNaroWrappers;

OCApprox_FitAndDivide2d::OCApprox_FitAndDivide2d(Approx_FitAndDivide2d* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCApprox_FitAndDivide2d::OCApprox_FitAndDivide2d(OCNaroWrappers::OCAppCont_Function2d^ Line, Standard_Integer degreemin, Standard_Integer degreemax, Standard_Real Tolerance3d, Standard_Real Tolerance2d, System::Boolean cutting, OCAppParCurves_Constraint FirstC, OCAppParCurves_Constraint LastC) 
{
  nativeHandle = new Approx_FitAndDivide2d(*((AppCont_Function2d*)Line->Handle), degreemin, degreemax, Tolerance3d, Tolerance2d, OCConverter::BooleanToStandardBoolean(cutting), (AppParCurves_Constraint)FirstC, (AppParCurves_Constraint)LastC);
}

OCApprox_FitAndDivide2d::OCApprox_FitAndDivide2d(Standard_Integer degreemin, Standard_Integer degreemax, Standard_Real Tolerance3d, Standard_Real Tolerance2d, System::Boolean cutting, OCAppParCurves_Constraint FirstC, OCAppParCurves_Constraint LastC) 
{
  nativeHandle = new Approx_FitAndDivide2d(degreemin, degreemax, Tolerance3d, Tolerance2d, OCConverter::BooleanToStandardBoolean(cutting), (AppParCurves_Constraint)FirstC, (AppParCurves_Constraint)LastC);
}

 void OCApprox_FitAndDivide2d::Perform(OCNaroWrappers::OCAppCont_Function2d^ Line)
{
  ((Approx_FitAndDivide2d*)nativeHandle)->Perform(*((AppCont_Function2d*)Line->Handle));
}

 void OCApprox_FitAndDivide2d::SetDegrees(Standard_Integer degreemin, Standard_Integer degreemax)
{
  ((Approx_FitAndDivide2d*)nativeHandle)->SetDegrees(degreemin, degreemax);
}

 void OCApprox_FitAndDivide2d::SetTolerances(Standard_Real Tolerance3d, Standard_Real Tolerance2d)
{
  ((Approx_FitAndDivide2d*)nativeHandle)->SetTolerances(Tolerance3d, Tolerance2d);
}

 void OCApprox_FitAndDivide2d::SetConstraints(OCAppParCurves_Constraint FirstC, OCAppParCurves_Constraint LastC)
{
  ((Approx_FitAndDivide2d*)nativeHandle)->SetConstraints((AppParCurves_Constraint)FirstC, (AppParCurves_Constraint)LastC);
}

 System::Boolean OCApprox_FitAndDivide2d::IsAllApproximated()
{
  return OCConverter::StandardBooleanToBoolean(((Approx_FitAndDivide2d*)nativeHandle)->IsAllApproximated());
}

 System::Boolean OCApprox_FitAndDivide2d::IsToleranceReached()
{
  return OCConverter::StandardBooleanToBoolean(((Approx_FitAndDivide2d*)nativeHandle)->IsToleranceReached());
}

 void OCApprox_FitAndDivide2d::Error(Standard_Integer Index, Standard_Real& tol3d, Standard_Real& tol2d)
{
  ((Approx_FitAndDivide2d*)nativeHandle)->Error(Index, tol3d, tol2d);
}

 Standard_Integer OCApprox_FitAndDivide2d::NbMultiCurves()
{
  return ((Approx_FitAndDivide2d*)nativeHandle)->NbMultiCurves();
}

OCAppParCurves_MultiCurve^ OCApprox_FitAndDivide2d::Value(Standard_Integer Index)
{
  AppParCurves_MultiCurve* tmp = new AppParCurves_MultiCurve();
  *tmp = ((Approx_FitAndDivide2d*)nativeHandle)->Value(Index);
  return gcnew OCAppParCurves_MultiCurve(tmp);
}

 void OCApprox_FitAndDivide2d::Parameters(Standard_Integer Index, Standard_Real& firstp, Standard_Real& lastp)
{
  ((Approx_FitAndDivide2d*)nativeHandle)->Parameters(Index, firstp, lastp);
}


