// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from node_control_msgs:msg/MotorHealthState.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "node_control_msgs/msg/detail/motor_health_state__struct.h"
#include "node_control_msgs/msg/detail/motor_health_state__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool node_control_msgs__msg__motor_health_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("node_control_msgs.msg._motor_health_state.MotorHealthState", full_classname_dest, 58) == 0);
  }
  node_control_msgs__msg__MotorHealthState * ros_message = _ros_message;
  {  // health
    PyObject * field = PyObject_GetAttrString(_pymsg, "health");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->health = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // motor_direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_direction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor_direction = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // motor_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_temperature");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor_temperature = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mos_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "mos_temperature");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mos_temperature = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bus_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "bus_voltage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bus_voltage = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // u1_online
    PyObject * field = PyObject_GetAttrString(_pymsg, "u1_online");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->u1_online = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // position_zero
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_zero");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_zero = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * node_control_msgs__msg__motor_health_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotorHealthState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("node_control_msgs.msg._motor_health_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotorHealthState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  node_control_msgs__msg__MotorHealthState * ros_message = (node_control_msgs__msg__MotorHealthState *)raw_ros_message;
  {  // health
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->health);
    {
      int rc = PyObject_SetAttrString(_pymessage, "health", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_direction
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->motor_direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_temperature
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->motor_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mos_temperature
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mos_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mos_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bus_voltage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bus_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bus_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // u1_online
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->u1_online);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u1_online", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_zero
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_zero);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_zero", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
