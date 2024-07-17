#ifndef _OPENCV3_VERSION_H_
#define _OPENCV3_VERSION_H_

#ifdef __cplusplus
//#include <opencv2/opencv.hpp>
#include <opencv2/opencv_modules.hpp>
#include <opencv2/core.hpp>
#include <opencv2/calib3d.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
extern "C" {
#endif

#include "core.h"

const char* openCVVersion();

#ifdef __cplusplus
}
#endif

#endif //_OPENCV3_VERSION_H_
