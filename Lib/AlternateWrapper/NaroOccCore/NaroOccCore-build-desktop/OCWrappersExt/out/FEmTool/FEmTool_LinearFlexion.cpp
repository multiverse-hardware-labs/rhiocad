// File generated by CPPExt (CPP file)
//

#include "FEmTool_LinearFlexion.h"
#include "../Converter.h"
#include "../TColStd/TColStd_HArray2OfInteger.h"
#include "../math/math_Matrix.h"
#include "../math/math_Vector.h"


using namespace OCNaroWrappers;

OCFEmTool_LinearFlexion::OCFEmTool_LinearFlexion(Handle(FEmTool_LinearFlexion)* nativeHandle) : OCFEmTool_ElementaryCriterion((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_FEmTool_LinearFlexion(*nativeHandle);
}

OCFEmTool_LinearFlexion::OCFEmTool_LinearFlexion(Standard_Integer WorkDegree, OCGeomAbs_Shape ConstraintOrder) : OCFEmTool_ElementaryCriterion((OCDummy^)nullptr)

{
  nativeHandle = new Handle_FEmTool_LinearFlexion(new FEmTool_LinearFlexion(WorkDegree, (GeomAbs_Shape)ConstraintOrder));
}

OCTColStd_HArray2OfInteger^ OCFEmTool_LinearFlexion::DependenceTable()
{
  Handle(TColStd_HArray2OfInteger) tmp = (*((Handle_FEmTool_LinearFlexion*)nativeHandle))->DependenceTable();
  return gcnew OCTColStd_HArray2OfInteger(&tmp);
}

 Standard_Real OCFEmTool_LinearFlexion::Value()
{
  return (*((Handle_FEmTool_LinearFlexion*)nativeHandle))->Value();
}

 void OCFEmTool_LinearFlexion::Hessian(Standard_Integer Dimension1, Standard_Integer Dimension2, OCNaroWrappers::OCmath_Matrix^ H)
{
  (*((Handle_FEmTool_LinearFlexion*)nativeHandle))->Hessian(Dimension1, Dimension2, *((math_Matrix*)H->Handle));
}

 void OCFEmTool_LinearFlexion::Gradient(Standard_Integer Dimension, OCNaroWrappers::OCmath_Vector^ G)
{
  (*((Handle_FEmTool_LinearFlexion*)nativeHandle))->Gradient(Dimension, *((math_Vector*)G->Handle));
}

