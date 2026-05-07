# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_obstacle_msgs:msg/Obstacle.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'data'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Obstacle(type):
    """Metaclass of message 'Obstacle'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ACTION_ADD': 1,
        'ACTION_DELETE': 2,
        'ACTION_DELETEALL': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rmf_obstacle_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_obstacle_msgs.msg.Obstacle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__obstacle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__obstacle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__obstacle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__obstacle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__obstacle

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from rmf_obstacle_msgs.msg import BoundingBox3D
            if BoundingBox3D.__class__._TYPE_SUPPORT is None:
                BoundingBox3D.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ACTION_ADD': cls.__constants['ACTION_ADD'],
            'ACTION_DELETE': cls.__constants['ACTION_DELETE'],
            'ACTION_DELETEALL': cls.__constants['ACTION_DELETEALL'],
        }

    @property
    def ACTION_ADD(self):
        """Message constant 'ACTION_ADD'."""
        return Metaclass_Obstacle.__constants['ACTION_ADD']

    @property
    def ACTION_DELETE(self):
        """Message constant 'ACTION_DELETE'."""
        return Metaclass_Obstacle.__constants['ACTION_DELETE']

    @property
    def ACTION_DELETEALL(self):
        """Message constant 'ACTION_DELETEALL'."""
        return Metaclass_Obstacle.__constants['ACTION_DELETEALL']


class Obstacle(metaclass=Metaclass_Obstacle):
    """
    Message class 'Obstacle'.

    Constants:
      ACTION_ADD
      ACTION_DELETE
      ACTION_DELETEALL
    """

    __slots__ = [
        '_header',
        '_id',
        '_source',
        '_level_name',
        '_classification',
        '_bbox',
        '_data_resolution',
        '_data',
        '_lifetime',
        '_action',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'id': 'int32',
        'source': 'string',
        'level_name': 'string',
        'classification': 'string',
        'bbox': 'rmf_obstacle_msgs/BoundingBox3D',
        'data_resolution': 'double',
        'data': 'sequence<int8>',
        'lifetime': 'builtin_interfaces/Duration',
        'action': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_obstacle_msgs', 'msg'], 'BoundingBox3D'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int8')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.id = kwargs.get('id', int())
        self.source = kwargs.get('source', str())
        self.level_name = kwargs.get('level_name', str())
        self.classification = kwargs.get('classification', str())
        from rmf_obstacle_msgs.msg import BoundingBox3D
        self.bbox = kwargs.get('bbox', BoundingBox3D())
        self.data_resolution = kwargs.get('data_resolution', float())
        self.data = array.array('b', kwargs.get('data', []))
        from builtin_interfaces.msg import Duration
        self.lifetime = kwargs.get('lifetime', Duration())
        self.action = kwargs.get('action', int())

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
        if self.header != other.header:
            return False
        if self.id != other.id:
            return False
        if self.source != other.source:
            return False
        if self.level_name != other.level_name:
            return False
        if self.classification != other.classification:
            return False
        if self.bbox != other.bbox:
            return False
        if self.data_resolution != other.data_resolution:
            return False
        if self.data != other.data:
            return False
        if self.lifetime != other.lifetime:
            return False
        if self.action != other.action:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @builtins.property
    def source(self):
        """Message field 'source'."""
        return self._source

    @source.setter
    def source(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'source' field must be of type 'str'"
        self._source = value

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
    def classification(self):
        """Message field 'classification'."""
        return self._classification

    @classification.setter
    def classification(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'classification' field must be of type 'str'"
        self._classification = value

    @builtins.property
    def bbox(self):
        """Message field 'bbox'."""
        return self._bbox

    @bbox.setter
    def bbox(self, value):
        if __debug__:
            from rmf_obstacle_msgs.msg import BoundingBox3D
            assert \
                isinstance(value, BoundingBox3D), \
                "The 'bbox' field must be a sub message of type 'BoundingBox3D'"
        self._bbox = value

    @builtins.property
    def data_resolution(self):
        """Message field 'data_resolution'."""
        return self._data_resolution

    @data_resolution.setter
    def data_resolution(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'data_resolution' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'data_resolution' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._data_resolution = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'b', \
                "The 'data' array.array() must have the type code of 'b'"
            self._data = value
            return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -128 and val < 128 for val in value)), \
                "The 'data' field must be a set or sequence and each value of type 'int' and each integer in [-128, 127]"
        self._data = array.array('b', value)

    @builtins.property
    def lifetime(self):
        """Message field 'lifetime'."""
        return self._lifetime

    @lifetime.setter
    def lifetime(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'lifetime' field must be a sub message of type 'Duration'"
        self._lifetime = value

    @builtins.property
    def action(self):
        """Message field 'action'."""
        return self._action

    @action.setter
    def action(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'action' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'action' field must be an integer in [-2147483648, 2147483647]"
        self._action = value
