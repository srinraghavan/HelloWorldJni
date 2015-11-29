LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

# Here we give our module name and source file(s)
LOCAL_MODULE    := HelloJni
LOCAL_SRC_FILES := HelloJni.c

include $(BUILD_SHARED_LIBRARY)