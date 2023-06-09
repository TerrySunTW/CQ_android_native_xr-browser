// "WaveVR SDK
// © 2017 HTC Corporation. All Rights Reserved.
//
// Unless otherwise required by copyright law and practice,
// upon the execution of HTC SDK license agreement,
// HTC grants you access to and use of the WaveVR SDK(s).
// You shall fully comply with all of HTC’s SDK license agreement terms and
// conditions signed by you and all SDK and API requirements,
// specifications, and documentation provided by HTC to You."


#ifndef wvr_types_h_
#define wvr_types_h_

#include "wvr_stdinc.h"

#include "begin_code.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief The type of VR device
 *
 * Describes the role of VR devices
 */
typedef enum {
    WVR_DeviceType_Invalid                      = 0,    /**< The device is unknown or not existing. */
    WVR_DeviceType_HMD                          = 1,    /**< Head-Mounted Display. */
    WVR_DeviceType_Controller_Right             = 2,    /**< Right hand tracked controller. */
    WVR_DeviceType_Controller_Left              = 3,    /**< Left hand tracked controller. */
    WVR_DeviceType_Camera                       = 4,    /**< Camera device */
    WVR_DeviceType_EyeTracking                  = 5,    /**< Eye tracking. */
    WVR_DeviceType_HandGesture_Right            = 6,    /**< Right hand of gesture. */
    WVR_DeviceType_HandGesture_Left             = 7,    /**< Left hand gesture. */
    WVR_DeviceType_NaturalHand_Right            = 8,    /**< Right natural hand. */
    WVR_DeviceType_NaturalHand_Left             = 9,    /**< Left natural hand. */
    WVR_DeviceType_ElectronicHand_Right         = 10,   /**< Right electronic hand. */
    WVR_DeviceType_ElectronicHand_Left          = 11,   /**< Left electronic hand. */
} WVR_DeviceType;

/**
 * @brief The sides of target scene.
 *
 * Specify the side of eye for target scene.
 */
typedef enum {
    WVR_Eye_Left = 0,                                          /**< WVR_Eye_Left: Left eye id. */
    WVR_Eye_Right = 1,                                         /**< WVR_Eye_Right: Right eye id. */
    WVR_Eye_Both = 2,                                          /**< WVR_Eye_Both: Both Left and Right eye id. */
} WVR_Eye;

/**
 * @brief The input id of the device
 */
typedef enum {
    WVR_InputId_0     = 0,
    WVR_InputId_1     = 1,
    WVR_InputId_2     = 2,
    WVR_InputId_3     = 3,
    WVR_InputId_4     = 4,
    WVR_InputId_5     = 5,
    WVR_InputId_6     = 6,
    WVR_InputId_7     = 7,
    WVR_InputId_8     = 8,
    WVR_InputId_9     = 9,
    WVR_InputId_10    = 10,
    WVR_InputId_11    = 11,
    WVR_InputId_12    = 12,
    WVR_InputId_13    = 13,
    WVR_InputId_14    = 14,
    WVR_InputId_15    = 15,
    WVR_InputId_16    = 16,
    WVR_InputId_17    = 17,
    WVR_InputId_18    = 18,
    WVR_InputId_19    = 19,

    //alias group mapping
    WVR_InputId_Alias1_System          = WVR_InputId_0,  /**< System button. */
    WVR_InputId_Alias1_Menu            = WVR_InputId_1,  /**< Menu button. */
    WVR_InputId_Alias1_Grip            = WVR_InputId_2,  /**< Grip button. */
    WVR_InputId_Alias1_DPad_Left       = WVR_InputId_3,  /**< A physical DPad_Left button, or simulated by pressing the left part of the touchpad. */
    WVR_InputId_Alias1_DPad_Up         = WVR_InputId_4,  /**< A physical DPad_Up button, or simulated by pressing the top part of the touchpad. */
    WVR_InputId_Alias1_DPad_Right      = WVR_InputId_5,  /**< A physical DPad_Right button, or simulated by pressing the right part of the touchpad. */
    WVR_InputId_Alias1_DPad_Down       = WVR_InputId_6,  /**< A physical DPad_Down button, or simulated by pressing the bottom part of the touchpad. */
    WVR_InputId_Alias1_Volume_Up       = WVR_InputId_7,  /**< Volume_Up button. */
    WVR_InputId_Alias1_Volume_Down     = WVR_InputId_8,  /**< Volume_Down button. */
    WVR_InputId_Alias1_Bumper          = WVR_InputId_9,  /**< Bumper button. */
    WVR_InputId_Alias1_A               = WVR_InputId_10, /**< A button. */
    WVR_InputId_Alias1_B               = WVR_InputId_11, /**< B button. */
    WVR_InputId_Alias1_X               = WVR_InputId_12, /**< X button. */
    WVR_InputId_Alias1_Y               = WVR_InputId_13, /**< Y button. */
    WVR_InputId_Alias1_Back            = WVR_InputId_14, /**< Hmd Back button */
    WVR_InputId_Alias1_Enter           = WVR_InputId_15, /**< Hmd Enter button */
    WVR_InputId_Alias1_Touchpad        = WVR_InputId_16, /**< Touchpad input device. */
    WVR_InputId_Alias1_Trigger         = WVR_InputId_17, /**< Trigger input device. */
    WVR_InputId_Alias1_Thumbstick      = WVR_InputId_18, /**< Thumbstick input device. */
    WVR_InputId_Alias1_Parking         = WVR_InputId_19, /**< Parking input device. */

    WVR_InputId_Max   = 32,
} WVR_InputId;

/**
 * @brief The style of tracking origin
 *
 * Identifies which style of tracking origin the application wants to use
 * for the poses it is requesting
 */
typedef enum {
    WVR_PoseOriginModel_OriginOnHead                = 0, /**< The origin of 6 DoF pose is on head. */
    WVR_PoseOriginModel_OriginOnGround              = 1, /**< The origin of 6 DoF pose is on ground. */
    WVR_PoseOriginModel_OriginOnTrackingObserver    = 2, /**< The raw pose from tracking system. */
    WVR_PoseOriginModel_OriginOnHead_3DoF           = 3, /**< The origin of 3 DoF pose is on head. */
} WVR_PoseOriginModel;

/**
 * @brief The coordinate system of tracking data
 *
 * Identifies which coordinate system of tracking data the application wants to use
 * for the poses it is requesting
 */
typedef enum {
    WVR_CoordinateSystem_Local               = 0, /**< The tracking data is based on local coordinate system. */
    WVR_CoordinateSystem_Global              = 1, /**< The tracking data is based on global coordinate system. */
} WVR_CoordinateSystem;

/**
 * @brief The error status of the specified device from the device service.
 *
 * The device service uses bitmask to record the device error, because many errors might occur at the same time.
 * Each error status represents a hardware exception for the device.
 * The restore status means that the error status has been fixed.
 */
typedef enum : uint64_t {
    WVR_DeviceErrorStatus_None                       = 0,       /**< Status of the device service is normal. */
    WVR_DeviceErrorStatus_BatteryOverheat            = 1,       /**< Battery temperature is too hot. */
    WVR_DeviceErrorStatus_BatteryOverheatRestore     = 1 << 1,  /**< Battery temperature has cooled down. */
    WVR_DeviceErrorStatus_BatteryOvervoltage         = 1 << 2,  /**< Battery is overvoltage when charging. */
    WVR_DeviceErrorStatus_BatteryOvervoltageRestore  = 1 << 3,  /**< Overvoltage has been fixed. */
    WVR_DeviceErrorStatus_DeviceConnectFail          = 1 << 4,  /**< Failed to connect to the USB device. */
    WVR_DeviceErrorStatus_DeviceConnectRestore       = 1 << 5,  /**< Connection failure has been fixed. */
    WVR_DeviceErrorStatus_DeviceLostTracking         = 1 << 6,  /**< The device being tracked might be out of range. */
    WVR_DeviceErrorStatus_DeviceTrackingRestore      = 1 << 7,  /**< Lost tracking has been fixed. */
    WVR_DeviceErrorStatus_ChargeFail                 = 1 << 8,  /**< The consumed voltage is larger than the charging voltage when the device is charging. */
    WVR_DeviceErrorStatus_ChargeRestore              = 1 << 9,  /**< Charging failure has been fixed. */
} WVR_DeviceErrorStatus;

/**
 * @brief The interaction mode of the application.
 */
typedef enum {
    WVR_InteractionMode_SystemDefault   = 1,  /**< Reset @ref WVR_InteractionMode and @ref WVR_GazeTriggerType to the default system values. Refer to @ref WVR_SetInteractionMode. */
    WVR_InteractionMode_Gaze            = 2,  /**< Gaze mode only. */
    WVR_InteractionMode_Controller      = 3,  /**< The application uses the controller if a controller is connected; otherwise the application switches to gaze. */
    WVR_InteractionMode_Hand            = 4,  /**< Use hand model for interaction. */
} WVR_InteractionMode;

/**
 * @brief The gaze trigger type of the application.
 */
typedef enum {
    WVR_GazeTriggerType_Timeout          = 1,  /**< Use timeout to trigger gaze. */
    WVR_GazeTriggerType_Button           = 2,  /**< Use button to trigger gaze. */
    WVR_GazeTriggerType_TimeoutButton    = 3,  /**< Both timeout and button can trigger gaze. */
} WVR_GazeTriggerType;

/**
 * @brief event type
 */
typedef enum {
    /** common event region */
    WVR_EventType_Quit                               = 1000,    /**< Application Quit. */
    WVR_EventType_InteractionModeChanged             = 1001,    /**< @ref WVR_InteractionMode changed. Use @ref WVR_GetInteractionMode to get the interaction mode. */
    WVR_EventType_GazeTriggerTypeChanged             = 1002,    /**< @ref WVR_GazeTriggerType changed. Use @ref WVR_GetGazeTriggerType to get the gaze trigger type. */
    WVR_EventType_TrackingModeChanged                = 1003,    /**< Notification for tracking mode change(3 DoF/6 DoF). Use @ref WVR_GetDegreeOfFreedom to get the current tracking mode.*/
    WVR_EventType_RecommendedQuality_Lower           = 1004,    /**< Notification for recommended quality to be Lower from runtime. */
    WVR_EventType_RecommendedQuality_Higher          = 1005,    /**< Notification for recommended quality to be Higher from runtime. */
    WVR_EventType_HandGesture_Changed                = 1006,    /**< Notification for changed gesture. */
    WVR_EventType_HandGesture_Abnormal               = 1007,    /**< Notification for abnormal gesture. */
    WVR_EventType_HandTracking_Abnormal              = 1008,    /**< Notification for abnormal hand tracking. */
    WVR_EventType_ArenaChanged                       = 1009,    /**< Notification for arena have been changed. */
    WVR_EventType_RenderingToBePaused                = 1010,    /**< Notification for the rendering is going to be paused due to user take off HMD and display off. */
    WVR_EventType_RenderingToBeResumed               = 1011,    /**< Notification for the rendering is going to be resumed due to user put on HMD and display on. */

    /** Device events region */
    WVR_EventType_DeviceConnected                    = 2000,    /**< @ref WVR_DeviceType is connected. */
    WVR_EventType_DeviceDisconnected                 = 2001,    /**< @ref WVR_DeviceType is disconnected. */
    WVR_EventType_DeviceStatusUpdate                 = 2002,    /**< @ref WVR_DeviceType configuration has changed. */
    WVR_EventType_DeviceSuspend                      = 2003,    /**< (deprecated)*/
    WVR_EventType_DeviceResume                       = 2004,    /**< (deprecated)*/
    WVR_EventType_IpdChanged                         = 2005,    /**< The interpupillary distance has changed; Use @ref WVR_GetRenderProps to get the current IPD. */
    WVR_EventType_DeviceRoleChanged                  = 2006,    /**< @ref WVR_DeviceType controller roles have switched. */
    WVR_EventType_BatteryStatusUpdate                = 2007,    /**< The battery status of @ref WVR_DeviceType device has changed. Use @ref WVR_GetBatteryStatus to check the current battery status. */
    WVR_EventType_ChargeStatusUpdate                 = 2008,    /**< The charged status of @ref WVR_DeviceType device has changed. Use @ref WVR_GetChargeStatus to check the current battery charge status. */
    WVR_EventType_DeviceErrorStatusUpdate            = 2009,    /**< @ref WVR_DeviceType device error occurs. Use @ref WVR_GetDeviceErrorState to get the current error status from the device service. */
    WVR_EventType_BatteryTemperatureStatusUpdate     = 2010,    /**< The battery temperature status of @ref WVR_DeviceType device has changed. Use @ref WVR_GetBatteryTemperatureStatus to check the current battery temperature. */
    WVR_EventType_RecenterSuccess                    = 2011,    /**< Notification for successful recenter for the 6 DoF device*/
    WVR_EventType_RecenterFail                       = 2012,    /**< Notification for recenter failed for the 6 DoF device*/
    WVR_EventType_RecenterSuccess3DoF                = 2013,    /**< Notification for recenter successful for the 3 DoF device*/
    WVR_EventType_RecenterFail3DoF                   = 2014,    /**< Notification for recenter failed for the 3 DoF device*/
    WVR_EventType_ClearHmdTrackingMapDone            = 2015,    /**< Notification of the finish of clearing operation of HMD tracking map from device service.*/
    WVR_EventType_InputDevMappingChanged             = 2016,    /**< Notification for input device mapping table changed.*/
    WVR_EventType_BatteryPercentageUpdate            = 2017,    /**< The battery percentage of @ref WVR_DeviceType device has changed. Use @ref WVR_GetDeviceBatteryPercentage to check the current battery level. */
    WVR_EventType_DeviceInfoUpdate                   = 2018,    /**< The device information of @ref WVR_DeviceType device has changed. */
    WVR_EventType_PassthroughOverlayShownBySystem    = 2100,    /**< Notification for passthrough overlay is shown by the system.*/
    WVR_EventType_PassthroughOverlayHiddenBySystem   = 2101,    /**< Notification for passthrough overlay is hidden by the system. */
    WVR_EventType_ControllerPoseModeChanged          = 2102,
    WVR_EventType_ControllerPoseModeOffsetReady      = 2103,

    /** Input Event region */
    WVR_EventType_ButtonPressed                      = 3000,     /**< @ref WVR_InputId status changed to pressed. */
    WVR_EventType_ButtonUnpressed                    = 3001,     /**< @ref WVR_InputId status changed to not pressed */
    WVR_EventType_TouchTapped                        = 3002,     /**< @ref WVR_InputId status changed to touched. */
    WVR_EventType_TouchUntapped                      = 3003,     /**< @ref WVR_InputId status changed to untouched. */
    WVR_EventType_LeftToRightSwipe                   = 3004,     /**< Notification for swipe motion (left to right) on the touchpad */
    WVR_EventType_RightToLeftSwipe                   = 3005,     /**< Notification for swipe motion (right to left) on the touchpad */
    WVR_EventType_DownToUpSwipe                      = 3006,     /**< Notification for swipe motion (down to up) on the touchpad */
    WVR_EventType_UpToDownSwipe                      = 3007,     /**< Notification for swipe motion (up to down) on the touchpad */

    /** Tracker events region */
    WVR_EventType_TrackerConnected                   = 4000,    /**< @ref WVR_TrackerId is connected. */
    WVR_EventType_TrackerDisconnected                = 4001,    /**< @ref WVR_TrackerId is disconnected. */
    WVR_EventType_TrackerBatteryLevelUpdate          = 4002,    /**< The battery level of @ref WVR_TrackerId has changed. Use @ref WVR_GetTrackerBatteryLevel to check the current battery level. */

    /** Tracker input events region */
    WVR_EventType_TrackerButtonPressed               = 5000,     /**< @ref WVR_InputId status of @ref WVR_TrackerId changed to pressed. */
    WVR_EventType_TrackerButtonUnpressed             = 5001,     /**< @ref WVR_InputId status of @ref WVR_TrackerId changed to not pressed */
    WVR_EventType_TrackerTouchTapped                 = 5002,     /**< @ref WVR_InputId status of @ref WVR_TrackerId changed to touched. */
    WVR_EventType_TrackerTouchUntapped               = 5003,     /**< @ref WVR_InputId status of @ref WVR_TrackerId changed to untouched. */
} WVR_EventType;

/**
 * @brief The type of degree of freedom (DoF)
 */
typedef enum {
    WVR_NumDoF_3DoF = 0, /**< Position (x, y, z) on 3 coordinates, which contains (1) moving up and down, (2) moving left and right, (3) moving forward and backward. */
    WVR_NumDoF_6DoF = 1, /**< Position (x, y, z) on 3 coordinates and rotation (yaw, pitch, roll) on 3 coordinates. */
} WVR_NumDoF;


/**
 * @brief the returned result of a function call for providing the information of failure.
 */
typedef enum {
    WVR_Success                              = 0,    /**< The result of the function call was successful. */
    WVR_Error_SystemInvalid                  = 1,    /**< The initialization was not finished or the feature was not started yet. */
    WVR_Error_InvalidArgument                = 2,    /**< One of the arguments was not appropriate for the function call. */
    WVR_Error_OutOfMemory                    = 3,    /**< A memory allocation has failed. */
    WVR_Error_FeatureNotSupport              = 4,    /**< The feature was not supported; either lack of some services or service does not support this feature. */
    WVR_Error_RuntimeVersionNotSupport       = 5,    /**< The runtime version is too old to support the function call. */
    WVR_Error_CameraNotAvailable             = 6,    /**< Camera was unavailable, cannot query camera related information. */
    WVR_Error_CameraPermissionNotGranted     = 7,    /**< The Android camera permission was not granted yet. */
    WVR_Error_DeviceDisconnected             = 8,    /**< The device is disconnected */
    WVR_Error_TrackerDisconnected            = 9,    /**< The tracker is disconnected. */
    //----- CtrlerModel API Use.(Start at 100)
    WVR_Error_CtrlerModel_WrongDeviceType    = 100,  /**< Input wrong device type for asking controller model. */
    WVR_Error_CtrlerModel_DeviceDisconnected = 101,  /**< The controller device you want to get its model is disconnected. */
    WVR_Error_CtrlerModel_InvalidModel       = 102,  /**< We can't get model that can be use. */
    WVR_Error_CtrlerModel_Unknown            = 103,  /**< Unknown error. */
    WVR_Error_CtrlerModel_NoAnimationData    = 104,

    WVR_Error_InvalidRenderModel             = 110,

    WVR_Error_EyeTracking_NotInitial         = 200,  /**< The eye calibration procedure has not been initialized. */
    WVR_Error_EyeTracking_NotWorking         = 201,  /**< The operation of eye tracking is not working. */

    WVR_Error_HandTracking_FeatureNotRequested      = 300 /**< The AndroidManifest.xml of this VR App does not request hand tracking feature.*/
} WVR_Result;

/**
 * @brief Input type for the input id.
 */
typedef enum {
    WVR_InputType_Button = 1<<0,    /**< Button input type */
    WVR_InputType_Touch  = 1<<1,    /**< Touch input type */
    WVR_InputType_Analog = 1<<2,    /**< Analog input type */
} WVR_InputType;

/**
 * @brief Analog type
 */
typedef enum {
    WVR_AnalogType_None     = 0,
    WVR_AnalogType_2D       = 1,    /**< Provide analog data with x and y coordinate, @ref WVR_Axis value is -1 ~ 1*/
    WVR_AnalogType_1D       = 2,    /**< Provide analog data with x coordinate, @ref WVR_Axis value is 0 ~ 1*/
} WVR_AnalogType;

/**
 * @brief Analog data
 */
typedef struct WVR_Axis {
    float x;  /**< -1<=x<=1 for @ref WVR_AnalogType_2D; 0<=x<=1 for @ref WVR_AnalogType_1D. */
    float y;  /**< -1<=y<=1 for @ref WVR_AnalogType_2D; 0 for @ref WVR_AnalogType_1D. */
} WVR_Axis_t;

/**
 * @brief The tracker id.
 * @version API Level 8
 */
typedef enum {
    WVR_TrackerId_0     = 0,
    WVR_TrackerId_1     = 1,
    WVR_TrackerId_2     = 2,
    WVR_TrackerId_3     = 3,
} WVR_TrackerId;

/**
 * @brief The basic matrix (4x4 floats) struct to be used in pose
 */
typedef struct WVR_Matrix4f {
    float m[4][4]; /**< Matrix form (4X4) to represent rotation and position of pose data. */
} WVR_Matrix4f_t;

/**
 * @brief The basic vector (3 floats) struct to be used in pose
 */
typedef struct WVR_Vector3f {
    float v[3]; /**< Matrix form (3X1) to represent a set of data which contains 3 elements. */
} WVR_Vector3f_t;

/**
 * @brief The basic vector (2 floats) struct to be used in pose
 */
typedef struct WVR_Vector2f {
    float v[2]; /**< Matrix form (2X1) to represent a set of data which contains 2 elements. */
} WVR_Vector2f_t;

/**
 * @brief The basic quaternion (4 floats) struct to be used in pose
 */
typedef struct WVR_Quatf {
    float w, x, y, z; /**< Quaternion form to represent rotation of pose. */
} WVR_Quatf_t;

/**
 * @brief Describes a single pose in quaternion form for a tracked object
 */
typedef struct WVR_Pose {
    WVR_Vector3f_t position; /**< Position (x, y, z) part of the Pose (refer to @ref WVR_Vector3f). */
    WVR_Quatf_t rotation;    /**< Rotation (quaternion form: w, x, y, z) part of the Pose (refer to @ref WVR_Quatf). */
} WVR_Pose_t;

/**
 * @brief Describes a single pose in the rotation matrix form for a tracked object
 */
typedef struct WVR_PoseState {
    bool isValidPose;                   /**< The label of valid(true) or invalid(false) pose. */
    WVR_Matrix4f_t poseMatrix;          /**< The pose data (rotation, position) in matrix form (refer to @ref WVR_Matrix4f). */
    WVR_Vector3f_t velocity;            /**< The velocity of the pose  (refer to @ref WVR_Vector3f). */
    WVR_Vector3f_t angularVelocity;     /**< The angular velocity of the pose. */
    bool is6DoFPose;                    /**< The label of 6 DoF(true) or 3 DoF(false) pose. */
    int64_t timestamp;                  /**< Absolute time (in nanosecond) of the pose. */
    WVR_Vector3f_t acceleration;        /**< The acceleration of the pose. */
    WVR_Vector3f_t angularAcceleration; /**< The angular acceleration of the pose. */
    float predictedMilliSec;            /**< Number of milliseconds from now to predict poses. */
    WVR_PoseOriginModel originModel;    /**< The origin model of the pose. */
    WVR_Pose_t rawPose;                 /**< The raw data of the pose from the device. */
} WVR_PoseState_t;

/**
 * @brief Aggregate the device type identity and device tracking pose.
 */
typedef struct WVR_DevicePosePair {
    WVR_DeviceType type;        /**< VR device type. */
    WVR_PoseState_t pose;       /**< Pose information of the tracked VR device (refer to @ref WVR_PoseState). */
} WVR_DevicePosePair_t;

#ifdef __cplusplus
} /* extern "C" */
#endif
#include "close_code.h"

#endif /* wvr_types_h_ */


