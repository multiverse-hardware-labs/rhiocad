// File generated by CPPExt (MPV)
//
#ifndef _StepGeom_OuterBoundaryCurve_OCWrappers_HeaderFile
#define _StepGeom_OuterBoundaryCurve_OCWrappers_HeaderFile

// include native header
#include <StepGeom_OuterBoundaryCurve.hxx>
#include "../Converter.h"

#include "StepGeom_BoundaryCurve.h"

#include "StepGeom_BoundaryCurve.h"


namespace OCNaroWrappers
{




public ref class OCStepGeom_OuterBoundaryCurve  : public OCStepGeom_BoundaryCurve {

protected:
  // dummy constructor;
  OCStepGeom_OuterBoundaryCurve(OCDummy^) : OCStepGeom_BoundaryCurve((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepGeom_OuterBoundaryCurve(StepGeom_OuterBoundaryCurve* nativeHandle);

// Methods PUBLIC

//! Returns a OuterBoundaryCurve <br>
OCStepGeom_OuterBoundaryCurve();

~OCStepGeom_OuterBoundaryCurve()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
