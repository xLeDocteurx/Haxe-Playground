#ifndef INCLUDED_h3d_anim__Skin_Influence
#define INCLUDED_h3d_anim__Skin_Influence

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,anim,Joint)
HX_DECLARE_CLASS3(h3d,anim,_Skin,Influence)

namespace h3d{
namespace anim{
namespace _Skin{


class HXCPP_CLASS_ATTRIBUTES Influence_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Influence_obj OBJ_;
		Influence_obj();

	public:
		enum { _hx_ClassId = 0x0551e5d3 };

		void __construct( ::h3d::anim::Joint j,Float w);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.anim._Skin.Influence")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.anim._Skin.Influence"); }
		static ::hx::ObjectPtr< Influence_obj > __new( ::h3d::anim::Joint j,Float w);
		static ::hx::ObjectPtr< Influence_obj > __alloc(::hx::Ctx *_hx_ctx, ::h3d::anim::Joint j,Float w);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Influence_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Influence",d5,7d,94,1b); }

		 ::h3d::anim::Joint j;
		Float w;
};

} // end namespace h3d
} // end namespace anim
} // end namespace _Skin

#endif /* INCLUDED_h3d_anim__Skin_Influence */ 
