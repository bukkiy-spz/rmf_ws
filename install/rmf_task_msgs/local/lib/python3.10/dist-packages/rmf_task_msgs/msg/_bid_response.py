# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_task_msgs:msg/BidResponse.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BidResponse(type):
    """Metaclass of message 'BidResponse'."""

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
                'rmf_task_msgs.msg.BidResponse')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bid_response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bid_response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bid_response
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bid_response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bid_response

            from rmf_task_msgs.msg import BidProposal
            if BidProposal.__class__._TYPE_SUPPORT is None:
                BidProposal.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BidResponse(metaclass=Metaclass_BidResponse):
    """Message class 'BidResponse'."""

    __slots__ = [
        '_task_id',
        '_has_proposal',
        '_proposal',
        '_errors',
    ]

    _fields_and_field_types = {
        'task_id': 'string',
        'has_proposal': 'boolean',
        'proposal': 'rmf_task_msgs/BidProposal',
        'errors': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_task_msgs', 'msg'], 'BidProposal'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.task_id = kwargs.get('task_id', str())
        self.has_proposal = kwargs.get('has_proposal', bool())
        from rmf_task_msgs.msg import BidProposal
        self.proposal = kwargs.get('proposal', BidProposal())
        self.errors = kwargs.get('errors', [])

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
        if self.has_proposal != other.has_proposal:
            return False
        if self.proposal != other.proposal:
            return False
        if self.errors != other.errors:
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
    def has_proposal(self):
        """Message field 'has_proposal'."""
        return self._has_proposal

    @has_proposal.setter
    def has_proposal(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_proposal' field must be of type 'bool'"
        self._has_proposal = value

    @builtins.property
    def proposal(self):
        """Message field 'proposal'."""
        return self._proposal

    @proposal.setter
    def proposal(self, value):
        if __debug__:
            from rmf_task_msgs.msg import BidProposal
            assert \
                isinstance(value, BidProposal), \
                "The 'proposal' field must be a sub message of type 'BidProposal'"
        self._proposal = value

    @builtins.property
    def errors(self):
        """Message field 'errors'."""
        return self._errors

    @errors.setter
    def errors(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'errors' field must be a set or sequence and each value of type 'str'"
        self._errors = value
