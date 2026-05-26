# generated from rosidl_generator_py/resource/_idl.py.em
# with input from node_control_msgs:msg/MotorInfoValue.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'sw_version'
# Member 'hw_version'
# Member 'joint_version'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorInfoValue(type):
    """Metaclass of message 'MotorInfoValue'."""

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
            module = import_type_support('node_control_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'node_control_msgs.msg.MotorInfoValue')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_info_value
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_info_value
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_info_value
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_info_value
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_info_value

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorInfoValue(metaclass=Metaclass_MotorInfoValue):
    """Message class 'MotorInfoValue'."""

    __slots__ = [
        '_startup_time_ms',
        '_sw_version',
        '_hw_version',
        '_joint_version',
        '_state',
        '_serial_num',
    ]

    _fields_and_field_types = {
        'startup_time_ms': 'uint64',
        'sw_version': 'uint8[3]',
        'hw_version': 'uint8[3]',
        'joint_version': 'uint8[3]',
        'state': 'uint16',
        'serial_num': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.startup_time_ms = kwargs.get('startup_time_ms', int())
        if 'sw_version' not in kwargs:
            self.sw_version = numpy.zeros(3, dtype=numpy.uint8)
        else:
            self.sw_version = kwargs.get('sw_version')
        if 'hw_version' not in kwargs:
            self.hw_version = numpy.zeros(3, dtype=numpy.uint8)
        else:
            self.hw_version = kwargs.get('hw_version')
        if 'joint_version' not in kwargs:
            self.joint_version = numpy.zeros(3, dtype=numpy.uint8)
        else:
            self.joint_version = kwargs.get('joint_version')
        self.state = kwargs.get('state', int())
        self.serial_num = kwargs.get('serial_num', int())

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
        if self.startup_time_ms != other.startup_time_ms:
            return False
        if any(self.sw_version != other.sw_version):
            return False
        if any(self.hw_version != other.hw_version):
            return False
        if any(self.joint_version != other.joint_version):
            return False
        if self.state != other.state:
            return False
        if self.serial_num != other.serial_num:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def startup_time_ms(self):
        """Message field 'startup_time_ms'."""
        return self._startup_time_ms

    @startup_time_ms.setter
    def startup_time_ms(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'startup_time_ms' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'startup_time_ms' field must be an unsigned integer in [0, 18446744073709551615]"
        self._startup_time_ms = value

    @builtins.property
    def sw_version(self):
        """Message field 'sw_version'."""
        return self._sw_version

    @sw_version.setter
    def sw_version(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'sw_version' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 3, \
                "The 'sw_version' numpy.ndarray() must have a size of 3"
            self._sw_version = value
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
                 len(value) == 3 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'sw_version' field must be a set or sequence with length 3 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._sw_version = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def hw_version(self):
        """Message field 'hw_version'."""
        return self._hw_version

    @hw_version.setter
    def hw_version(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'hw_version' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 3, \
                "The 'hw_version' numpy.ndarray() must have a size of 3"
            self._hw_version = value
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
                 len(value) == 3 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'hw_version' field must be a set or sequence with length 3 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._hw_version = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def joint_version(self):
        """Message field 'joint_version'."""
        return self._joint_version

    @joint_version.setter
    def joint_version(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'joint_version' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 3, \
                "The 'joint_version' numpy.ndarray() must have a size of 3"
            self._joint_version = value
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
                 len(value) == 3 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'joint_version' field must be a set or sequence with length 3 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._joint_version = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'state' field must be an unsigned integer in [0, 65535]"
        self._state = value

    @builtins.property
    def serial_num(self):
        """Message field 'serial_num'."""
        return self._serial_num

    @serial_num.setter
    def serial_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'serial_num' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'serial_num' field must be an unsigned integer in [0, 18446744073709551615]"
        self._serial_num = value
