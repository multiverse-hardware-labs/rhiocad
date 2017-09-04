// File generated by CPPExt (CPP file)
//

#include "TColStd_StackNodeOfStackOfInteger.h"
#include "../Converter.h"
#include "TColStd_StackOfInteger.h"
#include "TColStd_StackIteratorOfStackOfInteger.h"


using namespace OCNaroWrappers;

OCTColStd_StackNodeOfStackOfInteger::OCTColStd_StackNodeOfStackOfInteger(Handle(TColStd_StackNodeOfStackOfInteger)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColStd_StackNodeOfStackOfInteger(*nativeHandle);
}

OCTColStd_StackNodeOfStackOfInteger::OCTColStd_StackNodeOfStackOfInteger(Standard_Integer I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColStd_StackNodeOfStackOfInteger(new TColStd_StackNodeOfStackOfInteger(I, n));
}

 Standard_Integer OCTColStd_StackNodeOfStackOfInteger::Value()
{
  return (*((Handle_TColStd_StackNodeOfStackOfInteger*)nativeHandle))->Value();
}

