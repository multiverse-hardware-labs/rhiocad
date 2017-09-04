// File generated by CPPExt (Transient)
//
#ifndef _Geom2d_BoundedCurve_OCWrappers_HeaderFile
#define _Geom2d_BoundedCurve_OCWrappers_HeaderFile

// include the wrapped class
#include <Geom2d_BoundedCurve.hxx>
#include "../Converter.h"

#include "Geom2d_Curve.h"



namespace OCNaroWrappers
{

ref class OCgp_Pnt2d;


//! The abstract class BoundedCurve describes the <br>
//! common behavior of bounded curves in 2D space. A <br>
//! bounded curve is limited by two finite values of the <br>
//! parameter, termed respectively "first parameter" and <br>
//! "last parameter". The "first parameter" gives the "start <br>
//! point" of the bounded curve, and the "last parameter" <br>
//! gives the "end point" of the bounded curve. <br>
//! The length of a bounded curve is finite. <br>
//! The Geom2d package provides three concrete <br>
//! classes of bounded curves: <br>
//! - two frequently used mathematical formulations of complex curves: <br>
//!   - Geom2d_BezierCurve, <br>
//!   - Geom2d_BSplineCurve, and <br>
//! - Geom2d_TrimmedCurve to trim a curve, i.e. to <br>
//!   only take part of the curve limited by two values of <br>
//!   the parameter of the basis curve. <br>
public ref class OCGeom2d_BoundedCurve : OCGeom2d_Curve {

protected:
  // dummy constructor;
  OCGeom2d_BoundedCurve(OCDummy^) : OCGeom2d_Curve((OCDummy^)nullptr) {};

public:

// constructor from native
OCGeom2d_BoundedCurve(Handle(Geom2d_BoundedCurve)* nativeHandle);

// Methods PUBLIC

~OCGeom2d_BoundedCurve()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif