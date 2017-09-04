// File generated by CPPExt (Transient)
//
#ifndef _PlotMgt_SequenceNodeOfListOfPlotterParameter_OCWrappers_HeaderFile
#define _PlotMgt_SequenceNodeOfListOfPlotterParameter_OCWrappers_HeaderFile

// include the wrapped class
#include <PlotMgt_SequenceNodeOfListOfPlotterParameter.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"



namespace OCNaroWrappers
{

ref class OCPlotMgt_PlotterParameter;
ref class OCPlotMgt_ListOfPlotterParameter;



public ref class OCPlotMgt_SequenceNodeOfListOfPlotterParameter : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCPlotMgt_SequenceNodeOfListOfPlotterParameter(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCPlotMgt_SequenceNodeOfListOfPlotterParameter(Handle(PlotMgt_SequenceNodeOfListOfPlotterParameter)* nativeHandle);

// Methods PUBLIC


OCPlotMgt_SequenceNodeOfListOfPlotterParameter(OCNaroWrappers::OCPlotMgt_PlotterParameter^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCPlotMgt_PlotterParameter^ Value() ;

~OCPlotMgt_SequenceNodeOfListOfPlotterParameter()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif