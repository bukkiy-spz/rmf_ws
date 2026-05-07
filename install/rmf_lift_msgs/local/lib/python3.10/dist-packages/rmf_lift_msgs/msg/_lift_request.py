# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_lift_msgs:msg/LiftRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LiftRequest(type):
    """Metaclass of message 'LiftRequest'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'REQUEST_END_SESSION': 0,
        'REQUEST_AGV_MODE': 1,
        'REQUEST_HUMAN_MODE': 2,
        'DOOR_CLOSED': 0,
        'DOOR_OPEN': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rmf_lift_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_lift_msgs.msg.LiftRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lift_request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lift_request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lift_request
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lift_request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lift_request

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'REQUEST_END_SESSION': cls.__constants['REQUEST_END_SESSION'],
            'REQUEST_AGV_MODE': cls.__constants['REQUEST_AGV_MODE'],
            'REQUEST_HUMAN_MODE': cls.__constants['REQUEST_HUMAN_MODE'],
            'DOOR_CLOSED': cls.__constants['DOOR_CLOSED'],
            'DOOR_OPEN': cls.__constants['DOOR_OPEN'],
        }

    @property
    def REQUEST_END_SESSION(self):
        """Message constant 'REQUEST_END_SESSION'."""
        return Metaclass_LiftRequest.__constants['REQUEST_END_SESSION']

    @property
    def REQUEST_AGV_MODE(self):
        """Message constant 'REQUEST_AGV_MODE'."""
        return Metaclass_LiftRequest.__constants['REQUEST_AGV_MODE']

    @property
    def REQUEST_HUMAN_MODE(self):
        """Message constant 'REQUEST_HUMAN_MODE'."""
        return Metaclass_LiftRequest.__constants['REQUEST_HUMAN_MODE']

    @property
    def DOOR_CLOSED(self):
        """Message constant 'DOOR_CLOSED'."""
        return Metaclass_LiftRequest.__constants['DOOR_CLOSED']

    @property
    def DOOR_OPEN(self):
        """Message constant 'DOOR_OPEN'."""
        return Metaclass_LiftRequest.__constants['DOOR_OPEN']


class LiftRequest(metaclass=Metaclass_LiftRequest):
    """
    Message class 'LiftRequest'.

    Constants:
      REQUEST_END_SESSION
      REQUEST_AGV_MODE
      REQUEST_HUMAN_MODE
      DOOR_CLOSED
      DOOR_OPEN
    """

    __slots__ = [
        '_lift_name',
        '_request_time',
        '_session_id',
        '_request_type',
        '_destination_floor',
        '_door_state',
    ]

    _fields_and_field_types = {
        'lift_name': 'string',
        'request_time': 'builtin_interfaces/Time',
        'session_id': 'string',
        'request_type': 'uint8',
        'destination_floor': 'string',
        'door_state': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lift_name = kwargs.get('lift_name', str())
        from builtin_interfaces.msg import Time
        self.request_time = kwargs.get('request_time', Time())
        self.session_id = kwargs.get('session_id', str())
        self.request_type = kwargs.get('request_type', int())
        self.destination_floor = kwargs.get('destination_floor', str())
        self.door_state = kwargs.get('door_state', int())

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
        if self.lift_name != other.lift_name:
            return False
        if self.request_time != other.request_time:
            return False
        if self.session_id != other.session_id:
            return False
        if self.request_type != other.request_type:
            return False
        if self.destination_floor != other.destination_floor:
            return False
        if self.door_state != other.door_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def lift_name(self):
        """Message field 'lift_name'."""
        return self._lift_name

    @lift_name.setter
    def lift_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'lift_name' field must be of type 'str'"
        self._lift_name = value

    @builtins.property
    def request_time(self):
        """Message field 'request_time'."""
        return self._request_time

    @request_time.setter
    def request_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'request_time' field must be a sub message of type 'Time'"
        self._request_time = value

    @builtins.property
    def session_id(self):
        """Message field 'session_id'."""
        return self._session_id

    @session_id.setter
    def session_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'session_id' field must be of type 'str'"
        self._session_id = value

    @builtins.property
    def request_type(self):
        """Message field 'request_type'."""
        return self._request_type

    @request_type.setter
    def request_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'request_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'request_type' field must be an unsigned integer in [0, 255]"
        self._request_type = value

    @builtins.property
    def destination_floor(self):
        """Message field 'destination_floor'."""
        return self._destination_floor

    @destination_floor.setter
    def destination_floor(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'destination_floor' field must be of type 'str'"
        self._destination_floor = value

    @builtins.property
    def door_state(self):
        """Message field 'door_state'."""
        return self._door_state

    @door_state.setter
    def door_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'door_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'door_state' field must be an unsigned integer in [0, 255]"
        self._door_state = value
