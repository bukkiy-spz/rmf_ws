// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rmf_scheduler_msgs:msg/ScheduleState.idl
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
#include "rmf_scheduler_msgs/msg/detail/schedule_state__struct.h"
#include "rmf_scheduler_msgs/msg/detail/schedule_state__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rmf_scheduler_msgs__msg__schedule_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("rmf_scheduler_msgs.msg._schedule_state.ScheduleState", full_classname_dest, 52) == 0);
  }
  rmf_scheduler_msgs__msg__ScheduleState * ros_message = _ros_message;
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
  {  // last_modified
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_modified");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->last_modified = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // last_ran
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_ran");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->last_ran = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // next_run
    PyObject * field = PyObject_GetAttrString(_pymsg, "next_run");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->next_run = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rmf_scheduler_msgs__msg__schedule_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ScheduleState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rmf_scheduler_msgs.msg._schedule_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ScheduleState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rmf_scheduler_msgs__msg__ScheduleState * ros_message = (rmf_scheduler_msgs__msg__ScheduleState *)raw_ros_message;
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
  {  // last_modified
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->last_modified);
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_modified", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_ran
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->last_ran);
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_ran", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // next_run
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->next_run);
    {
      int rc = PyObject_SetAttrString(_pymessage, "next_run", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
