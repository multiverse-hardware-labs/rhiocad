// File generated by CPPExt (MPV)
//
#ifndef _TopTools_DataMapOfShapeSequenceOfShape_OCWrappers_HeaderFile
#define _TopTools_DataMapOfShapeSequenceOfShape_OCWrappers_HeaderFile

// include native header
#include <TopTools_DataMapOfShapeSequenceOfShape.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_SequenceOfShape;
ref class OCTopTools_ShapeMapHasher;
ref class OCTopTools_DataMapNodeOfDataMapOfShapeSequenceOfShape;
ref class OCTopTools_DataMapIteratorOfDataMapOfShapeSequenceOfShape;



public ref class OCTopTools_DataMapOfShapeSequenceOfShape  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCTopTools_DataMapOfShapeSequenceOfShape(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopTools_DataMapOfShapeSequenceOfShape(TopTools_DataMapOfShapeSequenceOfShape* nativeHandle);

// Methods PUBLIC


OCTopTools_DataMapOfShapeSequenceOfShape(Standard_Integer NbBuckets);


 /*instead*/  OCTopTools_DataMapOfShapeSequenceOfShape^ Assign(OCNaroWrappers::OCTopTools_DataMapOfShapeSequenceOfShape^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCTopTools_SequenceOfShape^ I) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  System::Boolean UnBind(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCTopTools_SequenceOfShape^ Find(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCTopTools_SequenceOfShape^ ChangeFind(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address Find1(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address ChangeFind1(OCNaroWrappers::OCTopoDS_Shape^ K) ;

~OCTopTools_DataMapOfShapeSequenceOfShape()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif