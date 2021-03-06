// File generated by CPPExt (MPV)
//
#ifndef _GCE2d_MakeRotation_OCWrappers_HeaderFile
#define _GCE2d_MakeRotation_OCWrappers_HeaderFile

// include native header
#include <GCE2d_MakeRotation.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCGeom2d_Transformation;
ref class OCgp_Pnt2d;


//! This class implements an elementary construction algorithm for <br>
//! a rotation in 2D space. The result is a Geom2d_Transformation transformation. <br>
//! A MakeRotation object provides a framework for: <br>
//! -   defining the construction of the transformation, <br>
//! -   implementing the construction algorithm, and <br>
//! -   consulting the result. <br>
public ref class OCGCE2d_MakeRotation  {

protected:
  GCE2d_MakeRotation* nativeHandle;
  OCGCE2d_MakeRotation(OCDummy^) {};

public:
  property GCE2d_MakeRotation* Handle
  {
    GCE2d_MakeRotation* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGCE2d_MakeRotation(GCE2d_MakeRotation* nativeHandle);

// Methods PUBLIC

//! Constructs a rotation through angle Angle about the center Point. <br>
OCGCE2d_MakeRotation(OCNaroWrappers::OCgp_Pnt2d^ Point, Standard_Real Angle);

//!  Returns the constructed transformation. <br>
 /*instead*/  OCGeom2d_Transformation^ Value() ;


 /*instead*/  OCGeom2d_Transformation^ Operator() ;

~OCGCE2d_MakeRotation()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
