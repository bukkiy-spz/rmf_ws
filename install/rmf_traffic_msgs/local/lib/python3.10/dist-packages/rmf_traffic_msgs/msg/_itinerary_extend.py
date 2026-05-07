# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_traffic_msgs:msg/ItineraryExtend.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ItineraryExtend(type):
    """Metaclass of message 'ItineraryExtend'."""

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
                'rmf_traffic_msgs.msg.ItineraryExtend')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__itinerary_extend
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__itinerary_extend
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__itinerary_extend
            cls._TYPE_SUPPORT = module.type_support_msg__msg__itinerary_extend
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__itinerary_extend

            from rmf_traffic_msgs.msg import Route
            if Route.__class__._TYPE_SUPPORT is None:
                Route.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ItineraryExtend(metaclass=Metaclass_ItineraryExtend):
    """Message class 'ItineraryExtend'."""

    __slots__ = [
        '_participant',
        '_routes',
        '_itinerary_version',
    ]

    _fields_and_field_types = {
        'participant': 'uint64',
        'routes': 'sequence<rmf_traffic_msgs/Route>',
        'itinerary_version': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'Route')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.participant = kwargs.get('participant', int())
        self.routes = kwargs.get('routes', [])
        self.itinerary_version = kwargs.get('itinerary_version', int())

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
        if self.routes != other.routes:
            return False
        if self.itinerary_version != other.itinerary_version:
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
    def routes(self):
        """Message field 'routes'."""
        return self._routes

    @routes.setter
    def routes(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import Route
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
                 all(isinstance(v, Route) for v in value) and
                 True), \
                "The 'routes' field must be a set or sequence and each value of type 'Route'"
        self._routes = value

    @builtins.property
    def itinerary_version(self):
        """Message field 'itinerary_version'."""
        return self._itinerary_version

    @itinerary_version.setter
    def itinerary_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'itinerary_version' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'itinerary_version' field must be an unsigned integer in [0, 18446744073709551615]"
        self._itinerary_version = value
