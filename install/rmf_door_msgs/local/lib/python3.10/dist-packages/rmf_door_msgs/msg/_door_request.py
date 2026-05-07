# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_door_msgs:msg/DoorRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DoorRequest(type):
    """Metaclass of message 'DoorRequest'."""

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
            module = import_type_support('rmf_door_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_door_msgs.msg.DoorRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__door_request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__door_request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__door_request
            cls._TYPE_SUPPORT = module.type_support_msg__msg__door_request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__door_request

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from rmf_door_msgs.msg import DoorMode
            if DoorMode.__class__._TYPE_SUPPORT is None:
                DoorMode.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DoorRequest(metaclass=Metaclass_DoorRequest):
    """Message class 'DoorRequest'."""

    __slots__ = [
        '_request_time',
        '_requester_id',
        '_door_name',
        '_requested_mode',
    ]

    _fields_and_field_types = {
        'request_time': 'builtin_interfaces/Time',
        'requester_id': 'string',
        'door_name': 'string',
        'requested_mode': 'rmf_door_msgs/DoorMode',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_door_msgs', 'msg'], 'DoorMode'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.request_time = kwargs.get('request_time', Time())
        self.requester_id = kwargs.get('requester_id', str())
        self.door_name = kwargs.get('door_name', str())
        from rmf_door_msgs.msg import DoorMode
        self.requested_mode = kwargs.get('requested_mode', DoorMode())

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
        if self.request_time != other.request_time:
            return False
        if self.requester_id != other.requester_id:
            return False
        if self.door_name != other.door_name:
            return False
        if self.requested_mode != other.requested_mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def requester_id(self):
        """Message field 'requester_id'."""
        return self._requester_id

    @requester_id.setter
    def requester_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'requester_id' field must be of type 'str'"
        self._requester_id = value

    @builtins.property
    def door_name(self):
        """Message field 'door_name'."""
        return self._door_name

    @door_name.setter
    def door_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'door_name' field must be of type 'str'"
        self._door_name = value

    @builtins.property
    def requested_mode(self):
        """Message field 'requested_mode'."""
        return self._requested_mode

    @requested_mode.setter
    def requested_mode(self, value):
        if __debug__:
            from rmf_door_msgs.msg import DoorMode
            assert \
                isinstance(value, DoorMode), \
                "The 'requested_mode' field must be a sub message of type 'DoorMode'"
        self._requested_mode = value
