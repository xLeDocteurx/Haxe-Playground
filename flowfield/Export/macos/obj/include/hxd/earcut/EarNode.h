#ifndef INCLUDED_hxd_earcut_EarNode
#define INCLUDED_hxd_earcut_EarNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_c6d2d050dc4fb801_14_new)
HX_DECLARE_CLASS2(hxd,earcut,EarNode)

namespace hxd{
namespace earcut{


class HXCPP_CLASS_ATTRIBUTES EarNode_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EarNode_obj OBJ_;
		EarNode_obj();

	public:
		enum { _hx_ClassId = 0x5175e0d8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.earcut.EarNode")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.earcut.EarNode"); }

		inline static ::hx::ObjectPtr< EarNode_obj > __new() {
			::hx::ObjectPtr< EarNode_obj > __this = new EarNode_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EarNode_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EarNode_obj *__this = (EarNode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EarNode_obj), true, "hxd.earcut.EarNode"));
			*(void **)__this = EarNode_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_c6d2d050dc4fb801_14_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EarNode_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EarNode",98,59,78,d5); }

		 ::hxd::earcut::EarNode next;
		 ::hxd::earcut::EarNode prev;
		 ::hxd::earcut::EarNode nextZ;
		 ::hxd::earcut::EarNode prevZ;
		 ::hxd::earcut::EarNode allocNext;
		Float x;
		Float y;
		int i;
		int z;
		bool steiner;
};

} // end namespace hxd
} // end namespace earcut

#endif /* INCLUDED_hxd_earcut_EarNode */ 
