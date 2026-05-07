# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_fleet_msgs:msg/InterruptRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InterruptRequest(type):
    """Metaclass of message 'InterruptRequest'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TYPE_INTERRUPT': 0,
        'TYPE_RESUME': 1,
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
                'rmf_fleet_msgs.msg.InterruptRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__interrupt_request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__interrupt_request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__interrupt_request
            cls._TYPE_SUPPORT = module.type_support_msg__msg__interrupt_request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__interrupt_request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TYPE_INTERRUPT': cls.__constants['TYPE_INTERRUPT'],
            'TYPE_RESUME': cls.__constants['TYPE_RESUME'],
        }

    @property
    def TYPE_INTERRUPT(self):
        """Message constant 'TYPE_INTERRUPT'."""
        return Metaclass_InterruptRequest.__constants['TYPE_INTERRUPT']

    @property
    def TYPE_RESUME(self):
        """Message constant 'TYPE_RESUME'."""
        return Metaclass_InterruptRequest.__constants['TYPE_RESUME']


class InterruptRequest(metaclass=Metaclass_InterruptRequest):
    """
    Message class 'InterruptRequest'.

    Constants:
      TYPE_INTERRUPT
      TYPE_RESUME
    """

    __slots__ = [
        '_fleet_name',
        '_robot_name',
        '_interrupt_id',
        '_labels',
        '_type',
    ]

    _fields_and_field_types = {
        'fleet_name': 'string',
        'robot_name': 'string',
        'interrupt_id': 'string',
        'labels': 'sequence<string>',
        'type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.fleet_name = kwargs.get('fleet_name', str())
        self.robot_name = kwargs.get('robot_name', str())
        self.interrupt_id = kwargs.get('interrupt_id', str())
        self.labels = kwargs.get('labels', [])
        self.type = kwargs.get('type', int())

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
        if self.interrupt_id != other.interrupt_id:
            return False
        if self.labels != other.labels:
            return False
        if self.type != other.type:
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
    def interrupt_id(self):
        """Message field 'interrupt_id'."""
        return self._interrupt_id

    @interrupt_id.setter
    def interrupt_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'interrupt_id' field must be of type 'str'"
        self._interrupt_id = value

    @builtins.property
    def labels(self):
        """Message field 'labels'."""
        return self._labels

    @labels.setter
    def labels(self, value):
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
                "The 'labels' field must be a set or sequence and each value of type 'str'"
        self._labels = value

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
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value
