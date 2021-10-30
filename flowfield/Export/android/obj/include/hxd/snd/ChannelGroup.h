#ifndef INCLUDED_hxd_snd_ChannelGroup
#define INCLUDED_hxd_snd_ChannelGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_snd_ChannelBase
#include <hxd/snd/ChannelBase.h>
#endif
HX_DECLARE_CLASS2(hxd,snd,ChannelBase)
HX_DECLARE_CLASS2(hxd,snd,ChannelGroup)

namespace hxd{
namespace snd{


class HXCPP_CLASS_ATTRIBUTES ChannelGroup_obj : public  ::hxd::snd::ChannelBase_obj
{
	public:
		typedef  ::hxd::snd::ChannelBase_obj super;
		typedef ChannelGroup_obj OBJ_;
		ChannelGroup_obj();

	public:
		enum { _hx_ClassId = 0x547c10b1 };

		void __construct(::String name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.snd.ChannelGroup")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.snd.ChannelGroup"); }
		static ::hx::ObjectPtr< ChannelGroup_obj > __new(::String name);
		static ::hx::ObjectPtr< ChannelGroup_obj > __alloc(::hx::Ctx *_hx_ctx,::String name);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ChannelGroup_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ChannelGroup",9c,cb,b9,66); }

		::String name;
};

} // end namespace hxd
} // end namespace snd

#endif /* INCLUDED_hxd_snd_ChannelGroup */ 
