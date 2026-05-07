# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_traffic_msgs:msg/MirrorUpdate.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MirrorUpdate(type):
    """Metaclass of message 'MirrorUpdate'."""

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
                'rmf_traffic_msgs.msg.MirrorUpdate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mirror_update
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mirror_update
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mirror_update
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mirror_update
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mirror_update

            from rmf_traffic_msgs.msg import ScheduleIdentity
            if ScheduleIdentity.__class__._TYPE_SUPPORT is None:
                ScheduleIdentity.__class__.__import_type_support__()

            from rmf_traffic_msgs.msg import SchedulePatch
            if SchedulePatch.__class__._TYPE_SUPPORT is None:
                SchedulePatch.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MirrorUpdate(metaclass=Metaclass_MirrorUpdate):
    """Message class 'MirrorUpdate'."""

    __slots__ = [
        '_node_id',
        '_database_version',
        '_patch',
        '_is_remedial_update',
    ]

    _fields_and_field_types = {
        'node_id': 'rmf_traffic_msgs/ScheduleIdentity',
        'database_version': 'uint64',
        'patch': 'rmf_traffic_msgs/SchedulePatch',
        'is_remedial_update': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'ScheduleIdentity'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'SchedulePatch'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from rmf_traffic_msgs.msg import ScheduleIdentity
        self.node_id = kwargs.get('node_id', ScheduleIdentity())
        self.database_version = kwargs.get('database_version', int())
        from rmf_traffic_msgs.msg import SchedulePatch
        self.patch = kwargs.get('patch', SchedulePatch())
        self.is_remedial_update = kwargs.get('is_remedial_update', bool())

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
        if self.node_id != other.node_id:
            return False
        if self.database_version != other.database_version:
            return False
        if self.patch != other.patch:
            return False
        if self.is_remedial_update != other.is_remedial_update:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def node_id(self):
        """Message field 'node_id'."""
        return self._node_id

    @node_id.setter
    def node_id(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import ScheduleIdentity
            assert \
                isinstance(value, ScheduleIdentity), \
                "The 'node_id' field must be a sub message of type 'ScheduleIdentity'"
        self._node_id = value

    @builtins.property
    def database_version(self):
        """Message field 'database_version'."""
        return self._database_version

    @database_version.setter
    def database_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'database_version' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'database_version' field must be an unsigned integer in [0, 18446744073709551615]"
        self._database_version = value

    @builtins.property
    def patch(self):
        """Message field 'patch'."""
        return self._patch

    @patch.setter
    def patch(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import SchedulePatch
            assert \
                isinstance(value, SchedulePatch), \
                "The 'patch' field must be a sub message of type 'SchedulePatch'"
        self._patch = value

    @builtins.property
    def is_remedial_update(self):
        """Message field 'is_remedial_update'."""
        return self._is_remedial_update

    @is_remedial_update.setter
    def is_remedial_update(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_remedial_update' field must be of type 'bool'"
        self._is_remedial_update = value
