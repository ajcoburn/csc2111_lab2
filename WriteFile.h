#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;
/*
	changed "struct" to "class" & added private & public fields
	modified prototype definitions to include constructor and destructor
	-Jeromy Coburn(1/26/17)
*/
class WriteFile
{
	private:
	   ofstream output_file;
	   bool closed;
	   
	public:
		WriteFile(const char* file_name);
		~WriteFile();
		void writeLine(String* line);
		void close();
};

#endif
