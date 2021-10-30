#ifndef INCLUDED_h3d_anim_LinearFrame
#define INCLUDED_h3d_anim_LinearFrame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS2(h3d,anim,LinearFrame)

namespace h3d{
namespace anim{


class HXCPP_CLASS_ATTRIBUTES LinearFrame_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LinearFrame_obj OBJ_;
		LinearFrame_obj();

	public:
		enum { _hx_ClassId = 0x3172a0de };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h3d.anim.LinearFrame")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h3d.anim.LinearFrame"); }
		static ::hx::ObjectPtr< LinearFrame_obj > __new();
		static ::hx::ObjectPtr< LinearFrame_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LinearFrame_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LinearFrame",e8,2f,37,45); }

		Float tx;
		Float ty;
		Float tz;
		Float qx;
		Float qy;
		Float qz;
		Float qw;
		Float sx;
		Float sy;
		Float sz;
		 ::h3d::Matrix toMatrix();
		::Dynamic toMatrix_dyn();

};

} // end namespace h3d
} // end namespace anim

#endif /* INCLUDED_h3d_anim_LinearFrame */ 
