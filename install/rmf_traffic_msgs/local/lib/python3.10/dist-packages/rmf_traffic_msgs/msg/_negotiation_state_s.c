// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rmf_traffic_msgs:msg/NegotiationState.idl
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
#include "rmf_traffic_msgs/msg/detail/negotiation_state__struct.h"
#include "rmf_traffic_msgs/msg/detail/negotiation_state__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "rmf_traffic_msgs/msg/detail/negotiation_forfeit__functions.h"
#include "rmf_traffic_msgs/msg/detail/negotiation_proposal__functions.h"
#include "rmf_traffic_msgs/msg/detail/negotiation_rejection__functions.h"
#include "rmf_traffic_msgs/msg/detail/negotiation_tree_node__functions.h"
// end nested array functions include
bool rmf_traffic_msgs__msg__negotiation_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_traffic_msgs__msg__negotiation_status__convert_to_py(void * raw_ros_message);
bool rmf_traffic_msgs__msg__negotiation_tree_node__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_traffic_msgs__msg__negotiation_tree_node__convert_to_py(void * raw_ros_message);
bool rmf_traffic_msgs__msg__negotiation_proposal__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_traffic_msgs__msg__negotiation_proposal__convert_to_py(void * raw_ros_message);
bool rmf_traffic_msgs__msg__negotiation_rejection__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_traffic_msgs__msg__negotiation_rejection__convert_to_py(void * raw_ros_message);
bool rmf_traffic_msgs__msg__negotiation_forfeit__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rmf_traffic_msgs__msg__negotiation_forfeit__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rmf_traffic_msgs__msg__negotiation_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("rmf_traffic_msgs.msg._negotiation_state.NegotiationState", full_classname_dest, 56) == 0);
  }
  rmf_traffic_msgs__msg__NegotiationState * ros_message = _ros_message;
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    if (!rmf_traffic_msgs__msg__negotiation_status__convert_from_py(field, &ros_message->status)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // tree
    PyObject * field = PyObject_GetAttrString(_pymsg, "tree");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'tree'");
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
    if (!rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence__init(&(ros_message->tree), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rmf_traffic_msgs__msg__NegotiationTreeNode * dest = ros_message->tree.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rmf_traffic_msgs__msg__negotiation_tree_node__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // orphan_proposals
    PyObject * field = PyObject_GetAttrString(_pymsg, "orphan_proposals");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'orphan_proposals'");
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
    if (!rmf_traffic_msgs__msg__NegotiationProposal__Sequence__init(&(ros_message->orphan_proposals), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rmf_traffic_msgs__msg__NegotiationProposal__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rmf_traffic_msgs__msg__NegotiationProposal * dest = ros_message->orphan_proposals.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rmf_traffic_msgs__msg__negotiation_proposal__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // orphan_rejections
    PyObject * field = PyObject_GetAttrString(_pymsg, "orphan_rejections");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'orphan_rejections'");
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
    if (!rmf_traffic_msgs__msg__NegotiationRejection__Sequence__init(&(ros_message->orphan_rejections), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rmf_traffic_msgs__msg__NegotiationRejection__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rmf_traffic_msgs__msg__NegotiationRejection * dest = ros_message->orphan_rejections.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rmf_traffic_msgs__msg__negotiation_rejection__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // orphan_forfeits
    PyObject * field = PyObject_GetAttrString(_pymsg, "orphan_forfeits");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'orphan_forfeits'");
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
    if (!rmf_traffic_msgs__msg__NegotiationForfeit__Sequence__init(&(ros_message->orphan_forfeits), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rmf_traffic_msgs__msg__NegotiationForfeit__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rmf_traffic_msgs__msg__NegotiationForfeit * dest = ros_message->orphan_forfeits.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rmf_traffic_msgs__msg__negotiation_forfeit__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * rmf_traffic_msgs__msg__negotiation_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NegotiationState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rmf_traffic_msgs.msg._negotiation_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NegotiationState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rmf_traffic_msgs__msg__NegotiationState * ros_message = (rmf_traffic_msgs__msg__NegotiationState *)raw_ros_message;
  {  // status
    PyObject * field = NULL;
    field = rmf_traffic_msgs__msg__negotiation_status__convert_to_py(&ros_message->status);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tree
    PyObject * field = NULL;
    size_t size = ros_message->tree.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rmf_traffic_msgs__msg__NegotiationTreeNode * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->tree.data[i]);
      PyObject * pyitem = rmf_traffic_msgs__msg__negotiation_tree_node__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "tree", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orphan_proposals
    PyObject * field = NULL;
    size_t size = ros_message->orphan_proposals.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rmf_traffic_msgs__msg__NegotiationProposal * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->orphan_proposals.data[i]);
      PyObject * pyitem = rmf_traffic_msgs__msg__negotiation_proposal__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "orphan_proposals", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orphan_rejections
    PyObject * field = NULL;
    size_t size = ros_message->orphan_rejections.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rmf_traffic_msgs__msg__NegotiationRejection * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->orphan_rejections.data[i]);
      PyObject * pyitem = rmf_traffic_msgs__msg__negotiation_rejection__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "orphan_rejections", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orphan_forfeits
    PyObject * field = NULL;
    size_t size = ros_message->orphan_forfeits.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rmf_traffic_msgs__msg__NegotiationForfeit * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->orphan_forfeits.data[i]);
      PyObject * pyitem = rmf_traffic_msgs__msg__negotiation_forfeit__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "orphan_forfeits", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
