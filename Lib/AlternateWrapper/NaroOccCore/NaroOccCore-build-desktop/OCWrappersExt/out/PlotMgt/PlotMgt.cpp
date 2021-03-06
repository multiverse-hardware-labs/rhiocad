// File generated by CPPExt (CPP file)
//

#include "PlotMgt.h"
#include "../Converter.h"


using namespace OCNaroWrappers;



OCTColStd_HSequenceOfAsciiString^ OCPlotMgt::DeviceList()
{
  Handle(TColStd_HSequenceOfAsciiString) tmp = PlotMgt::DeviceList();
  return gcnew OCTColStd_HSequenceOfAsciiString(&tmp);
}

 OCPlotMgt_TypeOfPlotterParameter OCPlotMgt::TypeFromString(OCNaroWrappers::OCTCollection_AsciiString^ aTypeString)
{
  return (OCPlotMgt_TypeOfPlotterParameter)(PlotMgt::TypeFromString(*((TCollection_AsciiString*)aTypeString->Handle)));
}

OCTCollection_AsciiString^ OCPlotMgt::StringFromType(OCPlotMgt_TypeOfPlotterParameter aType)
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = PlotMgt::StringFromType((PlotMgt_TypeOfPlotterParameter)aType);
  return gcnew OCTCollection_AsciiString(tmp);
}

 OCPlotMgt_TypeOfOrigin OCPlotMgt::OriginFromString(OCNaroWrappers::OCTCollection_AsciiString^ anOriginString)
{
  return (OCPlotMgt_TypeOfOrigin)(PlotMgt::OriginFromString(*((TCollection_AsciiString*)anOriginString->Handle)));
}

OCTCollection_AsciiString^ OCPlotMgt::StringFromOrigin(OCPlotMgt_TypeOfOrigin anOrigin)
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = PlotMgt::StringFromOrigin((PlotMgt_TypeOfOrigin)anOrigin);
  return gcnew OCTCollection_AsciiString(tmp);
}

 OCPlotMgt_TypeOfQuality OCPlotMgt::QualityFromString(OCNaroWrappers::OCTCollection_AsciiString^ aQualityString)
{
  return (OCPlotMgt_TypeOfQuality)(PlotMgt::QualityFromString(*((TCollection_AsciiString*)aQualityString->Handle)));
}

OCTCollection_AsciiString^ OCPlotMgt::StringFromQuality(OCPlotMgt_TypeOfQuality aQuality)
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = PlotMgt::StringFromQuality((PlotMgt_TypeOfQuality)aQuality);
  return gcnew OCTCollection_AsciiString(tmp);
}

 OCPlotMgt_ImageFormat OCPlotMgt::ImageFormatFromString(OCNaroWrappers::OCTCollection_AsciiString^ anImageFormatString)
{
  return (OCPlotMgt_ImageFormat)(PlotMgt::ImageFormatFromString(*((TCollection_AsciiString*)anImageFormatString->Handle)));
}

OCTCollection_AsciiString^ OCPlotMgt::StringFromImageFormat(OCPlotMgt_ImageFormat anImageFormat)
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = PlotMgt::StringFromImageFormat((PlotMgt_ImageFormat)anImageFormat);
  return gcnew OCTCollection_AsciiString(tmp);
}

 OCPlotMgt_PlottingType OCPlotMgt::PlottingTypeFromString(OCNaroWrappers::OCTCollection_AsciiString^ aPlottingTypeString)
{
  return (OCPlotMgt_PlottingType)(PlotMgt::PlottingTypeFromString(*((TCollection_AsciiString*)aPlottingTypeString->Handle)));
}

OCTCollection_AsciiString^ OCPlotMgt::StringFromPlottingType(OCPlotMgt_PlottingType aPlottingType)
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = PlotMgt::StringFromPlottingType((PlotMgt_PlottingType)aPlottingType);
  return gcnew OCTCollection_AsciiString(tmp);
}

 OCPlotMgt_PaperFormat OCPlotMgt::PaperFormatFromString(OCNaroWrappers::OCTCollection_AsciiString^ aPaperFormatString)
{
  return (OCPlotMgt_PaperFormat)(PlotMgt::PaperFormatFromString(*((TCollection_AsciiString*)aPaperFormatString->Handle)));
}

OCTCollection_AsciiString^ OCPlotMgt::StringFromPaperFormat(OCPlotMgt_PaperFormat aPaperFormat)
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = PlotMgt::StringFromPaperFormat((PlotMgt_PaperFormat)aPaperFormat);
  return gcnew OCTCollection_AsciiString(tmp);
}

 void OCPlotMgt::PaperSize(OCNaroWrappers::OCTCollection_AsciiString^ aFormat, Standard_Real& aWidth, Standard_Real& aLength)
{
  PlotMgt::PaperSize(*((TCollection_AsciiString*)aFormat->Handle), aWidth, aLength);
}


