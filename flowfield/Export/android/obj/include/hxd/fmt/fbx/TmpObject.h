#ifndef INCLUDED_hxd_fmt_fbx_TmpObject
#define INCLUDED_hxd_fmt_fbx_TmpObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_d55f405f5b98301d_25_new)
HX_DECLARE_CLASS2(h3d,anim,Joint)
HX_DECLARE_CLASS2(h3d,scene,Object)
HX_DECLARE_CLASS3(hxd,fmt,fbx,TmpObject)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace hxd{
namespace fmt{
namespace fbx{


class HXCPP_CLASS_ATTRIBUTES TmpObject_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TmpObject_obj OBJ_;
		TmpObject_obj();

	public:
		enum { _hx_ClassId = 0x5883ac13 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fmt.fbx.TmpObject")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fmt.fbx.TmpObject"); }

		inline static ::hx::ObjectPtr< TmpObject_obj > __new() {
			::hx::ObjectPtr< TmpObject_obj > __this = new TmpObject_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TmpObject_obj > __alloc(::hx::Ctx *_hx_ctx) {
			TmpObject_obj *__this = (TmpObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TmpObject_obj), true, "hxd.fmt.fbx.TmpObject"));
			*(void **)__this = TmpObject_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_d55f405f5b98301d_25_new)
HXDLIN(  25)		( ( ::hxd::fmt::fbx::TmpObject)(__this) )->childs = ::Array_obj< ::Dynamic>::__new(0);
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TmpObject_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TmpObject",d6,f2,e8,0c); }

		int index;
		 ::Dynamic model;
		 ::hxd::fmt::fbx::TmpObject parent;
		bool isJoint;
		bool isMesh;
		::Array< ::Dynamic> childs;
		 ::h3d::scene::Object obj;
		 ::h3d::anim::Joint joint;
		 ::hxd::fmt::fbx::TmpObject skin;
};

} // end namespace hxd
} // end namespace fmt
} // end namespace fbx

#endif /* INCLUDED_hxd_fmt_fbx_TmpObject */ 
