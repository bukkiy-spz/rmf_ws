// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rmf_workcell_msgs:msg/WorkcellConfiguration.idl
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
#include "rmf_workcell_msgs/msg/detail/workcell_configuration__struct.h"
#include "rmf_workcell_msgs/msg/detail/workcell_configuration__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "rmf_workcell_msgs/msg/detail/asset__functions.h"
#include "rmf_workcell_msgs/msg/detail/trait__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
bool rmf_workcell_msgs__msg__asset__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_workcell_msgs__msg__asset__convert_to_py(void * raw_ros_message);
bool rmf_workcell_msgs__msg__trait__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_workcell_msgs__msg__trait__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rmf_workcell_msgs__msg__workcell_configuration__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
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
    assert(strncmp("rmf_workcell_msgs.msg._workcell_configuration.WorkcellConfiguration", full_classname_dest, 67) == 0);
  }
  rmf_workcell_msgs__msg__WorkcellConfiguration * ros_message = _ros_message;
  {  // time
    PyObject * field = PyObject_GetAttrString(_pymsg, "time");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // guid
    PyObject * field = PyObject_GetAttrString(_pymsg, "guid");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->guid, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->type, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // assets
    PyObject * field = PyObject_GetAttrString(_pymsg, "assets");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'assets'");
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
    if (!rmf_workcell_msgs__msg__Asset__Sequence__init(&(ros_message->assets), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rmf_workcell_msgs__msg__Asset__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rmf_workcell_msgs__msg__Asset * dest = ros_message->assets.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rmf_workcell_msgs__msg__asset__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // traits
    PyObject * field = PyObject_GetAttrString(_pymsg, "traits");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'traits'");
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
    if (!rmf_workcell_msgs__msg__Trait__Sequence__init(&(ros_message->traits), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rmf_workcell_msgs__msg__Trait__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rmf_workcell_msgs__msg__Trait * dest = ros_message->traits.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rmf_workcell_msgs__msg__trait__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * rmf_workcell_msgs__msg__workcell_configuration__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of WorkcellConfiguration */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rmf_workcell_msgs.msg._workcell_configuration");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "WorkcellConfiguration");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rmf_workcell_msgs__msg__WorkcellConfiguration * ros_message = (rmf_workcell_msgs__msg__WorkcellConfiguration *)raw_ros_message;
  {  // time
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // guid
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->guid.data,
      strlen(ros_message->guid.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "guid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // type
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->type.data,
      strlen(ros_message->type.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // assets
    PyObject * field = NULL;
    size_t size = ros_message->assets.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rmf_workcell_msgs__msg__Asset * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->assets.data[i]);
      PyObject * pyitem = rmf_workcell_msgs__msg__asset__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "assets", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // traits
    PyObject * field = NULL;
    size_t size = ros_message->traits.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rmf_workcell_msgs__msg__Trait * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->traits.data[i]);
      PyObject * pyitem = rmf_workcell_msgs__msg__trait__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "traits", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
