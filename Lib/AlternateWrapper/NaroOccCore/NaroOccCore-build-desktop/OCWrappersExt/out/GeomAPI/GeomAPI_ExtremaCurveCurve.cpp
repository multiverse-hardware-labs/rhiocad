// File generated by CPPExt (CPP file)
//

#include "GeomAPI_ExtremaCurveCurve.h"
#include "../Converter.h"
#include "../Geom/Geom_Curve.h"
#include "../gp/gp_Pnt.h"
#include "../Extrema/Extrema_ExtCC.h"


using namespace OCNaroWrappers;

OCGeomAPI_ExtremaCurveCurve::OCGeomAPI_ExtremaCurveCurve(GeomAPI_ExtremaCurveCurve* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCGeomAPI_ExtremaCurveCurve::OCGeomAPI_ExtremaCurveCurve() 
{
  nativeHandle = new GeomAPI_ExtremaCurveCurve();
}

OCGeomAPI_ExtremaCurveCurve::OCGeomAPI_ExtremaCurveCurve(OCNaroWrappers::OCGeom_Curve^ C1, OCNaroWrappers::OCGeom_Curve^ C2) 
{
  nativeHandle = new GeomAPI_ExtremaCurveCurve(*((Handle_Geom_Curve*)C1->Handle), *((Handle_Geom_Curve*)C2->Handle));
}

OCGeomAPI_ExtremaCurveCurve::OCGeomAPI_ExtremaCurveCurve(OCNaroWrappers::OCGeom_Curve^ C1, OCNaroWrappers::OCGeom_Curve^ C2, Quantity_Parameter U1min, Quantity_Parameter U1max, Quantity_Parameter U2min, Quantity_Parameter U2max) 
{
  nativeHandle = new GeomAPI_ExtremaCurveCurve(*((Handle_Geom_Curve*)C1->Handle), *((Handle_Geom_Curve*)C2->Handle), U1min, U1max, U2min, U2max);
}

 void OCGeomAPI_ExtremaCurveCurve::Init(OCNaroWrappers::OCGeom_Curve^ C1, OCNaroWrappers::OCGeom_Curve^ C2)
{
  ((GeomAPI_ExtremaCurveCurve*)nativeHandle)->Init(*((Handle_Geom_Curve*)C1->Handle), *((Handle_Geom_Curve*)C2->Handle));
}

 void OCGeomAPI_ExtremaCurveCurve::Init(OCNaroWrappers::OCGeom_Curve^ C1, OCNaroWrappers::OCGeom_Curve^ C2, Quantity_Parameter U1min, Quantity_Parameter U1max, Quantity_Parameter U2min, Quantity_Parameter U2max)
{
  ((GeomAPI_ExtremaCurveCurve*)nativeHandle)->Init(*((Handle_Geom_Curve*)C1->Handle), *((Handle_Geom_Curve*)C2->Handle), U1min, U1max, U2min, U2max);
}

 Standard_Integer OCGeomAPI_ExtremaCurveCurve::NbExtrema()
{
  return ((GeomAPI_ExtremaCurveCurve*)nativeHandle)->NbExtrema();
}

 void OCGeomAPI_ExtremaCurveCurve::Points(Standard_Integer Index, OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2)
{
  ((GeomAPI_ExtremaCurveCurve*)nativeHandle)->Points(Index, *((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
}

 void OCGeomAPI_ExtremaCurveCurve::Parameters(Standard_Integer Index, Quantity_Parameter& U1, Quantity_Parameter& U2)
{
  ((GeomAPI_ExtremaCurveCurve*)nativeHandle)->Parameters(Index, U1, U2);
}

 Quantity_Length OCGeomAPI_ExtremaCurveCurve::Distance(Standard_Integer Index)
{
  return ((GeomAPI_ExtremaCurveCurve*)nativeHandle)->Distance(Index);
}

 void OCGeomAPI_ExtremaCurveCurve::NearestPoints(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2)
{
  ((GeomAPI_ExtremaCurveCurve*)nativeHandle)->NearestPoints(*((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
}

 void OCGeomAPI_ExtremaCurveCurve::LowerDistanceParameters(Quantity_Parameter& U1, Quantity_Parameter& U2)
{
  ((GeomAPI_ExtremaCurveCurve*)nativeHandle)->LowerDistanceParameters(U1, U2);
}

 Quantity_Length OCGeomAPI_ExtremaCurveCurve::LowerDistance()
{
  return ((GeomAPI_ExtremaCurveCurve*)nativeHandle)->LowerDistance();
}

OCExtrema_ExtCC^ OCGeomAPI_ExtremaCurveCurve::Extrema()
{
  Extrema_ExtCC* tmp = new Extrema_ExtCC(0, 0);
  *tmp = ((GeomAPI_ExtremaCurveCurve*)nativeHandle)->Extrema();
  return gcnew OCExtrema_ExtCC(tmp);
}

 System::Boolean OCGeomAPI_ExtremaCurveCurve::TotalNearestPoints(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2)
{
  return OCConverter::StandardBooleanToBoolean(((GeomAPI_ExtremaCurveCurve*)nativeHandle)->TotalNearestPoints(*((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle)));
}

 System::Boolean OCGeomAPI_ExtremaCurveCurve::TotalLowerDistanceParameters(Quantity_Parameter& U1, Quantity_Parameter& U2)
{
  return OCConverter::StandardBooleanToBoolean(((GeomAPI_ExtremaCurveCurve*)nativeHandle)->TotalLowerDistanceParameters(U1, U2));
}

 Quantity_Length OCGeomAPI_ExtremaCurveCurve::TotalLowerDistance()
{
  return ((GeomAPI_ExtremaCurveCurve*)nativeHandle)->TotalLowerDistance();
}


