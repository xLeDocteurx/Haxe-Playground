#ifndef INCLUDED_h3d_pass_PassListIterator
#define INCLUDED_h3d_pass_PassListIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,pass,PassListIterator)
HX_DECLARE_CLASS2(h3d,pass,PassObject)

namespace h3d{
namespace pass{


class HXCPP_CLASS_ATTRIBUTES PassListIterator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PassListIterator_obj OBJ_;
		PassListIterator_obj();

	public:
		enum { _hx_ClassId = 0x0b239507 };

		void __construct( ::h3d::pass::PassObject o);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.pass.PassListIterator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.pass.PassListIterator"); }
		static ::hx::ObjectPtr< PassListIterator_obj > __new( ::h3d::pass::PassObject o);
		static ::hx::ObjectPtr< PassListIterator_obj > __alloc(::hx::Ctx *_hx_ctx, ::h3d::pass::PassObject o);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PassListIterator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PassListIterator",fd,32,eb,3f); }

		 ::h3d::pass::PassObject o;
		bool hasNext();
		::Dynamic hasNext_dyn();

		 ::h3d::pass::PassObject next();
		::Dynamic next_dyn();

};

} // end namespace h3d
} // end namespace pass

#endif /* INCLUDED_h3d_pass_PassListIterator */ 
