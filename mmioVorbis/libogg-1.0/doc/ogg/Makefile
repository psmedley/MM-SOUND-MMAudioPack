# Generated automatically from Makefile.in by configure.
# Makefile.in generated automatically by automake 1.4-p5 from Makefile.am

# Copyright (C) 1994, 1995-8, 1999, 2001 Free Software Foundation, Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.


SHELL = sh

srcdir = .
top_srcdir = ../..
prefix = /extras
exec_prefix = ${prefix}

bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
libexecdir = ${exec_prefix}/libexec
datadir = ${prefix}/share
sysconfdir = ${prefix}/etc
sharedstatedir = ${prefix}/com
localstatedir = ${prefix}/var
libdir = ${exec_prefix}/lib
infodir = ${prefix}/info
mandir = ${prefix}/man
includedir = ${prefix}/include
oldincludedir = /usr/include

DESTDIR =

pkgdatadir = $(datadir)/libogg
pkglibdir = $(libdir)/libogg
pkgincludedir = $(includedir)/libogg

top_builddir = ../..

ACLOCAL = aclocal
AUTOCONF = autoconf
AUTOMAKE = automake
AUTOHEADER = autoheader

INSTALL = ../../u:/bin/install.exe
INSTALL_PROGRAM = ${INSTALL} $(AM_INSTALL_PROGRAM_FLAGS)
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_SCRIPT = ${INSTALL_PROGRAM}
transform = s,x,x,

NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
host_alias = i386-pc-os2-emx
host_triplet = i386-pc-os2-emx
AS = @AS@
CC = gcc
CFLAGS = -O20 -fsigned-char -D__EMX__ -DEMX -DOS2  -D__ST_MT_ERRNO__ -O2  -march=pentium -mtune=pentium4 -static-libgcc
DEBUG = -g -Wall -fsigned-char -D__EMX__ -DEMX -DOS2  -D__ST_MT_ERRNO__ -O2  -march=pentium -mtune=pentium4 -static-libgcc
DLLTOOL = @DLLTOOL@
ECHO = echo
EXEEXT = .exe
LIBS = -lpthread -lcx
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LIBTOOL_DEPS = ./ltmain.sh
LIB_AGE = 4
LIB_CURRENT = 4
LIB_REVISION = 0
LN_S = ln -s
MAKEINFO = makeinfo
OBJDUMP = @OBJDUMP@
OBJEXT = o
OPT = 
PACKAGE = libogg
PROFILE = -O20 -g -pg -fsigned-char -D__EMX__ -DEMX -DOS2  -D__ST_MT_ERRNO__ -O2  -march=pentium -mtune=pentium4 -static-libgcc
RANLIB = echo
SIZE16 = int16_t
SIZE32 = int32_t
SIZE64 = int64_t
STRIP = :
USIZE32 = uint32_t
VERSION = 1.0

AUTOMAKE_OPTIONS = foreign

docdir = $(datadir)/doc/$(PACKAGE)-$(VERSION)/ogg

doc_DATA = bitpacking.html datastructures.html decoding.html encoding.html 	general.html index.html ogg_packet.html ogg_page.html 	ogg_page_bos.html ogg_page_continued.html ogg_page_eos.html 	ogg_page_granulepos.html ogg_page_pageno.html ogg_page_serialno.html 	ogg_page_version.html ogg_stream_clear.html ogg_stream_destroy.html 	ogg_page_packets.html ogg_stream_eos.html ogg_stream_flush.html 	ogg_stream_init.html ogg_stream_packetin.html ogg_stream_packetout.html 	ogg_stream_pagein.html ogg_stream_pageout.html ogg_stream_reset.html 	ogg_stream_state.html ogg_sync_buffer.html ogg_sync_clear.html 	ogg_sync_destroy.html ogg_sync_init.html ogg_sync_pageout.html 	ogg_sync_pageseek.html ogg_sync_reset.html ogg_sync_state.html 	ogg_sync_wrote.html oggpack_adv.html oggpack_adv1.html 	oggpack_bits.html oggpack_buffer.html 	oggpack_bytes.html oggpack_get_buffer.html oggpack_look.html 	oggpack_look1.html oggpack_read.html 	oggpack_read1.html oggpack_readinit.html oggpack_reset.html 	oggpack_write.html oggpack_writeclear.html oggpack_writeinit.html 	overview.html reference.html style.css vorbis_comment.html 	vorbis_info.html ogg_packet_clear.html ogg_page_checksum_set.html


EXTRA_DIST = $(doc_DATA)
mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_CLEAN_FILES = 
DATA =  $(doc_DATA)

DIST_COMMON =  Makefile.am Makefile.in


DISTFILES = $(DIST_COMMON) $(SOURCES) $(HEADERS) $(TEXINFOS) $(EXTRA_DIST)

TAR = tar
GZIP_ENV = --best
all: all-redirect
.SUFFIXES:
$(srcdir)/Makefile.in: Makefile.am $(top_srcdir)/configure.in $(ACLOCAL_M4) 
	cd $(top_srcdir) && $(AUTOMAKE) --foreign --include-deps doc/ogg/Makefile

Makefile: $(srcdir)/Makefile.in  $(top_builddir)/config.status
	cd $(top_builddir) \
	  && CONFIG_FILES=$(subdir)/$@ CONFIG_HEADERS= $(SHELL) ./config.status


install-docDATA: $(doc_DATA)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(docdir)
	@list='$(doc_DATA)'; for p in $$list; do \
	  if test -f $(srcdir)/$$p; then \
	    echo " $(INSTALL_DATA) $(srcdir)/$$p $(DESTDIR)$(docdir)/$$p"; \
	    $(INSTALL_DATA) $(srcdir)/$$p $(DESTDIR)$(docdir)/$$p; \
	  else if test -f $$p; then \
	    echo " $(INSTALL_DATA) $$p $(DESTDIR)$(docdir)/$$p"; \
	    $(INSTALL_DATA) $$p $(DESTDIR)$(docdir)/$$p; \
	  fi; fi; \
	done

uninstall-docDATA:
	@$(NORMAL_UNINSTALL)
	list='$(doc_DATA)'; for p in $$list; do \
	  rm -f $(DESTDIR)$(docdir)/$$p; \
	done
tags: TAGS
TAGS:


distdir = $(top_builddir)/$(PACKAGE)-$(VERSION)/$(subdir)

subdir = doc/ogg

distdir: $(DISTFILES)
	@for file in $(DISTFILES); do \
	  d=$(srcdir); \
	  if test -d $$d/$$file; then \
	    cp -pr $$d/$$file $(distdir)/$$file; \
	  else \
	    test -f $(distdir)/$$file \
	    || ln $$d/$$file $(distdir)/$$file 2> /dev/null \
	    || cp -p $$d/$$file $(distdir)/$$file || :; \
	  fi; \
	done
info-am:
info: info-am
dvi-am:
dvi: dvi-am
check-am: all-am
check: check-am
installcheck-am:
installcheck: installcheck-am
install-exec-am:
install-exec: install-exec-am

install-data-am: install-docDATA
install-data: install-data-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am
install: install-am
uninstall-am: uninstall-docDATA
uninstall: uninstall-am
all-am: Makefile $(DATA)
all-redirect: all-am
install-strip:
	$(MAKE) $(AM_MAKEFLAGS) AM_INSTALL_PROGRAM_FLAGS=-s install
installdirs:
	$(mkinstalldirs)  $(DESTDIR)$(docdir)


mostlyclean-generic:

clean-generic:

distclean-generic:
	-rm -f Makefile $(CONFIG_CLEAN_FILES)
	-rm -f config.cache config.log stamp-h stamp-h[0-9]*

maintainer-clean-generic:
mostlyclean-am:  mostlyclean-generic

mostlyclean: mostlyclean-am

clean-am:  clean-generic mostlyclean-am

clean: clean-am

distclean-am:  distclean-generic clean-am
	-rm -f libtool

distclean: distclean-am

maintainer-clean-am:  maintainer-clean-generic distclean-am
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."

maintainer-clean: maintainer-clean-am

.PHONY: uninstall-docDATA install-docDATA tags distdir info-am info \
dvi-am dvi check check-am installcheck-am installcheck install-exec-am \
install-exec install-data-am install-data install-am install \
uninstall-am uninstall all-redirect all-am all installdirs \
mostlyclean-generic distclean-generic clean-generic \
maintainer-clean-generic clean mostlyclean distclean maintainer-clean


# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
