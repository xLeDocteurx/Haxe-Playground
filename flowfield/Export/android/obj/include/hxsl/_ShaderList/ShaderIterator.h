#ifndef INCLUDED_hxsl__ShaderList_ShaderIterator
#define INCLUDED_hxsl__ShaderList_ShaderIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxsl,Shader)
HX_DECLARE_CLASS1(hxsl,ShaderList)
HX_DECLARE_CLASS2(hxsl,_ShaderList,ShaderIterator)

namespace hxsl{
namespace _ShaderList{


class HXCPP_CLASS_ATTRIBUTES ShaderIterator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ShaderIterator_obj OBJ_;
		ShaderIterator_obj();

	public:
		enum { _hx_ClassId = 0x3a1567e4 };

		void __construct( ::hxsl::ShaderList l, ::hxsl::ShaderList last);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl._ShaderList.ShaderIterator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl._ShaderList.ShaderIterator"); }
		static ::hx::ObjectPtr< ShaderIterator_obj > __new( ::hxsl::ShaderList l, ::hxsl::ShaderList last);
		static ::hx::ObjectPtr< ShaderIterator_obj > __alloc(::hx::Ctx *_hx_ctx, ::hxsl::ShaderList l, ::hxsl::ShaderList last);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShaderIterator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShaderIterator",53,86,fd,ee); }

		 ::hxsl::ShaderList l;
		 ::hxsl::ShaderList last;
		bool hasNext();
		::Dynamic hasNext_dyn();

		 ::hxsl::Shader next();
		::Dynamic next_dyn();

};

} // end namespace hxsl
} // end namespace _ShaderList

#endif /* INCLUDED_hxsl__ShaderList_ShaderIterator */ 
