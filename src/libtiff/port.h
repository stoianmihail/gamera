/*
 * Warning, this file was automatically created by the TIFF configure script
 * VERSION:	 v3.5.7
 * RELEASE:   
 * DATE:	 Thu Oct 24 16:52:27 2002
 * TARGET:	 i686-pc-cygwin
 * CCOMPILER:	 /usr/bin/gcc-2.95.3-5 (cygwin special)
 */
#ifndef _PORT_
#define _PORT_ 1
#ifdef __cplusplus
extern "C" {
#endif
typedef long off_t;
typedef unsigned size_t;
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
#define HOST_FILLORDER FILLORDER_MSB2LSB
#define HOST_BIGENDIAN	0
#ifndef O_RDONLY
#define O_RDONLY	0
#endif
#ifndef O_WRONLY
#define O_WRONLY	1
#endif
#ifndef O_RDWR
#define O_RDWR	2
#endif
typedef double dblparam_t;
#ifdef __STRICT_ANSI__
#define	INLINE	__inline__
#else
#define	INLINE	inline
#endif
#define GLOBALDATA(TYPE,NAME)	extern TYPE NAME
extern void* memset(void*, int, size_t);
extern double floor(double);
extern double ceil(double);
extern double exp(double);
extern double pow(double, double);
extern int read(int, const void*, unsigned int);
extern void* malloc(size_t);
extern void* realloc(void*, size_t);
extern void free(void*);
#ifdef __cplusplus
}
#endif
#endif