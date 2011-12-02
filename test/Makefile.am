check_PROGRAMS = geometry

TESTS = $(check_PROGRAMS)

AM_CFLAGS = \
	$(RANDR_UTILS_CFLAGS) \
	$(MALLOC_ZERO_CFLAGS) \
	$(CWARNFLAGS)

INCLUDES = -I$(top_srcdir)/include/X11/extensions

TEST_LDADD = @RANDR_UTILS_LIBS@

geometry_LDADD = $(TEST_LDADD)
