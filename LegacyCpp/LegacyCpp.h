#pragma once

#ifdef _EXPORTING  
#define DECLSPEC    __declspec(dllexport)  
#else  
#define DECLSPEC    __declspec(dllimport)  
#endif  

#include <string.h>


#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

DECLSPEC int JoinString(const char* s1, const char* s2, char* result, int size);

#ifdef __cplusplus
}
#endif /* __cplusplus */

