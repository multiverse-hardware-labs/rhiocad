// File generated by CPPExt (CPP file)
//

#include "IntAna2d_AnaIntersection.h"
#include "../Converter.h"
#include "../gp/gp_Lin2d.h"
#include "../gp/gp_Circ2d.h"
#include "IntAna2d_Conic.h"
#include "../gp/gp_Elips2d.h"
#include "../gp/gp_Parab2d.h"
#include "../gp/gp_Hypr2d.h"
#include "IntAna2d_IntPoint.h"


using namespace OCNaroWrappers;

OCIntAna2d_AnaIntersection::OCIntAna2d_AnaIntersection(IntAna2d_AnaIntersection* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntAna2d_AnaIntersection::OCIntAna2d_AnaIntersection() 
{
  nativeHandle = new IntAna2d_AnaIntersection();
}

OCIntAna2d_AnaIntersection::OCIntAna2d_AnaIntersection(OCNaroWrappers::OCgp_Lin2d^ L1, OCNaroWrappers::OCgp_Lin2d^ L2) 
{
  nativeHandle = new IntAna2d_AnaIntersection(*((gp_Lin2d*)L1->Handle), *((gp_Lin2d*)L2->Handle));
}

OCIntAna2d_AnaIntersection::OCIntAna2d_AnaIntersection(OCNaroWrappers::OCgp_Circ2d^ C1, OCNaroWrappers::OCgp_Circ2d^ C2) 
{
  nativeHandle = new IntAna2d_AnaIntersection(*((gp_Circ2d*)C1->Handle), *((gp_Circ2d*)C2->Handle));
}

OCIntAna2d_AnaIntersection::OCIntAna2d_AnaIntersection(OCNaroWrappers::OCgp_Lin2d^ L, OCNaroWrappers::OCgp_Circ2d^ C) 
{
  nativeHandle = new IntAna2d_AnaIntersection(*((gp_Lin2d*)L->Handle), *((gp_Circ2d*)C->Handle));
}

OCIntAna2d_AnaIntersection::OCIntAna2d_AnaIntersection(OCNaroWrappers::OCgp_Lin2d^ L, OCNaroWrappers::OCIntAna2d_Conic^ C) 
{
  nativeHandle = new IntAna2d_AnaIntersection(*((gp_Lin2d*)L->Handle), *((IntAna2d_Conic*)C->Handle));
}

OCIntAna2d_AnaIntersection::OCIntAna2d_AnaIntersection(OCNaroWrappers::OCgp_Circ2d^ C, OCNaroWrappers::OCIntAna2d_Conic^ Co) 
{
  nativeHandle = new IntAna2d_AnaIntersection(*((gp_Circ2d*)C->Handle), *((IntAna2d_Conic*)Co->Handle));
}

OCIntAna2d_AnaIntersection::OCIntAna2d_AnaIntersection(OCNaroWrappers::OCgp_Elips2d^ E, OCNaroWrappers::OCIntAna2d_Conic^ C) 
{
  nativeHandle = new IntAna2d_AnaIntersection(*((gp_Elips2d*)E->Handle), *((IntAna2d_Conic*)C->Handle));
}

OCIntAna2d_AnaIntersection::OCIntAna2d_AnaIntersection(OCNaroWrappers::OCgp_Parab2d^ P, OCNaroWrappers::OCIntAna2d_Conic^ C) 
{
  nativeHandle = new IntAna2d_AnaIntersection(*((gp_Parab2d*)P->Handle), *((IntAna2d_Conic*)C->Handle));
}

OCIntAna2d_AnaIntersection::OCIntAna2d_AnaIntersection(OCNaroWrappers::OCgp_Hypr2d^ H, OCNaroWrappers::OCIntAna2d_Conic^ C) 
{
  nativeHandle = new IntAna2d_AnaIntersection(*((gp_Hypr2d*)H->Handle), *((IntAna2d_Conic*)C->Handle));
}

 void OCIntAna2d_AnaIntersection::Perform(OCNaroWrappers::OCgp_Lin2d^ L1, OCNaroWrappers::OCgp_Lin2d^ L2)
{
  ((IntAna2d_AnaIntersection*)nativeHandle)->Perform(*((gp_Lin2d*)L1->Handle), *((gp_Lin2d*)L2->Handle));
}

 void OCIntAna2d_AnaIntersection::Perform(OCNaroWrappers::OCgp_Circ2d^ C1, OCNaroWrappers::OCgp_Circ2d^ C2)
{
  ((IntAna2d_AnaIntersection*)nativeHandle)->Perform(*((gp_Circ2d*)C1->Handle), *((gp_Circ2d*)C2->Handle));
}

 void OCIntAna2d_AnaIntersection::Perform(OCNaroWrappers::OCgp_Lin2d^ L, OCNaroWrappers::OCgp_Circ2d^ C)
{
  ((IntAna2d_AnaIntersection*)nativeHandle)->Perform(*((gp_Lin2d*)L->Handle), *((gp_Circ2d*)C->Handle));
}

 void OCIntAna2d_AnaIntersection::Perform(OCNaroWrappers::OCgp_Lin2d^ L, OCNaroWrappers::OCIntAna2d_Conic^ C)
{
  ((IntAna2d_AnaIntersection*)nativeHandle)->Perform(*((gp_Lin2d*)L->Handle), *((IntAna2d_Conic*)C->Handle));
}

 void OCIntAna2d_AnaIntersection::Perform(OCNaroWrappers::OCgp_Circ2d^ C, OCNaroWrappers::OCIntAna2d_Conic^ Co)
{
  ((IntAna2d_AnaIntersection*)nativeHandle)->Perform(*((gp_Circ2d*)C->Handle), *((IntAna2d_Conic*)Co->Handle));
}

 void OCIntAna2d_AnaIntersection::Perform(OCNaroWrappers::OCgp_Elips2d^ E, OCNaroWrappers::OCIntAna2d_Conic^ C)
{
  ((IntAna2d_AnaIntersection*)nativeHandle)->Perform(*((gp_Elips2d*)E->Handle), *((IntAna2d_Conic*)C->Handle));
}

 void OCIntAna2d_AnaIntersection::Perform(OCNaroWrappers::OCgp_Parab2d^ P, OCNaroWrappers::OCIntAna2d_Conic^ C)
{
  ((IntAna2d_AnaIntersection*)nativeHandle)->Perform(*((gp_Parab2d*)P->Handle), *((IntAna2d_Conic*)C->Handle));
}

 void OCIntAna2d_AnaIntersection::Perform(OCNaroWrappers::OCgp_Hypr2d^ H, OCNaroWrappers::OCIntAna2d_Conic^ C)
{
  ((IntAna2d_AnaIntersection*)nativeHandle)->Perform(*((gp_Hypr2d*)H->Handle), *((IntAna2d_Conic*)C->Handle));
}

 System::Boolean OCIntAna2d_AnaIntersection::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((IntAna2d_AnaIntersection*)nativeHandle)->IsDone());
}

 System::Boolean OCIntAna2d_AnaIntersection::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((IntAna2d_AnaIntersection*)nativeHandle)->IsEmpty());
}

 System::Boolean OCIntAna2d_AnaIntersection::IdenticalElements()
{
  return OCConverter::StandardBooleanToBoolean(((IntAna2d_AnaIntersection*)nativeHandle)->IdenticalElements());
}

 System::Boolean OCIntAna2d_AnaIntersection::ParallelElements()
{
  return OCConverter::StandardBooleanToBoolean(((IntAna2d_AnaIntersection*)nativeHandle)->ParallelElements());
}

 Standard_Integer OCIntAna2d_AnaIntersection::NbPoints()
{
  return ((IntAna2d_AnaIntersection*)nativeHandle)->NbPoints();
}

OCIntAna2d_IntPoint^ OCIntAna2d_AnaIntersection::Point(Standard_Integer N)
{
  IntAna2d_IntPoint* tmp = new IntAna2d_IntPoint(0, 0, 0, 0);
  *tmp = ((IntAna2d_AnaIntersection*)nativeHandle)->Point(N);
  return gcnew OCIntAna2d_IntPoint(tmp);
}


