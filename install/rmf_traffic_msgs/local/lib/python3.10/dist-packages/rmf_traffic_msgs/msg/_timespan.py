# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_traffic_msgs:msg/Timespan.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Timespan(type):
    """Metaclass of message 'Timespan'."""

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
                'rmf_traffic_msgs.msg.Timespan')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__timespan
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__timespan
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__timespan
            cls._TYPE_SUPPORT = module.type_support_msg__msg__timespan
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__timespan

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Timespan(metaclass=Metaclass_Timespan):
    """Message class 'Timespan'."""

    __slots__ = [
        '_maps',
        '_has_lower_bound',
        '_lower_bound',
        '_has_upper_bound',
        '_upper_bound',
    ]

    _fields_and_field_types = {
        'maps': 'sequence<string>',
        'has_lower_bound': 'boolean',
        'lower_bound': 'int64',
        'has_upper_bound': 'boolean',
        'upper_bound': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.maps = kwargs.get('maps', [])
        self.has_lower_bound = kwargs.get('has_lower_bound', bool())
        self.lower_bound = kwargs.get('lower_bound', int())
        self.has_upper_bound = kwargs.get('has_upper_bound', bool())
        self.upper_bound = kwargs.get('upper_bound', int())

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
        if self.maps != other.maps:
            return False
        if self.has_lower_bound != other.has_lower_bound:
            return False
        if self.lower_bound != other.lower_bound:
            return False
        if self.has_upper_bound != other.has_upper_bound:
            return False
        if self.upper_bound != other.upper_bound:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def maps(self):
        """Message field 'maps'."""
        return self._maps

    @maps.setter
    def maps(self, value):
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
                "The 'maps' field must be a set or sequence and each value of type 'str'"
        self._maps = value

    @builtins.property
    def has_lower_bound(self):
        """Message field 'has_lower_bound'."""
        return self._has_lower_bound

    @has_lower_bound.setter
    def has_lower_bound(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_lower_bound' field must be of type 'bool'"
        self._has_lower_bound = value

    @builtins.property
    def lower_bound(self):
        """Message field 'lower_bound'."""
        return self._lower_bound

    @lower_bound.setter
    def lower_bound(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lower_bound' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'lower_bound' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._lower_bound = value

    @builtins.property
    def has_upper_bound(self):
        """Message field 'has_upper_bound'."""
        return self._has_upper_bound

    @has_upper_bound.setter
    def has_upper_bound(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_upper_bound' field must be of type 'bool'"
        self._has_upper_bound = value

    @builtins.property
    def upper_bound(self):
        """Message field 'upper_bound'."""
        return self._upper_bound

    @upper_bound.setter
    def upper_bound(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'upper_bound' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'upper_bound' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._upper_bound = value
