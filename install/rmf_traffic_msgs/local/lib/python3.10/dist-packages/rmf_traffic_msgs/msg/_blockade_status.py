# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_traffic_msgs:msg/BlockadeStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BlockadeStatus(type):
    """Metaclass of message 'BlockadeStatus'."""

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
                'rmf_traffic_msgs.msg.BlockadeStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__blockade_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__blockade_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__blockade_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__blockade_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__blockade_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BlockadeStatus(metaclass=Metaclass_BlockadeStatus):
    """Message class 'BlockadeStatus'."""

    __slots__ = [
        '_participant',
        '_reservation',
        '_any_ready',
        '_last_ready',
        '_last_reached',
        '_assignment_begin',
        '_assignment_end',
    ]

    _fields_and_field_types = {
        'participant': 'uint64',
        'reservation': 'uint64',
        'any_ready': 'boolean',
        'last_ready': 'uint64',
        'last_reached': 'uint64',
        'assignment_begin': 'uint64',
        'assignment_end': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.participant = kwargs.get('participant', int())
        self.reservation = kwargs.get('reservation', int())
        self.any_ready = kwargs.get('any_ready', bool())
        self.last_ready = kwargs.get('last_ready', int())
        self.last_reached = kwargs.get('last_reached', int())
        self.assignment_begin = kwargs.get('assignment_begin', int())
        self.assignment_end = kwargs.get('assignment_end', int())

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
        if self.reservation != other.reservation:
            return False
        if self.any_ready != other.any_ready:
            return False
        if self.last_ready != other.last_ready:
            return False
        if self.last_reached != other.last_reached:
            return False
        if self.assignment_begin != other.assignment_begin:
            return False
        if self.assignment_end != other.assignment_end:
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
    def reservation(self):
        """Message field 'reservation'."""
        return self._reservation

    @reservation.setter
    def reservation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reservation' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'reservation' field must be an unsigned integer in [0, 18446744073709551615]"
        self._reservation = value

    @builtins.property
    def any_ready(self):
        """Message field 'any_ready'."""
        return self._any_ready

    @any_ready.setter
    def any_ready(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'any_ready' field must be of type 'bool'"
        self._any_ready = value

    @builtins.property
    def last_ready(self):
        """Message field 'last_ready'."""
        return self._last_ready

    @last_ready.setter
    def last_ready(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'last_ready' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'last_ready' field must be an unsigned integer in [0, 18446744073709551615]"
        self._last_ready = value

    @builtins.property
    def last_reached(self):
        """Message field 'last_reached'."""
        return self._last_reached

    @last_reached.setter
    def last_reached(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'last_reached' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'last_reached' field must be an unsigned integer in [0, 18446744073709551615]"
        self._last_reached = value

    @builtins.property
    def assignment_begin(self):
        """Message field 'assignment_begin'."""
        return self._assignment_begin

    @assignment_begin.setter
    def assignment_begin(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'assignment_begin' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'assignment_begin' field must be an unsigned integer in [0, 18446744073709551615]"
        self._assignment_begin = value

    @builtins.property
    def assignment_end(self):
        """Message field 'assignment_end'."""
        return self._assignment_end

    @assignment_end.setter
    def assignment_end(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'assignment_end' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'assignment_end' field must be an unsigned integer in [0, 18446744073709551615]"
        self._assignment_end = value
