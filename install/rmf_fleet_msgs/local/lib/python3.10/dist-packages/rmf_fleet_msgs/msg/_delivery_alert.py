# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_fleet_msgs:msg/DeliveryAlert.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DeliveryAlert(type):
    """Metaclass of message 'DeliveryAlert'."""

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
                'rmf_fleet_msgs.msg.DeliveryAlert')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__delivery_alert
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__delivery_alert
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__delivery_alert
            cls._TYPE_SUPPORT = module.type_support_msg__msg__delivery_alert
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__delivery_alert

            from rmf_fleet_msgs.msg import DeliveryAlertAction
            if DeliveryAlertAction.__class__._TYPE_SUPPORT is None:
                DeliveryAlertAction.__class__.__import_type_support__()

            from rmf_fleet_msgs.msg import DeliveryAlertCategory
            if DeliveryAlertCategory.__class__._TYPE_SUPPORT is None:
                DeliveryAlertCategory.__class__.__import_type_support__()

            from rmf_fleet_msgs.msg import DeliveryAlertTier
            if DeliveryAlertTier.__class__._TYPE_SUPPORT is None:
                DeliveryAlertTier.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DeliveryAlert(metaclass=Metaclass_DeliveryAlert):
    """Message class 'DeliveryAlert'."""

    __slots__ = [
        '_id',
        '_category',
        '_tier',
        '_task_id',
        '_action',
        '_message',
    ]

    _fields_and_field_types = {
        'id': 'string',
        'category': 'rmf_fleet_msgs/DeliveryAlertCategory',
        'tier': 'rmf_fleet_msgs/DeliveryAlertTier',
        'task_id': 'string',
        'action': 'rmf_fleet_msgs/DeliveryAlertAction',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_fleet_msgs', 'msg'], 'DeliveryAlertCategory'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_fleet_msgs', 'msg'], 'DeliveryAlertTier'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_fleet_msgs', 'msg'], 'DeliveryAlertAction'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', str())
        from rmf_fleet_msgs.msg import DeliveryAlertCategory
        self.category = kwargs.get('category', DeliveryAlertCategory())
        from rmf_fleet_msgs.msg import DeliveryAlertTier
        self.tier = kwargs.get('tier', DeliveryAlertTier())
        self.task_id = kwargs.get('task_id', str())
        from rmf_fleet_msgs.msg import DeliveryAlertAction
        self.action = kwargs.get('action', DeliveryAlertAction())
        self.message = kwargs.get('message', str())

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
        if self.id != other.id:
            return False
        if self.category != other.category:
            return False
        if self.tier != other.tier:
            return False
        if self.task_id != other.task_id:
            return False
        if self.action != other.action:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @builtins.property
    def category(self):
        """Message field 'category'."""
        return self._category

    @category.setter
    def category(self, value):
        if __debug__:
            from rmf_fleet_msgs.msg import DeliveryAlertCategory
            assert \
                isinstance(value, DeliveryAlertCategory), \
                "The 'category' field must be a sub message of type 'DeliveryAlertCategory'"
        self._category = value

    @builtins.property
    def tier(self):
        """Message field 'tier'."""
        return self._tier

    @tier.setter
    def tier(self, value):
        if __debug__:
            from rmf_fleet_msgs.msg import DeliveryAlertTier
            assert \
                isinstance(value, DeliveryAlertTier), \
                "The 'tier' field must be a sub message of type 'DeliveryAlertTier'"
        self._tier = value

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
    def action(self):
        """Message field 'action'."""
        return self._action

    @action.setter
    def action(self, value):
        if __debug__:
            from rmf_fleet_msgs.msg import DeliveryAlertAction
            assert \
                isinstance(value, DeliveryAlertAction), \
                "The 'action' field must be a sub message of type 'DeliveryAlertAction'"
        self._action = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value
