# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_fleet_msgs:msg/LaneRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'open_lanes'
# Member 'close_lanes'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneRequest(type):
    """Metaclass of message 'LaneRequest'."""

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
                'rmf_fleet_msgs.msg.LaneRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_request
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LaneRequest(metaclass=Metaclass_LaneRequest):
    """Message class 'LaneRequest'."""

    __slots__ = [
        '_fleet_name',
        '_open_lanes',
        '_close_lanes',
    ]

    _fields_and_field_types = {
        'fleet_name': 'string',
        'open_lanes': 'sequence<uint64>',
        'close_lanes': 'sequence<uint64>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.fleet_name = kwargs.get('fleet_name', str())
        self.open_lanes = array.array('Q', kwargs.get('open_lanes', []))
        self.close_lanes = array.array('Q', kwargs.get('close_lanes', []))

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
        if self.open_lanes != other.open_lanes:
            return False
        if self.close_lanes != other.close_lanes:
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
    def open_lanes(self):
        """Message field 'open_lanes'."""
        return self._open_lanes

    @open_lanes.setter
    def open_lanes(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'open_lanes' array.array() must have the type code of 'Q'"
            self._open_lanes = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'open_lanes' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._open_lanes = array.array('Q', value)

    @builtins.property
    def close_lanes(self):
        """Message field 'close_lanes'."""
        return self._close_lanes

    @close_lanes.setter
    def close_lanes(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'close_lanes' array.array() must have the type code of 'Q'"
            self._close_lanes = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'close_lanes' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._close_lanes = array.array('Q', value)
