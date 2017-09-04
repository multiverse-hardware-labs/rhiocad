// File generated by CPPExt (MPV)
//
#ifndef _BOP_Draw_OCWrappers_HeaderFile
#define _BOP_Draw_OCWrappers_HeaderFile

// include native header
#include <BOP_Draw.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTopTools_ListOfShape;
ref class OCTopoDS_Face;
ref class OCTopoDS_Edge;



//!  auxiliary class to display intermediate results <br>
//!  in  Draw's winowds for the debugging purposes <br>
//! <br>
public ref class OCBOP_Draw  {

protected:
  BOP_Draw* nativeHandle;
  OCBOP_Draw(OCDummy^) {};

public:
  property BOP_Draw* Handle
  {
    BOP_Draw* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBOP_Draw(BOP_Draw* nativeHandle);

// Methods PUBLIC


//! Display in  3D-view shapes from the ListOfShape  <aList> <br>
//! aName is base name of shape. Actual name for  each <br>
//! subsequent shape  will  be  aName+"_#",  where <br>
//! # - is ordered index of the shape in <aList> <br>
static /*instead*/  void DrawListOfShape(OCNaroWrappers::OCTopTools_ListOfShape^ aList, System::String^ aName) ;


//! Display in  2D-view the edges from the ListOfShape  <aList>, <br>
//! that have P-curves for  the face <aFace> <br>
//! aName is base name of shape. Actual name for  each <br>
//! subsequent shape  will  be  aName+"_#",  where <br>
//! # -  is ordered index of the shape in <aList> <br>
static /*instead*/  void DrawListOfEdgesWithPC(OCNaroWrappers::OCTopoDS_Face^ aFace, OCNaroWrappers::OCTopTools_ListOfShape^ aList, System::String^ aName) ;


//! Display in  2D-view the edges from the ListOfShape  <aList>, <br>
//! that have P-curves for  the face <aFace> <br>
//! aName is base name of shape. Actual name for  each <br>
//! shape  will  be  aName+"_anInd" <br>
static /*instead*/  void DrawListOfEdgesWithPC(OCNaroWrappers::OCTopoDS_Face^ aFace, OCNaroWrappers::OCTopTools_ListOfShape^ aList, Standard_Integer anInd, System::String^ aName) ;


//! Display in  2D-view the edge, <br>
//! that has  P-curve for  the face <aFace> <br>
//! aName is the name of shape. <br>
static /*instead*/  void DrawEdgeWithPC(OCNaroWrappers::OCTopoDS_Face^ aFace, OCNaroWrappers::OCTopoDS_Edge^ aEdge, System::String^ aName) ;


//! Wait  for  user's keystroke <br>
static /*instead*/  void Wait() ;

~OCBOP_Draw()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif