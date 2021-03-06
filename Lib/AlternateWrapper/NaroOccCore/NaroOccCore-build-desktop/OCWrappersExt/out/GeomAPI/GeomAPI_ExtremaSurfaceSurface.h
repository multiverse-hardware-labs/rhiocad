// File generated by CPPExt (MPV)
//
#ifndef _GeomAPI_ExtremaSurfaceSurface_OCWrappers_HeaderFile
#define _GeomAPI_ExtremaSurfaceSurface_OCWrappers_HeaderFile

// include native header
#include <GeomAPI_ExtremaSurfaceSurface.hxx>
#include "../Converter.h"


#include "../Extrema/Extrema_ExtSS.h"


namespace OCNaroWrappers
{

ref class OCGeom_Surface;
ref class OCgp_Pnt;
ref class OCExtrema_ExtSS;


//! Describes functions for computing all the extrema <br>
//! between two surfaces. <br>
//! An ExtremaSurfaceSurface algorithm minimizes or <br>
//! maximizes the distance between a point on the first <br>
//! surface and a point on the second surface. Results <br>
//! are start and end points of perpendiculars common to the two surfaces. <br>
//! Solutions consist of pairs of points, and an extremum <br>
//! is considered to be a segment joining the two points of a solution. <br>
//! An ExtremaSurfaceSurface object provides a framework for: <br>
//! -   defining the construction of the extrema, <br>
//! -   implementing the construction algorithm, and <br>
//! -   consulting the results. <br>
//! Warning <br>
//! In some cases, the nearest points between the two <br>
//! surfaces do not correspond to one of the computed <br>
//! extrema. Instead, they may be given by: <br>
//! -   a point of a bounding curve of one surface and one of the following: <br>
//!   -   its orthogonal projection on the other surface, <br>
//!   -   a point of a bounding curve of the other surface; or <br>
//! -   any point on intersection curves between the two surfaces. <br>
public ref class OCGeomAPI_ExtremaSurfaceSurface  {

protected:
  GeomAPI_ExtremaSurfaceSurface* nativeHandle;
  OCGeomAPI_ExtremaSurfaceSurface(OCDummy^) {};

public:
  property GeomAPI_ExtremaSurfaceSurface* Handle
  {
    GeomAPI_ExtremaSurfaceSurface* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGeomAPI_ExtremaSurfaceSurface(GeomAPI_ExtremaSurfaceSurface* nativeHandle);

// Methods PUBLIC

//! Constructs an empty algorithm for computing <br>
//! extrema between two surfaces. Use an Init function <br>
//! to define the surfaces on which it is going to work. <br>
OCGeomAPI_ExtremaSurfaceSurface();

//! Computes  the  extrema  distances  between  the <br>
//!          surfaces <S1>  and <S2> <br>
OCGeomAPI_ExtremaSurfaceSurface(OCNaroWrappers::OCGeom_Surface^ S1, OCNaroWrappers::OCGeom_Surface^ S2);

//! Computes  the  extrema  distances  between <br>
//!   the portion of the surface S1 limited by the <br>
//!  two values of parameter (U1min,U1max) in <br>
//!    the u parametric direction, and by the two <br>
//!    values of parameter (V1min,V1max) in the v <br>
//!    parametric direction, and <br>
//!   -   the portion of the surface S2 limited by the <br>
//!    two values of parameter (U2min,U2max) in <br>
//!    the u parametric direction, and by the two <br>
//!    values of parameter (V2min,V2max) in the v <br>
//!    parametric direction. <br>
OCGeomAPI_ExtremaSurfaceSurface(OCNaroWrappers::OCGeom_Surface^ S1, OCNaroWrappers::OCGeom_Surface^ S2, Quantity_Parameter U1min, Quantity_Parameter U1max, Quantity_Parameter V1min, Quantity_Parameter V1max, Quantity_Parameter U2min, Quantity_Parameter U2max, Quantity_Parameter V2min, Quantity_Parameter V2max);

//! Initializes this algorithm with the given arguments <br>
//!        and computes  the  extrema  distances  between  the <br>
//!          surfaces <S1>  and <S2> <br>
 /*instead*/  void Init(OCNaroWrappers::OCGeom_Surface^ S1, OCNaroWrappers::OCGeom_Surface^ S2) ;

//! Initializes this algorithm with the given arguments <br>
//!        and computes  the  extrema  distances  between - <br>
//! the portion of the surface S1 limited by the two <br>
//!    values of parameter (U1min,U1max) in the u <br>
//!    parametric direction, and by the two values of <br>
//!    parameter (V1min,V1max) in the v parametric direction, and <br>
//!   -   the portion of the surface S2 limited by the two <br>
//!    values of parameter (U2min,U2max) in the u <br>
//!    parametric direction, and by the two values of <br>
//!    parameter (V2min,V2max) in the v parametric direction. <br>
 /*instead*/  void Init(OCNaroWrappers::OCGeom_Surface^ S1, OCNaroWrappers::OCGeom_Surface^ S2, Quantity_Parameter U1min, Quantity_Parameter U1max, Quantity_Parameter V1min, Quantity_Parameter V1max, Quantity_Parameter U2min, Quantity_Parameter U2max, Quantity_Parameter V2min, Quantity_Parameter V2max) ;

//! Returns the number of extrema computed by this algorithm. <br>
//! Note: if this algorithm fails, NbExtrema returns 0. <br>
 /*instead*/  Standard_Integer NbExtrema() ;

//! Returns the points P1 on the first surface and P2 on <br>
//! the second surface, which are the ends of the <br>
//! extremum of index Index computed by this algorithm. <br>
//! Exceptions <br>
//! Standard_OutOfRange if Index is not in the range [ <br>
//! 1,NbExtrema ], where NbExtrema is the <br>
//! number of extrema computed by this algorithm. <br>
 /*instead*/  void Points(Standard_Integer Index, OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2) ;

//! Returns the parameters (U1,V1) of the point on the <br>
//! first surface, and (U2,V2) of the point on the second <br>
//! surface, which are the ends of the extremum of index <br>
//! Index computed by this algorithm. <br>
//! Exceptions <br>
//! Standard_OutOfRange if Index is not in the range [ <br>
//! 1,NbExtrema ], where NbExtrema is the <br>
//! number of extrema computed by this algorithm. <br>
 /*instead*/  void Parameters(Standard_Integer Index, Quantity_Parameter& U1, Quantity_Parameter& V1, Quantity_Parameter& U2, Quantity_Parameter& V2) ;

//! Computes the distance between the end points of the <br>
//! extremum of index Index computed by this algorithm. <br>
//! Exceptions <br>
//! Standard_OutOfRange if Index is not in the range [ <br>
//! 1,NbExtrema ], where NbExtrema is the <br>
//! number of extrema computed by this algorithm. <br>
 /*instead*/  Quantity_Length Distance(Standard_Integer Index) ;

//! Returns the points P1 on the first surface and P2 on <br>
//! the second surface, which are the ends of the <br>
//! shortest extremum computed by this algorithm. <br>
//! Exceptions StdFail_NotDone if this algorithm fails. <br>
 /*instead*/  void NearestPoints(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2) ;

//! Returns the parameters (U1,V1) of the point on the <br>
//! first surface and (U2,V2) of the point on the second <br>
//! surface, which are the ends of the shortest extremum <br>
//! computed by this algorithm. <br>
//! Exceptions - StdFail_NotDone if this algorithm fails. <br>
 /*instead*/  void LowerDistanceParameters(Quantity_Parameter& U1, Quantity_Parameter& V1, Quantity_Parameter& U2, Quantity_Parameter& V2) ;

//! Computes the distance between the end points of the <br>
//! shortest extremum computed by this algorithm. <br>
//! Exceptions StdFail_NotDone if this algorithm fails. <br>
 /*instead*/  Quantity_Length LowerDistance() ;

//! return the algorithmic object from Extrema <br>
 /*instead*/  OCExtrema_ExtSS^ Extrema() ;

~OCGeomAPI_ExtremaSurfaceSurface()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
