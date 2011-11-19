lib_LTLIBRARIES = libXrandrUtils.la

libXrandrUtils_la_SOURCES = 	\
	XrandrUtils.c

libXrandrUtils_la_LIBADD = @RANDR_UTILS_LIBS@

AM_CFLAGS = \
	$(RANDR_UTILS_CFLAGS) \
	$(MALLOC_ZERO_CFLAGS) \
	$(CWARNFLAGS)

INCLUDES = -I$(top_srcdir)/include/X11/extensions

libXrandrUtils_la_LDFLAGS = -version-number 2:2:0 -no-undefined

libXrandrUtilsincludedir = $(includedir)/X11/extensions
libXrandrUtilsinclude_HEADERS = $(top_srcdir)/include/X11/extensions/XrandrUtils.h
