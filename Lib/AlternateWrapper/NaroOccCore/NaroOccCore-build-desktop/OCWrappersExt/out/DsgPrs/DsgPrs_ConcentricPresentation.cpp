// File generated by CPPExt (CPP file)
//

#include "DsgPrs_ConcentricPresentation.h"
#include "../Converter.h"
#include "../Prs3d/Prs3d_Presentation.h"
#include "../Prs3d/Prs3d_Drawer.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Dir.h"


using namespace OCNaroWrappers;

OCDsgPrs_ConcentricPresentation::OCDsgPrs_ConcentricPresentation(DsgPrs_ConcentricPresentation* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 void OCDsgPrs_ConcentricPresentation::Add(OCNaroWrappers::OCPrs3d_Presentation^ aPresentation, OCNaroWrappers::OCPrs3d_Drawer^ aDrawer, OCNaroWrappers::OCgp_Pnt^ aCenter, Standard_Real aRadius, OCNaroWrappers::OCgp_Dir^ aNorm, OCNaroWrappers::OCgp_Pnt^ aPoint)
{
  DsgPrs_ConcentricPresentation::Add(*((Handle_Prs3d_Presentation*)aPresentation->Handle), *((Handle_Prs3d_Drawer*)aDrawer->Handle), *((gp_Pnt*)aCenter->Handle), aRadius, *((gp_Dir*)aNorm->Handle), *((gp_Pnt*)aPoint->Handle));
}


