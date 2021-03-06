// File generated by CPPExt (CPP file)
//

#include "Intf_Interference.h"
#include "../Converter.h"
#include "Intf_SectionPoint.h"
#include "Intf_SectionLine.h"
#include "Intf_TangentZone.h"


using namespace OCNaroWrappers;

OCIntf_Interference::OCIntf_Interference(Intf_Interference* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntf_Interference::OCIntf_Interference(System::Boolean Self) 
{}

 Standard_Integer OCIntf_Interference::NbSectionPoints()
{
  return ((Intf_Interference*)nativeHandle)->NbSectionPoints();
}

OCIntf_SectionPoint^ OCIntf_Interference::PntValue(Standard_Integer Index)
{
  Intf_SectionPoint* tmp = new Intf_SectionPoint();
  *tmp = ((Intf_Interference*)nativeHandle)->PntValue(Index);
  return gcnew OCIntf_SectionPoint(tmp);
}

 Standard_Integer OCIntf_Interference::NbSectionLines()
{
  return ((Intf_Interference*)nativeHandle)->NbSectionLines();
}

OCIntf_SectionLine^ OCIntf_Interference::LineValue(Standard_Integer Index)
{
  Intf_SectionLine* tmp = new Intf_SectionLine();
  *tmp = ((Intf_Interference*)nativeHandle)->LineValue(Index);
  return gcnew OCIntf_SectionLine(tmp);
}

 Standard_Integer OCIntf_Interference::NbTangentZones()
{
  return ((Intf_Interference*)nativeHandle)->NbTangentZones();
}

OCIntf_TangentZone^ OCIntf_Interference::ZoneValue(Standard_Integer Index)
{
  Intf_TangentZone* tmp = new Intf_TangentZone();
  *tmp = ((Intf_Interference*)nativeHandle)->ZoneValue(Index);
  return gcnew OCIntf_TangentZone(tmp);
}

 Standard_Real OCIntf_Interference::GetTolerance()
{
  return ((Intf_Interference*)nativeHandle)->GetTolerance();
}

 System::Boolean OCIntf_Interference::Contains(OCNaroWrappers::OCIntf_SectionPoint^ ThePnt)
{
  return OCConverter::StandardBooleanToBoolean(((Intf_Interference*)nativeHandle)->Contains(*((Intf_SectionPoint*)ThePnt->Handle)));
}

 System::Boolean OCIntf_Interference::Insert(OCNaroWrappers::OCIntf_TangentZone^ TheZone)
{
  return OCConverter::StandardBooleanToBoolean(((Intf_Interference*)nativeHandle)->Insert(*((Intf_TangentZone*)TheZone->Handle)));
}

 void OCIntf_Interference::Insert(OCNaroWrappers::OCIntf_SectionPoint^ pdeb, OCNaroWrappers::OCIntf_SectionPoint^ pfin)
{
  ((Intf_Interference*)nativeHandle)->Insert(*((Intf_SectionPoint*)pdeb->Handle), *((Intf_SectionPoint*)pfin->Handle));
}

 void OCIntf_Interference::Dump()
{
  ((Intf_Interference*)nativeHandle)->Dump();
}


