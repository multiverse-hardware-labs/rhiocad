// File generated by CPPExt (CPP file)
//

#include "math.h"
#include "../Converter.h"


using namespace OCNaroWrappers;



 Standard_Integer OCmath::GaussPointsMax()
{
  return math::GaussPointsMax();
}

 void OCmath::GaussPoints(Standard_Integer Index, OCNaroWrappers::OCmath_Vector^ Points)
{
  math::GaussPoints(Index, *((math_Vector*)Points->Handle));
}

 void OCmath::GaussWeights(Standard_Integer Index, OCNaroWrappers::OCmath_Vector^ Weights)
{
  math::GaussWeights(Index, *((math_Vector*)Weights->Handle));
}

 Standard_Integer OCmath::KronrodPointsMax()
{
  return math::KronrodPointsMax();
}

 System::Boolean OCmath::OrderedGaussPointsAndWeights(Standard_Integer Index, OCNaroWrappers::OCmath_Vector^ Points, OCNaroWrappers::OCmath_Vector^ Weights)
{
  return OCConverter::StandardBooleanToBoolean(math::OrderedGaussPointsAndWeights(Index, *((math_Vector*)Points->Handle), *((math_Vector*)Weights->Handle)));
}

 System::Boolean OCmath::KronrodPointsAndWeights(Standard_Integer Index, OCNaroWrappers::OCmath_Vector^ Points, OCNaroWrappers::OCmath_Vector^ Weights)
{
  return OCConverter::StandardBooleanToBoolean(math::KronrodPointsAndWeights(Index, *((math_Vector*)Points->Handle), *((math_Vector*)Weights->Handle)));
}

