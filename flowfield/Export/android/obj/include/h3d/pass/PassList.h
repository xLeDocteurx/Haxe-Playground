#ifndef INCLUDED_h3d_pass_PassList
#define INCLUDED_h3d_pass_PassList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,pass,PassList)
HX_DECLARE_CLASS2(h3d,pass,PassListIterator)
HX_DECLARE_CLASS2(h3d,pass,PassObject)

namespace h3d{
namespace pass{


class HXCPP_CLASS_ATTRIBUTES PassList_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PassList_obj OBJ_;
		PassList_obj();

	public:
		enum { _hx_ClassId = 0x4ae87b15 };

		void __construct( ::h3d::pass::PassObject current);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.pass.PassList")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.pass.PassList"); }
		static ::hx::ObjectPtr< PassList_obj > __new( ::h3d::pass::PassObject current);
		static ::hx::ObjectPtr< PassList_obj > __alloc(::hx::Ctx *_hx_ctx, ::h3d::pass::PassObject current);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PassList_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PassList",ef,25,11,06); }

		 ::h3d::pass::PassObject current;
		 ::h3d::pass::PassObject discarded;
		 ::h3d::pass::PassObject lastDisc;
		void init( ::h3d::pass::PassObject pass);
		::Dynamic init_dyn();

		void reset();
		::Dynamic reset_dyn();

		 ::h3d::pass::PassObject save();
		::Dynamic save_dyn();

		void load( ::h3d::pass::PassObject p);
		::Dynamic load_dyn();

		bool isEmpty();
		::Dynamic isEmpty_dyn();

		void clear();
		::Dynamic clear_dyn();

		void sort( ::Dynamic f);
		::Dynamic sort_dyn();

		void filter( ::Dynamic f);
		::Dynamic filter_dyn();

		 ::h3d::pass::PassListIterator iterator();
		::Dynamic iterator_dyn();

		 ::h3d::pass::PassListIterator getFiltered();
		::Dynamic getFiltered_dyn();

};

} // end namespace h3d
} // end namespace pass

#endif /* INCLUDED_h3d_pass_PassList */ 
