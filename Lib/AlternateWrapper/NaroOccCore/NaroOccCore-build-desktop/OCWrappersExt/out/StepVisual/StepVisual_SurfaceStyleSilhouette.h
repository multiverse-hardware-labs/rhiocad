// File generated by CPPExt (Transient)
//
#ifndef _StepVisual_SurfaceStyleSilhouette_OCWrappers_HeaderFile
#define _StepVisual_SurfaceStyleSilhouette_OCWrappers_HeaderFile

// include the wrapped class
#include <StepVisual_SurfaceStyleSilhouette.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCStepVisual_CurveStyle;



public ref class OCStepVisual_SurfaceStyleSilhouette : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepVisual_SurfaceStyleSilhouette(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepVisual_SurfaceStyleSilhouette(Handle(StepVisual_SurfaceStyleSilhouette)* nativeHandle);

// Methods PUBLIC

//! Returns a SurfaceStyleSilhouette <br>
OCStepVisual_SurfaceStyleSilhouette();


virtual /*instead*/  void Init(OCNaroWrappers::OCStepVisual_CurveStyle^ aStyleOfSilhouette) ;


 /*instead*/  void SetStyleOfSilhouette(OCNaroWrappers::OCStepVisual_CurveStyle^ aStyleOfSilhouette) ;


 /*instead*/  OCStepVisual_CurveStyle^ StyleOfSilhouette() ;

~OCStepVisual_SurfaceStyleSilhouette()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
