# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from mvn_pln/mp_getclose_xyaRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class mp_getclose_xyaRequest(genpy.Message):
  _md5sum = "178acf5a67ca3d651e2b78e01e55f45b"
  _type = "mvn_pln/mp_getclose_xyaRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """std_msgs/Float32 goalX
std_msgs/Float32 goalY
std_msgs/Float32 goalAngle

================================================================================
MSG: std_msgs/Float32
float32 data"""
  __slots__ = ['goalX','goalY','goalAngle']
  _slot_types = ['std_msgs/Float32','std_msgs/Float32','std_msgs/Float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       goalX,goalY,goalAngle

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(mp_getclose_xyaRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.goalX is None:
        self.goalX = std_msgs.msg.Float32()
      if self.goalY is None:
        self.goalY = std_msgs.msg.Float32()
      if self.goalAngle is None:
        self.goalAngle = std_msgs.msg.Float32()
    else:
      self.goalX = std_msgs.msg.Float32()
      self.goalY = std_msgs.msg.Float32()
      self.goalAngle = std_msgs.msg.Float32()

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
      buff.write(_get_struct_3f().pack(_x.goalX.data, _x.goalY.data, _x.goalAngle.data))
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
      if self.goalAngle is None:
        self.goalAngle = std_msgs.msg.Float32()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.goalX.data, _x.goalY.data, _x.goalAngle.data,) = _get_struct_3f().unpack(str[start:end])
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
      buff.write(_get_struct_3f().pack(_x.goalX.data, _x.goalY.data, _x.goalAngle.data))
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
      if self.goalAngle is None:
        self.goalAngle = std_msgs.msg.Float32()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.goalX.data, _x.goalY.data, _x.goalAngle.data,) = _get_struct_3f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3f = None
def _get_struct_3f():
    global _struct_3f
    if _struct_3f is None:
        _struct_3f = struct.Struct("<3f")
    return _struct_3f
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from mvn_pln/mp_getclose_xyaResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class mp_getclose_xyaResponse(genpy.Message):
  _md5sum = "52f61832eab3a7c7b495ac0b338dd373"
  _type = "mvn_pln/mp_getclose_xyaResponse"
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
      super(mp_getclose_xyaResponse, self).__init__(*args, **kwds)
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
class mp_getclose_xya(object):
  _type          = 'mvn_pln/mp_getclose_xya'
  _md5sum = 'f236a8bf2a517b8af728eb19291f51cb'
  _request_class  = mp_getclose_xyaRequest
  _response_class = mp_getclose_xyaResponse
