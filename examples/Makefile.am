bin_PROGRAMS = xrandr

AM_CFLAGS = \
	$(RANDR_UTILS_CFLAGS) \
	$(MALLOC_ZERO_CFLAGS) \
	$(CWARNFLAGS)
xrandr_LDADD = @RANDR_UTILS_LIBS@

INCLUDES = -I$(top_srcdir)/include/X11/extensions

xrandr_SOURCES =	\
        xrandr.c

