// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rmf_ingestor_msgs:msg/IngestorRequestItem.idl
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
#include "rmf_ingestor_msgs/msg/detail/ingestor_request_item__struct.h"
#include "rmf_ingestor_msgs/msg/detail/ingestor_request_item__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rmf_ingestor_msgs__msg__ingestor_request_item__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("rmf_ingestor_msgs.msg._ingestor_request_item.IngestorRequestItem", full_classname_dest, 64) == 0);
  }
  rmf_ingestor_msgs__msg__IngestorRequestItem * ros_message = _ros_message;
  {  // type_guid
    PyObject * field = PyObject_GetAttrString(_pymsg, "type_guid");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->type_guid, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // quantity
    PyObject * field = PyObject_GetAttrString(_pymsg, "quantity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->quantity = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // compartment_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "compartment_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->compartment_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rmf_ingestor_msgs__msg__ingestor_request_item__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of IngestorRequestItem */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rmf_ingestor_msgs.msg._ingestor_request_item");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "IngestorRequestItem");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rmf_ingestor_msgs__msg__IngestorRequestItem * ros_message = (rmf_ingestor_msgs__msg__IngestorRequestItem *)raw_ros_message;
  {  // type_guid
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->type_guid.data,
      strlen(ros_message->type_guid.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "type_guid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quantity
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->quantity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quantity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // compartment_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->compartment_name.data,
      strlen(ros_message->compartment_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "compartment_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
