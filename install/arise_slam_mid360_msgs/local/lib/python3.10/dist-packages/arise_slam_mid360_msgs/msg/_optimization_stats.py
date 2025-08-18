# generated from rosidl_generator_py/resource/_idl.py.em
# with input from arise_slam_mid360_msgs:msg/OptimizationStats.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OptimizationStats(type):
    """Metaclass of message 'OptimizationStats'."""

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
                'arise_slam_mid360_msgs.msg.OptimizationStats')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__optimization_stats
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__optimization_stats
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__optimization_stats
            cls._TYPE_SUPPORT = module.type_support_msg__msg__optimization_stats
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__optimization_stats

            from arise_slam_mid360_msgs.msg import IterationStats
            if IterationStats.__class__._TYPE_SUPPORT is None:
                IterationStats.__class__.__import_type_support__()

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


class OptimizationStats(metaclass=Metaclass_OptimizationStats):
    """Message class 'OptimizationStats'."""

    __slots__ = [
        '_header',
        '_laser_cloud_surf_from_map_num',
        '_laser_cloud_corner_from_map_num',
        '_laser_cloud_surf_stack_num',
        '_laser_cloud_corner_stack_num',
        '_total_translation',
        '_total_rotation',
        '_translation_from_last',
        '_rotation_from_last',
        '_time_elapsed',
        '_latency',
        '_n_iterations',
        '_average_distance',
        '_uncertainty_x',
        '_uncertainty_y',
        '_uncertainty_z',
        '_uncertainty_roll',
        '_uncertainty_pitch',
        '_uncertainty_yaw',
        '_plane_match_success',
        '_plane_no_enough_neighbor',
        '_plane_neighbor_too_far',
        '_plane_badpca_structure',
        '_plane_invalid_numerical',
        '_plane_mse_too_large',
        '_plane_unknown',
        '_prediction_source',
        '_iterations',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'laser_cloud_surf_from_map_num': 'int32',
        'laser_cloud_corner_from_map_num': 'int32',
        'laser_cloud_surf_stack_num': 'int32',
        'laser_cloud_corner_stack_num': 'int32',
        'total_translation': 'double',
        'total_rotation': 'double',
        'translation_from_last': 'double',
        'rotation_from_last': 'double',
        'time_elapsed': 'double',
        'latency': 'double',
        'n_iterations': 'int32',
        'average_distance': 'double',
        'uncertainty_x': 'double',
        'uncertainty_y': 'double',
        'uncertainty_z': 'double',
        'uncertainty_roll': 'double',
        'uncertainty_pitch': 'double',
        'uncertainty_yaw': 'double',
        'plane_match_success': 'int32',
        'plane_no_enough_neighbor': 'int32',
        'plane_neighbor_too_far': 'int32',
        'plane_badpca_structure': 'int32',
        'plane_invalid_numerical': 'int32',
        'plane_mse_too_large': 'int32',
        'plane_unknown': 'int32',
        'prediction_source': 'int32',
        'iterations': 'sequence<arise_slam_mid360_msgs/IterationStats>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['arise_slam_mid360_msgs', 'msg'], 'IterationStats')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.laser_cloud_surf_from_map_num = kwargs.get('laser_cloud_surf_from_map_num', int())
        self.laser_cloud_corner_from_map_num = kwargs.get('laser_cloud_corner_from_map_num', int())
        self.laser_cloud_surf_stack_num = kwargs.get('laser_cloud_surf_stack_num', int())
        self.laser_cloud_corner_stack_num = kwargs.get('laser_cloud_corner_stack_num', int())
        self.total_translation = kwargs.get('total_translation', float())
        self.total_rotation = kwargs.get('total_rotation', float())
        self.translation_from_last = kwargs.get('translation_from_last', float())
        self.rotation_from_last = kwargs.get('rotation_from_last', float())
        self.time_elapsed = kwargs.get('time_elapsed', float())
        self.latency = kwargs.get('latency', float())
        self.n_iterations = kwargs.get('n_iterations', int())
        self.average_distance = kwargs.get('average_distance', float())
        self.uncertainty_x = kwargs.get('uncertainty_x', float())
        self.uncertainty_y = kwargs.get('uncertainty_y', float())
        self.uncertainty_z = kwargs.get('uncertainty_z', float())
        self.uncertainty_roll = kwargs.get('uncertainty_roll', float())
        self.uncertainty_pitch = kwargs.get('uncertainty_pitch', float())
        self.uncertainty_yaw = kwargs.get('uncertainty_yaw', float())
        self.plane_match_success = kwargs.get('plane_match_success', int())
        self.plane_no_enough_neighbor = kwargs.get('plane_no_enough_neighbor', int())
        self.plane_neighbor_too_far = kwargs.get('plane_neighbor_too_far', int())
        self.plane_badpca_structure = kwargs.get('plane_badpca_structure', int())
        self.plane_invalid_numerical = kwargs.get('plane_invalid_numerical', int())
        self.plane_mse_too_large = kwargs.get('plane_mse_too_large', int())
        self.plane_unknown = kwargs.get('plane_unknown', int())
        self.prediction_source = kwargs.get('prediction_source', int())
        self.iterations = kwargs.get('iterations', [])

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
        if self.laser_cloud_surf_from_map_num != other.laser_cloud_surf_from_map_num:
            return False
        if self.laser_cloud_corner_from_map_num != other.laser_cloud_corner_from_map_num:
            return False
        if self.laser_cloud_surf_stack_num != other.laser_cloud_surf_stack_num:
            return False
        if self.laser_cloud_corner_stack_num != other.laser_cloud_corner_stack_num:
            return False
        if self.total_translation != other.total_translation:
            return False
        if self.total_rotation != other.total_rotation:
            return False
        if self.translation_from_last != other.translation_from_last:
            return False
        if self.rotation_from_last != other.rotation_from_last:
            return False
        if self.time_elapsed != other.time_elapsed:
            return False
        if self.latency != other.latency:
            return False
        if self.n_iterations != other.n_iterations:
            return False
        if self.average_distance != other.average_distance:
            return False
        if self.uncertainty_x != other.uncertainty_x:
            return False
        if self.uncertainty_y != other.uncertainty_y:
            return False
        if self.uncertainty_z != other.uncertainty_z:
            return False
        if self.uncertainty_roll != other.uncertainty_roll:
            return False
        if self.uncertainty_pitch != other.uncertainty_pitch:
            return False
        if self.uncertainty_yaw != other.uncertainty_yaw:
            return False
        if self.plane_match_success != other.plane_match_success:
            return False
        if self.plane_no_enough_neighbor != other.plane_no_enough_neighbor:
            return False
        if self.plane_neighbor_too_far != other.plane_neighbor_too_far:
            return False
        if self.plane_badpca_structure != other.plane_badpca_structure:
            return False
        if self.plane_invalid_numerical != other.plane_invalid_numerical:
            return False
        if self.plane_mse_too_large != other.plane_mse_too_large:
            return False
        if self.plane_unknown != other.plane_unknown:
            return False
        if self.prediction_source != other.prediction_source:
            return False
        if self.iterations != other.iterations:
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
    def laser_cloud_surf_from_map_num(self):
        """Message field 'laser_cloud_surf_from_map_num'."""
        return self._laser_cloud_surf_from_map_num

    @laser_cloud_surf_from_map_num.setter
    def laser_cloud_surf_from_map_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'laser_cloud_surf_from_map_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'laser_cloud_surf_from_map_num' field must be an integer in [-2147483648, 2147483647]"
        self._laser_cloud_surf_from_map_num = value

    @builtins.property
    def laser_cloud_corner_from_map_num(self):
        """Message field 'laser_cloud_corner_from_map_num'."""
        return self._laser_cloud_corner_from_map_num

    @laser_cloud_corner_from_map_num.setter
    def laser_cloud_corner_from_map_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'laser_cloud_corner_from_map_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'laser_cloud_corner_from_map_num' field must be an integer in [-2147483648, 2147483647]"
        self._laser_cloud_corner_from_map_num = value

    @builtins.property
    def laser_cloud_surf_stack_num(self):
        """Message field 'laser_cloud_surf_stack_num'."""
        return self._laser_cloud_surf_stack_num

    @laser_cloud_surf_stack_num.setter
    def laser_cloud_surf_stack_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'laser_cloud_surf_stack_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'laser_cloud_surf_stack_num' field must be an integer in [-2147483648, 2147483647]"
        self._laser_cloud_surf_stack_num = value

    @builtins.property
    def laser_cloud_corner_stack_num(self):
        """Message field 'laser_cloud_corner_stack_num'."""
        return self._laser_cloud_corner_stack_num

    @laser_cloud_corner_stack_num.setter
    def laser_cloud_corner_stack_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'laser_cloud_corner_stack_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'laser_cloud_corner_stack_num' field must be an integer in [-2147483648, 2147483647]"
        self._laser_cloud_corner_stack_num = value

    @builtins.property
    def total_translation(self):
        """Message field 'total_translation'."""
        return self._total_translation

    @total_translation.setter
    def total_translation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'total_translation' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'total_translation' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._total_translation = value

    @builtins.property
    def total_rotation(self):
        """Message field 'total_rotation'."""
        return self._total_rotation

    @total_rotation.setter
    def total_rotation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'total_rotation' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'total_rotation' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._total_rotation = value

    @builtins.property
    def translation_from_last(self):
        """Message field 'translation_from_last'."""
        return self._translation_from_last

    @translation_from_last.setter
    def translation_from_last(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'translation_from_last' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'translation_from_last' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._translation_from_last = value

    @builtins.property
    def rotation_from_last(self):
        """Message field 'rotation_from_last'."""
        return self._rotation_from_last

    @rotation_from_last.setter
    def rotation_from_last(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rotation_from_last' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rotation_from_last' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rotation_from_last = value

    @builtins.property
    def time_elapsed(self):
        """Message field 'time_elapsed'."""
        return self._time_elapsed

    @time_elapsed.setter
    def time_elapsed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_elapsed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'time_elapsed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._time_elapsed = value

    @builtins.property
    def latency(self):
        """Message field 'latency'."""
        return self._latency

    @latency.setter
    def latency(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latency' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latency' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latency = value

    @builtins.property
    def n_iterations(self):
        """Message field 'n_iterations'."""
        return self._n_iterations

    @n_iterations.setter
    def n_iterations(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'n_iterations' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'n_iterations' field must be an integer in [-2147483648, 2147483647]"
        self._n_iterations = value

    @builtins.property
    def average_distance(self):
        """Message field 'average_distance'."""
        return self._average_distance

    @average_distance.setter
    def average_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'average_distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'average_distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._average_distance = value

    @builtins.property
    def uncertainty_x(self):
        """Message field 'uncertainty_x'."""
        return self._uncertainty_x

    @uncertainty_x.setter
    def uncertainty_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'uncertainty_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'uncertainty_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._uncertainty_x = value

    @builtins.property
    def uncertainty_y(self):
        """Message field 'uncertainty_y'."""
        return self._uncertainty_y

    @uncertainty_y.setter
    def uncertainty_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'uncertainty_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'uncertainty_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._uncertainty_y = value

    @builtins.property
    def uncertainty_z(self):
        """Message field 'uncertainty_z'."""
        return self._uncertainty_z

    @uncertainty_z.setter
    def uncertainty_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'uncertainty_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'uncertainty_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._uncertainty_z = value

    @builtins.property
    def uncertainty_roll(self):
        """Message field 'uncertainty_roll'."""
        return self._uncertainty_roll

    @uncertainty_roll.setter
    def uncertainty_roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'uncertainty_roll' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'uncertainty_roll' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._uncertainty_roll = value

    @builtins.property
    def uncertainty_pitch(self):
        """Message field 'uncertainty_pitch'."""
        return self._uncertainty_pitch

    @uncertainty_pitch.setter
    def uncertainty_pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'uncertainty_pitch' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'uncertainty_pitch' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._uncertainty_pitch = value

    @builtins.property
    def uncertainty_yaw(self):
        """Message field 'uncertainty_yaw'."""
        return self._uncertainty_yaw

    @uncertainty_yaw.setter
    def uncertainty_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'uncertainty_yaw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'uncertainty_yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._uncertainty_yaw = value

    @builtins.property
    def plane_match_success(self):
        """Message field 'plane_match_success'."""
        return self._plane_match_success

    @plane_match_success.setter
    def plane_match_success(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'plane_match_success' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'plane_match_success' field must be an integer in [-2147483648, 2147483647]"
        self._plane_match_success = value

    @builtins.property
    def plane_no_enough_neighbor(self):
        """Message field 'plane_no_enough_neighbor'."""
        return self._plane_no_enough_neighbor

    @plane_no_enough_neighbor.setter
    def plane_no_enough_neighbor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'plane_no_enough_neighbor' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'plane_no_enough_neighbor' field must be an integer in [-2147483648, 2147483647]"
        self._plane_no_enough_neighbor = value

    @builtins.property
    def plane_neighbor_too_far(self):
        """Message field 'plane_neighbor_too_far'."""
        return self._plane_neighbor_too_far

    @plane_neighbor_too_far.setter
    def plane_neighbor_too_far(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'plane_neighbor_too_far' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'plane_neighbor_too_far' field must be an integer in [-2147483648, 2147483647]"
        self._plane_neighbor_too_far = value

    @builtins.property
    def plane_badpca_structure(self):
        """Message field 'plane_badpca_structure'."""
        return self._plane_badpca_structure

    @plane_badpca_structure.setter
    def plane_badpca_structure(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'plane_badpca_structure' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'plane_badpca_structure' field must be an integer in [-2147483648, 2147483647]"
        self._plane_badpca_structure = value

    @builtins.property
    def plane_invalid_numerical(self):
        """Message field 'plane_invalid_numerical'."""
        return self._plane_invalid_numerical

    @plane_invalid_numerical.setter
    def plane_invalid_numerical(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'plane_invalid_numerical' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'plane_invalid_numerical' field must be an integer in [-2147483648, 2147483647]"
        self._plane_invalid_numerical = value

    @builtins.property
    def plane_mse_too_large(self):
        """Message field 'plane_mse_too_large'."""
        return self._plane_mse_too_large

    @plane_mse_too_large.setter
    def plane_mse_too_large(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'plane_mse_too_large' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'plane_mse_too_large' field must be an integer in [-2147483648, 2147483647]"
        self._plane_mse_too_large = value

    @builtins.property
    def plane_unknown(self):
        """Message field 'plane_unknown'."""
        return self._plane_unknown

    @plane_unknown.setter
    def plane_unknown(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'plane_unknown' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'plane_unknown' field must be an integer in [-2147483648, 2147483647]"
        self._plane_unknown = value

    @builtins.property
    def prediction_source(self):
        """Message field 'prediction_source'."""
        return self._prediction_source

    @prediction_source.setter
    def prediction_source(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prediction_source' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'prediction_source' field must be an integer in [-2147483648, 2147483647]"
        self._prediction_source = value

    @builtins.property
    def iterations(self):
        """Message field 'iterations'."""
        return self._iterations

    @iterations.setter
    def iterations(self, value):
        if __debug__:
            from arise_slam_mid360_msgs.msg import IterationStats
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
                 all(isinstance(v, IterationStats) for v in value) and
                 True), \
                "The 'iterations' field must be a set or sequence and each value of type 'IterationStats'"
        self._iterations = value
