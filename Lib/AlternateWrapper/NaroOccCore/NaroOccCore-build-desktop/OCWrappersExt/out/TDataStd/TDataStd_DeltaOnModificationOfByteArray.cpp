// File generated by CPPExt (CPP file)
//

#include "TDataStd_DeltaOnModificationOfByteArray.h"
#include "../Converter.h"
#include "../TColStd/TColStd_HArray1OfInteger.h"
#include "../TColStd/TColStd_HArray1OfByte.h"
#include "TDataStd_ByteArray.h"


using namespace OCNaroWrappers;

OCTDataStd_DeltaOnModificationOfByteArray::OCTDataStd_DeltaOnModificationOfByteArray(Handle(TDataStd_DeltaOnModificationOfByteArray)* nativeHandle) : OCTDF_DeltaOnModification((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDataStd_DeltaOnModificationOfByteArray(*nativeHandle);
}

OCTDataStd_DeltaOnModificationOfByteArray::OCTDataStd_DeltaOnModificationOfByteArray(OCNaroWrappers::OCTDataStd_ByteArray^ Arr) : OCTDF_DeltaOnModification((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDataStd_DeltaOnModificationOfByteArray(new TDataStd_DeltaOnModificationOfByteArray(*((Handle_TDataStd_ByteArray*)Arr->Handle)));
}

 void OCTDataStd_DeltaOnModificationOfByteArray::Apply()
{
  (*((Handle_TDataStd_DeltaOnModificationOfByteArray*)nativeHandle))->Apply();
}


