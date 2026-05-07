# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_traffic_msgs:msg/Profile.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Profile(type):
    """Metaclass of message 'Profile'."""

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
                'rmf_traffic_msgs.msg.Profile')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__profile
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__profile
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__profile
            cls._TYPE_SUPPORT = module.type_support_msg__msg__profile
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__profile

            from rmf_traffic_msgs.msg import ConvexShape
            if ConvexShape.__class__._TYPE_SUPPORT is None:
                ConvexShape.__class__.__import_type_support__()

            from rmf_traffic_msgs.msg import ConvexShapeContext
            if ConvexShapeContext.__class__._TYPE_SUPPORT is None:
                ConvexShapeContext.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Profile(metaclass=Metaclass_Profile):
    """Message class 'Profile'."""

    __slots__ = [
        '_footprint',
        '_vicinity',
        '_shape_context',
    ]

    _fields_and_field_types = {
        'footprint': 'rmf_traffic_msgs/ConvexShape',
        'vicinity': 'rmf_traffic_msgs/ConvexShape',
        'shape_context': 'rmf_traffic_msgs/ConvexShapeContext',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'ConvexShape'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'ConvexShape'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_traffic_msgs', 'msg'], 'ConvexShapeContext'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from rmf_traffic_msgs.msg import ConvexShape
        self.footprint = kwargs.get('footprint', ConvexShape())
        from rmf_traffic_msgs.msg import ConvexShape
        self.vicinity = kwargs.get('vicinity', ConvexShape())
        from rmf_traffic_msgs.msg import ConvexShapeContext
        self.shape_context = kwargs.get('shape_context', ConvexShapeContext())

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
        if self.footprint != other.footprint:
            return False
        if self.vicinity != other.vicinity:
            return False
        if self.shape_context != other.shape_context:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def footprint(self):
        """Message field 'footprint'."""
        return self._footprint

    @footprint.setter
    def footprint(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import ConvexShape
            assert \
                isinstance(value, ConvexShape), \
                "The 'footprint' field must be a sub message of type 'ConvexShape'"
        self._footprint = value

    @builtins.property
    def vicinity(self):
        """Message field 'vicinity'."""
        return self._vicinity

    @vicinity.setter
    def vicinity(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import ConvexShape
            assert \
                isinstance(value, ConvexShape), \
                "The 'vicinity' field must be a sub message of type 'ConvexShape'"
        self._vicinity = value

    @builtins.property
    def shape_context(self):
        """Message field 'shape_context'."""
        return self._shape_context

    @shape_context.setter
    def shape_context(self, value):
        if __debug__:
            from rmf_traffic_msgs.msg import ConvexShapeContext
            assert \
                isinstance(value, ConvexShapeContext), \
                "The 'shape_context' field must be a sub message of type 'ConvexShapeContext'"
        self._shape_context = value
