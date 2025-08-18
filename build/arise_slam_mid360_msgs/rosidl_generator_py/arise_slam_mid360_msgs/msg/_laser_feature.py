# generated from rosidl_generator_py/resource/_idl.py.em
# with input from arise_slam_mid360_msgs:msg/LaserFeature.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaserFeature(type):
    """Metaclass of message 'LaserFeature'."""

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
                'arise_slam_mid360_msgs.msg.LaserFeature')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__laser_feature
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__laser_feature
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__laser_feature
            cls._TYPE_SUPPORT = module.type_support_msg__msg__laser_feature
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__laser_feature

            from sensor_msgs.msg import PointCloud2
            if PointCloud2.__class__._TYPE_SUPPORT is None:
                PointCloud2.__class__.__import_type_support__()

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


class LaserFeature(metaclass=Metaclass_LaserFeature):
    """Message class 'LaserFeature'."""

    __slots__ = [
        '_header',
        '_sensor',
        '_imu_available',
        '_odom_available',
        '_imu_quaternion_x',
        '_imu_quaternion_y',
        '_imu_quaternion_z',
        '_imu_quaternion_w',
        '_initial_pose_x',
        '_initial_pose_y',
        '_initial_pose_z',
        '_initial_quaternion_x',
        '_initial_quaternion_y',
        '_initial_quaternion_z',
        '_initial_quaternion_w',
        '_imu_preintegration_reset_id',
        '_cloud_nodistortion',
        '_cloud_corner',
        '_cloud_surface',
        '_cloud_realsense',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'sensor': 'int64',
        'imu_available': 'int64',
        'odom_available': 'int64',
        'imu_quaternion_x': 'double',
        'imu_quaternion_y': 'double',
        'imu_quaternion_z': 'double',
        'imu_quaternion_w': 'double',
        'initial_pose_x': 'double',
        'initial_pose_y': 'double',
        'initial_pose_z': 'double',
        'initial_quaternion_x': 'double',
        'initial_quaternion_y': 'double',
        'initial_quaternion_z': 'double',
        'initial_quaternion_w': 'double',
        'imu_preintegration_reset_id': 'int64',
        'cloud_nodistortion': 'sensor_msgs/PointCloud2',
        'cloud_corner': 'sensor_msgs/PointCloud2',
        'cloud_surface': 'sensor_msgs/PointCloud2',
        'cloud_realsense': 'sensor_msgs/PointCloud2',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.sensor = kwargs.get('sensor', int())
        self.imu_available = kwargs.get('imu_available', int())
        self.odom_available = kwargs.get('odom_available', int())
        self.imu_quaternion_x = kwargs.get('imu_quaternion_x', float())
        self.imu_quaternion_y = kwargs.get('imu_quaternion_y', float())
        self.imu_quaternion_z = kwargs.get('imu_quaternion_z', float())
        self.imu_quaternion_w = kwargs.get('imu_quaternion_w', float())
        self.initial_pose_x = kwargs.get('initial_pose_x', float())
        self.initial_pose_y = kwargs.get('initial_pose_y', float())
        self.initial_pose_z = kwargs.get('initial_pose_z', float())
        self.initial_quaternion_x = kwargs.get('initial_quaternion_x', float())
        self.initial_quaternion_y = kwargs.get('initial_quaternion_y', float())
        self.initial_quaternion_z = kwargs.get('initial_quaternion_z', float())
        self.initial_quaternion_w = kwargs.get('initial_quaternion_w', float())
        self.imu_preintegration_reset_id = kwargs.get('imu_preintegration_reset_id', int())
        from sensor_msgs.msg import PointCloud2
        self.cloud_nodistortion = kwargs.get('cloud_nodistortion', PointCloud2())
        from sensor_msgs.msg import PointCloud2
        self.cloud_corner = kwargs.get('cloud_corner', PointCloud2())
        from sensor_msgs.msg import PointCloud2
        self.cloud_surface = kwargs.get('cloud_surface', PointCloud2())
        from sensor_msgs.msg import PointCloud2
        self.cloud_realsense = kwargs.get('cloud_realsense', PointCloud2())

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
        if self.sensor != other.sensor:
            return False
        if self.imu_available != other.imu_available:
            return False
        if self.odom_available != other.odom_available:
            return False
        if self.imu_quaternion_x != other.imu_quaternion_x:
            return False
        if self.imu_quaternion_y != other.imu_quaternion_y:
            return False
        if self.imu_quaternion_z != other.imu_quaternion_z:
            return False
        if self.imu_quaternion_w != other.imu_quaternion_w:
            return False
        if self.initial_pose_x != other.initial_pose_x:
            return False
        if self.initial_pose_y != other.initial_pose_y:
            return False
        if self.initial_pose_z != other.initial_pose_z:
            return False
        if self.initial_quaternion_x != other.initial_quaternion_x:
            return False
        if self.initial_quaternion_y != other.initial_quaternion_y:
            return False
        if self.initial_quaternion_z != other.initial_quaternion_z:
            return False
        if self.initial_quaternion_w != other.initial_quaternion_w:
            return False
        if self.imu_preintegration_reset_id != other.imu_preintegration_reset_id:
            return False
        if self.cloud_nodistortion != other.cloud_nodistortion:
            return False
        if self.cloud_corner != other.cloud_corner:
            return False
        if self.cloud_surface != other.cloud_surface:
            return False
        if self.cloud_realsense != other.cloud_realsense:
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
    def sensor(self):
        """Message field 'sensor'."""
        return self._sensor

    @sensor.setter
    def sensor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensor' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'sensor' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._sensor = value

    @builtins.property
    def imu_available(self):
        """Message field 'imu_available'."""
        return self._imu_available

    @imu_available.setter
    def imu_available(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'imu_available' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'imu_available' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._imu_available = value

    @builtins.property
    def odom_available(self):
        """Message field 'odom_available'."""
        return self._odom_available

    @odom_available.setter
    def odom_available(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'odom_available' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'odom_available' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._odom_available = value

    @builtins.property
    def imu_quaternion_x(self):
        """Message field 'imu_quaternion_x'."""
        return self._imu_quaternion_x

    @imu_quaternion_x.setter
    def imu_quaternion_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_quaternion_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'imu_quaternion_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._imu_quaternion_x = value

    @builtins.property
    def imu_quaternion_y(self):
        """Message field 'imu_quaternion_y'."""
        return self._imu_quaternion_y

    @imu_quaternion_y.setter
    def imu_quaternion_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_quaternion_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'imu_quaternion_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._imu_quaternion_y = value

    @builtins.property
    def imu_quaternion_z(self):
        """Message field 'imu_quaternion_z'."""
        return self._imu_quaternion_z

    @imu_quaternion_z.setter
    def imu_quaternion_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_quaternion_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'imu_quaternion_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._imu_quaternion_z = value

    @builtins.property
    def imu_quaternion_w(self):
        """Message field 'imu_quaternion_w'."""
        return self._imu_quaternion_w

    @imu_quaternion_w.setter
    def imu_quaternion_w(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imu_quaternion_w' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'imu_quaternion_w' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._imu_quaternion_w = value

    @builtins.property
    def initial_pose_x(self):
        """Message field 'initial_pose_x'."""
        return self._initial_pose_x

    @initial_pose_x.setter
    def initial_pose_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'initial_pose_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'initial_pose_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._initial_pose_x = value

    @builtins.property
    def initial_pose_y(self):
        """Message field 'initial_pose_y'."""
        return self._initial_pose_y

    @initial_pose_y.setter
    def initial_pose_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'initial_pose_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'initial_pose_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._initial_pose_y = value

    @builtins.property
    def initial_pose_z(self):
        """Message field 'initial_pose_z'."""
        return self._initial_pose_z

    @initial_pose_z.setter
    def initial_pose_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'initial_pose_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'initial_pose_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._initial_pose_z = value

    @builtins.property
    def initial_quaternion_x(self):
        """Message field 'initial_quaternion_x'."""
        return self._initial_quaternion_x

    @initial_quaternion_x.setter
    def initial_quaternion_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'initial_quaternion_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'initial_quaternion_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._initial_quaternion_x = value

    @builtins.property
    def initial_quaternion_y(self):
        """Message field 'initial_quaternion_y'."""
        return self._initial_quaternion_y

    @initial_quaternion_y.setter
    def initial_quaternion_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'initial_quaternion_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'initial_quaternion_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._initial_quaternion_y = value

    @builtins.property
    def initial_quaternion_z(self):
        """Message field 'initial_quaternion_z'."""
        return self._initial_quaternion_z

    @initial_quaternion_z.setter
    def initial_quaternion_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'initial_quaternion_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'initial_quaternion_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._initial_quaternion_z = value

    @builtins.property
    def initial_quaternion_w(self):
        """Message field 'initial_quaternion_w'."""
        return self._initial_quaternion_w

    @initial_quaternion_w.setter
    def initial_quaternion_w(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'initial_quaternion_w' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'initial_quaternion_w' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._initial_quaternion_w = value

    @builtins.property
    def imu_preintegration_reset_id(self):
        """Message field 'imu_preintegration_reset_id'."""
        return self._imu_preintegration_reset_id

    @imu_preintegration_reset_id.setter
    def imu_preintegration_reset_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'imu_preintegration_reset_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'imu_preintegration_reset_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._imu_preintegration_reset_id = value

    @builtins.property
    def cloud_nodistortion(self):
        """Message field 'cloud_nodistortion'."""
        return self._cloud_nodistortion

    @cloud_nodistortion.setter
    def cloud_nodistortion(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'cloud_nodistortion' field must be a sub message of type 'PointCloud2'"
        self._cloud_nodistortion = value

    @builtins.property
    def cloud_corner(self):
        """Message field 'cloud_corner'."""
        return self._cloud_corner

    @cloud_corner.setter
    def cloud_corner(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'cloud_corner' field must be a sub message of type 'PointCloud2'"
        self._cloud_corner = value

    @builtins.property
    def cloud_surface(self):
        """Message field 'cloud_surface'."""
        return self._cloud_surface

    @cloud_surface.setter
    def cloud_surface(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'cloud_surface' field must be a sub message of type 'PointCloud2'"
        self._cloud_surface = value

    @builtins.property
    def cloud_realsense(self):
        """Message field 'cloud_realsense'."""
        return self._cloud_realsense

    @cloud_realsense.setter
    def cloud_realsense(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'cloud_realsense' field must be a sub message of type 'PointCloud2'"
        self._cloud_realsense = value
