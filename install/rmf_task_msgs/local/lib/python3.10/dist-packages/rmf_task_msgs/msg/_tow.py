# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_task_msgs:msg/Tow.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Tow(type):
    """Metaclass of message 'Tow'."""

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
                'rmf_task_msgs.msg.Tow')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tow
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tow
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tow
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tow
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tow

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Tow(metaclass=Metaclass_Tow):
    """Message class 'Tow'."""

    __slots__ = [
        '_task_id',
        '_object_type',
        '_is_object_id_known',
        '_object_id',
        '_pickup_place_name',
        '_is_dropoff_place_known',
        '_dropoff_place_name',
    ]

    _fields_and_field_types = {
        'task_id': 'string',
        'object_type': 'string',
        'is_object_id_known': 'boolean',
        'object_id': 'string',
        'pickup_place_name': 'string',
        'is_dropoff_place_known': 'boolean',
        'dropoff_place_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.task_id = kwargs.get('task_id', str())
        self.object_type = kwargs.get('object_type', str())
        self.is_object_id_known = kwargs.get('is_object_id_known', bool())
        self.object_id = kwargs.get('object_id', str())
        self.pickup_place_name = kwargs.get('pickup_place_name', str())
        self.is_dropoff_place_known = kwargs.get('is_dropoff_place_known', bool())
        self.dropoff_place_name = kwargs.get('dropoff_place_name', str())

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
        if self.object_type != other.object_type:
            return False
        if self.is_object_id_known != other.is_object_id_known:
            return False
        if self.object_id != other.object_id:
            return False
        if self.pickup_place_name != other.pickup_place_name:
            return False
        if self.is_dropoff_place_known != other.is_dropoff_place_known:
            return False
        if self.dropoff_place_name != other.dropoff_place_name:
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
    def object_type(self):
        """Message field 'object_type'."""
        return self._object_type

    @object_type.setter
    def object_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'object_type' field must be of type 'str'"
        self._object_type = value

    @builtins.property
    def is_object_id_known(self):
        """Message field 'is_object_id_known'."""
        return self._is_object_id_known

    @is_object_id_known.setter
    def is_object_id_known(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_object_id_known' field must be of type 'bool'"
        self._is_object_id_known = value

    @builtins.property
    def object_id(self):
        """Message field 'object_id'."""
        return self._object_id

    @object_id.setter
    def object_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'object_id' field must be of type 'str'"
        self._object_id = value

    @builtins.property
    def pickup_place_name(self):
        """Message field 'pickup_place_name'."""
        return self._pickup_place_name

    @pickup_place_name.setter
    def pickup_place_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'pickup_place_name' field must be of type 'str'"
        self._pickup_place_name = value

    @builtins.property
    def is_dropoff_place_known(self):
        """Message field 'is_dropoff_place_known'."""
        return self._is_dropoff_place_known

    @is_dropoff_place_known.setter
    def is_dropoff_place_known(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_dropoff_place_known' field must be of type 'bool'"
        self._is_dropoff_place_known = value

    @builtins.property
    def dropoff_place_name(self):
        """Message field 'dropoff_place_name'."""
        return self._dropoff_place_name

    @dropoff_place_name.setter
    def dropoff_place_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'dropoff_place_name' field must be of type 'str'"
        self._dropoff_place_name = value
