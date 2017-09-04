// File generated by CPPExt (MPV)
//
#ifndef _StepShape_FaceOuterBound_OCWrappers_HeaderFile
#define _StepShape_FaceOuterBound_OCWrappers_HeaderFile

// include native header
#include <StepShape_FaceOuterBound.hxx>
#include "../Converter.h"

#include "StepShape_FaceBound.h"

#include "StepShape_FaceBound.h"


namespace OCNaroWrappers
{




public ref class OCStepShape_FaceOuterBound  : public OCStepShape_FaceBound {

protected:
  // dummy constructor;
  OCStepShape_FaceOuterBound(OCDummy^) : OCStepShape_FaceBound((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepShape_FaceOuterBound(StepShape_FaceOuterBound* nativeHandle);

// Methods PUBLIC

//! Returns a FaceOuterBound <br>
OCStepShape_FaceOuterBound();

~OCStepShape_FaceOuterBound()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif