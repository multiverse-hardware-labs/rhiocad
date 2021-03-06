// File generated by CPPExt (CPP file)
//

#include "Xw_ListOfMFTFonts.h"
#include "../Converter.h"
#include "../MFT/MFT_FontManager.h"


using namespace OCNaroWrappers;

OCXw_ListOfMFTFonts::OCXw_ListOfMFTFonts(Xw_ListOfMFTFonts* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCXw_ListOfMFTFonts::OCXw_ListOfMFTFonts(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new Xw_ListOfMFTFonts(Low, Up);
}

OCXw_ListOfMFTFonts::OCXw_ListOfMFTFonts(OCNaroWrappers::OCMFT_FontManager^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new Xw_ListOfMFTFonts(*((Handle_MFT_FontManager*)Item->Handle), Low, Up);
}

 void OCXw_ListOfMFTFonts::Init(OCNaroWrappers::OCMFT_FontManager^ V)
{
  ((Xw_ListOfMFTFonts*)nativeHandle)->Init(*((Handle_MFT_FontManager*)V->Handle));
}

 System::Boolean OCXw_ListOfMFTFonts::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((Xw_ListOfMFTFonts*)nativeHandle)->IsAllocated());
}

OCXw_ListOfMFTFonts^ OCXw_ListOfMFTFonts::Assign(OCNaroWrappers::OCXw_ListOfMFTFonts^ Other)
{
  Xw_ListOfMFTFonts* tmp = new Xw_ListOfMFTFonts(0, 0);
  *tmp = ((Xw_ListOfMFTFonts*)nativeHandle)->Assign(*((Xw_ListOfMFTFonts*)Other->Handle));
  return gcnew OCXw_ListOfMFTFonts(tmp);
}

 Standard_Integer OCXw_ListOfMFTFonts::Length()
{
  return ((Xw_ListOfMFTFonts*)nativeHandle)->Length();
}

 Standard_Integer OCXw_ListOfMFTFonts::Lower()
{
  return ((Xw_ListOfMFTFonts*)nativeHandle)->Lower();
}

 Standard_Integer OCXw_ListOfMFTFonts::Upper()
{
  return ((Xw_ListOfMFTFonts*)nativeHandle)->Upper();
}

 void OCXw_ListOfMFTFonts::SetValue(Standard_Integer Index, OCNaroWrappers::OCMFT_FontManager^ Value)
{
  ((Xw_ListOfMFTFonts*)nativeHandle)->SetValue(Index, *((Handle_MFT_FontManager*)Value->Handle));
}

OCMFT_FontManager^ OCXw_ListOfMFTFonts::Value(Standard_Integer Index)
{
  Handle(MFT_FontManager) tmp = ((Xw_ListOfMFTFonts*)nativeHandle)->Value(Index);
  return gcnew OCMFT_FontManager(&tmp);
}

OCMFT_FontManager^ OCXw_ListOfMFTFonts::ChangeValue(Standard_Integer Index)
{
  Handle(MFT_FontManager) tmp = ((Xw_ListOfMFTFonts*)nativeHandle)->ChangeValue(Index);
  return gcnew OCMFT_FontManager(&tmp);
}


