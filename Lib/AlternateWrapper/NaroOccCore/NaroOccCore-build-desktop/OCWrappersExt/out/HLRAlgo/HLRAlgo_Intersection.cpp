// File generated by CPPExt (CPP file)
//

#include "HLRAlgo_Intersection.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCHLRAlgo_Intersection::OCHLRAlgo_Intersection(HLRAlgo_Intersection* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCHLRAlgo_Intersection::OCHLRAlgo_Intersection() 
{
  nativeHandle = new HLRAlgo_Intersection();
}

OCHLRAlgo_Intersection::OCHLRAlgo_Intersection(OCTopAbs_Orientation Ori, Standard_Integer Lev, Standard_Integer SegInd, Standard_Integer Ind, Standard_Real P, Standard_ShortReal Tol, OCTopAbs_State S) 
{
  nativeHandle = new HLRAlgo_Intersection((TopAbs_Orientation)Ori, Lev, SegInd, Ind, P, Tol, (TopAbs_State)S);
}

 void OCHLRAlgo_Intersection::Orientation(OCTopAbs_Orientation Ori)
{
  ((HLRAlgo_Intersection*)nativeHandle)->Orientation((TopAbs_Orientation)Ori);
}

 OCTopAbs_Orientation OCHLRAlgo_Intersection::Orientation()
{
  return (OCTopAbs_Orientation)(((HLRAlgo_Intersection*)nativeHandle)->Orientation());
}

 void OCHLRAlgo_Intersection::Level(Standard_Integer Lev)
{
  ((HLRAlgo_Intersection*)nativeHandle)->Level(Lev);
}

 Standard_Integer OCHLRAlgo_Intersection::Level()
{
  return ((HLRAlgo_Intersection*)nativeHandle)->Level();
}

 void OCHLRAlgo_Intersection::SegIndex(Standard_Integer SegInd)
{
  ((HLRAlgo_Intersection*)nativeHandle)->SegIndex(SegInd);
}

 Standard_Integer OCHLRAlgo_Intersection::SegIndex()
{
  return ((HLRAlgo_Intersection*)nativeHandle)->SegIndex();
}

 void OCHLRAlgo_Intersection::Index(Standard_Integer Ind)
{
  ((HLRAlgo_Intersection*)nativeHandle)->Index(Ind);
}

 Standard_Integer OCHLRAlgo_Intersection::Index()
{
  return ((HLRAlgo_Intersection*)nativeHandle)->Index();
}

 void OCHLRAlgo_Intersection::Parameter(Standard_Real P)
{
  ((HLRAlgo_Intersection*)nativeHandle)->Parameter(P);
}

 Standard_Real OCHLRAlgo_Intersection::Parameter()
{
  return ((HLRAlgo_Intersection*)nativeHandle)->Parameter();
}

 void OCHLRAlgo_Intersection::Tolerance(Standard_ShortReal T)
{
  ((HLRAlgo_Intersection*)nativeHandle)->Tolerance(T);
}

 Standard_ShortReal OCHLRAlgo_Intersection::Tolerance()
{
  return ((HLRAlgo_Intersection*)nativeHandle)->Tolerance();
}

 void OCHLRAlgo_Intersection::State(OCTopAbs_State S)
{
  ((HLRAlgo_Intersection*)nativeHandle)->State((TopAbs_State)S);
}

 OCTopAbs_State OCHLRAlgo_Intersection::State()
{
  return (OCTopAbs_State)(((HLRAlgo_Intersection*)nativeHandle)->State());
}


