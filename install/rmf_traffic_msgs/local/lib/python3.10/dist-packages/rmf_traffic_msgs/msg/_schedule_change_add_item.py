# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_traffic_msgs:msg/ScheduleChangeAddItem.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ScheduleChangeAddItem(type):
    """Metaclass of message 'ScheduleChangeAddItem'."""

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
                'rmf_traffic_msgs.msg.ScheduleChangeAddItem')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__schedule_change_add_item
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__schedule_change_add_item
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__schedule_change_add_item
            cls._TYPE_SUPPORT = module.type_support_msg__msg__schedule_change_add_item
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__schedule_change_add_item

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


class ScheduleChangeAddItem(metaclass=Metaclass_ScheduleChangeAddItem):
    """Message class 'ScheduleChangeAddItem'."""

    __slots__ = [
        '_route_id',
        '_storage_id',
        '_route',
    ]

    _fields_and_field_types = {
        'route_id': 'uint64',
        'storage_id': 'uint64',
        'route': 'rmf_traffic_msgs/Route',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'Route'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.route_id = kwargs.get('route_id', int())
        self.storage_id = kwargs.get('storage_id', int())
        from rmf_traffic_msgs.msg import Route
        self.route = kwargs.get('route', Route())

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
        if self.route_id != other.route_id:
            return False
        if self.storage_id != other.storage_id:
            return False
        if self.route != other.route:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def route_id(self):
        """Message field 'route_id'."""
        return self._route_id

    @route_id.setter
    def route_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'route_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'route_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._route_id = value

    @builtins.property
    def storage_id(self):
        """Message field 'storage_id'."""
        return self._storage_id

    @storage_id.setter
    def storage_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'storage_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'storage_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._storage_id = value

    @builtins.property
    def route(self):
        """Message field 'route'."""
        return self._route

    @route.setter
    def route(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import Route
            assert \
                isinstance(value, Route), \
                "The 'route' field must be a sub message of type 'Route'"
        self._route = value
