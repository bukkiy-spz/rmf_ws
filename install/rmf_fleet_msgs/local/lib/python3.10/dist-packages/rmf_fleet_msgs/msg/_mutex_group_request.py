# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_fleet_msgs:msg/MutexGroupRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MutexGroupRequest(type):
    """Metaclass of message 'MutexGroupRequest'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MODE_RELEASE': 0,
        'MODE_LOCK': 1,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rmf_fleet_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_fleet_msgs.msg.MutexGroupRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mutex_group_request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mutex_group_request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mutex_group_request
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mutex_group_request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mutex_group_request

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MODE_RELEASE': cls.__constants['MODE_RELEASE'],
            'MODE_LOCK': cls.__constants['MODE_LOCK'],
        }

    @property
    def MODE_RELEASE(self):
        """Message constant 'MODE_RELEASE'."""
        return Metaclass_MutexGroupRequest.__constants['MODE_RELEASE']

    @property
    def MODE_LOCK(self):
        """Message constant 'MODE_LOCK'."""
        return Metaclass_MutexGroupRequest.__constants['MODE_LOCK']


class MutexGroupRequest(metaclass=Metaclass_MutexGroupRequest):
    """
    Message class 'MutexGroupRequest'.

    Constants:
      MODE_RELEASE
      MODE_LOCK
    """

    __slots__ = [
        '_group',
        '_claimant',
        '_claim_time',
        '_mode',
    ]

    _fields_and_field_types = {
        'group': 'string',
        'claimant': 'uint64',
        'claim_time': 'builtin_interfaces/Time',
        'mode': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.group = kwargs.get('group', str())
        self.claimant = kwargs.get('claimant', int())
        from builtin_interfaces.msg import Time
        self.claim_time = kwargs.get('claim_time', Time())
        self.mode = kwargs.get('mode', int())

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
        if self.group != other.group:
            return False
        if self.claimant != other.claimant:
            return False
        if self.claim_time != other.claim_time:
            return False
        if self.mode != other.mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def group(self):
        """Message field 'group'."""
        return self._group

    @group.setter
    def group(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'group' field must be of type 'str'"
        self._group = value

    @builtins.property
    def claimant(self):
        """Message field 'claimant'."""
        return self._claimant

    @claimant.setter
    def claimant(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'claimant' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'claimant' field must be an unsigned integer in [0, 18446744073709551615]"
        self._claimant = value

    @builtins.property
    def claim_time(self):
        """Message field 'claim_time'."""
        return self._claim_time

    @claim_time.setter
    def claim_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'claim_time' field must be a sub message of type 'Time'"
        self._claim_time = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode' field must be an unsigned integer in [0, 4294967295]"
        self._mode = value
