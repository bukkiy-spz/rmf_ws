# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rmf_site_map_msgs:msg/SiteMap.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'data'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SiteMap(type):
    """Metaclass of message 'SiteMap'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MAP_DATA_UNDEFINED': 0,
        'MAP_DATA_GPKG': 1,
        'MAP_DATA_GPKG_GZ': 2,
        'MAP_DATA_GEOJSON': 3,
        'MAP_DATA_GEOJSON_GZ': 4,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rmf_site_map_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rmf_site_map_msgs.msg.SiteMap')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__site_map
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__site_map
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__site_map
            cls._TYPE_SUPPORT = module.type_support_msg__msg__site_map
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__site_map

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MAP_DATA_UNDEFINED': cls.__constants['MAP_DATA_UNDEFINED'],
            'MAP_DATA_GPKG': cls.__constants['MAP_DATA_GPKG'],
            'MAP_DATA_GPKG_GZ': cls.__constants['MAP_DATA_GPKG_GZ'],
            'MAP_DATA_GEOJSON': cls.__constants['MAP_DATA_GEOJSON'],
            'MAP_DATA_GEOJSON_GZ': cls.__constants['MAP_DATA_GEOJSON_GZ'],
        }

    @property
    def MAP_DATA_UNDEFINED(self):
        """Message constant 'MAP_DATA_UNDEFINED'."""
        return Metaclass_SiteMap.__constants['MAP_DATA_UNDEFINED']

    @property
    def MAP_DATA_GPKG(self):
        """Message constant 'MAP_DATA_GPKG'."""
        return Metaclass_SiteMap.__constants['MAP_DATA_GPKG']

    @property
    def MAP_DATA_GPKG_GZ(self):
        """Message constant 'MAP_DATA_GPKG_GZ'."""
        return Metaclass_SiteMap.__constants['MAP_DATA_GPKG_GZ']

    @property
    def MAP_DATA_GEOJSON(self):
        """Message constant 'MAP_DATA_GEOJSON'."""
        return Metaclass_SiteMap.__constants['MAP_DATA_GEOJSON']

    @property
    def MAP_DATA_GEOJSON_GZ(self):
        """Message constant 'MAP_DATA_GEOJSON_GZ'."""
        return Metaclass_SiteMap.__constants['MAP_DATA_GEOJSON_GZ']


class SiteMap(metaclass=Metaclass_SiteMap):
    """
    Message class 'SiteMap'.

    Constants:
      MAP_DATA_UNDEFINED
      MAP_DATA_GPKG
      MAP_DATA_GPKG_GZ
      MAP_DATA_GEOJSON
      MAP_DATA_GEOJSON_GZ
    """

    __slots__ = [
        '_encoding',
        '_data',
    ]

    _fields_and_field_types = {
        'encoding': 'uint32',
        'data': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.encoding = kwargs.get('encoding', int())
        self.data = array.array('B', kwargs.get('data', []))

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
        if self.encoding != other.encoding:
            return False
        if self.data != other.data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def encoding(self):
        """Message field 'encoding'."""
        return self._encoding

    @encoding.setter
    def encoding(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'encoding' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'encoding' field must be an unsigned integer in [0, 4294967295]"
        self._encoding = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'data' array.array() must have the type code of 'B'"
            self._data = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'data' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._data = array.array('B', value)
