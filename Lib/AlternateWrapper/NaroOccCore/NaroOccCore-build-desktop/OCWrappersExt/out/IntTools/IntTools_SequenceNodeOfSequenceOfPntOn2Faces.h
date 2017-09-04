// File generated by CPPExt (Transient)
//
#ifndef _IntTools_SequenceNodeOfSequenceOfPntOn2Faces_OCWrappers_HeaderFile
#define _IntTools_SequenceNodeOfSequenceOfPntOn2Faces_OCWrappers_HeaderFile

// include the wrapped class
#include <IntTools_SequenceNodeOfSequenceOfPntOn2Faces.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"

#include "IntTools_PntOn2Faces.h"


namespace OCNaroWrappers
{

ref class OCIntTools_PntOn2Faces;
ref class OCIntTools_SequenceOfPntOn2Faces;



public ref class OCIntTools_SequenceNodeOfSequenceOfPntOn2Faces : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCIntTools_SequenceNodeOfSequenceOfPntOn2Faces(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntTools_SequenceNodeOfSequenceOfPntOn2Faces(Handle(IntTools_SequenceNodeOfSequenceOfPntOn2Faces)* nativeHandle);

// Methods PUBLIC


OCIntTools_SequenceNodeOfSequenceOfPntOn2Faces(OCNaroWrappers::OCIntTools_PntOn2Faces^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCIntTools_PntOn2Faces^ Value() ;

~OCIntTools_SequenceNodeOfSequenceOfPntOn2Faces()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif