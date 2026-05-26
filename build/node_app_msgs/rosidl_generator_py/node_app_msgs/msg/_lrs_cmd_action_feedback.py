# generated from rosidl_generator_py/resource/_idl.py.em
# with input from node_app_msgs:msg/LrsCmdActionFeedback.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LrsCmdActionFeedback(type):
    """Metaclass of message 'LrsCmdActionFeedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ACTION_MOTOR_RECOVER': 0,
        'ACTION_UPGRADE': 1,
        'ACTION_DANCE_1': 10,
        'ACTION_WAVE': 20,
        'ACTION_CLASP': 21,
        'ACTION_HEART': 22,
        'ACTION_SHAKE': 23,
        'ACTION_CLAP': 24,
        'ACTION_KISS': 25,
        'ACTION_RUNNING': 0,
        'ACTION_SUCCESS': 1,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('node_app_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'node_app_msgs.msg.LrsCmdActionFeedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lrs_cmd_action_feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lrs_cmd_action_feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lrs_cmd_action_feedback
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lrs_cmd_action_feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lrs_cmd_action_feedback

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ACTION_MOTOR_RECOVER': cls.__constants['ACTION_MOTOR_RECOVER'],
            'ACTION_UPGRADE': cls.__constants['ACTION_UPGRADE'],
            'ACTION_DANCE_1': cls.__constants['ACTION_DANCE_1'],
            'ACTION_WAVE': cls.__constants['ACTION_WAVE'],
            'ACTION_CLASP': cls.__constants['ACTION_CLASP'],
            'ACTION_HEART': cls.__constants['ACTION_HEART'],
            'ACTION_SHAKE': cls.__constants['ACTION_SHAKE'],
            'ACTION_CLAP': cls.__constants['ACTION_CLAP'],
            'ACTION_KISS': cls.__constants['ACTION_KISS'],
            'ACTION_RUNNING': cls.__constants['ACTION_RUNNING'],
            'ACTION_SUCCESS': cls.__constants['ACTION_SUCCESS'],
        }

    @property
    def ACTION_MOTOR_RECOVER(self):
        """Message constant 'ACTION_MOTOR_RECOVER'."""
        return Metaclass_LrsCmdActionFeedback.__constants['ACTION_MOTOR_RECOVER']

    @property
    def ACTION_UPGRADE(self):
        """Message constant 'ACTION_UPGRADE'."""
        return Metaclass_LrsCmdActionFeedback.__constants['ACTION_UPGRADE']

    @property
    def ACTION_DANCE_1(self):
        """Message constant 'ACTION_DANCE_1'."""
        return Metaclass_LrsCmdActionFeedback.__constants['ACTION_DANCE_1']

    @property
    def ACTION_WAVE(self):
        """Message constant 'ACTION_WAVE'."""
        return Metaclass_LrsCmdActionFeedback.__constants['ACTION_WAVE']

    @property
    def ACTION_CLASP(self):
        """Message constant 'ACTION_CLASP'."""
        return Metaclass_LrsCmdActionFeedback.__constants['ACTION_CLASP']

    @property
    def ACTION_HEART(self):
        """Message constant 'ACTION_HEART'."""
        return Metaclass_LrsCmdActionFeedback.__constants['ACTION_HEART']

    @property
    def ACTION_SHAKE(self):
        """Message constant 'ACTION_SHAKE'."""
        return Metaclass_LrsCmdActionFeedback.__constants['ACTION_SHAKE']

    @property
    def ACTION_CLAP(self):
        """Message constant 'ACTION_CLAP'."""
        return Metaclass_LrsCmdActionFeedback.__constants['ACTION_CLAP']

    @property
    def ACTION_KISS(self):
        """Message constant 'ACTION_KISS'."""
        return Metaclass_LrsCmdActionFeedback.__constants['ACTION_KISS']

    @property
    def ACTION_RUNNING(self):
        """Message constant 'ACTION_RUNNING'."""
        return Metaclass_LrsCmdActionFeedback.__constants['ACTION_RUNNING']

    @property
    def ACTION_SUCCESS(self):
        """Message constant 'ACTION_SUCCESS'."""
        return Metaclass_LrsCmdActionFeedback.__constants['ACTION_SUCCESS']


class LrsCmdActionFeedback(metaclass=Metaclass_LrsCmdActionFeedback):
    """
    Message class 'LrsCmdActionFeedback'.

    Constants:
      ACTION_MOTOR_RECOVER
      ACTION_UPGRADE
      ACTION_DANCE_1
      ACTION_WAVE
      ACTION_CLASP
      ACTION_HEART
      ACTION_SHAKE
      ACTION_CLAP
      ACTION_KISS
      ACTION_RUNNING
      ACTION_SUCCESS
    """

    __slots__ = [
        '_header',
        '_action_type',
        '_action_result',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'action_type': 'uint32',
        'action_result': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.action_type = kwargs.get('action_type', int())
        self.action_result = kwargs.get('action_result', int())

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
        if self.action_type != other.action_type:
            return False
        if self.action_result != other.action_result:
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
    def action_type(self):
        """Message field 'action_type'."""
        return self._action_type

    @action_type.setter
    def action_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'action_type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'action_type' field must be an unsigned integer in [0, 4294967295]"
        self._action_type = value

    @builtins.property
    def action_result(self):
        """Message field 'action_result'."""
        return self._action_result

    @action_result.setter
    def action_result(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'action_result' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'action_result' field must be an unsigned integer in [0, 4294967295]"
        self._action_result = value
