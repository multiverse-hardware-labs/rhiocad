// File generated by CPPExt (MPV)
//
#ifndef _IntPatch_PolygoTool_OCWrappers_HeaderFile
#define _IntPatch_PolygoTool_OCWrappers_HeaderFile

// include native header
#include <IntPatch_PolygoTool.hxx>
#include "../Converter.h"


#include "../gp/gp_Pnt2d.h"


namespace OCNaroWrappers
{

ref class OCBnd_Box2d;
ref class OCIntPatch_Polygo;


//! Tool an a polygon to instantiates the Interference <br>
//!          between 2 polygons. <br>
public ref class OCIntPatch_PolygoTool  {

protected:
  IntPatch_PolygoTool* nativeHandle;
  OCIntPatch_PolygoTool(OCDummy^) {};

public:
  property IntPatch_PolygoTool* Handle
  {
    IntPatch_PolygoTool* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntPatch_PolygoTool(IntPatch_PolygoTool* nativeHandle);

// Methods PUBLIC


static /*instead*/  OCBnd_Box2d^ Bounding(OCNaroWrappers::OCIntPatch_Polygo^ Line) ;


static /*instead*/  Standard_Real DeflectionOverEstimation(OCNaroWrappers::OCIntPatch_Polygo^ Line) ;


static /*instead*/  System::Boolean Closed(OCNaroWrappers::OCIntPatch_Polygo^ Line) ;


static /*instead*/  Standard_Integer NbSegments(OCNaroWrappers::OCIntPatch_Polygo^ Line) ;


static /*instead*/  OCgp_Pnt2d^ BeginOfSeg(OCNaroWrappers::OCIntPatch_Polygo^ Line, Standard_Integer Index) ;


static /*instead*/  OCgp_Pnt2d^ EndOfSeg(OCNaroWrappers::OCIntPatch_Polygo^ Line, Standard_Integer Index) ;


static /*instead*/  void Dump(OCNaroWrappers::OCIntPatch_Polygo^ Line) ;

~OCIntPatch_PolygoTool()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
