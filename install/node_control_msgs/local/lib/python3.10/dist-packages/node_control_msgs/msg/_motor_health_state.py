# generated from rosidl_generator_py/resource/_idl.py.em
# with input from node_control_msgs:msg/MotorHealthState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorHealthState(type):
    """Metaclass of message 'MotorHealthState'."""

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
                'node_control_msgs.msg.MotorHealthState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_health_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_health_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_health_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_health_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_health_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorHealthState(metaclass=Metaclass_MotorHealthState):
    """Message class 'MotorHealthState'."""

    __slots__ = [
        '_health',
        '_motor_direction',
        '_motor_temperature',
        '_mos_temperature',
        '_bus_voltage',
        '_u1_online',
        '_position_zero',
    ]

    _fields_and_field_types = {
        'health': 'uint16',
        'motor_direction': 'uint8',
        'motor_temperature': 'uint8',
        'mos_temperature': 'uint8',
        'bus_voltage': 'uint8',
        'u1_online': 'uint8',
        'position_zero': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.health = kwargs.get('health', int())
        self.motor_direction = kwargs.get('motor_direction', int())
        self.motor_temperature = kwargs.get('motor_temperature', int())
        self.mos_temperature = kwargs.get('mos_temperature', int())
        self.bus_voltage = kwargs.get('bus_voltage', int())
        self.u1_online = kwargs.get('u1_online', int())
        self.position_zero = kwargs.get('position_zero', float())

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
        if self.health != other.health:
            return False
        if self.motor_direction != other.motor_direction:
            return False
        if self.motor_temperature != other.motor_temperature:
            return False
        if self.mos_temperature != other.mos_temperature:
            return False
        if self.bus_voltage != other.bus_voltage:
            return False
        if self.u1_online != other.u1_online:
            return False
        if self.position_zero != other.position_zero:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def health(self):
        """Message field 'health'."""
        return self._health

    @health.setter
    def health(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'health' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'health' field must be an unsigned integer in [0, 65535]"
        self._health = value

    @builtins.property
    def motor_direction(self):
        """Message field 'motor_direction'."""
        return self._motor_direction

    @motor_direction.setter
    def motor_direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_direction' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motor_direction' field must be an unsigned integer in [0, 255]"
        self._motor_direction = value

    @builtins.property
    def motor_temperature(self):
        """Message field 'motor_temperature'."""
        return self._motor_temperature

    @motor_temperature.setter
    def motor_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_temperature' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motor_temperature' field must be an unsigned integer in [0, 255]"
        self._motor_temperature = value

    @builtins.property
    def mos_temperature(self):
        """Message field 'mos_temperature'."""
        return self._mos_temperature

    @mos_temperature.setter
    def mos_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mos_temperature' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mos_temperature' field must be an unsigned integer in [0, 255]"
        self._mos_temperature = value

    @builtins.property
    def bus_voltage(self):
        """Message field 'bus_voltage'."""
        return self._bus_voltage

    @bus_voltage.setter
    def bus_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bus_voltage' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bus_voltage' field must be an unsigned integer in [0, 255]"
        self._bus_voltage = value

    @builtins.property
    def u1_online(self):
        """Message field 'u1_online'."""
        return self._u1_online

    @u1_online.setter
    def u1_online(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'u1_online' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'u1_online' field must be an unsigned integer in [0, 255]"
        self._u1_online = value

    @builtins.property
    def position_zero(self):
        """Message field 'position_zero'."""
        return self._position_zero

    @position_zero.setter
    def position_zero(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position_zero' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'position_zero' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._position_zero = value
