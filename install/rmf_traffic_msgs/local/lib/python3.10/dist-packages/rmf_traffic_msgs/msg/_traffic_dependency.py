# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_traffic_msgs:msg/TrafficDependency.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrafficDependency(type):
    """Metaclass of message 'TrafficDependency'."""

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
                'rmf_traffic_msgs.msg.TrafficDependency')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traffic_dependency
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traffic_dependency
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traffic_dependency
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traffic_dependency
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traffic_dependency

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrafficDependency(metaclass=Metaclass_TrafficDependency):
    """Message class 'TrafficDependency'."""

    __slots__ = [
        '_dependent_checkpoint',
        '_on_participant',
        '_on_plan',
        '_on_route',
        '_on_checkpoint',
    ]

    _fields_and_field_types = {
        'dependent_checkpoint': 'uint64',
        'on_participant': 'uint64',
        'on_plan': 'uint64',
        'on_route': 'uint64',
        'on_checkpoint': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.dependent_checkpoint = kwargs.get('dependent_checkpoint', int())
        self.on_participant = kwargs.get('on_participant', int())
        self.on_plan = kwargs.get('on_plan', int())
        self.on_route = kwargs.get('on_route', int())
        self.on_checkpoint = kwargs.get('on_checkpoint', int())

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
        if self.dependent_checkpoint != other.dependent_checkpoint:
            return False
        if self.on_participant != other.on_participant:
            return False
        if self.on_plan != other.on_plan:
            return False
        if self.on_route != other.on_route:
            return False
        if self.on_checkpoint != other.on_checkpoint:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def dependent_checkpoint(self):
        """Message field 'dependent_checkpoint'."""
        return self._dependent_checkpoint

    @dependent_checkpoint.setter
    def dependent_checkpoint(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dependent_checkpoint' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'dependent_checkpoint' field must be an unsigned integer in [0, 18446744073709551615]"
        self._dependent_checkpoint = value

    @builtins.property
    def on_participant(self):
        """Message field 'on_participant'."""
        return self._on_participant

    @on_participant.setter
    def on_participant(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'on_participant' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'on_participant' field must be an unsigned integer in [0, 18446744073709551615]"
        self._on_participant = value

    @builtins.property
    def on_plan(self):
        """Message field 'on_plan'."""
        return self._on_plan

    @on_plan.setter
    def on_plan(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'on_plan' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'on_plan' field must be an unsigned integer in [0, 18446744073709551615]"
        self._on_plan = value

    @builtins.property
    def on_route(self):
        """Message field 'on_route'."""
        return self._on_route

    @on_route.setter
    def on_route(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'on_route' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'on_route' field must be an unsigned integer in [0, 18446744073709551615]"
        self._on_route = value

    @builtins.property
    def on_checkpoint(self):
        """Message field 'on_checkpoint'."""
        return self._on_checkpoint

    @on_checkpoint.setter
    def on_checkpoint(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'on_checkpoint' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'on_checkpoint' field must be an unsigned integer in [0, 18446744073709551615]"
        self._on_checkpoint = value
