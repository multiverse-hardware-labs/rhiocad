// File generated by CPPExt (Transient)
//
#ifndef _MAT_Graph_OCWrappers_HeaderFile
#define _MAT_Graph_OCWrappers_HeaderFile

// include the wrapped class
#include <MAT_Graph.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "MAT_DataMapOfIntegerArc.h"
#include "MAT_DataMapOfIntegerBasicElt.h"
#include "MAT_DataMapOfIntegerNode.h"


namespace OCNaroWrappers
{

ref class OCMAT_ListOfBisector;
ref class OCMAT_Arc;
ref class OCMAT_BasicElt;
ref class OCMAT_Node;
ref class OCMAT_DataMapOfIntegerBasicElt;


//! The Class Graph permits the exploration of the <br>
//!          Bisector Locus. <br>
public ref class OCMAT_Graph : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCMAT_Graph(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCMAT_Graph(Handle(MAT_Graph)* nativeHandle);

// Methods PUBLIC

//! Empty constructor. <br>
OCMAT_Graph();

//! Construct <me> from the result of the method <br>
//!            <CreateMat> of the class <MAT> from <MAT>. <br>
//! <br>
//!            <SemiInfinite> : if some bisector are infinites. <br>
//!            <TheRoots>     : Set of the bisectors. <br>
//!            <NbBasicElts>  : Number of Basic Elements. <br>
//!            <NbArcs>       : Number of Arcs = Number of Bisectors. <br>
 /*instead*/  void Perform(System::Boolean SemiInfinite, OCNaroWrappers::OCMAT_ListOfBisector^ TheRoots, Standard_Integer NbBasicElts, Standard_Integer NbArcs) ;

//! Return the Arc of index <Index> in <theArcs>. <br>
 /*instead*/  OCMAT_Arc^ Arc(Standard_Integer Index) ;

//! Return the BasicElt of index <Index> in <theBasicElts>. <br>
 /*instead*/  OCMAT_BasicElt^ BasicElt(Standard_Integer Index) ;

//! Return the Node of index <Index> in <theNodes>. <br>
 /*instead*/  OCMAT_Node^ Node(Standard_Integer Index) ;

//! Return the number of arcs of <me>. <br>
 /*instead*/  Standard_Integer NumberOfArcs() ;

//! Return the number of nodes of <me>. <br>
 /*instead*/  Standard_Integer NumberOfNodes() ;

//! Return the number of basic elements of <me>. <br>
 /*instead*/  Standard_Integer NumberOfBasicElts() ;

//! Return the number of infinites nodes of <me>. <br>
 /*instead*/  Standard_Integer NumberOfInfiniteNodes() ;

//! Merge two BasicElts.  The End of the BasicElt Elt1 <br>
//!          of  IndexElt1 becomes The End of the BasicElt Elt2 <br>
//!          of  IndexElt2.   Elt2 is replaced in  the  arcs  by <br>
//!          Elt1, Elt2 is eliminated. <br>
//! <br>
//!          <MergeArc1> is True  if the fusion  of the BasicElts  => <br>
//!          a fusion  of two Arcs which separated  the same  elements. <br>
//!          In this case <GeomIndexArc1> and  <GeomIndexArc2>  are the <br>
//!          Geometric  Index of this  arcs. <br>
//! <br>
//!          If the  BasicElt corresponds to a close line , <br>
//!          the StartArc and the EndArc of Elt1 can separate the same <br>
//!          elements . <br>
//!          In this case there is a fusion of this arcs, <MergeArc2> <br>
//!          is true and <GeomIndexArc3> and  <GeomIndexArc4>  are the <br>
//!          Geometric  Index of this  arcs. <br>
 /*instead*/  void FusionOfBasicElts(Standard_Integer IndexElt1, Standard_Integer IndexElt2, System::Boolean& MergeArc1, Standard_Integer& GeomIndexArc1, Standard_Integer& GeomIndexArc2, System::Boolean& MergeArc2, Standard_Integer& GeomIndexArc3, Standard_Integer& GeomIndexArc4) ;


 /*instead*/  void CompactArcs() ;


 /*instead*/  void CompactNodes() ;


 /*instead*/  void ChangeBasicElts(OCNaroWrappers::OCMAT_DataMapOfIntegerBasicElt^ NewMap) ;


 /*instead*/  OCMAT_BasicElt^ ChangeBasicElt(Standard_Integer Index) ;

~OCMAT_Graph()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif