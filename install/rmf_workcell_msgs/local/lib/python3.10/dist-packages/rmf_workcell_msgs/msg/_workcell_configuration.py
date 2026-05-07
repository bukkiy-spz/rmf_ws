# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_workcell_msgs:msg/WorkcellConfiguration.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WorkcellConfiguration(type):
    """Metaclass of message 'WorkcellConfiguration'."""

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
            module = import_type_support('rmf_workcell_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_workcell_msgs.msg.WorkcellConfiguration')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__workcell_configuration
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__workcell_configuration
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__workcell_configuration
            cls._TYPE_SUPPORT = module.type_support_msg__msg__workcell_configuration
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__workcell_configuration

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from rmf_workcell_msgs.msg import Asset
            if Asset.__class__._TYPE_SUPPORT is None:
                Asset.__class__.__import_type_support__()

            from rmf_workcell_msgs.msg import Trait
            if Trait.__class__._TYPE_SUPPORT is None:
                Trait.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WorkcellConfiguration(metaclass=Metaclass_WorkcellConfiguration):
    """Message class 'WorkcellConfiguration'."""

    __slots__ = [
        '_time',
        '_guid',
        '_type',
        '_assets',
        '_traits',
    ]

    _fields_and_field_types = {
        'time': 'builtin_interfaces/Time',
        'guid': 'string',
        'type': 'string',
        'assets': 'sequence<rmf_workcell_msgs/Asset>',
        'traits': 'sequence<rmf_workcell_msgs/Trait>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rmf_workcell_msgs', 'msg'], 'Asset')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rmf_workcell_msgs', 'msg'], 'Trait')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.time = kwargs.get('time', Time())
        self.guid = kwargs.get('guid', str())
        self.type = kwargs.get('type', str())
        self.assets = kwargs.get('assets', [])
        self.traits = kwargs.get('traits', [])

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
        if self.time != other.time:
            return False
        if self.guid != other.guid:
            return False
        if self.type != other.type:
            return False
        if self.assets != other.assets:
            return False
        if self.traits != other.traits:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'time' field must be a sub message of type 'Time'"
        self._time = value

    @builtins.property
    def guid(self):
        """Message field 'guid'."""
        return self._guid

    @guid.setter
    def guid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'guid' field must be of type 'str'"
        self._guid = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'type' field must be of type 'str'"
        self._type = value

    @builtins.property
    def assets(self):
        """Message field 'assets'."""
        return self._assets

    @assets.setter
    def assets(self, value):
        if __debug__:
            from rmf_workcell_msgs.msg import Asset
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
                 all(isinstance(v, Asset) for v in value) and
                 True), \
                "The 'assets' field must be a set or sequence and each value of type 'Asset'"
        self._assets = value

    @builtins.property
    def traits(self):
        """Message field 'traits'."""
        return self._traits

    @traits.setter
    def traits(self, value):
        if __debug__:
            from rmf_workcell_msgs.msg import Trait
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
                 all(isinstance(v, Trait) for v in value) and
                 True), \
                "The 'traits' field must be a set or sequence and each value of type 'Trait'"
        self._traits = value
