# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_traffic_msgs:msg/ScheduleInconsistencyRange.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ScheduleInconsistencyRange(type):
    """Metaclass of message 'ScheduleInconsistencyRange'."""

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
                'rmf_traffic_msgs.msg.ScheduleInconsistencyRange')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__schedule_inconsistency_range
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__schedule_inconsistency_range
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__schedule_inconsistency_range
            cls._TYPE_SUPPORT = module.type_support_msg__msg__schedule_inconsistency_range
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__schedule_inconsistency_range

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ScheduleInconsistencyRange(metaclass=Metaclass_ScheduleInconsistencyRange):
    """Message class 'ScheduleInconsistencyRange'."""

    __slots__ = [
        '_lower',
        '_upper',
    ]

    _fields_and_field_types = {
        'lower': 'uint64',
        'upper': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lower = kwargs.get('lower', int())
        self.upper = kwargs.get('upper', int())

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
        if self.lower != other.lower:
            return False
        if self.upper != other.upper:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def lower(self):
        """Message field 'lower'."""
        return self._lower

    @lower.setter
    def lower(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lower' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'lower' field must be an unsigned integer in [0, 18446744073709551615]"
        self._lower = value

    @builtins.property
    def upper(self):
        """Message field 'upper'."""
        return self._upper

    @upper.setter
    def upper(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'upper' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'upper' field must be an unsigned integer in [0, 18446744073709551615]"
        self._upper = value
