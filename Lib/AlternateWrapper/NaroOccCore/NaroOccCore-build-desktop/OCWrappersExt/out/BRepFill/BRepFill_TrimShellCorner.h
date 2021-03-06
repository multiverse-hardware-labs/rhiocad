// File generated by CPPExt (MPV)
//
#ifndef _BRepFill_TrimShellCorner_OCWrappers_HeaderFile
#define _BRepFill_TrimShellCorner_OCWrappers_HeaderFile

// include native header
#include <BRepFill_TrimShellCorner.hxx>
#include "../Converter.h"


#include "../gp/gp_Ax2.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopoDS/TopoDS_Wire.h"
#include "../TopoDS/TopoDS_Face.h"
#include "../TopTools/TopTools_DataMapOfShapeListOfShape.h"


namespace OCNaroWrappers
{

ref class OCTopTools_HArray2OfShape;
ref class OCgp_Ax2;
ref class OCTopoDS_Face;
ref class OCTopoDS_Wire;
ref class OCTopoDS_Shape;
ref class OCTopTools_ListOfShape;



public ref class OCBRepFill_TrimShellCorner  {

protected:
  BRepFill_TrimShellCorner* nativeHandle;
  OCBRepFill_TrimShellCorner(OCDummy^) {};

public:
  property BRepFill_TrimShellCorner* Handle
  {
    BRepFill_TrimShellCorner* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepFill_TrimShellCorner(BRepFill_TrimShellCorner* nativeHandle);

// Methods PUBLIC


OCBRepFill_TrimShellCorner(OCNaroWrappers::OCTopTools_HArray2OfShape^ theFaces, OCNaroWrappers::OCgp_Ax2^ theAxeOfBisPlane, OCNaroWrappers::OCTopoDS_Face^ theSecPlane);


OCBRepFill_TrimShellCorner(OCNaroWrappers::OCTopTools_HArray2OfShape^ theFaces, OCNaroWrappers::OCgp_Ax2^ theAxeOfBisPlane, OCNaroWrappers::OCTopoDS_Wire^ theSpine, OCNaroWrappers::OCTopoDS_Face^ theSecPlane);


 /*instead*/  void SetSpine(OCNaroWrappers::OCTopoDS_Wire^ theSpine) ;


 /*instead*/  void AddBounds(OCNaroWrappers::OCTopTools_HArray2OfShape^ Bounds) ;


 /*instead*/  void AddUEdges(OCNaroWrappers::OCTopTools_HArray2OfShape^ theUEdges) ;


 /*instead*/  void Perform() ;


 /*instead*/  System::Boolean IsDone() ;


 /*instead*/  System::Boolean HasSection() ;


 /*instead*/  void Modified(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCTopTools_ListOfShape^ theModified) ;

~OCBRepFill_TrimShellCorner()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
