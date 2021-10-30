#ifndef INCLUDED_h3d_prim_Plane2D
#define INCLUDED_h3d_prim_Plane2D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_prim_Primitive
#include <h3d/prim/Primitive.h>
#endif
HX_DECLARE_CLASS1(h3d,Engine)
HX_DECLARE_CLASS2(h3d,prim,Plane2D)
HX_DECLARE_CLASS2(h3d,prim,Primitive)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace prim{


class HXCPP_CLASS_ATTRIBUTES Plane2D_obj : public  ::h3d::prim::Primitive_obj
{
	public:
		typedef  ::h3d::prim::Primitive_obj super;
		typedef Plane2D_obj OBJ_;
		Plane2D_obj();

	public:
		enum { _hx_ClassId = 0x28abf00f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.prim.Plane2D")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.prim.Plane2D"); }
		static ::hx::ObjectPtr< Plane2D_obj > __new();
		static ::hx::ObjectPtr< Plane2D_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Plane2D_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Plane2D",0e,a1,20,50); }

		static  ::Dynamic get();
		static ::Dynamic get_dyn();

		int triCount();

		int vertexCount();

		void alloc( ::h3d::Engine engine);

		void render( ::h3d::Engine engine);

};

} // end namespace h3d
} // end namespace prim

#endif /* INCLUDED_h3d_prim_Plane2D */ 
