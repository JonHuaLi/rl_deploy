# generated from rosidl_generator_py/resource/_idl.py.em
# with input from node_control_msgs:srv/MotorConfigStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorConfigStatus_Request(type):
    """Metaclass of message 'MotorConfigStatus_Request'."""

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
                'node_control_msgs.srv.MotorConfigStatus_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__motor_config_status__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__motor_config_status__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__motor_config_status__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__motor_config_status__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__motor_config_status__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorConfigStatus_Request(metaclass=Metaclass_MotorConfigStatus_Request):
    """Message class 'MotorConfigStatus_Request'."""

    __slots__ = [
        '_motor_id',
    ]

    _fields_and_field_types = {
        'motor_id': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motor_id = kwargs.get('motor_id', int())

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
        if self.motor_id != other.motor_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def motor_id(self):
        """Message field 'motor_id'."""
        return self._motor_id

    @motor_id.setter
    def motor_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'motor_id' field must be an unsigned integer in [0, 4294967295]"
        self._motor_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MotorConfigStatus_Response(type):
    """Metaclass of message 'MotorConfigStatus_Response'."""

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
                'node_control_msgs.srv.MotorConfigStatus_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__motor_config_status__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__motor_config_status__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__motor_config_status__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__motor_config_status__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__motor_config_status__response

            from node_control_msgs.msg import MotorConfigDev
            if MotorConfigDev.__class__._TYPE_SUPPORT is None:
                MotorConfigDev.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorConfigStatus_Response(metaclass=Metaclass_MotorConfigStatus_Response):
    """Message class 'MotorConfigStatus_Response'."""

    __slots__ = [
        '_config',
    ]

    _fields_and_field_types = {
        'config': 'sequence<node_control_msgs/MotorConfigDev>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['node_control_msgs', 'msg'], 'MotorConfigDev')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.config = kwargs.get('config', [])

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
        if self.config != other.config:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def config(self):
        """Message field 'config'."""
        return self._config

    @config.setter
    def config(self, value):
        if __debug__:
            from node_control_msgs.msg import MotorConfigDev
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
                 all(isinstance(v, MotorConfigDev) for v in value) and
                 True), \
                "The 'config' field must be a set or sequence and each value of type 'MotorConfigDev'"
        self._config = value


class Metaclass_MotorConfigStatus(type):
    """Metaclass of service 'MotorConfigStatus'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('node_control_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'node_control_msgs.srv.MotorConfigStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__motor_config_status

            from node_control_msgs.srv import _motor_config_status
            if _motor_config_status.Metaclass_MotorConfigStatus_Request._TYPE_SUPPORT is None:
                _motor_config_status.Metaclass_MotorConfigStatus_Request.__import_type_support__()
            if _motor_config_status.Metaclass_MotorConfigStatus_Response._TYPE_SUPPORT is None:
                _motor_config_status.Metaclass_MotorConfigStatus_Response.__import_type_support__()


class MotorConfigStatus(metaclass=Metaclass_MotorConfigStatus):
    from node_control_msgs.srv._motor_config_status import MotorConfigStatus_Request as Request
    from node_control_msgs.srv._motor_config_status import MotorConfigStatus_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
