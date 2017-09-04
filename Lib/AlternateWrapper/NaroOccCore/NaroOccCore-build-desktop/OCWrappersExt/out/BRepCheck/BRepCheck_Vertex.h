// File generated by CPPExt (Transient)
//
#ifndef _BRepCheck_Vertex_OCWrappers_HeaderFile
#define _BRepCheck_Vertex_OCWrappers_HeaderFile

// include the wrapped class
#include <BRepCheck_Vertex.hxx>
#include "../Converter.h"

#include "BRepCheck_Result.h"



namespace OCNaroWrappers
{

ref class OCTopoDS_Vertex;
ref class OCTopoDS_Shape;



public ref class OCBRepCheck_Vertex : OCBRepCheck_Result {

protected:
  // dummy constructor;
  OCBRepCheck_Vertex(OCDummy^) : OCBRepCheck_Result((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepCheck_Vertex(Handle(BRepCheck_Vertex)* nativeHandle);

// Methods PUBLIC


OCBRepCheck_Vertex(OCNaroWrappers::OCTopoDS_Vertex^ V);


 /*instead*/  void InContext(OCNaroWrappers::OCTopoDS_Shape^ ContextShape) ;


 /*instead*/  void Minimum() ;


 /*instead*/  void Blind() ;


 /*instead*/  Standard_Real Tolerance() ;

~OCBRepCheck_Vertex()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif