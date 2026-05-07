# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_fleet_msgs:msg/Location.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Location(type):
    """Metaclass of message 'Location'."""

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
            module = import_type_support('rmf_fleet_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_fleet_msgs.msg.Location')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__location
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__location
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__location
            cls._TYPE_SUPPORT = module.type_support_msg__msg__location
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__location

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OBEY_APPROACH_SPEED_LIMIT__DEFAULT': False,
        }

    @property
    def OBEY_APPROACH_SPEED_LIMIT__DEFAULT(cls):
        """Return default value for message field 'obey_approach_speed_limit'."""
        return False


class Location(metaclass=Metaclass_Location):
    """Message class 'Location'."""

    __slots__ = [
        '_t',
        '_x',
        '_y',
        '_yaw',
        '_obey_approach_speed_limit',
        '_approach_speed_limit',
        '_level_name',
        '_index',
    ]

    _fields_and_field_types = {
        't': 'builtin_interfaces/Time',
        'x': 'float',
        'y': 'float',
        'yaw': 'float',
        'obey_approach_speed_limit': 'boolean',
        'approach_speed_limit': 'float',
        'level_name': 'string',
        'index': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.t = kwargs.get('t', Time())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.yaw = kwargs.get('yaw', float())
        self.obey_approach_speed_limit = kwargs.get(
            'obey_approach_speed_limit', Location.OBEY_APPROACH_SPEED_LIMIT__DEFAULT)
        self.approach_speed_limit = kwargs.get('approach_speed_limit', float())
        self.level_name = kwargs.get('level_name', str())
        self.index = kwargs.get('index', int())

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
        if self.t != other.t:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.yaw != other.yaw:
            return False
        if self.obey_approach_speed_limit != other.obey_approach_speed_limit:
            return False
        if self.approach_speed_limit != other.approach_speed_limit:
            return False
        if self.level_name != other.level_name:
            return False
        if self.index != other.index:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def t(self):
        """Message field 't'."""
        return self._t

    @t.setter
    def t(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 't' field must be a sub message of type 'Time'"
        self._t = value

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw = value

    @builtins.property
    def obey_approach_speed_limit(self):
        """Message field 'obey_approach_speed_limit'."""
        return self._obey_approach_speed_limit

    @obey_approach_speed_limit.setter
    def obey_approach_speed_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'obey_approach_speed_limit' field must be of type 'bool'"
        self._obey_approach_speed_limit = value

    @builtins.property
    def approach_speed_limit(self):
        """Message field 'approach_speed_limit'."""
        return self._approach_speed_limit

    @approach_speed_limit.setter
    def approach_speed_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'approach_speed_limit' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'approach_speed_limit' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._approach_speed_limit = value

    @builtins.property
    def level_name(self):
        """Message field 'level_name'."""
        return self._level_name

    @level_name.setter
    def level_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'level_name' field must be of type 'str'"
        self._level_name = value

    @builtins.property
    def index(self):
        """Message field 'index'."""
        return self._index

    @index.setter
    def index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'index' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'index' field must be an unsigned integer in [0, 18446744073709551615]"
        self._index = value
