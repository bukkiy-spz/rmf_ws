# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_charger_msgs:msg/ChargerState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ChargerState(type):
    """Metaclass of message 'ChargerState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CHARGER_IDLE': 1,
        'CHARGER_ASSIGNED': 2,
        'CHARGER_CHARGING': 3,
        'CHARGER_RELEASED': 4,
        'CHARGER_ERROR': 200,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rmf_charger_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_charger_msgs.msg.ChargerState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__charger_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__charger_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__charger_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__charger_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__charger_state

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CHARGER_IDLE': cls.__constants['CHARGER_IDLE'],
            'CHARGER_ASSIGNED': cls.__constants['CHARGER_ASSIGNED'],
            'CHARGER_CHARGING': cls.__constants['CHARGER_CHARGING'],
            'CHARGER_RELEASED': cls.__constants['CHARGER_RELEASED'],
            'CHARGER_ERROR': cls.__constants['CHARGER_ERROR'],
        }

    @property
    def CHARGER_IDLE(self):
        """Message constant 'CHARGER_IDLE'."""
        return Metaclass_ChargerState.__constants['CHARGER_IDLE']

    @property
    def CHARGER_ASSIGNED(self):
        """Message constant 'CHARGER_ASSIGNED'."""
        return Metaclass_ChargerState.__constants['CHARGER_ASSIGNED']

    @property
    def CHARGER_CHARGING(self):
        """Message constant 'CHARGER_CHARGING'."""
        return Metaclass_ChargerState.__constants['CHARGER_CHARGING']

    @property
    def CHARGER_RELEASED(self):
        """Message constant 'CHARGER_RELEASED'."""
        return Metaclass_ChargerState.__constants['CHARGER_RELEASED']

    @property
    def CHARGER_ERROR(self):
        """Message constant 'CHARGER_ERROR'."""
        return Metaclass_ChargerState.__constants['CHARGER_ERROR']


class ChargerState(metaclass=Metaclass_ChargerState):
    """
    Message class 'ChargerState'.

    Constants:
      CHARGER_IDLE
      CHARGER_ASSIGNED
      CHARGER_CHARGING
      CHARGER_RELEASED
      CHARGER_ERROR
    """

    __slots__ = [
        '_charger_time',
        '_state',
        '_charger_name',
        '_error_message',
        '_request_id',
        '_robot_fleet',
        '_robot_name',
        '_time_to_fully_charged',
    ]

    _fields_and_field_types = {
        'charger_time': 'builtin_interfaces/Time',
        'state': 'uint32',
        'charger_name': 'string',
        'error_message': 'string',
        'request_id': 'string',
        'robot_fleet': 'string',
        'robot_name': 'string',
        'time_to_fully_charged': 'builtin_interfaces/Duration',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.charger_time = kwargs.get('charger_time', Time())
        self.state = kwargs.get('state', int())
        self.charger_name = kwargs.get('charger_name', str())
        self.error_message = kwargs.get('error_message', str())
        self.request_id = kwargs.get('request_id', str())
        self.robot_fleet = kwargs.get('robot_fleet', str())
        self.robot_name = kwargs.get('robot_name', str())
        from builtin_interfaces.msg import Duration
        self.time_to_fully_charged = kwargs.get('time_to_fully_charged', Duration())

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
        if self.charger_time != other.charger_time:
            return False
        if self.state != other.state:
            return False
        if self.charger_name != other.charger_name:
            return False
        if self.error_message != other.error_message:
            return False
        if self.request_id != other.request_id:
            return False
        if self.robot_fleet != other.robot_fleet:
            return False
        if self.robot_name != other.robot_name:
            return False
        if self.time_to_fully_charged != other.time_to_fully_charged:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def charger_time(self):
        """Message field 'charger_time'."""
        return self._charger_time

    @charger_time.setter
    def charger_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'charger_time' field must be a sub message of type 'Time'"
        self._charger_time = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'state' field must be an unsigned integer in [0, 4294967295]"
        self._state = value

    @builtins.property
    def charger_name(self):
        """Message field 'charger_name'."""
        return self._charger_name

    @charger_name.setter
    def charger_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'charger_name' field must be of type 'str'"
        self._charger_name = value

    @builtins.property
    def error_message(self):
        """Message field 'error_message'."""
        return self._error_message

    @error_message.setter
    def error_message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_message' field must be of type 'str'"
        self._error_message = value

    @builtins.property
    def request_id(self):
        """Message field 'request_id'."""
        return self._request_id

    @request_id.setter
    def request_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'request_id' field must be of type 'str'"
        self._request_id = value

    @builtins.property
    def robot_fleet(self):
        """Message field 'robot_fleet'."""
        return self._robot_fleet

    @robot_fleet.setter
    def robot_fleet(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'robot_fleet' field must be of type 'str'"
        self._robot_fleet = value

    @builtins.property
    def robot_name(self):
        """Message field 'robot_name'."""
        return self._robot_name

    @robot_name.setter
    def robot_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'robot_name' field must be of type 'str'"
        self._robot_name = value

    @builtins.property
    def time_to_fully_charged(self):
        """Message field 'time_to_fully_charged'."""
        return self._time_to_fully_charged

    @time_to_fully_charged.setter
    def time_to_fully_charged(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'time_to_fully_charged' field must be a sub message of type 'Duration'"
        self._time_to_fully_charged = value
