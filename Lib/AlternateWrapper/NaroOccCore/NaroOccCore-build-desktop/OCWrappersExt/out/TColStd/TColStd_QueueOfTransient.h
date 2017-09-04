// File generated by CPPExt (MPV)
//
#ifndef _TColStd_QueueOfTransient_OCWrappers_HeaderFile
#define _TColStd_QueueOfTransient_OCWrappers_HeaderFile

// include native header
#include <TColStd_QueueOfTransient.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCTColStd_QueueNodeOfQueueOfTransient;



public ref class OCTColStd_QueueOfTransient  {

protected:
  TColStd_QueueOfTransient* nativeHandle;
  OCTColStd_QueueOfTransient(OCDummy^) {};

public:
  property TColStd_QueueOfTransient* Handle
  {
    TColStd_QueueOfTransient* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTColStd_QueueOfTransient(TColStd_QueueOfTransient* nativeHandle);

// Methods PUBLIC


OCTColStd_QueueOfTransient();


 /*instead*/  OCTColStd_QueueOfTransient^ Assign(OCNaroWrappers::OCTColStd_QueueOfTransient^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  OCStandard_Transient^ Front() ;


 /*instead*/  void Push(OCNaroWrappers::OCStandard_Transient^ T) ;


 /*instead*/  void Pop() ;


 /*instead*/  OCStandard_Transient^ ChangeFront() ;

~OCTColStd_QueueOfTransient()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif