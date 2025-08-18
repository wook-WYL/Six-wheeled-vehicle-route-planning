// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from arise_slam_mid360_msgs:msg/LaserFeature.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "arise_slam_mid360_msgs/msg/detail/laser_feature__struct.h"
#include "arise_slam_mid360_msgs/msg/detail/laser_feature__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__point_cloud2__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__point_cloud2__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__point_cloud2__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__point_cloud2__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__point_cloud2__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__point_cloud2__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__point_cloud2__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__point_cloud2__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool arise_slam_mid360_msgs__msg__laser_feature__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("arise_slam_mid360_msgs.msg._laser_feature.LaserFeature", full_classname_dest, 54) == 0);
  }
  arise_slam_mid360_msgs__msg__LaserFeature * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // sensor
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sensor = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // imu_available
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_available");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->imu_available = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // odom_available
    PyObject * field = PyObject_GetAttrString(_pymsg, "odom_available");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->odom_available = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // imu_quaternion_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_quaternion_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_quaternion_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_quaternion_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_quaternion_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_quaternion_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_quaternion_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_quaternion_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_quaternion_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_quaternion_w
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_quaternion_w");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imu_quaternion_w = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // initial_pose_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "initial_pose_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->initial_pose_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // initial_pose_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "initial_pose_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->initial_pose_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // initial_pose_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "initial_pose_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->initial_pose_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // initial_quaternion_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "initial_quaternion_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->initial_quaternion_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // initial_quaternion_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "initial_quaternion_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->initial_quaternion_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // initial_quaternion_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "initial_quaternion_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->initial_quaternion_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // initial_quaternion_w
    PyObject * field = PyObject_GetAttrString(_pymsg, "initial_quaternion_w");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->initial_quaternion_w = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imu_preintegration_reset_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_preintegration_reset_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->imu_preintegration_reset_id = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // cloud_nodistortion
    PyObject * field = PyObject_GetAttrString(_pymsg, "cloud_nodistortion");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__point_cloud2__convert_from_py(field, &ros_message->cloud_nodistortion)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // cloud_corner
    PyObject * field = PyObject_GetAttrString(_pymsg, "cloud_corner");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__point_cloud2__convert_from_py(field, &ros_message->cloud_corner)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // cloud_surface
    PyObject * field = PyObject_GetAttrString(_pymsg, "cloud_surface");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__point_cloud2__convert_from_py(field, &ros_message->cloud_surface)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // cloud_realsense
    PyObject * field = PyObject_GetAttrString(_pymsg, "cloud_realsense");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__point_cloud2__convert_from_py(field, &ros_message->cloud_realsense)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * arise_slam_mid360_msgs__msg__laser_feature__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LaserFeature */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("arise_slam_mid360_msgs.msg._laser_feature");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LaserFeature");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  arise_slam_mid360_msgs__msg__LaserFeature * ros_message = (arise_slam_mid360_msgs__msg__LaserFeature *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensor
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->sensor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_available
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->imu_available);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odom_available
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->odom_available);
    {
      int rc = PyObject_SetAttrString(_pymessage, "odom_available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_quaternion_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_quaternion_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_quaternion_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_quaternion_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_quaternion_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_quaternion_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_quaternion_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_quaternion_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_quaternion_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_quaternion_w
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imu_quaternion_w);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_quaternion_w", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // initial_pose_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->initial_pose_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "initial_pose_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // initial_pose_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->initial_pose_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "initial_pose_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // initial_pose_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->initial_pose_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "initial_pose_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // initial_quaternion_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->initial_quaternion_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "initial_quaternion_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // initial_quaternion_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->initial_quaternion_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "initial_quaternion_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // initial_quaternion_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->initial_quaternion_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "initial_quaternion_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // initial_quaternion_w
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->initial_quaternion_w);
    {
      int rc = PyObject_SetAttrString(_pymessage, "initial_quaternion_w", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_preintegration_reset_id
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->imu_preintegration_reset_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_preintegration_reset_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cloud_nodistortion
    PyObject * field = NULL;
    field = sensor_msgs__msg__point_cloud2__convert_to_py(&ros_message->cloud_nodistortion);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cloud_nodistortion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cloud_corner
    PyObject * field = NULL;
    field = sensor_msgs__msg__point_cloud2__convert_to_py(&ros_message->cloud_corner);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cloud_corner", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cloud_surface
    PyObject * field = NULL;
    field = sensor_msgs__msg__point_cloud2__convert_to_py(&ros_message->cloud_surface);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cloud_surface", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cloud_realsense
    PyObject * field = NULL;
    field = sensor_msgs__msg__point_cloud2__convert_to_py(&ros_message->cloud_realsense);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cloud_realsense", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
