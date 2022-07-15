#
# This is a project Makefile. It is assumed the directory this Makefile resides in is a
# project subdirectory.
#

PROJECT_NAME := ST_samjin_wallswitch

EXTRA_COMPONENT_DIRS := ${IDF_PATH}/../../iot-core
EXTRA_COMPONENT_DIRS := /home/samjin-rnd-pc/st-device-sdk-c-ref/apps/esp8266/ST_samjin_ws_try_pull/components
EXCLUDE_COMPONENTS := i2cdev pca9557 si7021

CFLAGS += -Wno-unused-const-variable

include $(IDF_PATH)/make/project.mk

