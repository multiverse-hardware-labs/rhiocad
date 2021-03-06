// File generated by CPPExt (Transient)
//
#ifndef _Prs2d_Arrow_OCWrappers_HeaderFile
#define _Prs2d_Arrow_OCWrappers_HeaderFile

// include the wrapped class
#include <Prs2d_Arrow.hxx>
#include "../Converter.h"

#include "../Graphic2d/Graphic2d_Line.h"

#include "../TShort/TShort_Array1OfShortReal.h"
#include "Prs2d_TypeOfArrow.h"


namespace OCNaroWrappers
{

ref class OCGraphic2d_GraphicObject;
ref class OCgp_Ax2d;
ref class OCGraphic2d_Drawer;
ref class OCTColgp_HArray1OfPnt2d;


//! Constructs the primitive arrow <br>
public ref class OCPrs2d_Arrow : OCGraphic2d_Line {

protected:
  // dummy constructor;
  OCPrs2d_Arrow(OCDummy^) : OCGraphic2d_Line((OCDummy^)nullptr) {};

public:

// constructor from native
OCPrs2d_Arrow(Handle(Prs2d_Arrow)* nativeHandle);

// Methods PUBLIC

//! create an arrow: <br>
//!          "Location"  gives the location and direction, <br>
//!          "OpenAngle" gives the opening angle (in radians), <br>
//!          "Length"    gives the length. <br>
OCPrs2d_Arrow(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGraphicObject, OCNaroWrappers::OCgp_Ax2d^ Location, Standard_Real OpenAngle, Standard_Real Length, OCPrs2d_TypeOfArrow theType);


 /*instead*/  OCTColgp_HArray1OfPnt2d^ ArrayOfPnt2d(System::Boolean withTrsf) ;

//! Returns type of arrow <br>
//!          Type is: <br>
//!             TOA_OPENED, <br>
//!             TOA_CLOSED, <br>
//!             TOA_FILLED <br>
 /*instead*/  OCPrs2d_TypeOfArrow TypeOfArrow() ;


virtual /*instead*/  void Save(Aspect_FStream& aFStream) ;

~OCPrs2d_Arrow()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
