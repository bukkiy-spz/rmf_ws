# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_fleet_msgs:srv/LiftClearance.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LiftClearance_Request(type):
    """Metaclass of message 'LiftClearance_Request'."""

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
                'rmf_fleet_msgs.srv.LiftClearance_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__lift_clearance__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__lift_clearance__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__lift_clearance__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__lift_clearance__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__lift_clearance__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LiftClearance_Request(metaclass=Metaclass_LiftClearance_Request):
    """Message class 'LiftClearance_Request'."""

    __slots__ = [
        '_robot_name',
        '_lift_name',
    ]

    _fields_and_field_types = {
        'robot_name': 'string',
        'lift_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.robot_name = kwargs.get('robot_name', str())
        self.lift_name = kwargs.get('lift_name', str())

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
        if self.robot_name != other.robot_name:
            return False
        if self.lift_name != other.lift_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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

    @builtins.property
    def lift_name(self):
        """Message field 'lift_name'."""
        return self._lift_name

    @lift_name.setter
    def lift_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'lift_name' field must be of type 'str'"
        self._lift_name = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LiftClearance_Response(type):
    """Metaclass of message 'LiftClearance_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DECISION_CLEAR': 1,
        'DECISION_CROWDED': 2,
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
                'rmf_fleet_msgs.srv.LiftClearance_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__lift_clearance__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__lift_clearance__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__lift_clearance__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__lift_clearance__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__lift_clearance__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DECISION_CLEAR': cls.__constants['DECISION_CLEAR'],
            'DECISION_CROWDED': cls.__constants['DECISION_CROWDED'],
        }

    @property
    def DECISION_CLEAR(self):
        """Message constant 'DECISION_CLEAR'."""
        return Metaclass_LiftClearance_Response.__constants['DECISION_CLEAR']

    @property
    def DECISION_CROWDED(self):
        """Message constant 'DECISION_CROWDED'."""
        return Metaclass_LiftClearance_Response.__constants['DECISION_CROWDED']


class LiftClearance_Response(metaclass=Metaclass_LiftClearance_Response):
    """
    Message class 'LiftClearance_Response'.

    Constants:
      DECISION_CLEAR
      DECISION_CROWDED
    """

    __slots__ = [
        '_decision',
    ]

    _fields_and_field_types = {
        'decision': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.decision = kwargs.get('decision', int())

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
        if self.decision != other.decision:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def decision(self):
        """Message field 'decision'."""
        return self._decision

    @decision.setter
    def decision(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'decision' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'decision' field must be an unsigned integer in [0, 4294967295]"
        self._decision = value


class Metaclass_LiftClearance(type):
    """Metaclass of service 'LiftClearance'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rmf_fleet_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_fleet_msgs.srv.LiftClearance')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__lift_clearance

            from rmf_fleet_msgs.srv import _lift_clearance
            if _lift_clearance.Metaclass_LiftClearance_Request._TYPE_SUPPORT is None:
                _lift_clearance.Metaclass_LiftClearance_Request.__import_type_support__()
            if _lift_clearance.Metaclass_LiftClearance_Response._TYPE_SUPPORT is None:
                _lift_clearance.Metaclass_LiftClearance_Response.__import_type_support__()


class LiftClearance(metaclass=Metaclass_LiftClearance):
    from rmf_fleet_msgs.srv._lift_clearance import LiftClearance_Request as Request
    from rmf_fleet_msgs.srv._lift_clearance import LiftClearance_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
