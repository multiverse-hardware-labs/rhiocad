// File generated by CPPExt (MPV)
//
#ifndef _Extrema_PCFOfEPCOfExtPC_OCWrappers_HeaderFile
#define _Extrema_PCFOfEPCOfExtPC_OCWrappers_HeaderFile

// include native header
#include <Extrema_PCFOfEPCOfExtPC.hxx>
#include "../Converter.h"

#include "../math/math_FunctionWithDerivative.h"

#include "../gp/gp_Pnt.h"
#include "../TColStd/TColStd_SequenceOfReal.h"
#include "../TColStd/TColStd_SequenceOfInteger.h"
#include "Extrema_SeqPCOfPCFOfEPCOfExtPC.h"
#include "../math/math_FunctionWithDerivative.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_Curve;
ref class OCExtrema_CurveTool;
ref class OCExtrema_POnCurv;
ref class OCgp_Pnt;
ref class OCgp_Vec;
ref class OCExtrema_SeqPCOfPCFOfEPCOfExtPC;
ref class OCExtrema_SequenceNodeOfSeqPCOfPCFOfEPCOfExtPC;



public ref class OCExtrema_PCFOfEPCOfExtPC  : public OCmath_FunctionWithDerivative {

protected:
  // dummy constructor;
  OCExtrema_PCFOfEPCOfExtPC(OCDummy^) : OCmath_FunctionWithDerivative((OCDummy^)nullptr) {};

public:

// constructor from native
OCExtrema_PCFOfEPCOfExtPC(Extrema_PCFOfEPCOfExtPC* nativeHandle);

// Methods PUBLIC


OCExtrema_PCFOfEPCOfExtPC();


OCExtrema_PCFOfEPCOfExtPC(OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCAdaptor3d_Curve^ C);


 /*instead*/  void Initialize(OCNaroWrappers::OCAdaptor3d_Curve^ C) ;


 /*instead*/  void SetPoint(OCNaroWrappers::OCgp_Pnt^ P) ;


 /*instead*/  System::Boolean Value(Standard_Real U, Standard_Real& F) ;


 /*instead*/  System::Boolean Derivative(Standard_Real U, Standard_Real& DF) ;


 /*instead*/  System::Boolean Values(Standard_Real U, Standard_Real& F, Standard_Real& DF) ;


virtual /*instead*/  Standard_Integer GetStateNumber() override;


 /*instead*/  Standard_Integer NbExt() ;


 /*instead*/  Standard_Real SquareDistance(Standard_Integer N) ;


 /*instead*/  System::Boolean IsMin(Standard_Integer N) ;


 /*instead*/  OCExtrema_POnCurv^ Point(Standard_Integer N) ;

~OCExtrema_PCFOfEPCOfExtPC()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
