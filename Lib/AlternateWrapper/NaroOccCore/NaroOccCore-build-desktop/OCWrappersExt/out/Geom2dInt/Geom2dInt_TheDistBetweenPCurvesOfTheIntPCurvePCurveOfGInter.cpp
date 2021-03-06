// File generated by CPPExt (CPP file)
//

#include "Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter.h"
#include "../Converter.h"
#include "../Adaptor2d/Adaptor2d_Curve2d.h"
#include "Geom2dInt_Geom2dCurveTool.h"
#include "../math/math_Vector.h"
#include "../math/math_Matrix.h"


using namespace OCNaroWrappers;

OCGeom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter::OCGeom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter(Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter* nativeHandle) : OCmath_FunctionSetWithDerivatives((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCGeom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter::OCGeom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter(OCNaroWrappers::OCAdaptor2d_Curve2d^ curve1, OCNaroWrappers::OCAdaptor2d_Curve2d^ curve2) : OCmath_FunctionSetWithDerivatives((OCDummy^)nullptr)

{
  nativeHandle = new Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter(*((Adaptor2d_Curve2d*)curve1->Handle), *((Adaptor2d_Curve2d*)curve2->Handle));
}

 Standard_Integer OCGeom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter::NbVariables()
{
  return ((Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter*)nativeHandle)->NbVariables();
}

 Standard_Integer OCGeom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter::NbEquations()
{
  return ((Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter*)nativeHandle)->NbEquations();
}

 System::Boolean OCGeom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter::Value(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ F)
{
  return OCConverter::StandardBooleanToBoolean(((Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter*)nativeHandle)->Value(*((math_Vector*)X->Handle), *((math_Vector*)F->Handle)));
}

 System::Boolean OCGeom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter::Derivatives(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Matrix^ D)
{
  return OCConverter::StandardBooleanToBoolean(((Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter*)nativeHandle)->Derivatives(*((math_Vector*)X->Handle), *((math_Matrix*)D->Handle)));
}

 System::Boolean OCGeom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter::Values(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ F, OCNaroWrappers::OCmath_Matrix^ D)
{
  return OCConverter::StandardBooleanToBoolean(((Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter*)nativeHandle)->Values(*((math_Vector*)X->Handle), *((math_Vector*)F->Handle), *((math_Matrix*)D->Handle)));
}


