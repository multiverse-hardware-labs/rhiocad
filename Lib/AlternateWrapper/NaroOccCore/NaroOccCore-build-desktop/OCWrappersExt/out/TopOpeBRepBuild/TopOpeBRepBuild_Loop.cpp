// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepBuild_Loop.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "TopOpeBRepBuild_BlockIterator.h"


using namespace OCNaroWrappers;

OCTopOpeBRepBuild_Loop::OCTopOpeBRepBuild_Loop(Handle(TopOpeBRepBuild_Loop)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopOpeBRepBuild_Loop(*nativeHandle);
}

OCTopOpeBRepBuild_Loop::OCTopOpeBRepBuild_Loop(OCNaroWrappers::OCTopoDS_Shape^ S) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopOpeBRepBuild_Loop(new TopOpeBRepBuild_Loop(*((TopoDS_Shape*)S->Handle)));
}

OCTopOpeBRepBuild_Loop::OCTopOpeBRepBuild_Loop(OCNaroWrappers::OCTopOpeBRepBuild_BlockIterator^ BI) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopOpeBRepBuild_Loop(new TopOpeBRepBuild_Loop(*((TopOpeBRepBuild_BlockIterator*)BI->Handle)));
}

 System::Boolean OCTopOpeBRepBuild_Loop::IsShape()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TopOpeBRepBuild_Loop*)nativeHandle))->IsShape());
}

OCTopoDS_Shape^ OCTopOpeBRepBuild_Loop::Shape()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_TopOpeBRepBuild_Loop*)nativeHandle))->Shape();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopOpeBRepBuild_BlockIterator^ OCTopOpeBRepBuild_Loop::BlockIterator()
{
  TopOpeBRepBuild_BlockIterator* tmp = new TopOpeBRepBuild_BlockIterator();
  *tmp = (*((Handle_TopOpeBRepBuild_Loop*)nativeHandle))->BlockIterator();
  return gcnew OCTopOpeBRepBuild_BlockIterator(tmp);
}

 void OCTopOpeBRepBuild_Loop::Dump()
{
  (*((Handle_TopOpeBRepBuild_Loop*)nativeHandle))->Dump();
}

