# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_task_msgs:msg/TaskSummary.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TaskSummary(type):
    """Metaclass of message 'TaskSummary'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATE_QUEUED': 0,
        'STATE_ACTIVE': 1,
        'STATE_COMPLETED': 2,
        'STATE_FAILED': 3,
        'STATE_CANCELED': 4,
        'STATE_PENDING': 5,
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
                'rmf_task_msgs.msg.TaskSummary')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__task_summary
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__task_summary
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__task_summary
            cls._TYPE_SUPPORT = module.type_support_msg__msg__task_summary
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__task_summary

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from rmf_task_msgs.msg import TaskProfile
            if TaskProfile.__class__._TYPE_SUPPORT is None:
                TaskProfile.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATE_QUEUED': cls.__constants['STATE_QUEUED'],
            'STATE_ACTIVE': cls.__constants['STATE_ACTIVE'],
            'STATE_COMPLETED': cls.__constants['STATE_COMPLETED'],
            'STATE_FAILED': cls.__constants['STATE_FAILED'],
            'STATE_CANCELED': cls.__constants['STATE_CANCELED'],
            'STATE_PENDING': cls.__constants['STATE_PENDING'],
        }

    @property
    def STATE_QUEUED(self):
        """Message constant 'STATE_QUEUED'."""
        return Metaclass_TaskSummary.__constants['STATE_QUEUED']

    @property
    def STATE_ACTIVE(self):
        """Message constant 'STATE_ACTIVE'."""
        return Metaclass_TaskSummary.__constants['STATE_ACTIVE']

    @property
    def STATE_COMPLETED(self):
        """Message constant 'STATE_COMPLETED'."""
        return Metaclass_TaskSummary.__constants['STATE_COMPLETED']

    @property
    def STATE_FAILED(self):
        """Message constant 'STATE_FAILED'."""
        return Metaclass_TaskSummary.__constants['STATE_FAILED']

    @property
    def STATE_CANCELED(self):
        """Message constant 'STATE_CANCELED'."""
        return Metaclass_TaskSummary.__constants['STATE_CANCELED']

    @property
    def STATE_PENDING(self):
        """Message constant 'STATE_PENDING'."""
        return Metaclass_TaskSummary.__constants['STATE_PENDING']


class TaskSummary(metaclass=Metaclass_TaskSummary):
    """
    Message class 'TaskSummary'.

    Constants:
      STATE_QUEUED
      STATE_ACTIVE
      STATE_COMPLETED
      STATE_FAILED
      STATE_CANCELED
      STATE_PENDING
    """

    __slots__ = [
        '_fleet_name',
        '_task_id',
        '_task_profile',
        '_state',
        '_status',
        '_submission_time',
        '_start_time',
        '_end_time',
        '_robot_name',
    ]

    _fields_and_field_types = {
        'fleet_name': 'string',
        'task_id': 'string',
        'task_profile': 'rmf_task_msgs/TaskProfile',
        'state': 'uint32',
        'status': 'string',
        'submission_time': 'builtin_interfaces/Time',
        'start_time': 'builtin_interfaces/Time',
        'end_time': 'builtin_interfaces/Time',
        'robot_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_task_msgs', 'msg'], 'TaskProfile'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.fleet_name = kwargs.get('fleet_name', str())
        self.task_id = kwargs.get('task_id', str())
        from rmf_task_msgs.msg import TaskProfile
        self.task_profile = kwargs.get('task_profile', TaskProfile())
        self.state = kwargs.get('state', int())
        self.status = kwargs.get('status', str())
        from builtin_interfaces.msg import Time
        self.submission_time = kwargs.get('submission_time', Time())
        from builtin_interfaces.msg import Time
        self.start_time = kwargs.get('start_time', Time())
        from builtin_interfaces.msg import Time
        self.end_time = kwargs.get('end_time', Time())
        self.robot_name = kwargs.get('robot_name', str())

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
        if self.task_id != other.task_id:
            return False
        if self.task_profile != other.task_profile:
            return False
        if self.state != other.state:
            return False
        if self.status != other.status:
            return False
        if self.submission_time != other.submission_time:
            return False
        if self.start_time != other.start_time:
            return False
        if self.end_time != other.end_time:
            return False
        if self.robot_name != other.robot_name:
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
    def task_profile(self):
        """Message field 'task_profile'."""
        return self._task_profile

    @task_profile.setter
    def task_profile(self, value):
        if __debug__:
            from rmf_task_msgs.msg import TaskProfile
            assert \
                isinstance(value, TaskProfile), \
                "The 'task_profile' field must be a sub message of type 'TaskProfile'"
        self._task_profile = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'state' field must be an unsigned integer in [0, 4294967295]"
        self._state = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'status' field must be of type 'str'"
        self._status = value

    @builtins.property
    def submission_time(self):
        """Message field 'submission_time'."""
        return self._submission_time

    @submission_time.setter
    def submission_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'submission_time' field must be a sub message of type 'Time'"
        self._submission_time = value

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
    def end_time(self):
        """Message field 'end_time'."""
        return self._end_time

    @end_time.setter
    def end_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'end_time' field must be a sub message of type 'Time'"
        self._end_time = value

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
