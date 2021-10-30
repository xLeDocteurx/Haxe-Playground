#ifndef INCLUDED_hxd_snd_Listener
#define INCLUDED_hxd_snd_Listener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Camera)
HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(hxd,snd,Listener)

namespace hxd{
namespace snd{


class HXCPP_CLASS_ATTRIBUTES Listener_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Listener_obj OBJ_;
		Listener_obj();

	public:
		enum { _hx_ClassId = 0x37ce9329 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.snd.Listener")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.snd.Listener"); }
		static ::hx::ObjectPtr< Listener_obj > __new();
		static ::hx::ObjectPtr< Listener_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Listener_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Listener",94,bc,e3,11); }

		 ::h3d::Vector position;
		 ::h3d::Vector direction;
		 ::h3d::Vector velocity;
		 ::h3d::Vector up;
		void syncCamera( ::h3d::Camera cam);
		::Dynamic syncCamera_dyn();

};

} // end namespace hxd
} // end namespace snd

#endif /* INCLUDED_hxd_snd_Listener */ 
