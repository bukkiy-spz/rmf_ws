# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_door_msgs:msg/SupervisorHeartbeat.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SupervisorHeartbeat(type):
    """Metaclass of message 'SupervisorHeartbeat'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rmf_door_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_door_msgs.msg.SupervisorHeartbeat')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__supervisor_heartbeat
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__supervisor_heartbeat
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__supervisor_heartbeat
            cls._TYPE_SUPPORT = module.type_support_msg__msg__supervisor_heartbeat
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__supervisor_heartbeat

            from rmf_door_msgs.msg import DoorSessions
            if DoorSessions.__class__._TYPE_SUPPORT is None:
                DoorSessions.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SupervisorHeartbeat(metaclass=Metaclass_SupervisorHeartbeat):
    """Message class 'SupervisorHeartbeat'."""

    __slots__ = [
        '_all_sessions',
    ]

    _fields_and_field_types = {
        'all_sessions': 'sequence<rmf_door_msgs/DoorSessions>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rmf_door_msgs', 'msg'], 'DoorSessions')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.all_sessions = kwargs.get('all_sessions', [])

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
        if self.all_sessions != other.all_sessions:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def all_sessions(self):
        """Message field 'all_sessions'."""
        return self._all_sessions

    @all_sessions.setter
    def all_sessions(self, value):
        if __debug__:
            from rmf_door_msgs.msg import DoorSessions
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
                 all(isinstance(v, DoorSessions) for v in value) and
                 True), \
                "The 'all_sessions' field must be a set or sequence and each value of type 'DoorSessions'"
        self._all_sessions = value
