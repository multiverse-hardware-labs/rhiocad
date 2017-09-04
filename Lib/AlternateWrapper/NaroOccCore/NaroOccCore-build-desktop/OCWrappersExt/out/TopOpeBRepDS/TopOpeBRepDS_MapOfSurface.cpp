// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepDS_MapOfSurface.h"
#include "../Converter.h"
#include "TopOpeBRepDS_SurfaceData.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "TopOpeBRepDS_DataMapNodeOfMapOfSurface.h"
#include "TopOpeBRepDS_DataMapIteratorOfMapOfSurface.h"


using namespace OCNaroWrappers;

OCTopOpeBRepDS_MapOfSurface::OCTopOpeBRepDS_MapOfSurface(TopOpeBRepDS_MapOfSurface* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRepDS_MapOfSurface::OCTopOpeBRepDS_MapOfSurface(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new TopOpeBRepDS_MapOfSurface(NbBuckets);
}

OCTopOpeBRepDS_MapOfSurface^ OCTopOpeBRepDS_MapOfSurface::Assign(OCNaroWrappers::OCTopOpeBRepDS_MapOfSurface^ Other)
{
  TopOpeBRepDS_MapOfSurface* tmp = new TopOpeBRepDS_MapOfSurface(0);
  *tmp = ((TopOpeBRepDS_MapOfSurface*)nativeHandle)->Assign(*((TopOpeBRepDS_MapOfSurface*)Other->Handle));
  return gcnew OCTopOpeBRepDS_MapOfSurface(tmp);
}

 void OCTopOpeBRepDS_MapOfSurface::ReSize(Standard_Integer NbBuckets)
{
  ((TopOpeBRepDS_MapOfSurface*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCTopOpeBRepDS_MapOfSurface::Bind(Standard_Integer K, OCNaroWrappers::OCTopOpeBRepDS_SurfaceData^ I)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepDS_MapOfSurface*)nativeHandle)->Bind(K, *((TopOpeBRepDS_SurfaceData*)I->Handle)));
}

 System::Boolean OCTopOpeBRepDS_MapOfSurface::IsBound(Standard_Integer K)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepDS_MapOfSurface*)nativeHandle)->IsBound(K));
}

 System::Boolean OCTopOpeBRepDS_MapOfSurface::UnBind(Standard_Integer K)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepDS_MapOfSurface*)nativeHandle)->UnBind(K));
}

OCTopOpeBRepDS_SurfaceData^ OCTopOpeBRepDS_MapOfSurface::Find(Standard_Integer K)
{
  TopOpeBRepDS_SurfaceData* tmp = new TopOpeBRepDS_SurfaceData();
  *tmp = ((TopOpeBRepDS_MapOfSurface*)nativeHandle)->Find(K);
  return gcnew OCTopOpeBRepDS_SurfaceData(tmp);
}

OCTopOpeBRepDS_SurfaceData^ OCTopOpeBRepDS_MapOfSurface::ChangeFind(Standard_Integer K)
{
  TopOpeBRepDS_SurfaceData* tmp = new TopOpeBRepDS_SurfaceData();
  *tmp = ((TopOpeBRepDS_MapOfSurface*)nativeHandle)->ChangeFind(K);
  return gcnew OCTopOpeBRepDS_SurfaceData(tmp);
}

 Standard_Address OCTopOpeBRepDS_MapOfSurface::Find1(Standard_Integer K)
{
  return ((TopOpeBRepDS_MapOfSurface*)nativeHandle)->Find1(K);
}

 Standard_Address OCTopOpeBRepDS_MapOfSurface::ChangeFind1(Standard_Integer K)
{
  return ((TopOpeBRepDS_MapOfSurface*)nativeHandle)->ChangeFind1(K);
}

