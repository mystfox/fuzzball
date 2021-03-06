#ifndef _WIN32_H_
#define _WIN32_H_

#include <direct.h>
#include <process.h>
#include <time.h>
#include <winsock2.h>
#include <ws2tcpip.h>

#include <windows.h>

#define pid_t		int
#define socklen_t	int
#define ssize_t		long

#define close(x)	closesocket(x)
#define chdir		_chdir
#define execv		_execv
#define getpid		_getpid
#define inet_pton	InetPton
#define pclose		_pclose
#define popen		_popen
#define read(fd, buf, count) \
			recv(fd, (char *)buf, count, 0)
#define snprintf(str, size, format, ...) \
			_snprintf_s(str, size, _TRUNCATE, format, __VA_ARGS__)
#define strcasecmp	_stricmp
#define strdup		_strdup
#define strncasecmp	_strnicmp
#define strtok_r	strtok_s
#define tzname		_tzname
#define unlink		_unlink
#define vsnprintf(str, size, format, ...) \
			_vsnprintf_s(str, size, _TRUNCATE, format, __VA_ARGS__)
#define write(fd, buf, count) \
			send(fd, (char *)buf, count, 0)

int gettimeofday(struct timeval *tv, struct timezone *tz);
void set_console();
void sync();
struct tm *uw32localtime(const time_t *t);

#endif
