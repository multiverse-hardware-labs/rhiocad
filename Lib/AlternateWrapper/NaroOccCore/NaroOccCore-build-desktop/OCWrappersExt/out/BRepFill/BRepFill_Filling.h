// File generated by CPPExt (MPV)
//
#ifndef _BRepFill_Filling_OCWrappers_HeaderFile
#define _BRepFill_Filling_OCWrappers_HeaderFile

// include native header
#include <BRepFill_Filling.hxx>
#include "../Converter.h"


#include "../GeomPlate/GeomPlate_BuildPlateSurface.h"
#include "BRepFill_SequenceOfEdgeFaceAndOrder.h"
#include "BRepFill_SequenceOfFaceAndOrder.h"
#include "../GeomPlate/GeomPlate_SequenceOfPointConstraint.h"
#include "../TopTools/TopTools_DataMapOfShapeListOfShape.h"
#include "../TopTools/TopTools_ListOfShape.h"
#include "../TopoDS/TopoDS_Face.h"
#include "../GeomAbs/GeomAbs_Shape.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Face;
ref class OCTopoDS_Edge;
ref class OCgp_Pnt;
ref class OCBRepFill_SequenceOfEdgeFaceAndOrder;
ref class OCTopTools_ListOfShape;
ref class OCTopTools_SequenceOfShape;
ref class OCTopoDS_Shape;


//! N-Side Filling <br>
//!  This algorithm avoids to build a face from: <br>
//!  * a set of edges defining the bounds of the face and some <br>
//!    constraints the surface support has to satisfy <br>
//!  * a set of edges and points defining some constraints <br>
//!    the support surface has to satisfy <br>
//!  * an initial surface to deform for satisfying the constraints <br>
//!  * a set of parameters to control the constraints. <br>
public ref class OCBRepFill_Filling  {

protected:
  BRepFill_Filling* nativeHandle;
  OCBRepFill_Filling(OCDummy^) {};

public:
  property BRepFill_Filling* Handle
  {
    BRepFill_Filling* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepFill_Filling(BRepFill_Filling* nativeHandle);

// Methods PUBLIC

//! Constructor <br>
OCBRepFill_Filling(Standard_Integer Degree, Standard_Integer NbPtsOnCur, Standard_Integer NbIter, System::Boolean Anisotropie, Standard_Real Tol2d, Standard_Real Tol3d, Standard_Real TolAng, Standard_Real TolCurv, Standard_Integer MaxDeg, Standard_Integer MaxSegments);

//! Sets the values of Tolerances used to control the constraint. <br>
//!	Tol2d: <br>
//!	Tol3d:   it is the maximum distance allowed between the support surface <br>
//!	         and the constraints <br>
//!	TolAng:  it is the maximum angle allowed between the normal of the surface <br>
//!	         and the constraints <br>
//!	TolCurv: it is the maximum difference of curvature allowed between <br>
//!	         the surface and the constraint <br>
 /*instead*/  void SetConstrParam(Standard_Real Tol2d, Standard_Real Tol3d, Standard_Real TolAng, Standard_Real TolCurv) ;

//! Sets the parameters used for resolution. <br>
//!	The default values of these parameters have been chosen for a good <br>
//!	ratio quality/performance. <br>
//!	Degree:      it is the order of energy criterion to minimize for computing <br>
//!	             the deformation of the surface. <br>
//!	             The default value is 3 <br>
//!	             The recommanded value is i+2 where i is the maximum order of the <br>
//!	             constraints. <br>
//!	NbPtsOnCur:  it is the average number of points for discretisation <br>
//!	             of the edges. <br>
//!	NbIter:      it is the maximum number of iterations of the process. <br>
//!	             For each iteration the number of discretisation points is <br>
//!	             increased. <br>
//!	Anisotropie: <br>
 /*instead*/  void SetResolParam(Standard_Integer Degree, Standard_Integer NbPtsOnCur, Standard_Integer NbIter, System::Boolean Anisotropie) ;

//! Sets the parameters used for approximation of the surface <br>
 /*instead*/  void SetApproxParam(Standard_Integer MaxDeg, Standard_Integer MaxSegments) ;

//! Loads the initial Surface <br>
 /*instead*/  void LoadInitSurface(OCNaroWrappers::OCTopoDS_Face^ aFace) ;

//! Adds a new constraint which also defines an edge of the wire <br>
//!	        of the face <br>
//!	Order: Order of the constraint: <br>
//!	       GeomAbs_C0 : the surface has to pass by 3D representation <br>
//!	                    of the edge <br>
//!	       GeomAbs_G1 : the surface has to pass by 3D representation <br>
//!	                    of the edge and to respect tangency with the first <br>
//!	                    face of the edge <br>
//!	       GeomAbs_G2 : the surface has to pass by 3D representation <br>
//!	                    of the edge and to respect tangency and curvature <br>
//!	                    with the first face of the edge. <br>
 /*instead*/  Standard_Integer Add(OCNaroWrappers::OCTopoDS_Edge^ anEdge, OCGeomAbs_Shape Order, System::Boolean IsBound) ;

//! Adds a new constraint which also defines an edge of the wire <br>
//!	        of the face <br>
//!	Order: Order of the constraint: <br>
//!	       GeomAbs_C0 : the surface has to pass by 3D representation <br>
//!	                    of the edge <br>
//!	       GeomAbs_G1 : the surface has to pass by 3D representation <br>
//!	                    of the edge and to respect tangency with the <br>
//!	                    given face <br>
//!	       GeomAbs_G2 : the surface has to pass by 3D representation <br>
//!	                    of the edge and to respect tangency and curvature <br>
//!	                    with the given face. <br>
 /*instead*/  Standard_Integer Add(OCNaroWrappers::OCTopoDS_Edge^ anEdge, OCNaroWrappers::OCTopoDS_Face^ Support, OCGeomAbs_Shape Order, System::Boolean IsBound) ;

//! Adds a free constraint on a face. The corresponding edge has to <br>
//!	be automatically recomputed. <br>
//!	It is always a bound. <br>
 /*instead*/  Standard_Integer Add(OCNaroWrappers::OCTopoDS_Face^ Support, OCGeomAbs_Shape Order) ;

//! Adds a punctual constraint <br>
 /*instead*/  Standard_Integer Add(OCNaroWrappers::OCgp_Pnt^ Point) ;

//! Adds a punctual constraint. <br>
 /*instead*/  Standard_Integer Add(Standard_Real U, Standard_Real V, OCNaroWrappers::OCTopoDS_Face^ Support, OCGeomAbs_Shape Order) ;

//! Builds the resulting faces <br>
 /*instead*/  void Build() ;


 /*instead*/  System::Boolean IsDone() ;


 /*instead*/  OCTopoDS_Face^ Face() ;

//! Returns the list of shapes generated from the <br>
//!          shape <S>. <br>
 /*instead*/  OCTopTools_ListOfShape^ Generated(OCNaroWrappers::OCTopoDS_Shape^ S) ;


 /*instead*/  Standard_Real G0Error() ;


 /*instead*/  Standard_Real G1Error() ;


 /*instead*/  Standard_Real G2Error() ;


 /*instead*/  Standard_Real G0Error(Standard_Integer Index) ;


 /*instead*/  Standard_Real G1Error(Standard_Integer Index) ;


 /*instead*/  Standard_Real G2Error(Standard_Integer Index) ;

~OCBRepFill_Filling()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif