# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_task_msgs:msg/Station.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Station(type):
    """Metaclass of message 'Station'."""

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
                'rmf_task_msgs.msg.Station')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__station
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__station
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__station
            cls._TYPE_SUPPORT = module.type_support_msg__msg__station
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__station

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Station(metaclass=Metaclass_Station):
    """Message class 'Station'."""

    __slots__ = [
        '_task_id',
        '_robot_type',
        '_place_name',
    ]

    _fields_and_field_types = {
        'task_id': 'string',
        'robot_type': 'string',
        'place_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.task_id = kwargs.get('task_id', str())
        self.robot_type = kwargs.get('robot_type', str())
        self.place_name = kwargs.get('place_name', str())

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
        if self.task_id != other.task_id:
            return False
        if self.robot_type != other.robot_type:
            return False
        if self.place_name != other.place_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def task_id(self):
        """Message field 'task_id'."""
        return self._task_id

    @task_id.setter
    def task_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'task_id' field must be of type 'str'"
        self._task_id = value

    @builtins.property
    def robot_type(self):
        """Message field 'robot_type'."""
        return self._robot_type

    @robot_type.setter
    def robot_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'robot_type' field must be of type 'str'"
        self._robot_type = value

    @builtins.property
    def place_name(self):
        """Message field 'place_name'."""
        return self._place_name

    @place_name.setter
    def place_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'place_name' field must be of type 'str'"
        self._place_name = value
