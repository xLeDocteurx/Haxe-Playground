#ifndef INCLUDED_Vect3
#define INCLUDED_Vect3

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Vect3)



class HXCPP_CLASS_ATTRIBUTES Vect3_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Vect3_obj OBJ_;
		Vect3_obj();

	public:
		enum { _hx_ClassId = 0x6413c9b3 };

		void __construct(Float x,Float y,Float z);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Vect3")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"Vect3"); }
		static ::hx::ObjectPtr< Vect3_obj > __new(Float x,Float y,Float z);
		static ::hx::ObjectPtr< Vect3_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,Float z);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Vect3_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Vect3",73,f4,83,c7); }

		static  ::Vect3 static_add( ::Vect3 vector1, ::Vect3 vector2);
		static ::Dynamic static_add_dyn();

		static  ::Vect3 static_sub( ::Dynamic vector1, ::Dynamic vector2);
		static ::Dynamic static_sub_dyn();

		static  ::Vect3 static_mult( ::Vect3 vector,Float scalar);
		static ::Dynamic static_mult_dyn();

		static  ::Vect3 static_div( ::Vect3 vector,Float scalar);
		static ::Dynamic static_div_dyn();

		static Float static_distance( ::Vect3 vector1, ::Vect3 vector2);
		static ::Dynamic static_distance_dyn();

		static Float static_dot( ::Vect3 vector1, ::Vect3 vector2);
		static ::Dynamic static_dot_dyn();

		Float x;
		Float y;
		Float z;
		 ::Vect3 copy( ::Dynamic x, ::Dynamic y);
		::Dynamic copy_dyn();

		 ::Vect3 get_integer();
		::Dynamic get_integer_dyn();

		 ::Vect3 get_fract();
		::Dynamic get_fract_dyn();

		void set_pos(int x,int y,int z);
		::Dynamic set_pos_dyn();

		 ::Vect3 add( ::Vect3 otherVector);
		::Dynamic add_dyn();

		 ::Vect3 sub( ::Dynamic otherVector);
		::Dynamic sub_dyn();

		 ::Vect3 mult(Float scalar);
		::Dynamic mult_dyn();

		 ::Vect3 div(Float scalar);
		::Dynamic div_dyn();

		Float publdistance( ::Vect3 otherVector);
		::Dynamic publdistance_dyn();

		Float dot( ::Vect3 otherVector);
		::Dynamic dot_dyn();

};


#endif /* INCLUDED_Vect3 */ 
