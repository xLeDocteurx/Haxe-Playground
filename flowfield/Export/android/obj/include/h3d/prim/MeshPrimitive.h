#ifndef INCLUDED_h3d_prim_MeshPrimitive
#define INCLUDED_h3d_prim_MeshPrimitive

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_prim_Primitive
#include <h3d/prim/Primitive.h>
#endif
HX_DECLARE_CLASS1(h3d,Buffer)
HX_DECLARE_CLASS1(h3d,BufferOffset)
HX_DECLARE_CLASS1(h3d,Engine)
HX_DECLARE_CLASS2(h3d,prim,MeshPrimitive)
HX_DECLARE_CLASS2(h3d,prim,Primitive)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace prim{


class HXCPP_CLASS_ATTRIBUTES MeshPrimitive_obj : public  ::h3d::prim::Primitive_obj
{
	public:
		typedef  ::h3d::prim::Primitive_obj super;
		typedef MeshPrimitive_obj OBJ_;
		MeshPrimitive_obj();

	public:
		enum { _hx_ClassId = 0x52c84e9b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.prim.MeshPrimitive")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.prim.MeshPrimitive"); }
		static ::hx::ObjectPtr< MeshPrimitive_obj > __new();
		static ::hx::ObjectPtr< MeshPrimitive_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MeshPrimitive_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MeshPrimitive",da,48,c2,b6); }

		 ::haxe::ds::IntMap bufferCache;
		 ::haxe::ds::IntMap layouts;
		 ::h3d::BufferOffset allocBuffer( ::h3d::Engine engine,::String name);
		::Dynamic allocBuffer_dyn();

		bool hasBuffer(::String name);
		::Dynamic hasBuffer_dyn();

		void addBuffer(::String name, ::h3d::Buffer buf,::hx::Null< int >  offset);
		::Dynamic addBuffer_dyn();

		void dispose();

		 ::h3d::BufferOffset getBuffers( ::h3d::Engine engine);
		::Dynamic getBuffers_dyn();

		virtual void render( ::h3d::Engine engine);

};

} // end namespace h3d
} // end namespace prim

#endif /* INCLUDED_h3d_prim_MeshPrimitive */ 
