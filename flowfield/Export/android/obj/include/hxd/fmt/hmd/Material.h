#ifndef INCLUDED_hxd_fmt_hmd_Material
#define INCLUDED_hxd_fmt_hmd_Material

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_35eccd3a4deacd0e_131_new)
HX_DECLARE_CLASS1(h2d,BlendMode)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Material)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Property)

namespace hxd{
namespace fmt{
namespace hmd{


class HXCPP_CLASS_ATTRIBUTES Material_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Material_obj OBJ_;
		Material_obj();

	public:
		enum { _hx_ClassId = 0x608c3109 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fmt.hmd.Material")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fmt.hmd.Material"); }

		inline static ::hx::ObjectPtr< Material_obj > __new() {
			::hx::ObjectPtr< Material_obj > __this = new Material_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Material_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Material_obj *__this = (Material_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Material_obj), true, "hxd.fmt.hmd.Material"));
			*(void **)__this = Material_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_35eccd3a4deacd0e_131_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Material_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Material",c7,18,57,ca); }

		::String name;
		::Array< ::Dynamic> props;
		::String diffuseTexture;
		::String specularTexture;
		::String normalMap;
		 ::h2d::BlendMode blendMode;
};

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd

#endif /* INCLUDED_hxd_fmt_hmd_Material */ 
