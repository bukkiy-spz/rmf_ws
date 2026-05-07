# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_charger_msgs:msg/ChargerRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ChargerRequest(type):
    """Metaclass of message 'ChargerRequest'."""

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
            module = import_type_support('rmf_charger_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_charger_msgs.msg.ChargerRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__charger_request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__charger_request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__charger_request
            cls._TYPE_SUPPORT = module.type_support_msg__msg__charger_request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__charger_request

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChargerRequest(metaclass=Metaclass_ChargerRequest):
    """Message class 'ChargerRequest'."""

    __slots__ = [
        '_charger_name',
        '_fleet_name',
        '_robot_name',
        '_start_timeout',
        '_request_id',
    ]

    _fields_and_field_types = {
        'charger_name': 'string',
        'fleet_name': 'string',
        'robot_name': 'string',
        'start_timeout': 'builtin_interfaces/Duration',
        'request_id': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.charger_name = kwargs.get('charger_name', str())
        self.fleet_name = kwargs.get('fleet_name', str())
        self.robot_name = kwargs.get('robot_name', str())
        from builtin_interfaces.msg import Duration
        self.start_timeout = kwargs.get('start_timeout', Duration())
        self.request_id = kwargs.get('request_id', str())

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
        if self.charger_name != other.charger_name:
            return False
        if self.fleet_name != other.fleet_name:
            return False
        if self.robot_name != other.robot_name:
            return False
        if self.start_timeout != other.start_timeout:
            return False
        if self.request_id != other.request_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def start_timeout(self):
        """Message field 'start_timeout'."""
        return self._start_timeout

    @start_timeout.setter
    def start_timeout(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'start_timeout' field must be a sub message of type 'Duration'"
        self._start_timeout = value

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
