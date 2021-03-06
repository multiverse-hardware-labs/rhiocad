// File generated by CPPExt (MPV)
//
#ifndef _IntTools_ListOfCurveRangeSample_OCWrappers_HeaderFile
#define _IntTools_ListOfCurveRangeSample_OCWrappers_HeaderFile

// include native header
#include <IntTools_ListOfCurveRangeSample.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCIntTools_ListIteratorOfListOfCurveRangeSample;
ref class OCIntTools_CurveRangeSample;
ref class OCIntTools_ListNodeOfListOfCurveRangeSample;



public ref class OCIntTools_ListOfCurveRangeSample  {

protected:
  IntTools_ListOfCurveRangeSample* nativeHandle;
  OCIntTools_ListOfCurveRangeSample(OCDummy^) {};

public:
  property IntTools_ListOfCurveRangeSample* Handle
  {
    IntTools_ListOfCurveRangeSample* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntTools_ListOfCurveRangeSample(IntTools_ListOfCurveRangeSample* nativeHandle);

// Methods PUBLIC


OCIntTools_ListOfCurveRangeSample();


 /*instead*/  void Assign(OCNaroWrappers::OCIntTools_ListOfCurveRangeSample^ Other) ;


 /*instead*/  Standard_Integer Extent() ;


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIntTools_CurveRangeSample^ I) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIntTools_CurveRangeSample^ I, OCNaroWrappers::OCIntTools_ListIteratorOfListOfCurveRangeSample^ theIt) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIntTools_ListOfCurveRangeSample^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCIntTools_CurveRangeSample^ I) ;


 /*instead*/  void Append(OCNaroWrappers::OCIntTools_CurveRangeSample^ I, OCNaroWrappers::OCIntTools_ListIteratorOfListOfCurveRangeSample^ theIt) ;


 /*instead*/  void Append(OCNaroWrappers::OCIntTools_ListOfCurveRangeSample^ Other) ;


 /*instead*/  OCIntTools_CurveRangeSample^ First() ;


 /*instead*/  OCIntTools_CurveRangeSample^ Last() ;


 /*instead*/  void RemoveFirst() ;


 /*instead*/  void Remove(OCNaroWrappers::OCIntTools_ListIteratorOfListOfCurveRangeSample^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCIntTools_CurveRangeSample^ I, OCNaroWrappers::OCIntTools_ListIteratorOfListOfCurveRangeSample^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCIntTools_ListOfCurveRangeSample^ Other, OCNaroWrappers::OCIntTools_ListIteratorOfListOfCurveRangeSample^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCIntTools_CurveRangeSample^ I, OCNaroWrappers::OCIntTools_ListIteratorOfListOfCurveRangeSample^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCIntTools_ListOfCurveRangeSample^ Other, OCNaroWrappers::OCIntTools_ListIteratorOfListOfCurveRangeSample^ It) ;

~OCIntTools_ListOfCurveRangeSample()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
