# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_traffic_msgs:msg/ScheduleQuery.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ScheduleQuery(type):
    """Metaclass of message 'ScheduleQuery'."""

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
                'rmf_traffic_msgs.msg.ScheduleQuery')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__schedule_query
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__schedule_query
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__schedule_query
            cls._TYPE_SUPPORT = module.type_support_msg__msg__schedule_query
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__schedule_query

            from rmf_traffic_msgs.msg import ScheduleQueryParticipants
            if ScheduleQueryParticipants.__class__._TYPE_SUPPORT is None:
                ScheduleQueryParticipants.__class__.__import_type_support__()

            from rmf_traffic_msgs.msg import ScheduleQuerySpacetime
            if ScheduleQuerySpacetime.__class__._TYPE_SUPPORT is None:
                ScheduleQuerySpacetime.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ScheduleQuery(metaclass=Metaclass_ScheduleQuery):
    """Message class 'ScheduleQuery'."""

    __slots__ = [
        '_spacetime',
        '_participants',
    ]

    _fields_and_field_types = {
        'spacetime': 'rmf_traffic_msgs/ScheduleQuerySpacetime',
        'participants': 'rmf_traffic_msgs/ScheduleQueryParticipants',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'ScheduleQuerySpacetime'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'ScheduleQueryParticipants'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from rmf_traffic_msgs.msg import ScheduleQuerySpacetime
        self.spacetime = kwargs.get('spacetime', ScheduleQuerySpacetime())
        from rmf_traffic_msgs.msg import ScheduleQueryParticipants
        self.participants = kwargs.get('participants', ScheduleQueryParticipants())

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
        if self.spacetime != other.spacetime:
            return False
        if self.participants != other.participants:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def spacetime(self):
        """Message field 'spacetime'."""
        return self._spacetime

    @spacetime.setter
    def spacetime(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import ScheduleQuerySpacetime
            assert \
                isinstance(value, ScheduleQuerySpacetime), \
                "The 'spacetime' field must be a sub message of type 'ScheduleQuerySpacetime'"
        self._spacetime = value

    @builtins.property
    def participants(self):
        """Message field 'participants'."""
        return self._participants

    @participants.setter
    def participants(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import ScheduleQueryParticipants
            assert \
                isinstance(value, ScheduleQueryParticipants), \
                "The 'participants' field must be a sub message of type 'ScheduleQueryParticipants'"
        self._participants = value
