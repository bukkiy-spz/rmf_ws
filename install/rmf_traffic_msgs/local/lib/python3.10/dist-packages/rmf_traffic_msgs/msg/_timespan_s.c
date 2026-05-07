// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rmf_traffic_msgs:msg/Timespan.idl
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
#include "rmf_traffic_msgs/msg/detail/timespan__struct.h"
#include "rmf_traffic_msgs/msg/detail/timespan__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"
#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rmf_traffic_msgs__msg__timespan__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
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
    assert(strncmp("rmf_traffic_msgs.msg._timespan.Timespan", full_classname_dest, 39) == 0);
  }
  rmf_traffic_msgs__msg__Timespan * ros_message = _ros_message;
  {  // maps
    PyObject * field = PyObject_GetAttrString(_pymsg, "maps");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'maps'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->maps), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->maps.data;
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
  {  // has_lower_bound
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_lower_bound");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_lower_bound = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lower_bound
    PyObject * field = PyObject_GetAttrString(_pymsg, "lower_bound");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lower_bound = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // has_upper_bound
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_upper_bound");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_upper_bound = (Py_True == field);
    Py_DECREF(field);
  }
  {  // upper_bound
    PyObject * field = PyObject_GetAttrString(_pymsg, "upper_bound");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->upper_bound = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rmf_traffic_msgs__msg__timespan__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Timespan */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rmf_traffic_msgs.msg._timespan");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Timespan");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rmf_traffic_msgs__msg__Timespan * ros_message = (rmf_traffic_msgs__msg__Timespan *)raw_ros_message;
  {  // maps
    PyObject * field = NULL;
    size_t size = ros_message->maps.size;
    rosidl_runtime_c__String * src = ros_message->maps.data;
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
      int rc = PyObject_SetAttrString(_pymessage, "maps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_lower_bound
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_lower_bound ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_lower_bound", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lower_bound
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->lower_bound);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lower_bound", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_upper_bound
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_upper_bound ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_upper_bound", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // upper_bound
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->upper_bound);
    {
      int rc = PyObject_SetAttrString(_pymessage, "upper_bound", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
