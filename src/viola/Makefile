# Makefile generated by imake - do not edit!
# $XConsortium: imake.c,v 1.65 91/07/25 17:50:17 rws Exp $
#
# The cpp used on this machine replaces all newlines and multiple tabs and
# spaces in a macro expansion with a single space.  Imake tries to compensate
# for this, but is not always successful.
#

# -------------------------------------------------------------------------
# Makefile generated from "Imake.tmpl" and </tmp/IIf.a15822>
# $XConsortium: Imake.tmpl,v 1.139 91/09/16 08:52:48 rws Exp $
#
# Platform-specific parameters may be set in the appropriate <vendor>.cf
# configuration files.  Site-specific parameters should be set in the file
# site.def.  Full rebuilds are recommended if any parameters are changed.
#
# If your C preprocessor does not define any unique symbols, you will need
# to set BOOTSTRAPCFLAGS when rebuilding imake (usually when doing
# "make World" the first time).
#

# -------------------------------------------------------------------------
# site-specific configuration parameters that need to come before
# the platform-specific parameters - edit site.def to change

# site:  $XConsortium: site.def,v 1.2 91/07/30 20:26:44 rws Exp $

# -------------------------------------------------------------------------
# platform-specific configuration parameters - edit sun.cf to change

# platform:  $XConsortium: sun.cf,v 1.72.1.1 92/03/18 13:13:37 rws Exp $

# operating system:  SunOS 4.1.3

# $XConsortium: sunLib.rules,v 1.7 91/12/20 11:19:47 rws Exp $

.c.o:
	$(CC) -c $(CFLAGS) $*.c

# -------------------------------------------------------------------------
# site-specific configuration parameters that go after
# the platform-specific parameters - edit site.def to change

# site:  $XConsortium: site.def,v 1.2 91/07/30 20:26:44 rws Exp $

            SHELL = /bin/sh

              TOP = .
      CURRENT_DIR = .

               AR = ar clq
  BOOTSTRAPCFLAGS =
               CC = gcc -fstrength-reduce -fpcc-struct-return
               AS = as

         COMPRESS = compress
              CPP = /lib/cpp $(STD_CPP_DEFINES)
    PREPROCESSCMD = gcc -fstrength-reduce -fpcc-struct-return -E $(STD_CPP_DEFINES)
          INSTALL = install
               LD = ld
             LINT = lint
      LINTLIBFLAG = -C
         LINTOPTS = -axz
               LN = ln -s
             MAKE = make
               MV = mv
               CP = cp

           RANLIB = ranlib
  RANLIBINSTFLAGS =

               RM = rm -f
            TROFF = psroff
         MSMACROS = -ms
              TBL = tbl
              EQN = eqn
     STD_INCLUDES =
  STD_CPP_DEFINES =
      STD_DEFINES =
 EXTRA_LOAD_FLAGS =
  EXTRA_LIBRARIES =
             TAGS = ctags

    SHAREDCODEDEF = -DSHAREDCODE
         SHLIBDEF = -DSUNSHLIB

    PROTO_DEFINES =

     INSTPGMFLAGS =

     INSTBINFLAGS = -m 0755
     INSTUIDFLAGS = -m 4755
     INSTLIBFLAGS = -m 0644
     INSTINCFLAGS = -m 0444
     INSTMANFLAGS = -m 0444
     INSTDATFLAGS = -m 0444
    INSTKMEMFLAGS = -g kmem -m 2755

      CDEBUGFLAGS = -O
        CCOPTIONS =

      ALLINCLUDES = $(INCLUDES) $(EXTRA_INCLUDES) $(TOP_INCLUDES) $(STD_INCLUDES)
       ALLDEFINES = $(ALLINCLUDES) $(STD_DEFINES) $(EXTRA_DEFINES) $(PROTO_DEFINES) $(DEFINES)
           CFLAGS = $(CDEBUGFLAGS) $(CCOPTIONS) $(ALLDEFINES)
        LINTFLAGS = $(LINTOPTS) -DLINT $(ALLDEFINES)

           LDLIBS = $(SYS_LIBRARIES) $(EXTRA_LIBRARIES)

        LDOPTIONS = $(CDEBUGFLAGS) $(CCOPTIONS) $(LOCAL_LDFLAGS)

   LDCOMBINEFLAGS = -X -r
      DEPENDFLAGS =

        MACROFILE = sun.cf
           RM_CMD = $(RM) *.CKP *.ln *.BAK *.bak *.o core errs ,* *~ *.a .emacs_* tags TAGS make.log MakeOut

    IMAKE_DEFINES =

         IRULESRC = $(CONFIGDIR)
        IMAKE_CMD = $(IMAKE) -DUseInstalled -I$(IRULESRC) $(IMAKE_DEFINES)

     ICONFIGFILES = $(IRULESRC)/Imake.tmpl $(IRULESRC)/Imake.rules \
			$(IRULESRC)/Project.tmpl $(IRULESRC)/site.def \
			$(IRULESRC)/$(MACROFILE) $(EXTRA_ICONFIGFILES)

# -------------------------------------------------------------------------
# X Window System Build Parameters
# $XConsortium: Project.tmpl,v 1.138.1.1 92/11/11 09:49:19 rws Exp $

# -------------------------------------------------------------------------
# X Window System make variables; this need to be coordinated with rules

          PATHSEP = /
        USRLIBDIR = /usr/lib
           BINDIR = /usr/bin/X11
          INCROOT = /usr/include
     BUILDINCROOT = $(TOP)
      BUILDINCDIR = $(BUILDINCROOT)/X11
      BUILDINCTOP = ..
           INCDIR = $(INCROOT)/X11
           ADMDIR = /usr/adm
           LIBDIR = $(USRLIBDIR)/X11
        CONFIGDIR = $(LIBDIR)/config
       LINTLIBDIR = $(USRLIBDIR)/lint

          FONTDIR = $(LIBDIR)/fonts
         XINITDIR = $(LIBDIR)/xinit
           XDMDIR = $(LIBDIR)/xdm
           TWMDIR = $(LIBDIR)/twm
          MANPATH = /usr/man
    MANSOURCEPATH = $(MANPATH)/man
        MANSUFFIX = n
     LIBMANSUFFIX = 3
           MANDIR = $(MANSOURCEPATH)$(MANSUFFIX)
        LIBMANDIR = $(MANSOURCEPATH)$(LIBMANSUFFIX)
           NLSDIR = $(LIBDIR)/nls
        PEXAPIDIR = $(LIBDIR)/PEX
      XAPPLOADDIR = $(LIBDIR)/app-defaults
       FONTCFLAGS = -t

     INSTAPPFLAGS = $(INSTDATFLAGS)

            IMAKE = imake
           DEPEND = makedepend
              RGB = rgb

            FONTC = bdftopcf

        MKFONTDIR = mkfontdir
        MKDIRHIER = /bin/sh $(BINDIR)/mkdirhier

        CONFIGSRC = $(TOP)/config
       DOCUTILSRC = $(TOP)/doc/util
        CLIENTSRC = $(TOP)/clients
          DEMOSRC = $(TOP)/demos
           LIBSRC = $(TOP)/lib
          FONTSRC = $(TOP)/fonts
       INCLUDESRC = $(TOP)/X11
        SERVERSRC = $(TOP)/server
          UTILSRC = $(TOP)/util
        SCRIPTSRC = $(UTILSRC)/scripts
       EXAMPLESRC = $(TOP)/examples
       CONTRIBSRC = $(TOP)/../contrib
           DOCSRC = $(TOP)/doc
           RGBSRC = $(TOP)/rgb
        DEPENDSRC = $(UTILSRC)/makedepend
         IMAKESRC = $(CONFIGSRC)
         XAUTHSRC = $(LIBSRC)/Xau
          XLIBSRC = $(LIBSRC)/X
           XMUSRC = $(LIBSRC)/Xmu
       TOOLKITSRC = $(LIBSRC)/Xt
       AWIDGETSRC = $(LIBSRC)/Xaw
       OLDXLIBSRC = $(LIBSRC)/oldX
      XDMCPLIBSRC = $(LIBSRC)/Xdmcp
      BDFTOSNFSRC = $(FONTSRC)/bdftosnf
      BDFTOSNFSRC = $(FONTSRC)/clients/bdftosnf
      BDFTOPCFSRC = $(FONTSRC)/clients/bdftopcf
     MKFONTDIRSRC = $(FONTSRC)/clients/mkfontdir
         FSLIBSRC = $(FONTSRC)/lib/fs
    FONTSERVERSRC = $(FONTSRC)/server
     EXTENSIONSRC = $(TOP)/extensions
         XILIBSRC = $(EXTENSIONSRC)/lib/xinput
        PEXLIBSRC = $(EXTENSIONSRC)/lib/PEXlib
      PHIGSLIBSRC = $(EXTENSIONSRC)/lib/PEX

# $XConsortium: sunLib.tmpl,v 1.14.1.2 92/11/11 09:55:02 rws Exp $

SHLIBLDFLAGS = -assert pure-text
PICFLAGS = -pic

  DEPEXTENSIONLIB =
     EXTENSIONLIB = -lXext

          DEPXLIB = $(DEPEXTENSIONLIB)
             XLIB = $(EXTENSIONLIB) -lX11

        DEPXMULIB = $(USRLIBDIR)/libXmu.sa.$(SOXMUREV)
       XMULIBONLY = -lXmu
           XMULIB = -lXmu

       DEPOLDXLIB =
          OLDXLIB = -loldX

      DEPXTOOLLIB = $(USRLIBDIR)/libXt.sa.$(SOXTREV)
         XTOOLLIB = -lXt

        DEPXAWLIB = $(USRLIBDIR)/libXaw.sa.$(SOXAWREV)
           XAWLIB = -lXaw

        DEPXILIB =
           XILIB = -lXi

        DEPPEXLIB =
           PEXLIB = -lPEX5

        SOXLIBREV = 4.10
          SOXTREV = 4.10
         SOXAWREV = 5.0
        SOOLDXREV = 4.10
         SOXMUREV = 4.10
        SOXEXTREV = 4.10
      SOXINPUTREV = 4.10
         SOPEXREV = 1.0

      DEPXAUTHLIB = $(USRLIBDIR)/libXau.a
         XAUTHLIB =  -lXau
      DEPXDMCPLIB = $(USRLIBDIR)/libXdmcp.a
         XDMCPLIB =  -lXdmcp

        DEPPHIGSLIB = $(USRLIBDIR)/libphigs.a
           PHIGSLIB =  -lphigs

       DEPXBSDLIB = $(USRLIBDIR)/libXbsd.a
          XBSDLIB =  -lXbsd

 LINTEXTENSIONLIB = $(LINTLIBDIR)/llib-lXext.ln
         LINTXLIB = $(LINTLIBDIR)/llib-lX11.ln
          LINTXMU = $(LINTLIBDIR)/llib-lXmu.ln
        LINTXTOOL = $(LINTLIBDIR)/llib-lXt.ln
          LINTXAW = $(LINTLIBDIR)/llib-lXaw.ln
           LINTXI = $(LINTLIBDIR)/llib-lXi.ln
          LINTPEX = $(LINTLIBDIR)/llib-lPEX5.ln
        LINTPHIGS = $(LINTLIBDIR)/llib-lphigs.ln

          DEPLIBS = $(DEPXAWLIB) $(DEPXMULIB) $(DEPXTOOLLIB) $(DEPXLIB)

         DEPLIBS1 = $(DEPLIBS)
         DEPLIBS2 = $(DEPLIBS)
         DEPLIBS3 = $(DEPLIBS)

# -------------------------------------------------------------------------
# Imake rules for building libraries, programs, scripts, and data files
# rules:  $XConsortium: Imake.rules,v 1.123 91/09/16 20:12:16 rws Exp $

# -------------------------------------------------------------------------
# start of Imakefile

CC		= cc

LOCAL_LIBRARIES = $(EXTENSIONLIB) $(XMULIB) $(XTOOLLIB) $(XLIB)

SYS_LIBRARIES = -lm

INSTALL = /usr/ucb/install

#TOP =
#LDCOMBINEFLAGS =
#EXTENSIONSRC =

CDEBUGFLAGS   = -g

#CCOPTIONS     = -Bstatic
#CCOPTIONS    = -Wall

WWW_BIN       = ../libWWW/Library/sun4

#WWW_BIN       = ../libWWW/Library/Implementation
#LEX =  flex

XPM_BIN       = ../libXPM

XPA_BIN       = ../libXPA/src

#GIF_BIN       = ../libGIF
GIF_BIN       = ../libIMG

STG_BIN       = ../libStyle

SRCS          = $(SRCS_VIOLA)

SRCS_VIOLA    = DefaultStyles.c \
		ast.c \
		attr.c \
		biop.c \
		cexec.c \
		cgen.c \
		cl_glass.c \
                cl_AC_SGML_txt.c \
		cl_BCard.c \
		cl_FCard.c \
		cl_GIF.c \
		cl_HTML.c \
		cl_PS.c \
		cl_TTY.c \
		cl_XBM.c \
		cl_XBMBG.c \
		cl_XBMButton.c \
		cl_XPM.c \
		cl_XPMBG.c \
		cl_XPMButton.c \
		cl_client.c \
		cl_cosmic.c \
		cl_dial.c \
		cl_field.c \
		cl_generic.c \
		cl_hpane.c \
		cl_menu.c \
		cl_pane.c \
		cl_project.c \
		cl_radio.c \
		cl_rubber.c \
		cl_slider.c \
		cl_socket.c \
		cl_stack.c \
		cl_toggle.c \
		cl_tray.c \
		cl_txt.c \
		cl_txtButton.c \
		cl_txtDisp.c \
		cl_txtEdit.c \
		cl_txtEditLine.c \
		cl_txtLabel.c \
		cl_vpane.c \
		class.c \
		classlist.c \
		error.c \
		event.c \
		event_x.c \
		file.c \
		glib.c \
		glib_x.c \
		gram.c \
		hash.c \
		membership.c \
		html.c \
		html2.c \
		fosi.c \
		sgml.c \
		stgcall.c \
		ident.c \
		loader.c \
		main.c \
		method.c \
		misc.c \
		mystrings.c \
		obj.c \
		packet.c \
		scan.l \
		violalex.c \
		slib.c \
		sys.c \
		tfed.c \
		tfed2.c \
		vlist.c \
		HTML_share.c \
		htmath.c \
		viola.c \
		msgHandler.c \
		objs.c \
		HTML_style.c

OBJS          = $(OBJS_VIOLA) $(OBJS_WWW) $(OBJS_XPM) $(OBJS_XPA) \
		$(OBJS_GIF) $(OBJS_STG)

OBJS_VIOLA    = DefaultStyles.o \
		ast.o \
		attr.o \
		biop.o \
		cexec.o \
		cgen.o \
                cl_PS.o \
                cl_AC_SGML_txt.o \
		cl_BCard.o \
		cl_FCard.o \
		cl_GIF.o \
		cl_HTML.o \
		cl_TTY.o \
		cl_XBM.o \
		cl_XBMBG.o \
		cl_XBMButton.o \
		cl_XPM.o \
		cl_XPMBG.o \
		cl_XPMButton.o \
		cl_client.o \
		cl_cosmic.o \
		cl_dial.o \
		cl_field.o \
		cl_generic.o \
		cl_glass.o \
		cl_hpane.o \
		cl_menu.o \
		cl_pane.o \
		cl_project.o \
		cl_radio.o \
		cl_rubber.o \
		cl_slider.o \
		cl_socket.o \
		cl_stack.o \
		cl_toggle.o \
		cl_tray.o \
		cl_txt.o \
		cl_txtButton.o \
		cl_txtDisp.o \
		cl_txtEdit.o \
		cl_txtEditLine.o \
		cl_txtLabel.o \
		cl_vpane.o \
		class.o \
		classlist.o \
		error.o \
		event.o \
		event_x.o \
		file.o \
		glib.o \
		glib_x.o \
		gram.o \
		hash.o \
		membership.o \
		html.o \
		html2.o \
		fosi.o \
		sgml.o \
		stgcall.o \
		ident.o \
		loader.o \
		main.o \
		method.o \
		misc.o \
		mystrings.o \
		obj.o \
		packet.o \
		violalex.o \
		slib.o \
		sys.o \
		tfed.o \
		tfed2.o \
		vlist.o \
		HTML_share.o \
		htmath.o \
		viola.o \
		msgHandler.o \
		objs.o \
		HTML_style.o

OBJS_WWW      = $(WWW_BIN)/libwww.a

OBJS_XPM      = $(XPM_BIN)/libXpm.a

OBJS_XPA      =	$(XPA_BIN)/libXpa.a

#OBJS_GIF     =	$(GIF_BIN)/xgifload.o
OBJS_GIF      =	$(GIF_BIN)/libIMG.a

OBJS_STG      =	$(STG_BIN)/libstg.o

 PROGRAM = viola

all:: viola

viola: $(OBJS) $(DEPLIBS)
	$(RM) $@
	$(CC) -o $@ $(OBJS) $(LDOPTIONS) $(LOCAL_LIBRARIES) $(LDLIBS) $(EXTRA_LOAD_FLAGS)

saber_viola:: $(SRCS)
	# load $(ALLDEFINES) $(SRCS) $(LOCAL_LIBRARIES) $(SYS_LIBRARIES) $(EXTRA_LIBRARIES)

osaber_viola:: $(OBJS)
	# load $(ALLDEFINES) $(OBJS) $(LOCAL_LIBRARIES) $(SYS_LIBRARIES) $(EXTRA_LIBRARIES)

install:: viola
	@if [ -d $(DESTDIR)$(BINDIR) ]; then set +x; \
	else (set -x; $(MKDIRHIER) $(DESTDIR)$(BINDIR)); fi
	$(INSTALL) -c $(INSTPGMFLAGS)  viola $(DESTDIR)$(BINDIR)

install.man:: viola.man
	@if [ -d $(DESTDIR)$(MANDIR) ]; then set +x; \
	else (set -x; $(MKDIRHIER) $(DESTDIR)$(MANDIR)); fi
	$(INSTALL) -c $(INSTMANFLAGS) viola.man $(DESTDIR)$(MANDIR)/viola.$(MANSUFFIX)

depend::
	$(DEPEND) $(DEPENDFLAGS) -s "# DO NOT DELETE" -- $(ALLDEFINES) -- $(SRCS)

lint:
	$(LINT) $(LINTFLAGS) $(SRCS) $(LINTLIBS)
lint1:
	$(LINT) $(LINTFLAGS) $(FILE) $(LINTLIBS)

clean::
	$(RM) $(PROGRAM)

# -------------------------------------------------------------------------
# common rules for all Makefiles - do not edit

emptyrule::

clean::
	$(RM_CMD) "#"*

Makefile::
	-@if [ -f Makefile ]; then set -x; \
	$(RM) Makefile.bak; $(MV) Makefile Makefile.bak; \
	else exit 0; fi
	$(IMAKE_CMD) -DTOPDIR=$(TOP) -DCURDIR=$(CURRENT_DIR)

tags::
	$(TAGS) -w *.[ch]
	$(TAGS) -xw *.[ch] > TAGS

saber:
	# load $(ALLDEFINES) $(SRCS)

osaber:
	# load $(ALLDEFINES) $(OBJS)

# -------------------------------------------------------------------------
# empty rules for directories that do not have SUBDIRS - do not edit

install::
	@echo "install in $(CURRENT_DIR) done"

install.man::
	@echo "install.man in $(CURRENT_DIR) done"

Makefiles::

includes::

# -------------------------------------------------------------------------
# dependencies generated by makedepend

