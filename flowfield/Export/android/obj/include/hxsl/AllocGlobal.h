#ifndef INCLUDED_hxsl_AllocGlobal
#define INCLUDED_hxsl_AllocGlobal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxsl,AllocGlobal)
HX_DECLARE_CLASS1(hxsl,Type)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES AllocGlobal_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AllocGlobal_obj OBJ_;
		AllocGlobal_obj();

	public:
		enum { _hx_ClassId = 0x360da8cf };

		void __construct(int pos,::String path, ::hxsl::Type type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl.AllocGlobal")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl.AllocGlobal"); }
		static ::hx::ObjectPtr< AllocGlobal_obj > __new(int pos,::String path, ::hxsl::Type type);
		static ::hx::ObjectPtr< AllocGlobal_obj > __alloc(::hx::Ctx *_hx_ctx,int pos,::String path, ::hxsl::Type type);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AllocGlobal_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AllocGlobal",98,27,af,93); }

		int pos;
		int gid;
		::String path;
		 ::hxsl::Type type;
		 ::hxsl::AllocGlobal next;
		 ::hxsl::AllocGlobal clone(::hx::Null< bool >  resetGID);
		::Dynamic clone_dyn();

};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_AllocGlobal */ 
