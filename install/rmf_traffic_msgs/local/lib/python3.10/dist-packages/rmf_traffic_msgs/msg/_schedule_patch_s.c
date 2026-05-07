// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rmf_traffic_msgs:msg/SchedulePatch.idl
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
#include "rmf_traffic_msgs/msg/detail/schedule_patch__struct.h"
#include "rmf_traffic_msgs/msg/detail/schedule_patch__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "rmf_traffic_msgs/msg/detail/schedule_change_cull__functions.h"
#include "rmf_traffic_msgs/msg/detail/schedule_participant_patch__functions.h"
// end nested array functions include
bool rmf_traffic_msgs__msg__schedule_participant_patch__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_traffic_msgs__msg__schedule_participant_patch__convert_to_py(void * raw_ros_message);
bool rmf_traffic_msgs__msg__schedule_change_cull__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_traffic_msgs__msg__schedule_change_cull__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rmf_traffic_msgs__msg__schedule_patch__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("rmf_traffic_msgs.msg._schedule_patch.SchedulePatch", full_classname_dest, 50) == 0);
  }
  rmf_traffic_msgs__msg__SchedulePatch * ros_message = _ros_message;
  {  // participants
    PyObject * field = PyObject_GetAttrString(_pymsg, "participants");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'participants'");
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
    if (!rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence__init(&(ros_message->participants), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rmf_traffic_msgs__msg__ScheduleParticipantPatch * dest = ros_message->participants.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rmf_traffic_msgs__msg__schedule_participant_patch__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // cull
    PyObject * field = PyObject_GetAttrString(_pymsg, "cull");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'cull'");
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
    if (!rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence__init(&(ros_message->cull), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rmf_traffic_msgs__msg__ScheduleChangeCull * dest = ros_message->cull.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rmf_traffic_msgs__msg__schedule_change_cull__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // has_base_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_base_version");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_base_version = (Py_True == field);
    Py_DECREF(field);
  }
  {  // base_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "base_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->base_version = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // latest_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "latest_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->latest_version = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rmf_traffic_msgs__msg__schedule_patch__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SchedulePatch */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rmf_traffic_msgs.msg._schedule_patch");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SchedulePatch");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rmf_traffic_msgs__msg__SchedulePatch * ros_message = (rmf_traffic_msgs__msg__SchedulePatch *)raw_ros_message;
  {  // participants
    PyObject * field = NULL;
    size_t size = ros_message->participants.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rmf_traffic_msgs__msg__ScheduleParticipantPatch * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->participants.data[i]);
      PyObject * pyitem = rmf_traffic_msgs__msg__schedule_participant_patch__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "participants", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cull
    PyObject * field = NULL;
    size_t size = ros_message->cull.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rmf_traffic_msgs__msg__ScheduleChangeCull * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->cull.data[i]);
      PyObject * pyitem = rmf_traffic_msgs__msg__schedule_change_cull__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "cull", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_base_version
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_base_version ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_base_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // base_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->base_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "base_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latest_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->latest_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latest_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
