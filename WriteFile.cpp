#include "WriteFile.h"
#include <sstream>
//added "WriteFile::" before function names - Jeromy Coburn(1/26/17)
WriteFile::WriteFile(const char* file_name)//modified - JC (1/26/17)
{
   output_file.open(file_name);
   closed = false;
   return output_file;
}

WriteFile::~WriteFile()
{
   close(output_file);
   delete output_file;
}

void WriteFile::close()//modified - JC (1/26/17)
{
   if (!closed)
   {
      output_file.close();
      closed = true;
   }
}

void WriteFile::writeLine(String* line)
{
   if (!closed && line->length() > 0)
   {
      output_file << line->getText() << endl;
   }
}
