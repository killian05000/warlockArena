#############################################################################
# Makefile for building: warlockArena
# Generated by qmake (3.1) (Qt 5.9.1)
# Project:  warlockArena.pro
# Template: app
# Command: /usr/bin/qmake -o Makefile warlockArena.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug
#############################################################################

MAKEFILE      = Makefile

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_QML_DEBUG -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_CORE_LIB
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT -fPIC $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT -fPIC $(DEFINES)
INCPATH       = -I. -isystem /usr/include/qt -isystem /usr/include/qt/QtWidgets -isystem /usr/include/qt/QtGui -isystem /usr/include/qt/QtCore -I. -isystem /usr/include/libdrm -I/usr/lib/qt/mkspecs/linux-g++
QMAKE         = /usr/bin/qmake
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = cp -f -R
QINSTALL      = /usr/bin/qmake -install qinstall
QINSTALL_PROGRAM = /usr/bin/qmake -install qinstall -exe
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
TAR           = tar -cf
COMPRESS      = gzip -9f
DISTNAME      = warlockArena1.0.0
DISTDIR = /home/killian/Documents/GitHub/warlockArena/.tmp/warlockArena1.0.0
LINK          = g++
LFLAGS        = 
LIBS          = $(SUBLIBS) -lQt5Widgets -lQt5Gui -lQt5Core -lGL -lpthread 
AR            = ar cqs
RANLIB        = 
SED           = sed
STRIP         = strip

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		mafenetre.cpp \
		personnage.cpp \
		guerrier.cpp \
		mage.cpp qrc_ressources.cpp \
		moc_mafenetre.cpp
OBJECTS       = main.o \
		mafenetre.o \
		personnage.o \
		guerrier.o \
		mage.o \
		qrc_ressources.o \
		moc_mafenetre.o
DIST          = /usr/lib/qt/mkspecs/features/spec_pre.prf \
		/usr/lib/qt/mkspecs/common/unix.conf \
		/usr/lib/qt/mkspecs/common/linux.conf \
		/usr/lib/qt/mkspecs/common/sanitize.conf \
		/usr/lib/qt/mkspecs/common/gcc-base.conf \
		/usr/lib/qt/mkspecs/common/gcc-base-unix.conf \
		/usr/lib/qt/mkspecs/common/g++-base.conf \
		/usr/lib/qt/mkspecs/common/g++-unix.conf \
		/usr/lib/qt/mkspecs/qconfig.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3danimation.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3danimation_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dcore.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dcore_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dextras.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dextras_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dinput.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dinput_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dlogic.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dlogic_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dquick.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dquick_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dquickanimation.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dquickanimation_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dquickextras.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dquickextras_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dquickinput.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dquickinput_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dquickrender.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dquickrender_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dquickscene2d.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dquickscene2d_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3drender.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3drender_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_accessibility_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_bluetooth.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_bluetooth_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_charts.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_charts_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_concurrent.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_concurrent_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_core.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_core_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_datavisualization.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_datavisualization_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_dbus.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_dbus_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_designer.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_designer_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_designercomponents_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_egl_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_fb_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_fontdatabase_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_gamepad.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_gamepad_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_glx_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_gui.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_gui_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_help.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_help_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_input_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_kms_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_linuxaccessibility_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_location.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_location_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_multimedia.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_multimedia_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_multimediawidgets.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_network.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_network_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_networkauth.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_networkauth_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_nfc.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_nfc_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_opengl.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_opengl_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_openglextensions.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_packetprotocol_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_platformcompositor_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_positioning.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_positioning_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_printsupport.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_printsupport_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_qml.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_qml_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_qmldebug_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_qmltest.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_qmltest_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_quick.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_quick_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_quickcontrols2.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_quickcontrols2_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_quickparticles_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_quicktemplates2_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_quickwidgets.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_script.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_script_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_scripttools.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_scripttools_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_scxml.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_scxml_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_sensors.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_sensors_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_serialbus.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_serialbus_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_serialport.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_serialport_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_service_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_sql.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_sql_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_svg.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_svg_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_testlib.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_testlib_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_texttospeech.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_texttospeech_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_theme_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_uiplugin.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_uitools.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_uitools_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_waylandclient.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_waylandclient_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_waylandcompositor.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_waylandcompositor_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_webchannel.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_webchannel_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_webengine.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_webengine_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_webenginecore.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_webenginecore_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_webenginecoreheaders_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_webenginewidgets.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_webenginewidgets_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_webkit.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_webkitwidgets.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_websockets.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_websockets_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_webview.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_webview_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_widgets.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_widgets_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_x11extras.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_x11extras_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_xml.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_xml_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_xmlpatterns.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		/usr/lib/qt/mkspecs/features/qt_functions.prf \
		/usr/lib/qt/mkspecs/features/qt_config.prf \
		/usr/lib/qt/mkspecs/linux-g++/qmake.conf \
		/usr/lib/qt/mkspecs/features/spec_post.prf \
		.qmake.stash \
		/usr/lib/qt/mkspecs/features/exclusive_builds.prf \
		/usr/lib/qt/mkspecs/features/toolchain.prf \
		/usr/lib/qt/mkspecs/features/default_pre.prf \
		/usr/lib/qt/mkspecs/features/resolve_config.prf \
		/usr/lib/qt/mkspecs/features/default_post.prf \
		/usr/lib/qt/mkspecs/features/qml_debug.prf \
		/usr/lib/qt/mkspecs/features/warn_on.prf \
		/usr/lib/qt/mkspecs/features/qt.prf \
		/usr/lib/qt/mkspecs/features/resources.prf \
		/usr/lib/qt/mkspecs/features/moc.prf \
		/usr/lib/qt/mkspecs/features/unix/opengl.prf \
		/usr/lib/qt/mkspecs/features/uic.prf \
		/usr/lib/qt/mkspecs/features/unix/thread.prf \
		/usr/lib/qt/mkspecs/features/qmake_use.prf \
		/usr/lib/qt/mkspecs/features/file_copies.prf \
		/usr/lib/qt/mkspecs/features/testcase_targets.prf \
		/usr/lib/qt/mkspecs/features/exceptions.prf \
		/usr/lib/qt/mkspecs/features/yacc.prf \
		/usr/lib/qt/mkspecs/features/lex.prf \
		warlockArena.pro mafenetre.h \
		personnage.h \
		guerrier.h \
		mage.h main.cpp \
		mafenetre.cpp \
		personnage.cpp \
		guerrier.cpp \
		mage.cpp
QMAKE_TARGET  = warlockArena
DESTDIR       = 
TARGET        = warlockArena


first: all
####### Build rules

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: warlockArena.pro /usr/lib/qt/mkspecs/linux-g++/qmake.conf /usr/lib/qt/mkspecs/features/spec_pre.prf \
		/usr/lib/qt/mkspecs/common/unix.conf \
		/usr/lib/qt/mkspecs/common/linux.conf \
		/usr/lib/qt/mkspecs/common/sanitize.conf \
		/usr/lib/qt/mkspecs/common/gcc-base.conf \
		/usr/lib/qt/mkspecs/common/gcc-base-unix.conf \
		/usr/lib/qt/mkspecs/common/g++-base.conf \
		/usr/lib/qt/mkspecs/common/g++-unix.conf \
		/usr/lib/qt/mkspecs/qconfig.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3danimation.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3danimation_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dcore.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dcore_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dextras.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dextras_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dinput.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dinput_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dlogic.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dlogic_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dquick.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dquick_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dquickanimation.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dquickanimation_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dquickextras.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dquickextras_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dquickinput.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dquickinput_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dquickrender.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dquickrender_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dquickscene2d.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3dquickscene2d_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3drender.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_3drender_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_accessibility_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_bluetooth.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_bluetooth_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_charts.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_charts_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_concurrent.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_concurrent_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_core.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_core_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_datavisualization.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_datavisualization_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_dbus.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_dbus_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_designer.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_designer_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_designercomponents_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_egl_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_fb_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_fontdatabase_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_gamepad.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_gamepad_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_glx_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_gui.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_gui_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_help.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_help_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_input_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_kms_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_linuxaccessibility_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_location.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_location_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_multimedia.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_multimedia_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_multimediawidgets.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_network.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_network_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_networkauth.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_networkauth_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_nfc.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_nfc_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_opengl.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_opengl_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_openglextensions.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_packetprotocol_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_platformcompositor_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_positioning.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_positioning_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_printsupport.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_printsupport_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_qml.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_qml_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_qmldebug_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_qmltest.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_qmltest_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_quick.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_quick_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_quickcontrols2.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_quickcontrols2_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_quickparticles_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_quicktemplates2_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_quickwidgets.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_script.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_script_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_scripttools.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_scripttools_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_scxml.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_scxml_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_sensors.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_sensors_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_serialbus.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_serialbus_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_serialport.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_serialport_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_service_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_sql.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_sql_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_svg.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_svg_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_testlib.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_testlib_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_texttospeech.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_texttospeech_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_theme_support_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_uiplugin.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_uitools.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_uitools_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_waylandclient.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_waylandclient_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_waylandcompositor.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_waylandcompositor_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_webchannel.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_webchannel_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_webengine.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_webengine_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_webenginecore.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_webenginecore_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_webenginecoreheaders_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_webenginewidgets.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_webenginewidgets_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_webkit.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_webkitwidgets.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_websockets.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_websockets_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_webview.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_webview_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_widgets.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_widgets_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_x11extras.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_x11extras_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_xml.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_xml_private.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_xmlpatterns.pri \
		/usr/lib/qt/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		/usr/lib/qt/mkspecs/features/qt_functions.prf \
		/usr/lib/qt/mkspecs/features/qt_config.prf \
		/usr/lib/qt/mkspecs/linux-g++/qmake.conf \
		/usr/lib/qt/mkspecs/features/spec_post.prf \
		.qmake.stash \
		/usr/lib/qt/mkspecs/features/exclusive_builds.prf \
		/usr/lib/qt/mkspecs/features/toolchain.prf \
		/usr/lib/qt/mkspecs/features/default_pre.prf \
		/usr/lib/qt/mkspecs/features/resolve_config.prf \
		/usr/lib/qt/mkspecs/features/default_post.prf \
		/usr/lib/qt/mkspecs/features/qml_debug.prf \
		/usr/lib/qt/mkspecs/features/warn_on.prf \
		/usr/lib/qt/mkspecs/features/qt.prf \
		/usr/lib/qt/mkspecs/features/resources.prf \
		/usr/lib/qt/mkspecs/features/moc.prf \
		/usr/lib/qt/mkspecs/features/unix/opengl.prf \
		/usr/lib/qt/mkspecs/features/uic.prf \
		/usr/lib/qt/mkspecs/features/unix/thread.prf \
		/usr/lib/qt/mkspecs/features/qmake_use.prf \
		/usr/lib/qt/mkspecs/features/file_copies.prf \
		/usr/lib/qt/mkspecs/features/testcase_targets.prf \
		/usr/lib/qt/mkspecs/features/exceptions.prf \
		/usr/lib/qt/mkspecs/features/yacc.prf \
		/usr/lib/qt/mkspecs/features/lex.prf \
		warlockArena.pro \
		ressources.qrc \
		/usr/lib/libQt5Widgets.prl \
		/usr/lib/libQt5Gui.prl \
		/usr/lib/libQt5Core.prl
	$(QMAKE) -o Makefile warlockArena.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug
/usr/lib/qt/mkspecs/features/spec_pre.prf:
/usr/lib/qt/mkspecs/common/unix.conf:
/usr/lib/qt/mkspecs/common/linux.conf:
/usr/lib/qt/mkspecs/common/sanitize.conf:
/usr/lib/qt/mkspecs/common/gcc-base.conf:
/usr/lib/qt/mkspecs/common/gcc-base-unix.conf:
/usr/lib/qt/mkspecs/common/g++-base.conf:
/usr/lib/qt/mkspecs/common/g++-unix.conf:
/usr/lib/qt/mkspecs/qconfig.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_3danimation.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_3danimation_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_3dcore.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_3dcore_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_3dextras.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_3dextras_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_3dinput.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_3dinput_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_3dlogic.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_3dlogic_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_3dquick.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_3dquick_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_3dquickanimation.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_3dquickanimation_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_3dquickextras.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_3dquickextras_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_3dquickinput.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_3dquickinput_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_3dquickrender.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_3dquickrender_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_3dquickscene2d.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_3dquickscene2d_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_3drender.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_3drender_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_accessibility_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_bluetooth.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_bluetooth_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_bootstrap_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_charts.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_charts_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_concurrent.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_concurrent_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_core.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_core_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_datavisualization.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_datavisualization_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_dbus.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_dbus_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_designer.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_designer_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_designercomponents_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_devicediscovery_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_egl_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_fb_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_fontdatabase_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_gamepad.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_gamepad_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_glx_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_gui.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_gui_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_help.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_help_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_input_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_kms_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_linuxaccessibility_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_location.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_location_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_multimedia.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_multimedia_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_multimediawidgets.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_network.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_network_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_networkauth.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_networkauth_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_nfc.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_nfc_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_opengl.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_opengl_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_openglextensions.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_openglextensions_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_packetprotocol_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_platformcompositor_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_positioning.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_positioning_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_printsupport.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_printsupport_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_qml.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_qml_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_qmldebug_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_qmldevtools_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_qmltest.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_qmltest_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_quick.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_quick_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_quickcontrols2.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_quickcontrols2_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_quickparticles_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_quicktemplates2_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_quickwidgets.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_quickwidgets_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_script.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_script_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_scripttools.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_scripttools_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_scxml.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_scxml_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_sensors.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_sensors_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_serialbus.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_serialbus_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_serialport.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_serialport_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_service_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_sql.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_sql_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_svg.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_svg_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_testlib.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_testlib_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_texttospeech.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_texttospeech_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_theme_support_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_uiplugin.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_uitools.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_uitools_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_waylandclient.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_waylandclient_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_waylandcompositor.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_waylandcompositor_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_webchannel.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_webchannel_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_webengine.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_webengine_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_webenginecore.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_webenginecore_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_webenginecoreheaders_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_webenginewidgets.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_webenginewidgets_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_webkit.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_webkitwidgets.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_websockets.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_websockets_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_webview.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_webview_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_widgets.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_widgets_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_x11extras.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_x11extras_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_xml.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_xml_private.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_xmlpatterns.pri:
/usr/lib/qt/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
/usr/lib/qt/mkspecs/features/qt_functions.prf:
/usr/lib/qt/mkspecs/features/qt_config.prf:
/usr/lib/qt/mkspecs/linux-g++/qmake.conf:
/usr/lib/qt/mkspecs/features/spec_post.prf:
.qmake.stash:
/usr/lib/qt/mkspecs/features/exclusive_builds.prf:
/usr/lib/qt/mkspecs/features/toolchain.prf:
/usr/lib/qt/mkspecs/features/default_pre.prf:
/usr/lib/qt/mkspecs/features/resolve_config.prf:
/usr/lib/qt/mkspecs/features/default_post.prf:
/usr/lib/qt/mkspecs/features/qml_debug.prf:
/usr/lib/qt/mkspecs/features/warn_on.prf:
/usr/lib/qt/mkspecs/features/qt.prf:
/usr/lib/qt/mkspecs/features/resources.prf:
/usr/lib/qt/mkspecs/features/moc.prf:
/usr/lib/qt/mkspecs/features/unix/opengl.prf:
/usr/lib/qt/mkspecs/features/uic.prf:
/usr/lib/qt/mkspecs/features/unix/thread.prf:
/usr/lib/qt/mkspecs/features/qmake_use.prf:
/usr/lib/qt/mkspecs/features/file_copies.prf:
/usr/lib/qt/mkspecs/features/testcase_targets.prf:
/usr/lib/qt/mkspecs/features/exceptions.prf:
/usr/lib/qt/mkspecs/features/yacc.prf:
/usr/lib/qt/mkspecs/features/lex.prf:
warlockArena.pro:
ressources.qrc:
/usr/lib/libQt5Widgets.prl:
/usr/lib/libQt5Gui.prl:
/usr/lib/libQt5Core.prl:
qmake: FORCE
	@$(QMAKE) -o Makefile warlockArena.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug

qmake_all: FORCE


all: Makefile $(TARGET)

dist: distdir FORCE
	(cd `dirname $(DISTDIR)` && $(TAR) $(DISTNAME).tar $(DISTNAME) && $(COMPRESS) $(DISTNAME).tar) && $(MOVE) `dirname $(DISTDIR)`/$(DISTNAME).tar.gz . && $(DEL_FILE) -r $(DISTDIR)

distdir: FORCE
	@test -d $(DISTDIR) || mkdir -p $(DISTDIR)
	$(COPY_FILE) --parents $(DIST) $(DISTDIR)/
	$(COPY_FILE) --parents ressources.qrc $(DISTDIR)/
	$(COPY_FILE) --parents /usr/lib/qt/mkspecs/features/data/dummy.cpp $(DISTDIR)/
	$(COPY_FILE) --parents mafenetre.h personnage.h guerrier.h mage.h $(DISTDIR)/
	$(COPY_FILE) --parents main.cpp mafenetre.cpp personnage.cpp guerrier.cpp mage.cpp $(DISTDIR)/


clean: compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


distclean: clean 
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) .qmake.stash
	-$(DEL_FILE) Makefile


####### Sub-libraries

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

check: first

benchmark: first

compiler_rcc_make_all: qrc_ressources.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_ressources.cpp
qrc_ressources.cpp: ressources.qrc \
		/usr/bin/rcc \
		Images/Mage/stickman2AnimMageAction3.jpg \
		Images/Mage/stickman1MageCrown.jpg \
		Images/Mage/stickman1AnimMageAction2.jpg \
		Images/Mage/stickman2Coffin.jpg \
		Images/Mage/stickman1Coffin.jpg \
		Images/Mage/stickman2AnimMageAction2.jpg \
		Images/Mage/stickman1AnimMageAction1.jpg \
		Images/Mage/stickman1Mage.jpg \
		Images/Mage/stickman2MageCrown.jpg \
		Images/Mage/stickman2AnimMageAction1.jpg \
		Images/Mage/stickman2Mage.jpg \
		Images/Mage/stickman1AnimMageAction3.jpg \
		Images/Guerrier/stickman1AnimGuerrierAction2.jpg \
		Images/Guerrier/stickman2Coffin.jpg \
		Images/Guerrier/stickman2AnimGuerrierAction3.jpg \
		Images/Guerrier/stickman1Coffin.jpg \
		Images/Guerrier/stickman1Guerrier.jpg \
		Images/Guerrier/stickman1AnimGuerrierAction1.jpg \
		Images/Guerrier/stickman2AnimGuerrierAction2.jpg \
		Images/Guerrier/stickman1GuerrierCrown.jpg \
		Images/Guerrier/stickman2GuerrierCrown.jpg \
		Images/Guerrier/stickman2AnimGuerrierAction1.jpg \
		Images/Guerrier/stickman2Guerrier.jpg \
		Images/Guerrier/stickman1AnimGuerrierAction3.jpg
	/usr/bin/rcc -name ressources ressources.qrc -o qrc_ressources.cpp

compiler_moc_predefs_make_all: moc_predefs.h
compiler_moc_predefs_clean:
	-$(DEL_FILE) moc_predefs.h
moc_predefs.h: /usr/lib/qt/mkspecs/features/data/dummy.cpp
	g++ -pipe -g -Wall -W -dM -E -o moc_predefs.h /usr/lib/qt/mkspecs/features/data/dummy.cpp

compiler_moc_header_make_all: moc_mafenetre.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mafenetre.cpp
moc_mafenetre.cpp: personnage.h \
		guerrier.h \
		mage.h \
		mafenetre.h \
		moc_predefs.h \
		/usr/bin/moc
	/usr/bin/moc $(DEFINES) --include ./moc_predefs.h -I/usr/lib/qt/mkspecs/linux-g++ -I/home/killian/Documents/GitHub/warlockArena -I/usr/include/qt -I/usr/include/qt/QtWidgets -I/usr/include/qt/QtGui -I/usr/include/qt/QtCore -I/usr/include/c++/6.3.1 -I/usr/include/c++/6.3.1/x86_64-pc-linux-gnu -I/usr/include/c++/6.3.1/backward -I/usr/lib/gcc/x86_64-pc-linux-gnu/6.3.1/include -I/usr/local/include -I/usr/lib/gcc/x86_64-pc-linux-gnu/6.3.1/include-fixed -I/usr/include -I/usr/include/c++/7.2.0 -I/usr/include/c++/7.2.0/x86_64-pc-linux-gnu -I/usr/include/c++/7.2.0/backward -I/usr/lib/gcc/x86_64-pc-linux-gnu/7.2.0/include -I/usr/local/include -I/usr/lib/gcc/x86_64-pc-linux-gnu/7.2.0/include-fixed -I/usr/include mafenetre.h -o moc_mafenetre.cpp

compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_rcc_clean compiler_moc_predefs_clean compiler_moc_header_clean 

####### Compile

main.o: main.cpp mafenetre.h \
		personnage.h \
		guerrier.h \
		mage.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

mafenetre.o: mafenetre.cpp mafenetre.h \
		personnage.h \
		guerrier.h \
		mage.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mafenetre.o mafenetre.cpp

personnage.o: personnage.cpp personnage.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o personnage.o personnage.cpp

guerrier.o: guerrier.cpp guerrier.h \
		personnage.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o guerrier.o guerrier.cpp

mage.o: mage.cpp mage.h \
		personnage.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mage.o mage.cpp

qrc_ressources.o: qrc_ressources.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_ressources.o qrc_ressources.cpp

moc_mafenetre.o: moc_mafenetre.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mafenetre.o moc_mafenetre.cpp

####### Install

install:  FORCE

uninstall:  FORCE

FORCE:

