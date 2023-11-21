#include "Log.h"
//#include "Log.h"
/*
including files
<>-file is inside a folder;not relative;compiler include file
""-relative to current file;relative file

c stl-".h" exten
*/
//void LOG(const char* message);
void InitLog()
{
    Log("Initializing Log");
}

//log function exist but is some where else

void LOG(const char* message)
{
    std::cout<<message<<std::endl;
}