# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_task_msgs:msg/Delivery.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Delivery(type):
    """Metaclass of message 'Delivery'."""

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
                'rmf_task_msgs.msg.Delivery')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__delivery
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__delivery
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__delivery
            cls._TYPE_SUPPORT = module.type_support_msg__msg__delivery
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__delivery

            from rmf_dispenser_msgs.msg import DispenserRequestItem
            if DispenserRequestItem.__class__._TYPE_SUPPORT is None:
                DispenserRequestItem.__class__.__import_type_support__()

            from rmf_task_msgs.msg import Behavior
            if Behavior.__class__._TYPE_SUPPORT is None:
                Behavior.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Delivery(metaclass=Metaclass_Delivery):
    """Message class 'Delivery'."""

    __slots__ = [
        '_task_id',
        '_items',
        '_pickup_place_name',
        '_pickup_dispenser',
        '_pickup_behavior',
        '_dropoff_place_name',
        '_dropoff_ingestor',
        '_dropoff_behavior',
    ]

    _fields_and_field_types = {
        'task_id': 'string',
        'items': 'sequence<rmf_dispenser_msgs/DispenserRequestItem>',
        'pickup_place_name': 'string',
        'pickup_dispenser': 'string',
        'pickup_behavior': 'rmf_task_msgs/Behavior',
        'dropoff_place_name': 'string',
        'dropoff_ingestor': 'string',
        'dropoff_behavior': 'rmf_task_msgs/Behavior',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rmf_dispenser_msgs', 'msg'], 'DispenserRequestItem')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_task_msgs', 'msg'], 'Behavior'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['rmf_task_msgs', 'msg'], 'Behavior'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.task_id = kwargs.get('task_id', str())
        self.items = kwargs.get('items', [])
        self.pickup_place_name = kwargs.get('pickup_place_name', str())
        self.pickup_dispenser = kwargs.get('pickup_dispenser', str())
        from rmf_task_msgs.msg import Behavior
        self.pickup_behavior = kwargs.get('pickup_behavior', Behavior())
        self.dropoff_place_name = kwargs.get('dropoff_place_name', str())
        self.dropoff_ingestor = kwargs.get('dropoff_ingestor', str())
        from rmf_task_msgs.msg import Behavior
        self.dropoff_behavior = kwargs.get('dropoff_behavior', Behavior())

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
        if self.items != other.items:
            return False
        if self.pickup_place_name != other.pickup_place_name:
            return False
        if self.pickup_dispenser != other.pickup_dispenser:
            return False
        if self.pickup_behavior != other.pickup_behavior:
            return False
        if self.dropoff_place_name != other.dropoff_place_name:
            return False
        if self.dropoff_ingestor != other.dropoff_ingestor:
            return False
        if self.dropoff_behavior != other.dropoff_behavior:
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
    def items(self):
        """Message field 'items'."""
        return self._items

    @items.setter
    def items(self, value):
        if __debug__:
            from rmf_dispenser_msgs.msg import DispenserRequestItem
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
                 all(isinstance(v, DispenserRequestItem) for v in value) and
                 True), \
                "The 'items' field must be a set or sequence and each value of type 'DispenserRequestItem'"
        self._items = value

    @builtins.property
    def pickup_place_name(self):
        """Message field 'pickup_place_name'."""
        return self._pickup_place_name

    @pickup_place_name.setter
    def pickup_place_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'pickup_place_name' field must be of type 'str'"
        self._pickup_place_name = value

    @builtins.property
    def pickup_dispenser(self):
        """Message field 'pickup_dispenser'."""
        return self._pickup_dispenser

    @pickup_dispenser.setter
    def pickup_dispenser(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'pickup_dispenser' field must be of type 'str'"
        self._pickup_dispenser = value

    @builtins.property
    def pickup_behavior(self):
        """Message field 'pickup_behavior'."""
        return self._pickup_behavior

    @pickup_behavior.setter
    def pickup_behavior(self, value):
        if __debug__:
            from rmf_task_msgs.msg import Behavior
            assert \
                isinstance(value, Behavior), \
                "The 'pickup_behavior' field must be a sub message of type 'Behavior'"
        self._pickup_behavior = value

    @builtins.property
    def dropoff_place_name(self):
        """Message field 'dropoff_place_name'."""
        return self._dropoff_place_name

    @dropoff_place_name.setter
    def dropoff_place_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'dropoff_place_name' field must be of type 'str'"
        self._dropoff_place_name = value

    @builtins.property
    def dropoff_ingestor(self):
        """Message field 'dropoff_ingestor'."""
        return self._dropoff_ingestor

    @dropoff_ingestor.setter
    def dropoff_ingestor(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'dropoff_ingestor' field must be of type 'str'"
        self._dropoff_ingestor = value

    @builtins.property
    def dropoff_behavior(self):
        """Message field 'dropoff_behavior'."""
        return self._dropoff_behavior

    @dropoff_behavior.setter
    def dropoff_behavior(self, value):
        if __debug__:
            from rmf_task_msgs.msg import Behavior
            assert \
                isinstance(value, Behavior), \
                "The 'dropoff_behavior' field must be a sub message of type 'Behavior'"
        self._dropoff_behavior = value
