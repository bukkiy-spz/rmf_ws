# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_building_map_msgs:msg/Door.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Door(type):
    """Metaclass of message 'Door'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DOOR_TYPE_UNDEFINED': 0,
        'DOOR_TYPE_SINGLE_SLIDING': 1,
        'DOOR_TYPE_DOUBLE_SLIDING': 2,
        'DOOR_TYPE_SINGLE_TELESCOPE': 3,
        'DOOR_TYPE_DOUBLE_TELESCOPE': 4,
        'DOOR_TYPE_SINGLE_SWING': 5,
        'DOOR_TYPE_DOUBLE_SWING': 6,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rmf_building_map_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_building_map_msgs.msg.Door')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__door
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__door
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__door
            cls._TYPE_SUPPORT = module.type_support_msg__msg__door
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__door

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DOOR_TYPE_UNDEFINED': cls.__constants['DOOR_TYPE_UNDEFINED'],
            'DOOR_TYPE_SINGLE_SLIDING': cls.__constants['DOOR_TYPE_SINGLE_SLIDING'],
            'DOOR_TYPE_DOUBLE_SLIDING': cls.__constants['DOOR_TYPE_DOUBLE_SLIDING'],
            'DOOR_TYPE_SINGLE_TELESCOPE': cls.__constants['DOOR_TYPE_SINGLE_TELESCOPE'],
            'DOOR_TYPE_DOUBLE_TELESCOPE': cls.__constants['DOOR_TYPE_DOUBLE_TELESCOPE'],
            'DOOR_TYPE_SINGLE_SWING': cls.__constants['DOOR_TYPE_SINGLE_SWING'],
            'DOOR_TYPE_DOUBLE_SWING': cls.__constants['DOOR_TYPE_DOUBLE_SWING'],
        }

    @property
    def DOOR_TYPE_UNDEFINED(self):
        """Message constant 'DOOR_TYPE_UNDEFINED'."""
        return Metaclass_Door.__constants['DOOR_TYPE_UNDEFINED']

    @property
    def DOOR_TYPE_SINGLE_SLIDING(self):
        """Message constant 'DOOR_TYPE_SINGLE_SLIDING'."""
        return Metaclass_Door.__constants['DOOR_TYPE_SINGLE_SLIDING']

    @property
    def DOOR_TYPE_DOUBLE_SLIDING(self):
        """Message constant 'DOOR_TYPE_DOUBLE_SLIDING'."""
        return Metaclass_Door.__constants['DOOR_TYPE_DOUBLE_SLIDING']

    @property
    def DOOR_TYPE_SINGLE_TELESCOPE(self):
        """Message constant 'DOOR_TYPE_SINGLE_TELESCOPE'."""
        return Metaclass_Door.__constants['DOOR_TYPE_SINGLE_TELESCOPE']

    @property
    def DOOR_TYPE_DOUBLE_TELESCOPE(self):
        """Message constant 'DOOR_TYPE_DOUBLE_TELESCOPE'."""
        return Metaclass_Door.__constants['DOOR_TYPE_DOUBLE_TELESCOPE']

    @property
    def DOOR_TYPE_SINGLE_SWING(self):
        """Message constant 'DOOR_TYPE_SINGLE_SWING'."""
        return Metaclass_Door.__constants['DOOR_TYPE_SINGLE_SWING']

    @property
    def DOOR_TYPE_DOUBLE_SWING(self):
        """Message constant 'DOOR_TYPE_DOUBLE_SWING'."""
        return Metaclass_Door.__constants['DOOR_TYPE_DOUBLE_SWING']


class Door(metaclass=Metaclass_Door):
    """
    Message class 'Door'.

    Constants:
      DOOR_TYPE_UNDEFINED
      DOOR_TYPE_SINGLE_SLIDING
      DOOR_TYPE_DOUBLE_SLIDING
      DOOR_TYPE_SINGLE_TELESCOPE
      DOOR_TYPE_DOUBLE_TELESCOPE
      DOOR_TYPE_SINGLE_SWING
      DOOR_TYPE_DOUBLE_SWING
    """

    __slots__ = [
        '_name',
        '_v1_x',
        '_v1_y',
        '_v2_x',
        '_v2_y',
        '_door_type',
        '_motion_range',
        '_motion_direction',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'v1_x': 'float',
        'v1_y': 'float',
        'v2_x': 'float',
        'v2_y': 'float',
        'door_type': 'uint8',
        'motion_range': 'float',
        'motion_direction': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.v1_x = kwargs.get('v1_x', float())
        self.v1_y = kwargs.get('v1_y', float())
        self.v2_x = kwargs.get('v2_x', float())
        self.v2_y = kwargs.get('v2_y', float())
        self.door_type = kwargs.get('door_type', int())
        self.motion_range = kwargs.get('motion_range', float())
        self.motion_direction = kwargs.get('motion_direction', int())

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
        if self.name != other.name:
            return False
        if self.v1_x != other.v1_x:
            return False
        if self.v1_y != other.v1_y:
            return False
        if self.v2_x != other.v2_x:
            return False
        if self.v2_y != other.v2_y:
            return False
        if self.door_type != other.door_type:
            return False
        if self.motion_range != other.motion_range:
            return False
        if self.motion_direction != other.motion_direction:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def v1_x(self):
        """Message field 'v1_x'."""
        return self._v1_x

    @v1_x.setter
    def v1_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v1_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'v1_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._v1_x = value

    @builtins.property
    def v1_y(self):
        """Message field 'v1_y'."""
        return self._v1_y

    @v1_y.setter
    def v1_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v1_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'v1_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._v1_y = value

    @builtins.property
    def v2_x(self):
        """Message field 'v2_x'."""
        return self._v2_x

    @v2_x.setter
    def v2_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v2_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'v2_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._v2_x = value

    @builtins.property
    def v2_y(self):
        """Message field 'v2_y'."""
        return self._v2_y

    @v2_y.setter
    def v2_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v2_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'v2_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._v2_y = value

    @builtins.property
    def door_type(self):
        """Message field 'door_type'."""
        return self._door_type

    @door_type.setter
    def door_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'door_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'door_type' field must be an unsigned integer in [0, 255]"
        self._door_type = value

    @builtins.property
    def motion_range(self):
        """Message field 'motion_range'."""
        return self._motion_range

    @motion_range.setter
    def motion_range(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motion_range' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'motion_range' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._motion_range = value

    @builtins.property
    def motion_direction(self):
        """Message field 'motion_direction'."""
        return self._motion_direction

    @motion_direction.setter
    def motion_direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motion_direction' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motion_direction' field must be an integer in [-2147483648, 2147483647]"
        self._motion_direction = value
