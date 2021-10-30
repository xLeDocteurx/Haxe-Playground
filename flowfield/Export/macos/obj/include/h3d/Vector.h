#ifndef INCLUDED_h3d_Vector
#define INCLUDED_h3d_Vector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(h3d,col,Point)

namespace h3d{


class HXCPP_CLASS_ATTRIBUTES Vector_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Vector_obj OBJ_;
		Vector_obj();

	public:
		enum { _hx_ClassId = 0x071fc754 };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h3d.Vector")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h3d.Vector"); }
		static ::hx::ObjectPtr< Vector_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w);
		static ::hx::ObjectPtr< Vector_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Vector_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Vector",e3,24,f2,cb); }

		static  ::h3d::Vector fromColor(int c,::hx::Null< Float >  scale);
		static ::Dynamic fromColor_dyn();

		static  ::h3d::Vector fromArray(::Array< Float > a);
		static ::Dynamic fromArray_dyn();

		Float x;
		Float y;
		Float z;
		Float w;
		Float distance( ::h3d::Vector v);
		::Dynamic distance_dyn();

		Float distanceSq( ::h3d::Vector v);
		::Dynamic distanceSq_dyn();

		 ::h3d::Vector sub( ::h3d::Vector v);
		::Dynamic sub_dyn();

		 ::h3d::Vector add( ::h3d::Vector v);
		::Dynamic add_dyn();

		 ::h3d::Vector multiply(Float v);
		::Dynamic multiply_dyn();

		bool equals( ::h3d::Vector v);
		::Dynamic equals_dyn();

		 ::h3d::Vector cross( ::h3d::Vector v);
		::Dynamic cross_dyn();

		Float dot( ::h3d::Vector v);
		::Dynamic dot_dyn();

		Float lengthSq();
		::Dynamic lengthSq_dyn();

		Float length();
		::Dynamic length_dyn();

		void normalize();
		::Dynamic normalize_dyn();

		 ::h3d::Vector normalized();
		::Dynamic normalized_dyn();

		void set(::hx::Null< Float >  x,::hx::Null< Float >  y,::hx::Null< Float >  z,::hx::Null< Float >  w);
		::Dynamic set_dyn();

		void load( ::h3d::Vector v);
		::Dynamic load_dyn();

		void scale(Float f);
		::Dynamic scale_dyn();

		void lerp( ::h3d::Vector v1, ::h3d::Vector v2,Float k);
		::Dynamic lerp_dyn();

		void transform( ::h3d::Matrix m);
		::Dynamic transform_dyn();

		 ::h3d::Vector transformed( ::h3d::Matrix m);
		::Dynamic transformed_dyn();

		void transform3x4( ::h3d::Matrix m);
		::Dynamic transform3x4_dyn();

		 ::h3d::Vector transformed3x4( ::h3d::Matrix m);
		::Dynamic transformed3x4_dyn();

		void transform3x3( ::h3d::Matrix m);
		::Dynamic transform3x3_dyn();

		 ::h3d::Vector transformed3x3( ::h3d::Matrix m);
		::Dynamic transformed3x3_dyn();

		 ::h3d::Vector clone();
		::Dynamic clone_dyn();

		 ::h3d::col::Point toPoint();
		::Dynamic toPoint_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		 ::h3d::Vector reflect( ::h3d::Vector n);
		::Dynamic reflect_dyn();

		Float dot4( ::h3d::Vector v);
		::Dynamic dot4_dyn();

		void project( ::h3d::Matrix m);
		::Dynamic project_dyn();

		Float get_r();
		::Dynamic get_r_dyn();

		Float get_g();
		::Dynamic get_g_dyn();

		Float get_b();
		::Dynamic get_b_dyn();

		Float get_a();
		::Dynamic get_a_dyn();

		Float set_r(Float v);
		::Dynamic set_r_dyn();

		Float set_g(Float v);
		::Dynamic set_g_dyn();

		Float set_b(Float v);
		::Dynamic set_b_dyn();

		Float set_a(Float v);
		::Dynamic set_a_dyn();

		void setColor(int c);
		::Dynamic setColor_dyn();

		void makeColor(Float hue,::hx::Null< Float >  saturation,::hx::Null< Float >  brightness);
		::Dynamic makeColor_dyn();

		int toColor();
		::Dynamic toColor_dyn();

		 ::h3d::Vector toColorHSL();
		::Dynamic toColorHSL_dyn();

		void scale3(Float v);
		::Dynamic scale3_dyn();

		Float dot3( ::h3d::Vector v);
		::Dynamic dot3_dyn();

		void normalizeFast();
		::Dynamic normalizeFast_dyn();

};

} // end namespace h3d

#endif /* INCLUDED_h3d_Vector */ 
