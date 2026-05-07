# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_fleet_msgs:msg/PauseRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PauseRequest(type):
    """Metaclass of message 'PauseRequest'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TYPE_PAUSE_IMMEDIATELY': 0,
        'TYPE_PAUSE_AT_CHECKPOINT': 1,
        'TYPE_RESUME': 2,
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
                'rmf_fleet_msgs.msg.PauseRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pause_request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pause_request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pause_request
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pause_request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pause_request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TYPE_PAUSE_IMMEDIATELY': cls.__constants['TYPE_PAUSE_IMMEDIATELY'],
            'TYPE_PAUSE_AT_CHECKPOINT': cls.__constants['TYPE_PAUSE_AT_CHECKPOINT'],
            'TYPE_RESUME': cls.__constants['TYPE_RESUME'],
        }

    @property
    def TYPE_PAUSE_IMMEDIATELY(self):
        """Message constant 'TYPE_PAUSE_IMMEDIATELY'."""
        return Metaclass_PauseRequest.__constants['TYPE_PAUSE_IMMEDIATELY']

    @property
    def TYPE_PAUSE_AT_CHECKPOINT(self):
        """Message constant 'TYPE_PAUSE_AT_CHECKPOINT'."""
        return Metaclass_PauseRequest.__constants['TYPE_PAUSE_AT_CHECKPOINT']

    @property
    def TYPE_RESUME(self):
        """Message constant 'TYPE_RESUME'."""
        return Metaclass_PauseRequest.__constants['TYPE_RESUME']


class PauseRequest(metaclass=Metaclass_PauseRequest):
    """
    Message class 'PauseRequest'.

    Constants:
      TYPE_PAUSE_IMMEDIATELY
      TYPE_PAUSE_AT_CHECKPOINT
      TYPE_RESUME
    """

    __slots__ = [
        '_fleet_name',
        '_robot_name',
        '_mode_request_id',
        '_type',
        '_at_checkpoint',
    ]

    _fields_and_field_types = {
        'fleet_name': 'string',
        'robot_name': 'string',
        'mode_request_id': 'uint64',
        'type': 'uint32',
        'at_checkpoint': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.fleet_name = kwargs.get('fleet_name', str())
        self.robot_name = kwargs.get('robot_name', str())
        self.mode_request_id = kwargs.get('mode_request_id', int())
        self.type = kwargs.get('type', int())
        self.at_checkpoint = kwargs.get('at_checkpoint', int())

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
        if self.robot_name != other.robot_name:
            return False
        if self.mode_request_id != other.mode_request_id:
            return False
        if self.type != other.type:
            return False
        if self.at_checkpoint != other.at_checkpoint:
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
            assert value >= 0 and value < 4294967296, \
                "The 'type' field must be an unsigned integer in [0, 4294967295]"
        self._type = value

    @builtins.property
    def at_checkpoint(self):
        """Message field 'at_checkpoint'."""
        return self._at_checkpoint

    @at_checkpoint.setter
    def at_checkpoint(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'at_checkpoint' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'at_checkpoint' field must be an unsigned integer in [0, 4294967295]"
        self._at_checkpoint = value
