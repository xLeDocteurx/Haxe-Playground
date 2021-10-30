#ifndef INCLUDED_h3d_scene__Graphics_GPoint
#define INCLUDED_h3d_scene__Graphics_GPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_50754879bfa5ec07_12_new)
HX_DECLARE_CLASS3(h3d,scene,_Graphics,GPoint)

namespace h3d{
namespace scene{
namespace _Graphics{


class HXCPP_CLASS_ATTRIBUTES GPoint_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GPoint_obj OBJ_;
		GPoint_obj();

	public:
		enum { _hx_ClassId = 0x4705e980 };

		void __construct(Float x,Float y,Float z,Float r,Float g,Float b,Float a);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h3d.scene._Graphics.GPoint")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h3d.scene._Graphics.GPoint"); }

		inline static ::hx::ObjectPtr< GPoint_obj > __new(Float x,Float y,Float z,Float r,Float g,Float b,Float a) {
			::hx::ObjectPtr< GPoint_obj > __this = new GPoint_obj();
			__this->__construct(x,y,z,r,g,b,a);
			return __this;
		}

		inline static ::hx::ObjectPtr< GPoint_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,Float z,Float r,Float g,Float b,Float a) {
			GPoint_obj *__this = (GPoint_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GPoint_obj), false, "h3d.scene._Graphics.GPoint"));
			*(void **)__this = GPoint_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_50754879bfa5ec07_12_new)
HXLINE(  13)		( ( ::h3d::scene::_Graphics::GPoint)(__this) )->x = x;
HXLINE(  14)		( ( ::h3d::scene::_Graphics::GPoint)(__this) )->y = y;
HXLINE(  15)		( ( ::h3d::scene::_Graphics::GPoint)(__this) )->z = z;
HXLINE(  16)		( ( ::h3d::scene::_Graphics::GPoint)(__this) )->r = r;
HXLINE(  17)		( ( ::h3d::scene::_Graphics::GPoint)(__this) )->g = g;
HXLINE(  18)		( ( ::h3d::scene::_Graphics::GPoint)(__this) )->b = b;
HXLINE(  19)		( ( ::h3d::scene::_Graphics::GPoint)(__this) )->a = a;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GPoint_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GPoint",89,c2,13,bd); }

		Float x;
		Float y;
		Float z;
		Float r;
		Float g;
		Float b;
		Float a;
};

} // end namespace h3d
} // end namespace scene
} // end namespace _Graphics

#endif /* INCLUDED_h3d_scene__Graphics_GPoint */ 
