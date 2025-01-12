﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Boolean>
struct Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<UnityEngine.UIElements.FocusController/FocusedElement>
struct List_1_tCE807AC7A0FCBE436F146AE2428BAEE81761D3BD;
// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventHandler>
struct List_1_tC6DEF7083E8206203302B1B25E23947E49BBD537;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>>
struct Stack_1_t6690D15BD9AF55850284F8D40D7F11987C320A86;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Event
struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210;
// UnityEngine.Font
struct Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90;
// UnityEngine.UIElements.CommandEventBase`1<System.Object>
struct CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2;
// UnityEngine.UIElements.CommandEventBase`1<UnityEngine.UIElements.ValidateCommandEvent>
struct CommandEventBase_1_tEE5807F3456E82B26B261EF8BA01B26EED0B7BF7;
// UnityEngine.UIElements.ElementUnderPointer
struct ElementUnderPointer_t95B57508EE9F6700FE873A796AAF66C0EE2A0035;
// UnityEngine.UIElements.EventBase
struct EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD;
// UnityEngine.UIElements.EventCallbackRegistry
struct EventCallbackRegistry_t0E675C9EC7F38446B7A42C43115CEDB7BE67776D;
// UnityEngine.UIElements.FocusChangeDirection
struct FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2;
// UnityEngine.UIElements.FocusController
struct FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231;
// UnityEngine.UIElements.IEventHandler
struct IEventHandler_t404CEA309DA7B5B5EB5536186E3F34645F0372B2;
// UnityEngine.UIElements.IFocusRing
struct IFocusRing_t88B357CA83A82B8A4E788D16D5AC8D13F7575A10;
// UnityEngine.UIElements.IPanel
struct IPanel_t3AAE62317DEE1C12E547C78C27556B659DE4F20A;
// UnityEngine.UIElements.IPointerEvent
struct IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA;
// UnityEngine.UIElements.IResolvedStyle
struct IResolvedStyle_t2060DD30A373FD89234D8817D41CFA4F50AFD6E3;
// UnityEngine.UIElements.ITransform
struct ITransform_tBE516C707776F6901090016FA3C23440B7CA9FF1;
// UnityEngine.UIElements.IVisualTreeUpdater
struct IVisualTreeUpdater_t852C59540FC81D3933D386849423D475CC91A526;
// UnityEngine.UIElements.IVisualTreeUpdater[]
struct IVisualTreeUpdaterU5BU5D_t5904B964DFD38F10C5DC8BC4B79623B67337012E;
// UnityEngine.UIElements.MouseEventBase`1<System.Object>
struct MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B;
// UnityEngine.UIElements.MouseEventBase`1<UnityEngine.UIElements.WheelEvent>
struct MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16;
// UnityEngine.UIElements.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>>
struct ObjectPool_1_t963B7012C6050595BA0DD41B91E1449B18E47483;
// UnityEngine.UIElements.ObjectPool`1<System.Object>
struct ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.ValidateCommandEvent>
struct ObjectPool_1_t3E613DF0D364E6DFC40975DE89452C6B8A081972;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.WheelEvent>
struct ObjectPool_1_tFEA72352176A972B5FFCF9EF215A0EF53F50EF33;
// UnityEngine.UIElements.PropagationPaths
struct PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D;
// UnityEngine.UIElements.RepaintData
struct RepaintData_tE3656A64C3BE5ABCD95A72370251036B6E75F74F;
// UnityEngine.UIElements.StyleSheets.InheritedStylesData
struct InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E;
// UnityEngine.UIElements.StyleSheets.StyleValuePropertyReader
struct StyleValuePropertyReader_t8D34F83135FC8E2E14A8A007B87201057EE90CFE;
// UnityEngine.UIElements.StyleSheets.VisualElementStylesData
struct VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867;
// UnityEngine.UIElements.ValidateCommandEvent
struct ValidateCommandEvent_t98BB6C7F28CD7D693BE5AFBF0CCD66BDD7C75BB5;
// UnityEngine.UIElements.VisualElement
struct VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57;
// UnityEngine.UIElements.VisualElementFocusChangeDirection
struct VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564;
// UnityEngine.UIElements.VisualElement[]
struct VisualElementU5BU5D_t4C80EBA10FD46936B42FD3578C55901A83406A19;
// UnityEngine.UIElements.VisualTreeUpdater
struct VisualTreeUpdater_t8BEB4BA17B59E1585E2A6BAA60CC204BDF20DE00;
// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray
struct UpdaterArray_t93CA64534EAECBB98F27909516A929F0182E96F6;
// UnityEngine.UIElements.WheelEvent
struct WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0;
// UnityEngine.Yoga.BaselineFunction
struct BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF;
// UnityEngine.Yoga.MeasureFunction
struct MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB;
// UnityEngine.Yoga.YogaNode
struct YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPanel_t3AAE62317DEE1C12E547C78C27556B659DE4F20A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IResolvedStyle_t2060DD30A373FD89234D8817D41CFA4F50AFD6E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITransform_tBE516C707776F6901090016FA3C23440B7CA9FF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVisualTreeUpdater_t852C59540FC81D3933D386849423D475CC91A526_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPool_1_t963B7012C6050595BA0DD41B91E1449B18E47483_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElementListPool_tC86DFF93B88CCF4BA2FA05CA6CAF27C44A3968DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YogaMeasureMode_t29AF57E74BCD4C16019B8BE88A317D54DA70C29F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral7B7F79DCB0F318BC5C97926F7A6B01DD9AC466F3;
IL2CPP_EXTERN_C String_t* _stringLiteral7B8892C341B2169B5D289B9D623022D4D45F9D32;
IL2CPP_EXTERN_C String_t* _stringLiteral89B2FB7CB2D6FC5BA732F40F495D1AA31E846275;
IL2CPP_EXTERN_C String_t* _stringLiteral8E00835171ED7C12FAB03A3AB4E021A16E424202;
IL2CPP_EXTERN_C String_t* _stringLiteral9D4799A1EA1B29596C1B95A43965FEEBF826C4AB;
IL2CPP_EXTERN_C String_t* _stringLiteralF85F26AAAFC4A629CE5FFFC8B45644F53059C64D;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaselineFunction_BeginInvoke_mFE9DBC35D599B1CAC5486CA763407647BF1712BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaselineFunction_EndInvoke_m5241F5CAA7D1977B8DA0311952A96A12363949F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaselineFunction_Invoke_mDFF741E9FD7678B6F0C4C23DB4F9BA83A2905558_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaselineFunction__ctor_m802CF88B3CD0E7E5B3CBB9218ACCA646FCE38BA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CommandEventBase_1__ctor_m8111E35E2D1EC2C170F257D50A7677DABD8E6232_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hierarchy_Equals_m52AE91927F4AAFDBF9D7B44B1F0D423D22696756_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hierarchy_Equals_m616F3BA8BB9C14B75D463BE09C13631E16D2ECBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hierarchy_GetHashCode_m4F98157C3D8DBF7B093B614938CC85FA41E764A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hierarchy_get_Item_m920E811BEA80C655F08E77CFE6B47EA29B213DE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hierarchy_get_childCount_m55A62C949CD95C8E9A99C1F3E1BB66200E5D9F25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hierarchy_get_parent_mB5F0897D8288DE7D36E376B44975CAE6649FBE54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hierarchy_op_Equality_mA5C6AF77C3F896889D97DDC58DC1093862253093_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m77739217B494F73058F22A1F9F0869FA96C70594_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m631F779762BD1DCE947B95C5D99CBC53A63183DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6C0DB901F8168ACF38155F620F1CB6E1F2DB0F85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_mEFA29A1794E6DB5C219BCE378075DEFCE60AD3EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m57F228A57F4615429556B31AC5AA7D291C85BC96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1FEA648A1CD054FC002A2D7053576931C8C97DF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_mE40C9BCF31A394E713DA8CF6D688C38E7FA66BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeasureFunction_BeginInvoke_mB9C8A9962F9B8C0EB0B86ADBFB106C3990CC0909_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeasureFunction_EndInvoke_mDC25248B9A9544C7411A7B51E79E5A6706474ECD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeasureFunction_Invoke_mCC3963DDDE51AF75E4795CF0E981093A55CB2D8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeasureFunction__ctor_mE87A532680536A2A9F9AEFC691F48B31C5074CDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MouseEventBase_1_GetPooled_m83D2C2965FAFCBBCC4DCE28FF42C11E02F5BC9B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MouseEventBase_1_Init_m4AFDA3322FAD8DB99CA8643F0A6B138FAE528503_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MouseEventBase_1__ctor_m6C60858453010A76FDBB5463E134641B6EF1475E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Native_YGNodeBaselineInvoke_m58B37C284F08E57BF28B9E9AB5CA99805F90BEEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Native_YGNodeLayoutGetHeight_mCCD0DB7B7B43AC12573EB92890D8320D1905B74D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Native_YGNodeLayoutGetLeft_mF2D7873317C43E67BFB6E12DFA83D91BA1665C14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Native_YGNodeLayoutGetTop_mF266D42D9DC6974DE17FEA0599088960F76074DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Native_YGNodeLayoutGetWidth_mE565C735D372CE7814D8BF015EACBCCE38DA755B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Native_YGNodeMeasureInvoke_mCD2D037E10DBF3D73CC83FC9078F17AA1271B913_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Get_m83999374C06606EB69656E7BB4D3D8C6491DD2A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Release_mE2A09982C94290F8B7AF32C73333A162A864C19C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1__ctor_mABDA9464D05D84474D01CF50AA4185DA530BFB5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_get_value_m02FCFEE40DC84680F81E39BF53E655481EBC76EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_get_value_m460120D6D56E76157D5859BE63CCCCE87CEF76F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_get_value_mD55B5A837BCF05AD4538ECDC78B15A47B8E2DB17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UpdaterArray_get_Item_m29DE9853F5765D6F552BD1F068BADCAD599EC262_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UpdaterArray_get_Item_m7EDA64425B194BC3004BE74C7D3F8D37FACE3A28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_RaiseEngineUpdate_mA1B27628894F519755E305EEDE906C0F39219460_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_RaiseFlushPendingResources_mF574684D4347F0DA7CD949B6C224625860B9A0C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility_RaiseGraphicsResourcesRecreate_mB64653A9A2F10D8477948B0F6CABD41516821289_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utility__cctor_m3E9C809A88275DAA163BA2116744980D66266801_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValidateCommandEvent__ctor_m201CB22C32A6082234311A13CA86AFA69B5F1713_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElementExtensions_ChangeCoordinatesTo_m572C40F726FFB1C87C3DD939C73B7F8D82098099_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElementExtensions_LocalToWorld_m0399FEC2B3012DA1E387181272C34AC2039F6048_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElementExtensions_WorldToLocal_mDC4BA07127F0B14E683BB722ECE56D2BB096FFA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElementExtensions_WorldToLocal_mFDEA66A0B4B27B27D235DE5E11E68E3145CA18C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElementFocusChangeDirection__cctor_mCADE7A6D9B39A4A69A2E194905A99E7720DA4F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElementFocusChangeDirection__ctor_m4778AD4F49F65A41D4A84B7DCC17DEB3B763A9D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElementFocusChangeDirection_get_left_m28008C7A22C13A69D46B56C5142FFBB2FC96F1C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElementFocusChangeDirection_get_right_m4248B7205638C7879845E604E6131863AC4263A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElementListPool_Get_m2BCCF21A7B3C2E0F56658F64D5EC38BED801A26C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElementListPool_Release_mE7A728F375DFC2C80F6DF8EC4762C7153956FF2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElementListPool__cctor_mB669465FCA43A8A284DC294B068CE167021874F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_ContainsPoint_m9BFB6FD5618E36CB2930B5763E3479C977EF9189_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_IncrementVersion_m0FFACC45649C45D997AC6392A4815AAAACDE46D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_MultiplyMatrix44Point2_m9E25080F31A2CB7F1FD3F0F4824F1FF65FE6B80E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_RetargetElement_m9FCCC23490BAAB3806409A2DCF101F02E93AB047_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_SendEvent_m9A6577979BFD74DE796F00ECF20292B239C79DAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_ShouldClip_m20B783A59D583676F075679BFD66EAA4082A624F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_TransformAlignedRect_m08EE763B8197A841E3F62C79EF5CF1E538E70AFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_UnityEngine_UIElements_IResolvedStyle_get_display_mE18E6C2CDCEA0F5D253E939F9357B5921033E4E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_UnityEngine_UIElements_IResolvedStyle_get_visibility_mE7FD1C47E46D6E8359E134BC3074FF708E119052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_UnityEngine_UIElements_ITransform_get_matrix_m83118700B9A8F2E9F664F5EE915493C531EFF04D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_UpdateBoundingBox_m430FD1066D9332EE6FDA9F63F225A695A26BD712_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_UpdateWorldBoundingBox_m7DA032519F5B3EA435E04B6C1473A727B17F189E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_UpdateWorldTransform_m30E43E905559B48B7BBF0DBC8F721E1E2C1C5051_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement__cctor_m660EC090CF5A018188534F0897471DB34A4D7E4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_boundingBox_m29FE47F028D0534C0CD9ED300D3A548F7001281A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_computedStyle_m199C8B371DB9F17017E3226DC2E76A17E1BFF54F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_elementPanel_m3D19D620049F7622152DBEFC89D96167C5B49637_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_enabledInHierarchy_mDE186ADC734D07A6D924619428EDFAF0F58925BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_focusController_mF54741800E59EB4866355F4FC2DFEB5DC2C11C63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_hierarchy_mA679C8FA30714F20ECA17FB5F73220E16277B517_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_inheritedStyle_m330FE35461DC77A273CF20376E2EF1D8D7BAFE82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_isCompositeRoot_mF49D5A0F7C42D8B8CC0286DEB9924B8E47372E3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_isLayoutManual_m580C870A5502A6D2435AF166B2143E91522E82DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_isWorldTransformDirty_m00F99DF0A881C9A3CAD1840E35A6755254F55965_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_isWorldTransformInverseDirty_m6284AAFD1664F010FC64C6D57D37B705BBE1687D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_layout_mA8251D78A62E5B0B3D5FC23F070360547F2C7D91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_panel_m555AF5D742E93BFB933D9881BDE6F8E5EEC9E9F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_pickingMode_m74295B928E5AC3829F7D8A2F9CE00A36EDA9150C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_pseudoStates_m598C95DB9E356B8DA90218EE2759693E97B52215_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_rect_mEAE8654BF9B377AD3A4091F82B5FC237DFBAA496_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_resolvedStyle_mF1C63939BD256923B1553EFD2AA2E926CF4F8F6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_specifiedStyle_m28FA432BB55C60DD547CEA9D3FA26A4D3C332A2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_transform_mC49F3C12D773B5259862F0054B40E9DC22206CBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_visible_mF622EA56C9F6C3AF7B305D8EE42E9E9C104A2772_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_worldBound_mBA0BC2D573E8799117BACCCAEB00A8856096B678_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_worldBoundingBox_mEE24B646B189CA7A1204CEDB1B64036F205C29A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_worldTransformInverse_m66051C73171F0F1502BD6C894FBE79BBCA31DF1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_worldTransform_m9DCB8CC78B05E2048B80862F8B93403AFCC15944_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_yogaNode_m16192DAD7796E10455EFE89B3237636B029B1BCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_set_isWorldTransformDirty_m4C5652A1C9D25DE441A24E340EDA9B9E3FC34E36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_set_isWorldTransformInverseDirty_m3E6011695A655929F18D22C11E09BEF455E7299E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualTreeUpdater_OnVersionChanged_mA1FE097D303A4F9F16DD0DE7D192657F2C56E659_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualTreeUpdater_UpdateVisualTreePhase_mAB0D9F4464ED54E1A752CBCCBACF7E6546DE3786_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WheelEvent_GetPooled_m76DA5CC3A62CC25A01F32D7E0A5A1619570FD542_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WheelEvent_Init_mDA22AD76AD60B163893363D84A84DC3811461BC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WheelEvent_LocalInit_m8B40B6DA941275DA7E35CAAEF20A85E1B03B0928_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WheelEvent__ctor_m942BC2DC1F8308CA1F056980D2F9DD3CC30CC24B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WheelEvent_set_delta_m4BC73264496DA88BA644EA0855CE9C490A15E9AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_BaselineInternal_m3371DB16710509FE9E0B83AC42EBEB8432ABDC26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_MeasureInternal_mD8D5E33930941196D36E4689267D168E4F4EC39D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_get_LayoutHeight_m7FC3435DA4AE0739612FC06F8C116F0D7917FFE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_get_LayoutWidth_m32FB2FA118FDC8ABD062A19A2CF18F2C8BF99562_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_get_LayoutX_mF57238B30D9F53826CA1B096157751A3A230FD0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_get_LayoutY_m9793D202C8F86E32318F23AB5A58284DC397B50A_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t BaselineFunction_BeginInvoke_mFE9DBC35D599B1CAC5486CA763407647BF1712BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaselineFunction_EndInvoke_m5241F5CAA7D1977B8DA0311952A96A12363949F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaselineFunction_Invoke_mDFF741E9FD7678B6F0C4C23DB4F9BA83A2905558_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaselineFunction__ctor_m802CF88B3CD0E7E5B3CBB9218ACCA646FCE38BA6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FocusChangeDirection_get_lastValue_mAB9C4A5A59506E7566A23E58242836C5663AC1E9UnityEngine_UIElementsModule1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Hierarchy_Equals_m52AE91927F4AAFDBF9D7B44B1F0D423D22696756_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Hierarchy_Equals_m616F3BA8BB9C14B75D463BE09C13631E16D2ECBD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Hierarchy_GetHashCode_m4F98157C3D8DBF7B093B614938CC85FA41E764A8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Hierarchy_get_Item_m920E811BEA80C655F08E77CFE6B47EA29B213DE8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Hierarchy_get_childCount_m55A62C949CD95C8E9A99C1F3E1BB66200E5D9F25_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Hierarchy_get_parent_mB5F0897D8288DE7D36E376B44975CAE6649FBE54_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Hierarchy_op_Equality_mA5C6AF77C3F896889D97DDC58DC1093862253093_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeasureFunction_BeginInvoke_mB9C8A9962F9B8C0EB0B86ADBFB106C3990CC0909_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeasureFunction_EndInvoke_mDC25248B9A9544C7411A7B51E79E5A6706474ECD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeasureFunction_Invoke_mCC3963DDDE51AF75E4795CF0E981093A55CB2D8B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeasureFunction__ctor_mE87A532680536A2A9F9AEFC691F48B31C5074CDA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Native_YGNodeBaselineInvoke_m58B37C284F08E57BF28B9E9AB5CA99805F90BEEC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Native_YGNodeLayoutGetHeight_mCCD0DB7B7B43AC12573EB92890D8320D1905B74D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Native_YGNodeLayoutGetLeft_mF2D7873317C43E67BFB6E12DFA83D91BA1665C14_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Native_YGNodeLayoutGetTop_mF266D42D9DC6974DE17FEA0599088960F76074DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Native_YGNodeLayoutGetWidth_mE565C735D372CE7814D8BF015EACBCCE38DA755B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Native_YGNodeMeasureInvoke_mCD2D037E10DBF3D73CC83FC9078F17AA1271B913_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UpdaterArray_get_Item_m29DE9853F5765D6F552BD1F068BADCAD599EC262_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UpdaterArray_get_Item_m7EDA64425B194BC3004BE74C7D3F8D37FACE3A28_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utility_RaiseEngineUpdate_mA1B27628894F519755E305EEDE906C0F39219460_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utility_RaiseFlushPendingResources_mF574684D4347F0DA7CD949B6C224625860B9A0C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utility_RaiseGraphicsResourcesRecreate_mB64653A9A2F10D8477948B0F6CABD41516821289_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utility__cctor_m3E9C809A88275DAA163BA2116744980D66266801_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ValidateCommandEvent__ctor_m201CB22C32A6082234311A13CA86AFA69B5F1713_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElementExtensions_ChangeCoordinatesTo_m572C40F726FFB1C87C3DD939C73B7F8D82098099_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElementExtensions_LocalToWorld_m0399FEC2B3012DA1E387181272C34AC2039F6048_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElementExtensions_WorldToLocal_mDC4BA07127F0B14E683BB722ECE56D2BB096FFA2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElementExtensions_WorldToLocal_mFDEA66A0B4B27B27D235DE5E11E68E3145CA18C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElementFocusChangeDirection__cctor_mCADE7A6D9B39A4A69A2E194905A99E7720DA4F54_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElementFocusChangeDirection__ctor_m4778AD4F49F65A41D4A84B7DCC17DEB3B763A9D1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElementFocusChangeDirection_get_left_m28008C7A22C13A69D46B56C5142FFBB2FC96F1C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElementFocusChangeDirection_get_right_m4248B7205638C7879845E604E6131863AC4263A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElementListPool_Get_m2BCCF21A7B3C2E0F56658F64D5EC38BED801A26C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElementListPool_Release_mE7A728F375DFC2C80F6DF8EC4762C7153956FF2E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElementListPool__cctor_mB669465FCA43A8A284DC294B068CE167021874F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_ContainsPoint_m9BFB6FD5618E36CB2930B5763E3479C977EF9189_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_IncrementVersion_m0FFACC45649C45D997AC6392A4815AAAACDE46D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_MultiplyMatrix44Point2_m9E25080F31A2CB7F1FD3F0F4824F1FF65FE6B80E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_RetargetElement_m9FCCC23490BAAB3806409A2DCF101F02E93AB047_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_SendEvent_m9A6577979BFD74DE796F00ECF20292B239C79DAF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_ShouldClip_m20B783A59D583676F075679BFD66EAA4082A624F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_TransformAlignedRect_m08EE763B8197A841E3F62C79EF5CF1E538E70AFE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_UnityEngine_UIElements_IResolvedStyle_get_display_mE18E6C2CDCEA0F5D253E939F9357B5921033E4E3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_UnityEngine_UIElements_IResolvedStyle_get_visibility_mE7FD1C47E46D6E8359E134BC3074FF708E119052_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_UnityEngine_UIElements_ITransform_get_matrix_m83118700B9A8F2E9F664F5EE915493C531EFF04D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_UpdateBoundingBox_m430FD1066D9332EE6FDA9F63F225A695A26BD712_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_UpdateWorldBoundingBox_m7DA032519F5B3EA435E04B6C1473A727B17F189E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_UpdateWorldTransform_m30E43E905559B48B7BBF0DBC8F721E1E2C1C5051_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement__cctor_m660EC090CF5A018188534F0897471DB34A4D7E4B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_get_boundingBox_m29FE47F028D0534C0CD9ED300D3A548F7001281A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_get_computedStyle_m199C8B371DB9F17017E3226DC2E76A17E1BFF54F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_get_elementPanel_m3D19D620049F7622152DBEFC89D96167C5B49637_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_get_enabledInHierarchy_mDE186ADC734D07A6D924619428EDFAF0F58925BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_get_focusController_mF54741800E59EB4866355F4FC2DFEB5DC2C11C63_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_get_hierarchy_mA679C8FA30714F20ECA17FB5F73220E16277B517_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_get_inheritedStyle_m330FE35461DC77A273CF20376E2EF1D8D7BAFE82_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_get_isCompositeRoot_mF49D5A0F7C42D8B8CC0286DEB9924B8E47372E3A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_get_isLayoutManual_m580C870A5502A6D2435AF166B2143E91522E82DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_get_isWorldTransformDirty_m00F99DF0A881C9A3CAD1840E35A6755254F55965_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_get_isWorldTransformInverseDirty_m6284AAFD1664F010FC64C6D57D37B705BBE1687D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_get_layout_mA8251D78A62E5B0B3D5FC23F070360547F2C7D91_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_get_panel_m555AF5D742E93BFB933D9881BDE6F8E5EEC9E9F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_get_pickingMode_m74295B928E5AC3829F7D8A2F9CE00A36EDA9150C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_get_pseudoStates_m598C95DB9E356B8DA90218EE2759693E97B52215_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_get_rect_mEAE8654BF9B377AD3A4091F82B5FC237DFBAA496_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_get_resolvedStyle_mF1C63939BD256923B1553EFD2AA2E926CF4F8F6E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_get_specifiedStyle_m28FA432BB55C60DD547CEA9D3FA26A4D3C332A2E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_get_transform_mC49F3C12D773B5259862F0054B40E9DC22206CBF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_get_visible_mF622EA56C9F6C3AF7B305D8EE42E9E9C104A2772_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_get_worldBound_mBA0BC2D573E8799117BACCCAEB00A8856096B678_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_get_worldBoundingBox_mEE24B646B189CA7A1204CEDB1B64036F205C29A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_get_worldTransformInverse_m66051C73171F0F1502BD6C894FBE79BBCA31DF1C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_get_worldTransform_m9DCB8CC78B05E2048B80862F8B93403AFCC15944_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_get_yogaNode_m16192DAD7796E10455EFE89B3237636B029B1BCE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_set_isWorldTransformDirty_m4C5652A1C9D25DE441A24E340EDA9B9E3FC34E36_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualElement_set_isWorldTransformInverseDirty_m3E6011695A655929F18D22C11E09BEF455E7299E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualTreeUpdater_OnVersionChanged_mA1FE097D303A4F9F16DD0DE7D192657F2C56E659_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VisualTreeUpdater_UpdateVisualTreePhase_mAB0D9F4464ED54E1A752CBCCBACF7E6546DE3786_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WheelEvent_GetPooled_m76DA5CC3A62CC25A01F32D7E0A5A1619570FD542_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WheelEvent_Init_mDA22AD76AD60B163893363D84A84DC3811461BC3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WheelEvent_LocalInit_m8B40B6DA941275DA7E35CAAEF20A85E1B03B0928_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WheelEvent__ctor_m942BC2DC1F8308CA1F056980D2F9DD3CC30CC24B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WheelEvent_set_delta_m4BC73264496DA88BA644EA0855CE9C490A15E9AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YogaNode_BaselineInternal_m3371DB16710509FE9E0B83AC42EBEB8432ABDC26_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YogaNode_MeasureInternal_mD8D5E33930941196D36E4689267D168E4F4EC39D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YogaNode_get_LayoutHeight_m7FC3435DA4AE0739612FC06F8C116F0D7917FFE1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YogaNode_get_LayoutWidth_m32FB2FA118FDC8ABD062A19A2CF18F2C8BF99562_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YogaNode_get_LayoutX_mF57238B30D9F53826CA1B096157751A3A230FD0A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YogaNode_get_LayoutY_m9793D202C8F86E32318F23AB5A58284DC397B50A_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct IVisualTreeUpdaterU5BU5D_t5904B964DFD38F10C5DC8BC4B79623B67337012E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct  List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	VisualElementU5BU5D_t4C80EBA10FD46936B42FD3578C55901A83406A19* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756, ____items_1)); }
	inline VisualElementU5BU5D_t4C80EBA10FD46936B42FD3578C55901A83406A19* get__items_1() const { return ____items_1; }
	inline VisualElementU5BU5D_t4C80EBA10FD46936B42FD3578C55901A83406A19** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(VisualElementU5BU5D_t4C80EBA10FD46936B42FD3578C55901A83406A19* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	VisualElementU5BU5D_t4C80EBA10FD46936B42FD3578C55901A83406A19* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756_StaticFields, ____emptyArray_5)); }
	inline VisualElementU5BU5D_t4C80EBA10FD46936B42FD3578C55901A83406A19* get__emptyArray_5() const { return ____emptyArray_5; }
	inline VisualElementU5BU5D_t4C80EBA10FD46936B42FD3578C55901A83406A19** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(VisualElementU5BU5D_t4C80EBA10FD46936B42FD3578C55901A83406A19* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.UIElements.BaseVisualElementPanel
struct  BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90  : public RuntimeObject
{
public:
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_PixelsPerPoint
	float ___m_PixelsPerPoint_0;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<duringLayoutPhase>k__BackingField
	bool ___U3CduringLayoutPhaseU3Ek__BackingField_1;
	// UnityEngine.UIElements.RepaintData UnityEngine.UIElements.BaseVisualElementPanel::<repaintData>k__BackingField
	RepaintData_tE3656A64C3BE5ABCD95A72370251036B6E75F74F * ___U3CrepaintDataU3Ek__BackingField_2;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<disposed>k__BackingField
	bool ___U3CdisposedU3Ek__BackingField_3;
	// UnityEngine.UIElements.ElementUnderPointer UnityEngine.UIElements.BaseVisualElementPanel::m_TopElementUnderPointers
	ElementUnderPointer_t95B57508EE9F6700FE873A796AAF66C0EE2A0035 * ___m_TopElementUnderPointers_4;

public:
	inline static int32_t get_offset_of_m_PixelsPerPoint_0() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90, ___m_PixelsPerPoint_0)); }
	inline float get_m_PixelsPerPoint_0() const { return ___m_PixelsPerPoint_0; }
	inline float* get_address_of_m_PixelsPerPoint_0() { return &___m_PixelsPerPoint_0; }
	inline void set_m_PixelsPerPoint_0(float value)
	{
		___m_PixelsPerPoint_0 = value;
	}

	inline static int32_t get_offset_of_U3CduringLayoutPhaseU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90, ___U3CduringLayoutPhaseU3Ek__BackingField_1)); }
	inline bool get_U3CduringLayoutPhaseU3Ek__BackingField_1() const { return ___U3CduringLayoutPhaseU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CduringLayoutPhaseU3Ek__BackingField_1() { return &___U3CduringLayoutPhaseU3Ek__BackingField_1; }
	inline void set_U3CduringLayoutPhaseU3Ek__BackingField_1(bool value)
	{
		___U3CduringLayoutPhaseU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CrepaintDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90, ___U3CrepaintDataU3Ek__BackingField_2)); }
	inline RepaintData_tE3656A64C3BE5ABCD95A72370251036B6E75F74F * get_U3CrepaintDataU3Ek__BackingField_2() const { return ___U3CrepaintDataU3Ek__BackingField_2; }
	inline RepaintData_tE3656A64C3BE5ABCD95A72370251036B6E75F74F ** get_address_of_U3CrepaintDataU3Ek__BackingField_2() { return &___U3CrepaintDataU3Ek__BackingField_2; }
	inline void set_U3CrepaintDataU3Ek__BackingField_2(RepaintData_tE3656A64C3BE5ABCD95A72370251036B6E75F74F * value)
	{
		___U3CrepaintDataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrepaintDataU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90, ___U3CdisposedU3Ek__BackingField_3)); }
	inline bool get_U3CdisposedU3Ek__BackingField_3() const { return ___U3CdisposedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CdisposedU3Ek__BackingField_3() { return &___U3CdisposedU3Ek__BackingField_3; }
	inline void set_U3CdisposedU3Ek__BackingField_3(bool value)
	{
		___U3CdisposedU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_m_TopElementUnderPointers_4() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90, ___m_TopElementUnderPointers_4)); }
	inline ElementUnderPointer_t95B57508EE9F6700FE873A796AAF66C0EE2A0035 * get_m_TopElementUnderPointers_4() const { return ___m_TopElementUnderPointers_4; }
	inline ElementUnderPointer_t95B57508EE9F6700FE873A796AAF66C0EE2A0035 ** get_address_of_m_TopElementUnderPointers_4() { return &___m_TopElementUnderPointers_4; }
	inline void set_m_TopElementUnderPointers_4(ElementUnderPointer_t95B57508EE9F6700FE873A796AAF66C0EE2A0035 * value)
	{
		___m_TopElementUnderPointers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TopElementUnderPointers_4), (void*)value);
	}
};


// UnityEngine.UIElements.CallbackEventHandler
struct  CallbackEventHandler_t3B7336D446FAD9009A9C1DA1B793885F28D214EB  : public RuntimeObject
{
public:
	// UnityEngine.UIElements.EventCallbackRegistry UnityEngine.UIElements.CallbackEventHandler::m_CallbackRegistry
	EventCallbackRegistry_t0E675C9EC7F38446B7A42C43115CEDB7BE67776D * ___m_CallbackRegistry_0;

public:
	inline static int32_t get_offset_of_m_CallbackRegistry_0() { return static_cast<int32_t>(offsetof(CallbackEventHandler_t3B7336D446FAD9009A9C1DA1B793885F28D214EB, ___m_CallbackRegistry_0)); }
	inline EventCallbackRegistry_t0E675C9EC7F38446B7A42C43115CEDB7BE67776D * get_m_CallbackRegistry_0() const { return ___m_CallbackRegistry_0; }
	inline EventCallbackRegistry_t0E675C9EC7F38446B7A42C43115CEDB7BE67776D ** get_address_of_m_CallbackRegistry_0() { return &___m_CallbackRegistry_0; }
	inline void set_m_CallbackRegistry_0(EventCallbackRegistry_t0E675C9EC7F38446B7A42C43115CEDB7BE67776D * value)
	{
		___m_CallbackRegistry_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CallbackRegistry_0), (void*)value);
	}
};


// UnityEngine.UIElements.FocusChangeDirection
struct  FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UIElements.FocusChangeDirection::m_Value
	int32_t ___m_Value_3;

public:
	inline static int32_t get_offset_of_m_Value_3() { return static_cast<int32_t>(offsetof(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2, ___m_Value_3)); }
	inline int32_t get_m_Value_3() const { return ___m_Value_3; }
	inline int32_t* get_address_of_m_Value_3() { return &___m_Value_3; }
	inline void set_m_Value_3(int32_t value)
	{
		___m_Value_3 = value;
	}
};

struct FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_StaticFields
{
public:
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<unspecified>k__BackingField
	FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * ___U3CunspecifiedU3Ek__BackingField_0;
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<none>k__BackingField
	FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * ___U3CnoneU3Ek__BackingField_1;
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<lastValue>k__BackingField
	FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * ___U3ClastValueU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CunspecifiedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_StaticFields, ___U3CunspecifiedU3Ek__BackingField_0)); }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * get_U3CunspecifiedU3Ek__BackingField_0() const { return ___U3CunspecifiedU3Ek__BackingField_0; }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 ** get_address_of_U3CunspecifiedU3Ek__BackingField_0() { return &___U3CunspecifiedU3Ek__BackingField_0; }
	inline void set_U3CunspecifiedU3Ek__BackingField_0(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * value)
	{
		___U3CunspecifiedU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CunspecifiedU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnoneU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_StaticFields, ___U3CnoneU3Ek__BackingField_1)); }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * get_U3CnoneU3Ek__BackingField_1() const { return ___U3CnoneU3Ek__BackingField_1; }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 ** get_address_of_U3CnoneU3Ek__BackingField_1() { return &___U3CnoneU3Ek__BackingField_1; }
	inline void set_U3CnoneU3Ek__BackingField_1(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * value)
	{
		___U3CnoneU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnoneU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastValueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_StaticFields, ___U3ClastValueU3Ek__BackingField_2)); }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * get_U3ClastValueU3Ek__BackingField_2() const { return ___U3ClastValueU3Ek__BackingField_2; }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 ** get_address_of_U3ClastValueU3Ek__BackingField_2() { return &___U3ClastValueU3Ek__BackingField_2; }
	inline void set_U3ClastValueU3Ek__BackingField_2(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * value)
	{
		___U3ClastValueU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastValueU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.UIElements.FocusController
struct  FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231  : public RuntimeObject
{
public:
	// UnityEngine.UIElements.IFocusRing UnityEngine.UIElements.FocusController::<focusRing>k__BackingField
	RuntimeObject* ___U3CfocusRingU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.FocusController_FocusedElement> UnityEngine.UIElements.FocusController::m_FocusedElements
	List_1_tCE807AC7A0FCBE436F146AE2428BAEE81761D3BD * ___m_FocusedElements_1;
	// System.Int32 UnityEngine.UIElements.FocusController::<imguiKeyboardControl>k__BackingField
	int32_t ___U3CimguiKeyboardControlU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CfocusRingU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231, ___U3CfocusRingU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CfocusRingU3Ek__BackingField_0() const { return ___U3CfocusRingU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CfocusRingU3Ek__BackingField_0() { return &___U3CfocusRingU3Ek__BackingField_0; }
	inline void set_U3CfocusRingU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CfocusRingU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfocusRingU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_FocusedElements_1() { return static_cast<int32_t>(offsetof(FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231, ___m_FocusedElements_1)); }
	inline List_1_tCE807AC7A0FCBE436F146AE2428BAEE81761D3BD * get_m_FocusedElements_1() const { return ___m_FocusedElements_1; }
	inline List_1_tCE807AC7A0FCBE436F146AE2428BAEE81761D3BD ** get_address_of_m_FocusedElements_1() { return &___m_FocusedElements_1; }
	inline void set_m_FocusedElements_1(List_1_tCE807AC7A0FCBE436F146AE2428BAEE81761D3BD * value)
	{
		___m_FocusedElements_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FocusedElements_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CimguiKeyboardControlU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231, ___U3CimguiKeyboardControlU3Ek__BackingField_2)); }
	inline int32_t get_U3CimguiKeyboardControlU3Ek__BackingField_2() const { return ___U3CimguiKeyboardControlU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CimguiKeyboardControlU3Ek__BackingField_2() { return &___U3CimguiKeyboardControlU3Ek__BackingField_2; }
	inline void set_U3CimguiKeyboardControlU3Ek__BackingField_2(int32_t value)
	{
		___U3CimguiKeyboardControlU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.UIElements.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>>
struct  ObjectPool_1_t963B7012C6050595BA0DD41B91E1449B18E47483  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UIElements.ObjectPool`1::m_Stack
	Stack_1_t6690D15BD9AF55850284F8D40D7F11987C320A86 * ___m_Stack_0;
	// System.Int32 UnityEngine.UIElements.ObjectPool`1::m_MaxSize
	int32_t ___m_MaxSize_1;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t963B7012C6050595BA0DD41B91E1449B18E47483, ___m_Stack_0)); }
	inline Stack_1_t6690D15BD9AF55850284F8D40D7F11987C320A86 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t6690D15BD9AF55850284F8D40D7F11987C320A86 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t6690D15BD9AF55850284F8D40D7F11987C320A86 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_MaxSize_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t963B7012C6050595BA0DD41B91E1449B18E47483, ___m_MaxSize_1)); }
	inline int32_t get_m_MaxSize_1() const { return ___m_MaxSize_1; }
	inline int32_t* get_address_of_m_MaxSize_1() { return &___m_MaxSize_1; }
	inline void set_m_MaxSize_1(int32_t value)
	{
		___m_MaxSize_1 = value;
	}
};


// UnityEngine.UIElements.VisualElementExtensions
struct  VisualElementExtensions_t5AF52C03441C1C9D5DF82DC46B4CD0D53651FB73  : public RuntimeObject
{
public:

public:
};


// UnityEngine.UIElements.VisualElementListPool
struct  VisualElementListPool_tC86DFF93B88CCF4BA2FA05CA6CAF27C44A3968DA  : public RuntimeObject
{
public:

public:
};

struct VisualElementListPool_tC86DFF93B88CCF4BA2FA05CA6CAF27C44A3968DA_StaticFields
{
public:
	// UnityEngine.UIElements.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>> UnityEngine.UIElements.VisualElementListPool::pool
	ObjectPool_1_t963B7012C6050595BA0DD41B91E1449B18E47483 * ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(VisualElementListPool_tC86DFF93B88CCF4BA2FA05CA6CAF27C44A3968DA_StaticFields, ___pool_0)); }
	inline ObjectPool_1_t963B7012C6050595BA0DD41B91E1449B18E47483 * get_pool_0() const { return ___pool_0; }
	inline ObjectPool_1_t963B7012C6050595BA0DD41B91E1449B18E47483 ** get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(ObjectPool_1_t963B7012C6050595BA0DD41B91E1449B18E47483 * value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_0), (void*)value);
	}
};


// UnityEngine.UIElements.VisualTreeUpdater
struct  VisualTreeUpdater_t8BEB4BA17B59E1585E2A6BAA60CC204BDF20DE00  : public RuntimeObject
{
public:
	// UnityEngine.UIElements.VisualTreeUpdater_UpdaterArray UnityEngine.UIElements.VisualTreeUpdater::m_UpdaterArray
	UpdaterArray_t93CA64534EAECBB98F27909516A929F0182E96F6 * ___m_UpdaterArray_0;

public:
	inline static int32_t get_offset_of_m_UpdaterArray_0() { return static_cast<int32_t>(offsetof(VisualTreeUpdater_t8BEB4BA17B59E1585E2A6BAA60CC204BDF20DE00, ___m_UpdaterArray_0)); }
	inline UpdaterArray_t93CA64534EAECBB98F27909516A929F0182E96F6 * get_m_UpdaterArray_0() const { return ___m_UpdaterArray_0; }
	inline UpdaterArray_t93CA64534EAECBB98F27909516A929F0182E96F6 ** get_address_of_m_UpdaterArray_0() { return &___m_UpdaterArray_0; }
	inline void set_m_UpdaterArray_0(UpdaterArray_t93CA64534EAECBB98F27909516A929F0182E96F6 * value)
	{
		___m_UpdaterArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UpdaterArray_0), (void*)value);
	}
};


// UnityEngine.UIElements.VisualTreeUpdater_UpdaterArray
struct  UpdaterArray_t93CA64534EAECBB98F27909516A929F0182E96F6  : public RuntimeObject
{
public:
	// UnityEngine.UIElements.IVisualTreeUpdater[] UnityEngine.UIElements.VisualTreeUpdater_UpdaterArray::m_VisualTreeUpdaters
	IVisualTreeUpdaterU5BU5D_t5904B964DFD38F10C5DC8BC4B79623B67337012E* ___m_VisualTreeUpdaters_0;

public:
	inline static int32_t get_offset_of_m_VisualTreeUpdaters_0() { return static_cast<int32_t>(offsetof(UpdaterArray_t93CA64534EAECBB98F27909516A929F0182E96F6, ___m_VisualTreeUpdaters_0)); }
	inline IVisualTreeUpdaterU5BU5D_t5904B964DFD38F10C5DC8BC4B79623B67337012E* get_m_VisualTreeUpdaters_0() const { return ___m_VisualTreeUpdaters_0; }
	inline IVisualTreeUpdaterU5BU5D_t5904B964DFD38F10C5DC8BC4B79623B67337012E** get_address_of_m_VisualTreeUpdaters_0() { return &___m_VisualTreeUpdaters_0; }
	inline void set_m_VisualTreeUpdaters_0(IVisualTreeUpdaterU5BU5D_t5904B964DFD38F10C5DC8BC4B79623B67337012E* value)
	{
		___m_VisualTreeUpdaters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VisualTreeUpdaters_0), (void*)value);
	}
};


// UnityEngine.Yoga.Native
struct  Native_tAB7B2E3A68EEFE9B7A356DB4CC8EC664EB765C2A  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
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
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.PropertyName
struct  PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 
{
public:
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.UIElements.ComputedStyle
struct  ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91 
{
public:
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ComputedStyle::m_Element
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___m_Element_0;

public:
	inline static int32_t get_offset_of_m_Element_0() { return static_cast<int32_t>(offsetof(ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91, ___m_Element_0)); }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * get_m_Element_0() const { return ___m_Element_0; }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 ** get_address_of_m_Element_0() { return &___m_Element_0; }
	inline void set_m_Element_0(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * value)
	{
		___m_Element_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Element_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91_marshaled_pinvoke
{
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___m_Element_0;
};
// Native definition for COM marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91_marshaled_com
{
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___m_Element_0;
};

// UnityEngine.UIElements.Focusable
struct  Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B  : public CallbackEventHandler_t3B7336D446FAD9009A9C1DA1B793885F28D214EB
{
public:
	// System.Boolean UnityEngine.UIElements.Focusable::<focusable>k__BackingField
	bool ___U3CfocusableU3Ek__BackingField_1;
	// System.Boolean UnityEngine.UIElements.Focusable::isIMGUIContainer
	bool ___isIMGUIContainer_2;

public:
	inline static int32_t get_offset_of_U3CfocusableU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B, ___U3CfocusableU3Ek__BackingField_1)); }
	inline bool get_U3CfocusableU3Ek__BackingField_1() const { return ___U3CfocusableU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CfocusableU3Ek__BackingField_1() { return &___U3CfocusableU3Ek__BackingField_1; }
	inline void set_U3CfocusableU3Ek__BackingField_1(bool value)
	{
		___U3CfocusableU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_isIMGUIContainer_2() { return static_cast<int32_t>(offsetof(Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B, ___isIMGUIContainer_2)); }
	inline bool get_isIMGUIContainer_2() const { return ___isIMGUIContainer_2; }
	inline bool* get_address_of_isIMGUIContainer_2() { return &___isIMGUIContainer_2; }
	inline void set_isIMGUIContainer_2(bool value)
	{
		___isIMGUIContainer_2 = value;
	}
};


// UnityEngine.UIElements.VisualElement_Hierarchy
struct  Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F 
{
public:
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement_Hierarchy::m_Owner
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___m_Owner_0;

public:
	inline static int32_t get_offset_of_m_Owner_0() { return static_cast<int32_t>(offsetof(Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F, ___m_Owner_0)); }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * get_m_Owner_0() const { return ___m_Owner_0; }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 ** get_address_of_m_Owner_0() { return &___m_Owner_0; }
	inline void set_m_Owner_0(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * value)
	{
		___m_Owner_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Owner_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F_marshaled_pinvoke
{
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___m_Owner_0;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F_marshaled_com
{
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___m_Owner_0;
};

// UnityEngine.UIElements.VisualElementFocusChangeDirection
struct  VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564  : public FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2
{
public:

public:
};

struct VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_StaticFields
{
public:
	// UnityEngine.UIElements.VisualElementFocusChangeDirection UnityEngine.UIElements.VisualElementFocusChangeDirection::s_Left
	VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 * ___s_Left_4;
	// UnityEngine.UIElements.VisualElementFocusChangeDirection UnityEngine.UIElements.VisualElementFocusChangeDirection::s_Right
	VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 * ___s_Right_5;

public:
	inline static int32_t get_offset_of_s_Left_4() { return static_cast<int32_t>(offsetof(VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_StaticFields, ___s_Left_4)); }
	inline VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 * get_s_Left_4() const { return ___s_Left_4; }
	inline VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 ** get_address_of_s_Left_4() { return &___s_Left_4; }
	inline void set_s_Left_4(VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 * value)
	{
		___s_Left_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Left_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_Right_5() { return static_cast<int32_t>(offsetof(VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_StaticFields, ___s_Right_5)); }
	inline VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 * get_s_Right_5() const { return ___s_Right_5; }
	inline VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 ** get_address_of_s_Right_5() { return &___s_Right_5; }
	inline void set_s_Right_5(VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 * value)
	{
		___s_Right_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Right_5), (void*)value);
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Yoga.YogaSize
struct  YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 
{
public:
	// System.Single UnityEngine.Yoga.YogaSize::width
	float ___width_0;
	// System.Single UnityEngine.Yoga.YogaSize::height
	float ___height_1;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23, ___width_0)); }
	inline float get_width_0() const { return ___width_0; }
	inline float* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(float value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23, ___height_1)); }
	inline float get_height_1() const { return ___height_1; }
	inline float* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(float value)
	{
		___height_1 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.ProfilerMarker
struct  ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Unity.Profiling.ProfilerMarker_AutoScope
struct  AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker_AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Event
struct  Event_t187FF6A6B357447B83EC2064823EE0AEC5263210  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Event::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_StaticFields
{
public:
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___s_MasterEvent_2;

public:
	inline static int32_t get_offset_of_s_Current_1() { return static_cast<int32_t>(offsetof(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_StaticFields, ___s_Current_1)); }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * get_s_Current_1() const { return ___s_Current_1; }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 ** get_address_of_s_Current_1() { return &___s_Current_1; }
	inline void set_s_Current_1(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * value)
	{
		___s_Current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Current_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_MasterEvent_2() { return static_cast<int32_t>(offsetof(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_StaticFields, ___s_MasterEvent_2)); }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * get_s_MasterEvent_2() const { return ___s_MasterEvent_2; }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 ** get_address_of_s_MasterEvent_2() { return &___s_MasterEvent_2; }
	inline void set_s_MasterEvent_2(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * value)
	{
		___s_MasterEvent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MasterEvent_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Event
struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Event
struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventModifiers
struct  EventModifiers_tC34E3018F3697001F894187AF6E9E63D7E203061 
{
public:
	// System.Int32 UnityEngine.EventModifiers::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventModifiers_tC34E3018F3697001F894187AF6E9E63D7E203061, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.DispatchMode
struct  DispatchMode_t5B1EA9A5520D81BAF7F6BE8EB059BC0922B00E16 
{
public:
	// System.Int32 UnityEngine.UIElements.DispatchMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DispatchMode_t5B1EA9A5520D81BAF7F6BE8EB059BC0922B00E16, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.DisplayStyle
struct  DisplayStyle_tCA8005A6A1D94402ABB3DF3D70891AD67A5AC7E0 
{
public:
	// System.Int32 UnityEngine.UIElements.DisplayStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisplayStyle_tCA8005A6A1D94402ABB3DF3D70891AD67A5AC7E0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.EventBase_EventPropagation
struct  EventPropagation_tA9A7EB847940ABD70842FA9EBA217C32F977DA20 
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase_EventPropagation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventPropagation_tA9A7EB847940ABD70842FA9EBA217C32F977DA20, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.EventBase_LifeCycleStatus
struct  LifeCycleStatus_t261998375F205A68CDAE646A82B1A16389926883 
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase_LifeCycleStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LifeCycleStatus_t261998375F205A68CDAE646A82B1A16389926883, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.LengthUnit
struct  LengthUnit_t72096DC46DF6AE7521ACB61C839C57915F7282BC 
{
public:
	// System.Int32 UnityEngine.UIElements.LengthUnit::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LengthUnit_t72096DC46DF6AE7521ACB61C839C57915F7282BC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.Overflow
struct  Overflow_tB2652C133D86BD9641914198824327C8042264BC 
{
public:
	// System.Int32 UnityEngine.UIElements.Overflow::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Overflow_tB2652C133D86BD9641914198824327C8042264BC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.PickingMode
struct  PickingMode_t50B176123A8C1CFF46840654D7AFA06EC6EDD529 
{
public:
	// System.Int32 UnityEngine.UIElements.PickingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PickingMode_t50B176123A8C1CFF46840654D7AFA06EC6EDD529, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.PropagationPhase
struct  PropagationPhase_tF216B8A0984294D04F73CC36443D006EB659D9FC 
{
public:
	// System.Int32 UnityEngine.UIElements.PropagationPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropagationPhase_tF216B8A0984294D04F73CC36443D006EB659D9FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.PseudoStates
struct  PseudoStates_t047BCA0D8B56DC2E0A08F001C9C96BB82BDD9545 
{
public:
	// System.Int32 UnityEngine.UIElements.PseudoStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PseudoStates_t047BCA0D8B56DC2E0A08F001C9C96BB82BDD9545, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.StyleKeyword
struct  StyleKeyword_t5C285A4249A1A7A807C1B4D2AAF5D1350B0A3560 
{
public:
	// System.Int32 UnityEngine.UIElements.StyleKeyword::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StyleKeyword_t5C285A4249A1A7A807C1B4D2AAF5D1350B0A3560, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.VersionChangeType
struct  VersionChangeType_tE727D12B03EC4449C5E3E6FFD34C2F84A83A7DFC 
{
public:
	// System.Int32 UnityEngine.UIElements.VersionChangeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VersionChangeType_tE727D12B03EC4449C5E3E6FFD34C2F84A83A7DFC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.Visibility
struct  Visibility_t456DFF3C77DEAEE9776ABA136F60CF3FFA2A0A9C 
{
public:
	// System.Int32 UnityEngine.UIElements.Visibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Visibility_t456DFF3C77DEAEE9776ABA136F60CF3FFA2A0A9C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.VisualTreeUpdatePhase
struct  VisualTreeUpdatePhase_tC1C3E61E2F062047A695B106F02A6220E2DE6967 
{
public:
	// System.Int32 UnityEngine.UIElements.VisualTreeUpdatePhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VisualTreeUpdatePhase_tC1C3E61E2F062047A695B106F02A6220E2DE6967, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Yoga.YogaMeasureMode
struct  YogaMeasureMode_t29AF57E74BCD4C16019B8BE88A317D54DA70C29F 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaMeasureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(YogaMeasureMode_t29AF57E74BCD4C16019B8BE88A317D54DA70C29F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Yoga.YogaNode
struct  YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Yoga.YogaNode::_ygNode
	intptr_t ____ygNode_0;
	// UnityEngine.Yoga.MeasureFunction UnityEngine.Yoga.YogaNode::_measureFunction
	MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * ____measureFunction_1;
	// UnityEngine.Yoga.BaselineFunction UnityEngine.Yoga.YogaNode::_baselineFunction
	BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * ____baselineFunction_2;

public:
	inline static int32_t get_offset_of__ygNode_0() { return static_cast<int32_t>(offsetof(YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C, ____ygNode_0)); }
	inline intptr_t get__ygNode_0() const { return ____ygNode_0; }
	inline intptr_t* get_address_of__ygNode_0() { return &____ygNode_0; }
	inline void set__ygNode_0(intptr_t value)
	{
		____ygNode_0 = value;
	}

	inline static int32_t get_offset_of__measureFunction_1() { return static_cast<int32_t>(offsetof(YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C, ____measureFunction_1)); }
	inline MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * get__measureFunction_1() const { return ____measureFunction_1; }
	inline MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB ** get_address_of__measureFunction_1() { return &____measureFunction_1; }
	inline void set__measureFunction_1(MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * value)
	{
		____measureFunction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____measureFunction_1), (void*)value);
	}

	inline static int32_t get_offset_of__baselineFunction_2() { return static_cast<int32_t>(offsetof(YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C, ____baselineFunction_2)); }
	inline BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * get__baselineFunction_2() const { return ____baselineFunction_2; }
	inline BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF ** get_address_of__baselineFunction_2() { return &____baselineFunction_2; }
	inline void set__baselineFunction_2(BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * value)
	{
		____baselineFunction_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____baselineFunction_2), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UnityEngine.UIElements.EventBase
struct  EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD  : public RuntimeObject
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase::<timestamp>k__BackingField
	int64_t ___U3CtimestampU3Ek__BackingField_2;
	// System.UInt64 UnityEngine.UIElements.EventBase::<eventId>k__BackingField
	uint64_t ___U3CeventIdU3Ek__BackingField_3;
	// System.UInt64 UnityEngine.UIElements.EventBase::<triggerEventId>k__BackingField
	uint64_t ___U3CtriggerEventIdU3Ek__BackingField_4;
	// UnityEngine.UIElements.EventBase_EventPropagation UnityEngine.UIElements.EventBase::<propagation>k__BackingField
	int32_t ___U3CpropagationU3Ek__BackingField_5;
	// UnityEngine.UIElements.PropagationPaths UnityEngine.UIElements.EventBase::m_Path
	PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D * ___m_Path_6;
	// UnityEngine.UIElements.EventBase_LifeCycleStatus UnityEngine.UIElements.EventBase::<lifeCycleStatus>k__BackingField
	int32_t ___U3ClifeCycleStatusU3Ek__BackingField_7;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::<leafTarget>k__BackingField
	RuntimeObject* ___U3CleafTargetU3Ek__BackingField_8;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::m_Target
	RuntimeObject* ___m_Target_9;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventHandler> UnityEngine.UIElements.EventBase::<skipElements>k__BackingField
	List_1_tC6DEF7083E8206203302B1B25E23947E49BBD537 * ___U3CskipElementsU3Ek__BackingField_10;
	// UnityEngine.UIElements.PropagationPhase UnityEngine.UIElements.EventBase::<propagationPhase>k__BackingField
	int32_t ___U3CpropagationPhaseU3Ek__BackingField_11;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::m_CurrentTarget
	RuntimeObject* ___m_CurrentTarget_12;
	// UnityEngine.Event UnityEngine.UIElements.EventBase::m_ImguiEvent
	Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___m_ImguiEvent_13;
	// UnityEngine.Vector2 UnityEngine.UIElements.EventBase::<originalMousePosition>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CoriginalMousePositionU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CtimestampU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CtimestampU3Ek__BackingField_2)); }
	inline int64_t get_U3CtimestampU3Ek__BackingField_2() const { return ___U3CtimestampU3Ek__BackingField_2; }
	inline int64_t* get_address_of_U3CtimestampU3Ek__BackingField_2() { return &___U3CtimestampU3Ek__BackingField_2; }
	inline void set_U3CtimestampU3Ek__BackingField_2(int64_t value)
	{
		___U3CtimestampU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CeventIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CeventIdU3Ek__BackingField_3)); }
	inline uint64_t get_U3CeventIdU3Ek__BackingField_3() const { return ___U3CeventIdU3Ek__BackingField_3; }
	inline uint64_t* get_address_of_U3CeventIdU3Ek__BackingField_3() { return &___U3CeventIdU3Ek__BackingField_3; }
	inline void set_U3CeventIdU3Ek__BackingField_3(uint64_t value)
	{
		___U3CeventIdU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CtriggerEventIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CtriggerEventIdU3Ek__BackingField_4)); }
	inline uint64_t get_U3CtriggerEventIdU3Ek__BackingField_4() const { return ___U3CtriggerEventIdU3Ek__BackingField_4; }
	inline uint64_t* get_address_of_U3CtriggerEventIdU3Ek__BackingField_4() { return &___U3CtriggerEventIdU3Ek__BackingField_4; }
	inline void set_U3CtriggerEventIdU3Ek__BackingField_4(uint64_t value)
	{
		___U3CtriggerEventIdU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CpropagationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CpropagationU3Ek__BackingField_5)); }
	inline int32_t get_U3CpropagationU3Ek__BackingField_5() const { return ___U3CpropagationU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CpropagationU3Ek__BackingField_5() { return &___U3CpropagationU3Ek__BackingField_5; }
	inline void set_U3CpropagationU3Ek__BackingField_5(int32_t value)
	{
		___U3CpropagationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_m_Path_6() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___m_Path_6)); }
	inline PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D * get_m_Path_6() const { return ___m_Path_6; }
	inline PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D ** get_address_of_m_Path_6() { return &___m_Path_6; }
	inline void set_m_Path_6(PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D * value)
	{
		___m_Path_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClifeCycleStatusU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3ClifeCycleStatusU3Ek__BackingField_7)); }
	inline int32_t get_U3ClifeCycleStatusU3Ek__BackingField_7() const { return ___U3ClifeCycleStatusU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3ClifeCycleStatusU3Ek__BackingField_7() { return &___U3ClifeCycleStatusU3Ek__BackingField_7; }
	inline void set_U3ClifeCycleStatusU3Ek__BackingField_7(int32_t value)
	{
		___U3ClifeCycleStatusU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CleafTargetU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CleafTargetU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CleafTargetU3Ek__BackingField_8() const { return ___U3CleafTargetU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CleafTargetU3Ek__BackingField_8() { return &___U3CleafTargetU3Ek__BackingField_8; }
	inline void set_U3CleafTargetU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CleafTargetU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleafTargetU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Target_9() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___m_Target_9)); }
	inline RuntimeObject* get_m_Target_9() const { return ___m_Target_9; }
	inline RuntimeObject** get_address_of_m_Target_9() { return &___m_Target_9; }
	inline void set_m_Target_9(RuntimeObject* value)
	{
		___m_Target_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CskipElementsU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CskipElementsU3Ek__BackingField_10)); }
	inline List_1_tC6DEF7083E8206203302B1B25E23947E49BBD537 * get_U3CskipElementsU3Ek__BackingField_10() const { return ___U3CskipElementsU3Ek__BackingField_10; }
	inline List_1_tC6DEF7083E8206203302B1B25E23947E49BBD537 ** get_address_of_U3CskipElementsU3Ek__BackingField_10() { return &___U3CskipElementsU3Ek__BackingField_10; }
	inline void set_U3CskipElementsU3Ek__BackingField_10(List_1_tC6DEF7083E8206203302B1B25E23947E49BBD537 * value)
	{
		___U3CskipElementsU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CskipElementsU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpropagationPhaseU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CpropagationPhaseU3Ek__BackingField_11)); }
	inline int32_t get_U3CpropagationPhaseU3Ek__BackingField_11() const { return ___U3CpropagationPhaseU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpropagationPhaseU3Ek__BackingField_11() { return &___U3CpropagationPhaseU3Ek__BackingField_11; }
	inline void set_U3CpropagationPhaseU3Ek__BackingField_11(int32_t value)
	{
		___U3CpropagationPhaseU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_m_CurrentTarget_12() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___m_CurrentTarget_12)); }
	inline RuntimeObject* get_m_CurrentTarget_12() const { return ___m_CurrentTarget_12; }
	inline RuntimeObject** get_address_of_m_CurrentTarget_12() { return &___m_CurrentTarget_12; }
	inline void set_m_CurrentTarget_12(RuntimeObject* value)
	{
		___m_CurrentTarget_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentTarget_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ImguiEvent_13() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___m_ImguiEvent_13)); }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * get_m_ImguiEvent_13() const { return ___m_ImguiEvent_13; }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 ** get_address_of_m_ImguiEvent_13() { return &___m_ImguiEvent_13; }
	inline void set_m_ImguiEvent_13(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * value)
	{
		___m_ImguiEvent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ImguiEvent_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoriginalMousePositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CoriginalMousePositionU3Ek__BackingField_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CoriginalMousePositionU3Ek__BackingField_14() const { return ___U3CoriginalMousePositionU3Ek__BackingField_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CoriginalMousePositionU3Ek__BackingField_14() { return &___U3CoriginalMousePositionU3Ek__BackingField_14; }
	inline void set_U3CoriginalMousePositionU3Ek__BackingField_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CoriginalMousePositionU3Ek__BackingField_14 = value;
	}
};

struct EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase::s_LastTypeId
	int64_t ___s_LastTypeId_0;
	// System.UInt64 UnityEngine.UIElements.EventBase::s_NextEventId
	uint64_t ___s_NextEventId_1;

public:
	inline static int32_t get_offset_of_s_LastTypeId_0() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_StaticFields, ___s_LastTypeId_0)); }
	inline int64_t get_s_LastTypeId_0() const { return ___s_LastTypeId_0; }
	inline int64_t* get_address_of_s_LastTypeId_0() { return &___s_LastTypeId_0; }
	inline void set_s_LastTypeId_0(int64_t value)
	{
		___s_LastTypeId_0 = value;
	}

	inline static int32_t get_offset_of_s_NextEventId_1() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_StaticFields, ___s_NextEventId_1)); }
	inline uint64_t get_s_NextEventId_1() const { return ___s_NextEventId_1; }
	inline uint64_t* get_address_of_s_NextEventId_1() { return &___s_NextEventId_1; }
	inline void set_s_NextEventId_1(uint64_t value)
	{
		___s_NextEventId_1 = value;
	}
};


// UnityEngine.UIElements.Length
struct  Length_tE2A2C2ECE7255AC6FB9B1F41D51E7BC645021300 
{
public:
	// System.Single UnityEngine.UIElements.Length::m_Value
	float ___m_Value_0;
	// UnityEngine.UIElements.LengthUnit UnityEngine.UIElements.Length::m_Unit
	int32_t ___m_Unit_1;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(Length_tE2A2C2ECE7255AC6FB9B1F41D51E7BC645021300, ___m_Value_0)); }
	inline float get_m_Value_0() const { return ___m_Value_0; }
	inline float* get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(float value)
	{
		___m_Value_0 = value;
	}

	inline static int32_t get_offset_of_m_Unit_1() { return static_cast<int32_t>(offsetof(Length_tE2A2C2ECE7255AC6FB9B1F41D51E7BC645021300, ___m_Unit_1)); }
	inline int32_t get_m_Unit_1() const { return ___m_Unit_1; }
	inline int32_t* get_address_of_m_Unit_1() { return &___m_Unit_1; }
	inline void set_m_Unit_1(int32_t value)
	{
		___m_Unit_1 = value;
	}
};


// UnityEngine.UIElements.StyleColor
struct  StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleColor::m_Keyword
	int32_t ___m_Keyword_0;
	// UnityEngine.Color UnityEngine.UIElements.StyleColor::m_Value
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Value_1;
	// System.Int32 UnityEngine.UIElements.StyleColor::m_Specificity
	int32_t ___m_Specificity_2;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356, ___m_Value_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Value_1() const { return ___m_Value_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_Specificity_2() { return static_cast<int32_t>(offsetof(StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356, ___m_Specificity_2)); }
	inline int32_t get_m_Specificity_2() const { return ___m_Specificity_2; }
	inline int32_t* get_address_of_m_Specificity_2() { return &___m_Specificity_2; }
	inline void set_m_Specificity_2(int32_t value)
	{
		___m_Specificity_2 = value;
	}
};


// UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>
struct  StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_0;
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_1;
	// System.Int32 UnityEngine.UIElements.StyleEnum`1::m_Specificity
	int32_t ___m_Specificity_2;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_Specificity_2() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C, ___m_Specificity_2)); }
	inline int32_t get_m_Specificity_2() const { return ___m_Specificity_2; }
	inline int32_t* get_address_of_m_Specificity_2() { return &___m_Specificity_2; }
	inline void set_m_Specificity_2(int32_t value)
	{
		___m_Specificity_2 = value;
	}
};


// UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>
struct  StyleEnum_1_t93A0CA525A578F768A3BCE0E9347694D53490DA5 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_0;
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_1;
	// System.Int32 UnityEngine.UIElements.StyleEnum`1::m_Specificity
	int32_t ___m_Specificity_2;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleEnum_1_t93A0CA525A578F768A3BCE0E9347694D53490DA5, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleEnum_1_t93A0CA525A578F768A3BCE0E9347694D53490DA5, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_Specificity_2() { return static_cast<int32_t>(offsetof(StyleEnum_1_t93A0CA525A578F768A3BCE0E9347694D53490DA5, ___m_Specificity_2)); }
	inline int32_t get_m_Specificity_2() const { return ___m_Specificity_2; }
	inline int32_t* get_address_of_m_Specificity_2() { return &___m_Specificity_2; }
	inline void set_m_Specificity_2(int32_t value)
	{
		___m_Specificity_2 = value;
	}
};


// UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Overflow>
struct  StyleEnum_1_tA29AB324EA74732D2BE335C7247F4E9CF25D4809 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_0;
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_1;
	// System.Int32 UnityEngine.UIElements.StyleEnum`1::m_Specificity
	int32_t ___m_Specificity_2;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA29AB324EA74732D2BE335C7247F4E9CF25D4809, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA29AB324EA74732D2BE335C7247F4E9CF25D4809, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_Specificity_2() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA29AB324EA74732D2BE335C7247F4E9CF25D4809, ___m_Specificity_2)); }
	inline int32_t get_m_Specificity_2() const { return ___m_Specificity_2; }
	inline int32_t* get_address_of_m_Specificity_2() { return &___m_Specificity_2; }
	inline void set_m_Specificity_2(int32_t value)
	{
		___m_Specificity_2 = value;
	}
};


// UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Visibility>
struct  StyleEnum_1_t4B11CEAA22F18336A8EF4B14655E5A85F0632EF3 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_0;
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_1;
	// System.Int32 UnityEngine.UIElements.StyleEnum`1::m_Specificity
	int32_t ___m_Specificity_2;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleEnum_1_t4B11CEAA22F18336A8EF4B14655E5A85F0632EF3, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleEnum_1_t4B11CEAA22F18336A8EF4B14655E5A85F0632EF3, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_Specificity_2() { return static_cast<int32_t>(offsetof(StyleEnum_1_t4B11CEAA22F18336A8EF4B14655E5A85F0632EF3, ___m_Specificity_2)); }
	inline int32_t get_m_Specificity_2() const { return ___m_Specificity_2; }
	inline int32_t* get_address_of_m_Specificity_2() { return &___m_Specificity_2; }
	inline void set_m_Specificity_2(int32_t value)
	{
		___m_Specificity_2 = value;
	}
};


// UnityEngine.UIElements.StyleFloat
struct  StyleFloat_t82E1EEBA399136FB3F2F20EE5BED15FDBFC710AC 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleFloat::m_Keyword
	int32_t ___m_Keyword_0;
	// System.Single UnityEngine.UIElements.StyleFloat::m_Value
	float ___m_Value_1;
	// System.Int32 UnityEngine.UIElements.StyleFloat::m_Specificity
	int32_t ___m_Specificity_2;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleFloat_t82E1EEBA399136FB3F2F20EE5BED15FDBFC710AC, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleFloat_t82E1EEBA399136FB3F2F20EE5BED15FDBFC710AC, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_Specificity_2() { return static_cast<int32_t>(offsetof(StyleFloat_t82E1EEBA399136FB3F2F20EE5BED15FDBFC710AC, ___m_Specificity_2)); }
	inline int32_t get_m_Specificity_2() const { return ___m_Specificity_2; }
	inline int32_t* get_address_of_m_Specificity_2() { return &___m_Specificity_2; }
	inline void set_m_Specificity_2(int32_t value)
	{
		___m_Specificity_2 = value;
	}
};


// UnityEngine.UIElements.StyleFont
struct  StyleFont_t476F5A1B8CC55D5C23FAD247C46409A5042D4338 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleFont::m_Keyword
	int32_t ___m_Keyword_0;
	// UnityEngine.Font UnityEngine.UIElements.StyleFont::m_Value
	Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * ___m_Value_1;
	// System.Int32 UnityEngine.UIElements.StyleFont::m_Specificity
	int32_t ___m_Specificity_2;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleFont_t476F5A1B8CC55D5C23FAD247C46409A5042D4338, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleFont_t476F5A1B8CC55D5C23FAD247C46409A5042D4338, ___m_Value_1)); }
	inline Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * get_m_Value_1() const { return ___m_Value_1; }
	inline Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 ** get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * value)
	{
		___m_Value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Value_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Specificity_2() { return static_cast<int32_t>(offsetof(StyleFont_t476F5A1B8CC55D5C23FAD247C46409A5042D4338, ___m_Specificity_2)); }
	inline int32_t get_m_Specificity_2() const { return ___m_Specificity_2; }
	inline int32_t* get_address_of_m_Specificity_2() { return &___m_Specificity_2; }
	inline void set_m_Specificity_2(int32_t value)
	{
		___m_Specificity_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleFont
struct StyleFont_t476F5A1B8CC55D5C23FAD247C46409A5042D4338_marshaled_pinvoke
{
	int32_t ___m_Keyword_0;
	Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * ___m_Value_1;
	int32_t ___m_Specificity_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleFont
struct StyleFont_t476F5A1B8CC55D5C23FAD247C46409A5042D4338_marshaled_com
{
	int32_t ___m_Keyword_0;
	Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * ___m_Value_1;
	int32_t ___m_Specificity_2;
};

// UnityEngine.UIElements.StyleInt
struct  StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleInt::m_Keyword
	int32_t ___m_Keyword_0;
	// System.Int32 UnityEngine.UIElements.StyleInt::m_Value
	int32_t ___m_Value_1;
	// System.Int32 UnityEngine.UIElements.StyleInt::m_Specificity
	int32_t ___m_Specificity_2;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_Specificity_2() { return static_cast<int32_t>(offsetof(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89, ___m_Specificity_2)); }
	inline int32_t get_m_Specificity_2() const { return ___m_Specificity_2; }
	inline int32_t* get_address_of_m_Specificity_2() { return &___m_Specificity_2; }
	inline void set_m_Specificity_2(int32_t value)
	{
		___m_Specificity_2 = value;
	}
};


// UnityEngine.UIElements.UIR.Utility
struct  Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04  : public RuntimeObject
{
public:

public:
};

struct Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_StaticFields
{
public:
	// System.Action`1<System.Boolean> UnityEngine.UIElements.UIR.Utility::GraphicsResourcesRecreate
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___GraphicsResourcesRecreate_0;
	// System.Action UnityEngine.UIElements.UIR.Utility::EngineUpdate
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___EngineUpdate_1;
	// System.Action UnityEngine.UIElements.UIR.Utility::FlushPendingResources
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___FlushPendingResources_2;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.Utility::s_MarkerRaiseEngineUpdate
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___s_MarkerRaiseEngineUpdate_3;

public:
	inline static int32_t get_offset_of_GraphicsResourcesRecreate_0() { return static_cast<int32_t>(offsetof(Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_StaticFields, ___GraphicsResourcesRecreate_0)); }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * get_GraphicsResourcesRecreate_0() const { return ___GraphicsResourcesRecreate_0; }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** get_address_of_GraphicsResourcesRecreate_0() { return &___GraphicsResourcesRecreate_0; }
	inline void set_GraphicsResourcesRecreate_0(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * value)
	{
		___GraphicsResourcesRecreate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GraphicsResourcesRecreate_0), (void*)value);
	}

	inline static int32_t get_offset_of_EngineUpdate_1() { return static_cast<int32_t>(offsetof(Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_StaticFields, ___EngineUpdate_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_EngineUpdate_1() const { return ___EngineUpdate_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_EngineUpdate_1() { return &___EngineUpdate_1; }
	inline void set_EngineUpdate_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___EngineUpdate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EngineUpdate_1), (void*)value);
	}

	inline static int32_t get_offset_of_FlushPendingResources_2() { return static_cast<int32_t>(offsetof(Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_StaticFields, ___FlushPendingResources_2)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_FlushPendingResources_2() const { return ___FlushPendingResources_2; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_FlushPendingResources_2() { return &___FlushPendingResources_2; }
	inline void set_FlushPendingResources_2(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___FlushPendingResources_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FlushPendingResources_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_MarkerRaiseEngineUpdate_3() { return static_cast<int32_t>(offsetof(Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_StaticFields, ___s_MarkerRaiseEngineUpdate_3)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_s_MarkerRaiseEngineUpdate_3() const { return ___s_MarkerRaiseEngineUpdate_3; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_s_MarkerRaiseEngineUpdate_3() { return &___s_MarkerRaiseEngineUpdate_3; }
	inline void set_s_MarkerRaiseEngineUpdate_3(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___s_MarkerRaiseEngineUpdate_3 = value;
	}
};


// UnityEngine.UIElements.VisualElement
struct  VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57  : public Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B
{
public:
	// System.Boolean UnityEngine.UIElements.VisualElement::<isCompositeRoot>k__BackingField
	bool ___U3CisCompositeRootU3Ek__BackingField_3;
	// UnityEngine.Vector3 UnityEngine.UIElements.VisualElement::m_Position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Position_7;
	// UnityEngine.Quaternion UnityEngine.UIElements.VisualElement::m_Rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_Rotation_8;
	// UnityEngine.Vector3 UnityEngine.UIElements.VisualElement::m_Scale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Scale_9;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isLayoutManual>k__BackingField
	bool ___U3CisLayoutManualU3Ek__BackingField_10;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_Layout
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_Layout_11;
	// System.Boolean UnityEngine.UIElements.VisualElement::isBoundingBoxDirty
	bool ___isBoundingBoxDirty_12;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_BoundingBox
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_BoundingBox_13;
	// System.Boolean UnityEngine.UIElements.VisualElement::isWorldBoundingBoxDirty
	bool ___isWorldBoundingBoxDirty_14;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldBoundingBox
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_WorldBoundingBox_15;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isWorldTransformDirty>k__BackingField
	bool ___U3CisWorldTransformDirtyU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isWorldTransformInverseDirty>k__BackingField
	bool ___U3CisWorldTransformInverseDirtyU3Ek__BackingField_17;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformCache
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_WorldTransformCache_18;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformInverseCache
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_WorldTransformInverseCache_19;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::m_PseudoStates
	int32_t ___m_PseudoStates_21;
	// UnityEngine.UIElements.PickingMode UnityEngine.UIElements.VisualElement::<pickingMode>k__BackingField
	int32_t ___U3CpickingModeU3Ek__BackingField_22;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.VisualElement::<yogaNode>k__BackingField
	YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___U3CyogaNodeU3Ek__BackingField_23;
	// UnityEngine.UIElements.StyleSheets.VisualElementStylesData UnityEngine.UIElements.VisualElement::m_Style
	VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867 * ___m_Style_24;
	// UnityEngine.UIElements.StyleSheets.InheritedStylesData UnityEngine.UIElements.VisualElement::m_InheritedStylesData
	InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E * ___m_InheritedStylesData_25;
	// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::<computedStyle>k__BackingField
	ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91  ___U3CcomputedStyleU3Ek__BackingField_26;
	// System.Int32 UnityEngine.UIElements.VisualElement::imguiContainerDescendantCount
	int32_t ___imguiContainerDescendantCount_27;
	// UnityEngine.UIElements.VisualElement_Hierarchy UnityEngine.UIElements.VisualElement::<hierarchy>k__BackingField
	Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  ___U3ChierarchyU3Ek__BackingField_28;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_PhysicalParent
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___m_PhysicalParent_29;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::m_Children
	List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * ___m_Children_31;
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualElement::<elementPanel>k__BackingField
	BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * ___U3CelementPanelU3Ek__BackingField_32;

public:
	inline static int32_t get_offset_of_U3CisCompositeRootU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CisCompositeRootU3Ek__BackingField_3)); }
	inline bool get_U3CisCompositeRootU3Ek__BackingField_3() const { return ___U3CisCompositeRootU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CisCompositeRootU3Ek__BackingField_3() { return &___U3CisCompositeRootU3Ek__BackingField_3; }
	inline void set_U3CisCompositeRootU3Ek__BackingField_3(bool value)
	{
		___U3CisCompositeRootU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_m_Position_7() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_Position_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Position_7() const { return ___m_Position_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Position_7() { return &___m_Position_7; }
	inline void set_m_Position_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Position_7 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_8() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_Rotation_8)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_Rotation_8() const { return ___m_Rotation_8; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_Rotation_8() { return &___m_Rotation_8; }
	inline void set_m_Rotation_8(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_Rotation_8 = value;
	}

	inline static int32_t get_offset_of_m_Scale_9() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_Scale_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Scale_9() const { return ___m_Scale_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Scale_9() { return &___m_Scale_9; }
	inline void set_m_Scale_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Scale_9 = value;
	}

	inline static int32_t get_offset_of_U3CisLayoutManualU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CisLayoutManualU3Ek__BackingField_10)); }
	inline bool get_U3CisLayoutManualU3Ek__BackingField_10() const { return ___U3CisLayoutManualU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CisLayoutManualU3Ek__BackingField_10() { return &___U3CisLayoutManualU3Ek__BackingField_10; }
	inline void set_U3CisLayoutManualU3Ek__BackingField_10(bool value)
	{
		___U3CisLayoutManualU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_m_Layout_11() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_Layout_11)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_Layout_11() const { return ___m_Layout_11; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_Layout_11() { return &___m_Layout_11; }
	inline void set_m_Layout_11(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_Layout_11 = value;
	}

	inline static int32_t get_offset_of_isBoundingBoxDirty_12() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___isBoundingBoxDirty_12)); }
	inline bool get_isBoundingBoxDirty_12() const { return ___isBoundingBoxDirty_12; }
	inline bool* get_address_of_isBoundingBoxDirty_12() { return &___isBoundingBoxDirty_12; }
	inline void set_isBoundingBoxDirty_12(bool value)
	{
		___isBoundingBoxDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_BoundingBox_13() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_BoundingBox_13)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_BoundingBox_13() const { return ___m_BoundingBox_13; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_BoundingBox_13() { return &___m_BoundingBox_13; }
	inline void set_m_BoundingBox_13(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_BoundingBox_13 = value;
	}

	inline static int32_t get_offset_of_isWorldBoundingBoxDirty_14() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___isWorldBoundingBoxDirty_14)); }
	inline bool get_isWorldBoundingBoxDirty_14() const { return ___isWorldBoundingBoxDirty_14; }
	inline bool* get_address_of_isWorldBoundingBoxDirty_14() { return &___isWorldBoundingBoxDirty_14; }
	inline void set_isWorldBoundingBoxDirty_14(bool value)
	{
		___isWorldBoundingBoxDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_WorldBoundingBox_15() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_WorldBoundingBox_15)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_WorldBoundingBox_15() const { return ___m_WorldBoundingBox_15; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_WorldBoundingBox_15() { return &___m_WorldBoundingBox_15; }
	inline void set_m_WorldBoundingBox_15(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_WorldBoundingBox_15 = value;
	}

	inline static int32_t get_offset_of_U3CisWorldTransformDirtyU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CisWorldTransformDirtyU3Ek__BackingField_16)); }
	inline bool get_U3CisWorldTransformDirtyU3Ek__BackingField_16() const { return ___U3CisWorldTransformDirtyU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisWorldTransformDirtyU3Ek__BackingField_16() { return &___U3CisWorldTransformDirtyU3Ek__BackingField_16; }
	inline void set_U3CisWorldTransformDirtyU3Ek__BackingField_16(bool value)
	{
		___U3CisWorldTransformDirtyU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisWorldTransformInverseDirtyU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CisWorldTransformInverseDirtyU3Ek__BackingField_17)); }
	inline bool get_U3CisWorldTransformInverseDirtyU3Ek__BackingField_17() const { return ___U3CisWorldTransformInverseDirtyU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisWorldTransformInverseDirtyU3Ek__BackingField_17() { return &___U3CisWorldTransformInverseDirtyU3Ek__BackingField_17; }
	inline void set_U3CisWorldTransformInverseDirtyU3Ek__BackingField_17(bool value)
	{
		___U3CisWorldTransformInverseDirtyU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_m_WorldTransformCache_18() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_WorldTransformCache_18)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_WorldTransformCache_18() const { return ___m_WorldTransformCache_18; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_WorldTransformCache_18() { return &___m_WorldTransformCache_18; }
	inline void set_m_WorldTransformCache_18(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_WorldTransformCache_18 = value;
	}

	inline static int32_t get_offset_of_m_WorldTransformInverseCache_19() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_WorldTransformInverseCache_19)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_WorldTransformInverseCache_19() const { return ___m_WorldTransformInverseCache_19; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_WorldTransformInverseCache_19() { return &___m_WorldTransformInverseCache_19; }
	inline void set_m_WorldTransformInverseCache_19(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_WorldTransformInverseCache_19 = value;
	}

	inline static int32_t get_offset_of_m_PseudoStates_21() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_PseudoStates_21)); }
	inline int32_t get_m_PseudoStates_21() const { return ___m_PseudoStates_21; }
	inline int32_t* get_address_of_m_PseudoStates_21() { return &___m_PseudoStates_21; }
	inline void set_m_PseudoStates_21(int32_t value)
	{
		___m_PseudoStates_21 = value;
	}

	inline static int32_t get_offset_of_U3CpickingModeU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CpickingModeU3Ek__BackingField_22)); }
	inline int32_t get_U3CpickingModeU3Ek__BackingField_22() const { return ___U3CpickingModeU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CpickingModeU3Ek__BackingField_22() { return &___U3CpickingModeU3Ek__BackingField_22; }
	inline void set_U3CpickingModeU3Ek__BackingField_22(int32_t value)
	{
		___U3CpickingModeU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CyogaNodeU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CyogaNodeU3Ek__BackingField_23)); }
	inline YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * get_U3CyogaNodeU3Ek__BackingField_23() const { return ___U3CyogaNodeU3Ek__BackingField_23; }
	inline YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C ** get_address_of_U3CyogaNodeU3Ek__BackingField_23() { return &___U3CyogaNodeU3Ek__BackingField_23; }
	inline void set_U3CyogaNodeU3Ek__BackingField_23(YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * value)
	{
		___U3CyogaNodeU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CyogaNodeU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_Style_24() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_Style_24)); }
	inline VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867 * get_m_Style_24() const { return ___m_Style_24; }
	inline VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867 ** get_address_of_m_Style_24() { return &___m_Style_24; }
	inline void set_m_Style_24(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867 * value)
	{
		___m_Style_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Style_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_InheritedStylesData_25() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_InheritedStylesData_25)); }
	inline InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E * get_m_InheritedStylesData_25() const { return ___m_InheritedStylesData_25; }
	inline InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E ** get_address_of_m_InheritedStylesData_25() { return &___m_InheritedStylesData_25; }
	inline void set_m_InheritedStylesData_25(InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E * value)
	{
		___m_InheritedStylesData_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InheritedStylesData_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcomputedStyleU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CcomputedStyleU3Ek__BackingField_26)); }
	inline ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91  get_U3CcomputedStyleU3Ek__BackingField_26() const { return ___U3CcomputedStyleU3Ek__BackingField_26; }
	inline ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91 * get_address_of_U3CcomputedStyleU3Ek__BackingField_26() { return &___U3CcomputedStyleU3Ek__BackingField_26; }
	inline void set_U3CcomputedStyleU3Ek__BackingField_26(ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91  value)
	{
		___U3CcomputedStyleU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcomputedStyleU3Ek__BackingField_26))->___m_Element_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_imguiContainerDescendantCount_27() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___imguiContainerDescendantCount_27)); }
	inline int32_t get_imguiContainerDescendantCount_27() const { return ___imguiContainerDescendantCount_27; }
	inline int32_t* get_address_of_imguiContainerDescendantCount_27() { return &___imguiContainerDescendantCount_27; }
	inline void set_imguiContainerDescendantCount_27(int32_t value)
	{
		___imguiContainerDescendantCount_27 = value;
	}

	inline static int32_t get_offset_of_U3ChierarchyU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3ChierarchyU3Ek__BackingField_28)); }
	inline Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  get_U3ChierarchyU3Ek__BackingField_28() const { return ___U3ChierarchyU3Ek__BackingField_28; }
	inline Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F * get_address_of_U3ChierarchyU3Ek__BackingField_28() { return &___U3ChierarchyU3Ek__BackingField_28; }
	inline void set_U3ChierarchyU3Ek__BackingField_28(Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  value)
	{
		___U3ChierarchyU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3ChierarchyU3Ek__BackingField_28))->___m_Owner_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_PhysicalParent_29() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_PhysicalParent_29)); }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * get_m_PhysicalParent_29() const { return ___m_PhysicalParent_29; }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 ** get_address_of_m_PhysicalParent_29() { return &___m_PhysicalParent_29; }
	inline void set_m_PhysicalParent_29(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * value)
	{
		___m_PhysicalParent_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PhysicalParent_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Children_31() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_Children_31)); }
	inline List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * get_m_Children_31() const { return ___m_Children_31; }
	inline List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 ** get_address_of_m_Children_31() { return &___m_Children_31; }
	inline void set_m_Children_31(List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * value)
	{
		___m_Children_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Children_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CelementPanelU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CelementPanelU3Ek__BackingField_32)); }
	inline BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * get_U3CelementPanelU3Ek__BackingField_32() const { return ___U3CelementPanelU3Ek__BackingField_32; }
	inline BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 ** get_address_of_U3CelementPanelU3Ek__BackingField_32() { return &___U3CelementPanelU3Ek__BackingField_32; }
	inline void set_U3CelementPanelU3Ek__BackingField_32(BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * value)
	{
		___U3CelementPanelU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CelementPanelU3Ek__BackingField_32), (void*)value);
	}
};

struct VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::s_EmptyClassList
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___s_EmptyClassList_4;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::userDataPropertyKey
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___userDataPropertyKey_5;
	// System.String UnityEngine.UIElements.VisualElement::disabledUssClassName
	String_t* ___disabledUssClassName_6;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::s_InfiniteRect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___s_InfiniteRect_20;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::s_EmptyList
	List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * ___s_EmptyList_30;

public:
	inline static int32_t get_offset_of_s_EmptyClassList_4() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields, ___s_EmptyClassList_4)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_s_EmptyClassList_4() const { return ___s_EmptyClassList_4; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_s_EmptyClassList_4() { return &___s_EmptyClassList_4; }
	inline void set_s_EmptyClassList_4(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___s_EmptyClassList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EmptyClassList_4), (void*)value);
	}

	inline static int32_t get_offset_of_userDataPropertyKey_5() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields, ___userDataPropertyKey_5)); }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  get_userDataPropertyKey_5() const { return ___userDataPropertyKey_5; }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * get_address_of_userDataPropertyKey_5() { return &___userDataPropertyKey_5; }
	inline void set_userDataPropertyKey_5(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  value)
	{
		___userDataPropertyKey_5 = value;
	}

	inline static int32_t get_offset_of_disabledUssClassName_6() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields, ___disabledUssClassName_6)); }
	inline String_t* get_disabledUssClassName_6() const { return ___disabledUssClassName_6; }
	inline String_t** get_address_of_disabledUssClassName_6() { return &___disabledUssClassName_6; }
	inline void set_disabledUssClassName_6(String_t* value)
	{
		___disabledUssClassName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disabledUssClassName_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_InfiniteRect_20() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields, ___s_InfiniteRect_20)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_s_InfiniteRect_20() const { return ___s_InfiniteRect_20; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_s_InfiniteRect_20() { return &___s_InfiniteRect_20; }
	inline void set_s_InfiniteRect_20(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___s_InfiniteRect_20 = value;
	}

	inline static int32_t get_offset_of_s_EmptyList_30() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields, ___s_EmptyList_30)); }
	inline List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * get_s_EmptyList_30() const { return ___s_EmptyList_30; }
	inline List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 ** get_address_of_s_EmptyList_30() { return &___s_EmptyList_30; }
	inline void set_s_EmptyList_30(List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * value)
	{
		___s_EmptyList_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EmptyList_30), (void*)value);
	}
};


// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Boolean>
struct  Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.UIElements.EventBase`1<UnityEngine.UIElements.ValidateCommandEvent>
struct  EventBase_1_tF4905A52F74F39101D6B154C87AF4238E90A522C  : public EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;

public:
	inline static int32_t get_offset_of_m_RefCount_17() { return static_cast<int32_t>(offsetof(EventBase_1_tF4905A52F74F39101D6B154C87AF4238E90A522C, ___m_RefCount_17)); }
	inline int32_t get_m_RefCount_17() const { return ___m_RefCount_17; }
	inline int32_t* get_address_of_m_RefCount_17() { return &___m_RefCount_17; }
	inline void set_m_RefCount_17(int32_t value)
	{
		___m_RefCount_17 = value;
	}
};

struct EventBase_1_tF4905A52F74F39101D6B154C87AF4238E90A522C_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_t3E613DF0D364E6DFC40975DE89452C6B8A081972 * ___s_Pool_16;

public:
	inline static int32_t get_offset_of_s_TypeId_15() { return static_cast<int32_t>(offsetof(EventBase_1_tF4905A52F74F39101D6B154C87AF4238E90A522C_StaticFields, ___s_TypeId_15)); }
	inline int64_t get_s_TypeId_15() const { return ___s_TypeId_15; }
	inline int64_t* get_address_of_s_TypeId_15() { return &___s_TypeId_15; }
	inline void set_s_TypeId_15(int64_t value)
	{
		___s_TypeId_15 = value;
	}

	inline static int32_t get_offset_of_s_Pool_16() { return static_cast<int32_t>(offsetof(EventBase_1_tF4905A52F74F39101D6B154C87AF4238E90A522C_StaticFields, ___s_Pool_16)); }
	inline ObjectPool_1_t3E613DF0D364E6DFC40975DE89452C6B8A081972 * get_s_Pool_16() const { return ___s_Pool_16; }
	inline ObjectPool_1_t3E613DF0D364E6DFC40975DE89452C6B8A081972 ** get_address_of_s_Pool_16() { return &___s_Pool_16; }
	inline void set_s_Pool_16(ObjectPool_1_t3E613DF0D364E6DFC40975DE89452C6B8A081972 * value)
	{
		___s_Pool_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Pool_16), (void*)value);
	}
};


// UnityEngine.UIElements.EventBase`1<UnityEngine.UIElements.WheelEvent>
struct  EventBase_1_t75512BBBA74CF45CDB18605FEF9C66432F33F66B  : public EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;

public:
	inline static int32_t get_offset_of_m_RefCount_17() { return static_cast<int32_t>(offsetof(EventBase_1_t75512BBBA74CF45CDB18605FEF9C66432F33F66B, ___m_RefCount_17)); }
	inline int32_t get_m_RefCount_17() const { return ___m_RefCount_17; }
	inline int32_t* get_address_of_m_RefCount_17() { return &___m_RefCount_17; }
	inline void set_m_RefCount_17(int32_t value)
	{
		___m_RefCount_17 = value;
	}
};

struct EventBase_1_t75512BBBA74CF45CDB18605FEF9C66432F33F66B_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_tFEA72352176A972B5FFCF9EF215A0EF53F50EF33 * ___s_Pool_16;

public:
	inline static int32_t get_offset_of_s_TypeId_15() { return static_cast<int32_t>(offsetof(EventBase_1_t75512BBBA74CF45CDB18605FEF9C66432F33F66B_StaticFields, ___s_TypeId_15)); }
	inline int64_t get_s_TypeId_15() const { return ___s_TypeId_15; }
	inline int64_t* get_address_of_s_TypeId_15() { return &___s_TypeId_15; }
	inline void set_s_TypeId_15(int64_t value)
	{
		___s_TypeId_15 = value;
	}

	inline static int32_t get_offset_of_s_Pool_16() { return static_cast<int32_t>(offsetof(EventBase_1_t75512BBBA74CF45CDB18605FEF9C66432F33F66B_StaticFields, ___s_Pool_16)); }
	inline ObjectPool_1_tFEA72352176A972B5FFCF9EF215A0EF53F50EF33 * get_s_Pool_16() const { return ___s_Pool_16; }
	inline ObjectPool_1_tFEA72352176A972B5FFCF9EF215A0EF53F50EF33 ** get_address_of_s_Pool_16() { return &___s_Pool_16; }
	inline void set_s_Pool_16(ObjectPool_1_tFEA72352176A972B5FFCF9EF215A0EF53F50EF33 * value)
	{
		___s_Pool_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Pool_16), (void*)value);
	}
};


// UnityEngine.UIElements.StyleLength
struct  StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleLength::m_Keyword
	int32_t ___m_Keyword_0;
	// UnityEngine.UIElements.Length UnityEngine.UIElements.StyleLength::m_Value
	Length_tE2A2C2ECE7255AC6FB9B1F41D51E7BC645021300  ___m_Value_1;
	// System.Int32 UnityEngine.UIElements.StyleLength::m_Specificity
	int32_t ___m_Specificity_2;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA, ___m_Value_1)); }
	inline Length_tE2A2C2ECE7255AC6FB9B1F41D51E7BC645021300  get_m_Value_1() const { return ___m_Value_1; }
	inline Length_tE2A2C2ECE7255AC6FB9B1F41D51E7BC645021300 * get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(Length_tE2A2C2ECE7255AC6FB9B1F41D51E7BC645021300  value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_Specificity_2() { return static_cast<int32_t>(offsetof(StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA, ___m_Specificity_2)); }
	inline int32_t get_m_Specificity_2() const { return ___m_Specificity_2; }
	inline int32_t* get_address_of_m_Specificity_2() { return &___m_Specificity_2; }
	inline void set_m_Specificity_2(int32_t value)
	{
		___m_Specificity_2 = value;
	}
};


// UnityEngine.Yoga.BaselineFunction
struct  BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Yoga.MeasureFunction
struct  MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// UnityEngine.UIElements.CommandEventBase`1<UnityEngine.UIElements.ValidateCommandEvent>
struct  CommandEventBase_1_tEE5807F3456E82B26B261EF8BA01B26EED0B7BF7  : public EventBase_1_tF4905A52F74F39101D6B154C87AF4238E90A522C
{
public:
	// System.String UnityEngine.UIElements.CommandEventBase`1::m_CommandName
	String_t* ___m_CommandName_18;

public:
	inline static int32_t get_offset_of_m_CommandName_18() { return static_cast<int32_t>(offsetof(CommandEventBase_1_tEE5807F3456E82B26B261EF8BA01B26EED0B7BF7, ___m_CommandName_18)); }
	inline String_t* get_m_CommandName_18() const { return ___m_CommandName_18; }
	inline String_t** get_address_of_m_CommandName_18() { return &___m_CommandName_18; }
	inline void set_m_CommandName_18(String_t* value)
	{
		___m_CommandName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CommandName_18), (void*)value);
	}
};


// UnityEngine.UIElements.MouseEventBase`1<UnityEngine.UIElements.WheelEvent>
struct  MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16  : public EventBase_1_t75512BBBA74CF45CDB18605FEF9C66432F33F66B
{
public:
	// UnityEngine.EventModifiers UnityEngine.UIElements.MouseEventBase`1::<modifiers>k__BackingField
	int32_t ___U3CmodifiersU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.UIElements.MouseEventBase`1::<mousePosition>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CmousePositionU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.UIElements.MouseEventBase`1::<localMousePosition>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3ClocalMousePositionU3Ek__BackingField_20;
	// UnityEngine.Vector2 UnityEngine.UIElements.MouseEventBase`1::<mouseDelta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CmouseDeltaU3Ek__BackingField_21;
	// System.Int32 UnityEngine.UIElements.MouseEventBase`1::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_22;
	// System.Int32 UnityEngine.UIElements.MouseEventBase`1::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Int32 UnityEngine.UIElements.MouseEventBase`1::<pressedButtons>k__BackingField
	int32_t ___U3CpressedButtonsU3Ek__BackingField_24;
	// System.Boolean UnityEngine.UIElements.MouseEventBase`1::<UnityEngine.UIElements.IMouseEventInternal.triggeredByOS>k__BackingField
	bool ___U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25;
	// System.Boolean UnityEngine.UIElements.MouseEventBase`1::<UnityEngine.UIElements.IMouseEventInternal.recomputeTopElementUnderMouse>k__BackingField
	bool ___U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26;
	// UnityEngine.UIElements.IPointerEvent UnityEngine.UIElements.MouseEventBase`1::<UnityEngine.UIElements.IMouseEventInternal.sourcePointerEvent>k__BackingField
	RuntimeObject* ___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27;

public:
	inline static int32_t get_offset_of_U3CmodifiersU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16, ___U3CmodifiersU3Ek__BackingField_18)); }
	inline int32_t get_U3CmodifiersU3Ek__BackingField_18() const { return ___U3CmodifiersU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CmodifiersU3Ek__BackingField_18() { return &___U3CmodifiersU3Ek__BackingField_18; }
	inline void set_U3CmodifiersU3Ek__BackingField_18(int32_t value)
	{
		___U3CmodifiersU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CmousePositionU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16, ___U3CmousePositionU3Ek__BackingField_19)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CmousePositionU3Ek__BackingField_19() const { return ___U3CmousePositionU3Ek__BackingField_19; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CmousePositionU3Ek__BackingField_19() { return &___U3CmousePositionU3Ek__BackingField_19; }
	inline void set_U3CmousePositionU3Ek__BackingField_19(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CmousePositionU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3ClocalMousePositionU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16, ___U3ClocalMousePositionU3Ek__BackingField_20)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3ClocalMousePositionU3Ek__BackingField_20() const { return ___U3ClocalMousePositionU3Ek__BackingField_20; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3ClocalMousePositionU3Ek__BackingField_20() { return &___U3ClocalMousePositionU3Ek__BackingField_20; }
	inline void set_U3ClocalMousePositionU3Ek__BackingField_20(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3ClocalMousePositionU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CmouseDeltaU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16, ___U3CmouseDeltaU3Ek__BackingField_21)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CmouseDeltaU3Ek__BackingField_21() const { return ___U3CmouseDeltaU3Ek__BackingField_21; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CmouseDeltaU3Ek__BackingField_21() { return &___U3CmouseDeltaU3Ek__BackingField_21; }
	inline void set_U3CmouseDeltaU3Ek__BackingField_21(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CmouseDeltaU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16, ___U3CclickCountU3Ek__BackingField_22)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_22() const { return ___U3CclickCountU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_22() { return &___U3CclickCountU3Ek__BackingField_22; }
	inline void set_U3CclickCountU3Ek__BackingField_22(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CpressedButtonsU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16, ___U3CpressedButtonsU3Ek__BackingField_24)); }
	inline int32_t get_U3CpressedButtonsU3Ek__BackingField_24() const { return ___U3CpressedButtonsU3Ek__BackingField_24; }
	inline int32_t* get_address_of_U3CpressedButtonsU3Ek__BackingField_24() { return &___U3CpressedButtonsU3Ek__BackingField_24; }
	inline void set_U3CpressedButtonsU3Ek__BackingField_24(int32_t value)
	{
		___U3CpressedButtonsU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16, ___U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25)); }
	inline bool get_U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25() const { return ___U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25() { return &___U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25; }
	inline void set_U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25(bool value)
	{
		___U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16, ___U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26)); }
	inline bool get_U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26() const { return ___U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26() { return &___U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26; }
	inline void set_U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26(bool value)
	{
		___U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16, ___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27)); }
	inline RuntimeObject* get_U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27() const { return ___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27; }
	inline RuntimeObject** get_address_of_U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27() { return &___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27; }
	inline void set_U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27(RuntimeObject* value)
	{
		___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27), (void*)value);
	}
};


// UnityEngine.UIElements.StyleSheets.InheritedStylesData
struct  InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E  : public RuntimeObject
{
public:
	// UnityEngine.UIElements.StyleColor UnityEngine.UIElements.StyleSheets.InheritedStylesData::color
	StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356  ___color_1;
	// UnityEngine.UIElements.StyleFont UnityEngine.UIElements.StyleSheets.InheritedStylesData::font
	StyleFont_t476F5A1B8CC55D5C23FAD247C46409A5042D4338  ___font_2;
	// UnityEngine.UIElements.StyleLength UnityEngine.UIElements.StyleSheets.InheritedStylesData::fontSize
	StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  ___fontSize_3;
	// UnityEngine.UIElements.StyleInt UnityEngine.UIElements.StyleSheets.InheritedStylesData::unityFontStyle
	StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  ___unityFontStyle_4;
	// UnityEngine.UIElements.StyleInt UnityEngine.UIElements.StyleSheets.InheritedStylesData::unityTextAlign
	StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  ___unityTextAlign_5;
	// UnityEngine.UIElements.StyleInt UnityEngine.UIElements.StyleSheets.InheritedStylesData::visibility
	StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  ___visibility_6;
	// UnityEngine.UIElements.StyleInt UnityEngine.UIElements.StyleSheets.InheritedStylesData::whiteSpace
	StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  ___whiteSpace_7;

public:
	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E, ___color_1)); }
	inline StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356  get_color_1() const { return ___color_1; }
	inline StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_font_2() { return static_cast<int32_t>(offsetof(InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E, ___font_2)); }
	inline StyleFont_t476F5A1B8CC55D5C23FAD247C46409A5042D4338  get_font_2() const { return ___font_2; }
	inline StyleFont_t476F5A1B8CC55D5C23FAD247C46409A5042D4338 * get_address_of_font_2() { return &___font_2; }
	inline void set_font_2(StyleFont_t476F5A1B8CC55D5C23FAD247C46409A5042D4338  value)
	{
		___font_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___font_2))->___m_Value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_fontSize_3() { return static_cast<int32_t>(offsetof(InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E, ___fontSize_3)); }
	inline StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  get_fontSize_3() const { return ___fontSize_3; }
	inline StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA * get_address_of_fontSize_3() { return &___fontSize_3; }
	inline void set_fontSize_3(StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  value)
	{
		___fontSize_3 = value;
	}

	inline static int32_t get_offset_of_unityFontStyle_4() { return static_cast<int32_t>(offsetof(InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E, ___unityFontStyle_4)); }
	inline StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  get_unityFontStyle_4() const { return ___unityFontStyle_4; }
	inline StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 * get_address_of_unityFontStyle_4() { return &___unityFontStyle_4; }
	inline void set_unityFontStyle_4(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  value)
	{
		___unityFontStyle_4 = value;
	}

	inline static int32_t get_offset_of_unityTextAlign_5() { return static_cast<int32_t>(offsetof(InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E, ___unityTextAlign_5)); }
	inline StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  get_unityTextAlign_5() const { return ___unityTextAlign_5; }
	inline StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 * get_address_of_unityTextAlign_5() { return &___unityTextAlign_5; }
	inline void set_unityTextAlign_5(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  value)
	{
		___unityTextAlign_5 = value;
	}

	inline static int32_t get_offset_of_visibility_6() { return static_cast<int32_t>(offsetof(InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E, ___visibility_6)); }
	inline StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  get_visibility_6() const { return ___visibility_6; }
	inline StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 * get_address_of_visibility_6() { return &___visibility_6; }
	inline void set_visibility_6(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  value)
	{
		___visibility_6 = value;
	}

	inline static int32_t get_offset_of_whiteSpace_7() { return static_cast<int32_t>(offsetof(InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E, ___whiteSpace_7)); }
	inline StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  get_whiteSpace_7() const { return ___whiteSpace_7; }
	inline StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 * get_address_of_whiteSpace_7() { return &___whiteSpace_7; }
	inline void set_whiteSpace_7(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  value)
	{
		___whiteSpace_7 = value;
	}
};

struct InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E_StaticFields
{
public:
	// UnityEngine.UIElements.StyleSheets.InheritedStylesData UnityEngine.UIElements.StyleSheets.InheritedStylesData::none
	InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E * ___none_0;

public:
	inline static int32_t get_offset_of_none_0() { return static_cast<int32_t>(offsetof(InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E_StaticFields, ___none_0)); }
	inline InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E * get_none_0() const { return ___none_0; }
	inline InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E ** get_address_of_none_0() { return &___none_0; }
	inline void set_none_0(InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E * value)
	{
		___none_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___none_0), (void*)value);
	}
};


// UnityEngine.UIElements.StyleSheets.VisualElementStylesData
struct  VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.UIElements.StyleSheets.VisualElementStylesData::isShared
	bool ___isShared_2;
	// UnityEngine.UIElements.StyleLength UnityEngine.UIElements.StyleSheets.VisualElementStylesData::width
	StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  ___width_3;
	// UnityEngine.UIElements.StyleLength UnityEngine.UIElements.StyleSheets.VisualElementStylesData::height
	StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  ___height_4;
	// UnityEngine.UIElements.StyleLength UnityEngine.UIElements.StyleSheets.VisualElementStylesData::maxWidth
	StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  ___maxWidth_5;
	// UnityEngine.UIElements.StyleLength UnityEngine.UIElements.StyleSheets.VisualElementStylesData::maxHeight
	StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  ___maxHeight_6;
	// UnityEngine.UIElements.StyleLength UnityEngine.UIElements.StyleSheets.VisualElementStylesData::minWidth
	StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  ___minWidth_7;
	// UnityEngine.UIElements.StyleLength UnityEngine.UIElements.StyleSheets.VisualElementStylesData::minHeight
	StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  ___minHeight_8;
	// UnityEngine.UIElements.StyleLength UnityEngine.UIElements.StyleSheets.VisualElementStylesData::flexBasis
	StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  ___flexBasis_9;
	// UnityEngine.UIElements.StyleFloat UnityEngine.UIElements.StyleSheets.VisualElementStylesData::flexShrink
	StyleFloat_t82E1EEBA399136FB3F2F20EE5BED15FDBFC710AC  ___flexShrink_10;
	// UnityEngine.UIElements.StyleFloat UnityEngine.UIElements.StyleSheets.VisualElementStylesData::flexGrow
	StyleFloat_t82E1EEBA399136FB3F2F20EE5BED15FDBFC710AC  ___flexGrow_11;
	// UnityEngine.UIElements.StyleInt UnityEngine.UIElements.StyleSheets.VisualElementStylesData::overflow
	StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  ___overflow_12;
	// UnityEngine.UIElements.StyleLength UnityEngine.UIElements.StyleSheets.VisualElementStylesData::left
	StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  ___left_13;
	// UnityEngine.UIElements.StyleLength UnityEngine.UIElements.StyleSheets.VisualElementStylesData::top
	StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  ___top_14;
	// UnityEngine.UIElements.StyleLength UnityEngine.UIElements.StyleSheets.VisualElementStylesData::right
	StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  ___right_15;
	// UnityEngine.UIElements.StyleLength UnityEngine.UIElements.StyleSheets.VisualElementStylesData::bottom
	StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  ___bottom_16;
	// UnityEngine.UIElements.StyleInt UnityEngine.UIElements.StyleSheets.VisualElementStylesData::alignSelf
	StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  ___alignSelf_17;
	// UnityEngine.UIElements.StyleColor UnityEngine.UIElements.StyleSheets.VisualElementStylesData::color
	StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356  ___color_18;
	// UnityEngine.UIElements.StyleColor UnityEngine.UIElements.StyleSheets.VisualElementStylesData::unityBackgroundImageTintColor
	StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356  ___unityBackgroundImageTintColor_19;
	// UnityEngine.UIElements.StyleInt UnityEngine.UIElements.StyleSheets.VisualElementStylesData::alignItems
	StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  ___alignItems_20;
	// UnityEngine.UIElements.StyleInt UnityEngine.UIElements.StyleSheets.VisualElementStylesData::alignContent
	StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  ___alignContent_21;
	// UnityEngine.UIElements.StyleColor UnityEngine.UIElements.StyleSheets.VisualElementStylesData::borderLeftColor
	StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356  ___borderLeftColor_22;
	// UnityEngine.UIElements.StyleColor UnityEngine.UIElements.StyleSheets.VisualElementStylesData::borderTopColor
	StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356  ___borderTopColor_23;
	// UnityEngine.UIElements.StyleColor UnityEngine.UIElements.StyleSheets.VisualElementStylesData::borderRightColor
	StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356  ___borderRightColor_24;
	// UnityEngine.UIElements.StyleColor UnityEngine.UIElements.StyleSheets.VisualElementStylesData::borderBottomColor
	StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356  ___borderBottomColor_25;
	// UnityEngine.UIElements.StyleFloat UnityEngine.UIElements.StyleSheets.VisualElementStylesData::opacity
	StyleFloat_t82E1EEBA399136FB3F2F20EE5BED15FDBFC710AC  ___opacity_26;
	// UnityEngine.UIElements.StyleInt UnityEngine.UIElements.StyleSheets.VisualElementStylesData::visibility
	StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  ___visibility_27;
	// UnityEngine.UIElements.StyleInt UnityEngine.UIElements.StyleSheets.VisualElementStylesData::display
	StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  ___display_28;
	// System.Single UnityEngine.UIElements.StyleSheets.VisualElementStylesData::dpiScaling
	float ___dpiScaling_29;

public:
	inline static int32_t get_offset_of_isShared_2() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___isShared_2)); }
	inline bool get_isShared_2() const { return ___isShared_2; }
	inline bool* get_address_of_isShared_2() { return &___isShared_2; }
	inline void set_isShared_2(bool value)
	{
		___isShared_2 = value;
	}

	inline static int32_t get_offset_of_width_3() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___width_3)); }
	inline StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  get_width_3() const { return ___width_3; }
	inline StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA * get_address_of_width_3() { return &___width_3; }
	inline void set_width_3(StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  value)
	{
		___width_3 = value;
	}

	inline static int32_t get_offset_of_height_4() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___height_4)); }
	inline StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  get_height_4() const { return ___height_4; }
	inline StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA * get_address_of_height_4() { return &___height_4; }
	inline void set_height_4(StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  value)
	{
		___height_4 = value;
	}

	inline static int32_t get_offset_of_maxWidth_5() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___maxWidth_5)); }
	inline StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  get_maxWidth_5() const { return ___maxWidth_5; }
	inline StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA * get_address_of_maxWidth_5() { return &___maxWidth_5; }
	inline void set_maxWidth_5(StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  value)
	{
		___maxWidth_5 = value;
	}

	inline static int32_t get_offset_of_maxHeight_6() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___maxHeight_6)); }
	inline StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  get_maxHeight_6() const { return ___maxHeight_6; }
	inline StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA * get_address_of_maxHeight_6() { return &___maxHeight_6; }
	inline void set_maxHeight_6(StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  value)
	{
		___maxHeight_6 = value;
	}

	inline static int32_t get_offset_of_minWidth_7() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___minWidth_7)); }
	inline StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  get_minWidth_7() const { return ___minWidth_7; }
	inline StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA * get_address_of_minWidth_7() { return &___minWidth_7; }
	inline void set_minWidth_7(StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  value)
	{
		___minWidth_7 = value;
	}

	inline static int32_t get_offset_of_minHeight_8() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___minHeight_8)); }
	inline StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  get_minHeight_8() const { return ___minHeight_8; }
	inline StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA * get_address_of_minHeight_8() { return &___minHeight_8; }
	inline void set_minHeight_8(StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  value)
	{
		___minHeight_8 = value;
	}

	inline static int32_t get_offset_of_flexBasis_9() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___flexBasis_9)); }
	inline StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  get_flexBasis_9() const { return ___flexBasis_9; }
	inline StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA * get_address_of_flexBasis_9() { return &___flexBasis_9; }
	inline void set_flexBasis_9(StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  value)
	{
		___flexBasis_9 = value;
	}

	inline static int32_t get_offset_of_flexShrink_10() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___flexShrink_10)); }
	inline StyleFloat_t82E1EEBA399136FB3F2F20EE5BED15FDBFC710AC  get_flexShrink_10() const { return ___flexShrink_10; }
	inline StyleFloat_t82E1EEBA399136FB3F2F20EE5BED15FDBFC710AC * get_address_of_flexShrink_10() { return &___flexShrink_10; }
	inline void set_flexShrink_10(StyleFloat_t82E1EEBA399136FB3F2F20EE5BED15FDBFC710AC  value)
	{
		___flexShrink_10 = value;
	}

	inline static int32_t get_offset_of_flexGrow_11() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___flexGrow_11)); }
	inline StyleFloat_t82E1EEBA399136FB3F2F20EE5BED15FDBFC710AC  get_flexGrow_11() const { return ___flexGrow_11; }
	inline StyleFloat_t82E1EEBA399136FB3F2F20EE5BED15FDBFC710AC * get_address_of_flexGrow_11() { return &___flexGrow_11; }
	inline void set_flexGrow_11(StyleFloat_t82E1EEBA399136FB3F2F20EE5BED15FDBFC710AC  value)
	{
		___flexGrow_11 = value;
	}

	inline static int32_t get_offset_of_overflow_12() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___overflow_12)); }
	inline StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  get_overflow_12() const { return ___overflow_12; }
	inline StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 * get_address_of_overflow_12() { return &___overflow_12; }
	inline void set_overflow_12(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  value)
	{
		___overflow_12 = value;
	}

	inline static int32_t get_offset_of_left_13() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___left_13)); }
	inline StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  get_left_13() const { return ___left_13; }
	inline StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA * get_address_of_left_13() { return &___left_13; }
	inline void set_left_13(StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  value)
	{
		___left_13 = value;
	}

	inline static int32_t get_offset_of_top_14() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___top_14)); }
	inline StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  get_top_14() const { return ___top_14; }
	inline StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA * get_address_of_top_14() { return &___top_14; }
	inline void set_top_14(StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  value)
	{
		___top_14 = value;
	}

	inline static int32_t get_offset_of_right_15() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___right_15)); }
	inline StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  get_right_15() const { return ___right_15; }
	inline StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA * get_address_of_right_15() { return &___right_15; }
	inline void set_right_15(StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  value)
	{
		___right_15 = value;
	}

	inline static int32_t get_offset_of_bottom_16() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___bottom_16)); }
	inline StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  get_bottom_16() const { return ___bottom_16; }
	inline StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA * get_address_of_bottom_16() { return &___bottom_16; }
	inline void set_bottom_16(StyleLength_t0CA9A6F65522E56500E655128F0B271C1EF9CFFA  value)
	{
		___bottom_16 = value;
	}

	inline static int32_t get_offset_of_alignSelf_17() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___alignSelf_17)); }
	inline StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  get_alignSelf_17() const { return ___alignSelf_17; }
	inline StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 * get_address_of_alignSelf_17() { return &___alignSelf_17; }
	inline void set_alignSelf_17(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  value)
	{
		___alignSelf_17 = value;
	}

	inline static int32_t get_offset_of_color_18() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___color_18)); }
	inline StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356  get_color_18() const { return ___color_18; }
	inline StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356 * get_address_of_color_18() { return &___color_18; }
	inline void set_color_18(StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356  value)
	{
		___color_18 = value;
	}

	inline static int32_t get_offset_of_unityBackgroundImageTintColor_19() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___unityBackgroundImageTintColor_19)); }
	inline StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356  get_unityBackgroundImageTintColor_19() const { return ___unityBackgroundImageTintColor_19; }
	inline StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356 * get_address_of_unityBackgroundImageTintColor_19() { return &___unityBackgroundImageTintColor_19; }
	inline void set_unityBackgroundImageTintColor_19(StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356  value)
	{
		___unityBackgroundImageTintColor_19 = value;
	}

	inline static int32_t get_offset_of_alignItems_20() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___alignItems_20)); }
	inline StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  get_alignItems_20() const { return ___alignItems_20; }
	inline StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 * get_address_of_alignItems_20() { return &___alignItems_20; }
	inline void set_alignItems_20(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  value)
	{
		___alignItems_20 = value;
	}

	inline static int32_t get_offset_of_alignContent_21() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___alignContent_21)); }
	inline StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  get_alignContent_21() const { return ___alignContent_21; }
	inline StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 * get_address_of_alignContent_21() { return &___alignContent_21; }
	inline void set_alignContent_21(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  value)
	{
		___alignContent_21 = value;
	}

	inline static int32_t get_offset_of_borderLeftColor_22() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___borderLeftColor_22)); }
	inline StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356  get_borderLeftColor_22() const { return ___borderLeftColor_22; }
	inline StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356 * get_address_of_borderLeftColor_22() { return &___borderLeftColor_22; }
	inline void set_borderLeftColor_22(StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356  value)
	{
		___borderLeftColor_22 = value;
	}

	inline static int32_t get_offset_of_borderTopColor_23() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___borderTopColor_23)); }
	inline StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356  get_borderTopColor_23() const { return ___borderTopColor_23; }
	inline StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356 * get_address_of_borderTopColor_23() { return &___borderTopColor_23; }
	inline void set_borderTopColor_23(StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356  value)
	{
		___borderTopColor_23 = value;
	}

	inline static int32_t get_offset_of_borderRightColor_24() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___borderRightColor_24)); }
	inline StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356  get_borderRightColor_24() const { return ___borderRightColor_24; }
	inline StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356 * get_address_of_borderRightColor_24() { return &___borderRightColor_24; }
	inline void set_borderRightColor_24(StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356  value)
	{
		___borderRightColor_24 = value;
	}

	inline static int32_t get_offset_of_borderBottomColor_25() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___borderBottomColor_25)); }
	inline StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356  get_borderBottomColor_25() const { return ___borderBottomColor_25; }
	inline StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356 * get_address_of_borderBottomColor_25() { return &___borderBottomColor_25; }
	inline void set_borderBottomColor_25(StyleColor_t28630796AD93C742539E99EC5A266E304A4C3356  value)
	{
		___borderBottomColor_25 = value;
	}

	inline static int32_t get_offset_of_opacity_26() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___opacity_26)); }
	inline StyleFloat_t82E1EEBA399136FB3F2F20EE5BED15FDBFC710AC  get_opacity_26() const { return ___opacity_26; }
	inline StyleFloat_t82E1EEBA399136FB3F2F20EE5BED15FDBFC710AC * get_address_of_opacity_26() { return &___opacity_26; }
	inline void set_opacity_26(StyleFloat_t82E1EEBA399136FB3F2F20EE5BED15FDBFC710AC  value)
	{
		___opacity_26 = value;
	}

	inline static int32_t get_offset_of_visibility_27() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___visibility_27)); }
	inline StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  get_visibility_27() const { return ___visibility_27; }
	inline StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 * get_address_of_visibility_27() { return &___visibility_27; }
	inline void set_visibility_27(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  value)
	{
		___visibility_27 = value;
	}

	inline static int32_t get_offset_of_display_28() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___display_28)); }
	inline StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  get_display_28() const { return ___display_28; }
	inline StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 * get_address_of_display_28() { return &___display_28; }
	inline void set_display_28(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  value)
	{
		___display_28 = value;
	}

	inline static int32_t get_offset_of_dpiScaling_29() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867, ___dpiScaling_29)); }
	inline float get_dpiScaling_29() const { return ___dpiScaling_29; }
	inline float* get_address_of_dpiScaling_29() { return &___dpiScaling_29; }
	inline void set_dpiScaling_29(float value)
	{
		___dpiScaling_29 = value;
	}
};

struct VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867_StaticFields
{
public:
	// UnityEngine.UIElements.StyleSheets.StyleValuePropertyReader UnityEngine.UIElements.StyleSheets.VisualElementStylesData::s_StyleValuePropertyReader
	StyleValuePropertyReader_t8D34F83135FC8E2E14A8A007B87201057EE90CFE * ___s_StyleValuePropertyReader_0;
	// UnityEngine.UIElements.StyleSheets.VisualElementStylesData UnityEngine.UIElements.StyleSheets.VisualElementStylesData::none
	VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867 * ___none_1;

public:
	inline static int32_t get_offset_of_s_StyleValuePropertyReader_0() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867_StaticFields, ___s_StyleValuePropertyReader_0)); }
	inline StyleValuePropertyReader_t8D34F83135FC8E2E14A8A007B87201057EE90CFE * get_s_StyleValuePropertyReader_0() const { return ___s_StyleValuePropertyReader_0; }
	inline StyleValuePropertyReader_t8D34F83135FC8E2E14A8A007B87201057EE90CFE ** get_address_of_s_StyleValuePropertyReader_0() { return &___s_StyleValuePropertyReader_0; }
	inline void set_s_StyleValuePropertyReader_0(StyleValuePropertyReader_t8D34F83135FC8E2E14A8A007B87201057EE90CFE * value)
	{
		___s_StyleValuePropertyReader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StyleValuePropertyReader_0), (void*)value);
	}

	inline static int32_t get_offset_of_none_1() { return static_cast<int32_t>(offsetof(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867_StaticFields, ___none_1)); }
	inline VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867 * get_none_1() const { return ___none_1; }
	inline VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867 ** get_address_of_none_1() { return &___none_1; }
	inline void set_none_1(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867 * value)
	{
		___none_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___none_1), (void*)value);
	}
};


// UnityEngine.UIElements.ValidateCommandEvent
struct  ValidateCommandEvent_t98BB6C7F28CD7D693BE5AFBF0CCD66BDD7C75BB5  : public CommandEventBase_1_tEE5807F3456E82B26B261EF8BA01B26EED0B7BF7
{
public:

public:
};


// UnityEngine.UIElements.WheelEvent
struct  WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0  : public MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16
{
public:
	// UnityEngine.Vector3 UnityEngine.UIElements.WheelEvent::<delta>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CdeltaU3Ek__BackingField_28;

public:
	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0, ___U3CdeltaU3Ek__BackingField_28)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CdeltaU3Ek__BackingField_28() const { return ___U3CdeltaU3Ek__BackingField_28; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CdeltaU3Ek__BackingField_28() { return &___U3CdeltaU3Ek__BackingField_28; }
	inline void set_U3CdeltaU3Ek__BackingField_28(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CdeltaU3Ek__BackingField_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.UIElements.IVisualTreeUpdater[]
struct IVisualTreeUpdaterU5BU5D_t5904B964DFD38F10C5DC8BC4B79623B67337012E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_gshared (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * __this, bool ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.CommandEventBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandEventBase_1__ctor_m89F9F94189AF956517AF1C329123B5E420A33B67_gshared (CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// T UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mEE468B81D8E7C140F567D10FF7F5894A50EEEA57_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// T UnityEngine.UIElements.ObjectPool`1<System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectPool_1_Get_m3FDC1AFD2FA6F9F4C0D541DB29C3CE84B3C244D2_gshared (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_mB976106DA11B4155CBC654A4FEAF355280834D8B_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m5E67DE1CEC89ADB8A82937E2D0CB48A78F962FA3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.ObjectPool`1<System.Object>::Release(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m2F54E298C569A530D9BE145E89A85461969B0E79_gshared (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E * __this, RuntimeObject * ___element0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.ObjectPool`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_m4440121448D0B3D2EBC5FE2B0B69167D83A7C74D_gshared (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E * __this, int32_t ___maxSize0, const RuntimeMethod* method);
// T UnityEngine.UIElements.MouseEventBase`1<System.Object>::GetPooled(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MouseEventBase_1_GetPooled_m29CA64EDCA0FFC341A3C573F41A2B17A6D3D2939_gshared (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___systemEvent0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_Init_m2F72C210148733AE9A7E8B96E8583F0121743FD9_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1__ctor_mF7A8C1FA42FC9623153D11E6D5C5DAD8BEB5D973_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method);

// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, bool, const RuntimeMethod*))Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_gshared)(__this, ___obj0, method);
}
// System.Void Unity.Profiling.ProfilerMarker::Begin()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker_Begin_m590B79FC0E13EDAEFB8BF6522995C8FD56667D39_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::End()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker_End_mAC7099DA8D4864AA1D0289F368F85E31A9BFE502_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.CommandEventBase`1<UnityEngine.UIElements.ValidateCommandEvent>::.ctor()
inline void CommandEventBase_1__ctor_m8111E35E2D1EC2C170F257D50A7677DABD8E6232 (CommandEventBase_1_tEE5807F3456E82B26B261EF8BA01B26EED0B7BF7 * __this, const RuntimeMethod* method)
{
	((  void (*) (CommandEventBase_1_tEE5807F3456E82B26B261EF8BA01B26EED0B7BF7 *, const RuntimeMethod*))CommandEventBase_1__ctor_m89F9F94189AF956517AF1C329123B5E420A33B67_gshared)(__this, method);
}
// UnityEngine.UIElements.IPanel UnityEngine.UIElements.VisualElement::get_panel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_panel_m555AF5D742E93BFB933D9881BDE6F8E5EEC9E9F5 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___q1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___s2, const RuntimeMethod* method);
// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.VisualElement::get_yogaNode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * VisualElement_get_yogaNode_m16192DAD7796E10455EFE89B3237636B029B1BCE_inline (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.VisualElement::get_isLayoutManual()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool VisualElement_get_isLayoutManual_m580C870A5502A6D2435AF166B2143E91522E82DD_inline (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutX_mF57238B30D9F53826CA1B096157751A3A230FD0A (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_m49EFE25263C03A48D52499C3E9C097298E0EA3A6 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutY_m9793D202C8F86E32318F23AB5A58284DC397B50A (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_mCFDB9BD77334EF9CD896F64BE63C755777D7CCD5 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutWidth_m32FB2FA118FDC8ABD062A19A2CF18F2C8BF99562 (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_mC81EF602AC91E0C615C12FCE060254A461A152B8 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutHeight_m7FC3435DA4AE0739612FC06F8C116F0D7917FFE1 (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rect::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Rect_get_min_m17345668569CF57C5F1D2B2DADD05DD4220A5950 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.UIElements.VisualElement::MultiplyMatrix44Point2(UnityEngine.Matrix4x4,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  VisualElement_MultiplyMatrix44Point2_m9E25080F31A2CB7F1FD3F0F4824F1FF65FE6B80E (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___lhs0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rect::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Rect_get_max_m3BFB033D741F205FB04EF163A9D5785E7E020756 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single System.Math::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Min_mB77A95F6A1FE3B8E7CD784F20AF4E1C908B5E9CD (float ___val10, float ___val21, const RuntimeMethod* method);
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_m545895C37C1F738BBB653CA1F65E50FF1D197675 (float ___val10, float ___val21, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.Rect::MinMaxRect(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  Rect_MinMaxRect_m9513FDB332B24FB8B49202C7350FF7223477F54F (float ___xmin0, float ___ymin1, float ___xmax2, float ___ymax3, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement::UpdateBoundingBox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_UpdateBoundingBox_m430FD1066D9332EE6FDA9F63F225A695A26BD712 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement::UpdateWorldBoundingBox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_UpdateWorldBoundingBox_m7DA032519F5B3EA435E04B6C1473A727B17F189E (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.UIElements.VisualElement::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  VisualElement_get_rect_mEAE8654BF9B377AD3A4091F82B5FC237DFBAA496 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_IsNaN_m1ACB82FA5DC805F0F5015A1DA6B3DC447C963AFB (float ___f0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.Rect::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  Rect_get_zero_m4CF0F9AD904132829A6EFCA85A1BF52794E7E56B (const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::get_Count()
inline int32_t List_1_get_Count_m57F228A57F4615429556B31AC5AA7D291C85BC96_inline (List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::get_Item(System.Int32)
inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * List_1_get_Item_m1FEA648A1CD054FC002A2D7053576931C8C97DF3_inline (List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * (*) (List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Rect UnityEngine.UIElements.VisualElement::get_boundingBox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  VisualElement_get_boundingBox_m29FE47F028D0534C0CD9ED300D3A548F7001281A (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.UIElements.VisualElementExtensions::ChangeCoordinatesTo(UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.VisualElement,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  VisualElementExtensions_ChangeCoordinatesTo_m572C40F726FFB1C87C3DD939C73B7F8D82098099 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___src0, VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___dest1, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___rect2, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mFDFA74F66595FD2B8CE360183D1A92B575F0A76E (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_xMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_xMin_mD8F9BF59F4F33F9C3AB2FEFF32D8C16756B51E34 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_mA16D7C3C2F30F8608719073ED79028C11CE90983 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_xMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_xMax_m1775041FCD5CA22C77D75CC780D158CD2B31CEAF (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_m31EDC3262BE39D2F6464B15397F882237E6158C3 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_yMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_yMin_m58C137C81F3D098CF81498964E1B5987882883A7 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_m8AA5E92C322AF3FF571330F00579DA864F33341B (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_yMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_yMax_m4F1C5632CD4836853A22E979C810C279FBB20B95 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::get_worldTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  VisualElement_get_worldTransform_m9DCB8CC78B05E2048B80862F8B93403AFCC15944 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.UIElements.VisualElement::TransformAlignedRect(UnityEngine.Matrix4x4,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  VisualElement_TransformAlignedRect_m08EE763B8197A841E3F62C79EF5CF1E538E70AFE (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___lhc0, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___rect1, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.UIElements.VisualElement::get_layout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  VisualElement_get_layout_mA8251D78A62E5B0B3D5FC23F070360547F2C7D91 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.VisualElement::get_isWorldTransformDirty()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool VisualElement_get_isWorldTransformDirty_m00F99DF0A881C9A3CAD1840E35A6755254F55965_inline (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement::UpdateWorldTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_UpdateWorldTransform_m30E43E905559B48B7BBF0DBC8F721E1E2C1C5051 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.VisualElement::get_isWorldTransformInverseDirty()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool VisualElement_get_isWorldTransformInverseDirty_m6284AAFD1664F010FC64C6D57D37B705BBE1687D_inline (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_get_inverse_mBD3145C0D7977962E18C8B3BF63DD671F7917166 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement::set_isWorldTransformInverseDirty(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VisualElement_set_isWorldTransformInverseDirty_m3E6011695A655929F18D22C11E09BEF455E7299E_inline (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualElement::get_elementPanel()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * VisualElement_get_elementPanel_m3D19D620049F7622152DBEFC89D96167C5B49637_inline (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::get_duringLayoutPhase()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseVisualElementPanel_get_duringLayoutPhase_m1D93AB22FDF1BEC410E4A624DA3B9E5D76960A76_inline (BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElement::set_isWorldTransformDirty(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VisualElement_set_isWorldTransformDirty_m4C5652A1C9D25DE441A24E340EDA9B9E3FC34E36_inline (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_Translate_m73101FF77DD95B0B88F06EF9E58992F7B7CD2B36 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vector0, const RuntimeMethod* method);
// UnityEngine.UIElements.VisualElement/Hierarchy UnityEngine.UIElements.VisualElement::get_hierarchy()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  VisualElement_get_hierarchy_mA679C8FA30714F20ECA17FB5F73220E16277B517_inline (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * Hierarchy_get_parent_mB5F0897D8288DE7D36E376B44975CAE6649FBE54 (Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_op_Multiply_mF6693A950E1917204E356366892C3CCB0553436E (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___lhs0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rhs1, const RuntimeMethod* method);
// UnityEngine.UIElements.ITransform UnityEngine.UIElements.VisualElement::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_transform_mC49F3C12D773B5259862F0054B40E9DC22206CBF (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.BaseVisualElementPanel::SendEvent(UnityEngine.UIElements.EventBase,UnityEngine.UIElements.DispatchMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseVisualElementPanel_SendEvent_m844A0255D1245AC260701CD89DE80A63EC7C5130 (BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * __this, EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * ___e0, int32_t ___dispatchMode1, const RuntimeMethod* method);
// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::get_pseudoStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElement_get_pseudoStates_m598C95DB9E356B8DA90218EE2759693E97B52215 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.IResolvedStyle UnityEngine.UIElements.VisualElement::get_resolvedStyle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_resolvedStyle_mF1C63939BD256923B1553EFD2AA2E926CF4F8F6E (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Contains_mAD3D41C88795960F177088F847509C9DDA23B682 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___point0, const RuntimeMethod* method);
// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::get_computedStyle()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91  VisualElement_get_computedStyle_m199C8B371DB9F17017E3226DC2E76A17E1BFF54F_inline (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Overflow> UnityEngine.UIElements.ComputedStyle::get_overflow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_tA29AB324EA74732D2BE335C7247F4E9CF25D4809  ComputedStyle_get_overflow_m4D40307890211CEA10B541CCF31E7DEBF32D48D5 (ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91 * __this, const RuntimeMethod* method);
// T UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Overflow>::get_value()
inline int32_t StyleEnum_1_get_value_m02FCFEE40DC84680F81E39BF53E655481EBC76EA (StyleEnum_1_tA29AB324EA74732D2BE335C7247F4E9CF25D4809 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StyleEnum_1_tA29AB324EA74732D2BE335C7247F4E9CF25D4809 *, const RuntimeMethod*))StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109_gshared)(__this, method);
}
// System.Boolean UnityEngine.UIElements.VisualElement::get_isCompositeRoot()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool VisualElement_get_isCompositeRoot_mF49D5A0F7C42D8B8CC0286DEB9924B8E47372E3A_inline (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Visibility> UnityEngine.UIElements.ComputedStyle::get_visibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_t4B11CEAA22F18336A8EF4B14655E5A85F0632EF3  ComputedStyle_get_visibility_m83CBC9D84281A388753ED02A947C4F6A2FC2F44A (ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91 * __this, const RuntimeMethod* method);
// T UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Visibility>::get_value()
inline int32_t StyleEnum_1_get_value_m460120D6D56E76157D5859BE63CCCCE87CEF76F4 (StyleEnum_1_t4B11CEAA22F18336A8EF4B14655E5A85F0632EF3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StyleEnum_1_t4B11CEAA22F18336A8EF4B14655E5A85F0632EF3 *, const RuntimeMethod*))StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109_gshared)(__this, method);
}
// UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle> UnityEngine.UIElements.ComputedStyle::get_display()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_t93A0CA525A578F768A3BCE0E9347694D53490DA5  ComputedStyle_get_display_m866FC7F83E877F5D34D33B63F9622C963D95CF2F (ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91 * __this, const RuntimeMethod* method);
// T UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle>::get_value()
inline int32_t StyleEnum_1_get_value_mD55B5A837BCF05AD4538ECDC78B15A47B8E2DB17 (StyleEnum_1_t93A0CA525A578F768A3BCE0E9347694D53490DA5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StyleEnum_1_t93A0CA525A578F768A3BCE0E9347694D53490DA5 *, const RuntimeMethod*))StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
inline void List_1__ctor_m6C0DB901F8168ACF38155F620F1CB6E1F2DB0F85 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, int32_t, const RuntimeMethod*))List_1__ctor_mEE468B81D8E7C140F567D10FF7F5894A50EEEA57_gshared)(__this, ___capacity0, method);
}
// System.Void UnityEngine.PropertyName::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyName__ctor_mE0853FF14F978FFAF3EEE0B98DA973E17C962B37 (PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::.ctor()
inline void List_1__ctor_m631F779762BD1DCE947B95C5D99CBC53A63183DE (List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Int32 UnityEngine.UIElements.VisualElement/Hierarchy::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hierarchy_get_childCount_m55A62C949CD95C8E9A99C1F3E1BB66200E5D9F25 (Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * Hierarchy_get_Item_m920E811BEA80C655F08E77CFE6B47EA29B213DE8 (Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.VisualElement/Hierarchy::op_Equality(UnityEngine.UIElements.VisualElement/Hierarchy,UnityEngine.UIElements.VisualElement/Hierarchy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hierarchy_op_Equality_mA5C6AF77C3F896889D97DDC58DC1093862253093 (Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  ___x0, Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.VisualElement/Hierarchy::Equals(UnityEngine.UIElements.VisualElement/Hierarchy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hierarchy_Equals_m52AE91927F4AAFDBF9D7B44B1F0D423D22696756 (Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F * __this, Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.VisualElement/Hierarchy::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hierarchy_Equals_m616F3BA8BB9C14B75D463BE09C13631E16D2ECBD (Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.VisualElement/Hierarchy::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hierarchy_GetHashCode_m4F98157C3D8DBF7B093B614938CC85FA41E764A8 (Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::get_worldTransformInverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  VisualElement_get_worldTransformInverse_m66051C73171F0F1502BD6C894FBE79BBCA31DF1C (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rect::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Rect_get_position_m54A2ACD2F97988561D6C83FCEF7D082BC5226D4C (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_position(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_position_mD92DFF591D9C96CDD6AF22EA2052BB3D468D68ED (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Rect_get_size_m731642B8F03F6CE372A2C9E2E4A925450630606C (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Matrix4x4_MultiplyVector_mFED70C58FB201633483463CE64DBF0D0BE081863 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vector0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_size(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_size_m4618056983660063A74F40CCFF9A683933CB4C93 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.UIElements.VisualElementExtensions::LocalToWorld(UnityEngine.UIElements.VisualElement,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  VisualElementExtensions_LocalToWorld_m0399FEC2B3012DA1E387181272C34AC2039F6048 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___ele0, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___r1, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.UIElements.VisualElementExtensions::WorldToLocal(UnityEngine.UIElements.VisualElement,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  VisualElementExtensions_WorldToLocal_mDC4BA07127F0B14E683BB722ECE56D2BB096FFA2 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___ele0, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___r1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.FocusChangeDirection::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FocusChangeDirection__ctor_m15A9429FA21E496ED69B958E06DB904E3EDBF2E6 (FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::get_lastValue()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * FocusChangeDirection_get_lastValue_mAB9C4A5A59506E7566A23E58242836C5663AC1E9_inline (const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.FocusChangeDirection::op_Implicit(UnityEngine.UIElements.FocusChangeDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FocusChangeDirection_op_Implicit_mD10E84B4A5836C0C1AB70BE5E320543AF0AEA46E (FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * ___fcd0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.VisualElementFocusChangeDirection::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementFocusChangeDirection__ctor_m4778AD4F49F65A41D4A84B7DCC17DEB3B763A9D1 (VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 * __this, int32_t ___value0, const RuntimeMethod* method);
// T UnityEngine.UIElements.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>>::Get()
inline List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * ObjectPool_1_Get_m83999374C06606EB69656E7BB4D3D8C6491DD2A8 (ObjectPool_1_t963B7012C6050595BA0DD41B91E1449B18E47483 * __this, const RuntimeMethod* method)
{
	return ((  List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * (*) (ObjectPool_1_t963B7012C6050595BA0DD41B91E1449B18E47483 *, const RuntimeMethod*))ObjectPool_1_Get_m3FDC1AFD2FA6F9F4C0D541DB29C3CE84B3C244D2_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::get_Capacity()
inline int32_t List_1_get_Capacity_mEFA29A1794E6DB5C219BCE378075DEFCE60AD3EC (List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 *, const RuntimeMethod*))List_1_get_Capacity_mB976106DA11B4155CBC654A4FEAF355280834D8B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_mE40C9BCF31A394E713DA8CF6D688C38E7FA66BD3 (List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 *, int32_t, const RuntimeMethod*))List_1_set_Capacity_m5E67DE1CEC89ADB8A82937E2D0CB48A78F962FA3_gshared)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::Clear()
inline void List_1_Clear_m77739217B494F73058F22A1F9F0869FA96C70594 (List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void UnityEngine.UIElements.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>>::Release(T)
inline void ObjectPool_1_Release_mE2A09982C94290F8B7AF32C73333A162A864C19C (ObjectPool_1_t963B7012C6050595BA0DD41B91E1449B18E47483 * __this, List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * ___element0, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t963B7012C6050595BA0DD41B91E1449B18E47483 *, List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 *, const RuntimeMethod*))ObjectPool_1_Release_m2F54E298C569A530D9BE145E89A85461969B0E79_gshared)(__this, ___element0, method);
}
// System.Void UnityEngine.UIElements.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>>::.ctor(System.Int32)
inline void ObjectPool_1__ctor_mABDA9464D05D84474D01CF50AA4185DA530BFB5F (ObjectPool_1_t963B7012C6050595BA0DD41B91E1449B18E47483 * __this, int32_t ___maxSize0, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t963B7012C6050595BA0DD41B91E1449B18E47483 *, int32_t, const RuntimeMethod*))ObjectPool_1__ctor_m4440121448D0B3D2EBC5FE2B0B69167D83A7C74D_gshared)(__this, ___maxSize0, method);
}
// UnityEngine.UIElements.IVisualTreeUpdater UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::get_Item(UnityEngine.UIElements.VisualTreeUpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdaterArray_get_Item_m7EDA64425B194BC3004BE74C7D3F8D37FACE3A28 (UpdaterArray_t93CA64534EAECBB98F27909516A929F0182E96F6 * __this, int32_t ___phase0, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.IVisualTreeUpdater UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdaterArray_get_Item_m29DE9853F5765D6F552BD1F068BADCAD599EC262 (UpdaterArray_t93CA64534EAECBB98F27909516A929F0182E96F6 * __this, int32_t ___index0, const RuntimeMethod* method);
// T UnityEngine.UIElements.MouseEventBase`1<UnityEngine.UIElements.WheelEvent>::GetPooled(UnityEngine.Event)
inline WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * MouseEventBase_1_GetPooled_m83D2C2965FAFCBBCC4DCE28FF42C11E02F5BC9B5 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___systemEvent0, const RuntimeMethod* method)
{
	return ((  WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * (*) (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *, const RuntimeMethod*))MouseEventBase_1_GetPooled_m29CA64EDCA0FFC341A3C573F41A2B17A6D3D2939_gshared)(___systemEvent0, method);
}
// System.Void UnityEngine.UIElements.EventBase::set_imguiEvent(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_imguiEvent_mD693DAF0735050C06640E8C9DD5683E210D18E15 (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Event::get_delta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Event_get_delta_m552632C8BD6AFB1FF814636177843C6E28E87B85 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.WheelEvent::set_delta(UnityEngine.Vector3)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WheelEvent_set_delta_m4BC73264496DA88BA644EA0855CE9C490A15E9AF_inline (WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.MouseEventBase`1<UnityEngine.UIElements.WheelEvent>::Init()
inline void MouseEventBase_1_Init_m4AFDA3322FAD8DB99CA8643F0A6B138FAE528503 (MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16 * __this, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16 *, const RuntimeMethod*))MouseEventBase_1_Init_m2F72C210148733AE9A7E8B96E8583F0121743FD9_gshared)(__this, method);
}
// System.Void UnityEngine.UIElements.WheelEvent::LocalInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelEvent_LocalInit_m8B40B6DA941275DA7E35CAAEF20A85E1B03B0928 (WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.MouseEventBase`1<UnityEngine.UIElements.WheelEvent>::.ctor()
inline void MouseEventBase_1__ctor_m6C60858453010A76FDBB5463E134641B6EF1475E (MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16 * __this, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t2183F778BFD54385740E030A33C254BE75E20C16 *, const RuntimeMethod*))MouseEventBase_1__ctor_mF7A8C1FA42FC9623153D11E6D5C5DAD8BEB5D973_gshared)(__this, method);
}
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027 (intptr_t ___value0, const RuntimeMethod* method);
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.YogaNode::MeasureInternal(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  YogaNode_MeasureInternal_mD8D5E33930941196D36E4689267D168E4F4EC39D (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.YogaNode::BaselineInternal(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_BaselineInternal_m3371DB16710509FE9E0B83AC42EBEB8432ABDC26 (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, float ___height2, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetLeft(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetLeft_mF2D7873317C43E67BFB6E12DFA83D91BA1665C14 (intptr_t ___node0, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetTop(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetTop_mF266D42D9DC6974DE17FEA0599088960F76074DF (intptr_t ___node0, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetWidth(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetWidth_mE565C735D372CE7814D8BF015EACBCCE38DA755B (intptr_t ___node0, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetHeight(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetHeight_mCCD0DB7B7B43AC12573EB92890D8320D1905B74D (intptr_t ___node0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  MeasureFunction_Invoke_mCC3963DDDE51AF75E4795CF0E981093A55CB2D8B (MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * __this, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method);
// System.Single UnityEngine.Yoga.BaselineFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaselineFunction_Invoke_mDFF741E9FD7678B6F0C4C23DB4F9BA83A2905558 (BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * __this, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, float ___height2, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::Internal_Begin(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerMarker_Internal_Begin_m79272E72708A53AFDEEEB81CF66C7D62920AC5B5 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::Internal_End(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerMarker_Internal_End_mE25FE55A23DF111614CE890359972D96A65B499A (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.ProfilerMarker::Internal_Create(System.String,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerMarker_Internal_Create_m92F2A7651D4BF3F3D0CB62078DD79B71839FA370 (String_t* ___name0, uint16_t ___flags1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseGraphicsResourcesRecreate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseGraphicsResourcesRecreate_mB64653A9A2F10D8477948B0F6CABD41516821289 (bool ___recreate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utility_RaiseGraphicsResourcesRecreate_mB64653A9A2F10D8477948B0F6CABD41516821289_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Utility_RaiseGraphicsResourcesRecreate_mB64653A9A2F10D8477948B0F6CABD41516821289_RuntimeMethod_var);
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * G_B2_0 = NULL;
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_il2cpp_TypeInfo_var);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_0 = ((Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_il2cpp_TypeInfo_var))->get_GraphicsResourcesRecreate_0();
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		bool L_2 = ___recreate0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(G_B2_0, L_2, /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseEngineUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseEngineUpdate_mA1B27628894F519755E305EEDE906C0F39219460 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utility_RaiseEngineUpdate_mA1B27628894F519755E305EEDE906C0F39219460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Utility_RaiseEngineUpdate_mA1B27628894F519755E305EEDE906C0F39219460_RuntimeMethod_var);
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_il2cpp_TypeInfo_var);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = ((Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_il2cpp_TypeInfo_var))->get_EngineUpdate_1();
		V_0 = (bool)((!(((RuntimeObject*)(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_il2cpp_TypeInfo_var);
		ProfilerMarker_Begin_m590B79FC0E13EDAEFB8BF6522995C8FD56667D39_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(((Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_il2cpp_TypeInfo_var))->get_address_of_s_MarkerRaiseEngineUpdate_3()), /*hidden argument*/NULL);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_2 = ((Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_il2cpp_TypeInfo_var))->get_EngineUpdate_1();
		NullCheck(L_2);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_2, /*hidden argument*/NULL);
		ProfilerMarker_End_mAC7099DA8D4864AA1D0289F368F85E31A9BFE502_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(((Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_il2cpp_TypeInfo_var))->get_address_of_s_MarkerRaiseEngineUpdate_3()), /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseFlushPendingResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseFlushPendingResources_mF574684D4347F0DA7CD949B6C224625860B9A0C3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utility_RaiseFlushPendingResources_mF574684D4347F0DA7CD949B6C224625860B9A0C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Utility_RaiseFlushPendingResources_mF574684D4347F0DA7CD949B6C224625860B9A0C3_RuntimeMethod_var);
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B2_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_il2cpp_TypeInfo_var);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = ((Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_il2cpp_TypeInfo_var))->get_FlushPendingResources_2();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(G_B2_0, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility__cctor_m3E9C809A88275DAA163BA2116744980D66266801 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utility__cctor_m3E9C809A88275DAA163BA2116744980D66266801_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Utility__cctor_m3E9C809A88275DAA163BA2116744980D66266801_RuntimeMethod_var);
	{
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_0), _stringLiteral7B8892C341B2169B5D289B9D623022D4D45F9D32, /*hidden argument*/NULL);
		((Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t338D87AA8BF66821714589DCAB392FCF40B48B04_il2cpp_TypeInfo_var))->set_s_MarkerRaiseEngineUpdate_3(L_0);
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
// System.Void UnityEngine.UIElements.ValidateCommandEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateCommandEvent__ctor_m201CB22C32A6082234311A13CA86AFA69B5F1713 (ValidateCommandEvent_t98BB6C7F28CD7D693BE5AFBF0CCD66BDD7C75BB5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValidateCommandEvent__ctor_m201CB22C32A6082234311A13CA86AFA69B5F1713_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(ValidateCommandEvent__ctor_m201CB22C32A6082234311A13CA86AFA69B5F1713_RuntimeMethod_var);
	{
		CommandEventBase_1__ctor_m8111E35E2D1EC2C170F257D50A7677DABD8E6232(__this, /*hidden argument*/CommandEventBase_1__ctor_m8111E35E2D1EC2C170F257D50A7677DABD8E6232_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.UIElements.VisualElement::get_isCompositeRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElement_get_isCompositeRoot_mF49D5A0F7C42D8B8CC0286DEB9924B8E47372E3A (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_get_isCompositeRoot_mF49D5A0F7C42D8B8CC0286DEB9924B8E47372E3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_get_isCompositeRoot_mF49D5A0F7C42D8B8CC0286DEB9924B8E47372E3A_RuntimeMethod_var);
	{
		bool L_0 = __this->get_U3CisCompositeRootU3Ek__BackingField_3();
		return L_0;
	}
}
// UnityEngine.UIElements.FocusController UnityEngine.UIElements.VisualElement::get_focusController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 * VisualElement_get_focusController_mF54741800E59EB4866355F4FC2DFEB5DC2C11C63 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_get_focusController_mF54741800E59EB4866355F4FC2DFEB5DC2C11C63_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_get_focusController_mF54741800E59EB4866355F4FC2DFEB5DC2C11C63_RuntimeMethod_var);
	FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 * V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 * G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = VisualElement_get_panel_m555AF5D742E93BFB933D9881BDE6F8E5EEC9E9F5(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = ((FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 *)(NULL));
		goto IL_0013;
	}

IL_000e:
	{
		NullCheck(G_B2_0);
		FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 * L_2 = InterfaceFuncInvoker0< FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 * >::Invoke(3 /* UnityEngine.UIElements.FocusController UnityEngine.UIElements.IPanel::get_focusController() */, IPanel_t3AAE62317DEE1C12E547C78C27556B659DE4F20A_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		goto IL_0016;
	}

IL_0016:
	{
		FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.UIElements.ITransform UnityEngine.UIElements.VisualElement::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_transform_mC49F3C12D773B5259862F0054B40E9DC22206CBF (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_get_transform_mC49F3C12D773B5259862F0054B40E9DC22206CBF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_get_transform_mC49F3C12D773B5259862F0054B40E9DC22206CBF_RuntimeMethod_var);
	RuntimeObject* V_0 = NULL;
	{
		V_0 = __this;
		goto IL_0005;
	}

IL_0005:
	{
		RuntimeObject* L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::UnityEngine.UIElements.ITransform.get_matrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  VisualElement_UnityEngine_UIElements_ITransform_get_matrix_m83118700B9A8F2E9F664F5EE915493C531EFF04D (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_UnityEngine_UIElements_ITransform_get_matrix_m83118700B9A8F2E9F664F5EE915493C531EFF04D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_UnityEngine_UIElements_ITransform_get_matrix_m83118700B9A8F2E9F664F5EE915493C531EFF04D_RuntimeMethod_var);
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_Position_7();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = __this->get_m_Rotation_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = __this->get_m_Scale_9();
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_3 = Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_001b;
	}

IL_001b:
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.UIElements.VisualElement::get_isLayoutManual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElement_get_isLayoutManual_m580C870A5502A6D2435AF166B2143E91522E82DD (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_get_isLayoutManual_m580C870A5502A6D2435AF166B2143E91522E82DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_get_isLayoutManual_m580C870A5502A6D2435AF166B2143E91522E82DD_RuntimeMethod_var);
	{
		bool L_0 = __this->get_U3CisLayoutManualU3Ek__BackingField_10();
		return L_0;
	}
}
// UnityEngine.Rect UnityEngine.UIElements.VisualElement::get_layout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  VisualElement_get_layout_mA8251D78A62E5B0B3D5FC23F070360547F2C7D91 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_get_layout_mA8251D78A62E5B0B3D5FC23F070360547F2C7D91_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_get_layout_mA8251D78A62E5B0B3D5FC23F070360547F2C7D91_RuntimeMethod_var);
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B3_0 = 0;
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_0 = __this->get_m_Layout_11();
		V_0 = L_0;
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_1 = VisualElement_get_yogaNode_m16192DAD7796E10455EFE89B3237636B029B1BCE_inline(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		bool L_2 = VisualElement_get_isLayoutManual_m580C870A5502A6D2435AF166B2143E91522E82DD_inline(__this, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_006e;
		}
	}
	{
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_4 = VisualElement_get_yogaNode_m16192DAD7796E10455EFE89B3237636B029B1BCE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		float L_5 = YogaNode_get_LayoutX_mF57238B30D9F53826CA1B096157751A3A230FD0A(L_4, /*hidden argument*/NULL);
		Rect_set_x_m49EFE25263C03A48D52499C3E9C097298E0EA3A6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), L_5, /*hidden argument*/NULL);
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_6 = VisualElement_get_yogaNode_m16192DAD7796E10455EFE89B3237636B029B1BCE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		float L_7 = YogaNode_get_LayoutY_m9793D202C8F86E32318F23AB5A58284DC397B50A(L_6, /*hidden argument*/NULL);
		Rect_set_y_mCFDB9BD77334EF9CD896F64BE63C755777D7CCD5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), L_7, /*hidden argument*/NULL);
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_8 = VisualElement_get_yogaNode_m16192DAD7796E10455EFE89B3237636B029B1BCE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		float L_9 = YogaNode_get_LayoutWidth_m32FB2FA118FDC8ABD062A19A2CF18F2C8BF99562(L_8, /*hidden argument*/NULL);
		Rect_set_width_mC81EF602AC91E0C615C12FCE060254A461A152B8((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), L_9, /*hidden argument*/NULL);
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_10 = VisualElement_get_yogaNode_m16192DAD7796E10455EFE89B3237636B029B1BCE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		float L_11 = YogaNode_get_LayoutHeight_m7FC3435DA4AE0739612FC06F8C116F0D7917FFE1(L_10, /*hidden argument*/NULL);
		Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), L_11, /*hidden argument*/NULL);
	}

IL_006e:
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_12 = V_0;
		V_2 = L_12;
		goto IL_0072;
	}

IL_0072:
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_13 = V_2;
		return L_13;
	}
}
// UnityEngine.Rect UnityEngine.UIElements.VisualElement::TransformAlignedRect(UnityEngine.Matrix4x4,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  VisualElement_TransformAlignedRect_m08EE763B8197A841E3F62C79EF5CF1E538E70AFE (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___lhc0, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___rect1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_TransformAlignedRect_m08EE763B8197A841E3F62C79EF5CF1E538E70AFE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_TransformAlignedRect_m08EE763B8197A841E3F62C79EF5CF1E538E70AFE_RuntimeMethod_var);
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_0 = ___lhc0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = Rect_get_min_m17345668569CF57C5F1D2B2DADD05DD4220A5950((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___rect1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = VisualElement_MultiplyMatrix44Point2_m9E25080F31A2CB7F1FD3F0F4824F1FF65FE6B80E(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_3 = ___lhc0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = Rect_get_max_m3BFB033D741F205FB04EF163A9D5785E7E020756((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___rect1), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = VisualElement_MultiplyMatrix44Point2_m9E25080F31A2CB7F1FD3F0F4824F1FF65FE6B80E(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = V_0;
		float L_7 = L_6.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = V_1;
		float L_9 = L_8.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		float L_10 = Math_Min_mB77A95F6A1FE3B8E7CD784F20AF4E1C908B5E9CD(L_7, L_9, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = V_0;
		float L_12 = L_11.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = V_1;
		float L_14 = L_13.get_y_1();
		float L_15 = Math_Min_mB77A95F6A1FE3B8E7CD784F20AF4E1C908B5E9CD(L_12, L_14, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = V_0;
		float L_17 = L_16.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = V_1;
		float L_19 = L_18.get_x_0();
		float L_20 = Math_Max_m545895C37C1F738BBB653CA1F65E50FF1D197675(L_17, L_19, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_21 = V_0;
		float L_22 = L_21.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_23 = V_1;
		float L_24 = L_23.get_y_1();
		float L_25 = Math_Max_m545895C37C1F738BBB653CA1F65E50FF1D197675(L_22, L_24, /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_26 = Rect_MinMaxRect_m9513FDB332B24FB8B49202C7350FF7223477F54F(L_10, L_15, L_20, L_25, /*hidden argument*/NULL);
		V_2 = L_26;
		goto IL_0069;
	}

IL_0069:
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_27 = V_2;
		return L_27;
	}
}
// UnityEngine.Vector2 UnityEngine.UIElements.VisualElement::MultiplyMatrix44Point2(UnityEngine.Matrix4x4,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  VisualElement_MultiplyMatrix44Point2_m9E25080F31A2CB7F1FD3F0F4824F1FF65FE6B80E (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___lhs0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___point1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_MultiplyMatrix44Point2_m9E25080F31A2CB7F1FD3F0F4824F1FF65FE6B80E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_MultiplyMatrix44Point2_m9E25080F31A2CB7F1FD3F0F4824F1FF65FE6B80E_RuntimeMethod_var);
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_0 = ___lhs0;
		float L_1 = L_0.get_m00_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___point1;
		float L_3 = L_2.get_x_0();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_4 = ___lhs0;
		float L_5 = L_4.get_m01_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = ___point1;
		float L_7 = L_6.get_y_1();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_8 = ___lhs0;
		float L_9 = L_8.get_m03_12();
		(&V_0)->set_x_0(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)L_9)));
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_10 = ___lhs0;
		float L_11 = L_10.get_m10_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = ___point1;
		float L_13 = L_12.get_x_0();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_14 = ___lhs0;
		float L_15 = L_14.get_m11_5();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = ___point1;
		float L_17 = L_16.get_y_1();
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_18 = ___lhs0;
		float L_19 = L_18.get_m13_13();
		(&V_0)->set_y_1(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_13)), (float)((float)il2cpp_codegen_multiply((float)L_15, (float)L_17)))), (float)L_19)));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_20 = V_0;
		V_1 = L_20;
		goto IL_0057;
	}

IL_0057:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_21 = V_1;
		return L_21;
	}
}
// UnityEngine.Rect UnityEngine.UIElements.VisualElement::get_boundingBox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  VisualElement_get_boundingBox_m29FE47F028D0534C0CD9ED300D3A548F7001281A (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_get_boundingBox_m29FE47F028D0534C0CD9ED300D3A548F7001281A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_get_boundingBox_m29FE47F028D0534C0CD9ED300D3A548F7001281A_RuntimeMethod_var);
	bool V_0 = false;
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0 = __this->get_isBoundingBoxDirty_12();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		VisualElement_UpdateBoundingBox_m430FD1066D9332EE6FDA9F63F225A695A26BD712(__this, /*hidden argument*/NULL);
		__this->set_isBoundingBoxDirty_12((bool)0);
	}

IL_001b:
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_2 = __this->get_m_BoundingBox_13();
		V_1 = L_2;
		goto IL_0024;
	}

IL_0024:
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.Rect UnityEngine.UIElements.VisualElement::get_worldBoundingBox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  VisualElement_get_worldBoundingBox_mEE24B646B189CA7A1204CEDB1B64036F205C29A9 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_get_worldBoundingBox_mEE24B646B189CA7A1204CEDB1B64036F205C29A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_get_worldBoundingBox_mEE24B646B189CA7A1204CEDB1B64036F205C29A9_RuntimeMethod_var);
	bool V_0 = false;
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		bool L_0 = __this->get_isWorldBoundingBoxDirty_14();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = __this->get_isBoundingBoxDirty_12();
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		VisualElement_UpdateWorldBoundingBox_m7DA032519F5B3EA435E04B6C1473A727B17F189E(__this, /*hidden argument*/NULL);
		__this->set_isWorldBoundingBoxDirty_14((bool)0);
	}

IL_0026:
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_3 = __this->get_m_WorldBoundingBox_15();
		V_1 = L_3;
		goto IL_002f;
	}

IL_002f:
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.UIElements.VisualElement::UpdateBoundingBox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_UpdateBoundingBox_m430FD1066D9332EE6FDA9F63F225A695A26BD712 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_UpdateBoundingBox_m430FD1066D9332EE6FDA9F63F225A695A26BD712_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_UpdateBoundingBox_m430FD1066D9332EE6FDA9F63F225A695A26BD712_RuntimeMethod_var);
	bool V_0 = false;
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	int32_t G_B5_0 = 0;
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_0 = VisualElement_get_rect_mEAE8654BF9B377AD3A4091F82B5FC237DFBAA496(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		float L_1 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_1), /*hidden argument*/NULL);
		bool L_2 = Single_IsNaN_m1ACB82FA5DC805F0F5015A1DA6B3DC447C963AFB(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0055;
		}
	}
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_3 = VisualElement_get_rect_mEAE8654BF9B377AD3A4091F82B5FC237DFBAA496(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_1), /*hidden argument*/NULL);
		bool L_5 = Single_IsNaN_m1ACB82FA5DC805F0F5015A1DA6B3DC447C963AFB(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0055;
		}
	}
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_6 = VisualElement_get_rect_mEAE8654BF9B377AD3A4091F82B5FC237DFBAA496(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_1), /*hidden argument*/NULL);
		bool L_8 = Single_IsNaN_m1ACB82FA5DC805F0F5015A1DA6B3DC447C963AFB(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0055;
		}
	}
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_9 = VisualElement_get_rect_mEAE8654BF9B377AD3A4091F82B5FC237DFBAA496(__this, /*hidden argument*/NULL);
		V_1 = L_9;
		float L_10 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_1), /*hidden argument*/NULL);
		bool L_11 = Single_IsNaN_m1ACB82FA5DC805F0F5015A1DA6B3DC447C963AFB(L_10, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0056;
	}

IL_0055:
	{
		G_B5_0 = 1;
	}

IL_0056:
	{
		V_0 = (bool)G_B5_0;
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_006c;
		}
	}
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_13 = Rect_get_zero_m4CF0F9AD904132829A6EFCA85A1BF52794E7E56B(/*hidden argument*/NULL);
		__this->set_m_BoundingBox_13(L_13);
		goto IL_0155;
	}

IL_006c:
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_14 = VisualElement_get_rect_mEAE8654BF9B377AD3A4091F82B5FC237DFBAA496(__this, /*hidden argument*/NULL);
		__this->set_m_BoundingBox_13(L_14);
		List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * L_15 = __this->get_m_Children_31();
		NullCheck(L_15);
		int32_t L_16 = List_1_get_Count_m57F228A57F4615429556B31AC5AA7D291C85BC96_inline(L_15, /*hidden argument*/List_1_get_Count_m57F228A57F4615429556B31AC5AA7D291C85BC96_RuntimeMethod_var);
		V_2 = L_16;
		V_3 = 0;
		goto IL_0147;
	}

IL_008c:
	{
		List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * L_17 = __this->get_m_Children_31();
		int32_t L_18 = V_3;
		NullCheck(L_17);
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_19 = List_1_get_Item_m1FEA648A1CD054FC002A2D7053576931C8C97DF3_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_m1FEA648A1CD054FC002A2D7053576931C8C97DF3_RuntimeMethod_var);
		NullCheck(L_19);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_20 = VisualElement_get_boundingBox_m29FE47F028D0534C0CD9ED300D3A548F7001281A(L_19, /*hidden argument*/NULL);
		V_4 = L_20;
		List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * L_21 = __this->get_m_Children_31();
		int32_t L_22 = V_3;
		NullCheck(L_21);
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_23 = List_1_get_Item_m1FEA648A1CD054FC002A2D7053576931C8C97DF3_inline(L_21, L_22, /*hidden argument*/List_1_get_Item_m1FEA648A1CD054FC002A2D7053576931C8C97DF3_RuntimeMethod_var);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_24 = V_4;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_25 = VisualElementExtensions_ChangeCoordinatesTo_m572C40F726FFB1C87C3DD939C73B7F8D82098099(L_23, __this, L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_26 = __this->get_address_of_m_BoundingBox_13();
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_27 = __this->get_address_of_m_BoundingBox_13();
		float L_28 = Rect_get_xMin_mFDFA74F66595FD2B8CE360183D1A92B575F0A76E((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_27, /*hidden argument*/NULL);
		float L_29 = Rect_get_xMin_mFDFA74F66595FD2B8CE360183D1A92B575F0A76E((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_4), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		float L_30 = Math_Min_mB77A95F6A1FE3B8E7CD784F20AF4E1C908B5E9CD(L_28, L_29, /*hidden argument*/NULL);
		Rect_set_xMin_mD8F9BF59F4F33F9C3AB2FEFF32D8C16756B51E34((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_26, L_30, /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_31 = __this->get_address_of_m_BoundingBox_13();
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_32 = __this->get_address_of_m_BoundingBox_13();
		float L_33 = Rect_get_xMax_mA16D7C3C2F30F8608719073ED79028C11CE90983((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_32, /*hidden argument*/NULL);
		float L_34 = Rect_get_xMax_mA16D7C3C2F30F8608719073ED79028C11CE90983((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_4), /*hidden argument*/NULL);
		float L_35 = Math_Max_m545895C37C1F738BBB653CA1F65E50FF1D197675(L_33, L_34, /*hidden argument*/NULL);
		Rect_set_xMax_m1775041FCD5CA22C77D75CC780D158CD2B31CEAF((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_31, L_35, /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_36 = __this->get_address_of_m_BoundingBox_13();
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_37 = __this->get_address_of_m_BoundingBox_13();
		float L_38 = Rect_get_yMin_m31EDC3262BE39D2F6464B15397F882237E6158C3((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_37, /*hidden argument*/NULL);
		float L_39 = Rect_get_yMin_m31EDC3262BE39D2F6464B15397F882237E6158C3((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_4), /*hidden argument*/NULL);
		float L_40 = Math_Min_mB77A95F6A1FE3B8E7CD784F20AF4E1C908B5E9CD(L_38, L_39, /*hidden argument*/NULL);
		Rect_set_yMin_m58C137C81F3D098CF81498964E1B5987882883A7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_36, L_40, /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_41 = __this->get_address_of_m_BoundingBox_13();
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_42 = __this->get_address_of_m_BoundingBox_13();
		float L_43 = Rect_get_yMax_m8AA5E92C322AF3FF571330F00579DA864F33341B((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_42, /*hidden argument*/NULL);
		float L_44 = Rect_get_yMax_m8AA5E92C322AF3FF571330F00579DA864F33341B((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_4), /*hidden argument*/NULL);
		float L_45 = Math_Max_m545895C37C1F738BBB653CA1F65E50FF1D197675(L_43, L_44, /*hidden argument*/NULL);
		Rect_set_yMax_m4F1C5632CD4836853A22E979C810C279FBB20B95((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_41, L_45, /*hidden argument*/NULL);
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_0147:
	{
		int32_t L_47 = V_3;
		int32_t L_48 = V_2;
		V_5 = (bool)((((int32_t)L_47) < ((int32_t)L_48))? 1 : 0);
		bool L_49 = V_5;
		if (L_49)
		{
			goto IL_008c;
		}
	}
	{
	}

IL_0155:
	{
		__this->set_isWorldBoundingBoxDirty_14((bool)1);
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualElement::UpdateWorldBoundingBox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_UpdateWorldBoundingBox_m7DA032519F5B3EA435E04B6C1473A727B17F189E (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_UpdateWorldBoundingBox_m7DA032519F5B3EA435E04B6C1473A727B17F189E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_UpdateWorldBoundingBox_m7DA032519F5B3EA435E04B6C1473A727B17F189E_RuntimeMethod_var);
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_0 = VisualElement_get_worldTransform_m9DCB8CC78B05E2048B80862F8B93403AFCC15944(__this, /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_1 = VisualElement_get_boundingBox_m29FE47F028D0534C0CD9ED300D3A548F7001281A(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_il2cpp_TypeInfo_var);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_2 = VisualElement_TransformAlignedRect_m08EE763B8197A841E3F62C79EF5CF1E538E70AFE(L_0, L_1, /*hidden argument*/NULL);
		__this->set_m_WorldBoundingBox_15(L_2);
		return;
	}
}
// UnityEngine.Rect UnityEngine.UIElements.VisualElement::get_worldBound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  VisualElement_get_worldBound_mBA0BC2D573E8799117BACCCAEB00A8856096B678 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_get_worldBound_mBA0BC2D573E8799117BACCCAEB00A8856096B678_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_get_worldBound_mBA0BC2D573E8799117BACCCAEB00A8856096B678_RuntimeMethod_var);
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_0 = VisualElement_get_worldTransform_m9DCB8CC78B05E2048B80862F8B93403AFCC15944(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_1 = V_0;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_2 = VisualElement_get_rect_mEAE8654BF9B377AD3A4091F82B5FC237DFBAA496(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_il2cpp_TypeInfo_var);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_3 = VisualElement_TransformAlignedRect_m08EE763B8197A841E3F62C79EF5CF1E538E70AFE(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Rect UnityEngine.UIElements.VisualElement::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  VisualElement_get_rect_mEAE8654BF9B377AD3A4091F82B5FC237DFBAA496 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_get_rect_mEAE8654BF9B377AD3A4091F82B5FC237DFBAA496_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_get_rect_mEAE8654BF9B377AD3A4091F82B5FC237DFBAA496_RuntimeMethod_var);
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_0 = VisualElement_get_layout_mA8251D78A62E5B0B3D5FC23F070360547F2C7D91(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_2 = VisualElement_get_layout_mA8251D78A62E5B0B3D5FC23F070360547F2C7D91(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_4), (0.0f), (0.0f), L_1, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_002f;
	}

IL_002f:
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_5 = V_1;
		return L_5;
	}
}
// System.Boolean UnityEngine.UIElements.VisualElement::get_isWorldTransformDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElement_get_isWorldTransformDirty_m00F99DF0A881C9A3CAD1840E35A6755254F55965 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_get_isWorldTransformDirty_m00F99DF0A881C9A3CAD1840E35A6755254F55965_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_get_isWorldTransformDirty_m00F99DF0A881C9A3CAD1840E35A6755254F55965_RuntimeMethod_var);
	{
		bool L_0 = __this->get_U3CisWorldTransformDirtyU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.VisualElement::set_isWorldTransformDirty(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_set_isWorldTransformDirty_m4C5652A1C9D25DE441A24E340EDA9B9E3FC34E36 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_set_isWorldTransformDirty_m4C5652A1C9D25DE441A24E340EDA9B9E3FC34E36_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_set_isWorldTransformDirty_m4C5652A1C9D25DE441A24E340EDA9B9E3FC34E36_RuntimeMethod_var);
	{
		bool L_0 = ___value0;
		__this->set_U3CisWorldTransformDirtyU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.VisualElement::get_isWorldTransformInverseDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElement_get_isWorldTransformInverseDirty_m6284AAFD1664F010FC64C6D57D37B705BBE1687D (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_get_isWorldTransformInverseDirty_m6284AAFD1664F010FC64C6D57D37B705BBE1687D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_get_isWorldTransformInverseDirty_m6284AAFD1664F010FC64C6D57D37B705BBE1687D_RuntimeMethod_var);
	{
		bool L_0 = __this->get_U3CisWorldTransformInverseDirtyU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.VisualElement::set_isWorldTransformInverseDirty(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_set_isWorldTransformInverseDirty_m3E6011695A655929F18D22C11E09BEF455E7299E (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_set_isWorldTransformInverseDirty_m3E6011695A655929F18D22C11E09BEF455E7299E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_set_isWorldTransformInverseDirty_m3E6011695A655929F18D22C11E09BEF455E7299E_RuntimeMethod_var);
	{
		bool L_0 = ___value0;
		__this->set_U3CisWorldTransformInverseDirtyU3Ek__BackingField_17(L_0);
		return;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::get_worldTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  VisualElement_get_worldTransform_m9DCB8CC78B05E2048B80862F8B93403AFCC15944 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_get_worldTransform_m9DCB8CC78B05E2048B80862F8B93403AFCC15944_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_get_worldTransform_m9DCB8CC78B05E2048B80862F8B93403AFCC15944_RuntimeMethod_var);
	bool V_0 = false;
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0 = VisualElement_get_isWorldTransformDirty_m00F99DF0A881C9A3CAD1840E35A6755254F55965_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		VisualElement_UpdateWorldTransform_m30E43E905559B48B7BBF0DBC8F721E1E2C1C5051(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_2 = __this->get_m_WorldTransformCache_18();
		V_1 = L_2;
		goto IL_001d;
	}

IL_001d:
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::get_worldTransformInverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  VisualElement_get_worldTransformInverse_m66051C73171F0F1502BD6C894FBE79BBCA31DF1C (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_get_worldTransformInverse_m66051C73171F0F1502BD6C894FBE79BBCA31DF1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_get_worldTransformInverse_m66051C73171F0F1502BD6C894FBE79BBCA31DF1C_RuntimeMethod_var);
	bool V_0 = false;
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B3_0 = 0;
	{
		bool L_0 = VisualElement_get_isWorldTransformDirty_m00F99DF0A881C9A3CAD1840E35A6755254F55965_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = VisualElement_get_isWorldTransformInverseDirty_m6284AAFD1664F010FC64C6D57D37B705BBE1687D_inline(__this, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_3 = VisualElement_get_worldTransform_m9DCB8CC78B05E2048B80862F8B93403AFCC15944(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_4 = Matrix4x4_get_inverse_mBD3145C0D7977962E18C8B3BF63DD671F7917166((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_1), /*hidden argument*/NULL);
		__this->set_m_WorldTransformInverseCache_19(L_4);
		VisualElement_set_isWorldTransformInverseDirty_m3E6011695A655929F18D22C11E09BEF455E7299E_inline(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0034:
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_5 = __this->get_m_WorldTransformInverseCache_19();
		V_2 = L_5;
		goto IL_003d;
	}

IL_003d:
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_6 = V_2;
		return L_6;
	}
}
// System.Void UnityEngine.UIElements.VisualElement::UpdateWorldTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_UpdateWorldTransform_m30E43E905559B48B7BBF0DBC8F721E1E2C1C5051 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_UpdateWorldTransform_m30E43E905559B48B7BBF0DBC8F721E1E2C1C5051_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_UpdateWorldTransform_m30E43E905559B48B7BBF0DBC8F721E1E2C1C5051_RuntimeMethod_var);
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B3_0 = 0;
	{
		BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * L_0 = VisualElement_get_elementPanel_m3D19D620049F7622152DBEFC89D96167C5B49637_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * L_1 = VisualElement_get_elementPanel_m3D19D620049F7622152DBEFC89D96167C5B49637_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = BaseVisualElementPanel_get_duringLayoutPhase_m1D93AB22FDF1BEC410E4A624DA3B9E5D76960A76_inline(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		VisualElement_set_isWorldTransformDirty_m4C5652A1C9D25DE441A24E340EDA9B9E3FC34E36_inline(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0028:
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_4 = VisualElement_get_layout_mA8251D78A62E5B0B3D5FC23F070360547F2C7D91(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_6 = VisualElement_get_layout_mA8251D78A62E5B0B3D5FC23F070360547F2C7D91(__this, /*hidden argument*/NULL);
		V_2 = L_6;
		float L_7 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_2), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_8), L_5, L_7, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_9 = Matrix4x4_Translate_m73101FF77DD95B0B88F06EF9E58992F7B7CD2B36(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  L_10 = VisualElement_get_hierarchy_mA679C8FA30714F20ECA17FB5F73220E16277B517_inline(__this, /*hidden argument*/NULL);
		V_4 = L_10;
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_11 = Hierarchy_get_parent_mB5F0897D8288DE7D36E376B44975CAE6649FBE54((Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F *)(&V_4), /*hidden argument*/NULL);
		V_3 = (bool)((!(((RuntimeObject*)(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_009e;
		}
	}
	{
		Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  L_13 = VisualElement_get_hierarchy_mA679C8FA30714F20ECA17FB5F73220E16277B517_inline(__this, /*hidden argument*/NULL);
		V_4 = L_13;
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_14 = Hierarchy_get_parent_mB5F0897D8288DE7D36E376B44975CAE6649FBE54((Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F *)(&V_4), /*hidden argument*/NULL);
		NullCheck(L_14);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_15 = VisualElement_get_worldTransform_m9DCB8CC78B05E2048B80862F8B93403AFCC15944(L_14, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_17 = Matrix4x4_op_Multiply_mF6693A950E1917204E356366892C3CCB0553436E(L_15, L_16, /*hidden argument*/NULL);
		RuntimeObject* L_18 = VisualElement_get_transform_mC49F3C12D773B5259862F0054B40E9DC22206CBF(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_19 = InterfaceFuncInvoker0< Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  >::Invoke(0 /* UnityEngine.Matrix4x4 UnityEngine.UIElements.ITransform::get_matrix() */, ITransform_tBE516C707776F6901090016FA3C23440B7CA9FF1_il2cpp_TypeInfo_var, L_18);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_20 = Matrix4x4_op_Multiply_mF6693A950E1917204E356366892C3CCB0553436E(L_17, L_19, /*hidden argument*/NULL);
		__this->set_m_WorldTransformCache_18(L_20);
		goto IL_00b7;
	}

IL_009e:
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_21 = V_0;
		RuntimeObject* L_22 = VisualElement_get_transform_mC49F3C12D773B5259862F0054B40E9DC22206CBF(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_23 = InterfaceFuncInvoker0< Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  >::Invoke(0 /* UnityEngine.Matrix4x4 UnityEngine.UIElements.ITransform::get_matrix() */, ITransform_tBE516C707776F6901090016FA3C23440B7CA9FF1_il2cpp_TypeInfo_var, L_22);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_24 = Matrix4x4_op_Multiply_mF6693A950E1917204E356366892C3CCB0553436E(L_21, L_23, /*hidden argument*/NULL);
		__this->set_m_WorldTransformCache_18(L_24);
	}

IL_00b7:
	{
		VisualElement_set_isWorldTransformInverseDirty_m3E6011695A655929F18D22C11E09BEF455E7299E_inline(__this, (bool)1, /*hidden argument*/NULL);
		__this->set_isWorldBoundingBoxDirty_14((bool)1);
		return;
	}
}
// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::get_pseudoStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElement_get_pseudoStates_m598C95DB9E356B8DA90218EE2759693E97B52215 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_get_pseudoStates_m598C95DB9E356B8DA90218EE2759693E97B52215_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_get_pseudoStates_m598C95DB9E356B8DA90218EE2759693E97B52215_RuntimeMethod_var);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_PseudoStates_21();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.UIElements.PickingMode UnityEngine.UIElements.VisualElement::get_pickingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElement_get_pickingMode_m74295B928E5AC3829F7D8A2F9CE00A36EDA9150C (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_get_pickingMode_m74295B928E5AC3829F7D8A2F9CE00A36EDA9150C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_get_pickingMode_m74295B928E5AC3829F7D8A2F9CE00A36EDA9150C_RuntimeMethod_var);
	{
		int32_t L_0 = __this->get_U3CpickingModeU3Ek__BackingField_22();
		return L_0;
	}
}
// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.VisualElement::get_yogaNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * VisualElement_get_yogaNode_m16192DAD7796E10455EFE89B3237636B029B1BCE (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_get_yogaNode_m16192DAD7796E10455EFE89B3237636B029B1BCE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_get_yogaNode_m16192DAD7796E10455EFE89B3237636B029B1BCE_RuntimeMethod_var);
	{
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_0 = __this->get_U3CyogaNodeU3Ek__BackingField_23();
		return L_0;
	}
}
// UnityEngine.UIElements.StyleSheets.VisualElementStylesData UnityEngine.UIElements.VisualElement::get_specifiedStyle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867 * VisualElement_get_specifiedStyle_m28FA432BB55C60DD547CEA9D3FA26A4D3C332A2E (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_get_specifiedStyle_m28FA432BB55C60DD547CEA9D3FA26A4D3C332A2E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_get_specifiedStyle_m28FA432BB55C60DD547CEA9D3FA26A4D3C332A2E_RuntimeMethod_var);
	VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867 * V_0 = NULL;
	{
		VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867 * L_0 = __this->get_m_Style_24();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.UIElements.StyleSheets.InheritedStylesData UnityEngine.UIElements.VisualElement::get_inheritedStyle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E * VisualElement_get_inheritedStyle_m330FE35461DC77A273CF20376E2EF1D8D7BAFE82 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_get_inheritedStyle_m330FE35461DC77A273CF20376E2EF1D8D7BAFE82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_get_inheritedStyle_m330FE35461DC77A273CF20376E2EF1D8D7BAFE82_RuntimeMethod_var);
	InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E * V_0 = NULL;
	{
		InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E * L_0 = __this->get_m_InheritedStylesData_25();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::get_computedStyle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91  VisualElement_get_computedStyle_m199C8B371DB9F17017E3226DC2E76A17E1BFF54F (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_get_computedStyle_m199C8B371DB9F17017E3226DC2E76A17E1BFF54F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_get_computedStyle_m199C8B371DB9F17017E3226DC2E76A17E1BFF54F_RuntimeMethod_var);
	{
		ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91  L_0 = __this->get_U3CcomputedStyleU3Ek__BackingField_26();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.VisualElement::SendEvent(UnityEngine.UIElements.EventBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_SendEvent_m9A6577979BFD74DE796F00ECF20292B239C79DAF (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_SendEvent_m9A6577979BFD74DE796F00ECF20292B239C79DAF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_SendEvent_m9A6577979BFD74DE796F00ECF20292B239C79DAF_RuntimeMethod_var);
	BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * G_B2_0 = NULL;
	BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * G_B1_0 = NULL;
	{
		BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * L_0 = VisualElement_get_elementPanel_m3D19D620049F7622152DBEFC89D96167C5B49637_inline(__this, /*hidden argument*/NULL);
		BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0015;
	}

IL_000d:
	{
		EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * L_2 = ___e0;
		NullCheck(G_B2_0);
		BaseVisualElementPanel_SendEvent_m844A0255D1245AC260701CD89DE80A63EC7C5130(G_B2_0, L_2, 1, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualElement::IncrementVersion(UnityEngine.UIElements.VersionChangeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_IncrementVersion_m0FFACC45649C45D997AC6392A4815AAAACDE46D7 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, int32_t ___changeType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_IncrementVersion_m0FFACC45649C45D997AC6392A4815AAAACDE46D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_IncrementVersion_m0FFACC45649C45D997AC6392A4815AAAACDE46D7_RuntimeMethod_var);
	BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * G_B2_0 = NULL;
	BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * G_B1_0 = NULL;
	{
		BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * L_0 = VisualElement_get_elementPanel_m3D19D620049F7622152DBEFC89D96167C5B49637_inline(__this, /*hidden argument*/NULL);
		BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0015;
	}

IL_000d:
	{
		int32_t L_2 = ___changeType0;
		NullCheck(G_B2_0);
		VirtActionInvoker2< VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *, int32_t >::Invoke(18 /* System.Void UnityEngine.UIElements.BaseVisualElementPanel::OnVersionChanged(UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.VersionChangeType) */, G_B2_0, __this, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Boolean UnityEngine.UIElements.VisualElement::get_enabledInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElement_get_enabledInHierarchy_mDE186ADC734D07A6D924619428EDFAF0F58925BE (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_get_enabledInHierarchy_mDE186ADC734D07A6D924619428EDFAF0F58925BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_get_enabledInHierarchy_mDE186ADC734D07A6D924619428EDFAF0F58925BE_RuntimeMethod_var);
	bool V_0 = false;
	{
		int32_t L_0 = VisualElement_get_pseudoStates_m598C95DB9E356B8DA90218EE2759693E97B52215(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)32)))) == ((int32_t)((int32_t)32)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.UIElements.VisualElement::get_visible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElement_get_visible_mF622EA56C9F6C3AF7B305D8EE42E9E9C104A2772 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_get_visible_mF622EA56C9F6C3AF7B305D8EE42E9E9C104A2772_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_get_visible_mF622EA56C9F6C3AF7B305D8EE42E9E9C104A2772_RuntimeMethod_var);
	bool V_0 = false;
	{
		RuntimeObject* L_0 = VisualElement_get_resolvedStyle_mF1C63939BD256923B1553EFD2AA2E926CF4F8F6E(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* UnityEngine.UIElements.Visibility UnityEngine.UIElements.IResolvedStyle::get_visibility() */, IResolvedStyle_t2060DD30A373FD89234D8817D41CFA4F50AFD6E3_il2cpp_TypeInfo_var, L_0);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.UIElements.VisualElement::ContainsPoint(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElement_ContainsPoint_m9BFB6FD5618E36CB2930B5763E3479C977EF9189 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___localPoint0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_ContainsPoint_m9BFB6FD5618E36CB2930B5763E3479C977EF9189_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_ContainsPoint_m9BFB6FD5618E36CB2930B5763E3479C977EF9189_RuntimeMethod_var);
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_0 = VisualElement_get_rect_mEAE8654BF9B377AD3A4091F82B5FC237DFBAA496(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___localPoint0;
		bool L_2 = Rect_Contains_mAD3D41C88795960F177088F847509C9DDA23B682((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.UIElements.VisualElement_Hierarchy UnityEngine.UIElements.VisualElement::get_hierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  VisualElement_get_hierarchy_mA679C8FA30714F20ECA17FB5F73220E16277B517 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_get_hierarchy_mA679C8FA30714F20ECA17FB5F73220E16277B517_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_get_hierarchy_mA679C8FA30714F20ECA17FB5F73220E16277B517_RuntimeMethod_var);
	{
		Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  L_0 = __this->get_U3ChierarchyU3Ek__BackingField_28();
		return L_0;
	}
}
// System.Boolean UnityEngine.UIElements.VisualElement::ShouldClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElement_ShouldClip_m20B783A59D583676F075679BFD66EAA4082A624F (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_ShouldClip_m20B783A59D583676F075679BFD66EAA4082A624F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_ShouldClip_m20B783A59D583676F075679BFD66EAA4082A624F_RuntimeMethod_var);
	ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91  V_0;
	memset((&V_0), 0, sizeof(V_0));
	StyleEnum_1_tA29AB324EA74732D2BE335C7247F4E9CF25D4809  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91  L_0 = VisualElement_get_computedStyle_m199C8B371DB9F17017E3226DC2E76A17E1BFF54F_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		StyleEnum_1_tA29AB324EA74732D2BE335C7247F4E9CF25D4809  L_1 = ComputedStyle_get_overflow_m4D40307890211CEA10B541CCF31E7DEBF32D48D5((ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = StyleEnum_1_get_value_m02FCFEE40DC84680F81E39BF53E655481EBC76EA((StyleEnum_1_tA29AB324EA74732D2BE335C7247F4E9CF25D4809 *)(&V_1), /*hidden argument*/StyleEnum_1_get_value_m02FCFEE40DC84680F81E39BF53E655481EBC76EA_RuntimeMethod_var);
		V_2 = (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		goto IL_001d;
	}

IL_001d:
	{
		bool L_3 = V_2;
		return L_3;
	}
}
// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualElement::get_elementPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * VisualElement_get_elementPanel_m3D19D620049F7622152DBEFC89D96167C5B49637 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_get_elementPanel_m3D19D620049F7622152DBEFC89D96167C5B49637_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_get_elementPanel_m3D19D620049F7622152DBEFC89D96167C5B49637_RuntimeMethod_var);
	{
		BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * L_0 = __this->get_U3CelementPanelU3Ek__BackingField_32();
		return L_0;
	}
}
// UnityEngine.UIElements.IPanel UnityEngine.UIElements.VisualElement::get_panel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_panel_m555AF5D742E93BFB933D9881BDE6F8E5EEC9E9F5 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_get_panel_m555AF5D742E93BFB933D9881BDE6F8E5EEC9E9F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_get_panel_m555AF5D742E93BFB933D9881BDE6F8E5EEC9E9F5_RuntimeMethod_var);
	RuntimeObject* V_0 = NULL;
	{
		BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * L_0 = VisualElement_get_elementPanel_m3D19D620049F7622152DBEFC89D96167C5B49637_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::RetargetElement(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * VisualElement_RetargetElement_m9FCCC23490BAAB3806409A2DCF101F02E93AB047 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___retargetAgainst0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_RetargetElement_m9FCCC23490BAAB3806409A2DCF101F02E93AB047_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_RetargetElement_m9FCCC23490BAAB3806409A2DCF101F02E93AB047_RuntimeMethod_var);
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * V_0 = NULL;
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * V_1 = NULL;
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * V_2 = NULL;
	bool V_3 = false;
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * G_B4_0 = NULL;
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * G_B3_0 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B16_0 = 0;
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_0 = ___retargetAgainst0;
		V_3 = (bool)((((RuntimeObject*)(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		V_4 = __this;
		goto IL_0089;
	}

IL_000f:
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_2 = ___retargetAgainst0;
		NullCheck(L_2);
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_3 = L_2->get_m_PhysicalParent_29();
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_001a;
		}
	}
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_5 = ___retargetAgainst0;
		G_B4_0 = L_5;
	}

IL_001a:
	{
		V_0 = G_B4_0;
		goto IL_0026;
	}

IL_001d:
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_6 = V_0;
		NullCheck(L_6);
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_7 = L_6->get_m_PhysicalParent_29();
		V_0 = L_7;
	}

IL_0026:
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_8 = V_0;
		NullCheck(L_8);
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_9 = L_8->get_m_PhysicalParent_29();
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_10 = V_0;
		NullCheck(L_10);
		bool L_11 = VisualElement_get_isCompositeRoot_mF49D5A0F7C42D8B8CC0286DEB9924B8E47372E3A_inline(L_10, /*hidden argument*/NULL);
		G_B9_0 = ((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		goto IL_003a;
	}

IL_0039:
	{
		G_B9_0 = 0;
	}

IL_003a:
	{
		V_5 = (bool)G_B9_0;
		bool L_12 = V_5;
		if (L_12)
		{
			goto IL_001d;
		}
	}
	{
		V_1 = __this;
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_13 = __this->get_m_PhysicalParent_29();
		V_2 = L_13;
		goto IL_007a;
	}

IL_004b:
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_14 = V_2;
		NullCheck(L_14);
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_15 = L_14->get_m_PhysicalParent_29();
		V_2 = L_15;
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_16 = V_2;
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_17 = V_0;
		V_6 = (bool)((((RuntimeObject*)(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *)L_16) == ((RuntimeObject*)(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *)L_17))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0063;
		}
	}
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_19 = V_1;
		V_4 = L_19;
		goto IL_0089;
	}

IL_0063:
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_20 = V_2;
		if (!L_20)
		{
			goto IL_006e;
		}
	}
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_21 = V_2;
		NullCheck(L_21);
		bool L_22 = VisualElement_get_isCompositeRoot_mF49D5A0F7C42D8B8CC0286DEB9924B8E47372E3A_inline(L_21, /*hidden argument*/NULL);
		G_B16_0 = ((int32_t)(L_22));
		goto IL_006f;
	}

IL_006e:
	{
		G_B16_0 = 0;
	}

IL_006f:
	{
		V_7 = (bool)G_B16_0;
		bool L_23 = V_7;
		if (!L_23)
		{
			goto IL_0079;
		}
	}
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_24 = V_2;
		V_1 = L_24;
	}

IL_0079:
	{
	}

IL_007a:
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_25 = V_2;
		V_8 = (bool)((!(((RuntimeObject*)(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *)L_25) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_26 = V_8;
		if (L_26)
		{
			goto IL_004b;
		}
	}
	{
		V_4 = __this;
		goto IL_0089;
	}

IL_0089:
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_27 = V_4;
		return L_27;
	}
}
// UnityEngine.UIElements.IResolvedStyle UnityEngine.UIElements.VisualElement::get_resolvedStyle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_resolvedStyle_mF1C63939BD256923B1553EFD2AA2E926CF4F8F6E (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_get_resolvedStyle_mF1C63939BD256923B1553EFD2AA2E926CF4F8F6E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_get_resolvedStyle_mF1C63939BD256923B1553EFD2AA2E926CF4F8F6E_RuntimeMethod_var);
	RuntimeObject* V_0 = NULL;
	{
		V_0 = __this;
		goto IL_0005;
	}

IL_0005:
	{
		RuntimeObject* L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.UIElements.Visibility UnityEngine.UIElements.VisualElement::UnityEngine.UIElements.IResolvedStyle.get_visibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElement_UnityEngine_UIElements_IResolvedStyle_get_visibility_mE7FD1C47E46D6E8359E134BC3074FF708E119052 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_UnityEngine_UIElements_IResolvedStyle_get_visibility_mE7FD1C47E46D6E8359E134BC3074FF708E119052_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_UnityEngine_UIElements_IResolvedStyle_get_visibility_mE7FD1C47E46D6E8359E134BC3074FF708E119052_RuntimeMethod_var);
	ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91  V_0;
	memset((&V_0), 0, sizeof(V_0));
	StyleEnum_1_t4B11CEAA22F18336A8EF4B14655E5A85F0632EF3  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91  L_0 = VisualElement_get_computedStyle_m199C8B371DB9F17017E3226DC2E76A17E1BFF54F_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		StyleEnum_1_t4B11CEAA22F18336A8EF4B14655E5A85F0632EF3  L_1 = ComputedStyle_get_visibility_m83CBC9D84281A388753ED02A947C4F6A2FC2F44A((ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = StyleEnum_1_get_value_m460120D6D56E76157D5859BE63CCCCE87CEF76F4((StyleEnum_1_t4B11CEAA22F18336A8EF4B14655E5A85F0632EF3 *)(&V_1), /*hidden argument*/StyleEnum_1_get_value_m460120D6D56E76157D5859BE63CCCCE87CEF76F4_RuntimeMethod_var);
		return L_2;
	}
}
// UnityEngine.UIElements.DisplayStyle UnityEngine.UIElements.VisualElement::UnityEngine.UIElements.IResolvedStyle.get_display()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElement_UnityEngine_UIElements_IResolvedStyle_get_display_mE18E6C2CDCEA0F5D253E939F9357B5921033E4E3 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement_UnityEngine_UIElements_IResolvedStyle_get_display_mE18E6C2CDCEA0F5D253E939F9357B5921033E4E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement_UnityEngine_UIElements_IResolvedStyle_get_display_mE18E6C2CDCEA0F5D253E939F9357B5921033E4E3_RuntimeMethod_var);
	ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91  V_0;
	memset((&V_0), 0, sizeof(V_0));
	StyleEnum_1_t93A0CA525A578F768A3BCE0E9347694D53490DA5  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91  L_0 = VisualElement_get_computedStyle_m199C8B371DB9F17017E3226DC2E76A17E1BFF54F_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		StyleEnum_1_t93A0CA525A578F768A3BCE0E9347694D53490DA5  L_1 = ComputedStyle_get_display_m866FC7F83E877F5D34D33B63F9622C963D95CF2F((ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = StyleEnum_1_get_value_mD55B5A837BCF05AD4538ECDC78B15A47B8E2DB17((StyleEnum_1_t93A0CA525A578F768A3BCE0E9347694D53490DA5 *)(&V_1), /*hidden argument*/StyleEnum_1_get_value_mD55B5A837BCF05AD4538ECDC78B15A47B8E2DB17_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UnityEngine.UIElements.VisualElement::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement__cctor_m660EC090CF5A018188534F0897471DB34A4D7E4B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElement__cctor_m660EC090CF5A018188534F0897471DB34A4D7E4B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElement__cctor_m660EC090CF5A018188534F0897471DB34A4D7E4B_RuntimeMethod_var);
	{
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_m6C0DB901F8168ACF38155F620F1CB6E1F2DB0F85(L_0, 0, /*hidden argument*/List_1__ctor_m6C0DB901F8168ACF38155F620F1CB6E1F2DB0F85_RuntimeMethod_var);
		((VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields*)il2cpp_codegen_static_fields_for(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_il2cpp_TypeInfo_var))->set_s_EmptyClassList_4(L_0);
		PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  L_1;
		memset((&L_1), 0, sizeof(L_1));
		PropertyName__ctor_mE0853FF14F978FFAF3EEE0B98DA973E17C962B37((&L_1), _stringLiteral89B2FB7CB2D6FC5BA732F40F495D1AA31E846275, /*hidden argument*/NULL);
		((VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields*)il2cpp_codegen_static_fields_for(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_il2cpp_TypeInfo_var))->set_userDataPropertyKey_5(L_1);
		((VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields*)il2cpp_codegen_static_fields_for(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_il2cpp_TypeInfo_var))->set_disabledUssClassName_6(_stringLiteralF85F26AAAFC4A629CE5FFFC8B45644F53059C64D);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_2), (-10000.0f), (-10000.0f), (40000.0f), (40000.0f), /*hidden argument*/NULL);
		((VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields*)il2cpp_codegen_static_fields_for(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_il2cpp_TypeInfo_var))->set_s_InfiniteRect_20(L_2);
		List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * L_3 = (List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 *)il2cpp_codegen_object_new(List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756_il2cpp_TypeInfo_var);
		List_1__ctor_m631F779762BD1DCE947B95C5D99CBC53A63183DE(L_3, /*hidden argument*/List_1__ctor_m631F779762BD1DCE947B95C5D99CBC53A63183DE_RuntimeMethod_var);
		((VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields*)il2cpp_codegen_static_fields_for(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_il2cpp_TypeInfo_var))->set_s_EmptyList_30(L_3);
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
// Conversion methods for marshalling of: UnityEngine.UIElements.VisualElement/Hierarchy
IL2CPP_EXTERN_C void Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F_marshal_pinvoke(const Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F& unmarshaled, Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Owner_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Owner' of type 'Hierarchy': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Owner_0Exception, NULL);
}
IL2CPP_EXTERN_C void Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F_marshal_pinvoke_back(const Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F_marshaled_pinvoke& marshaled, Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F& unmarshaled)
{
	Exception_t* ___m_Owner_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Owner' of type 'Hierarchy': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Owner_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.VisualElement/Hierarchy
IL2CPP_EXTERN_C void Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F_marshal_pinvoke_cleanup(Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.UIElements.VisualElement/Hierarchy
IL2CPP_EXTERN_C void Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F_marshal_com(const Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F& unmarshaled, Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F_marshaled_com& marshaled)
{
	Exception_t* ___m_Owner_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Owner' of type 'Hierarchy': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Owner_0Exception, NULL);
}
IL2CPP_EXTERN_C void Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F_marshal_com_back(const Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F_marshaled_com& marshaled, Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F& unmarshaled)
{
	Exception_t* ___m_Owner_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Owner' of type 'Hierarchy': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Owner_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.VisualElement/Hierarchy
IL2CPP_EXTERN_C void Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F_marshal_com_cleanup(Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F_marshaled_com& marshaled)
{
}
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement_Hierarchy::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * Hierarchy_get_parent_mB5F0897D8288DE7D36E376B44975CAE6649FBE54 (Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Hierarchy_get_parent_mB5F0897D8288DE7D36E376B44975CAE6649FBE54_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Hierarchy_get_parent_mB5F0897D8288DE7D36E376B44975CAE6649FBE54_RuntimeMethod_var);
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * V_0 = NULL;
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_0 = __this->get_m_Owner_0();
		NullCheck(L_0);
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_1 = L_0->get_m_PhysicalParent_29();
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * Hierarchy_get_parent_mB5F0897D8288DE7D36E376B44975CAE6649FBE54_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F * _thisAdjusted = reinterpret_cast<Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F *>(__this + _offset);
	return Hierarchy_get_parent_mB5F0897D8288DE7D36E376B44975CAE6649FBE54(_thisAdjusted, method);
}
// System.Int32 UnityEngine.UIElements.VisualElement_Hierarchy::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hierarchy_get_childCount_m55A62C949CD95C8E9A99C1F3E1BB66200E5D9F25 (Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Hierarchy_get_childCount_m55A62C949CD95C8E9A99C1F3E1BB66200E5D9F25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Hierarchy_get_childCount_m55A62C949CD95C8E9A99C1F3E1BB66200E5D9F25_RuntimeMethod_var);
	int32_t V_0 = 0;
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_0 = __this->get_m_Owner_0();
		NullCheck(L_0);
		List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * L_1 = L_0->get_m_Children_31();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m57F228A57F4615429556B31AC5AA7D291C85BC96_inline(L_1, /*hidden argument*/List_1_get_Count_m57F228A57F4615429556B31AC5AA7D291C85BC96_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t Hierarchy_get_childCount_m55A62C949CD95C8E9A99C1F3E1BB66200E5D9F25_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F * _thisAdjusted = reinterpret_cast<Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F *>(__this + _offset);
	return Hierarchy_get_childCount_m55A62C949CD95C8E9A99C1F3E1BB66200E5D9F25(_thisAdjusted, method);
}
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement_Hierarchy::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * Hierarchy_get_Item_m920E811BEA80C655F08E77CFE6B47EA29B213DE8 (Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F * __this, int32_t ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Hierarchy_get_Item_m920E811BEA80C655F08E77CFE6B47EA29B213DE8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Hierarchy_get_Item_m920E811BEA80C655F08E77CFE6B47EA29B213DE8_RuntimeMethod_var);
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * V_0 = NULL;
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_0 = __this->get_m_Owner_0();
		NullCheck(L_0);
		List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * L_1 = L_0->get_m_Children_31();
		int32_t L_2 = ___key0;
		NullCheck(L_1);
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_3 = List_1_get_Item_m1FEA648A1CD054FC002A2D7053576931C8C97DF3_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_m1FEA648A1CD054FC002A2D7053576931C8C97DF3_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * Hierarchy_get_Item_m920E811BEA80C655F08E77CFE6B47EA29B213DE8_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F * _thisAdjusted = reinterpret_cast<Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F *>(__this + _offset);
	return Hierarchy_get_Item_m920E811BEA80C655F08E77CFE6B47EA29B213DE8(_thisAdjusted, ___key0, method);
}
// System.Boolean UnityEngine.UIElements.VisualElement_Hierarchy::Equals(UnityEngine.UIElements.VisualElement_Hierarchy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hierarchy_Equals_m52AE91927F4AAFDBF9D7B44B1F0D423D22696756 (Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F * __this, Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Hierarchy_Equals_m52AE91927F4AAFDBF9D7B44B1F0D423D22696756_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Hierarchy_Equals_m52AE91927F4AAFDBF9D7B44B1F0D423D22696756_RuntimeMethod_var);
	bool V_0 = false;
	{
		Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  L_0 = ___other0;
		Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  L_1 = (*(Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F *)__this);
		bool L_2 = Hierarchy_op_Equality_mA5C6AF77C3F896889D97DDC58DC1093862253093(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool Hierarchy_Equals_m52AE91927F4AAFDBF9D7B44B1F0D423D22696756_AdjustorThunk (RuntimeObject * __this, Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F * _thisAdjusted = reinterpret_cast<Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F *>(__this + _offset);
	return Hierarchy_Equals_m52AE91927F4AAFDBF9D7B44B1F0D423D22696756(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.UIElements.VisualElement_Hierarchy::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hierarchy_Equals_m616F3BA8BB9C14B75D463BE09C13631E16D2ECBD (Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Hierarchy_Equals_m616F3BA8BB9C14B75D463BE09C13631E16D2ECBD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Hierarchy_Equals_m616F3BA8BB9C14B75D463BE09C13631E16D2ECBD_RuntimeMethod_var);
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject * L_3 = ___obj0;
		bool L_4 = Hierarchy_Equals_m52AE91927F4AAFDBF9D7B44B1F0D423D22696756((Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F *)__this, ((*(Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F *)((Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F *)UnBox(L_3, Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool Hierarchy_Equals_m616F3BA8BB9C14B75D463BE09C13631E16D2ECBD_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F * _thisAdjusted = reinterpret_cast<Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F *>(__this + _offset);
	return Hierarchy_Equals_m616F3BA8BB9C14B75D463BE09C13631E16D2ECBD(_thisAdjusted, ___obj0, method);
}
// System.Int32 UnityEngine.UIElements.VisualElement_Hierarchy::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hierarchy_GetHashCode_m4F98157C3D8DBF7B093B614938CC85FA41E764A8 (Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Hierarchy_GetHashCode_m4F98157C3D8DBF7B093B614938CC85FA41E764A8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Hierarchy_GetHashCode_m4F98157C3D8DBF7B093B614938CC85FA41E764A8_RuntimeMethod_var);
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_0 = __this->get_m_Owner_0();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0017;
	}

IL_000c:
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_1 = __this->get_m_Owner_0();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t Hierarchy_GetHashCode_m4F98157C3D8DBF7B093B614938CC85FA41E764A8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F * _thisAdjusted = reinterpret_cast<Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F *>(__this + _offset);
	return Hierarchy_GetHashCode_m4F98157C3D8DBF7B093B614938CC85FA41E764A8(_thisAdjusted, method);
}
// System.Boolean UnityEngine.UIElements.VisualElement_Hierarchy::op_Equality(UnityEngine.UIElements.VisualElement_Hierarchy,UnityEngine.UIElements.VisualElement_Hierarchy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hierarchy_op_Equality_mA5C6AF77C3F896889D97DDC58DC1093862253093 (Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  ___x0, Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Hierarchy_op_Equality_mA5C6AF77C3F896889D97DDC58DC1093862253093_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Hierarchy_op_Equality_mA5C6AF77C3F896889D97DDC58DC1093862253093_RuntimeMethod_var);
	bool V_0 = false;
	{
		Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  L_0 = ___x0;
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_1 = L_0.get_m_Owner_0();
		Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  L_2 = ___y1;
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_3 = L_2.get_m_Owner_0();
		V_0 = (bool)((((RuntimeObject*)(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *)L_1) == ((RuntimeObject*)(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *)L_3))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_4 = V_0;
		return L_4;
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
// UnityEngine.Vector2 UnityEngine.UIElements.VisualElementExtensions::WorldToLocal(UnityEngine.UIElements.VisualElement,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  VisualElementExtensions_WorldToLocal_mFDEA66A0B4B27B27D235DE5E11E68E3145CA18C8 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___ele0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___p1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElementExtensions_WorldToLocal_mFDEA66A0B4B27B27D235DE5E11E68E3145CA18C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElementExtensions_WorldToLocal_mFDEA66A0B4B27B27D235DE5E11E68E3145CA18C8_RuntimeMethod_var);
	bool V_0 = false;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_0 = ___ele0;
		V_0 = (bool)((((RuntimeObject*)(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_2 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_2, _stringLiteral9D4799A1EA1B29596C1B95A43965FEEBF826C4AB, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, VisualElementExtensions_WorldToLocal_mFDEA66A0B4B27B27D235DE5E11E68E3145CA18C8_RuntimeMethod_var);
	}

IL_0015:
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_3 = ___ele0;
		NullCheck(L_3);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_4 = VisualElement_get_worldTransformInverse_m66051C73171F0F1502BD6C894FBE79BBCA31DF1C(L_3, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = ___p1;
		IL2CPP_RUNTIME_CLASS_INIT(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = VisualElement_MultiplyMatrix44Point2_m9E25080F31A2CB7F1FD3F0F4824F1FF65FE6B80E(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0024;
	}

IL_0024:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = V_1;
		return L_7;
	}
}
// UnityEngine.Rect UnityEngine.UIElements.VisualElementExtensions::WorldToLocal(UnityEngine.UIElements.VisualElement,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  VisualElementExtensions_WorldToLocal_mDC4BA07127F0B14E683BB722ECE56D2BB096FFA2 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___ele0, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___r1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElementExtensions_WorldToLocal_mDC4BA07127F0B14E683BB722ECE56D2BB096FFA2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElementExtensions_WorldToLocal_mDC4BA07127F0B14E683BB722ECE56D2BB096FFA2_RuntimeMethod_var);
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_0 = ___ele0;
		V_1 = (bool)((((RuntimeObject*)(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_2 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_2, _stringLiteral9D4799A1EA1B29596C1B95A43965FEEBF826C4AB, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, VisualElementExtensions_WorldToLocal_mDC4BA07127F0B14E683BB722ECE56D2BB096FFA2_RuntimeMethod_var);
	}

IL_0015:
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_3 = ___ele0;
		NullCheck(L_3);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_4 = VisualElement_get_worldTransformInverse_m66051C73171F0F1502BD6C894FBE79BBCA31DF1C(L_3, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = Rect_get_position_m54A2ACD2F97988561D6C83FCEF7D082BC5226D4C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___r1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = VisualElement_MultiplyMatrix44Point2_m9E25080F31A2CB7F1FD3F0F4824F1FF65FE6B80E(L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = V_0;
		Rect_set_position_mD92DFF591D9C96CDD6AF22EA2052BB3D468D68ED((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___r1), L_7, /*hidden argument*/NULL);
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_8 = ___ele0;
		NullCheck(L_8);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_9 = VisualElement_get_worldTransformInverse_m66051C73171F0F1502BD6C894FBE79BBCA31DF1C(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = Rect_get_size_m731642B8F03F6CE372A2C9E2E4A925450630606C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___r1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_10, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Matrix4x4_MultiplyVector_mFED70C58FB201633483463CE64DBF0D0BE081863((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_2), L_11, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_12, /*hidden argument*/NULL);
		Rect_set_size_m4618056983660063A74F40CCFF9A683933CB4C93((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___r1), L_13, /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_14 = ___r1;
		V_3 = L_14;
		goto IL_005c;
	}

IL_005c:
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_15 = V_3;
		return L_15;
	}
}
// UnityEngine.Rect UnityEngine.UIElements.VisualElementExtensions::LocalToWorld(UnityEngine.UIElements.VisualElement,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  VisualElementExtensions_LocalToWorld_m0399FEC2B3012DA1E387181272C34AC2039F6048 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___ele0, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___r1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElementExtensions_LocalToWorld_m0399FEC2B3012DA1E387181272C34AC2039F6048_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElementExtensions_LocalToWorld_m0399FEC2B3012DA1E387181272C34AC2039F6048_RuntimeMethod_var);
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_0 = ___ele0;
		V_1 = (bool)((((RuntimeObject*)(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_2 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_2, _stringLiteral9D4799A1EA1B29596C1B95A43965FEEBF826C4AB, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, VisualElementExtensions_LocalToWorld_m0399FEC2B3012DA1E387181272C34AC2039F6048_RuntimeMethod_var);
	}

IL_0015:
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_3 = ___ele0;
		NullCheck(L_3);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_4 = VisualElement_get_worldTransform_m9DCB8CC78B05E2048B80862F8B93403AFCC15944(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_5 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = Rect_get_position_m54A2ACD2F97988561D6C83FCEF7D082BC5226D4C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___r1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = VisualElement_MultiplyMatrix44Point2_m9E25080F31A2CB7F1FD3F0F4824F1FF65FE6B80E(L_5, L_6, /*hidden argument*/NULL);
		Rect_set_position_mD92DFF591D9C96CDD6AF22EA2052BB3D468D68ED((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___r1), L_7, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = Rect_get_size_m731642B8F03F6CE372A2C9E2E4A925450630606C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___r1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Matrix4x4_MultiplyVector_mFED70C58FB201633483463CE64DBF0D0BE081863((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_0), L_9, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_10, /*hidden argument*/NULL);
		Rect_set_size_m4618056983660063A74F40CCFF9A683933CB4C93((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___r1), L_11, /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_12 = ___r1;
		V_2 = L_12;
		goto IL_0055;
	}

IL_0055:
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_13 = V_2;
		return L_13;
	}
}
// UnityEngine.Rect UnityEngine.UIElements.VisualElementExtensions::ChangeCoordinatesTo(UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.VisualElement,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  VisualElementExtensions_ChangeCoordinatesTo_m572C40F726FFB1C87C3DD939C73B7F8D82098099 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___src0, VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___dest1, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___rect2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElementExtensions_ChangeCoordinatesTo_m572C40F726FFB1C87C3DD939C73B7F8D82098099_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElementExtensions_ChangeCoordinatesTo_m572C40F726FFB1C87C3DD939C73B7F8D82098099_RuntimeMethod_var);
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_0 = ___dest1;
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_1 = ___src0;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_2 = ___rect2;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_3 = VisualElementExtensions_LocalToWorld_m0399FEC2B3012DA1E387181272C34AC2039F6048(L_1, L_2, /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_4 = VisualElementExtensions_WorldToLocal_mDC4BA07127F0B14E683BB722ECE56D2BB096FFA2(L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0011;
	}

IL_0011:
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_5 = V_0;
		return L_5;
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
// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.VisualElementFocusChangeDirection::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * VisualElementFocusChangeDirection_get_left_m28008C7A22C13A69D46B56C5142FFBB2FC96F1C1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElementFocusChangeDirection_get_left_m28008C7A22C13A69D46B56C5142FFBB2FC96F1C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElementFocusChangeDirection_get_left_m28008C7A22C13A69D46B56C5142FFBB2FC96F1C1_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_il2cpp_TypeInfo_var);
		VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 * L_0 = ((VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_StaticFields*)il2cpp_codegen_static_fields_for(VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_il2cpp_TypeInfo_var))->get_s_Left_4();
		return L_0;
	}
}
// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.VisualElementFocusChangeDirection::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * VisualElementFocusChangeDirection_get_right_m4248B7205638C7879845E604E6131863AC4263A2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElementFocusChangeDirection_get_right_m4248B7205638C7879845E604E6131863AC4263A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElementFocusChangeDirection_get_right_m4248B7205638C7879845E604E6131863AC4263A2_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_il2cpp_TypeInfo_var);
		VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 * L_0 = ((VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_StaticFields*)il2cpp_codegen_static_fields_for(VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_il2cpp_TypeInfo_var))->get_s_Right_5();
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.VisualElementFocusChangeDirection::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementFocusChangeDirection__ctor_m4778AD4F49F65A41D4A84B7DCC17DEB3B763A9D1 (VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElementFocusChangeDirection__ctor_m4778AD4F49F65A41D4A84B7DCC17DEB3B763A9D1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElementFocusChangeDirection__ctor_m4778AD4F49F65A41D4A84B7DCC17DEB3B763A9D1_RuntimeMethod_var);
	{
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_il2cpp_TypeInfo_var);
		FocusChangeDirection__ctor_m15A9429FA21E496ED69B958E06DB904E3EDBF2E6(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualElementFocusChangeDirection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementFocusChangeDirection__cctor_mCADE7A6D9B39A4A69A2E194905A99E7720DA4F54 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElementFocusChangeDirection__cctor_mCADE7A6D9B39A4A69A2E194905A99E7720DA4F54_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElementFocusChangeDirection__cctor_mCADE7A6D9B39A4A69A2E194905A99E7720DA4F54_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_il2cpp_TypeInfo_var);
		FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * L_0 = FocusChangeDirection_get_lastValue_mAB9C4A5A59506E7566A23E58242836C5663AC1E9_inline(/*hidden argument*/NULL);
		int32_t L_1 = FocusChangeDirection_op_Implicit_mD10E84B4A5836C0C1AB70BE5E320543AF0AEA46E(L_0, /*hidden argument*/NULL);
		VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 * L_2 = (VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 *)il2cpp_codegen_object_new(VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_il2cpp_TypeInfo_var);
		VisualElementFocusChangeDirection__ctor_m4778AD4F49F65A41D4A84B7DCC17DEB3B763A9D1(L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		((VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_StaticFields*)il2cpp_codegen_static_fields_for(VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_il2cpp_TypeInfo_var))->set_s_Left_4(L_2);
		FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * L_3 = FocusChangeDirection_get_lastValue_mAB9C4A5A59506E7566A23E58242836C5663AC1E9_inline(/*hidden argument*/NULL);
		int32_t L_4 = FocusChangeDirection_op_Implicit_mD10E84B4A5836C0C1AB70BE5E320543AF0AEA46E(L_3, /*hidden argument*/NULL);
		VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 * L_5 = (VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564 *)il2cpp_codegen_object_new(VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_il2cpp_TypeInfo_var);
		VisualElementFocusChangeDirection__ctor_m4778AD4F49F65A41D4A84B7DCC17DEB3B763A9D1(L_5, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)2)), /*hidden argument*/NULL);
		((VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_StaticFields*)il2cpp_codegen_static_fields_for(VisualElementFocusChangeDirection_t7498D29078B139687B44973C8ED14530E9C91564_il2cpp_TypeInfo_var))->set_s_Right_5(L_5);
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
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElementListPool::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * VisualElementListPool_Get_m2BCCF21A7B3C2E0F56658F64D5EC38BED801A26C (int32_t ___initialCapacity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElementListPool_Get_m2BCCF21A7B3C2E0F56658F64D5EC38BED801A26C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElementListPool_Get_m2BCCF21A7B3C2E0F56658F64D5EC38BED801A26C_RuntimeMethod_var);
	List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * V_0 = NULL;
	bool V_1 = false;
	List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VisualElementListPool_tC86DFF93B88CCF4BA2FA05CA6CAF27C44A3968DA_il2cpp_TypeInfo_var);
		ObjectPool_1_t963B7012C6050595BA0DD41B91E1449B18E47483 * L_0 = ((VisualElementListPool_tC86DFF93B88CCF4BA2FA05CA6CAF27C44A3968DA_StaticFields*)il2cpp_codegen_static_fields_for(VisualElementListPool_tC86DFF93B88CCF4BA2FA05CA6CAF27C44A3968DA_il2cpp_TypeInfo_var))->get_pool_0();
		NullCheck(L_0);
		List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * L_1 = ObjectPool_1_Get_m83999374C06606EB69656E7BB4D3D8C6491DD2A8(L_0, /*hidden argument*/ObjectPool_1_Get_m83999374C06606EB69656E7BB4D3D8C6491DD2A8_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___initialCapacity0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = List_1_get_Capacity_mEFA29A1794E6DB5C219BCE378075DEFCE60AD3EC(L_3, /*hidden argument*/List_1_get_Capacity_mEFA29A1794E6DB5C219BCE378075DEFCE60AD3EC_RuntimeMethod_var);
		int32_t L_5 = ___initialCapacity0;
		G_B3_0 = ((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * L_7 = V_0;
		int32_t L_8 = ___initialCapacity0;
		NullCheck(L_7);
		List_1_set_Capacity_mE40C9BCF31A394E713DA8CF6D688C38E7FA66BD3(L_7, L_8, /*hidden argument*/List_1_set_Capacity_mE40C9BCF31A394E713DA8CF6D688C38E7FA66BD3_RuntimeMethod_var);
	}

IL_002a:
	{
		List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * L_9 = V_0;
		V_2 = L_9;
		goto IL_002e;
	}

IL_002e:
	{
		List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * L_10 = V_2;
		return L_10;
	}
}
// System.Void UnityEngine.UIElements.VisualElementListPool::Release(System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementListPool_Release_mE7A728F375DFC2C80F6DF8EC4762C7153956FF2E (List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * ___elements0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElementListPool_Release_mE7A728F375DFC2C80F6DF8EC4762C7153956FF2E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElementListPool_Release_mE7A728F375DFC2C80F6DF8EC4762C7153956FF2E_RuntimeMethod_var);
	{
		List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * L_0 = ___elements0;
		NullCheck(L_0);
		List_1_Clear_m77739217B494F73058F22A1F9F0869FA96C70594(L_0, /*hidden argument*/List_1_Clear_m77739217B494F73058F22A1F9F0869FA96C70594_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(VisualElementListPool_tC86DFF93B88CCF4BA2FA05CA6CAF27C44A3968DA_il2cpp_TypeInfo_var);
		ObjectPool_1_t963B7012C6050595BA0DD41B91E1449B18E47483 * L_1 = ((VisualElementListPool_tC86DFF93B88CCF4BA2FA05CA6CAF27C44A3968DA_StaticFields*)il2cpp_codegen_static_fields_for(VisualElementListPool_tC86DFF93B88CCF4BA2FA05CA6CAF27C44A3968DA_il2cpp_TypeInfo_var))->get_pool_0();
		List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * L_2 = ___elements0;
		NullCheck(L_1);
		ObjectPool_1_Release_mE2A09982C94290F8B7AF32C73333A162A864C19C(L_1, L_2, /*hidden argument*/ObjectPool_1_Release_mE2A09982C94290F8B7AF32C73333A162A864C19C_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualElementListPool::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementListPool__cctor_mB669465FCA43A8A284DC294B068CE167021874F3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualElementListPool__cctor_mB669465FCA43A8A284DC294B068CE167021874F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualElementListPool__cctor_mB669465FCA43A8A284DC294B068CE167021874F3_RuntimeMethod_var);
	{
		ObjectPool_1_t963B7012C6050595BA0DD41B91E1449B18E47483 * L_0 = (ObjectPool_1_t963B7012C6050595BA0DD41B91E1449B18E47483 *)il2cpp_codegen_object_new(ObjectPool_1_t963B7012C6050595BA0DD41B91E1449B18E47483_il2cpp_TypeInfo_var);
		ObjectPool_1__ctor_mABDA9464D05D84474D01CF50AA4185DA530BFB5F(L_0, ((int32_t)20), /*hidden argument*/ObjectPool_1__ctor_mABDA9464D05D84474D01CF50AA4185DA530BFB5F_RuntimeMethod_var);
		((VisualElementListPool_tC86DFF93B88CCF4BA2FA05CA6CAF27C44A3968DA_StaticFields*)il2cpp_codegen_static_fields_for(VisualElementListPool_tC86DFF93B88CCF4BA2FA05CA6CAF27C44A3968DA_il2cpp_TypeInfo_var))->set_pool_0(L_0);
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
// System.Void UnityEngine.UIElements.VisualTreeUpdater::UpdateVisualTreePhase(UnityEngine.UIElements.VisualTreeUpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualTreeUpdater_UpdateVisualTreePhase_mAB0D9F4464ED54E1A752CBCCBACF7E6546DE3786 (VisualTreeUpdater_t8BEB4BA17B59E1585E2A6BAA60CC204BDF20DE00 * __this, int32_t ___phase0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualTreeUpdater_UpdateVisualTreePhase_mAB0D9F4464ED54E1A752CBCCBACF7E6546DE3786_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualTreeUpdater_UpdateVisualTreePhase_mAB0D9F4464ED54E1A752CBCCBACF7E6546DE3786_RuntimeMethod_var);
	RuntimeObject* V_0 = NULL;
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		UpdaterArray_t93CA64534EAECBB98F27909516A929F0182E96F6 * L_0 = __this->get_m_UpdaterArray_0();
		int32_t L_1 = ___phase0;
		NullCheck(L_0);
		RuntimeObject* L_2 = UpdaterArray_get_Item_m7EDA64425B194BC3004BE74C7D3F8D37FACE3A28(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_4 = InterfaceFuncInvoker0< ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  >::Invoke(0 /* Unity.Profiling.ProfilerMarker UnityEngine.UIElements.IVisualTreeUpdater::get_profilerMarker() */, IVisualTreeUpdater_t852C59540FC81D3933D386849423D475CC91A526_il2cpp_TypeInfo_var, L_3);
		V_2 = L_4;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_5 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_2), /*hidden argument*/NULL);
		V_1 = L_5;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(1 /* System.Void UnityEngine.UIElements.IVisualTreeUpdater::Update() */, IVisualTreeUpdater_t852C59540FC81D3933D386849423D475CC91A526_il2cpp_TypeInfo_var, L_6);
		IL2CPP_LEAVE(0x37, FINALLY_0028);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(40)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x37, IL_0037)
	}

IL_0037:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.VisualTreeUpdater::OnVersionChanged(UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.VersionChangeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualTreeUpdater_OnVersionChanged_mA1FE097D303A4F9F16DD0DE7D192657F2C56E659 (VisualTreeUpdater_t8BEB4BA17B59E1585E2A6BAA60CC204BDF20DE00 * __this, VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___ve0, int32_t ___versionChangeType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VisualTreeUpdater_OnVersionChanged_mA1FE097D303A4F9F16DD0DE7D192657F2C56E659_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(VisualTreeUpdater_OnVersionChanged_mA1FE097D303A4F9F16DD0DE7D192657F2C56E659_RuntimeMethod_var);
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		V_0 = 0;
		goto IL_0021;
	}

IL_0005:
	{
		UpdaterArray_t93CA64534EAECBB98F27909516A929F0182E96F6 * L_0 = __this->get_m_UpdaterArray_0();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2 = UpdaterArray_get_Item_m29DE9853F5765D6F552BD1F068BADCAD599EC262(L_0, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		RuntimeObject* L_3 = V_1;
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_4 = ___ve0;
		int32_t L_5 = ___versionChangeType1;
		NullCheck(L_3);
		InterfaceActionInvoker2< VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *, int32_t >::Invoke(2 /* System.Void UnityEngine.UIElements.IVisualTreeUpdater::OnVersionChanged(UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.VersionChangeType) */, IVisualTreeUpdater_t852C59540FC81D3933D386849423D475CC91A526_il2cpp_TypeInfo_var, L_3, L_4, L_5);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)7))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_0005;
		}
	}
	{
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
// UnityEngine.UIElements.IVisualTreeUpdater UnityEngine.UIElements.VisualTreeUpdater_UpdaterArray::get_Item(UnityEngine.UIElements.VisualTreeUpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdaterArray_get_Item_m7EDA64425B194BC3004BE74C7D3F8D37FACE3A28 (UpdaterArray_t93CA64534EAECBB98F27909516A929F0182E96F6 * __this, int32_t ___phase0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UpdaterArray_get_Item_m7EDA64425B194BC3004BE74C7D3F8D37FACE3A28_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(UpdaterArray_get_Item_m7EDA64425B194BC3004BE74C7D3F8D37FACE3A28_RuntimeMethod_var);
	RuntimeObject* V_0 = NULL;
	{
		IVisualTreeUpdaterU5BU5D_t5904B964DFD38F10C5DC8BC4B79623B67337012E* L_0 = __this->get_m_VisualTreeUpdaters_0();
		int32_t L_1 = ___phase0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.UIElements.IVisualTreeUpdater UnityEngine.UIElements.VisualTreeUpdater_UpdaterArray::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdaterArray_get_Item_m29DE9853F5765D6F552BD1F068BADCAD599EC262 (UpdaterArray_t93CA64534EAECBB98F27909516A929F0182E96F6 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UpdaterArray_get_Item_m29DE9853F5765D6F552BD1F068BADCAD599EC262_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(UpdaterArray_get_Item_m29DE9853F5765D6F552BD1F068BADCAD599EC262_RuntimeMethod_var);
	RuntimeObject* V_0 = NULL;
	{
		IVisualTreeUpdaterU5BU5D_t5904B964DFD38F10C5DC8BC4B79623B67337012E* L_0 = __this->get_m_VisualTreeUpdaters_0();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
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
// System.Void UnityEngine.UIElements.WheelEvent::set_delta(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelEvent_set_delta_m4BC73264496DA88BA644EA0855CE9C490A15E9AF (WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WheelEvent_set_delta_m4BC73264496DA88BA644EA0855CE9C490A15E9AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(WheelEvent_set_delta_m4BC73264496DA88BA644EA0855CE9C490A15E9AF_RuntimeMethod_var);
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CdeltaU3Ek__BackingField_28(L_0);
		return;
	}
}
// UnityEngine.UIElements.WheelEvent UnityEngine.UIElements.WheelEvent::GetPooled(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * WheelEvent_GetPooled_m76DA5CC3A62CC25A01F32D7E0A5A1619570FD542 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___systemEvent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WheelEvent_GetPooled_m76DA5CC3A62CC25A01F32D7E0A5A1619570FD542_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(WheelEvent_GetPooled_m76DA5CC3A62CC25A01F32D7E0A5A1619570FD542_RuntimeMethod_var);
	WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * V_0 = NULL;
	bool V_1 = false;
	WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * V_2 = NULL;
	{
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_0 = ___systemEvent0;
		WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * L_1 = MouseEventBase_1_GetPooled_m83D2C2965FAFCBBCC4DCE28FF42C11E02F5BC9B5(L_0, /*hidden argument*/MouseEventBase_1_GetPooled_m83D2C2965FAFCBBCC4DCE28FF42C11E02F5BC9B5_RuntimeMethod_var);
		V_0 = L_1;
		WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * L_2 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_3 = ___systemEvent0;
		NullCheck(L_2);
		EventBase_set_imguiEvent_mD693DAF0735050C06640E8C9DD5683E210D18E15(L_2, L_3, /*hidden argument*/NULL);
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_4 = ___systemEvent0;
		V_1 = (bool)((!(((RuntimeObject*)(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * L_6 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_7 = ___systemEvent0;
		NullCheck(L_7);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = Event_get_delta_m552632C8BD6AFB1FF814636177843C6E28E87B85(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		WheelEvent_set_delta_m4BC73264496DA88BA644EA0855CE9C490A15E9AF_inline(L_6, L_9, /*hidden argument*/NULL);
	}

IL_002c:
	{
		WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * L_10 = V_0;
		V_2 = L_10;
		goto IL_0030;
	}

IL_0030:
	{
		WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * L_11 = V_2;
		return L_11;
	}
}
// System.Void UnityEngine.UIElements.WheelEvent::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelEvent_Init_mDA22AD76AD60B163893363D84A84DC3811461BC3 (WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WheelEvent_Init_mDA22AD76AD60B163893363D84A84DC3811461BC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(WheelEvent_Init_mDA22AD76AD60B163893363D84A84DC3811461BC3_RuntimeMethod_var);
	{
		MouseEventBase_1_Init_m4AFDA3322FAD8DB99CA8643F0A6B138FAE528503(__this, /*hidden argument*/MouseEventBase_1_Init_m4AFDA3322FAD8DB99CA8643F0A6B138FAE528503_RuntimeMethod_var);
		WheelEvent_LocalInit_m8B40B6DA941275DA7E35CAAEF20A85E1B03B0928(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.WheelEvent::LocalInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelEvent_LocalInit_m8B40B6DA941275DA7E35CAAEF20A85E1B03B0928 (WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WheelEvent_LocalInit_m8B40B6DA941275DA7E35CAAEF20A85E1B03B0928_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(WheelEvent_LocalInit_m8B40B6DA941275DA7E35CAAEF20A85E1B03B0928_RuntimeMethod_var);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		WheelEvent_set_delta_m4BC73264496DA88BA644EA0855CE9C490A15E9AF_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.WheelEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelEvent__ctor_m942BC2DC1F8308CA1F056980D2F9DD3CC30CC24B (WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WheelEvent__ctor_m942BC2DC1F8308CA1F056980D2F9DD3CC30CC24B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(WheelEvent__ctor_m942BC2DC1F8308CA1F056980D2F9DD3CC30CC24B_RuntimeMethod_var);
	{
		MouseEventBase_1__ctor_m6C60858453010A76FDBB5463E134641B6EF1475E(__this, /*hidden argument*/MouseEventBase_1__ctor_m6C60858453010A76FDBB5463E134641B6EF1475E_RuntimeMethod_var);
		WheelEvent_LocalInit_m8B40B6DA941275DA7E35CAAEF20A85E1B03B0928(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Yoga.BaselineFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaselineFunction__ctor_m802CF88B3CD0E7E5B3CBB9218ACCA646FCE38BA6 (BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaselineFunction__ctor_m802CF88B3CD0E7E5B3CBB9218ACCA646FCE38BA6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(BaselineFunction__ctor_m802CF88B3CD0E7E5B3CBB9218ACCA646FCE38BA6_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Single UnityEngine.Yoga.BaselineFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaselineFunction_Invoke_mDFF741E9FD7678B6F0C4C23DB4F9BA83A2905558 (BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * __this, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaselineFunction_Invoke_mDFF741E9FD7678B6F0C4C23DB4F9BA83A2905558_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(BaselineFunction_Invoke_mDFF741E9FD7678B6F0C4C23DB4F9BA83A2905558_RuntimeMethod_var);
	float result = 0.0f;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef float (*FunctionPointerType) (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___height2, targetMethod);
			}
			else
			{
				// closed
				typedef float (*FunctionPointerType) (void*, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___node0, ___width1, ___height2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< float, float, float >::Invoke(targetMethod, ___node0, ___width1, ___height2);
					else
						result = GenericVirtFuncInvoker2< float, float, float >::Invoke(targetMethod, ___node0, ___width1, ___height2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< float, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___node0, ___width1, ___height2);
					else
						result = VirtFuncInvoker2< float, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___node0, ___width1, ___height2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef float (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___width1) - 1), ___height2, targetMethod);
				}
				typedef float (*FunctionPointerType) (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___height2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< float, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float >::Invoke(targetMethod, targetThis, ___node0, ___width1, ___height2);
					else
						result = GenericVirtFuncInvoker3< float, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float >::Invoke(targetMethod, targetThis, ___node0, ___width1, ___height2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< float, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___node0, ___width1, ___height2);
					else
						result = VirtFuncInvoker3< float, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___node0, ___width1, ___height2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef float (*FunctionPointerType) (RuntimeObject*, float, float, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___node0) - 1), ___width1, ___height2, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef float (*FunctionPointerType) (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___height2, targetMethod);
				}
				else
				{
					typedef float (*FunctionPointerType) (void*, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, float, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___node0, ___width1, ___height2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Yoga.BaselineFunction::BeginInvoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaselineFunction_BeginInvoke_mFE9DBC35D599B1CAC5486CA763407647BF1712BB (BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * __this, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, float ___height2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaselineFunction_BeginInvoke_mFE9DBC35D599B1CAC5486CA763407647BF1712BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(BaselineFunction_BeginInvoke_mFE9DBC35D599B1CAC5486CA763407647BF1712BB_RuntimeMethod_var);
	void *__d_args[4] = {0};
	__d_args[0] = ___node0;
	__d_args[1] = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &___width1);
	__d_args[2] = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &___height2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Single UnityEngine.Yoga.BaselineFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaselineFunction_EndInvoke_m5241F5CAA7D1977B8DA0311952A96A12363949F8 (BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaselineFunction_EndInvoke_m5241F5CAA7D1977B8DA0311952A96A12363949F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(BaselineFunction_EndInvoke_m5241F5CAA7D1977B8DA0311952A96A12363949F8_RuntimeMethod_var);
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Yoga.MeasureFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasureFunction__ctor_mE87A532680536A2A9F9AEFC691F48B31C5074CDA (MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeasureFunction__ctor_mE87A532680536A2A9F9AEFC691F48B31C5074CDA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(MeasureFunction__ctor_mE87A532680536A2A9F9AEFC691F48B31C5074CDA_RuntimeMethod_var);
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  MeasureFunction_Invoke_mCC3963DDDE51AF75E4795CF0E981093A55CB2D8B (MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * __this, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeasureFunction_Invoke_mCC3963DDDE51AF75E4795CF0E981093A55CB2D8B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(MeasureFunction_Invoke_mCC3963DDDE51AF75E4795CF0E981093A55CB2D8B_RuntimeMethod_var);
	YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  (*FunctionPointerType) (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
			}
			else
			{
				// closed
				typedef YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  (*FunctionPointerType) (void*, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
			}
		}
		else if (___parameterCount != 5)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker4< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , float, int32_t, float, int32_t >::Invoke(targetMethod, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
					else
						result = GenericVirtFuncInvoker4< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , float, int32_t, float, int32_t >::Invoke(targetMethod, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
					else
						result = VirtFuncInvoker4< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  (*FunctionPointerType) (RuntimeObject*, int32_t, float, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___width1) - 1), ___widthMode2, ___height3, ___heightMode4, targetMethod);
				}
				typedef YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  (*FunctionPointerType) (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker5< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t >::Invoke(targetMethod, targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
					else
						result = GenericVirtFuncInvoker5< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t >::Invoke(targetMethod, targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
					else
						result = VirtFuncInvoker5< YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 , YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  (*FunctionPointerType) (RuntimeObject*, float, int32_t, float, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___node0) - 1), ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  (*FunctionPointerType) (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
				}
				else
				{
					typedef YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  (*FunctionPointerType) (void*, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C *, float, int32_t, float, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Yoga.MeasureFunction::BeginInvoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MeasureFunction_BeginInvoke_mB9C8A9962F9B8C0EB0B86ADBFB106C3990CC0909 (MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * __this, YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeasureFunction_BeginInvoke_mB9C8A9962F9B8C0EB0B86ADBFB106C3990CC0909_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(MeasureFunction_BeginInvoke_mB9C8A9962F9B8C0EB0B86ADBFB106C3990CC0909_RuntimeMethod_var);
	void *__d_args[6] = {0};
	__d_args[0] = ___node0;
	__d_args[1] = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &___width1);
	__d_args[2] = Box(YogaMeasureMode_t29AF57E74BCD4C16019B8BE88A317D54DA70C29F_il2cpp_TypeInfo_var, &___widthMode2);
	__d_args[3] = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &___height3);
	__d_args[4] = Box(YogaMeasureMode_t29AF57E74BCD4C16019B8BE88A317D54DA70C29F_il2cpp_TypeInfo_var, &___heightMode4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  MeasureFunction_EndInvoke_mDC25248B9A9544C7411A7B51E79E5A6706474ECD (MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeasureFunction_EndInvoke_mDC25248B9A9544C7411A7B51E79E5A6706474ECD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(MeasureFunction_EndInvoke_mDC25248B9A9544C7411A7B51E79E5A6706474ECD_RuntimeMethod_var);
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 *)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Yoga.Native::YGNodeMeasureInvoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeMeasureInvoke_mCD2D037E10DBF3D73CC83FC9078F17AA1271B913 (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, intptr_t ___returnValueAddress5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Native_YGNodeMeasureInvoke_mCD2D037E10DBF3D73CC83FC9078F17AA1271B913_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Native_YGNodeMeasureInvoke_mCD2D037E10DBF3D73CC83FC9078F17AA1271B913_RuntimeMethod_var);
	{
		intptr_t L_0 = ___returnValueAddress5;
		void* L_1 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_0, /*hidden argument*/NULL);
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_2 = ___node0;
		float L_3 = ___width1;
		int32_t L_4 = ___widthMode2;
		float L_5 = ___height3;
		int32_t L_6 = ___heightMode4;
		YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  L_7 = YogaNode_MeasureInternal_mD8D5E33930941196D36E4689267D168E4F4EC39D(L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		*(YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 *)L_1 = L_7;
		return;
	}
}
// System.Void UnityEngine.Yoga.Native::YGNodeBaselineInvoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeBaselineInvoke_m58B37C284F08E57BF28B9E9AB5CA99805F90BEEC (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, float ___height2, intptr_t ___returnValueAddress3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Native_YGNodeBaselineInvoke_m58B37C284F08E57BF28B9E9AB5CA99805F90BEEC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Native_YGNodeBaselineInvoke_m58B37C284F08E57BF28B9E9AB5CA99805F90BEEC_RuntimeMethod_var);
	{
		intptr_t L_0 = ___returnValueAddress3;
		void* L_1 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_0, /*hidden argument*/NULL);
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_2 = ___node0;
		float L_3 = ___width1;
		float L_4 = ___height2;
		float L_5 = YogaNode_BaselineInternal_m3371DB16710509FE9E0B83AC42EBEB8432ABDC26(L_2, L_3, L_4, /*hidden argument*/NULL);
		*((float*)L_1) = (float)L_5;
		return;
	}
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetLeft(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetLeft_mF2D7873317C43E67BFB6E12DFA83D91BA1665C14 (intptr_t ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Native_YGNodeLayoutGetLeft_mF2D7873317C43E67BFB6E12DFA83D91BA1665C14_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Native_YGNodeLayoutGetLeft_mF2D7873317C43E67BFB6E12DFA83D91BA1665C14_RuntimeMethod_var);
	typedef float (*Native_YGNodeLayoutGetLeft_mF2D7873317C43E67BFB6E12DFA83D91BA1665C14_ftn) (intptr_t);
	static Native_YGNodeLayoutGetLeft_mF2D7873317C43E67BFB6E12DFA83D91BA1665C14_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetLeft_mF2D7873317C43E67BFB6E12DFA83D91BA1665C14_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetLeft(System.IntPtr)");
	float retVal = _il2cpp_icall_func(___node0);
	return retVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetTop(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetTop_mF266D42D9DC6974DE17FEA0599088960F76074DF (intptr_t ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Native_YGNodeLayoutGetTop_mF266D42D9DC6974DE17FEA0599088960F76074DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Native_YGNodeLayoutGetTop_mF266D42D9DC6974DE17FEA0599088960F76074DF_RuntimeMethod_var);
	typedef float (*Native_YGNodeLayoutGetTop_mF266D42D9DC6974DE17FEA0599088960F76074DF_ftn) (intptr_t);
	static Native_YGNodeLayoutGetTop_mF266D42D9DC6974DE17FEA0599088960F76074DF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetTop_mF266D42D9DC6974DE17FEA0599088960F76074DF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetTop(System.IntPtr)");
	float retVal = _il2cpp_icall_func(___node0);
	return retVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetWidth(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetWidth_mE565C735D372CE7814D8BF015EACBCCE38DA755B (intptr_t ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Native_YGNodeLayoutGetWidth_mE565C735D372CE7814D8BF015EACBCCE38DA755B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Native_YGNodeLayoutGetWidth_mE565C735D372CE7814D8BF015EACBCCE38DA755B_RuntimeMethod_var);
	typedef float (*Native_YGNodeLayoutGetWidth_mE565C735D372CE7814D8BF015EACBCCE38DA755B_ftn) (intptr_t);
	static Native_YGNodeLayoutGetWidth_mE565C735D372CE7814D8BF015EACBCCE38DA755B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetWidth_mE565C735D372CE7814D8BF015EACBCCE38DA755B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetWidth(System.IntPtr)");
	float retVal = _il2cpp_icall_func(___node0);
	return retVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetHeight(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetHeight_mCCD0DB7B7B43AC12573EB92890D8320D1905B74D (intptr_t ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Native_YGNodeLayoutGetHeight_mCCD0DB7B7B43AC12573EB92890D8320D1905B74D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(Native_YGNodeLayoutGetHeight_mCCD0DB7B7B43AC12573EB92890D8320D1905B74D_RuntimeMethod_var);
	typedef float (*Native_YGNodeLayoutGetHeight_mCCD0DB7B7B43AC12573EB92890D8320D1905B74D_ftn) (intptr_t);
	static Native_YGNodeLayoutGetHeight_mCCD0DB7B7B43AC12573EB92890D8320D1905B74D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetHeight_mCCD0DB7B7B43AC12573EB92890D8320D1905B74D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetHeight(System.IntPtr)");
	float retVal = _il2cpp_icall_func(___node0);
	return retVal;
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
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutX_mF57238B30D9F53826CA1B096157751A3A230FD0A (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YogaNode_get_LayoutX_mF57238B30D9F53826CA1B096157751A3A230FD0A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(YogaNode_get_LayoutX_mF57238B30D9F53826CA1B096157751A3A230FD0A_RuntimeMethod_var);
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1 = Native_YGNodeLayoutGetLeft_mF2D7873317C43E67BFB6E12DFA83D91BA1665C14((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutY_m9793D202C8F86E32318F23AB5A58284DC397B50A (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YogaNode_get_LayoutY_m9793D202C8F86E32318F23AB5A58284DC397B50A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(YogaNode_get_LayoutY_m9793D202C8F86E32318F23AB5A58284DC397B50A_RuntimeMethod_var);
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1 = Native_YGNodeLayoutGetTop_mF266D42D9DC6974DE17FEA0599088960F76074DF((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutWidth_m32FB2FA118FDC8ABD062A19A2CF18F2C8BF99562 (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YogaNode_get_LayoutWidth_m32FB2FA118FDC8ABD062A19A2CF18F2C8BF99562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(YogaNode_get_LayoutWidth_m32FB2FA118FDC8ABD062A19A2CF18F2C8BF99562_RuntimeMethod_var);
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1 = Native_YGNodeLayoutGetWidth_mE565C735D372CE7814D8BF015EACBCCE38DA755B((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutHeight_m7FC3435DA4AE0739612FC06F8C116F0D7917FFE1 (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YogaNode_get_LayoutHeight_m7FC3435DA4AE0739612FC06F8C116F0D7917FFE1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(YogaNode_get_LayoutHeight_m7FC3435DA4AE0739612FC06F8C116F0D7917FFE1_RuntimeMethod_var);
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->get__ygNode_0();
		float L_1 = Native_YGNodeLayoutGetHeight_mCCD0DB7B7B43AC12573EB92890D8320D1905B74D((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.YogaNode::MeasureInternal(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  YogaNode_MeasureInternal_mD8D5E33930941196D36E4689267D168E4F4EC39D (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YogaNode_MeasureInternal_mD8D5E33930941196D36E4689267D168E4F4EC39D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(YogaNode_MeasureInternal_mD8D5E33930941196D36E4689267D168E4F4EC39D_RuntimeMethod_var);
	bool V_0 = false;
	YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_0 = ___node0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_1 = ___node0;
		NullCheck(L_1);
		MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * L_2 = L_1->get__measureFunction_1();
		G_B3_0 = ((((RuntimeObject*)(MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_4 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_4, _stringLiteral7B7F79DCB0F318BC5C97926F7A6B01DD9AC466F3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, YogaNode_MeasureInternal_mD8D5E33930941196D36E4689267D168E4F4EC39D_RuntimeMethod_var);
	}

IL_0020:
	{
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_5 = ___node0;
		NullCheck(L_5);
		MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * L_6 = L_5->get__measureFunction_1();
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_7 = ___node0;
		float L_8 = ___width1;
		int32_t L_9 = ___widthMode2;
		float L_10 = ___height3;
		int32_t L_11 = ___heightMode4;
		NullCheck(L_6);
		YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  L_12 = MeasureFunction_Invoke_mCC3963DDDE51AF75E4795CF0E981093A55CB2D8B(L_6, L_7, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		goto IL_0034;
	}

IL_0034:
	{
		YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23  L_13 = V_1;
		return L_13;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::BaselineInternal(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_BaselineInternal_m3371DB16710509FE9E0B83AC42EBEB8432ABDC26 (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YogaNode_BaselineInternal_m3371DB16710509FE9E0B83AC42EBEB8432ABDC26_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerMethodSentry _profilerMethodSentry(YogaNode_BaselineInternal_m3371DB16710509FE9E0B83AC42EBEB8432ABDC26_RuntimeMethod_var);
	bool V_0 = false;
	float V_1 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_0 = ___node0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_1 = ___node0;
		NullCheck(L_1);
		BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * L_2 = L_1->get__baselineFunction_2();
		G_B3_0 = ((((RuntimeObject*)(BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_4 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_4, _stringLiteral8E00835171ED7C12FAB03A3AB4E021A16E424202, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, YogaNode_BaselineInternal_m3371DB16710509FE9E0B83AC42EBEB8432ABDC26_RuntimeMethod_var);
	}

IL_0020:
	{
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_5 = ___node0;
		NullCheck(L_5);
		BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * L_6 = L_5->get__baselineFunction_2();
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_7 = ___node0;
		float L_8 = ___width1;
		float L_9 = ___height2;
		NullCheck(L_6);
		float L_10 = BaselineFunction_Invoke_mDFF741E9FD7678B6F0C4C23DB4F9BA83A2905558(L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		goto IL_0031;
	}

IL_0031:
	{
		float L_11 = V_1;
		return L_11;
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker_Begin_m590B79FC0E13EDAEFB8BF6522995C8FD56667D39_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerMarker_Internal_Begin_m79272E72708A53AFDEEEB81CF66C7D62920AC5B5((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker_End_mAC7099DA8D4864AA1D0289F368F85E31A9BFE502_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerMarker_Internal_End_mE25FE55A23DF111614CE890359972D96A65B499A((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1 = ProfilerMarker_Internal_Create_m92F2A7651D4BF3F3D0CB62078DD79B71839FA370(L_0, (uint16_t)0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * VisualElement_get_yogaNode_m16192DAD7796E10455EFE89B3237636B029B1BCE_inline (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	{
		YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * L_0 = __this->get_U3CyogaNodeU3Ek__BackingField_23();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool VisualElement_get_isLayoutManual_m580C870A5502A6D2435AF166B2143E91522E82DD_inline (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CisLayoutManualU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool VisualElement_get_isWorldTransformDirty_m00F99DF0A881C9A3CAD1840E35A6755254F55965_inline (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CisWorldTransformDirtyU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool VisualElement_get_isWorldTransformInverseDirty_m6284AAFD1664F010FC64C6D57D37B705BBE1687D_inline (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CisWorldTransformInverseDirtyU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VisualElement_set_isWorldTransformInverseDirty_m3E6011695A655929F18D22C11E09BEF455E7299E_inline (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CisWorldTransformInverseDirtyU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * VisualElement_get_elementPanel_m3D19D620049F7622152DBEFC89D96167C5B49637_inline (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	{
		BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * L_0 = __this->get_U3CelementPanelU3Ek__BackingField_32();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseVisualElementPanel_get_duringLayoutPhase_m1D93AB22FDF1BEC410E4A624DA3B9E5D76960A76_inline (BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CduringLayoutPhaseU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VisualElement_set_isWorldTransformDirty_m4C5652A1C9D25DE441A24E340EDA9B9E3FC34E36_inline (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CisWorldTransformDirtyU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  VisualElement_get_hierarchy_mA679C8FA30714F20ECA17FB5F73220E16277B517_inline (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	{
		Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  L_0 = __this->get_U3ChierarchyU3Ek__BackingField_28();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91  VisualElement_get_computedStyle_m199C8B371DB9F17017E3226DC2E76A17E1BFF54F_inline (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	{
		ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91  L_0 = __this->get_U3CcomputedStyleU3Ek__BackingField_26();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool VisualElement_get_isCompositeRoot_mF49D5A0F7C42D8B8CC0286DEB9924B8E47372E3A_inline (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CisCompositeRootU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * FocusChangeDirection_get_lastValue_mAB9C4A5A59506E7566A23E58242836C5663AC1E9_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FocusChangeDirection_get_lastValue_mAB9C4A5A59506E7566A23E58242836C5663AC1E9UnityEngine_UIElementsModule1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_il2cpp_TypeInfo_var);
		FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * L_0 = ((FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_StaticFields*)il2cpp_codegen_static_fields_for(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_il2cpp_TypeInfo_var))->get_U3ClastValueU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method)
{
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerMarker_Internal_End_mE25FE55A23DF111614CE890359972D96A65B499A((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WheelEvent_set_delta_m4BC73264496DA88BA644EA0855CE9C490A15E9AF_inline (WheelEvent_tAD08DA59D209DC73048CD5AE8A1F03F9EF1430E0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CdeltaU3Ek__BackingField_28(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerMarker_Internal_Begin_m79272E72708A53AFDEEEB81CF66C7D62920AC5B5((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
