#ifndef INCLUDED_hxsl_Tools
#define INCLUDED_hxsl_Tools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxsl,Component)
HX_DECLARE_CLASS1(hxsl,Tools)
HX_DECLARE_CLASS1(hxsl,Type)
HX_DECLARE_CLASS1(hxsl,VarQualifier)
HX_DECLARE_CLASS1(hxsl,VecType)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES Tools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Tools_obj OBJ_;
		Tools_obj();

	public:
		enum { _hx_ClassId = 0x57e52ff2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxsl.Tools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxsl.Tools"); }

		inline static ::hx::ObjectPtr< Tools_obj > __new() {
			::hx::ObjectPtr< Tools_obj > __this = new Tools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Tools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Tools_obj *__this = (Tools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tools_obj), false, "hxsl.Tools"));
			*(void **)__this = Tools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Tools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Tools",fb,01,5c,a7); }

		static void __boot();
		static int UID;
		static ::Array< ::Dynamic> SWIZ;
		static int MAX_CHANNELS_BITS;
		static int allocVarId();
		static ::Dynamic allocVarId_dyn();

		static ::String getName( ::Dynamic v);
		static ::Dynamic getName_dyn();

		static ::String getDoc( ::Dynamic v);
		static ::Dynamic getDoc_dyn();

		static int getConstBits( ::Dynamic v);
		static ::Dynamic getConstBits_dyn();

		static bool isConst( ::Dynamic v);
		static ::Dynamic isConst_dyn();

		static bool isStruct( ::Dynamic v);
		static ::Dynamic isStruct_dyn();

		static bool isArray( ::Dynamic v);
		static ::Dynamic isArray_dyn();

		static bool hasQualifier( ::Dynamic v, ::hxsl::VarQualifier q);
		static ::Dynamic hasQualifier_dyn();

		static bool hasBorrowQualifier( ::Dynamic v,::String path);
		static ::Dynamic hasBorrowQualifier_dyn();

		static bool isSampler( ::hxsl::Type t);
		static ::Dynamic isSampler_dyn();

		static ::String toString( ::hxsl::Type t);
		static ::Dynamic toString_dyn();

		static  ::hxsl::Type toType( ::hxsl::VecType t);
		static ::Dynamic toType_dyn();

		static bool hasSideEffect( ::Dynamic e);
		static ::Dynamic hasSideEffect_dyn();

		static void iter( ::Dynamic e, ::Dynamic f);
		static ::Dynamic iter_dyn();

		static  ::Dynamic map( ::Dynamic e, ::Dynamic f);
		static ::Dynamic map_dyn();

		static int size( ::hxsl::Type t);
		static ::Dynamic size_dyn();

		static  ::Dynamic evalConst( ::Dynamic e);
		static ::Dynamic evalConst_dyn();

};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_Tools */ 
