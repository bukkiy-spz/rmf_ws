# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_traffic_msgs:msg/BlockadeRelease.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BlockadeRelease(type):
    """Metaclass of message 'BlockadeRelease'."""

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
                'rmf_traffic_msgs.msg.BlockadeRelease')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__blockade_release
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__blockade_release
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__blockade_release
            cls._TYPE_SUPPORT = module.type_support_msg__msg__blockade_release
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__blockade_release

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BlockadeRelease(metaclass=Metaclass_BlockadeRelease):
    """Message class 'BlockadeRelease'."""

    __slots__ = [
        '_participant',
        '_reservation',
        '_checkpoint',
    ]

    _fields_and_field_types = {
        'participant': 'uint64',
        'reservation': 'uint64',
        'checkpoint': 'uint64',
    }

    SLOT_TYPES = (
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
        self.checkpoint = kwargs.get('checkpoint', int())

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
        if self.checkpoint != other.checkpoint:
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
    def checkpoint(self):
        """Message field 'checkpoint'."""
        return self._checkpoint

    @checkpoint.setter
    def checkpoint(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'checkpoint' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'checkpoint' field must be an unsigned integer in [0, 18446744073709551615]"
        self._checkpoint = value
