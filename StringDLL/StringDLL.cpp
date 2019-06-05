// StringDLL.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "StringDLL.h"


// This is an example of an exported variable
STRINGDLL_API int nStringDLL=0;

// This is an example of an exported function.
STRINGDLL_API int fnStringDLL(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CStringDLL::CStringDLL()
{
    return;
}
