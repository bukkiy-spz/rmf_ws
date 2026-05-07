# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_task_msgs:srv/GetDispatchStates.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetDispatchStates_Request(type):
    """Metaclass of message 'GetDispatchStates_Request'."""

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
                'rmf_task_msgs.srv.GetDispatchStates_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_dispatch_states__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_dispatch_states__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_dispatch_states__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_dispatch_states__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_dispatch_states__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetDispatchStates_Request(metaclass=Metaclass_GetDispatchStates_Request):
    """Message class 'GetDispatchStates_Request'."""

    __slots__ = [
        '_task_ids',
    ]

    _fields_and_field_types = {
        'task_ids': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.task_ids = kwargs.get('task_ids', [])

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
        if self.task_ids != other.task_ids:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def task_ids(self):
        """Message field 'task_ids'."""
        return self._task_ids

    @task_ids.setter
    def task_ids(self, value):
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
                "The 'task_ids' field must be a set or sequence and each value of type 'str'"
        self._task_ids = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetDispatchStates_Response(type):
    """Metaclass of message 'GetDispatchStates_Response'."""

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
                'rmf_task_msgs.srv.GetDispatchStates_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_dispatch_states__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_dispatch_states__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_dispatch_states__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_dispatch_states__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_dispatch_states__response

            from rmf_task_msgs.msg import DispatchStates
            if DispatchStates.__class__._TYPE_SUPPORT is None:
                DispatchStates.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetDispatchStates_Response(metaclass=Metaclass_GetDispatchStates_Response):
    """Message class 'GetDispatchStates_Response'."""

    __slots__ = [
        '_success',
        '_states',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'states': 'rmf_task_msgs/DispatchStates',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_task_msgs', 'msg'], 'DispatchStates'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        from rmf_task_msgs.msg import DispatchStates
        self.states = kwargs.get('states', DispatchStates())

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
        if self.success != other.success:
            return False
        if self.states != other.states:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def states(self):
        """Message field 'states'."""
        return self._states

    @states.setter
    def states(self, value):
        if __debug__:
            from rmf_task_msgs.msg import DispatchStates
            assert \
                isinstance(value, DispatchStates), \
                "The 'states' field must be a sub message of type 'DispatchStates'"
        self._states = value


class Metaclass_GetDispatchStates(type):
    """Metaclass of service 'GetDispatchStates'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rmf_task_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_task_msgs.srv.GetDispatchStates')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_dispatch_states

            from rmf_task_msgs.srv import _get_dispatch_states
            if _get_dispatch_states.Metaclass_GetDispatchStates_Request._TYPE_SUPPORT is None:
                _get_dispatch_states.Metaclass_GetDispatchStates_Request.__import_type_support__()
            if _get_dispatch_states.Metaclass_GetDispatchStates_Response._TYPE_SUPPORT is None:
                _get_dispatch_states.Metaclass_GetDispatchStates_Response.__import_type_support__()


class GetDispatchStates(metaclass=Metaclass_GetDispatchStates):
    from rmf_task_msgs.srv._get_dispatch_states import GetDispatchStates_Request as Request
    from rmf_task_msgs.srv._get_dispatch_states import GetDispatchStates_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
