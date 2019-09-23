#ifndef __TINYGENERIC__
#define __TINYGENERIC__

#include <stdint.h>
#include <stdio.h>

#define ASSERTIONS_ENABLED 1
const int DEBUG_BUILD = 1;
#define DEBUG_BUILD 1

#if ASSERTIONS_ENABLED
#define assert(expr)  if(expr){} else { reportAssertionFailure(#expr,  __FILE__, __LINE__);  __debugbreak();  } 
#else
#define assert(expr)
#endif

#define file_internal static 
#define local_persist static 
#define global_variable static

#define InvalidCodePath assert(!1==1)
#define megabyte(amnt) amnt*1000000

void reportAssertionFailure(const char expr[], const char file[], int line);
unsigned int safeTruncateUInt64(uint64_t value);
int strcmpAny(char const *s1, char const *s2);
char* advancePointerToOnePastChar(char* str, char ch);

#endif /* __TINYGENERIC__ */