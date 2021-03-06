// File generated by CPPExt (Transient)
//
#ifndef _IFSelect_HSeqOfSelection_OCWrappers_HeaderFile
#define _IFSelect_HSeqOfSelection_OCWrappers_HeaderFile

// include the wrapped class
#include <IFSelect_HSeqOfSelection.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "IFSelect_TSeqOfSelection.h"


namespace OCNaroWrappers
{

ref class OCIFSelect_Selection;
ref class OCIFSelect_TSeqOfSelection;



public ref class OCIFSelect_HSeqOfSelection : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCIFSelect_HSeqOfSelection(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCIFSelect_HSeqOfSelection(Handle(IFSelect_HSeqOfSelection)* nativeHandle);

// Methods PUBLIC


OCIFSelect_HSeqOfSelection();


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  void Clear() ;


 /*instead*/  void Append(OCNaroWrappers::OCIFSelect_Selection^ anItem) ;


 /*instead*/  void Append(OCNaroWrappers::OCIFSelect_HSeqOfSelection^ aSequence) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIFSelect_Selection^ anItem) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIFSelect_HSeqOfSelection^ aSequence) ;


 /*instead*/  void Reverse() ;


 /*instead*/  void InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCIFSelect_Selection^ anItem) ;


 /*instead*/  void InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCIFSelect_HSeqOfSelection^ aSequence) ;


 /*instead*/  void InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCIFSelect_Selection^ anItem) ;


 /*instead*/  void InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCIFSelect_HSeqOfSelection^ aSequence) ;


 /*instead*/  void Exchange(Standard_Integer anIndex, Standard_Integer anOtherIndex) ;


 /*instead*/  OCIFSelect_HSeqOfSelection^ Split(Standard_Integer anIndex) ;


 /*instead*/  void SetValue(Standard_Integer anIndex, OCNaroWrappers::OCIFSelect_Selection^ anItem) ;


 /*instead*/  OCIFSelect_Selection^ Value(Standard_Integer anIndex) ;


 /*instead*/  OCIFSelect_Selection^ ChangeValue(Standard_Integer anIndex) ;


 /*instead*/  void Remove(Standard_Integer anIndex) ;


 /*instead*/  void Remove(Standard_Integer fromIndex, Standard_Integer toIndex) ;


 /*instead*/  OCIFSelect_TSeqOfSelection^ Sequence() ;


 /*instead*/  OCIFSelect_TSeqOfSelection^ ChangeSequence() ;


 /*instead*/  OCIFSelect_HSeqOfSelection^ ShallowCopy() ;

~OCIFSelect_HSeqOfSelection()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
