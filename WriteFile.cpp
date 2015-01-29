#include "WriteFile.h"
#include <sstream>

Write::Write(const char* file_name);
{
   Write* w = new Write;
   w->output_file.open(file_name);
   w->closed = false;
   return w;
}

Write::~Write() //calls the desctructor from the class in the header file to get rid of the file created
{
   close(w);
   delete w;
}

Write::void close(Write* w) //closes out the file so that no new information can be added to it
{
   if (!w->closed)
   {
      w->output_file.close();
      w->closed = true;
   }
}

Write::void writeLine(Write* w, String* line)//allows the file to be written in and the data within edited
{
   if (!w->closed && line->length() > 0)//makes sure that the file is open for editing and there is room to make changes
   {
      w->output_file << line->getText() << endl; // pulls the changes from the input and adds them to the file
   }
}
