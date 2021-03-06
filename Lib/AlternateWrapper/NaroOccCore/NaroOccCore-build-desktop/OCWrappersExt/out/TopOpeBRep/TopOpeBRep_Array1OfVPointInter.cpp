// File generated by CPPExt (CPP file)
//

#include "TopOpeBRep_Array1OfVPointInter.h"
#include "../Converter.h"
#include "TopOpeBRep_VPointInter.h"


using namespace OCNaroWrappers;

OCTopOpeBRep_Array1OfVPointInter::OCTopOpeBRep_Array1OfVPointInter(TopOpeBRep_Array1OfVPointInter* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRep_Array1OfVPointInter::OCTopOpeBRep_Array1OfVPointInter(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new TopOpeBRep_Array1OfVPointInter(Low, Up);
}

OCTopOpeBRep_Array1OfVPointInter::OCTopOpeBRep_Array1OfVPointInter(OCNaroWrappers::OCTopOpeBRep_VPointInter^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new TopOpeBRep_Array1OfVPointInter(*((TopOpeBRep_VPointInter*)Item->Handle), Low, Up);
}

 void OCTopOpeBRep_Array1OfVPointInter::Init(OCNaroWrappers::OCTopOpeBRep_VPointInter^ V)
{
  ((TopOpeBRep_Array1OfVPointInter*)nativeHandle)->Init(*((TopOpeBRep_VPointInter*)V->Handle));
}

 System::Boolean OCTopOpeBRep_Array1OfVPointInter::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRep_Array1OfVPointInter*)nativeHandle)->IsAllocated());
}

OCTopOpeBRep_Array1OfVPointInter^ OCTopOpeBRep_Array1OfVPointInter::Assign(OCNaroWrappers::OCTopOpeBRep_Array1OfVPointInter^ Other)
{
  TopOpeBRep_Array1OfVPointInter* tmp = new TopOpeBRep_Array1OfVPointInter(0, 0);
  *tmp = ((TopOpeBRep_Array1OfVPointInter*)nativeHandle)->Assign(*((TopOpeBRep_Array1OfVPointInter*)Other->Handle));
  return gcnew OCTopOpeBRep_Array1OfVPointInter(tmp);
}

 Standard_Integer OCTopOpeBRep_Array1OfVPointInter::Length()
{
  return ((TopOpeBRep_Array1OfVPointInter*)nativeHandle)->Length();
}

 Standard_Integer OCTopOpeBRep_Array1OfVPointInter::Lower()
{
  return ((TopOpeBRep_Array1OfVPointInter*)nativeHandle)->Lower();
}

 Standard_Integer OCTopOpeBRep_Array1OfVPointInter::Upper()
{
  return ((TopOpeBRep_Array1OfVPointInter*)nativeHandle)->Upper();
}

 void OCTopOpeBRep_Array1OfVPointInter::SetValue(Standard_Integer Index, OCNaroWrappers::OCTopOpeBRep_VPointInter^ Value)
{
  ((TopOpeBRep_Array1OfVPointInter*)nativeHandle)->SetValue(Index, *((TopOpeBRep_VPointInter*)Value->Handle));
}

OCTopOpeBRep_VPointInter^ OCTopOpeBRep_Array1OfVPointInter::Value(Standard_Integer Index)
{
  TopOpeBRep_VPointInter* tmp = new TopOpeBRep_VPointInter();
  *tmp = ((TopOpeBRep_Array1OfVPointInter*)nativeHandle)->Value(Index);
  return gcnew OCTopOpeBRep_VPointInter(tmp);
}

OCTopOpeBRep_VPointInter^ OCTopOpeBRep_Array1OfVPointInter::ChangeValue(Standard_Integer Index)
{
  TopOpeBRep_VPointInter* tmp = new TopOpeBRep_VPointInter();
  *tmp = ((TopOpeBRep_Array1OfVPointInter*)nativeHandle)->ChangeValue(Index);
  return gcnew OCTopOpeBRep_VPointInter(tmp);
}


