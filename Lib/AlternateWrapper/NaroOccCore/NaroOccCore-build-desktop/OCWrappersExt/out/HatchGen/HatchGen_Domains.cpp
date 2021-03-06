// File generated by CPPExt (CPP file)
//

#include "HatchGen_Domains.h"
#include "../Converter.h"
#include "HatchGen_Domain.h"
#include "HatchGen_SequenceNodeOfDomains.h"


using namespace OCNaroWrappers;

OCHatchGen_Domains::OCHatchGen_Domains(HatchGen_Domains* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCHatchGen_Domains::OCHatchGen_Domains() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new HatchGen_Domains();
}

OCHatchGen_Domains^ OCHatchGen_Domains::Assign(OCNaroWrappers::OCHatchGen_Domains^ Other)
{
  HatchGen_Domains* tmp = new HatchGen_Domains();
  *tmp = ((HatchGen_Domains*)nativeHandle)->Assign(*((HatchGen_Domains*)Other->Handle));
  return gcnew OCHatchGen_Domains(tmp);
}

 void OCHatchGen_Domains::Append(OCNaroWrappers::OCHatchGen_Domain^ T)
{
  ((HatchGen_Domains*)nativeHandle)->Append(*((HatchGen_Domain*)T->Handle));
}

 void OCHatchGen_Domains::Append(OCNaroWrappers::OCHatchGen_Domains^ S)
{
  ((HatchGen_Domains*)nativeHandle)->Append(*((HatchGen_Domains*)S->Handle));
}

 void OCHatchGen_Domains::Prepend(OCNaroWrappers::OCHatchGen_Domain^ T)
{
  ((HatchGen_Domains*)nativeHandle)->Prepend(*((HatchGen_Domain*)T->Handle));
}

 void OCHatchGen_Domains::Prepend(OCNaroWrappers::OCHatchGen_Domains^ S)
{
  ((HatchGen_Domains*)nativeHandle)->Prepend(*((HatchGen_Domains*)S->Handle));
}

 void OCHatchGen_Domains::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCHatchGen_Domain^ T)
{
  ((HatchGen_Domains*)nativeHandle)->InsertBefore(Index, *((HatchGen_Domain*)T->Handle));
}

 void OCHatchGen_Domains::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCHatchGen_Domains^ S)
{
  ((HatchGen_Domains*)nativeHandle)->InsertBefore(Index, *((HatchGen_Domains*)S->Handle));
}

 void OCHatchGen_Domains::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCHatchGen_Domain^ T)
{
  ((HatchGen_Domains*)nativeHandle)->InsertAfter(Index, *((HatchGen_Domain*)T->Handle));
}

 void OCHatchGen_Domains::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCHatchGen_Domains^ S)
{
  ((HatchGen_Domains*)nativeHandle)->InsertAfter(Index, *((HatchGen_Domains*)S->Handle));
}

OCHatchGen_Domain^ OCHatchGen_Domains::First()
{
  HatchGen_Domain* tmp = new HatchGen_Domain();
  *tmp = ((HatchGen_Domains*)nativeHandle)->First();
  return gcnew OCHatchGen_Domain(tmp);
}

OCHatchGen_Domain^ OCHatchGen_Domains::Last()
{
  HatchGen_Domain* tmp = new HatchGen_Domain();
  *tmp = ((HatchGen_Domains*)nativeHandle)->Last();
  return gcnew OCHatchGen_Domain(tmp);
}

 void OCHatchGen_Domains::Split(Standard_Integer Index, OCNaroWrappers::OCHatchGen_Domains^ Sub)
{
  ((HatchGen_Domains*)nativeHandle)->Split(Index, *((HatchGen_Domains*)Sub->Handle));
}

OCHatchGen_Domain^ OCHatchGen_Domains::Value(Standard_Integer Index)
{
  HatchGen_Domain* tmp = new HatchGen_Domain();
  *tmp = ((HatchGen_Domains*)nativeHandle)->Value(Index);
  return gcnew OCHatchGen_Domain(tmp);
}

 void OCHatchGen_Domains::SetValue(Standard_Integer Index, OCNaroWrappers::OCHatchGen_Domain^ I)
{
  ((HatchGen_Domains*)nativeHandle)->SetValue(Index, *((HatchGen_Domain*)I->Handle));
}

OCHatchGen_Domain^ OCHatchGen_Domains::ChangeValue(Standard_Integer Index)
{
  HatchGen_Domain* tmp = new HatchGen_Domain();
  *tmp = ((HatchGen_Domains*)nativeHandle)->ChangeValue(Index);
  return gcnew OCHatchGen_Domain(tmp);
}

 void OCHatchGen_Domains::Remove(Standard_Integer Index)
{
  ((HatchGen_Domains*)nativeHandle)->Remove(Index);
}

 void OCHatchGen_Domains::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((HatchGen_Domains*)nativeHandle)->Remove(FromIndex, ToIndex);
}


