// File generated by CPPExt (CPP file)
//

#include "TopTools.h"
#include "../Converter.h"


using namespace OCNaroWrappers;



 void OCTopTools::Dump(OCNaroWrappers::OCTopoDS_Shape^ Sh, Standard_OStream& S)
{
  TopTools::Dump(*((TopoDS_Shape*)Sh->Handle), S);
}

 void OCTopTools::Dummy(Standard_Integer I)
{
  TopTools::Dummy(I);
}


