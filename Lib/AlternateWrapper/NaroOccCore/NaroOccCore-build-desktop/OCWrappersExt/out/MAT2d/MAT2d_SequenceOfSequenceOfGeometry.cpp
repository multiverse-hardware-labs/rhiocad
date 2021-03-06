// File generated by CPPExt (CPP file)
//

#include "MAT2d_SequenceOfSequenceOfGeometry.h"
#include "../Converter.h"
#include "../TColGeom2d/TColGeom2d_SequenceOfGeometry.h"
#include "MAT2d_SequenceNodeOfSequenceOfSequenceOfGeometry.h"


using namespace OCNaroWrappers;

OCMAT2d_SequenceOfSequenceOfGeometry::OCMAT2d_SequenceOfSequenceOfGeometry(MAT2d_SequenceOfSequenceOfGeometry* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCMAT2d_SequenceOfSequenceOfGeometry::OCMAT2d_SequenceOfSequenceOfGeometry() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new MAT2d_SequenceOfSequenceOfGeometry();
}

OCMAT2d_SequenceOfSequenceOfGeometry^ OCMAT2d_SequenceOfSequenceOfGeometry::Assign(OCNaroWrappers::OCMAT2d_SequenceOfSequenceOfGeometry^ Other)
{
  MAT2d_SequenceOfSequenceOfGeometry* tmp = new MAT2d_SequenceOfSequenceOfGeometry();
  *tmp = ((MAT2d_SequenceOfSequenceOfGeometry*)nativeHandle)->Assign(*((MAT2d_SequenceOfSequenceOfGeometry*)Other->Handle));
  return gcnew OCMAT2d_SequenceOfSequenceOfGeometry(tmp);
}

 void OCMAT2d_SequenceOfSequenceOfGeometry::Append(OCNaroWrappers::OCTColGeom2d_SequenceOfGeometry^ T)
{
  ((MAT2d_SequenceOfSequenceOfGeometry*)nativeHandle)->Append(*((TColGeom2d_SequenceOfGeometry*)T->Handle));
}

 void OCMAT2d_SequenceOfSequenceOfGeometry::Append(OCNaroWrappers::OCMAT2d_SequenceOfSequenceOfGeometry^ S)
{
  ((MAT2d_SequenceOfSequenceOfGeometry*)nativeHandle)->Append(*((MAT2d_SequenceOfSequenceOfGeometry*)S->Handle));
}

 void OCMAT2d_SequenceOfSequenceOfGeometry::Prepend(OCNaroWrappers::OCTColGeom2d_SequenceOfGeometry^ T)
{
  ((MAT2d_SequenceOfSequenceOfGeometry*)nativeHandle)->Prepend(*((TColGeom2d_SequenceOfGeometry*)T->Handle));
}

 void OCMAT2d_SequenceOfSequenceOfGeometry::Prepend(OCNaroWrappers::OCMAT2d_SequenceOfSequenceOfGeometry^ S)
{
  ((MAT2d_SequenceOfSequenceOfGeometry*)nativeHandle)->Prepend(*((MAT2d_SequenceOfSequenceOfGeometry*)S->Handle));
}

 void OCMAT2d_SequenceOfSequenceOfGeometry::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTColGeom2d_SequenceOfGeometry^ T)
{
  ((MAT2d_SequenceOfSequenceOfGeometry*)nativeHandle)->InsertBefore(Index, *((TColGeom2d_SequenceOfGeometry*)T->Handle));
}

 void OCMAT2d_SequenceOfSequenceOfGeometry::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCMAT2d_SequenceOfSequenceOfGeometry^ S)
{
  ((MAT2d_SequenceOfSequenceOfGeometry*)nativeHandle)->InsertBefore(Index, *((MAT2d_SequenceOfSequenceOfGeometry*)S->Handle));
}

 void OCMAT2d_SequenceOfSequenceOfGeometry::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTColGeom2d_SequenceOfGeometry^ T)
{
  ((MAT2d_SequenceOfSequenceOfGeometry*)nativeHandle)->InsertAfter(Index, *((TColGeom2d_SequenceOfGeometry*)T->Handle));
}

 void OCMAT2d_SequenceOfSequenceOfGeometry::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCMAT2d_SequenceOfSequenceOfGeometry^ S)
{
  ((MAT2d_SequenceOfSequenceOfGeometry*)nativeHandle)->InsertAfter(Index, *((MAT2d_SequenceOfSequenceOfGeometry*)S->Handle));
}

OCTColGeom2d_SequenceOfGeometry^ OCMAT2d_SequenceOfSequenceOfGeometry::First()
{
  TColGeom2d_SequenceOfGeometry* tmp = new TColGeom2d_SequenceOfGeometry();
  *tmp = ((MAT2d_SequenceOfSequenceOfGeometry*)nativeHandle)->First();
  return gcnew OCTColGeom2d_SequenceOfGeometry(tmp);
}

OCTColGeom2d_SequenceOfGeometry^ OCMAT2d_SequenceOfSequenceOfGeometry::Last()
{
  TColGeom2d_SequenceOfGeometry* tmp = new TColGeom2d_SequenceOfGeometry();
  *tmp = ((MAT2d_SequenceOfSequenceOfGeometry*)nativeHandle)->Last();
  return gcnew OCTColGeom2d_SequenceOfGeometry(tmp);
}

 void OCMAT2d_SequenceOfSequenceOfGeometry::Split(Standard_Integer Index, OCNaroWrappers::OCMAT2d_SequenceOfSequenceOfGeometry^ Sub)
{
  ((MAT2d_SequenceOfSequenceOfGeometry*)nativeHandle)->Split(Index, *((MAT2d_SequenceOfSequenceOfGeometry*)Sub->Handle));
}

OCTColGeom2d_SequenceOfGeometry^ OCMAT2d_SequenceOfSequenceOfGeometry::Value(Standard_Integer Index)
{
  TColGeom2d_SequenceOfGeometry* tmp = new TColGeom2d_SequenceOfGeometry();
  *tmp = ((MAT2d_SequenceOfSequenceOfGeometry*)nativeHandle)->Value(Index);
  return gcnew OCTColGeom2d_SequenceOfGeometry(tmp);
}

 void OCMAT2d_SequenceOfSequenceOfGeometry::SetValue(Standard_Integer Index, OCNaroWrappers::OCTColGeom2d_SequenceOfGeometry^ I)
{
  ((MAT2d_SequenceOfSequenceOfGeometry*)nativeHandle)->SetValue(Index, *((TColGeom2d_SequenceOfGeometry*)I->Handle));
}

OCTColGeom2d_SequenceOfGeometry^ OCMAT2d_SequenceOfSequenceOfGeometry::ChangeValue(Standard_Integer Index)
{
  TColGeom2d_SequenceOfGeometry* tmp = new TColGeom2d_SequenceOfGeometry();
  *tmp = ((MAT2d_SequenceOfSequenceOfGeometry*)nativeHandle)->ChangeValue(Index);
  return gcnew OCTColGeom2d_SequenceOfGeometry(tmp);
}

 void OCMAT2d_SequenceOfSequenceOfGeometry::Remove(Standard_Integer Index)
{
  ((MAT2d_SequenceOfSequenceOfGeometry*)nativeHandle)->Remove(Index);
}

 void OCMAT2d_SequenceOfSequenceOfGeometry::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((MAT2d_SequenceOfSequenceOfGeometry*)nativeHandle)->Remove(FromIndex, ToIndex);
}


