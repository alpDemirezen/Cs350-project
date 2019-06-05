// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the STRINGDLL_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// STRINGDLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef STRINGDLL_EXPORTS
#define STRINGDLL_API __declspec(dllexport)
#else
#define STRINGDLL_API __declspec(dllimport)
#endif

// This class is exported from the dll
class STRINGDLL_API CStringDLL {
public:
	CStringDLL(void);
	// TODO: add your methods here.
};

extern STRINGDLL_API int nStringDLL;

STRINGDLL_API int fnStringDLL(void);
