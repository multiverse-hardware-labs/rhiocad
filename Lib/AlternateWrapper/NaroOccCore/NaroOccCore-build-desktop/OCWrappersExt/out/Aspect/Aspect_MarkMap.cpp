// File generated by CPPExt (CPP file)
//

#include "Aspect_MarkMap.h"
#include "../Converter.h"
#include "Aspect_MarkMapEntry.h"
#include "Aspect_MarkerStyle.h"


using namespace OCNaroWrappers;

OCAspect_MarkMap::OCAspect_MarkMap(Handle(Aspect_MarkMap)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Aspect_MarkMap(*nativeHandle);
}

OCAspect_MarkMap::OCAspect_MarkMap() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Aspect_MarkMap(new Aspect_MarkMap());
}

 void OCAspect_MarkMap::AddEntry(OCNaroWrappers::OCAspect_MarkMapEntry^ AnEntry)
{
  (*((Handle_Aspect_MarkMap*)nativeHandle))->AddEntry(*((Aspect_MarkMapEntry*)AnEntry->Handle));
}

 Standard_Integer OCAspect_MarkMap::AddEntry(OCNaroWrappers::OCAspect_MarkerStyle^ aStyle)
{
  return (*((Handle_Aspect_MarkMap*)nativeHandle))->AddEntry(*((Aspect_MarkerStyle*)aStyle->Handle));
}

 Standard_Integer OCAspect_MarkMap::Size()
{
  return (*((Handle_Aspect_MarkMap*)nativeHandle))->Size();
}

 Standard_Integer OCAspect_MarkMap::Index(Standard_Integer aMarkmapIndex)
{
  return (*((Handle_Aspect_MarkMap*)nativeHandle))->Index(aMarkmapIndex);
}

 void OCAspect_MarkMap::Dump()
{
  (*((Handle_Aspect_MarkMap*)nativeHandle))->Dump();
}

OCAspect_MarkMapEntry^ OCAspect_MarkMap::Entry(Standard_Integer AnIndex)
{
  Aspect_MarkMapEntry* tmp = new Aspect_MarkMapEntry();
  *tmp = (*((Handle_Aspect_MarkMap*)nativeHandle))->Entry(AnIndex);
  return gcnew OCAspect_MarkMapEntry(tmp);
}


