#############################################################################
# Makefile for building: VisualCommand
# Generated by qmake (2.01a) (Qt 4.5.0) on: Mon Jul 27 11:20:57 2009
# Project:  VisualCommand.pro
# Template: app
# Command: /usr/bin/qmake-qt4 -spec /usr/share/qt4/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile VisualCommand.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_XMLPATTERNS_LIB -DQT_XML_LIB -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtNetwork -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtXml -I/usr/include/qt4/QtXmlPatterns -I/usr/include/qt4 -Isrc -I. -I.
LINK          = g++
LFLAGS        = -Wl,-rpath,/usr/local/Trolltech/Qt-4.5.1/lib
LIBS          = $(SUBLIBS)  -L/usr/lib -lQtXmlPatterns -lQtXml -lQtGui -lQtNetwork -lQtCore -lpthread
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake-qt4
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -sf
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = src/qtpropertybrowser.cpp \
		src/qtpropertymanager.cpp \
		src/qteditorfactory.cpp \
		src/qtvariantproperty.cpp \
		src/qttreepropertybrowser.cpp \
		src/qtbuttonpropertybrowser.cpp \
		src/qtgroupboxpropertybrowser.cpp \
		src/qtpropertybrowserutils.cpp \
		main.cpp \
		mainwindow.cpp \
		dialogsearch.cpp \
		dialogupload.cpp \
		arguments/argtab.cpp \
		arguments/checkBoxEditor.cpp \
		arguments/argbase.cpp \
		arguments/numericEditor.cpp \
		arguments/stringEditor.cpp \
		arguments/argstring.cpp \
		arguments/argnumericform.cpp \
		arguments/argformbase.cpp \
		arguments/argfileform.cpp \
		dialogsettings.cpp \
		dialogabout.cpp moc_qtpropertybrowserutils_p.cpp \
		moc_mainwindow.cpp \
		moc_dialogsearch.cpp \
		moc_dialogupload.cpp \
		moc_checkBoxEditor.cpp \
		moc_numericEditor.cpp \
		moc_stringEditor.cpp \
		moc_argbase.cpp \
		moc_argtab.cpp \
		moc_argnumericform.cpp \
		moc_argfileform.cpp \
		moc_dialogsettings.cpp \
		moc_dialogabout.cpp \
		qrc_qtpropertybrowser.cpp \
		qrc_Images.cpp
OBJECTS       = qtpropertybrowser.o \
		qtpropertymanager.o \
		qteditorfactory.o \
		qtvariantproperty.o \
		qttreepropertybrowser.o \
		qtbuttonpropertybrowser.o \
		qtgroupboxpropertybrowser.o \
		qtpropertybrowserutils.o \
		main.o \
		mainwindow.o \
		dialogsearch.o \
		dialogupload.o \
		argtab.o \
		checkBoxEditor.o \
		argbase.o \
		numericEditor.o \
		stringEditor.o \
		argstring.o \
		argnumericform.o \
		argformbase.o \
		argfileform.o \
		dialogsettings.o \
		dialogabout.o \
		moc_qtpropertybrowserutils_p.o \
		moc_mainwindow.o \
		moc_dialogsearch.o \
		moc_dialogupload.o \
		moc_checkBoxEditor.o \
		moc_numericEditor.o \
		moc_stringEditor.o \
		moc_argbase.o \
		moc_argtab.o \
		moc_argnumericform.o \
		moc_argfileform.o \
		moc_dialogsettings.o \
		moc_dialogabout.o \
		qrc_qtpropertybrowser.o \
		qrc_Images.o
DIST          = /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		src/qtpropertybrowser.pri \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/static.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		VisualCommand.pro
QMAKE_TARGET  = VisualCommand
DESTDIR       = 
TARGET        = VisualCommand

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

$(TARGET): ui_mainwindow.h ui_dialogsearch.h ui_dialogupload.h ui_argbase.h ui_argnumericform.h ui_argfileform.h ui_dialogsettings.h ui_dialogabout.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: VisualCommand.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		src/qtpropertybrowser.pri \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/static.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/libQtXmlPatterns.prl \
		/usr/lib/libQtXml.prl \
		/usr/lib/libQtGui.prl \
		/usr/lib/libQtNetwork.prl \
		/usr/lib/libQtCore.prl
	$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile VisualCommand.pro
/usr/share/qt4/mkspecs/common/g++.conf:
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
src/qtpropertybrowser.pri:
/usr/share/qt4/mkspecs/features/debug.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/static.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/libQtXmlPatterns.prl:
/usr/lib/libQtXml.prl:
/usr/lib/libQtGui.prl:
/usr/lib/libQtNetwork.prl:
/usr/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile VisualCommand.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/VisualCommand1.0.0 || $(MKDIR) .tmp/VisualCommand1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/VisualCommand1.0.0/ && $(COPY_FILE) --parents src/qtpropertybrowser.h src/qtpropertymanager.h src/qteditorfactory.h src/qtvariantproperty.h src/qttreepropertybrowser.h src/qtbuttonpropertybrowser.h src/qtgroupboxpropertybrowser.h src/qtpropertybrowserutils_p.h mainwindow.h dialogsearch.h dialogupload.h globals.h arguments/checkBoxEditor.h arguments/numericEditor.h arguments/stringEditor.h arguments/argumentinterface.h arguments/argbase.h arguments/argtab.h arguments/argstring.h arguments/argnumericform.h arguments/argforminterface.h arguments/argformbase.h arguments/argfileform.h dialogsettings.h dialogabout.h .tmp/VisualCommand1.0.0/ && $(COPY_FILE) --parents src/qtpropertybrowser.qrc Images.qrc .tmp/VisualCommand1.0.0/ && $(COPY_FILE) --parents src/qtpropertybrowser.cpp src/qtpropertymanager.cpp src/qteditorfactory.cpp src/qtvariantproperty.cpp src/qttreepropertybrowser.cpp src/qtbuttonpropertybrowser.cpp src/qtgroupboxpropertybrowser.cpp src/qtpropertybrowserutils.cpp main.cpp mainwindow.cpp dialogsearch.cpp dialogupload.cpp arguments/argtab.cpp arguments/checkBoxEditor.cpp arguments/argbase.cpp arguments/numericEditor.cpp arguments/stringEditor.cpp arguments/argstring.cpp arguments/argnumericform.cpp arguments/argformbase.cpp arguments/argfileform.cpp dialogsettings.cpp dialogabout.cpp .tmp/VisualCommand1.0.0/ && $(COPY_FILE) --parents mainwindow.ui dialogsearch.ui dialogupload.ui arguments/argbase.ui arguments/argnumericform.ui arguments/argfileform.ui dialogsettings.ui dialogabout.ui .tmp/VisualCommand1.0.0/ && (cd `dirname .tmp/VisualCommand1.0.0` && $(TAR) VisualCommand1.0.0.tar VisualCommand1.0.0 && $(COMPRESS) VisualCommand1.0.0.tar) && $(MOVE) `dirname .tmp/VisualCommand1.0.0`/VisualCommand1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/VisualCommand1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_qtpropertybrowser.cpp moc_qtpropertymanager.cpp moc_qteditorfactory.cpp moc_qtvariantproperty.cpp moc_qttreepropertybrowser.cpp moc_qtbuttonpropertybrowser.cpp moc_qtgroupboxpropertybrowser.cpp moc_qtpropertybrowserutils_p.cpp moc_mainwindow.cpp moc_dialogsearch.cpp moc_dialogupload.cpp moc_checkBoxEditor.cpp moc_numericEditor.cpp moc_stringEditor.cpp moc_argbase.cpp moc_argtab.cpp moc_argnumericform.cpp moc_argfileform.cpp moc_dialogsettings.cpp moc_dialogabout.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_qtpropertybrowser.cpp moc_qtpropertymanager.cpp moc_qteditorfactory.cpp moc_qtvariantproperty.cpp moc_qttreepropertybrowser.cpp moc_qtbuttonpropertybrowser.cpp moc_qtgroupboxpropertybrowser.cpp moc_qtpropertybrowserutils_p.cpp moc_mainwindow.cpp moc_dialogsearch.cpp moc_dialogupload.cpp moc_checkBoxEditor.cpp moc_numericEditor.cpp moc_stringEditor.cpp moc_argbase.cpp moc_argtab.cpp moc_argnumericform.cpp moc_argfileform.cpp moc_dialogsettings.cpp moc_dialogabout.cpp
moc_qtpropertybrowser.cpp: src/qtpropertybrowser.h
	/usr/bin/moc $(DEFINES) $(INCPATH) src/qtpropertybrowser.h -o moc_qtpropertybrowser.cpp

moc_qtpropertymanager.cpp: src/qtpropertybrowser.h \
		src/qtpropertymanager.h
	/usr/bin/moc $(DEFINES) $(INCPATH) src/qtpropertymanager.h -o moc_qtpropertymanager.cpp

moc_qteditorfactory.cpp: src/qtpropertymanager.h \
		src/qtpropertybrowser.h \
		src/qteditorfactory.h
	/usr/bin/moc $(DEFINES) $(INCPATH) src/qteditorfactory.h -o moc_qteditorfactory.cpp

moc_qtvariantproperty.cpp: src/qtpropertybrowser.h \
		src/qtvariantproperty.h
	/usr/bin/moc $(DEFINES) $(INCPATH) src/qtvariantproperty.h -o moc_qtvariantproperty.cpp

moc_qttreepropertybrowser.cpp: src/qtpropertybrowser.h \
		src/qttreepropertybrowser.h
	/usr/bin/moc $(DEFINES) $(INCPATH) src/qttreepropertybrowser.h -o moc_qttreepropertybrowser.cpp

moc_qtbuttonpropertybrowser.cpp: src/qtpropertybrowser.h \
		src/qtbuttonpropertybrowser.h
	/usr/bin/moc $(DEFINES) $(INCPATH) src/qtbuttonpropertybrowser.h -o moc_qtbuttonpropertybrowser.cpp

moc_qtgroupboxpropertybrowser.cpp: src/qtpropertybrowser.h \
		src/qtgroupboxpropertybrowser.h
	/usr/bin/moc $(DEFINES) $(INCPATH) src/qtgroupboxpropertybrowser.h -o moc_qtgroupboxpropertybrowser.cpp

moc_qtpropertybrowserutils_p.cpp: src/qtpropertybrowserutils_p.h
	/usr/bin/moc $(DEFINES) $(INCPATH) src/qtpropertybrowserutils_p.h -o moc_qtpropertybrowserutils_p.cpp

moc_mainwindow.cpp: dialogsearch.h \
		globals.h \
		src/qttreepropertybrowser.h \
		src/qtpropertybrowser.h \
		arguments/argumentinterface.h \
		mainwindow.h
	/usr/bin/moc $(DEFINES) $(INCPATH) mainwindow.h -o moc_mainwindow.cpp

moc_dialogsearch.cpp: dialogsearch.h
	/usr/bin/moc $(DEFINES) $(INCPATH) dialogsearch.h -o moc_dialogsearch.cpp

moc_dialogupload.cpp: dialogupload.h
	/usr/bin/moc $(DEFINES) $(INCPATH) dialogupload.h -o moc_dialogupload.cpp

moc_checkBoxEditor.cpp: arguments/argbase.h \
		src/qttreepropertybrowser.h \
		src/qtpropertybrowser.h \
		src/qtpropertymanager.h \
		src/qtvariantproperty.h \
		src/QtLineEditFactory \
		src/qteditorfactory.h \
		globals.h \
		arguments/argumentinterface.h \
		arguments/checkBoxEditor.h
	/usr/bin/moc $(DEFINES) $(INCPATH) arguments/checkBoxEditor.h -o moc_checkBoxEditor.cpp

moc_numericEditor.cpp: arguments/argbase.h \
		src/qttreepropertybrowser.h \
		src/qtpropertybrowser.h \
		src/qtpropertymanager.h \
		src/qtvariantproperty.h \
		src/QtLineEditFactory \
		src/qteditorfactory.h \
		globals.h \
		arguments/argumentinterface.h \
		arguments/numericEditor.h
	/usr/bin/moc $(DEFINES) $(INCPATH) arguments/numericEditor.h -o moc_numericEditor.cpp

moc_stringEditor.cpp: arguments/argbase.h \
		src/qttreepropertybrowser.h \
		src/qtpropertybrowser.h \
		src/qtpropertymanager.h \
		src/qtvariantproperty.h \
		src/QtLineEditFactory \
		src/qteditorfactory.h \
		globals.h \
		arguments/argumentinterface.h \
		arguments/stringEditor.h
	/usr/bin/moc $(DEFINES) $(INCPATH) arguments/stringEditor.h -o moc_stringEditor.cpp

moc_argbase.cpp: src/qttreepropertybrowser.h \
		src/qtpropertybrowser.h \
		src/qtpropertymanager.h \
		src/qtvariantproperty.h \
		src/QtLineEditFactory \
		src/qteditorfactory.h \
		globals.h \
		arguments/argumentinterface.h \
		arguments/argbase.h
	/usr/bin/moc $(DEFINES) $(INCPATH) arguments/argbase.h -o moc_argbase.cpp

moc_argtab.cpp: src/qttreepropertybrowser.h \
		src/qtpropertybrowser.h \
		arguments/argumentinterface.h \
		arguments/argtab.h
	/usr/bin/moc $(DEFINES) $(INCPATH) arguments/argtab.h -o moc_argtab.cpp

moc_argnumericform.cpp: arguments/argbase.h \
		src/qttreepropertybrowser.h \
		src/qtpropertybrowser.h \
		src/qtpropertymanager.h \
		src/qtvariantproperty.h \
		src/QtLineEditFactory \
		src/qteditorfactory.h \
		globals.h \
		arguments/argumentinterface.h \
		arguments/argforminterface.h \
		src/QtTreePropertyBrowser \
		arguments/argnumericform.h
	/usr/bin/moc $(DEFINES) $(INCPATH) arguments/argnumericform.h -o moc_argnumericform.cpp

moc_argfileform.cpp: arguments/argforminterface.h \
		src/QtTreePropertyBrowser \
		src/qttreepropertybrowser.h \
		src/qtpropertybrowser.h \
		src/QtEnumEditorFactory \
		src/qteditorfactory.h \
		src/qtpropertymanager.h \
		src/QtEnumPropertyManager \
		arguments/argfileform.h
	/usr/bin/moc $(DEFINES) $(INCPATH) arguments/argfileform.h -o moc_argfileform.cpp

moc_dialogsettings.cpp: dialogsettings.h
	/usr/bin/moc $(DEFINES) $(INCPATH) dialogsettings.h -o moc_dialogsettings.cpp

moc_dialogabout.cpp: dialogabout.h
	/usr/bin/moc $(DEFINES) $(INCPATH) dialogabout.h -o moc_dialogabout.cpp

compiler_rcc_make_all: qrc_qtpropertybrowser.cpp qrc_Images.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_qtpropertybrowser.cpp qrc_Images.cpp
qrc_qtpropertybrowser.cpp: src/qtpropertybrowser.qrc \
		src/images/cursor-vsplit.png \
		src/images/cursor-sizeh.png \
		src/images/cursor-forbidden.png \
		src/images/cursor-sizev.png \
		src/images/cursor-whatsthis.png \
		src/images/cursor-busy.png \
		src/images/cursor-wait.png \
		src/images/cursor-ibeam.png \
		src/images/cursor-hand.png \
		src/images/cursor-openhand.png \
		src/images/cursor-sizeall.png \
		src/images/cursor-sizef.png \
		src/images/cursor-sizeb.png \
		src/images/cursor-hsplit.png \
		src/images/cursor-cross.png \
		src/images/cursor-closedhand.png \
		src/images/cursor-arrow.png \
		src/images/cursor-uparrow.png
	/usr/bin/rcc -name qtpropertybrowser src/qtpropertybrowser.qrc -o qrc_qtpropertybrowser.cpp

qrc_Images.cpp: Images.qrc \
		icons/PNG/onebit_37.png \
		icons/PNG/onebit_34.png \
		icons/PNG/onebit_44.png \
		icons/PNG/onebit_47.png \
		icons/PNG/onebit_27.png \
		icons/PNG/onebit_35.png \
		icons/PNG/onebit_30.png \
		icons/PNG/onebit_45.png \
		icons/PNG/onebit_04.png \
		icons/PNG/onebit_33.png \
		icons/PNG/onebit_02.png \
		icons/PNG/onebit_20.png \
		icons/PNG/onebit_13.png \
		icons/PNG/onebit_11.png \
		icons/PNG/onebit_28.png \
		icons/PNG/32px-Crystal_Clear_app_package.png
	/usr/bin/rcc -name Images Images.qrc -o qrc_Images.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all: qtpropertymanager.moc qteditorfactory.moc qttreepropertybrowser.moc
compiler_moc_source_clean:
	-$(DEL_FILE) qtpropertymanager.moc qteditorfactory.moc qttreepropertybrowser.moc
qtpropertymanager.moc: src/qtpropertymanager.h \
		src/qtpropertybrowser.h \
		src/qtpropertybrowserutils_p.h \
		moc_qtpropertymanager.cpp \
		src/qtpropertymanager.cpp
	/usr/bin/moc $(DEFINES) $(INCPATH) src/qtpropertymanager.cpp -o qtpropertymanager.moc

qteditorfactory.moc: src/qteditorfactory.h \
		src/qtpropertymanager.h \
		src/qtpropertybrowser.h \
		src/qtpropertybrowserutils_p.h \
		moc_qteditorfactory.cpp \
		src/qteditorfactory.cpp
	/usr/bin/moc $(DEFINES) $(INCPATH) src/qteditorfactory.cpp -o qteditorfactory.moc

qttreepropertybrowser.moc: src/qttreepropertybrowser.h \
		src/qtpropertybrowser.h \
		moc_qttreepropertybrowser.cpp \
		src/qttreepropertybrowser.cpp
	/usr/bin/moc $(DEFINES) $(INCPATH) src/qttreepropertybrowser.cpp -o qttreepropertybrowser.moc

compiler_uic_make_all: ui_mainwindow.h ui_dialogsearch.h ui_dialogupload.h ui_argbase.h ui_argnumericform.h ui_argfileform.h ui_dialogsettings.h ui_dialogabout.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h ui_dialogsearch.h ui_dialogupload.h ui_argbase.h ui_argnumericform.h ui_argfileform.h ui_dialogsettings.h ui_dialogabout.h
ui_mainwindow.h: mainwindow.ui
	/usr/bin/uic mainwindow.ui -o ui_mainwindow.h

ui_dialogsearch.h: dialogsearch.ui
	/usr/bin/uic dialogsearch.ui -o ui_dialogsearch.h

ui_dialogupload.h: dialogupload.ui
	/usr/bin/uic dialogupload.ui -o ui_dialogupload.h

ui_argbase.h: arguments/argbase.ui
	/usr/bin/uic arguments/argbase.ui -o ui_argbase.h

ui_argnumericform.h: arguments/argnumericform.ui
	/usr/bin/uic arguments/argnumericform.ui -o ui_argnumericform.h

ui_argfileform.h: arguments/argfileform.ui
	/usr/bin/uic arguments/argfileform.ui -o ui_argfileform.h

ui_dialogsettings.h: dialogsettings.ui
	/usr/bin/uic dialogsettings.ui -o ui_dialogsettings.h

ui_dialogabout.h: dialogabout.ui
	/usr/bin/uic dialogabout.ui -o ui_dialogabout.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean compiler_moc_source_clean compiler_uic_clean 

####### Compile

qtpropertybrowser.o: src/qtpropertybrowser.cpp src/qtpropertybrowser.h \
		moc_qtpropertybrowser.cpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qtpropertybrowser.o src/qtpropertybrowser.cpp

qtpropertymanager.o: src/qtpropertymanager.cpp src/qtpropertymanager.h \
		src/qtpropertybrowser.h \
		src/qtpropertybrowserutils_p.h \
		moc_qtpropertymanager.cpp \
		qtpropertymanager.moc
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qtpropertymanager.o src/qtpropertymanager.cpp

qteditorfactory.o: src/qteditorfactory.cpp src/qteditorfactory.h \
		src/qtpropertymanager.h \
		src/qtpropertybrowser.h \
		src/qtpropertybrowserutils_p.h \
		moc_qteditorfactory.cpp \
		qteditorfactory.moc
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qteditorfactory.o src/qteditorfactory.cpp

qtvariantproperty.o: src/qtvariantproperty.cpp src/qtvariantproperty.h \
		src/qtpropertybrowser.h \
		src/qtpropertymanager.h \
		src/qteditorfactory.h \
		moc_qtvariantproperty.cpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qtvariantproperty.o src/qtvariantproperty.cpp

qttreepropertybrowser.o: src/qttreepropertybrowser.cpp src/qttreepropertybrowser.h \
		src/qtpropertybrowser.h \
		moc_qttreepropertybrowser.cpp \
		qttreepropertybrowser.moc
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qttreepropertybrowser.o src/qttreepropertybrowser.cpp

qtbuttonpropertybrowser.o: src/qtbuttonpropertybrowser.cpp src/qtbuttonpropertybrowser.h \
		src/qtpropertybrowser.h \
		moc_qtbuttonpropertybrowser.cpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qtbuttonpropertybrowser.o src/qtbuttonpropertybrowser.cpp

qtgroupboxpropertybrowser.o: src/qtgroupboxpropertybrowser.cpp src/qtgroupboxpropertybrowser.h \
		src/qtpropertybrowser.h \
		moc_qtgroupboxpropertybrowser.cpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qtgroupboxpropertybrowser.o src/qtgroupboxpropertybrowser.cpp

qtpropertybrowserutils.o: src/qtpropertybrowserutils.cpp src/qtpropertybrowserutils_p.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qtpropertybrowserutils.o src/qtpropertybrowserutils.cpp

main.o: main.cpp mainwindow.h \
		dialogsearch.h \
		globals.h \
		src/qttreepropertybrowser.h \
		src/qtpropertybrowser.h \
		arguments/argumentinterface.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

mainwindow.o: mainwindow.cpp mainwindow.h \
		dialogsearch.h \
		globals.h \
		src/qttreepropertybrowser.h \
		src/qtpropertybrowser.h \
		arguments/argumentinterface.h \
		ui_mainwindow.h \
		dialogupload.h \
		dialogsettings.h \
		dialogabout.h \
		arguments/argtab.h \
		src/qtpropertymanager.h \
		src/qtvariantproperty.h \
		src/QtSpinBoxFactory \
		src/qteditorfactory.h \
		src/QtEnumEditorFactory \
		arguments/stringEditor.h \
		arguments/argbase.h \
		src/QtLineEditFactory \
		arguments/numericEditor.h \
		arguments/checkBoxEditor.h \
		arguments/argnumericform.h \
		arguments/argforminterface.h \
		src/QtTreePropertyBrowser \
		arguments/argformbase.h \
		arguments/argfileform.h \
		src/QtEnumPropertyManager
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o mainwindow.cpp

dialogsearch.o: dialogsearch.cpp dialogsearch.h \
		ui_dialogsearch.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o dialogsearch.o dialogsearch.cpp

dialogupload.o: dialogupload.cpp dialogupload.h \
		ui_dialogupload.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o dialogupload.o dialogupload.cpp

argtab.o: arguments/argtab.cpp arguments/argtab.h \
		src/qttreepropertybrowser.h \
		src/qtpropertybrowser.h \
		arguments/argumentinterface.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o argtab.o arguments/argtab.cpp

checkBoxEditor.o: arguments/checkBoxEditor.cpp arguments/checkBoxEditor.h \
		arguments/argbase.h \
		src/qttreepropertybrowser.h \
		src/qtpropertybrowser.h \
		src/qtpropertymanager.h \
		src/qtvariantproperty.h \
		src/QtLineEditFactory \
		src/qteditorfactory.h \
		globals.h \
		arguments/argumentinterface.h \
		ui_argbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o checkBoxEditor.o arguments/checkBoxEditor.cpp

argbase.o: arguments/argbase.cpp arguments/argbase.h \
		src/qttreepropertybrowser.h \
		src/qtpropertybrowser.h \
		src/qtpropertymanager.h \
		src/qtvariantproperty.h \
		src/QtLineEditFactory \
		src/qteditorfactory.h \
		globals.h \
		arguments/argumentinterface.h \
		ui_argbase.h \
		arguments/argtab.h \
		src/QtSpinBoxFactory \
		src/QtEnumEditorFactory
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o argbase.o arguments/argbase.cpp

numericEditor.o: arguments/numericEditor.cpp arguments/numericEditor.h \
		arguments/argbase.h \
		src/qttreepropertybrowser.h \
		src/qtpropertybrowser.h \
		src/qtpropertymanager.h \
		src/qtvariantproperty.h \
		src/QtLineEditFactory \
		src/qteditorfactory.h \
		globals.h \
		arguments/argumentinterface.h \
		ui_argbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o numericEditor.o arguments/numericEditor.cpp

stringEditor.o: arguments/stringEditor.cpp arguments/stringEditor.h \
		arguments/argbase.h \
		src/qttreepropertybrowser.h \
		src/qtpropertybrowser.h \
		src/qtpropertymanager.h \
		src/qtvariantproperty.h \
		src/QtLineEditFactory \
		src/qteditorfactory.h \
		globals.h \
		arguments/argumentinterface.h \
		ui_argbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o stringEditor.o arguments/stringEditor.cpp

argstring.o: arguments/argstring.cpp arguments/argstring.h \
		arguments/argbase.h \
		src/qttreepropertybrowser.h \
		src/qtpropertybrowser.h \
		src/qtpropertymanager.h \
		src/qtvariantproperty.h \
		src/QtLineEditFactory \
		src/qteditorfactory.h \
		globals.h \
		arguments/argumentinterface.h \
		ui_argbase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o argstring.o arguments/argstring.cpp

argnumericform.o: arguments/argnumericform.cpp arguments/argnumericform.h \
		arguments/argbase.h \
		src/qttreepropertybrowser.h \
		src/qtpropertybrowser.h \
		src/qtpropertymanager.h \
		src/qtvariantproperty.h \
		src/QtLineEditFactory \
		src/qteditorfactory.h \
		globals.h \
		arguments/argumentinterface.h \
		arguments/argforminterface.h \
		src/QtTreePropertyBrowser \
		arguments/ui_argnumericform.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o argnumericform.o arguments/argnumericform.cpp

argformbase.o: arguments/argformbase.cpp arguments/argformbase.h \
		arguments/argbase.h \
		src/qttreepropertybrowser.h \
		src/qtpropertybrowser.h \
		src/qtpropertymanager.h \
		src/qtvariantproperty.h \
		src/QtLineEditFactory \
		src/qteditorfactory.h \
		globals.h \
		arguments/argumentinterface.h \
		arguments/argforminterface.h \
		src/QtTreePropertyBrowser
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o argformbase.o arguments/argformbase.cpp

argfileform.o: arguments/argfileform.cpp arguments/argfileform.h \
		arguments/argforminterface.h \
		src/QtTreePropertyBrowser \
		src/qttreepropertybrowser.h \
		src/qtpropertybrowser.h \
		src/QtEnumEditorFactory \
		src/qteditorfactory.h \
		src/qtpropertymanager.h \
		src/QtEnumPropertyManager \
		ui_argfileform.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o argfileform.o arguments/argfileform.cpp

dialogsettings.o: dialogsettings.cpp dialogsettings.h \
		ui_dialogsettings.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o dialogsettings.o dialogsettings.cpp

dialogabout.o: dialogabout.cpp dialogabout.h \
		ui_dialogabout.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o dialogabout.o dialogabout.cpp

moc_qtpropertybrowserutils_p.o: moc_qtpropertybrowserutils_p.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_qtpropertybrowserutils_p.o moc_qtpropertybrowserutils_p.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_dialogsearch.o: moc_dialogsearch.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_dialogsearch.o moc_dialogsearch.cpp

moc_dialogupload.o: moc_dialogupload.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_dialogupload.o moc_dialogupload.cpp

moc_checkBoxEditor.o: moc_checkBoxEditor.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_checkBoxEditor.o moc_checkBoxEditor.cpp

moc_numericEditor.o: moc_numericEditor.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_numericEditor.o moc_numericEditor.cpp

moc_stringEditor.o: moc_stringEditor.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_stringEditor.o moc_stringEditor.cpp

moc_argbase.o: moc_argbase.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_argbase.o moc_argbase.cpp

moc_argtab.o: moc_argtab.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_argtab.o moc_argtab.cpp

moc_argnumericform.o: moc_argnumericform.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_argnumericform.o moc_argnumericform.cpp

moc_argfileform.o: moc_argfileform.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_argfileform.o moc_argfileform.cpp

moc_dialogsettings.o: moc_dialogsettings.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_dialogsettings.o moc_dialogsettings.cpp

moc_dialogabout.o: moc_dialogabout.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_dialogabout.o moc_dialogabout.cpp

qrc_qtpropertybrowser.o: qrc_qtpropertybrowser.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_qtpropertybrowser.o qrc_qtpropertybrowser.cpp

qrc_Images.o: qrc_Images.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_Images.o qrc_Images.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:
