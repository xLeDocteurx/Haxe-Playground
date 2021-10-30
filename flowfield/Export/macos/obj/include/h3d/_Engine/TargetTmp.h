#ifndef INCLUDED_h3d__Engine_TargetTmp
#define INCLUDED_h3d__Engine_TargetTmp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,_Engine,TargetTmp)
HX_DECLARE_CLASS2(h3d,mat,Texture)

namespace h3d{
namespace _Engine{


class HXCPP_CLASS_ATTRIBUTES TargetTmp_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TargetTmp_obj OBJ_;
		TargetTmp_obj();

	public:
		enum { _hx_ClassId = 0x2995741a };

		void __construct( ::h3d::mat::Texture t, ::h3d::_Engine::TargetTmp n,int l,int m);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d._Engine.TargetTmp")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d._Engine.TargetTmp"); }
		static ::hx::ObjectPtr< TargetTmp_obj > __new( ::h3d::mat::Texture t, ::h3d::_Engine::TargetTmp n,int l,int m);
		static ::hx::ObjectPtr< TargetTmp_obj > __alloc(::hx::Ctx *_hx_ctx, ::h3d::mat::Texture t, ::h3d::_Engine::TargetTmp n,int l,int m);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TargetTmp_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TargetTmp",e6,31,0a,0b); }

		 ::h3d::mat::Texture t;
		::Array< ::Dynamic> textures;
		 ::h3d::_Engine::TargetTmp next;
		int layer;
		int mipLevel;
};

} // end namespace h3d
} // end namespace _Engine

#endif /* INCLUDED_h3d__Engine_TargetTmp */ 
