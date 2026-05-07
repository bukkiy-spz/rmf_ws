# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_task_msgs:msg/ApiRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ApiRequest(type):
    """Metaclass of message 'ApiRequest'."""

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
                'rmf_task_msgs.msg.ApiRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__api_request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__api_request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__api_request
            cls._TYPE_SUPPORT = module.type_support_msg__msg__api_request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__api_request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ApiRequest(metaclass=Metaclass_ApiRequest):
    """Message class 'ApiRequest'."""

    __slots__ = [
        '_json_msg',
        '_request_id',
    ]

    _fields_and_field_types = {
        'json_msg': 'string',
        'request_id': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.json_msg = kwargs.get('json_msg', str())
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
        if self.json_msg != other.json_msg:
            return False
        if self.request_id != other.request_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def json_msg(self):
        """Message field 'json_msg'."""
        return self._json_msg

    @json_msg.setter
    def json_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'json_msg' field must be of type 'str'"
        self._json_msg = value

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
