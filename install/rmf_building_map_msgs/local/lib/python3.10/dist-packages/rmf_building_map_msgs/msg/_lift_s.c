// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rmf_building_map_msgs:msg/Lift.idl
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
#include "rmf_building_map_msgs/msg/detail/lift__struct.h"
#include "rmf_building_map_msgs/msg/detail/lift__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "rmf_building_map_msgs/msg/detail/door__functions.h"
// end nested array functions include
bool rmf_building_map_msgs__msg__door__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_building_map_msgs__msg__door__convert_to_py(void * raw_ros_message);
bool rmf_building_map_msgs__msg__graph__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_building_map_msgs__msg__graph__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rmf_building_map_msgs__msg__lift__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("rmf_building_map_msgs.msg._lift.Lift", full_classname_dest, 36) == 0);
  }
  rmf_building_map_msgs__msg__Lift * ros_message = _ros_message;
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
  {  // levels
    PyObject * field = PyObject_GetAttrString(_pymsg, "levels");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'levels'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->levels), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->levels.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
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
  {  // ref_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ref_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ref_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ref_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ref_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ref_yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // width
    PyObject * field = PyObject_GetAttrString(_pymsg, "width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->width = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // depth
    PyObject * field = PyObject_GetAttrString(_pymsg, "depth");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->depth = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rmf_building_map_msgs__msg__lift__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Lift */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rmf_building_map_msgs.msg._lift");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Lift");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rmf_building_map_msgs__msg__Lift * ros_message = (rmf_building_map_msgs__msg__Lift *)raw_ros_message;
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
  {  // levels
    PyObject * field = NULL;
    size_t size = ros_message->levels.size;
    rosidl_runtime_c__String * src = ros_message->levels.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "levels", field);
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
  {  // ref_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ref_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ref_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ref_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ref_yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ref_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // depth
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->depth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "depth", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
