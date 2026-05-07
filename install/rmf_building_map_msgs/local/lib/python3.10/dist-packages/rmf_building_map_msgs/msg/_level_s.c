// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rmf_building_map_msgs:msg/Level.idl
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
#include "rmf_building_map_msgs/msg/detail/level__struct.h"
#include "rmf_building_map_msgs/msg/detail/level__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "rmf_building_map_msgs/msg/detail/affine_image__functions.h"
#include "rmf_building_map_msgs/msg/detail/door__functions.h"
#include "rmf_building_map_msgs/msg/detail/graph__functions.h"
#include "rmf_building_map_msgs/msg/detail/place__functions.h"
// end nested array functions include
bool rmf_building_map_msgs__msg__affine_image__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_building_map_msgs__msg__affine_image__convert_to_py(void * raw_ros_message);
bool rmf_building_map_msgs__msg__place__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_building_map_msgs__msg__place__convert_to_py(void * raw_ros_message);
bool rmf_building_map_msgs__msg__door__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_building_map_msgs__msg__door__convert_to_py(void * raw_ros_message);
bool rmf_building_map_msgs__msg__graph__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_building_map_msgs__msg__graph__convert_to_py(void * raw_ros_message);
bool rmf_building_map_msgs__msg__graph__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_building_map_msgs__msg__graph__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rmf_building_map_msgs__msg__level__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("rmf_building_map_msgs.msg._level.Level", full_classname_dest, 38) == 0);
  }
  rmf_building_map_msgs__msg__Level * ros_message = _ros_message;
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // elevation
    PyObject * field = PyObject_GetAttrString(_pymsg, "elevation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->elevation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // images
    PyObject * field = PyObject_GetAttrString(_pymsg, "images");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'images'");
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
    if (!rmf_building_map_msgs__msg__AffineImage__Sequence__init(&(ros_message->images), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rmf_building_map_msgs__msg__AffineImage__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rmf_building_map_msgs__msg__AffineImage * dest = ros_message->images.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rmf_building_map_msgs__msg__affine_image__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // places
    PyObject * field = PyObject_GetAttrString(_pymsg, "places");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'places'");
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
    if (!rmf_building_map_msgs__msg__Place__Sequence__init(&(ros_message->places), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rmf_building_map_msgs__msg__Place__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rmf_building_map_msgs__msg__Place * dest = ros_message->places.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rmf_building_map_msgs__msg__place__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // doors
    PyObject * field = PyObject_GetAttrString(_pymsg, "doors");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'doors'");
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
    if (!rmf_building_map_msgs__msg__Door__Sequence__init(&(ros_message->doors), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rmf_building_map_msgs__msg__Door__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rmf_building_map_msgs__msg__Door * dest = ros_message->doors.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rmf_building_map_msgs__msg__door__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // nav_graphs
    PyObject * field = PyObject_GetAttrString(_pymsg, "nav_graphs");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'nav_graphs'");
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
    if (!rmf_building_map_msgs__msg__Graph__Sequence__init(&(ros_message->nav_graphs), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rmf_building_map_msgs__msg__Graph__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rmf_building_map_msgs__msg__Graph * dest = ros_message->nav_graphs.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rmf_building_map_msgs__msg__graph__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // wall_graph
    PyObject * field = PyObject_GetAttrString(_pymsg, "wall_graph");
    if (!field) {
      return false;
    }
    if (!rmf_building_map_msgs__msg__graph__convert_from_py(field, &ros_message->wall_graph)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rmf_building_map_msgs__msg__level__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Level */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rmf_building_map_msgs.msg._level");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Level");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rmf_building_map_msgs__msg__Level * ros_message = (rmf_building_map_msgs__msg__Level *)raw_ros_message;
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elevation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->elevation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "elevation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // images
    PyObject * field = NULL;
    size_t size = ros_message->images.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rmf_building_map_msgs__msg__AffineImage * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->images.data[i]);
      PyObject * pyitem = rmf_building_map_msgs__msg__affine_image__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "images", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // places
    PyObject * field = NULL;
    size_t size = ros_message->places.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rmf_building_map_msgs__msg__Place * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->places.data[i]);
      PyObject * pyitem = rmf_building_map_msgs__msg__place__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "places", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // doors
    PyObject * field = NULL;
    size_t size = ros_message->doors.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rmf_building_map_msgs__msg__Door * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->doors.data[i]);
      PyObject * pyitem = rmf_building_map_msgs__msg__door__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "doors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nav_graphs
    PyObject * field = NULL;
    size_t size = ros_message->nav_graphs.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rmf_building_map_msgs__msg__Graph * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->nav_graphs.data[i]);
      PyObject * pyitem = rmf_building_map_msgs__msg__graph__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "nav_graphs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wall_graph
    PyObject * field = NULL;
    field = rmf_building_map_msgs__msg__graph__convert_to_py(&ros_message->wall_graph);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "wall_graph", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
