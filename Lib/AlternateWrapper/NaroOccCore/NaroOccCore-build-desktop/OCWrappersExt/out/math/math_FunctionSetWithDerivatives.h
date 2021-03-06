// File generated by CPPExt (MPV)
//
#ifndef _math_FunctionSetWithDerivatives_OCWrappers_HeaderFile
#define _math_FunctionSetWithDerivatives_OCWrappers_HeaderFile

// include native header
#include <math_FunctionSetWithDerivatives.hxx>
#include "../Converter.h"

#include "math_FunctionSet.h"

#include "math_FunctionSet.h"


namespace OCNaroWrappers
{

ref class OCmath_Vector;
ref class OCmath_Matrix;


//! This abstract class describes the virtual functions associated <br>
//!          with a set of N Functions each of M independant variables. <br>
public ref class OCmath_FunctionSetWithDerivatives  : public OCmath_FunctionSet {

protected:
  // dummy constructor;
  OCmath_FunctionSetWithDerivatives(OCDummy^) : OCmath_FunctionSet((OCDummy^)nullptr) {};

public:

// constructor from native
OCmath_FunctionSetWithDerivatives(math_FunctionSetWithDerivatives* nativeHandle);

// Methods PUBLIC

~OCmath_FunctionSetWithDerivatives()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
