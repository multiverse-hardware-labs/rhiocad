// File generated by CPPExt (CPP file)
//

#include "TColStd_DataMapNodeOfDataMapOfStringInteger.h"
#include "../Converter.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "TColStd_DataMapOfStringInteger.h"
#include "TColStd_DataMapIteratorOfDataMapOfStringInteger.h"


using namespace OCNaroWrappers;

OCTColStd_DataMapNodeOfDataMapOfStringInteger::OCTColStd_DataMapNodeOfDataMapOfStringInteger(Handle(TColStd_DataMapNodeOfDataMapOfStringInteger)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColStd_DataMapNodeOfDataMapOfStringInteger(*nativeHandle);
}

OCTColStd_DataMapNodeOfDataMapOfStringInteger::OCTColStd_DataMapNodeOfDataMapOfStringInteger(OCNaroWrappers::OCTCollection_ExtendedString^ K, Standard_Integer I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColStd_DataMapNodeOfDataMapOfStringInteger(new TColStd_DataMapNodeOfDataMapOfStringInteger(*((TCollection_ExtendedString*)K->Handle), I, n));
}

OCTCollection_ExtendedString^ OCTColStd_DataMapNodeOfDataMapOfStringInteger::Key()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = (*((Handle_TColStd_DataMapNodeOfDataMapOfStringInteger*)nativeHandle))->Key();
  return gcnew OCTCollection_ExtendedString(tmp);
}

 Standard_Integer OCTColStd_DataMapNodeOfDataMapOfStringInteger::Value()
{
  return (*((Handle_TColStd_DataMapNodeOfDataMapOfStringInteger*)nativeHandle))->Value();
}


