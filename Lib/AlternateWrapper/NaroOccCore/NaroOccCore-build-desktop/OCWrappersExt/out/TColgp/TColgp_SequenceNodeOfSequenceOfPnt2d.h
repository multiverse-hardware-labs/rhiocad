// File generated by CPPExt (Transient)
//
#ifndef _TColgp_SequenceNodeOfSequenceOfPnt2d_OCWrappers_HeaderFile
#define _TColgp_SequenceNodeOfSequenceOfPnt2d_OCWrappers_HeaderFile

// include the wrapped class
#include <TColgp_SequenceNodeOfSequenceOfPnt2d.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"

#include "../gp/gp_Pnt2d.h"


namespace OCNaroWrappers
{

ref class OCgp_Pnt2d;
ref class OCTColgp_SequenceOfPnt2d;



public ref class OCTColgp_SequenceNodeOfSequenceOfPnt2d : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCTColgp_SequenceNodeOfSequenceOfPnt2d(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColgp_SequenceNodeOfSequenceOfPnt2d(Handle(TColgp_SequenceNodeOfSequenceOfPnt2d)* nativeHandle);

// Methods PUBLIC


OCTColgp_SequenceNodeOfSequenceOfPnt2d(OCNaroWrappers::OCgp_Pnt2d^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCgp_Pnt2d^ Value() ;

~OCTColgp_SequenceNodeOfSequenceOfPnt2d()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
