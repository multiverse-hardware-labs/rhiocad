// File generated by CPPExt (CPP file)
//

#include "Interface_FloatWriter.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCInterface_FloatWriter::OCInterface_FloatWriter(Interface_FloatWriter* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCInterface_FloatWriter::OCInterface_FloatWriter(Standard_Integer chars) 
{
  nativeHandle = new Interface_FloatWriter(chars);
}

 void OCInterface_FloatWriter::SetFormat(System::String^ form, System::Boolean reset)
{
  ((Interface_FloatWriter*)nativeHandle)->SetFormat(OCConverter::StringToStandardCString(form), OCConverter::BooleanToStandardBoolean(reset));
}

 void OCInterface_FloatWriter::SetFormatForRange(System::String^ form, Standard_Real R1, Standard_Real R2)
{
  ((Interface_FloatWriter*)nativeHandle)->SetFormatForRange(OCConverter::StringToStandardCString(form), R1, R2);
}

 void OCInterface_FloatWriter::SetZeroSuppress(System::Boolean mode)
{
  ((Interface_FloatWriter*)nativeHandle)->SetZeroSuppress(OCConverter::BooleanToStandardBoolean(mode));
}

 void OCInterface_FloatWriter::SetDefaults(Standard_Integer chars)
{
  ((Interface_FloatWriter*)nativeHandle)->SetDefaults(chars);
}

 void OCInterface_FloatWriter::Options(System::Boolean& zerosup, System::Boolean& range, Standard_Real& R1, Standard_Real& R2)
{
  ((Interface_FloatWriter*)nativeHandle)->Options((Standard_Boolean&)(zerosup), (Standard_Boolean&)(range), R1, R2);
}

 System::String^ OCInterface_FloatWriter::MainFormat()
{
  return OCConverter::StandardCStringToString(((Interface_FloatWriter*)nativeHandle)->MainFormat());
}

 System::String^ OCInterface_FloatWriter::FormatForRange()
{
  return OCConverter::StandardCStringToString(((Interface_FloatWriter*)nativeHandle)->FormatForRange());
}

 Standard_Integer OCInterface_FloatWriter::Write(Standard_Real val, System::String^ text)
{
  return ((Interface_FloatWriter*)nativeHandle)->Write(val, OCConverter::StringToStandardCString(text));
}

 Standard_Integer OCInterface_FloatWriter::Convert(Standard_Real val, System::String^ text, System::Boolean zerosup, Standard_Real Range1, Standard_Real Range2, System::String^ mainform, System::String^ rangeform)
{
  return Interface_FloatWriter::Convert(val, OCConverter::StringToStandardCString(text), OCConverter::BooleanToStandardBoolean(zerosup), Range1, Range2, OCConverter::StringToStandardCString(mainform), OCConverter::StringToStandardCString(rangeform));
}

