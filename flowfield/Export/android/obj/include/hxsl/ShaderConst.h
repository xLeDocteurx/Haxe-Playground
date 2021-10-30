#ifndef INCLUDED_hxsl_ShaderConst
#define INCLUDED_hxsl_ShaderConst

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_cc704b2cfa990ef5_30_new)
HX_DECLARE_CLASS1(hxsl,ShaderConst)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES ShaderConst_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ShaderConst_obj OBJ_;
		ShaderConst_obj();

	public:
		enum { _hx_ClassId = 0x7f9dbd89 };

		void __construct( ::Dynamic v,int pos,int bits);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl.ShaderConst")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl.ShaderConst"); }

		inline static ::hx::ObjectPtr< ShaderConst_obj > __new( ::Dynamic v,int pos,int bits) {
			::hx::ObjectPtr< ShaderConst_obj > __this = new ShaderConst_obj();
			__this->__construct(v,pos,bits);
			return __this;
		}

		inline static ::hx::ObjectPtr< ShaderConst_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic v,int pos,int bits) {
			ShaderConst_obj *__this = (ShaderConst_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShaderConst_obj), true, "hxsl.ShaderConst"));
			*(void **)__this = ShaderConst_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_cc704b2cfa990ef5_30_new)
HXLINE(  31)		( ( ::hxsl::ShaderConst)(__this) )->v = v;
HXLINE(  32)		( ( ::hxsl::ShaderConst)(__this) )->pos = pos;
HXLINE(  33)		( ( ::hxsl::ShaderConst)(__this) )->bits = bits;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShaderConst_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShaderConst",de,3b,bd,05); }

		 ::Dynamic v;
		int pos;
		int bits;
		int globalId;
		 ::hxsl::ShaderConst next;
};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_ShaderConst */ 
