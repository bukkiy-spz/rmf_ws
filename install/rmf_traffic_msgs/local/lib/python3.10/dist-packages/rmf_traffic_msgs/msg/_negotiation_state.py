# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_traffic_msgs:msg/NegotiationState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NegotiationState(type):
    """Metaclass of message 'NegotiationState'."""

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
                'rmf_traffic_msgs.msg.NegotiationState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__negotiation_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__negotiation_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__negotiation_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__negotiation_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__negotiation_state

            from rmf_traffic_msgs.msg import NegotiationForfeit
            if NegotiationForfeit.__class__._TYPE_SUPPORT is None:
                NegotiationForfeit.__class__.__import_type_support__()

            from rmf_traffic_msgs.msg import NegotiationProposal
            if NegotiationProposal.__class__._TYPE_SUPPORT is None:
                NegotiationProposal.__class__.__import_type_support__()

            from rmf_traffic_msgs.msg import NegotiationRejection
            if NegotiationRejection.__class__._TYPE_SUPPORT is None:
                NegotiationRejection.__class__.__import_type_support__()

            from rmf_traffic_msgs.msg import NegotiationStatus
            if NegotiationStatus.__class__._TYPE_SUPPORT is None:
                NegotiationStatus.__class__.__import_type_support__()

            from rmf_traffic_msgs.msg import NegotiationTreeNode
            if NegotiationTreeNode.__class__._TYPE_SUPPORT is None:
                NegotiationTreeNode.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NegotiationState(metaclass=Metaclass_NegotiationState):
    """Message class 'NegotiationState'."""

    __slots__ = [
        '_status',
        '_tree',
        '_orphan_proposals',
        '_orphan_rejections',
        '_orphan_forfeits',
    ]

    _fields_and_field_types = {
        'status': 'rmf_traffic_msgs/NegotiationStatus',
        'tree': 'sequence<rmf_traffic_msgs/NegotiationTreeNode>',
        'orphan_proposals': 'sequence<rmf_traffic_msgs/NegotiationProposal>',
        'orphan_rejections': 'sequence<rmf_traffic_msgs/NegotiationRejection>',
        'orphan_forfeits': 'sequence<rmf_traffic_msgs/NegotiationForfeit>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'NegotiationStatus'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'NegotiationTreeNode')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'NegotiationProposal')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'NegotiationRejection')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'NegotiationForfeit')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from rmf_traffic_msgs.msg import NegotiationStatus
        self.status = kwargs.get('status', NegotiationStatus())
        self.tree = kwargs.get('tree', [])
        self.orphan_proposals = kwargs.get('orphan_proposals', [])
        self.orphan_rejections = kwargs.get('orphan_rejections', [])
        self.orphan_forfeits = kwargs.get('orphan_forfeits', [])

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
        if self.status != other.status:
            return False
        if self.tree != other.tree:
            return False
        if self.orphan_proposals != other.orphan_proposals:
            return False
        if self.orphan_rejections != other.orphan_rejections:
            return False
        if self.orphan_forfeits != other.orphan_forfeits:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import NegotiationStatus
            assert \
                isinstance(value, NegotiationStatus), \
                "The 'status' field must be a sub message of type 'NegotiationStatus'"
        self._status = value

    @builtins.property
    def tree(self):
        """Message field 'tree'."""
        return self._tree

    @tree.setter
    def tree(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import NegotiationTreeNode
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
                 all(isinstance(v, NegotiationTreeNode) for v in value) and
                 True), \
                "The 'tree' field must be a set or sequence and each value of type 'NegotiationTreeNode'"
        self._tree = value

    @builtins.property
    def orphan_proposals(self):
        """Message field 'orphan_proposals'."""
        return self._orphan_proposals

    @orphan_proposals.setter
    def orphan_proposals(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import NegotiationProposal
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
                 all(isinstance(v, NegotiationProposal) for v in value) and
                 True), \
                "The 'orphan_proposals' field must be a set or sequence and each value of type 'NegotiationProposal'"
        self._orphan_proposals = value

    @builtins.property
    def orphan_rejections(self):
        """Message field 'orphan_rejections'."""
        return self._orphan_rejections

    @orphan_rejections.setter
    def orphan_rejections(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import NegotiationRejection
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
                 all(isinstance(v, NegotiationRejection) for v in value) and
                 True), \
                "The 'orphan_rejections' field must be a set or sequence and each value of type 'NegotiationRejection'"
        self._orphan_rejections = value

    @builtins.property
    def orphan_forfeits(self):
        """Message field 'orphan_forfeits'."""
        return self._orphan_forfeits

    @orphan_forfeits.setter
    def orphan_forfeits(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import NegotiationForfeit
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
                 all(isinstance(v, NegotiationForfeit) for v in value) and
                 True), \
                "The 'orphan_forfeits' field must be a set or sequence and each value of type 'NegotiationForfeit'"
        self._orphan_forfeits = value
