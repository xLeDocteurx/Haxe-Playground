#ifndef INCLUDED_h3d_Quat
#define INCLUDED_h3d_Quat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS1(h3d,Quat)
HX_DECLARE_CLASS1(h3d,Vector)

namespace h3d{


class HXCPP_CLASS_ATTRIBUTES Quat_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Quat_obj OBJ_;
		Quat_obj();

	public:
		enum { _hx_ClassId = 0x4226d928 };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h3d.Quat")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h3d.Quat"); }
		static ::hx::ObjectPtr< Quat_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w);
		static ::hx::ObjectPtr< Quat_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Quat_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Quat",f7,64,e3,35); }

		Float x;
		Float y;
		Float z;
		Float w;
		void set(Float x,Float y,Float z,Float w);
		::Dynamic set_dyn();

		void identity();
		::Dynamic identity_dyn();

		Float lengthSq();
		::Dynamic lengthSq_dyn();

		Float length();
		::Dynamic length_dyn();

		void load( ::h3d::Quat q);
		::Dynamic load_dyn();

		 ::h3d::Quat clone();
		::Dynamic clone_dyn();

		void initMoveTo( ::h3d::Vector from, ::h3d::Vector to);
		::Dynamic initMoveTo_dyn();

		void initDirection( ::h3d::Vector dir);
		::Dynamic initDirection_dyn();

		void initRotateAxis(Float x,Float y,Float z,Float a);
		::Dynamic initRotateAxis_dyn();

		void initRotateMatrix( ::h3d::Matrix m);
		::Dynamic initRotateMatrix_dyn();

		void normalize();
		::Dynamic normalize_dyn();

		void initRotation(Float ax,Float ay,Float az);
		::Dynamic initRotation_dyn();

		void multiply( ::h3d::Quat q1, ::h3d::Quat q2);
		::Dynamic multiply_dyn();

		 ::h3d::Vector toEuler();
		::Dynamic toEuler_dyn();

		void lerp( ::h3d::Quat q1, ::h3d::Quat q2,Float v,::hx::Null< bool >  nearest);
		::Dynamic lerp_dyn();

		void slerp( ::h3d::Quat q1, ::h3d::Quat q2,Float v);
		::Dynamic slerp_dyn();

		void conjugate();
		::Dynamic conjugate_dyn();

		void negate();
		::Dynamic negate_dyn();

		Float dot( ::h3d::Quat q);
		::Dynamic dot_dyn();

		 ::h3d::Vector getDirection();
		::Dynamic getDirection_dyn();

		 ::h3d::Matrix toMatrix( ::h3d::Matrix m);
		::Dynamic toMatrix_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace h3d

#endif /* INCLUDED_h3d_Quat */ 
