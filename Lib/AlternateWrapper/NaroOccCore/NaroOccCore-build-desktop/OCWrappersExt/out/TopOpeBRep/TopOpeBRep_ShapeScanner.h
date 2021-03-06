// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRep_ShapeScanner_OCWrappers_HeaderFile
#define _TopOpeBRep_ShapeScanner_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRep_ShapeScanner.hxx>
#include "../Converter.h"


#include "../TopOpeBRepTool/TopOpeBRepTool_BoxSort.h"
#include "../TColStd/TColStd_ListIteratorOfListOfInteger.h"
#include "../TopAbs/TopAbs_ShapeEnum.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopOpeBRepTool_ShapeExplorer;
ref class OCTopOpeBRepTool_BoxSort;


//! Find, among the  subshapes SS of a reference shape <br>
//!          RS, the ones which 3D box interfers with the box of <br>
//!          a shape S (SS and S are of the same type). <br>
public ref class OCTopOpeBRep_ShapeScanner  {

protected:
  TopOpeBRep_ShapeScanner* nativeHandle;
  OCTopOpeBRep_ShapeScanner(OCDummy^) {};

public:
  property TopOpeBRep_ShapeScanner* Handle
  {
    TopOpeBRep_ShapeScanner* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopOpeBRep_ShapeScanner(TopOpeBRep_ShapeScanner* nativeHandle);

// Methods PUBLIC


OCTopOpeBRep_ShapeScanner();


 /*instead*/  void Clear() ;


 /*instead*/  void AddBoxesMakeCOB(OCNaroWrappers::OCTopoDS_Shape^ S, OCTopAbs_ShapeEnum TS, OCTopAbs_ShapeEnum TA) ;


 /*instead*/  void Init(OCNaroWrappers::OCTopoDS_Shape^ E) ;


 /*instead*/  void Init(OCNaroWrappers::OCTopOpeBRepTool_ShapeExplorer^ X) ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  OCTopoDS_Shape^ Current() ;


 /*instead*/  OCTopOpeBRepTool_BoxSort^ BoxSort() ;


 /*instead*/  OCTopOpeBRepTool_BoxSort^ ChangeBoxSort() ;


 /*instead*/  Standard_Integer Index() ;


 /*instead*/  Standard_OStream& DumpCurrent(Standard_OStream& OS) ;

~OCTopOpeBRep_ShapeScanner()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
