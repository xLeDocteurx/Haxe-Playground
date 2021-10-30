#ifndef INCLUDED_h3d_pass_Border
#define INCLUDED_h3d_pass_Border

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_pass_ScreenFx
#include <h3d/pass/ScreenFx.h>
#endif
HX_DECLARE_CLASS2(h3d,pass,Border)
HX_DECLARE_CLASS2(h3d,pass,ScreenFx)

namespace h3d{
namespace pass{


class HXCPP_CLASS_ATTRIBUTES Border_obj : public  ::h3d::pass::ScreenFx_obj
{
	public:
		typedef  ::h3d::pass::ScreenFx_obj super;
		typedef Border_obj OBJ_;
		Border_obj();

	public:
		enum { _hx_ClassId = 0x02521296 };

		void __construct(int width,int height,::hx::Null< int >  __o_size);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.pass.Border")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.pass.Border"); }
		static ::hx::ObjectPtr< Border_obj > __new(int width,int height,::hx::Null< int >  __o_size);
		static ::hx::ObjectPtr< Border_obj > __alloc(::hx::Ctx *_hx_ctx,int width,int height,::hx::Null< int >  __o_size);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Border_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Border",0c,c1,ae,98); }

		void dispose();

};

} // end namespace h3d
} // end namespace pass

#endif /* INCLUDED_h3d_pass_Border */ 
