// File generated by CPPExt (MPV)
//
#ifndef _IntRes2d_IntersectionSegment_OCWrappers_HeaderFile
#define _IntRes2d_IntersectionSegment_OCWrappers_HeaderFile

// include native header
#include <IntRes2d_IntersectionSegment.hxx>
#include "../Converter.h"


#include "IntRes2d_IntersectionPoint.h"
#include "../Standard/Standard_Storable.h"


namespace OCNaroWrappers
{

ref class OCIntRes2d_IntersectionPoint;


//! Definition of an intersection curve between <br>
//!          two 2D curves. <br>
public ref class OCIntRes2d_IntersectionSegment  {

protected:
  IntRes2d_IntersectionSegment* nativeHandle;
  OCIntRes2d_IntersectionSegment(OCDummy^) {};

public:
  property IntRes2d_IntersectionSegment* Handle
  {
    IntRes2d_IntersectionSegment* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntRes2d_IntersectionSegment(IntRes2d_IntersectionSegment* nativeHandle);

// Methods PUBLIC

//! Empty constructor. <br>
OCIntRes2d_IntersectionSegment();


OCIntRes2d_IntersectionSegment(OCNaroWrappers::OCIntRes2d_IntersectionPoint^ P1, OCNaroWrappers::OCIntRes2d_IntersectionPoint^ P2, System::Boolean Oppos, System::Boolean ReverseFlag);


OCIntRes2d_IntersectionSegment(OCNaroWrappers::OCIntRes2d_IntersectionPoint^ P, System::Boolean First, System::Boolean Oppos, System::Boolean ReverseFlag);

//! Creates an infinite segment of intersection. <br>
OCIntRes2d_IntersectionSegment(System::Boolean Oppos);

//! Returns TRUE if the intersection segment has got <br>
//!          the same orientation on both curves. <br>
 /*instead*/  System::Boolean IsOpposite() ;

//! Returns True if the segment is  limited by a first <br>
//!          point.   This  point defines  the lowest parameter <br>
//!          admitted on the first  curve for the  segment.  If <br>
//!          IsOpposite  returns  False, it  defines the lowest <br>
//!          parameter on the  second curve, otherwise,  it  is <br>
//!          the highest parameter on the second curve. <br>
 /*instead*/  System::Boolean HasFirstPoint() ;

//! Returns the  first point   of the segment    as an <br>
//!          IntersectionPoint (with    a    transition).   The <br>
//!          exception  DomainError  is raised if HasFirstPoint <br>
//!          returns False. <br>
 /*instead*/  OCIntRes2d_IntersectionPoint^ FirstPoint() ;

//! Returns True if the segment  is  limited by a last <br>
//!          point.  This point  defines  the highest parameter <br>
//!          admitted on the  first curve for  the segment.  If <br>
//!          IsOpposite returns  False, it  defines the highest <br>
//!          parameter on  the  second curve, otherwise, it  is <br>
//!          the lowest parameter on the second curve. <br>
 /*instead*/  System::Boolean HasLastPoint() ;

//! Returns   the  last point  of the    segment as an <br>
//!          IntersectionPoint   (with  a    transition).   The <br>
//!          exception        DomainError     is   raised    if <br>
//!          HasLastExtremity returns False. <br>
 /*instead*/  OCIntRes2d_IntersectionPoint^ LastPoint() ;

~OCIntRes2d_IntersectionSegment()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
