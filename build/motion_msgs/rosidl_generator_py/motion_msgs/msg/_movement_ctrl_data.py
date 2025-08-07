# generated from rosidl_generator_py/resource/_idl.py.em
# with input from motion_msgs:msg/MovementCtrlData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MovementCtrlData(type):
    """Metaclass of message 'MovementCtrlData'."""

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
            module = import_type_support('motion_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'motion_msgs.msg.MovementCtrlData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__movement_ctrl_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__movement_ctrl_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__movement_ctrl_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__movement_ctrl_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__movement_ctrl_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MovementCtrlData(metaclass=Metaclass_MovementCtrlData):
    """Message class 'MovementCtrlData'."""

    __slots__ = [
        '_forward',
        '_left',
        '_up',
        '_roll',
        '_pitch',
        '_leg_split',
    ]

    _fields_and_field_types = {
        'forward': 'double',
        'left': 'double',
        'up': 'double',
        'roll': 'double',
        'pitch': 'double',
        'leg_split': 'double',
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
        self.forward = kwargs.get('forward', float())
        self.left = kwargs.get('left', float())
        self.up = kwargs.get('up', float())
        self.roll = kwargs.get('roll', float())
        self.pitch = kwargs.get('pitch', float())
        self.leg_split = kwargs.get('leg_split', float())

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
        if self.forward != other.forward:
            return False
        if self.left != other.left:
            return False
        if self.up != other.up:
            return False
        if self.roll != other.roll:
            return False
        if self.pitch != other.pitch:
            return False
        if self.leg_split != other.leg_split:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def forward(self):
        """Message field 'forward'."""
        return self._forward

    @forward.setter
    def forward(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'forward' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'forward' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._forward = value

    @builtins.property
    def left(self):
        """Message field 'left'."""
        return self._left

    @left.setter
    def left(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'left' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._left = value

    @builtins.property
    def up(self):
        """Message field 'up'."""
        return self._up

    @up.setter
    def up(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'up' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'up' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._up = value

    @builtins.property
    def roll(self):
        """Message field 'roll'."""
        return self._roll

    @roll.setter
    def roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'roll' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._roll = value

    @builtins.property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pitch' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pitch = value

    @builtins.property
    def leg_split(self):
        """Message field 'leg_split'."""
        return self._leg_split

    @leg_split.setter
    def leg_split(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leg_split' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'leg_split' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._leg_split = value
