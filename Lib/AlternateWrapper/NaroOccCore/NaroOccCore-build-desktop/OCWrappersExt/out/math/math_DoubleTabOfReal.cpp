// File generated by CPPExt (CPP file)
//

#include "math_DoubleTabOfReal.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCmath_DoubleTabOfReal::OCmath_DoubleTabOfReal(math_DoubleTabOfReal* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCmath_DoubleTabOfReal::OCmath_DoubleTabOfReal(Standard_Integer LowerRow, Standard_Integer UpperRow, Standard_Integer LowerCol, Standard_Integer UpperCol) 
{
  nativeHandle = new math_DoubleTabOfReal(LowerRow, UpperRow, LowerCol, UpperCol);
}

OCmath_DoubleTabOfReal::OCmath_DoubleTabOfReal(Standard_Real Tab, Standard_Integer LowerRow, Standard_Integer UpperRow, Standard_Integer LowerCol, Standard_Integer UpperCol) 
{
  nativeHandle = new math_DoubleTabOfReal(Tab, LowerRow, UpperRow, LowerCol, UpperCol);
}

 void OCmath_DoubleTabOfReal::Init(Standard_Real InitValue)
{
  ((math_DoubleTabOfReal*)nativeHandle)->Init(InitValue);
}

OCmath_DoubleTabOfReal::OCmath_DoubleTabOfReal(OCNaroWrappers::OCmath_DoubleTabOfReal^ Other) 
{
  nativeHandle = new math_DoubleTabOfReal(*((math_DoubleTabOfReal*)Other->Handle));
}

 void OCmath_DoubleTabOfReal::Copy(OCNaroWrappers::OCmath_DoubleTabOfReal^ Other)
{
  ((math_DoubleTabOfReal*)nativeHandle)->Copy(*((math_DoubleTabOfReal*)Other->Handle));
}

 void OCmath_DoubleTabOfReal::SetLowerRow(Standard_Integer LowerRow)
{
  ((math_DoubleTabOfReal*)nativeHandle)->SetLowerRow(LowerRow);
}

 void OCmath_DoubleTabOfReal::SetLowerCol(Standard_Integer LowerCol)
{
  ((math_DoubleTabOfReal*)nativeHandle)->SetLowerCol(LowerCol);
}

 Standard_Real OCmath_DoubleTabOfReal::Value(Standard_Integer RowIndex, Standard_Integer ColIndex)
{
  return ((math_DoubleTabOfReal*)nativeHandle)->Value(RowIndex, ColIndex);
}


