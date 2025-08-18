// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from arise_slam_mid360_msgs:msg/OptimizationStats.idl
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
#include "arise_slam_mid360_msgs/msg/detail/optimization_stats__struct.h"
#include "arise_slam_mid360_msgs/msg/detail/optimization_stats__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "arise_slam_mid360_msgs/msg/detail/iteration_stats__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool arise_slam_mid360_msgs__msg__iteration_stats__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * arise_slam_mid360_msgs__msg__iteration_stats__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool arise_slam_mid360_msgs__msg__optimization_stats__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("arise_slam_mid360_msgs.msg._optimization_stats.OptimizationStats", full_classname_dest, 64) == 0);
  }
  arise_slam_mid360_msgs__msg__OptimizationStats * ros_message = _ros_message;
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
  {  // laser_cloud_surf_from_map_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "laser_cloud_surf_from_map_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->laser_cloud_surf_from_map_num = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // laser_cloud_corner_from_map_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "laser_cloud_corner_from_map_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->laser_cloud_corner_from_map_num = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // laser_cloud_surf_stack_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "laser_cloud_surf_stack_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->laser_cloud_surf_stack_num = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // laser_cloud_corner_stack_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "laser_cloud_corner_stack_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->laser_cloud_corner_stack_num = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // total_translation
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_translation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_translation = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total_rotation
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_rotation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_rotation = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // translation_from_last
    PyObject * field = PyObject_GetAttrString(_pymsg, "translation_from_last");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->translation_from_last = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rotation_from_last
    PyObject * field = PyObject_GetAttrString(_pymsg, "rotation_from_last");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rotation_from_last = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time_elapsed
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_elapsed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time_elapsed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // latency
    PyObject * field = PyObject_GetAttrString(_pymsg, "latency");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latency = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // n_iterations
    PyObject * field = PyObject_GetAttrString(_pymsg, "n_iterations");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->n_iterations = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // average_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "average_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->average_distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // uncertainty_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "uncertainty_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->uncertainty_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // uncertainty_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "uncertainty_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->uncertainty_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // uncertainty_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "uncertainty_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->uncertainty_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // uncertainty_roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "uncertainty_roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->uncertainty_roll = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // uncertainty_pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "uncertainty_pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->uncertainty_pitch = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // uncertainty_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "uncertainty_yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->uncertainty_yaw = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // plane_match_success
    PyObject * field = PyObject_GetAttrString(_pymsg, "plane_match_success");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->plane_match_success = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // plane_no_enough_neighbor
    PyObject * field = PyObject_GetAttrString(_pymsg, "plane_no_enough_neighbor");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->plane_no_enough_neighbor = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // plane_neighbor_too_far
    PyObject * field = PyObject_GetAttrString(_pymsg, "plane_neighbor_too_far");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->plane_neighbor_too_far = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // plane_badpca_structure
    PyObject * field = PyObject_GetAttrString(_pymsg, "plane_badpca_structure");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->plane_badpca_structure = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // plane_invalid_numerical
    PyObject * field = PyObject_GetAttrString(_pymsg, "plane_invalid_numerical");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->plane_invalid_numerical = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // plane_mse_too_large
    PyObject * field = PyObject_GetAttrString(_pymsg, "plane_mse_too_large");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->plane_mse_too_large = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // plane_unknown
    PyObject * field = PyObject_GetAttrString(_pymsg, "plane_unknown");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->plane_unknown = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // prediction_source
    PyObject * field = PyObject_GetAttrString(_pymsg, "prediction_source");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prediction_source = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // iterations
    PyObject * field = PyObject_GetAttrString(_pymsg, "iterations");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'iterations'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!arise_slam_mid360_msgs__msg__IterationStats__Sequence__init(&(ros_message->iterations), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create arise_slam_mid360_msgs__msg__IterationStats__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    arise_slam_mid360_msgs__msg__IterationStats * dest = ros_message->iterations.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!arise_slam_mid360_msgs__msg__iteration_stats__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * arise_slam_mid360_msgs__msg__optimization_stats__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OptimizationStats */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("arise_slam_mid360_msgs.msg._optimization_stats");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OptimizationStats");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  arise_slam_mid360_msgs__msg__OptimizationStats * ros_message = (arise_slam_mid360_msgs__msg__OptimizationStats *)raw_ros_message;
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
  {  // laser_cloud_surf_from_map_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->laser_cloud_surf_from_map_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "laser_cloud_surf_from_map_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // laser_cloud_corner_from_map_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->laser_cloud_corner_from_map_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "laser_cloud_corner_from_map_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // laser_cloud_surf_stack_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->laser_cloud_surf_stack_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "laser_cloud_surf_stack_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // laser_cloud_corner_stack_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->laser_cloud_corner_stack_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "laser_cloud_corner_stack_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_translation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_translation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_translation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_rotation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_rotation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_rotation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // translation_from_last
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->translation_from_last);
    {
      int rc = PyObject_SetAttrString(_pymessage, "translation_from_last", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rotation_from_last
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rotation_from_last);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rotation_from_last", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_elapsed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time_elapsed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_elapsed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latency
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latency);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latency", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // n_iterations
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->n_iterations);
    {
      int rc = PyObject_SetAttrString(_pymessage, "n_iterations", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // average_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->average_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "average_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uncertainty_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->uncertainty_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uncertainty_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uncertainty_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->uncertainty_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uncertainty_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uncertainty_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->uncertainty_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uncertainty_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uncertainty_roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->uncertainty_roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uncertainty_roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uncertainty_pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->uncertainty_pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uncertainty_pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uncertainty_yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->uncertainty_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uncertainty_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plane_match_success
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->plane_match_success);
    {
      int rc = PyObject_SetAttrString(_pymessage, "plane_match_success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plane_no_enough_neighbor
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->plane_no_enough_neighbor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "plane_no_enough_neighbor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plane_neighbor_too_far
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->plane_neighbor_too_far);
    {
      int rc = PyObject_SetAttrString(_pymessage, "plane_neighbor_too_far", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plane_badpca_structure
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->plane_badpca_structure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "plane_badpca_structure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plane_invalid_numerical
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->plane_invalid_numerical);
    {
      int rc = PyObject_SetAttrString(_pymessage, "plane_invalid_numerical", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plane_mse_too_large
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->plane_mse_too_large);
    {
      int rc = PyObject_SetAttrString(_pymessage, "plane_mse_too_large", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plane_unknown
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->plane_unknown);
    {
      int rc = PyObject_SetAttrString(_pymessage, "plane_unknown", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prediction_source
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->prediction_source);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prediction_source", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // iterations
    PyObject * field = NULL;
    size_t size = ros_message->iterations.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    arise_slam_mid360_msgs__msg__IterationStats * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->iterations.data[i]);
      PyObject * pyitem = arise_slam_mid360_msgs__msg__iteration_stats__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "iterations", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
