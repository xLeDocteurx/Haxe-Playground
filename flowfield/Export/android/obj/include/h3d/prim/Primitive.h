#ifndef INCLUDED_h3d_prim_Primitive
#define INCLUDED_h3d_prim_Primitive

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
HX_DECLARE_CLASS1(h3d,Buffer)
HX_DECLARE_CLASS1(h3d,Engine)
HX_DECLARE_CLASS1(h3d,Indexes)
HX_DECLARE_CLASS2(h3d,col,Bounds)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS2(h3d,prim,Primitive)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace prim{


class HXCPP_CLASS_ATTRIBUTES Primitive_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Primitive_obj OBJ_;
		Primitive_obj();

	public:
		enum { _hx_ClassId = 0x566939c8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.prim.Primitive")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.prim.Primitive"); }
		static ::hx::ObjectPtr< Primitive_obj > __new();
		static ::hx::ObjectPtr< Primitive_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Primitive_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Primitive",87,68,2b,c9); }

		 ::h3d::Buffer buffer;
		 ::h3d::Indexes indexes;
		int refCount;
		virtual int triCount();
		::Dynamic triCount_dyn();

		virtual int vertexCount();
		::Dynamic vertexCount_dyn();

		virtual ::Dynamic getCollider();
		::Dynamic getCollider_dyn();

		virtual  ::h3d::col::Bounds getBounds();
		::Dynamic getBounds_dyn();

		void incref();
		::Dynamic incref_dyn();

		void decref();
		::Dynamic decref_dyn();

		virtual void alloc( ::h3d::Engine engine);
		::Dynamic alloc_dyn();

		virtual void selectMaterial(int material);
		::Dynamic selectMaterial_dyn();

		 ::h3d::prim::Primitive buildNormalsDisplay();
		::Dynamic buildNormalsDisplay_dyn();

		virtual void render( ::h3d::Engine engine);
		::Dynamic render_dyn();

		virtual void dispose();
		::Dynamic dispose_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace h3d
} // end namespace prim

#endif /* INCLUDED_h3d_prim_Primitive */ 
