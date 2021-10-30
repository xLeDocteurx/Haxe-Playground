#ifndef INCLUDED_hxsl_AllocParam
#define INCLUDED_hxsl_AllocParam

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxsl,AllocGlobal)
HX_DECLARE_CLASS1(hxsl,AllocParam)
HX_DECLARE_CLASS1(hxsl,Type)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES AllocParam_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AllocParam_obj OBJ_;
		AllocParam_obj();

	public:
		enum { _hx_ClassId = 0x6fe8daa1 };

		void __construct(::String name,int pos,int instance,int index, ::hxsl::Type type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl.AllocParam")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl.AllocParam"); }
		static ::hx::ObjectPtr< AllocParam_obj > __new(::String name,int pos,int instance,int index, ::hxsl::Type type);
		static ::hx::ObjectPtr< AllocParam_obj > __alloc(::hx::Ctx *_hx_ctx,::String name,int pos,int instance,int index, ::hxsl::Type type);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AllocParam_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AllocParam",f8,07,af,df); }

		::String name;
		int pos;
		int instance;
		int index;
		 ::hxsl::Type type;
		 ::hxsl::AllocGlobal perObjectGlobal;
		 ::hxsl::AllocParam next;
		 ::hxsl::AllocParam clone(::hx::Null< bool >  resetGID);
		::Dynamic clone_dyn();

};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_AllocParam */ 
