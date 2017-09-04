// File generated by CPPExt (CPP file)
//

#include "MAT_ListOfBisector.h"
#include "../Converter.h"
#include "MAT_TListNodeOfListOfBisector.h"
#include "MAT_Bisector.h"


using namespace OCNaroWrappers;

OCMAT_ListOfBisector::OCMAT_ListOfBisector(Handle(MAT_ListOfBisector)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_MAT_ListOfBisector(*nativeHandle);
}

OCMAT_ListOfBisector::OCMAT_ListOfBisector() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_MAT_ListOfBisector(new MAT_ListOfBisector());
}

 void OCMAT_ListOfBisector::First()
{
  (*((Handle_MAT_ListOfBisector*)nativeHandle))->First();
}

 void OCMAT_ListOfBisector::Last()
{
  (*((Handle_MAT_ListOfBisector*)nativeHandle))->Last();
}

 void OCMAT_ListOfBisector::Init(OCNaroWrappers::OCMAT_Bisector^ aniten)
{
  (*((Handle_MAT_ListOfBisector*)nativeHandle))->Init(*((Handle_MAT_Bisector*)aniten->Handle));
}

 void OCMAT_ListOfBisector::Next()
{
  (*((Handle_MAT_ListOfBisector*)nativeHandle))->Next();
}

 void OCMAT_ListOfBisector::Previous()
{
  (*((Handle_MAT_ListOfBisector*)nativeHandle))->Previous();
}

 System::Boolean OCMAT_ListOfBisector::More()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MAT_ListOfBisector*)nativeHandle))->More());
}

OCMAT_Bisector^ OCMAT_ListOfBisector::Current()
{
  Handle(MAT_Bisector) tmp = (*((Handle_MAT_ListOfBisector*)nativeHandle))->Current();
  return gcnew OCMAT_Bisector(&tmp);
}

 void OCMAT_ListOfBisector::Current(OCNaroWrappers::OCMAT_Bisector^ anitem)
{
  (*((Handle_MAT_ListOfBisector*)nativeHandle))->Current(*((Handle_MAT_Bisector*)anitem->Handle));
}

OCMAT_Bisector^ OCMAT_ListOfBisector::FirstItem()
{
  Handle(MAT_Bisector) tmp = (*((Handle_MAT_ListOfBisector*)nativeHandle))->FirstItem();
  return gcnew OCMAT_Bisector(&tmp);
}

OCMAT_Bisector^ OCMAT_ListOfBisector::LastItem()
{
  Handle(MAT_Bisector) tmp = (*((Handle_MAT_ListOfBisector*)nativeHandle))->LastItem();
  return gcnew OCMAT_Bisector(&tmp);
}

OCMAT_Bisector^ OCMAT_ListOfBisector::PreviousItem()
{
  Handle(MAT_Bisector) tmp = (*((Handle_MAT_ListOfBisector*)nativeHandle))->PreviousItem();
  return gcnew OCMAT_Bisector(&tmp);
}

OCMAT_Bisector^ OCMAT_ListOfBisector::NextItem()
{
  Handle(MAT_Bisector) tmp = (*((Handle_MAT_ListOfBisector*)nativeHandle))->NextItem();
  return gcnew OCMAT_Bisector(&tmp);
}

 Standard_Integer OCMAT_ListOfBisector::Number()
{
  return (*((Handle_MAT_ListOfBisector*)nativeHandle))->Number();
}

 Standard_Integer OCMAT_ListOfBisector::Index()
{
  return (*((Handle_MAT_ListOfBisector*)nativeHandle))->Index();
}

OCMAT_Bisector^ OCMAT_ListOfBisector::Brackets(Standard_Integer anindex)
{
  Handle(MAT_Bisector) tmp = (*((Handle_MAT_ListOfBisector*)nativeHandle))->Brackets(anindex);
  return gcnew OCMAT_Bisector(&tmp);
}

 void OCMAT_ListOfBisector::Unlink()
{
  (*((Handle_MAT_ListOfBisector*)nativeHandle))->Unlink();
}

 void OCMAT_ListOfBisector::LinkBefore(OCNaroWrappers::OCMAT_Bisector^ anitem)
{
  (*((Handle_MAT_ListOfBisector*)nativeHandle))->LinkBefore(*((Handle_MAT_Bisector*)anitem->Handle));
}

 void OCMAT_ListOfBisector::LinkAfter(OCNaroWrappers::OCMAT_Bisector^ anitem)
{
  (*((Handle_MAT_ListOfBisector*)nativeHandle))->LinkAfter(*((Handle_MAT_Bisector*)anitem->Handle));
}

 void OCMAT_ListOfBisector::FrontAdd(OCNaroWrappers::OCMAT_Bisector^ anitem)
{
  (*((Handle_MAT_ListOfBisector*)nativeHandle))->FrontAdd(*((Handle_MAT_Bisector*)anitem->Handle));
}

 void OCMAT_ListOfBisector::BackAdd(OCNaroWrappers::OCMAT_Bisector^ anitem)
{
  (*((Handle_MAT_ListOfBisector*)nativeHandle))->BackAdd(*((Handle_MAT_Bisector*)anitem->Handle));
}

 void OCMAT_ListOfBisector::Permute()
{
  (*((Handle_MAT_ListOfBisector*)nativeHandle))->Permute();
}

 void OCMAT_ListOfBisector::Loop()
{
  (*((Handle_MAT_ListOfBisector*)nativeHandle))->Loop();
}

 System::Boolean OCMAT_ListOfBisector::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MAT_ListOfBisector*)nativeHandle))->IsEmpty());
}

 void OCMAT_ListOfBisector::Dump(Standard_Integer ashift, Standard_Integer alevel)
{
  (*((Handle_MAT_ListOfBisector*)nativeHandle))->Dump(ashift, alevel);
}

