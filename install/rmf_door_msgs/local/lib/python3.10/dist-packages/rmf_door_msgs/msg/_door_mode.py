# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_door_msgs:msg/DoorMode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DoorMode(type):
    """Metaclass of message 'DoorMode'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MODE_CLOSED': 0,
        'MODE_MOVING': 1,
        'MODE_OPEN': 2,
        'MODE_OFFLINE': 3,
        'MODE_UNKNOWN': 4,
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
                'rmf_door_msgs.msg.DoorMode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__door_mode
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__door_mode
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__door_mode
            cls._TYPE_SUPPORT = module.type_support_msg__msg__door_mode
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__door_mode

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MODE_CLOSED': cls.__constants['MODE_CLOSED'],
            'MODE_MOVING': cls.__constants['MODE_MOVING'],
            'MODE_OPEN': cls.__constants['MODE_OPEN'],
            'MODE_OFFLINE': cls.__constants['MODE_OFFLINE'],
            'MODE_UNKNOWN': cls.__constants['MODE_UNKNOWN'],
        }

    @property
    def MODE_CLOSED(self):
        """Message constant 'MODE_CLOSED'."""
        return Metaclass_DoorMode.__constants['MODE_CLOSED']

    @property
    def MODE_MOVING(self):
        """Message constant 'MODE_MOVING'."""
        return Metaclass_DoorMode.__constants['MODE_MOVING']

    @property
    def MODE_OPEN(self):
        """Message constant 'MODE_OPEN'."""
        return Metaclass_DoorMode.__constants['MODE_OPEN']

    @property
    def MODE_OFFLINE(self):
        """Message constant 'MODE_OFFLINE'."""
        return Metaclass_DoorMode.__constants['MODE_OFFLINE']

    @property
    def MODE_UNKNOWN(self):
        """Message constant 'MODE_UNKNOWN'."""
        return Metaclass_DoorMode.__constants['MODE_UNKNOWN']


class DoorMode(metaclass=Metaclass_DoorMode):
    """
    Message class 'DoorMode'.

    Constants:
      MODE_CLOSED
      MODE_MOVING
      MODE_OPEN
      MODE_OFFLINE
      MODE_UNKNOWN
    """

    __slots__ = [
        '_value',
    ]

    _fields_and_field_types = {
        'value': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.value = kwargs.get('value', int())

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
        if self.value != other.value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'value' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'value' field must be an unsigned integer in [0, 4294967295]"
        self._value = value
