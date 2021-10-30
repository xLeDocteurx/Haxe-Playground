#ifndef INCLUDED_h2d_col_Matrix
#define INCLUDED_h2d_col_Matrix

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h2d,col,Matrix)
HX_DECLARE_CLASS2(h2d,col,Point)

namespace h2d{
namespace col{


class HXCPP_CLASS_ATTRIBUTES Matrix_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Matrix_obj OBJ_;
		Matrix_obj();

	public:
		enum { _hx_ClassId = 0x1f149ec7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h2d.col.Matrix")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h2d.col.Matrix"); }
		static ::hx::ObjectPtr< Matrix_obj > __new();
		static ::hx::ObjectPtr< Matrix_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Matrix_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Matrix",61,aa,5c,f0); }

		static void __boot();
		static  ::h2d::col::Matrix tmp;
		Float a;
		Float b;
		Float c;
		Float d;
		Float x;
		Float y;
		void identity();
		::Dynamic identity_dyn();

		void initTranslate(Float x,Float y);
		::Dynamic initTranslate_dyn();

		void initScale(Float sx,Float sy);
		::Dynamic initScale_dyn();

		void initRotate(Float angle);
		::Dynamic initRotate_dyn();

		void initSkew(Float sx,Float sy);
		::Dynamic initSkew_dyn();

		void invert();
		::Dynamic invert_dyn();

		Float getDeterminant();
		::Dynamic getDeterminant_dyn();

		void inverse( ::h2d::col::Matrix m);
		::Dynamic inverse_dyn();

		 ::h2d::col::Point transform( ::h2d::col::Point pt);
		::Dynamic transform_dyn();

		void translate(Float x,Float y);
		::Dynamic translate_dyn();

		void translateX(Float x);
		::Dynamic translateX_dyn();

		void translateY(Float y);
		::Dynamic translateY_dyn();

		void prependTranslate(Float x,Float y);
		::Dynamic prependTranslate_dyn();

		void prependTranslateX(Float x);
		::Dynamic prependTranslateX_dyn();

		void prependTranslateY(Float y);
		::Dynamic prependTranslateY_dyn();

		void multiply( ::h2d::col::Matrix a, ::h2d::col::Matrix b);
		::Dynamic multiply_dyn();

		 ::h2d::col::Point getScale( ::h2d::col::Point p);
		::Dynamic getScale_dyn();

		void scale(Float sx,Float sy);
		::Dynamic scale_dyn();

		void scaleX(Float sx);
		::Dynamic scaleX_dyn();

		void scaleY(Float sy);
		::Dynamic scaleY_dyn();

		void rotate(Float angle);
		::Dynamic rotate_dyn();

		void skew(Float sx,Float sy);
		::Dynamic skew_dyn();

		void skewX(Float sx);
		::Dynamic skewX_dyn();

		void skewY(Float sy);
		::Dynamic skewY_dyn();

		 ::h2d::col::Matrix clone();
		::Dynamic clone_dyn();

		 ::h2d::col::Point getPosition( ::h2d::col::Point p);
		::Dynamic getPosition_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace h2d
} // end namespace col

#endif /* INCLUDED_h2d_col_Matrix */ 
