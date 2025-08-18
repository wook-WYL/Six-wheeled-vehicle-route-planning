# generated from rosidl_generator_py/resource/_idl.py.em
# with input from osr_interfaces:msg/CommandDrive.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CommandDrive(type):
    """Metaclass of message 'CommandDrive'."""

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
            module = import_type_support('osr_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'osr_interfaces.msg.CommandDrive')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__command_drive
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__command_drive
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__command_drive
            cls._TYPE_SUPPORT = module.type_support_msg__msg__command_drive
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__command_drive

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CommandDrive(metaclass=Metaclass_CommandDrive):
    """Message class 'CommandDrive'."""

    __slots__ = [
        '_left_front_vel',
        '_left_middle_vel',
        '_left_back_vel',
        '_right_front_vel',
        '_right_middle_vel',
        '_right_back_vel',
    ]

    _fields_and_field_types = {
        'left_front_vel': 'double',
        'left_middle_vel': 'double',
        'left_back_vel': 'double',
        'right_front_vel': 'double',
        'right_middle_vel': 'double',
        'right_back_vel': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.left_front_vel = kwargs.get('left_front_vel', float())
        self.left_middle_vel = kwargs.get('left_middle_vel', float())
        self.left_back_vel = kwargs.get('left_back_vel', float())
        self.right_front_vel = kwargs.get('right_front_vel', float())
        self.right_middle_vel = kwargs.get('right_middle_vel', float())
        self.right_back_vel = kwargs.get('right_back_vel', float())

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
        if self.left_front_vel != other.left_front_vel:
            return False
        if self.left_middle_vel != other.left_middle_vel:
            return False
        if self.left_back_vel != other.left_back_vel:
            return False
        if self.right_front_vel != other.right_front_vel:
            return False
        if self.right_middle_vel != other.right_middle_vel:
            return False
        if self.right_back_vel != other.right_back_vel:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def left_front_vel(self):
        """Message field 'left_front_vel'."""
        return self._left_front_vel

    @left_front_vel.setter
    def left_front_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_front_vel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'left_front_vel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._left_front_vel = value

    @builtins.property
    def left_middle_vel(self):
        """Message field 'left_middle_vel'."""
        return self._left_middle_vel

    @left_middle_vel.setter
    def left_middle_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_middle_vel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'left_middle_vel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._left_middle_vel = value

    @builtins.property
    def left_back_vel(self):
        """Message field 'left_back_vel'."""
        return self._left_back_vel

    @left_back_vel.setter
    def left_back_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_back_vel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'left_back_vel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._left_back_vel = value

    @builtins.property
    def right_front_vel(self):
        """Message field 'right_front_vel'."""
        return self._right_front_vel

    @right_front_vel.setter
    def right_front_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_front_vel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'right_front_vel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._right_front_vel = value

    @builtins.property
    def right_middle_vel(self):
        """Message field 'right_middle_vel'."""
        return self._right_middle_vel

    @right_middle_vel.setter
    def right_middle_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_middle_vel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'right_middle_vel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._right_middle_vel = value

    @builtins.property
    def right_back_vel(self):
        """Message field 'right_back_vel'."""
        return self._right_back_vel

    @right_back_vel.setter
    def right_back_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_back_vel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'right_back_vel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._right_back_vel = value
