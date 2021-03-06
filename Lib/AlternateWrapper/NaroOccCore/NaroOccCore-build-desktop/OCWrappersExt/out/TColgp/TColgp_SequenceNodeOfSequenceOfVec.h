// File generated by CPPExt (Transient)
//
#ifndef _TColgp_SequenceNodeOfSequenceOfVec_OCWrappers_HeaderFile
#define _TColgp_SequenceNodeOfSequenceOfVec_OCWrappers_HeaderFile

// include the wrapped class
#include <TColgp_SequenceNodeOfSequenceOfVec.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"

#include "../gp/gp_Vec.h"


namespace OCNaroWrappers
{

ref class OCgp_Vec;
ref class OCTColgp_SequenceOfVec;



public ref class OCTColgp_SequenceNodeOfSequenceOfVec : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCTColgp_SequenceNodeOfSequenceOfVec(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColgp_SequenceNodeOfSequenceOfVec(Handle(TColgp_SequenceNodeOfSequenceOfVec)* nativeHandle);

// Methods PUBLIC


OCTColgp_SequenceNodeOfSequenceOfVec(OCNaroWrappers::OCgp_Vec^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCgp_Vec^ Value() ;

~OCTColgp_SequenceNodeOfSequenceOfVec()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
