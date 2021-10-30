#ifndef INCLUDED_hxd_fmt_hmd_Geometry
#define INCLUDED_hxd_fmt_hmd_Geometry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_b50238ad8f0bbd4b_113_new)
HX_DECLARE_CLASS2(h3d,col,Bounds)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Geometry)
HX_DECLARE_CLASS3(hxd,fmt,hmd,GeometryFormat)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Property)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace hxd{
namespace fmt{
namespace hmd{


class HXCPP_CLASS_ATTRIBUTES Geometry_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Geometry_obj OBJ_;
		Geometry_obj();

	public:
		enum { _hx_ClassId = 0x428fd714 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fmt.hmd.Geometry")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fmt.hmd.Geometry"); }

		inline static ::hx::ObjectPtr< Geometry_obj > __new() {
			::hx::ObjectPtr< Geometry_obj > __this = new Geometry_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Geometry_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Geometry_obj *__this = (Geometry_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Geometry_obj), true, "hxd.fmt.hmd.Geometry"));
			*(void **)__this = Geometry_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_b50238ad8f0bbd4b_113_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Geometry_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Geometry",d2,be,5a,ac); }

		::Array< ::Dynamic> props;
		int vertexCount;
		int vertexStride;
		::Array< ::Dynamic> vertexFormat;
		int vertexPosition;
		::Array< int > indexCounts;
		int indexPosition;
		 ::h3d::col::Bounds bounds;
		int get_indexCount();
		::Dynamic get_indexCount_dyn();

};

} // end namespace hxd
} // end namespace fmt
} // end namespace hmd

#endif /* INCLUDED_hxd_fmt_hmd_Geometry */ 
