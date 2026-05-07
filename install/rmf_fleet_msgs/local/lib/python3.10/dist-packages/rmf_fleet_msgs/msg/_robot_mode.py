# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_fleet_msgs:msg/RobotMode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotMode(type):
    """Metaclass of message 'RobotMode'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MODE_IDLE': 0,
        'MODE_CHARGING': 1,
        'MODE_MOVING': 2,
        'MODE_PAUSED': 3,
        'MODE_WAITING': 4,
        'MODE_EMERGENCY': 5,
        'MODE_GOING_HOME': 6,
        'MODE_DOCKING': 7,
        'MODE_ADAPTER_ERROR': 8,
        'MODE_CLEANING': 9,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rmf_fleet_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_fleet_msgs.msg.RobotMode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_mode
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_mode
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_mode
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_mode
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_mode

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MODE_IDLE': cls.__constants['MODE_IDLE'],
            'MODE_CHARGING': cls.__constants['MODE_CHARGING'],
            'MODE_MOVING': cls.__constants['MODE_MOVING'],
            'MODE_PAUSED': cls.__constants['MODE_PAUSED'],
            'MODE_WAITING': cls.__constants['MODE_WAITING'],
            'MODE_EMERGENCY': cls.__constants['MODE_EMERGENCY'],
            'MODE_GOING_HOME': cls.__constants['MODE_GOING_HOME'],
            'MODE_DOCKING': cls.__constants['MODE_DOCKING'],
            'MODE_ADAPTER_ERROR': cls.__constants['MODE_ADAPTER_ERROR'],
            'MODE_CLEANING': cls.__constants['MODE_CLEANING'],
        }

    @property
    def MODE_IDLE(self):
        """Message constant 'MODE_IDLE'."""
        return Metaclass_RobotMode.__constants['MODE_IDLE']

    @property
    def MODE_CHARGING(self):
        """Message constant 'MODE_CHARGING'."""
        return Metaclass_RobotMode.__constants['MODE_CHARGING']

    @property
    def MODE_MOVING(self):
        """Message constant 'MODE_MOVING'."""
        return Metaclass_RobotMode.__constants['MODE_MOVING']

    @property
    def MODE_PAUSED(self):
        """Message constant 'MODE_PAUSED'."""
        return Metaclass_RobotMode.__constants['MODE_PAUSED']

    @property
    def MODE_WAITING(self):
        """Message constant 'MODE_WAITING'."""
        return Metaclass_RobotMode.__constants['MODE_WAITING']

    @property
    def MODE_EMERGENCY(self):
        """Message constant 'MODE_EMERGENCY'."""
        return Metaclass_RobotMode.__constants['MODE_EMERGENCY']

    @property
    def MODE_GOING_HOME(self):
        """Message constant 'MODE_GOING_HOME'."""
        return Metaclass_RobotMode.__constants['MODE_GOING_HOME']

    @property
    def MODE_DOCKING(self):
        """Message constant 'MODE_DOCKING'."""
        return Metaclass_RobotMode.__constants['MODE_DOCKING']

    @property
    def MODE_ADAPTER_ERROR(self):
        """Message constant 'MODE_ADAPTER_ERROR'."""
        return Metaclass_RobotMode.__constants['MODE_ADAPTER_ERROR']

    @property
    def MODE_CLEANING(self):
        """Message constant 'MODE_CLEANING'."""
        return Metaclass_RobotMode.__constants['MODE_CLEANING']


class RobotMode(metaclass=Metaclass_RobotMode):
    """
    Message class 'RobotMode'.

    Constants:
      MODE_IDLE
      MODE_CHARGING
      MODE_MOVING
      MODE_PAUSED
      MODE_WAITING
      MODE_EMERGENCY
      MODE_GOING_HOME
      MODE_DOCKING
      MODE_ADAPTER_ERROR
      MODE_CLEANING
    """

    __slots__ = [
        '_mode',
        '_mode_request_id',
    ]

    _fields_and_field_types = {
        'mode': 'uint32',
        'mode_request_id': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mode = kwargs.get('mode', int())
        self.mode_request_id = kwargs.get('mode_request_id', int())

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
        if self.mode != other.mode:
            return False
        if self.mode_request_id != other.mode_request_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode' field must be an unsigned integer in [0, 4294967295]"
        self._mode = value

    @builtins.property
    def mode_request_id(self):
        """Message field 'mode_request_id'."""
        return self._mode_request_id

    @mode_request_id.setter
    def mode_request_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_request_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'mode_request_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._mode_request_id = value
