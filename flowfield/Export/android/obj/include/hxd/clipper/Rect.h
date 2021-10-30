#ifndef INCLUDED_hxd_clipper_Rect
#define INCLUDED_hxd_clipper_Rect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_c84e6288e8a7ca4e_9_new)
HX_DECLARE_CLASS2(hxd,clipper,Rect)

namespace hxd{
namespace clipper{


class HXCPP_CLASS_ATTRIBUTES Rect_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Rect_obj OBJ_;
		Rect_obj();

	public:
		enum { _hx_ClassId = 0x2238a961 };

		void __construct(::hx::Null< int >  __o_l,::hx::Null< int >  __o_t,::hx::Null< int >  __o_r,::hx::Null< int >  __o_b);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd.clipper.Rect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd.clipper.Rect"); }

		inline static ::hx::ObjectPtr< Rect_obj > __new(::hx::Null< int >  __o_l,::hx::Null< int >  __o_t,::hx::Null< int >  __o_r,::hx::Null< int >  __o_b) {
			::hx::ObjectPtr< Rect_obj > __this = new Rect_obj();
			__this->__construct(__o_l,__o_t,__o_r,__o_b);
			return __this;
		}

		inline static ::hx::ObjectPtr< Rect_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_l,::hx::Null< int >  __o_t,::hx::Null< int >  __o_r,::hx::Null< int >  __o_b) {
			Rect_obj *__this = (Rect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Rect_obj), false, "hxd.clipper.Rect"));
			*(void **)__this = Rect_obj::_hx_vtable;
{
            		int l = __o_l.Default(0);
            		int t = __o_t.Default(0);
            		int r = __o_r.Default(0);
            		int b = __o_b.Default(0);
            	HX_STACKFRAME(&_hx_pos_c84e6288e8a7ca4e_9_new)
HXLINE(  10)		( ( ::hxd::clipper::Rect)(__this) )->left = l;
HXDLIN(  10)		( ( ::hxd::clipper::Rect)(__this) )->top = t;
HXLINE(  11)		( ( ::hxd::clipper::Rect)(__this) )->right = r;
HXDLIN(  11)		( ( ::hxd::clipper::Rect)(__this) )->bottom = b;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Rect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Rect",44,79,80,36); }

		int left;
		int top;
		int right;
		int bottom;
};

} // end namespace hxd
} // end namespace clipper

#endif /* INCLUDED_hxd_clipper_Rect */ 
