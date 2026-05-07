# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_building_map_msgs:msg/Param.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Param(type):
    """Metaclass of message 'Param'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TYPE_UNDEFINED': 0,
        'TYPE_STRING': 1,
        'TYPE_INT': 2,
        'TYPE_DOUBLE': 3,
        'TYPE_BOOL': 4,
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
                'rmf_building_map_msgs.msg.Param')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__param
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__param
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__param
            cls._TYPE_SUPPORT = module.type_support_msg__msg__param
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__param

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TYPE_UNDEFINED': cls.__constants['TYPE_UNDEFINED'],
            'TYPE_STRING': cls.__constants['TYPE_STRING'],
            'TYPE_INT': cls.__constants['TYPE_INT'],
            'TYPE_DOUBLE': cls.__constants['TYPE_DOUBLE'],
            'TYPE_BOOL': cls.__constants['TYPE_BOOL'],
        }

    @property
    def TYPE_UNDEFINED(self):
        """Message constant 'TYPE_UNDEFINED'."""
        return Metaclass_Param.__constants['TYPE_UNDEFINED']

    @property
    def TYPE_STRING(self):
        """Message constant 'TYPE_STRING'."""
        return Metaclass_Param.__constants['TYPE_STRING']

    @property
    def TYPE_INT(self):
        """Message constant 'TYPE_INT'."""
        return Metaclass_Param.__constants['TYPE_INT']

    @property
    def TYPE_DOUBLE(self):
        """Message constant 'TYPE_DOUBLE'."""
        return Metaclass_Param.__constants['TYPE_DOUBLE']

    @property
    def TYPE_BOOL(self):
        """Message constant 'TYPE_BOOL'."""
        return Metaclass_Param.__constants['TYPE_BOOL']


class Param(metaclass=Metaclass_Param):
    """
    Message class 'Param'.

    Constants:
      TYPE_UNDEFINED
      TYPE_STRING
      TYPE_INT
      TYPE_DOUBLE
      TYPE_BOOL
    """

    __slots__ = [
        '_name',
        '_type',
        '_value_int',
        '_value_float',
        '_value_string',
        '_value_bool',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'type': 'uint32',
        'value_int': 'int32',
        'value_float': 'float',
        'value_string': 'string',
        'value_bool': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.type = kwargs.get('type', int())
        self.value_int = kwargs.get('value_int', int())
        self.value_float = kwargs.get('value_float', float())
        self.value_string = kwargs.get('value_string', str())
        self.value_bool = kwargs.get('value_bool', bool())

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
        if self.type != other.type:
            return False
        if self.value_int != other.value_int:
            return False
        if self.value_float != other.value_float:
            return False
        if self.value_string != other.value_string:
            return False
        if self.value_bool != other.value_bool:
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

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'type' field must be an unsigned integer in [0, 4294967295]"
        self._type = value

    @builtins.property
    def value_int(self):
        """Message field 'value_int'."""
        return self._value_int

    @value_int.setter
    def value_int(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'value_int' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'value_int' field must be an integer in [-2147483648, 2147483647]"
        self._value_int = value

    @builtins.property
    def value_float(self):
        """Message field 'value_float'."""
        return self._value_float

    @value_float.setter
    def value_float(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'value_float' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'value_float' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._value_float = value

    @builtins.property
    def value_string(self):
        """Message field 'value_string'."""
        return self._value_string

    @value_string.setter
    def value_string(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'value_string' field must be of type 'str'"
        self._value_string = value

    @builtins.property
    def value_bool(self):
        """Message field 'value_bool'."""
        return self._value_bool

    @value_bool.setter
    def value_bool(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'value_bool' field must be of type 'bool'"
        self._value_bool = value
