// File generated by CPPExt (CPP file)
//

#include "OSD_EnvironmentIterator.h"
#include "../Converter.h"
#include "OSD_Environment.h"


using namespace OCNaroWrappers;

OCOSD_EnvironmentIterator::OCOSD_EnvironmentIterator(OSD_EnvironmentIterator* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCOSD_EnvironmentIterator::OCOSD_EnvironmentIterator() 
{
  nativeHandle = new OSD_EnvironmentIterator();
}

 System::Boolean OCOSD_EnvironmentIterator::More()
{
  return OCConverter::StandardBooleanToBoolean(((OSD_EnvironmentIterator*)nativeHandle)->More());
}

 void OCOSD_EnvironmentIterator::Next()
{
  ((OSD_EnvironmentIterator*)nativeHandle)->Next();
}

OCOSD_Environment^ OCOSD_EnvironmentIterator::Values()
{
  OSD_Environment* tmp = new OSD_Environment();
  *tmp = ((OSD_EnvironmentIterator*)nativeHandle)->Values();
  return gcnew OCOSD_Environment(tmp);
}

 System::Boolean OCOSD_EnvironmentIterator::Failed()
{
  return OCConverter::StandardBooleanToBoolean(((OSD_EnvironmentIterator*)nativeHandle)->Failed());
}

 void OCOSD_EnvironmentIterator::Reset()
{
  ((OSD_EnvironmentIterator*)nativeHandle)->Reset();
}

 void OCOSD_EnvironmentIterator::Perror()
{
  ((OSD_EnvironmentIterator*)nativeHandle)->Perror();
}

 Standard_Integer OCOSD_EnvironmentIterator::Error()
{
  return ((OSD_EnvironmentIterator*)nativeHandle)->Error();
}


