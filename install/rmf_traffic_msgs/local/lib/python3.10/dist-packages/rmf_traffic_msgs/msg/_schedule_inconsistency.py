# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_traffic_msgs:msg/ScheduleInconsistency.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ScheduleInconsistency(type):
    """Metaclass of message 'ScheduleInconsistency'."""

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
                'rmf_traffic_msgs.msg.ScheduleInconsistency')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__schedule_inconsistency
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__schedule_inconsistency
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__schedule_inconsistency
            cls._TYPE_SUPPORT = module.type_support_msg__msg__schedule_inconsistency
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__schedule_inconsistency

            from rmf_traffic_msgs.msg import ScheduleInconsistencyRange
            if ScheduleInconsistencyRange.__class__._TYPE_SUPPORT is None:
                ScheduleInconsistencyRange.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ScheduleInconsistency(metaclass=Metaclass_ScheduleInconsistency):
    """Message class 'ScheduleInconsistency'."""

    __slots__ = [
        '_participant',
        '_ranges',
        '_last_known_itinerary',
        '_last_known_progress',
    ]

    _fields_and_field_types = {
        'participant': 'uint64',
        'ranges': 'sequence<rmf_traffic_msgs/ScheduleInconsistencyRange>',
        'last_known_itinerary': 'uint64',
        'last_known_progress': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'ScheduleInconsistencyRange')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.participant = kwargs.get('participant', int())
        self.ranges = kwargs.get('ranges', [])
        self.last_known_itinerary = kwargs.get('last_known_itinerary', int())
        self.last_known_progress = kwargs.get('last_known_progress', int())

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
        if self.participant != other.participant:
            return False
        if self.ranges != other.ranges:
            return False
        if self.last_known_itinerary != other.last_known_itinerary:
            return False
        if self.last_known_progress != other.last_known_progress:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def participant(self):
        """Message field 'participant'."""
        return self._participant

    @participant.setter
    def participant(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'participant' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'participant' field must be an unsigned integer in [0, 18446744073709551615]"
        self._participant = value

    @builtins.property
    def ranges(self):
        """Message field 'ranges'."""
        return self._ranges

    @ranges.setter
    def ranges(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import ScheduleInconsistencyRange
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
                 all(isinstance(v, ScheduleInconsistencyRange) for v in value) and
                 True), \
                "The 'ranges' field must be a set or sequence and each value of type 'ScheduleInconsistencyRange'"
        self._ranges = value

    @builtins.property
    def last_known_itinerary(self):
        """Message field 'last_known_itinerary'."""
        return self._last_known_itinerary

    @last_known_itinerary.setter
    def last_known_itinerary(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'last_known_itinerary' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'last_known_itinerary' field must be an unsigned integer in [0, 18446744073709551615]"
        self._last_known_itinerary = value

    @builtins.property
    def last_known_progress(self):
        """Message field 'last_known_progress'."""
        return self._last_known_progress

    @last_known_progress.setter
    def last_known_progress(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'last_known_progress' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'last_known_progress' field must be an unsigned integer in [0, 18446744073709551615]"
        self._last_known_progress = value
