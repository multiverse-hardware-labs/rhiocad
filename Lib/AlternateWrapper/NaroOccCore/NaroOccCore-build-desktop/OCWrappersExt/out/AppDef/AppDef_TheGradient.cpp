// File generated by CPPExt (CPP file)
//

#include "AppDef_TheGradient.h"
#include "../Converter.h"
#include "AppDef_MultiLine.h"
#include "AppDef_MyLineTool.h"
#include "AppDef_ParLeastSquareOfTheGradient.h"
#include "AppDef_ResConstraintOfTheGradient.h"
#include "AppDef_ParFunctionOfTheGradient.h"
#include "AppDef_Gradient_BFGSOfTheGradient.h"
#include "../AppParCurves/AppParCurves_HArray1OfConstraintCouple.h"
#include "../math/math_Vector.h"
#include "../AppParCurves/AppParCurves_MultiCurve.h"


using namespace OCNaroWrappers;

OCAppDef_TheGradient::OCAppDef_TheGradient(AppDef_TheGradient* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCAppDef_TheGradient::OCAppDef_TheGradient(OCNaroWrappers::OCAppDef_MultiLine^ SSP, Standard_Integer FirstPoint, Standard_Integer LastPoint, OCNaroWrappers::OCAppParCurves_HArray1OfConstraintCouple^ TheConstraints, OCNaroWrappers::OCmath_Vector^ Parameters, Standard_Integer Deg, Standard_Real Tol3d, Standard_Real Tol2d, Standard_Integer NbIterations) 
{
  nativeHandle = new AppDef_TheGradient(*((AppDef_MultiLine*)SSP->Handle), FirstPoint, LastPoint, *((Handle_AppParCurves_HArray1OfConstraintCouple*)TheConstraints->Handle), *((math_Vector*)Parameters->Handle), Deg, Tol3d, Tol2d, NbIterations);
}

 System::Boolean OCAppDef_TheGradient::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((AppDef_TheGradient*)nativeHandle)->IsDone());
}

OCAppParCurves_MultiCurve^ OCAppDef_TheGradient::Value()
{
  AppParCurves_MultiCurve* tmp = new AppParCurves_MultiCurve();
  *tmp = ((AppDef_TheGradient*)nativeHandle)->Value();
  return gcnew OCAppParCurves_MultiCurve(tmp);
}

 Standard_Real OCAppDef_TheGradient::Error(Standard_Integer Index)
{
  return ((AppDef_TheGradient*)nativeHandle)->Error(Index);
}

 Standard_Real OCAppDef_TheGradient::MaxError3d()
{
  return ((AppDef_TheGradient*)nativeHandle)->MaxError3d();
}

 Standard_Real OCAppDef_TheGradient::MaxError2d()
{
  return ((AppDef_TheGradient*)nativeHandle)->MaxError2d();
}

 Standard_Real OCAppDef_TheGradient::AverageError()
{
  return ((AppDef_TheGradient*)nativeHandle)->AverageError();
}


