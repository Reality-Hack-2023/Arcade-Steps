﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Comparison`1<Meta.Conduit.InvocationContext>
struct Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31;
// System.Comparison`1<System.Object>
struct Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean>
struct Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270;
// System.Func`2<Meta.Conduit.InvocationContext,System.Boolean>
struct Func_2_tED40FED45D1DE6C06FE91F6082E28CF3AD081664;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Reflection.ParameterInfo,System.Boolean>
struct Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct IEnumerable_1_tCB76A9B724198E55C8079D349B30756B5567AD45;
// System.Collections.Generic.IEnumerable`1<Meta.Conduit.InvocationContext>
struct IEnumerable_1_tFC242248222E2BFEFB8A3590DF317D8CCEC1AE72;
// System.Collections.Generic.IEnumerable`1<Meta.Conduit.ManifestParameter>
struct IEnumerable_1_tA39C719F0C595057889DEC3643FE8E2920E6A3CF;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterInfo>
struct IEnumerable_1_t8E50A30565DC033F3BDF1627DA5A9C930C1E0DB9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct KeyCollection_t3D461826AE05B2B3A89404EC7E6F665305E64E04;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>
struct List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D;
// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>
struct List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2;
// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>
struct List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935;
// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>
struct List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct ValueCollection_t1557DCE76C64DC1C0A51C1D7019F5C702C6D8A07;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>[]
struct EntryU5BU5D_tDDB025EC327A1C10DD190006B95D6E196E234236;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Meta.Conduit.InvocationContext[]
struct InvocationContextU5BU5D_t2378E79B73F3F5B1B15AB21DB4C415F5DE15021C;
// Meta.Conduit.ManifestAction[]
struct ManifestActionU5BU5D_tDCD43E29651580260D9CC754BEBD74CA1ABFD4A8;
// Meta.Conduit.ManifestEntity[]
struct ManifestEntityU5BU5D_t66B86E2F59108842811F459B050BDC2258C84D38;
// Meta.Conduit.ManifestParameter[]
struct ManifestParameterU5BU5D_t20A01355C25FF185C3C2BFBA957E7115C260855E;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Meta.Conduit.ConduitActionAttribute
struct ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03;
// Meta.Conduit.ConduitAssemblyAttribute
struct ConduitAssemblyAttribute_tC0D41F8C1603EA3F11136E091BD02A4750CD51FB;
// Meta.Conduit.ConduitDispatcher
struct ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD;
// Meta.Conduit.ConduitDispatcherFactory
struct ConduitDispatcherFactory_tCBCB16493732382F380C4656A15645C37A8D19EF;
// Meta.Conduit.ConduitEntityAttribute
struct ConduitEntityAttribute_tFA871D9874C03C6B6FAFF07518614608268A05ED;
// Meta.Conduit.ConduitParameterAttribute
struct ConduitParameterAttribute_tDC25FA1A539051B07DF432E1D76FACC6032F6B65;
// Meta.Conduit.ConduitUtilities
struct ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274;
// Meta.Conduit.ConduitValueAttribute
struct ConduitValueAttribute_t2A5F90C046393DCE843701E6CE8C994CD5F2A750;
// System.CultureAwareComparer
struct CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// Meta.Conduit.IConduitDispatcher
struct IConduitDispatcher_t762B3E7D2DA1201E5678485D344611A85532EB82;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Meta.Conduit.IInstanceResolver
struct IInstanceResolver_t4081CA8E4E0CFA6F97CCE27A95338CF91C0542F0;
// Meta.Conduit.IManifestLoader
struct IManifestLoader_tAABD74349F6106DADEC127041A599417981F8DD8;
// Meta.Conduit.IParameterProvider
struct IParameterProvider_t2DE2745219374609D4B429816D358E729CA8BFF3;
// Meta.Conduit.InvocationContext
struct InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05;
// Meta.Conduit.Manifest
struct Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF;
// Meta.Conduit.ManifestAction
struct ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056;
// Meta.Conduit.ManifestEntity
struct ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938;
// Meta.Conduit.ManifestLoader
struct ManifestLoader_t88C032862ECBA374162619B4B2FD9C0AE1AE9263;
// Meta.Conduit.ManifestParameter
struct ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.OrdinalCaseSensitiveComparer
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A;
// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// Meta.Conduit.ParameterProvider
struct ParameterProvider_t4C3E4FAB375D894AA6249050E2521219D8B47CC1;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Meta.Conduit.ConduitDispatcher/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E;
// Meta.Conduit.Manifest/<>c
struct U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConduitDispatcherFactory_tCBCB16493732382F380C4656A15645C37A8D19EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tED40FED45D1DE6C06FE91F6082E28CF3AD081664_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tCB76A9B724198E55C8079D349B30756B5567AD45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t42DACB4F4802D1C2C7DF762E704AE40CFB0B1957_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInstanceResolver_t4081CA8E4E0CFA6F97CCE27A95338CF91C0542F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IManifestLoader_tAABD74349F6106DADEC127041A599417981F8DD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IParameterProvider_t2DE2745219374609D4B429816D358E729CA8BFF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonMapper_t73A696B3FD14CEB9054963740E9AEDD059B29DB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManifestLoader_t88C032862ECBA374162619B4B2FD9C0AE1AE9263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral022184FDCAF79E398879AD81666844068AE208D4;
IL2CPP_EXTERN_C String_t* _stringLiteral0E3A4B6D33B5A752C5EF943BD7BFD2FCFC6572AB;
IL2CPP_EXTERN_C String_t* _stringLiteral1EDECAA096CC9146E798F06E367FD32D469ADF53;
IL2CPP_EXTERN_C String_t* _stringLiteral30A2AC504761E7DD06F19C2F3AEF88096139945E;
IL2CPP_EXTERN_C String_t* _stringLiteral45E8B3D3BF0062B76362F9E784FE3235D4B4DFEF;
IL2CPP_EXTERN_C String_t* _stringLiteral699AC6096221581A5B617645650AB1ECDE7E264A;
IL2CPP_EXTERN_C String_t* _stringLiteral6F3800A3E48CBEF8728378A99950F313348E3F83;
IL2CPP_EXTERN_C String_t* _stringLiteral89DDE9D8219984BFAB2D008F9587AE8954A0257B;
IL2CPP_EXTERN_C String_t* _stringLiteral9922970D8005166DB69DF5FECF38875C42ADC753;
IL2CPP_EXTERN_C String_t* _stringLiteralA6C8906B0336A2295C8CE2CD8760E4BE18B9AA67;
IL2CPP_EXTERN_C String_t* _stringLiteralA78B7EE9EF87D7EBFF96384672C42877EF4770C7;
IL2CPP_EXTERN_C String_t* _stringLiteralBCEA720F88A7F2378A9640EDF6C2376F94C3D499;
IL2CPP_EXTERN_C String_t* _stringLiteralBF7EFBD8BC034142848E4C19607C01A22400D9AE;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralCD9B14D4046ED1AD88F3E1F180FCBA71F134B53B;
IL2CPP_EXTERN_C String_t* _stringLiteralCE718B85C732127DA06EC4DDA3E9F112B092F786;
IL2CPP_EXTERN_C String_t* _stringLiteralD498A609ABCC1ADA0E1D7FBCCB2FACE5277DBBE0;
IL2CPP_EXTERN_C String_t* _stringLiteralE10CE76A36830983737AFC7AB5662B41A8D7111B;
IL2CPP_EXTERN_C String_t* _stringLiteralE15B6F2D7831CA81037E8DCF7B3F54A8A2AD80BC;
IL2CPP_EXTERN_C String_t* _stringLiteralE1A3CD913FA259DB8A074AE7BB483A85777F004B;
IL2CPP_EXTERN_C String_t* _stringLiteralF19157630C2E302C33B88C5B6A53BB1D1F0B6896;
IL2CPP_EXTERN_C String_t* _stringLiteralF19C581C636A926E20F7D783DF0F1AE22C19E0B9;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C const RuntimeMethod* ConduitDispatcher_U3CCompatibleInvocationContextU3Eb__8_0_m2CEEFFE91923C1898CAF9829B7BB09D268E3C74D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m9584173AD45120BB7D1FB40440ED3943B64EE0C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m93C32BCEED5FA0D8F29449FE9D511BB733BB1A05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4B46282F56E1C120392B553F9927DD511BFFF4E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mFE452EDE7DBFB4C166B60316955EC702F4810FD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mD6596A5FD4BE712AB341405DB15609860D5A6162_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_All_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m1957B763D2F9D6E395B3EA93E97C7331799FB725_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SequenceEqual_TisManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E_m6C0A42564851357FA3C2162E8396A1C606AF0FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisInvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05_m9512F1A455BAEF6AF66267EB38E3EC76254E9A33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisInvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05_m49E8F9CC96108E3CC395DA783D124B53AD8A1E07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisList_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D_mE90993DD675930A0015628A2555C164AB8C053C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m42FC3C710A2523D28A1D0CAF5B4CD2914D314F60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6B583A1B996DF09151A095C92C966630810A5D2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m705F8405A56533C97D336599F0D5290954945DC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3674523FAAC452BAD2A68DBA3D5B53AAA5664499_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m53EF7C93F8F5FCD23497846F7AA37B1B0B9F051F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6D1DE9A3C77E32986FDE259E5D8DE4F6F517525C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2786A735A61AAA5FA5476B673B595B345A18CB0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m53928428D4124470BF515E24024E12E5685CD869_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7E82D06B42C163C6E20374B4BD223B075B4C4B2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_ToObject_TisManifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF_m0D6C453F4C844B5193A8760A09944CA717BB54F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m32958BDB535373943F1CABFA0A9E9D86F0D8E206_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0D1F39CC340807753A59C6AA4DCC62C688AC8931_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m21A5D3985497315B9F22025A05ABC5DF3A39CB07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m320C589346067F668F28D2D976C6FB116B5AFE7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m3BC6FC8F7EF5E7E9F30A86FAEDF0478DDA6AE98F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m095AC157F345C0B2B5B5D9FBE6F5EE8477F56C19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m34396BF21C23C01910EFD7F01307E7D8BDF80ECE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m52A5602099D2D12AA01CA87C6F80FB7A23CAC496_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF4E2960EB740BB25B6765B125C5121A4B2895752_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC0BA943D748295859D3CCE7C92D1DAF0E76E1CFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE0EE27BE8D30C224CDE80842F5E79E11F145E8B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0A2CF9F1BA3F0D401629BEF8CA32E15D08AB5C73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Manifest_ResolveActions_m0D1DC5CFFED58BCEF65CF8A00E79CD5B84C44845_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParameterProvider_GetSpecializedParameter_m178B6D8BE1EE989169B2584631E6D1CD9DC309C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CResolveActionsU3Eb__22_0_m79E36D011E557A2F21B0342FAF7DADC6513C6097_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CResolveActionsU3Eb__22_1_mE03B557DB991AD3758F77AA06E80FBF418340143_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CResolveInvocationContextsU3Eb__0_m8B21276C802B14EC7D69F34AA4122F7DE8CF2725_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tB96A7823FBEF3C71ABF18039B87DB520DFFF4ADE 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDDB025EC327A1C10DD190006B95D6E196E234236* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t3D461826AE05B2B3A89404EC7E6F665305E64E04* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t1557DCE76C64DC1C0A51C1D7019F5C702C6D8A07* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>
struct List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InvocationContextU5BU5D_t2378E79B73F3F5B1B15AB21DB4C415F5DE15021C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>
struct List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ManifestActionU5BU5D_tDCD43E29651580260D9CC754BEBD74CA1ABFD4A8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>
struct List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ManifestEntityU5BU5D_t66B86E2F59108842811F459B050BDC2258C84D38* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>
struct List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ManifestParameterU5BU5D_t20A01355C25FF185C3C2BFBA957E7115C260855E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct ValueCollection_t1557DCE76C64DC1C0A51C1D7019F5C702C6D8A07  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* ____dictionary_0;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235  : public RuntimeObject
{
};

// Meta.Conduit.ConduitDispatcher
struct ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD  : public RuntimeObject
{
	// Meta.Conduit.Manifest Meta.Conduit.ConduitDispatcher::manifest
	Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* ___manifest_0;
	// Meta.Conduit.IManifestLoader Meta.Conduit.ConduitDispatcher::manifestLoader
	RuntimeObject* ___manifestLoader_1;
	// Meta.Conduit.IInstanceResolver Meta.Conduit.ConduitDispatcher::instanceResolver
	RuntimeObject* ___instanceResolver_2;
	// Meta.Conduit.IParameterProvider Meta.Conduit.ConduitDispatcher::parameterProvider
	RuntimeObject* ___parameterProvider_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.Conduit.ConduitDispatcher::parameterToRoleMap
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___parameterToRoleMap_4;
};

// Meta.Conduit.ConduitDispatcherFactory
struct ConduitDispatcherFactory_tCBCB16493732382F380C4656A15645C37A8D19EF  : public RuntimeObject
{
	// Meta.Conduit.IInstanceResolver Meta.Conduit.ConduitDispatcherFactory::instanceResolver
	RuntimeObject* ___instanceResolver_1;
	// Meta.Conduit.IParameterProvider Meta.Conduit.ConduitDispatcherFactory::parameterProvider
	RuntimeObject* ___parameterProvider_2;
};

// Meta.Conduit.ConduitUtilities
struct ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274  : public RuntimeObject
{
};

// Meta.Conduit.InvocationContext
struct InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05  : public RuntimeObject
{
	// System.Type Meta.Conduit.InvocationContext::<Type>k__BackingField
	Type_t* ___U3CTypeU3Ek__BackingField_0;
	// System.Reflection.MethodInfo Meta.Conduit.InvocationContext::<MethodInfo>k__BackingField
	MethodInfo_t* ___U3CMethodInfoU3Ek__BackingField_1;
	// System.Single Meta.Conduit.InvocationContext::<MinConfidence>k__BackingField
	float ___U3CMinConfidenceU3Ek__BackingField_2;
	// System.Single Meta.Conduit.InvocationContext::<MaxConfidence>k__BackingField
	float ___U3CMaxConfidenceU3Ek__BackingField_3;
	// System.Boolean Meta.Conduit.InvocationContext::<ValidatePartial>k__BackingField
	bool ___U3CValidatePartialU3Ek__BackingField_4;
};

// Meta.Conduit.Manifest
struct Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF  : public RuntimeObject
{
	// System.String Meta.Conduit.Manifest::<ID>k__BackingField
	String_t* ___U3CIDU3Ek__BackingField_0;
	// System.String Meta.Conduit.Manifest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_1;
	// System.String Meta.Conduit.Manifest::<Domain>k__BackingField
	String_t* ___U3CDomainU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity> Meta.Conduit.Manifest::<Entities>k__BackingField
	List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935* ___U3CEntitiesU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction> Meta.Conduit.Manifest::<Actions>k__BackingField
	List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* ___U3CActionsU3Ek__BackingField_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>> Meta.Conduit.Manifest::methodLookup
	Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* ___methodLookup_5;
};

// Meta.Conduit.ManifestAction
struct ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056  : public RuntimeObject
{
	// System.String Meta.Conduit.ManifestAction::<ID>k__BackingField
	String_t* ___U3CIDU3Ek__BackingField_0;
	// System.String Meta.Conduit.ManifestAction::<Assembly>k__BackingField
	String_t* ___U3CAssemblyU3Ek__BackingField_1;
	// System.String Meta.Conduit.ManifestAction::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter> Meta.Conduit.ManifestAction::<Parameters>k__BackingField
	List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* ___U3CParametersU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestAction::<Aliases>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CAliasesU3Ek__BackingField_4;
};

// Meta.Conduit.ManifestEntity
struct ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938  : public RuntimeObject
{
	// System.String Meta.Conduit.ManifestEntity::<ID>k__BackingField
	String_t* ___U3CIDU3Ek__BackingField_0;
	// System.String Meta.Conduit.ManifestEntity::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_1;
	// System.String Meta.Conduit.ManifestEntity::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestEntity::<Values>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CValuesU3Ek__BackingField_3;
};

// Meta.Conduit.ManifestLoader
struct ManifestLoader_t88C032862ECBA374162619B4B2FD9C0AE1AE9263  : public RuntimeObject
{
};

// Meta.Conduit.ManifestParameter
struct ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E  : public RuntimeObject
{
	// System.String Meta.Conduit.ManifestParameter::name
	String_t* ___name_0;
	// System.String Meta.Conduit.ManifestParameter::<InternalName>k__BackingField
	String_t* ___U3CInternalNameU3Ek__BackingField_1;
	// System.String Meta.Conduit.ManifestParameter::<QualifiedName>k__BackingField
	String_t* ___U3CQualifiedNameU3Ek__BackingField_2;
	// System.String Meta.Conduit.ManifestParameter::<TypeAssembly>k__BackingField
	String_t* ___U3CTypeAssemblyU3Ek__BackingField_3;
	// System.String Meta.Conduit.ManifestParameter::<QualifiedTypeName>k__BackingField
	String_t* ___U3CQualifiedTypeNameU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestParameter::<Aliases>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CAliasesU3Ek__BackingField_5;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// Meta.Conduit.ParameterProvider
struct ParameterProvider_t4C3E4FAB375D894AA6249050E2521219D8B47CC1  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Meta.Conduit.ParameterProvider::ActualParameters
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___ActualParameters_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.Conduit.ParameterProvider::parameterToRoleMap
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___parameterToRoleMap_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Meta.Conduit.ConduitDispatcher/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E  : public RuntimeObject
{
	// Meta.Conduit.ConduitDispatcher Meta.Conduit.ConduitDispatcher/<>c__DisplayClass7_0::<>4__this
	ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* ___U3CU3E4__this_0;
	// System.Single Meta.Conduit.ConduitDispatcher/<>c__DisplayClass7_0::confidence
	float ___confidence_1;
	// System.Boolean Meta.Conduit.ConduitDispatcher/<>c__DisplayClass7_0::partial
	bool ___partial_2;
};

// Meta.Conduit.Manifest/<>c
struct U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.InvocationContext>
struct Enumerator_t53745153360A1FD871F3058CF9403CD54E9B84CF 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestAction>
struct Enumerator_t50475E3E1405C76878D9C182F4C71DF48340803C 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestParameter>
struct Enumerator_t4D17C090AC4791EEB29E0CF4DDC0DCFF3ECB01E7 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// Meta.Conduit.ConduitActionAttribute
struct ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Meta.Conduit.ConduitActionAttribute::<Intent>k__BackingField
	String_t* ___U3CIntentU3Ek__BackingField_0;
	// System.Single Meta.Conduit.ConduitActionAttribute::<MinConfidence>k__BackingField
	float ___U3CMinConfidenceU3Ek__BackingField_1;
	// System.Single Meta.Conduit.ConduitActionAttribute::<MaxConfidence>k__BackingField
	float ___U3CMaxConfidenceU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ConduitActionAttribute::<Aliases>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CAliasesU3Ek__BackingField_5;
	// System.Boolean Meta.Conduit.ConduitActionAttribute::<ValidatePartial>k__BackingField
	bool ___U3CValidatePartialU3Ek__BackingField_6;
};

// Meta.Conduit.ConduitAssemblyAttribute
struct ConduitAssemblyAttribute_tC0D41F8C1603EA3F11136E091BD02A4750CD51FB  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Meta.Conduit.ConduitEntityAttribute
struct ConduitEntityAttribute_tFA871D9874C03C6B6FAFF07518614608268A05ED  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Meta.Conduit.ConduitParameterAttribute
struct ConduitParameterAttribute_tDC25FA1A539051B07DF432E1D76FACC6032F6B65  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.ConduitParameterAttribute::<Aliases>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CAliasesU3Ek__BackingField_0;
};

// Meta.Conduit.ConduitValueAttribute
struct ConduitValueAttribute_t2A5F90C046393DCE843701E6CE8C994CD5F2A750  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String[] Meta.Conduit.ConduitValueAttribute::<Aliases>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CAliasesU3Ek__BackingField_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.OrdinalComparer
struct OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170  : public StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06
{
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;
};

// System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 
{
	// System.Boolean[] System.Reflection.ParameterModifier::_byRef
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____byRef_0;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_pinvoke
{
	int32_t* ____byRef_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_com
{
	int32_t* ____byRef_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0  : public OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170
{
};

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Comparison`1<Meta.Conduit.InvocationContext>
struct Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean>
struct Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270  : public MulticastDelegate_t
{
};

// System.Func`2<Meta.Conduit.InvocationContext,System.Boolean>
struct Func_2_tED40FED45D1DE6C06FE91F6082E28CF3AD081664  : public MulticastDelegate_t
{
};

// System.Func`2<System.Reflection.ParameterInfo,System.Boolean>
struct Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35  : public MulticastDelegate_t
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>
struct List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InvocationContextU5BU5D_t2378E79B73F3F5B1B15AB21DB4C415F5DE15021C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>

// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>
struct List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ManifestActionU5BU5D_tDCD43E29651580260D9CC754BEBD74CA1ABFD4A8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>

// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>
struct List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ManifestEntityU5BU5D_t66B86E2F59108842811F459B050BDC2258C84D38* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>

// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>
struct List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ManifestParameterU5BU5D_t20A01355C25FF185C3C2BFBA957E7115C260855E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>

// System.Attribute

// System.Attribute

// System.Reflection.Binder

// System.Reflection.Binder

// Meta.Conduit.ConduitDispatcher

// Meta.Conduit.ConduitDispatcher

// Meta.Conduit.ConduitDispatcherFactory
struct ConduitDispatcherFactory_tCBCB16493732382F380C4656A15645C37A8D19EF_StaticFields
{
	// Meta.Conduit.IConduitDispatcher Meta.Conduit.ConduitDispatcherFactory::instance
	RuntimeObject* ___instance_0;
};

// Meta.Conduit.ConduitDispatcherFactory

// Meta.Conduit.ConduitUtilities
struct ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274_StaticFields
{
	// System.Text.RegularExpressions.Regex Meta.Conduit.ConduitUtilities::UnderscoreSplitter
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___UnderscoreSplitter_0;
};

// Meta.Conduit.ConduitUtilities

// Meta.Conduit.InvocationContext

// Meta.Conduit.InvocationContext

// Meta.Conduit.Manifest

// Meta.Conduit.Manifest

// Meta.Conduit.ManifestAction

// Meta.Conduit.ManifestAction

// Meta.Conduit.ManifestEntity

// Meta.Conduit.ManifestEntity

// Meta.Conduit.ManifestLoader

// Meta.Conduit.ManifestLoader

// Meta.Conduit.ManifestParameter

// Meta.Conduit.ManifestParameter

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.Reflection.ParameterInfo

// System.Reflection.ParameterInfo

// Meta.Conduit.ParameterProvider

// Meta.Conduit.ParameterProvider

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields
{
	// System.CultureAwareComparer System.StringComparer::s_invariantCulture
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCulture_0;
	// System.CultureAwareComparer System.StringComparer::s_invariantCultureIgnoreCase
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCultureIgnoreCase_1;
	// System.OrdinalCaseSensitiveComparer System.StringComparer::s_ordinal
	OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A* ___s_ordinal_2;
	// System.OrdinalIgnoreCaseComparer System.StringComparer::s_ordinalIgnoreCase
	OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* ___s_ordinalIgnoreCase_3;
};

// System.StringComparer

// System.ValueType

// System.ValueType

// Meta.Conduit.ConduitDispatcher/<>c__DisplayClass7_0

// Meta.Conduit.ConduitDispatcher/<>c__DisplayClass7_0

// Meta.Conduit.Manifest/<>c
struct U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_StaticFields
{
	// Meta.Conduit.Manifest/<>c Meta.Conduit.Manifest/<>c::<>9
	U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD* ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean> Meta.Conduit.Manifest/<>c::<>9__22_0
	Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270* ___U3CU3E9__22_0_1;
	// System.Comparison`1<Meta.Conduit.InvocationContext> Meta.Conduit.Manifest/<>c::<>9__22_1
	Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31* ___U3CU3E9__22_1_2;
};

// Meta.Conduit.Manifest/<>c

// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.InvocationContext>

// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.InvocationContext>

// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestAction>

// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestAction>

// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestParameter>

// System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestParameter>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// Meta.Conduit.ConduitActionAttribute

// Meta.Conduit.ConduitActionAttribute

// Meta.Conduit.ConduitAssemblyAttribute

// Meta.Conduit.ConduitAssemblyAttribute

// Meta.Conduit.ConduitEntityAttribute

// Meta.Conduit.ConduitEntityAttribute

// Meta.Conduit.ConduitParameterAttribute

// Meta.Conduit.ConduitParameterAttribute

// Meta.Conduit.ConduitValueAttribute

// Meta.Conduit.ConduitValueAttribute

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// System.OrdinalComparer

// System.OrdinalComparer

// System.Reflection.ParameterModifier

// System.Reflection.ParameterModifier

// System.Single

// System.Single

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.OrdinalIgnoreCaseComparer

// System.OrdinalIgnoreCaseComparer

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.Text.RegularExpressions.Regex

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.MulticastDelegate

// System.MulticastDelegate

// System.SystemException

// System.SystemException

// UnityEngine.TextAsset

// UnityEngine.TextAsset

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Comparison`1<Meta.Conduit.InvocationContext>

// System.Comparison`1<Meta.Conduit.InvocationContext>

// System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean>

// System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean>

// System.Func`2<Meta.Conduit.InvocationContext,System.Boolean>

// System.Func`2<Meta.Conduit.InvocationContext,System.Boolean>

// System.Func`2<System.Reflection.ParameterInfo,System.Boolean>

// System.Func`2<System.Reflection.ParameterInfo,System.Boolean>

// System.NotSupportedException

// System.NotSupportedException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

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
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 m_Items[1];

	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
};


// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::All<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_All_TisRuntimeObject_m57CDB9DB99F9E77214B47367D213B06AC3ED97FF_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB2760A703784902BE10E873BC760166EC9693D63_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared (Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* ___0_comparison, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::SequenceEqual<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_SequenceEqual_TisRuntimeObject_mD7CCFE3DE49A5BD874E39FCE744B398E700192DB_gshared (RuntimeObject* ___0_first, RuntimeObject* ___1_second, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___0_path, const RuntimeMethod* method) ;
// T Meta.Wit.LitJson.JsonMapper::ToObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ToObject_TisRuntimeObject_m7C50F5BF82909A8FDE1F7557063EC03C0CEF6806_gshared (String_t* ___0_json, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.ConduitActionAttribute::set_Intent(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_Intent_m17FF11C23FA3185C28EA1C69E6D2E9FF33186335_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___0_source, method);
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_Aliases(System.Collections.Generic.List`1<System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_Aliases_m995406386D2902278DD1746C5929E313D7DAB1AC_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_value, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.ConduitActionAttribute::set_MinConfidence(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MinConfidence_m2685185A8BCEA19715B5A873EF97153CC87B8D7F_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.ConduitActionAttribute::set_MaxConfidence(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MaxConfidence_mE915D1152683E6AC32BAD4264487A3BB01F08FF6_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.ConduitActionAttribute::set_ValidatePartial(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_ValidatePartial_mE992E86682140452D8D18E7ACFEDFC0AE58F0DDA_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction> Meta.Conduit.Manifest::get_Actions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* Manifest_get_Actions_m40F324369401021B5D0DB4DBA6B35EC6C1AC18C6_inline (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>::GetEnumerator()
inline Enumerator_t50475E3E1405C76878D9C182F4C71DF48340803C List_1_GetEnumerator_m21A5D3985497315B9F22025A05ABC5DF3A39CB07 (List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t50475E3E1405C76878D9C182F4C71DF48340803C (*) (List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestAction>::Dispose()
inline void Enumerator_Dispose_m42FC3C710A2523D28A1D0CAF5B4CD2914D314F60 (Enumerator_t50475E3E1405C76878D9C182F4C71DF48340803C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t50475E3E1405C76878D9C182F4C71DF48340803C*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestAction>::get_Current()
inline ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* Enumerator_get_Current_m2786A735A61AAA5FA5476B673B595B345A18CB0B_inline (Enumerator_t50475E3E1405C76878D9C182F4C71DF48340803C* __this, const RuntimeMethod* method)
{
	return ((  ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* (*) (Enumerator_t50475E3E1405C76878D9C182F4C71DF48340803C*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter> Meta.Conduit.ManifestAction::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* ManifestAction_get_Parameters_m0EF5F625C9026D20CFE0DF0FB062A590565B4543_inline (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>::GetEnumerator()
inline Enumerator_t4D17C090AC4791EEB29E0CF4DDC0DCFF3ECB01E7 List_1_GetEnumerator_m320C589346067F668F28D2D976C6FB116B5AFE7C (List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4D17C090AC4791EEB29E0CF4DDC0DCFF3ECB01E7 (*) (List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestParameter>::Dispose()
inline void Enumerator_Dispose_m705F8405A56533C97D336599F0D5290954945DC9 (Enumerator_t4D17C090AC4791EEB29E0CF4DDC0DCFF3ECB01E7* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4D17C090AC4791EEB29E0CF4DDC0DCFF3ECB01E7*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestParameter>::get_Current()
inline ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* Enumerator_get_Current_m53928428D4124470BF515E24024E12E5685CD869_inline (Enumerator_t4D17C090AC4791EEB29E0CF4DDC0DCFF3ECB01E7* __this, const RuntimeMethod* method)
{
	return ((  ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* (*) (Enumerator_t4D17C090AC4791EEB29E0CF4DDC0DCFF3ECB01E7*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.String Meta.Conduit.ManifestParameter::get_InternalName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_InternalName_mF70C46A0712C9FE0E49E9D9B959A874E89C9A9C9_inline (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.String Meta.Conduit.ManifestParameter::get_QualifiedName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedName_m0FD2507FD0A04B99591E92130A2907E6401E7DDE_inline (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestParameter>::MoveNext()
inline bool Enumerator_MoveNext_m3674523FAAC452BAD2A68DBA3D5B53AAA5664499 (Enumerator_t4D17C090AC4791EEB29E0CF4DDC0DCFF3ECB01E7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4D17C090AC4791EEB29E0CF4DDC0DCFF3ECB01E7*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Meta.Conduit.ManifestAction>::MoveNext()
inline bool Enumerator_MoveNext_m53EF7C93F8F5FCD23497846F7AA37B1B0B9F051F (Enumerator_t50475E3E1405C76878D9C182F4C71DF48340803C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t50475E3E1405C76878D9C182F4C71DF48340803C*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Meta.Conduit.ConduitDispatcher/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m79AA7580B95FDA470E3A01B9889FA3F022E9F6E9 (U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext> Meta.Conduit.Manifest::GetInvocationContexts(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* Manifest_GetInvocationContexts_mD55F56E02DC319F285D9416971B166E6E73994E1 (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, String_t* ___0_actionId, const RuntimeMethod* method) ;
// System.Void System.Func`2<Meta.Conduit.InvocationContext,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mEDFA0DFCCFE4035E3234B9D2DAA75EE9A6BF679F (Func_2_tED40FED45D1DE6C06FE91F6082E28CF3AD081664* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tED40FED45D1DE6C06FE91F6082E28CF3AD081664*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<Meta.Conduit.InvocationContext>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisInvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05_m49E8F9CC96108E3CC395DA783D124B53AD8A1E07 (RuntimeObject* ___0_source, Func_2_tED40FED45D1DE6C06FE91F6082E28CF3AD081664* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tED40FED45D1DE6C06FE91F6082E28CF3AD081664*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___0_source, ___1_predicate, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Meta.Conduit.InvocationContext>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* Enumerable_ToList_TisInvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05_m9512F1A455BAEF6AF66267EB38E3EC76254E9A33 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___0_source, method);
}
// System.Reflection.MethodInfo Meta.Conduit.InvocationContext::get_MethodInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodInfo_t* InvocationContext_get_MethodInfo_m18D5766160EE7E351C355A53BAAF9CB9367F4B48_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) ;
// System.Boolean Meta.Conduit.InvocationContext::get_ValidatePartial()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InvocationContext_get_ValidatePartial_m6026F416EF238451A371E4125F5BC92AF9D1E7A5_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) ;
// System.Single Meta.Conduit.InvocationContext::get_MinConfidence()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InvocationContext_get_MinConfidence_m8320100A867EB9664BB1D5DC95ADA9EE91FD8EE4_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) ;
// System.Single Meta.Conduit.InvocationContext::get_MaxConfidence()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InvocationContext_get_MaxConfidence_mBFE6764249F9604EA7788E22F87D18968FA5AC17_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Reflection.ParameterInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4EB50A8D85414DB2DF89BD0200D31D2A6DC97026 (Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Boolean System.Linq.Enumerable::All<System.Reflection.ParameterInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline bool Enumerable_All_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m1957B763D2F9D6E395B3EA93E97C7331799FB725 (RuntimeObject* ___0_source, Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35* ___1_predicate, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35*, const RuntimeMethod*))Enumerable_All_TisRuntimeObject_m57CDB9DB99F9E77214B47367D213B06AC3ED97FF_gshared)(___0_source, ___1_predicate, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean Meta.Conduit.Manifest::ContainsAction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manifest_ContainsAction_mC6DF421521703AC270FF5A020986E656134A5ADA (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, String_t* ___0_action, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext> Meta.Conduit.ConduitDispatcher::ResolveInvocationContexts(System.String,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* ConduitDispatcher_ResolveInvocationContexts_mD0AC7CD27CD75770525ECA273CB330464604C1CD (ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* __this, String_t* ___0_actionId, float ___1_confidence, bool ___2_partial, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>::get_Count()
inline int32_t List_1_get_Count_mC0BA943D748295859D3CCE7C92D1DAF0E76E1CFA_inline (List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>::GetEnumerator()
inline Enumerator_t53745153360A1FD871F3058CF9403CD54E9B84CF List_1_GetEnumerator_m0D1F39CC340807753A59C6AA4DCC62C688AC8931 (List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t53745153360A1FD871F3058CF9403CD54E9B84CF (*) (List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Meta.Conduit.InvocationContext>::Dispose()
inline void Enumerator_Dispose_m6B583A1B996DF09151A095C92C966630810A5D2B (Enumerator_t53745153360A1FD871F3058CF9403CD54E9B84CF* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t53745153360A1FD871F3058CF9403CD54E9B84CF*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Meta.Conduit.InvocationContext>::get_Current()
inline InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* Enumerator_get_Current_m7E82D06B42C163C6E20374B4BD223B075B4C4B2E_inline (Enumerator_t53745153360A1FD871F3058CF9403CD54E9B84CF* __this, const RuntimeMethod* method)
{
	return ((  InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* (*) (Enumerator_t53745153360A1FD871F3058CF9403CD54E9B84CF*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean Meta.Conduit.ConduitDispatcher::InvokeMethod(Meta.Conduit.InvocationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitDispatcher_InvokeMethod_m2FA25297950DBE77F729F6E0D9EE448D63612427 (ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* __this, InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* ___0_invocationContext, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Meta.Conduit.InvocationContext>::MoveNext()
inline bool Enumerator_MoveNext_m6D1DE9A3C77E32986FDE259E5D8DE4F6F517525C (Enumerator_t53745153360A1FD871F3058CF9403CD54E9B84CF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t53745153360A1FD871F3058CF9403CD54E9B84CF*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E (MethodBase_t* __this, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___0_source, method);
}
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___0_obj, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_parameters, const RuntimeMethod* method) ;
// System.Type Meta.Conduit.InvocationContext::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* InvocationContext_get_Type_mF3CE4F0552F57E7268A4CDF48AF9A1B88BD78EE0_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Boolean Meta.Conduit.ConduitDispatcher::CompatibleInvocationContext(Meta.Conduit.InvocationContext,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitDispatcher_CompatibleInvocationContext_m717CADD9569EC6713412E9DC5063B85433E79794 (ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* __this, InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* ___0_invocationContext, float ___1_confidence, bool ___2_partial, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.ManifestLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestLoader__ctor_mE8C2E5D19E871C4E0B98ECDDF40DBA686D2A8DD7 (ManifestLoader_t88C032862ECBA374162619B4B2FD9C0AE1AE9263* __this, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.ConduitDispatcher::.ctor(Meta.Conduit.IManifestLoader,Meta.Conduit.IInstanceResolver,Meta.Conduit.IParameterProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitDispatcher__ctor_m7B2AC7A1BAF471994493C5550D26A54569D8CCEA (ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* __this, RuntimeObject* ___0_manifestLoader, RuntimeObject* ___1_instanceResolver, RuntimeObject* ___2_parameterProvider, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Replace_m8E802C10B5A591BEA61FC00EA8E4AF398D815A90 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___0_input, String_t* ___1_replacement, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___0_pattern, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>::.ctor()
inline void List_1__ctor_mF4E2960EB740BB25B6765B125C5121A4B2895752 (List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>::.ctor()
inline void List_1__ctor_m52A5602099D2D12AA01CA87C6F80FB7A23CAC496 (List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
inline void Dictionary_2__ctor_m4B46282F56E1C120392B553F9927DD511BFFF4E7 (Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mB2760A703784902BE10E873BC760166EC9693D63_gshared)(__this, ___0_comparer, method);
}
// System.String Meta.Conduit.ManifestAction::get_ID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_ID_mCCA94FFA2F3904129D01D8D27C60C746F80A9611_inline (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E (String_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ManifestAction::get_Assembly()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Assembly_mC20A5E9E09F961C338B8E45C57ECD0715AB33092_inline (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>::get_Count()
inline int32_t List_1_get_Count_mE0EE27BE8D30C224CDE80842F5E79E11F145E8B6_inline (List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>::get_Item(System.Int32)
inline ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* List_1_get_Item_m0A2CF9F1BA3F0D401629BEF8CA32E15D08AB5C73 (List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* (*) (List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.String Meta.Conduit.ManifestParameter::get_QualifiedTypeName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedTypeName_m58FE72048BDC0C57AB3EE8E876FBEC33C66999A5_inline (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ManifestParameter::get_TypeAssembly()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_TypeAssembly_mC4240EE5AD36FBA15C8DFBD919630E21D596902C_inline (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_mA605A28A04232563F51674827C52C17447DE686F (Type_t* __this, String_t* ___0_name, int32_t ___1_bindingAttr, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___2_binder, int32_t ___3_callConvention, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___4_types, ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364* ___5_modifiers, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1 (MethodInfo_t* ___0_left, MethodInfo_t* ___1_right, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_gshared)(___0_source, method);
}
// System.Void Meta.Conduit.InvocationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext__ctor_m519FAA352D30200AF8DD4163E27161C2E7EE8FBF (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.InvocationContext::set_Type(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_Type_m296A49CFC7A7CA57B6897B28B594F1B9D9C894C2_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.InvocationContext::set_MethodInfo(System.Reflection.MethodInfo)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MethodInfo_m88C3904AF0120B16BA40B99AC86D2F58FC67E0CD_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, MethodInfo_t* ___0_value, const RuntimeMethod* method) ;
// System.Single Meta.Conduit.ConduitActionAttribute::get_MinConfidence()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MinConfidence_mCCBF912BF339223A01CE47C6DBF3617DC312E593_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.InvocationContext::set_MinConfidence(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MinConfidence_m6123EC65BA7D243E8E0B3A9CDAF750518A9FD22A_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single Meta.Conduit.ConduitActionAttribute::get_MaxConfidence()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MaxConfidence_mA53C187CBCEC1B0B8736C4CF7AAB63E913ECA5F4_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.InvocationContext::set_MaxConfidence(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MaxConfidence_m676BD27CFC95D8AD6195E34AC95564D4A0B3948B_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean Meta.Conduit.ConduitActionAttribute::get_ValidatePartial()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ConduitActionAttribute_get_ValidatePartial_mD8294194126641F37DBEA00E882B66F253A40C4C_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, const RuntimeMethod* method) ;
// System.Void Meta.Conduit.InvocationContext::set_ValidatePartial(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_ValidatePartial_m23D469C34DF35B16D0062F8102D4EC1D6C254151_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ManifestAction::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Name_mD96EC73537658D01C766C54B0B819AFA1D5DD232_inline (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m93C32BCEED5FA0D8F29449FE9D511BB733BB1A05 (Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>::.ctor()
inline void List_1__ctor_m095AC157F345C0B2B5B5D9FBE6F5EE8477F56C19 (List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m9584173AD45120BB7D1FB40440ED3943B64EE0C3 (Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* __this, String_t* ___0_key, List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7*, String_t*, List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::get_Item(TKey)
inline List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* Dictionary_2_get_Item_mFE452EDE7DBFB4C166B60316955EC702F4810FD2 (Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* (*) (Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>::Add(T)
inline void List_1_Add_m32958BDB535373943F1CABFA0A9E9D86F0D8E206_inline (List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* __this, InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D*, InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::get_Values()
inline ValueCollection_t1557DCE76C64DC1C0A51C1D7019F5C702C6D8A07* Dictionary_2_get_Values_mD6596A5FD4BE712AB341405DB15609860D5A6162 (Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t1557DCE76C64DC1C0A51C1D7019F5C702C6D8A07* (*) (Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// System.Void System.Func`2<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m432DB5C28CB7298129A6B0F1DB39BA9E8CAD62B0 (Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisList_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D_mE90993DD675930A0015628A2555C164AB8C053C7 (RuntimeObject* ___0_source, Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___0_source, ___1_predicate, method);
}
// System.Void System.Comparison`1<Meta.Conduit.InvocationContext>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m11C7DD22C1DA71649A92EBEA62081415CB2C004C (Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>::Sort(System.Comparison`1<T>)
inline void List_1_Sort_m3BC6FC8F7EF5E7E9F30A86FAEDF0478DDA6AE98F (List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* __this, Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31* ___0_comparison, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D*, Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31*, const RuntimeMethod*))List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared)(__this, ___0_comparison, method);
}
// System.Void Meta.Conduit.Manifest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0E8534585ABCD4490AB269E0D350DB556F3D91FE (U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>::.ctor()
inline void List_1__ctor_m34396BF21C23C01910EFD7F01307E7D8BDF80ECE (List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean Meta.Conduit.ManifestAction::Equals(Meta.Conduit.ManifestAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestAction_Equals_mC26F1EE6632BEADDF6581680E6FADDEBC44E83FE (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* ___0_other, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestAction::get_Aliases()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ManifestAction_get_Aliases_m359911E7A85D0F5A230D0AB6D154C05A69233204_inline (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::SequenceEqual<Meta.Conduit.ManifestParameter>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_SequenceEqual_TisManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E_m6C0A42564851357FA3C2162E8396A1C606AF0FF2 (RuntimeObject* ___0_first, RuntimeObject* ___1_second, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_SequenceEqual_TisRuntimeObject_mD7CCFE3DE49A5BD874E39FCE744B398E700192DB_gshared)(___0_first, ___1_second, method);
}
// System.Boolean System.Linq.Enumerable::SequenceEqual<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1 (RuntimeObject* ___0_first, RuntimeObject* ___1_second, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_SequenceEqual_TisRuntimeObject_mD7CCFE3DE49A5BD874E39FCE744B398E700192DB_gshared)(___0_first, ___1_second, method);
}
// System.Boolean Meta.Conduit.ManifestEntity::Equals(Meta.Conduit.ManifestEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestEntity_Equals_m63E5B6F11C9814DB0C9E37E81C8F9215CF3D4AA8 (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* ___0_other, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ManifestEntity::get_ID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_ID_m02506A7F8C1E07DC5EEA06B106183B37B81660B8_inline (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ManifestEntity::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Type_mBC84B9BB2C9E553B69A2D4C1767B20ED1DCE0704_inline (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ManifestEntity::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Name_m6EF67B98CC88F20449A5396CF4DF806A4FA0AC61_inline (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestEntity::get_Values()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ManifestEntity_get_Values_m55A1BC0584AA1542D169B217332865EB79E71259_inline (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.TextAsset>(System.String)
inline TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2 (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* __this, const RuntimeMethod* method) ;
// T Meta.Wit.LitJson.JsonMapper::ToObject<Meta.Conduit.Manifest>(System.String)
inline Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* JsonMapper_ToObject_TisManifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF_m0D6C453F4C844B5193A8760A09944CA717BB54F4 (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* (*) (String_t*, const RuntimeMethod*))JsonMapper_ToObject_TisRuntimeObject_m7C50F5BF82909A8FDE1F7557063EC03C0CEF6806_gshared)(___0_json, method);
}
// System.Boolean Meta.Conduit.Manifest::ResolveActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manifest_ResolveActions_m0D1DC5CFFED58BCEF65CF8A00E79CD5B84C44845 (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ConduitUtilities::DelimitWithUnderscores(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitUtilities_DelimitWithUnderscores_m872CE6950B035EA443E3F82BDABDE6A0FB2C75F2 (String_t* ___0_input, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean Meta.Conduit.ManifestParameter::Equals(Meta.Conduit.ManifestParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestParameter_Equals_mCBB6851B7DB3A7CBF0568C4BA28AE610ACB7BDBA (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* ___0_other, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestParameter::get_Aliases()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ManifestParameter_get_Aliases_mEC8F44D292F09A3661C1CBC2DCCAB8BB96D95D78_inline (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7 (RuntimeObject* ___0_objA, RuntimeObject* ___1_objB, const RuntimeMethod* method) ;
// System.String Meta.Conduit.ManifestParameter::get_EntityType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_EntityType_mFD40D4D06687B92D2A07FE01816023D163F44FE5 (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(TKey)
inline RuntimeObject* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Object System.Enum::Parse(System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_Parse_m0316ABE916ED60AA2257A464A33A33D544EDEE12 (Type_t* ___0_enumType, String_t* ___1_value, bool ___2_ignoreCase, const RuntimeMethod* method) ;
// System.Object System.Convert::ChangeType(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A (RuntimeObject* ___0_value, Type_t* ___1_conversionType, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
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
// System.String Meta.Conduit.ConduitActionAttribute::get_Intent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitActionAttribute_get_Intent_m2F96664442FFDC4188F3E45A38AD331AF14B32EC (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, const RuntimeMethod* method) 
{
	{
		// public string Intent { get; private set; }
		String_t* L_0 = __this->___U3CIntentU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_Intent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_Intent_m17FF11C23FA3185C28EA1C69E6D2E9FF33186335 (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Intent { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CIntentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIntentU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Single Meta.Conduit.ConduitActionAttribute::get_MinConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MinConfidence_mCCBF912BF339223A01CE47C6DBF3617DC312E593 (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, const RuntimeMethod* method) 
{
	{
		// public float MinConfidence { get; protected set; }
		float L_0 = __this->___U3CMinConfidenceU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_MinConfidence(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MinConfidence_m2685185A8BCEA19715B5A873EF97153CC87B8D7F (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MinConfidence { get; protected set; }
		float L_0 = ___0_value;
		__this->___U3CMinConfidenceU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Single Meta.Conduit.ConduitActionAttribute::get_MaxConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MaxConfidence_mA53C187CBCEC1B0B8736C4CF7AAB63E913ECA5F4 (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxConfidence { get; protected set; }
		float L_0 = __this->___U3CMaxConfidenceU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_MaxConfidence(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MaxConfidence_mE915D1152683E6AC32BAD4264487A3BB01F08FF6 (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MaxConfidence { get; protected set; }
		float L_0 = ___0_value;
		__this->___U3CMaxConfidenceU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ConduitActionAttribute::get_Aliases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ConduitActionAttribute_get_Aliases_m75C075213E8379372BC37E8622E4A9C049D2A162 (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; private set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CAliasesU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_Aliases(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_Aliases_m995406386D2902278DD1746C5929E313D7DAB1AC (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; private set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___0_value;
		__this->___U3CAliasesU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAliasesU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Boolean Meta.Conduit.ConduitActionAttribute::get_ValidatePartial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitActionAttribute_get_ValidatePartial_mD8294194126641F37DBEA00E882B66F253A40C4C (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, const RuntimeMethod* method) 
{
	{
		// public bool ValidatePartial { get; private set; }
		bool L_0 = __this->___U3CValidatePartialU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::set_ValidatePartial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_ValidatePartial_mE992E86682140452D8D18E7ACFEDFC0AE58F0DDA (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool ValidatePartial { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CValidatePartialU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::.ctor(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute__ctor_m7353E812531486B3FEDE0622F5BBDFC15C6D987F (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, String_t* ___0_intent, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_aliases, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected ConduitActionAttribute(string intent = "", params string[] aliases)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.Intent = intent;
		String_t* L_0 = ___0_intent;
		ConduitActionAttribute_set_Intent_m17FF11C23FA3185C28EA1C69E6D2E9FF33186335_inline(__this, L_0, NULL);
		// this.Aliases = aliases.ToList();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___1_aliases;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2;
		L_2 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131((RuntimeObject*)L_1, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		ConduitActionAttribute_set_Aliases_m995406386D2902278DD1746C5929E313D7DAB1AC_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Meta.Conduit.ConduitActionAttribute::.ctor(System.String,System.Single,System.Single,System.Boolean,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitActionAttribute__ctor_mB92ABE3B1A9F49CDC910BDE97C75B406B5F4991D (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, String_t* ___0_intent, float ___1_minConfidence, float ___2_maxConfidence, bool ___3_validatePartial, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___4_aliases, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected ConduitActionAttribute(string intent = "", float minConfidence = DEFAULT_MIN_CONFIDENCE, float maxConfidence = DEFAULT_MAX_CONFIDENCE, bool validatePartial = false, params string[] aliases)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.Intent = intent;
		String_t* L_0 = ___0_intent;
		ConduitActionAttribute_set_Intent_m17FF11C23FA3185C28EA1C69E6D2E9FF33186335_inline(__this, L_0, NULL);
		// this.MinConfidence = minConfidence;
		float L_1 = ___1_minConfidence;
		ConduitActionAttribute_set_MinConfidence_m2685185A8BCEA19715B5A873EF97153CC87B8D7F_inline(__this, L_1, NULL);
		// this.MaxConfidence = maxConfidence;
		float L_2 = ___2_maxConfidence;
		ConduitActionAttribute_set_MaxConfidence_mE915D1152683E6AC32BAD4264487A3BB01F08FF6_inline(__this, L_2, NULL);
		// this.ValidatePartial = validatePartial;
		bool L_3 = ___3_validatePartial;
		ConduitActionAttribute_set_ValidatePartial_mE992E86682140452D8D18E7ACFEDFC0AE58F0DDA_inline(__this, L_3, NULL);
		// this.Aliases = aliases.ToList();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ___4_aliases;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5;
		L_5 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131((RuntimeObject*)L_4, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		ConduitActionAttribute_set_Aliases_m995406386D2902278DD1746C5929E313D7DAB1AC_inline(__this, L_5, NULL);
		// }
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
// System.Void Meta.Conduit.ConduitAssemblyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitAssemblyAttribute__ctor_m1B6CFE5146E27E41961BAB3A8A886FF3113EB6C3 (ConduitAssemblyAttribute_tC0D41F8C1603EA3F11136E091BD02A4750CD51FB* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void Meta.Conduit.ConduitEntityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitEntityAttribute__ctor_m9AB1E4FB626B83A1E7381265B66D8F77BAB5ABC9 (ConduitEntityAttribute_tFA871D9874C03C6B6FAFF07518614608268A05ED* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void Meta.Conduit.ConduitParameterAttribute::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitParameterAttribute__ctor_m840EB05478421C32916B87FDB370FAC78329995E (ConduitParameterAttribute_tDC25FA1A539051B07DF432E1D76FACC6032F6B65* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_aliases, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ConduitParameterAttribute(params string[] aliases)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.Aliases = aliases.ToList();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_aliases;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1;
		L_1 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131((RuntimeObject*)L_0, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		__this->___U3CAliasesU3Ek__BackingField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAliasesU3Ek__BackingField_0), (void*)L_1);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ConduitParameterAttribute::get_Aliases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ConduitParameterAttribute_get_Aliases_mAD7972C7B85BF1DD564D93A6BC8973DA87A00A80 (ConduitParameterAttribute_tDC25FA1A539051B07DF432E1D76FACC6032F6B65* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CAliasesU3Ek__BackingField_0;
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
// System.Void Meta.Conduit.ConduitValueAttribute::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitValueAttribute__ctor_m4A6C3BAA971B99F9CD5E1D53530FC825B376F990 (ConduitValueAttribute_t2A5F90C046393DCE843701E6CE8C994CD5F2A750* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_aliases, const RuntimeMethod* method) 
{
	{
		// public ConduitValueAttribute(params string[] aliases)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.Aliases = aliases;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_aliases;
		__this->___U3CAliasesU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAliasesU3Ek__BackingField_0), (void*)L_0);
		// }
		return;
	}
}
// System.String[] Meta.Conduit.ConduitValueAttribute::get_Aliases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ConduitValueAttribute_get_Aliases_mDA75B136D7EA66557B34D2BEB3564617A39C56D7 (ConduitValueAttribute_t2A5F90C046393DCE843701E6CE8C994CD5F2A750* __this, const RuntimeMethod* method) 
{
	{
		// public string[] Aliases { get; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3CAliasesU3Ek__BackingField_0;
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
// System.Void Meta.Conduit.ConduitDispatcher::.ctor(Meta.Conduit.IManifestLoader,Meta.Conduit.IInstanceResolver,Meta.Conduit.IParameterProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitDispatcher__ctor_m7B2AC7A1BAF471994493C5550D26A54569D8CCEA (ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* __this, RuntimeObject* ___0_manifestLoader, RuntimeObject* ___1_instanceResolver, RuntimeObject* ___2_parameterProvider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<string, string> parameterToRoleMap = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->___parameterToRoleMap_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parameterToRoleMap_4), (void*)L_0);
		// public ConduitDispatcher(IManifestLoader manifestLoader, IInstanceResolver instanceResolver, IParameterProvider parameterProvider)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.manifestLoader = manifestLoader;
		RuntimeObject* L_1 = ___0_manifestLoader;
		__this->___manifestLoader_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___manifestLoader_1), (void*)L_1);
		// this.instanceResolver = instanceResolver;
		RuntimeObject* L_2 = ___1_instanceResolver;
		__this->___instanceResolver_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instanceResolver_2), (void*)L_2);
		// this.parameterProvider = parameterProvider;
		RuntimeObject* L_3 = ___2_parameterProvider;
		__this->___parameterProvider_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parameterProvider_3), (void*)L_3);
		// }
		return;
	}
}
// System.Void Meta.Conduit.ConduitDispatcher::Initialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitDispatcher_Initialize_mC3B84B3EE71E816BED54F79ADE3833F3CD48A457 (ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* __this, String_t* ___0_manifestFilePath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m42FC3C710A2523D28A1D0CAF5B4CD2914D314F60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m705F8405A56533C97D336599F0D5290954945DC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3674523FAAC452BAD2A68DBA3D5B53AAA5664499_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m53EF7C93F8F5FCD23497846F7AA37B1B0B9F051F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2786A735A61AAA5FA5476B673B595B345A18CB0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m53928428D4124470BF515E24024E12E5685CD869_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IManifestLoader_tAABD74349F6106DADEC127041A599417981F8DD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m21A5D3985497315B9F22025A05ABC5DF3A39CB07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m320C589346067F668F28D2D976C6FB116B5AFE7C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Enumerator_t50475E3E1405C76878D9C182F4C71DF48340803C V_2;
	memset((&V_2), 0, sizeof(V_2));
	ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* V_3 = NULL;
	Enumerator_t4D17C090AC4791EEB29E0CF4DDC0DCFF3ECB01E7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* V_5 = NULL;
	bool V_6 = false;
	{
		// if (this.manifest != null)
		Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* L_0 = __this->___manifest_0;
		V_0 = (bool)((!(((RuntimeObject*)(Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		goto IL_00dd;
	}

IL_0014:
	{
		// manifest = this.manifestLoader.LoadManifest(manifestFilePath);
		RuntimeObject* L_2 = __this->___manifestLoader_1;
		String_t* L_3 = ___0_manifestFilePath;
		NullCheck(L_2);
		Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* L_4;
		L_4 = InterfaceFuncInvoker1< Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF*, String_t* >::Invoke(0 /* Meta.Conduit.Manifest Meta.Conduit.IManifestLoader::LoadManifest(System.String) */, IManifestLoader_tAABD74349F6106DADEC127041A599417981F8DD8_il2cpp_TypeInfo_var, L_2, L_3);
		__this->___manifest_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___manifest_0), (void*)L_4);
		// if (manifest == null)
		Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* L_5 = __this->___manifest_0;
		V_1 = (bool)((((RuntimeObject*)(Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		// return;
		goto IL_00dd;
	}

IL_0039:
	{
		// foreach (var action in manifest.Actions)
		Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* L_7 = __this->___manifest_0;
		NullCheck(L_7);
		List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* L_8;
		L_8 = Manifest_get_Actions_m40F324369401021B5D0DB4DBA6B35EC6C1AC18C6_inline(L_7, NULL);
		NullCheck(L_8);
		Enumerator_t50475E3E1405C76878D9C182F4C71DF48340803C L_9;
		L_9 = List_1_GetEnumerator_m21A5D3985497315B9F22025A05ABC5DF3A39CB07(L_8, List_1_GetEnumerator_m21A5D3985497315B9F22025A05ABC5DF3A39CB07_RuntimeMethod_var);
		V_2 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ce:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m42FC3C710A2523D28A1D0CAF5B4CD2914D314F60((&V_2), Enumerator_Dispose_m42FC3C710A2523D28A1D0CAF5B4CD2914D314F60_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c3_1;
			}

IL_004d_1:
			{
				// foreach (var action in manifest.Actions)
				ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_10;
				L_10 = Enumerator_get_Current_m2786A735A61AAA5FA5476B673B595B345A18CB0B_inline((&V_2), Enumerator_get_Current_m2786A735A61AAA5FA5476B673B595B345A18CB0B_RuntimeMethod_var);
				V_3 = L_10;
				// foreach (var parameter in action.Parameters)
				ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_11 = V_3;
				NullCheck(L_11);
				List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* L_12;
				L_12 = ManifestAction_get_Parameters_m0EF5F625C9026D20CFE0DF0FB062A590565B4543_inline(L_11, NULL);
				NullCheck(L_12);
				Enumerator_t4D17C090AC4791EEB29E0CF4DDC0DCFF3ECB01E7 L_13;
				L_13 = List_1_GetEnumerator_m320C589346067F668F28D2D976C6FB116B5AFE7C(L_12, List_1_GetEnumerator_m320C589346067F668F28D2D976C6FB116B5AFE7C_RuntimeMethod_var);
				V_4 = L_13;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00b3_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m705F8405A56533C97D336599F0D5290954945DC9((&V_4), Enumerator_Dispose_m705F8405A56533C97D336599F0D5290954945DC9_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_00a8_2;
					}

IL_0066_2:
					{
						// foreach (var parameter in action.Parameters)
						ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_14;
						L_14 = Enumerator_get_Current_m53928428D4124470BF515E24024E12E5685CD869_inline((&V_4), Enumerator_get_Current_m53928428D4124470BF515E24024E12E5685CD869_RuntimeMethod_var);
						V_5 = L_14;
						// if (!parameterToRoleMap.ContainsKey(parameter.InternalName))
						Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_15 = __this->___parameterToRoleMap_4;
						ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_16 = V_5;
						NullCheck(L_16);
						String_t* L_17;
						L_17 = ManifestParameter_get_InternalName_mF70C46A0712C9FE0E49E9D9B959A874E89C9A9C9_inline(L_16, NULL);
						NullCheck(L_15);
						bool L_18;
						L_18 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_15, L_17, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
						V_6 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
						bool L_19 = V_6;
						if (!L_19)
						{
							goto IL_00a7_2;
						}
					}
					{
						// parameterToRoleMap.Add(parameter.InternalName, parameter.QualifiedName);
						Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_20 = __this->___parameterToRoleMap_4;
						ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_21 = V_5;
						NullCheck(L_21);
						String_t* L_22;
						L_22 = ManifestParameter_get_InternalName_mF70C46A0712C9FE0E49E9D9B959A874E89C9A9C9_inline(L_21, NULL);
						ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_23 = V_5;
						NullCheck(L_23);
						String_t* L_24;
						L_24 = ManifestParameter_get_QualifiedName_m0FD2507FD0A04B99591E92130A2907E6401E7DDE_inline(L_23, NULL);
						NullCheck(L_20);
						Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_20, L_22, L_24, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
					}

IL_00a7_2:
					{
					}

IL_00a8_2:
					{
						// foreach (var parameter in action.Parameters)
						bool L_25;
						L_25 = Enumerator_MoveNext_m3674523FAAC452BAD2A68DBA3D5B53AAA5664499((&V_4), Enumerator_MoveNext_m3674523FAAC452BAD2A68DBA3D5B53AAA5664499_RuntimeMethod_var);
						if (L_25)
						{
							goto IL_0066_2;
						}
					}
					{
						goto IL_00c2_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00c2_1:
			{
			}

IL_00c3_1:
			{
				// foreach (var action in manifest.Actions)
				bool L_26;
				L_26 = Enumerator_MoveNext_m53EF7C93F8F5FCD23497846F7AA37B1B0B9F051F((&V_2), Enumerator_MoveNext_m53EF7C93F8F5FCD23497846F7AA37B1B0B9F051F_RuntimeMethod_var);
				if (L_26)
				{
					goto IL_004d_1;
				}
			}
			{
				goto IL_00dd;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dd:
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext> Meta.Conduit.ConduitDispatcher::ResolveInvocationContexts(System.String,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* ConduitDispatcher_ResolveInvocationContexts_mD0AC7CD27CD75770525ECA273CB330464604C1CD (ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* __this, String_t* ___0_actionId, float ___1_confidence, bool ___2_partial, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisInvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05_m9512F1A455BAEF6AF66267EB38E3EC76254E9A33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisInvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05_m49E8F9CC96108E3CC395DA783D124B53AD8A1E07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tED40FED45D1DE6C06FE91F6082E28CF3AD081664_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CResolveInvocationContextsU3Eb__0_m8B21276C802B14EC7D69F34AA4122F7DE8CF2725_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E* V_0 = NULL;
	List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* V_1 = NULL;
	List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* V_2 = NULL;
	{
		U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E* L_0 = (U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass7_0__ctor_m79AA7580B95FDA470E3A01B9889FA3F022E9F6E9(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E* L_2 = V_0;
		float L_3 = ___1_confidence;
		NullCheck(L_2);
		L_2->___confidence_1 = L_3;
		U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E* L_4 = V_0;
		bool L_5 = ___2_partial;
		NullCheck(L_4);
		L_4->___partial_2 = L_5;
		// var invocationContexts = manifest.GetInvocationContexts(actionId);
		Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* L_6 = __this->___manifest_0;
		String_t* L_7 = ___0_actionId;
		NullCheck(L_6);
		List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* L_8;
		L_8 = Manifest_GetInvocationContexts_mD55F56E02DC319F285D9416971B166E6E73994E1(L_6, L_7, NULL);
		V_1 = L_8;
		// return invocationContexts.Where(context => this.CompatibleInvocationContext(context, confidence, partial)).ToList();
		List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* L_9 = V_1;
		U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E* L_10 = V_0;
		Func_2_tED40FED45D1DE6C06FE91F6082E28CF3AD081664* L_11 = (Func_2_tED40FED45D1DE6C06FE91F6082E28CF3AD081664*)il2cpp_codegen_object_new(Func_2_tED40FED45D1DE6C06FE91F6082E28CF3AD081664_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Func_2__ctor_mEDFA0DFCCFE4035E3234B9D2DAA75EE9A6BF679F(L_11, L_10, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3CResolveInvocationContextsU3Eb__0_m8B21276C802B14EC7D69F34AA4122F7DE8CF2725_RuntimeMethod_var), NULL);
		RuntimeObject* L_12;
		L_12 = Enumerable_Where_TisInvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05_m49E8F9CC96108E3CC395DA783D124B53AD8A1E07(L_9, L_11, Enumerable_Where_TisInvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05_m49E8F9CC96108E3CC395DA783D124B53AD8A1E07_RuntimeMethod_var);
		List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* L_13;
		L_13 = Enumerable_ToList_TisInvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05_m9512F1A455BAEF6AF66267EB38E3EC76254E9A33(L_12, Enumerable_ToList_TisInvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05_m9512F1A455BAEF6AF66267EB38E3EC76254E9A33_RuntimeMethod_var);
		V_2 = L_13;
		goto IL_0043;
	}

IL_0043:
	{
		// }
		List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* L_14 = V_2;
		return L_14;
	}
}
// System.Boolean Meta.Conduit.ConduitDispatcher::CompatibleInvocationContext(Meta.Conduit.InvocationContext,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitDispatcher_CompatibleInvocationContext_m717CADD9569EC6713412E9DC5063B85433E79794 (ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* __this, InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* ___0_invocationContext, float ___1_confidence, bool ___2_partial, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitDispatcher_U3CCompatibleInvocationContextU3Eb__8_0_m2CEEFFE91923C1898CAF9829B7BB09D268E3C74D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_All_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m1957B763D2F9D6E395B3EA93E97C7331799FB725_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6C8906B0336A2295C8CE2CD8760E4BE18B9AA67);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA78B7EE9EF87D7EBFF96384672C42877EF4770C7);
		s_Il2CppMethodInitialized = true;
	}
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B5_0 = 0;
	{
		// var parameters = invocationContext.MethodInfo.GetParameters();
		InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_0 = ___0_invocationContext;
		NullCheck(L_0);
		MethodInfo_t* L_1;
		L_1 = InvocationContext_get_MethodInfo_m18D5766160EE7E351C355A53BAAF9CB9367F4B48_inline(L_0, NULL);
		NullCheck(L_1);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_2;
		L_2 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_1);
		V_0 = L_2;
		// if (invocationContext.ValidatePartial != partial)
		InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_3 = ___0_invocationContext;
		NullCheck(L_3);
		bool L_4;
		L_4 = InvocationContext_get_ValidatePartial_m6026F416EF238451A371E4125F5BC92AF9D1E7A5_inline(L_3, NULL);
		bool L_5 = ___2_partial;
		V_1 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0084;
	}

IL_0022:
	{
		// else if (invocationContext.MinConfidence > confidence || confidence > invocationContext.MaxConfidence)
		InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_7 = ___0_invocationContext;
		NullCheck(L_7);
		float L_8;
		L_8 = InvocationContext_get_MinConfidence_m8320100A867EB9664BB1D5DC95ADA9EE91FD8EE4_inline(L_7, NULL);
		float L_9 = ___1_confidence;
		if ((((float)L_8) > ((float)L_9)))
		{
			goto IL_0036;
		}
	}
	{
		float L_10 = ___1_confidence;
		InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_11 = ___0_invocationContext;
		NullCheck(L_11);
		float L_12;
		L_12 = InvocationContext_get_MaxConfidence_mBFE6764249F9604EA7788E22F87D18968FA5AC17_inline(L_11, NULL);
		G_B5_0 = ((((float)L_10) > ((float)L_12))? 1 : 0);
		goto IL_0037;
	}

IL_0036:
	{
		G_B5_0 = 1;
	}

IL_0037:
	{
		V_3 = (bool)G_B5_0;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0040;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0084;
	}

IL_0040:
	{
		// else if (!parameters.All(parameter => this.parameterProvider.ContainsParameter(parameter)))
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_14 = V_0;
		Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35* L_15 = (Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35*)il2cpp_codegen_object_new(Func_2_tF2CB0011FB715A4E24C8F2347178A002F1DD2B35_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Func_2__ctor_m4EB50A8D85414DB2DF89BD0200D31D2A6DC97026(L_15, __this, (intptr_t)((void*)ConduitDispatcher_U3CCompatibleInvocationContextU3Eb__8_0_m2CEEFFE91923C1898CAF9829B7BB09D268E3C74D_RuntimeMethod_var), NULL);
		bool L_16;
		L_16 = Enumerable_All_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m1957B763D2F9D6E395B3EA93E97C7331799FB725((RuntimeObject*)L_14, L_15, Enumerable_All_TisParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_m1957B763D2F9D6E395B3EA93E97C7331799FB725_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0080;
		}
	}
	{
		// Debug.LogError($"Failed to find execution context for {invocationContext.MethodInfo.Name}. Parameters could not be matched");
		InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_18 = ___0_invocationContext;
		NullCheck(L_18);
		MethodInfo_t* L_19;
		L_19 = InvocationContext_get_MethodInfo_m18D5766160EE7E351C355A53BAAF9CB9367F4B48_inline(L_18, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralA78B7EE9EF87D7EBFF96384672C42877EF4770C7, L_20, _stringLiteralA6C8906B0336A2295C8CE2CD8760E4BE18B9AA67, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_21, NULL);
		// return false;
		V_2 = (bool)0;
		goto IL_0084;
	}

IL_0080:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0084;
	}

IL_0084:
	{
		// }
		bool L_22 = V_2;
		return L_22;
	}
}
// System.Boolean Meta.Conduit.ConduitDispatcher::InvokeAction(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitDispatcher_InvokeAction_mF2EBA80C82323CA2D3FBF2A9CD1C30CA61D34A20 (ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* __this, String_t* ___0_actionId, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___1_parameters, float ___2_confidence, bool ___3_partial, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6B583A1B996DF09151A095C92C966630810A5D2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6D1DE9A3C77E32986FDE259E5D8DE4F6F517525C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7E82D06B42C163C6E20374B4BD223B075B4C4B2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParameterProvider_t2DE2745219374609D4B429816D358E729CA8BFF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0D1F39CC340807753A59C6AA4DCC62C688AC8931_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC0BA943D748295859D3CCE7C92D1DAF0E76E1CFA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Enumerator_t53745153360A1FD871F3058CF9403CD54E9B84CF V_5;
	memset((&V_5), 0, sizeof(V_5));
	InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* V_6 = NULL;
	bool V_7 = false;
	Exception_t* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (!manifest.ContainsAction(actionId))
		Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* L_0 = __this->___manifest_0;
		String_t* L_1 = ___0_actionId;
		NullCheck(L_0);
		bool L_2;
		L_2 = Manifest_ContainsAction_mC6DF421521703AC270FF5A020986E656134A5ADA(L_0, L_1, NULL);
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00c3;
	}

IL_001c:
	{
		// this.parameterProvider.Populate(parameters, this.parameterToRoleMap);
		RuntimeObject* L_4 = __this->___parameterProvider_3;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5 = ___1_parameters;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6 = __this->___parameterToRoleMap_4;
		NullCheck(L_4);
		InterfaceActionInvoker2< Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke(0 /* System.Void Meta.Conduit.IParameterProvider::Populate(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Collections.Generic.Dictionary`2<System.String,System.String>) */, IParameterProvider_t2DE2745219374609D4B429816D358E729CA8BFF3_il2cpp_TypeInfo_var, L_4, L_5, L_6);
		// var invocationContexts = this.ResolveInvocationContexts(actionId, confidence, partial);
		String_t* L_7 = ___0_actionId;
		float L_8 = ___2_confidence;
		bool L_9 = ___3_partial;
		List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* L_10;
		L_10 = ConduitDispatcher_ResolveInvocationContexts_mD0AC7CD27CD75770525ECA273CB330464604C1CD(__this, L_7, L_8, L_9, NULL);
		V_0 = L_10;
		// if (invocationContexts.Count < 1)
		List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_mC0BA943D748295859D3CCE7C92D1DAF0E76E1CFA_inline(L_11, List_1_get_Count_mC0BA943D748295859D3CCE7C92D1DAF0E76E1CFA_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_12) < ((int32_t)1))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_004e;
		}
	}
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00c3;
	}

IL_004e:
	{
		// var allSucceeded = true;
		V_1 = (bool)1;
		// foreach (var invocationContext in invocationContexts)
		List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* L_14 = V_0;
		NullCheck(L_14);
		Enumerator_t53745153360A1FD871F3058CF9403CD54E9B84CF L_15;
		L_15 = List_1_GetEnumerator_m0D1F39CC340807753A59C6AA4DCC62C688AC8931(L_14, List_1_GetEnumerator_m0D1F39CC340807753A59C6AA4DCC62C688AC8931_RuntimeMethod_var);
		V_5 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6B583A1B996DF09151A095C92C966630810A5D2B((&V_5), Enumerator_Dispose_m6B583A1B996DF09151A095C92C966630810A5D2B_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_005b_1:
			{
				// foreach (var invocationContext in invocationContexts)
				InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_16;
				L_16 = Enumerator_get_Current_m7E82D06B42C163C6E20374B4BD223B075B4C4B2E_inline((&V_5), Enumerator_get_Current_m7E82D06B42C163C6E20374B4BD223B075B4C4B2E_RuntimeMethod_var);
				V_6 = L_16;
			}
			try
			{// begin try (depth: 2)
				{
					// if (!this.InvokeMethod(invocationContext))
					InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_17 = V_6;
					bool L_18;
					L_18 = ConduitDispatcher_InvokeMethod_m2FA25297950DBE77F729F6E0D9EE448D63612427(__this, L_17, NULL);
					V_7 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
					bool L_19 = V_7;
					if (!L_19)
					{
						goto IL_007b_2;
					}
				}
				{
					// allSucceeded = false;
					V_1 = (bool)0;
				}

IL_007b_2:
				{
					goto IL_00a4_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_007e_1;
				}
				throw e;
			}

CATCH_007e_1:
			{// begin catch(System.Exception)
				// catch (Exception e)
				V_8 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// Debug.LogError($"Failed to invoke {invocationContext.MethodInfo.Name}. {e}");
				InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_20 = V_6;
				NullCheck(L_20);
				MethodInfo_t* L_21;
				L_21 = InvocationContext_get_MethodInfo_m18D5766160EE7E351C355A53BAAF9CB9367F4B48_inline(L_20, NULL);
				NullCheck(L_21);
				String_t* L_22;
				L_22 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_21);
				Exception_t* L_23 = V_8;
				String_t* L_24;
				L_24 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1EDECAA096CC9146E798F06E367FD32D469ADF53)), L_22, L_23, NULL);
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_24, NULL);
				// allSucceeded = false;
				V_1 = (bool)0;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00a4_1;
			}// end catch (depth: 2)

IL_00a4_1:
			{
			}

IL_00a5_1:
			{
				// foreach (var invocationContext in invocationContexts)
				bool L_25;
				L_25 = Enumerator_MoveNext_m6D1DE9A3C77E32986FDE259E5D8DE4F6F517525C((&V_5), Enumerator_MoveNext_m6D1DE9A3C77E32986FDE259E5D8DE4F6F517525C_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_005b_1;
				}
			}
			{
				goto IL_00bf;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bf:
	{
		// return allSucceeded;
		bool L_26 = V_1;
		V_3 = L_26;
		goto IL_00c3;
	}

IL_00c3:
	{
		// }
		bool L_27 = V_3;
		return L_27;
	}
}
// System.Boolean Meta.Conduit.ConduitDispatcher::InvokeMethod(Meta.Conduit.InvocationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitDispatcher_InvokeMethod_m2FA25297950DBE77F729F6E0D9EE448D63612427 (ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* __this, InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* ___0_invocationContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInstanceResolver_t4081CA8E4E0CFA6F97CCE27A95338CF91C0542F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParameterProvider_t2DE2745219374609D4B429816D358E729CA8BFF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9922970D8005166DB69DF5FECF38875C42ADC753);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD498A609ABCC1ADA0E1D7FBCCB2FACE5277DBBE0);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Exception_t* V_8 = NULL;
	bool V_9 = false;
	RuntimeObject* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	Exception_t* V_12 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var method = invocationContext.MethodInfo;
		InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_0 = ___0_invocationContext;
		NullCheck(L_0);
		MethodInfo_t* L_1;
		L_1 = InvocationContext_get_MethodInfo_m18D5766160EE7E351C355A53BAAF9CB9367F4B48_inline(L_0, NULL);
		V_0 = L_1;
		// var formalParametersInfo = method.GetParameters();
		MethodInfo_t* L_2 = V_0;
		NullCheck(L_2);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_3;
		L_3 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		V_1 = L_3;
		// var parameterObjects = new object[formalParametersInfo.Length];
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_4 = V_1;
		NullCheck(L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		V_2 = L_5;
		// for (var i = 0; i < formalParametersInfo.Length; i++)
		V_3 = 0;
		goto IL_0076;
	}

IL_001c:
	{
		// if (!parameterProvider.ContainsParameter(formalParametersInfo[i]))
		RuntimeObject* L_6 = __this->___parameterProvider_3;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_7 = V_1;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		bool L_11;
		L_11 = InterfaceFuncInvoker1< bool, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* >::Invoke(1 /* System.Boolean Meta.Conduit.IParameterProvider::ContainsParameter(System.Reflection.ParameterInfo) */, IParameterProvider_t2DE2745219374609D4B429816D358E729CA8BFF3_il2cpp_TypeInfo_var, L_6, L_10);
		V_4 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0060;
		}
	}
	{
		// Debug.LogError($"Failed to find parameter {formalParametersInfo[i].Name} while invoking {method.Name}");
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_13 = V_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_16);
		MethodInfo_t* L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_18);
		String_t* L_20;
		L_20 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralD498A609ABCC1ADA0E1D7FBCCB2FACE5277DBBE0, L_17, _stringLiteral9922970D8005166DB69DF5FECF38875C42ADC753, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_20, NULL);
		// return false;
		V_5 = (bool)0;
		goto IL_0146;
	}

IL_0060:
	{
		// parameterObjects[i] = parameterProvider.GetParameterValue(formalParametersInfo[i]);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = V_2;
		int32_t L_22 = V_3;
		RuntimeObject* L_23 = __this->___parameterProvider_3;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_24 = V_1;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_23);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker1< RuntimeObject*, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* >::Invoke(2 /* System.Object Meta.Conduit.IParameterProvider::GetParameterValue(System.Reflection.ParameterInfo) */, IParameterProvider_t2DE2745219374609D4B429816D358E729CA8BFF3_il2cpp_TypeInfo_var, L_23, L_27);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_28);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (RuntimeObject*)L_28);
		// for (var i = 0; i < formalParametersInfo.Length; i++)
		int32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0076:
	{
		// for (var i = 0; i < formalParametersInfo.Length; i++)
		int32_t L_30 = V_3;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_31 = V_1;
		NullCheck(L_31);
		V_6 = (bool)((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))))? 1 : 0);
		bool L_32 = V_6;
		if (L_32)
		{
			goto IL_001c;
		}
	}
	{
		// if (method.IsStatic)
		MethodInfo_t* L_33 = V_0;
		NullCheck(L_33);
		bool L_34;
		L_34 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_33, NULL);
		V_7 = L_34;
		bool L_35 = V_7;
		if (!L_35)
		{
			goto IL_00c9;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		// method.Invoke(null, parameterObjects.ToArray());
		MethodInfo_t* L_36 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38;
		L_38 = Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D((RuntimeObject*)L_37, Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_RuntimeMethod_var);
		NullCheck(L_36);
		RuntimeObject* L_39;
		L_39 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_36, NULL, L_38, NULL);
		goto IL_00c4;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a1;
		}
		throw e;
	}

CATCH_00a1:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_8 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.LogError($"Failed to invoke static method {method.Name}. {e}");
		MethodInfo_t* L_40 = V_0;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_40);
		Exception_t* L_42 = V_8;
		String_t* L_43;
		L_43 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF19C581C636A926E20F7D783DF0F1AE22C19E0B9)), L_41, L_42, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_43, NULL);
		// return false;
		V_5 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0146;
	}// end catch (depth: 1)

IL_00c4:
	{
		// return true;
		V_5 = (bool)1;
		goto IL_0146;
	}

IL_00c9:
	{
		// var allSucceeded = true;
		V_9 = (bool)1;
		// foreach (var obj in this.instanceResolver.GetObjectsOfType(invocationContext.Type))
		RuntimeObject* L_44 = __this->___instanceResolver_2;
		InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_45 = ___0_invocationContext;
		NullCheck(L_45);
		Type_t* L_46;
		L_46 = InvocationContext_get_Type_mF3CE4F0552F57E7268A4CDF48AF9A1B88BD78EE0_inline(L_45, NULL);
		NullCheck(L_44);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* System.Collections.Generic.IEnumerable`1<System.Object> Meta.Conduit.IInstanceResolver::GetObjectsOfType(System.Type) */, IInstanceResolver_t4081CA8E4E0CFA6F97CCE27A95338CF91C0542F0_il2cpp_TypeInfo_var, L_44, L_46);
		NullCheck(L_47);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9_il2cpp_TypeInfo_var, L_47);
		V_10 = L_48;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0133:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_49 = V_10;
					if (!L_49)
					{
						goto IL_013f;
					}
				}
				{
					RuntimeObject* L_50 = V_10;
					NullCheck(L_50);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_50);
				}

IL_013f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0128_1;
			}

IL_00e8_1:
			{
				// foreach (var obj in this.instanceResolver.GetObjectsOfType(invocationContext.Type))
				RuntimeObject* L_51 = V_10;
				NullCheck(L_51);
				RuntimeObject* L_52;
				L_52 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD_il2cpp_TypeInfo_var, L_51);
				V_11 = L_52;
			}
			try
			{// begin try (depth: 2)
				// method.Invoke(obj, parameterObjects.ToArray());
				MethodInfo_t* L_53 = V_0;
				RuntimeObject* L_54 = V_11;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_55 = V_2;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_56;
				L_56 = Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D((RuntimeObject*)L_55, Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_RuntimeMethod_var);
				NullCheck(L_53);
				RuntimeObject* L_57;
				L_57 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_53, L_54, L_56, NULL);
				goto IL_0127_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0105_1;
				}
				throw e;
			}

CATCH_0105_1:
			{// begin catch(System.Exception)
				// catch (Exception e)
				V_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// Debug.LogError($"Failed to invoke method {method.Name}. {e} on {obj}");
				MethodInfo_t* L_58 = V_0;
				NullCheck(L_58);
				String_t* L_59;
				L_59 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_58);
				Exception_t* L_60 = V_12;
				RuntimeObject* L_61 = V_11;
				String_t* L_62;
				L_62 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE15B6F2D7831CA81037E8DCF7B3F54A8A2AD80BC)), L_59, L_60, L_61, NULL);
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_62, NULL);
				// allSucceeded = false;
				V_9 = (bool)0;
				// continue;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0128_1;
			}// end catch (depth: 2)

IL_0127_1:
			{
			}

IL_0128_1:
			{
				// foreach (var obj in this.instanceResolver.GetObjectsOfType(invocationContext.Type))
				RuntimeObject* L_63 = V_10;
				NullCheck(L_63);
				bool L_64;
				L_64 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_63);
				if (L_64)
				{
					goto IL_00e8_1;
				}
			}
			{
				goto IL_0140;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0140:
	{
		// return allSucceeded;
		bool L_65 = V_9;
		V_5 = L_65;
		goto IL_0146;
	}

IL_0146:
	{
		// }
		bool L_66 = V_5;
		return L_66;
	}
}
// System.Boolean Meta.Conduit.ConduitDispatcher::<CompatibleInvocationContext>b__8_0(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConduitDispatcher_U3CCompatibleInvocationContextU3Eb__8_0_m2CEEFFE91923C1898CAF9829B7BB09D268E3C74D (ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* __this, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___0_parameter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IParameterProvider_t2DE2745219374609D4B429816D358E729CA8BFF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// else if (!parameters.All(parameter => this.parameterProvider.ContainsParameter(parameter)))
		RuntimeObject* L_0 = __this->___parameterProvider_3;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_1 = ___0_parameter;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* >::Invoke(1 /* System.Boolean Meta.Conduit.IParameterProvider::ContainsParameter(System.Reflection.ParameterInfo) */, IParameterProvider_t2DE2745219374609D4B429816D358E729CA8BFF3_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
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
// System.Void Meta.Conduit.ConduitDispatcher/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m79AA7580B95FDA470E3A01B9889FA3F022E9F6E9 (U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Meta.Conduit.ConduitDispatcher/<>c__DisplayClass7_0::<ResolveInvocationContexts>b__0(Meta.Conduit.InvocationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass7_0_U3CResolveInvocationContextsU3Eb__0_m8B21276C802B14EC7D69F34AA4122F7DE8CF2725 (U3CU3Ec__DisplayClass7_0_t808A69E7F28D20D38387F55BA1DCACA5B6F4435E* __this, InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* ___0_context, const RuntimeMethod* method) 
{
	{
		// return invocationContexts.Where(context => this.CompatibleInvocationContext(context, confidence, partial)).ToList();
		ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* L_0 = __this->___U3CU3E4__this_0;
		InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_1 = ___0_context;
		float L_2 = __this->___confidence_1;
		bool L_3 = __this->___partial_2;
		NullCheck(L_0);
		bool L_4;
		L_4 = ConduitDispatcher_CompatibleInvocationContext_m717CADD9569EC6713412E9DC5063B85433E79794(L_0, L_1, L_2, L_3, NULL);
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
// System.Void Meta.Conduit.ConduitDispatcherFactory::.ctor(Meta.Conduit.IInstanceResolver,Meta.Conduit.IParameterProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitDispatcherFactory__ctor_m78F277075B4DD567BC44D472104A2542EF6A003B (ConduitDispatcherFactory_tCBCB16493732382F380C4656A15645C37A8D19EF* __this, RuntimeObject* ___0_instanceResolver, RuntimeObject* ___1_parameterProvider, const RuntimeMethod* method) 
{
	{
		// public ConduitDispatcherFactory(IInstanceResolver instanceResolver, IParameterProvider parameterProvider)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.instanceResolver = instanceResolver;
		RuntimeObject* L_0 = ___0_instanceResolver;
		__this->___instanceResolver_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instanceResolver_1), (void*)L_0);
		// this.parameterProvider = parameterProvider;
		RuntimeObject* L_1 = ___1_parameterProvider;
		__this->___parameterProvider_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parameterProvider_2), (void*)L_1);
		// }
		return;
	}
}
// Meta.Conduit.IConduitDispatcher Meta.Conduit.ConduitDispatcherFactory::GetDispatcher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConduitDispatcherFactory_GetDispatcher_m149BF5389491BC19D2176AB1FACA7A8E822F31A6 (ConduitDispatcherFactory_tCBCB16493732382F380C4656A15645C37A8D19EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitDispatcherFactory_tCBCB16493732382F380C4656A15645C37A8D19EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManifestLoader_t88C032862ECBA374162619B4B2FD9C0AE1AE9263_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// return instance = instance ??
		//                   new ConduitDispatcher(new ManifestLoader(), this.instanceResolver,
		//                       this.parameterProvider);
		RuntimeObject* L_0 = ((ConduitDispatcherFactory_tCBCB16493732382F380C4656A15645C37A8D19EF_StaticFields*)il2cpp_codegen_static_fields_for(ConduitDispatcherFactory_tCBCB16493732382F380C4656A15645C37A8D19EF_il2cpp_TypeInfo_var))->___instance_0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0020;
		}
	}
	{
		ManifestLoader_t88C032862ECBA374162619B4B2FD9C0AE1AE9263* L_2 = (ManifestLoader_t88C032862ECBA374162619B4B2FD9C0AE1AE9263*)il2cpp_codegen_object_new(ManifestLoader_t88C032862ECBA374162619B4B2FD9C0AE1AE9263_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ManifestLoader__ctor_mE8C2E5D19E871C4E0B98ECDDF40DBA686D2A8DD7(L_2, NULL);
		RuntimeObject* L_3 = __this->___instanceResolver_1;
		RuntimeObject* L_4 = __this->___parameterProvider_2;
		ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD* L_5 = (ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD*)il2cpp_codegen_object_new(ConduitDispatcher_tFB725A6F7EFC210C977460889C13DB3A55D1FCDD_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ConduitDispatcher__ctor_m7B2AC7A1BAF471994493C5550D26A54569D8CCEA(L_5, L_2, L_3, L_4, NULL);
		G_B2_0 = ((RuntimeObject*)(L_5));
	}

IL_0020:
	{
		RuntimeObject* L_6 = G_B2_0;
		((ConduitDispatcherFactory_tCBCB16493732382F380C4656A15645C37A8D19EF_StaticFields*)il2cpp_codegen_static_fields_for(ConduitDispatcherFactory_tCBCB16493732382F380C4656A15645C37A8D19EF_il2cpp_TypeInfo_var))->___instance_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((ConduitDispatcherFactory_tCBCB16493732382F380C4656A15645C37A8D19EF_StaticFields*)il2cpp_codegen_static_fields_for(ConduitDispatcherFactory_tCBCB16493732382F380C4656A15645C37A8D19EF_il2cpp_TypeInfo_var))->___instance_0), (void*)L_6);
		V_0 = L_6;
		goto IL_0029;
	}

IL_0029:
	{
		// }
		RuntimeObject* L_7 = V_0;
		return L_7;
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
// System.String Meta.Conduit.ConduitUtilities::DelimitWithUnderscores(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConduitUtilities_DelimitWithUnderscores_m872CE6950B035EA443E3F82BDABDE6A0FB2C75F2 (String_t* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30A2AC504761E7DD06F19C2F3AEF88096139945E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return UnderscoreSplitter.Replace(input, "_$1");
		il2cpp_codegen_runtime_class_init_inline(ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274_il2cpp_TypeInfo_var);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = ((ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274_StaticFields*)il2cpp_codegen_static_fields_for(ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274_il2cpp_TypeInfo_var))->___UnderscoreSplitter_0;
		String_t* L_1 = ___0_input;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = Regex_Replace_m8E802C10B5A591BEA61FC00EA8E4AF398D815A90(L_0, L_1, _stringLiteral30A2AC504761E7DD06F19C2F3AEF88096139945E, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void Meta.Conduit.ConduitUtilities::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitUtilities__ctor_m2BDFE9777FD2612F75902C79565535E98E163B8C (ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Meta.Conduit.ConduitUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConduitUtilities__cctor_m6026DCE5119B9761625C0E1430392AC327FD7BC0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF19157630C2E302C33B88C5B6A53BB1D1F0B6896);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Regex UnderscoreSplitter = new Regex("(\\B[A-Z])", RegexOptions.Compiled);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_0, _stringLiteralF19157630C2E302C33B88C5B6A53BB1D1F0B6896, 8, NULL);
		((ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274_StaticFields*)il2cpp_codegen_static_fields_for(ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274_il2cpp_TypeInfo_var))->___UnderscoreSplitter_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274_StaticFields*)il2cpp_codegen_static_fields_for(ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274_il2cpp_TypeInfo_var))->___UnderscoreSplitter_0), (void*)L_0);
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
// System.Type Meta.Conduit.InvocationContext::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* InvocationContext_get_Type_mF3CE4F0552F57E7268A4CDF48AF9A1B88BD78EE0 (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) 
{
	{
		// public Type Type { get; set; }
		Type_t* L_0 = __this->___U3CTypeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Meta.Conduit.InvocationContext::set_Type(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext_set_Type_m296A49CFC7A7CA57B6897B28B594F1B9D9C894C2 (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type Type { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTypeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Reflection.MethodInfo Meta.Conduit.InvocationContext::get_MethodInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* InvocationContext_get_MethodInfo_m18D5766160EE7E351C355A53BAAF9CB9367F4B48 (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) 
{
	{
		// public MethodInfo MethodInfo { get; set; }
		MethodInfo_t* L_0 = __this->___U3CMethodInfoU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Meta.Conduit.InvocationContext::set_MethodInfo(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext_set_MethodInfo_m88C3904AF0120B16BA40B99AC86D2F58FC67E0CD (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, MethodInfo_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public MethodInfo MethodInfo { get; set; }
		MethodInfo_t* L_0 = ___0_value;
		__this->___U3CMethodInfoU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMethodInfoU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Single Meta.Conduit.InvocationContext::get_MinConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InvocationContext_get_MinConfidence_m8320100A867EB9664BB1D5DC95ADA9EE91FD8EE4 (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) 
{
	{
		// public float MinConfidence { get; set; } = 0;
		float L_0 = __this->___U3CMinConfidenceU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Meta.Conduit.InvocationContext::set_MinConfidence(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext_set_MinConfidence_m6123EC65BA7D243E8E0B3A9CDAF750518A9FD22A (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MinConfidence { get; set; } = 0;
		float L_0 = ___0_value;
		__this->___U3CMinConfidenceU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Single Meta.Conduit.InvocationContext::get_MaxConfidence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InvocationContext_get_MaxConfidence_mBFE6764249F9604EA7788E22F87D18968FA5AC17 (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxConfidence { get; set; } = 1;
		float L_0 = __this->___U3CMaxConfidenceU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Meta.Conduit.InvocationContext::set_MaxConfidence(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext_set_MaxConfidence_m676BD27CFC95D8AD6195E34AC95564D4A0B3948B (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MaxConfidence { get; set; } = 1;
		float L_0 = ___0_value;
		__this->___U3CMaxConfidenceU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean Meta.Conduit.InvocationContext::get_ValidatePartial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvocationContext_get_ValidatePartial_m6026F416EF238451A371E4125F5BC92AF9D1E7A5 (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) 
{
	{
		// public bool ValidatePartial { get; set; } = false;
		bool L_0 = __this->___U3CValidatePartialU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Meta.Conduit.InvocationContext::set_ValidatePartial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext_set_ValidatePartial_m23D469C34DF35B16D0062F8102D4EC1D6C254151 (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool ValidatePartial { get; set; } = false;
		bool L_0 = ___0_value;
		__this->___U3CValidatePartialU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void Meta.Conduit.InvocationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvocationContext__ctor_m519FAA352D30200AF8DD4163E27161C2E7EE8FBF (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) 
{
	{
		// public float MinConfidence { get; set; } = 0;
		__this->___U3CMinConfidenceU3Ek__BackingField_2 = (0.0f);
		// public float MaxConfidence { get; set; } = 1;
		__this->___U3CMaxConfidenceU3Ek__BackingField_3 = (1.0f);
		// public bool ValidatePartial { get; set; } = false;
		__this->___U3CValidatePartialU3Ek__BackingField_4 = (bool)0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Meta.Conduit.Manifest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest__ctor_mA4CD4F6095449DDDD070C87D6DF100B0AE63034F (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4B46282F56E1C120392B553F9927DD511BFFF4E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m52A5602099D2D12AA01CA87C6F80FB7A23CAC496_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF4E2960EB740BB25B6765B125C5121A4B2895752_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<ManifestEntity> Entities { get; set; } = new List<ManifestEntity>();
		List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935* L_0 = (List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935*)il2cpp_codegen_object_new(List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF4E2960EB740BB25B6765B125C5121A4B2895752(L_0, List_1__ctor_mF4E2960EB740BB25B6765B125C5121A4B2895752_RuntimeMethod_var);
		__this->___U3CEntitiesU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEntitiesU3Ek__BackingField_3), (void*)L_0);
		// public List<ManifestAction> Actions { get; set; } = new List<ManifestAction>();
		List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* L_1 = (List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2*)il2cpp_codegen_object_new(List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m52A5602099D2D12AA01CA87C6F80FB7A23CAC496(L_1, List_1__ctor_m52A5602099D2D12AA01CA87C6F80FB7A23CAC496_RuntimeMethod_var);
		__this->___U3CActionsU3Ek__BackingField_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CActionsU3Ek__BackingField_4), (void*)L_1);
		// private readonly Dictionary<string, List<InvocationContext>> methodLookup =
		//     new Dictionary<string, List<InvocationContext>>(StringComparer.OrdinalIgnoreCase);
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_2;
		L_2 = StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline(NULL);
		Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* L_3 = (Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7*)il2cpp_codegen_object_new(Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m4B46282F56E1C120392B553F9927DD511BFFF4E7(L_3, L_2, Dictionary_2__ctor_m4B46282F56E1C120392B553F9927DD511BFFF4E7_RuntimeMethod_var);
		__this->___methodLookup_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___methodLookup_5), (void*)L_3);
		// public Manifest() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public Manifest() { }
		return;
	}
}
// System.String Meta.Conduit.Manifest::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Manifest_get_ID_m0A3F9096ABC76B2D71CDEC1361835AC417D5C988 (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->___U3CIDU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Meta.Conduit.Manifest::set_ID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest_set_ID_mF477619E3546CA0BDF51808F7FECF35B38517FD2 (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CIDU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIDU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.Manifest::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Manifest_get_Version_mAE12E778FD90F93912A6619372926C3F9CBE0A2B (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, const RuntimeMethod* method) 
{
	{
		// public string Version { get; set; }
		String_t* L_0 = __this->___U3CVersionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Meta.Conduit.Manifest::set_Version(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest_set_Version_m696BA6732D2254DDB8F522DB794A02E5675F9462 (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Version { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CVersionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CVersionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.Manifest::get_Domain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Manifest_get_Domain_m8A2572D50639AAC7541FC6FE2572F398EFAC0C23 (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, const RuntimeMethod* method) 
{
	{
		// public string Domain { get; set; }
		String_t* L_0 = __this->___U3CDomainU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Meta.Conduit.Manifest::set_Domain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest_set_Domain_m3FBF3D8A2F25DEC982D4FBB4C2F89209B2F8043B (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Domain { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CDomainU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDomainU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity> Meta.Conduit.Manifest::get_Entities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935* Manifest_get_Entities_mEF938AEACB2917DF0BC606E8DEC2918BDF1DA9B2 (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, const RuntimeMethod* method) 
{
	{
		// public List<ManifestEntity> Entities { get; set; } = new List<ManifestEntity>();
		List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935* L_0 = __this->___U3CEntitiesU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Meta.Conduit.Manifest::set_Entities(System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest_set_Entities_m72AC1B8CE052846FA24A01A43C08130EA3B9F532 (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<ManifestEntity> Entities { get; set; } = new List<ManifestEntity>();
		List_1_t6AC845B7BB5E816F1AF019E51967311239D0D935* L_0 = ___0_value;
		__this->___U3CEntitiesU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEntitiesU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction> Meta.Conduit.Manifest::get_Actions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* Manifest_get_Actions_m40F324369401021B5D0DB4DBA6B35EC6C1AC18C6 (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, const RuntimeMethod* method) 
{
	{
		// public List<ManifestAction> Actions { get; set; } = new List<ManifestAction>();
		List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* L_0 = __this->___U3CActionsU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Meta.Conduit.Manifest::set_Actions(System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Manifest_set_Actions_mCA16BB22E827D71AD72D10F0B1BF8215B21A2D03 (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<ManifestAction> Actions { get; set; } = new List<ManifestAction>();
		List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* L_0 = ___0_value;
		__this->___U3CActionsU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CActionsU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Boolean Meta.Conduit.Manifest::ResolveActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manifest_ResolveActions_m0D1DC5CFFED58BCEF65CF8A00E79CD5B84C44845 (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m9584173AD45120BB7D1FB40440ED3943B64EE0C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m93C32BCEED5FA0D8F29449FE9D511BB733BB1A05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFE452EDE7DBFB4C166B60316955EC702F4810FD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mD6596A5FD4BE712AB341405DB15609860D5A6162_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisList_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D_mE90993DD675930A0015628A2555C164AB8C053C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m42FC3C710A2523D28A1D0CAF5B4CD2914D314F60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m53EF7C93F8F5FCD23497846F7AA37B1B0B9F051F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2786A735A61AAA5FA5476B673B595B345A18CB0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCB76A9B724198E55C8079D349B30756B5567AD45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t42DACB4F4802D1C2C7DF762E704AE40CFB0B1957_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m32958BDB535373943F1CABFA0A9E9D86F0D8E206_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m21A5D3985497315B9F22025A05ABC5DF3A39CB07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m3BC6FC8F7EF5E7E9F30A86FAEDF0478DDA6AE98F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m095AC157F345C0B2B5B5D9FBE6F5EE8477F56C19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE0EE27BE8D30C224CDE80842F5E79E11F145E8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0A2CF9F1BA3F0D401629BEF8CA32E15D08AB5C73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manifest_ResolveActions_m0D1DC5CFFED58BCEF65CF8A00E79CD5B84C44845_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CResolveActionsU3Eb__22_0_m79E36D011E557A2F21B0342FAF7DADC6513C6097_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CResolveActionsU3Eb__22_1_mE03B557DB991AD3758F77AA06E80FBF418340143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E3A4B6D33B5A752C5EF943BD7BFD2FCFC6572AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral699AC6096221581A5B617645650AB1ECDE7E264A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD9B14D4046ED1AD88F3E1F180FCBA71F134B53B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE718B85C732127DA06EC4DDA3E9F112B092F786);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t50475E3E1405C76878D9C182F4C71DF48340803C V_1;
	memset((&V_1), 0, sizeof(V_1));
	ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	Type_t* V_7 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_8 = NULL;
	MethodInfo_t* V_9 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_10 = NULL;
	ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* V_11 = NULL;
	InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* V_12 = NULL;
	bool V_13 = false;
	bool V_14 = false;
	int32_t V_15 = 0;
	ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* V_16 = NULL;
	String_t* V_17 = NULL;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	RuntimeObject* V_22 = NULL;
	List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* V_23 = NULL;
	bool V_24 = false;
	Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270* G_B21_0 = NULL;
	ValueCollection_t1557DCE76C64DC1C0A51C1D7019F5C702C6D8A07* G_B21_1 = NULL;
	Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270* G_B20_0 = NULL;
	ValueCollection_t1557DCE76C64DC1C0A51C1D7019F5C702C6D8A07* G_B20_1 = NULL;
	Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31* G_B25_0 = NULL;
	List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* G_B25_1 = NULL;
	Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31* G_B24_0 = NULL;
	List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* G_B24_1 = NULL;
	{
		// var resolvedAll = true;
		V_0 = (bool)1;
		// foreach (var action in this.Actions)
		List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* L_0;
		L_0 = Manifest_get_Actions_m40F324369401021B5D0DB4DBA6B35EC6C1AC18C6_inline(__this, NULL);
		NullCheck(L_0);
		Enumerator_t50475E3E1405C76878D9C182F4C71DF48340803C L_1;
		L_1 = List_1_GetEnumerator_m21A5D3985497315B9F22025A05ABC5DF3A39CB07(L_0, List_1_GetEnumerator_m21A5D3985497315B9F22025A05ABC5DF3A39CB07_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0249:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m42FC3C710A2523D28A1D0CAF5B4CD2914D314F60((&V_1), Enumerator_Dispose_m42FC3C710A2523D28A1D0CAF5B4CD2914D314F60_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_023b_1;
			}

IL_0015_1:
			{
				// foreach (var action in this.Actions)
				ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_2;
				L_2 = Enumerator_get_Current_m2786A735A61AAA5FA5476B673B595B345A18CB0B_inline((&V_1), Enumerator_get_Current_m2786A735A61AAA5FA5476B673B595B345A18CB0B_RuntimeMethod_var);
				V_2 = L_2;
				// var lastPeriod = action.ID.LastIndexOf('.');
				ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_3 = V_2;
				NullCheck(L_3);
				String_t* L_4;
				L_4 = ManifestAction_get_ID_mCCA94FFA2F3904129D01D8D27C60C746F80A9611_inline(L_3, NULL);
				NullCheck(L_4);
				int32_t L_5;
				L_5 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_4, ((int32_t)46), NULL);
				V_3 = L_5;
				// if (lastPeriod <= 0)
				int32_t L_6 = V_3;
				V_13 = (bool)((((int32_t)((((int32_t)L_6) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_7 = V_13;
				if (!L_7)
				{
					goto IL_0057_1;
				}
			}
			{
				// Debug.LogError($"Invalid Action ID: {action.ID}");
				ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_8 = V_2;
				NullCheck(L_8);
				String_t* L_9;
				L_9 = ManifestAction_get_ID_mCCA94FFA2F3904129D01D8D27C60C746F80A9611_inline(L_8, NULL);
				String_t* L_10;
				L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCD9B14D4046ED1AD88F3E1F180FCBA71F134B53B, L_9, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_10, NULL);
				// resolvedAll = false;
				V_0 = (bool)0;
				// continue;
				goto IL_023b_1;
			}

IL_0057_1:
			{
				// var typeName = action.ID.Substring(0, lastPeriod);
				ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_11 = V_2;
				NullCheck(L_11);
				String_t* L_12;
				L_12 = ManifestAction_get_ID_mCCA94FFA2F3904129D01D8D27C60C746F80A9611_inline(L_11, NULL);
				int32_t L_13 = V_3;
				NullCheck(L_12);
				String_t* L_14;
				L_14 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_12, 0, L_13, NULL);
				V_4 = L_14;
				// var qualifiedTypeName = $"{typeName},{action.Assembly}";
				String_t* L_15 = V_4;
				ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_16 = V_2;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = ManifestAction_get_Assembly_mC20A5E9E09F961C338B8E45C57ECD0715AB33092_inline(L_16, NULL);
				String_t* L_18;
				L_18 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_15, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_17, NULL);
				V_5 = L_18;
				// var method = action.ID.Substring(lastPeriod + 1);
				ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_19 = V_2;
				NullCheck(L_19);
				String_t* L_20;
				L_20 = ManifestAction_get_ID_mCCA94FFA2F3904129D01D8D27C60C746F80A9611_inline(L_19, NULL);
				int32_t L_21 = V_3;
				NullCheck(L_20);
				String_t* L_22;
				L_22 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_20, ((int32_t)il2cpp_codegen_add(L_21, 1)), NULL);
				V_6 = L_22;
				// var targetType = Type.GetType(qualifiedTypeName);
				String_t* L_23 = V_5;
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_24;
				L_24 = il2cpp_codegen_get_type(L_23, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, Manifest_ResolveActions_m0D1DC5CFFED58BCEF65CF8A00E79CD5B84C44845_RuntimeMethod_var);
				V_7 = L_24;
				// if (targetType == null)
				Type_t* L_25 = V_7;
				bool L_26;
				L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_25, (Type_t*)NULL, NULL);
				V_14 = L_26;
				bool L_27 = V_14;
				if (!L_27)
				{
					goto IL_00bb_1;
				}
			}
			{
				// Debug.LogError($"Failed to resolve type: {qualifiedTypeName}");
				String_t* L_28 = V_5;
				String_t* L_29;
				L_29 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCE718B85C732127DA06EC4DDA3E9F112B092F786, L_28, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_29, NULL);
				// resolvedAll = false;
				V_0 = (bool)0;
				// continue;
				goto IL_023b_1;
			}

IL_00bb_1:
			{
				// var types = new Type[action.Parameters.Count];
				ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_30 = V_2;
				NullCheck(L_30);
				List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* L_31;
				L_31 = ManifestAction_get_Parameters_m0EF5F625C9026D20CFE0DF0FB062A590565B4543_inline(L_30, NULL);
				NullCheck(L_31);
				int32_t L_32;
				L_32 = List_1_get_Count_mE0EE27BE8D30C224CDE80842F5E79E11F145E8B6_inline(L_31, List_1_get_Count_mE0EE27BE8D30C224CDE80842F5E79E11F145E8B6_RuntimeMethod_var);
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_33 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)L_32);
				V_8 = L_33;
				// for (var i = 0; i < action.Parameters.Count; i++)
				V_15 = 0;
				goto IL_010f_1;
			}

IL_00d2_1:
			{
				// var manifestParameter = action.Parameters[i];
				ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_34 = V_2;
				NullCheck(L_34);
				List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* L_35;
				L_35 = ManifestAction_get_Parameters_m0EF5F625C9026D20CFE0DF0FB062A590565B4543_inline(L_34, NULL);
				int32_t L_36 = V_15;
				NullCheck(L_35);
				ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_37;
				L_37 = List_1_get_Item_m0A2CF9F1BA3F0D401629BEF8CA32E15D08AB5C73(L_35, L_36, List_1_get_Item_m0A2CF9F1BA3F0D401629BEF8CA32E15D08AB5C73_RuntimeMethod_var);
				V_16 = L_37;
				// var fullTypeName = $"{manifestParameter.QualifiedTypeName},{manifestParameter.TypeAssembly}";
				ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_38 = V_16;
				NullCheck(L_38);
				String_t* L_39;
				L_39 = ManifestParameter_get_QualifiedTypeName_m58FE72048BDC0C57AB3EE8E876FBEC33C66999A5_inline(L_38, NULL);
				ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_40 = V_16;
				NullCheck(L_40);
				String_t* L_41;
				L_41 = ManifestParameter_get_TypeAssembly_mC4240EE5AD36FBA15C8DFBD919630E21D596902C_inline(L_40, NULL);
				String_t* L_42;
				L_42 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_39, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_41, NULL);
				V_17 = L_42;
				// types[i] = Type.GetType(fullTypeName);
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_43 = V_8;
				int32_t L_44 = V_15;
				String_t* L_45 = V_17;
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_46;
				L_46 = il2cpp_codegen_get_type(L_45, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, Manifest_ResolveActions_m0D1DC5CFFED58BCEF65CF8A00E79CD5B84C44845_RuntimeMethod_var);
				NullCheck(L_43);
				ArrayElementTypeCheck (L_43, L_46);
				(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (Type_t*)L_46);
				// for (var i = 0; i < action.Parameters.Count; i++)
				int32_t L_47 = V_15;
				V_15 = ((int32_t)il2cpp_codegen_add(L_47, 1));
			}

IL_010f_1:
			{
				// for (var i = 0; i < action.Parameters.Count; i++)
				int32_t L_48 = V_15;
				ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_49 = V_2;
				NullCheck(L_49);
				List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* L_50;
				L_50 = ManifestAction_get_Parameters_m0EF5F625C9026D20CFE0DF0FB062A590565B4543_inline(L_49, NULL);
				NullCheck(L_50);
				int32_t L_51;
				L_51 = List_1_get_Count_mE0EE27BE8D30C224CDE80842F5E79E11F145E8B6_inline(L_50, List_1_get_Count_mE0EE27BE8D30C224CDE80842F5E79E11F145E8B6_RuntimeMethod_var);
				V_18 = (bool)((((int32_t)L_48) < ((int32_t)L_51))? 1 : 0);
				bool L_52 = V_18;
				if (L_52)
				{
					goto IL_00d2_1;
				}
			}
			{
				// var targetMethod = targetType.GetMethod(method,
				//     BindingFlags.Public | BindingFlags.Instance | BindingFlags.Static, null, CallingConventions.Any,
				//     types, null);
				Type_t* L_53 = V_7;
				String_t* L_54 = V_6;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_55 = V_8;
				NullCheck(L_53);
				MethodInfo_t* L_56;
				L_56 = Type_GetMethod_mA605A28A04232563F51674827C52C17447DE686F(L_53, L_54, ((int32_t)28), (Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*)NULL, 3, L_55, (ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364*)NULL, NULL);
				V_9 = L_56;
				// if (targetMethod == null)
				MethodInfo_t* L_57 = V_9;
				bool L_58;
				L_58 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_57, (MethodInfo_t*)NULL, NULL);
				V_19 = L_58;
				bool L_59 = V_19;
				if (!L_59)
				{
					goto IL_0163_1;
				}
			}
			{
				// Debug.LogError($"Failed to resolve method {method}.");
				String_t* L_60 = V_6;
				String_t* L_61;
				L_61 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral0E3A4B6D33B5A752C5EF943BD7BFD2FCFC6572AB, L_60, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_61, NULL);
				// resolvedAll = false;
				V_0 = (bool)0;
				// continue;
				goto IL_023b_1;
			}

IL_0163_1:
			{
				// var attributes = targetMethod.GetCustomAttributes(typeof(ConduitActionAttribute), false);
				MethodInfo_t* L_62 = V_9;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_63 = { reinterpret_cast<intptr_t> (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_64;
				L_64 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_63, NULL);
				NullCheck(L_62);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_65;
				L_65 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_62, L_64, (bool)0);
				V_10 = L_65;
				// if (attributes.Length == 0)
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_66 = V_10;
				NullCheck(L_66);
				V_20 = (bool)((((int32_t)(((RuntimeArray*)L_66)->max_length)) == ((int32_t)0))? 1 : 0);
				bool L_67 = V_20;
				if (!L_67)
				{
					goto IL_019d_1;
				}
			}
			{
				// Debug.LogError($"{targetMethod} - Did not have expected Conduit attribute");
				MethodInfo_t* L_68 = V_9;
				String_t* L_69;
				L_69 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral699AC6096221581A5B617645650AB1ECDE7E264A, L_68, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_69, NULL);
				// resolvedAll = false;
				V_0 = (bool)0;
				// continue;
				goto IL_023b_1;
			}

IL_019d_1:
			{
				// var actionAttribute = attributes.First() as ConduitActionAttribute;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_70 = V_10;
				RuntimeObject* L_71;
				L_71 = Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6((RuntimeObject*)L_70, Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_RuntimeMethod_var);
				V_11 = ((ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03*)IsInstClass((RuntimeObject*)L_71, ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03_il2cpp_TypeInfo_var));
				// var invocationContext = new InvocationContext()
				// {
				//     Type = targetType,
				//     MethodInfo = targetMethod,
				//     MinConfidence = actionAttribute.MinConfidence,
				//     MaxConfidence = actionAttribute.MaxConfidence,
				//     ValidatePartial = actionAttribute.ValidatePartial
				// };
				InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_72 = (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05*)il2cpp_codegen_object_new(InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05_il2cpp_TypeInfo_var);
				NullCheck(L_72);
				InvocationContext__ctor_m519FAA352D30200AF8DD4163E27161C2E7EE8FBF(L_72, NULL);
				InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_73 = L_72;
				Type_t* L_74 = V_7;
				NullCheck(L_73);
				InvocationContext_set_Type_m296A49CFC7A7CA57B6897B28B594F1B9D9C894C2_inline(L_73, L_74, NULL);
				InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_75 = L_73;
				MethodInfo_t* L_76 = V_9;
				NullCheck(L_75);
				InvocationContext_set_MethodInfo_m88C3904AF0120B16BA40B99AC86D2F58FC67E0CD_inline(L_75, L_76, NULL);
				InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_77 = L_75;
				ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* L_78 = V_11;
				NullCheck(L_78);
				float L_79;
				L_79 = ConduitActionAttribute_get_MinConfidence_mCCBF912BF339223A01CE47C6DBF3617DC312E593_inline(L_78, NULL);
				NullCheck(L_77);
				InvocationContext_set_MinConfidence_m6123EC65BA7D243E8E0B3A9CDAF750518A9FD22A_inline(L_77, L_79, NULL);
				InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_80 = L_77;
				ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* L_81 = V_11;
				NullCheck(L_81);
				float L_82;
				L_82 = ConduitActionAttribute_get_MaxConfidence_mA53C187CBCEC1B0B8736C4CF7AAB63E913ECA5F4_inline(L_81, NULL);
				NullCheck(L_80);
				InvocationContext_set_MaxConfidence_m676BD27CFC95D8AD6195E34AC95564D4A0B3948B_inline(L_80, L_82, NULL);
				InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_83 = L_80;
				ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* L_84 = V_11;
				NullCheck(L_84);
				bool L_85;
				L_85 = ConduitActionAttribute_get_ValidatePartial_mD8294194126641F37DBEA00E882B66F253A40C4C_inline(L_84, NULL);
				NullCheck(L_83);
				InvocationContext_set_ValidatePartial_m23D469C34DF35B16D0062F8102D4EC1D6C254151_inline(L_83, L_85, NULL);
				V_12 = L_83;
				// if (!this.methodLookup.ContainsKey(action.Name))
				Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* L_86 = __this->___methodLookup_5;
				ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_87 = V_2;
				NullCheck(L_87);
				String_t* L_88;
				L_88 = ManifestAction_get_Name_mD96EC73537658D01C766C54B0B819AFA1D5DD232_inline(L_87, NULL);
				NullCheck(L_86);
				bool L_89;
				L_89 = Dictionary_2_ContainsKey_m93C32BCEED5FA0D8F29449FE9D511BB733BB1A05(L_86, L_88, Dictionary_2_ContainsKey_m93C32BCEED5FA0D8F29449FE9D511BB733BB1A05_RuntimeMethod_var);
				V_21 = (bool)((((int32_t)L_89) == ((int32_t)0))? 1 : 0);
				bool L_90 = V_21;
				if (!L_90)
				{
					goto IL_0221_1;
				}
			}
			{
				// this.methodLookup.Add(action.Name, new List<InvocationContext>());
				Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* L_91 = __this->___methodLookup_5;
				ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_92 = V_2;
				NullCheck(L_92);
				String_t* L_93;
				L_93 = ManifestAction_get_Name_mD96EC73537658D01C766C54B0B819AFA1D5DD232_inline(L_92, NULL);
				List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* L_94 = (List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D*)il2cpp_codegen_object_new(List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D_il2cpp_TypeInfo_var);
				NullCheck(L_94);
				List_1__ctor_m095AC157F345C0B2B5B5D9FBE6F5EE8477F56C19(L_94, List_1__ctor_m095AC157F345C0B2B5B5D9FBE6F5EE8477F56C19_RuntimeMethod_var);
				NullCheck(L_91);
				Dictionary_2_Add_m9584173AD45120BB7D1FB40440ED3943B64EE0C3(L_91, L_93, L_94, Dictionary_2_Add_m9584173AD45120BB7D1FB40440ED3943B64EE0C3_RuntimeMethod_var);
			}

IL_0221_1:
			{
				// this.methodLookup[action.Name].Add(invocationContext);
				Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* L_95 = __this->___methodLookup_5;
				ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_96 = V_2;
				NullCheck(L_96);
				String_t* L_97;
				L_97 = ManifestAction_get_Name_mD96EC73537658D01C766C54B0B819AFA1D5DD232_inline(L_96, NULL);
				NullCheck(L_95);
				List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* L_98;
				L_98 = Dictionary_2_get_Item_mFE452EDE7DBFB4C166B60316955EC702F4810FD2(L_95, L_97, Dictionary_2_get_Item_mFE452EDE7DBFB4C166B60316955EC702F4810FD2_RuntimeMethod_var);
				InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_99 = V_12;
				NullCheck(L_98);
				List_1_Add_m32958BDB535373943F1CABFA0A9E9D86F0D8E206_inline(L_98, L_99, List_1_Add_m32958BDB535373943F1CABFA0A9E9D86F0D8E206_RuntimeMethod_var);
			}

IL_023b_1:
			{
				// foreach (var action in this.Actions)
				bool L_100;
				L_100 = Enumerator_MoveNext_m53EF7C93F8F5FCD23497846F7AA37B1B0B9F051F((&V_1), Enumerator_MoveNext_m53EF7C93F8F5FCD23497846F7AA37B1B0B9F051F_RuntimeMethod_var);
				if (L_100)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0258;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0258:
	{
		// foreach (var invocationContext in this.methodLookup.Values.Where(invocationContext =>
		//              invocationContext.Count > 1))
		Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* L_101 = __this->___methodLookup_5;
		NullCheck(L_101);
		ValueCollection_t1557DCE76C64DC1C0A51C1D7019F5C702C6D8A07* L_102;
		L_102 = Dictionary_2_get_Values_mD6596A5FD4BE712AB341405DB15609860D5A6162(L_101, Dictionary_2_get_Values_mD6596A5FD4BE712AB341405DB15609860D5A6162_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var);
		Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270* L_103 = ((U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var))->___U3CU3E9__22_0_1;
		Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270* L_104 = L_103;
		G_B20_0 = L_104;
		G_B20_1 = L_102;
		if (L_104)
		{
			G_B21_0 = L_104;
			G_B21_1 = L_102;
			goto IL_0283;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var);
		U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD* L_105 = ((U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270* L_106 = (Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270*)il2cpp_codegen_object_new(Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270_il2cpp_TypeInfo_var);
		NullCheck(L_106);
		Func_2__ctor_m432DB5C28CB7298129A6B0F1DB39BA9E8CAD62B0(L_106, L_105, (intptr_t)((void*)U3CU3Ec_U3CResolveActionsU3Eb__22_0_m79E36D011E557A2F21B0342FAF7DADC6513C6097_RuntimeMethod_var), NULL);
		Func_2_tD8DC590FDDF738606EE4618F5350874D5F55A270* L_107 = L_106;
		((U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var))->___U3CU3E9__22_0_1 = L_107;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var))->___U3CU3E9__22_0_1), (void*)L_107);
		G_B21_0 = L_107;
		G_B21_1 = G_B20_1;
	}

IL_0283:
	{
		RuntimeObject* L_108;
		L_108 = Enumerable_Where_TisList_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D_mE90993DD675930A0015628A2555C164AB8C053C7(G_B21_1, G_B21_0, Enumerable_Where_TisList_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D_mE90993DD675930A0015628A2555C164AB8C053C7_RuntimeMethod_var);
		NullCheck(L_108);
		RuntimeObject* L_109;
		L_109 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::GetEnumerator() */, IEnumerable_1_tCB76A9B724198E55C8079D349B30756B5567AD45_il2cpp_TypeInfo_var, L_108);
		V_22 = L_109;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02ce:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_110 = V_22;
					if (!L_110)
					{
						goto IL_02da;
					}
				}
				{
					RuntimeObject* L_111 = V_22;
					NullCheck(L_111);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_111);
				}

IL_02da:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_02c3_1;
			}

IL_0291_1:
			{
				// foreach (var invocationContext in this.methodLookup.Values.Where(invocationContext =>
				RuntimeObject* L_112 = V_22;
				NullCheck(L_112);
				List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* L_113;
				L_113 = InterfaceFuncInvoker0< List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>::get_Current() */, IEnumerator_1_t42DACB4F4802D1C2C7DF762E704AE40CFB0B1957_il2cpp_TypeInfo_var, L_112);
				V_23 = L_113;
				// invocationContext.Sort((one, two) =>
				//     two.MethodInfo.GetParameters().Length - one.MethodInfo.GetParameters().Length);
				List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* L_114 = V_23;
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var);
				Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31* L_115 = ((U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var))->___U3CU3E9__22_1_2;
				Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31* L_116 = L_115;
				G_B24_0 = L_116;
				G_B24_1 = L_114;
				if (L_116)
				{
					G_B25_0 = L_116;
					G_B25_1 = L_114;
					goto IL_02bc_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var);
				U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD* L_117 = ((U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var))->___U3CU3E9_0;
				Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31* L_118 = (Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31*)il2cpp_codegen_object_new(Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31_il2cpp_TypeInfo_var);
				NullCheck(L_118);
				Comparison_1__ctor_m11C7DD22C1DA71649A92EBEA62081415CB2C004C(L_118, L_117, (intptr_t)((void*)U3CU3Ec_U3CResolveActionsU3Eb__22_1_mE03B557DB991AD3758F77AA06E80FBF418340143_RuntimeMethod_var), NULL);
				Comparison_1_tC9DDB8E6D857A1478E7B3285846D531570AD1A31* L_119 = L_118;
				((U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var))->___U3CU3E9__22_1_2 = L_119;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var))->___U3CU3E9__22_1_2), (void*)L_119);
				G_B25_0 = L_119;
				G_B25_1 = G_B24_1;
			}

IL_02bc_1:
			{
				NullCheck(G_B25_1);
				List_1_Sort_m3BC6FC8F7EF5E7E9F30A86FAEDF0478DDA6AE98F(G_B25_1, G_B25_0, List_1_Sort_m3BC6FC8F7EF5E7E9F30A86FAEDF0478DDA6AE98F_RuntimeMethod_var);
			}

IL_02c3_1:
			{
				// foreach (var invocationContext in this.methodLookup.Values.Where(invocationContext =>
				RuntimeObject* L_120 = V_22;
				NullCheck(L_120);
				bool L_121;
				L_121 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_120);
				if (L_121)
				{
					goto IL_0291_1;
				}
			}
			{
				goto IL_02db;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02db:
	{
		// return resolvedAll;
		bool L_122 = V_0;
		V_24 = L_122;
		goto IL_02e0;
	}

IL_02e0:
	{
		// }
		bool L_123 = V_24;
		return L_123;
	}
}
// System.Boolean Meta.Conduit.Manifest::ContainsAction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Manifest_ContainsAction_mC6DF421521703AC270FF5A020986E656134A5ADA (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, String_t* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m93C32BCEED5FA0D8F29449FE9D511BB733BB1A05_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return this.methodLookup.ContainsKey(action);
		Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* L_0 = __this->___methodLookup_5;
		String_t* L_1 = ___0_action;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m93C32BCEED5FA0D8F29449FE9D511BB733BB1A05(L_0, L_1, Dictionary_2_ContainsKey_m93C32BCEED5FA0D8F29449FE9D511BB733BB1A05_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.InvocationContext> Meta.Conduit.Manifest::GetInvocationContexts(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* Manifest_GetInvocationContexts_mD55F56E02DC319F285D9416971B166E6E73994E1 (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, String_t* ___0_actionId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFE452EDE7DBFB4C166B60316955EC702F4810FD2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* V_0 = NULL;
	{
		// return this.methodLookup[actionId];
		Dictionary_2_t9CD15BB80EA0DC8D043C026AF6BFB581C63F69F7* L_0 = __this->___methodLookup_5;
		String_t* L_1 = ___0_actionId;
		NullCheck(L_0);
		List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* L_2;
		L_2 = Dictionary_2_get_Item_mFE452EDE7DBFB4C166B60316955EC702F4810FD2(L_0, L_1, Dictionary_2_get_Item_mFE452EDE7DBFB4C166B60316955EC702F4810FD2_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* L_3 = V_0;
		return L_3;
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
// System.Void Meta.Conduit.Manifest/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m967B0BBB113A7328BC1945B6DC585E0DFACA16C0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD* L_0 = (U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD*)il2cpp_codegen_object_new(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m0E8534585ABCD4490AB269E0D350DB556F3D91FE(L_0, NULL);
		((U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Meta.Conduit.Manifest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0E8534585ABCD4490AB269E0D350DB556F3D91FE (U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Meta.Conduit.Manifest/<>c::<ResolveActions>b__22_0(System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CResolveActionsU3Eb__22_0_m79E36D011E557A2F21B0342FAF7DADC6513C6097 (U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD* __this, List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* ___0_invocationContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC0BA943D748295859D3CCE7C92D1DAF0E76E1CFA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// invocationContext.Count > 1))
		List_1_t8AEBB9826CA4ACACBD82BC525248FBD56C76BF0D* L_0 = ___0_invocationContext;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mC0BA943D748295859D3CCE7C92D1DAF0E76E1CFA_inline(L_0, List_1_get_Count_mC0BA943D748295859D3CCE7C92D1DAF0E76E1CFA_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) > ((int32_t)1))? 1 : 0);
	}
}
// System.Int32 Meta.Conduit.Manifest/<>c::<ResolveActions>b__22_1(Meta.Conduit.InvocationContext,Meta.Conduit.InvocationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CResolveActionsU3Eb__22_1_mE03B557DB991AD3758F77AA06E80FBF418340143 (U3CU3Ec_t2E9B68B401D72F6A9992EDA335D12843C3A89EFD* __this, InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* ___0_one, InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* ___1_two, const RuntimeMethod* method) 
{
	{
		// two.MethodInfo.GetParameters().Length - one.MethodInfo.GetParameters().Length);
		InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_0 = ___1_two;
		NullCheck(L_0);
		MethodInfo_t* L_1;
		L_1 = InvocationContext_get_MethodInfo_m18D5766160EE7E351C355A53BAAF9CB9367F4B48_inline(L_0, NULL);
		NullCheck(L_1);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_2;
		L_2 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_1);
		NullCheck(L_2);
		InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* L_3 = ___0_one;
		NullCheck(L_3);
		MethodInfo_t* L_4;
		L_4 = InvocationContext_get_MethodInfo_m18D5766160EE7E351C355A53BAAF9CB9367F4B48_inline(L_3, NULL);
		NullCheck(L_4);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_5;
		L_5 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_4);
		NullCheck(L_5);
		return ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), ((int32_t)(((RuntimeArray*)L_5)->max_length))));
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
// System.Void Meta.Conduit.ManifestAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction__ctor_m406A3E3CB03CF6A304E5248E4934C727B82EBEB7 (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m34396BF21C23C01910EFD7F01307E7D8BDF80ECE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<ManifestParameter> Parameters { get; set; } = new List<ManifestParameter>();
		List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* L_0 = (List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC*)il2cpp_codegen_object_new(List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m34396BF21C23C01910EFD7F01307E7D8BDF80ECE(L_0, List_1__ctor_m34396BF21C23C01910EFD7F01307E7D8BDF80ECE_RuntimeMethod_var);
		__this->___U3CParametersU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParametersU3Ek__BackingField_3), (void*)L_0);
		// public List<string> Aliases { get; set; } = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___U3CAliasesU3Ek__BackingField_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAliasesU3Ek__BackingField_4), (void*)L_1);
		// public ManifestAction() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public ManifestAction() { }
		return;
	}
}
// System.String Meta.Conduit.ManifestAction::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestAction_get_ID_mCCA94FFA2F3904129D01D8D27C60C746F80A9611 (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->___U3CIDU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestAction::set_ID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction_set_ID_m94AE5F1C628A7C7ECFF09A42D13BEEC11400E0A4 (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CIDU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIDU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestAction::get_Assembly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Assembly_mC20A5E9E09F961C338B8E45C57ECD0715AB33092 (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) 
{
	{
		// public string Assembly { get; set; }
		String_t* L_0 = __this->___U3CAssemblyU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestAction::set_Assembly(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction_set_Assembly_mD0EA127C575BD7F40830AD655372AB4FADA47EA9 (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Assembly { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CAssemblyU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAssemblyU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestAction::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Name_mD96EC73537658D01C766C54B0B819AFA1D5DD232 (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestAction::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction_set_Name_m85B1DBDFF1E6E615715BA72BCA43D97C69CAE969 (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter> Meta.Conduit.ManifestAction::get_Parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* ManifestAction_get_Parameters_m0EF5F625C9026D20CFE0DF0FB062A590565B4543 (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) 
{
	{
		// public List<ManifestParameter> Parameters { get; set; } = new List<ManifestParameter>();
		List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* L_0 = __this->___U3CParametersU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestAction::set_Parameters(System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction_set_Parameters_m4AD720908CE992D19479CFEAE8A4A8BC57A22E8C (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<ManifestParameter> Parameters { get; set; } = new List<ManifestParameter>();
		List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* L_0 = ___0_value;
		__this->___U3CParametersU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParametersU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestAction::get_DeclaringTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestAction_get_DeclaringTypeName_mFEA041F27226F59D39257BEBA5F44E324C3B7340 (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) 
{
	{
		// public string DeclaringTypeName => ID.Substring(0, ID.LastIndexOf('.'));
		String_t* L_0;
		L_0 = ManifestAction_get_ID_mCCA94FFA2F3904129D01D8D27C60C746F80A9611_inline(__this, NULL);
		String_t* L_1;
		L_1 = ManifestAction_get_ID_mCCA94FFA2F3904129D01D8D27C60C746F80A9611_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_1, ((int32_t)46), NULL);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_0, 0, L_2, NULL);
		return L_3;
	}
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestAction::get_Aliases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ManifestAction_get_Aliases_m359911E7A85D0F5A230D0AB6D154C05A69233204 (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; set; } = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CAliasesU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestAction::set_Aliases(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestAction_set_Aliases_m5BA89B1A096390813883D046ABB2BD88149EDD85 (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; set; } = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___0_value;
		__this->___U3CAliasesU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAliasesU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Boolean Meta.Conduit.ManifestAction::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestAction_Equals_m505EA67DDA91903753A21F58F2B936531B4C2EF0 (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// return obj is ManifestAction other && this.Equals(other);
		RuntimeObject* L_0 = ___0_obj;
		V_0 = ((ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056*)IsInstClass((RuntimeObject*)L_0, ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056_il2cpp_TypeInfo_var));
		ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_2 = V_0;
		bool L_3;
		L_3 = ManifestAction_Equals_mC26F1EE6632BEADDF6581680E6FADDEBC44E83FE(__this, L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_1 = (bool)G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Int32 Meta.Conduit.ManifestAction::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManifestAction_GetHashCode_m7254D05085579D35CBB44F3BAC68CCB67FE5614A (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var hash = 17;
		V_0 = ((int32_t)17);
		// hash = hash * 31 + ID.GetHashCode();
		int32_t L_0 = V_0;
		String_t* L_1;
		L_1 = ManifestAction_get_ID_mCCA94FFA2F3904129D01D8D27C60C746F80A9611_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)31))), L_2));
		// hash = hash * 31 + Assembly.GetHashCode();
		int32_t L_3 = V_0;
		String_t* L_4;
		L_4 = ManifestAction_get_Assembly_mC20A5E9E09F961C338B8E45C57ECD0715AB33092_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)31))), L_5));
		// hash = hash * 31 + Name.GetHashCode();
		int32_t L_6 = V_0;
		String_t* L_7;
		L_7 = ManifestAction_get_Name_mD96EC73537658D01C766C54B0B819AFA1D5DD232_inline(__this, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_7);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_6, ((int32_t)31))), L_8));
		// hash = hash * 31 + Parameters.GetHashCode();
		int32_t L_9 = V_0;
		List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* L_10;
		L_10 = ManifestAction_get_Parameters_m0EF5F625C9026D20CFE0DF0FB062A590565B4543_inline(__this, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_10);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_9, ((int32_t)31))), L_11));
		// hash = hash * 31 + Aliases.GetHashCode();
		int32_t L_12 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13;
		L_13 = ManifestAction_get_Aliases_m359911E7A85D0F5A230D0AB6D154C05A69233204_inline(__this, NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_13);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)31))), L_14));
		// return hash;
		int32_t L_15 = V_0;
		V_1 = L_15;
		goto IL_005d;
	}

IL_005d:
	{
		// }
		int32_t L_16 = V_1;
		return L_16;
	}
}
// System.Boolean Meta.Conduit.ManifestAction::Equals(Meta.Conduit.ManifestAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestAction_Equals_mC26F1EE6632BEADDF6581680E6FADDEBC44E83FE (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E_m6C0A42564851357FA3C2162E8396A1C606AF0FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B6_0 = 0;
	{
		// return this.ID == other.ID && this.Assembly == other.Assembly && this.Name == other.Name && this.Parameters.SequenceEqual(other.Parameters) && this.Aliases.SequenceEqual(other.Aliases);
		String_t* L_0;
		L_0 = ManifestAction_get_ID_mCCA94FFA2F3904129D01D8D27C60C746F80A9611_inline(__this, NULL);
		ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_1 = ___0_other;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ManifestAction_get_ID_mCCA94FFA2F3904129D01D8D27C60C746F80A9611_inline(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_4;
		L_4 = ManifestAction_get_Assembly_mC20A5E9E09F961C338B8E45C57ECD0715AB33092_inline(__this, NULL);
		ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_5 = ___0_other;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = ManifestAction_get_Assembly_mC20A5E9E09F961C338B8E45C57ECD0715AB33092_inline(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_8;
		L_8 = ManifestAction_get_Name_mD96EC73537658D01C766C54B0B819AFA1D5DD232_inline(__this, NULL);
		ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_9 = ___0_other;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = ManifestAction_get_Name_mD96EC73537658D01C766C54B0B819AFA1D5DD232_inline(L_9, NULL);
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0060;
		}
	}
	{
		List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* L_12;
		L_12 = ManifestAction_get_Parameters_m0EF5F625C9026D20CFE0DF0FB062A590565B4543_inline(__this, NULL);
		ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_13 = ___0_other;
		NullCheck(L_13);
		List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* L_14;
		L_14 = ManifestAction_get_Parameters_m0EF5F625C9026D20CFE0DF0FB062A590565B4543_inline(L_13, NULL);
		bool L_15;
		L_15 = Enumerable_SequenceEqual_TisManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E_m6C0A42564851357FA3C2162E8396A1C606AF0FF2(L_12, L_14, Enumerable_SequenceEqual_TisManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E_m6C0A42564851357FA3C2162E8396A1C606AF0FF2_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_0060;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16;
		L_16 = ManifestAction_get_Aliases_m359911E7A85D0F5A230D0AB6D154C05A69233204_inline(__this, NULL);
		ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* L_17 = ___0_other;
		NullCheck(L_17);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18;
		L_18 = ManifestAction_get_Aliases_m359911E7A85D0F5A230D0AB6D154C05A69233204_inline(L_17, NULL);
		bool L_19;
		L_19 = Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1(L_16, L_18, Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1_RuntimeMethod_var);
		G_B6_0 = ((int32_t)(L_19));
		goto IL_0061;
	}

IL_0060:
	{
		G_B6_0 = 0;
	}

IL_0061:
	{
		V_0 = (bool)G_B6_0;
		goto IL_0064;
	}

IL_0064:
	{
		// }
		bool L_20 = V_0;
		return L_20;
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
// System.String Meta.Conduit.ManifestEntity::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_ID_m02506A7F8C1E07DC5EEA06B106183B37B81660B8 (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->___U3CIDU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestEntity::set_ID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity_set_ID_mEE5BBBA1EA192153FF8767AF434A797885E73759 (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CIDU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIDU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestEntity::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Type_mBC84B9BB2C9E553B69A2D4C1767B20ED1DCE0704 (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) 
{
	{
		// public string Type { get; set; }
		String_t* L_0 = __this->___U3CTypeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestEntity::set_Type(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity_set_Type_mA82E4595E6AF4C572E43F4C65CE43A41320BA143 (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Type { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestEntity::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Name_m6EF67B98CC88F20449A5396CF4DF806A4FA0AC61 (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestEntity::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity_set_Name_mA050E2846B0A61FF801ECD3CB7B345ADA3CD3B48 (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestEntity::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ManifestEntity_get_Values_m55A1BC0584AA1542D169B217332865EB79E71259 (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Values { get; set; } = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CValuesU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestEntity::set_Values(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity_set_Values_mD7EB0D3A711231329B2EEF2B89B2640993AFF3BF (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<string> Values { get; set; } = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___0_value;
		__this->___U3CValuesU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValuesU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Boolean Meta.Conduit.ManifestEntity::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestEntity_Equals_m650A221AD49E471360B9A78A73B111F9741E7C69 (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// return obj is ManifestEntity other && this.Equals(other);
		RuntimeObject* L_0 = ___0_obj;
		V_0 = ((ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938*)IsInstClass((RuntimeObject*)L_0, ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938_il2cpp_TypeInfo_var));
		ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* L_2 = V_0;
		bool L_3;
		L_3 = ManifestEntity_Equals_m63E5B6F11C9814DB0C9E37E81C8F9215CF3D4AA8(__this, L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_1 = (bool)G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Int32 Meta.Conduit.ManifestEntity::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManifestEntity_GetHashCode_m37CE6D0987096AFC3983E6E5E462B12164AF723D (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var hash = 17;
		V_0 = ((int32_t)17);
		// hash = hash * 31 + ID.GetHashCode();
		int32_t L_0 = V_0;
		String_t* L_1;
		L_1 = ManifestEntity_get_ID_m02506A7F8C1E07DC5EEA06B106183B37B81660B8_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)31))), L_2));
		// hash = hash * 31 + Type.GetHashCode();
		int32_t L_3 = V_0;
		String_t* L_4;
		L_4 = ManifestEntity_get_Type_mBC84B9BB2C9E553B69A2D4C1767B20ED1DCE0704_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)31))), L_5));
		// hash = hash * 31 + Name.GetHashCode();
		int32_t L_6 = V_0;
		String_t* L_7;
		L_7 = ManifestEntity_get_Name_m6EF67B98CC88F20449A5396CF4DF806A4FA0AC61_inline(__this, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_7);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_6, ((int32_t)31))), L_8));
		// hash = hash * 31 + Values.GetHashCode();
		int32_t L_9 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10;
		L_10 = ManifestEntity_get_Values_m55A1BC0584AA1542D169B217332865EB79E71259_inline(__this, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_10);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_9, ((int32_t)31))), L_11));
		// return hash;
		int32_t L_12 = V_0;
		V_1 = L_12;
		goto IL_004c;
	}

IL_004c:
	{
		// }
		int32_t L_13 = V_1;
		return L_13;
	}
}
// System.Boolean Meta.Conduit.ManifestEntity::Equals(Meta.Conduit.ManifestEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestEntity_Equals_m63E5B6F11C9814DB0C9E37E81C8F9215CF3D4AA8 (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		// return ID == other.ID && Type == other.Type && Name == other.Name &&
		//        this.Values.SequenceEqual(other.Values);
		String_t* L_0;
		L_0 = ManifestEntity_get_ID_m02506A7F8C1E07DC5EEA06B106183B37B81660B8_inline(__this, NULL);
		ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* L_1 = ___0_other;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ManifestEntity_get_ID_m02506A7F8C1E07DC5EEA06B106183B37B81660B8_inline(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		String_t* L_4;
		L_4 = ManifestEntity_get_Type_mBC84B9BB2C9E553B69A2D4C1767B20ED1DCE0704_inline(__this, NULL);
		ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* L_5 = ___0_other;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = ManifestEntity_get_Type_mBC84B9BB2C9E553B69A2D4C1767B20ED1DCE0704_inline(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		String_t* L_8;
		L_8 = ManifestEntity_get_Name_m6EF67B98CC88F20449A5396CF4DF806A4FA0AC61_inline(__this, NULL);
		ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* L_9 = ___0_other;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = ManifestEntity_get_Name_m6EF67B98CC88F20449A5396CF4DF806A4FA0AC61_inline(L_9, NULL);
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12;
		L_12 = ManifestEntity_get_Values_m55A1BC0584AA1542D169B217332865EB79E71259_inline(__this, NULL);
		ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* L_13 = ___0_other;
		NullCheck(L_13);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14;
		L_14 = ManifestEntity_get_Values_m55A1BC0584AA1542D169B217332865EB79E71259_inline(L_13, NULL);
		bool L_15;
		L_15 = Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1(L_12, L_14, Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1_RuntimeMethod_var);
		G_B5_0 = ((int32_t)(L_15));
		goto IL_004e;
	}

IL_004d:
	{
		G_B5_0 = 0;
	}

IL_004e:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Void Meta.Conduit.ManifestEntity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestEntity__ctor_mEDA41116EB93F323CDBE36D83DC0DFFC476AA3BD (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<string> Values { get; set; } = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___U3CValuesU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValuesU3Ek__BackingField_3), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Meta.Conduit.Manifest Meta.Conduit.ManifestLoader::LoadManifest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* ManifestLoader_LoadManifest_m9CFBB0923E620C2445D699A7AE4F00CC197113D9 (ManifestLoader_t88C032862ECBA374162619B4B2FD9C0AE1AE9263* __this, String_t* ___0_manifestLocalPath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_ToObject_TisManifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF_m0D6C453F4C844B5193A8760A09944CA717BB54F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t73A696B3FD14CEB9054963740E9AEDD059B29DB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45E8B3D3BF0062B76362F9E784FE3235D4B4DFEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F3800A3E48CBEF8728378A99950F313348E3F83);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCEA720F88A7F2378A9640EDF6C2376F94C3D499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1A3CD913FA259DB8A074AE7BB483A85777F004B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* V_2 = NULL;
	String_t* V_3 = NULL;
	Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* V_4 = NULL;
	bool V_5 = false;
	Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* V_6 = NULL;
	bool V_7 = false;
	String_t* G_B3_0 = NULL;
	{
		// Debug.Log($"Loaded Conduit manifest from Resources/{manifestLocalPath}");
		String_t* L_0 = ___0_manifestLocalPath;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBCEA720F88A7F2378A9640EDF6C2376F94C3D499, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// int extIndex = manifestLocalPath.LastIndexOf('.');
		String_t* L_2 = ___0_manifestLocalPath;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_2, ((int32_t)46), NULL);
		V_0 = L_3;
		// string ignoreEnd = extIndex == -1 ? manifestLocalPath : manifestLocalPath.Substring(0, extIndex);
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_5 = ___0_manifestLocalPath;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_5, 0, L_6, NULL);
		G_B3_0 = L_7;
		goto IL_002a;
	}

IL_0029:
	{
		String_t* L_8 = ___0_manifestLocalPath;
		G_B3_0 = L_8;
	}

IL_002a:
	{
		V_1 = G_B3_0;
		// TextAsset jsonFile = Resources.Load<TextAsset>(ignoreEnd);
		String_t* L_9 = V_1;
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_10;
		L_10 = Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2(L_9, Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		V_2 = L_10;
		// if (jsonFile == null)
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_11 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_5 = L_12;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0056;
		}
	}
	{
		// Debug.LogError($"Conduit Error - No Manifest found at Resources/{manifestLocalPath}");
		String_t* L_14 = ___0_manifestLocalPath;
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6F3800A3E48CBEF8728378A99950F313348E3F83, L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_15, NULL);
		// return null;
		V_6 = (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF*)NULL;
		goto IL_0094;
	}

IL_0056:
	{
		// string rawJson = jsonFile.text;
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_16 = V_2;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_16, NULL);
		V_3 = L_17;
		// var manifest = JsonMapper.ToObject<Manifest>(rawJson);
		String_t* L_18 = V_3;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t73A696B3FD14CEB9054963740E9AEDD059B29DB0_il2cpp_TypeInfo_var);
		Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* L_19;
		L_19 = JsonMapper_ToObject_TisManifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF_m0D6C453F4C844B5193A8760A09944CA717BB54F4(L_18, JsonMapper_ToObject_TisManifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF_m0D6C453F4C844B5193A8760A09944CA717BB54F4_RuntimeMethod_var);
		V_4 = L_19;
		// if (manifest.ResolveActions())
		Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* L_20 = V_4;
		NullCheck(L_20);
		bool L_21;
		L_21 = Manifest_ResolveActions_m0D1DC5CFFED58BCEF65CF8A00E79CD5B84C44845(L_20, NULL);
		V_7 = L_21;
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_0081;
		}
	}
	{
		// Debug.Log($"Successfully Loaded Conduit manifest");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral45E8B3D3BF0062B76362F9E784FE3235D4B4DFEF, NULL);
		goto IL_008e;
	}

IL_0081:
	{
		// Debug.LogError($"Fail to resolve actions from Conduit manifest");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralE1A3CD913FA259DB8A074AE7BB483A85777F004B, NULL);
	}

IL_008e:
	{
		// return manifest;
		Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* L_23 = V_4;
		V_6 = L_23;
		goto IL_0094;
	}

IL_0094:
	{
		// }
		Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* L_24 = V_6;
		return L_24;
	}
}
// System.Void Meta.Conduit.ManifestLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestLoader__ctor_mE8C2E5D19E871C4E0B98ECDDF40DBA686D2A8DD7 (ManifestLoader_t88C032862ECBA374162619B4B2FD9C0AE1AE9263* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Meta.Conduit.ManifestParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter__ctor_mF735BD664B0DC87DE7FA9C03F061D85EF53BDE38 (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	{
		// public ManifestParameter() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public ManifestParameter() { }
		return;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_Name_m23911DEC06D8394D6DC4BEDF0727C90206BB28F7 (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	{
		// get => name;
		String_t* L_0 = __this->___name_0;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_Name_m99C46CA954D6B71CBE9878663AF08CC904268833 (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => name = ConduitUtilities.DelimitWithUnderscores(value).ToLower();
		String_t* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(ConduitUtilities_t9158054BE2E130BF59C1DEACB3195C421B1E9274_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = ConduitUtilities_DelimitWithUnderscores_m872CE6950B035EA443E3F82BDABDE6A0FB2C75F2(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_1, NULL);
		__this->___name_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_2);
		return;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_InternalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_InternalName_mF70C46A0712C9FE0E49E9D9B959A874E89C9A9C9 (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	{
		// public string InternalName { get; set; }
		String_t* L_0 = __this->___U3CInternalNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_InternalName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_InternalName_mE3035CAE72CADCC5D4234F880CFE2400F541D7B9 (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string InternalName { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CInternalNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInternalNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_QualifiedName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedName_m0FD2507FD0A04B99591E92130A2907E6401E7DDE (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	{
		// public string QualifiedName { get; set; }
		String_t* L_0 = __this->___U3CQualifiedNameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_QualifiedName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_QualifiedName_m6585115B189CA4B902BD0E44B22A4D6F75436F9A (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string QualifiedName { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CQualifiedNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CQualifiedNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_EntityType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_EntityType_mFD40D4D06687B92D2A07FE01816023D163F44FE5 (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	String_t* V_4 = NULL;
	bool V_5 = false;
	{
		// var lastPeriod = QualifiedTypeName.LastIndexOf('.');
		String_t* L_0;
		L_0 = ManifestParameter_get_QualifiedTypeName_m58FE72048BDC0C57AB3EE8E876FBEC33C66999A5_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_0, ((int32_t)46), NULL);
		V_0 = L_1;
		// if (lastPeriod < 0)
		int32_t L_2 = V_0;
		V_3 = (bool)((((int32_t)L_2) < ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// return string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_4 = L_4;
		goto IL_0056;
	}

IL_0021:
	{
		// var entityName = QualifiedTypeName.Substring(lastPeriod + 1);
		String_t* L_5;
		L_5 = ManifestParameter_get_QualifiedTypeName_m58FE72048BDC0C57AB3EE8E876FBEC33C66999A5_inline(__this, NULL);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		V_1 = L_7;
		// var lastPlus = entityName.LastIndexOf('+');
		String_t* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_8, ((int32_t)43), NULL);
		V_2 = L_9;
		// if (lastPlus < 0)
		int32_t L_10 = V_2;
		V_5 = (bool)((((int32_t)L_10) < ((int32_t)0))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0049;
		}
	}
	{
		// return entityName;
		String_t* L_12 = V_1;
		V_4 = L_12;
		goto IL_0056;
	}

IL_0049:
	{
		// return entityName.Substring(lastPlus + 1);
		String_t* L_13 = V_1;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_13, ((int32_t)il2cpp_codegen_add(L_14, 1)), NULL);
		V_4 = L_15;
		goto IL_0056;
	}

IL_0056:
	{
		// }
		String_t* L_16 = V_4;
		return L_16;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_TypeAssembly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_TypeAssembly_mC4240EE5AD36FBA15C8DFBD919630E21D596902C (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	{
		// public string TypeAssembly { get; set; }
		String_t* L_0 = __this->___U3CTypeAssemblyU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_TypeAssembly(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_TypeAssembly_m63A5FA2620F66CE3D96A3960AD3D724AA8A5D423 (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string TypeAssembly { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CTypeAssemblyU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTypeAssemblyU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Meta.Conduit.ManifestParameter::get_QualifiedTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedTypeName_m58FE72048BDC0C57AB3EE8E876FBEC33C66999A5 (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	{
		// public string QualifiedTypeName { get; set; }
		String_t* L_0 = __this->___U3CQualifiedTypeNameU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_QualifiedTypeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_QualifiedTypeName_mF751499C3F32153BF1C93F749B75747A06B45541 (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string QualifiedTypeName { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CQualifiedTypeNameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CQualifiedTypeNameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Meta.Conduit.ManifestParameter::get_Aliases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ManifestParameter_get_Aliases_mEC8F44D292F09A3661C1CBC2DCCAB8BB96D95D78 (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CAliasesU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Meta.Conduit.ManifestParameter::set_Aliases(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManifestParameter_set_Aliases_mA7913F0DD3ACE9C9142EE200857E4A092B9B2B12 (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___0_value;
		__this->___U3CAliasesU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAliasesU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Boolean Meta.Conduit.ManifestParameter::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestParameter_Equals_m6C31FD83374072C31D2F313F47B9ED1B986537C4 (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// return obj is ManifestParameter other && this.Equals(other);
		RuntimeObject* L_0 = ___0_obj;
		V_0 = ((ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E*)IsInstClass((RuntimeObject*)L_0, ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E_il2cpp_TypeInfo_var));
		ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_2 = V_0;
		bool L_3;
		L_3 = ManifestParameter_Equals_mCBB6851B7DB3A7CBF0568C4BA28AE610ACB7BDBA(__this, L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_1 = (bool)G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Int32 Meta.Conduit.ManifestParameter::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManifestParameter_GetHashCode_m73A19158865C7DC6F7AA92EFDFF78C8224ACFD8B (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var hash = 17;
		V_0 = ((int32_t)17);
		// hash = hash * 31 + name.GetHashCode();
		int32_t L_0 = V_0;
		String_t* L_1 = __this->___name_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)31))), L_2));
		// hash = hash * 31 + InternalName.GetHashCode();
		int32_t L_3 = V_0;
		String_t* L_4;
		L_4 = ManifestParameter_get_InternalName_mF70C46A0712C9FE0E49E9D9B959A874E89C9A9C9_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)31))), L_5));
		// hash = hash * 31 + QualifiedName.GetHashCode();
		int32_t L_6 = V_0;
		String_t* L_7;
		L_7 = ManifestParameter_get_QualifiedName_m0FD2507FD0A04B99591E92130A2907E6401E7DDE_inline(__this, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_7);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_6, ((int32_t)31))), L_8));
		// hash = hash * 31 + TypeAssembly.GetHashCode();
		int32_t L_9 = V_0;
		String_t* L_10;
		L_10 = ManifestParameter_get_TypeAssembly_mC4240EE5AD36FBA15C8DFBD919630E21D596902C_inline(__this, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_10);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_9, ((int32_t)31))), L_11));
		// hash = hash * 31 + QualifiedTypeName.GetHashCode();
		int32_t L_12 = V_0;
		String_t* L_13;
		L_13 = ManifestParameter_get_QualifiedTypeName_m58FE72048BDC0C57AB3EE8E876FBEC33C66999A5_inline(__this, NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_13);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)31))), L_14));
		// hash = hash * 31 + Aliases.GetHashCode();
		int32_t L_15 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16;
		L_16 = ManifestParameter_get_Aliases_mEC8F44D292F09A3661C1CBC2DCCAB8BB96D95D78_inline(__this, NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_16);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_15, ((int32_t)31))), L_17));
		// return hash;
		int32_t L_18 = V_0;
		V_1 = L_18;
		goto IL_006e;
	}

IL_006e:
	{
		// }
		int32_t L_19 = V_1;
		return L_19;
	}
}
// System.Boolean Meta.Conduit.ManifestParameter::Equals(Meta.Conduit.ManifestParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManifestParameter_Equals_mCBB6851B7DB3A7CBF0568C4BA28AE610ACB7BDBA (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B7_0 = 0;
	{
		// return Equals(this.InternalName, other.InternalName) && Equals(this.QualifiedName, other.QualifiedName) &&
		//        Equals(this.EntityType, other.EntityType) && this.Aliases.SequenceEqual(other.Aliases) &&
		//        Equals(this.TypeAssembly, other.TypeAssembly) &&
		//        Equals(this.QualifiedTypeName, other.QualifiedTypeName);
		String_t* L_0;
		L_0 = ManifestParameter_get_InternalName_mF70C46A0712C9FE0E49E9D9B959A874E89C9A9C9_inline(__this, NULL);
		ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_1 = ___0_other;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ManifestParameter_get_InternalName_mF70C46A0712C9FE0E49E9D9B959A874E89C9A9C9_inline(L_1, NULL);
		bool L_3;
		L_3 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_4;
		L_4 = ManifestParameter_get_QualifiedName_m0FD2507FD0A04B99591E92130A2907E6401E7DDE_inline(__this, NULL);
		ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_5 = ___0_other;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = ManifestParameter_get_QualifiedName_m0FD2507FD0A04B99591E92130A2907E6401E7DDE_inline(L_5, NULL);
		bool L_7;
		L_7 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_8;
		L_8 = ManifestParameter_get_EntityType_mFD40D4D06687B92D2A07FE01816023D163F44FE5(__this, NULL);
		ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_9 = ___0_other;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = ManifestParameter_get_EntityType_mFD40D4D06687B92D2A07FE01816023D163F44FE5(L_9, NULL);
		bool L_11;
		L_11 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0073;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12;
		L_12 = ManifestParameter_get_Aliases_mEC8F44D292F09A3661C1CBC2DCCAB8BB96D95D78_inline(__this, NULL);
		ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_13 = ___0_other;
		NullCheck(L_13);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14;
		L_14 = ManifestParameter_get_Aliases_mEC8F44D292F09A3661C1CBC2DCCAB8BB96D95D78_inline(L_13, NULL);
		bool L_15;
		L_15 = Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1(L_12, L_14, Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_16;
		L_16 = ManifestParameter_get_TypeAssembly_mC4240EE5AD36FBA15C8DFBD919630E21D596902C_inline(__this, NULL);
		ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_17 = ___0_other;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = ManifestParameter_get_TypeAssembly_mC4240EE5AD36FBA15C8DFBD919630E21D596902C_inline(L_17, NULL);
		bool L_19;
		L_19 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_20;
		L_20 = ManifestParameter_get_QualifiedTypeName_m58FE72048BDC0C57AB3EE8E876FBEC33C66999A5_inline(__this, NULL);
		ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* L_21 = ___0_other;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = ManifestParameter_get_QualifiedTypeName_m58FE72048BDC0C57AB3EE8E876FBEC33C66999A5_inline(L_21, NULL);
		bool L_23;
		L_23 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_20, L_22, NULL);
		G_B7_0 = ((int32_t)(L_23));
		goto IL_0074;
	}

IL_0073:
	{
		G_B7_0 = 0;
	}

IL_0074:
	{
		V_0 = (bool)G_B7_0;
		goto IL_0077;
	}

IL_0077:
	{
		// }
		bool L_24 = V_0;
		return L_24;
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
// System.Void Meta.Conduit.ParameterProvider::Populate(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterProvider_Populate_mB2189E75384B80783A7A5CDD09072285BCBA4DD0 (ParameterProvider_t4C3E4FAB375D894AA6249050E2521219D8B47CC1* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___0_actualParameters, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___1_parameterToRoleMap, const RuntimeMethod* method) 
{
	{
		// this.ActualParameters = actualParameters;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___0_actualParameters;
		__this->___ActualParameters_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ActualParameters_0), (void*)L_0);
		// this.parameterToRoleMap = parameterToRoleMap;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = ___1_parameterToRoleMap;
		__this->___parameterToRoleMap_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parameterToRoleMap_1), (void*)L_1);
		// }
		return;
	}
}
// System.Boolean Meta.Conduit.ParameterProvider::ContainsParameter(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterProvider_ContainsParameter_m72F38237F008638B03D1A12DBD486BF4CC17F193 (ParameterProvider_t4C3E4FAB375D894AA6249050E2521219D8B47CC1* __this, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___0_parameter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		// return (ActualParameters.ContainsKey(parameter.Name) &&
		//         this.parameterToRoleMap.ContainsKey(parameter.Name) &&
		//         ActualParameters[parameter.Name].GetType() == parameter.ParameterType) ||
		//        this.SupportedSpecializedParameter(parameter);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = __this->___ActualParameters_0;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_1 = ___0_parameter;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_1);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_0, L_2, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = __this->___parameterToRoleMap_1;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_5 = ___0_parameter;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_5);
		NullCheck(L_4);
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_4, L_6, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_004a;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_8 = __this->___ActualParameters_0;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_9 = ___0_parameter;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_9);
		NullCheck(L_8);
		RuntimeObject* L_11;
		L_11 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_8, L_10, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		NullCheck(L_11);
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_11, NULL);
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_13 = ___0_parameter;
		NullCheck(L_13);
		Type_t* L_14;
		L_14 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_13);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_12, L_14, NULL);
		if (L_15)
		{
			goto IL_0053;
		}
	}

IL_004a:
	{
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_16 = ___0_parameter;
		bool L_17;
		L_17 = VirtualFuncInvoker1< bool, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* >::Invoke(7 /* System.Boolean Meta.Conduit.ParameterProvider::SupportedSpecializedParameter(System.Reflection.ParameterInfo) */, __this, L_16);
		G_B5_0 = ((int32_t)(L_17));
		goto IL_0054;
	}

IL_0053:
	{
		G_B5_0 = 1;
	}

IL_0054:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0057;
	}

IL_0057:
	{
		// }
		bool L_18 = V_0;
		return L_18;
	}
}
// System.Object Meta.Conduit.ParameterProvider::GetParameterValue(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParameterProvider_GetParameterValue_mF28FBFA51D6D593BB76F2C46170A29EC189E0118 (ParameterProvider_t4C3E4FAB375D894AA6249050E2521219D8B47CC1* __this, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___0_formalParameter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89DDE9D8219984BFAB2D008F9587AE8954A0257B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE10CE76A36830983737AFC7AB5662B41A8D7111B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Exception_t* V_8 = NULL;
	String_t* V_9 = NULL;
	Exception_t* V_10 = NULL;
	String_t* V_11 = NULL;
	bool V_12 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var formalParameterName = formalParameter.Name;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_0 = ___0_formalParameter;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_0);
		V_0 = L_1;
		// if (!this.ActualParameters.ContainsKey(formalParameterName))
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = __this->___ActualParameters_0;
		String_t* L_3 = V_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_2, L_3, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0061;
		}
	}
	{
		// if (!this.parameterToRoleMap.ContainsKey(formalParameterName))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6 = __this->___parameterToRoleMap_1;
		String_t* L_7 = V_0;
		NullCheck(L_6);
		bool L_8;
		L_8 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_6, L_7, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0053;
		}
	}
	{
		// Debug.LogError($"Parameter {formalParameterName} is missing");
		String_t* L_10 = V_0;
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralE10CE76A36830983737AFC7AB5662B41A8D7111B, L_10, _stringLiteral89DDE9D8219984BFAB2D008F9587AE8954A0257B, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_11, NULL);
		// return false;
		bool L_12 = ((bool)0);
		RuntimeObject* L_13 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_12);
		V_4 = L_13;
		goto IL_0152;
	}

IL_0053:
	{
		// formalParameterName = this.parameterToRoleMap[formalParameterName];
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_14 = __this->___parameterToRoleMap_1;
		String_t* L_15 = V_0;
		NullCheck(L_14);
		String_t* L_16;
		L_16 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_14, L_15, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		V_0 = L_16;
	}

IL_0061:
	{
		// if (this.ActualParameters.TryGetValue(formalParameterName, out var parameterValue))
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_17 = __this->___ActualParameters_0;
		String_t* L_18 = V_0;
		NullCheck(L_17);
		bool L_19;
		L_19 = Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8(L_17, L_18, (&V_1), Dictionary_2_TryGetValue_mC14A0401676B34A68B06FC858BA801E7DF99B7D8_RuntimeMethod_var);
		V_5 = L_19;
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_012f;
		}
	}
	{
		// if (formalParameter.ParameterType == typeof(string))
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_21 = ___0_formalParameter;
		NullCheck(L_21);
		Type_t* L_22;
		L_22 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_21);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_009d;
		}
	}
	{
		// return parameterValue;
		RuntimeObject* L_27 = V_1;
		V_4 = L_27;
		goto IL_0152;
	}

IL_009d:
	{
		// else if (formalParameter.ParameterType.IsEnum)
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_28 = ___0_formalParameter;
		NullCheck(L_28);
		Type_t* L_29;
		L_29 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_28);
		NullCheck(L_29);
		bool L_30;
		L_30 = VirtualFuncInvoker0< bool >::Invoke(68 /* System.Boolean System.Type::get_IsEnum() */, L_29);
		V_7 = L_30;
		bool L_31 = V_7;
		if (!L_31)
		{
			goto IL_00f3;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		// return Enum.Parse(formalParameter.ParameterType, parameterValue.ToString(), true);
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_32 = ___0_formalParameter;
		NullCheck(L_32);
		Type_t* L_33;
		L_33 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_32);
		RuntimeObject* L_34 = V_1;
		NullCheck(L_34);
		String_t* L_35;
		L_35 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_34);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_36;
		L_36 = Enum_Parse_m0316ABE916ED60AA2257A464A33A33D544EDEE12(L_33, L_35, (bool)1, NULL);
		V_4 = L_36;
		goto IL_0152;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c9;
		}
		throw e;
	}

CATCH_00c9:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_8 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// var error =
		//     $"Failed to cast {parameterValue} to enum of type {formalParameter.ParameterType}. {e}";
		RuntimeObject* L_37 = V_1;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_38 = ___0_formalParameter;
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_38);
		Exception_t* L_40 = V_8;
		String_t* L_41;
		L_41 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF7EFBD8BC034142848E4C19607C01A22400D9AE)), L_37, L_39, L_40, NULL);
		V_9 = L_41;
		// Debug.LogError(error);
		String_t* L_42 = V_9;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_42, NULL);
		// return false;
		bool L_43 = ((bool)0);
		RuntimeObject* L_44 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)), &L_43);
		V_4 = L_44;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0152;
	}// end catch (depth: 1)

IL_00f3:
	{
	}
	try
	{// begin try (depth: 1)
		// return Convert.ChangeType(parameterValue, formalParameter.ParameterType);
		RuntimeObject* L_45 = V_1;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_46 = ___0_formalParameter;
		NullCheck(L_46);
		Type_t* L_47;
		L_47 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_46);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_48;
		L_48 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_45, L_47, NULL);
		V_4 = L_48;
		goto IL_0152;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0105;
		}
		throw e;
	}

CATCH_0105:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// var error = $"Failed to convert {parameterValue} to {formalParameter.ParameterType}. {e}";
		RuntimeObject* L_49 = V_1;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_50 = ___0_formalParameter;
		NullCheck(L_50);
		Type_t* L_51;
		L_51 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_50);
		Exception_t* L_52 = V_10;
		String_t* L_53;
		L_53 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral022184FDCAF79E398879AD81666844068AE208D4)), L_49, L_51, L_52, NULL);
		V_11 = L_53;
		// Debug.LogError(error);
		String_t* L_54 = V_11;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_54, NULL);
		// return false;
		bool L_55 = ((bool)0);
		RuntimeObject* L_56 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)), &L_55);
		V_4 = L_56;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0152;
	}// end catch (depth: 1)

IL_012f:
	{
		// else if (SupportedSpecializedParameter(formalParameter))
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_57 = ___0_formalParameter;
		bool L_58;
		L_58 = VirtualFuncInvoker1< bool, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* >::Invoke(7 /* System.Boolean Meta.Conduit.ParameterProvider::SupportedSpecializedParameter(System.Reflection.ParameterInfo) */, __this, L_57);
		V_12 = L_58;
		bool L_59 = V_12;
		if (!L_59)
		{
			goto IL_0148;
		}
	}
	{
		// return this.GetSpecializedParameter(formalParameter);
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_60 = ___0_formalParameter;
		RuntimeObject* L_61;
		L_61 = VirtualFuncInvoker1< RuntimeObject*, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* >::Invoke(8 /* System.Object Meta.Conduit.ParameterProvider::GetSpecializedParameter(System.Reflection.ParameterInfo) */, __this, L_60);
		V_4 = L_61;
		goto IL_0152;
	}

IL_0148:
	{
		// return false;
		bool L_62 = ((bool)0);
		RuntimeObject* L_63 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_62);
		V_4 = L_63;
		goto IL_0152;
	}

IL_0152:
	{
		// }
		RuntimeObject* L_64 = V_4;
		return L_64;
	}
}
// System.Boolean Meta.Conduit.ParameterProvider::SupportedSpecializedParameter(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterProvider_SupportedSpecializedParameter_m7543E82589ABDB7BC0246D001E63E22B6CC8DCE1 (ParameterProvider_t4C3E4FAB375D894AA6249050E2521219D8B47CC1* __this, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___0_formalParameter, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return false;
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Object Meta.Conduit.ParameterProvider::GetSpecializedParameter(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParameterProvider_GetSpecializedParameter_m178B6D8BE1EE989169B2584631E6D1CD9DC309C7 (ParameterProvider_t4C3E4FAB375D894AA6249050E2521219D8B47CC1* __this, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___0_formalParameter, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException();
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParameterProvider_GetSpecializedParameter_m178B6D8BE1EE989169B2584631E6D1CD9DC309C7_RuntimeMethod_var)));
	}
}
// System.Void Meta.Conduit.ParameterProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterProvider__ctor_m2E35E89D2FEF5150874D7FC8C5A634D8733238BD (ParameterProvider_t4C3E4FAB375D894AA6249050E2521219D8B47CC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Dictionary<string, object> ActualParameters = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		__this->___ActualParameters_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ActualParameters_0), (void*)L_0);
		// private Dictionary<string, string> parameterToRoleMap = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_1, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->___parameterToRoleMap_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parameterToRoleMap_1), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_Intent_m17FF11C23FA3185C28EA1C69E6D2E9FF33186335_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Intent { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CIntentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIntentU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_Aliases_m995406386D2902278DD1746C5929E313D7DAB1AC_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; private set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___0_value;
		__this->___U3CAliasesU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAliasesU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MinConfidence_m2685185A8BCEA19715B5A873EF97153CC87B8D7F_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MinConfidence { get; protected set; }
		float L_0 = ___0_value;
		__this->___U3CMinConfidenceU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_MaxConfidence_mE915D1152683E6AC32BAD4264487A3BB01F08FF6_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MaxConfidence { get; protected set; }
		float L_0 = ___0_value;
		__this->___U3CMaxConfidenceU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConduitActionAttribute_set_ValidatePartial_mE992E86682140452D8D18E7ACFEDFC0AE58F0DDA_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool ValidatePartial { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CValidatePartialU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* Manifest_get_Actions_m40F324369401021B5D0DB4DBA6B35EC6C1AC18C6_inline (Manifest_tF65181F1FAC9AC5ED146762B3E237FC96F5C83DF* __this, const RuntimeMethod* method) 
{
	{
		// public List<ManifestAction> Actions { get; set; } = new List<ManifestAction>();
		List_1_t978B77C5C73EB00908675DDFDAF4EE1919E199D2* L_0 = __this->___U3CActionsU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* ManifestAction_get_Parameters_m0EF5F625C9026D20CFE0DF0FB062A590565B4543_inline (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) 
{
	{
		// public List<ManifestParameter> Parameters { get; set; } = new List<ManifestParameter>();
		List_1_tA2AC0C9AE9ECB62329E93F497D934E059512C8EC* L_0 = __this->___U3CParametersU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_InternalName_mF70C46A0712C9FE0E49E9D9B959A874E89C9A9C9_inline (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	{
		// public string InternalName { get; set; }
		String_t* L_0 = __this->___U3CInternalNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedName_m0FD2507FD0A04B99591E92130A2907E6401E7DDE_inline (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	{
		// public string QualifiedName { get; set; }
		String_t* L_0 = __this->___U3CQualifiedNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodInfo_t* InvocationContext_get_MethodInfo_m18D5766160EE7E351C355A53BAAF9CB9367F4B48_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) 
{
	{
		// public MethodInfo MethodInfo { get; set; }
		MethodInfo_t* L_0 = __this->___U3CMethodInfoU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InvocationContext_get_ValidatePartial_m6026F416EF238451A371E4125F5BC92AF9D1E7A5_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) 
{
	{
		// public bool ValidatePartial { get; set; } = false;
		bool L_0 = __this->___U3CValidatePartialU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InvocationContext_get_MinConfidence_m8320100A867EB9664BB1D5DC95ADA9EE91FD8EE4_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) 
{
	{
		// public float MinConfidence { get; set; } = 0;
		float L_0 = __this->___U3CMinConfidenceU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float InvocationContext_get_MaxConfidence_mBFE6764249F9604EA7788E22F87D18968FA5AC17_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxConfidence { get; set; } = 1;
		float L_0 = __this->___U3CMaxConfidenceU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* InvocationContext_get_Type_mF3CE4F0552F57E7268A4CDF48AF9A1B88BD78EE0_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, const RuntimeMethod* method) 
{
	{
		// public Type Type { get; set; }
		Type_t* L_0 = __this->___U3CTypeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* L_0 = ((StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var))->___s_ordinalIgnoreCase_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_ID_mCCA94FFA2F3904129D01D8D27C60C746F80A9611_inline (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->___U3CIDU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Assembly_mC20A5E9E09F961C338B8E45C57ECD0715AB33092_inline (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) 
{
	{
		// public string Assembly { get; set; }
		String_t* L_0 = __this->___U3CAssemblyU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_QualifiedTypeName_m58FE72048BDC0C57AB3EE8E876FBEC33C66999A5_inline (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	{
		// public string QualifiedTypeName { get; set; }
		String_t* L_0 = __this->___U3CQualifiedTypeNameU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestParameter_get_TypeAssembly_mC4240EE5AD36FBA15C8DFBD919630E21D596902C_inline (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	{
		// public string TypeAssembly { get; set; }
		String_t* L_0 = __this->___U3CTypeAssemblyU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_Type_m296A49CFC7A7CA57B6897B28B594F1B9D9C894C2_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type Type { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTypeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MethodInfo_m88C3904AF0120B16BA40B99AC86D2F58FC67E0CD_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, MethodInfo_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public MethodInfo MethodInfo { get; set; }
		MethodInfo_t* L_0 = ___0_value;
		__this->___U3CMethodInfoU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMethodInfoU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MinConfidence_mCCBF912BF339223A01CE47C6DBF3617DC312E593_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, const RuntimeMethod* method) 
{
	{
		// public float MinConfidence { get; protected set; }
		float L_0 = __this->___U3CMinConfidenceU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MinConfidence_m6123EC65BA7D243E8E0B3A9CDAF750518A9FD22A_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MinConfidence { get; set; } = 0;
		float L_0 = ___0_value;
		__this->___U3CMinConfidenceU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConduitActionAttribute_get_MaxConfidence_mA53C187CBCEC1B0B8736C4CF7AAB63E913ECA5F4_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxConfidence { get; protected set; }
		float L_0 = __this->___U3CMaxConfidenceU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_MaxConfidence_m676BD27CFC95D8AD6195E34AC95564D4A0B3948B_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MaxConfidence { get; set; } = 1;
		float L_0 = ___0_value;
		__this->___U3CMaxConfidenceU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ConduitActionAttribute_get_ValidatePartial_mD8294194126641F37DBEA00E882B66F253A40C4C_inline (ConduitActionAttribute_t5C9C47F55820AEC1ADB15D85853FAD41090D7D03* __this, const RuntimeMethod* method) 
{
	{
		// public bool ValidatePartial { get; private set; }
		bool L_0 = __this->___U3CValidatePartialU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InvocationContext_set_ValidatePartial_m23D469C34DF35B16D0062F8102D4EC1D6C254151_inline (InvocationContext_t59E9CF067A50EDB835F14C795FE7DBCC32F62E05* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool ValidatePartial { get; set; } = false;
		bool L_0 = ___0_value;
		__this->___U3CValidatePartialU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestAction_get_Name_mD96EC73537658D01C766C54B0B819AFA1D5DD232_inline (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ManifestAction_get_Aliases_m359911E7A85D0F5A230D0AB6D154C05A69233204_inline (ManifestAction_t669ABBC9BB7419A59BFAE250F45403C78A30C056* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; set; } = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CAliasesU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_ID_m02506A7F8C1E07DC5EEA06B106183B37B81660B8_inline (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) 
{
	{
		// public string ID { get; set; }
		String_t* L_0 = __this->___U3CIDU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Type_mBC84B9BB2C9E553B69A2D4C1767B20ED1DCE0704_inline (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) 
{
	{
		// public string Type { get; set; }
		String_t* L_0 = __this->___U3CTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ManifestEntity_get_Name_m6EF67B98CC88F20449A5396CF4DF806A4FA0AC61_inline (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ManifestEntity_get_Values_m55A1BC0584AA1542D169B217332865EB79E71259_inline (ManifestEntity_t023CD958B1387BF24647DAF1E49C2F393C282938* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Values { get; set; } = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CValuesU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ManifestParameter_get_Aliases_mEC8F44D292F09A3661C1CBC2DCCAB8BB96D95D78_inline (ManifestParameter_tA5D22EB027F231CAC8E3E9043076A046B5C0486E* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Aliases { get; set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CAliasesU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
