// Header to include most of the standard headers
// required by rest of the application

// Spinnaker SDK
#include "SpinGenApi/SpinnakerGenApi.h"
#include "Spinnaker.h"

// OpenCV
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>

// ROS
#include <ros/ros.h>
// #include <image_transport/image_transport.h>
#include "sensor_msgs/CameraInfo.h"
#include "sensor_msgs/Image.h"
#include "std_msgs/String.h"

#include <cv_bridge/cv_bridge.h>
#include <image_transport/image_transport.h>

// Standard Libs
#include <boost/thread.hpp>
#include <cstdlib>
#include <errno.h>    // for errno
#include <fstream>
#include <iostream>
#include <limits.h>    // for INT_MAX
#include <math.h>
#include <omp.h>
#include <pwd.h>
#include <queue>
#include <signal.h>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>    // for strtol
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>

// gflags
//#include <gflags/gflags.h>

// glog
//#include <glog/logging.h>

// yaml-cpp
//#include <yaml-cpp/yaml.h>

// gperftools
// #include <gperftools/profiler.h>
