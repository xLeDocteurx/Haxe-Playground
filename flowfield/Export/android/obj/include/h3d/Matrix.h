#ifndef INCLUDED_h3d_Matrix
#define INCLUDED_h3d_Matrix

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h2d,col,Matrix)
HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS1(h3d,Vector)

namespace h3d{


class HXCPP_CLASS_ATTRIBUTES Matrix_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Matrix_obj OBJ_;
		Matrix_obj();

	public:
		enum { _hx_ClassId = 0x14212a9a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h3d.Matrix")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h3d.Matrix"); }
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
		static  ::h3d::Matrix tmp;
		static Float lumR;
		static Float lumG;
		static Float lumB;
		static Float SQ13;
		static  ::h3d::Matrix I();
		static ::Dynamic I_dyn();

		static  ::h3d::Matrix L(::Array< Float > a);
		static ::Dynamic L_dyn();

		static  ::h3d::Matrix T(::hx::Null< Float >  x,::hx::Null< Float >  y,::hx::Null< Float >  z);
		static ::Dynamic T_dyn();

		static  ::h3d::Matrix R(Float x,Float y,Float z);
		static ::Dynamic R_dyn();

		static  ::h3d::Matrix S(::hx::Null< Float >  x,::hx::Null< Float >  y,::hx::Null< Float >  z);
		static ::Dynamic S_dyn();

		static  ::h3d::Matrix lookAtX( ::h3d::Vector dir, ::h3d::Vector up, ::h3d::Matrix m);
		static ::Dynamic lookAtX_dyn();

		Float _11;
		Float _12;
		Float _13;
		Float _14;
		Float _21;
		Float _22;
		Float _23;
		Float _24;
		Float _31;
		Float _32;
		Float _33;
		Float _34;
		Float _41;
		Float _42;
		Float _43;
		Float _44;
		Float get_tx();
		::Dynamic get_tx_dyn();

		Float get_ty();
		::Dynamic get_ty_dyn();

		Float get_tz();
		::Dynamic get_tz_dyn();

		Float set_tx(Float v);
		::Dynamic set_tx_dyn();

		Float set_ty(Float v);
		::Dynamic set_ty_dyn();

		Float set_tz(Float v);
		::Dynamic set_tz_dyn();

		bool equal( ::h3d::Matrix other);
		::Dynamic equal_dyn();

		void zero();
		::Dynamic zero_dyn();

		void identity();
		::Dynamic identity_dyn();

		bool isIdentity();
		::Dynamic isIdentity_dyn();

		bool isIdentityEpsilon(Float e);
		::Dynamic isIdentityEpsilon_dyn();

		void initRotationX(Float a);
		::Dynamic initRotationX_dyn();

		void initRotationY(Float a);
		::Dynamic initRotationY_dyn();

		void initRotationZ(Float a);
		::Dynamic initRotationZ_dyn();

		void initTranslation(::hx::Null< Float >  x,::hx::Null< Float >  y,::hx::Null< Float >  z);
		::Dynamic initTranslation_dyn();

		void initScale(::hx::Null< Float >  x,::hx::Null< Float >  y,::hx::Null< Float >  z);
		::Dynamic initScale_dyn();

		void initRotationAxis( ::h3d::Vector axis,Float angle);
		::Dynamic initRotationAxis_dyn();

		void initRotation(Float x,Float y,Float z);
		::Dynamic initRotation_dyn();

		void translate(::hx::Null< Float >  x,::hx::Null< Float >  y,::hx::Null< Float >  z);
		::Dynamic translate_dyn();

		void scale(::hx::Null< Float >  x,::hx::Null< Float >  y,::hx::Null< Float >  z);
		::Dynamic scale_dyn();

		void rotate(Float x,Float y,Float z);
		::Dynamic rotate_dyn();

		void rotateAxis( ::h3d::Vector axis,Float angle);
		::Dynamic rotateAxis_dyn();

		 ::h3d::Vector getPosition( ::h3d::Vector v);
		::Dynamic getPosition_dyn();

		void setPosition( ::h3d::Vector v);
		::Dynamic setPosition_dyn();

		void prependTranslation(::hx::Null< Float >  x,::hx::Null< Float >  y,::hx::Null< Float >  z);
		::Dynamic prependTranslation_dyn();

		 ::h3d::Vector getScale( ::h3d::Vector v);
		::Dynamic getScale_dyn();

		void prependRotation(Float x,Float y,Float z);
		::Dynamic prependRotation_dyn();

		void prependRotationAxis( ::h3d::Vector axis,Float angle);
		::Dynamic prependRotationAxis_dyn();

		void prependScale(::hx::Null< Float >  sx,::hx::Null< Float >  sy,::hx::Null< Float >  sz);
		::Dynamic prependScale_dyn();

		void multiply3x4( ::h3d::Matrix a, ::h3d::Matrix b);
		::Dynamic multiply3x4_dyn();

		void multiply3x4inline( ::h3d::Matrix a, ::h3d::Matrix b);
		::Dynamic multiply3x4inline_dyn();

		void multiply( ::h3d::Matrix a, ::h3d::Matrix b);
		::Dynamic multiply_dyn();

		void multiplyValue(Float v);
		::Dynamic multiplyValue_dyn();

		void invert();
		::Dynamic invert_dyn();

		 ::h3d::Matrix getInverse( ::h3d::Matrix m);
		::Dynamic getInverse_dyn();

		Float getDeterminant();
		::Dynamic getDeterminant_dyn();

		void inverse3x4( ::h3d::Matrix m);
		::Dynamic inverse3x4_dyn();

		void initInverse( ::h3d::Matrix m);
		::Dynamic initInverse_dyn();

		void initInverse3x3( ::h3d::Matrix m);
		::Dynamic initInverse3x3_dyn();

		 ::h3d::Vector front();
		::Dynamic front_dyn();

		 ::h3d::Vector right();
		::Dynamic right_dyn();

		 ::h3d::Vector up();
		::Dynamic up_dyn();

		void transpose();
		::Dynamic transpose_dyn();

		 ::h3d::Matrix clone();
		::Dynamic clone_dyn();

		void load( ::h3d::Matrix m);
		::Dynamic load_dyn();

		void loadValues(::Array< Float > a);
		::Dynamic loadValues_dyn();

		::Array< Float > getFloats();
		::Dynamic getFloats_dyn();

		 ::h3d::Vector getDirection();
		::Dynamic getDirection_dyn();

		 ::h3d::Vector getEulerAngles();
		::Dynamic getEulerAngles_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		void colorHue(Float hue);
		::Dynamic colorHue_dyn();

		void colorSaturate(Float sat);
		::Dynamic colorSaturate_dyn();

		void colorContrast(Float contrast);
		::Dynamic colorContrast_dyn();

		void colorLightness(Float lightness);
		::Dynamic colorLightness_dyn();

		void colorGain(int color,Float alpha);
		::Dynamic colorGain_dyn();

		void colorBits(int bits,Float blend);
		::Dynamic colorBits_dyn();

		void colorAdd(int c);
		::Dynamic colorAdd_dyn();

		void colorSet(int c,::hx::Null< Float >  alpha);
		::Dynamic colorSet_dyn();

		void adjustColor( ::Dynamic col);
		::Dynamic adjustColor_dyn();

		 ::h2d::col::Matrix toMatrix2D( ::h2d::col::Matrix m);
		::Dynamic toMatrix2D_dyn();

};

} // end namespace h3d

#endif /* INCLUDED_h3d_Matrix */ 
