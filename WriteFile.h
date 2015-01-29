#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;

class Write
{
private:
   ofstream output_file;
   bool closed;
public:
   Write(const char* file_name);	//constructor to create a new file
   ~Write(); //destructor to get rid of unneccessary files
   void close(Write* w); //closes out the file after editions have been made
   void writeLine(Write* w, String* line); // where the actual editing of the line happens
};

#endif
