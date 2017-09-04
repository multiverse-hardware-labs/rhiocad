// File generated by CPPExt (CPP file)
//

#include "Message_SequenceOfPrinters.h"
#include "../Converter.h"
#include "Message_Printer.h"
#include "Message_SequenceNodeOfSequenceOfPrinters.h"


using namespace OCNaroWrappers;

OCMessage_SequenceOfPrinters::OCMessage_SequenceOfPrinters(Message_SequenceOfPrinters* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCMessage_SequenceOfPrinters::OCMessage_SequenceOfPrinters() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new Message_SequenceOfPrinters();
}

OCMessage_SequenceOfPrinters^ OCMessage_SequenceOfPrinters::Assign(OCNaroWrappers::OCMessage_SequenceOfPrinters^ Other)
{
  Message_SequenceOfPrinters* tmp = new Message_SequenceOfPrinters();
  *tmp = ((Message_SequenceOfPrinters*)nativeHandle)->Assign(*((Message_SequenceOfPrinters*)Other->Handle));
  return gcnew OCMessage_SequenceOfPrinters(tmp);
}

 void OCMessage_SequenceOfPrinters::Append(OCNaroWrappers::OCMessage_Printer^ T)
{
  ((Message_SequenceOfPrinters*)nativeHandle)->Append(*((Handle_Message_Printer*)T->Handle));
}

 void OCMessage_SequenceOfPrinters::Append(OCNaroWrappers::OCMessage_SequenceOfPrinters^ S)
{
  ((Message_SequenceOfPrinters*)nativeHandle)->Append(*((Message_SequenceOfPrinters*)S->Handle));
}

 void OCMessage_SequenceOfPrinters::Prepend(OCNaroWrappers::OCMessage_Printer^ T)
{
  ((Message_SequenceOfPrinters*)nativeHandle)->Prepend(*((Handle_Message_Printer*)T->Handle));
}

 void OCMessage_SequenceOfPrinters::Prepend(OCNaroWrappers::OCMessage_SequenceOfPrinters^ S)
{
  ((Message_SequenceOfPrinters*)nativeHandle)->Prepend(*((Message_SequenceOfPrinters*)S->Handle));
}

 void OCMessage_SequenceOfPrinters::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCMessage_Printer^ T)
{
  ((Message_SequenceOfPrinters*)nativeHandle)->InsertBefore(Index, *((Handle_Message_Printer*)T->Handle));
}

 void OCMessage_SequenceOfPrinters::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCMessage_SequenceOfPrinters^ S)
{
  ((Message_SequenceOfPrinters*)nativeHandle)->InsertBefore(Index, *((Message_SequenceOfPrinters*)S->Handle));
}

 void OCMessage_SequenceOfPrinters::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCMessage_Printer^ T)
{
  ((Message_SequenceOfPrinters*)nativeHandle)->InsertAfter(Index, *((Handle_Message_Printer*)T->Handle));
}

 void OCMessage_SequenceOfPrinters::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCMessage_SequenceOfPrinters^ S)
{
  ((Message_SequenceOfPrinters*)nativeHandle)->InsertAfter(Index, *((Message_SequenceOfPrinters*)S->Handle));
}

OCMessage_Printer^ OCMessage_SequenceOfPrinters::First()
{
  Handle(Message_Printer) tmp = ((Message_SequenceOfPrinters*)nativeHandle)->First();
  return gcnew OCMessage_Printer(&tmp);
}

OCMessage_Printer^ OCMessage_SequenceOfPrinters::Last()
{
  Handle(Message_Printer) tmp = ((Message_SequenceOfPrinters*)nativeHandle)->Last();
  return gcnew OCMessage_Printer(&tmp);
}

 void OCMessage_SequenceOfPrinters::Split(Standard_Integer Index, OCNaroWrappers::OCMessage_SequenceOfPrinters^ Sub)
{
  ((Message_SequenceOfPrinters*)nativeHandle)->Split(Index, *((Message_SequenceOfPrinters*)Sub->Handle));
}

OCMessage_Printer^ OCMessage_SequenceOfPrinters::Value(Standard_Integer Index)
{
  Handle(Message_Printer) tmp = ((Message_SequenceOfPrinters*)nativeHandle)->Value(Index);
  return gcnew OCMessage_Printer(&tmp);
}

 void OCMessage_SequenceOfPrinters::SetValue(Standard_Integer Index, OCNaroWrappers::OCMessage_Printer^ I)
{
  ((Message_SequenceOfPrinters*)nativeHandle)->SetValue(Index, *((Handle_Message_Printer*)I->Handle));
}

OCMessage_Printer^ OCMessage_SequenceOfPrinters::ChangeValue(Standard_Integer Index)
{
  Handle(Message_Printer) tmp = ((Message_SequenceOfPrinters*)nativeHandle)->ChangeValue(Index);
  return gcnew OCMessage_Printer(&tmp);
}

 void OCMessage_SequenceOfPrinters::Remove(Standard_Integer Index)
{
  ((Message_SequenceOfPrinters*)nativeHandle)->Remove(Index);
}

 void OCMessage_SequenceOfPrinters::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((Message_SequenceOfPrinters*)nativeHandle)->Remove(FromIndex, ToIndex);
}

