// File generated by CPPExt (MPV)
//
#ifndef _Standard_Transient_OCWrappers_HeaderFile
#define _Standard_Transient_OCWrappers_HeaderFile

// include native header
#include <Standard_Transient.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCStandard_Type;


//! Abstract class which forms the root of the entire <br>
//!          Transient class hierarchy. <br>
public ref class OCStandard_Transient  {

protected:
  Handle(Standard_Transient)* nativeHandle;
  OCStandard_Transient(OCDummy^) {};

public:
  property Handle(Standard_Transient)* Handle
  {
    Handle(Standard_Transient)* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStandard_Transient(Handle(Standard_Transient)* nativeHandle);

// Methods PUBLIC

//! Empty constructor <br>
OCStandard_Transient();

//! Returns a hashed value denoting <me>. This value is in <br>
//!         the range 1..<Upper>. <br>
virtual /*instead*/  Standard_Integer HashCode(Standard_Integer Upper) ;

//! Memory deallocator for transient classes <br>
virtual /*instead*/  void Delete() ;

//! Returns a type information object about this object. <br>
virtual /*instead*/  OCStandard_Type^ DynamicType() ;

//! Returns a true value if this is an instance of Type. <br>
 /*instead*/  System::Boolean IsInstance(OCNaroWrappers::OCStandard_Type^ TheType) ;

//! Returns a true value if this is an instance of TypeName. <br>
 /*instead*/  System::Boolean IsInstance(System::String^ TheTypeName) ;

//! Returns true if this is an instance of Type or an <br>
//!          instance of any class that inherits from Type. <br>
//!          Note that multiple inheritance is not supported by OCCT RTTI mechanism. <br>
 /*instead*/  System::Boolean IsKind(OCNaroWrappers::OCStandard_Type^ TheType) ;

//! Returns true if this is an instance of TypeName or an <br>
//!         instance of any class that inherits from TypeName. <br>
//!          Note that multiple inheritance is not supported by OCCT RTTI mechanism. <br>
 /*instead*/  System::Boolean IsKind(System::String^ TheTypeName) ;

//! get the reference counter <br>
//!          of this object. <br>
 /*instead*/  Standard_Integer GetRefCount() ;

~OCStandard_Transient()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
