// File generated by CPPExt (CPP file)
//

#include "CPnts_MyGaussFunction.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCCPnts_MyGaussFunction::OCCPnts_MyGaussFunction(CPnts_MyGaussFunction* nativeHandle) : OCmath_Function((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCCPnts_MyGaussFunction::OCCPnts_MyGaussFunction() : OCmath_Function((OCDummy^)nullptr)

{
  nativeHandle = new CPnts_MyGaussFunction();
}

 void OCCPnts_MyGaussFunction::Init(CPnts_RealFunction F, Standard_Address D)
{
  ((CPnts_MyGaussFunction*)nativeHandle)->Init(F, D);
}

 System::Boolean OCCPnts_MyGaussFunction::Value(Standard_Real X, Standard_Real& F)
{
  return OCConverter::StandardBooleanToBoolean(((CPnts_MyGaussFunction*)nativeHandle)->Value(X, F));
}


