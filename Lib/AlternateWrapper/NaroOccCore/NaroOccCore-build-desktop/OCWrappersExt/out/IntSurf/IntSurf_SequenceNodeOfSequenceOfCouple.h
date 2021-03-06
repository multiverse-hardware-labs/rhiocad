// File generated by CPPExt (Transient)
//
#ifndef _IntSurf_SequenceNodeOfSequenceOfCouple_OCWrappers_HeaderFile
#define _IntSurf_SequenceNodeOfSequenceOfCouple_OCWrappers_HeaderFile

// include the wrapped class
#include <IntSurf_SequenceNodeOfSequenceOfCouple.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"

#include "IntSurf_Couple.h"


namespace OCNaroWrappers
{

ref class OCIntSurf_Couple;
ref class OCIntSurf_SequenceOfCouple;



public ref class OCIntSurf_SequenceNodeOfSequenceOfCouple : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCIntSurf_SequenceNodeOfSequenceOfCouple(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntSurf_SequenceNodeOfSequenceOfCouple(Handle(IntSurf_SequenceNodeOfSequenceOfCouple)* nativeHandle);

// Methods PUBLIC


OCIntSurf_SequenceNodeOfSequenceOfCouple(OCNaroWrappers::OCIntSurf_Couple^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCIntSurf_Couple^ Value() ;

~OCIntSurf_SequenceNodeOfSequenceOfCouple()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
