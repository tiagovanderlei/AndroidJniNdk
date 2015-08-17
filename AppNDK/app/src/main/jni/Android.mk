APP_PROJECT_PATH := $(call my-dir)
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := keygenerator
LOCAL_C_INCLUDES := ../native/ \

LOCAL_SRC_FILES := \
../native/keygenerator.cpp \
wrapper.cpp \

LOCAL_LDLIBS := -llog

include $(BUILD_SHARED_LIBRARY)