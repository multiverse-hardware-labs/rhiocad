// File generated by CPPExt (MPV)
//
#ifndef _Draft_DataMapOfVertexVertexInfo_OCWrappers_HeaderFile
#define _Draft_DataMapOfVertexVertexInfo_OCWrappers_HeaderFile

// include native header
#include <Draft_DataMapOfVertexVertexInfo.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Vertex;
ref class OCDraft_VertexInfo;
ref class OCTopTools_ShapeMapHasher;
ref class OCDraft_DataMapNodeOfDataMapOfVertexVertexInfo;
ref class OCDraft_DataMapIteratorOfDataMapOfVertexVertexInfo;



public ref class OCDraft_DataMapOfVertexVertexInfo  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCDraft_DataMapOfVertexVertexInfo(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCDraft_DataMapOfVertexVertexInfo(Draft_DataMapOfVertexVertexInfo* nativeHandle);

// Methods PUBLIC


OCDraft_DataMapOfVertexVertexInfo(Standard_Integer NbBuckets);


 /*instead*/  OCDraft_DataMapOfVertexVertexInfo^ Assign(OCNaroWrappers::OCDraft_DataMapOfVertexVertexInfo^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(OCNaroWrappers::OCTopoDS_Vertex^ K, OCNaroWrappers::OCDraft_VertexInfo^ I) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCTopoDS_Vertex^ K) ;


 /*instead*/  System::Boolean UnBind(OCNaroWrappers::OCTopoDS_Vertex^ K) ;


 /*instead*/  OCDraft_VertexInfo^ Find(OCNaroWrappers::OCTopoDS_Vertex^ K) ;


 /*instead*/  OCDraft_VertexInfo^ ChangeFind(OCNaroWrappers::OCTopoDS_Vertex^ K) ;


 /*instead*/  Standard_Address Find1(OCNaroWrappers::OCTopoDS_Vertex^ K) ;


 /*instead*/  Standard_Address ChangeFind1(OCNaroWrappers::OCTopoDS_Vertex^ K) ;

~OCDraft_DataMapOfVertexVertexInfo()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
