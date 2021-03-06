// File generated by CPPExt (CPP file)
//

#include "Aspect_GenId.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCAspect_GenId::OCAspect_GenId(Aspect_GenId* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCAspect_GenId::OCAspect_GenId() 
{
  nativeHandle = new Aspect_GenId();
}

OCAspect_GenId::OCAspect_GenId(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new Aspect_GenId(Low, Up);
}

 void OCAspect_GenId::Free()
{
  ((Aspect_GenId*)nativeHandle)->Free();
}

 void OCAspect_GenId::Free(Standard_Integer Id)
{
  ((Aspect_GenId*)nativeHandle)->Free(Id);
}

 Standard_Integer OCAspect_GenId::Available()
{
  return ((Aspect_GenId*)nativeHandle)->Available();
}

 Standard_Integer OCAspect_GenId::Lower()
{
  return ((Aspect_GenId*)nativeHandle)->Lower();
}

 Standard_Integer OCAspect_GenId::Next()
{
  return ((Aspect_GenId*)nativeHandle)->Next();
}

 Standard_Integer OCAspect_GenId::Upper()
{
  return ((Aspect_GenId*)nativeHandle)->Upper();
}


