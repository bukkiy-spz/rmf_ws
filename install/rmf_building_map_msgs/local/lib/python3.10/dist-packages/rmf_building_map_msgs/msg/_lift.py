# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_building_map_msgs:msg/Lift.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Lift(type):
    """Metaclass of message 'Lift'."""

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
            module = import_type_support('rmf_building_map_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_building_map_msgs.msg.Lift')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lift
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lift
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lift
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lift
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lift

            from rmf_building_map_msgs.msg import Door
            if Door.__class__._TYPE_SUPPORT is None:
                Door.__class__.__import_type_support__()

            from rmf_building_map_msgs.msg import Graph
            if Graph.__class__._TYPE_SUPPORT is None:
                Graph.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Lift(metaclass=Metaclass_Lift):
    """Message class 'Lift'."""

    __slots__ = [
        '_name',
        '_levels',
        '_doors',
        '_wall_graph',
        '_ref_x',
        '_ref_y',
        '_ref_yaw',
        '_width',
        '_depth',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'levels': 'sequence<string>',
        'doors': 'sequence<rmf_building_map_msgs/Door>',
        'wall_graph': 'rmf_building_map_msgs/Graph',
        'ref_x': 'float',
        'ref_y': 'float',
        'ref_yaw': 'float',
        'width': 'float',
        'depth': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rmf_building_map_msgs', 'msg'], 'Door')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_building_map_msgs', 'msg'], 'Graph'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.levels = kwargs.get('levels', [])
        self.doors = kwargs.get('doors', [])
        from rmf_building_map_msgs.msg import Graph
        self.wall_graph = kwargs.get('wall_graph', Graph())
        self.ref_x = kwargs.get('ref_x', float())
        self.ref_y = kwargs.get('ref_y', float())
        self.ref_yaw = kwargs.get('ref_yaw', float())
        self.width = kwargs.get('width', float())
        self.depth = kwargs.get('depth', float())

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
        if self.levels != other.levels:
            return False
        if self.doors != other.doors:
            return False
        if self.wall_graph != other.wall_graph:
            return False
        if self.ref_x != other.ref_x:
            return False
        if self.ref_y != other.ref_y:
            return False
        if self.ref_yaw != other.ref_yaw:
            return False
        if self.width != other.width:
            return False
        if self.depth != other.depth:
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
    def levels(self):
        """Message field 'levels'."""
        return self._levels

    @levels.setter
    def levels(self, value):
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
                "The 'levels' field must be a set or sequence and each value of type 'str'"
        self._levels = value

    @builtins.property
    def doors(self):
        """Message field 'doors'."""
        return self._doors

    @doors.setter
    def doors(self, value):
        if __debug__:
            from rmf_building_map_msgs.msg import Door
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
                 all(isinstance(v, Door) for v in value) and
                 True), \
                "The 'doors' field must be a set or sequence and each value of type 'Door'"
        self._doors = value

    @builtins.property
    def wall_graph(self):
        """Message field 'wall_graph'."""
        return self._wall_graph

    @wall_graph.setter
    def wall_graph(self, value):
        if __debug__:
            from rmf_building_map_msgs.msg import Graph
            assert \
                isinstance(value, Graph), \
                "The 'wall_graph' field must be a sub message of type 'Graph'"
        self._wall_graph = value

    @builtins.property
    def ref_x(self):
        """Message field 'ref_x'."""
        return self._ref_x

    @ref_x.setter
    def ref_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ref_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ref_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ref_x = value

    @builtins.property
    def ref_y(self):
        """Message field 'ref_y'."""
        return self._ref_y

    @ref_y.setter
    def ref_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ref_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ref_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ref_y = value

    @builtins.property
    def ref_yaw(self):
        """Message field 'ref_yaw'."""
        return self._ref_yaw

    @ref_yaw.setter
    def ref_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ref_yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ref_yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ref_yaw = value

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'width' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'width' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._width = value

    @builtins.property
    def depth(self):
        """Message field 'depth'."""
        return self._depth

    @depth.setter
    def depth(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'depth' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'depth' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._depth = value
