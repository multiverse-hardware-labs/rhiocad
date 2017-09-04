// File generated by CPPExt (Transient)
//
#ifndef _Geom2d_Ellipse_OCWrappers_HeaderFile
#define _Geom2d_Ellipse_OCWrappers_HeaderFile

// include the wrapped class
#include <Geom2d_Ellipse.hxx>
#include "../Converter.h"

#include "Geom2d_Conic.h"



namespace OCNaroWrappers
{

ref class OCgp_Elips2d;
ref class OCgp_Ax2d;
ref class OCgp_Ax22d;
ref class OCgp_Pnt2d;
ref class OCgp_Vec2d;
ref class OCgp_Trsf2d;
ref class OCGeom2d_Geometry;


//!  Describes an ellipse in the plane (2D space). <br>
//! An ellipse is defined by its major and minor radii and, <br>
//! as with any conic curve, is positioned in the plane <br>
//! with a coordinate system (gp_Ax22d object) where: <br>
//! - the origin is the center of the ellipse, <br>
//! - the "X Direction" defines the major axis, and <br>
//! - the "Y Direction" defines the minor axis. <br>
//!   This coordinate system is the local coordinate system of the ellipse. <br>
//! The orientation (direct or indirect) of the local <br>
//! coordinate system gives an explicit orientation to the <br>
//! ellipse, determining the direction in which the <br>
//! parameter increases along the ellipse. <br>
//! The Geom2d_Ellipse ellipse is parameterized by an angle: <br>
//! P(U) = O + MajorRad*Cos(U)*XDir + MinorRad*Sin(U)*YDir <br>
//! where: <br>
//! - P is the point of parameter U, <br>
//! - O, XDir and YDir are respectively the origin, "X <br>
//!   Direction" and "Y Direction" of its local coordinate system, <br>
//! - MajorRad and MinorRad are the major and <br>
//!   minor radii of the ellipse. <br>
//! The "X Axis" of the local coordinate system therefore <br>
//! defines the origin of the parameter of the ellipse. <br>
//! An ellipse is a closed and periodic curve. The period <br>
//! is 2.*Pi and the parameter range is [ 0,2.*Pi [. <br>
//! See Also <br>
//! GCE2d_MakeEllipse which provides functions for <br>
//! more complex ellipse constructions <br>
//! gp_Ax22d <br>
//! gp_Elips2d for an equivalent, non-parameterized data structure <br>
public ref class OCGeom2d_Ellipse : OCGeom2d_Conic {

protected:
  // dummy constructor;
  OCGeom2d_Ellipse(OCDummy^) : OCGeom2d_Conic((OCDummy^)nullptr) {};

public:

// constructor from native
OCGeom2d_Ellipse(Handle(Geom2d_Ellipse)* nativeHandle);

// Methods PUBLIC


//!  Creates an ellipse by conversion of the gp_Elips2d ellipse E. <br>
OCGeom2d_Ellipse(OCNaroWrappers::OCgp_Elips2d^ E);

//!  Creates an ellipse defined by its major and minor radii, <br>
//!   MajorRadius and MinorRadius, and positioned <br>
//!   in the plane by its major axis MajorAxis; the <br>
//!   center of the ellipse is the origin of MajorAxis <br>
//!   and the unit vector of MajorAxis is the "X <br>
//!   Direction" of the local coordinate system of the <br>
//!   ellipse; this coordinate system is direct if Sense <br>
//!   is true (default value) or indirect if Sense is false. <br>
//!  Warnings : <br>
//!  It is not forbidden to create an ellipse with MajorRadius = <br>
//!  MinorRadius. <br>
//! Exceptions <br>
//! Standard_ConstructionError if: <br>
//! - MajorRadius is less than MinorRadius, or <br>
//! - MinorRadius is less than 0. <br>
OCGeom2d_Ellipse(OCNaroWrappers::OCgp_Ax2d^ MajorAxis, Standard_Real MajorRadius, Standard_Real MinorRadius, System::Boolean Sense);

//! Creates an ellipse defined by its major and minor radii, <br>
//!   MajorRadius and MinorRadius, where the <br>
//!   coordinate system Axis locates the ellipse and <br>
//!   defines its orientation in the plane such that: <br>
//!   - the center of the ellipse is the origin of Axis, <br>
//!   - the "X Direction" of Axis defines the major <br>
//!    axis of the ellipse, <br>
//!   - the "Y Direction" of Axis defines the minor <br>
//!    axis of the ellipse, <br>
//!   - the orientation of Axis (direct or indirect) <br>
//!    gives the orientation of the ellipse. <br>
//!  Warnings : <br>
//!  It is not forbidden to create an ellipse with MajorRadius = <br>
//!  MinorRadius. <br>
//! Exceptions <br>
//! Standard_ConstructionError if: <br>
//! - MajorRadius is less than MinorRadius, or <br>
//! - MinorRadius is less than 0. <br>
OCGeom2d_Ellipse(OCNaroWrappers::OCgp_Ax22d^ Axis, Standard_Real MajorRadius, Standard_Real MinorRadius);

//! Converts the gp_Elips2d ellipse E into this ellipse. <br>
 /*instead*/  void SetElips2d(OCNaroWrappers::OCgp_Elips2d^ E) ;

//! Assigns a value to the major radius of this ellipse. <br>
//! Exceptions <br>
//! Standard_ConstructionError if: <br>
//! - the major radius of this ellipse becomes less than <br>
//!   the minor radius, or <br>
//! - MinorRadius is less than 0. <br>
 /*instead*/  void SetMajorRadius(Standard_Real MajorRadius) ;

//! Assigns a value to the minor radius of this ellipse. <br>
//! Exceptions <br>
//! Standard_ConstructionError if: <br>
//! - the major radius of this ellipse becomes less than <br>
//!   the minor radius, or <br>
//! - MinorRadius is less than 0. <br>
 /*instead*/  void SetMinorRadius(Standard_Real MinorRadius) ;

//! Converts this ellipse into a gp_Elips2d ellipse. <br>
 /*instead*/  OCgp_Elips2d^ Elips2d() ;

//! Computes the parameter on the reversed ellipse for <br>
//! the point of parameter U on this ellipse. <br>
//! For an ellipse, the returned value is: 2.*Pi - U. <br>
virtual /*instead*/  Standard_Real ReversedParameter(Standard_Real U) ;

//! Computes the directrices of this ellipse. <br>
//!  This directrix is the line normal to the XAxis of the ellipse <br>
//!  in the local plane (Z = 0) at a distance d = MajorRadius / e <br>
//!  from the center of the ellipse, where e is the eccentricity of <br>
//!  the ellipse. <br>
//!  This line is parallel to the "YAxis". The intersection point <br>
//!  between directrix1 and the "XAxis" is the "Location" point <br>
//!  of the directrix1. This point is on the positive side of <br>
//!  the "XAxis". <br>
//! Raises ConstructionError if Eccentricity = 0.0. (The ellipse degenerates <br>
//!  into a circle) <br>
 /*instead*/  OCgp_Ax2d^ Directrix1() ;


//!  This line is obtained by the symmetrical transformation <br>
//!  of "Directrix1" with respect to the "YAxis" of the ellipse. <br>
//! Raises ConstructionError if Eccentricity = 0.0. (The ellipse degenerates into a <br>
//!  circle). <br>
 /*instead*/  OCgp_Ax2d^ Directrix2() ;


//!  Returns the eccentricity of the ellipse  between 0.0 and 1.0 <br>
//!  If f is the distance between the center of the ellipse and <br>
//!  the Focus1 then the eccentricity e = f / MajorRadius. <br>
//!  Returns 0 if MajorRadius = 0 <br>
virtual /*instead*/  Standard_Real Eccentricity() ;


//!  Computes the focal distance. The focal distance is the distance between the center <br>
//! and a focus of the ellipse. <br>
 /*instead*/  Standard_Real Focal() ;


//!  Returns the first focus of the ellipse. This focus is on the <br>
//!  positive side of the "XAxis" of the ellipse. <br>
 /*instead*/  OCgp_Pnt2d^ Focus1() ;


//!  Returns the second focus of the ellipse. This focus is on <br>
//!  the negative side of the "XAxis" of the ellipse. <br>
 /*instead*/  OCgp_Pnt2d^ Focus2() ;

//! Returns the major radius of this ellipse. <br>
 /*instead*/  Standard_Real MajorRadius() ;

//! Returns the minor radius of this ellipse. <br>
 /*instead*/  Standard_Real MinorRadius() ;


//!   Computes the parameter of this ellipse. This value is <br>
//! given by the formula p = (1 - e * e) * MajorRadius where e is the eccentricity <br>
//!  of the ellipse. <br>
//!  Returns 0 if MajorRadius = 0 <br>
 /*instead*/  Standard_Real Parameter() ;

//! Returns the value of the first parameter of this <br>
//! ellipse. This is  0.0, which gives the start point of this ellipse. <br>
//! The start point and end point of an ellipse are coincident. <br>
virtual /*instead*/  Standard_Real FirstParameter() ;

//! Returns the value of the  last parameter of this <br>
//! ellipse. This is  2.*Pi, which gives the end point of this ellipse. <br>
//!  The start point and end point of an ellipse are coincident. <br>
virtual /*instead*/  Standard_Real LastParameter() ;

//! return True. <br>
virtual /*instead*/  System::Boolean IsClosed() ;

//! return True. <br>
virtual /*instead*/  System::Boolean IsPeriodic() ;

//! Returns in P the point of parameter U. <br>
//!  P = C + MajorRadius * Cos (U) * XDir + MinorRadius * Sin (U) * YDir <br>
//!  where C is the center of the ellipse , XDir the direction of <br>
//!  the "XAxis" and "YDir" the "YAxis" of the ellipse. <br>
virtual /*instead*/  void D0(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P) ;


virtual /*instead*/  void D1(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ V1) ;


//!  Returns the point P of parameter U. The vectors V1 and V2 <br>
//!  are the first and second derivatives at this point. <br>
virtual /*instead*/  void D2(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ V1, OCNaroWrappers::OCgp_Vec2d^ V2) ;


//!  Returns the point P of parameter U, the first second and <br>
//!  third derivatives V1 V2 and V3. <br>
virtual /*instead*/  void D3(Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ V1, OCNaroWrappers::OCgp_Vec2d^ V2, OCNaroWrappers::OCgp_Vec2d^ V3) ;

//! For the point of parameter U of this ellipse, <br>
//! computes the vector corresponding to the Nth derivative. <br>
//! Exceptions Standard_RangeError if N is less than 1. <br>
virtual /*instead*/  OCgp_Vec2d^ DN(Standard_Real U, Standard_Integer N) ;

//! Applies the transformation T to this ellipse. <br>
virtual /*instead*/  void Transform(OCNaroWrappers::OCgp_Trsf2d^ T) ;

//! Creates a new object which is a copy of this ellipse. <br>
virtual /*instead*/  OCGeom2d_Geometry^ Copy() ;

~OCGeom2d_Ellipse()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif