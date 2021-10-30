#ifndef INCLUDED_h3d_anim__Skin_Permut
#define INCLUDED_h3d_anim__Skin_Permut

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_1f0eacef8cd509fc_36_new)
HX_DECLARE_CLASS2(h3d,anim,Joint)
HX_DECLARE_CLASS3(h3d,anim,_Skin,Permut)

namespace h3d{
namespace anim{
namespace _Skin{


class HXCPP_CLASS_ATTRIBUTES Permut_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Permut_obj OBJ_;
		Permut_obj();

	public:
		enum { _hx_ClassId = 0x6a6bfb21 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.anim._Skin.Permut")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.anim._Skin.Permut"); }

		inline static ::hx::ObjectPtr< Permut_obj > __new() {
			::hx::ObjectPtr< Permut_obj > __this = new Permut_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Permut_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Permut_obj *__this = (Permut_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Permut_obj), true, "h3d.anim._Skin.Permut"));
			*(void **)__this = Permut_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_1f0eacef8cd509fc_36_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Permut_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Permut",6f,e3,b2,6f); }

		::Array< ::Dynamic> joints;
		::Array< int > triangles;
		int material;
		::Array< ::Dynamic> indexedJoints;
};

} // end namespace h3d
} // end namespace anim
} // end namespace _Skin

#endif /* INCLUDED_h3d_anim__Skin_Permut */ 
