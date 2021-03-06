// File generated by CPPExt (CPP file)
//

#include "Graphic3d_Strips.h"
#include "../Converter.h"
#include "../TColStd/TColStd_Array1OfInteger.h"
#include "../TColStd/TColStd_SequenceOfInteger.h"


using namespace OCNaroWrappers;

OCGraphic3d_Strips::OCGraphic3d_Strips(Graphic3d_Strips* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 void OCGraphic3d_Strips::STRIPT_INIT(Standard_Integer NBVERTICES, OCNaroWrappers::OCTColStd_Array1OfInteger^ TABTRIANGLES)
{
  Graphic3d_Strips::STRIPT_INIT(NBVERTICES, *((TColStd_Array1OfInteger*)TABTRIANGLES->Handle));
}

 void OCGraphic3d_Strips::STRIPT_GET_STRIP(Standard_Integer& NBTRIANGLES, Standard_Integer& V1, Standard_Integer& V2)
{
  Graphic3d_Strips::STRIPT_GET_STRIP(NBTRIANGLES, V1, V2);
}

 void OCGraphic3d_Strips::STRIPT_GET_VERTEX(Standard_Integer& VERTEX, Standard_Integer& TRIANGLE)
{
  Graphic3d_Strips::STRIPT_GET_VERTEX(VERTEX, TRIANGLE);
}

 void OCGraphic3d_Strips::STRIPQ_INIT(Standard_Integer NBVERTICES, Standard_Integer NBQUADRANG, OCNaroWrappers::OCTColStd_SequenceOfInteger^ TABQUADRANGLES)
{
  Graphic3d_Strips::STRIPQ_INIT(NBVERTICES, NBQUADRANG, *((TColStd_SequenceOfInteger*)TABQUADRANGLES->Handle));
}

 void OCGraphic3d_Strips::STRIPQ_GET_STRIP(Standard_Integer& NBQUAD, Standard_Integer& V1, Standard_Integer& V2)
{
  Graphic3d_Strips::STRIPQ_GET_STRIP(NBQUAD, V1, V2);
}

 void OCGraphic3d_Strips::STRIPQ_GET_NEXT(Standard_Integer& VERTEX1, Standard_Integer& VERTEX2, Standard_Integer& QUADRANGLE)
{
  Graphic3d_Strips::STRIPQ_GET_NEXT(VERTEX1, VERTEX2, QUADRANGLE);
}


