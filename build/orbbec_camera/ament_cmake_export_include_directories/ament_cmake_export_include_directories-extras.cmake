# generated from ament_cmake_export_include_directories/cmake/ament_cmake_export_include_directories-extras.cmake.in

set(_exported_include_dirs "${orbbec_camera_DIR}/../../../include;/home/wook/ros2/ros2_ws/src/OrbbecSDK_ROS2/orbbec_camera/SDK/include/")

# append include directories to orbbec_camera_INCLUDE_DIRS
# warn about not existing paths
if(NOT _exported_include_dirs STREQUAL "")
  find_package(ament_cmake_core QUIET REQUIRED)
  foreach(_exported_include_dir ${_exported_include_dirs})
    if(NOT IS_DIRECTORY "${_exported_include_dir}")
      message(WARNING "Package 'orbbec_camera' exports the include directory '${_exported_include_dir}' which doesn't exist")
    endif()
    normalize_path(_exported_include_dir "${_exported_include_dir}")
    list(APPEND orbbec_camera_INCLUDE_DIRS "${_exported_include_dir}")
  endforeach()
endif()
