# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from mvn_pln/mp_move_dist_angleRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class mp_move_dist_angleRequest(genpy.Message):
  _md5sum = "ebb675b5ffe2861f054edd7cce6d60cd"
  _type = "mvn_pln/mp_move_dist_angleRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """std_msgs/Float32 bearing
std_msgs/Float32 distance

================================================================================
MSG: std_msgs/Float32
float32 data"""
  __slots__ = ['bearing','distance']
  _slot_types = ['std_msgs/Float32','std_msgs/Float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       bearing,distance

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(mp_move_dist_angleRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.bearing is None:
        self.bearing = std_msgs.msg.Float32()
      if self.distance is None:
        self.distance = std_msgs.msg.Float32()
    else:
      self.bearing = std_msgs.msg.Float32()
      self.distance = std_msgs.msg.Float32()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_2f().pack(_x.bearing.data, _x.distance.data))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.bearing is None:
        self.bearing = std_msgs.msg.Float32()
      if self.distance is None:
        self.distance = std_msgs.msg.Float32()
      end = 0
      _x = self
      start = end
      end += 8
      (_x.bearing.data, _x.distance.data,) = _get_struct_2f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2f().pack(_x.bearing.data, _x.distance.data))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.bearing is None:
        self.bearing = std_msgs.msg.Float32()
      if self.distance is None:
        self.distance = std_msgs.msg.Float32()
      end = 0
      _x = self
      start = end
      end += 8
      (_x.bearing.data, _x.distance.data,) = _get_struct_2f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2f = None
def _get_struct_2f():
    global _struct_2f
    if _struct_2f is None:
        _struct_2f = struct.Struct("<2f")
    return _struct_2f
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from mvn_pln/mp_move_dist_angleResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class mp_move_dist_angleResponse(genpy.Message):
  _md5sum = "48d862723389a90b005451cb408b5a44"
  _type = "mvn_pln/mp_move_dist_angleResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """std_msgs/Float32 traveledBearing
std_msgs/Float32 traveledDistance


================================================================================
MSG: std_msgs/Float32
float32 data"""
  __slots__ = ['traveledBearing','traveledDistance']
  _slot_types = ['std_msgs/Float32','std_msgs/Float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       traveledBearing,traveledDistance

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(mp_move_dist_angleResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.traveledBearing is None:
        self.traveledBearing = std_msgs.msg.Float32()
      if self.traveledDistance is None:
        self.traveledDistance = std_msgs.msg.Float32()
    else:
      self.traveledBearing = std_msgs.msg.Float32()
      self.traveledDistance = std_msgs.msg.Float32()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_2f().pack(_x.traveledBearing.data, _x.traveledDistance.data))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.traveledBearing is None:
        self.traveledBearing = std_msgs.msg.Float32()
      if self.traveledDistance is None:
        self.traveledDistance = std_msgs.msg.Float32()
      end = 0
      _x = self
      start = end
      end += 8
      (_x.traveledBearing.data, _x.traveledDistance.data,) = _get_struct_2f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2f().pack(_x.traveledBearing.data, _x.traveledDistance.data))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.traveledBearing is None:
        self.traveledBearing = std_msgs.msg.Float32()
      if self.traveledDistance is None:
        self.traveledDistance = std_msgs.msg.Float32()
      end = 0
      _x = self
      start = end
      end += 8
      (_x.traveledBearing.data, _x.traveledDistance.data,) = _get_struct_2f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2f = None
def _get_struct_2f():
    global _struct_2f
    if _struct_2f is None:
        _struct_2f = struct.Struct("<2f")
    return _struct_2f
class mp_move_dist_angle(object):
  _type          = 'mvn_pln/mp_move_dist_angle'
  _md5sum = '930663ac8b505c579c42369296ce1052'
  _request_class  = mp_move_dist_angleRequest
  _response_class = mp_move_dist_angleResponse
