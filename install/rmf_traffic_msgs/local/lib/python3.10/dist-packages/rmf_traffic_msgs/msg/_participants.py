# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_traffic_msgs:msg/Participants.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Participants(type):
    """Metaclass of message 'Participants'."""

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
            module = import_type_support('rmf_traffic_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_traffic_msgs.msg.Participants')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__participants
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__participants
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__participants
            cls._TYPE_SUPPORT = module.type_support_msg__msg__participants
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__participants

            from rmf_traffic_msgs.msg import Participant
            if Participant.__class__._TYPE_SUPPORT is None:
                Participant.__class__.__import_type_support__()

            from rmf_traffic_msgs.msg import ScheduleIdentity
            if ScheduleIdentity.__class__._TYPE_SUPPORT is None:
                ScheduleIdentity.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Participants(metaclass=Metaclass_Participants):
    """Message class 'Participants'."""

    __slots__ = [
        '_node_id',
        '_participants',
    ]

    _fields_and_field_types = {
        'node_id': 'rmf_traffic_msgs/ScheduleIdentity',
        'participants': 'sequence<rmf_traffic_msgs/Participant>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'ScheduleIdentity'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'Participant')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from rmf_traffic_msgs.msg import ScheduleIdentity
        self.node_id = kwargs.get('node_id', ScheduleIdentity())
        self.participants = kwargs.get('participants', [])

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
        if self.node_id != other.node_id:
            return False
        if self.participants != other.participants:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def node_id(self):
        """Message field 'node_id'."""
        return self._node_id

    @node_id.setter
    def node_id(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import ScheduleIdentity
            assert \
                isinstance(value, ScheduleIdentity), \
                "The 'node_id' field must be a sub message of type 'ScheduleIdentity'"
        self._node_id = value

    @builtins.property
    def participants(self):
        """Message field 'participants'."""
        return self._participants

    @participants.setter
    def participants(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import Participant
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
                 all(isinstance(v, Participant) for v in value) and
                 True), \
                "The 'participants' field must be a set or sequence and each value of type 'Participant'"
        self._participants = value
