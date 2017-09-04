// File generated by CPPExt (Transient)
//
#ifndef _AdvApp2Var_SequenceNodeOfStrip_OCWrappers_HeaderFile
#define _AdvApp2Var_SequenceNodeOfStrip_OCWrappers_HeaderFile

// include the wrapped class
#include <AdvApp2Var_SequenceNodeOfStrip.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"

#include "AdvApp2Var_Iso.h"


namespace OCNaroWrappers
{

ref class OCAdvApp2Var_Iso;
ref class OCAdvApp2Var_Strip;



public ref class OCAdvApp2Var_SequenceNodeOfStrip : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCAdvApp2Var_SequenceNodeOfStrip(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCAdvApp2Var_SequenceNodeOfStrip(Handle(AdvApp2Var_SequenceNodeOfStrip)* nativeHandle);

// Methods PUBLIC


OCAdvApp2Var_SequenceNodeOfStrip(OCNaroWrappers::OCAdvApp2Var_Iso^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCAdvApp2Var_Iso^ Value() ;

~OCAdvApp2Var_SequenceNodeOfStrip()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif