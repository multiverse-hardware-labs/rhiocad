// File generated by CPPExt (MPV)
//
#ifndef _BOPTools_PaveBlockIterator_OCWrappers_HeaderFile
#define _BOPTools_PaveBlockIterator_OCWrappers_HeaderFile

// include native header
#include <BOPTools_PaveBlockIterator.hxx>
#include "../Converter.h"


#include "BOPTools_PaveSet.h"
#include "BOPTools_CArray1OfPave.h"
#include "BOPTools_PaveBlock.h"


namespace OCNaroWrappers
{

ref class OCBOPTools_PaveSet;
ref class OCBOPTools_PaveBlock;



//!         class providing iterations for PaveSet to <br>
//!         have the right order of paves along the edge <br>
//! <br>
public ref class OCBOPTools_PaveBlockIterator  {

protected:
  BOPTools_PaveBlockIterator* nativeHandle;
  OCBOPTools_PaveBlockIterator(OCDummy^) {};

public:
  property BOPTools_PaveBlockIterator* Handle
  {
    BOPTools_PaveBlockIterator* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBOPTools_PaveBlockIterator(BOPTools_PaveBlockIterator* nativeHandle);

// Methods PUBLIC


//! Empty constructor <br>
OCBOPTools_PaveBlockIterator();


//! Constructor <br>
//! aEdge     -   DS-index of the edge <br>
//! aPaveSet  -   a set of paves for the edge <br>
OCBOPTools_PaveBlockIterator(Standard_Integer aEdge, OCNaroWrappers::OCBOPTools_PaveSet^ aPaveSet);


//! Resets the iterator on the PaveSet <aPaveSet> <br>
 /*instead*/  void Initialize(Standard_Integer aEdge, OCNaroWrappers::OCBOPTools_PaveSet^ aPaveSet) ;


//! Returns True if there is a current Pave in <br>
//! the iteration. <br>
 /*instead*/  System::Boolean More() ;


//! Moves to the next Pave in the PaveSet <br>
 /*instead*/  void Next() ;


//! Returns the current Pave <br>
 /*instead*/  OCBOPTools_PaveBlock^ Value() ;

~OCBOPTools_PaveBlockIterator()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
