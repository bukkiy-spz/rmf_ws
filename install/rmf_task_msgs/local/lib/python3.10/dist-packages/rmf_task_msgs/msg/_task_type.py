# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_task_msgs:msg/TaskType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TaskType(type):
    """Metaclass of message 'TaskType'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TYPE_STATION': 0,
        'TYPE_LOOP': 1,
        'TYPE_DELIVERY': 2,
        'TYPE_CHARGE_BATTERY': 3,
        'TYPE_CLEAN': 4,
        'TYPE_PATROL': 5,
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
                'rmf_task_msgs.msg.TaskType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__task_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__task_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__task_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__task_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__task_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TYPE_STATION': cls.__constants['TYPE_STATION'],
            'TYPE_LOOP': cls.__constants['TYPE_LOOP'],
            'TYPE_DELIVERY': cls.__constants['TYPE_DELIVERY'],
            'TYPE_CHARGE_BATTERY': cls.__constants['TYPE_CHARGE_BATTERY'],
            'TYPE_CLEAN': cls.__constants['TYPE_CLEAN'],
            'TYPE_PATROL': cls.__constants['TYPE_PATROL'],
        }

    @property
    def TYPE_STATION(self):
        """Message constant 'TYPE_STATION'."""
        return Metaclass_TaskType.__constants['TYPE_STATION']

    @property
    def TYPE_LOOP(self):
        """Message constant 'TYPE_LOOP'."""
        return Metaclass_TaskType.__constants['TYPE_LOOP']

    @property
    def TYPE_DELIVERY(self):
        """Message constant 'TYPE_DELIVERY'."""
        return Metaclass_TaskType.__constants['TYPE_DELIVERY']

    @property
    def TYPE_CHARGE_BATTERY(self):
        """Message constant 'TYPE_CHARGE_BATTERY'."""
        return Metaclass_TaskType.__constants['TYPE_CHARGE_BATTERY']

    @property
    def TYPE_CLEAN(self):
        """Message constant 'TYPE_CLEAN'."""
        return Metaclass_TaskType.__constants['TYPE_CLEAN']

    @property
    def TYPE_PATROL(self):
        """Message constant 'TYPE_PATROL'."""
        return Metaclass_TaskType.__constants['TYPE_PATROL']


class TaskType(metaclass=Metaclass_TaskType):
    """
    Message class 'TaskType'.

    Constants:
      TYPE_STATION
      TYPE_LOOP
      TYPE_DELIVERY
      TYPE_CHARGE_BATTERY
      TYPE_CLEAN
      TYPE_PATROL
    """

    __slots__ = [
        '_type',
    ]

    _fields_and_field_types = {
        'type': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
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
        if self.type != other.type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
