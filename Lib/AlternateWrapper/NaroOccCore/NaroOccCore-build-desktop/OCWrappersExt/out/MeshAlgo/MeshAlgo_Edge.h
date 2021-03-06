// File generated by CPPExt (MPV)
//
#ifndef _MeshAlgo_Edge_OCWrappers_HeaderFile
#define _MeshAlgo_Edge_OCWrappers_HeaderFile

// include native header
#include <MeshAlgo_Edge.hxx>
#include "../Converter.h"


#include "../MeshDS/MeshDS_DegreeOfFreedom.h"


namespace OCNaroWrappers
{



//! Describes the data structure of a Edge. <br>
public ref class OCMeshAlgo_Edge  {

protected:
  MeshAlgo_Edge* nativeHandle;
  OCMeshAlgo_Edge(OCDummy^) {};

public:
  property MeshAlgo_Edge* Handle
  {
    MeshAlgo_Edge* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCMeshAlgo_Edge(MeshAlgo_Edge* nativeHandle);

// Methods PUBLIC

//! Contructs an Edge beetween to vertices. <br>
OCMeshAlgo_Edge(Standard_Integer node1, Standard_Integer node2, OCMeshDS_DegreeOfFreedom canMove, Standard_Integer domain);

//! Give the index of first node of the Edge. <br>
 /*instead*/  Standard_Integer FirstNode() ;

//! Give the index of Last node of the Edge. <br>
 /*instead*/  Standard_Integer LastNode() ;


 /*instead*/  OCMeshDS_DegreeOfFreedom Movability() ;


 /*instead*/  void SetMovability(OCMeshDS_DegreeOfFreedom canMove) ;


 /*instead*/  Standard_Integer Domain() ;

//! For maping the Edges. <br>
//!          Same Edge -> Same HashCode <br>
//!          Different Edges -> Not IsEqual but can have same HashCode <br>
 /*instead*/  System::Boolean SameOrientation(OCNaroWrappers::OCMeshAlgo_Edge^ Other) ;


 /*instead*/  Standard_Integer HashCode(Standard_Integer Upper) ;


 /*instead*/  System::Boolean IsEqual(OCNaroWrappers::OCMeshAlgo_Edge^ Other) ;

~OCMeshAlgo_Edge()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
