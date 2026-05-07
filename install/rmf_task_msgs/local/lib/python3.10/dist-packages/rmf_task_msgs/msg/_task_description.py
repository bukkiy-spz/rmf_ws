# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_task_msgs:msg/TaskDescription.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TaskDescription(type):
    """Metaclass of message 'TaskDescription'."""

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
                'rmf_task_msgs.msg.TaskDescription')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__task_description
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__task_description
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__task_description
            cls._TYPE_SUPPORT = module.type_support_msg__msg__task_description
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__task_description

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from rmf_task_msgs.msg import Clean
            if Clean.__class__._TYPE_SUPPORT is None:
                Clean.__class__.__import_type_support__()

            from rmf_task_msgs.msg import Delivery
            if Delivery.__class__._TYPE_SUPPORT is None:
                Delivery.__class__.__import_type_support__()

            from rmf_task_msgs.msg import Loop
            if Loop.__class__._TYPE_SUPPORT is None:
                Loop.__class__.__import_type_support__()

            from rmf_task_msgs.msg import Priority
            if Priority.__class__._TYPE_SUPPORT is None:
                Priority.__class__.__import_type_support__()

            from rmf_task_msgs.msg import Station
            if Station.__class__._TYPE_SUPPORT is None:
                Station.__class__.__import_type_support__()

            from rmf_task_msgs.msg import TaskType
            if TaskType.__class__._TYPE_SUPPORT is None:
                TaskType.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TaskDescription(metaclass=Metaclass_TaskDescription):
    """Message class 'TaskDescription'."""

    __slots__ = [
        '_start_time',
        '_priority',
        '_task_type',
        '_station',
        '_loop',
        '_delivery',
        '_clean',
    ]

    _fields_and_field_types = {
        'start_time': 'builtin_interfaces/Time',
        'priority': 'rmf_task_msgs/Priority',
        'task_type': 'rmf_task_msgs/TaskType',
        'station': 'rmf_task_msgs/Station',
        'loop': 'rmf_task_msgs/Loop',
        'delivery': 'rmf_task_msgs/Delivery',
        'clean': 'rmf_task_msgs/Clean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_task_msgs', 'msg'], 'Priority'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_task_msgs', 'msg'], 'TaskType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_task_msgs', 'msg'], 'Station'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_task_msgs', 'msg'], 'Loop'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_task_msgs', 'msg'], 'Delivery'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_task_msgs', 'msg'], 'Clean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.start_time = kwargs.get('start_time', Time())
        from rmf_task_msgs.msg import Priority
        self.priority = kwargs.get('priority', Priority())
        from rmf_task_msgs.msg import TaskType
        self.task_type = kwargs.get('task_type', TaskType())
        from rmf_task_msgs.msg import Station
        self.station = kwargs.get('station', Station())
        from rmf_task_msgs.msg import Loop
        self.loop = kwargs.get('loop', Loop())
        from rmf_task_msgs.msg import Delivery
        self.delivery = kwargs.get('delivery', Delivery())
        from rmf_task_msgs.msg import Clean
        self.clean = kwargs.get('clean', Clean())

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
        if self.start_time != other.start_time:
            return False
        if self.priority != other.priority:
            return False
        if self.task_type != other.task_type:
            return False
        if self.station != other.station:
            return False
        if self.loop != other.loop:
            return False
        if self.delivery != other.delivery:
            return False
        if self.clean != other.clean:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def start_time(self):
        """Message field 'start_time'."""
        return self._start_time

    @start_time.setter
    def start_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'start_time' field must be a sub message of type 'Time'"
        self._start_time = value

    @builtins.property
    def priority(self):
        """Message field 'priority'."""
        return self._priority

    @priority.setter
    def priority(self, value):
        if __debug__:
            from rmf_task_msgs.msg import Priority
            assert \
                isinstance(value, Priority), \
                "The 'priority' field must be a sub message of type 'Priority'"
        self._priority = value

    @builtins.property
    def task_type(self):
        """Message field 'task_type'."""
        return self._task_type

    @task_type.setter
    def task_type(self, value):
        if __debug__:
            from rmf_task_msgs.msg import TaskType
            assert \
                isinstance(value, TaskType), \
                "The 'task_type' field must be a sub message of type 'TaskType'"
        self._task_type = value

    @builtins.property
    def station(self):
        """Message field 'station'."""
        return self._station

    @station.setter
    def station(self, value):
        if __debug__:
            from rmf_task_msgs.msg import Station
            assert \
                isinstance(value, Station), \
                "The 'station' field must be a sub message of type 'Station'"
        self._station = value

    @builtins.property
    def loop(self):
        """Message field 'loop'."""
        return self._loop

    @loop.setter
    def loop(self, value):
        if __debug__:
            from rmf_task_msgs.msg import Loop
            assert \
                isinstance(value, Loop), \
                "The 'loop' field must be a sub message of type 'Loop'"
        self._loop = value

    @builtins.property
    def delivery(self):
        """Message field 'delivery'."""
        return self._delivery

    @delivery.setter
    def delivery(self, value):
        if __debug__:
            from rmf_task_msgs.msg import Delivery
            assert \
                isinstance(value, Delivery), \
                "The 'delivery' field must be a sub message of type 'Delivery'"
        self._delivery = value

    @builtins.property
    def clean(self):
        """Message field 'clean'."""
        return self._clean

    @clean.setter
    def clean(self, value):
        if __debug__:
            from rmf_task_msgs.msg import Clean
            assert \
                isinstance(value, Clean), \
                "The 'clean' field must be a sub message of type 'Clean'"
        self._clean = value
