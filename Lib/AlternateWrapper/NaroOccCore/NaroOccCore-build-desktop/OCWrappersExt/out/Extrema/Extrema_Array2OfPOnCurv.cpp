// File generated by CPPExt (CPP file)
//

#include "Extrema_Array2OfPOnCurv.h"
#include "../Converter.h"
#include "Extrema_POnCurv.h"


using namespace OCNaroWrappers;

OCExtrema_Array2OfPOnCurv::OCExtrema_Array2OfPOnCurv(Extrema_Array2OfPOnCurv* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCExtrema_Array2OfPOnCurv::OCExtrema_Array2OfPOnCurv(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2) 
{
  nativeHandle = new Extrema_Array2OfPOnCurv(R1, R2, C1, C2);
}

OCExtrema_Array2OfPOnCurv::OCExtrema_Array2OfPOnCurv(OCNaroWrappers::OCExtrema_POnCurv^ Item, Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2) 
{
  nativeHandle = new Extrema_Array2OfPOnCurv(*((Extrema_POnCurv*)Item->Handle), R1, R2, C1, C2);
}

 void OCExtrema_Array2OfPOnCurv::Init(OCNaroWrappers::OCExtrema_POnCurv^ V)
{
  ((Extrema_Array2OfPOnCurv*)nativeHandle)->Init(*((Extrema_POnCurv*)V->Handle));
}

OCExtrema_Array2OfPOnCurv^ OCExtrema_Array2OfPOnCurv::Assign(OCNaroWrappers::OCExtrema_Array2OfPOnCurv^ Other)
{
  Extrema_Array2OfPOnCurv* tmp = new Extrema_Array2OfPOnCurv(0, 0, 0, 0);
  *tmp = ((Extrema_Array2OfPOnCurv*)nativeHandle)->Assign(*((Extrema_Array2OfPOnCurv*)Other->Handle));
  return gcnew OCExtrema_Array2OfPOnCurv(tmp);
}

 Standard_Integer OCExtrema_Array2OfPOnCurv::ColLength()
{
  return ((Extrema_Array2OfPOnCurv*)nativeHandle)->ColLength();
}

 Standard_Integer OCExtrema_Array2OfPOnCurv::RowLength()
{
  return ((Extrema_Array2OfPOnCurv*)nativeHandle)->RowLength();
}

 Standard_Integer OCExtrema_Array2OfPOnCurv::LowerCol()
{
  return ((Extrema_Array2OfPOnCurv*)nativeHandle)->LowerCol();
}

 Standard_Integer OCExtrema_Array2OfPOnCurv::LowerRow()
{
  return ((Extrema_Array2OfPOnCurv*)nativeHandle)->LowerRow();
}

 Standard_Integer OCExtrema_Array2OfPOnCurv::UpperCol()
{
  return ((Extrema_Array2OfPOnCurv*)nativeHandle)->UpperCol();
}

 Standard_Integer OCExtrema_Array2OfPOnCurv::UpperRow()
{
  return ((Extrema_Array2OfPOnCurv*)nativeHandle)->UpperRow();
}

 void OCExtrema_Array2OfPOnCurv::SetValue(Standard_Integer Row, Standard_Integer Col, OCNaroWrappers::OCExtrema_POnCurv^ Value)
{
  ((Extrema_Array2OfPOnCurv*)nativeHandle)->SetValue(Row, Col, *((Extrema_POnCurv*)Value->Handle));
}

OCExtrema_POnCurv^ OCExtrema_Array2OfPOnCurv::Value(Standard_Integer Row, Standard_Integer Col)
{
  Extrema_POnCurv* tmp = new Extrema_POnCurv();
  *tmp = ((Extrema_Array2OfPOnCurv*)nativeHandle)->Value(Row, Col);
  return gcnew OCExtrema_POnCurv(tmp);
}

OCExtrema_POnCurv^ OCExtrema_Array2OfPOnCurv::ChangeValue(Standard_Integer Row, Standard_Integer Col)
{
  Extrema_POnCurv* tmp = new Extrema_POnCurv();
  *tmp = ((Extrema_Array2OfPOnCurv*)nativeHandle)->ChangeValue(Row, Col);
  return gcnew OCExtrema_POnCurv(tmp);
}


