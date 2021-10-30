#ifndef INCLUDED_hxsl_ChannelTools
#define INCLUDED_hxsl_ChannelTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS1(hxsl,ChannelTools)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES ChannelTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ChannelTools_obj OBJ_;
		ChannelTools_obj();

	public:
		enum { _hx_ClassId = 0x51463961 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxsl.ChannelTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxsl.ChannelTools"); }

		inline static ::hx::ObjectPtr< ChannelTools_obj > __new() {
			::hx::ObjectPtr< ChannelTools_obj > __this = new ChannelTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ChannelTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ChannelTools_obj *__this = (ChannelTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChannelTools_obj), false, "hxsl.ChannelTools"));
			*(void **)__this = ChannelTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ChannelTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ChannelTools",78,aa,f3,e0); }

		static bool isPackedFormat( ::h3d::mat::Texture c);
		static ::Dynamic isPackedFormat_dyn();

};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_ChannelTools */ 
