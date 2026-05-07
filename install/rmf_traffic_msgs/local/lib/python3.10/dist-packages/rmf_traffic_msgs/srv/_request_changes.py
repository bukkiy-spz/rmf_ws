# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_traffic_msgs:srv/RequestChanges.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RequestChanges_Request(type):
    """Metaclass of message 'RequestChanges_Request'."""

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
                'rmf_traffic_msgs.srv.RequestChanges_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__request_changes__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__request_changes__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__request_changes__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__request_changes__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__request_changes__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FULL_UPDATE__DEFAULT': False,
        }

    @property
    def FULL_UPDATE__DEFAULT(cls):
        """Return default value for message field 'full_update'."""
        return False


class RequestChanges_Request(metaclass=Metaclass_RequestChanges_Request):
    """Message class 'RequestChanges_Request'."""

    __slots__ = [
        '_query_id',
        '_version',
        '_full_update',
    ]

    _fields_and_field_types = {
        'query_id': 'uint64',
        'version': 'uint64',
        'full_update': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.query_id = kwargs.get('query_id', int())
        self.version = kwargs.get('version', int())
        self.full_update = kwargs.get(
            'full_update', RequestChanges_Request.FULL_UPDATE__DEFAULT)

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
        if self.query_id != other.query_id:
            return False
        if self.version != other.version:
            return False
        if self.full_update != other.full_update:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def query_id(self):
        """Message field 'query_id'."""
        return self._query_id

    @query_id.setter
    def query_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'query_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'query_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._query_id = value

    @builtins.property
    def version(self):
        """Message field 'version'."""
        return self._version

    @version.setter
    def version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'version' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'version' field must be an unsigned integer in [0, 18446744073709551615]"
        self._version = value

    @builtins.property
    def full_update(self):
        """Message field 'full_update'."""
        return self._full_update

    @full_update.setter
    def full_update(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'full_update' field must be of type 'bool'"
        self._full_update = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RequestChanges_Response(type):
    """Metaclass of message 'RequestChanges_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'REQUEST_ACCEPTED': 1,
        'UNKNOWN_QUERY_ID': 2,
        'ERROR': 3,
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
                'rmf_traffic_msgs.srv.RequestChanges_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__request_changes__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__request_changes__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__request_changes__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__request_changes__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__request_changes__response

            from rmf_traffic_msgs.msg import ScheduleIdentity
            if ScheduleIdentity.__class__._TYPE_SUPPORT is None:
                ScheduleIdentity.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'REQUEST_ACCEPTED': cls.__constants['REQUEST_ACCEPTED'],
            'UNKNOWN_QUERY_ID': cls.__constants['UNKNOWN_QUERY_ID'],
            'ERROR': cls.__constants['ERROR'],
        }

    @property
    def REQUEST_ACCEPTED(self):
        """Message constant 'REQUEST_ACCEPTED'."""
        return Metaclass_RequestChanges_Response.__constants['REQUEST_ACCEPTED']

    @property
    def UNKNOWN_QUERY_ID(self):
        """Message constant 'UNKNOWN_QUERY_ID'."""
        return Metaclass_RequestChanges_Response.__constants['UNKNOWN_QUERY_ID']

    @property
    def ERROR(self):
        """Message constant 'ERROR'."""
        return Metaclass_RequestChanges_Response.__constants['ERROR']


class RequestChanges_Response(metaclass=Metaclass_RequestChanges_Response):
    """
    Message class 'RequestChanges_Response'.

    Constants:
      REQUEST_ACCEPTED
      UNKNOWN_QUERY_ID
      ERROR
    """

    __slots__ = [
        '_node_id',
        '_result',
        '_error',
    ]

    _fields_and_field_types = {
        'node_id': 'rmf_traffic_msgs/ScheduleIdentity',
        'result': 'uint8',
        'error': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'ScheduleIdentity'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from rmf_traffic_msgs.msg import ScheduleIdentity
        self.node_id = kwargs.get('node_id', ScheduleIdentity())
        self.result = kwargs.get('result', int())
        self.error = kwargs.get('error', str())

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
        if self.node_id != other.node_id:
            return False
        if self.result != other.result:
            return False
        if self.error != other.error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def node_id(self):
        """Message field 'node_id'."""
        return self._node_id

    @node_id.setter
    def node_id(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import ScheduleIdentity
            assert \
                isinstance(value, ScheduleIdentity), \
                "The 'node_id' field must be a sub message of type 'ScheduleIdentity'"
        self._node_id = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'result' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'result' field must be an unsigned integer in [0, 255]"
        self._result = value

    @builtins.property
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error' field must be of type 'str'"
        self._error = value


class Metaclass_RequestChanges(type):
    """Metaclass of service 'RequestChanges'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rmf_traffic_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_traffic_msgs.srv.RequestChanges')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__request_changes

            from rmf_traffic_msgs.srv import _request_changes
            if _request_changes.Metaclass_RequestChanges_Request._TYPE_SUPPORT is None:
                _request_changes.Metaclass_RequestChanges_Request.__import_type_support__()
            if _request_changes.Metaclass_RequestChanges_Response._TYPE_SUPPORT is None:
                _request_changes.Metaclass_RequestChanges_Response.__import_type_support__()


class RequestChanges(metaclass=Metaclass_RequestChanges):
    from rmf_traffic_msgs.srv._request_changes import RequestChanges_Request as Request
    from rmf_traffic_msgs.srv._request_changes import RequestChanges_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
