# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_task_msgs:msg/BidProposal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BidProposal(type):
    """Metaclass of message 'BidProposal'."""

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
            module = import_type_support('rmf_task_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_task_msgs.msg.BidProposal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bid_proposal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bid_proposal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bid_proposal
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bid_proposal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bid_proposal

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BidProposal(metaclass=Metaclass_BidProposal):
    """Message class 'BidProposal'."""

    __slots__ = [
        '_fleet_name',
        '_expected_robot_name',
        '_prev_cost',
        '_new_cost',
        '_finish_time',
    ]

    _fields_and_field_types = {
        'fleet_name': 'string',
        'expected_robot_name': 'string',
        'prev_cost': 'double',
        'new_cost': 'double',
        'finish_time': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.fleet_name = kwargs.get('fleet_name', str())
        self.expected_robot_name = kwargs.get('expected_robot_name', str())
        self.prev_cost = kwargs.get('prev_cost', float())
        self.new_cost = kwargs.get('new_cost', float())
        from builtin_interfaces.msg import Time
        self.finish_time = kwargs.get('finish_time', Time())

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
        if self.fleet_name != other.fleet_name:
            return False
        if self.expected_robot_name != other.expected_robot_name:
            return False
        if self.prev_cost != other.prev_cost:
            return False
        if self.new_cost != other.new_cost:
            return False
        if self.finish_time != other.finish_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def fleet_name(self):
        """Message field 'fleet_name'."""
        return self._fleet_name

    @fleet_name.setter
    def fleet_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'fleet_name' field must be of type 'str'"
        self._fleet_name = value

    @builtins.property
    def expected_robot_name(self):
        """Message field 'expected_robot_name'."""
        return self._expected_robot_name

    @expected_robot_name.setter
    def expected_robot_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'expected_robot_name' field must be of type 'str'"
        self._expected_robot_name = value

    @builtins.property
    def prev_cost(self):
        """Message field 'prev_cost'."""
        return self._prev_cost

    @prev_cost.setter
    def prev_cost(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'prev_cost' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'prev_cost' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._prev_cost = value

    @builtins.property
    def new_cost(self):
        """Message field 'new_cost'."""
        return self._new_cost

    @new_cost.setter
    def new_cost(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'new_cost' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'new_cost' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._new_cost = value

    @builtins.property
    def finish_time(self):
        """Message field 'finish_time'."""
        return self._finish_time

    @finish_time.setter
    def finish_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'finish_time' field must be a sub message of type 'Time'"
        self._finish_time = value
