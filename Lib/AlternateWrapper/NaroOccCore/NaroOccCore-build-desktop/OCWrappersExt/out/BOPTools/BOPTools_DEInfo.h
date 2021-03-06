// File generated by CPPExt (MPV)
//
#ifndef _BOPTools_DEInfo_OCWrappers_HeaderFile
#define _BOPTools_DEInfo_OCWrappers_HeaderFile

// include native header
#include <BOPTools_DEInfo.hxx>
#include "../Converter.h"


#include "../TColStd/TColStd_ListOfInteger.h"


namespace OCNaroWrappers
{

ref class OCTColStd_ListOfInteger;



//!  Auxiliary class for storing  information about <br>
//! a degenerated edge <br>
//! <br>
public ref class OCBOPTools_DEInfo  {

protected:
  BOPTools_DEInfo* nativeHandle;
  OCBOPTools_DEInfo(OCDummy^) {};

public:
  property BOPTools_DEInfo* Handle
  {
    BOPTools_DEInfo* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBOPTools_DEInfo(BOPTools_DEInfo* nativeHandle);

// Methods PUBLIC


//! Empty constructor <br>
OCBOPTools_DEInfo();


//! Modifier <br>
//! Sets  DS-index for the vertex to which <br>
//! degenerated edge belongs to <br>
 /*instead*/  void SetVertex(Standard_Integer nV) ;


//! Modifier <br>
//! Sets  DS-indices for the faces to which <br>
//! degenerated edge belongs to <br>
 /*instead*/  void SetFaces(OCNaroWrappers::OCTColStd_ListOfInteger^ aLF) ;


//! Selector <br>
 /*instead*/  OCTColStd_ListOfInteger^ Faces() ;


//! Selector/Modifier <br>
 /*instead*/  OCTColStd_ListOfInteger^ ChangeFaces() ;


//! Selector <br>
 /*instead*/  Standard_Integer Vertex() ;

~OCBOPTools_DEInfo()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
