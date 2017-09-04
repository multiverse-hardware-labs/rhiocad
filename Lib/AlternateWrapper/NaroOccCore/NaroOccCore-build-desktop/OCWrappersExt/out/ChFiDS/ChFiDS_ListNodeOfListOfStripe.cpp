// File generated by CPPExt (CPP file)
//

#include "ChFiDS_ListNodeOfListOfStripe.h"
#include "../Converter.h"
#include "ChFiDS_Stripe.h"
#include "ChFiDS_ListOfStripe.h"
#include "ChFiDS_ListIteratorOfListOfStripe.h"


using namespace OCNaroWrappers;

OCChFiDS_ListNodeOfListOfStripe::OCChFiDS_ListNodeOfListOfStripe(Handle(ChFiDS_ListNodeOfListOfStripe)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_ChFiDS_ListNodeOfListOfStripe(*nativeHandle);
}

OCChFiDS_ListNodeOfListOfStripe::OCChFiDS_ListNodeOfListOfStripe(OCNaroWrappers::OCChFiDS_Stripe^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_ChFiDS_ListNodeOfListOfStripe(new ChFiDS_ListNodeOfListOfStripe(*((Handle_ChFiDS_Stripe*)I->Handle), n));
}

OCChFiDS_Stripe^ OCChFiDS_ListNodeOfListOfStripe::Value()
{
  Handle(ChFiDS_Stripe) tmp = (*((Handle_ChFiDS_ListNodeOfListOfStripe*)nativeHandle))->Value();
  return gcnew OCChFiDS_Stripe(&tmp);
}

