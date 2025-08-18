# generated from rosidl_generator_py/resource/_idl.py.em
# with input from arise_slam_mid360_msgs:msg/IterationStats.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IterationStats(type):
    """Metaclass of message 'IterationStats'."""

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
            module = import_type_support('arise_slam_mid360_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arise_slam_mid360_msgs.msg.IterationStats')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__iteration_stats
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__iteration_stats
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__iteration_stats
            cls._TYPE_SUPPORT = module.type_support_msg__msg__iteration_stats
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__iteration_stats

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IterationStats(metaclass=Metaclass_IterationStats):
    """Message class 'IterationStats'."""

    __slots__ = [
        '_header',
        '_translation_norm',
        '_rotation_norm',
        '_num_surf_from_scan',
        '_num_corner_from_scan',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'translation_norm': 'double',
        'rotation_norm': 'double',
        'num_surf_from_scan': 'double',
        'num_corner_from_scan': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.translation_norm = kwargs.get('translation_norm', float())
        self.rotation_norm = kwargs.get('rotation_norm', float())
        self.num_surf_from_scan = kwargs.get('num_surf_from_scan', float())
        self.num_corner_from_scan = kwargs.get('num_corner_from_scan', float())

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
        if self.header != other.header:
            return False
        if self.translation_norm != other.translation_norm:
            return False
        if self.rotation_norm != other.rotation_norm:
            return False
        if self.num_surf_from_scan != other.num_surf_from_scan:
            return False
        if self.num_corner_from_scan != other.num_corner_from_scan:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def translation_norm(self):
        """Message field 'translation_norm'."""
        return self._translation_norm

    @translation_norm.setter
    def translation_norm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'translation_norm' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'translation_norm' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._translation_norm = value

    @builtins.property
    def rotation_norm(self):
        """Message field 'rotation_norm'."""
        return self._rotation_norm

    @rotation_norm.setter
    def rotation_norm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rotation_norm' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rotation_norm' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rotation_norm = value

    @builtins.property
    def num_surf_from_scan(self):
        """Message field 'num_surf_from_scan'."""
        return self._num_surf_from_scan

    @num_surf_from_scan.setter
    def num_surf_from_scan(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'num_surf_from_scan' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'num_surf_from_scan' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._num_surf_from_scan = value

    @builtins.property
    def num_corner_from_scan(self):
        """Message field 'num_corner_from_scan'."""
        return self._num_corner_from_scan

    @num_corner_from_scan.setter
    def num_corner_from_scan(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'num_corner_from_scan' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'num_corner_from_scan' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._num_corner_from_scan = value
