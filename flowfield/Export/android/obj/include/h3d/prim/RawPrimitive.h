#ifndef INCLUDED_h3d_prim_RawPrimitive
#define INCLUDED_h3d_prim_RawPrimitive

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_prim_Primitive
#include <h3d/prim/Primitive.h>
#endif
HX_DECLARE_CLASS1(h3d,Engine)
HX_DECLARE_CLASS2(h3d,col,Bounds)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS2(h3d,prim,Primitive)
HX_DECLARE_CLASS2(h3d,prim,RawPrimitive)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace prim{


class HXCPP_CLASS_ATTRIBUTES RawPrimitive_obj : public  ::h3d::prim::Primitive_obj
{
	public:
		typedef  ::h3d::prim::Primitive_obj super;
		typedef RawPrimitive_obj OBJ_;
		RawPrimitive_obj();

	public:
		enum { _hx_ClassId = 0x68aa5a3a };

		void __construct( ::Dynamic inf,::hx::Null< bool >  __o_persist);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.prim.RawPrimitive")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.prim.RawPrimitive"); }
		static ::hx::ObjectPtr< RawPrimitive_obj > __new( ::Dynamic inf,::hx::Null< bool >  __o_persist);
		static ::hx::ObjectPtr< RawPrimitive_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic inf,::hx::Null< bool >  __o_persist);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RawPrimitive_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RawPrimitive",bf,e1,60,0f); }

		int vcount;
		int tcount;
		 ::h3d::col::Bounds bounds;
		 ::Dynamic onContextLost;
		Dynamic onContextLost_dyn() { return onContextLost;}
		void alloc( ::h3d::Engine engine);

		 ::h3d::col::Bounds getBounds();

		int triCount();

		int vertexCount();

};

} // end namespace h3d
} // end namespace prim

#endif /* INCLUDED_h3d_prim_RawPrimitive */ 
