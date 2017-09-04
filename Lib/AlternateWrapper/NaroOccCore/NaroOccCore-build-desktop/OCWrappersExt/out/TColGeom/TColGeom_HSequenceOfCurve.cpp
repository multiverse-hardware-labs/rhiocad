// File generated by CPPExt (CPP file)
//

#include "TColGeom_HSequenceOfCurve.h"
#include "../Converter.h"
#include "../Geom/Geom_Curve.h"
#include "TColGeom_SequenceOfCurve.h"


using namespace OCNaroWrappers;

OCTColGeom_HSequenceOfCurve::OCTColGeom_HSequenceOfCurve(Handle(TColGeom_HSequenceOfCurve)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColGeom_HSequenceOfCurve(*nativeHandle);
}

OCTColGeom_HSequenceOfCurve::OCTColGeom_HSequenceOfCurve() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColGeom_HSequenceOfCurve(new TColGeom_HSequenceOfCurve());
}

 System::Boolean OCTColGeom_HSequenceOfCurve::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TColGeom_HSequenceOfCurve*)nativeHandle))->IsEmpty());
}

 Standard_Integer OCTColGeom_HSequenceOfCurve::Length()
{
  return (*((Handle_TColGeom_HSequenceOfCurve*)nativeHandle))->Length();
}

 void OCTColGeom_HSequenceOfCurve::Clear()
{
  (*((Handle_TColGeom_HSequenceOfCurve*)nativeHandle))->Clear();
}

 void OCTColGeom_HSequenceOfCurve::Append(OCNaroWrappers::OCGeom_Curve^ anItem)
{
  (*((Handle_TColGeom_HSequenceOfCurve*)nativeHandle))->Append(*((Handle_Geom_Curve*)anItem->Handle));
}

 void OCTColGeom_HSequenceOfCurve::Append(OCNaroWrappers::OCTColGeom_HSequenceOfCurve^ aSequence)
{
  (*((Handle_TColGeom_HSequenceOfCurve*)nativeHandle))->Append(*((Handle_TColGeom_HSequenceOfCurve*)aSequence->Handle));
}

 void OCTColGeom_HSequenceOfCurve::Prepend(OCNaroWrappers::OCGeom_Curve^ anItem)
{
  (*((Handle_TColGeom_HSequenceOfCurve*)nativeHandle))->Prepend(*((Handle_Geom_Curve*)anItem->Handle));
}

 void OCTColGeom_HSequenceOfCurve::Prepend(OCNaroWrappers::OCTColGeom_HSequenceOfCurve^ aSequence)
{
  (*((Handle_TColGeom_HSequenceOfCurve*)nativeHandle))->Prepend(*((Handle_TColGeom_HSequenceOfCurve*)aSequence->Handle));
}

 void OCTColGeom_HSequenceOfCurve::Reverse()
{
  (*((Handle_TColGeom_HSequenceOfCurve*)nativeHandle))->Reverse();
}

 void OCTColGeom_HSequenceOfCurve::InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCGeom_Curve^ anItem)
{
  (*((Handle_TColGeom_HSequenceOfCurve*)nativeHandle))->InsertBefore(anIndex, *((Handle_Geom_Curve*)anItem->Handle));
}

 void OCTColGeom_HSequenceOfCurve::InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCTColGeom_HSequenceOfCurve^ aSequence)
{
  (*((Handle_TColGeom_HSequenceOfCurve*)nativeHandle))->InsertBefore(anIndex, *((Handle_TColGeom_HSequenceOfCurve*)aSequence->Handle));
}

 void OCTColGeom_HSequenceOfCurve::InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCGeom_Curve^ anItem)
{
  (*((Handle_TColGeom_HSequenceOfCurve*)nativeHandle))->InsertAfter(anIndex, *((Handle_Geom_Curve*)anItem->Handle));
}

 void OCTColGeom_HSequenceOfCurve::InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCTColGeom_HSequenceOfCurve^ aSequence)
{
  (*((Handle_TColGeom_HSequenceOfCurve*)nativeHandle))->InsertAfter(anIndex, *((Handle_TColGeom_HSequenceOfCurve*)aSequence->Handle));
}

 void OCTColGeom_HSequenceOfCurve::Exchange(Standard_Integer anIndex, Standard_Integer anOtherIndex)
{
  (*((Handle_TColGeom_HSequenceOfCurve*)nativeHandle))->Exchange(anIndex, anOtherIndex);
}

OCTColGeom_HSequenceOfCurve^ OCTColGeom_HSequenceOfCurve::Split(Standard_Integer anIndex)
{
  Handle(TColGeom_HSequenceOfCurve) tmp = (*((Handle_TColGeom_HSequenceOfCurve*)nativeHandle))->Split(anIndex);
  return gcnew OCTColGeom_HSequenceOfCurve(&tmp);
}

 void OCTColGeom_HSequenceOfCurve::SetValue(Standard_Integer anIndex, OCNaroWrappers::OCGeom_Curve^ anItem)
{
  (*((Handle_TColGeom_HSequenceOfCurve*)nativeHandle))->SetValue(anIndex, *((Handle_Geom_Curve*)anItem->Handle));
}

OCGeom_Curve^ OCTColGeom_HSequenceOfCurve::Value(Standard_Integer anIndex)
{
  Handle(Geom_Curve) tmp = (*((Handle_TColGeom_HSequenceOfCurve*)nativeHandle))->Value(anIndex);
  return gcnew OCGeom_Curve(&tmp);
}

OCGeom_Curve^ OCTColGeom_HSequenceOfCurve::ChangeValue(Standard_Integer anIndex)
{
  Handle(Geom_Curve) tmp = (*((Handle_TColGeom_HSequenceOfCurve*)nativeHandle))->ChangeValue(anIndex);
  return gcnew OCGeom_Curve(&tmp);
}

 void OCTColGeom_HSequenceOfCurve::Remove(Standard_Integer anIndex)
{
  (*((Handle_TColGeom_HSequenceOfCurve*)nativeHandle))->Remove(anIndex);
}

 void OCTColGeom_HSequenceOfCurve::Remove(Standard_Integer fromIndex, Standard_Integer toIndex)
{
  (*((Handle_TColGeom_HSequenceOfCurve*)nativeHandle))->Remove(fromIndex, toIndex);
}

OCTColGeom_SequenceOfCurve^ OCTColGeom_HSequenceOfCurve::Sequence()
{
  TColGeom_SequenceOfCurve* tmp = new TColGeom_SequenceOfCurve();
  *tmp = (*((Handle_TColGeom_HSequenceOfCurve*)nativeHandle))->Sequence();
  return gcnew OCTColGeom_SequenceOfCurve(tmp);
}

OCTColGeom_SequenceOfCurve^ OCTColGeom_HSequenceOfCurve::ChangeSequence()
{
  TColGeom_SequenceOfCurve* tmp = new TColGeom_SequenceOfCurve();
  *tmp = (*((Handle_TColGeom_HSequenceOfCurve*)nativeHandle))->ChangeSequence();
  return gcnew OCTColGeom_SequenceOfCurve(tmp);
}

OCTColGeom_HSequenceOfCurve^ OCTColGeom_HSequenceOfCurve::ShallowCopy()
{
  Handle(TColGeom_HSequenceOfCurve) tmp = (*((Handle_TColGeom_HSequenceOfCurve*)nativeHandle))->ShallowCopy();
  return gcnew OCTColGeom_HSequenceOfCurve(&tmp);
}

