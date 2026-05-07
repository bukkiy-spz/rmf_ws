# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_traffic_msgs:msg/ParticipantDescription.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ParticipantDescription(type):
    """Metaclass of message 'ParticipantDescription'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RX_INVALID': 0,
        'RX_UNRESPONSIVE': 1,
        'RX_RESPONSIVE': 2,
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
                'rmf_traffic_msgs.msg.ParticipantDescription')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__participant_description
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__participant_description
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__participant_description
            cls._TYPE_SUPPORT = module.type_support_msg__msg__participant_description
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__participant_description

            from rmf_traffic_msgs.msg import Profile
            if Profile.__class__._TYPE_SUPPORT is None:
                Profile.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RX_INVALID': cls.__constants['RX_INVALID'],
            'RX_UNRESPONSIVE': cls.__constants['RX_UNRESPONSIVE'],
            'RX_RESPONSIVE': cls.__constants['RX_RESPONSIVE'],
        }

    @property
    def RX_INVALID(self):
        """Message constant 'RX_INVALID'."""
        return Metaclass_ParticipantDescription.__constants['RX_INVALID']

    @property
    def RX_UNRESPONSIVE(self):
        """Message constant 'RX_UNRESPONSIVE'."""
        return Metaclass_ParticipantDescription.__constants['RX_UNRESPONSIVE']

    @property
    def RX_RESPONSIVE(self):
        """Message constant 'RX_RESPONSIVE'."""
        return Metaclass_ParticipantDescription.__constants['RX_RESPONSIVE']


class ParticipantDescription(metaclass=Metaclass_ParticipantDescription):
    """
    Message class 'ParticipantDescription'.

    Constants:
      RX_INVALID
      RX_UNRESPONSIVE
      RX_RESPONSIVE
    """

    __slots__ = [
        '_name',
        '_owner',
        '_responsiveness',
        '_profile',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'owner': 'string',
        'responsiveness': 'uint8',
        'profile': 'rmf_traffic_msgs/Profile',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'Profile'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.owner = kwargs.get('owner', str())
        self.responsiveness = kwargs.get('responsiveness', int())
        from rmf_traffic_msgs.msg import Profile
        self.profile = kwargs.get('profile', Profile())

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
        if self.owner != other.owner:
            return False
        if self.responsiveness != other.responsiveness:
            return False
        if self.profile != other.profile:
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
    def owner(self):
        """Message field 'owner'."""
        return self._owner

    @owner.setter
    def owner(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'owner' field must be of type 'str'"
        self._owner = value

    @builtins.property
    def responsiveness(self):
        """Message field 'responsiveness'."""
        return self._responsiveness

    @responsiveness.setter
    def responsiveness(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'responsiveness' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'responsiveness' field must be an unsigned integer in [0, 255]"
        self._responsiveness = value

    @builtins.property
    def profile(self):
        """Message field 'profile'."""
        return self._profile

    @profile.setter
    def profile(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import Profile
            assert \
                isinstance(value, Profile), \
                "The 'profile' field must be a sub message of type 'Profile'"
        self._profile = value
