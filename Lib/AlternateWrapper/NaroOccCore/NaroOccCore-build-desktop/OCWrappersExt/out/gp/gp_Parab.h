// File generated by CPPExt (MPV)
//
#ifndef _gp_Parab_OCWrappers_HeaderFile
#define _gp_Parab_OCWrappers_HeaderFile

// include native header
#include <gp_Parab.hxx>
#include "../Converter.h"


#include "gp_Ax2.h"
#include "../Standard/Standard_Storable.h"
#include "gp_Ax1.h"
#include "gp_Pnt.h"


namespace OCNaroWrappers
{

ref class OCgp_Ax2;
ref class OCgp_Ax1;
ref class OCgp_Pnt;
ref class OCgp_Trsf;
ref class OCgp_Vec;



//! Describes a parabola in 3D space. <br>
//! A parabola is defined by its focal length (that is, the <br>
//! distance between its focus and apex) and positioned in <br>
//! space with a coordinate system (a gp_Ax2 object) <br>
//! where: <br>
//! -   the origin of the coordinate system is on the apex of <br>
//!   the parabola, <br>
//! -   the "X Axis" of the coordinate system is the axis of <br>
//! symmetry; the parabola is on the positive side of this axis, and <br>
//! -   the origin, "X Direction" and "Y Direction" of the <br>
//!   coordinate system define the plane of the parabola. <br>
//! The equation of the parabola in this coordinate system, <br>
//! which is the "local coordinate system" of the parabola, is: <br>
//! Y**2 = (2*P) * X. <br>
//! where P, referred to as the parameter of the parabola, is <br>
//! the distance between the focus and the directrix (P is <br>
//! twice the focal length). <br>
//! The "main Direction" of the local coordinate system gives <br>
//! the normal vector to the plane of the parabola. <br>
//! See Also <br>
//! gce_MakeParab which provides functions for more <br>
//! complex parabola constructions <br>
//! Geom_Parabola which provides additional functions for <br>
//! constructing parabolas and works, in particular, with the <br>
//! parametric equations of parabolas <br>
public ref class OCgp_Parab  {

protected:
  gp_Parab* nativeHandle;
  OCgp_Parab(OCDummy^) {};

public:
  property gp_Parab* Handle
  {
    gp_Parab* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCgp_Parab(gp_Parab* nativeHandle);

// Methods PUBLIC

//! Creates an indefinite Parabola. <br>
OCgp_Parab();


//!  Creates a parabola with its local coordinate system "A2" <br>
//!  and it's focal length "Focal". <br>
//!  The XDirection of A2 defines the axis of symmetry of the <br>
//!  parabola. The YDirection of A2 is parallel to the directrix <br>
//!  of the parabola. The Location point of A2 is the vertex of <br>
//!  the parabola <br>
//! Raises ConstructionError if Focal < 0.0 <br>//! Raised if Focal < 0.0 <br>
OCgp_Parab(OCNaroWrappers::OCgp_Ax2^ A2, Standard_Real Focal);


//!  D is the directrix of the parabola and F the focus point. <br>
//!  The symmetry axis (XAxis) of the parabola is normal to the <br>
//!  directrix and pass through the focus point F, but its <br>
//!  location point is the vertex of the parabola. <br>
//!  The YAxis of the parabola is parallel to D and its location <br>
//!  point is the vertex of the parabola. The normal to the plane <br>
//!  of the parabola is the cross product between the XAxis and the <br>
//!  YAxis. <br>
OCgp_Parab(OCNaroWrappers::OCgp_Ax1^ D, OCNaroWrappers::OCgp_Pnt^ F);

//! Modifies this parabola by redefining its local coordinate system so that <br>
//! -   its origin and "main Direction" become those of the <br>
//!   axis A1 (the "X Direction" and "Y Direction" are then <br>
//!   recomputed in the same way as for any gp_Ax2) <br>
//!  Raises ConstructionError if the direction of A1 is parallel to the previous <br>
//!  XAxis of the parabola. <br>
 /*instead*/  void SetAxis(OCNaroWrappers::OCgp_Ax1^ A1) ;

//! Changes the focal distance of the parabola. <br>
//!  Raises ConstructionError if Focal < 0.0 <br>
 /*instead*/  void SetFocal(Standard_Real Focal) ;


//!  Changes the location of the parabola. It is the vertex of <br>
//!  the parabola. <br>
 /*instead*/  void SetLocation(OCNaroWrappers::OCgp_Pnt^ P) ;

//! Changes the local coordinate system of the parabola. <br>
 /*instead*/  void SetPosition(OCNaroWrappers::OCgp_Ax2^ A2) ;


//!  Returns the main axis of the parabola. <br>
//!  It is the axis normal to the plane of the parabola passing <br>
//!  through the vertex of the parabola. <br>
 /*instead*/  OCgp_Ax1^ Axis() ;

//! Computes the directrix of this parabola. <br>
//! The directrix is: <br>
//! -   a line parallel to the "Y Direction" of the local <br>
//!   coordinate system of this parabola, and <br>
//! -   located on the negative side of the axis of symmetry, <br>
//!   at a distance from the apex which is equal to the focal <br>
//!   length of this parabola. <br>
//! The directrix is returned as an axis (a gp_Ax1 object), <br>
//! the origin of which is situated on the "X Axis" of this parabola. <br>
 /*instead*/  OCgp_Ax1^ Directrix() ;


//!  Returns the distance between the vertex and the focus <br>
//!  of the parabola. <br>
 /*instead*/  Standard_Real Focal() ;

//! -   Computes the focus of the parabola. <br>
 /*instead*/  OCgp_Pnt^ Focus() ;


//!  Returns the vertex of the parabola. It is the "Location" <br>
//!  point of the coordinate system of the parabola. <br>
 /*instead*/  OCgp_Pnt^ Location() ;


//!  Computes the parameter of the parabola. <br>
//!  It is the distance between the focus and the directrix of <br>
//!  the parabola. This distance is twice the focal length. <br>
 /*instead*/  Standard_Real Parameter() ;


//!  Returns the local coordinate system of the parabola. <br>
 /*instead*/  OCgp_Ax2^ Position() ;


//!  Returns the symmetry axis of the parabola. The location point <br>
//!  of the axis is the vertex of the parabola. <br>
 /*instead*/  OCgp_Ax1^ XAxis() ;


//!  It is an axis parallel to the directrix of the parabola. <br>
//!  The location point of this axis is the vertex of the parabola. <br>
 /*instead*/  OCgp_Ax1^ YAxis() ;


 /*instead*/  void Mirror(OCNaroWrappers::OCgp_Pnt^ P) ;


//!  Performs the symmetrical transformation of a parabola <br>
//!  with respect to the point P which is the center of the <br>
//!  symmetry. <br>
 /*instead*/  OCgp_Parab^ Mirrored(OCNaroWrappers::OCgp_Pnt^ P) ;


 /*instead*/  void Mirror(OCNaroWrappers::OCgp_Ax1^ A1) ;


//!  Performs the symmetrical transformation of a parabola <br>
//!  with respect to an axis placement which is the axis of <br>
//!  the symmetry. <br>
 /*instead*/  OCgp_Parab^ Mirrored(OCNaroWrappers::OCgp_Ax1^ A1) ;


 /*instead*/  void Mirror(OCNaroWrappers::OCgp_Ax2^ A2) ;


//!  Performs the symmetrical transformation of a parabola <br>
//!  with respect to a plane. The axis placement A2 locates <br>
//!  the plane of the symmetry (Location, XDirection, YDirection). <br>
 /*instead*/  OCgp_Parab^ Mirrored(OCNaroWrappers::OCgp_Ax2^ A2) ;


 /*instead*/  void Rotate(OCNaroWrappers::OCgp_Ax1^ A1, Standard_Real Ang) ;


//!  Rotates a parabola. A1 is the axis of the rotation. <br>
//!  Ang is the angular value of the rotation in radians. <br>
 /*instead*/  OCgp_Parab^ Rotated(OCNaroWrappers::OCgp_Ax1^ A1, Standard_Real Ang) ;


 /*instead*/  void Scale(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real S) ;


//!  Scales a parabola. S is the scaling value. <br>
//!  If S is negative the direction of the symmetry axis <br>
//!  XAxis is reversed and the direction of the YAxis too. <br>
 /*instead*/  OCgp_Parab^ Scaled(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real S) ;


 /*instead*/  void Transform(OCNaroWrappers::OCgp_Trsf^ T) ;


//!  Transforms a parabola with the transformation T from class Trsf. <br>
 /*instead*/  OCgp_Parab^ Transformed(OCNaroWrappers::OCgp_Trsf^ T) ;


 /*instead*/  void Translate(OCNaroWrappers::OCgp_Vec^ V) ;


//!  Translates a parabola in the direction of the vector V. <br>
//!  The magnitude of the translation is the vector's magnitude. <br>
 /*instead*/  OCgp_Parab^ Translated(OCNaroWrappers::OCgp_Vec^ V) ;


 /*instead*/  void Translate(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2) ;


//!  Translates a parabola from the point P1 to the point P2. <br>
 /*instead*/  OCgp_Parab^ Translated(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2) ;

~OCgp_Parab()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif