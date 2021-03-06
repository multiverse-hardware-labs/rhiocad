// File generated by CPPExt (MPV)
//
#ifndef _SortTools_ShellSortOfInteger_OCWrappers_HeaderFile
#define _SortTools_ShellSortOfInteger_OCWrappers_HeaderFile

// include native header
#include <SortTools_ShellSortOfInteger.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTColStd_Array1OfInteger;
ref class OCTCollection_CompareOfInteger;



public ref class OCSortTools_ShellSortOfInteger  {

protected:
  SortTools_ShellSortOfInteger* nativeHandle;
  OCSortTools_ShellSortOfInteger(OCDummy^) {};

public:
  property SortTools_ShellSortOfInteger* Handle
  {
    SortTools_ShellSortOfInteger* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCSortTools_ShellSortOfInteger(SortTools_ShellSortOfInteger* nativeHandle);

// Methods PUBLIC


static /*instead*/  void Sort(OCNaroWrappers::OCTColStd_Array1OfInteger^ TheArray, OCNaroWrappers::OCTCollection_CompareOfInteger^ Comp) ;

~OCSortTools_ShellSortOfInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
