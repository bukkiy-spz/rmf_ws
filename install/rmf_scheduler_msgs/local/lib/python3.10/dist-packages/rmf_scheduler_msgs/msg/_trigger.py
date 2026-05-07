# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_scheduler_msgs:msg/Trigger.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Trigger(type):
    """Metaclass of message 'Trigger'."""

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
            module = import_type_support('rmf_scheduler_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_scheduler_msgs.msg.Trigger')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__trigger
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__trigger
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__trigger
            cls._TYPE_SUPPORT = module.type_support_msg__msg__trigger
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__trigger

            from rmf_scheduler_msgs.msg import Payload
            if Payload.__class__._TYPE_SUPPORT is None:
                Payload.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'GROUP__DEFAULT': 'default',
        }

    @property
    def GROUP__DEFAULT(cls):
        """Return default value for message field 'group'."""
        return 'default'


class Trigger(metaclass=Metaclass_Trigger):
    """Message class 'Trigger'."""

    __slots__ = [
        '_name',
        '_created_at',
        '_at',
        '_group',
        '_payload',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'created_at': 'int64',
        'at': 'int64',
        'group': 'string',
        'payload': 'rmf_scheduler_msgs/Payload',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_scheduler_msgs', 'msg'], 'Payload'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.created_at = kwargs.get('created_at', int())
        self.at = kwargs.get('at', int())
        self.group = kwargs.get(
            'group', Trigger.GROUP__DEFAULT)
        from rmf_scheduler_msgs.msg import Payload
        self.payload = kwargs.get('payload', Payload())

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
        if self.name != other.name:
            return False
        if self.created_at != other.created_at:
            return False
        if self.at != other.at:
            return False
        if self.group != other.group:
            return False
        if self.payload != other.payload:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def created_at(self):
        """Message field 'created_at'."""
        return self._created_at

    @created_at.setter
    def created_at(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'created_at' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'created_at' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._created_at = value

    @builtins.property
    def at(self):
        """Message field 'at'."""
        return self._at

    @at.setter
    def at(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'at' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'at' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._at = value

    @builtins.property
    def group(self):
        """Message field 'group'."""
        return self._group

    @group.setter
    def group(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'group' field must be of type 'str'"
        self._group = value

    @builtins.property
    def payload(self):
        """Message field 'payload'."""
        return self._payload

    @payload.setter
    def payload(self, value):
        if __debug__:
            from rmf_scheduler_msgs.msg import Payload
            assert \
                isinstance(value, Payload), \
                "The 'payload' field must be a sub message of type 'Payload'"
        self._payload = value
