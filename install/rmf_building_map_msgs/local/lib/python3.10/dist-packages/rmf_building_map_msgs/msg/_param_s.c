// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rmf_building_map_msgs:msg/Param.idl
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
#include "rmf_building_map_msgs/msg/detail/param__struct.h"
#include "rmf_building_map_msgs/msg/detail/param__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rmf_building_map_msgs__msg__param__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("rmf_building_map_msgs.msg._param.Param", full_classname_dest, 38) == 0);
  }
  rmf_building_map_msgs__msg__Param * ros_message = _ros_message;
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
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // value_int
    PyObject * field = PyObject_GetAttrString(_pymsg, "value_int");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->value_int = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // value_float
    PyObject * field = PyObject_GetAttrString(_pymsg, "value_float");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->value_float = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // value_string
    PyObject * field = PyObject_GetAttrString(_pymsg, "value_string");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->value_string, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // value_bool
    PyObject * field = PyObject_GetAttrString(_pymsg, "value_bool");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->value_bool = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rmf_building_map_msgs__msg__param__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Param */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rmf_building_map_msgs.msg._param");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Param");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rmf_building_map_msgs__msg__Param * ros_message = (rmf_building_map_msgs__msg__Param *)raw_ros_message;
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
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // value_int
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->value_int);
    {
      int rc = PyObject_SetAttrString(_pymessage, "value_int", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // value_float
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->value_float);
    {
      int rc = PyObject_SetAttrString(_pymessage, "value_float", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // value_string
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->value_string.data,
      strlen(ros_message->value_string.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "value_string", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // value_bool
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->value_bool ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "value_bool", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
