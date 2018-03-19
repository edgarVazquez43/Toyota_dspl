; Auto-generated. Do not edit!


(cl:in-package vision_msgs-srv)


;//! \htmlinclude DetectObjects-request.msg.html

(cl:defclass <DetectObjects-request> (roslisp-msg-protocol:ros-message)
  ((saveFiles
    :reader saveFiles
    :initarg :saveFiles
    :type cl:boolean
    :initform cl:nil)
   (iterations
    :reader iterations
    :initarg :iterations
    :type cl:integer
    :initform 0))
)

(cl:defclass DetectObjects-request (<DetectObjects-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DetectObjects-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DetectObjects-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name vision_msgs-srv:<DetectObjects-request> is deprecated: use vision_msgs-srv:DetectObjects-request instead.")))

(cl:ensure-generic-function 'saveFiles-val :lambda-list '(m))
(cl:defmethod saveFiles-val ((m <DetectObjects-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader vision_msgs-srv:saveFiles-val is deprecated.  Use vision_msgs-srv:saveFiles instead.")
  (saveFiles m))

(cl:ensure-generic-function 'iterations-val :lambda-list '(m))
(cl:defmethod iterations-val ((m <DetectObjects-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader vision_msgs-srv:iterations-val is deprecated.  Use vision_msgs-srv:iterations instead.")
  (iterations m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DetectObjects-request>) ostream)
  "Serializes a message object of type '<DetectObjects-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'saveFiles) 1 0)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'iterations)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DetectObjects-request>) istream)
  "Deserializes a message object of type '<DetectObjects-request>"
    (cl:setf (cl:slot-value msg 'saveFiles) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'iterations) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DetectObjects-request>)))
  "Returns string type for a service object of type '<DetectObjects-request>"
  "vision_msgs/DetectObjectsRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DetectObjects-request)))
  "Returns string type for a service object of type 'DetectObjects-request"
  "vision_msgs/DetectObjectsRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DetectObjects-request>)))
  "Returns md5sum for a message object of type '<DetectObjects-request>"
  "2dc444b2e7e6ee8b2bcc56948c3d9b77")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DetectObjects-request)))
  "Returns md5sum for a message object of type 'DetectObjects-request"
  "2dc444b2e7e6ee8b2bcc56948c3d9b77")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DetectObjects-request>)))
  "Returns full string definition for message of type '<DetectObjects-request>"
  (cl:format cl:nil "bool saveFiles~%int32 iterations~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DetectObjects-request)))
  "Returns full string definition for message of type 'DetectObjects-request"
  (cl:format cl:nil "bool saveFiles~%int32 iterations~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DetectObjects-request>))
  (cl:+ 0
     1
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DetectObjects-request>))
  "Converts a ROS message object to a list"
  (cl:list 'DetectObjects-request
    (cl:cons ':saveFiles (saveFiles msg))
    (cl:cons ':iterations (iterations msg))
))
;//! \htmlinclude DetectObjects-response.msg.html

(cl:defclass <DetectObjects-response> (roslisp-msg-protocol:ros-message)
  ((recog_objects
    :reader recog_objects
    :initarg :recog_objects
    :type (cl:vector vision_msgs-msg:VisionObject)
   :initform (cl:make-array 0 :element-type 'vision_msgs-msg:VisionObject :initial-element (cl:make-instance 'vision_msgs-msg:VisionObject)))
   (image
    :reader image
    :initarg :image
    :type sensor_msgs-msg:Image
    :initform (cl:make-instance 'sensor_msgs-msg:Image)))
)

(cl:defclass DetectObjects-response (<DetectObjects-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DetectObjects-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DetectObjects-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name vision_msgs-srv:<DetectObjects-response> is deprecated: use vision_msgs-srv:DetectObjects-response instead.")))

(cl:ensure-generic-function 'recog_objects-val :lambda-list '(m))
(cl:defmethod recog_objects-val ((m <DetectObjects-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader vision_msgs-srv:recog_objects-val is deprecated.  Use vision_msgs-srv:recog_objects instead.")
  (recog_objects m))

(cl:ensure-generic-function 'image-val :lambda-list '(m))
(cl:defmethod image-val ((m <DetectObjects-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader vision_msgs-srv:image-val is deprecated.  Use vision_msgs-srv:image instead.")
  (image m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DetectObjects-response>) ostream)
  "Serializes a message object of type '<DetectObjects-response>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'recog_objects))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'recog_objects))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'image) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DetectObjects-response>) istream)
  "Deserializes a message object of type '<DetectObjects-response>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'recog_objects) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'recog_objects)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'vision_msgs-msg:VisionObject))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'image) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DetectObjects-response>)))
  "Returns string type for a service object of type '<DetectObjects-response>"
  "vision_msgs/DetectObjectsResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DetectObjects-response)))
  "Returns string type for a service object of type 'DetectObjects-response"
  "vision_msgs/DetectObjectsResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DetectObjects-response>)))
  "Returns md5sum for a message object of type '<DetectObjects-response>"
  "2dc444b2e7e6ee8b2bcc56948c3d9b77")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DetectObjects-response)))
  "Returns md5sum for a message object of type 'DetectObjects-response"
  "2dc444b2e7e6ee8b2bcc56948c3d9b77")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DetectObjects-response>)))
  "Returns full string definition for message of type '<DetectObjects-response>"
  (cl:format cl:nil "vision_msgs/VisionObject[] recog_objects~%sensor_msgs/Image image~%~%~%================================================================================~%MSG: vision_msgs/VisionObject~%std_msgs/Header header~%string id                                    #name of identifying the object (milk, orange juice, etc)~%string category                              #object type (drink, snack, etc)~%float32 confidence                           #value in [0,1] indicating the probability of a correct identification~%sensor_msgs/Image image			     #image in rgb of object;~%sensor_msgs/PointCloud2 point_cloud          #Point cloud (probably, colored)~%geometry_msgs/Vector3 size                   #Size in meters: size in x, y and z~%geometry_msgs/Pose pose                      #Centroid and orientation~%geometry_msgs/Vector3[] bounding_box         #Two vectors indicating the bounding box~%geometry_msgs/Vector3[] bounding_polygon     #N vectors ~%int32 x					     #top left x~%int32 y					     #top left y~%int32 width				     #top widht~%int32 height				     #top height~%bool graspable                               #graspable by the arm~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: sensor_msgs/Image~%# This message contains an uncompressed image~%# (0, 0) is at top-left corner of image~%#~%~%Header header        # Header timestamp should be acquisition time of image~%                     # Header frame_id should be optical frame of camera~%                     # origin of frame should be optical center of cameara~%                     # +x should point to the right in the image~%                     # +y should point down in the image~%                     # +z should point into to plane of the image~%                     # If the frame_id here and the frame_id of the CameraInfo~%                     # message associated with the image conflict~%                     # the behavior is undefined~%~%uint32 height         # image height, that is, number of rows~%uint32 width          # image width, that is, number of columns~%~%# The legal values for encoding are in file src/image_encodings.cpp~%# If you want to standardize a new string format, join~%# ros-users@lists.sourceforge.net and send an email proposing a new encoding.~%~%string encoding       # Encoding of pixels -- channel meaning, ordering, size~%                      # taken from the list of strings in include/sensor_msgs/image_encodings.h~%~%uint8 is_bigendian    # is this data bigendian?~%uint32 step           # Full row length in bytes~%uint8[] data          # actual matrix data, size is (step * rows)~%~%================================================================================~%MSG: sensor_msgs/PointCloud2~%# This message holds a collection of N-dimensional points, which may~%# contain additional information such as normals, intensity, etc. The~%# point data is stored as a binary blob, its layout described by the~%# contents of the \"fields\" array.~%~%# The point cloud data may be organized 2d (image-like) or 1d~%# (unordered). Point clouds organized as 2d images may be produced by~%# camera depth sensors such as stereo or time-of-flight.~%~%# Time of sensor data acquisition, and the coordinate frame ID (for 3d~%# points).~%Header header~%~%# 2D structure of the point cloud. If the cloud is unordered, height is~%# 1 and width is the length of the point cloud.~%uint32 height~%uint32 width~%~%# Describes the channels and their layout in the binary data blob.~%PointField[] fields~%~%bool    is_bigendian # Is this data bigendian?~%uint32  point_step   # Length of a point in bytes~%uint32  row_step     # Length of a row in bytes~%uint8[] data         # Actual point data, size is (row_step*height)~%~%bool is_dense        # True if there are no invalid points~%~%================================================================================~%MSG: sensor_msgs/PointField~%# This message holds the description of one point entry in the~%# PointCloud2 message format.~%uint8 INT8    = 1~%uint8 UINT8   = 2~%uint8 INT16   = 3~%uint8 UINT16  = 4~%uint8 INT32   = 5~%uint8 UINT32  = 6~%uint8 FLOAT32 = 7~%uint8 FLOAT64 = 8~%~%string name      # Name of field~%uint32 offset    # Offset from start of point struct~%uint8  datatype  # Datatype enumeration, see above~%uint32 count     # How many elements in the field~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DetectObjects-response)))
  "Returns full string definition for message of type 'DetectObjects-response"
  (cl:format cl:nil "vision_msgs/VisionObject[] recog_objects~%sensor_msgs/Image image~%~%~%================================================================================~%MSG: vision_msgs/VisionObject~%std_msgs/Header header~%string id                                    #name of identifying the object (milk, orange juice, etc)~%string category                              #object type (drink, snack, etc)~%float32 confidence                           #value in [0,1] indicating the probability of a correct identification~%sensor_msgs/Image image			     #image in rgb of object;~%sensor_msgs/PointCloud2 point_cloud          #Point cloud (probably, colored)~%geometry_msgs/Vector3 size                   #Size in meters: size in x, y and z~%geometry_msgs/Pose pose                      #Centroid and orientation~%geometry_msgs/Vector3[] bounding_box         #Two vectors indicating the bounding box~%geometry_msgs/Vector3[] bounding_polygon     #N vectors ~%int32 x					     #top left x~%int32 y					     #top left y~%int32 width				     #top widht~%int32 height				     #top height~%bool graspable                               #graspable by the arm~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: sensor_msgs/Image~%# This message contains an uncompressed image~%# (0, 0) is at top-left corner of image~%#~%~%Header header        # Header timestamp should be acquisition time of image~%                     # Header frame_id should be optical frame of camera~%                     # origin of frame should be optical center of cameara~%                     # +x should point to the right in the image~%                     # +y should point down in the image~%                     # +z should point into to plane of the image~%                     # If the frame_id here and the frame_id of the CameraInfo~%                     # message associated with the image conflict~%                     # the behavior is undefined~%~%uint32 height         # image height, that is, number of rows~%uint32 width          # image width, that is, number of columns~%~%# The legal values for encoding are in file src/image_encodings.cpp~%# If you want to standardize a new string format, join~%# ros-users@lists.sourceforge.net and send an email proposing a new encoding.~%~%string encoding       # Encoding of pixels -- channel meaning, ordering, size~%                      # taken from the list of strings in include/sensor_msgs/image_encodings.h~%~%uint8 is_bigendian    # is this data bigendian?~%uint32 step           # Full row length in bytes~%uint8[] data          # actual matrix data, size is (step * rows)~%~%================================================================================~%MSG: sensor_msgs/PointCloud2~%# This message holds a collection of N-dimensional points, which may~%# contain additional information such as normals, intensity, etc. The~%# point data is stored as a binary blob, its layout described by the~%# contents of the \"fields\" array.~%~%# The point cloud data may be organized 2d (image-like) or 1d~%# (unordered). Point clouds organized as 2d images may be produced by~%# camera depth sensors such as stereo or time-of-flight.~%~%# Time of sensor data acquisition, and the coordinate frame ID (for 3d~%# points).~%Header header~%~%# 2D structure of the point cloud. If the cloud is unordered, height is~%# 1 and width is the length of the point cloud.~%uint32 height~%uint32 width~%~%# Describes the channels and their layout in the binary data blob.~%PointField[] fields~%~%bool    is_bigendian # Is this data bigendian?~%uint32  point_step   # Length of a point in bytes~%uint32  row_step     # Length of a row in bytes~%uint8[] data         # Actual point data, size is (row_step*height)~%~%bool is_dense        # True if there are no invalid points~%~%================================================================================~%MSG: sensor_msgs/PointField~%# This message holds the description of one point entry in the~%# PointCloud2 message format.~%uint8 INT8    = 1~%uint8 UINT8   = 2~%uint8 INT16   = 3~%uint8 UINT16  = 4~%uint8 INT32   = 5~%uint8 UINT32  = 6~%uint8 FLOAT32 = 7~%uint8 FLOAT64 = 8~%~%string name      # Name of field~%uint32 offset    # Offset from start of point struct~%uint8  datatype  # Datatype enumeration, see above~%uint32 count     # How many elements in the field~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DetectObjects-response>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'recog_objects) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'image))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DetectObjects-response>))
  "Converts a ROS message object to a list"
  (cl:list 'DetectObjects-response
    (cl:cons ':recog_objects (recog_objects msg))
    (cl:cons ':image (image msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'DetectObjects)))
  'DetectObjects-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'DetectObjects)))
  'DetectObjects-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DetectObjects)))
  "Returns string type for a service object of type '<DetectObjects>"
  "vision_msgs/DetectObjects")