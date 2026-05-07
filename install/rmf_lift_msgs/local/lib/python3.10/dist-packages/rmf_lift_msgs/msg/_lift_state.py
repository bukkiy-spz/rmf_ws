# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_lift_msgs:msg/LiftState.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'available_modes'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LiftState(type):
    """Metaclass of message 'LiftState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DOOR_CLOSED': 0,
        'DOOR_MOVING': 1,
        'DOOR_OPEN': 2,
        'MOTION_STOPPED': 0,
        'MOTION_UP': 1,
        'MOTION_DOWN': 2,
        'MOTION_UNKNOWN': 3,
        'MODE_UNKNOWN': 0,
        'MODE_HUMAN': 1,
        'MODE_AGV': 2,
        'MODE_FIRE': 3,
        'MODE_OFFLINE': 4,
        'MODE_EMERGENCY': 5,
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
                'rmf_lift_msgs.msg.LiftState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lift_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lift_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lift_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lift_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lift_state

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DOOR_CLOSED': cls.__constants['DOOR_CLOSED'],
            'DOOR_MOVING': cls.__constants['DOOR_MOVING'],
            'DOOR_OPEN': cls.__constants['DOOR_OPEN'],
            'MOTION_STOPPED': cls.__constants['MOTION_STOPPED'],
            'MOTION_UP': cls.__constants['MOTION_UP'],
            'MOTION_DOWN': cls.__constants['MOTION_DOWN'],
            'MOTION_UNKNOWN': cls.__constants['MOTION_UNKNOWN'],
            'MODE_UNKNOWN': cls.__constants['MODE_UNKNOWN'],
            'MODE_HUMAN': cls.__constants['MODE_HUMAN'],
            'MODE_AGV': cls.__constants['MODE_AGV'],
            'MODE_FIRE': cls.__constants['MODE_FIRE'],
            'MODE_OFFLINE': cls.__constants['MODE_OFFLINE'],
            'MODE_EMERGENCY': cls.__constants['MODE_EMERGENCY'],
        }

    @property
    def DOOR_CLOSED(self):
        """Message constant 'DOOR_CLOSED'."""
        return Metaclass_LiftState.__constants['DOOR_CLOSED']

    @property
    def DOOR_MOVING(self):
        """Message constant 'DOOR_MOVING'."""
        return Metaclass_LiftState.__constants['DOOR_MOVING']

    @property
    def DOOR_OPEN(self):
        """Message constant 'DOOR_OPEN'."""
        return Metaclass_LiftState.__constants['DOOR_OPEN']

    @property
    def MOTION_STOPPED(self):
        """Message constant 'MOTION_STOPPED'."""
        return Metaclass_LiftState.__constants['MOTION_STOPPED']

    @property
    def MOTION_UP(self):
        """Message constant 'MOTION_UP'."""
        return Metaclass_LiftState.__constants['MOTION_UP']

    @property
    def MOTION_DOWN(self):
        """Message constant 'MOTION_DOWN'."""
        return Metaclass_LiftState.__constants['MOTION_DOWN']

    @property
    def MOTION_UNKNOWN(self):
        """Message constant 'MOTION_UNKNOWN'."""
        return Metaclass_LiftState.__constants['MOTION_UNKNOWN']

    @property
    def MODE_UNKNOWN(self):
        """Message constant 'MODE_UNKNOWN'."""
        return Metaclass_LiftState.__constants['MODE_UNKNOWN']

    @property
    def MODE_HUMAN(self):
        """Message constant 'MODE_HUMAN'."""
        return Metaclass_LiftState.__constants['MODE_HUMAN']

    @property
    def MODE_AGV(self):
        """Message constant 'MODE_AGV'."""
        return Metaclass_LiftState.__constants['MODE_AGV']

    @property
    def MODE_FIRE(self):
        """Message constant 'MODE_FIRE'."""
        return Metaclass_LiftState.__constants['MODE_FIRE']

    @property
    def MODE_OFFLINE(self):
        """Message constant 'MODE_OFFLINE'."""
        return Metaclass_LiftState.__constants['MODE_OFFLINE']

    @property
    def MODE_EMERGENCY(self):
        """Message constant 'MODE_EMERGENCY'."""
        return Metaclass_LiftState.__constants['MODE_EMERGENCY']


class LiftState(metaclass=Metaclass_LiftState):
    """
    Message class 'LiftState'.

    Constants:
      DOOR_CLOSED
      DOOR_MOVING
      DOOR_OPEN
      MOTION_STOPPED
      MOTION_UP
      MOTION_DOWN
      MOTION_UNKNOWN
      MODE_UNKNOWN
      MODE_HUMAN
      MODE_AGV
      MODE_FIRE
      MODE_OFFLINE
      MODE_EMERGENCY
    """

    __slots__ = [
        '_lift_time',
        '_lift_name',
        '_available_floors',
        '_current_floor',
        '_destination_floor',
        '_door_state',
        '_motion_state',
        '_available_modes',
        '_current_mode',
        '_session_id',
    ]

    _fields_and_field_types = {
        'lift_time': 'builtin_interfaces/Time',
        'lift_name': 'string',
        'available_floors': 'sequence<string>',
        'current_floor': 'string',
        'destination_floor': 'string',
        'door_state': 'uint8',
        'motion_state': 'uint8',
        'available_modes': 'sequence<uint8>',
        'current_mode': 'uint8',
        'session_id': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.lift_time = kwargs.get('lift_time', Time())
        self.lift_name = kwargs.get('lift_name', str())
        self.available_floors = kwargs.get('available_floors', [])
        self.current_floor = kwargs.get('current_floor', str())
        self.destination_floor = kwargs.get('destination_floor', str())
        self.door_state = kwargs.get('door_state', int())
        self.motion_state = kwargs.get('motion_state', int())
        self.available_modes = array.array('B', kwargs.get('available_modes', []))
        self.current_mode = kwargs.get('current_mode', int())
        self.session_id = kwargs.get('session_id', str())

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
        if self.lift_time != other.lift_time:
            return False
        if self.lift_name != other.lift_name:
            return False
        if self.available_floors != other.available_floors:
            return False
        if self.current_floor != other.current_floor:
            return False
        if self.destination_floor != other.destination_floor:
            return False
        if self.door_state != other.door_state:
            return False
        if self.motion_state != other.motion_state:
            return False
        if self.available_modes != other.available_modes:
            return False
        if self.current_mode != other.current_mode:
            return False
        if self.session_id != other.session_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def lift_time(self):
        """Message field 'lift_time'."""
        return self._lift_time

    @lift_time.setter
    def lift_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'lift_time' field must be a sub message of type 'Time'"
        self._lift_time = value

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
    def available_floors(self):
        """Message field 'available_floors'."""
        return self._available_floors

    @available_floors.setter
    def available_floors(self, value):
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
                "The 'available_floors' field must be a set or sequence and each value of type 'str'"
        self._available_floors = value

    @builtins.property
    def current_floor(self):
        """Message field 'current_floor'."""
        return self._current_floor

    @current_floor.setter
    def current_floor(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'current_floor' field must be of type 'str'"
        self._current_floor = value

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

    @builtins.property
    def motion_state(self):
        """Message field 'motion_state'."""
        return self._motion_state

    @motion_state.setter
    def motion_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motion_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motion_state' field must be an unsigned integer in [0, 255]"
        self._motion_state = value

    @builtins.property
    def available_modes(self):
        """Message field 'available_modes'."""
        return self._available_modes

    @available_modes.setter
    def available_modes(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'available_modes' array.array() must have the type code of 'B'"
            self._available_modes = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'available_modes' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._available_modes = array.array('B', value)

    @builtins.property
    def current_mode(self):
        """Message field 'current_mode'."""
        return self._current_mode

    @current_mode.setter
    def current_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'current_mode' field must be an unsigned integer in [0, 255]"
        self._current_mode = value

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
