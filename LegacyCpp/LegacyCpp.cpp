#define _EXPORTING
#include "LegacyCpp.h"


// Join s1 + s2 as new string
int JoinString(const char* s1, const char* s2, char* result, int size) {
	int n1 = strlen(s1);
	int n2 = strlen(s2);
	int n = n1 + n2 + 1;
	if (result && n > 0) {
		if (size >= n) {
			strcpy_s(result, n, s1);
			strcat_s(result, n, s2);
		}
		else {
			n = -1;
		}
	}
	return n;
}
