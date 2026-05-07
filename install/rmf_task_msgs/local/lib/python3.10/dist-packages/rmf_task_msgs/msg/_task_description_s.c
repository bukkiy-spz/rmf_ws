// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rmf_task_msgs:msg/TaskDescription.idl
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
#include "rmf_task_msgs/msg/detail/task_description__struct.h"
#include "rmf_task_msgs/msg/detail/task_description__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
bool rmf_task_msgs__msg__priority__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_task_msgs__msg__priority__convert_to_py(void * raw_ros_message);
bool rmf_task_msgs__msg__task_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_task_msgs__msg__task_type__convert_to_py(void * raw_ros_message);
bool rmf_task_msgs__msg__station__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_task_msgs__msg__station__convert_to_py(void * raw_ros_message);
bool rmf_task_msgs__msg__loop__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_task_msgs__msg__loop__convert_to_py(void * raw_ros_message);
bool rmf_task_msgs__msg__delivery__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_task_msgs__msg__delivery__convert_to_py(void * raw_ros_message);
bool rmf_task_msgs__msg__clean__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_task_msgs__msg__clean__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rmf_task_msgs__msg__task_description__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("rmf_task_msgs.msg._task_description.TaskDescription", full_classname_dest, 51) == 0);
  }
  rmf_task_msgs__msg__TaskDescription * ros_message = _ros_message;
  {  // start_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_time");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->start_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // priority
    PyObject * field = PyObject_GetAttrString(_pymsg, "priority");
    if (!field) {
      return false;
    }
    if (!rmf_task_msgs__msg__priority__convert_from_py(field, &ros_message->priority)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // task_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "task_type");
    if (!field) {
      return false;
    }
    if (!rmf_task_msgs__msg__task_type__convert_from_py(field, &ros_message->task_type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // station
    PyObject * field = PyObject_GetAttrString(_pymsg, "station");
    if (!field) {
      return false;
    }
    if (!rmf_task_msgs__msg__station__convert_from_py(field, &ros_message->station)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // loop
    PyObject * field = PyObject_GetAttrString(_pymsg, "loop");
    if (!field) {
      return false;
    }
    if (!rmf_task_msgs__msg__loop__convert_from_py(field, &ros_message->loop)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // delivery
    PyObject * field = PyObject_GetAttrString(_pymsg, "delivery");
    if (!field) {
      return false;
    }
    if (!rmf_task_msgs__msg__delivery__convert_from_py(field, &ros_message->delivery)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // clean
    PyObject * field = PyObject_GetAttrString(_pymsg, "clean");
    if (!field) {
      return false;
    }
    if (!rmf_task_msgs__msg__clean__convert_from_py(field, &ros_message->clean)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rmf_task_msgs__msg__task_description__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TaskDescription */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rmf_task_msgs.msg._task_description");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TaskDescription");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rmf_task_msgs__msg__TaskDescription * ros_message = (rmf_task_msgs__msg__TaskDescription *)raw_ros_message;
  {  // start_time
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->start_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // priority
    PyObject * field = NULL;
    field = rmf_task_msgs__msg__priority__convert_to_py(&ros_message->priority);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "priority", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // task_type
    PyObject * field = NULL;
    field = rmf_task_msgs__msg__task_type__convert_to_py(&ros_message->task_type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "task_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // station
    PyObject * field = NULL;
    field = rmf_task_msgs__msg__station__convert_to_py(&ros_message->station);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "station", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // loop
    PyObject * field = NULL;
    field = rmf_task_msgs__msg__loop__convert_to_py(&ros_message->loop);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "loop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delivery
    PyObject * field = NULL;
    field = rmf_task_msgs__msg__delivery__convert_to_py(&ros_message->delivery);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "delivery", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // clean
    PyObject * field = NULL;
    field = rmf_task_msgs__msg__clean__convert_to_py(&ros_message->clean);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "clean", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
