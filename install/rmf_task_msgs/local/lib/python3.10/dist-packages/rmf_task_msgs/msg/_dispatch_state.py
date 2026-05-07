# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_task_msgs:msg/DispatchState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DispatchState(type):
    """Metaclass of message 'DispatchState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATUS_UNINITIALIZED': 0,
        'STATUS_QUEUED': 1,
        'STATUS_SELECTED': 2,
        'STATUS_DISPATCHED': 3,
        'STATUS_FAILED_TO_ASSIGN': 4,
        'STATUS_CANCELED_IN_FLIGHT': 5,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rmf_task_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_task_msgs.msg.DispatchState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dispatch_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dispatch_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dispatch_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dispatch_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dispatch_state

            from rmf_task_msgs.msg import Assignment
            if Assignment.__class__._TYPE_SUPPORT is None:
                Assignment.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATUS_UNINITIALIZED': cls.__constants['STATUS_UNINITIALIZED'],
            'STATUS_QUEUED': cls.__constants['STATUS_QUEUED'],
            'STATUS_SELECTED': cls.__constants['STATUS_SELECTED'],
            'STATUS_DISPATCHED': cls.__constants['STATUS_DISPATCHED'],
            'STATUS_FAILED_TO_ASSIGN': cls.__constants['STATUS_FAILED_TO_ASSIGN'],
            'STATUS_CANCELED_IN_FLIGHT': cls.__constants['STATUS_CANCELED_IN_FLIGHT'],
        }

    @property
    def STATUS_UNINITIALIZED(self):
        """Message constant 'STATUS_UNINITIALIZED'."""
        return Metaclass_DispatchState.__constants['STATUS_UNINITIALIZED']

    @property
    def STATUS_QUEUED(self):
        """Message constant 'STATUS_QUEUED'."""
        return Metaclass_DispatchState.__constants['STATUS_QUEUED']

    @property
    def STATUS_SELECTED(self):
        """Message constant 'STATUS_SELECTED'."""
        return Metaclass_DispatchState.__constants['STATUS_SELECTED']

    @property
    def STATUS_DISPATCHED(self):
        """Message constant 'STATUS_DISPATCHED'."""
        return Metaclass_DispatchState.__constants['STATUS_DISPATCHED']

    @property
    def STATUS_FAILED_TO_ASSIGN(self):
        """Message constant 'STATUS_FAILED_TO_ASSIGN'."""
        return Metaclass_DispatchState.__constants['STATUS_FAILED_TO_ASSIGN']

    @property
    def STATUS_CANCELED_IN_FLIGHT(self):
        """Message constant 'STATUS_CANCELED_IN_FLIGHT'."""
        return Metaclass_DispatchState.__constants['STATUS_CANCELED_IN_FLIGHT']


class DispatchState(metaclass=Metaclass_DispatchState):
    """
    Message class 'DispatchState'.

    Constants:
      STATUS_UNINITIALIZED
      STATUS_QUEUED
      STATUS_SELECTED
      STATUS_DISPATCHED
      STATUS_FAILED_TO_ASSIGN
      STATUS_CANCELED_IN_FLIGHT
    """

    __slots__ = [
        '_task_id',
        '_status',
        '_assignment',
        '_errors',
    ]

    _fields_and_field_types = {
        'task_id': 'string',
        'status': 'int8',
        'assignment': 'rmf_task_msgs/Assignment',
        'errors': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_task_msgs', 'msg'], 'Assignment'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.task_id = kwargs.get('task_id', str())
        self.status = kwargs.get('status', int())
        from rmf_task_msgs.msg import Assignment
        self.assignment = kwargs.get('assignment', Assignment())
        self.errors = kwargs.get('errors', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.task_id != other.task_id:
            return False
        if self.status != other.status:
            return False
        if self.assignment != other.assignment:
            return False
        if self.errors != other.errors:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def task_id(self):
        """Message field 'task_id'."""
        return self._task_id

    @task_id.setter
    def task_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'task_id' field must be of type 'str'"
        self._task_id = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def assignment(self):
        """Message field 'assignment'."""
        return self._assignment

    @assignment.setter
    def assignment(self, value):
        if __debug__:
            from rmf_task_msgs.msg import Assignment
            assert \
                isinstance(value, Assignment), \
                "The 'assignment' field must be a sub message of type 'Assignment'"
        self._assignment = value

    @builtins.property
    def errors(self):
        """Message field 'errors'."""
        return self._errors

    @errors.setter
    def errors(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'errors' field must be a set or sequence and each value of type 'str'"
        self._errors = value
