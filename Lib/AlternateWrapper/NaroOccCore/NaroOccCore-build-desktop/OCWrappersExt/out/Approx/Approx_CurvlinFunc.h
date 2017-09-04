// File generated by CPPExt (Transient)
//
#ifndef _Approx_CurvlinFunc_OCWrappers_HeaderFile
#define _Approx_CurvlinFunc_OCWrappers_HeaderFile

// include the wrapped class
#include <Approx_CurvlinFunc.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../GeomAbs/GeomAbs_Shape.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_HCurve;
ref class OCAdaptor2d_HCurve2d;
ref class OCAdaptor3d_HSurface;
ref class OCTColStd_HArray1OfReal;
ref class OCAdaptor3d_Curve;
ref class OCTColStd_Array1OfReal;


//! defines an abstract curve with <br>
//!          curvilinear parametrization <br>
//! <br>
//! <br>
//! <br>
//! <br>
public ref class OCApprox_CurvlinFunc : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCApprox_CurvlinFunc(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCApprox_CurvlinFunc(Handle(Approx_CurvlinFunc)* nativeHandle);

// Methods PUBLIC


OCApprox_CurvlinFunc(OCNaroWrappers::OCAdaptor3d_HCurve^ C, Standard_Real Tol);


OCApprox_CurvlinFunc(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C2D, OCNaroWrappers::OCAdaptor3d_HSurface^ S, Standard_Real Tol);


OCApprox_CurvlinFunc(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C2D1, OCNaroWrappers::OCAdaptor2d_HCurve2d^ C2D2, OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2, Standard_Real Tol);

//!---Purpose Update the tolerance to used <br>
 /*instead*/  void SetTol(Standard_Real Tol) ;


 /*instead*/  Standard_Real FirstParameter() ;


 /*instead*/  Standard_Real LastParameter() ;

//! Returns  the number  of  intervals for  continuity <br>
//!          <S>. May be one if Continuity(me) >= <S> <br>
 /*instead*/  Standard_Integer NbIntervals(OCGeomAbs_Shape S) ;

//! Stores in <T> the  parameters bounding the intervals <br>
//!          of continuity <S>. <br>
//! <br>
//!          The array must provide  enough room to  accomodate <br>
//!          for the parameters. i.e. T.Length() > NbIntervals() <br>
 /*instead*/  void Intervals(OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S) ;

//! if First < 0 or Last > 1 <br>
 /*instead*/  void Trim(Standard_Real First, Standard_Real Last, Standard_Real Tol) ;

//! Computes length of the curve. <br>
 /*instead*/  void Length() ;

//! Computes length of the curve segment. <br>
 /*instead*/  Standard_Real Length(OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Real FirstU, Standard_Real LasrU) ;


 /*instead*/  Standard_Real GetLength() ;

//! returns  original parameter correponding S.  if <br>
//!  Case == 1 computation is performed on myC2D1 and mySurf1, <br>
//!  otherwise it is done on myC2D2 and mySurf2. <br>
 /*instead*/  Standard_Real GetUParameter(OCNaroWrappers::OCAdaptor3d_Curve^ C, Standard_Real S, Standard_Integer NumberOfCurve) ;

//! returns original parameter correponding S. <br>
 /*instead*/  Standard_Real GetSParameter(Standard_Real U) ;

//! if myCase != 1 <br>
 /*instead*/  System::Boolean EvalCase1(Standard_Real S, Standard_Integer Order, OCNaroWrappers::OCTColStd_Array1OfReal^ Result) ;

//! if myCase != 2 <br>
 /*instead*/  System::Boolean EvalCase2(Standard_Real S, Standard_Integer Order, OCNaroWrappers::OCTColStd_Array1OfReal^ Result) ;

//! if myCase != 3 <br>
 /*instead*/  System::Boolean EvalCase3(Standard_Real S, Standard_Integer Order, OCNaroWrappers::OCTColStd_Array1OfReal^ Result) ;

~OCApprox_CurvlinFunc()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif