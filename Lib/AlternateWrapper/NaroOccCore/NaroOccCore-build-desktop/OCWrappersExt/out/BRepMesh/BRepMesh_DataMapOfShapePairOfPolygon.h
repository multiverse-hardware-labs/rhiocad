// File generated by CPPExt (MPV)
//
#ifndef _BRepMesh_DataMapOfShapePairOfPolygon_OCWrappers_HeaderFile
#define _BRepMesh_DataMapOfShapePairOfPolygon_OCWrappers_HeaderFile

// include native header
#include <BRepMesh_DataMapOfShapePairOfPolygon.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCBRepMesh_PairOfPolygon;
ref class OCTopTools_ShapeMapHasher;
ref class OCBRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon;
ref class OCBRepMesh_DataMapIteratorOfDataMapOfShapePairOfPolygon;



public ref class OCBRepMesh_DataMapOfShapePairOfPolygon  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCBRepMesh_DataMapOfShapePairOfPolygon(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepMesh_DataMapOfShapePairOfPolygon(BRepMesh_DataMapOfShapePairOfPolygon* nativeHandle);

// Methods PUBLIC


OCBRepMesh_DataMapOfShapePairOfPolygon(Standard_Integer NbBuckets);


 /*instead*/  OCBRepMesh_DataMapOfShapePairOfPolygon^ Assign(OCNaroWrappers::OCBRepMesh_DataMapOfShapePairOfPolygon^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCBRepMesh_PairOfPolygon^ I) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  System::Boolean UnBind(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCBRepMesh_PairOfPolygon^ Find(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCBRepMesh_PairOfPolygon^ ChangeFind(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address Find1(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address ChangeFind1(OCNaroWrappers::OCTopoDS_Shape^ K) ;

~OCBRepMesh_DataMapOfShapePairOfPolygon()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif