# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from bbros_bridge/mp_getclose_xyRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class mp_getclose_xyRequest(genpy.Message):
  _md5sum = "9061aee48320f865b73af2589fed8f03"
  _type = "bbros_bridge/mp_getclose_xyRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """std_msgs/Float32 goalX
std_msgs/Float32 goalY

================================================================================
MSG: std_msgs/Float32
float32 data"""
  __slots__ = ['goalX','goalY']
  _slot_types = ['std_msgs/Float32','std_msgs/Float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       goalX,goalY

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(mp_getclose_xyRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.goalX is None:
        self.goalX = std_msgs.msg.Float32()
      if self.goalY is None:
        self.goalY = std_msgs.msg.Float32()
    else:
      self.goalX = std_msgs.msg.Float32()
      self.goalY = std_msgs.msg.Float32()

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
      buff.write(_get_struct_2f().pack(_x.goalX.data, _x.goalY.data))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.goalX is None:
        self.goalX = std_msgs.msg.Float32()
      if self.goalY is None:
        self.goalY = std_msgs.msg.Float32()
      end = 0
      _x = self
      start = end
      end += 8
      (_x.goalX.data, _x.goalY.data,) = _get_struct_2f().unpack(str[start:end])
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
      buff.write(_get_struct_2f().pack(_x.goalX.data, _x.goalY.data))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.goalX is None:
        self.goalX = std_msgs.msg.Float32()
      if self.goalY is None:
        self.goalY = std_msgs.msg.Float32()
      end = 0
      _x = self
      start = end
      end += 8
      (_x.goalX.data, _x.goalY.data,) = _get_struct_2f().unpack(str[start:end])
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
"""autogenerated by genpy from bbros_bridge/mp_getclose_xyResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class mp_getclose_xyResponse(genpy.Message):
  _md5sum = "52f61832eab3a7c7b495ac0b338dd373"
  _type = "bbros_bridge/mp_getclose_xyResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """std_msgs/String error


================================================================================
MSG: std_msgs/String
string data
"""
  __slots__ = ['error']
  _slot_types = ['std_msgs/String']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       error

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(mp_getclose_xyResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.error is None:
        self.error = std_msgs.msg.String()
    else:
      self.error = std_msgs.msg.String()

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
      _x = self.error.data
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.error is None:
        self.error = std_msgs.msg.String()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.error.data = str[start:end].decode('utf-8')
      else:
        self.error.data = str[start:end]
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
      _x = self.error.data
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.error is None:
        self.error = std_msgs.msg.String()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.error.data = str[start:end].decode('utf-8')
      else:
        self.error.data = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
class mp_getclose_xy(object):
  _type          = 'bbros_bridge/mp_getclose_xy'
  _md5sum = 'a6bfdb792bb6f7c25c686505f84f9b9c'
  _request_class  = mp_getclose_xyRequest
  _response_class = mp_getclose_xyResponse
