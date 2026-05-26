# generated from rosidl_generator_py/resource/_idl.py.em
# with input from node_app_msgs:msg/LrsCmdState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LrsCmdState(type):
    """Metaclass of message 'LrsCmdState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CMD_TYPE_STATE_CHANGE': 0,
        'CMD_TYPE_MODE_CHANGE': 1,
        'STATE_DISABLED': 0,
        'STATE_DAMPING': 1,
        'STATE_READY': 2,
        'STATE_RUNNING': 3,
        'MODE_DEFAULT': 0,
        'MODE_DANCE': 1,
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
                'node_app_msgs.msg.LrsCmdState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lrs_cmd_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lrs_cmd_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lrs_cmd_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lrs_cmd_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lrs_cmd_state

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CMD_TYPE_STATE_CHANGE': cls.__constants['CMD_TYPE_STATE_CHANGE'],
            'CMD_TYPE_MODE_CHANGE': cls.__constants['CMD_TYPE_MODE_CHANGE'],
            'STATE_DISABLED': cls.__constants['STATE_DISABLED'],
            'STATE_DAMPING': cls.__constants['STATE_DAMPING'],
            'STATE_READY': cls.__constants['STATE_READY'],
            'STATE_RUNNING': cls.__constants['STATE_RUNNING'],
            'MODE_DEFAULT': cls.__constants['MODE_DEFAULT'],
            'MODE_DANCE': cls.__constants['MODE_DANCE'],
        }

    @property
    def CMD_TYPE_STATE_CHANGE(self):
        """Message constant 'CMD_TYPE_STATE_CHANGE'."""
        return Metaclass_LrsCmdState.__constants['CMD_TYPE_STATE_CHANGE']

    @property
    def CMD_TYPE_MODE_CHANGE(self):
        """Message constant 'CMD_TYPE_MODE_CHANGE'."""
        return Metaclass_LrsCmdState.__constants['CMD_TYPE_MODE_CHANGE']

    @property
    def STATE_DISABLED(self):
        """Message constant 'STATE_DISABLED'."""
        return Metaclass_LrsCmdState.__constants['STATE_DISABLED']

    @property
    def STATE_DAMPING(self):
        """Message constant 'STATE_DAMPING'."""
        return Metaclass_LrsCmdState.__constants['STATE_DAMPING']

    @property
    def STATE_READY(self):
        """Message constant 'STATE_READY'."""
        return Metaclass_LrsCmdState.__constants['STATE_READY']

    @property
    def STATE_RUNNING(self):
        """Message constant 'STATE_RUNNING'."""
        return Metaclass_LrsCmdState.__constants['STATE_RUNNING']

    @property
    def MODE_DEFAULT(self):
        """Message constant 'MODE_DEFAULT'."""
        return Metaclass_LrsCmdState.__constants['MODE_DEFAULT']

    @property
    def MODE_DANCE(self):
        """Message constant 'MODE_DANCE'."""
        return Metaclass_LrsCmdState.__constants['MODE_DANCE']


class LrsCmdState(metaclass=Metaclass_LrsCmdState):
    """
    Message class 'LrsCmdState'.

    Constants:
      CMD_TYPE_STATE_CHANGE
      CMD_TYPE_MODE_CHANGE
      STATE_DISABLED
      STATE_DAMPING
      STATE_READY
      STATE_RUNNING
      MODE_DEFAULT
      MODE_DANCE
    """

    __slots__ = [
        '_header',
        '_cmd_type',
        '_current_state',
        '_target_state',
        '_current_mode',
        '_target_mode',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'cmd_type': 'uint32',
        'current_state': 'uint32',
        'target_state': 'uint32',
        'current_mode': 'uint32',
        'target_mode': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.cmd_type = kwargs.get('cmd_type', int())
        self.current_state = kwargs.get('current_state', int())
        self.target_state = kwargs.get('target_state', int())
        self.current_mode = kwargs.get('current_mode', int())
        self.target_mode = kwargs.get('target_mode', int())

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
        if self.cmd_type != other.cmd_type:
            return False
        if self.current_state != other.current_state:
            return False
        if self.target_state != other.target_state:
            return False
        if self.current_mode != other.current_mode:
            return False
        if self.target_mode != other.target_mode:
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
    def cmd_type(self):
        """Message field 'cmd_type'."""
        return self._cmd_type

    @cmd_type.setter
    def cmd_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd_type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'cmd_type' field must be an unsigned integer in [0, 4294967295]"
        self._cmd_type = value

    @builtins.property
    def current_state(self):
        """Message field 'current_state'."""
        return self._current_state

    @current_state.setter
    def current_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_state' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'current_state' field must be an unsigned integer in [0, 4294967295]"
        self._current_state = value

    @builtins.property
    def target_state(self):
        """Message field 'target_state'."""
        return self._target_state

    @target_state.setter
    def target_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_state' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'target_state' field must be an unsigned integer in [0, 4294967295]"
        self._target_state = value

    @builtins.property
    def current_mode(self):
        """Message field 'current_mode'."""
        return self._current_mode

    @current_mode.setter
    def current_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_mode' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'current_mode' field must be an unsigned integer in [0, 4294967295]"
        self._current_mode = value

    @builtins.property
    def target_mode(self):
        """Message field 'target_mode'."""
        return self._target_mode

    @target_mode.setter
    def target_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_mode' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'target_mode' field must be an unsigned integer in [0, 4294967295]"
        self._target_mode = value
