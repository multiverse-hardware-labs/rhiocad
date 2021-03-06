// File generated by CPPExt (MPV)
//
#ifndef _StepBasic_MeasureValueMember_OCWrappers_HeaderFile
#define _StepBasic_MeasureValueMember_OCWrappers_HeaderFile

// include native header
#include <StepBasic_MeasureValueMember.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{



//! for Select MeasureValue, i.e. : <br>
//!         length_measure,time_measure,plane_angle_measure, <br>
//!         solid_angle_measure,ratio_measure,parameter_value, <br>
//!         context_dependent_measure,positive_length_measure, <br>
//!         positive_plane_angle_measure,positive_ratio_measure, <br>
//!	       area_measure,volume_measure <br>
public ref class OCStepBasic_MeasureValueMember  {

protected:
  StepBasic_MeasureValueMember* nativeHandle;
  OCStepBasic_MeasureValueMember(OCDummy^) {};

public:
  property StepBasic_MeasureValueMember* Handle
  {
    StepBasic_MeasureValueMember* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStepBasic_MeasureValueMember(StepBasic_MeasureValueMember* nativeHandle);

// Methods PUBLIC


OCStepBasic_MeasureValueMember();


virtual /*instead*/  System::Boolean HasName() ;


virtual /*instead*/  System::String^ Name() ;


virtual /*instead*/  System::Boolean SetName(System::String^ name) ;

~OCStepBasic_MeasureValueMember()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
