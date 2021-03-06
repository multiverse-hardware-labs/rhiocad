// File generated by CPPExt (MPV)
//
#ifndef _Graphic3d_Array1OfVertex_OCWrappers_HeaderFile
#define _Graphic3d_Array1OfVertex_OCWrappers_HeaderFile

// include native header
#include <Graphic3d_Array1OfVertex.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCGraphic3d_Vertex;



public ref class OCGraphic3d_Array1OfVertex  {

protected:
  Graphic3d_Array1OfVertex* nativeHandle;
  OCGraphic3d_Array1OfVertex(OCDummy^) {};

public:
  property Graphic3d_Array1OfVertex* Handle
  {
    Graphic3d_Array1OfVertex* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGraphic3d_Array1OfVertex(Graphic3d_Array1OfVertex* nativeHandle);

// Methods PUBLIC


OCGraphic3d_Array1OfVertex(Standard_Integer Low, Standard_Integer Up);


OCGraphic3d_Array1OfVertex(OCNaroWrappers::OCGraphic3d_Vertex^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCGraphic3d_Vertex^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCGraphic3d_Array1OfVertex^ Assign(OCNaroWrappers::OCGraphic3d_Array1OfVertex^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCGraphic3d_Vertex^ Value) ;


 /*instead*/  OCGraphic3d_Vertex^ Value(Standard_Integer Index) ;


 /*instead*/  OCGraphic3d_Vertex^ ChangeValue(Standard_Integer Index) ;

~OCGraphic3d_Array1OfVertex()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
