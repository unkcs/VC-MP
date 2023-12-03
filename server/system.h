
#ifndef _SYSTEM_H
#define _SYSTEM_H

typedef unsigned long DWORD;

#ifdef _WIN32
# include <windows.h>
#else

#ifndef FALSE
#define FALSE               0
#endif
#ifndef TRUE
#define TRUE                1
#endif

typedef int                 BOOL;
typedef unsigned char       BYTE;
typedef unsigned short      WORD;

#endif //!Win32

#endif // _SYSTEM_H
