# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mycobot_pro450_interfaces:srv/GetGripperValue.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetGripperValue_Request(type):
    """Metaclass of message 'GetGripperValue_Request'."""

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
            module = import_type_support('mycobot_pro450_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mycobot_pro450_interfaces.srv.GetGripperValue_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_gripper_value__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_gripper_value__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_gripper_value__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_gripper_value__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_gripper_value__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetGripperValue_Request(metaclass=Metaclass_GetGripperValue_Request):
    """Message class 'GetGripperValue_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GetGripperValue_Response(type):
    """Metaclass of message 'GetGripperValue_Response'."""

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
            module = import_type_support('mycobot_pro450_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mycobot_pro450_interfaces.srv.GetGripperValue_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_gripper_value__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_gripper_value__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_gripper_value__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_gripper_value__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_gripper_value__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetGripperValue_Response(metaclass=Metaclass_GetGripperValue_Response):
    """Message class 'GetGripperValue_Response'."""

    __slots__ = [
        '_gripper_angle',
    ]

    _fields_and_field_types = {
        'gripper_angle': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.gripper_angle = kwargs.get('gripper_angle', int())

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
        if self.gripper_angle != other.gripper_angle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def gripper_angle(self):
        """Message field 'gripper_angle'."""
        return self._gripper_angle

    @gripper_angle.setter
    def gripper_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gripper_angle' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'gripper_angle' field must be an integer in [-128, 127]"
        self._gripper_angle = value


class Metaclass_GetGripperValue(type):
    """Metaclass of service 'GetGripperValue'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mycobot_pro450_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mycobot_pro450_interfaces.srv.GetGripperValue')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_gripper_value

            from mycobot_pro450_interfaces.srv import _get_gripper_value
            if _get_gripper_value.Metaclass_GetGripperValue_Request._TYPE_SUPPORT is None:
                _get_gripper_value.Metaclass_GetGripperValue_Request.__import_type_support__()
            if _get_gripper_value.Metaclass_GetGripperValue_Response._TYPE_SUPPORT is None:
                _get_gripper_value.Metaclass_GetGripperValue_Response.__import_type_support__()


class GetGripperValue(metaclass=Metaclass_GetGripperValue):
    from mycobot_pro450_interfaces.srv._get_gripper_value import GetGripperValue_Request as Request
    from mycobot_pro450_interfaces.srv._get_gripper_value import GetGripperValue_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
