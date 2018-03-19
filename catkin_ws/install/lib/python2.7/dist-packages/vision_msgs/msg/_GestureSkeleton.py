# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from vision_msgs/GestureSkeleton.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class GestureSkeleton(genpy.Message):
  _md5sum = "1e87d31b651e197f45459ceb0c0353fb"
  _type = "vision_msgs/GestureSkeleton"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int8 id		#id of user
string gesture		#gesture of user
geometry_msgs/Point gesture_centroid		#Gesture Centroid (x,y,z)

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z
"""
  __slots__ = ['id','gesture','gesture_centroid']
  _slot_types = ['int8','string','geometry_msgs/Point']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       id,gesture,gesture_centroid

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GestureSkeleton, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.id is None:
        self.id = 0
      if self.gesture is None:
        self.gesture = ''
      if self.gesture_centroid is None:
        self.gesture_centroid = geometry_msgs.msg.Point()
    else:
      self.id = 0
      self.gesture = ''
      self.gesture_centroid = geometry_msgs.msg.Point()

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
      buff.write(_get_struct_b().pack(self.id))
      _x = self.gesture
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_3d().pack(_x.gesture_centroid.x, _x.gesture_centroid.y, _x.gesture_centroid.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.gesture_centroid is None:
        self.gesture_centroid = geometry_msgs.msg.Point()
      end = 0
      start = end
      end += 1
      (self.id,) = _get_struct_b().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.gesture = str[start:end].decode('utf-8')
      else:
        self.gesture = str[start:end]
      _x = self
      start = end
      end += 24
      (_x.gesture_centroid.x, _x.gesture_centroid.y, _x.gesture_centroid.z,) = _get_struct_3d().unpack(str[start:end])
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
      buff.write(_get_struct_b().pack(self.id))
      _x = self.gesture
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_3d().pack(_x.gesture_centroid.x, _x.gesture_centroid.y, _x.gesture_centroid.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.gesture_centroid is None:
        self.gesture_centroid = geometry_msgs.msg.Point()
      end = 0
      start = end
      end += 1
      (self.id,) = _get_struct_b().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.gesture = str[start:end].decode('utf-8')
      else:
        self.gesture = str[start:end]
      _x = self
      start = end
      end += 24
      (_x.gesture_centroid.x, _x.gesture_centroid.y, _x.gesture_centroid.z,) = _get_struct_3d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_b = None
def _get_struct_b():
    global _struct_b
    if _struct_b is None:
        _struct_b = struct.Struct("<b")
    return _struct_b
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d
