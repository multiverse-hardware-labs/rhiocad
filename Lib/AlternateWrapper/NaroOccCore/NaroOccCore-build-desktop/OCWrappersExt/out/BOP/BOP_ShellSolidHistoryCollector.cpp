// File generated by CPPExt (CPP file)
//

#include "BOP_ShellSolidHistoryCollector.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"


using namespace OCNaroWrappers;

OCBOP_ShellSolidHistoryCollector::OCBOP_ShellSolidHistoryCollector(Handle(BOP_ShellSolidHistoryCollector)* nativeHandle) : OCBOP_HistoryCollector((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BOP_ShellSolidHistoryCollector(*nativeHandle);
}

OCBOP_ShellSolidHistoryCollector::OCBOP_ShellSolidHistoryCollector(OCNaroWrappers::OCTopoDS_Shape^ theShape1, OCNaroWrappers::OCTopoDS_Shape^ theShape2, OCBOP_Operation theOperation) : OCBOP_HistoryCollector((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BOP_ShellSolidHistoryCollector(new BOP_ShellSolidHistoryCollector(*((TopoDS_Shape*)theShape1->Handle), *((TopoDS_Shape*)theShape2->Handle), (BOP_Operation)theOperation));
}

 void OCBOP_ShellSolidHistoryCollector::AddNewFace(OCNaroWrappers::OCTopoDS_Shape^ theOldShape, OCNaroWrappers::OCTopoDS_Shape^ theNewShape, BOPTools_PDSFiller theDSFiller)
{
  (*((Handle_BOP_ShellSolidHistoryCollector*)nativeHandle))->AddNewFace(*((TopoDS_Shape*)theOldShape->Handle), *((TopoDS_Shape*)theNewShape->Handle), theDSFiller);
}

 void OCBOP_ShellSolidHistoryCollector::SetResult(OCNaroWrappers::OCTopoDS_Shape^ theResult, BOPTools_PDSFiller theDSFiller)
{
  (*((Handle_BOP_ShellSolidHistoryCollector*)nativeHandle))->SetResult(*((TopoDS_Shape*)theResult->Handle), theDSFiller);
}

