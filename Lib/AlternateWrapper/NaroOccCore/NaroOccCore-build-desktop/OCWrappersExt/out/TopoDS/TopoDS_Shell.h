// File generated by CPPExt (MPV)
//
#ifndef _TopoDS_Shell_OCWrappers_HeaderFile
#define _TopoDS_Shell_OCWrappers_HeaderFile

// include native header
#include <TopoDS_Shell.hxx>
#include "../Converter.h"

#include "TopoDS_Shape.h"

#include "TopoDS_Shape.h"


namespace OCNaroWrappers
{



//! Describes a shell which <br>
//! - references an underlying shell with the potential to <br>
//!   be given a location and an orientation <br>
//! - has a location for the underlying shell, giving its <br>
//!   placement in the local coordinate system <br>
//! - has an orientation for the underlying shell, in terms <br>
//!   of its geometry (as opposed to orientation in relation to other shapes). <br>
public ref class OCTopoDS_Shell  : public OCTopoDS_Shape {

protected:
  // dummy constructor;
  OCTopoDS_Shell(OCDummy^) : OCTopoDS_Shape((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopoDS_Shell(TopoDS_Shell* nativeHandle);

// Methods PUBLIC

//! Constructs an Undefined Shell. <br>
OCTopoDS_Shell();

~OCTopoDS_Shell()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
