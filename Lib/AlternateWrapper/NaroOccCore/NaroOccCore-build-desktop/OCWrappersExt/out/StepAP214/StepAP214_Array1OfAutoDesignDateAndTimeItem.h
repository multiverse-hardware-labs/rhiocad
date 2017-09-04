// File generated by CPPExt (MPV)
//
#ifndef _StepAP214_Array1OfAutoDesignDateAndTimeItem_OCWrappers_HeaderFile
#define _StepAP214_Array1OfAutoDesignDateAndTimeItem_OCWrappers_HeaderFile

// include native header
#include <StepAP214_Array1OfAutoDesignDateAndTimeItem.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCStepAP214_AutoDesignDateAndTimeItem;



public ref class OCStepAP214_Array1OfAutoDesignDateAndTimeItem  {

protected:
  StepAP214_Array1OfAutoDesignDateAndTimeItem* nativeHandle;
  OCStepAP214_Array1OfAutoDesignDateAndTimeItem(OCDummy^) {};

public:
  property StepAP214_Array1OfAutoDesignDateAndTimeItem* Handle
  {
    StepAP214_Array1OfAutoDesignDateAndTimeItem* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStepAP214_Array1OfAutoDesignDateAndTimeItem(StepAP214_Array1OfAutoDesignDateAndTimeItem* nativeHandle);

// Methods PUBLIC


OCStepAP214_Array1OfAutoDesignDateAndTimeItem(Standard_Integer Low, Standard_Integer Up);


OCStepAP214_Array1OfAutoDesignDateAndTimeItem(OCNaroWrappers::OCStepAP214_AutoDesignDateAndTimeItem^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCStepAP214_AutoDesignDateAndTimeItem^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCStepAP214_Array1OfAutoDesignDateAndTimeItem^ Assign(OCNaroWrappers::OCStepAP214_Array1OfAutoDesignDateAndTimeItem^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepAP214_AutoDesignDateAndTimeItem^ Value) ;


 /*instead*/  OCStepAP214_AutoDesignDateAndTimeItem^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepAP214_AutoDesignDateAndTimeItem^ ChangeValue(Standard_Integer Index) ;

~OCStepAP214_Array1OfAutoDesignDateAndTimeItem()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif