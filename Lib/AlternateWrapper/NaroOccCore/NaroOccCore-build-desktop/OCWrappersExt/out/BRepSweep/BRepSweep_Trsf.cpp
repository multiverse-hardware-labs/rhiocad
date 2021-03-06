// File generated by CPPExt (CPP file)
//

#include "BRepSweep_Trsf.h"
#include "../Converter.h"
#include "../BRep/BRep_Builder.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../Sweep/Sweep_NumShape.h"
#include "../TopLoc/TopLoc_Location.h"


using namespace OCNaroWrappers;

OCBRepSweep_Trsf::OCBRepSweep_Trsf(BRepSweep_Trsf* nativeHandle) : OCBRepSweep_NumLinearRegularSweep((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

 void OCBRepSweep_Trsf::Delete()
{
  ((BRepSweep_Trsf*)nativeHandle)->Delete();
}

OCBRepSweep_Trsf::OCBRepSweep_Trsf(OCNaroWrappers::OCBRep_Builder^ aBuilder, OCNaroWrappers::OCTopoDS_Shape^ aGenShape, OCNaroWrappers::OCSweep_NumShape^ aDirWire, OCNaroWrappers::OCTopLoc_Location^ aLocation, System::Boolean aCopy) : OCBRepSweep_NumLinearRegularSweep((OCDummy^)nullptr)

{}

 void OCBRepSweep_Trsf::Init()
{
  ((BRepSweep_Trsf*)nativeHandle)->Init();
}

 System::Boolean OCBRepSweep_Trsf::Process(OCNaroWrappers::OCTopoDS_Shape^ aGenS, OCNaroWrappers::OCSweep_NumShape^ aDirV)
{
  return OCConverter::StandardBooleanToBoolean(((BRepSweep_Trsf*)nativeHandle)->Process(*((TopoDS_Shape*)aGenS->Handle), *((Sweep_NumShape*)aDirV->Handle)));
}

 void OCBRepSweep_Trsf::SetContinuity(OCNaroWrappers::OCTopoDS_Shape^ aGenS, OCNaroWrappers::OCSweep_NumShape^ aDirS)
{
  ((BRepSweep_Trsf*)nativeHandle)->SetContinuity(*((TopoDS_Shape*)aGenS->Handle), *((Sweep_NumShape*)aDirS->Handle));
}


