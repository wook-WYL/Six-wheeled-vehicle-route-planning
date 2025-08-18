# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_receive_theta_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED receive_theta_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(receive_theta_FOUND FALSE)
  elseif(NOT receive_theta_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(receive_theta_FOUND FALSE)
  endif()
  return()
endif()
set(_receive_theta_CONFIG_INCLUDED TRUE)

# output package information
if(NOT receive_theta_FIND_QUIETLY)
  message(STATUS "Found receive_theta: 0.0.1 (${receive_theta_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'receive_theta' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${receive_theta_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(receive_theta_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${receive_theta_DIR}/${_extra}")
endforeach()
