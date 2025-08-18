// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from arise_slam_mid360_msgs:msg/IterationStats.idl
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
#include "arise_slam_mid360_msgs/msg/detail/iteration_stats__struct.h"
#include "arise_slam_mid360_msgs/msg/detail/iteration_stats__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool arise_slam_mid360_msgs__msg__iteration_stats__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("arise_slam_mid360_msgs.msg._iteration_stats.IterationStats", full_classname_dest, 58) == 0);
  }
  arise_slam_mid360_msgs__msg__IterationStats * ros_message = _ros_message;
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
  {  // translation_norm
    PyObject * field = PyObject_GetAttrString(_pymsg, "translation_norm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->translation_norm = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rotation_norm
    PyObject * field = PyObject_GetAttrString(_pymsg, "rotation_norm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rotation_norm = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // num_surf_from_scan
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_surf_from_scan");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->num_surf_from_scan = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // num_corner_from_scan
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_corner_from_scan");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->num_corner_from_scan = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * arise_slam_mid360_msgs__msg__iteration_stats__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of IterationStats */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("arise_slam_mid360_msgs.msg._iteration_stats");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "IterationStats");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  arise_slam_mid360_msgs__msg__IterationStats * ros_message = (arise_slam_mid360_msgs__msg__IterationStats *)raw_ros_message;
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
  {  // translation_norm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->translation_norm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "translation_norm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rotation_norm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rotation_norm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rotation_norm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_surf_from_scan
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->num_surf_from_scan);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_surf_from_scan", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_corner_from_scan
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->num_corner_from_scan);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_corner_from_scan", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
