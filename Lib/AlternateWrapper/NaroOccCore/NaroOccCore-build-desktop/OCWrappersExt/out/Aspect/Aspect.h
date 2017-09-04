// File generated by CPPExt (Package)
//

#ifndef _Aspect_OCWrappers_HeaderFile
#define _Aspect_OCWrappers_HeaderFile

// Include the wrapped header
#include <Aspect.hxx>

#include "Aspect_ColorMap.h"
#include "Aspect_ColorCubeColorMap.h"
#include "Aspect_ColorRampColorMap.h"
#include "Aspect_GenericColorMap.h"
#include "Aspect_ColorMapEntry.h"
#include "Aspect_Pixel.h"
#include "Aspect_IndexPixel.h"
#include "Aspect_ColorPixel.h"
#include "Aspect_AspectLine.h"
#include "Aspect_AspectMarker.h"
#include "Aspect_AspectFillArea.h"
#include "Aspect_Background.h"
#include "Aspect_GradientBackground.h"
#include "Aspect_Edge.h"
#include "Aspect_GenId.h"
#include "Aspect_GraphicDriver.h"
#include "Aspect_FontStyle.h"
#include "Aspect_FontMapEntry.h"
#include "Aspect_FontMap.h"
#include "Aspect_WidthMapEntry.h"
#include "Aspect_WidthMap.h"
#include "Aspect_LineStyle.h"
#include "Aspect_TypeMap.h"
#include "Aspect_TypeMapEntry.h"
#include "Aspect_MarkerStyle.h"
#include "Aspect_MarkMap.h"
#include "Aspect_MarkMapEntry.h"
#include "Aspect_Window.h"
#include "Aspect_GraphicDevice.h"
#include "Aspect_Driver.h"
#include "Aspect_WindowDriver.h"
#include "Aspect_Grid.h"
#include "Aspect_RectangularGrid.h"
#include "Aspect_CircularGrid.h"
#include "Aspect_ColorScale.h"
#include "Aspect_Array1OfEdge.h"
#include "Aspect_SequenceOfColorMapEntry.h"
#include "Aspect_SequenceOfTypeMapEntry.h"
#include "Aspect_SequenceOfWidthMapEntry.h"
#include "Aspect_SequenceOfFontMapEntry.h"
#include "Aspect_SequenceOfMarkMapEntry.h"
#include "Aspect_SequenceOfColor.h"
#include "Aspect_SequenceNodeOfSequenceOfColorMapEntry.h"
#include "Aspect_SequenceNodeOfSequenceOfTypeMapEntry.h"
#include "Aspect_SequenceNodeOfSequenceOfWidthMapEntry.h"
#include "Aspect_SequenceNodeOfSequenceOfFontMapEntry.h"
#include "Aspect_SequenceNodeOfSequenceOfMarkMapEntry.h"
#include "Aspect_SequenceNodeOfSequenceOfColor.h"


namespace OCNaroWrappers
{
//! This package contains the group of graphic elements common <br>
//!          to different types of visualisers. It allows the description <br>
//!          of a screen background, a window, an edge, and groups of <br>
//!          graphic attributes that can be used in describing 2D <br>
//!          and 3D objects. <br>
public ref class OCAspect abstract sealed
{

public:
// Methods

//! Returns the format size according to the default <br>
//!      LENGTH unit of the required format <aFOSP>. <br>
//!      Returns more the normalized format name. <br>
static /*instead*/  System::String^ ValuesOfFOSP(OCAspect_FormatOfSheetPaper aFOSP, Quantity_Length& aWidth, Quantity_Length& aHeight) ;

//! Translates an ExtendedString to a CString <br>
//!          depending of the local format. <br>
static /*instead*/  System::String^ ToCString(OCNaroWrappers::OCTCollection_ExtendedString^ aString) ;

//! Inverses <aMat> a 4x4 matrix. <br>
static /*instead*/  System::Boolean Inverse(OCNaroWrappers::OCTColStd_Array2OfReal^ aMat, OCNaroWrappers::OCTColStd_Array2OfReal^ Inv) ;


};

}; // OCNaroWrappers

#endif