// File generated by CPPExt (MPV)
//
#ifndef _IntPatch_TheIWalkingOfTheIPIntOfIntersection_OCWrappers_HeaderFile
#define _IntPatch_TheIWalkingOfTheIPIntOfIntersection_OCWrappers_HeaderFile

// include native header
#include <IntPatch_TheIWalkingOfTheIPIntOfIntersection.hxx>
#include "../Converter.h"


#include "../IntSurf/IntSurf_SequenceOfPathPoint.h"
#include "../math/math_Vector.h"
#include "../TColStd/TColStd_SequenceOfReal.h"
#include "../TColStd/TColStd_SequenceOfInteger.h"
#include "../IntSurf/IntSurf_PntOn2S.h"
#include "../gp/gp_Vec.h"
#include "../gp/gp_Dir2d.h"
#include "IntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection.h"
#include "../IntWalk/IntWalk_StatusDeflection.h"


namespace OCNaroWrappers
{

ref class OCIntSurf_PathPoint;
ref class OCIntSurf_PathPointTool;
ref class OCIntSurf_SequenceOfPathPoint;
ref class OCIntSurf_InteriorPoint;
ref class OCIntSurf_InteriorPointTool;
ref class OCIntSurf_SequenceOfInteriorPoint;
ref class OCAdaptor3d_HSurface;
ref class OCIntPatch_HSurfaceTool;
ref class OCIntPatch_TheSurfFunctionOfTheIPIntOfIntersection;
ref class OCIntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection;
ref class OCIntPatch_SequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection;
ref class OCIntPatch_SequenceNodeOfSequenceOfIWLineOfTheIWalkingOfTheIPIntOfIntersection;
ref class OCmath_Vector;
ref class OCTColStd_SequenceOfReal;
ref class OCIntSurf_PntOn2S;



public ref class OCIntPatch_TheIWalkingOfTheIPIntOfIntersection  {

protected:
  IntPatch_TheIWalkingOfTheIPIntOfIntersection* nativeHandle;
  OCIntPatch_TheIWalkingOfTheIPIntOfIntersection(OCDummy^) {};

public:
  property IntPatch_TheIWalkingOfTheIPIntOfIntersection* Handle
  {
    IntPatch_TheIWalkingOfTheIPIntOfIntersection* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntPatch_TheIWalkingOfTheIPIntOfIntersection(IntPatch_TheIWalkingOfTheIPIntOfIntersection* nativeHandle);

// Methods PUBLIC


OCIntPatch_TheIWalkingOfTheIPIntOfIntersection();


OCIntPatch_TheIWalkingOfTheIPIntOfIntersection(Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Step);


 /*instead*/  void SetTolerance(Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Step) ;


 /*instead*/  void Perform(OCNaroWrappers::OCIntSurf_SequenceOfPathPoint^ Pnts1, OCNaroWrappers::OCIntSurf_SequenceOfInteriorPoint^ Pnts2, OCNaroWrappers::OCIntPatch_TheSurfFunctionOfTheIPIntOfIntersection^ Func, OCNaroWrappers::OCAdaptor3d_HSurface^ S, System::Boolean Reversed) ;


 /*instead*/  void Perform(OCNaroWrappers::OCIntSurf_SequenceOfPathPoint^ Pnts1, OCNaroWrappers::OCIntPatch_TheSurfFunctionOfTheIPIntOfIntersection^ Func, OCNaroWrappers::OCAdaptor3d_HSurface^ S, System::Boolean Reversed) ;


 /*instead*/  System::Boolean IsDone() ;


 /*instead*/  Standard_Integer NbLines() ;


 /*instead*/  OCIntPatch_TheIWLineOfTheIWalkingOfTheIPIntOfIntersection^ Value(Standard_Integer Index) ;


 /*instead*/  Standard_Integer NbSinglePnts() ;


 /*instead*/  OCIntSurf_PathPoint^ SinglePnt(Standard_Integer Index) ;

~OCIntPatch_TheIWalkingOfTheIPIntOfIntersection()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
