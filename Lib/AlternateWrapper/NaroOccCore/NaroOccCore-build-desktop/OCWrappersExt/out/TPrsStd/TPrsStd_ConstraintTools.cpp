// File generated by CPPExt (CPP file)
//

#include "TPrsStd_ConstraintTools.h"
#include "../Converter.h"
#include "../AIS/AIS_InteractiveObject.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../Geom/Geom_Geometry.h"


using namespace OCNaroWrappers;

OCTPrsStd_ConstraintTools::OCTPrsStd_ConstraintTools(TPrsStd_ConstraintTools* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 void OCTPrsStd_ConstraintTools::UpdateOnlyValue(, OCNaroWrappers::OCAIS_InteractiveObject^ anAIS)
{
  TPrsStd_ConstraintTools::UpdateOnlyValue(, *((Handle_AIS_InteractiveObject*)anAIS->Handle));
}

 void OCTPrsStd_ConstraintTools::ComputeDistance(, OCNaroWrappers::OCAIS_InteractiveObject^ anAIS)
{
  TPrsStd_ConstraintTools::ComputeDistance(, *((Handle_AIS_InteractiveObject*)anAIS->Handle));
}

 void OCTPrsStd_ConstraintTools::ComputeParallel(, OCNaroWrappers::OCAIS_InteractiveObject^ anAIS)
{
  TPrsStd_ConstraintTools::ComputeParallel(, *((Handle_AIS_InteractiveObject*)anAIS->Handle));
}

 void OCTPrsStd_ConstraintTools::ComputeTangent(, OCNaroWrappers::OCAIS_InteractiveObject^ anAIS)
{
  TPrsStd_ConstraintTools::ComputeTangent(, *((Handle_AIS_InteractiveObject*)anAIS->Handle));
}

 void OCTPrsStd_ConstraintTools::ComputePerpendicular(, OCNaroWrappers::OCAIS_InteractiveObject^ anAIS)
{
  TPrsStd_ConstraintTools::ComputePerpendicular(, *((Handle_AIS_InteractiveObject*)anAIS->Handle));
}

 void OCTPrsStd_ConstraintTools::ComputeConcentric(, OCNaroWrappers::OCAIS_InteractiveObject^ anAIS)
{
  TPrsStd_ConstraintTools::ComputeConcentric(, *((Handle_AIS_InteractiveObject*)anAIS->Handle));
}

 void OCTPrsStd_ConstraintTools::ComputeSymmetry(, OCNaroWrappers::OCAIS_InteractiveObject^ anAIS)
{
  TPrsStd_ConstraintTools::ComputeSymmetry(, *((Handle_AIS_InteractiveObject*)anAIS->Handle));
}

 void OCTPrsStd_ConstraintTools::ComputeMidPoint(, OCNaroWrappers::OCAIS_InteractiveObject^ anAIS)
{
  TPrsStd_ConstraintTools::ComputeMidPoint(, *((Handle_AIS_InteractiveObject*)anAIS->Handle));
}

 void OCTPrsStd_ConstraintTools::ComputeAngle(, OCNaroWrappers::OCAIS_InteractiveObject^ anAIS)
{
  TPrsStd_ConstraintTools::ComputeAngle(, *((Handle_AIS_InteractiveObject*)anAIS->Handle));
}

 void OCTPrsStd_ConstraintTools::ComputeRadius(, OCNaroWrappers::OCAIS_InteractiveObject^ anAIS)
{
  TPrsStd_ConstraintTools::ComputeRadius(, *((Handle_AIS_InteractiveObject*)anAIS->Handle));
}

 void OCTPrsStd_ConstraintTools::ComputeMinRadius(, OCNaroWrappers::OCAIS_InteractiveObject^ anAIS)
{
  TPrsStd_ConstraintTools::ComputeMinRadius(, *((Handle_AIS_InteractiveObject*)anAIS->Handle));
}

 void OCTPrsStd_ConstraintTools::ComputeMaxRadius(, OCNaroWrappers::OCAIS_InteractiveObject^ anAIS)
{
  TPrsStd_ConstraintTools::ComputeMaxRadius(, *((Handle_AIS_InteractiveObject*)anAIS->Handle));
}

 void OCTPrsStd_ConstraintTools::ComputeEqualDistance(, OCNaroWrappers::OCAIS_InteractiveObject^ anAIS)
{
  TPrsStd_ConstraintTools::ComputeEqualDistance(, *((Handle_AIS_InteractiveObject*)anAIS->Handle));
}

 void OCTPrsStd_ConstraintTools::ComputeEqualRadius(, OCNaroWrappers::OCAIS_InteractiveObject^ anAIS)
{
  TPrsStd_ConstraintTools::ComputeEqualRadius(, *((Handle_AIS_InteractiveObject*)anAIS->Handle));
}

 void OCTPrsStd_ConstraintTools::ComputeFix(, OCNaroWrappers::OCAIS_InteractiveObject^ anAIS)
{
  TPrsStd_ConstraintTools::ComputeFix(, *((Handle_AIS_InteractiveObject*)anAIS->Handle));
}

 void OCTPrsStd_ConstraintTools::ComputeDiameter(, OCNaroWrappers::OCAIS_InteractiveObject^ anAIS)
{
  TPrsStd_ConstraintTools::ComputeDiameter(, *((Handle_AIS_InteractiveObject*)anAIS->Handle));
}

 void OCTPrsStd_ConstraintTools::ComputeOffset(, OCNaroWrappers::OCAIS_InteractiveObject^ anAIS)
{
  TPrsStd_ConstraintTools::ComputeOffset(, *((Handle_AIS_InteractiveObject*)anAIS->Handle));
}

 void OCTPrsStd_ConstraintTools::ComputePlacement(, OCNaroWrappers::OCAIS_InteractiveObject^ anAIS)
{
  TPrsStd_ConstraintTools::ComputePlacement(, *((Handle_AIS_InteractiveObject*)anAIS->Handle));
}

 void OCTPrsStd_ConstraintTools::ComputeCoincident(, OCNaroWrappers::OCAIS_InteractiveObject^ anAIS)
{
  TPrsStd_ConstraintTools::ComputeCoincident(, *((Handle_AIS_InteractiveObject*)anAIS->Handle));
}

 void OCTPrsStd_ConstraintTools::ComputeRound(, OCNaroWrappers::OCAIS_InteractiveObject^ anAIS)
{
  TPrsStd_ConstraintTools::ComputeRound(, *((Handle_AIS_InteractiveObject*)anAIS->Handle));
}

 void OCTPrsStd_ConstraintTools::ComputeOthers(, OCNaroWrappers::OCAIS_InteractiveObject^ anAIS)
{
  TPrsStd_ConstraintTools::ComputeOthers(, *((Handle_AIS_InteractiveObject*)anAIS->Handle));
}

 void OCTPrsStd_ConstraintTools::ComputeTextAndValue(, Standard_Real& aValue, OCNaroWrappers::OCTCollection_ExtendedString^ aText, System::Boolean anIsAngle)
{
  TPrsStd_ConstraintTools::ComputeTextAndValue(, aValue, *((TCollection_ExtendedString*)aText->Handle), OCConverter::BooleanToStandardBoolean(anIsAngle));
}

 void OCTPrsStd_ConstraintTools::ComputeAngleForOneFace(, OCNaroWrappers::OCAIS_InteractiveObject^ anAIS)
{
  TPrsStd_ConstraintTools::ComputeAngleForOneFace(, *((Handle_AIS_InteractiveObject*)anAIS->Handle));
}


