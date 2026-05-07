# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_traffic_msgs:msg/NegotiationProposal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NegotiationProposal(type):
    """Metaclass of message 'NegotiationProposal'."""

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
                'rmf_traffic_msgs.msg.NegotiationProposal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__negotiation_proposal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__negotiation_proposal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__negotiation_proposal
            cls._TYPE_SUPPORT = module.type_support_msg__msg__negotiation_proposal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__negotiation_proposal

            from rmf_traffic_msgs.msg import NegotiationKey
            if NegotiationKey.__class__._TYPE_SUPPORT is None:
                NegotiationKey.__class__.__import_type_support__()

            from rmf_traffic_msgs.msg import Route
            if Route.__class__._TYPE_SUPPORT is None:
                Route.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NegotiationProposal(metaclass=Metaclass_NegotiationProposal):
    """Message class 'NegotiationProposal'."""

    __slots__ = [
        '_conflict_version',
        '_proposal_version',
        '_for_participant',
        '_to_accommodate',
        '_plan_id',
        '_itinerary',
    ]

    _fields_and_field_types = {
        'conflict_version': 'uint64',
        'proposal_version': 'uint64',
        'for_participant': 'uint64',
        'to_accommodate': 'sequence<rmf_traffic_msgs/NegotiationKey>',
        'plan_id': 'uint64',
        'itinerary': 'sequence<rmf_traffic_msgs/Route>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'NegotiationKey')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'Route')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.conflict_version = kwargs.get('conflict_version', int())
        self.proposal_version = kwargs.get('proposal_version', int())
        self.for_participant = kwargs.get('for_participant', int())
        self.to_accommodate = kwargs.get('to_accommodate', [])
        self.plan_id = kwargs.get('plan_id', int())
        self.itinerary = kwargs.get('itinerary', [])

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
        if self.conflict_version != other.conflict_version:
            return False
        if self.proposal_version != other.proposal_version:
            return False
        if self.for_participant != other.for_participant:
            return False
        if self.to_accommodate != other.to_accommodate:
            return False
        if self.plan_id != other.plan_id:
            return False
        if self.itinerary != other.itinerary:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def conflict_version(self):
        """Message field 'conflict_version'."""
        return self._conflict_version

    @conflict_version.setter
    def conflict_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'conflict_version' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'conflict_version' field must be an unsigned integer in [0, 18446744073709551615]"
        self._conflict_version = value

    @builtins.property
    def proposal_version(self):
        """Message field 'proposal_version'."""
        return self._proposal_version

    @proposal_version.setter
    def proposal_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'proposal_version' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'proposal_version' field must be an unsigned integer in [0, 18446744073709551615]"
        self._proposal_version = value

    @builtins.property
    def for_participant(self):
        """Message field 'for_participant'."""
        return self._for_participant

    @for_participant.setter
    def for_participant(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'for_participant' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'for_participant' field must be an unsigned integer in [0, 18446744073709551615]"
        self._for_participant = value

    @builtins.property
    def to_accommodate(self):
        """Message field 'to_accommodate'."""
        return self._to_accommodate

    @to_accommodate.setter
    def to_accommodate(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import NegotiationKey
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
                 all(isinstance(v, NegotiationKey) for v in value) and
                 True), \
                "The 'to_accommodate' field must be a set or sequence and each value of type 'NegotiationKey'"
        self._to_accommodate = value

    @builtins.property
    def plan_id(self):
        """Message field 'plan_id'."""
        return self._plan_id

    @plan_id.setter
    def plan_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'plan_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'plan_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._plan_id = value

    @builtins.property
    def itinerary(self):
        """Message field 'itinerary'."""
        return self._itinerary

    @itinerary.setter
    def itinerary(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import Route
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
                 all(isinstance(v, Route) for v in value) and
                 True), \
                "The 'itinerary' field must be a set or sequence and each value of type 'Route'"
        self._itinerary = value
