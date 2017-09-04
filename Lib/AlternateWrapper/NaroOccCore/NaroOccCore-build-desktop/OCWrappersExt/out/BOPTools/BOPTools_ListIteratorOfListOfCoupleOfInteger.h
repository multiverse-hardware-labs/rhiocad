// File generated by CPPExt (MPV)
//
#ifndef _BOPTools_ListIteratorOfListOfCoupleOfInteger_OCWrappers_HeaderFile
#define _BOPTools_ListIteratorOfListOfCoupleOfInteger_OCWrappers_HeaderFile

// include native header
#include <BOPTools_ListIteratorOfListOfCoupleOfInteger.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCBOPTools_ListOfCoupleOfInteger;
ref class OCBOPTools_CoupleOfInteger;
ref class OCBOPTools_ListNodeOfListOfCoupleOfInteger;



public ref class OCBOPTools_ListIteratorOfListOfCoupleOfInteger  {

protected:
  BOPTools_ListIteratorOfListOfCoupleOfInteger* nativeHandle;
  OCBOPTools_ListIteratorOfListOfCoupleOfInteger(OCDummy^) {};

public:
  property BOPTools_ListIteratorOfListOfCoupleOfInteger* Handle
  {
    BOPTools_ListIteratorOfListOfCoupleOfInteger* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBOPTools_ListIteratorOfListOfCoupleOfInteger(BOPTools_ListIteratorOfListOfCoupleOfInteger* nativeHandle);

// Methods PUBLIC


OCBOPTools_ListIteratorOfListOfCoupleOfInteger();


OCBOPTools_ListIteratorOfListOfCoupleOfInteger(OCNaroWrappers::OCBOPTools_ListOfCoupleOfInteger^ L);


 /*instead*/  void Initialize(OCNaroWrappers::OCBOPTools_ListOfCoupleOfInteger^ L) ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  OCBOPTools_CoupleOfInteger^ Value() ;

~OCBOPTools_ListIteratorOfListOfCoupleOfInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif