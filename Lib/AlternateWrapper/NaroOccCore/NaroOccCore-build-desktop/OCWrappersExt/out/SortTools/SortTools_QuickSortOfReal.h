// File generated by CPPExt (MPV)
//
#ifndef _SortTools_QuickSortOfReal_OCWrappers_HeaderFile
#define _SortTools_QuickSortOfReal_OCWrappers_HeaderFile

// include native header
#include <SortTools_QuickSortOfReal.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTColStd_Array1OfReal;
ref class OCTCollection_CompareOfReal;



public ref class OCSortTools_QuickSortOfReal  {

protected:
  SortTools_QuickSortOfReal* nativeHandle;
  OCSortTools_QuickSortOfReal(OCDummy^) {};

public:
  property SortTools_QuickSortOfReal* Handle
  {
    SortTools_QuickSortOfReal* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCSortTools_QuickSortOfReal(SortTools_QuickSortOfReal* nativeHandle);

// Methods PUBLIC


static /*instead*/  void Sort(OCNaroWrappers::OCTColStd_Array1OfReal^ TheArray, OCNaroWrappers::OCTCollection_CompareOfReal^ Comp) ;

~OCSortTools_QuickSortOfReal()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif