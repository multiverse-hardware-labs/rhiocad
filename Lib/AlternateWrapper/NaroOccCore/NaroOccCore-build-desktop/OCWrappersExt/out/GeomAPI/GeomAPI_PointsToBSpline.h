// File generated by CPPExt (MPV)
//
#ifndef _GeomAPI_PointsToBSpline_OCWrappers_HeaderFile
#define _GeomAPI_PointsToBSpline_OCWrappers_HeaderFile

// include native header
#include <GeomAPI_PointsToBSpline.hxx>
#include "../Converter.h"


#include "../GeomAbs/GeomAbs_Shape.h"
#include "../Approx/Approx_ParametrizationType.h"


namespace OCNaroWrappers
{

ref class OCGeom_BSplineCurve;
ref class OCTColgp_Array1OfPnt;
ref class OCTColStd_Array1OfReal;


//! This  class  is  used  to  approximate a  BsplineCurve <br>
//!          passing  through an  array  of points,  with  a  given Continuity. <br>
//!   Describes functions for building a 3D BSpline <br>
//! curve which approximates a set of points. <br>
//! A PointsToBSpline object provides a framework for: <br>
//! -   defining the data of the BSpline curve to be built, <br>
//! -   implementing the approximation algorithm, and consulting the results. <br>
public ref class OCGeomAPI_PointsToBSpline  {

protected:
  GeomAPI_PointsToBSpline* nativeHandle;
  OCGeomAPI_PointsToBSpline(OCDummy^) {};

public:
  property GeomAPI_PointsToBSpline* Handle
  {
    GeomAPI_PointsToBSpline* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGeomAPI_PointsToBSpline(GeomAPI_PointsToBSpline* nativeHandle);

// Methods PUBLIC

//! Constructs an empty approximation algorithm. <br>
//! Use an Init function to define and build the BSpline curve. <br>
OCGeomAPI_PointsToBSpline();

//! Approximate  a BSpline  Curve passing  through  an <br>
//!          array of  Point.  The resulting BSpline will  have <br>
//!          the following properties: <br>
//!          1- his degree will be in the range [Degmin,Degmax] <br>
//!          2- his  continuity will be  at  least <Continuity> <br>
//!          3- the distance from the point <Points> to the <br>
//!             BSpline will be lower to Tol3D <br>
OCGeomAPI_PointsToBSpline(OCNaroWrappers::OCTColgp_Array1OfPnt^ Points, Standard_Integer DegMin, Standard_Integer DegMax, OCGeomAbs_Shape Continuity, Standard_Real Tol3D);

//! Approximate  a BSpline  Curve passing  through  an <br>
//!          array of  Point.  The resulting BSpline will  have <br>
//!          the following properties: <br>
//!          1- his degree will be in the range [Degmin,Degmax] <br>
//!          2- his  continuity will be  at  least <Continuity> <br>
//!          3- the distance from the point <Points> to the <br>
//!             BSpline will be lower to Tol3D <br>
OCGeomAPI_PointsToBSpline(OCNaroWrappers::OCTColgp_Array1OfPnt^ Points, OCApprox_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, OCGeomAbs_Shape Continuity, Standard_Real Tol3D);

//! Approximate  a  BSpline  Curve  passing through an <br>
//!          array of Point,  which parameters are given by the <br>
//!           array <Parameters>. <br>
//!          The resulting  BSpline   will have the   following <br>
//!          properties: <br>
//!          1- his degree will be in the range [Degmin,Degmax] <br>
//!          2- his  continuity will be  at  least <Continuity> <br>
//!          3- the distance from the point <Points> to the <br>
//!             BSpline will be lower to Tol3D <br>
OCGeomAPI_PointsToBSpline(OCNaroWrappers::OCTColgp_Array1OfPnt^ Points, OCNaroWrappers::OCTColStd_Array1OfReal^ Parameters, Standard_Integer DegMin, Standard_Integer DegMax, OCGeomAbs_Shape Continuity, Standard_Real Tol3D);

//! Approximate a BSpline Curve  passing through an <br>
//!          array of Point using variational smoothing algorithm, <br>
//!          which tries to minimize additional criterium: <br>
//!          Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion <br>
OCGeomAPI_PointsToBSpline(OCNaroWrappers::OCTColgp_Array1OfPnt^ Points, Standard_Real Weight1, Standard_Real Weight2, Standard_Real Weight3, Standard_Integer DegMax, OCGeomAbs_Shape Continuity, Standard_Real Tol3D);

//! Approximate  a BSpline  Curve passing  through  an <br>
//!          array of  Point.  The resulting BSpline will  have <br>
//!          the following properties: <br>
//!          1- his degree will be in the range [Degmin,Degmax] <br>
//!          2- his  continuity will be  at  least <Continuity> <br>
//!          3- the distance from the point <Points> to the <br>
//!             BSpline will be lower to Tol3D <br>
 /*instead*/  void Init(OCNaroWrappers::OCTColgp_Array1OfPnt^ Points, Standard_Integer DegMin, Standard_Integer DegMax, OCGeomAbs_Shape Continuity, Standard_Real Tol3D) ;

//! Approximate  a BSpline  Curve passing  through  an <br>
//!          array of  Point.  The resulting BSpline will  have <br>
//!          the following properties: <br>
//!          1- his degree will be in the range [Degmin,Degmax] <br>
//!          2- his  continuity will be  at  least <Continuity> <br>
//!          3- the distance from the point <Points> to the <br>
//!             BSpline will be lower to Tol3D <br>
 /*instead*/  void Init(OCNaroWrappers::OCTColgp_Array1OfPnt^ Points, OCApprox_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, OCGeomAbs_Shape Continuity, Standard_Real Tol3D) ;

//! Approximate  a  BSpline  Curve  passing through an <br>
//!          array of Point,  which parameters are given by the <br>
//!           array <Parameters>. <br>
//!          The resulting  BSpline   will have the   following <br>
//!          properties: <br>
//!          1- his degree will be in the range [Degmin,Degmax] <br>
//!          2- his  continuity will be  at  least <Continuity> <br>
//!          3- the distance from the point <Points> to the <br>
//!             BSpline will be lower to Tol3D <br>
 /*instead*/  void Init(OCNaroWrappers::OCTColgp_Array1OfPnt^ Points, OCNaroWrappers::OCTColStd_Array1OfReal^ Parameters, Standard_Integer DegMin, Standard_Integer DegMax, OCGeomAbs_Shape Continuity, Standard_Real Tol3D) ;

//! Approximate a BSpline Curve  passing through an <br>
//!          array of Point using variational smoothing algorithm, <br>
//!          which tries to minimize additional criterium: <br>
//!          Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion <br>
 /*instead*/  void Init(OCNaroWrappers::OCTColgp_Array1OfPnt^ Points, Standard_Real Weight1, Standard_Real Weight2, Standard_Real Weight3, Standard_Integer DegMax, OCGeomAbs_Shape Continuity, Standard_Real Tol3D) ;

//! Returns the computed BSpline curve. <br>
//! Raises StdFail_NotDone if the curve is not built. <br>
 /*instead*/  OCGeom_BSplineCurve^ Curve() ;


 /*instead*/  System::Boolean IsDone() ;

~OCGeomAPI_PointsToBSpline()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif