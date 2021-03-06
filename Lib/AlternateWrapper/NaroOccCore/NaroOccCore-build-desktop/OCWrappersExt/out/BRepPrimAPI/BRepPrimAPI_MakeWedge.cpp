// File generated by CPPExt (CPP file)
//

#include "BRepPrimAPI_MakeWedge.h"
#include "../Converter.h"
#include "../gp/gp_Ax2.h"
#include "../BRepPrim/BRepPrim_Wedge.h"
#include "../TopoDS/TopoDS_Shell.h"
#include "../TopoDS/TopoDS_Solid.h"


using namespace OCNaroWrappers;

OCBRepPrimAPI_MakeWedge::OCBRepPrimAPI_MakeWedge(BRepPrimAPI_MakeWedge* nativeHandle) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepPrimAPI_MakeWedge::OCBRepPrimAPI_MakeWedge(Standard_Real dx, Standard_Real dy, Standard_Real dz, Standard_Real ltx) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepPrimAPI_MakeWedge(dx, dy, dz, ltx);
}

OCBRepPrimAPI_MakeWedge::OCBRepPrimAPI_MakeWedge(OCNaroWrappers::OCgp_Ax2^ Axes, Standard_Real dx, Standard_Real dy, Standard_Real dz, Standard_Real ltx) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepPrimAPI_MakeWedge(*((gp_Ax2*)Axes->Handle), dx, dy, dz, ltx);
}

OCBRepPrimAPI_MakeWedge::OCBRepPrimAPI_MakeWedge(Standard_Real dx, Standard_Real dy, Standard_Real dz, Standard_Real xmin, Standard_Real zmin, Standard_Real xmax, Standard_Real zmax) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepPrimAPI_MakeWedge(dx, dy, dz, xmin, zmin, xmax, zmax);
}

OCBRepPrimAPI_MakeWedge::OCBRepPrimAPI_MakeWedge(OCNaroWrappers::OCgp_Ax2^ Axes, Standard_Real dx, Standard_Real dy, Standard_Real dz, Standard_Real xmin, Standard_Real zmin, Standard_Real xmax, Standard_Real zmax) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepPrimAPI_MakeWedge(*((gp_Ax2*)Axes->Handle), dx, dy, dz, xmin, zmin, xmax, zmax);
}

OCBRepPrim_Wedge^ OCBRepPrimAPI_MakeWedge::Wedge()
{
  BRepPrim_Wedge* tmp = new BRepPrim_Wedge(123abc, 0, 0, 0);
  *tmp = ((BRepPrimAPI_MakeWedge*)nativeHandle)->Wedge();
  return gcnew OCBRepPrim_Wedge(tmp);
}

 void OCBRepPrimAPI_MakeWedge::Build()
{
  ((BRepPrimAPI_MakeWedge*)nativeHandle)->Build();
}

OCTopoDS_Shell^ OCBRepPrimAPI_MakeWedge::Shell()
{
  TopoDS_Shell* tmp = new TopoDS_Shell();
  *tmp = ((BRepPrimAPI_MakeWedge*)nativeHandle)->Shell();
  return gcnew OCTopoDS_Shell(tmp);
}

OCTopoDS_Solid^ OCBRepPrimAPI_MakeWedge::Solid()
{
  TopoDS_Solid* tmp = new TopoDS_Solid();
  *tmp = ((BRepPrimAPI_MakeWedge*)nativeHandle)->Solid();
  return gcnew OCTopoDS_Solid(tmp);
}


