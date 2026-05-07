# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_traffic_msgs:msg/ScheduleQuerySpacetime.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ScheduleQuerySpacetime(type):
    """Metaclass of message 'ScheduleQuerySpacetime'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ALL': 1,
        'REGIONS': 2,
        'TIMESPAN': 3,
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
                'rmf_traffic_msgs.msg.ScheduleQuerySpacetime')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__schedule_query_spacetime
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__schedule_query_spacetime
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__schedule_query_spacetime
            cls._TYPE_SUPPORT = module.type_support_msg__msg__schedule_query_spacetime
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__schedule_query_spacetime

            from rmf_traffic_msgs.msg import Region
            if Region.__class__._TYPE_SUPPORT is None:
                Region.__class__.__import_type_support__()

            from rmf_traffic_msgs.msg import ShapeContext
            if ShapeContext.__class__._TYPE_SUPPORT is None:
                ShapeContext.__class__.__import_type_support__()

            from rmf_traffic_msgs.msg import Timespan
            if Timespan.__class__._TYPE_SUPPORT is None:
                Timespan.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ALL': cls.__constants['ALL'],
            'REGIONS': cls.__constants['REGIONS'],
            'TIMESPAN': cls.__constants['TIMESPAN'],
        }

    @property
    def ALL(self):
        """Message constant 'ALL'."""
        return Metaclass_ScheduleQuerySpacetime.__constants['ALL']

    @property
    def REGIONS(self):
        """Message constant 'REGIONS'."""
        return Metaclass_ScheduleQuerySpacetime.__constants['REGIONS']

    @property
    def TIMESPAN(self):
        """Message constant 'TIMESPAN'."""
        return Metaclass_ScheduleQuerySpacetime.__constants['TIMESPAN']


class ScheduleQuerySpacetime(metaclass=Metaclass_ScheduleQuerySpacetime):
    """
    Message class 'ScheduleQuerySpacetime'.

    Constants:
      ALL
      REGIONS
      TIMESPAN
    """

    __slots__ = [
        '_type',
        '_regions',
        '_shape_context',
        '_timespan',
    ]

    _fields_and_field_types = {
        'type': 'uint16',
        'regions': 'sequence<rmf_traffic_msgs/Region>',
        'shape_context': 'rmf_traffic_msgs/ShapeContext',
        'timespan': 'rmf_traffic_msgs/Timespan',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'Region')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'ShapeContext'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'Timespan'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        self.regions = kwargs.get('regions', [])
        from rmf_traffic_msgs.msg import ShapeContext
        self.shape_context = kwargs.get('shape_context', ShapeContext())
        from rmf_traffic_msgs.msg import Timespan
        self.timespan = kwargs.get('timespan', Timespan())

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
        if self.type != other.type:
            return False
        if self.regions != other.regions:
            return False
        if self.shape_context != other.shape_context:
            return False
        if self.timespan != other.timespan:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
            assert value >= 0 and value < 65536, \
                "The 'type' field must be an unsigned integer in [0, 65535]"
        self._type = value

    @builtins.property
    def regions(self):
        """Message field 'regions'."""
        return self._regions

    @regions.setter
    def regions(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import Region
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
                 all(isinstance(v, Region) for v in value) and
                 True), \
                "The 'regions' field must be a set or sequence and each value of type 'Region'"
        self._regions = value

    @builtins.property
    def shape_context(self):
        """Message field 'shape_context'."""
        return self._shape_context

    @shape_context.setter
    def shape_context(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import ShapeContext
            assert \
                isinstance(value, ShapeContext), \
                "The 'shape_context' field must be a sub message of type 'ShapeContext'"
        self._shape_context = value

    @builtins.property
    def timespan(self):
        """Message field 'timespan'."""
        return self._timespan

    @timespan.setter
    def timespan(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import Timespan
            assert \
                isinstance(value, Timespan), \
                "The 'timespan' field must be a sub message of type 'Timespan'"
        self._timespan = value
