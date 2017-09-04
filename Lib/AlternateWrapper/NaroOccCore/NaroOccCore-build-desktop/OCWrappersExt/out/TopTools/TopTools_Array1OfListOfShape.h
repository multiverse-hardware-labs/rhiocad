// File generated by CPPExt (MPV)
//
#ifndef _TopTools_Array1OfListOfShape_OCWrappers_HeaderFile
#define _TopTools_Array1OfListOfShape_OCWrappers_HeaderFile

// include native header
#include <TopTools_Array1OfListOfShape.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTopTools_ListOfShape;



public ref class OCTopTools_Array1OfListOfShape  {

protected:
  TopTools_Array1OfListOfShape* nativeHandle;
  OCTopTools_Array1OfListOfShape(OCDummy^) {};

public:
  property TopTools_Array1OfListOfShape* Handle
  {
    TopTools_Array1OfListOfShape* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopTools_Array1OfListOfShape(TopTools_Array1OfListOfShape* nativeHandle);

// Methods PUBLIC


OCTopTools_Array1OfListOfShape(Standard_Integer Low, Standard_Integer Up);


OCTopTools_Array1OfListOfShape(OCNaroWrappers::OCTopTools_ListOfShape^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCTopTools_ListOfShape^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCTopTools_Array1OfListOfShape^ Assign(OCNaroWrappers::OCTopTools_Array1OfListOfShape^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCTopTools_ListOfShape^ Value) ;


 /*instead*/  OCTopTools_ListOfShape^ Value(Standard_Integer Index) ;


 /*instead*/  OCTopTools_ListOfShape^ ChangeValue(Standard_Integer Index) ;

~OCTopTools_Array1OfListOfShape()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif