// File generated by CPPExt (MPV)
//
#ifndef _PColStd_VArrayTNodeOfFieldOfHArray2OfInteger_OCWrappers_HeaderFile
#define _PColStd_VArrayTNodeOfFieldOfHArray2OfInteger_OCWrappers_HeaderFile

// include native header
#include <PColStd_VArrayTNodeOfFieldOfHArray2OfInteger.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCPColStd_FieldOfHArray2OfInteger;
ref class OCPColStd_VArrayNodeOfFieldOfHArray2OfInteger;



public ref class OCPColStd_VArrayTNodeOfFieldOfHArray2OfInteger  {

protected:
  PColStd_VArrayTNodeOfFieldOfHArray2OfInteger* nativeHandle;
  OCPColStd_VArrayTNodeOfFieldOfHArray2OfInteger(OCDummy^) {};

public:
  property PColStd_VArrayTNodeOfFieldOfHArray2OfInteger* Handle
  {
    PColStd_VArrayTNodeOfFieldOfHArray2OfInteger* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCPColStd_VArrayTNodeOfFieldOfHArray2OfInteger(PColStd_VArrayTNodeOfFieldOfHArray2OfInteger* nativeHandle);

// Methods PUBLIC


OCPColStd_VArrayTNodeOfFieldOfHArray2OfInteger();


OCPColStd_VArrayTNodeOfFieldOfHArray2OfInteger(Standard_Integer aValue);


 /*instead*/  void SetValue(Standard_Integer aValue) ;


 /*instead*/  Standard_Address Value() ;

~OCPColStd_VArrayTNodeOfFieldOfHArray2OfInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
