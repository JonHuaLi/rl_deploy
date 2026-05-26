# generated from rosidl_generator_py/resource/_idl.py.em
# with input from node_control_msgs:msg/MotorConfigDev.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorConfigDev(type):
    """Metaclass of message 'MotorConfigDev'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PARAMETER_ID_MOTOR_DIRECTION': 0,
        'PARAMETER_ID_MOTOR_STATUS': 1,
        'PARAMETER_ID_ZERO_POSITION': 2,
        'PARAMETER_ID_CLEAR_ERROR': 3,
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
                'node_control_msgs.msg.MotorConfigDev')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_config_dev
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_config_dev
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_config_dev
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_config_dev
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_config_dev

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PARAMETER_ID_MOTOR_DIRECTION': cls.__constants['PARAMETER_ID_MOTOR_DIRECTION'],
            'PARAMETER_ID_MOTOR_STATUS': cls.__constants['PARAMETER_ID_MOTOR_STATUS'],
            'PARAMETER_ID_ZERO_POSITION': cls.__constants['PARAMETER_ID_ZERO_POSITION'],
            'PARAMETER_ID_CLEAR_ERROR': cls.__constants['PARAMETER_ID_CLEAR_ERROR'],
        }

    @property
    def PARAMETER_ID_MOTOR_DIRECTION(self):
        """Message constant 'PARAMETER_ID_MOTOR_DIRECTION'."""
        return Metaclass_MotorConfigDev.__constants['PARAMETER_ID_MOTOR_DIRECTION']

    @property
    def PARAMETER_ID_MOTOR_STATUS(self):
        """Message constant 'PARAMETER_ID_MOTOR_STATUS'."""
        return Metaclass_MotorConfigDev.__constants['PARAMETER_ID_MOTOR_STATUS']

    @property
    def PARAMETER_ID_ZERO_POSITION(self):
        """Message constant 'PARAMETER_ID_ZERO_POSITION'."""
        return Metaclass_MotorConfigDev.__constants['PARAMETER_ID_ZERO_POSITION']

    @property
    def PARAMETER_ID_CLEAR_ERROR(self):
        """Message constant 'PARAMETER_ID_CLEAR_ERROR'."""
        return Metaclass_MotorConfigDev.__constants['PARAMETER_ID_CLEAR_ERROR']


class MotorConfigDev(metaclass=Metaclass_MotorConfigDev):
    """
    Message class 'MotorConfigDev'.

    Constants:
      PARAMETER_ID_MOTOR_DIRECTION
      PARAMETER_ID_MOTOR_STATUS
      PARAMETER_ID_ZERO_POSITION
      PARAMETER_ID_CLEAR_ERROR
    """

    __slots__ = [
        '_parameter_id',
        '_parameter_value',
    ]

    _fields_and_field_types = {
        'parameter_id': 'uint32',
        'parameter_value': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.parameter_id = kwargs.get('parameter_id', int())
        self.parameter_value = kwargs.get('parameter_value', float())

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
        if self.parameter_id != other.parameter_id:
            return False
        if self.parameter_value != other.parameter_value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def parameter_id(self):
        """Message field 'parameter_id'."""
        return self._parameter_id

    @parameter_id.setter
    def parameter_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'parameter_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'parameter_id' field must be an unsigned integer in [0, 4294967295]"
        self._parameter_id = value

    @builtins.property
    def parameter_value(self):
        """Message field 'parameter_value'."""
        return self._parameter_value

    @parameter_value.setter
    def parameter_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'parameter_value' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'parameter_value' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._parameter_value = value
