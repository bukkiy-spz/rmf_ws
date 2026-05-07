# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_traffic_msgs:srv/RegisterQuery.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RegisterQuery_Request(type):
    """Metaclass of message 'RegisterQuery_Request'."""

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
                'rmf_traffic_msgs.srv.RegisterQuery_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__register_query__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__register_query__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__register_query__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__register_query__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__register_query__request

            from rmf_traffic_msgs.msg import ScheduleQuery
            if ScheduleQuery.__class__._TYPE_SUPPORT is None:
                ScheduleQuery.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RegisterQuery_Request(metaclass=Metaclass_RegisterQuery_Request):
    """Message class 'RegisterQuery_Request'."""

    __slots__ = [
        '_query',
    ]

    _fields_and_field_types = {
        'query': 'rmf_traffic_msgs/ScheduleQuery',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'ScheduleQuery'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from rmf_traffic_msgs.msg import ScheduleQuery
        self.query = kwargs.get('query', ScheduleQuery())

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
        if self.query != other.query:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def query(self):
        """Message field 'query'."""
        return self._query

    @query.setter
    def query(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import ScheduleQuery
            assert \
                isinstance(value, ScheduleQuery), \
                "The 'query' field must be a sub message of type 'ScheduleQuery'"
        self._query = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RegisterQuery_Response(type):
    """Metaclass of message 'RegisterQuery_Response'."""

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
                'rmf_traffic_msgs.srv.RegisterQuery_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__register_query__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__register_query__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__register_query__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__register_query__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__register_query__response

            from rmf_traffic_msgs.msg import ScheduleIdentity
            if ScheduleIdentity.__class__._TYPE_SUPPORT is None:
                ScheduleIdentity.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RegisterQuery_Response(metaclass=Metaclass_RegisterQuery_Response):
    """Message class 'RegisterQuery_Response'."""

    __slots__ = [
        '_node_id',
        '_query_id',
        '_error',
    ]

    _fields_and_field_types = {
        'node_id': 'rmf_traffic_msgs/ScheduleIdentity',
        'query_id': 'uint64',
        'error': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'ScheduleIdentity'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from rmf_traffic_msgs.msg import ScheduleIdentity
        self.node_id = kwargs.get('node_id', ScheduleIdentity())
        self.query_id = kwargs.get('query_id', int())
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
        if self.query_id != other.query_id:
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


class Metaclass_RegisterQuery(type):
    """Metaclass of service 'RegisterQuery'."""

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
                'rmf_traffic_msgs.srv.RegisterQuery')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__register_query

            from rmf_traffic_msgs.srv import _register_query
            if _register_query.Metaclass_RegisterQuery_Request._TYPE_SUPPORT is None:
                _register_query.Metaclass_RegisterQuery_Request.__import_type_support__()
            if _register_query.Metaclass_RegisterQuery_Response._TYPE_SUPPORT is None:
                _register_query.Metaclass_RegisterQuery_Response.__import_type_support__()


class RegisterQuery(metaclass=Metaclass_RegisterQuery):
    from rmf_traffic_msgs.srv._register_query import RegisterQuery_Request as Request
    from rmf_traffic_msgs.srv._register_query import RegisterQuery_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
