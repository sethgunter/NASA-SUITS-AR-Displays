﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Int64>
struct Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_t220D987859A5CBC4A4A36F8BF07927E3372E43A9;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose/GestureId,Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose>
struct Dictionary_2_tEBCABE2674EA27057D4D16636D62E52B701ED0B9;
// Windows.Foundation.IAsyncOperation`1<Windows.Perception.People.HandMeshObserver>
struct IAsyncOperation_1_t0874BF21C52B1A21763C1277695B2A724D9E4F56;
// Windows.Foundation.IAsyncOperation`1<System.Object>
struct IAsyncOperation_1_tE95B7CD98CE930F006BBD07D7BB5109224B1BFFC;
// System.Collections.Generic.IReadOnlyList`1<Windows.Graphics.Holographic.HolographicCameraPose>
struct IReadOnlyList_1_tA49AABD4EFD400EEEE676F5A9CA3DC8DF057FA7E;
// System.Collections.Generic.List`1<System.Globalization.CultureInfo>
struct List_1_tB93032867275F6C802C3659FC027FF6FB1372359;
// System.Threading.Tasks.Task`1<Windows.Perception.People.HandMeshObserver>
struct Task_1_t91456D786DCDB709E9CE4AD7D55867EAA4E9B8E6;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Windows.Perception.People.HandMeshVertex[]
struct HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputDataProviderConfiguration[]
struct MixedRealityInputDataProviderConfigurationU5BU5D_tACE18ABAB93C0C35F5703C34BFCEE34C58FE2107;
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[]
struct MixedRealityPoseU5BU5D_t5C57F164C0B0AB8BD85B6166C012C7B5189C0B89;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[]
struct TrackedHandJointU5BU5D_t9E59C254A54CAD7F8F4A765C13BA4E42787DAFD6;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.WSA.AppCallbackItem
struct AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C;
// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition
struct ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5;
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose
struct ArticulatedHandPose_tD6A7652461D7161AB3C133D7206630066D08C9DF;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_t5998404448AE5AF901F9E041357975E0D649A6FD;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct BaseCameraSettingsProvider_t0938643A4ADD8F7EA2269CFF7429343EFD13E110;
// Microsoft.MixedReality.Toolkit.Input.BaseInputSourceDefinition
struct BaseInputSourceDefinition_t36140FA79FA8E7F98B8767451A5A6F779BA9DE60;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tE425D8D64B2631D5C8C82A49805613264FA9D9A3;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings
struct BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.Input.HandMeshInfo
struct HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28;
// Windows.Perception.People.HandMeshObserver
struct HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273;
// Windows.Perception.People.HandMeshVertexState
struct HandMeshVertexState_t472D7CF8982D6D93200D405B7F990404C022A9F8;
// Windows.Perception.People.HandPose
struct HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE;
// Windows.Graphics.Holographic.HolographicCamera
struct HolographicCamera_t4122B595738F9F797D8FBBC3CF51C6410941509B;
// Windows.Graphics.Holographic.HolographicCameraPose
struct HolographicCameraPose_t652F9761A7F2DF4712360C52FC4BDB51BA96FD4E;
// Windows.Graphics.Holographic.HolographicDisplay
struct HolographicDisplay_t64D6F94B22A96A3AB13B7935EBDAE901CE418B6E;
// Windows.Graphics.Holographic.HolographicFrame
struct HolographicFrame_t16CC7D90BCAF0D8BAC1D7C941B18567F460C99EC;
// Windows.Graphics.Holographic.HolographicFramePrediction
struct HolographicFramePrediction_t971A2A1EBD8FF3A81ED5996ADBFADAF46EAAC804;
// Windows.Graphics.Holographic.HolographicViewConfiguration
struct HolographicViewConfiguration_tE179E9B0B22770D34F8757D4314359560DC2CBCB;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Windows.Graphics.Holographic.IHolographicDisplayStatics
struct IHolographicDisplayStatics_tC413B2D2DD674ECDAC96BE8058BB688DFE02EF36;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem
struct IMixedRealityCameraSystem_t0BBC2E24EC820E4678A3D2D44F91EFA482A2CB08;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_t69758F109F3FDF65F018C4100E749F79351BCE11;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t64F47F8276A5C458499BF997886819249AA1EFD0;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t30FEE3BCBA4B47D9BBED63BF481D811EC6A39AA1;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t279804348C19FFBAC1249ADF9359629F9AC1C873;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityTeleportPointer
struct IMixedRealityTeleportPointer_t47473BCF99340AE6AF86C114AC0249289D6EC21D;
// Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics
struct ISpatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836;
// Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics2
struct ISpatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider
struct IWindowsMixedRealityUtilitiesProvider_tB8E71F17F3DD5367F45DE7728874BEDB2120916D;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerMappingProfile
struct MixedRealityControllerMappingProfile_tA162449AD6794B68CC303CB68AC0EDE1B8BC72D8;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile
struct MixedRealityControllerVisualizationProfile_t422A4125E237779F487A8BD82D7670928B885105;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile
struct MixedRealityGesturesProfile_t344E8703F2DA838589B447BE14DC1C446D171395;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile
struct MixedRealityHandTrackingProfile_t28838B85DF712221FF796BFD4430C1C880A0A1C8;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile
struct MixedRealityInputActionRulesProfile_tF2708C51AAF3894A860028C79DB05A44D6EDD64F;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionsProfile
struct MixedRealityInputActionsProfile_tDA21846ABEF425362A21B447C04C8C199392AC82;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerProfile
struct MixedRealityPointerProfile_t51E556B24A06CDA2552A8B38F3874757C70128FE;
// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile
struct MixedRealitySpeechCommandsProfile_tD8FD268D341E7DD3B3858B34A2CB2D902AA35DED;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride
struct ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Windows.Perception.Spatial.SpatialCoordinateSystem
struct SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB;
// Windows.UI.Input.Spatial.SpatialInteractionManager
struct SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5;
// Windows.UI.Input.Spatial.SpatialInteractionSource
struct SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F;
// Windows.UI.Input.Spatial.SpatialInteractionSourceState
struct SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.IO.StreamWriter
struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t5A8091D125CA72F271FAB6EE68A869F3628DBED5;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition
struct WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile
struct WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider
struct WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D;
// Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder
struct WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater
struct WindowsMixedRealityReprojectionUpdater_tE7383297DACC1F627D8A9E069D322491647EC5E5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4
struct U3CResetViewMatricesOnFrameEndU3Ed__4_t606760AA02E5E7D22B10BF928642555E33EAEB71;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t5A6783DF38B3EA4588EF45A4D24CEB810CAD4501;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_tB553DBEC2E07BDD097E9BF81DCF48F2FAC0A942B;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities/<>c
struct U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArticulatedHandPose_tD6A7652461D7161AB3C133D7206630066D08C9DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_tA111E2393BEC7A3AF2703B80A556166363998BD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HolographicFrame_t16CC7D90BCAF0D8BAC1D7C941B18567F460C99EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityController_t69758F109F3FDF65F018C4100E749F79351BCE11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t30FEE3BCBA4B47D9BBED63BF481D811EC6A39AA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t31E4237CD71691F2A08976038920F5158F8ECE37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_tA49AABD4EFD400EEEE676F5A9CA3DC8DF057FA7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWindowsMixedRealityUtilitiesProvider_tB8E71F17F3DD5367F45DE7728874BEDB2120916D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_tEEDF7A044A9E8E252CF39E2F7C51AB77FC70367A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPoseU5BU5D_t5C57F164C0B0AB8BD85B6166C012C7B5189C0B89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parallel_tB59282E278156AA32B2BACBD33B31FD4C9922646_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CResetViewMatricesOnFrameEndU3Ed__4_t606760AA02E5E7D22B10BF928642555E33EAEB71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_t5A6783DF38B3EA4588EF45A4D24CEB810CAD4501_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass17_0_tB553DBEC2E07BDD097E9BF81DCF48F2FAC0A942B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral454DCA3FD02B698041CB0BC1D2E9DC932FDA7A7C;
IL2CPP_EXTERN_C String_t* _stringLiteral845601714FB132030B7585887918D078E9CE2267;
IL2CPP_EXTERN_C String_t* _stringLiteralA278AC2AB24AE8B6B788E58D8BB858243A88D659;
IL2CPP_EXTERN_C String_t* _stringLiteralCE40907DDA6EBABF97530E95F91B079379E37399;
IL2CPP_EXTERN_C String_t* _stringLiteralD51862061BEF6981AB4BE866F6A89BA4489E5DDC;
IL2CPP_EXTERN_C String_t* _stringLiteralD89EC3F9FF2985A58F63B8BD8CBC002A9CBBEA32;
IL2CPP_EXTERN_C String_t* _stringLiteralFAEE63AB5907DDB2FFDA6A074F7B5BF1561A4A42;
IL2CPP_EXTERN_C String_t* _stringLiteralFBE03E8FBA159B98574AEF8007CF292B389220DD;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m2FFBA70879C106A64CB60C455BC4CF9DF896E0D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E_TisU3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063_m7E4D46F7940DE0C3384AD76D38F33A8A28C9404D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E_TisU3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF_m5F7EAE6D1FEE7598D9CB7467B0091B621D7D8A47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063_mCCD72F15DECDEB21469BF69FC06719E173B99531_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF_mBC42BD766C5FAED2F68AD87C32A6EEEFD3653877_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentExtensions_EnsureComponent_TisProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD_m8D147525871AC82A4E7AEEA13450F13F2A028EAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentExtensions_EnsureComponent_TisWindowsMixedRealityReprojectionUpdater_tE7383297DACC1F627D8A9E069D322491647EC5E5_mC53936037538A3468AD309C2FFF6CF85DC2FD7F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m1C8741C73000BD525E6034625DD1ED12EB07EA10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m608A59322CEE9B305CE8472969742F446EA8318A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m59638659560BF6E7A32BE216A243011FC4E906F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m5D6FF641B7538EB84114C6AE307B3A91B49DBD1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CResetViewMatricesOnFrameEndU3Ed__4_System_Collections_IEnumerator_Reset_mBB8DCC2648DF6776131EDF9789AD1C7F67DF7C09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_SpatialInteractionManagerU3Eb__6_0_m13A3E241E9C67C587528E14437D487AFC0A6492D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CUpdateHandMeshU3Eb__0_mB4E5EC0EF59C2CFE7CA6DDF50C67B81807FF6A27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass17_0_U3CUpdateHandMeshU3Eb__0_m657AE6F991F841D51E6D8D244A098947BC81A913_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsMixedRealityArticulatedHandDefinition_U3CUpdateHandMeshU3Eb__12_1_m2B501C35D837C3563734724E3B28D547DA64EA7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsMixedRealityHandMeshProvider_U3CUpdateHandMeshU3Eb__17_1_mAFBF93D21D6F96A0B567019613FEAB7DB43A29DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_GetAwaiter_TisHandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273_m5EC4FF7F7B66CDE9B445927A5B7350344EAF4FBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TrackedHandJoint_t620F91E48DF5EDC1E7C044E57C73415B32654AC6_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IAsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper;
struct IHandMeshObserver_tA497D8D462D45DC786DB2F94B0417A99F847F9BC;
struct IHandMeshVertexState_t9D445DAD72C6F6223D65E571D67169F87E92A08D;
struct IHandPose_tD8185DC7675D58E1AFCA20EB4E8A2B2ECA4D6A07;
struct IHolographicCameraPose_t2ACFEC903F2CACA2C80EC2FCC785F981E7905C62;
struct IHolographicCamera_tD5B6C2BC18F2238B52EDA6E63332FBC5956A3FCF;
struct IHolographicDisplay_t059323C7BC7EBB61383A20C0CC66306C3BF67A3F;
struct IHolographicFramePrediction_t52D028622A1D649E22C485117EFBA3F77A2A57F2;
struct IHolographicFrame_tC5009F0FA6B896AC457F40B46434D6B152A017FE;
struct IHolographicViewConfiguration_t0B0C4B38D61BD9F3AFA10FA0131BED337C573B82;
struct ISpatialCoordinateSystem_t0B599CF4D7B3B14DA13D87C3A231F9981F3A491A;
struct ISpatialInteractionManager_tA0453F2820EB92D241A526B968100EC3B07BFE38;
struct ISpatialInteractionSourceState_t4A049FFC25A0197F3EF96AD7E1DC41AAECEC7F4B;
struct ISpatialInteractionSource_tC311B80858A5F034D4E8B4EEA2A2DCC57E2A4C7A;

struct HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct MixedRealityPoseU5BU5D_t5C57F164C0B0AB8BD85B6166C012C7B5189C0B89;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncOperation`1<Windows.Perception.People.HandMeshObserver>
struct NOVTABLE IAsyncOperation_1_t0874BF21C52B1A21763C1277695B2A724D9E4F56 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_mDA59D6F156299EB4DEAE15EF336162510C2C66D2(IAsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m87D10B3592C176980FB3334BA160D0A8F0D497AF(IAsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m9F8155B9E4016EE9EDA3702AC225E58827E50954(IHandMeshObserver_tA497D8D462D45DC786DB2F94B0417A99F847F9BC** comReturnValue) = 0;
};

// <Module>
struct U3CModuleU3E_t332FAD695D077CF9BEADA5F4FE45F578411FD35C 
{
public:

public:
};

// Windows.Graphics.Holographic.IHolographicDisplayStatics
struct NOVTABLE IHolographicDisplayStatics_tC413B2D2DD674ECDAC96BE8058BB688DFE02EF36 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHolographicDisplayStatics_GetDefault_m02993FA977AFB6916AACF27A70C159D94BBC4D13(IHolographicDisplay_t059323C7BC7EBB61383A20C0CC66306C3BF67A3F** comReturnValue) = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics
struct NOVTABLE ISpatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManagerStatics_GetForCurrentView_m3412258991A14AC020F84B6E14E93B0957E94B5B(ISpatialInteractionManager_tA0453F2820EB92D241A526B968100EC3B07BFE38** comReturnValue) = 0;
};

// System.Object

struct Il2CppArrayBounds;

// System.Array


// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose
struct ArticulatedHandPose_tD6A7652461D7161AB3C133D7206630066D08C9DF  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[] Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::localJointPoses
	MixedRealityPoseU5BU5D_t5C57F164C0B0AB8BD85B6166C012C7B5189C0B89* ___localJointPoses_2;

public:
	inline static int32_t get_offset_of_localJointPoses_2() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_tD6A7652461D7161AB3C133D7206630066D08C9DF, ___localJointPoses_2)); }
	inline MixedRealityPoseU5BU5D_t5C57F164C0B0AB8BD85B6166C012C7B5189C0B89* get_localJointPoses_2() const { return ___localJointPoses_2; }
	inline MixedRealityPoseU5BU5D_t5C57F164C0B0AB8BD85B6166C012C7B5189C0B89** get_address_of_localJointPoses_2() { return &___localJointPoses_2; }
	inline void set_localJointPoses_2(MixedRealityPoseU5BU5D_t5C57F164C0B0AB8BD85B6166C012C7B5189C0B89* value)
	{
		___localJointPoses_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localJointPoses_2), (void*)value);
	}
};

struct ArticulatedHandPose_tD6A7652461D7161AB3C133D7206630066D08C9DF_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[] Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::Joints
	TrackedHandJointU5BU5D_t9E59C254A54CAD7F8F4A765C13BA4E42787DAFD6* ___Joints_0;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::JointCount
	int32_t ___JointCount_1;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose/GestureId,Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose> Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::handPoses
	Dictionary_2_tEBCABE2674EA27057D4D16636D62E52B701ED0B9 * ___handPoses_3;

public:
	inline static int32_t get_offset_of_Joints_0() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_tD6A7652461D7161AB3C133D7206630066D08C9DF_StaticFields, ___Joints_0)); }
	inline TrackedHandJointU5BU5D_t9E59C254A54CAD7F8F4A765C13BA4E42787DAFD6* get_Joints_0() const { return ___Joints_0; }
	inline TrackedHandJointU5BU5D_t9E59C254A54CAD7F8F4A765C13BA4E42787DAFD6** get_address_of_Joints_0() { return &___Joints_0; }
	inline void set_Joints_0(TrackedHandJointU5BU5D_t9E59C254A54CAD7F8F4A765C13BA4E42787DAFD6* value)
	{
		___Joints_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Joints_0), (void*)value);
	}

	inline static int32_t get_offset_of_JointCount_1() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_tD6A7652461D7161AB3C133D7206630066D08C9DF_StaticFields, ___JointCount_1)); }
	inline int32_t get_JointCount_1() const { return ___JointCount_1; }
	inline int32_t* get_address_of_JointCount_1() { return &___JointCount_1; }
	inline void set_JointCount_1(int32_t value)
	{
		___JointCount_1 = value;
	}

	inline static int32_t get_offset_of_handPoses_3() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_tD6A7652461D7161AB3C133D7206630066D08C9DF_StaticFields, ___handPoses_3)); }
	inline Dictionary_2_tEBCABE2674EA27057D4D16636D62E52B701ED0B9 * get_handPoses_3() const { return ___handPoses_3; }
	inline Dictionary_2_tEBCABE2674EA27057D4D16636D62E52B701ED0B9 ** get_address_of_handPoses_3() { return &___handPoses_3; }
	inline void set_handPoses_3(Dictionary_2_tEBCABE2674EA27057D4D16636D62E52B701ED0B9 * value)
	{
		___handPoses_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handPoses_3), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsExtensions
struct WindowsExtensions_t5A75CF821E1CD84F88F7D42C2E245FD47B4AC26F  : public RuntimeObject
{
public:

public:
};


// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// System.__Il2CppComObject


// Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4
struct U3CResetViewMatricesOnFrameEndU3Ed__4_t606760AA02E5E7D22B10BF928642555E33EAEB71  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CResetViewMatricesOnFrameEndU3Ed__4_t606760AA02E5E7D22B10BF928642555E33EAEB71, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CResetViewMatricesOnFrameEndU3Ed__4_t606760AA02E5E7D22B10BF928642555E33EAEB71, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t5A6783DF38B3EA4588EF45A4D24CEB810CAD4501  : public RuntimeObject
{
public:
	// Windows.Perception.People.HandMeshVertex[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<>c__DisplayClass12_0::neutralVertexAndNormals
	HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* ___neutralVertexAndNormals_0;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<>c__DisplayClass12_0::neutralPoseVertices
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___neutralPoseVertices_1;

public:
	inline static int32_t get_offset_of_neutralVertexAndNormals_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t5A6783DF38B3EA4588EF45A4D24CEB810CAD4501, ___neutralVertexAndNormals_0)); }
	inline HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* get_neutralVertexAndNormals_0() const { return ___neutralVertexAndNormals_0; }
	inline HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1** get_address_of_neutralVertexAndNormals_0() { return &___neutralVertexAndNormals_0; }
	inline void set_neutralVertexAndNormals_0(HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* value)
	{
		___neutralVertexAndNormals_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___neutralVertexAndNormals_0), (void*)value);
	}

	inline static int32_t get_offset_of_neutralPoseVertices_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t5A6783DF38B3EA4588EF45A4D24CEB810CAD4501, ___neutralPoseVertices_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_neutralPoseVertices_1() const { return ___neutralPoseVertices_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_neutralPoseVertices_1() { return &___neutralPoseVertices_1; }
	inline void set_neutralPoseVertices_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___neutralPoseVertices_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___neutralPoseVertices_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_tB553DBEC2E07BDD097E9BF81DCF48F2FAC0A942B  : public RuntimeObject
{
public:
	// Windows.Perception.People.HandMeshVertex[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider/<>c__DisplayClass17_0::neutralVertexAndNormals
	HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* ___neutralVertexAndNormals_0;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider/<>c__DisplayClass17_0::neutralPoseVertices
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___neutralPoseVertices_1;

public:
	inline static int32_t get_offset_of_neutralVertexAndNormals_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_tB553DBEC2E07BDD097E9BF81DCF48F2FAC0A942B, ___neutralVertexAndNormals_0)); }
	inline HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* get_neutralVertexAndNormals_0() const { return ___neutralVertexAndNormals_0; }
	inline HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1** get_address_of_neutralVertexAndNormals_0() { return &___neutralVertexAndNormals_0; }
	inline void set_neutralVertexAndNormals_0(HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* value)
	{
		___neutralVertexAndNormals_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___neutralVertexAndNormals_0), (void*)value);
	}

	inline static int32_t get_offset_of_neutralPoseVertices_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_tB553DBEC2E07BDD097E9BF81DCF48F2FAC0A942B, ___neutralPoseVertices_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_neutralPoseVertices_1() const { return ___neutralPoseVertices_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_neutralPoseVertices_1() { return &___neutralPoseVertices_1; }
	inline void set_neutralPoseVertices_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___neutralPoseVertices_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___neutralPoseVertices_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities/<>c
struct U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities/<>c Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities/<>c::<>9
	U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418 * ___U3CU3E9_0;
	// UnityEngine.WSA.AppCallbackItem Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities/<>c::<>9__6_0
	AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C * ___U3CU3E9__6_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418_StaticFields, ___U3CU3E9__6_0_1)); }
	inline AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_0_1), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int64>
struct Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F 
{
public:
	// T System.Nullable`1::value
	int64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Perception.People.HandMeshObserver>
struct TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t91456D786DCDB709E9CE4AD7D55867EAA4E9B8E6 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E, ___m_task_0)); }
	inline Task_1_t91456D786DCDB709E9CE4AD7D55867EAA4E9B8E6 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t91456D786DCDB709E9CE4AD7D55867EAA4E9B8E6 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t91456D786DCDB709E9CE4AD7D55867EAA4E9B8E6 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// Windows.Perception.People.HandMeshObserver
struct HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273  : public Il2CppComObject
{
public:

public:
};


// Windows.Perception.People.HandMeshVertexState
struct HandMeshVertexState_t472D7CF8982D6D93200D405B7F990404C022A9F8  : public Il2CppComObject
{
public:

public:
};


// Windows.Perception.People.HandPose
struct HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE  : public Il2CppComObject
{
public:

public:
};


// Windows.Graphics.Holographic.HolographicCamera
struct HolographicCamera_t4122B595738F9F797D8FBBC3CF51C6410941509B  : public Il2CppComObject
{
public:

public:
};


// Windows.Graphics.Holographic.HolographicCameraPose
struct HolographicCameraPose_t652F9761A7F2DF4712360C52FC4BDB51BA96FD4E  : public Il2CppComObject
{
public:

public:
};


// Windows.Graphics.Holographic.HolographicDisplay
struct HolographicDisplay_t64D6F94B22A96A3AB13B7935EBDAE901CE418B6E  : public Il2CppComObject
{
public:

public:
};

struct HolographicDisplay_t64D6F94B22A96A3AB13B7935EBDAE901CE418B6E_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Graphics.Holographic.IHolographicDisplayStatics
	IHolographicDisplayStatics_tC413B2D2DD674ECDAC96BE8058BB688DFE02EF36* ____iholographicDisplayStatics_tC413B2D2DD674ECDAC96BE8058BB688DFE02EF36;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Graphics.Holographic.HolographicDisplay"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IHolographicDisplayStatics_tC413B2D2DD674ECDAC96BE8058BB688DFE02EF36* get_____iholographicDisplayStatics_tC413B2D2DD674ECDAC96BE8058BB688DFE02EF36()
	{
		IHolographicDisplayStatics_tC413B2D2DD674ECDAC96BE8058BB688DFE02EF36* returnValue = ____iholographicDisplayStatics_tC413B2D2DD674ECDAC96BE8058BB688DFE02EF36;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IHolographicDisplayStatics_tC413B2D2DD674ECDAC96BE8058BB688DFE02EF36::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iholographicDisplayStatics_tC413B2D2DD674ECDAC96BE8058BB688DFE02EF36), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iholographicDisplayStatics_tC413B2D2DD674ECDAC96BE8058BB688DFE02EF36;
			}
		}
		return returnValue;
	}
};


// Windows.Graphics.Holographic.HolographicFrame
struct HolographicFrame_t16CC7D90BCAF0D8BAC1D7C941B18567F460C99EC  : public Il2CppComObject
{
public:

public:
};


// Windows.Graphics.Holographic.HolographicFramePrediction
struct HolographicFramePrediction_t971A2A1EBD8FF3A81ED5996ADBFADAF46EAAC804  : public Il2CppComObject
{
public:

public:
};


// Windows.Graphics.Holographic.HolographicViewConfiguration
struct HolographicViewConfiguration_tE179E9B0B22770D34F8757D4314359560DC2CBCB  : public Il2CppComObject
{
public:

public:
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Numerics.Matrix4x4
struct Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 
{
public:
	// System.Single System.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single System.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single System.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single System.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single System.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single System.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single System.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single System.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single System.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single System.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single System.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single System.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single System.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single System.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single System.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single System.Numerics.Matrix4x4::M44
	float ___M44_15;

public:
	inline static int32_t get_offset_of_M11_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M11_0)); }
	inline float get_M11_0() const { return ___M11_0; }
	inline float* get_address_of_M11_0() { return &___M11_0; }
	inline void set_M11_0(float value)
	{
		___M11_0 = value;
	}

	inline static int32_t get_offset_of_M12_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M12_1)); }
	inline float get_M12_1() const { return ___M12_1; }
	inline float* get_address_of_M12_1() { return &___M12_1; }
	inline void set_M12_1(float value)
	{
		___M12_1 = value;
	}

	inline static int32_t get_offset_of_M13_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M13_2)); }
	inline float get_M13_2() const { return ___M13_2; }
	inline float* get_address_of_M13_2() { return &___M13_2; }
	inline void set_M13_2(float value)
	{
		___M13_2 = value;
	}

	inline static int32_t get_offset_of_M14_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M14_3)); }
	inline float get_M14_3() const { return ___M14_3; }
	inline float* get_address_of_M14_3() { return &___M14_3; }
	inline void set_M14_3(float value)
	{
		___M14_3 = value;
	}

	inline static int32_t get_offset_of_M21_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M21_4)); }
	inline float get_M21_4() const { return ___M21_4; }
	inline float* get_address_of_M21_4() { return &___M21_4; }
	inline void set_M21_4(float value)
	{
		___M21_4 = value;
	}

	inline static int32_t get_offset_of_M22_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M22_5)); }
	inline float get_M22_5() const { return ___M22_5; }
	inline float* get_address_of_M22_5() { return &___M22_5; }
	inline void set_M22_5(float value)
	{
		___M22_5 = value;
	}

	inline static int32_t get_offset_of_M23_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M23_6)); }
	inline float get_M23_6() const { return ___M23_6; }
	inline float* get_address_of_M23_6() { return &___M23_6; }
	inline void set_M23_6(float value)
	{
		___M23_6 = value;
	}

	inline static int32_t get_offset_of_M24_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M24_7)); }
	inline float get_M24_7() const { return ___M24_7; }
	inline float* get_address_of_M24_7() { return &___M24_7; }
	inline void set_M24_7(float value)
	{
		___M24_7 = value;
	}

	inline static int32_t get_offset_of_M31_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M31_8)); }
	inline float get_M31_8() const { return ___M31_8; }
	inline float* get_address_of_M31_8() { return &___M31_8; }
	inline void set_M31_8(float value)
	{
		___M31_8 = value;
	}

	inline static int32_t get_offset_of_M32_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M32_9)); }
	inline float get_M32_9() const { return ___M32_9; }
	inline float* get_address_of_M32_9() { return &___M32_9; }
	inline void set_M32_9(float value)
	{
		___M32_9 = value;
	}

	inline static int32_t get_offset_of_M33_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M33_10)); }
	inline float get_M33_10() const { return ___M33_10; }
	inline float* get_address_of_M33_10() { return &___M33_10; }
	inline void set_M33_10(float value)
	{
		___M33_10 = value;
	}

	inline static int32_t get_offset_of_M34_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M34_11)); }
	inline float get_M34_11() const { return ___M34_11; }
	inline float* get_address_of_M34_11() { return &___M34_11; }
	inline void set_M34_11(float value)
	{
		___M34_11 = value;
	}

	inline static int32_t get_offset_of_M41_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M41_12)); }
	inline float get_M41_12() const { return ___M41_12; }
	inline float* get_address_of_M41_12() { return &___M41_12; }
	inline void set_M41_12(float value)
	{
		___M41_12 = value;
	}

	inline static int32_t get_offset_of_M42_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M42_13)); }
	inline float get_M42_13() const { return ___M42_13; }
	inline float* get_address_of_M42_13() { return &___M42_13; }
	inline void set_M42_13(float value)
	{
		___M42_13 = value;
	}

	inline static int32_t get_offset_of_M43_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M43_14)); }
	inline float get_M43_14() const { return ___M43_14; }
	inline float* get_address_of_M43_14() { return &___M43_14; }
	inline void set_M43_14(float value)
	{
		___M43_14 = value;
	}

	inline static int32_t get_offset_of_M44_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M44_15)); }
	inline float get_M44_15() const { return ___M44_15; }
	inline float* get_address_of_M44_15() { return &___M44_15; }
	inline void set_M44_15(float value)
	{
		___M44_15 = value;
	}
};

struct Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_StaticFields
{
public:
	// System.Numerics.Matrix4x4 System.Numerics.Matrix4x4::_identity
	Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  ____identity_16;

public:
	inline static int32_t get_offset_of__identity_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_StaticFields, ____identity_16)); }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  get__identity_16() const { return ____identity_16; }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * get_address_of__identity_16() { return &____identity_16; }
	inline void set__identity_16(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  value)
	{
		____identity_16 = value;
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// System.Numerics.Quaternion
struct Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C 
{
public:
	// System.Single System.Numerics.Quaternion::X
	float ___X_0;
	// System.Single System.Numerics.Quaternion::Y
	float ___Y_1;
	// System.Single System.Numerics.Quaternion::Z
	float ___Z_2;
	// System.Single System.Numerics.Quaternion::W
	float ___W_3;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}

	inline static int32_t get_offset_of_W_3() { return static_cast<int32_t>(offsetof(Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C, ___W_3)); }
	inline float get_W_3() const { return ___W_3; }
	inline float* get_address_of_W_3() { return &___W_3; }
	inline void set_W_3(float value)
	{
		___W_3 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// Windows.Perception.Spatial.SpatialCoordinateSystem
struct SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB  : public Il2CppComObject
{
public:

public:
};


// Windows.UI.Input.Spatial.SpatialInteractionSource
struct SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F  : public Il2CppComObject
{
public:

public:
};


// Windows.UI.Input.Spatial.SpatialInteractionSourceState
struct SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199  : public Il2CppComObject
{
public:

public:
};


// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// System.Numerics.Vector3
struct Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 
{
public:
	// System.Single System.Numerics.Vector3::X
	float ___X_0;
	// System.Single System.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single System.Numerics.Vector3::Z
	float ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// System.Nullable`1<System.Numerics.Matrix4x4>
struct Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 
{
public:
	// T System.Nullable`1::value
	Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8, ___value_0)); }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  get_value_0() const { return ___value_0; }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};

// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tE425D8D64B2631D5C8C82A49805613264FA9D9A3 * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isInitialized_4;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isEnabled_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isMarkedDestroyed_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tE425D8D64B2631D5C8C82A49805613264FA9D9A3 * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tE425D8D64B2631D5C8C82A49805613264FA9D9A3 ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tE425D8D64B2631D5C8C82A49805613264FA9D9A3 * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB, ___isInitialized_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_isEnabled_5() { return static_cast<int32_t>(offsetof(BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB, ___isEnabled_5)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isEnabled_5() const { return ___isEnabled_5; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isEnabled_5() { return &___isEnabled_5; }
	inline void set_isEnabled_5(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isEnabled_5 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_6() { return static_cast<int32_t>(offsetof(BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB, ___isMarkedDestroyed_6)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isMarkedDestroyed_6() const { return ___isMarkedDestroyed_6; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isMarkedDestroyed_6() { return &___isMarkedDestroyed_6; }
	inline void set_isMarkedDestroyed_6(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isMarkedDestroyed_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Microsoft.MixedReality.Toolkit.Input.HandMeshInfo
struct HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28  : public RuntimeObject
{
public:
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::vertices
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___vertices_0;
	// System.Int32[] Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::triangles
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___triangles_1;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::normals
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___normals_2;
	// UnityEngine.Vector2[] Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::uvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___uvs_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_4;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_5;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28, ___vertices_0)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_vertices_0() const { return ___vertices_0; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___vertices_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_0), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_1() { return static_cast<int32_t>(offsetof(HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28, ___triangles_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_triangles_1() const { return ___triangles_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_triangles_1() { return &___triangles_1; }
	inline void set_triangles_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___triangles_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_1), (void*)value);
	}

	inline static int32_t get_offset_of_normals_2() { return static_cast<int32_t>(offsetof(HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28, ___normals_2)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_normals_2() const { return ___normals_2; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_normals_2() { return &___normals_2; }
	inline void set_normals_2(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___normals_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normals_2), (void*)value);
	}

	inline static int32_t get_offset_of_uvs_3() { return static_cast<int32_t>(offsetof(HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28, ___uvs_3)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_uvs_3() const { return ___uvs_3; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_uvs_3() { return &___uvs_3; }
	inline void set_uvs_3(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___uvs_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uvs_3), (void*)value);
	}

	inline static int32_t get_offset_of_position_4() { return static_cast<int32_t>(offsetof(HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28, ___position_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_4() const { return ___position_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_4() { return &___position_4; }
	inline void set_position_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_4 = value;
	}

	inline static int32_t get_offset_of_rotation_5() { return static_cast<int32_t>(offsetof(HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28, ___rotation_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_5() const { return ___rotation_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_5() { return &___rotation_5; }
	inline void set_rotation_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_5 = value;
	}
};


// Windows.Perception.People.HandMeshVertex
struct HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784 
{
public:
	// System.Numerics.Vector3 Windows.Perception.People.HandMeshVertex::Position
	Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  ___Position_0;
	// System.Numerics.Vector3 Windows.Perception.People.HandMeshVertex::Normal
	Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  ___Normal_1;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784, ___Position_0)); }
	inline Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  get_Position_0() const { return ___Position_0; }
	inline Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Normal_1() { return static_cast<int32_t>(offsetof(HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784, ___Normal_1)); }
	inline Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  get_Normal_1() const { return ___Normal_1; }
	inline Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 * get_address_of_Normal_1() { return &___Normal_1; }
	inline void set_Normal_1(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  value)
	{
		___Normal_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct Handedness_t144F166D3615E0DB2843B937FF620ED9F92680BD 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t144F166D3615E0DB2843B937FF620ED9F92680BD, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod
struct HolographicDepthReprojectionMethod_t4DF12727DF7A24DBB9886301C7F8873C70F8FA31 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HolographicDepthReprojectionMethod_t4DF12727DF7A24DBB9886301C7F8873C70F8FA31, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Graphics.Holographic.HolographicStereoTransform
struct HolographicStereoTransform_t0AE6816B48D0C9E474DBB5F3C05F54323DBE287A 
{
public:
	// System.Numerics.Matrix4x4 Windows.Graphics.Holographic.HolographicStereoTransform::Left
	Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  ___Left_0;
	// System.Numerics.Matrix4x4 Windows.Graphics.Holographic.HolographicStereoTransform::Right
	Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  ___Right_1;

public:
	inline static int32_t get_offset_of_Left_0() { return static_cast<int32_t>(offsetof(HolographicStereoTransform_t0AE6816B48D0C9E474DBB5F3C05F54323DBE287A, ___Left_0)); }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  get_Left_0() const { return ___Left_0; }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * get_address_of_Left_0() { return &___Left_0; }
	inline void set_Left_0(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  value)
	{
		___Left_0 = value;
	}

	inline static int32_t get_offset_of_Right_1() { return static_cast<int32_t>(offsetof(HolographicStereoTransform_t0AE6816B48D0C9E474DBB5F3C05F54323DBE287A, ___Right_1)); }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  get_Right_1() const { return ___Right_1; }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * get_address_of_Right_1() { return &___Right_1; }
	inline void set_Right_1(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  value)
	{
		___Right_1 = value;
	}
};


// Windows.Graphics.Holographic.HolographicViewConfigurationKind
struct HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F 
{
public:
	// System.Int32 Windows.Graphics.Holographic.HolographicViewConfigurationKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HolographicViewConfigurationKind_t38A8D575C34B6BC00A0ECBA57EB1A4753456310F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.LowLevel.MarkerFlags
struct MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8 
{
public:
	// System.UInt16 Unity.Profiling.LowLevel.MarkerFlags::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct MixedRealityPose_t7089584858BB76148AA1F83EB73B973E93554669 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_t7089584858BB76148AA1F83EB73B973E93554669, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_t7089584858BB76148AA1F83EB73B973E93554669, ___rotation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_t7089584858BB76148AA1F83EB73B973E93554669_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_t7089584858BB76148AA1F83EB73B973E93554669  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_t7089584858BB76148AA1F83EB73B973E93554669_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_t7089584858BB76148AA1F83EB73B973E93554669  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_t7089584858BB76148AA1F83EB73B973E93554669 * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_t7089584858BB76148AA1F83EB73B973E93554669  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.Threading.Tasks.ParallelLoopResult
struct ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3 
{
public:
	// System.Boolean System.Threading.Tasks.ParallelLoopResult::m_completed
	bool ___m_completed_0;
	// System.Nullable`1<System.Int64> System.Threading.Tasks.ParallelLoopResult::m_lowestBreakIteration
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___m_lowestBreakIteration_1;

public:
	inline static int32_t get_offset_of_m_completed_0() { return static_cast<int32_t>(offsetof(ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3, ___m_completed_0)); }
	inline bool get_m_completed_0() const { return ___m_completed_0; }
	inline bool* get_address_of_m_completed_0() { return &___m_completed_0; }
	inline void set_m_completed_0(bool value)
	{
		___m_completed_0 = value;
	}

	inline static int32_t get_offset_of_m_lowestBreakIteration_1() { return static_cast<int32_t>(offsetof(ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3, ___m_lowestBreakIteration_1)); }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  get_m_lowestBreakIteration_1() const { return ___m_lowestBreakIteration_1; }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * get_address_of_m_lowestBreakIteration_1() { return &___m_lowestBreakIteration_1; }
	inline void set_m_lowestBreakIteration_1(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  value)
	{
		___m_lowestBreakIteration_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.Tasks.ParallelLoopResult
struct ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3_marshaled_pinvoke
{
	int32_t ___m_completed_0;
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___m_lowestBreakIteration_1;
};
// Native definition for COM marshalling of System.Threading.Tasks.ParallelLoopResult
struct ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3_marshaled_com
{
	int32_t ___m_completed_0;
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___m_lowestBreakIteration_1;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Windows.UI.Input.Spatial.SpatialInteractionSourceHandedness
struct SpatialInteractionSourceHandedness_tC2409F24AA1DC3E3915DE8AA3AF09913C01FCE9B 
{
public:
	// System.Int32 Windows.UI.Input.Spatial.SpatialInteractionSourceHandedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialInteractionSourceHandedness_tC2409F24AA1DC3E3915DE8AA3AF09913C01FCE9B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.UI.Input.Spatial.SpatialInteractionSourceKind
struct SpatialInteractionSourceKind_t812D8C730AA19BAA0BDA6CA4DA60B61AF7E88CF7 
{
public:
	// System.Int32 Windows.UI.Input.Spatial.SpatialInteractionSourceKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialInteractionSourceKind_t812D8C730AA19BAA0BDA6CA4DA60B61AF7E88CF7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StreamWriter
struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:
	// System.IO.Stream System.IO.StreamWriter::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_12;
	// System.Text.Encoding System.IO.StreamWriter::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_13;
	// System.Text.Encoder System.IO.StreamWriter::encoder
	Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * ___encoder_14;
	// System.Byte[] System.IO.StreamWriter::byteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteBuffer_15;
	// System.Char[] System.IO.StreamWriter::charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___charBuffer_16;
	// System.Int32 System.IO.StreamWriter::charPos
	int32_t ___charPos_17;
	// System.Int32 System.IO.StreamWriter::charLen
	int32_t ___charLen_18;
	// System.Boolean System.IO.StreamWriter::autoFlush
	bool ___autoFlush_19;
	// System.Boolean System.IO.StreamWriter::haveWrittenPreamble
	bool ___haveWrittenPreamble_20;
	// System.Boolean System.IO.StreamWriter::closable
	bool ___closable_21;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_asyncWriteTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____asyncWriteTask_22;

public:
	inline static int32_t get_offset_of_stream_12() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___stream_12)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_12() const { return ___stream_12; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_12() { return &___stream_12; }
	inline void set_stream_12(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_12), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_13() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___encoding_13)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_13() const { return ___encoding_13; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_13() { return &___encoding_13; }
	inline void set_encoding_13(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_13), (void*)value);
	}

	inline static int32_t get_offset_of_encoder_14() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___encoder_14)); }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * get_encoder_14() const { return ___encoder_14; }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A ** get_address_of_encoder_14() { return &___encoder_14; }
	inline void set_encoder_14(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * value)
	{
		___encoder_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_14), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_15() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___byteBuffer_15)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteBuffer_15() const { return ___byteBuffer_15; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteBuffer_15() { return &___byteBuffer_15; }
	inline void set_byteBuffer_15(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteBuffer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_15), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_16() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charBuffer_16)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_charBuffer_16() const { return ___charBuffer_16; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_charBuffer_16() { return &___charBuffer_16; }
	inline void set_charBuffer_16(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___charBuffer_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_16), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_17() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charPos_17)); }
	inline int32_t get_charPos_17() const { return ___charPos_17; }
	inline int32_t* get_address_of_charPos_17() { return &___charPos_17; }
	inline void set_charPos_17(int32_t value)
	{
		___charPos_17 = value;
	}

	inline static int32_t get_offset_of_charLen_18() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charLen_18)); }
	inline int32_t get_charLen_18() const { return ___charLen_18; }
	inline int32_t* get_address_of_charLen_18() { return &___charLen_18; }
	inline void set_charLen_18(int32_t value)
	{
		___charLen_18 = value;
	}

	inline static int32_t get_offset_of_autoFlush_19() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___autoFlush_19)); }
	inline bool get_autoFlush_19() const { return ___autoFlush_19; }
	inline bool* get_address_of_autoFlush_19() { return &___autoFlush_19; }
	inline void set_autoFlush_19(bool value)
	{
		___autoFlush_19 = value;
	}

	inline static int32_t get_offset_of_haveWrittenPreamble_20() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___haveWrittenPreamble_20)); }
	inline bool get_haveWrittenPreamble_20() const { return ___haveWrittenPreamble_20; }
	inline bool* get_address_of_haveWrittenPreamble_20() { return &___haveWrittenPreamble_20; }
	inline void set_haveWrittenPreamble_20(bool value)
	{
		___haveWrittenPreamble_20 = value;
	}

	inline static int32_t get_offset_of_closable_21() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___closable_21)); }
	inline bool get_closable_21() const { return ___closable_21; }
	inline bool* get_address_of_closable_21() { return &___closable_21; }
	inline void set_closable_21(bool value)
	{
		___closable_21 = value;
	}

	inline static int32_t get_offset_of__asyncWriteTask_22() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ____asyncWriteTask_22)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get__asyncWriteTask_22() const { return ____asyncWriteTask_22; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of__asyncWriteTask_22() { return &____asyncWriteTask_22; }
	inline void set__asyncWriteTask_22(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		____asyncWriteTask_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncWriteTask_22), (void*)value);
	}
};

struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * ___Null_11;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_UTF8NoBOM
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ____UTF8NoBOM_23;

public:
	inline static int32_t get_offset_of_Null_11() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields, ___Null_11)); }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * get_Null_11() const { return ___Null_11; }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 ** get_address_of_Null_11() { return &___Null_11; }
	inline void set_Null_11(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * value)
	{
		___Null_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_11), (void*)value);
	}

	inline static int32_t get_offset_of__UTF8NoBOM_23() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields, ____UTF8NoBOM_23)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get__UTF8NoBOM_23() const { return ____UTF8NoBOM_23; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of__UTF8NoBOM_23() { return &____UTF8NoBOM_23; }
	inline void set__UTF8NoBOM_23(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		____UTF8NoBOM_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____UTF8NoBOM_23), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.SupportedApplicationModes
struct SupportedApplicationModes_t82FC507BDAC8CF8492EADA4B94AF728759466408 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.SupportedApplicationModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedApplicationModes_t82FC507BDAC8CF8492EADA4B94AF728759466408, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct TrackedHandJoint_t620F91E48DF5EDC1E7C044E57C73415B32654AC6 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_t620F91E48DF5EDC1E7C044E57C73415B32654AC6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities
struct WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9  : public RuntimeObject
{
public:

public:
};

struct WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::<UtilitiesProvider>k__BackingField
	RuntimeObject* ___U3CUtilitiesProviderU3Ek__BackingField_0;
	// Windows.UI.Input.Spatial.SpatialInteractionManager Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::spatialInteractionManager
	SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * ___spatialInteractionManager_1;
	// System.IntPtr Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::currentSpatialCoordinateSystemPtr
	intptr_t ___currentSpatialCoordinateSystemPtr_2;
	// Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::spatialCoordinateSystem
	SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * ___spatialCoordinateSystem_3;

public:
	inline static int32_t get_offset_of_U3CUtilitiesProviderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_StaticFields, ___U3CUtilitiesProviderU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CUtilitiesProviderU3Ek__BackingField_0() const { return ___U3CUtilitiesProviderU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CUtilitiesProviderU3Ek__BackingField_0() { return &___U3CUtilitiesProviderU3Ek__BackingField_0; }
	inline void set_U3CUtilitiesProviderU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CUtilitiesProviderU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUtilitiesProviderU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_spatialInteractionManager_1() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_StaticFields, ___spatialInteractionManager_1)); }
	inline SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * get_spatialInteractionManager_1() const { return ___spatialInteractionManager_1; }
	inline SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 ** get_address_of_spatialInteractionManager_1() { return &___spatialInteractionManager_1; }
	inline void set_spatialInteractionManager_1(SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * value)
	{
		___spatialInteractionManager_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialInteractionManager_1), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpatialCoordinateSystemPtr_2() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_StaticFields, ___currentSpatialCoordinateSystemPtr_2)); }
	inline intptr_t get_currentSpatialCoordinateSystemPtr_2() const { return ___currentSpatialCoordinateSystemPtr_2; }
	inline intptr_t* get_address_of_currentSpatialCoordinateSystemPtr_2() { return &___currentSpatialCoordinateSystemPtr_2; }
	inline void set_currentSpatialCoordinateSystemPtr_2(intptr_t value)
	{
		___currentSpatialCoordinateSystemPtr_2 = value;
	}

	inline static int32_t get_offset_of_spatialCoordinateSystem_3() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_StaticFields, ___spatialCoordinateSystem_3)); }
	inline SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * get_spatialCoordinateSystem_3() const { return ___spatialCoordinateSystem_3; }
	inline SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB ** get_address_of_spatialCoordinateSystem_3() { return &___spatialCoordinateSystem_3; }
	inline void set_spatialCoordinateSystem_3(SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * value)
	{
		___spatialCoordinateSystem_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialCoordinateSystem_3), (void*)value);
	}
};


// UnityEngine.Camera/StereoscopicEye
struct StereoscopicEye_t0193B972018E94F768D3B2E44CCE0E88EE2FFFD3 
{
public:
	// System.Int32 UnityEngine.Camera/StereoscopicEye::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StereoscopicEye_t0193B972018E94F768D3B2E44CCE0E88EE2FFFD3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem>
struct BaseDataProvider_1_t189BC99B0F4EF99BAC18E881E1B8E10F6A25DD53  : public BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_8;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t189BC99B0F4EF99BAC18E881E1B8E10F6A25DD53, ___U3CRegistrarU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_8() const { return ___U3CRegistrarU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_8() { return &___U3CRegistrarU3Ek__BackingField_8; }
	inline void set_U3CRegistrarU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t189BC99B0F4EF99BAC18E881E1B8E10F6A25DD53, ___U3CServiceU3Ek__BackingField_9)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_9() const { return ___U3CServiceU3Ek__BackingField_9; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_9() { return &___U3CServiceU3Ek__BackingField_9; }
	inline void set_U3CServiceU3Ek__BackingField_9(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_9), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputSourceDefinition
struct BaseInputSourceDefinition_t36140FA79FA8E7F98B8767451A5A6F779BA9DE60  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseInputSourceDefinition::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CHandednessU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseInputSourceDefinition_t36140FA79FA8E7F98B8767451A5A6F779BA9DE60, ___U3CHandednessU3Ek__BackingField_0)); }
	inline uint8_t get_U3CHandednessU3Ek__BackingField_0() const { return ___U3CHandednessU3Ek__BackingField_0; }
	inline uint8_t* get_address_of_U3CHandednessU3Ek__BackingField_0() { return &___U3CHandednessU3Ek__BackingField_0; }
	inline void set_U3CHandednessU3Ek__BackingField_0(uint8_t value)
	{
		___U3CHandednessU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics2
struct NOVTABLE ISpatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManagerStatics2_IsSourceKindSupported_mB329D0CA72CC404B2BCBAE8624A9CF69581DA243(int32_t ___kind0, bool* comReturnValue) = 0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider
struct WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::controller
	RuntimeObject* ___controller_0;
	// Windows.Perception.People.HandMeshObserver Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshObserver
	HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * ___handMeshObserver_1;
	// System.UInt16[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshTriangleIndices
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___handMeshTriangleIndices_2;
	// Windows.Perception.People.HandMeshVertex[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::vertexAndNormals
	HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* ___vertexAndNormals_3;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshVerticesUnity
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___handMeshVerticesUnity_4;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshNormalsUnity
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___handMeshNormalsUnity_5;
	// System.Int32[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshTriangleIndicesUnity
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___handMeshTriangleIndicesUnity_6;
	// UnityEngine.Vector2[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshUVsUnity
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___handMeshUVsUnity_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::hasRequestedHandMeshObserver
	bool ___hasRequestedHandMeshObserver_8;

public:
	inline static int32_t get_offset_of_controller_0() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D, ___controller_0)); }
	inline RuntimeObject* get_controller_0() const { return ___controller_0; }
	inline RuntimeObject** get_address_of_controller_0() { return &___controller_0; }
	inline void set_controller_0(RuntimeObject* value)
	{
		___controller_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_0), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshObserver_1() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D, ___handMeshObserver_1)); }
	inline HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * get_handMeshObserver_1() const { return ___handMeshObserver_1; }
	inline HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 ** get_address_of_handMeshObserver_1() { return &___handMeshObserver_1; }
	inline void set_handMeshObserver_1(HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * value)
	{
		___handMeshObserver_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshObserver_1), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshTriangleIndices_2() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D, ___handMeshTriangleIndices_2)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_handMeshTriangleIndices_2() const { return ___handMeshTriangleIndices_2; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_handMeshTriangleIndices_2() { return &___handMeshTriangleIndices_2; }
	inline void set_handMeshTriangleIndices_2(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___handMeshTriangleIndices_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshTriangleIndices_2), (void*)value);
	}

	inline static int32_t get_offset_of_vertexAndNormals_3() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D, ___vertexAndNormals_3)); }
	inline HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* get_vertexAndNormals_3() const { return ___vertexAndNormals_3; }
	inline HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1** get_address_of_vertexAndNormals_3() { return &___vertexAndNormals_3; }
	inline void set_vertexAndNormals_3(HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* value)
	{
		___vertexAndNormals_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertexAndNormals_3), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshVerticesUnity_4() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D, ___handMeshVerticesUnity_4)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_handMeshVerticesUnity_4() const { return ___handMeshVerticesUnity_4; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_handMeshVerticesUnity_4() { return &___handMeshVerticesUnity_4; }
	inline void set_handMeshVerticesUnity_4(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___handMeshVerticesUnity_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshVerticesUnity_4), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshNormalsUnity_5() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D, ___handMeshNormalsUnity_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_handMeshNormalsUnity_5() const { return ___handMeshNormalsUnity_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_handMeshNormalsUnity_5() { return &___handMeshNormalsUnity_5; }
	inline void set_handMeshNormalsUnity_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___handMeshNormalsUnity_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshNormalsUnity_5), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshTriangleIndicesUnity_6() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D, ___handMeshTriangleIndicesUnity_6)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_handMeshTriangleIndicesUnity_6() const { return ___handMeshTriangleIndicesUnity_6; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_handMeshTriangleIndicesUnity_6() { return &___handMeshTriangleIndicesUnity_6; }
	inline void set_handMeshTriangleIndicesUnity_6(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___handMeshTriangleIndicesUnity_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshTriangleIndicesUnity_6), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshUVsUnity_7() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D, ___handMeshUVsUnity_7)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_handMeshUVsUnity_7() const { return ___handMeshUVsUnity_7; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_handMeshUVsUnity_7() { return &___handMeshUVsUnity_7; }
	inline void set_handMeshUVsUnity_7(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___handMeshUVsUnity_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshUVsUnity_7), (void*)value);
	}

	inline static int32_t get_offset_of_hasRequestedHandMeshObserver_8() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D, ___hasRequestedHandMeshObserver_8)); }
	inline bool get_hasRequestedHandMeshObserver_8() const { return ___hasRequestedHandMeshObserver_8; }
	inline bool* get_address_of_hasRequestedHandMeshObserver_8() { return &___hasRequestedHandMeshObserver_8; }
	inline void set_hasRequestedHandMeshObserver_8(bool value)
	{
		___hasRequestedHandMeshObserver_8 = value;
	}
};

struct WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::UpdateHandMeshPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateHandMeshPerfMarker_9;

public:
	inline static int32_t get_offset_of_UpdateHandMeshPerfMarker_9() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D_StaticFields, ___UpdateHandMeshPerfMarker_9)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateHandMeshPerfMarker_9() const { return ___UpdateHandMeshPerfMarker_9; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateHandMeshPerfMarker_9() { return &___UpdateHandMeshPerfMarker_9; }
	inline void set_UpdateHandMeshPerfMarker_9(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateHandMeshPerfMarker_9 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__9
struct U3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__9::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Windows.UI.Input.Spatial.SpatialInteractionSourceState Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__9::sourceState
	SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * ___sourceState_2;
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__9::<>4__this
	WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13 * ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Perception.People.HandMeshObserver> Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__9::<>u__1
	TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sourceState_2() { return static_cast<int32_t>(offsetof(U3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF, ___sourceState_2)); }
	inline SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * get_sourceState_2() const { return ___sourceState_2; }
	inline SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 ** get_address_of_sourceState_2() { return &___sourceState_2; }
	inline void set_sourceState_2(SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * value)
	{
		___sourceState_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceState_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF, ___U3CU3E4__this_3)); }
	inline WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider/<SetHandMeshObserver>d__14
struct U3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider/<SetHandMeshObserver>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider/<SetHandMeshObserver>d__14::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Windows.UI.Input.Spatial.SpatialInteractionSourceState Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider/<SetHandMeshObserver>d__14::sourceState
	SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * ___sourceState_2;
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider/<SetHandMeshObserver>d__14::<>4__this
	WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D * ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Perception.People.HandMeshObserver> Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider/<SetHandMeshObserver>d__14::<>u__1
	TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sourceState_2() { return static_cast<int32_t>(offsetof(U3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063, ___sourceState_2)); }
	inline SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * get_sourceState_2() const { return ___sourceState_2; }
	inline SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 ** get_address_of_sourceState_2() { return &___sourceState_2; }
	inline void set_sourceState_2(SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * value)
	{
		___sourceState_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceState_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063, ___U3CU3E4__this_3)); }
	inline WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// System.Action`1<System.Int64>
struct Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.WSA.AppCallbackItem
struct AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition
struct ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5  : public BaseInputSourceDefinition_t36140FA79FA8E7F98B8767451A5A6F779BA9DE60
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_1;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::cursorBeamBackwardTolerance
	float ___cursorBeamBackwardTolerance_2;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::cursorBeamUpTolerance
	float ___cursorBeamUpTolerance_3;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::unityJointPoses
	Dictionary_2_t220D987859A5CBC4A4A36F8BF07927E3372E43A9 * ___unityJointPoses_4;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::currentIndexPose
	MixedRealityPose_t7089584858BB76148AA1F83EB73B973E93554669  ___currentIndexPose_5;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::minimumPinchDistance
	float ___minimumPinchDistance_6;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::maximumPinchDistance
	float ___maximumPinchDistance_7;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::enterPinchDistance
	float ___enterPinchDistance_8;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::exitPinchDistance
	float ___exitPinchDistance_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::isPinching
	bool ___isPinching_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::isIndexGrabbing
	bool ___isIndexGrabbing_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::isMiddleGrabbing
	bool ___isMiddleGrabbing_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::isThumbGrabbing
	bool ___isThumbGrabbing_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::previousReadyToTeleport
	bool ___previousReadyToTeleport_16;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityTeleportPointer Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::teleportPointer
	RuntimeObject* ___teleportPointer_17;

public:
	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5, ___U3CInputSourceU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_1() const { return ___U3CInputSourceU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_1() { return &___U3CInputSourceU3Ek__BackingField_1; }
	inline void set_U3CInputSourceU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_cursorBeamBackwardTolerance_2() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5, ___cursorBeamBackwardTolerance_2)); }
	inline float get_cursorBeamBackwardTolerance_2() const { return ___cursorBeamBackwardTolerance_2; }
	inline float* get_address_of_cursorBeamBackwardTolerance_2() { return &___cursorBeamBackwardTolerance_2; }
	inline void set_cursorBeamBackwardTolerance_2(float value)
	{
		___cursorBeamBackwardTolerance_2 = value;
	}

	inline static int32_t get_offset_of_cursorBeamUpTolerance_3() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5, ___cursorBeamUpTolerance_3)); }
	inline float get_cursorBeamUpTolerance_3() const { return ___cursorBeamUpTolerance_3; }
	inline float* get_address_of_cursorBeamUpTolerance_3() { return &___cursorBeamUpTolerance_3; }
	inline void set_cursorBeamUpTolerance_3(float value)
	{
		___cursorBeamUpTolerance_3 = value;
	}

	inline static int32_t get_offset_of_unityJointPoses_4() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5, ___unityJointPoses_4)); }
	inline Dictionary_2_t220D987859A5CBC4A4A36F8BF07927E3372E43A9 * get_unityJointPoses_4() const { return ___unityJointPoses_4; }
	inline Dictionary_2_t220D987859A5CBC4A4A36F8BF07927E3372E43A9 ** get_address_of_unityJointPoses_4() { return &___unityJointPoses_4; }
	inline void set_unityJointPoses_4(Dictionary_2_t220D987859A5CBC4A4A36F8BF07927E3372E43A9 * value)
	{
		___unityJointPoses_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityJointPoses_4), (void*)value);
	}

	inline static int32_t get_offset_of_currentIndexPose_5() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5, ___currentIndexPose_5)); }
	inline MixedRealityPose_t7089584858BB76148AA1F83EB73B973E93554669  get_currentIndexPose_5() const { return ___currentIndexPose_5; }
	inline MixedRealityPose_t7089584858BB76148AA1F83EB73B973E93554669 * get_address_of_currentIndexPose_5() { return &___currentIndexPose_5; }
	inline void set_currentIndexPose_5(MixedRealityPose_t7089584858BB76148AA1F83EB73B973E93554669  value)
	{
		___currentIndexPose_5 = value;
	}

	inline static int32_t get_offset_of_minimumPinchDistance_6() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5, ___minimumPinchDistance_6)); }
	inline float get_minimumPinchDistance_6() const { return ___minimumPinchDistance_6; }
	inline float* get_address_of_minimumPinchDistance_6() { return &___minimumPinchDistance_6; }
	inline void set_minimumPinchDistance_6(float value)
	{
		___minimumPinchDistance_6 = value;
	}

	inline static int32_t get_offset_of_maximumPinchDistance_7() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5, ___maximumPinchDistance_7)); }
	inline float get_maximumPinchDistance_7() const { return ___maximumPinchDistance_7; }
	inline float* get_address_of_maximumPinchDistance_7() { return &___maximumPinchDistance_7; }
	inline void set_maximumPinchDistance_7(float value)
	{
		___maximumPinchDistance_7 = value;
	}

	inline static int32_t get_offset_of_enterPinchDistance_8() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5, ___enterPinchDistance_8)); }
	inline float get_enterPinchDistance_8() const { return ___enterPinchDistance_8; }
	inline float* get_address_of_enterPinchDistance_8() { return &___enterPinchDistance_8; }
	inline void set_enterPinchDistance_8(float value)
	{
		___enterPinchDistance_8 = value;
	}

	inline static int32_t get_offset_of_exitPinchDistance_9() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5, ___exitPinchDistance_9)); }
	inline float get_exitPinchDistance_9() const { return ___exitPinchDistance_9; }
	inline float* get_address_of_exitPinchDistance_9() { return &___exitPinchDistance_9; }
	inline void set_exitPinchDistance_9(float value)
	{
		___exitPinchDistance_9 = value;
	}

	inline static int32_t get_offset_of_isPinching_10() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5, ___isPinching_10)); }
	inline bool get_isPinching_10() const { return ___isPinching_10; }
	inline bool* get_address_of_isPinching_10() { return &___isPinching_10; }
	inline void set_isPinching_10(bool value)
	{
		___isPinching_10 = value;
	}

	inline static int32_t get_offset_of_isIndexGrabbing_11() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5, ___isIndexGrabbing_11)); }
	inline bool get_isIndexGrabbing_11() const { return ___isIndexGrabbing_11; }
	inline bool* get_address_of_isIndexGrabbing_11() { return &___isIndexGrabbing_11; }
	inline void set_isIndexGrabbing_11(bool value)
	{
		___isIndexGrabbing_11 = value;
	}

	inline static int32_t get_offset_of_isMiddleGrabbing_12() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5, ___isMiddleGrabbing_12)); }
	inline bool get_isMiddleGrabbing_12() const { return ___isMiddleGrabbing_12; }
	inline bool* get_address_of_isMiddleGrabbing_12() { return &___isMiddleGrabbing_12; }
	inline void set_isMiddleGrabbing_12(bool value)
	{
		___isMiddleGrabbing_12 = value;
	}

	inline static int32_t get_offset_of_isThumbGrabbing_13() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5, ___isThumbGrabbing_13)); }
	inline bool get_isThumbGrabbing_13() const { return ___isThumbGrabbing_13; }
	inline bool* get_address_of_isThumbGrabbing_13() { return &___isThumbGrabbing_13; }
	inline void set_isThumbGrabbing_13(bool value)
	{
		___isThumbGrabbing_13 = value;
	}

	inline static int32_t get_offset_of_previousReadyToTeleport_16() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5, ___previousReadyToTeleport_16)); }
	inline bool get_previousReadyToTeleport_16() const { return ___previousReadyToTeleport_16; }
	inline bool* get_address_of_previousReadyToTeleport_16() { return &___previousReadyToTeleport_16; }
	inline void set_previousReadyToTeleport_16(bool value)
	{
		___previousReadyToTeleport_16 = value;
	}

	inline static int32_t get_offset_of_teleportPointer_17() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5, ___teleportPointer_17)); }
	inline RuntimeObject* get_teleportPointer_17() const { return ___teleportPointer_17; }
	inline RuntimeObject** get_address_of_teleportPointer_17() { return &___teleportPointer_17; }
	inline void set_teleportPointer_17(RuntimeObject* value)
	{
		___teleportPointer_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teleportPointer_17), (void*)value);
	}
};

struct ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateHandJointsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateHandJointsPerfMarker_14;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentIndexPosePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateCurrentIndexPosePerfMarker_15;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentTeleportPosePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateCurrentTeleportPosePerfMarker_18;

public:
	inline static int32_t get_offset_of_UpdateHandJointsPerfMarker_14() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5_StaticFields, ___UpdateHandJointsPerfMarker_14)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateHandJointsPerfMarker_14() const { return ___UpdateHandJointsPerfMarker_14; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateHandJointsPerfMarker_14() { return &___UpdateHandJointsPerfMarker_14; }
	inline void set_UpdateHandJointsPerfMarker_14(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateHandJointsPerfMarker_14 = value;
	}

	inline static int32_t get_offset_of_UpdateCurrentIndexPosePerfMarker_15() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5_StaticFields, ___UpdateCurrentIndexPosePerfMarker_15)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateCurrentIndexPosePerfMarker_15() const { return ___UpdateCurrentIndexPosePerfMarker_15; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateCurrentIndexPosePerfMarker_15() { return &___UpdateCurrentIndexPosePerfMarker_15; }
	inline void set_UpdateCurrentIndexPosePerfMarker_15(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateCurrentIndexPosePerfMarker_15 = value;
	}

	inline static int32_t get_offset_of_UpdateCurrentTeleportPosePerfMarker_18() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5_StaticFields, ___UpdateCurrentTeleportPosePerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateCurrentTeleportPosePerfMarker_18() const { return ___UpdateCurrentTeleportPosePerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateCurrentTeleportPosePerfMarker_18() { return &___UpdateCurrentTeleportPosePerfMarker_18; }
	inline void set_UpdateCurrentTeleportPosePerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateCurrentTeleportPosePerfMarker_18 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct BaseCameraSettingsProvider_t0938643A4ADD8F7EA2269CFF7429343EFD13E110  : public BaseDataProvider_1_t189BC99B0F4EF99BAC18E881E1B8E10F6A25DD53
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::<IsOpaque>k__BackingField
	bool ___U3CIsOpaqueU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CIsOpaqueU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseCameraSettingsProvider_t0938643A4ADD8F7EA2269CFF7429343EFD13E110, ___U3CIsOpaqueU3Ek__BackingField_10)); }
	inline bool get_U3CIsOpaqueU3Ek__BackingField_10() const { return ___U3CIsOpaqueU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CIsOpaqueU3Ek__BackingField_10() { return &___U3CIsOpaqueU3Ek__BackingField_10; }
	inline void set_U3CIsOpaqueU3Ek__BackingField_10(bool value)
	{
		___U3CIsOpaqueU3Ek__BackingField_10 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tE425D8D64B2631D5C8C82A49805613264FA9D9A3  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_tE425D8D64B2631D5C8C82A49805613264FA9D9A3, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Windows.UI.Input.Spatial.SpatialInteractionManager
struct SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5  : public Il2CppComObject
{
public:

public:
};

struct SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics2
	ISpatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E* ____ispatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics
	ISpatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836* ____ispatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Input.Spatial.SpatialInteractionManager"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E* get_____ispatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E()
	{
		ISpatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E* returnValue = ____ispatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ISpatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____ispatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836* get_____ispatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836()
	{
		ISpatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836* returnValue = ____ispatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ISpatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____ispatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836;
			}
		}
		return returnValue;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_t5998404448AE5AF901F9E041357975E0D649A6FD  : public BaseMixedRealityProfile_tE425D8D64B2631D5C8C82A49805613264FA9D9A3
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings
struct BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B  : public BaseCameraSettingsProvider_t0938643A4ADD8F7EA2269CFF7429343EFD13E110
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::reprojectionUpdater
	WindowsMixedRealityReprojectionUpdater_tE7383297DACC1F627D8A9E069D322491647EC5E5 * ___reprojectionUpdater_12;
	// Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::projectionOverride
	ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD * ___projectionOverride_13;

public:
	inline static int32_t get_offset_of_reprojectionUpdater_12() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B, ___reprojectionUpdater_12)); }
	inline WindowsMixedRealityReprojectionUpdater_tE7383297DACC1F627D8A9E069D322491647EC5E5 * get_reprojectionUpdater_12() const { return ___reprojectionUpdater_12; }
	inline WindowsMixedRealityReprojectionUpdater_tE7383297DACC1F627D8A9E069D322491647EC5E5 ** get_address_of_reprojectionUpdater_12() { return &___reprojectionUpdater_12; }
	inline void set_reprojectionUpdater_12(WindowsMixedRealityReprojectionUpdater_tE7383297DACC1F627D8A9E069D322491647EC5E5 * value)
	{
		___reprojectionUpdater_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reprojectionUpdater_12), (void*)value);
	}

	inline static int32_t get_offset_of_projectionOverride_13() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B, ___projectionOverride_13)); }
	inline ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD * get_projectionOverride_13() const { return ___projectionOverride_13; }
	inline ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD ** get_address_of_projectionOverride_13() { return &___projectionOverride_13; }
	inline void set_projectionOverride_13(ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD * value)
	{
		___projectionOverride_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectionOverride_13), (void*)value);
	}
};

struct BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::isTryGetViewConfigurationSupported
	bool ___isTryGetViewConfigurationSupported_11;

public:
	inline static int32_t get_offset_of_isTryGetViewConfigurationSupported_11() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B_StaticFields, ___isTryGetViewConfigurationSupported_11)); }
	inline bool get_isTryGetViewConfigurationSupported_11() const { return ___isTryGetViewConfigurationSupported_11; }
	inline bool* get_address_of_isTryGetViewConfigurationSupported_11() { return &___isTryGetViewConfigurationSupported_11; }
	inline void set_isTryGetViewConfigurationSupported_11(bool value)
	{
		___isTryGetViewConfigurationSupported_11 = value;
	}
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile
struct MixedRealityHandTrackingProfile_t28838B85DF712221FF796BFD4430C1C880A0A1C8  : public BaseMixedRealityProfile_tE425D8D64B2631D5C8C82A49805613264FA9D9A3
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::jointPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___jointPrefab_5;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::palmPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___palmPrefab_6;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::fingertipPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___fingertipPrefab_7;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::handMeshPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___handMeshPrefab_8;
	// Microsoft.MixedReality.Toolkit.Utilities.SupportedApplicationModes Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::handMeshVisualizationModes
	int32_t ___handMeshVisualizationModes_9;
	// Microsoft.MixedReality.Toolkit.Utilities.SupportedApplicationModes Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::handJointVisualizationModes
	int32_t ___handJointVisualizationModes_10;

public:
	inline static int32_t get_offset_of_jointPrefab_5() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_t28838B85DF712221FF796BFD4430C1C880A0A1C8, ___jointPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_jointPrefab_5() const { return ___jointPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_jointPrefab_5() { return &___jointPrefab_5; }
	inline void set_jointPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___jointPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jointPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_palmPrefab_6() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_t28838B85DF712221FF796BFD4430C1C880A0A1C8, ___palmPrefab_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_palmPrefab_6() const { return ___palmPrefab_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_palmPrefab_6() { return &___palmPrefab_6; }
	inline void set_palmPrefab_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___palmPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___palmPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_fingertipPrefab_7() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_t28838B85DF712221FF796BFD4430C1C880A0A1C8, ___fingertipPrefab_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_fingertipPrefab_7() const { return ___fingertipPrefab_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_fingertipPrefab_7() { return &___fingertipPrefab_7; }
	inline void set_fingertipPrefab_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___fingertipPrefab_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingertipPrefab_7), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshPrefab_8() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_t28838B85DF712221FF796BFD4430C1C880A0A1C8, ___handMeshPrefab_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_handMeshPrefab_8() const { return ___handMeshPrefab_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_handMeshPrefab_8() { return &___handMeshPrefab_8; }
	inline void set_handMeshPrefab_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___handMeshPrefab_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshPrefab_8), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshVisualizationModes_9() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_t28838B85DF712221FF796BFD4430C1C880A0A1C8, ___handMeshVisualizationModes_9)); }
	inline int32_t get_handMeshVisualizationModes_9() const { return ___handMeshVisualizationModes_9; }
	inline int32_t* get_address_of_handMeshVisualizationModes_9() { return &___handMeshVisualizationModes_9; }
	inline void set_handMeshVisualizationModes_9(int32_t value)
	{
		___handMeshVisualizationModes_9 = value;
	}

	inline static int32_t get_offset_of_handJointVisualizationModes_10() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_t28838B85DF712221FF796BFD4430C1C880A0A1C8, ___handJointVisualizationModes_10)); }
	inline int32_t get_handJointVisualizationModes_10() const { return ___handJointVisualizationModes_10; }
	inline int32_t* get_address_of_handJointVisualizationModes_10() { return &___handJointVisualizationModes_10; }
	inline void set_handJointVisualizationModes_10(int32_t value)
	{
		___handJointVisualizationModes_10 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C  : public BaseMixedRealityProfile_tE425D8D64B2631D5C8C82A49805613264FA9D9A3
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputDataProviderConfiguration[] Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::dataProviderConfigurations
	MixedRealityInputDataProviderConfigurationU5BU5D_tACE18ABAB93C0C35F5703C34BFCEE34C58FE2107* ___dataProviderConfigurations_5;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusProviderType
	SystemType_t5A8091D125CA72F271FAB6EE68A869F3628DBED5 * ___focusProviderType_6;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::raycastProviderType
	SystemType_t5A8091D125CA72F271FAB6EE68A869F3628DBED5 * ___raycastProviderType_7;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusQueryBufferSize
	int32_t ___focusQueryBufferSize_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusIndividualCompoundCollider
	bool ___focusIndividualCompoundCollider_9;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::inputActionsProfile
	MixedRealityInputActionsProfile_tDA21846ABEF425362A21B447C04C8C199392AC82 * ___inputActionsProfile_10;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::inputActionRulesProfile
	MixedRealityInputActionRulesProfile_tF2708C51AAF3894A860028C79DB05A44D6EDD64F * ___inputActionRulesProfile_11;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::pointerProfile
	MixedRealityPointerProfile_t51E556B24A06CDA2552A8B38F3874757C70128FE * ___pointerProfile_12;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::gesturesProfile
	MixedRealityGesturesProfile_t344E8703F2DA838589B447BE14DC1C446D171395 * ___gesturesProfile_13;
	// System.Collections.Generic.List`1<System.Globalization.CultureInfo> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::supportedVoiceCultures
	List_1_tB93032867275F6C802C3659FC027FF6FB1372359 * ___supportedVoiceCultures_14;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::speechCommandsProfile
	MixedRealitySpeechCommandsProfile_tD8FD268D341E7DD3B3858B34A2CB2D902AA35DED * ___speechCommandsProfile_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::enableControllerMapping
	bool ___enableControllerMapping_16;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerMappingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::controllerMappingProfile
	MixedRealityControllerMappingProfile_tA162449AD6794B68CC303CB68AC0EDE1B8BC72D8 * ___controllerMappingProfile_17;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::controllerVisualizationProfile
	MixedRealityControllerVisualizationProfile_t422A4125E237779F487A8BD82D7670928B885105 * ___controllerVisualizationProfile_18;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::handTrackingProfile
	MixedRealityHandTrackingProfile_t28838B85DF712221FF796BFD4430C1C880A0A1C8 * ___handTrackingProfile_19;

public:
	inline static int32_t get_offset_of_dataProviderConfigurations_5() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C, ___dataProviderConfigurations_5)); }
	inline MixedRealityInputDataProviderConfigurationU5BU5D_tACE18ABAB93C0C35F5703C34BFCEE34C58FE2107* get_dataProviderConfigurations_5() const { return ___dataProviderConfigurations_5; }
	inline MixedRealityInputDataProviderConfigurationU5BU5D_tACE18ABAB93C0C35F5703C34BFCEE34C58FE2107** get_address_of_dataProviderConfigurations_5() { return &___dataProviderConfigurations_5; }
	inline void set_dataProviderConfigurations_5(MixedRealityInputDataProviderConfigurationU5BU5D_tACE18ABAB93C0C35F5703C34BFCEE34C58FE2107* value)
	{
		___dataProviderConfigurations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataProviderConfigurations_5), (void*)value);
	}

	inline static int32_t get_offset_of_focusProviderType_6() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C, ___focusProviderType_6)); }
	inline SystemType_t5A8091D125CA72F271FAB6EE68A869F3628DBED5 * get_focusProviderType_6() const { return ___focusProviderType_6; }
	inline SystemType_t5A8091D125CA72F271FAB6EE68A869F3628DBED5 ** get_address_of_focusProviderType_6() { return &___focusProviderType_6; }
	inline void set_focusProviderType_6(SystemType_t5A8091D125CA72F271FAB6EE68A869F3628DBED5 * value)
	{
		___focusProviderType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___focusProviderType_6), (void*)value);
	}

	inline static int32_t get_offset_of_raycastProviderType_7() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C, ___raycastProviderType_7)); }
	inline SystemType_t5A8091D125CA72F271FAB6EE68A869F3628DBED5 * get_raycastProviderType_7() const { return ___raycastProviderType_7; }
	inline SystemType_t5A8091D125CA72F271FAB6EE68A869F3628DBED5 ** get_address_of_raycastProviderType_7() { return &___raycastProviderType_7; }
	inline void set_raycastProviderType_7(SystemType_t5A8091D125CA72F271FAB6EE68A869F3628DBED5 * value)
	{
		___raycastProviderType_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastProviderType_7), (void*)value);
	}

	inline static int32_t get_offset_of_focusQueryBufferSize_8() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C, ___focusQueryBufferSize_8)); }
	inline int32_t get_focusQueryBufferSize_8() const { return ___focusQueryBufferSize_8; }
	inline int32_t* get_address_of_focusQueryBufferSize_8() { return &___focusQueryBufferSize_8; }
	inline void set_focusQueryBufferSize_8(int32_t value)
	{
		___focusQueryBufferSize_8 = value;
	}

	inline static int32_t get_offset_of_focusIndividualCompoundCollider_9() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C, ___focusIndividualCompoundCollider_9)); }
	inline bool get_focusIndividualCompoundCollider_9() const { return ___focusIndividualCompoundCollider_9; }
	inline bool* get_address_of_focusIndividualCompoundCollider_9() { return &___focusIndividualCompoundCollider_9; }
	inline void set_focusIndividualCompoundCollider_9(bool value)
	{
		___focusIndividualCompoundCollider_9 = value;
	}

	inline static int32_t get_offset_of_inputActionsProfile_10() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C, ___inputActionsProfile_10)); }
	inline MixedRealityInputActionsProfile_tDA21846ABEF425362A21B447C04C8C199392AC82 * get_inputActionsProfile_10() const { return ___inputActionsProfile_10; }
	inline MixedRealityInputActionsProfile_tDA21846ABEF425362A21B447C04C8C199392AC82 ** get_address_of_inputActionsProfile_10() { return &___inputActionsProfile_10; }
	inline void set_inputActionsProfile_10(MixedRealityInputActionsProfile_tDA21846ABEF425362A21B447C04C8C199392AC82 * value)
	{
		___inputActionsProfile_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputActionsProfile_10), (void*)value);
	}

	inline static int32_t get_offset_of_inputActionRulesProfile_11() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C, ___inputActionRulesProfile_11)); }
	inline MixedRealityInputActionRulesProfile_tF2708C51AAF3894A860028C79DB05A44D6EDD64F * get_inputActionRulesProfile_11() const { return ___inputActionRulesProfile_11; }
	inline MixedRealityInputActionRulesProfile_tF2708C51AAF3894A860028C79DB05A44D6EDD64F ** get_address_of_inputActionRulesProfile_11() { return &___inputActionRulesProfile_11; }
	inline void set_inputActionRulesProfile_11(MixedRealityInputActionRulesProfile_tF2708C51AAF3894A860028C79DB05A44D6EDD64F * value)
	{
		___inputActionRulesProfile_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputActionRulesProfile_11), (void*)value);
	}

	inline static int32_t get_offset_of_pointerProfile_12() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C, ___pointerProfile_12)); }
	inline MixedRealityPointerProfile_t51E556B24A06CDA2552A8B38F3874757C70128FE * get_pointerProfile_12() const { return ___pointerProfile_12; }
	inline MixedRealityPointerProfile_t51E556B24A06CDA2552A8B38F3874757C70128FE ** get_address_of_pointerProfile_12() { return &___pointerProfile_12; }
	inline void set_pointerProfile_12(MixedRealityPointerProfile_t51E556B24A06CDA2552A8B38F3874757C70128FE * value)
	{
		___pointerProfile_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerProfile_12), (void*)value);
	}

	inline static int32_t get_offset_of_gesturesProfile_13() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C, ___gesturesProfile_13)); }
	inline MixedRealityGesturesProfile_t344E8703F2DA838589B447BE14DC1C446D171395 * get_gesturesProfile_13() const { return ___gesturesProfile_13; }
	inline MixedRealityGesturesProfile_t344E8703F2DA838589B447BE14DC1C446D171395 ** get_address_of_gesturesProfile_13() { return &___gesturesProfile_13; }
	inline void set_gesturesProfile_13(MixedRealityGesturesProfile_t344E8703F2DA838589B447BE14DC1C446D171395 * value)
	{
		___gesturesProfile_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gesturesProfile_13), (void*)value);
	}

	inline static int32_t get_offset_of_supportedVoiceCultures_14() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C, ___supportedVoiceCultures_14)); }
	inline List_1_tB93032867275F6C802C3659FC027FF6FB1372359 * get_supportedVoiceCultures_14() const { return ___supportedVoiceCultures_14; }
	inline List_1_tB93032867275F6C802C3659FC027FF6FB1372359 ** get_address_of_supportedVoiceCultures_14() { return &___supportedVoiceCultures_14; }
	inline void set_supportedVoiceCultures_14(List_1_tB93032867275F6C802C3659FC027FF6FB1372359 * value)
	{
		___supportedVoiceCultures_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___supportedVoiceCultures_14), (void*)value);
	}

	inline static int32_t get_offset_of_speechCommandsProfile_15() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C, ___speechCommandsProfile_15)); }
	inline MixedRealitySpeechCommandsProfile_tD8FD268D341E7DD3B3858B34A2CB2D902AA35DED * get_speechCommandsProfile_15() const { return ___speechCommandsProfile_15; }
	inline MixedRealitySpeechCommandsProfile_tD8FD268D341E7DD3B3858B34A2CB2D902AA35DED ** get_address_of_speechCommandsProfile_15() { return &___speechCommandsProfile_15; }
	inline void set_speechCommandsProfile_15(MixedRealitySpeechCommandsProfile_tD8FD268D341E7DD3B3858B34A2CB2D902AA35DED * value)
	{
		___speechCommandsProfile_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechCommandsProfile_15), (void*)value);
	}

	inline static int32_t get_offset_of_enableControllerMapping_16() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C, ___enableControllerMapping_16)); }
	inline bool get_enableControllerMapping_16() const { return ___enableControllerMapping_16; }
	inline bool* get_address_of_enableControllerMapping_16() { return &___enableControllerMapping_16; }
	inline void set_enableControllerMapping_16(bool value)
	{
		___enableControllerMapping_16 = value;
	}

	inline static int32_t get_offset_of_controllerMappingProfile_17() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C, ___controllerMappingProfile_17)); }
	inline MixedRealityControllerMappingProfile_tA162449AD6794B68CC303CB68AC0EDE1B8BC72D8 * get_controllerMappingProfile_17() const { return ___controllerMappingProfile_17; }
	inline MixedRealityControllerMappingProfile_tA162449AD6794B68CC303CB68AC0EDE1B8BC72D8 ** get_address_of_controllerMappingProfile_17() { return &___controllerMappingProfile_17; }
	inline void set_controllerMappingProfile_17(MixedRealityControllerMappingProfile_tA162449AD6794B68CC303CB68AC0EDE1B8BC72D8 * value)
	{
		___controllerMappingProfile_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerMappingProfile_17), (void*)value);
	}

	inline static int32_t get_offset_of_controllerVisualizationProfile_18() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C, ___controllerVisualizationProfile_18)); }
	inline MixedRealityControllerVisualizationProfile_t422A4125E237779F487A8BD82D7670928B885105 * get_controllerVisualizationProfile_18() const { return ___controllerVisualizationProfile_18; }
	inline MixedRealityControllerVisualizationProfile_t422A4125E237779F487A8BD82D7670928B885105 ** get_address_of_controllerVisualizationProfile_18() { return &___controllerVisualizationProfile_18; }
	inline void set_controllerVisualizationProfile_18(MixedRealityControllerVisualizationProfile_t422A4125E237779F487A8BD82D7670928B885105 * value)
	{
		___controllerVisualizationProfile_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerVisualizationProfile_18), (void*)value);
	}

	inline static int32_t get_offset_of_handTrackingProfile_19() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C, ___handTrackingProfile_19)); }
	inline MixedRealityHandTrackingProfile_t28838B85DF712221FF796BFD4430C1C880A0A1C8 * get_handTrackingProfile_19() const { return ___handTrackingProfile_19; }
	inline MixedRealityHandTrackingProfile_t28838B85DF712221FF796BFD4430C1C880A0A1C8 ** get_address_of_handTrackingProfile_19() { return &___handTrackingProfile_19; }
	inline void set_handTrackingProfile_19(MixedRealityHandTrackingProfile_t28838B85DF712221FF796BFD4430C1C880A0A1C8 * value)
	{
		___handTrackingProfile_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handTrackingProfile_19), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition
struct WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13  : public ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5
{
public:
	// Windows.Perception.People.HandMeshObserver Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::handMeshObserver
	HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * ___handMeshObserver_19;
	// System.UInt16[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::handMeshTriangleIndices
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___handMeshTriangleIndices_20;
	// Windows.Perception.People.HandMeshVertex[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::vertexAndNormals
	HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* ___vertexAndNormals_21;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::handMeshVerticesUnity
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___handMeshVerticesUnity_22;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::handMeshNormalsUnity
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___handMeshNormalsUnity_23;
	// System.Int32[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::handMeshTriangleIndicesUnity
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___handMeshTriangleIndicesUnity_24;
	// UnityEngine.Vector2[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::handMeshUVsUnity
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___handMeshUVsUnity_25;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::hasRequestedHandMeshObserver
	bool ___hasRequestedHandMeshObserver_26;

public:
	inline static int32_t get_offset_of_handMeshObserver_19() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13, ___handMeshObserver_19)); }
	inline HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * get_handMeshObserver_19() const { return ___handMeshObserver_19; }
	inline HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 ** get_address_of_handMeshObserver_19() { return &___handMeshObserver_19; }
	inline void set_handMeshObserver_19(HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * value)
	{
		___handMeshObserver_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshObserver_19), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshTriangleIndices_20() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13, ___handMeshTriangleIndices_20)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_handMeshTriangleIndices_20() const { return ___handMeshTriangleIndices_20; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_handMeshTriangleIndices_20() { return &___handMeshTriangleIndices_20; }
	inline void set_handMeshTriangleIndices_20(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___handMeshTriangleIndices_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshTriangleIndices_20), (void*)value);
	}

	inline static int32_t get_offset_of_vertexAndNormals_21() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13, ___vertexAndNormals_21)); }
	inline HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* get_vertexAndNormals_21() const { return ___vertexAndNormals_21; }
	inline HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1** get_address_of_vertexAndNormals_21() { return &___vertexAndNormals_21; }
	inline void set_vertexAndNormals_21(HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* value)
	{
		___vertexAndNormals_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertexAndNormals_21), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshVerticesUnity_22() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13, ___handMeshVerticesUnity_22)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_handMeshVerticesUnity_22() const { return ___handMeshVerticesUnity_22; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_handMeshVerticesUnity_22() { return &___handMeshVerticesUnity_22; }
	inline void set_handMeshVerticesUnity_22(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___handMeshVerticesUnity_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshVerticesUnity_22), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshNormalsUnity_23() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13, ___handMeshNormalsUnity_23)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_handMeshNormalsUnity_23() const { return ___handMeshNormalsUnity_23; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_handMeshNormalsUnity_23() { return &___handMeshNormalsUnity_23; }
	inline void set_handMeshNormalsUnity_23(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___handMeshNormalsUnity_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshNormalsUnity_23), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshTriangleIndicesUnity_24() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13, ___handMeshTriangleIndicesUnity_24)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_handMeshTriangleIndicesUnity_24() const { return ___handMeshTriangleIndicesUnity_24; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_handMeshTriangleIndicesUnity_24() { return &___handMeshTriangleIndicesUnity_24; }
	inline void set_handMeshTriangleIndicesUnity_24(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___handMeshTriangleIndicesUnity_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshTriangleIndicesUnity_24), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshUVsUnity_25() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13, ___handMeshUVsUnity_25)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_handMeshUVsUnity_25() const { return ___handMeshUVsUnity_25; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_handMeshUVsUnity_25() { return &___handMeshUVsUnity_25; }
	inline void set_handMeshUVsUnity_25(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___handMeshUVsUnity_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshUVsUnity_25), (void*)value);
	}

	inline static int32_t get_offset_of_hasRequestedHandMeshObserver_26() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13, ___hasRequestedHandMeshObserver_26)); }
	inline bool get_hasRequestedHandMeshObserver_26() const { return ___hasRequestedHandMeshObserver_26; }
	inline bool* get_address_of_hasRequestedHandMeshObserver_26() { return &___hasRequestedHandMeshObserver_26; }
	inline void set_hasRequestedHandMeshObserver_26(bool value)
	{
		___hasRequestedHandMeshObserver_26 = value;
	}
};

struct WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::UpdateHandMeshPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateHandMeshPerfMarker_27;

public:
	inline static int32_t get_offset_of_UpdateHandMeshPerfMarker_27() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13_StaticFields, ___UpdateHandMeshPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateHandMeshPerfMarker_27() const { return ___UpdateHandMeshPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateHandMeshPerfMarker_27() { return &___UpdateHandMeshPerfMarker_27; }
	inline void set_UpdateHandMeshPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateHandMeshPerfMarker_27 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride
struct ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride::<ReadingModeEnabled>k__BackingField
	bool ___U3CReadingModeEnabledU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CReadingModeEnabledU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD, ___U3CReadingModeEnabledU3Ek__BackingField_4)); }
	inline bool get_U3CReadingModeEnabledU3Ek__BackingField_4() const { return ___U3CReadingModeEnabledU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CReadingModeEnabledU3Ek__BackingField_4() { return &___U3CReadingModeEnabledU3Ek__BackingField_4; }
	inline void set_U3CReadingModeEnabledU3Ek__BackingField_4(bool value)
	{
		___U3CReadingModeEnabledU3Ek__BackingField_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile
struct WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3  : public BaseCameraSettingsProfile_t5998404448AE5AF901F9E041357975E0D649A6FD
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::renderFromPVCameraForMixedRealityCapture
	bool ___renderFromPVCameraForMixedRealityCapture_5;
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::reprojectionMethod
	int32_t ___reprojectionMethod_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::readingModeEnabled
	bool ___readingModeEnabled_7;

public:
	inline static int32_t get_offset_of_renderFromPVCameraForMixedRealityCapture_5() { return static_cast<int32_t>(offsetof(WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3, ___renderFromPVCameraForMixedRealityCapture_5)); }
	inline bool get_renderFromPVCameraForMixedRealityCapture_5() const { return ___renderFromPVCameraForMixedRealityCapture_5; }
	inline bool* get_address_of_renderFromPVCameraForMixedRealityCapture_5() { return &___renderFromPVCameraForMixedRealityCapture_5; }
	inline void set_renderFromPVCameraForMixedRealityCapture_5(bool value)
	{
		___renderFromPVCameraForMixedRealityCapture_5 = value;
	}

	inline static int32_t get_offset_of_reprojectionMethod_6() { return static_cast<int32_t>(offsetof(WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3, ___reprojectionMethod_6)); }
	inline int32_t get_reprojectionMethod_6() const { return ___reprojectionMethod_6; }
	inline int32_t* get_address_of_reprojectionMethod_6() { return &___reprojectionMethod_6; }
	inline void set_reprojectionMethod_6(int32_t value)
	{
		___reprojectionMethod_6 = value;
	}

	inline static int32_t get_offset_of_readingModeEnabled_7() { return static_cast<int32_t>(offsetof(WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3, ___readingModeEnabled_7)); }
	inline bool get_readingModeEnabled_7() const { return ___readingModeEnabled_7; }
	inline bool* get_address_of_readingModeEnabled_7() { return &___readingModeEnabled_7; }
	inline void set_readingModeEnabled_7(bool value)
	{
		___readingModeEnabled_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder
struct WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::<ReferenceJoint>k__BackingField
	int32_t ___U3CReferenceJointU3Ek__BackingField_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::<OutputFileName>k__BackingField
	String_t* ___U3COutputFileNameU3Ek__BackingField_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::offset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___offset_7;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::recordingHand
	uint8_t ___recordingHand_8;

public:
	inline static int32_t get_offset_of_U3CReferenceJointU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E, ___U3CReferenceJointU3Ek__BackingField_5)); }
	inline int32_t get_U3CReferenceJointU3Ek__BackingField_5() const { return ___U3CReferenceJointU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CReferenceJointU3Ek__BackingField_5() { return &___U3CReferenceJointU3Ek__BackingField_5; }
	inline void set_U3CReferenceJointU3Ek__BackingField_5(int32_t value)
	{
		___U3CReferenceJointU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3COutputFileNameU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E, ___U3COutputFileNameU3Ek__BackingField_6)); }
	inline String_t* get_U3COutputFileNameU3Ek__BackingField_6() const { return ___U3COutputFileNameU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3COutputFileNameU3Ek__BackingField_6() { return &___U3COutputFileNameU3Ek__BackingField_6; }
	inline void set_U3COutputFileNameU3Ek__BackingField_6(String_t* value)
	{
		___U3COutputFileNameU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COutputFileNameU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_offset_7() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E, ___offset_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_offset_7() const { return ___offset_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_offset_7() { return &___offset_7; }
	inline void set_offset_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___offset_7 = value;
	}

	inline static int32_t get_offset_of_recordingHand_8() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E, ___recordingHand_8)); }
	inline uint8_t get_recordingHand_8() const { return ___recordingHand_8; }
	inline uint8_t* get_address_of_recordingHand_8() { return &___recordingHand_8; }
	inline void set_recordingHand_8(uint8_t value)
	{
		___recordingHand_8 = value;
	}
};

struct WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::jointCount
	int32_t ___jointCount_4;

public:
	inline static int32_t get_offset_of_jointCount_4() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E_StaticFields, ___jointCount_4)); }
	inline int32_t get_jointCount_4() const { return ___jointCount_4; }
	inline int32_t* get_address_of_jointCount_4() { return &___jointCount_4; }
	inline void set_jointCount_4(int32_t value)
	{
		___jointCount_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater
struct WindowsMixedRealityReprojectionUpdater_tE7383297DACC1F627D8A9E069D322491647EC5E5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater::<ReprojectionMethod>k__BackingField
	int32_t ___U3CReprojectionMethodU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CReprojectionMethodU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(WindowsMixedRealityReprojectionUpdater_tE7383297DACC1F627D8A9E069D322491647EC5E5, ___U3CReprojectionMethodU3Ek__BackingField_4)); }
	inline int32_t get_U3CReprojectionMethodU3Ek__BackingField_4() const { return ___U3CReprojectionMethodU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CReprojectionMethodU3Ek__BackingField_4() { return &___U3CReprojectionMethodU3Ek__BackingField_4; }
	inline void set_U3CReprojectionMethodU3Ek__BackingField_4(int32_t value)
	{
		___U3CReprojectionMethodU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Windows.Perception.People.HandMeshVertex[]
struct HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784  m_Items[1];

public:
	inline HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HandMeshVertex_t81B9BA0A9D5AFF3A2877275B43C95E3745EC7784  value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[]
struct MixedRealityPoseU5BU5D_t5C57F164C0B0AB8BD85B6166C012C7B5189C0B89  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityPose_t7089584858BB76148AA1F83EB73B973E93554669  m_Items[1];

public:
	inline MixedRealityPose_t7089584858BB76148AA1F83EB73B973E93554669  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityPose_t7089584858BB76148AA1F83EB73B973E93554669 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityPose_t7089584858BB76148AA1F83EB73B973E93554669  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MixedRealityPose_t7089584858BB76148AA1F83EB73B973E93554669  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityPose_t7089584858BB76148AA1F83EB73B973E93554669 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityPose_t7089584858BB76148AA1F83EB73B973E93554669  value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 Microsoft.MixedReality.Toolkit.ComponentExtensions::EnsureComponent<System.Object>(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ComponentExtensions_EnsureComponent_TisRuntimeObject_m0FD1404A66339D1AD5B2D9BF8DFF7318AB19F5F5_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___component0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__9>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF_mBC42BD766C5FAED2F68AD87C32A6EEEFD3653877_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int64>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2FFBA70879C106A64CB60C455BC4CF9DF896E0D1_gshared (Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Numerics.Matrix4x4>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1C8741C73000BD525E6034625DD1ED12EB07EA10_gshared_inline (Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Numerics.Matrix4x4>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  Nullable_1_get_Value_m608A59322CEE9B305CE8472969742F446EA8318A_gshared (Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider/<SetHandMeshObserver>d__14>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063_mCCD72F15DECDEB21469BF69FC06719E173B99531_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063 * ___stateMachine0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<System.Object>(Windows.Foundation.IAsyncOperation`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  WindowsRuntimeSystemExtensions_GetAwaiter_TisRuntimeObject_m59A39C18839C39E7B0BA3B24C5B236DD299F8968_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__9>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF_mE86FB485A915E115ACA2C36995B2B16A017FE7B3_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider/<SetHandMeshObserver>d__14>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063_m819874C6BBCC96671A229AEC0DAEF5563DE8E41B_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063 * ___stateMachine1, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCameraSettingsProvider__ctor_m10B39320757A22CCB19388E3AE46DAA9AD8DBD71 (BaseCameraSettingsProvider_t0938643A4ADD8F7EA2269CFF7429343EFD13E110 * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_t5998404448AE5AF901F9E041357975E0D649A6FD * ___profile3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Enable_m60768260471BD4A6E1EF8D6A9CD661CB90E445B3 (BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::InitializeReprojectionUpdater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_InitializeReprojectionUpdater_mFA83B44ECACF9FF04E85BB0B0A2DAFFD9ADC18F6 (BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::InitializeProjectionOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_InitializeProjectionOverride_mA581C2B0692B61E57ACC761085E973F42E878266 (BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::UninitializeReprojectionUpdater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_UninitializeReprojectionUpdater_m1A3BBEE0CD61AD22E25943809FAFAB07F1343842 (BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::UninitializeProjectionOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_UninitializeProjectionOverride_m974492B3D6EC7A10BBED7AEFEE8D245DF428570F (BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Disable_m36B425F7A884FC9F3811565A8F09C7702F6B8A35 (BaseService_t793754DF90682F7505A073585FC34F790A7CD7DB * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::ApplyConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCameraSettingsProvider_ApplyConfiguration_mF46B200A887B2F8DC8A00C925C2555CD102D46E7 (BaseCameraSettingsProvider_t0938643A4ADD8F7EA2269CFF7429343EFD13E110 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::get_Profile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3 * BaseWindowsMixedRealityCameraSettings_get_Profile_m450FA8D823C36D8D5D9B0918D6903999697A96EA (BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::get_RenderFromPVCameraForMixedRealityCapture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WindowsMixedRealityCameraSettingsProfile_get_RenderFromPVCameraForMixedRealityCapture_mA079DB5220894D6FFAEE2BDD893962136A6E6BBE_inline (WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3 * __this, const RuntimeMethod* method);
// Windows.Graphics.Holographic.HolographicDisplay Windows.Graphics.Holographic.HolographicDisplay::GetDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicDisplay_t64D6F94B22A96A3AB13B7935EBDAE901CE418B6E * HolographicDisplay_GetDefault_m0F00077DA9B4ABA9BB4545AE0CE23017D8ABB4F3 (const RuntimeMethod* method);
// Windows.Graphics.Holographic.HolographicViewConfiguration Windows.Graphics.Holographic.HolographicDisplay::TryGetViewConfiguration(Windows.Graphics.Holographic.HolographicViewConfigurationKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicViewConfiguration_tE179E9B0B22770D34F8757D4314359560DC2CBCB * HolographicDisplay_TryGetViewConfiguration_m3BA447E93CCABA413509B300E575D8739916C121 (HolographicDisplay_t64D6F94B22A96A3AB13B7935EBDAE901CE418B6E * __this, int32_t ___kind0, const RuntimeMethod* method);
// System.Void Windows.Graphics.Holographic.HolographicViewConfiguration::put_IsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicViewConfiguration_put_IsEnabled_mD1763BD67038C5B79F0B8E0C7AE210286203A62E (HolographicViewConfiguration_tE179E9B0B22770D34F8757D4314359560DC2CBCB * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride::get_ReadingModeEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ProjectionOverride_get_ReadingModeEnabled_m092707B112241BB475ADB11EEFF36D5B6A72752E_inline (ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * CameraCache_get_Main_m9B531633C9F0EEFE28FE56E6F9609A91E0EC3F5A (const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.ComponentExtensions::EnsureComponent<Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride>(UnityEngine.Component)
inline ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD * ComponentExtensions_EnsureComponent_TisProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD_m8D147525871AC82A4E7AEEA13450F13F2A028EAD (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___component0, const RuntimeMethod* method)
{
	return ((  ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))ComponentExtensions_EnsureComponent_TisRuntimeObject_m0FD1404A66339D1AD5B2D9BF8DFF7318AB19F5F5_gshared)(___component0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride::set_ReadingModeEnabled(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProjectionOverride_set_ReadingModeEnabled_mD98C405CAA8D6392109B5ED0848BB06AA15B994B_inline (ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD * __this, bool ___value0, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.ComponentExtensions::EnsureComponent<Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater>(UnityEngine.Component)
inline WindowsMixedRealityReprojectionUpdater_tE7383297DACC1F627D8A9E069D322491647EC5E5 * ComponentExtensions_EnsureComponent_TisWindowsMixedRealityReprojectionUpdater_tE7383297DACC1F627D8A9E069D322491647EC5E5_mC53936037538A3468AD309C2FFF6CF85DC2FD7F7 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___component0, const RuntimeMethod* method)
{
	return ((  WindowsMixedRealityReprojectionUpdater_tE7383297DACC1F627D8A9E069D322491647EC5E5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))ComponentExtensions_EnsureComponent_TisRuntimeObject_m0FD1404A66339D1AD5B2D9BF8DFF7318AB19F5F5_gshared)(___component0, method);
}
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::get_ReprojectionMethod()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityCameraSettingsProfile_get_ReprojectionMethod_m2E1568953F627FD08E366A0054F2B806255F2ABD_inline (WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater::set_ReprojectionMethod(Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsMixedRealityReprojectionUpdater_set_ReprojectionMethod_m5067010F5FD603EB7C057D568562B0AA8662ABEA_inline (WindowsMixedRealityReprojectionUpdater_tE7383297DACC1F627D8A9E069D322491647EC5E5 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.UnityObjectExtensions::DestroyObject(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityObjectExtensions_DestroyObject_mB8E69D3C058D93AA78366751511A30F2187EDF29 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::get_ReadingModeEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WindowsMixedRealityCameraSettingsProfile_get_ReadingModeEnabled_mA0898DBBFF3DC063392B184C4A078B5ADCC0EA2B_inline (WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Utilities.WindowsApiChecker::IsMethodAvailable(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsApiChecker_IsMethodAvailable_mC2FB7E9903BCA9BB925E932F89B70F2FE1B41907 (String_t* ___namespaceName0, String_t* ___className1, String_t* ___methodName2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetViewMatricesOnFrameEndU3Ed__4__ctor_m7BCB3FBC5A5A82DBAE437855058390952E14DC09 (U3CResetViewMatricesOnFrameEndU3Ed__4_t606760AA02E5E7D22B10BF928642555E33EAEB71 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride::ResetViewMatricesOnFrameEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProjectionOverride_ResetViewMatricesOnFrameEnd_mD6BC6E3E145885E9D257145985FBED80557A6EFF (ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Camera::GetStereoProjectionMatrix(UnityEngine.Camera/StereoscopicEye)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Camera_GetStereoProjectionMatrix_m6E75E4F868D61EB7D3FF3665DEBA7E6FC2910A94 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___eye0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::SetStereoProjectionMatrix(UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_SetStereoProjectionMatrix_mADBD0709A2C5CC89E96DAAE97D145BCF76E12D3A (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___eye0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix1, const RuntimeMethod* method);
// Windows.Graphics.Holographic.HolographicFrame Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_CurrentWindowsHolographicFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicFrame_t16CC7D90BCAF0D8BAC1D7C941B18567F460C99EC * WindowsMixedRealityUtilities_get_CurrentWindowsHolographicFrame_mBA2F0453EFE61DB40089039923577164C7534F23 (const RuntimeMethod* method);
// Windows.Graphics.Holographic.HolographicFramePrediction Windows.Graphics.Holographic.HolographicFrame::get_CurrentPrediction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicFramePrediction_t971A2A1EBD8FF3A81ED5996ADBFADAF46EAAC804 * HolographicFrame_get_CurrentPrediction_m4590326A2A9C89E3BF11D93858109E1EA2C68BF4 (HolographicFrame_t16CC7D90BCAF0D8BAC1D7C941B18567F460C99EC * __this, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<Windows.Graphics.Holographic.HolographicCameraPose> Windows.Graphics.Holographic.HolographicFramePrediction::get_CameraPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HolographicFramePrediction_get_CameraPoses_m2BCF6322F1A7617A12776781E1F6AC9FD841A299 (HolographicFramePrediction_t971A2A1EBD8FF3A81ED5996ADBFADAF46EAAC804 * __this, const RuntimeMethod* method);
// Windows.Graphics.Holographic.HolographicCamera Windows.Graphics.Holographic.HolographicCameraPose::get_HolographicCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicCamera_t4122B595738F9F797D8FBBC3CF51C6410941509B * HolographicCameraPose_get_HolographicCamera_mC463D4B7DE847AA8F390DD29244C31F51AEFF0BA (HolographicCameraPose_t652F9761A7F2DF4712360C52FC4BDB51BA96FD4E * __this, const RuntimeMethod* method);
// System.Boolean Windows.Graphics.Holographic.HolographicCamera::get_CanOverrideViewport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HolographicCamera_get_CanOverrideViewport_mC0AB734D470DF253A792CDACF8F28296DE88964E (HolographicCamera_t4122B595738F9F797D8FBBC3CF51C6410941509B * __this, const RuntimeMethod* method);
// Windows.Graphics.Holographic.HolographicStereoTransform Windows.Graphics.Holographic.HolographicCameraPose::get_ProjectionTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicStereoTransform_t0AE6816B48D0C9E474DBB5F3C05F54323DBE287A  HolographicCameraPose_get_ProjectionTransform_m5161159FEB13A67624D7D1EE68B7D99A19CEBE22 (HolographicCameraPose_t652F9761A7F2DF4712360C52FC4BDB51BA96FD4E * __this, const RuntimeMethod* method);
// System.Void Windows.Graphics.Holographic.HolographicCameraPose::OverrideProjectionTransform(Windows.Graphics.Holographic.HolographicStereoTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicCameraPose_OverrideProjectionTransform_m2F0B6BC8FCCE8C846BA2E3E8074D3D8E8346B9C1 (HolographicCameraPose_t652F9761A7F2DF4712360C52FC4BDB51BA96FD4E * __this, HolographicStereoTransform_t0AE6816B48D0C9E474DBB5F3C05F54323DBE287A  ___projectionTransform0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition__ctor_m502F18A61CCBE95F3FDE120D47C7A12619A83087 (ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5 * __this, RuntimeObject* ___source0, uint8_t ___handedness1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__9>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF_mBC42BD766C5FAED2F68AD87C32A6EEEFD3653877 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF_mBC42BD766C5FAED2F68AD87C32A6EEEFD3653877_gshared)(__this, ___stateMachine0, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m03F66B157660C21D67B5A6A4D132BF889CBFE440 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::get_HandTrackingProfile()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityHandTrackingProfile_t28838B85DF712221FF796BFD4430C1C880A0A1C8 * MixedRealityInputSystemProfile_get_HandTrackingProfile_m68AB045F05D5B7E5723E8D3331E837CAC058CE7A_inline (MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::get_EnableHandMeshVisualization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityHandTrackingProfile_get_EnableHandMeshVisualization_mB6D5AC9F60725F712E448D41520791D1CD5B20BF (MixedRealityHandTrackingProfile_t28838B85DF712221FF796BFD4430C1C880A0A1C8 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshInfo__ctor_mDBABBFFF584C3FF554CC84A8A1303A8AECA096FF (HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::get_InputSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ArticulatedHandDefinition_get_InputSource_m968B8E2F1A9BF003A7AF616CEE6DBE13967E6F78_inline (ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseInputSourceDefinition::get_Handedness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t BaseInputSourceDefinition_get_Handedness_mC43AF6FD8EF6FADB9A73FE9A238978B9506F6A8C_inline (BaseInputSourceDefinition_t36140FA79FA8E7F98B8767451A5A6F779BA9DE60 * __this, const RuntimeMethod* method);
// Windows.Perception.People.HandPose Windows.UI.Input.Spatial.SpatialInteractionSourceState::TryGetHandPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE * SpatialInteractionSourceState_TryGetHandPose_m9B623E31B753FD11674C848601622016AF260110 (SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::SetHandMeshObserver(Windows.UI.Input.Spatial.SpatialInteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition_SetHandMeshObserver_mD1CE855E58B5E4B1965F7E3D8D2641C5FC563E0F (WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13 * __this, SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * ___sourceState0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m13D0E1FEE7089E1A7B64AABEF325294D80BC81D5 (U3CU3Ec__DisplayClass12_0_t5A6783DF38B3EA4588EF45A4D24CEB810CAD4501 * __this, const RuntimeMethod* method);
// System.UInt32 Windows.Perception.People.HandMeshObserver::get_TriangleIndexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t HandMeshObserver_get_TriangleIndexCount_mFF115FBB6E545038C1BD1420DF2873C5172D54FA (HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * __this, const RuntimeMethod* method);
// System.Void Windows.Perception.People.HandMeshObserver::GetTriangleIndices(System.UInt16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshObserver_GetTriangleIndices_m822E18BFBC457E8CDFF9DF03D0316DE316631424 (HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * __this, UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___indices0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803 (RuntimeArray * ___sourceArray0, RuntimeArray * ___destinationArray1, int32_t ___length2, const RuntimeMethod* method);
// System.UInt32 Windows.Perception.People.HandMeshObserver::get_VertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t HandMeshObserver_get_VertexCount_mF44DDE4B9A043F460CE7C8F9DA46C4B7FB0E82B6 (HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * __this, const RuntimeMethod* method);
// Windows.Perception.People.HandPose Windows.Perception.People.HandMeshObserver::get_NeutralPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE * HandMeshObserver_get_NeutralPose_m5E28EB4B46D13DFD8E3556DCCC387C44D06BD9F9 (HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * __this, const RuntimeMethod* method);
// Windows.Perception.People.HandMeshVertexState Windows.Perception.People.HandMeshObserver::GetVertexStateForPose(Windows.Perception.People.HandPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandMeshVertexState_t472D7CF8982D6D93200D405B7F990404C022A9F8 * HandMeshObserver_GetVertexStateForPose_m15A85E28A95DD93A7CEEB07C98A9240A7EED5B38 (HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * __this, HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE * ___handPose0, const RuntimeMethod* method);
// System.Void Windows.Perception.People.HandMeshVertexState::GetVertices(Windows.Perception.People.HandMeshVertex[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshVertexState_GetVertices_mF42AFC0B0A958259F449205CA0FED73239595CBF (HandMeshVertexState_t472D7CF8982D6D93200D405B7F990404C022A9F8 * __this, HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* ___vertices0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int64>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2FFBA70879C106A64CB60C455BC4CF9DF896E0D1 (Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2FFBA70879C106A64CB60C455BC4CF9DF896E0D1_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.ParallelLoopResult System.Threading.Tasks.Parallel::For(System.Int64,System.Int64,System.Action`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3  Parallel_For_m4F8049B55A36C35CB5C07476DA5A97FE0393A34B (int64_t ___fromInclusive0, int64_t ___toExclusive1, Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * ___body2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::InitializeUVs(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition_InitializeUVs_mCC6F92C362E08F1039DE38A324C22395F4393C08 (WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___neutralPoseVertices0, const RuntimeMethod* method);
// Windows.Perception.Spatial.SpatialCoordinateSystem Windows.Perception.People.HandMeshVertexState::get_CoordinateSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * HandMeshVertexState_get_CoordinateSystem_m4AC199BB8E0D40D4C80AC8C446E0C565F979808A (HandMeshVertexState_t472D7CF8982D6D93200D405B7F990404C022A9F8 * __this, const RuntimeMethod* method);
// Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_SpatialCoordinateSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m97A085C49302BEA63105E58475D29A014AFF99F2 (const RuntimeMethod* method);
// System.Nullable`1<System.Numerics.Matrix4x4> Windows.Perception.Spatial.SpatialCoordinateSystem::TryGetTransformTo(Windows.Perception.Spatial.SpatialCoordinateSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8  SpatialCoordinateSystem_TryGetTransformTo_m9860B951AA3C929F3C1A39347C72EA838E5774FF (SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * __this, SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * ___target0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Numerics.Matrix4x4>::get_HasValue()
inline bool Nullable_1_get_HasValue_m1C8741C73000BD525E6034625DD1ED12EB07EA10_inline (Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 *, const RuntimeMethod*))Nullable_1_get_HasValue_m1C8741C73000BD525E6034625DD1ED12EB07EA10_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Numerics.Matrix4x4>::get_Value()
inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  Nullable_1_get_Value_m608A59322CEE9B305CE8472969742F446EA8318A (Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 * __this, const RuntimeMethod* method)
{
	return ((  Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  (*) (Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 *, const RuntimeMethod*))Nullable_1_get_Value_m608A59322CEE9B305CE8472969742F446EA8318A_gshared)(__this, method);
}
// System.Boolean System.Numerics.Matrix4x4::Decompose(System.Numerics.Matrix4x4,System.Numerics.Vector3&,System.Numerics.Quaternion&,System.Numerics.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Matrix4x4_Decompose_mAEEBB02601928ECC39E5459CC1015C8FEE7D4754 (Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  ___matrix0, Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 * ___scale1, Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C * ___rotation2, Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 * ___translation3, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SystemNumericsExtensions::ToUnityVector3(System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SystemNumericsExtensions_ToUnityVector3_mA53A59A622EBAF6C3BAC86F31DF7680683EABE42 (Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  ___vector0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_TransformPoint_mFDE85764DAF222FE9BD9F91065B74F99575FB3BD (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition0, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  MixedRealityPlayspace_get_Rotation_m971FAF92E9A317CFAEB1FD97FB8B70F50ACB3AEE (const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SystemNumericsExtensions::ToUnityQuaternion(System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  SystemNumericsExtensions_ToUnityQuaternion_m09E22D30B18D7621D92780F6153825523EAA1A0D (Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C  ___quaternion0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SystemNumericsExtensions::ConvertToUnityVector3(System.Numerics.Vector3,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemNumericsExtensions_ConvertToUnityVector3_m46FC9B5BD8EEE8EAAF6921365C1F069132D44631 (Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___target1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCameraSettingsProfile__ctor_mED81E334FE92CAFB344614ED27F0039B11A2CC79 (BaseCameraSettingsProfile_t5998404448AE5AF901F9E041357975E0D649A6FD * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider/<SetHandMeshObserver>d__14>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063_mCCD72F15DECDEB21469BF69FC06719E173B99531 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063_mCCD72F15DECDEB21469BF69FC06719E173B99531_gshared)(__this, ___stateMachine0, method);
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::get_InputSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityHandMeshProvider_get_InputSource_mCACDBD92988895027BC0F4A1BD4378952DFBCCE0 (WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::get_Handedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t WindowsMixedRealityHandMeshProvider_get_Handedness_m1C0C23607624A1C63571461C3B1C1F58AC4D1CCE (WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::SetHandMeshObserver(Windows.UI.Input.Spatial.SpatialInteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandMeshProvider_SetHandMeshObserver_mB8530922805948976D4BC13500DDCCFC0CFF2564 (WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D * __this, SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * ___sourceState0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mE6503E577D8B0CDD0C26C9E92C2968C690243843 (U3CU3Ec__DisplayClass17_0_tB553DBEC2E07BDD097E9BF81DCF48F2FAC0A942B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::InitializeUVs(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandMeshProvider_InitializeUVs_m4F51ABD0EF7CA344774AE337F58B7CD679005CB0 (WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___neutralPoseVertices0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::RecordHandStart(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_RecordHandStart_m7540EB99276FD8F465CFB054C1F34C1604F9C97E (WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E * __this, uint8_t ___handedness0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::get_ReferenceJoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityHandRecorder_get_ReferenceJoint_m8265A08CEB726848BA79390B3723C5B365979922_inline (WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.HandJointUtils::TryGetJointPose(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandJointUtils_TryGetJointPose_m1BFDEE99B85D7C366ECBF9EF7B4044CEFD46E90C (int32_t ___joint0, uint8_t ___handedness1, MixedRealityPose_t7089584858BB76148AA1F83EB73B973E93554669 * ___pose2, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPose_get_Position_m34E0E9859576E00CEB1CC3D1D31F18C45B1712A3_inline (MixedRealityPose_t7089584858BB76148AA1F83EB73B973E93554669 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandPose__ctor_m3358622E99A12E2746F4040F59C6791FDC58E92F (ArticulatedHandPose_tD6A7652461D7161AB3C133D7206630066D08C9DF * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::ParseFromJointPoses(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[],Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandPose_ParseFromJointPoses_mA0CA3EFC04F141F3916D62FFC27CD502A2A1B2EA (ArticulatedHandPose_tD6A7652461D7161AB3C133D7206630066D08C9DF * __this, MixedRealityPoseU5BU5D_t5C57F164C0B0AB8BD85B6166C012C7B5189C0B89* ___joints0, uint8_t ___handedness1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position3, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::get_OutputFileName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WindowsMixedRealityHandRecorder_get_OutputFileName_m1D913980165D1401A5F06670BD0B4050EF7CF4A1_inline (WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090 (const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArticulatedHandPose_ToJson_m2AA8273D745D69A477CAF5F80A74AC185BA92CC8 (ArticulatedHandPose_tD6A7652461D7161AB3C133D7206630066D08C9DF * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::StoreRecordedHandPose(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_StoreRecordedHandPose_m4403959F60E3DBA04F11DD18116DCE4B09863822 (String_t* ___data0, String_t* ___filename1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.IO.StreamWriter System.IO.File::CreateText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * File_CreateText_mF393781AD8227008F1FE3646C896EBD3C4AC42B6 (String_t* ___path0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.String[] System.Enum::GetNames(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Enum_GetNames_m49110673091D017F43CF0F5F7AD9B7730306D2E8 (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Void UnityEngine.WSA.AppCallbackItem::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCallbackItem__ctor_m87EC22B203716A10F85F21E155D3CE3745F49FF4 (AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.WSA.Application::InvokeOnUIThread(UnityEngine.WSA.AppCallbackItem,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_InvokeOnUIThread_m4013116AFAB872FBFD84F2CE06CF3B812D068130 (AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C * ___item0, bool ___waitUntilDone1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_UtilitiesProvider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityUtilities_get_UtilitiesProvider_m9678D76928FE22D8039F909972DC2B45626ED721_inline (const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.Marshal::GetObjectForIUnknown(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Marshal_GetObjectForIUnknown_m9D5CB9B12B72BC4CCC46E363C805A03FFE644443 (intptr_t ___pUnk0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::ResetStereoViewMatrices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_ResetStereoViewMatrices_m002B09EC64D0B425EC18F16467A85BFAF2C73864 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::ResetStereoProjectionMatrices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_ResetStereoProjectionMatrices_m1C656CC93F8DA9AF5C10A95AA3FF1F29F4DF91E9 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// Windows.UI.Input.Spatial.SpatialInteractionSource Windows.UI.Input.Spatial.SpatialInteractionSourceState::get_Source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F * SpatialInteractionSourceState_get_Source_mDFBB7ECDC326D42075DCF0B8D5779B7D11EAFD8F (SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * __this, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperation`1<Windows.Perception.People.HandMeshObserver> Windows.UI.Input.Spatial.SpatialInteractionSource::TryCreateHandMeshObserverAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpatialInteractionSource_TryCreateHandMeshObserverAsync_mE8630D9D92744C27BD5EBD758B42C3CB6ACFEC5C (SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<Windows.Perception.People.HandMeshObserver>(Windows.Foundation.IAsyncOperation`1<!!0>)
inline TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E  WindowsRuntimeSystemExtensions_GetAwaiter_TisHandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273_m5EC4FF7F7B66CDE9B445927A5B7350344EAF4FBD (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E  (*) (RuntimeObject*, const RuntimeMethod*))WindowsRuntimeSystemExtensions_GetAwaiter_TisRuntimeObject_m59A39C18839C39E7B0BA3B24C5B236DD299F8968_gshared)(___source0, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Perception.People.HandMeshObserver>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m5D6FF641B7538EB84114C6AE307B3A91B49DBD1D (TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Perception.People.HandMeshObserver>,Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__9>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E_TisU3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF_m5F7EAE6D1FEE7598D9CB7467B0091B621D7D8A47 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E * ___awaiter0, U3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E *, U3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF_mE86FB485A915E115ACA2C36995B2B16A017FE7B3_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Perception.People.HandMeshObserver>::GetResult()
inline HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * TaskAwaiter_1_GetResult_m59638659560BF6E7A32BE216A243011FC4E906F1 (TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E * __this, const RuntimeMethod* method)
{
	return ((  HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * (*) (TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetHandMeshObserverU3Ed__9_MoveNext_mDF755E522A09E1F8D253561EC0028C2EFAD9A71E (U3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetHandMeshObserverU3Ed__9_SetStateMachine_m0BAB9B69FD7069605F998F2EFC3181758447EB0C (U3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Perception.People.HandMeshObserver>,Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider/<SetHandMeshObserver>d__14>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E_TisU3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063_m7E4D46F7940DE0C3384AD76D38F33A8A28C9404D (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E * ___awaiter0, U3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E *, U3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063_m819874C6BBCC96671A229AEC0DAEF5563DE8E41B_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider/<SetHandMeshObserver>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetHandMeshObserverU3Ed__14_MoveNext_m7BDD5A8C574A7F865E8CF86680ED9B07309A301F (U3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider/<SetHandMeshObserver>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetHandMeshObserverU3Ed__14_SetStateMachine_m89C121E05E1F7A23E8B11A65FEE19E38353C4977 (U3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC041A740F617D5B98E4BC8386E79A6E8ED65A1BE (U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418 * __this, const RuntimeMethod* method);
// Windows.UI.Input.Spatial.SpatialInteractionManager Windows.UI.Input.Spatial.SpatialInteractionManager::GetForCurrentView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * SpatialInteractionManager_GetForCurrentView_m77EF39A84C58C1F95BF8E7D002F88B86B9382560 (const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4 (intptr_t ___markerPtr0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings__ctor_m20D1C148269B83C7A39947B65F43513C172C1742 (BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_t5998404448AE5AF901F9E041357975E0D649A6FD * ___profile3, const RuntimeMethod* method)
{
	{
		// BaseCameraSettingsProfile profile = null) : base(cameraSystem, name, priority, profile)
		RuntimeObject* L_0 = ___cameraSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseCameraSettingsProfile_t5998404448AE5AF901F9E041357975E0D649A6FD * L_3 = ___profile3;
		BaseCameraSettingsProvider__ctor_m10B39320757A22CCB19388E3AE46DAA9AD8DBD71(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_Enable_m4CB24937F80E637DD3E079EF0F903489EBC53853 (BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B * __this, const RuntimeMethod* method)
{
	{
		// base.Enable();
		BaseService_Enable_m60768260471BD4A6E1EF8D6A9CD661CB90E445B3(__this, /*hidden argument*/NULL);
		// InitializeReprojectionUpdater();
		BaseWindowsMixedRealityCameraSettings_InitializeReprojectionUpdater_mFA83B44ECACF9FF04E85BB0B0A2DAFFD9ADC18F6(__this, /*hidden argument*/NULL);
		// InitializeProjectionOverride();
		BaseWindowsMixedRealityCameraSettings_InitializeProjectionOverride_mA581C2B0692B61E57ACC761085E973F42E878266(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_Disable_m4362B50A4ECE6B582428DAD318CC6BD1CDAA4105 (BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B * __this, const RuntimeMethod* method)
{
	{
		// UninitializeReprojectionUpdater();
		BaseWindowsMixedRealityCameraSettings_UninitializeReprojectionUpdater_m1A3BBEE0CD61AD22E25943809FAFAB07F1343842(__this, /*hidden argument*/NULL);
		// UninitializeProjectionOverride();
		BaseWindowsMixedRealityCameraSettings_UninitializeProjectionOverride_m974492B3D6EC7A10BBED7AEFEE8D245DF428570F(__this, /*hidden argument*/NULL);
		// base.Disable();
		BaseService_Disable_m36B425F7A884FC9F3811565A8F09C7702F6B8A35(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::get_Profile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3 * BaseWindowsMixedRealityCameraSettings_get_Profile_m450FA8D823C36D8D5D9B0918D6903999697A96EA (BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private WindowsMixedRealityCameraSettingsProfile Profile => ConfigurationProfile as WindowsMixedRealityCameraSettingsProfile;
		BaseMixedRealityProfile_tE425D8D64B2631D5C8C82A49805613264FA9D9A3 * L_0;
		L_0 = VirtFuncInvoker0< BaseMixedRealityProfile_tE425D8D64B2631D5C8C82A49805613264FA9D9A3 * >::Invoke(22 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		return ((WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3 *)IsInstClass((RuntimeObject*)L_0, WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3_il2cpp_TypeInfo_var));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::ApplyConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_ApplyConfiguration_m8F42C4162485CDE8BD3B99E267362D4F33C132C5 (BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HolographicViewConfiguration_tE179E9B0B22770D34F8757D4314359560DC2CBCB * V_0 = NULL;
	HolographicDisplay_t64D6F94B22A96A3AB13B7935EBDAE901CE418B6E * G_B5_0 = NULL;
	HolographicDisplay_t64D6F94B22A96A3AB13B7935EBDAE901CE418B6E * G_B4_0 = NULL;
	HolographicViewConfiguration_tE179E9B0B22770D34F8757D4314359560DC2CBCB * G_B6_0 = NULL;
	{
		// base.ApplyConfiguration();
		BaseCameraSettingsProvider_ApplyConfiguration_mF46B200A887B2F8DC8A00C925C2555CD102D46E7(__this, /*hidden argument*/NULL);
		// if (Profile != null
		//     && Profile.RenderFromPVCameraForMixedRealityCapture
		//     && isTryGetViewConfigurationSupported)
		WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3 * L_0;
		L_0 = BaseWindowsMixedRealityCameraSettings_get_Profile_m450FA8D823C36D8D5D9B0918D6903999697A96EA(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3 * L_2;
		L_2 = BaseWindowsMixedRealityCameraSettings_get_Profile_m450FA8D823C36D8D5D9B0918D6903999697A96EA(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = WindowsMixedRealityCameraSettingsProfile_get_RenderFromPVCameraForMixedRealityCapture_mA079DB5220894D6FFAEE2BDD893962136A6E6BBE_inline(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B_il2cpp_TypeInfo_var);
		bool L_4 = ((BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B_StaticFields*)il2cpp_codegen_static_fields_for(BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B_il2cpp_TypeInfo_var))->get_isTryGetViewConfigurationSupported_11();
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// global::Windows.Graphics.Holographic.HolographicViewConfiguration viewConfiguration = global::Windows.Graphics.Holographic.HolographicDisplay.GetDefault()?.TryGetViewConfiguration(global::Windows.Graphics.Holographic.HolographicViewConfigurationKind.PhotoVideoCamera);
		HolographicDisplay_t64D6F94B22A96A3AB13B7935EBDAE901CE418B6E * L_5;
		L_5 = HolographicDisplay_GetDefault_m0F00077DA9B4ABA9BB4545AE0CE23017D8ABB4F3(/*hidden argument*/NULL);
		HolographicDisplay_t64D6F94B22A96A3AB13B7935EBDAE901CE418B6E * L_6 = L_5;
		G_B4_0 = L_6;
		if (L_6)
		{
			G_B5_0 = L_6;
			goto IL_0034;
		}
	}
	{
		G_B6_0 = ((HolographicViewConfiguration_tE179E9B0B22770D34F8757D4314359560DC2CBCB *)(NULL));
		goto IL_003a;
	}

IL_0034:
	{
		NullCheck(G_B5_0);
		HolographicViewConfiguration_tE179E9B0B22770D34F8757D4314359560DC2CBCB * L_7;
		L_7 = HolographicDisplay_TryGetViewConfiguration_m3BA447E93CCABA413509B300E575D8739916C121(G_B5_0, 1, /*hidden argument*/NULL);
		G_B6_0 = L_7;
	}

IL_003a:
	{
		V_0 = G_B6_0;
		// if (viewConfiguration != null)
		HolographicViewConfiguration_tE179E9B0B22770D34F8757D4314359560DC2CBCB * L_8 = V_0;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		// viewConfiguration.IsEnabled = true;
		HolographicViewConfiguration_tE179E9B0B22770D34F8757D4314359560DC2CBCB * L_9 = V_0;
		NullCheck(L_9);
		HolographicViewConfiguration_put_IsEnabled_mD1763BD67038C5B79F0B8E0C7AE210286203A62E(L_9, (bool)1, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::get_IsProjectionOverrideEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseWindowsMixedRealityCameraSettings_get_IsProjectionOverrideEnabled_m7F4D569E6EBEBE06CA578C955EC3E1D971DA0A42 (BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return projectionOverride != null && projectionOverride.ReadingModeEnabled; }
		ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD * L_0 = __this->get_projectionOverride_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD * L_2 = __this->get_projectionOverride_13();
		NullCheck(L_2);
		bool L_3;
		L_3 = ProjectionOverride_get_ReadingModeEnabled_m092707B112241BB475ADB11EEFF36D5B6A72752E_inline(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::set_IsProjectionOverrideEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_set_IsProjectionOverrideEnabled_m7473DB1B7198E9CD3FC442ADA849230C3D47D486 (BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentExtensions_EnsureComponent_TisProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD_m8D147525871AC82A4E7AEEA13450F13F2A028EAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value && projectionOverride == null)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD * L_1 = __this->get_projectionOverride_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// projectionOverride = CameraCache.Main.EnsureComponent<ProjectionOverride>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3;
		L_3 = CameraCache_get_Main_m9B531633C9F0EEFE28FE56E6F9609A91E0EC3F5A(/*hidden argument*/NULL);
		ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD * L_4;
		L_4 = ComponentExtensions_EnsureComponent_TisProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD_m8D147525871AC82A4E7AEEA13450F13F2A028EAD(L_3, /*hidden argument*/ComponentExtensions_EnsureComponent_TisProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD_m8D147525871AC82A4E7AEEA13450F13F2A028EAD_RuntimeMethod_var);
		__this->set_projectionOverride_13(L_4);
	}

IL_0021:
	{
		// if (projectionOverride != null)
		ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD * L_5 = __this->get_projectionOverride_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		// projectionOverride.ReadingModeEnabled = value;
		ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD * L_7 = __this->get_projectionOverride_13();
		bool L_8 = ___value0;
		NullCheck(L_7);
		ProjectionOverride_set_ReadingModeEnabled_mD98C405CAA8D6392109B5ED0848BB06AA15B994B_inline(L_7, L_8, /*hidden argument*/NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::InitializeReprojectionUpdater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_InitializeReprojectionUpdater_mFA83B44ECACF9FF04E85BB0B0A2DAFFD9ADC18F6 (BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentExtensions_EnsureComponent_TisWindowsMixedRealityReprojectionUpdater_tE7383297DACC1F627D8A9E069D322491647EC5E5_mC53936037538A3468AD309C2FFF6CF85DC2FD7F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (reprojectionUpdater == null && Profile != null)
		WindowsMixedRealityReprojectionUpdater_tE7383297DACC1F627D8A9E069D322491647EC5E5 * L_0 = __this->get_reprojectionUpdater_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3 * L_2;
		L_2 = BaseWindowsMixedRealityCameraSettings_get_Profile_m450FA8D823C36D8D5D9B0918D6903999697A96EA(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		// reprojectionUpdater = CameraCache.Main.EnsureComponent<WindowsMixedRealityReprojectionUpdater>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4;
		L_4 = CameraCache_get_Main_m9B531633C9F0EEFE28FE56E6F9609A91E0EC3F5A(/*hidden argument*/NULL);
		WindowsMixedRealityReprojectionUpdater_tE7383297DACC1F627D8A9E069D322491647EC5E5 * L_5;
		L_5 = ComponentExtensions_EnsureComponent_TisWindowsMixedRealityReprojectionUpdater_tE7383297DACC1F627D8A9E069D322491647EC5E5_mC53936037538A3468AD309C2FFF6CF85DC2FD7F7(L_4, /*hidden argument*/ComponentExtensions_EnsureComponent_TisWindowsMixedRealityReprojectionUpdater_tE7383297DACC1F627D8A9E069D322491647EC5E5_mC53936037538A3468AD309C2FFF6CF85DC2FD7F7_RuntimeMethod_var);
		__this->set_reprojectionUpdater_12(L_5);
		// reprojectionUpdater.ReprojectionMethod = Profile.ReprojectionMethod;
		WindowsMixedRealityReprojectionUpdater_tE7383297DACC1F627D8A9E069D322491647EC5E5 * L_6 = __this->get_reprojectionUpdater_12();
		WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3 * L_7;
		L_7 = BaseWindowsMixedRealityCameraSettings_get_Profile_m450FA8D823C36D8D5D9B0918D6903999697A96EA(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = WindowsMixedRealityCameraSettingsProfile_get_ReprojectionMethod_m2E1568953F627FD08E366A0054F2B806255F2ABD_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		WindowsMixedRealityReprojectionUpdater_set_ReprojectionMethod_m5067010F5FD603EB7C057D568562B0AA8662ABEA_inline(L_6, L_8, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::UninitializeReprojectionUpdater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_UninitializeReprojectionUpdater_m1A3BBEE0CD61AD22E25943809FAFAB07F1343842 (BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (reprojectionUpdater != null)
		WindowsMixedRealityReprojectionUpdater_tE7383297DACC1F627D8A9E069D322491647EC5E5 * L_0 = __this->get_reprojectionUpdater_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// UnityObjectExtensions.DestroyObject(reprojectionUpdater);
		WindowsMixedRealityReprojectionUpdater_tE7383297DACC1F627D8A9E069D322491647EC5E5 * L_2 = __this->get_reprojectionUpdater_12();
		UnityObjectExtensions_DestroyObject_mB8E69D3C058D93AA78366751511A30F2187EDF29(L_2, (0.0f), /*hidden argument*/NULL);
		// reprojectionUpdater = null;
		__this->set_reprojectionUpdater_12((WindowsMixedRealityReprojectionUpdater_tE7383297DACC1F627D8A9E069D322491647EC5E5 *)NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::InitializeProjectionOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_InitializeProjectionOverride_mA581C2B0692B61E57ACC761085E973F42E878266 (BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentExtensions_EnsureComponent_TisProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD_m8D147525871AC82A4E7AEEA13450F13F2A028EAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (projectionOverride == null && Profile != null && Profile.ReadingModeEnabled)
		ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD * L_0 = __this->get_projectionOverride_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3 * L_2;
		L_2 = BaseWindowsMixedRealityCameraSettings_get_Profile_m450FA8D823C36D8D5D9B0918D6903999697A96EA(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3 * L_4;
		L_4 = BaseWindowsMixedRealityCameraSettings_get_Profile_m450FA8D823C36D8D5D9B0918D6903999697A96EA(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = WindowsMixedRealityCameraSettingsProfile_get_ReadingModeEnabled_mA0898DBBFF3DC063392B184C4A078B5ADCC0EA2B_inline(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		// projectionOverride = CameraCache.Main.EnsureComponent<ProjectionOverride>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6;
		L_6 = CameraCache_get_Main_m9B531633C9F0EEFE28FE56E6F9609A91E0EC3F5A(/*hidden argument*/NULL);
		ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD * L_7;
		L_7 = ComponentExtensions_EnsureComponent_TisProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD_m8D147525871AC82A4E7AEEA13450F13F2A028EAD(L_6, /*hidden argument*/ComponentExtensions_EnsureComponent_TisProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD_m8D147525871AC82A4E7AEEA13450F13F2A028EAD_RuntimeMethod_var);
		__this->set_projectionOverride_13(L_7);
		// projectionOverride.ReadingModeEnabled = Profile.ReadingModeEnabled;
		ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD * L_8 = __this->get_projectionOverride_13();
		WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3 * L_9;
		L_9 = BaseWindowsMixedRealityCameraSettings_get_Profile_m450FA8D823C36D8D5D9B0918D6903999697A96EA(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_10;
		L_10 = WindowsMixedRealityCameraSettingsProfile_get_ReadingModeEnabled_mA0898DBBFF3DC063392B184C4A078B5ADCC0EA2B_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		ProjectionOverride_set_ReadingModeEnabled_mD98C405CAA8D6392109B5ED0848BB06AA15B994B_inline(L_8, L_10, /*hidden argument*/NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::UninitializeProjectionOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_UninitializeProjectionOverride_m974492B3D6EC7A10BBED7AEFEE8D245DF428570F (BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (projectionOverride != null)
		ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD * L_0 = __this->get_projectionOverride_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// UnityObjectExtensions.DestroyObject(projectionOverride);
		ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD * L_2 = __this->get_projectionOverride_13();
		UnityObjectExtensions_DestroyObject_mB8E69D3C058D93AA78366751511A30F2187EDF29(L_2, (0.0f), /*hidden argument*/NULL);
		// projectionOverride = null;
		__this->set_projectionOverride_13((ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD *)NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings__cctor_m18A2CDC7BD11DE7A7F2F7F0F1F2F8791CCC940F6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA278AC2AB24AE8B6B788E58D8BB858243A88D659);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE40907DDA6EBABF97530E95F91B079379E37399);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAEE63AB5907DDB2FFDA6A074F7B5BF1561A4A42);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly bool isTryGetViewConfigurationSupported = Windows.Utilities.WindowsApiChecker.IsMethodAvailable(
		//     "Windows.Graphics.Holographic",
		//     "HolographicDisplay",
		//     "TryGetViewConfiguration");
		bool L_0;
		L_0 = WindowsApiChecker_IsMethodAvailable_mC2FB7E9903BCA9BB925E932F89B70F2FE1B41907(_stringLiteralCE40907DDA6EBABF97530E95F91B079379E37399, _stringLiteralA278AC2AB24AE8B6B788E58D8BB858243A88D659, _stringLiteralFAEE63AB5907DDB2FFDA6A074F7B5BF1561A4A42, /*hidden argument*/NULL);
		((BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B_StaticFields*)il2cpp_codegen_static_fields_for(BaseWindowsMixedRealityCameraSettings_t53F9163977448446A2A6039FD6191BD991274A5B_il2cpp_TypeInfo_var))->set_isTryGetViewConfigurationSupported_11(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride::get_ReadingModeEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProjectionOverride_get_ReadingModeEnabled_m092707B112241BB475ADB11EEFF36D5B6A72752E (ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD * __this, const RuntimeMethod* method)
{
	{
		// public bool ReadingModeEnabled { get; set; } = false;
		bool L_0 = __this->get_U3CReadingModeEnabledU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride::set_ReadingModeEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectionOverride_set_ReadingModeEnabled_mD98C405CAA8D6392109B5ED0848BB06AA15B994B (ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ReadingModeEnabled { get; set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CReadingModeEnabledU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride::ResetViewMatricesOnFrameEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProjectionOverride_ResetViewMatricesOnFrameEnd_mD6BC6E3E145885E9D257145985FBED80557A6EFF (ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CResetViewMatricesOnFrameEndU3Ed__4_t606760AA02E5E7D22B10BF928642555E33EAEB71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CResetViewMatricesOnFrameEndU3Ed__4_t606760AA02E5E7D22B10BF928642555E33EAEB71 * L_0 = (U3CResetViewMatricesOnFrameEndU3Ed__4_t606760AA02E5E7D22B10BF928642555E33EAEB71 *)il2cpp_codegen_object_new(U3CResetViewMatricesOnFrameEndU3Ed__4_t606760AA02E5E7D22B10BF928642555E33EAEB71_il2cpp_TypeInfo_var);
		U3CResetViewMatricesOnFrameEndU3Ed__4__ctor_m7BCB3FBC5A5A82DBAE437855058390952E14DC09(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride::OnPreCull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectionOverride_OnPreCull_m191D0777202DFE4A42721F490149CAA6E1B8D89A (ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t31E4237CD71691F2A08976038920F5158F8ECE37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_tA49AABD4EFD400EEEE676F5A9CA3DC8DF057FA7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_1;
	memset((&V_1), 0, sizeof(V_1));
	HolographicFrame_t16CC7D90BCAF0D8BAC1D7C941B18567F460C99EC * V_2 = NULL;
	HolographicFramePrediction_t971A2A1EBD8FF3A81ED5996ADBFADAF46EAAC804 * V_3 = NULL;
	int32_t V_4 = 0;
	HolographicCameraPose_t652F9761A7F2DF4712360C52FC4BDB51BA96FD4E * V_5 = NULL;
	HolographicStereoTransform_t0AE6816B48D0C9E474DBB5F3C05F54323DBE287A  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// if (!ReadingModeEnabled)
		bool L_0;
		L_0 = ProjectionOverride_get_ReadingModeEnabled_m092707B112241BB475ADB11EEFF36D5B6A72752E_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// StartCoroutine(ResetViewMatricesOnFrameEnd());
		RuntimeObject* L_1;
		L_1 = ProjectionOverride_ResetViewMatricesOnFrameEnd_mD6BC6E3E145885E9D257145985FBED80557A6EFF(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// Matrix4x4 leftProj = CameraCache.Main.GetStereoProjectionMatrix(Camera.StereoscopicEye.Left);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3;
		L_3 = CameraCache_get_Main_m9B531633C9F0EEFE28FE56E6F9609A91E0EC3F5A(/*hidden argument*/NULL);
		NullCheck(L_3);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_4;
		L_4 = Camera_GetStereoProjectionMatrix_m6E75E4F868D61EB7D3FF3665DEBA7E6FC2910A94(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_4;
		// Matrix4x4 rightProj = CameraCache.Main.GetStereoProjectionMatrix(Camera.StereoscopicEye.Right);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5;
		L_5 = CameraCache_get_Main_m9B531633C9F0EEFE28FE56E6F9609A91E0EC3F5A(/*hidden argument*/NULL);
		NullCheck(L_5);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_6;
		L_6 = Camera_GetStereoProjectionMatrix_m6E75E4F868D61EB7D3FF3665DEBA7E6FC2910A94(L_5, 1, /*hidden argument*/NULL);
		V_1 = L_6;
		// leftProj.m00 *= ResolutionScale;
		float* L_7 = (&V_0)->get_address_of_m00_0();
		float* L_8 = L_7;
		float L_9 = *((float*)L_8);
		*((float*)L_8) = (float)((float)il2cpp_codegen_multiply((float)L_9, (float)(1.36363637f)));
		// leftProj.m11 *= ResolutionScale;
		float* L_10 = (&V_0)->get_address_of_m11_5();
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		*((float*)L_11) = (float)((float)il2cpp_codegen_multiply((float)L_12, (float)(1.36363637f)));
		// rightProj.m00 *= ResolutionScale;
		float* L_13 = (&V_1)->get_address_of_m00_0();
		float* L_14 = L_13;
		float L_15 = *((float*)L_14);
		*((float*)L_14) = (float)((float)il2cpp_codegen_multiply((float)L_15, (float)(1.36363637f)));
		// rightProj.m11 *= ResolutionScale;
		float* L_16 = (&V_1)->get_address_of_m11_5();
		float* L_17 = L_16;
		float L_18 = *((float*)L_17);
		*((float*)L_17) = (float)((float)il2cpp_codegen_multiply((float)L_18, (float)(1.36363637f)));
		// CameraCache.Main.SetStereoProjectionMatrix(Camera.StereoscopicEye.Left, leftProj);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_19;
		L_19 = CameraCache_get_Main_m9B531633C9F0EEFE28FE56E6F9609A91E0EC3F5A(/*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_20 = V_0;
		NullCheck(L_19);
		Camera_SetStereoProjectionMatrix_mADBD0709A2C5CC89E96DAAE97D145BCF76E12D3A(L_19, 0, L_20, /*hidden argument*/NULL);
		// CameraCache.Main.SetStereoProjectionMatrix(Camera.StereoscopicEye.Right, rightProj);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_21;
		L_21 = CameraCache_get_Main_m9B531633C9F0EEFE28FE56E6F9609A91E0EC3F5A(/*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_22 = V_1;
		NullCheck(L_21);
		Camera_SetStereoProjectionMatrix_mADBD0709A2C5CC89E96DAAE97D145BCF76E12D3A(L_21, 1, L_22, /*hidden argument*/NULL);
		// HolographicFrame holographicFrame = WindowsMixedRealityUtilities.CurrentWindowsHolographicFrame;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		HolographicFrame_t16CC7D90BCAF0D8BAC1D7C941B18567F460C99EC * L_23;
		L_23 = WindowsMixedRealityUtilities_get_CurrentWindowsHolographicFrame_mBA2F0453EFE61DB40089039923577164C7534F23(/*hidden argument*/NULL);
		V_2 = L_23;
		// if (holographicFrame != null)
		HolographicFrame_t16CC7D90BCAF0D8BAC1D7C941B18567F460C99EC * L_24 = V_2;
		if (!L_24)
		{
			goto IL_013c;
		}
	}
	{
		// HolographicFramePrediction prediction = holographicFrame.CurrentPrediction;
		HolographicFrame_t16CC7D90BCAF0D8BAC1D7C941B18567F460C99EC * L_25 = V_2;
		NullCheck(L_25);
		HolographicFramePrediction_t971A2A1EBD8FF3A81ED5996ADBFADAF46EAAC804 * L_26;
		L_26 = HolographicFrame_get_CurrentPrediction_m4590326A2A9C89E3BF11D93858109E1EA2C68BF4(L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		// for (int i = 0; i < prediction.CameraPoses.Count; ++i)
		V_4 = 0;
		goto IL_012a;
	}

IL_00a1:
	{
		// HolographicCameraPose cameraPose = prediction.CameraPoses[i];
		HolographicFramePrediction_t971A2A1EBD8FF3A81ED5996ADBFADAF46EAAC804 * L_27 = V_3;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = HolographicFramePrediction_get_CameraPoses_m2BCF6322F1A7617A12776781E1F6AC9FD841A299(L_27, /*hidden argument*/NULL);
		int32_t L_29 = V_4;
		NullCheck(L_28);
		HolographicCameraPose_t652F9761A7F2DF4712360C52FC4BDB51BA96FD4E * L_30;
		L_30 = InterfaceFuncInvoker1< HolographicCameraPose_t652F9761A7F2DF4712360C52FC4BDB51BA96FD4E *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<Windows.Graphics.Holographic.HolographicCameraPose>::get_Item(System.Int32) */, IReadOnlyList_1_tA49AABD4EFD400EEEE676F5A9CA3DC8DF057FA7E_il2cpp_TypeInfo_var, L_28, L_29);
		V_5 = L_30;
		// if (cameraPose.HolographicCamera.CanOverrideViewport)
		HolographicCameraPose_t652F9761A7F2DF4712360C52FC4BDB51BA96FD4E * L_31 = V_5;
		NullCheck(L_31);
		HolographicCamera_t4122B595738F9F797D8FBBC3CF51C6410941509B * L_32;
		L_32 = HolographicCameraPose_get_HolographicCamera_mC463D4B7DE847AA8F390DD29244C31F51AEFF0BA(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = HolographicCamera_get_CanOverrideViewport_mC0AB734D470DF253A792CDACF8F28296DE88964E(L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0124;
		}
	}
	{
		// HolographicStereoTransform stereoProjection = cameraPose.ProjectionTransform;
		HolographicCameraPose_t652F9761A7F2DF4712360C52FC4BDB51BA96FD4E * L_34 = V_5;
		NullCheck(L_34);
		HolographicStereoTransform_t0AE6816B48D0C9E474DBB5F3C05F54323DBE287A  L_35;
		L_35 = HolographicCameraPose_get_ProjectionTransform_m5161159FEB13A67624D7D1EE68B7D99A19CEBE22(L_34, /*hidden argument*/NULL);
		V_6 = L_35;
		// stereoProjection.Left.M11 *= ResolutionScale;
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * L_36 = (&V_6)->get_address_of_Left_0();
		float* L_37 = L_36->get_address_of_M11_0();
		float* L_38 = L_37;
		float L_39 = *((float*)L_38);
		*((float*)L_38) = (float)((float)il2cpp_codegen_multiply((float)L_39, (float)(1.36363637f)));
		// stereoProjection.Left.M22 *= ResolutionScale;
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * L_40 = (&V_6)->get_address_of_Left_0();
		float* L_41 = L_40->get_address_of_M22_5();
		float* L_42 = L_41;
		float L_43 = *((float*)L_42);
		*((float*)L_42) = (float)((float)il2cpp_codegen_multiply((float)L_43, (float)(1.36363637f)));
		// stereoProjection.Right.M11 *= ResolutionScale;
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * L_44 = (&V_6)->get_address_of_Right_1();
		float* L_45 = L_44->get_address_of_M11_0();
		float* L_46 = L_45;
		float L_47 = *((float*)L_46);
		*((float*)L_46) = (float)((float)il2cpp_codegen_multiply((float)L_47, (float)(1.36363637f)));
		// stereoProjection.Right.M22 *= ResolutionScale;
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * L_48 = (&V_6)->get_address_of_Right_1();
		float* L_49 = L_48->get_address_of_M22_5();
		float* L_50 = L_49;
		float L_51 = *((float*)L_50);
		*((float*)L_50) = (float)((float)il2cpp_codegen_multiply((float)L_51, (float)(1.36363637f)));
		// cameraPose.OverrideProjectionTransform(stereoProjection);
		HolographicCameraPose_t652F9761A7F2DF4712360C52FC4BDB51BA96FD4E * L_52 = V_5;
		HolographicStereoTransform_t0AE6816B48D0C9E474DBB5F3C05F54323DBE287A  L_53 = V_6;
		NullCheck(L_52);
		HolographicCameraPose_OverrideProjectionTransform_m2F0B6BC8FCCE8C846BA2E3E8074D3D8E8346B9C1(L_52, L_53, /*hidden argument*/NULL);
	}

IL_0124:
	{
		// for (int i = 0; i < prediction.CameraPoses.Count; ++i)
		int32_t L_54 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_012a:
	{
		// for (int i = 0; i < prediction.CameraPoses.Count; ++i)
		int32_t L_55 = V_4;
		HolographicFramePrediction_t971A2A1EBD8FF3A81ED5996ADBFADAF46EAAC804 * L_56 = V_3;
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = HolographicFramePrediction_get_CameraPoses_m2BCF6322F1A7617A12776781E1F6AC9FD841A299(L_56, /*hidden argument*/NULL);
		NullCheck(L_57);
		int32_t L_58;
		L_58 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Windows.Graphics.Holographic.HolographicCameraPose>::get_Count() */, IReadOnlyCollection_1_t31E4237CD71691F2A08976038920F5158F8ECE37_il2cpp_TypeInfo_var, L_57);
		if ((((int32_t)L_55) < ((int32_t)L_58)))
		{
			goto IL_00a1;
		}
	}

IL_013c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectionOverride__ctor_mD66EE3F3F2BDCA30961C54F08F1E428D0EB024F0 (ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsExtensions::ToMRTKHandedness(Windows.UI.Input.Spatial.SpatialInteractionSourceHandedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t WindowsExtensions_ToMRTKHandedness_m534133E3A0A25566F6BC9C6D505EDA4D046D5985 (int32_t ___handedness0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___handedness0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0018;
			}
			case 1:
			{
				goto IL_0014;
			}
			case 2:
			{
				goto IL_0016;
			}
		}
	}
	{
		goto IL_0018;
	}

IL_0014:
	{
		// return Handedness.Left;
		return (uint8_t)(1);
	}

IL_0016:
	{
		// return Handedness.Right;
		return (uint8_t)(2);
	}

IL_0018:
	{
		// return Handedness.None;
		return (uint8_t)(0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition__ctor_m1C9B6C1DB89B0A280C569A9DDFF43E34FB7C44D4 (WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13 * __this, RuntimeObject* ___source0, uint8_t ___handedness1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WindowsMixedRealityArticulatedHandDefinition(IMixedRealityInputSource source, Handedness handedness) : base(source, handedness)
		RuntimeObject* L_0 = ___source0;
		uint8_t L_1 = ___handedness1;
		IL2CPP_RUNTIME_CLASS_INIT(ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5_il2cpp_TypeInfo_var);
		ArticulatedHandDefinition__ctor_m502F18A61CCBE95F3FDE120D47C7A12619A83087(__this, L_0, L_1, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::SetHandMeshObserver(Windows.UI.Input.Spatial.SpatialInteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition_SetHandMeshObserver_mD1CE855E58B5E4B1965F7E3D8D2641C5FC563E0F (WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13 * __this, SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * ___sourceState0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF_mBC42BD766C5FAED2F68AD87C32A6EEEFD3653877_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_3(__this);
		SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * L_0 = ___sourceState0;
		(&V_0)->set_sourceState_2(L_0);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_1;
		L_1 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF  L_2 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF_mBC42BD766C5FAED2F68AD87C32A6EEEFD3653877((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF_mBC42BD766C5FAED2F68AD87C32A6EEEFD3653877_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::InitializeUVs(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition_InitializeUVs_mCC6F92C362E08F1039DE38A324C22395F4393C08 (WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___neutralPoseVertices0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD51862061BEF6981AB4BE866F6A89BA4489E5DDC);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// if (neutralPoseVertices.Length == 0)
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = ___neutralPoseVertices0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_000e;
		}
	}
	{
		// Debug.LogError("Loaded 0 verts for neutralPoseVertices");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralD51862061BEF6981AB4BE866F6A89BA4489E5DDC, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// float minY = neutralPoseVertices[0].y;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = ___neutralPoseVertices0;
		NullCheck(L_1);
		float L_2 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_y_3();
		V_0 = L_2;
		// float maxY = minY;
		float L_3 = V_0;
		V_1 = L_3;
		// for (int ix = 1; ix < neutralPoseVertices.Length; ix++)
		V_3 = 1;
		goto IL_0054;
	}

IL_0021:
	{
		// Vector3 p = neutralPoseVertices[ix];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_4 = ___neutralPoseVertices0;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		// if (p.y < minY)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_4;
		float L_9 = L_8.get_y_3();
		float L_10 = V_0;
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_003e;
		}
	}
	{
		// minY = p.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_4;
		float L_12 = L_11.get_y_3();
		V_0 = L_12;
		// }
		goto IL_0050;
	}

IL_003e:
	{
		// else if (p.y > maxY)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_4;
		float L_14 = L_13.get_y_3();
		float L_15 = V_1;
		if ((!(((float)L_14) > ((float)L_15))))
		{
			goto IL_0050;
		}
	}
	{
		// maxY = p.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_4;
		float L_17 = L_16.get_y_3();
		V_1 = L_17;
	}

IL_0050:
	{
		// for (int ix = 1; ix < neutralPoseVertices.Length; ix++)
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0054:
	{
		// for (int ix = 1; ix < neutralPoseVertices.Length; ix++)
		int32_t L_19 = V_3;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_20 = ___neutralPoseVertices0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_0021;
		}
	}
	{
		// float scale = 1.0f / (maxY - minY);
		float L_21 = V_1;
		float L_22 = V_0;
		V_2 = ((float)((float)(1.0f)/(float)((float)il2cpp_codegen_subtract((float)L_21, (float)L_22))));
		// handMeshUVsUnity = new Vector2[neutralPoseVertices.Length];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_23 = ___neutralPoseVertices0;
		NullCheck(L_23);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_24 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))));
		__this->set_handMeshUVsUnity_25(L_24);
		// for (int ix = 0; ix < neutralPoseVertices.Length; ix++)
		V_5 = 0;
		goto IL_00b3;
	}

IL_0077:
	{
		// Vector3 p = neutralPoseVertices[ix];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_25 = ___neutralPoseVertices0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_6 = L_28;
		// handMeshUVsUnity[ix] = new Vector2(p.x * scale + 0.5f, (p.y - minY) * scale);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_29 = __this->get_handMeshUVsUnity_25();
		int32_t L_30 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = V_6;
		float L_32 = L_31.get_x_2();
		float L_33 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = V_6;
		float L_35 = L_34.get_y_3();
		float L_36 = V_0;
		float L_37 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_38), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_32, (float)L_33)), (float)(0.5f))), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_35, (float)L_36)), (float)L_37)), /*hidden argument*/NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_38);
		// for (int ix = 0; ix < neutralPoseVertices.Length; ix++)
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00b3:
	{
		// for (int ix = 0; ix < neutralPoseVertices.Length; ix++)
		int32_t L_40 = V_5;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_41 = ___neutralPoseVertices0;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))))))
		{
			goto IL_0077;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::UpdateHandMesh(Windows.UI.Input.Spatial.SpatialInteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition_UpdateHandMesh_m352BC9ED7DF8E58986B9FB267943563BBD3717B9 (WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13 * __this, SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * ___sourceState0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m2FFBA70879C106A64CB60C455BC4CF9DF896E0D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tA111E2393BEC7A3AF2703B80A556166363998BD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t30FEE3BCBA4B47D9BBED63BF481D811EC6A39AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPlayspace_tEEDF7A044A9E8E252CF39E2F7C51AB77FC70367A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m1C8741C73000BD525E6034625DD1ED12EB07EA10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m608A59322CEE9B305CE8472969742F446EA8318A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parallel_tB59282E278156AA32B2BACBD33B31FD4C9922646_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CUpdateHandMeshU3Eb__0_mB4E5EC0EF59C2CFE7CA6DDF50C67B81807FF6A27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_t5A6783DF38B3EA4588EF45A4D24CEB810CAD4501_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityArticulatedHandDefinition_U3CUpdateHandMeshU3Eb__12_1_m2B501C35D837C3563734724E3B28D547DA64EA7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	MixedRealityHandTrackingProfile_t28838B85DF712221FF796BFD4430C1C880A0A1C8 * V_2 = NULL;
	MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C * V_3 = NULL;
	HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE * V_4 = NULL;
	HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * V_5 = NULL;
	U3CU3Ec__DisplayClass12_0_t5A6783DF38B3EA4588EF45A4D24CEB810CAD4501 * V_6 = NULL;
	HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE * V_7 = NULL;
	Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_13;
	memset((&V_13), 0, sizeof(V_13));
	HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * V_14 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C * G_B4_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B28_0 = NULL;
	RuntimeObject* G_B27_0 = NULL;
	{
		// using (UpdateHandMeshPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13_il2cpp_TypeInfo_var))->get_UpdateHandMeshPerfMarker_27();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// MixedRealityHandTrackingProfile handTrackingProfile = null;
			V_2 = (MixedRealityHandTrackingProfile_t28838B85DF712221FF796BFD4430C1C880A0A1C8 *)NULL;
			// MixedRealityInputSystemProfile inputSystemProfile = CoreServices.InputSystem?.InputSystemProfile;
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tA111E2393BEC7A3AF2703B80A556166363998BD2_il2cpp_TypeInfo_var);
			RuntimeObject* L_2;
			L_2 = CoreServices_get_InputSystem_m03F66B157660C21D67B5A6A4D132BF889CBFE440(/*hidden argument*/NULL);
			RuntimeObject* L_3 = L_2;
			G_B2_0 = L_3;
			if (L_3)
			{
				G_B3_0 = L_3;
				goto IL_001c;
			}
		}

IL_0018:
		{
			G_B4_0 = ((MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C *)(NULL));
			goto IL_0021;
		}

IL_001c:
		{
			NullCheck(G_B3_0);
			MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C * L_4;
			L_4 = InterfaceFuncInvoker0< MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C * >::Invoke(6 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_InputSystemProfile() */, IMixedRealityInputSystem_t30FEE3BCBA4B47D9BBED63BF481D811EC6A39AA1_il2cpp_TypeInfo_var, G_B3_0);
			G_B4_0 = L_4;
		}

IL_0021:
		{
			V_3 = G_B4_0;
			// if (inputSystemProfile != null)
			MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C * L_5 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_6;
			L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0032;
			}
		}

IL_002b:
		{
			// handTrackingProfile = inputSystemProfile.HandTrackingProfile;
			MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C * L_7 = V_3;
			NullCheck(L_7);
			MixedRealityHandTrackingProfile_t28838B85DF712221FF796BFD4430C1C880A0A1C8 * L_8;
			L_8 = MixedRealityInputSystemProfile_get_HandTrackingProfile_m68AB045F05D5B7E5723E8D3331E837CAC058CE7A_inline(L_7, /*hidden argument*/NULL);
			V_2 = L_8;
		}

IL_0032:
		{
			// if (handTrackingProfile == null || !handTrackingProfile.EnableHandMeshVisualization)
			MixedRealityHandTrackingProfile_t28838B85DF712221FF796BFD4430C1C880A0A1C8 * L_9 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_10;
			L_10 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_0043;
			}
		}

IL_003b:
		{
			MixedRealityHandTrackingProfile_t28838B85DF712221FF796BFD4430C1C880A0A1C8 * L_11 = V_2;
			NullCheck(L_11);
			bool L_12;
			L_12 = MixedRealityHandTrackingProfile_get_EnableHandMeshVisualization_mB6D5AC9F60725F712E448D41520791D1CD5B20BF(L_11, /*hidden argument*/NULL);
			if (L_12)
			{
				goto IL_0083;
			}
		}

IL_0043:
		{
			// if (handMeshObserver != null)
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_13 = __this->get_handMeshObserver_19();
			if (!L_13)
			{
				goto IL_007e;
			}
		}

IL_004b:
		{
			// HandMeshInfo handMeshInfo = new HandMeshInfo();
			HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * L_14 = (HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 *)il2cpp_codegen_object_new(HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28_il2cpp_TypeInfo_var);
			HandMeshInfo__ctor_mDBABBFFF584C3FF554CC84A8A1303A8AECA096FF(L_14, /*hidden argument*/NULL);
			V_5 = L_14;
			// CoreServices.InputSystem?.RaiseHandMeshUpdated(InputSource, Handedness, handMeshInfo);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tA111E2393BEC7A3AF2703B80A556166363998BD2_il2cpp_TypeInfo_var);
			RuntimeObject* L_15;
			L_15 = CoreServices_get_InputSystem_m03F66B157660C21D67B5A6A4D132BF889CBFE440(/*hidden argument*/NULL);
			RuntimeObject* L_16 = L_15;
			G_B10_0 = L_16;
			if (L_16)
			{
				G_B11_0 = L_16;
				goto IL_005d;
			}
		}

IL_005a:
		{
			goto IL_0070;
		}

IL_005d:
		{
			RuntimeObject* L_17;
			L_17 = ArticulatedHandDefinition_get_InputSource_m968B8E2F1A9BF003A7AF616CEE6DBE13967E6F78_inline(__this, /*hidden argument*/NULL);
			uint8_t L_18;
			L_18 = BaseInputSourceDefinition_get_Handedness_mC43AF6FD8EF6FADB9A73FE9A238978B9506F6A8C_inline(__this, /*hidden argument*/NULL);
			HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * L_19 = V_5;
			NullCheck(G_B11_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * >::Invoke(63 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseHandMeshUpdated(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.HandMeshInfo) */, IMixedRealityInputSystem_t30FEE3BCBA4B47D9BBED63BF481D811EC6A39AA1_il2cpp_TypeInfo_var, G_B11_0, L_17, L_18, L_19);
		}

IL_0070:
		{
			// hasRequestedHandMeshObserver = false;
			__this->set_hasRequestedHandMeshObserver_26((bool)0);
			// handMeshObserver = null;
			__this->set_handMeshObserver_19((HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 *)NULL);
		}

IL_007e:
		{
			// return;
			IL2CPP_LEAVE(0x307, FINALLY_02f9);
		}

IL_0083:
		{
			// HandPose handPose = sourceState.TryGetHandPose();
			SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * L_20 = ___sourceState0;
			NullCheck(L_20);
			HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE * L_21;
			L_21 = SpatialInteractionSourceState_TryGetHandPose_m9B623E31B753FD11674C848601622016AF260110(L_20, /*hidden argument*/NULL);
			V_4 = L_21;
			// if (handMeshObserver == null && !hasRequestedHandMeshObserver)
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_22 = __this->get_handMeshObserver_19();
			if (L_22)
			{
				goto IL_00a9;
			}
		}

IL_0093:
		{
			bool L_23 = __this->get_hasRequestedHandMeshObserver_26();
			if (L_23)
			{
				goto IL_00a9;
			}
		}

IL_009b:
		{
			// SetHandMeshObserver(sourceState);
			SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * L_24 = ___sourceState0;
			WindowsMixedRealityArticulatedHandDefinition_SetHandMeshObserver_mD1CE855E58B5E4B1965F7E3D8D2641C5FC563E0F(__this, L_24, /*hidden argument*/NULL);
			// hasRequestedHandMeshObserver = true;
			__this->set_hasRequestedHandMeshObserver_26((bool)1);
		}

IL_00a9:
		{
			// if (handMeshObserver != null && handPose != null)
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_25 = __this->get_handMeshObserver_19();
			if (!L_25)
			{
				goto IL_02f7;
			}
		}

IL_00b4:
		{
			HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE * L_26 = V_4;
			if (!L_26)
			{
				goto IL_02f7;
			}
		}

IL_00bb:
		{
			// if (handMeshTriangleIndices == null)
			UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_27 = __this->get_handMeshTriangleIndices_20();
			if (L_27)
			{
				goto IL_01a8;
			}
		}

IL_00c6:
		{
			U3CU3Ec__DisplayClass12_0_t5A6783DF38B3EA4588EF45A4D24CEB810CAD4501 * L_28 = (U3CU3Ec__DisplayClass12_0_t5A6783DF38B3EA4588EF45A4D24CEB810CAD4501 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_t5A6783DF38B3EA4588EF45A4D24CEB810CAD4501_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass12_0__ctor_m13D0E1FEE7089E1A7B64AABEF325294D80BC81D5(L_28, /*hidden argument*/NULL);
			V_6 = L_28;
			// handMeshTriangleIndices = new ushort[handMeshObserver.TriangleIndexCount];
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_29 = __this->get_handMeshObserver_19();
			NullCheck(L_29);
			uint32_t L_30;
			L_30 = HandMeshObserver_get_TriangleIndexCount_mFF115FBB6E545038C1BD1420DF2873C5172D54FA(L_29, /*hidden argument*/NULL);
			UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_31 = (UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)SZArrayNew(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var, (uint32_t)L_30);
			__this->set_handMeshTriangleIndices_20(L_31);
			// handMeshTriangleIndicesUnity = new int[handMeshObserver.TriangleIndexCount];
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_32 = __this->get_handMeshObserver_19();
			NullCheck(L_32);
			uint32_t L_33;
			L_33 = HandMeshObserver_get_TriangleIndexCount_mFF115FBB6E545038C1BD1420DF2873C5172D54FA(L_32, /*hidden argument*/NULL);
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_34 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_33);
			__this->set_handMeshTriangleIndicesUnity_24(L_34);
			// handMeshObserver.GetTriangleIndices(handMeshTriangleIndices);
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_35 = __this->get_handMeshObserver_19();
			UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_36 = __this->get_handMeshTriangleIndices_20();
			NullCheck(L_35);
			HandMeshObserver_GetTriangleIndices_m822E18BFBC457E8CDFF9DF03D0316DE316631424(L_35, L_36, /*hidden argument*/NULL);
			// Array.Copy(handMeshTriangleIndices, handMeshTriangleIndicesUnity, (int)handMeshObserver.TriangleIndexCount);
			UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_37 = __this->get_handMeshTriangleIndices_20();
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_38 = __this->get_handMeshTriangleIndicesUnity_24();
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_39 = __this->get_handMeshObserver_19();
			NullCheck(L_39);
			uint32_t L_40;
			L_40 = HandMeshObserver_get_TriangleIndexCount_mFF115FBB6E545038C1BD1420DF2873C5172D54FA(L_39, /*hidden argument*/NULL);
			Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803((RuntimeArray *)(RuntimeArray *)L_37, (RuntimeArray *)(RuntimeArray *)L_38, L_40, /*hidden argument*/NULL);
			// Vector3[] neutralPoseVertices = new Vector3[handMeshObserver.VertexCount];
			U3CU3Ec__DisplayClass12_0_t5A6783DF38B3EA4588EF45A4D24CEB810CAD4501 * L_41 = V_6;
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_42 = __this->get_handMeshObserver_19();
			NullCheck(L_42);
			uint32_t L_43;
			L_43 = HandMeshObserver_get_VertexCount_mF44DDE4B9A043F460CE7C8F9DA46C4B7FB0E82B6(L_42, /*hidden argument*/NULL);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_44 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_43);
			NullCheck(L_41);
			L_41->set_neutralPoseVertices_1(L_44);
			// HandPose neutralPose = handMeshObserver.NeutralPose;
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_45 = __this->get_handMeshObserver_19();
			NullCheck(L_45);
			HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE * L_46;
			L_46 = HandMeshObserver_get_NeutralPose_m5E28EB4B46D13DFD8E3556DCCC387C44D06BD9F9(L_45, /*hidden argument*/NULL);
			V_7 = L_46;
			// var neutralVertexAndNormals = new HandMeshVertex[handMeshObserver.VertexCount];
			U3CU3Ec__DisplayClass12_0_t5A6783DF38B3EA4588EF45A4D24CEB810CAD4501 * L_47 = V_6;
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_48 = __this->get_handMeshObserver_19();
			NullCheck(L_48);
			uint32_t L_49;
			L_49 = HandMeshObserver_get_VertexCount_mF44DDE4B9A043F460CE7C8F9DA46C4B7FB0E82B6(L_48, /*hidden argument*/NULL);
			HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* L_50 = (HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1*)(HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1*)SZArrayNew(HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1_il2cpp_TypeInfo_var, (uint32_t)L_49);
			NullCheck(L_47);
			L_47->set_neutralVertexAndNormals_0(L_50);
			// HandMeshVertexState handMeshVertexState = handMeshObserver.GetVertexStateForPose(neutralPose);
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_51 = __this->get_handMeshObserver_19();
			HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE * L_52 = V_7;
			NullCheck(L_51);
			HandMeshVertexState_t472D7CF8982D6D93200D405B7F990404C022A9F8 * L_53;
			L_53 = HandMeshObserver_GetVertexStateForPose_m15A85E28A95DD93A7CEEB07C98A9240A7EED5B38(L_51, L_52, /*hidden argument*/NULL);
			// handMeshVertexState.GetVertices(neutralVertexAndNormals);
			U3CU3Ec__DisplayClass12_0_t5A6783DF38B3EA4588EF45A4D24CEB810CAD4501 * L_54 = V_6;
			NullCheck(L_54);
			HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* L_55 = L_54->get_neutralVertexAndNormals_0();
			NullCheck(L_53);
			HandMeshVertexState_GetVertices_mF42AFC0B0A958259F449205CA0FED73239595CBF(L_53, L_55, /*hidden argument*/NULL);
			// Parallel.For(0, handMeshObserver.VertexCount, i =>
			// {
			//     neutralVertexAndNormals[i].Position.ConvertToUnityVector3(ref neutralPoseVertices[i]);
			// });
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_56 = __this->get_handMeshObserver_19();
			NullCheck(L_56);
			uint32_t L_57;
			L_57 = HandMeshObserver_get_VertexCount_mF44DDE4B9A043F460CE7C8F9DA46C4B7FB0E82B6(L_56, /*hidden argument*/NULL);
			U3CU3Ec__DisplayClass12_0_t5A6783DF38B3EA4588EF45A4D24CEB810CAD4501 * L_58 = V_6;
			Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * L_59 = (Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 *)il2cpp_codegen_object_new(Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941_il2cpp_TypeInfo_var);
			Action_1__ctor_m2FFBA70879C106A64CB60C455BC4CF9DF896E0D1(L_59, L_58, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass12_0_U3CUpdateHandMeshU3Eb__0_mB4E5EC0EF59C2CFE7CA6DDF50C67B81807FF6A27_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2FFBA70879C106A64CB60C455BC4CF9DF896E0D1_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Parallel_tB59282E278156AA32B2BACBD33B31FD4C9922646_il2cpp_TypeInfo_var);
			ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3  L_60;
			L_60 = Parallel_For_m4F8049B55A36C35CB5C07476DA5A97FE0393A34B(((int64_t)((int64_t)0)), ((int64_t)((uint64_t)L_57)), L_59, /*hidden argument*/NULL);
			// InitializeUVs(neutralPoseVertices);
			U3CU3Ec__DisplayClass12_0_t5A6783DF38B3EA4588EF45A4D24CEB810CAD4501 * L_61 = V_6;
			NullCheck(L_61);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_62 = L_61->get_neutralPoseVertices_1();
			WindowsMixedRealityArticulatedHandDefinition_InitializeUVs_mCC6F92C362E08F1039DE38A324C22395F4393C08(__this, L_62, /*hidden argument*/NULL);
		}

IL_01a8:
		{
			// if (vertexAndNormals == null)
			HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* L_63 = __this->get_vertexAndNormals_21();
			if (L_63)
			{
				goto IL_01f2;
			}
		}

IL_01b0:
		{
			// vertexAndNormals = new HandMeshVertex[handMeshObserver.VertexCount];
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_64 = __this->get_handMeshObserver_19();
			NullCheck(L_64);
			uint32_t L_65;
			L_65 = HandMeshObserver_get_VertexCount_mF44DDE4B9A043F460CE7C8F9DA46C4B7FB0E82B6(L_64, /*hidden argument*/NULL);
			HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* L_66 = (HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1*)(HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1*)SZArrayNew(HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1_il2cpp_TypeInfo_var, (uint32_t)L_65);
			__this->set_vertexAndNormals_21(L_66);
			// handMeshVerticesUnity = new Vector3[handMeshObserver.VertexCount];
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_67 = __this->get_handMeshObserver_19();
			NullCheck(L_67);
			uint32_t L_68;
			L_68 = HandMeshObserver_get_VertexCount_mF44DDE4B9A043F460CE7C8F9DA46C4B7FB0E82B6(L_67, /*hidden argument*/NULL);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_69 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_68);
			__this->set_handMeshVerticesUnity_22(L_69);
			// handMeshNormalsUnity = new Vector3[handMeshObserver.VertexCount];
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_70 = __this->get_handMeshObserver_19();
			NullCheck(L_70);
			uint32_t L_71;
			L_71 = HandMeshObserver_get_VertexCount_mF44DDE4B9A043F460CE7C8F9DA46C4B7FB0E82B6(L_70, /*hidden argument*/NULL);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_72 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_71);
			__this->set_handMeshNormalsUnity_23(L_72);
		}

IL_01f2:
		{
			// if (vertexAndNormals != null && handMeshTriangleIndices != null)
			HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* L_73 = __this->get_vertexAndNormals_21();
			if (!L_73)
			{
				goto IL_02f7;
			}
		}

IL_01fd:
		{
			UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_74 = __this->get_handMeshTriangleIndices_20();
			if (!L_74)
			{
				goto IL_02f7;
			}
		}

IL_0208:
		{
			// var handMeshVertexState = handMeshObserver.GetVertexStateForPose(handPose);
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_75 = __this->get_handMeshObserver_19();
			HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE * L_76 = V_4;
			NullCheck(L_75);
			HandMeshVertexState_t472D7CF8982D6D93200D405B7F990404C022A9F8 * L_77;
			L_77 = HandMeshObserver_GetVertexStateForPose_m15A85E28A95DD93A7CEEB07C98A9240A7EED5B38(L_75, L_76, /*hidden argument*/NULL);
			// handMeshVertexState.GetVertices(vertexAndNormals);
			HandMeshVertexState_t472D7CF8982D6D93200D405B7F990404C022A9F8 * L_78 = L_77;
			HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* L_79 = __this->get_vertexAndNormals_21();
			NullCheck(L_78);
			HandMeshVertexState_GetVertices_mF42AFC0B0A958259F449205CA0FED73239595CBF(L_78, L_79, /*hidden argument*/NULL);
			// var meshTransform = handMeshVertexState.CoordinateSystem.TryGetTransformTo(WindowsMixedRealityUtilities.SpatialCoordinateSystem);
			NullCheck(L_78);
			SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * L_80;
			L_80 = HandMeshVertexState_get_CoordinateSystem_m4AC199BB8E0D40D4C80AC8C446E0C565F979808A(L_78, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
			SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * L_81;
			L_81 = WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m97A085C49302BEA63105E58475D29A014AFF99F2(/*hidden argument*/NULL);
			NullCheck(L_80);
			Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8  L_82;
			L_82 = SpatialCoordinateSystem_TryGetTransformTo_m9860B951AA3C929F3C1A39347C72EA838E5774FF(L_80, L_81, /*hidden argument*/NULL);
			V_8 = L_82;
			// if (meshTransform.HasValue)
			bool L_83;
			L_83 = Nullable_1_get_HasValue_m1C8741C73000BD525E6034625DD1ED12EB07EA10_inline((Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 *)(&V_8), /*hidden argument*/Nullable_1_get_HasValue_m1C8741C73000BD525E6034625DD1ED12EB07EA10_RuntimeMethod_var);
			if (!L_83)
			{
				goto IL_02f7;
			}
		}

IL_023e:
		{
			// System.Numerics.Matrix4x4.Decompose(meshTransform.Value,
			//     out System.Numerics.Vector3 scale,
			//     out System.Numerics.Quaternion rotation,
			//     out System.Numerics.Vector3 translation);
			Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  L_84;
			L_84 = Nullable_1_get_Value_m608A59322CEE9B305CE8472969742F446EA8318A((Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 *)(&V_8), /*hidden argument*/Nullable_1_get_Value_m608A59322CEE9B305CE8472969742F446EA8318A_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var);
			bool L_85;
			L_85 = Matrix4x4_Decompose_mAEEBB02601928ECC39E5459CC1015C8FEE7D4754(L_84, (Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 *)(&V_9), (Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C *)(&V_10), (Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 *)(&V_11), /*hidden argument*/NULL);
			// Parallel.For(0, handMeshObserver.VertexCount, i =>
			// {
			//     vertexAndNormals[i].Position.ConvertToUnityVector3(ref handMeshVerticesUnity[i]);
			//     vertexAndNormals[i].Normal.ConvertToUnityVector3(ref handMeshNormalsUnity[i]);
			// });
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_86 = __this->get_handMeshObserver_19();
			NullCheck(L_86);
			uint32_t L_87;
			L_87 = HandMeshObserver_get_VertexCount_mF44DDE4B9A043F460CE7C8F9DA46C4B7FB0E82B6(L_86, /*hidden argument*/NULL);
			Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * L_88 = (Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 *)il2cpp_codegen_object_new(Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941_il2cpp_TypeInfo_var);
			Action_1__ctor_m2FFBA70879C106A64CB60C455BC4CF9DF896E0D1(L_88, __this, (intptr_t)((intptr_t)WindowsMixedRealityArticulatedHandDefinition_U3CUpdateHandMeshU3Eb__12_1_m2B501C35D837C3563734724E3B28D547DA64EA7F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2FFBA70879C106A64CB60C455BC4CF9DF896E0D1_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Parallel_tB59282E278156AA32B2BACBD33B31FD4C9922646_il2cpp_TypeInfo_var);
			ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3  L_89;
			L_89 = Parallel_For_m4F8049B55A36C35CB5C07476DA5A97FE0393A34B(((int64_t)((int64_t)0)), ((int64_t)((uint64_t)L_87)), L_88, /*hidden argument*/NULL);
			// Vector3 positionUnity = MixedRealityPlayspace.TransformPoint(translation.ToUnityVector3());
			Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_90 = V_11;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91;
			L_91 = SystemNumericsExtensions_ToUnityVector3_mA53A59A622EBAF6C3BAC86F31DF7680683EABE42(L_90, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tEEDF7A044A9E8E252CF39E2F7C51AB77FC70367A_il2cpp_TypeInfo_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_92;
			L_92 = MixedRealityPlayspace_TransformPoint_mFDE85764DAF222FE9BD9F91065B74F99575FB3BD(L_91, /*hidden argument*/NULL);
			V_12 = L_92;
			// Quaternion rotationUnity = MixedRealityPlayspace.Rotation * rotation.ToUnityQuaternion();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_93;
			L_93 = MixedRealityPlayspace_get_Rotation_m971FAF92E9A317CFAEB1FD97FB8B70F50ACB3AEE(/*hidden argument*/NULL);
			Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C  L_94 = V_10;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_95;
			L_95 = SystemNumericsExtensions_ToUnityQuaternion_m09E22D30B18D7621D92780F6153825523EAA1A0D(L_94, /*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_96;
			L_96 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_93, L_95, /*hidden argument*/NULL);
			V_13 = L_96;
			// HandMeshInfo handMeshInfo = new HandMeshInfo
			// {
			//     vertices = handMeshVerticesUnity,
			//     normals = handMeshNormalsUnity,
			//     triangles = handMeshTriangleIndicesUnity,
			//     uvs = handMeshUVsUnity,
			//     position = positionUnity,
			//     rotation = rotationUnity
			// };
			HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * L_97 = (HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 *)il2cpp_codegen_object_new(HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28_il2cpp_TypeInfo_var);
			HandMeshInfo__ctor_mDBABBFFF584C3FF554CC84A8A1303A8AECA096FF(L_97, /*hidden argument*/NULL);
			HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * L_98 = L_97;
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_99 = __this->get_handMeshVerticesUnity_22();
			NullCheck(L_98);
			L_98->set_vertices_0(L_99);
			HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * L_100 = L_98;
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_101 = __this->get_handMeshNormalsUnity_23();
			NullCheck(L_100);
			L_100->set_normals_2(L_101);
			HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * L_102 = L_100;
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_103 = __this->get_handMeshTriangleIndicesUnity_24();
			NullCheck(L_102);
			L_102->set_triangles_1(L_103);
			HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * L_104 = L_102;
			Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_105 = __this->get_handMeshUVsUnity_25();
			NullCheck(L_104);
			L_104->set_uvs_3(L_105);
			HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * L_106 = L_104;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_107 = V_12;
			NullCheck(L_106);
			L_106->set_position_4(L_107);
			HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * L_108 = L_106;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_109 = V_13;
			NullCheck(L_108);
			L_108->set_rotation_5(L_109);
			V_14 = L_108;
			// CoreServices.InputSystem?.RaiseHandMeshUpdated(InputSource, Handedness, handMeshInfo);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tA111E2393BEC7A3AF2703B80A556166363998BD2_il2cpp_TypeInfo_var);
			RuntimeObject* L_110;
			L_110 = CoreServices_get_InputSystem_m03F66B157660C21D67B5A6A4D132BF889CBFE440(/*hidden argument*/NULL);
			RuntimeObject* L_111 = L_110;
			G_B27_0 = L_111;
			if (L_111)
			{
				G_B28_0 = L_111;
				goto IL_02e4;
			}
		}

IL_02e1:
		{
			IL2CPP_LEAVE(0x307, FINALLY_02f9);
		}

IL_02e4:
		{
			RuntimeObject* L_112;
			L_112 = ArticulatedHandDefinition_get_InputSource_m968B8E2F1A9BF003A7AF616CEE6DBE13967E6F78_inline(__this, /*hidden argument*/NULL);
			uint8_t L_113;
			L_113 = BaseInputSourceDefinition_get_Handedness_mC43AF6FD8EF6FADB9A73FE9A238978B9506F6A8C_inline(__this, /*hidden argument*/NULL);
			HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * L_114 = V_14;
			NullCheck(G_B28_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * >::Invoke(63 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseHandMeshUpdated(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.HandMeshInfo) */, IMixedRealityInputSystem_t30FEE3BCBA4B47D9BBED63BF481D811EC6A39AA1_il2cpp_TypeInfo_var, G_B28_0, L_112, L_113, L_114);
		}

IL_02f7:
		{
			// }
			IL2CPP_LEAVE(0x307, FINALLY_02f9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_02f9;
	}

FINALLY_02f9:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(761)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(761)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x307, IL_0307)
	}

IL_0307:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition__cctor_m2D5BC19684EB30FBB1BD79EF47922A1EC5792A6D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBE03E8FBA159B98574AEF8007CF292B389220DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdateHandMeshPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityArticulatedHandDefinition.UpdateHandMesh");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteralFBE03E8FBA159B98574AEF8007CF292B389220DD, /*hidden argument*/NULL);
		((WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13_il2cpp_TypeInfo_var))->set_UpdateHandMeshPerfMarker_27(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::<UpdateHandMesh>b__12_1(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition_U3CUpdateHandMeshU3Eb__12_1_m2B501C35D837C3563734724E3B28D547DA64EA7F (WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13 * __this, int64_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityArticulatedHandDefinition_U3CUpdateHandMeshU3Eb__12_1_m2B501C35D837C3563734724E3B28D547DA64EA7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// vertexAndNormals[i].Position.ConvertToUnityVector3(ref handMeshVerticesUnity[i]);
		HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* L_0 = __this->get_vertexAndNormals_21();
		int64_t L_1 = ___i0;
		if ((int64_t)(L_1) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WindowsMixedRealityArticulatedHandDefinition_U3CUpdateHandMeshU3Eb__12_1_m2B501C35D837C3563734724E3B28D547DA64EA7F_RuntimeMethod_var);
		NullCheck(L_0);
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((intptr_t)L_1))))->get_Position_0();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3 = __this->get_handMeshVerticesUnity_22();
		int64_t L_4 = ___i0;
		if ((int64_t)(L_4) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WindowsMixedRealityArticulatedHandDefinition_U3CUpdateHandMeshU3Eb__12_1_m2B501C35D837C3563734724E3B28D547DA64EA7F_RuntimeMethod_var);
		NullCheck(L_3);
		SystemNumericsExtensions_ConvertToUnityVector3_m46FC9B5BD8EEE8EAAF6921365C1F069132D44631(L_2, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(((intptr_t)L_4)))), /*hidden argument*/NULL);
		// vertexAndNormals[i].Normal.ConvertToUnityVector3(ref handMeshNormalsUnity[i]);
		HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* L_5 = __this->get_vertexAndNormals_21();
		int64_t L_6 = ___i0;
		if ((int64_t)(L_6) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WindowsMixedRealityArticulatedHandDefinition_U3CUpdateHandMeshU3Eb__12_1_m2B501C35D837C3563734724E3B28D547DA64EA7F_RuntimeMethod_var);
		NullCheck(L_5);
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((intptr_t)L_6))))->get_Normal_1();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_8 = __this->get_handMeshNormalsUnity_23();
		int64_t L_9 = ___i0;
		if ((int64_t)(L_9) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WindowsMixedRealityArticulatedHandDefinition_U3CUpdateHandMeshU3Eb__12_1_m2B501C35D837C3563734724E3B28D547DA64EA7F_RuntimeMethod_var);
		NullCheck(L_8);
		SystemNumericsExtensions_ConvertToUnityVector3_m46FC9B5BD8EEE8EAAF6921365C1F069132D44631(L_7, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(((intptr_t)L_9)))), /*hidden argument*/NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::get_RenderFromPVCameraForMixedRealityCapture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityCameraSettingsProfile_get_RenderFromPVCameraForMixedRealityCapture_mA079DB5220894D6FFAEE2BDD893962136A6E6BBE (WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3 * __this, const RuntimeMethod* method)
{
	{
		// public bool RenderFromPVCameraForMixedRealityCapture => renderFromPVCameraForMixedRealityCapture;
		bool L_0 = __this->get_renderFromPVCameraForMixedRealityCapture_5();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::get_ReprojectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityCameraSettingsProfile_get_ReprojectionMethod_m2E1568953F627FD08E366A0054F2B806255F2ABD (WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3 * __this, const RuntimeMethod* method)
{
	{
		// public HolographicDepthReprojectionMethod ReprojectionMethod => reprojectionMethod;
		int32_t L_0 = __this->get_reprojectionMethod_6();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::get_ReadingModeEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityCameraSettingsProfile_get_ReadingModeEnabled_mA0898DBBFF3DC063392B184C4A078B5ADCC0EA2B (WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3 * __this, const RuntimeMethod* method)
{
	{
		// public bool ReadingModeEnabled => readingModeEnabled;
		bool L_0 = __this->get_readingModeEnabled_7();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityCameraSettingsProfile__ctor_mA373532511CC07D0FE6394F26B9B37DAF6E06EA6 (WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3 * __this, const RuntimeMethod* method)
{
	{
		BaseCameraSettingsProfile__ctor_mED81E334FE92CAFB344614ED27F0039B11A2CC79(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandMeshProvider__ctor_mE686BD48E66D2AF9C9280DBF43D1158D8A70E9AA (WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D * __this, RuntimeObject* ___controller0, const RuntimeMethod* method)
{
	{
		// public WindowsMixedRealityHandMeshProvider(IMixedRealityController controller) => this.controller = controller;
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public WindowsMixedRealityHandMeshProvider(IMixedRealityController controller) => this.controller = controller;
		RuntimeObject* L_0 = ___controller0;
		__this->set_controller_0(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::get_InputSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityHandMeshProvider_get_InputSource_mCACDBD92988895027BC0F4A1BD4378952DFBCCE0 (WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityController_t69758F109F3FDF65F018C4100E749F79351BCE11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private IMixedRealityInputSource InputSource => controller.InputSource;
		RuntimeObject* L_0 = __this->get_controller_0();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_InputSource() */, IMixedRealityController_t69758F109F3FDF65F018C4100E749F79351BCE11_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::get_Handedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t WindowsMixedRealityHandMeshProvider_get_Handedness_m1C0C23607624A1C63571461C3B1C1F58AC4D1CCE (WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityController_t69758F109F3FDF65F018C4100E749F79351BCE11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Handedness Handedness => controller.ControllerHandedness;
		RuntimeObject* L_0 = __this->get_controller_0();
		NullCheck(L_0);
		uint8_t L_1;
		L_1 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_t69758F109F3FDF65F018C4100E749F79351BCE11_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::SetHandMeshObserver(Windows.UI.Input.Spatial.SpatialInteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandMeshProvider_SetHandMeshObserver_mB8530922805948976D4BC13500DDCCFC0CFF2564 (WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D * __this, SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * ___sourceState0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063_mCCD72F15DECDEB21469BF69FC06719E173B99531_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_3(__this);
		SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * L_0 = ___sourceState0;
		(&V_0)->set_sourceState_2(L_0);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_1;
		L_1 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063  L_2 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063_mCCD72F15DECDEB21469BF69FC06719E173B99531((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063_mCCD72F15DECDEB21469BF69FC06719E173B99531_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::InitializeUVs(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandMeshProvider_InitializeUVs_m4F51ABD0EF7CA344774AE337F58B7CD679005CB0 (WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___neutralPoseVertices0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD51862061BEF6981AB4BE866F6A89BA4489E5DDC);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// if (neutralPoseVertices.Length == 0)
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = ___neutralPoseVertices0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_000e;
		}
	}
	{
		// Debug.LogError("Loaded 0 verts for neutralPoseVertices");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralD51862061BEF6981AB4BE866F6A89BA4489E5DDC, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// float minY = neutralPoseVertices[0].y;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = ___neutralPoseVertices0;
		NullCheck(L_1);
		float L_2 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_y_3();
		V_0 = L_2;
		// float maxY = minY;
		float L_3 = V_0;
		V_1 = L_3;
		// for (int ix = 1; ix < neutralPoseVertices.Length; ix++)
		V_3 = 1;
		goto IL_0054;
	}

IL_0021:
	{
		// Vector3 p = neutralPoseVertices[ix];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_4 = ___neutralPoseVertices0;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		// if (p.y < minY)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_4;
		float L_9 = L_8.get_y_3();
		float L_10 = V_0;
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_003e;
		}
	}
	{
		// minY = p.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_4;
		float L_12 = L_11.get_y_3();
		V_0 = L_12;
		// }
		goto IL_0050;
	}

IL_003e:
	{
		// else if (p.y > maxY)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_4;
		float L_14 = L_13.get_y_3();
		float L_15 = V_1;
		if ((!(((float)L_14) > ((float)L_15))))
		{
			goto IL_0050;
		}
	}
	{
		// maxY = p.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_4;
		float L_17 = L_16.get_y_3();
		V_1 = L_17;
	}

IL_0050:
	{
		// for (int ix = 1; ix < neutralPoseVertices.Length; ix++)
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0054:
	{
		// for (int ix = 1; ix < neutralPoseVertices.Length; ix++)
		int32_t L_19 = V_3;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_20 = ___neutralPoseVertices0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_0021;
		}
	}
	{
		// float scale = 1.0f / (maxY - minY);
		float L_21 = V_1;
		float L_22 = V_0;
		V_2 = ((float)((float)(1.0f)/(float)((float)il2cpp_codegen_subtract((float)L_21, (float)L_22))));
		// handMeshUVsUnity = new Vector2[neutralPoseVertices.Length];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_23 = ___neutralPoseVertices0;
		NullCheck(L_23);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_24 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))));
		__this->set_handMeshUVsUnity_7(L_24);
		// for (int ix = 0; ix < neutralPoseVertices.Length; ix++)
		V_5 = 0;
		goto IL_00b3;
	}

IL_0077:
	{
		// Vector3 p = neutralPoseVertices[ix];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_25 = ___neutralPoseVertices0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_6 = L_28;
		// handMeshUVsUnity[ix] = new Vector2(p.x * scale + 0.5f, (p.y - minY) * scale);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_29 = __this->get_handMeshUVsUnity_7();
		int32_t L_30 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = V_6;
		float L_32 = L_31.get_x_2();
		float L_33 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = V_6;
		float L_35 = L_34.get_y_3();
		float L_36 = V_0;
		float L_37 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_38), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_32, (float)L_33)), (float)(0.5f))), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_35, (float)L_36)), (float)L_37)), /*hidden argument*/NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_38);
		// for (int ix = 0; ix < neutralPoseVertices.Length; ix++)
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00b3:
	{
		// for (int ix = 0; ix < neutralPoseVertices.Length; ix++)
		int32_t L_40 = V_5;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_41 = ___neutralPoseVertices0;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))))))
		{
			goto IL_0077;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::UpdateHandMesh(Windows.UI.Input.Spatial.SpatialInteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandMeshProvider_UpdateHandMesh_m8F3039C0A78D7A05C8497B64B04609E6DB2E8F38 (WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D * __this, SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * ___sourceState0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m2FFBA70879C106A64CB60C455BC4CF9DF896E0D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tA111E2393BEC7A3AF2703B80A556166363998BD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t30FEE3BCBA4B47D9BBED63BF481D811EC6A39AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPlayspace_tEEDF7A044A9E8E252CF39E2F7C51AB77FC70367A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m1C8741C73000BD525E6034625DD1ED12EB07EA10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m608A59322CEE9B305CE8472969742F446EA8318A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parallel_tB59282E278156AA32B2BACBD33B31FD4C9922646_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_U3CUpdateHandMeshU3Eb__0_m657AE6F991F841D51E6D8D244A098947BC81A913_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_tB553DBEC2E07BDD097E9BF81DCF48F2FAC0A942B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityHandMeshProvider_U3CUpdateHandMeshU3Eb__17_1_mAFBF93D21D6F96A0B567019613FEAB7DB43A29DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	MixedRealityHandTrackingProfile_t28838B85DF712221FF796BFD4430C1C880A0A1C8 * V_2 = NULL;
	MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C * V_3 = NULL;
	HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE * V_4 = NULL;
	HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * V_5 = NULL;
	U3CU3Ec__DisplayClass17_0_tB553DBEC2E07BDD097E9BF81DCF48F2FAC0A942B * V_6 = NULL;
	HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE * V_7 = NULL;
	Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_13;
	memset((&V_13), 0, sizeof(V_13));
	HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * V_14 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C * G_B4_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B28_0 = NULL;
	RuntimeObject* G_B27_0 = NULL;
	{
		// using (UpdateHandMeshPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D_il2cpp_TypeInfo_var))->get_UpdateHandMeshPerfMarker_9();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// MixedRealityHandTrackingProfile handTrackingProfile = null;
			V_2 = (MixedRealityHandTrackingProfile_t28838B85DF712221FF796BFD4430C1C880A0A1C8 *)NULL;
			// MixedRealityInputSystemProfile inputSystemProfile = CoreServices.InputSystem?.InputSystemProfile;
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tA111E2393BEC7A3AF2703B80A556166363998BD2_il2cpp_TypeInfo_var);
			RuntimeObject* L_2;
			L_2 = CoreServices_get_InputSystem_m03F66B157660C21D67B5A6A4D132BF889CBFE440(/*hidden argument*/NULL);
			RuntimeObject* L_3 = L_2;
			G_B2_0 = L_3;
			if (L_3)
			{
				G_B3_0 = L_3;
				goto IL_001c;
			}
		}

IL_0018:
		{
			G_B4_0 = ((MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C *)(NULL));
			goto IL_0021;
		}

IL_001c:
		{
			NullCheck(G_B3_0);
			MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C * L_4;
			L_4 = InterfaceFuncInvoker0< MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C * >::Invoke(6 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_InputSystemProfile() */, IMixedRealityInputSystem_t30FEE3BCBA4B47D9BBED63BF481D811EC6A39AA1_il2cpp_TypeInfo_var, G_B3_0);
			G_B4_0 = L_4;
		}

IL_0021:
		{
			V_3 = G_B4_0;
			// if (inputSystemProfile != null)
			MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C * L_5 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_6;
			L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0032;
			}
		}

IL_002b:
		{
			// handTrackingProfile = inputSystemProfile.HandTrackingProfile;
			MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C * L_7 = V_3;
			NullCheck(L_7);
			MixedRealityHandTrackingProfile_t28838B85DF712221FF796BFD4430C1C880A0A1C8 * L_8;
			L_8 = MixedRealityInputSystemProfile_get_HandTrackingProfile_m68AB045F05D5B7E5723E8D3331E837CAC058CE7A_inline(L_7, /*hidden argument*/NULL);
			V_2 = L_8;
		}

IL_0032:
		{
			// if (handTrackingProfile == null || !handTrackingProfile.EnableHandMeshVisualization)
			MixedRealityHandTrackingProfile_t28838B85DF712221FF796BFD4430C1C880A0A1C8 * L_9 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_10;
			L_10 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_0043;
			}
		}

IL_003b:
		{
			MixedRealityHandTrackingProfile_t28838B85DF712221FF796BFD4430C1C880A0A1C8 * L_11 = V_2;
			NullCheck(L_11);
			bool L_12;
			L_12 = MixedRealityHandTrackingProfile_get_EnableHandMeshVisualization_mB6D5AC9F60725F712E448D41520791D1CD5B20BF(L_11, /*hidden argument*/NULL);
			if (L_12)
			{
				goto IL_0083;
			}
		}

IL_0043:
		{
			// if (handMeshObserver != null)
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_13 = __this->get_handMeshObserver_1();
			if (!L_13)
			{
				goto IL_007e;
			}
		}

IL_004b:
		{
			// HandMeshInfo handMeshInfo = new HandMeshInfo();
			HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * L_14 = (HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 *)il2cpp_codegen_object_new(HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28_il2cpp_TypeInfo_var);
			HandMeshInfo__ctor_mDBABBFFF584C3FF554CC84A8A1303A8AECA096FF(L_14, /*hidden argument*/NULL);
			V_5 = L_14;
			// CoreServices.InputSystem?.RaiseHandMeshUpdated(InputSource, Handedness, handMeshInfo);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tA111E2393BEC7A3AF2703B80A556166363998BD2_il2cpp_TypeInfo_var);
			RuntimeObject* L_15;
			L_15 = CoreServices_get_InputSystem_m03F66B157660C21D67B5A6A4D132BF889CBFE440(/*hidden argument*/NULL);
			RuntimeObject* L_16 = L_15;
			G_B10_0 = L_16;
			if (L_16)
			{
				G_B11_0 = L_16;
				goto IL_005d;
			}
		}

IL_005a:
		{
			goto IL_0070;
		}

IL_005d:
		{
			RuntimeObject* L_17;
			L_17 = WindowsMixedRealityHandMeshProvider_get_InputSource_mCACDBD92988895027BC0F4A1BD4378952DFBCCE0(__this, /*hidden argument*/NULL);
			uint8_t L_18;
			L_18 = WindowsMixedRealityHandMeshProvider_get_Handedness_m1C0C23607624A1C63571461C3B1C1F58AC4D1CCE(__this, /*hidden argument*/NULL);
			HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * L_19 = V_5;
			NullCheck(G_B11_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * >::Invoke(63 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseHandMeshUpdated(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.HandMeshInfo) */, IMixedRealityInputSystem_t30FEE3BCBA4B47D9BBED63BF481D811EC6A39AA1_il2cpp_TypeInfo_var, G_B11_0, L_17, L_18, L_19);
		}

IL_0070:
		{
			// hasRequestedHandMeshObserver = false;
			__this->set_hasRequestedHandMeshObserver_8((bool)0);
			// handMeshObserver = null;
			__this->set_handMeshObserver_1((HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 *)NULL);
		}

IL_007e:
		{
			// return;
			IL2CPP_LEAVE(0x307, FINALLY_02f9);
		}

IL_0083:
		{
			// HandPose handPose = sourceState.TryGetHandPose();
			SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * L_20 = ___sourceState0;
			NullCheck(L_20);
			HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE * L_21;
			L_21 = SpatialInteractionSourceState_TryGetHandPose_m9B623E31B753FD11674C848601622016AF260110(L_20, /*hidden argument*/NULL);
			V_4 = L_21;
			// if (handMeshObserver == null && !hasRequestedHandMeshObserver)
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_22 = __this->get_handMeshObserver_1();
			if (L_22)
			{
				goto IL_00a9;
			}
		}

IL_0093:
		{
			bool L_23 = __this->get_hasRequestedHandMeshObserver_8();
			if (L_23)
			{
				goto IL_00a9;
			}
		}

IL_009b:
		{
			// SetHandMeshObserver(sourceState);
			SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * L_24 = ___sourceState0;
			WindowsMixedRealityHandMeshProvider_SetHandMeshObserver_mB8530922805948976D4BC13500DDCCFC0CFF2564(__this, L_24, /*hidden argument*/NULL);
			// hasRequestedHandMeshObserver = true;
			__this->set_hasRequestedHandMeshObserver_8((bool)1);
		}

IL_00a9:
		{
			// if (handMeshObserver != null && handPose != null)
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_25 = __this->get_handMeshObserver_1();
			if (!L_25)
			{
				goto IL_02f7;
			}
		}

IL_00b4:
		{
			HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE * L_26 = V_4;
			if (!L_26)
			{
				goto IL_02f7;
			}
		}

IL_00bb:
		{
			// if (handMeshTriangleIndices == null)
			UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_27 = __this->get_handMeshTriangleIndices_2();
			if (L_27)
			{
				goto IL_01a8;
			}
		}

IL_00c6:
		{
			U3CU3Ec__DisplayClass17_0_tB553DBEC2E07BDD097E9BF81DCF48F2FAC0A942B * L_28 = (U3CU3Ec__DisplayClass17_0_tB553DBEC2E07BDD097E9BF81DCF48F2FAC0A942B *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass17_0_tB553DBEC2E07BDD097E9BF81DCF48F2FAC0A942B_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass17_0__ctor_mE6503E577D8B0CDD0C26C9E92C2968C690243843(L_28, /*hidden argument*/NULL);
			V_6 = L_28;
			// handMeshTriangleIndices = new ushort[handMeshObserver.TriangleIndexCount];
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_29 = __this->get_handMeshObserver_1();
			NullCheck(L_29);
			uint32_t L_30;
			L_30 = HandMeshObserver_get_TriangleIndexCount_mFF115FBB6E545038C1BD1420DF2873C5172D54FA(L_29, /*hidden argument*/NULL);
			UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_31 = (UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)SZArrayNew(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var, (uint32_t)L_30);
			__this->set_handMeshTriangleIndices_2(L_31);
			// handMeshTriangleIndicesUnity = new int[handMeshObserver.TriangleIndexCount];
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_32 = __this->get_handMeshObserver_1();
			NullCheck(L_32);
			uint32_t L_33;
			L_33 = HandMeshObserver_get_TriangleIndexCount_mFF115FBB6E545038C1BD1420DF2873C5172D54FA(L_32, /*hidden argument*/NULL);
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_34 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_33);
			__this->set_handMeshTriangleIndicesUnity_6(L_34);
			// handMeshObserver.GetTriangleIndices(handMeshTriangleIndices);
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_35 = __this->get_handMeshObserver_1();
			UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_36 = __this->get_handMeshTriangleIndices_2();
			NullCheck(L_35);
			HandMeshObserver_GetTriangleIndices_m822E18BFBC457E8CDFF9DF03D0316DE316631424(L_35, L_36, /*hidden argument*/NULL);
			// Array.Copy(handMeshTriangleIndices, handMeshTriangleIndicesUnity, (int)handMeshObserver.TriangleIndexCount);
			UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_37 = __this->get_handMeshTriangleIndices_2();
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_38 = __this->get_handMeshTriangleIndicesUnity_6();
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_39 = __this->get_handMeshObserver_1();
			NullCheck(L_39);
			uint32_t L_40;
			L_40 = HandMeshObserver_get_TriangleIndexCount_mFF115FBB6E545038C1BD1420DF2873C5172D54FA(L_39, /*hidden argument*/NULL);
			Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803((RuntimeArray *)(RuntimeArray *)L_37, (RuntimeArray *)(RuntimeArray *)L_38, L_40, /*hidden argument*/NULL);
			// Vector3[] neutralPoseVertices = new Vector3[handMeshObserver.VertexCount];
			U3CU3Ec__DisplayClass17_0_tB553DBEC2E07BDD097E9BF81DCF48F2FAC0A942B * L_41 = V_6;
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_42 = __this->get_handMeshObserver_1();
			NullCheck(L_42);
			uint32_t L_43;
			L_43 = HandMeshObserver_get_VertexCount_mF44DDE4B9A043F460CE7C8F9DA46C4B7FB0E82B6(L_42, /*hidden argument*/NULL);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_44 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_43);
			NullCheck(L_41);
			L_41->set_neutralPoseVertices_1(L_44);
			// HandPose neutralPose = handMeshObserver.NeutralPose;
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_45 = __this->get_handMeshObserver_1();
			NullCheck(L_45);
			HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE * L_46;
			L_46 = HandMeshObserver_get_NeutralPose_m5E28EB4B46D13DFD8E3556DCCC387C44D06BD9F9(L_45, /*hidden argument*/NULL);
			V_7 = L_46;
			// var neutralVertexAndNormals = new HandMeshVertex[handMeshObserver.VertexCount];
			U3CU3Ec__DisplayClass17_0_tB553DBEC2E07BDD097E9BF81DCF48F2FAC0A942B * L_47 = V_6;
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_48 = __this->get_handMeshObserver_1();
			NullCheck(L_48);
			uint32_t L_49;
			L_49 = HandMeshObserver_get_VertexCount_mF44DDE4B9A043F460CE7C8F9DA46C4B7FB0E82B6(L_48, /*hidden argument*/NULL);
			HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* L_50 = (HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1*)(HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1*)SZArrayNew(HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1_il2cpp_TypeInfo_var, (uint32_t)L_49);
			NullCheck(L_47);
			L_47->set_neutralVertexAndNormals_0(L_50);
			// HandMeshVertexState handMeshVertexState = handMeshObserver.GetVertexStateForPose(neutralPose);
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_51 = __this->get_handMeshObserver_1();
			HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE * L_52 = V_7;
			NullCheck(L_51);
			HandMeshVertexState_t472D7CF8982D6D93200D405B7F990404C022A9F8 * L_53;
			L_53 = HandMeshObserver_GetVertexStateForPose_m15A85E28A95DD93A7CEEB07C98A9240A7EED5B38(L_51, L_52, /*hidden argument*/NULL);
			// handMeshVertexState.GetVertices(neutralVertexAndNormals);
			U3CU3Ec__DisplayClass17_0_tB553DBEC2E07BDD097E9BF81DCF48F2FAC0A942B * L_54 = V_6;
			NullCheck(L_54);
			HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* L_55 = L_54->get_neutralVertexAndNormals_0();
			NullCheck(L_53);
			HandMeshVertexState_GetVertices_mF42AFC0B0A958259F449205CA0FED73239595CBF(L_53, L_55, /*hidden argument*/NULL);
			// Parallel.For(0, handMeshObserver.VertexCount, i =>
			// {
			//     neutralVertexAndNormals[i].Position.ConvertToUnityVector3(ref neutralPoseVertices[i]);
			// });
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_56 = __this->get_handMeshObserver_1();
			NullCheck(L_56);
			uint32_t L_57;
			L_57 = HandMeshObserver_get_VertexCount_mF44DDE4B9A043F460CE7C8F9DA46C4B7FB0E82B6(L_56, /*hidden argument*/NULL);
			U3CU3Ec__DisplayClass17_0_tB553DBEC2E07BDD097E9BF81DCF48F2FAC0A942B * L_58 = V_6;
			Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * L_59 = (Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 *)il2cpp_codegen_object_new(Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941_il2cpp_TypeInfo_var);
			Action_1__ctor_m2FFBA70879C106A64CB60C455BC4CF9DF896E0D1(L_59, L_58, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass17_0_U3CUpdateHandMeshU3Eb__0_m657AE6F991F841D51E6D8D244A098947BC81A913_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2FFBA70879C106A64CB60C455BC4CF9DF896E0D1_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Parallel_tB59282E278156AA32B2BACBD33B31FD4C9922646_il2cpp_TypeInfo_var);
			ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3  L_60;
			L_60 = Parallel_For_m4F8049B55A36C35CB5C07476DA5A97FE0393A34B(((int64_t)((int64_t)0)), ((int64_t)((uint64_t)L_57)), L_59, /*hidden argument*/NULL);
			// InitializeUVs(neutralPoseVertices);
			U3CU3Ec__DisplayClass17_0_tB553DBEC2E07BDD097E9BF81DCF48F2FAC0A942B * L_61 = V_6;
			NullCheck(L_61);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_62 = L_61->get_neutralPoseVertices_1();
			WindowsMixedRealityHandMeshProvider_InitializeUVs_m4F51ABD0EF7CA344774AE337F58B7CD679005CB0(__this, L_62, /*hidden argument*/NULL);
		}

IL_01a8:
		{
			// if (vertexAndNormals == null)
			HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* L_63 = __this->get_vertexAndNormals_3();
			if (L_63)
			{
				goto IL_01f2;
			}
		}

IL_01b0:
		{
			// vertexAndNormals = new HandMeshVertex[handMeshObserver.VertexCount];
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_64 = __this->get_handMeshObserver_1();
			NullCheck(L_64);
			uint32_t L_65;
			L_65 = HandMeshObserver_get_VertexCount_mF44DDE4B9A043F460CE7C8F9DA46C4B7FB0E82B6(L_64, /*hidden argument*/NULL);
			HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* L_66 = (HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1*)(HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1*)SZArrayNew(HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1_il2cpp_TypeInfo_var, (uint32_t)L_65);
			__this->set_vertexAndNormals_3(L_66);
			// handMeshVerticesUnity = new Vector3[handMeshObserver.VertexCount];
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_67 = __this->get_handMeshObserver_1();
			NullCheck(L_67);
			uint32_t L_68;
			L_68 = HandMeshObserver_get_VertexCount_mF44DDE4B9A043F460CE7C8F9DA46C4B7FB0E82B6(L_67, /*hidden argument*/NULL);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_69 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_68);
			__this->set_handMeshVerticesUnity_4(L_69);
			// handMeshNormalsUnity = new Vector3[handMeshObserver.VertexCount];
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_70 = __this->get_handMeshObserver_1();
			NullCheck(L_70);
			uint32_t L_71;
			L_71 = HandMeshObserver_get_VertexCount_mF44DDE4B9A043F460CE7C8F9DA46C4B7FB0E82B6(L_70, /*hidden argument*/NULL);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_72 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_71);
			__this->set_handMeshNormalsUnity_5(L_72);
		}

IL_01f2:
		{
			// if (vertexAndNormals != null && handMeshTriangleIndices != null)
			HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* L_73 = __this->get_vertexAndNormals_3();
			if (!L_73)
			{
				goto IL_02f7;
			}
		}

IL_01fd:
		{
			UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_74 = __this->get_handMeshTriangleIndices_2();
			if (!L_74)
			{
				goto IL_02f7;
			}
		}

IL_0208:
		{
			// var handMeshVertexState = handMeshObserver.GetVertexStateForPose(handPose);
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_75 = __this->get_handMeshObserver_1();
			HandPose_tA80E49BEA85A49A6594EC7FF8E1470F10978A0AE * L_76 = V_4;
			NullCheck(L_75);
			HandMeshVertexState_t472D7CF8982D6D93200D405B7F990404C022A9F8 * L_77;
			L_77 = HandMeshObserver_GetVertexStateForPose_m15A85E28A95DD93A7CEEB07C98A9240A7EED5B38(L_75, L_76, /*hidden argument*/NULL);
			// handMeshVertexState.GetVertices(vertexAndNormals);
			HandMeshVertexState_t472D7CF8982D6D93200D405B7F990404C022A9F8 * L_78 = L_77;
			HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* L_79 = __this->get_vertexAndNormals_3();
			NullCheck(L_78);
			HandMeshVertexState_GetVertices_mF42AFC0B0A958259F449205CA0FED73239595CBF(L_78, L_79, /*hidden argument*/NULL);
			// var meshTransform = handMeshVertexState.CoordinateSystem.TryGetTransformTo(WindowsMixedRealityUtilities.SpatialCoordinateSystem);
			NullCheck(L_78);
			SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * L_80;
			L_80 = HandMeshVertexState_get_CoordinateSystem_m4AC199BB8E0D40D4C80AC8C446E0C565F979808A(L_78, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
			SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * L_81;
			L_81 = WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m97A085C49302BEA63105E58475D29A014AFF99F2(/*hidden argument*/NULL);
			NullCheck(L_80);
			Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8  L_82;
			L_82 = SpatialCoordinateSystem_TryGetTransformTo_m9860B951AA3C929F3C1A39347C72EA838E5774FF(L_80, L_81, /*hidden argument*/NULL);
			V_8 = L_82;
			// if (meshTransform.HasValue)
			bool L_83;
			L_83 = Nullable_1_get_HasValue_m1C8741C73000BD525E6034625DD1ED12EB07EA10_inline((Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 *)(&V_8), /*hidden argument*/Nullable_1_get_HasValue_m1C8741C73000BD525E6034625DD1ED12EB07EA10_RuntimeMethod_var);
			if (!L_83)
			{
				goto IL_02f7;
			}
		}

IL_023e:
		{
			// System.Numerics.Matrix4x4.Decompose(meshTransform.Value,
			//     out System.Numerics.Vector3 scale,
			//     out System.Numerics.Quaternion rotation,
			//     out System.Numerics.Vector3 translation);
			Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  L_84;
			L_84 = Nullable_1_get_Value_m608A59322CEE9B305CE8472969742F446EA8318A((Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 *)(&V_8), /*hidden argument*/Nullable_1_get_Value_m608A59322CEE9B305CE8472969742F446EA8318A_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var);
			bool L_85;
			L_85 = Matrix4x4_Decompose_mAEEBB02601928ECC39E5459CC1015C8FEE7D4754(L_84, (Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 *)(&V_9), (Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C *)(&V_10), (Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 *)(&V_11), /*hidden argument*/NULL);
			// Parallel.For(0, handMeshObserver.VertexCount, i =>
			// {
			//     vertexAndNormals[i].Position.ConvertToUnityVector3(ref handMeshVerticesUnity[i]);
			//     vertexAndNormals[i].Normal.ConvertToUnityVector3(ref handMeshNormalsUnity[i]);
			// });
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_86 = __this->get_handMeshObserver_1();
			NullCheck(L_86);
			uint32_t L_87;
			L_87 = HandMeshObserver_get_VertexCount_mF44DDE4B9A043F460CE7C8F9DA46C4B7FB0E82B6(L_86, /*hidden argument*/NULL);
			Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * L_88 = (Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 *)il2cpp_codegen_object_new(Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941_il2cpp_TypeInfo_var);
			Action_1__ctor_m2FFBA70879C106A64CB60C455BC4CF9DF896E0D1(L_88, __this, (intptr_t)((intptr_t)WindowsMixedRealityHandMeshProvider_U3CUpdateHandMeshU3Eb__17_1_mAFBF93D21D6F96A0B567019613FEAB7DB43A29DD_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2FFBA70879C106A64CB60C455BC4CF9DF896E0D1_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Parallel_tB59282E278156AA32B2BACBD33B31FD4C9922646_il2cpp_TypeInfo_var);
			ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3  L_89;
			L_89 = Parallel_For_m4F8049B55A36C35CB5C07476DA5A97FE0393A34B(((int64_t)((int64_t)0)), ((int64_t)((uint64_t)L_87)), L_88, /*hidden argument*/NULL);
			// Vector3 positionUnity = MixedRealityPlayspace.TransformPoint(translation.ToUnityVector3());
			Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_90 = V_11;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91;
			L_91 = SystemNumericsExtensions_ToUnityVector3_mA53A59A622EBAF6C3BAC86F31DF7680683EABE42(L_90, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tEEDF7A044A9E8E252CF39E2F7C51AB77FC70367A_il2cpp_TypeInfo_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_92;
			L_92 = MixedRealityPlayspace_TransformPoint_mFDE85764DAF222FE9BD9F91065B74F99575FB3BD(L_91, /*hidden argument*/NULL);
			V_12 = L_92;
			// Quaternion rotationUnity = MixedRealityPlayspace.Rotation * rotation.ToUnityQuaternion();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_93;
			L_93 = MixedRealityPlayspace_get_Rotation_m971FAF92E9A317CFAEB1FD97FB8B70F50ACB3AEE(/*hidden argument*/NULL);
			Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C  L_94 = V_10;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_95;
			L_95 = SystemNumericsExtensions_ToUnityQuaternion_m09E22D30B18D7621D92780F6153825523EAA1A0D(L_94, /*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_96;
			L_96 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_93, L_95, /*hidden argument*/NULL);
			V_13 = L_96;
			// HandMeshInfo handMeshInfo = new HandMeshInfo
			// {
			//     vertices = handMeshVerticesUnity,
			//     normals = handMeshNormalsUnity,
			//     triangles = handMeshTriangleIndicesUnity,
			//     uvs = handMeshUVsUnity,
			//     position = positionUnity,
			//     rotation = rotationUnity
			// };
			HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * L_97 = (HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 *)il2cpp_codegen_object_new(HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28_il2cpp_TypeInfo_var);
			HandMeshInfo__ctor_mDBABBFFF584C3FF554CC84A8A1303A8AECA096FF(L_97, /*hidden argument*/NULL);
			HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * L_98 = L_97;
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_99 = __this->get_handMeshVerticesUnity_4();
			NullCheck(L_98);
			L_98->set_vertices_0(L_99);
			HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * L_100 = L_98;
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_101 = __this->get_handMeshNormalsUnity_5();
			NullCheck(L_100);
			L_100->set_normals_2(L_101);
			HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * L_102 = L_100;
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_103 = __this->get_handMeshTriangleIndicesUnity_6();
			NullCheck(L_102);
			L_102->set_triangles_1(L_103);
			HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * L_104 = L_102;
			Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_105 = __this->get_handMeshUVsUnity_7();
			NullCheck(L_104);
			L_104->set_uvs_3(L_105);
			HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * L_106 = L_104;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_107 = V_12;
			NullCheck(L_106);
			L_106->set_position_4(L_107);
			HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * L_108 = L_106;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_109 = V_13;
			NullCheck(L_108);
			L_108->set_rotation_5(L_109);
			V_14 = L_108;
			// CoreServices.InputSystem?.RaiseHandMeshUpdated(InputSource, Handedness, handMeshInfo);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tA111E2393BEC7A3AF2703B80A556166363998BD2_il2cpp_TypeInfo_var);
			RuntimeObject* L_110;
			L_110 = CoreServices_get_InputSystem_m03F66B157660C21D67B5A6A4D132BF889CBFE440(/*hidden argument*/NULL);
			RuntimeObject* L_111 = L_110;
			G_B27_0 = L_111;
			if (L_111)
			{
				G_B28_0 = L_111;
				goto IL_02e4;
			}
		}

IL_02e1:
		{
			IL2CPP_LEAVE(0x307, FINALLY_02f9);
		}

IL_02e4:
		{
			RuntimeObject* L_112;
			L_112 = WindowsMixedRealityHandMeshProvider_get_InputSource_mCACDBD92988895027BC0F4A1BD4378952DFBCCE0(__this, /*hidden argument*/NULL);
			uint8_t L_113;
			L_113 = WindowsMixedRealityHandMeshProvider_get_Handedness_m1C0C23607624A1C63571461C3B1C1F58AC4D1CCE(__this, /*hidden argument*/NULL);
			HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * L_114 = V_14;
			NullCheck(G_B28_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, HandMeshInfo_t0343B745B715ECA6D7340DA4FF16C04ACBCD5C28 * >::Invoke(63 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseHandMeshUpdated(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.HandMeshInfo) */, IMixedRealityInputSystem_t30FEE3BCBA4B47D9BBED63BF481D811EC6A39AA1_il2cpp_TypeInfo_var, G_B28_0, L_112, L_113, L_114);
		}

IL_02f7:
		{
			// }
			IL2CPP_LEAVE(0x307, FINALLY_02f9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_02f9;
	}

FINALLY_02f9:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(761)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(761)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x307, IL_0307)
	}

IL_0307:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandMeshProvider__cctor_m313321B80C5F2319DE1F4771F170A47A1AFBCBDA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBE03E8FBA159B98574AEF8007CF292B389220DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdateHandMeshPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityArticulatedHandDefinition.UpdateHandMesh");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteralFBE03E8FBA159B98574AEF8007CF292B389220DD, /*hidden argument*/NULL);
		((WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D_il2cpp_TypeInfo_var))->set_UpdateHandMeshPerfMarker_9(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::<UpdateHandMesh>b__17_1(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandMeshProvider_U3CUpdateHandMeshU3Eb__17_1_mAFBF93D21D6F96A0B567019613FEAB7DB43A29DD (WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D * __this, int64_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityHandMeshProvider_U3CUpdateHandMeshU3Eb__17_1_mAFBF93D21D6F96A0B567019613FEAB7DB43A29DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// vertexAndNormals[i].Position.ConvertToUnityVector3(ref handMeshVerticesUnity[i]);
		HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* L_0 = __this->get_vertexAndNormals_3();
		int64_t L_1 = ___i0;
		if ((int64_t)(L_1) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WindowsMixedRealityHandMeshProvider_U3CUpdateHandMeshU3Eb__17_1_mAFBF93D21D6F96A0B567019613FEAB7DB43A29DD_RuntimeMethod_var);
		NullCheck(L_0);
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((intptr_t)L_1))))->get_Position_0();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3 = __this->get_handMeshVerticesUnity_4();
		int64_t L_4 = ___i0;
		if ((int64_t)(L_4) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WindowsMixedRealityHandMeshProvider_U3CUpdateHandMeshU3Eb__17_1_mAFBF93D21D6F96A0B567019613FEAB7DB43A29DD_RuntimeMethod_var);
		NullCheck(L_3);
		SystemNumericsExtensions_ConvertToUnityVector3_m46FC9B5BD8EEE8EAAF6921365C1F069132D44631(L_2, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(((intptr_t)L_4)))), /*hidden argument*/NULL);
		// vertexAndNormals[i].Normal.ConvertToUnityVector3(ref handMeshNormalsUnity[i]);
		HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* L_5 = __this->get_vertexAndNormals_3();
		int64_t L_6 = ___i0;
		if ((int64_t)(L_6) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WindowsMixedRealityHandMeshProvider_U3CUpdateHandMeshU3Eb__17_1_mAFBF93D21D6F96A0B567019613FEAB7DB43A29DD_RuntimeMethod_var);
		NullCheck(L_5);
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((intptr_t)L_6))))->get_Normal_1();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_8 = __this->get_handMeshNormalsUnity_5();
		int64_t L_9 = ___i0;
		if ((int64_t)(L_9) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WindowsMixedRealityHandMeshProvider_U3CUpdateHandMeshU3Eb__17_1_mAFBF93D21D6F96A0B567019613FEAB7DB43A29DD_RuntimeMethod_var);
		NullCheck(L_8);
		SystemNumericsExtensions_ConvertToUnityVector3_m46FC9B5BD8EEE8EAAF6921365C1F069132D44631(L_7, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(((intptr_t)L_9)))), /*hidden argument*/NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::get_ReferenceJoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityHandRecorder_get_ReferenceJoint_m8265A08CEB726848BA79390B3723C5B365979922 (WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E * __this, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint ReferenceJoint { get; set; } = TrackedHandJoint.IndexTip;
		int32_t L_0 = __this->get_U3CReferenceJointU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::set_ReferenceJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_set_ReferenceJoint_m6F4B2366B04B6B9D29FD1C740AA822AB5DC2FC50 (WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint ReferenceJoint { get; set; } = TrackedHandJoint.IndexTip;
		int32_t L_0 = ___value0;
		__this->set_U3CReferenceJointU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::get_OutputFileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WindowsMixedRealityHandRecorder_get_OutputFileName_m1D913980165D1401A5F06670BD0B4050EF7CF4A1 (WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E * __this, const RuntimeMethod* method)
{
	{
		// public string OutputFileName { get; } = "ArticulatedHandPose";
		String_t* L_0 = __this->get_U3COutputFileNameU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::RecordLeftHandStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_RecordLeftHandStart_m88D6F08299B3352D0AC56211299746A6B91092DF (WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E * __this, const RuntimeMethod* method)
{
	{
		// RecordHandStart(Handedness.Left);
		WindowsMixedRealityHandRecorder_RecordHandStart_m7540EB99276FD8F465CFB054C1F34C1604F9C97E(__this, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::RecordRightHandStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_RecordRightHandStart_mA078CE1ED1ECF6B294E0D130DFF93CB0E9F98FCB (WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E * __this, const RuntimeMethod* method)
{
	{
		// RecordHandStart(Handedness.Right);
		WindowsMixedRealityHandRecorder_RecordHandStart_m7540EB99276FD8F465CFB054C1F34C1604F9C97E(__this, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::RecordHandStart(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_RecordHandStart_m7540EB99276FD8F465CFB054C1F34C1604F9C97E (WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E * __this, uint8_t ___handedness0, const RuntimeMethod* method)
{
	MixedRealityPose_t7089584858BB76148AA1F83EB73B973E93554669  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// HandJointUtils.TryGetJointPose(ReferenceJoint, handedness, out MixedRealityPose joint);
		int32_t L_0;
		L_0 = WindowsMixedRealityHandRecorder_get_ReferenceJoint_m8265A08CEB726848BA79390B3723C5B365979922_inline(__this, /*hidden argument*/NULL);
		uint8_t L_1 = ___handedness0;
		bool L_2;
		L_2 = HandJointUtils_TryGetJointPose_m1BFDEE99B85D7C366ECBF9EF7B4044CEFD46E90C(L_0, L_1, (MixedRealityPose_t7089584858BB76148AA1F83EB73B973E93554669 *)(&V_0), /*hidden argument*/NULL);
		// offset = joint.Position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = MixedRealityPose_get_Position_m34E0E9859576E00CEB1CC3D1D31F18C45B1712A3_inline((MixedRealityPose_t7089584858BB76148AA1F83EB73B973E93554669 *)(&V_0), /*hidden argument*/NULL);
		__this->set_offset_7(L_3);
		// recordingHand = handedness;
		uint8_t L_4 = ___handedness0;
		__this->set_recordingHand_8(L_4);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::RecordHandStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_RecordHandStop_m59EEE2015646277D509DD1C5B868CD6F29734318 (WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArticulatedHandPose_tD6A7652461D7161AB3C133D7206630066D08C9DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPoseU5BU5D_t5C57F164C0B0AB8BD85B6166C012C7B5189C0B89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral845601714FB132030B7585887918D078E9CE2267);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD89EC3F9FF2985A58F63B8BD8CBC002A9CBBEA32);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPoseU5BU5D_t5C57F164C0B0AB8BD85B6166C012C7B5189C0B89* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// MixedRealityPose[] jointPoses = new MixedRealityPose[jointCount];
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E_il2cpp_TypeInfo_var);
		int32_t L_0 = ((WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E_il2cpp_TypeInfo_var))->get_jointCount_4();
		MixedRealityPoseU5BU5D_t5C57F164C0B0AB8BD85B6166C012C7B5189C0B89* L_1 = (MixedRealityPoseU5BU5D_t5C57F164C0B0AB8BD85B6166C012C7B5189C0B89*)(MixedRealityPoseU5BU5D_t5C57F164C0B0AB8BD85B6166C012C7B5189C0B89*)SZArrayNew(MixedRealityPoseU5BU5D_t5C57F164C0B0AB8BD85B6166C012C7B5189C0B89_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// for (int i = 0; i < jointCount; ++i)
		V_2 = 0;
		goto IL_0027;
	}

IL_000f:
	{
		// HandJointUtils.TryGetJointPose((TrackedHandJoint)i, recordingHand, out jointPoses[i]);
		int32_t L_2 = V_2;
		uint8_t L_3 = __this->get_recordingHand_8();
		MixedRealityPoseU5BU5D_t5C57F164C0B0AB8BD85B6166C012C7B5189C0B89* L_4 = V_0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		bool L_6;
		L_6 = HandJointUtils_TryGetJointPose_m1BFDEE99B85D7C366ECBF9EF7B4044CEFD46E90C(L_2, L_3, (MixedRealityPose_t7089584858BB76148AA1F83EB73B973E93554669 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), /*hidden argument*/NULL);
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0027:
	{
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_8 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E_il2cpp_TypeInfo_var);
		int32_t L_9 = ((WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E_il2cpp_TypeInfo_var))->get_jointCount_4();
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000f;
		}
	}
	{
		// ArticulatedHandPose pose = new ArticulatedHandPose();
		ArticulatedHandPose_tD6A7652461D7161AB3C133D7206630066D08C9DF * L_10 = (ArticulatedHandPose_tD6A7652461D7161AB3C133D7206630066D08C9DF *)il2cpp_codegen_object_new(ArticulatedHandPose_tD6A7652461D7161AB3C133D7206630066D08C9DF_il2cpp_TypeInfo_var);
		ArticulatedHandPose__ctor_m3358622E99A12E2746F4040F59C6791FDC58E92F(L_10, /*hidden argument*/NULL);
		// pose.ParseFromJointPoses(jointPoses, recordingHand, Quaternion.identity, offset);
		ArticulatedHandPose_tD6A7652461D7161AB3C133D7206630066D08C9DF * L_11 = L_10;
		MixedRealityPoseU5BU5D_t5C57F164C0B0AB8BD85B6166C012C7B5189C0B89* L_12 = V_0;
		uint8_t L_13 = __this->get_recordingHand_8();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = __this->get_offset_7();
		NullCheck(L_11);
		ArticulatedHandPose_ParseFromJointPoses_mA0CA3EFC04F141F3916D62FFC27CD502A2A1B2EA(L_11, L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		// recordingHand = Handedness.None;
		__this->set_recordingHand_8(0);
		// var filename = String.Format("{0}-{1}.json", OutputFileName, DateTime.UtcNow.ToString("yyyyMMdd-HHmmss"));
		String_t* L_16;
		L_16 = WindowsMixedRealityHandRecorder_get_OutputFileName_m1D913980165D1401A5F06670BD0B4050EF7CF4A1_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_17;
		L_17 = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090(/*hidden argument*/NULL);
		V_3 = L_17;
		String_t* L_18;
		L_18 = DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_3), _stringLiteral845601714FB132030B7585887918D078E9CE2267, /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralD89EC3F9FF2985A58F63B8BD8CBC002A9CBBEA32, L_16, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		// StoreRecordedHandPose(pose.ToJson(), filename);
		NullCheck(L_11);
		String_t* L_20;
		L_20 = ArticulatedHandPose_ToJson_m2AA8273D745D69A477CAF5F80A74AC185BA92CC8(L_11, /*hidden argument*/NULL);
		String_t* L_21 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E_il2cpp_TypeInfo_var);
		WindowsMixedRealityHandRecorder_StoreRecordedHandPose_m4403959F60E3DBA04F11DD18116DCE4B09863822(L_20, L_21, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::StoreRecordedHandPose(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_StoreRecordedHandPose_m4403959F60E3DBA04F11DD18116DCE4B09863822 (String_t* ___data0, String_t* ___filename1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// string path = Path.Combine(Application.persistentDataPath, filename);
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		String_t* L_1 = ___filename1;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_0, L_1, /*hidden argument*/NULL);
		// using (TextWriter writer = File.CreateText(path))
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_3;
		L_3 = File_CreateText_mF393781AD8227008F1FE3646C896EBD3C4AC42B6(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		// writer.Write(data);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_4 = V_0;
		String_t* L_5 = ___data0;
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_4, L_5);
		// }
		IL2CPP_LEAVE(0x24, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		{
			TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_6 = V_0;
			if (!L_6)
			{
				goto IL_0023;
			}
		}

IL_001d:
		{
			TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_7 = V_0;
			NullCheck(L_7);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_7);
		}

IL_0023:
		{
			IL2CPP_END_FINALLY(26)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x24, IL_0024)
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder__ctor_m633772B7335A6D4EE4EBFB33126AC6D1E1E13DCF (WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral454DCA3FD02B698041CB0BC1D2E9DC932FDA7A7C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TrackedHandJoint ReferenceJoint { get; set; } = TrackedHandJoint.IndexTip;
		__this->set_U3CReferenceJointU3Ek__BackingField_5(((int32_t)11));
		// public string OutputFileName { get; } = "ArticulatedHandPose";
		__this->set_U3COutputFileNameU3Ek__BackingField_6(_stringLiteral454DCA3FD02B698041CB0BC1D2E9DC932FDA7A7C);
		// private Vector3 offset = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_offset_7(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder__cctor_mC7A9AD96EB7BACF6D4A5369719607582E80976CF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedHandJoint_t620F91E48DF5EDC1E7C044E57C73415B32654AC6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int jointCount = Enum.GetNames(typeof(TrackedHandJoint)).Length;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (TrackedHandJoint_t620F91E48DF5EDC1E7C044E57C73415B32654AC6_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2;
		L_2 = Enum_GetNames_m49110673091D017F43CF0F5F7AD9B7730306D2E8(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		((WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E_il2cpp_TypeInfo_var))->set_jointCount_4(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater::get_ReprojectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityReprojectionUpdater_get_ReprojectionMethod_mE0C04BAF65CDFEE8F3B2CA6E0BD68D235DEA164D (WindowsMixedRealityReprojectionUpdater_tE7383297DACC1F627D8A9E069D322491647EC5E5 * __this, const RuntimeMethod* method)
{
	{
		// public HolographicDepthReprojectionMethod ReprojectionMethod { get; set; }
		int32_t L_0 = __this->get_U3CReprojectionMethodU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater::set_ReprojectionMethod(Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityReprojectionUpdater_set_ReprojectionMethod_m5067010F5FD603EB7C057D568562B0AA8662ABEA (WindowsMixedRealityReprojectionUpdater_tE7383297DACC1F627D8A9E069D322491647EC5E5 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public HolographicDepthReprojectionMethod ReprojectionMethod { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CReprojectionMethodU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityReprojectionUpdater__ctor_m0F053AC739E427739586F25FC8CFC37D216D0520 (WindowsMixedRealityReprojectionUpdater_tE7383297DACC1F627D8A9E069D322491647EC5E5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_UtilitiesProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityUtilities_get_UtilitiesProvider_m9678D76928FE22D8039F909972DC2B45626ED721 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var))->get_U3CUtilitiesProviderU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::set_UtilitiesProvider(Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityUtilities_set_UtilitiesProvider_m72FA5EECDA145EB55BD2D6C3FBAB74F636E19896 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		((WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var))->set_U3CUtilitiesProviderU3Ek__BackingField_0(L_0);
		return;
	}
}
// Windows.UI.Input.Spatial.SpatialInteractionManager Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_SpatialInteractionManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * WindowsMixedRealityUtilities_get_SpatialInteractionManager_mEDBD46D8E2EC454995AC8BACEFCB771DC42C4050 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_SpatialInteractionManagerU3Eb__6_0_m13A3E241E9C67C587528E14437D487AFC0A6492D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C * G_B3_0 = NULL;
	AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C * G_B2_0 = NULL;
	{
		// if (spatialInteractionManager == null)
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * L_0 = ((WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var))->get_spatialInteractionManager_1();
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		// UnityEngine.WSA.Application.InvokeOnUIThread(() =>
		// {
		//     spatialInteractionManager = SpatialInteractionManager.GetForCurrentView();
		// }, true);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418_il2cpp_TypeInfo_var);
		AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C * L_1 = ((U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418_il2cpp_TypeInfo_var))->get_U3CU3E9__6_0_1();
		AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C * L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418_il2cpp_TypeInfo_var);
		U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418 * L_3 = ((U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C * L_4 = (AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C *)il2cpp_codegen_object_new(AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C_il2cpp_TypeInfo_var);
		AppCallbackItem__ctor_m87EC22B203716A10F85F21E155D3CE3745F49FF4(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3Cget_SpatialInteractionManagerU3Eb__6_0_m13A3E241E9C67C587528E14437D487AFC0A6492D_RuntimeMethod_var), /*hidden argument*/NULL);
		AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C * L_5 = L_4;
		((U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418_il2cpp_TypeInfo_var))->set_U3CU3E9__6_0_1(L_5);
		G_B3_0 = L_5;
	}

IL_0026:
	{
		Application_InvokeOnUIThread_m4013116AFAB872FBFD84F2CE06CF3B812D068130(G_B3_0, (bool)1, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// return spatialInteractionManager;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * L_6 = ((WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var))->get_spatialInteractionManager_1();
		return L_6;
	}
}
// Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_SpatialCoordinateSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m97A085C49302BEA63105E58475D29A014AFF99F2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWindowsMixedRealityUtilitiesProvider_tB8E71F17F3DD5367F45DE7728874BEDB2120916D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (UtilitiesProvider != null)
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = WindowsMixedRealityUtilities_get_UtilitiesProvider_m9678D76928FE22D8039F909972DC2B45626ED721_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		// IntPtr newSpatialCoordinateSystemPtr = UtilitiesProvider.ISpatialCoordinateSystemPtr;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = WindowsMixedRealityUtilities_get_UtilitiesProvider_m9678D76928FE22D8039F909972DC2B45626ED721_inline(/*hidden argument*/NULL);
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = InterfaceFuncInvoker0< intptr_t >::Invoke(0 /* System.IntPtr Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider::get_ISpatialCoordinateSystemPtr() */, IWindowsMixedRealityUtilitiesProvider_tB8E71F17F3DD5367F45DE7728874BEDB2120916D_il2cpp_TypeInfo_var, L_1);
		V_0 = (intptr_t)L_2;
		// if (newSpatialCoordinateSystemPtr != currentSpatialCoordinateSystemPtr && newSpatialCoordinateSystemPtr != IntPtr.Zero)
		intptr_t L_3 = V_0;
		intptr_t L_4 = ((WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var))->get_currentSpatialCoordinateSystemPtr_2();
		bool L_5;
		L_5 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		intptr_t L_6 = V_0;
		bool L_7;
		L_7 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_6, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		// spatialCoordinateSystem = Marshal.GetObjectForIUnknown(newSpatialCoordinateSystemPtr) as SpatialCoordinateSystem;
		intptr_t L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_9;
		L_9 = Marshal_GetObjectForIUnknown_m9D5CB9B12B72BC4CCC46E363C805A03FFE644443((intptr_t)L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		((WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var))->set_spatialCoordinateSystem_3(((SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB *)IsInstSealed((RuntimeObject*)L_9, SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB_il2cpp_TypeInfo_var)));
		// currentSpatialCoordinateSystemPtr = newSpatialCoordinateSystemPtr;
		intptr_t L_10 = V_0;
		((WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var))->set_currentSpatialCoordinateSystemPtr_2((intptr_t)L_10);
	}

IL_0042:
	{
		// return spatialCoordinateSystem;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * L_11 = ((WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var))->get_spatialCoordinateSystem_3();
		return L_11;
	}
}
// Windows.Graphics.Holographic.HolographicFrame Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_CurrentHolographicFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicFrame_t16CC7D90BCAF0D8BAC1D7C941B18567F460C99EC * WindowsMixedRealityUtilities_get_CurrentHolographicFrame_m157B95EF92470BCF9BA7B4BE20F4866CCB7F45AA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicFrame_t16CC7D90BCAF0D8BAC1D7C941B18567F460C99EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWindowsMixedRealityUtilitiesProvider_tB8E71F17F3DD5367F45DE7728874BEDB2120916D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UtilitiesProvider == null || UtilitiesProvider.IHolographicFramePtr == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = WindowsMixedRealityUtilities_get_UtilitiesProvider_m9678D76928FE22D8039F909972DC2B45626ED721_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = WindowsMixedRealityUtilities_get_UtilitiesProvider_m9678D76928FE22D8039F909972DC2B45626ED721_inline(/*hidden argument*/NULL);
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = InterfaceFuncInvoker0< intptr_t >::Invoke(1 /* System.IntPtr Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider::get_IHolographicFramePtr() */, IWindowsMixedRealityUtilitiesProvider_tB8E71F17F3DD5367F45DE7728874BEDB2120916D_il2cpp_TypeInfo_var, L_1);
		bool L_3;
		L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}

IL_001d:
	{
		// return null;
		return (HolographicFrame_t16CC7D90BCAF0D8BAC1D7C941B18567F460C99EC *)NULL;
	}

IL_001f:
	{
		// return Marshal.GetObjectForIUnknown(UtilitiesProvider.IHolographicFramePtr) as HolographicFrame;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = WindowsMixedRealityUtilities_get_UtilitiesProvider_m9678D76928FE22D8039F909972DC2B45626ED721_inline(/*hidden argument*/NULL);
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = InterfaceFuncInvoker0< intptr_t >::Invoke(1 /* System.IntPtr Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider::get_IHolographicFramePtr() */, IWindowsMixedRealityUtilitiesProvider_tB8E71F17F3DD5367F45DE7728874BEDB2120916D_il2cpp_TypeInfo_var, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_6;
		L_6 = Marshal_GetObjectForIUnknown_m9D5CB9B12B72BC4CCC46E363C805A03FFE644443((intptr_t)L_5, /*hidden argument*/NULL);
		return ((HolographicFrame_t16CC7D90BCAF0D8BAC1D7C941B18567F460C99EC *)IsInstSealed((RuntimeObject*)L_6, HolographicFrame_t16CC7D90BCAF0D8BAC1D7C941B18567F460C99EC_il2cpp_TypeInfo_var));
	}
}
// Windows.Graphics.Holographic.HolographicFrame Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_CurrentWindowsHolographicFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicFrame_t16CC7D90BCAF0D8BAC1D7C941B18567F460C99EC * WindowsMixedRealityUtilities_get_CurrentWindowsHolographicFrame_mBA2F0453EFE61DB40089039923577164C7534F23 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HolographicFrame_t16CC7D90BCAF0D8BAC1D7C941B18567F460C99EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWindowsMixedRealityUtilitiesProvider_tB8E71F17F3DD5367F45DE7728874BEDB2120916D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UtilitiesProvider == null || UtilitiesProvider.IHolographicFramePtr == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = WindowsMixedRealityUtilities_get_UtilitiesProvider_m9678D76928FE22D8039F909972DC2B45626ED721_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = WindowsMixedRealityUtilities_get_UtilitiesProvider_m9678D76928FE22D8039F909972DC2B45626ED721_inline(/*hidden argument*/NULL);
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = InterfaceFuncInvoker0< intptr_t >::Invoke(1 /* System.IntPtr Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider::get_IHolographicFramePtr() */, IWindowsMixedRealityUtilitiesProvider_tB8E71F17F3DD5367F45DE7728874BEDB2120916D_il2cpp_TypeInfo_var, L_1);
		bool L_3;
		L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}

IL_001d:
	{
		// return null;
		return (HolographicFrame_t16CC7D90BCAF0D8BAC1D7C941B18567F460C99EC *)NULL;
	}

IL_001f:
	{
		// return Marshal.GetObjectForIUnknown(UtilitiesProvider.IHolographicFramePtr) as global::Windows.Graphics.Holographic.HolographicFrame;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = WindowsMixedRealityUtilities_get_UtilitiesProvider_m9678D76928FE22D8039F909972DC2B45626ED721_inline(/*hidden argument*/NULL);
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = InterfaceFuncInvoker0< intptr_t >::Invoke(1 /* System.IntPtr Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider::get_IHolographicFramePtr() */, IWindowsMixedRealityUtilitiesProvider_tB8E71F17F3DD5367F45DE7728874BEDB2120916D_il2cpp_TypeInfo_var, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_6;
		L_6 = Marshal_GetObjectForIUnknown_m9D5CB9B12B72BC4CCC46E363C805A03FFE644443((intptr_t)L_5, /*hidden argument*/NULL);
		return ((HolographicFrame_t16CC7D90BCAF0D8BAC1D7C941B18567F460C99EC *)IsInstSealed((RuntimeObject*)L_6, HolographicFrame_t16CC7D90BCAF0D8BAC1D7C941B18567F460C99EC_il2cpp_TypeInfo_var));
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::SystemVector3ToUnity(System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  WindowsMixedRealityUtilities_SystemVector3ToUnity_m2FB35B602C51D798221CF7DF3CDE0B6CA5ADCA14 (Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  ___vector0, const RuntimeMethod* method)
{
	{
		// return vector.ToUnityVector3();
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_0 = ___vector0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = SystemNumericsExtensions_ToUnityVector3_mA53A59A622EBAF6C3BAC86F31DF7680683EABE42(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::SystemQuaternionToUnity(System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  WindowsMixedRealityUtilities_SystemQuaternionToUnity_m3847B5533AEA7C1981F794F1116F9B6F7F3FE178 (Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C  ___quaternion0, const RuntimeMethod* method)
{
	{
		// return quaternion.ToUnityQuaternion();
		Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C  L_0 = ___quaternion0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = SystemNumericsExtensions_ToUnityQuaternion_m09E22D30B18D7621D92780F6153825523EAA1A0D(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityUtilities__cctor_m9DEF562AAA18B9CB375F3D57B0FD1D79429777D2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		((WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var))->set_U3CUtilitiesProviderU3Ek__BackingField_0((RuntimeObject*)NULL);
		// private static SpatialInteractionManager spatialInteractionManager = null;
		((WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var))->set_spatialInteractionManager_1((SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 *)NULL);
		// private static IntPtr currentSpatialCoordinateSystemPtr = IntPtr.Zero;
		((WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var))->set_currentSpatialCoordinateSystemPtr_2((intptr_t)(0));
		// private static SpatialCoordinateSystem spatialCoordinateSystem = null;
		((WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var))->set_spatialCoordinateSystem_3((SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB *)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetViewMatricesOnFrameEndU3Ed__4__ctor_m7BCB3FBC5A5A82DBAE437855058390952E14DC09 (U3CResetViewMatricesOnFrameEndU3Ed__4_t606760AA02E5E7D22B10BF928642555E33EAEB71 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetViewMatricesOnFrameEndU3Ed__4_System_IDisposable_Dispose_mD2C416EA1937196703E0A63BAB3C760CD9971A60 (U3CResetViewMatricesOnFrameEndU3Ed__4_t606760AA02E5E7D22B10BF928642555E33EAEB71 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CResetViewMatricesOnFrameEndU3Ed__4_MoveNext_m0633BE16F67BA3AAE6F094792173E4471E51C8E9 (U3CResetViewMatricesOnFrameEndU3Ed__4_t606760AA02E5E7D22B10BF928642555E33EAEB71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_3 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_002b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// CameraCache.Main.ResetStereoViewMatrices();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4;
		L_4 = CameraCache_get_Main_m9B531633C9F0EEFE28FE56E6F9609A91E0EC3F5A(/*hidden argument*/NULL);
		NullCheck(L_4);
		Camera_ResetStereoViewMatrices_m002B09EC64D0B425EC18F16467A85BFAF2C73864(L_4, /*hidden argument*/NULL);
		// CameraCache.Main.ResetStereoProjectionMatrices();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5;
		L_5 = CameraCache_get_Main_m9B531633C9F0EEFE28FE56E6F9609A91E0EC3F5A(/*hidden argument*/NULL);
		NullCheck(L_5);
		Camera_ResetStereoProjectionMatrices_m1C656CC93F8DA9AF5C10A95AA3FF1F29F4DF91E9(L_5, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CResetViewMatricesOnFrameEndU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC126B87843DAA77D997E6371AFF032CAE740540C (U3CResetViewMatricesOnFrameEndU3Ed__4_t606760AA02E5E7D22B10BF928642555E33EAEB71 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetViewMatricesOnFrameEndU3Ed__4_System_Collections_IEnumerator_Reset_mBB8DCC2648DF6776131EDF9789AD1C7F67DF7C09 (U3CResetViewMatricesOnFrameEndU3Ed__4_t606760AA02E5E7D22B10BF928642555E33EAEB71 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResetViewMatricesOnFrameEndU3Ed__4_System_Collections_IEnumerator_Reset_mBB8DCC2648DF6776131EDF9789AD1C7F67DF7C09_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CResetViewMatricesOnFrameEndU3Ed__4_System_Collections_IEnumerator_get_Current_m99F320E5C08B5F5E472BC449F602F3D7AB19E675 (U3CResetViewMatricesOnFrameEndU3Ed__4_t606760AA02E5E7D22B10BF928642555E33EAEB71 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m13D0E1FEE7089E1A7B64AABEF325294D80BC81D5 (U3CU3Ec__DisplayClass12_0_t5A6783DF38B3EA4588EF45A4D24CEB810CAD4501 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<>c__DisplayClass12_0::<UpdateHandMesh>b__0(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0_U3CUpdateHandMeshU3Eb__0_mB4E5EC0EF59C2CFE7CA6DDF50C67B81807FF6A27 (U3CU3Ec__DisplayClass12_0_t5A6783DF38B3EA4588EF45A4D24CEB810CAD4501 * __this, int64_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CUpdateHandMeshU3Eb__0_mB4E5EC0EF59C2CFE7CA6DDF50C67B81807FF6A27_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// neutralVertexAndNormals[i].Position.ConvertToUnityVector3(ref neutralPoseVertices[i]);
		HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* L_0 = __this->get_neutralVertexAndNormals_0();
		int64_t L_1 = ___i0;
		if ((int64_t)(L_1) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), U3CU3Ec__DisplayClass12_0_U3CUpdateHandMeshU3Eb__0_mB4E5EC0EF59C2CFE7CA6DDF50C67B81807FF6A27_RuntimeMethod_var);
		NullCheck(L_0);
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((intptr_t)L_1))))->get_Position_0();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3 = __this->get_neutralPoseVertices_1();
		int64_t L_4 = ___i0;
		if ((int64_t)(L_4) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), U3CU3Ec__DisplayClass12_0_U3CUpdateHandMeshU3Eb__0_mB4E5EC0EF59C2CFE7CA6DDF50C67B81807FF6A27_RuntimeMethod_var);
		NullCheck(L_3);
		SystemNumericsExtensions_ConvertToUnityVector3_m46FC9B5BD8EEE8EAAF6921365C1F069132D44631(L_2, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(((intptr_t)L_4)))), /*hidden argument*/NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetHandMeshObserverU3Ed__9_MoveNext_mDF755E522A09E1F8D253561EC0028C2EFAD9A71E (U3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E_TisU3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF_m5F7EAE6D1FEE7598D9CB7467B0091B621D7D8A47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m59638659560BF6E7A32BE216A243011FC4E906F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m5D6FF641B7538EB84114C6AE307B3A91B49DBD1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisHandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273_m5EC4FF7F7B66CDE9B445927A5B7350344EAF4FBD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13 * V_1 = NULL;
	HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * V_2 = NULL;
	TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0050;
			}
		}

IL_0011:
		{
			// handMeshObserver = await sourceState.Source.TryCreateHandMeshObserverAsync();
			SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * L_3 = __this->get_sourceState_2();
			NullCheck(L_3);
			SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F * L_4;
			L_4 = SpatialInteractionSourceState_get_Source_mDFBB7ECDC326D42075DCF0B8D5779B7D11EAFD8F(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = SpatialInteractionSource_TryCreateHandMeshObserverAsync_mE8630D9D92744C27BD5EBD758B42C3CB6ACFEC5C(L_4, /*hidden argument*/NULL);
			TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E  L_6;
			L_6 = WindowsRuntimeSystemExtensions_GetAwaiter_TisHandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273_m5EC4FF7F7B66CDE9B445927A5B7350344EAF4FBD(L_5, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisHandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273_m5EC4FF7F7B66CDE9B445927A5B7350344EAF4FBD_RuntimeMethod_var);
			V_3 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_1_get_IsCompleted_m5D6FF641B7538EB84114C6AE307B3A91B49DBD1D((TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m5D6FF641B7538EB84114C6AE307B3A91B49DBD1D_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_006c;
			}
		}

IL_0030:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E  L_9 = V_3;
			__this->set_U3CU3Eu__1_4(L_9);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E_TisU3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF_m5F7EAE6D1FEE7598D9CB7467B0091B621D7D8A47((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_10, (TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E *)(&V_3), (U3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E_TisU3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF_m5F7EAE6D1FEE7598D9CB7467B0091B621D7D8A47_RuntimeMethod_var);
			goto IL_00a9;
		}

IL_0050:
		{
			TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E  L_11 = __this->get_U3CU3Eu__1_4();
			V_3 = L_11;
			TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E * L_12 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_006c:
		{
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_14;
			L_14 = TaskAwaiter_1_GetResult_m59638659560BF6E7A32BE216A243011FC4E906F1((TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m59638659560BF6E7A32BE216A243011FC4E906F1_RuntimeMethod_var);
			V_2 = L_14;
			WindowsMixedRealityArticulatedHandDefinition_tF128692A1A0BE39085993ACE29F9E6F6D2835C13 * L_15 = V_1;
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_16 = V_2;
			NullCheck(L_15);
			L_15->set_handMeshObserver_19(L_16);
			goto IL_0096;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007d;
		}
		throw e;
	}

CATCH_007d:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_17 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_18 = V_4;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_17, L_18, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a9;
	} // end catch (depth: 1)

IL_0096:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_19, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetHandMeshObserverU3Ed__9_MoveNext_mDF755E522A09E1F8D253561EC0028C2EFAD9A71E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF * _thisAdjusted = reinterpret_cast<U3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF *>(__this + _offset);
	U3CSetHandMeshObserverU3Ed__9_MoveNext_mDF755E522A09E1F8D253561EC0028C2EFAD9A71E(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetHandMeshObserverU3Ed__9_SetStateMachine_m0BAB9B69FD7069605F998F2EFC3181758447EB0C (U3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetHandMeshObserverU3Ed__9_SetStateMachine_m0BAB9B69FD7069605F998F2EFC3181758447EB0C_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF * _thisAdjusted = reinterpret_cast<U3CSetHandMeshObserverU3Ed__9_t12541268ECE18FF4F0038919D481DFCA5B6407AF *>(__this + _offset);
	U3CSetHandMeshObserverU3Ed__9_SetStateMachine_m0BAB9B69FD7069605F998F2EFC3181758447EB0C(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mE6503E577D8B0CDD0C26C9E92C2968C690243843 (U3CU3Ec__DisplayClass17_0_tB553DBEC2E07BDD097E9BF81DCF48F2FAC0A942B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider/<>c__DisplayClass17_0::<UpdateHandMesh>b__0(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0_U3CUpdateHandMeshU3Eb__0_m657AE6F991F841D51E6D8D244A098947BC81A913 (U3CU3Ec__DisplayClass17_0_tB553DBEC2E07BDD097E9BF81DCF48F2FAC0A942B * __this, int64_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_U3CUpdateHandMeshU3Eb__0_m657AE6F991F841D51E6D8D244A098947BC81A913_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// neutralVertexAndNormals[i].Position.ConvertToUnityVector3(ref neutralPoseVertices[i]);
		HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* L_0 = __this->get_neutralVertexAndNormals_0();
		int64_t L_1 = ___i0;
		if ((int64_t)(L_1) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), U3CU3Ec__DisplayClass17_0_U3CUpdateHandMeshU3Eb__0_m657AE6F991F841D51E6D8D244A098947BC81A913_RuntimeMethod_var);
		NullCheck(L_0);
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((intptr_t)L_1))))->get_Position_0();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3 = __this->get_neutralPoseVertices_1();
		int64_t L_4 = ___i0;
		if ((int64_t)(L_4) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), U3CU3Ec__DisplayClass17_0_U3CUpdateHandMeshU3Eb__0_m657AE6F991F841D51E6D8D244A098947BC81A913_RuntimeMethod_var);
		NullCheck(L_3);
		SystemNumericsExtensions_ConvertToUnityVector3_m46FC9B5BD8EEE8EAAF6921365C1F069132D44631(L_2, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(((intptr_t)L_4)))), /*hidden argument*/NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider/<SetHandMeshObserver>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetHandMeshObserverU3Ed__14_MoveNext_m7BDD5A8C574A7F865E8CF86680ED9B07309A301F (U3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E_TisU3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063_m7E4D46F7940DE0C3384AD76D38F33A8A28C9404D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m59638659560BF6E7A32BE216A243011FC4E906F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m5D6FF641B7538EB84114C6AE307B3A91B49DBD1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisHandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273_m5EC4FF7F7B66CDE9B445927A5B7350344EAF4FBD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D * V_1 = NULL;
	HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * V_2 = NULL;
	TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0050;
			}
		}

IL_0011:
		{
			// handMeshObserver = await sourceState.Source.TryCreateHandMeshObserverAsync();
			SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * L_3 = __this->get_sourceState_2();
			NullCheck(L_3);
			SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F * L_4;
			L_4 = SpatialInteractionSourceState_get_Source_mDFBB7ECDC326D42075DCF0B8D5779B7D11EAFD8F(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = SpatialInteractionSource_TryCreateHandMeshObserverAsync_mE8630D9D92744C27BD5EBD758B42C3CB6ACFEC5C(L_4, /*hidden argument*/NULL);
			TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E  L_6;
			L_6 = WindowsRuntimeSystemExtensions_GetAwaiter_TisHandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273_m5EC4FF7F7B66CDE9B445927A5B7350344EAF4FBD(L_5, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisHandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273_m5EC4FF7F7B66CDE9B445927A5B7350344EAF4FBD_RuntimeMethod_var);
			V_3 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_1_get_IsCompleted_m5D6FF641B7538EB84114C6AE307B3A91B49DBD1D((TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m5D6FF641B7538EB84114C6AE307B3A91B49DBD1D_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_006c;
			}
		}

IL_0030:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E  L_9 = V_3;
			__this->set_U3CU3Eu__1_4(L_9);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E_TisU3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063_m7E4D46F7940DE0C3384AD76D38F33A8A28C9404D((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_10, (TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E *)(&V_3), (U3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E_TisU3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063_m7E4D46F7940DE0C3384AD76D38F33A8A28C9404D_RuntimeMethod_var);
			goto IL_00a9;
		}

IL_0050:
		{
			TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E  L_11 = __this->get_U3CU3Eu__1_4();
			V_3 = L_11;
			TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E * L_12 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_006c:
		{
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_14;
			L_14 = TaskAwaiter_1_GetResult_m59638659560BF6E7A32BE216A243011FC4E906F1((TaskAwaiter_1_t59C4BF68748C7635B4B270610D6FF61B7CDF731E *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m59638659560BF6E7A32BE216A243011FC4E906F1_RuntimeMethod_var);
			V_2 = L_14;
			WindowsMixedRealityHandMeshProvider_t26B242E4887A7DAF24C5E9E86C18D72806D54A1D * L_15 = V_1;
			HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * L_16 = V_2;
			NullCheck(L_15);
			L_15->set_handMeshObserver_1(L_16);
			goto IL_0096;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007d;
		}
		throw e;
	}

CATCH_007d:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_17 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_18 = V_4;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_17, L_18, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a9;
	} // end catch (depth: 1)

IL_0096:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_19, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetHandMeshObserverU3Ed__14_MoveNext_m7BDD5A8C574A7F865E8CF86680ED9B07309A301F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063 * _thisAdjusted = reinterpret_cast<U3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063 *>(__this + _offset);
	U3CSetHandMeshObserverU3Ed__14_MoveNext_m7BDD5A8C574A7F865E8CF86680ED9B07309A301F(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider/<SetHandMeshObserver>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetHandMeshObserverU3Ed__14_SetStateMachine_m89C121E05E1F7A23E8B11A65FEE19E38353C4977 (U3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetHandMeshObserverU3Ed__14_SetStateMachine_m89C121E05E1F7A23E8B11A65FEE19E38353C4977_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063 * _thisAdjusted = reinterpret_cast<U3CSetHandMeshObserverU3Ed__14_tD139413A115955FFB073C30EBF1F09E55C18A063 *>(__this + _offset);
	U3CSetHandMeshObserverU3Ed__14_SetStateMachine_m89C121E05E1F7A23E8B11A65FEE19E38353C4977(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m11365F530112B3D6ABA82268D955130047C8C5B8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418 * L_0 = (U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418 *)il2cpp_codegen_object_new(U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC041A740F617D5B98E4BC8386E79A6E8ED65A1BE(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC041A740F617D5B98E4BC8386E79A6E8ED65A1BE (U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities/<>c::<get_SpatialInteractionManager>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3Cget_SpatialInteractionManagerU3Eb__6_0_m13A3E241E9C67C587528E14437D487AFC0A6492D (U3CU3Ec_tA30E0D4F292DBE67581D6E67B4FD9F444BE12418 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spatialInteractionManager = SpatialInteractionManager.GetForCurrentView();
		SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * L_0;
		L_0 = SpatialInteractionManager_GetForCurrentView_m77EF39A84C58C1F95BF8E7D002F88B86B9382560(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		((WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var))->set_spatialInteractionManager_1(L_0);
		// }, true);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WindowsMixedRealityCameraSettingsProfile_get_RenderFromPVCameraForMixedRealityCapture_mA079DB5220894D6FFAEE2BDD893962136A6E6BBE_inline (WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3 * __this, const RuntimeMethod* method)
{
	{
		// public bool RenderFromPVCameraForMixedRealityCapture => renderFromPVCameraForMixedRealityCapture;
		bool L_0 = __this->get_renderFromPVCameraForMixedRealityCapture_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ProjectionOverride_get_ReadingModeEnabled_m092707B112241BB475ADB11EEFF36D5B6A72752E_inline (ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD * __this, const RuntimeMethod* method)
{
	{
		// public bool ReadingModeEnabled { get; set; } = false;
		bool L_0 = __this->get_U3CReadingModeEnabledU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProjectionOverride_set_ReadingModeEnabled_mD98C405CAA8D6392109B5ED0848BB06AA15B994B_inline (ProjectionOverride_t7456DBCFB278C27EDF7203853BE613A73F6884BD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ReadingModeEnabled { get; set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CReadingModeEnabledU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityCameraSettingsProfile_get_ReprojectionMethod_m2E1568953F627FD08E366A0054F2B806255F2ABD_inline (WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3 * __this, const RuntimeMethod* method)
{
	{
		// public HolographicDepthReprojectionMethod ReprojectionMethod => reprojectionMethod;
		int32_t L_0 = __this->get_reprojectionMethod_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsMixedRealityReprojectionUpdater_set_ReprojectionMethod_m5067010F5FD603EB7C057D568562B0AA8662ABEA_inline (WindowsMixedRealityReprojectionUpdater_tE7383297DACC1F627D8A9E069D322491647EC5E5 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public HolographicDepthReprojectionMethod ReprojectionMethod { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CReprojectionMethodU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WindowsMixedRealityCameraSettingsProfile_get_ReadingModeEnabled_mA0898DBBFF3DC063392B184C4A078B5ADCC0EA2B_inline (WindowsMixedRealityCameraSettingsProfile_t83538954FDAF90437D807363BA9A0ED17C24A7F3 * __this, const RuntimeMethod* method)
{
	{
		// public bool ReadingModeEnabled => readingModeEnabled;
		bool L_0 = __this->get_readingModeEnabled_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method)
{
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityHandTrackingProfile_t28838B85DF712221FF796BFD4430C1C880A0A1C8 * MixedRealityInputSystemProfile_get_HandTrackingProfile_m68AB045F05D5B7E5723E8D3331E837CAC058CE7A_inline (MixedRealityInputSystemProfile_tD94F4B1680EFF39B21E58E438A8EDE6FF8B8BA0C * __this, const RuntimeMethod* method)
{
	{
		// get { return handTrackingProfile; }
		MixedRealityHandTrackingProfile_t28838B85DF712221FF796BFD4430C1C880A0A1C8 * L_0 = __this->get_handTrackingProfile_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ArticulatedHandDefinition_get_InputSource_m968B8E2F1A9BF003A7AF616CEE6DBE13967E6F78_inline (ArticulatedHandDefinition_tB00E59E5D6C03BB299623466CF960FFBD2770BC5 * __this, const RuntimeMethod* method)
{
	{
		// protected IMixedRealityInputSource InputSource { get; }
		RuntimeObject* L_0 = __this->get_U3CInputSourceU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t BaseInputSourceDefinition_get_Handedness_mC43AF6FD8EF6FADB9A73FE9A238978B9506F6A8C_inline (BaseInputSourceDefinition_t36140FA79FA8E7F98B8767451A5A6F779BA9DE60 * __this, const RuntimeMethod* method)
{
	{
		// public Handedness Handedness { get; }
		uint8_t L_0 = __this->get_U3CHandednessU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD(L_0, (uint16_t)1, 0, 0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityHandRecorder_get_ReferenceJoint_m8265A08CEB726848BA79390B3723C5B365979922_inline (WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E * __this, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint ReferenceJoint { get; set; } = TrackedHandJoint.IndexTip;
		int32_t L_0 = __this->get_U3CReferenceJointU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPose_get_Position_m34E0E9859576E00CEB1CC3D1D31F18C45B1712A3_inline (MixedRealityPose_t7089584858BB76148AA1F83EB73B973E93554669 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Position { get { return position; } set { position = value; } }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_position_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WindowsMixedRealityHandRecorder_get_OutputFileName_m1D913980165D1401A5F06670BD0B4050EF7CF4A1_inline (WindowsMixedRealityHandRecorder_tED242FC39554321703585FC1F28962990D8D3E1E * __this, const RuntimeMethod* method)
{
	{
		// public string OutputFileName { get; } = "ArticulatedHandPose";
		String_t* L_0 = __this->get_U3COutputFileNameU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityUtilities_get_UtilitiesProvider_m9678D76928FE22D8039F909972DC2B45626ED721_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t01F24CFE579962BF011F2B5ABE86E642144EBEB9_il2cpp_TypeInfo_var))->get_U3CUtilitiesProviderU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1C8741C73000BD525E6034625DD1ED12EB07EA10_gshared_inline (Nullable_1_t9FF3BE791A3B4350B3DE3D72C440E11029540DD8 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
