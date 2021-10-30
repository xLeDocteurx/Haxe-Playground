#ifndef INCLUDED_hxd_fmt_hmd_Model
#define INCLUDED_hxd_fmt_hmd_Model

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_f241215edd4578cd_171_new)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Model)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Position)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Property)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Skin)

namespace hxd{
namespace fmt{
namespace hmd{


class HXCPP_CLASS_ATTRIBUTES Model_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Model_obj OBJ_;
		Model_obj();

	public:
		enum { _hx_ClassId = 0x22a532a3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fmt.hmd.Model")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fmt.hmd.Model"); }

		inline static ::hx::ObjectPtr< Model_obj > __new() {
			::hx::ObjectPtr< Model_obj > __this = new Model_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Model_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Model_obj *__this = (Model_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Model_obj), true, "hxd.fmt.hmd.Model"));
			*(void **)__this = Model_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_f241215edd4578cd_171_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Model_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Model",89,93,85,9f); }

		::String name;
		::Array< ::Dynamic> props;
		int parent;
		::String follow;
		 ::hxd::fmt::hmd::Position position;
		int geometry;
		::Array< int > materials;
		 ::hxd::fmt::hmd::Skin skin;
};

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd

#endif /* INCLUDED_hxd_fmt_hmd_Model */ 
