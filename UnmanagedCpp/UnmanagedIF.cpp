#define _EXPORTING
#include "UnmanagedIF.h"
#include "UnmanagedCpp.h"
#include <string.h>

using namespace System;


// Join s1 + s2 as new string
int JoinString(const char* s1, const char* s2, char* result, int size)
{
	UnmanagedCpp^ instance = gcnew UnmanagedCpp();
	String^ res = instance->JoinString(gcnew String(s1), gcnew String(s2));
	int n = res->Length + 1;
	if (result && n > 0) {
		if (size >= n) {
			System::IntPtr pp = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(res);
			strcpy_s(result, size, (const char*)pp.ToPointer());
			System::Runtime::InteropServices::Marshal::FreeHGlobal(pp);
		}
		else {
			n = -1;
		}
	}
	return n;
}