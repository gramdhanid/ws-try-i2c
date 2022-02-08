#
# This is a project Makefile. It is assumed the directory this Makefile resides in is a
# project subdirectory.
#

PROJECT_NAME := ST_samjin_wallswitch

EXTRA_COMPONENT_DIRS := ${IDF_PATH}/../../iot-core

CFLAGS += -Wno-unused-const-variable

include $(IDF_PATH)/make/project.mk
