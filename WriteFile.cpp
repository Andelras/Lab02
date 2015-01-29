#include "WriteFile.h"
#include <sstream>

Write::Write(const char* file_name)
{
   output_file.open(file_name);
   closed = false;
}

Write::~Write() //calls the desctructor from the class in the header file to get rid of the file created
{
   close();
   //delete[]; supposed to delete the line of text
}

void Write:: close() //closes out the file so that no new information can be added to it
{
   if (!closed)
   {
      output_file.close();
      closed = true;
   }
}

void Write:: writeLine(String* line)//allows the file to be written in and the data within edited
{
   if (!closed && line->length() > 0)//makes sure that the file is open for editing and there is room to make changes
   {
      output_file << line->getText() << endl; // pulls the changes from the input and adds them to the file
   }
}
