# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_fleet_msgs:msg/RobotState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotState(type):
    """Metaclass of message 'RobotState'."""

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
                'rmf_fleet_msgs.msg.RobotState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_state

            from rmf_fleet_msgs.msg import Location
            if Location.__class__._TYPE_SUPPORT is None:
                Location.__class__.__import_type_support__()

            from rmf_fleet_msgs.msg import RobotMode
            if RobotMode.__class__._TYPE_SUPPORT is None:
                RobotMode.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotState(metaclass=Metaclass_RobotState):
    """Message class 'RobotState'."""

    __slots__ = [
        '_name',
        '_model',
        '_task_id',
        '_seq',
        '_mode',
        '_battery_percent',
        '_location',
        '_path',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'model': 'string',
        'task_id': 'string',
        'seq': 'uint64',
        'mode': 'rmf_fleet_msgs/RobotMode',
        'battery_percent': 'float',
        'location': 'rmf_fleet_msgs/Location',
        'path': 'sequence<rmf_fleet_msgs/Location>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_fleet_msgs', 'msg'], 'RobotMode'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_fleet_msgs', 'msg'], 'Location'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rmf_fleet_msgs', 'msg'], 'Location')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.model = kwargs.get('model', str())
        self.task_id = kwargs.get('task_id', str())
        self.seq = kwargs.get('seq', int())
        from rmf_fleet_msgs.msg import RobotMode
        self.mode = kwargs.get('mode', RobotMode())
        self.battery_percent = kwargs.get('battery_percent', float())
        from rmf_fleet_msgs.msg import Location
        self.location = kwargs.get('location', Location())
        self.path = kwargs.get('path', [])

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
        if self.model != other.model:
            return False
        if self.task_id != other.task_id:
            return False
        if self.seq != other.seq:
            return False
        if self.mode != other.mode:
            return False
        if self.battery_percent != other.battery_percent:
            return False
        if self.location != other.location:
            return False
        if self.path != other.path:
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
    def model(self):
        """Message field 'model'."""
        return self._model

    @model.setter
    def model(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'model' field must be of type 'str'"
        self._model = value

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
    def seq(self):
        """Message field 'seq'."""
        return self._seq

    @seq.setter
    def seq(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seq' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'seq' field must be an unsigned integer in [0, 18446744073709551615]"
        self._seq = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            from rmf_fleet_msgs.msg import RobotMode
            assert \
                isinstance(value, RobotMode), \
                "The 'mode' field must be a sub message of type 'RobotMode'"
        self._mode = value

    @builtins.property
    def battery_percent(self):
        """Message field 'battery_percent'."""
        return self._battery_percent

    @battery_percent.setter
    def battery_percent(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_percent' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_percent' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_percent = value

    @builtins.property
    def location(self):
        """Message field 'location'."""
        return self._location

    @location.setter
    def location(self, value):
        if __debug__:
            from rmf_fleet_msgs.msg import Location
            assert \
                isinstance(value, Location), \
                "The 'location' field must be a sub message of type 'Location'"
        self._location = value

    @builtins.property
    def path(self):
        """Message field 'path'."""
        return self._path

    @path.setter
    def path(self, value):
        if __debug__:
            from rmf_fleet_msgs.msg import Location
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
                 all(isinstance(v, Location) for v in value) and
                 True), \
                "The 'path' field must be a set or sequence and each value of type 'Location'"
        self._path = value
