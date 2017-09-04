// File generated by CPPExt (MPV)
//
#ifndef _TColgp_Array1OfPnt2d_OCWrappers_HeaderFile
#define _TColgp_Array1OfPnt2d_OCWrappers_HeaderFile

// include native header
#include <TColgp_Array1OfPnt2d.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCgp_Pnt2d;



public ref class OCTColgp_Array1OfPnt2d  {

protected:
  TColgp_Array1OfPnt2d* nativeHandle;
  OCTColgp_Array1OfPnt2d(OCDummy^) {};

public:
  property TColgp_Array1OfPnt2d* Handle
  {
    TColgp_Array1OfPnt2d* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTColgp_Array1OfPnt2d(TColgp_Array1OfPnt2d* nativeHandle);

// Methods PUBLIC


OCTColgp_Array1OfPnt2d(Standard_Integer Low, Standard_Integer Up);


OCTColgp_Array1OfPnt2d(OCNaroWrappers::OCgp_Pnt2d^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCgp_Pnt2d^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCTColgp_Array1OfPnt2d^ Assign(OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCgp_Pnt2d^ Value) ;


 /*instead*/  OCgp_Pnt2d^ Value(Standard_Integer Index) ;


 /*instead*/  OCgp_Pnt2d^ ChangeValue(Standard_Integer Index) ;

~OCTColgp_Array1OfPnt2d()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif