// File generated by CPPExt (CPP file)
//

#include "DsgPrs_IdenticPresentation.h"
#include "../Converter.h"
#include "../Prs3d/Prs3d_Presentation.h"
#include "../Prs3d/Prs3d_Drawer.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Ax2.h"
#include "../gp/gp_Elips.h"


using namespace OCNaroWrappers;

OCDsgPrs_IdenticPresentation::OCDsgPrs_IdenticPresentation(DsgPrs_IdenticPresentation* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 void OCDsgPrs_IdenticPresentation::Add(OCNaroWrappers::OCPrs3d_Presentation^ aPresentation, OCNaroWrappers::OCPrs3d_Drawer^ aDrawer, OCNaroWrappers::OCTCollection_ExtendedString^ aText, OCNaroWrappers::OCgp_Pnt^ aPntAttach, OCNaroWrappers::OCgp_Pnt^ aPntOffset)
{
  DsgPrs_IdenticPresentation::Add(*((Handle_Prs3d_Presentation*)aPresentation->Handle), *((Handle_Prs3d_Drawer*)aDrawer->Handle), *((TCollection_ExtendedString*)aText->Handle), *((gp_Pnt*)aPntAttach->Handle), *((gp_Pnt*)aPntOffset->Handle));
}

 void OCDsgPrs_IdenticPresentation::Add(OCNaroWrappers::OCPrs3d_Presentation^ aPresentation, OCNaroWrappers::OCPrs3d_Drawer^ aDrawer, OCNaroWrappers::OCTCollection_ExtendedString^ aText, OCNaroWrappers::OCgp_Pnt^ aFAttach, OCNaroWrappers::OCgp_Pnt^ aSAttach, OCNaroWrappers::OCgp_Pnt^ aPntOffset)
{
  DsgPrs_IdenticPresentation::Add(*((Handle_Prs3d_Presentation*)aPresentation->Handle), *((Handle_Prs3d_Drawer*)aDrawer->Handle), *((TCollection_ExtendedString*)aText->Handle), *((gp_Pnt*)aFAttach->Handle), *((gp_Pnt*)aSAttach->Handle), *((gp_Pnt*)aPntOffset->Handle));
}

 void OCDsgPrs_IdenticPresentation::Add(OCNaroWrappers::OCPrs3d_Presentation^ aPresentation, OCNaroWrappers::OCPrs3d_Drawer^ aDrawer, OCNaroWrappers::OCTCollection_ExtendedString^ aText, OCNaroWrappers::OCgp_Ax2^ aAx2, OCNaroWrappers::OCgp_Pnt^ aCenter, OCNaroWrappers::OCgp_Pnt^ aFAttach, OCNaroWrappers::OCgp_Pnt^ aSAttach, OCNaroWrappers::OCgp_Pnt^ aPntOffset)
{
  DsgPrs_IdenticPresentation::Add(*((Handle_Prs3d_Presentation*)aPresentation->Handle), *((Handle_Prs3d_Drawer*)aDrawer->Handle), *((TCollection_ExtendedString*)aText->Handle), *((gp_Ax2*)aAx2->Handle), *((gp_Pnt*)aCenter->Handle), *((gp_Pnt*)aFAttach->Handle), *((gp_Pnt*)aSAttach->Handle), *((gp_Pnt*)aPntOffset->Handle));
}

 void OCDsgPrs_IdenticPresentation::Add(OCNaroWrappers::OCPrs3d_Presentation^ aPresentation, OCNaroWrappers::OCPrs3d_Drawer^ aDrawer, OCNaroWrappers::OCTCollection_ExtendedString^ aText, OCNaroWrappers::OCgp_Ax2^ aAx2, OCNaroWrappers::OCgp_Pnt^ aCenter, OCNaroWrappers::OCgp_Pnt^ aFAttach, OCNaroWrappers::OCgp_Pnt^ aSAttach, OCNaroWrappers::OCgp_Pnt^ aPntOffset, OCNaroWrappers::OCgp_Pnt^ aPntOnCirc)
{
  DsgPrs_IdenticPresentation::Add(*((Handle_Prs3d_Presentation*)aPresentation->Handle), *((Handle_Prs3d_Drawer*)aDrawer->Handle), *((TCollection_ExtendedString*)aText->Handle), *((gp_Ax2*)aAx2->Handle), *((gp_Pnt*)aCenter->Handle), *((gp_Pnt*)aFAttach->Handle), *((gp_Pnt*)aSAttach->Handle), *((gp_Pnt*)aPntOffset->Handle), *((gp_Pnt*)aPntOnCirc->Handle));
}

 void OCDsgPrs_IdenticPresentation::Add(OCNaroWrappers::OCPrs3d_Presentation^ aPresentation, OCNaroWrappers::OCPrs3d_Drawer^ aDrawer, OCNaroWrappers::OCTCollection_ExtendedString^ aText, OCNaroWrappers::OCgp_Elips^ anEllipse, OCNaroWrappers::OCgp_Pnt^ aFAttach, OCNaroWrappers::OCgp_Pnt^ aSAttach, OCNaroWrappers::OCgp_Pnt^ aPntOffset, OCNaroWrappers::OCgp_Pnt^ aPntOnElli)
{
  DsgPrs_IdenticPresentation::Add(*((Handle_Prs3d_Presentation*)aPresentation->Handle), *((Handle_Prs3d_Drawer*)aDrawer->Handle), *((TCollection_ExtendedString*)aText->Handle), *((gp_Elips*)anEllipse->Handle), *((gp_Pnt*)aFAttach->Handle), *((gp_Pnt*)aSAttach->Handle), *((gp_Pnt*)aPntOffset->Handle), *((gp_Pnt*)aPntOnElli->Handle));
}


