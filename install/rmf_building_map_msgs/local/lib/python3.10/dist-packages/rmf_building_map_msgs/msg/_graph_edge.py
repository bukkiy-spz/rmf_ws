# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_building_map_msgs:msg/GraphEdge.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GraphEdge(type):
    """Metaclass of message 'GraphEdge'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'EDGE_TYPE_BIDIRECTIONAL': 0,
        'EDGE_TYPE_UNIDIRECTIONAL': 1,
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
                'rmf_building_map_msgs.msg.GraphEdge')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__graph_edge
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__graph_edge
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__graph_edge
            cls._TYPE_SUPPORT = module.type_support_msg__msg__graph_edge
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__graph_edge

            from rmf_building_map_msgs.msg import Param
            if Param.__class__._TYPE_SUPPORT is None:
                Param.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'EDGE_TYPE_BIDIRECTIONAL': cls.__constants['EDGE_TYPE_BIDIRECTIONAL'],
            'EDGE_TYPE_UNIDIRECTIONAL': cls.__constants['EDGE_TYPE_UNIDIRECTIONAL'],
        }

    @property
    def EDGE_TYPE_BIDIRECTIONAL(self):
        """Message constant 'EDGE_TYPE_BIDIRECTIONAL'."""
        return Metaclass_GraphEdge.__constants['EDGE_TYPE_BIDIRECTIONAL']

    @property
    def EDGE_TYPE_UNIDIRECTIONAL(self):
        """Message constant 'EDGE_TYPE_UNIDIRECTIONAL'."""
        return Metaclass_GraphEdge.__constants['EDGE_TYPE_UNIDIRECTIONAL']


class GraphEdge(metaclass=Metaclass_GraphEdge):
    """
    Message class 'GraphEdge'.

    Constants:
      EDGE_TYPE_BIDIRECTIONAL
      EDGE_TYPE_UNIDIRECTIONAL
    """

    __slots__ = [
        '_v1_idx',
        '_v2_idx',
        '_params',
        '_edge_type',
    ]

    _fields_and_field_types = {
        'v1_idx': 'uint32',
        'v2_idx': 'uint32',
        'params': 'sequence<rmf_building_map_msgs/Param>',
        'edge_type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rmf_building_map_msgs', 'msg'], 'Param')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.v1_idx = kwargs.get('v1_idx', int())
        self.v2_idx = kwargs.get('v2_idx', int())
        self.params = kwargs.get('params', [])
        self.edge_type = kwargs.get('edge_type', int())

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
        if self.v1_idx != other.v1_idx:
            return False
        if self.v2_idx != other.v2_idx:
            return False
        if self.params != other.params:
            return False
        if self.edge_type != other.edge_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def v1_idx(self):
        """Message field 'v1_idx'."""
        return self._v1_idx

    @v1_idx.setter
    def v1_idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'v1_idx' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'v1_idx' field must be an unsigned integer in [0, 4294967295]"
        self._v1_idx = value

    @builtins.property
    def v2_idx(self):
        """Message field 'v2_idx'."""
        return self._v2_idx

    @v2_idx.setter
    def v2_idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'v2_idx' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'v2_idx' field must be an unsigned integer in [0, 4294967295]"
        self._v2_idx = value

    @builtins.property
    def params(self):
        """Message field 'params'."""
        return self._params

    @params.setter
    def params(self, value):
        if __debug__:
            from rmf_building_map_msgs.msg import Param
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
                 all(isinstance(v, Param) for v in value) and
                 True), \
                "The 'params' field must be a set or sequence and each value of type 'Param'"
        self._params = value

    @builtins.property
    def edge_type(self):
        """Message field 'edge_type'."""
        return self._edge_type

    @edge_type.setter
    def edge_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'edge_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'edge_type' field must be an unsigned integer in [0, 255]"
        self._edge_type = value
