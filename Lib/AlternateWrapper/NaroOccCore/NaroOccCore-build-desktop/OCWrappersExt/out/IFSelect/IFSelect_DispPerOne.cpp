// File generated by CPPExt (CPP file)
//

#include "IFSelect_DispPerOne.h"
#include "../Converter.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "../Interface/Interface_Graph.h"


using namespace OCNaroWrappers;

OCIFSelect_DispPerOne::OCIFSelect_DispPerOne(Handle(IFSelect_DispPerOne)* nativeHandle) : OCIFSelect_Dispatch((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_IFSelect_DispPerOne(*nativeHandle);
}

OCIFSelect_DispPerOne::OCIFSelect_DispPerOne() : OCIFSelect_Dispatch((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IFSelect_DispPerOne(new IFSelect_DispPerOne());
}

OCTCollection_AsciiString^ OCIFSelect_DispPerOne::Label()
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = (*((Handle_IFSelect_DispPerOne*)nativeHandle))->Label();
  return gcnew OCTCollection_AsciiString(tmp);
}

 System::Boolean OCIFSelect_DispPerOne::LimitedMax(Standard_Integer nbent, Standard_Integer& max)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IFSelect_DispPerOne*)nativeHandle))->LimitedMax(nbent, max));
}

 System::Boolean OCIFSelect_DispPerOne::PacketsCount(OCNaroWrappers::OCInterface_Graph^ G, Standard_Integer& count)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IFSelect_DispPerOne*)nativeHandle))->PacketsCount(*((Interface_Graph*)G->Handle), count));
}

 void OCIFSelect_DispPerOne::Packets(OCNaroWrappers::OCInterface_Graph^ G, )
{
  (*((Handle_IFSelect_DispPerOne*)nativeHandle))->Packets(*((Interface_Graph*)G->Handle), );
}


