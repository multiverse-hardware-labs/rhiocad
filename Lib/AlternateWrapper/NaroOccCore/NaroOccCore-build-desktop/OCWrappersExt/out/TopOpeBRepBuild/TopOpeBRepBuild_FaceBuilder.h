// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepBuild_FaceBuilder_OCWrappers_HeaderFile
#define _TopOpeBRepBuild_FaceBuilder_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepBuild_FaceBuilder.hxx>
#include "../Converter.h"


#include "../TopoDS/TopoDS_Face.h"
#include "TopOpeBRepBuild_LoopSet.h"
#include "TopOpeBRepBuild_BlockIterator.h"
#include "TopOpeBRepBuild_BlockBuilder.h"
#include "TopOpeBRepBuild_FaceAreaBuilder.h"
#include "../TopTools/TopTools_DataMapOfShapeInteger.h"


namespace OCNaroWrappers
{

ref class OCTopOpeBRepBuild_WireEdgeSet;
ref class OCTopoDS_Shape;
ref class OCTopTools_IndexedDataMapOfShapeShape;
ref class OCTopTools_IndexedMapOfShape;
ref class OCTopOpeBRepBuild_ShapeSet;



public ref class OCTopOpeBRepBuild_FaceBuilder  {

protected:
  TopOpeBRepBuild_FaceBuilder* nativeHandle;
  OCTopOpeBRepBuild_FaceBuilder(OCDummy^) {};

public:
  property TopOpeBRepBuild_FaceBuilder* Handle
  {
    TopOpeBRepBuild_FaceBuilder* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopOpeBRepBuild_FaceBuilder(TopOpeBRepBuild_FaceBuilder* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepBuild_FaceBuilder();

//! Create a FaceBuilder to build the faces on <br>
//! the shapes (wires, blocks of edge) described by <LS>. <br>
OCTopOpeBRepBuild_FaceBuilder(OCNaroWrappers::OCTopOpeBRepBuild_WireEdgeSet^ ES, OCNaroWrappers::OCTopoDS_Shape^ F, System::Boolean ForceClass);


 /*instead*/  void InitFaceBuilder(OCNaroWrappers::OCTopOpeBRepBuild_WireEdgeSet^ ES, OCNaroWrappers::OCTopoDS_Shape^ F, System::Boolean ForceClass) ;

//! Removes   are  non 3d-closed  wires. <br>
//!          Fills  up maps <mapVVsameG> and  <mapVon1Edge>,  in order to <br>
//!          correct 3d-closed but unclosed (topologic connexity) wires. <br>
//! modifies myBlockBuilder <br>
 /*instead*/  void DetectUnclosedWire(OCNaroWrappers::OCTopTools_IndexedDataMapOfShapeShape^ mapVVsameG, OCNaroWrappers::OCTopTools_IndexedDataMapOfShapeShape^ mapVon1Edge) ;

//! Using the given maps, change the topology of the 3d-closed <br>
//!          wires, in order to get closed wires. <br>
 /*instead*/  void CorrectGclosedWire(OCNaroWrappers::OCTopTools_IndexedDataMapOfShapeShape^ mapVVref, OCNaroWrappers::OCTopTools_IndexedDataMapOfShapeShape^ mapVon1Edge) ;

//! Removes edges appearing twice (FORWARD,REVERSED) with a bounding <br>
//!          vertex not connected to any other edge. <br>
//!          mapE contains edges found. <br>
//! modifies myBlockBuilder. <br>
 /*instead*/  void DetectPseudoInternalEdge(OCNaroWrappers::OCTopTools_IndexedMapOfShape^ mapE) ;

//! return myFace <br>
 /*instead*/  OCTopoDS_Shape^ Face() ;


 /*instead*/  Standard_Integer InitFace() ;


 /*instead*/  System::Boolean MoreFace() ;


 /*instead*/  void NextFace() ;


 /*instead*/  Standard_Integer InitWire() ;


 /*instead*/  System::Boolean MoreWire() ;


 /*instead*/  void NextWire() ;


 /*instead*/  System::Boolean IsOldWire() ;

//! Returns current wire <br>
//! This wire may be : <br>
//! * an old wire OldWire(), which has not been reconstructed; <br>
//! * a new wire made of edges described by ...NewEdge() methods. <br>
 /*instead*/  OCTopoDS_Shape^ OldWire() ;

//! Iterates on myBlockIterator until finding a valid element <br>
 /*instead*/  void FindNextValidElement() ;


 /*instead*/  Standard_Integer InitEdge() ;


 /*instead*/  System::Boolean MoreEdge() ;


 /*instead*/  void NextEdge() ;

//! Returns current new edge of current new wire. <br>
 /*instead*/  OCTopoDS_Shape^ Edge() ;


 /*instead*/  Standard_Integer EdgeConnexity(OCNaroWrappers::OCTopoDS_Shape^ E) ;


 /*instead*/  Standard_Integer AddEdgeWire(OCNaroWrappers::OCTopoDS_Shape^ E, OCNaroWrappers::OCTopoDS_Shape^ W) ;

~OCTopOpeBRepBuild_FaceBuilder()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
