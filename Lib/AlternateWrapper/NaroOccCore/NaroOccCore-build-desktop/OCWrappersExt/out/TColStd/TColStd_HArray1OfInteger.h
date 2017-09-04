// File generated by CPPExt (Transient)
//
#ifndef _TColStd_HArray1OfInteger_OCWrappers_HeaderFile
#define _TColStd_HArray1OfInteger_OCWrappers_HeaderFile

// include the wrapped class
#include <TColStd_HArray1OfInteger.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "TColStd_Array1OfInteger.h"


namespace OCNaroWrappers
{

ref class OCTColStd_Array1OfInteger;



public ref class OCTColStd_HArray1OfInteger : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCTColStd_HArray1OfInteger(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_HArray1OfInteger(Handle(TColStd_HArray1OfInteger)* nativeHandle);

// Methods PUBLIC


OCTColStd_HArray1OfInteger(Standard_Integer Low, Standard_Integer Up);


OCTColStd_HArray1OfInteger(Standard_Integer Low, Standard_Integer Up, Standard_Integer V);


 /*instead*/  void Init(Standard_Integer V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, Standard_Integer Value) ;


 /*instead*/  Standard_Integer Value(Standard_Integer Index) ;


 /*instead*/  Standard_Integer ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCTColStd_Array1OfInteger^ Array1() ;


 /*instead*/  OCTColStd_Array1OfInteger^ ChangeArray1() ;

~OCTColStd_HArray1OfInteger()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif