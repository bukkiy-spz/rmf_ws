# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_traffic_msgs:srv/RegisterParticipant.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RegisterParticipant_Request(type):
    """Metaclass of message 'RegisterParticipant_Request'."""

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
                'rmf_traffic_msgs.srv.RegisterParticipant_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__register_participant__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__register_participant__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__register_participant__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__register_participant__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__register_participant__request

            from rmf_traffic_msgs.msg import ParticipantDescription
            if ParticipantDescription.__class__._TYPE_SUPPORT is None:
                ParticipantDescription.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RegisterParticipant_Request(metaclass=Metaclass_RegisterParticipant_Request):
    """Message class 'RegisterParticipant_Request'."""

    __slots__ = [
        '_description',
    ]

    _fields_and_field_types = {
        'description': 'rmf_traffic_msgs/ParticipantDescription',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'ParticipantDescription'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from rmf_traffic_msgs.msg import ParticipantDescription
        self.description = kwargs.get('description', ParticipantDescription())

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
        if self.description != other.description:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def description(self):
        """Message field 'description'."""
        return self._description

    @description.setter
    def description(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import ParticipantDescription
            assert \
                isinstance(value, ParticipantDescription), \
                "The 'description' field must be a sub message of type 'ParticipantDescription'"
        self._description = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RegisterParticipant_Response(type):
    """Metaclass of message 'RegisterParticipant_Response'."""

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
                'rmf_traffic_msgs.srv.RegisterParticipant_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__register_participant__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__register_participant__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__register_participant__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__register_participant__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__register_participant__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RegisterParticipant_Response(metaclass=Metaclass_RegisterParticipant_Response):
    """Message class 'RegisterParticipant_Response'."""

    __slots__ = [
        '_participant_id',
        '_last_itinerary_version',
        '_last_plan_id',
        '_next_storage_base',
        '_error',
    ]

    _fields_and_field_types = {
        'participant_id': 'uint64',
        'last_itinerary_version': 'uint64',
        'last_plan_id': 'uint64',
        'next_storage_base': 'uint64',
        'error': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.participant_id = kwargs.get('participant_id', int())
        self.last_itinerary_version = kwargs.get('last_itinerary_version', int())
        self.last_plan_id = kwargs.get('last_plan_id', int())
        self.next_storage_base = kwargs.get('next_storage_base', int())
        self.error = kwargs.get('error', str())

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
        if self.participant_id != other.participant_id:
            return False
        if self.last_itinerary_version != other.last_itinerary_version:
            return False
        if self.last_plan_id != other.last_plan_id:
            return False
        if self.next_storage_base != other.next_storage_base:
            return False
        if self.error != other.error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def participant_id(self):
        """Message field 'participant_id'."""
        return self._participant_id

    @participant_id.setter
    def participant_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'participant_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'participant_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._participant_id = value

    @builtins.property
    def last_itinerary_version(self):
        """Message field 'last_itinerary_version'."""
        return self._last_itinerary_version

    @last_itinerary_version.setter
    def last_itinerary_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'last_itinerary_version' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'last_itinerary_version' field must be an unsigned integer in [0, 18446744073709551615]"
        self._last_itinerary_version = value

    @builtins.property
    def last_plan_id(self):
        """Message field 'last_plan_id'."""
        return self._last_plan_id

    @last_plan_id.setter
    def last_plan_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'last_plan_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'last_plan_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._last_plan_id = value

    @builtins.property
    def next_storage_base(self):
        """Message field 'next_storage_base'."""
        return self._next_storage_base

    @next_storage_base.setter
    def next_storage_base(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'next_storage_base' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'next_storage_base' field must be an unsigned integer in [0, 18446744073709551615]"
        self._next_storage_base = value

    @builtins.property
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error' field must be of type 'str'"
        self._error = value


class Metaclass_RegisterParticipant(type):
    """Metaclass of service 'RegisterParticipant'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rmf_traffic_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_traffic_msgs.srv.RegisterParticipant')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__register_participant

            from rmf_traffic_msgs.srv import _register_participant
            if _register_participant.Metaclass_RegisterParticipant_Request._TYPE_SUPPORT is None:
                _register_participant.Metaclass_RegisterParticipant_Request.__import_type_support__()
            if _register_participant.Metaclass_RegisterParticipant_Response._TYPE_SUPPORT is None:
                _register_participant.Metaclass_RegisterParticipant_Response.__import_type_support__()


class RegisterParticipant(metaclass=Metaclass_RegisterParticipant):
    from rmf_traffic_msgs.srv._register_participant import RegisterParticipant_Request as Request
    from rmf_traffic_msgs.srv._register_participant import RegisterParticipant_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
