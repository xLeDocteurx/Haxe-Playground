#ifndef INCLUDED_h3d_prim_BigPrimitive
#define INCLUDED_h3d_prim_BigPrimitive

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_prim_Primitive
#include <h3d/prim/Primitive.h>
#endif
HX_DECLARE_CLASS1(h3d,Buffer)
HX_DECLARE_CLASS1(h3d,Engine)
HX_DECLARE_CLASS1(h3d,Indexes)
HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS2(h3d,col,Bounds)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS2(h3d,prim,BigPrimitive)
HX_DECLARE_CLASS2(h3d,prim,Primitive)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace prim{


class HXCPP_CLASS_ATTRIBUTES BigPrimitive_obj : public  ::h3d::prim::Primitive_obj
{
	public:
		typedef  ::h3d::prim::Primitive_obj super;
		typedef BigPrimitive_obj OBJ_;
		BigPrimitive_obj();

	public:
		enum { _hx_ClassId = 0x4eff5c62 };

		void __construct(int stride,::hx::Null< bool >  __o_isRaw);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.prim.BigPrimitive")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.prim.BigPrimitive"); }
		static ::hx::ObjectPtr< BigPrimitive_obj > __new(int stride,::hx::Null< bool >  __o_isRaw);
		static ::hx::ObjectPtr< BigPrimitive_obj > __alloc(::hx::Ctx *_hx_ctx,int stride,::hx::Null< bool >  __o_isRaw);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BigPrimitive_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BigPrimitive",e7,e3,b5,f5); }

		static ::Array< Float > PREV_BUFFER;
		static ::Array< int > PREV_INDEX;
		bool isRaw;
		int stride;
		::Array< ::Dynamic> buffers;
		::Array< ::Dynamic> allIndexes;
		::Array< Float > tmpBuf;
		::Array< int > tmpIdx;
		 ::h3d::col::Bounds bounds;
		int bufPos;
		int idxPos;
		int startIndex;
		bool flushing;
		bool hasTangents;
		bool isStatic;
		void begin(int vcount,int icount);
		::Dynamic begin_dyn();

		void addPoint(Float x,Float y,Float z);
		::Dynamic addPoint_dyn();

		void addBounds(Float x,Float y,Float z);
		::Dynamic addBounds_dyn();

		void addVertexValue(Float v);
		::Dynamic addVertexValue_dyn();

		void addIndex(int i);
		::Dynamic addIndex_dyn();

		int triCount();

		int vertexCount();

		void flush();
		::Dynamic flush_dyn();

		void render( ::h3d::Engine engine);

		 ::h3d::col::Bounds getBounds();

		void dispose();

		void clear();
		::Dynamic clear_dyn();

		void add(::Array< Float > buf,::Array< int > idx,::hx::Null< Float >  dx,::hx::Null< Float >  dy,::hx::Null< Float >  dz,::hx::Null< Float >  rotation,::hx::Null< Float >  scale,::hx::Null< int >  stride);
		::Dynamic add_dyn();

		void addSub(::Array< Float > buf,::Array< int > idx,int startVert,int startTri,int nvert,int triCount,::hx::Null< Float >  dx,::hx::Null< Float >  dy,::hx::Null< Float >  dz,::hx::Null< Float >  rotation,::hx::Null< Float >  scale,::hx::Null< int >  stride,::hx::Null< Float >  deltaU,::hx::Null< Float >  deltaV,::hx::Null< Float >  color, ::h3d::Matrix mat);
		::Dynamic addSub_dyn();

};

} // end namespace h3d
} // end namespace prim

#endif /* INCLUDED_h3d_prim_BigPrimitive */ 
