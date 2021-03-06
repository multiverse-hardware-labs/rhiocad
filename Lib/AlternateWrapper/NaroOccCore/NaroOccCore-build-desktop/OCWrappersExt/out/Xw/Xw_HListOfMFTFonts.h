// File generated by CPPExt (Transient)
//
#ifndef _Xw_HListOfMFTFonts_OCWrappers_HeaderFile
#define _Xw_HListOfMFTFonts_OCWrappers_HeaderFile

// include the wrapped class
#include <Xw_HListOfMFTFonts.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "Xw_ListOfMFTFonts.h"


namespace OCNaroWrappers
{

ref class OCMFT_FontManager;
ref class OCXw_ListOfMFTFonts;



public ref class OCXw_HListOfMFTFonts : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCXw_HListOfMFTFonts(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCXw_HListOfMFTFonts(Handle(Xw_HListOfMFTFonts)* nativeHandle);

// Methods PUBLIC


OCXw_HListOfMFTFonts(Standard_Integer Low, Standard_Integer Up);


OCXw_HListOfMFTFonts(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCMFT_FontManager^ V);


 /*instead*/  void Init(OCNaroWrappers::OCMFT_FontManager^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCMFT_FontManager^ Value) ;


 /*instead*/  OCMFT_FontManager^ Value(Standard_Integer Index) ;


 /*instead*/  OCMFT_FontManager^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCXw_ListOfMFTFonts^ Array1() ;


 /*instead*/  OCXw_ListOfMFTFonts^ ChangeArray1() ;

~OCXw_HListOfMFTFonts()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
