// File generated by CPPExt (MPV)
//
#ifndef _StepGeom_CartesianTransformationOperator3d_OCWrappers_HeaderFile
#define _StepGeom_CartesianTransformationOperator3d_OCWrappers_HeaderFile

// include native header
#include <StepGeom_CartesianTransformationOperator3d.hxx>
#include "../Converter.h"

#include "StepGeom_CartesianTransformationOperator.h"

#include "StepGeom_Direction.h"
#include "StepGeom_CartesianTransformationOperator.h"


namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepGeom_Direction;
ref class OCStepGeom_CartesianPoint;



public ref class OCStepGeom_CartesianTransformationOperator3d  : public OCStepGeom_CartesianTransformationOperator {

protected:
  // dummy constructor;
  OCStepGeom_CartesianTransformationOperator3d(OCDummy^) : OCStepGeom_CartesianTransformationOperator((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepGeom_CartesianTransformationOperator3d(StepGeom_CartesianTransformationOperator3d* nativeHandle);

// Methods PUBLIC

//! Returns a CartesianTransformationOperator3d <br>
OCStepGeom_CartesianTransformationOperator3d();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, System::Boolean hasAaxis1, OCNaroWrappers::OCStepGeom_Direction^ aAxis1, System::Boolean hasAaxis2, OCNaroWrappers::OCStepGeom_Direction^ aAxis2, OCNaroWrappers::OCStepGeom_CartesianPoint^ aLocalOrigin, System::Boolean hasAscale, Standard_Real aScale) override;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, System::Boolean hasAaxis1, OCNaroWrappers::OCStepGeom_Direction^ aAxis1, System::Boolean hasAaxis2, OCNaroWrappers::OCStepGeom_Direction^ aAxis2, OCNaroWrappers::OCStepGeom_CartesianPoint^ aLocalOrigin, System::Boolean hasAscale, Standard_Real aScale, System::Boolean hasAaxis3, OCNaroWrappers::OCStepGeom_Direction^ aAxis3) ;


 /*instead*/  void SetAxis3(OCNaroWrappers::OCStepGeom_Direction^ aAxis3) ;


 /*instead*/  void UnSetAxis3() ;


 /*instead*/  OCStepGeom_Direction^ Axis3() ;


 /*instead*/  System::Boolean HasAxis3() ;

~OCStepGeom_CartesianTransformationOperator3d()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
