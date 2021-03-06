// File generated by CPPExt (MPV)
//
#ifndef _StepGeom_CurveOnSurface_OCWrappers_HeaderFile
#define _StepGeom_CurveOnSurface_OCWrappers_HeaderFile

// include native header
#include <StepGeom_CurveOnSurface.hxx>
#include "../Converter.h"

#include "../StepData/StepData_SelectType.h"

#include "../StepData/StepData_SelectType.h"


namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCStepGeom_Pcurve;
ref class OCStepGeom_SurfaceCurve;
ref class OCStepGeom_CompositeCurveOnSurface;



public ref class OCStepGeom_CurveOnSurface  : public OCStepData_SelectType {

protected:
  // dummy constructor;
  OCStepGeom_CurveOnSurface(OCDummy^) : OCStepData_SelectType((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepGeom_CurveOnSurface(StepGeom_CurveOnSurface* nativeHandle);

// Methods PUBLIC

//! Returns a CurveOnSurface SelectType <br>
OCStepGeom_CurveOnSurface();

//! Recognizes a CurveOnSurface Kind Entity that is : <br>
//!        1 -> Pcurve <br>
//!        2 -> SurfaceCurve <br>
//!        3 -> CompositeCurveOnSurface <br>
//!        0 else <br>
 /*instead*/  Standard_Integer CaseNum(OCNaroWrappers::OCStandard_Transient^ ent) ;

//! returns Value as a Pcurve (Null if another type) <br>
 /*instead*/  OCStepGeom_Pcurve^ Pcurve() ;

//! returns Value as a SurfaceCurve (Null if another type) <br>
 /*instead*/  OCStepGeom_SurfaceCurve^ SurfaceCurve() ;

//! returns Value as a CompositeCurveOnSurface (Null if another type) <br>
 /*instead*/  OCStepGeom_CompositeCurveOnSurface^ CompositeCurveOnSurface() ;

~OCStepGeom_CurveOnSurface()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
