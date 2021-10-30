#ifndef INCLUDED_h3d_mat_Defaults
#define INCLUDED_h3d_mat_Defaults

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,col,Bounds)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS2(h3d,mat,Defaults)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)
HX_DECLARE_CLASS1(hxsl,Shader)

namespace h3d{
namespace mat{


class HXCPP_CLASS_ATTRIBUTES Defaults_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Defaults_obj OBJ_;
		Defaults_obj();

	public:
		enum { _hx_ClassId = 0x7829faf9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h3d.mat.Defaults")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h3d.mat.Defaults"); }

		inline static ::hx::ObjectPtr< Defaults_obj > __new() {
			::hx::ObjectPtr< Defaults_obj > __this = new Defaults_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Defaults_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Defaults_obj *__this = (Defaults_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Defaults_obj), false, "h3d.mat.Defaults"));
			*(void **)__this = Defaults_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Defaults_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Defaults",b2,8c,4b,89); }

		static void __boot();
		static Float defaultKillAlphaThreshold;
		static int loadingTextureColor;
		static  ::hxsl::Shader shadowShader;
		static  ::hxsl::Shader get_shadowShader();
		static ::Dynamic get_shadowShader_dyn();

		static  ::hxsl::Shader set_shadowShader( ::hxsl::Shader s);
		static ::Dynamic set_shadowShader_dyn();

		static ::Dynamic makeVolumeDecal;
		static inline ::Dynamic &makeVolumeDecal_dyn() {return makeVolumeDecal; }

};

} // end namespace h3d
} // end namespace mat

#endif /* INCLUDED_h3d_mat_Defaults */ 
