# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_fleet_msgs:msg/BeaconState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BeaconState(type):
    """Metaclass of message 'BeaconState'."""

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
            module = import_type_support('rmf_fleet_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_fleet_msgs.msg.BeaconState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__beacon_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__beacon_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__beacon_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__beacon_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__beacon_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BeaconState(metaclass=Metaclass_BeaconState):
    """Message class 'BeaconState'."""

    __slots__ = [
        '_id',
        '_online',
        '_category',
        '_activated',
        '_level',
    ]

    _fields_and_field_types = {
        'id': 'string',
        'online': 'boolean',
        'category': 'string',
        'activated': 'boolean',
        'level': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', str())
        self.online = kwargs.get('online', bool())
        self.category = kwargs.get('category', str())
        self.activated = kwargs.get('activated', bool())
        self.level = kwargs.get('level', str())

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
        if self.id != other.id:
            return False
        if self.online != other.online:
            return False
        if self.category != other.category:
            return False
        if self.activated != other.activated:
            return False
        if self.level != other.level:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @builtins.property
    def online(self):
        """Message field 'online'."""
        return self._online

    @online.setter
    def online(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'online' field must be of type 'bool'"
        self._online = value

    @builtins.property
    def category(self):
        """Message field 'category'."""
        return self._category

    @category.setter
    def category(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'category' field must be of type 'str'"
        self._category = value

    @builtins.property
    def activated(self):
        """Message field 'activated'."""
        return self._activated

    @activated.setter
    def activated(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'activated' field must be of type 'bool'"
        self._activated = value

    @builtins.property
    def level(self):
        """Message field 'level'."""
        return self._level

    @level.setter
    def level(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'level' field must be of type 'str'"
        self._level = value
