#############################################################################
# Makefile for building: untitled2
# Generated by qmake (2.01a) (Qt 4.8.7) on: Fri May 26 07:27:56 2017
# Project:  ../LogicAnalyzerQt/LogicAnalyzerQt.pro
# Template: app
# Command: /usr/lib64/qt/bin/qmake -spec /usr/lib64/qt/mkspecs/linux-g++-32 CONFIG+=debug -o Makefile ../LogicAnalyzerQt/LogicAnalyzerQt.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQESP_NO_UDEV -D__linux__ -DQT_DEPRECATED_WARNINGS -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m32 -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -m32 -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/lib64/qt/mkspecs/linux-g++-32 -I../LogicAnalyzerQt -I/usr/lib64/qt/include/QtCore -I/usr/lib64/qt/include/QtGui -I/usr/lib64/qt/include -I../LogicAnalyzerQt/3rdparty/qextserialport/src -I. -I. -I../LogicAnalyzerQt -I.
LINK          = g++
LFLAGS        = -m32 -Wl,-rpath,/usr/lib64/qt/lib
LIBS          = $(SUBLIBS)  -L/usr/lib64/qt/lib -lQtGui -L/usr/lib64/qt/lib -L/usr/X11R6/lib -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/lib64/qt/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = ../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport.cpp \
		../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialenumerator.cpp \
		../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport_unix.cpp \
		../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialenumerator_linux.cpp \
		../LogicAnalyzerQt/main.cpp \
		../LogicAnalyzerQt/mainwindow.cpp \
		../LogicAnalyzerQt/settingsdialog.cpp \
		../LogicAnalyzerQt/signal.cpp \
		../LogicAnalyzerQt/linepainter.cpp \
		../LogicAnalyzerQt/qcustomplot.cpp moc_mainwindow.cpp \
		moc_settingsdialog.cpp \
		moc_qcustomplot.cpp
OBJECTS       = qextserialport.o \
		qextserialenumerator.o \
		qextserialport_unix.o \
		qextserialenumerator_linux.o \
		main.o \
		mainwindow.o \
		settingsdialog.o \
		signal.o \
		linepainter.o \
		qcustomplot.o \
		moc_mainwindow.o \
		moc_settingsdialog.o \
		moc_qcustomplot.o
DIST          = /usr/lib64/qt/mkspecs/common/unix.conf \
		/usr/lib64/qt/mkspecs/common/linux.conf \
		/usr/lib64/qt/mkspecs/common/gcc-base.conf \
		/usr/lib64/qt/mkspecs/common/gcc-base-unix.conf \
		/usr/lib64/qt/mkspecs/common/g++-base.conf \
		/usr/lib64/qt/mkspecs/common/g++-unix.conf \
		/usr/lib64/qt/mkspecs/qconfig.pri \
		/usr/lib64/qt/mkspecs/modules/qt_phonon.pri \
		/usr/lib64/qt/mkspecs/modules/qt_webkit.pri \
		/usr/lib64/qt/mkspecs/modules/qt_webkit_version.pri \
		/usr/lib64/qt/mkspecs/features/qt_functions.prf \
		/usr/lib64/qt/mkspecs/features/qt_config.prf \
		/usr/lib64/qt/mkspecs/features/exclusive_builds.prf \
		/usr/lib64/qt/mkspecs/features/default_pre.prf \
		../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport.pri \
		/usr/lib64/qt/mkspecs/features/debug.prf \
		/usr/lib64/qt/mkspecs/features/default_post.prf \
		/usr/lib64/qt/mkspecs/features/shared.prf \
		/usr/lib64/qt/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/lib64/qt/mkspecs/features/warn_on.prf \
		/usr/lib64/qt/mkspecs/features/qt.prf \
		/usr/lib64/qt/mkspecs/features/unix/thread.prf \
		/usr/lib64/qt/mkspecs/features/moc.prf \
		/usr/lib64/qt/mkspecs/features/resources.prf \
		/usr/lib64/qt/mkspecs/features/uic.prf \
		/usr/lib64/qt/mkspecs/features/yacc.prf \
		/usr/lib64/qt/mkspecs/features/lex.prf \
		/usr/lib64/qt/mkspecs/features/include_source_dir.prf \
		../LogicAnalyzerQt/LogicAnalyzerQt.pro
QMAKE_TARGET  = untitled2
DESTDIR       = 
TARGET        = untitled2

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_mainwindow.h ui_settingsdialog.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)
	{ test -n "$(DESTDIR)" && DESTDIR="$(DESTDIR)" || DESTDIR=.; } && test $$(gdb --version | sed -e 's,[^0-9][^0-9]*\([0-9]\)\.\([0-9]\).*,\1\2,;q') -gt 72 && gdb --nx --batch --quiet -ex 'set confirm off' -ex "save gdb-index $$DESTDIR" -ex quit '$(TARGET)' && test -f $(TARGET).gdb-index && objcopy --add-section '.gdb_index=$(TARGET).gdb-index' --set-section-flags '.gdb_index=readonly' '$(TARGET)' '$(TARGET)' && rm -f $(TARGET).gdb-index || true

Makefile: ../LogicAnalyzerQt/LogicAnalyzerQt.pro  /usr/lib64/qt/mkspecs/linux-g++-32/qmake.conf /usr/lib64/qt/mkspecs/common/unix.conf \
		/usr/lib64/qt/mkspecs/common/linux.conf \
		/usr/lib64/qt/mkspecs/common/gcc-base.conf \
		/usr/lib64/qt/mkspecs/common/gcc-base-unix.conf \
		/usr/lib64/qt/mkspecs/common/g++-base.conf \
		/usr/lib64/qt/mkspecs/common/g++-unix.conf \
		/usr/lib64/qt/mkspecs/qconfig.pri \
		/usr/lib64/qt/mkspecs/modules/qt_phonon.pri \
		/usr/lib64/qt/mkspecs/modules/qt_webkit.pri \
		/usr/lib64/qt/mkspecs/modules/qt_webkit_version.pri \
		/usr/lib64/qt/mkspecs/features/qt_functions.prf \
		/usr/lib64/qt/mkspecs/features/qt_config.prf \
		/usr/lib64/qt/mkspecs/features/exclusive_builds.prf \
		/usr/lib64/qt/mkspecs/features/default_pre.prf \
		../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport.pri \
		/usr/lib64/qt/mkspecs/features/debug.prf \
		/usr/lib64/qt/mkspecs/features/default_post.prf \
		/usr/lib64/qt/mkspecs/features/shared.prf \
		/usr/lib64/qt/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/lib64/qt/mkspecs/features/warn_on.prf \
		/usr/lib64/qt/mkspecs/features/qt.prf \
		/usr/lib64/qt/mkspecs/features/unix/thread.prf \
		/usr/lib64/qt/mkspecs/features/moc.prf \
		/usr/lib64/qt/mkspecs/features/resources.prf \
		/usr/lib64/qt/mkspecs/features/uic.prf \
		/usr/lib64/qt/mkspecs/features/yacc.prf \
		/usr/lib64/qt/mkspecs/features/lex.prf \
		/usr/lib64/qt/mkspecs/features/include_source_dir.prf \
		/usr/lib64/qt/lib/libQtGui.prl \
		/usr/lib64/qt/lib/libQtCore.prl
	$(QMAKE) -spec /usr/lib64/qt/mkspecs/linux-g++-32 CONFIG+=debug -o Makefile ../LogicAnalyzerQt/LogicAnalyzerQt.pro
/usr/lib64/qt/mkspecs/common/unix.conf:
/usr/lib64/qt/mkspecs/common/linux.conf:
/usr/lib64/qt/mkspecs/common/gcc-base.conf:
/usr/lib64/qt/mkspecs/common/gcc-base-unix.conf:
/usr/lib64/qt/mkspecs/common/g++-base.conf:
/usr/lib64/qt/mkspecs/common/g++-unix.conf:
/usr/lib64/qt/mkspecs/qconfig.pri:
/usr/lib64/qt/mkspecs/modules/qt_phonon.pri:
/usr/lib64/qt/mkspecs/modules/qt_webkit.pri:
/usr/lib64/qt/mkspecs/modules/qt_webkit_version.pri:
/usr/lib64/qt/mkspecs/features/qt_functions.prf:
/usr/lib64/qt/mkspecs/features/qt_config.prf:
/usr/lib64/qt/mkspecs/features/exclusive_builds.prf:
/usr/lib64/qt/mkspecs/features/default_pre.prf:
../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport.pri:
/usr/lib64/qt/mkspecs/features/debug.prf:
/usr/lib64/qt/mkspecs/features/default_post.prf:
/usr/lib64/qt/mkspecs/features/shared.prf:
/usr/lib64/qt/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/lib64/qt/mkspecs/features/warn_on.prf:
/usr/lib64/qt/mkspecs/features/qt.prf:
/usr/lib64/qt/mkspecs/features/unix/thread.prf:
/usr/lib64/qt/mkspecs/features/moc.prf:
/usr/lib64/qt/mkspecs/features/resources.prf:
/usr/lib64/qt/mkspecs/features/uic.prf:
/usr/lib64/qt/mkspecs/features/yacc.prf:
/usr/lib64/qt/mkspecs/features/lex.prf:
/usr/lib64/qt/mkspecs/features/include_source_dir.prf:
/usr/lib64/qt/lib/libQtGui.prl:
/usr/lib64/qt/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/lib64/qt/mkspecs/linux-g++-32 CONFIG+=debug -o Makefile ../LogicAnalyzerQt/LogicAnalyzerQt.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/untitled21.0.0 || $(MKDIR) .tmp/untitled21.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/untitled21.0.0/ && $(COPY_FILE) --parents ../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport.h ../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialenumerator.h ../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport_global.h ../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport_p.h ../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialenumerator_p.h ../LogicAnalyzerQt/mainwindow.h ../LogicAnalyzerQt/settingsdialog.h ../LogicAnalyzerQt/signal.h ../LogicAnalyzerQt/linepainter.h ../LogicAnalyzerQt/qcustomplot.h .tmp/untitled21.0.0/ && $(COPY_FILE) --parents ../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport.cpp ../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialenumerator.cpp ../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport_unix.cpp ../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialenumerator_linux.cpp ../LogicAnalyzerQt/main.cpp ../LogicAnalyzerQt/mainwindow.cpp ../LogicAnalyzerQt/settingsdialog.cpp ../LogicAnalyzerQt/signal.cpp ../LogicAnalyzerQt/linepainter.cpp ../LogicAnalyzerQt/qcustomplot.cpp .tmp/untitled21.0.0/ && $(COPY_FILE) --parents ../LogicAnalyzerQt/mainwindow.ui ../LogicAnalyzerQt/settingsdialog.ui .tmp/untitled21.0.0/ && (cd `dirname .tmp/untitled21.0.0` && $(TAR) untitled21.0.0.tar untitled21.0.0 && $(COMPRESS) untitled21.0.0.tar) && $(MOVE) `dirname .tmp/untitled21.0.0`/untitled21.0.0.tar.gz . && $(DEL_FILE) -r .tmp/untitled21.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_qextserialport.cpp moc_qextserialenumerator.cpp moc_mainwindow.cpp moc_settingsdialog.cpp moc_qcustomplot.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_qextserialport.cpp moc_qextserialenumerator.cpp moc_mainwindow.cpp moc_settingsdialog.cpp moc_qcustomplot.cpp
moc_qextserialport.cpp: ../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport_global.h \
		../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport.h
	/usr/lib64/qt/bin/moc $(DEFINES) $(INCPATH) ../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport.h -o moc_qextserialport.cpp

moc_qextserialenumerator.cpp: ../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport_global.h \
		../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialenumerator.h
	/usr/lib64/qt/bin/moc $(DEFINES) $(INCPATH) ../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialenumerator.h -o moc_qextserialenumerator.cpp

moc_mainwindow.cpp: ../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport.h \
		../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport_global.h \
		../LogicAnalyzerQt/mainwindow.h
	/usr/lib64/qt/bin/moc $(DEFINES) $(INCPATH) ../LogicAnalyzerQt/mainwindow.h -o moc_mainwindow.cpp

moc_settingsdialog.cpp: ../LogicAnalyzerQt/mainwindow.h \
		../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport.h \
		../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport_global.h \
		../LogicAnalyzerQt/settingsdialog.h
	/usr/lib64/qt/bin/moc $(DEFINES) $(INCPATH) ../LogicAnalyzerQt/settingsdialog.h -o moc_settingsdialog.cpp

moc_qcustomplot.cpp: ../LogicAnalyzerQt/qcustomplot.h
	/usr/lib64/qt/bin/moc $(DEFINES) $(INCPATH) ../LogicAnalyzerQt/qcustomplot.h -o moc_qcustomplot.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_mainwindow.h ui_settingsdialog.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h ui_settingsdialog.h
ui_mainwindow.h: ../LogicAnalyzerQt/mainwindow.ui \
		../LogicAnalyzerQt/qcustomplot.h
	/usr/lib64/qt/bin/uic ../LogicAnalyzerQt/mainwindow.ui -o ui_mainwindow.h

ui_settingsdialog.h: ../LogicAnalyzerQt/settingsdialog.ui
	/usr/lib64/qt/bin/uic ../LogicAnalyzerQt/settingsdialog.ui -o ui_settingsdialog.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

qextserialport.o: ../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport.cpp ../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport.h \
		../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport_global.h \
		../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport_p.h \
		moc_qextserialport.cpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qextserialport.o ../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport.cpp

qextserialenumerator.o: ../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialenumerator.cpp ../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialenumerator.h \
		../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport_global.h \
		../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialenumerator_p.h \
		moc_qextserialenumerator.cpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qextserialenumerator.o ../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialenumerator.cpp

qextserialport_unix.o: ../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport_unix.cpp ../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport.h \
		../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport_global.h \
		../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport_p.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qextserialport_unix.o ../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport_unix.cpp

qextserialenumerator_linux.o: ../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialenumerator_linux.cpp ../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialenumerator.h \
		../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport_global.h \
		../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialenumerator_p.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qextserialenumerator_linux.o ../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialenumerator_linux.cpp

main.o: ../LogicAnalyzerQt/main.cpp ../LogicAnalyzerQt/mainwindow.h \
		../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport.h \
		../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport_global.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o ../LogicAnalyzerQt/main.cpp

mainwindow.o: ../LogicAnalyzerQt/mainwindow.cpp ../LogicAnalyzerQt/mainwindow.h \
		../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport.h \
		../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport_global.h \
		ui_mainwindow.h \
		../LogicAnalyzerQt/qcustomplot.h \
		../LogicAnalyzerQt/settingsdialog.h \
		../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialenumerator.h \
		../LogicAnalyzerQt/linepainter.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o ../LogicAnalyzerQt/mainwindow.cpp

settingsdialog.o: ../LogicAnalyzerQt/settingsdialog.cpp ../LogicAnalyzerQt/settingsdialog.h \
		../LogicAnalyzerQt/mainwindow.h \
		../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport.h \
		../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialport_global.h \
		ui_settingsdialog.h \
		../LogicAnalyzerQt/3rdparty/qextserialport/src/qextserialenumerator.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o settingsdialog.o ../LogicAnalyzerQt/settingsdialog.cpp

signal.o: ../LogicAnalyzerQt/signal.cpp ../LogicAnalyzerQt/signal.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o signal.o ../LogicAnalyzerQt/signal.cpp

linepainter.o: ../LogicAnalyzerQt/linepainter.cpp ../LogicAnalyzerQt/linepainter.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o linepainter.o ../LogicAnalyzerQt/linepainter.cpp

qcustomplot.o: ../LogicAnalyzerQt/qcustomplot.cpp ../LogicAnalyzerQt/qcustomplot.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qcustomplot.o ../LogicAnalyzerQt/qcustomplot.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_settingsdialog.o: moc_settingsdialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_settingsdialog.o moc_settingsdialog.cpp

moc_qcustomplot.o: moc_qcustomplot.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_qcustomplot.o moc_qcustomplot.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

