#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;
/*
	changed "struct" to "class" & added private & public fields
	modified prototype definitions to include constructor and destructor
	-Jeromy Coburn
*/
class WriteFile
{
	private:
	   ofstream output_file;
	   bool closed;
	   
	public:
		WriteFile* createWriteFile(const char* file_name);
		~WriteFile*(); //destructor
		void writeLine(WriteFile* wf, String* line);
		void close(WriteFile* wf);
};



#endif
