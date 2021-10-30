#ifndef INCLUDED_hxd_fmt_fbx_FbxTools
#define INCLUDED_hxd_fmt_fbx_FbxTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(hxd,fmt,fbx,FbxProp)
HX_DECLARE_CLASS3(hxd,fmt,fbx,FbxTools)

namespace hxd{
namespace fmt{
namespace fbx{


class HXCPP_CLASS_ATTRIBUTES FbxTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FbxTools_obj OBJ_;
		FbxTools_obj();

	public:
		enum { _hx_ClassId = 0x0834f642 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxd.fmt.fbx.FbxTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxd.fmt.fbx.FbxTools"); }

		inline static ::hx::ObjectPtr< FbxTools_obj > __new() {
			::hx::ObjectPtr< FbxTools_obj > __this = new FbxTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FbxTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FbxTools_obj *__this = (FbxTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FbxTools_obj), false, "hxd.fmt.fbx.FbxTools"));
			*(void **)__this = FbxTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FbxTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FbxTools",df,f8,31,31); }

		static  ::Dynamic get( ::Dynamic n,::String path,::hx::Null< bool >  opt);
		static ::Dynamic get_dyn();

		static ::Array< ::Dynamic> getAll( ::Dynamic n,::String path);
		static ::Dynamic getAll_dyn();

		static ::Array< int > getInts( ::Dynamic n);
		static ::Dynamic getInts_dyn();

		static ::Array< Float > getFloats( ::Dynamic n);
		static ::Dynamic getFloats_dyn();

		static bool hasProp( ::Dynamic n, ::hxd::fmt::fbx::FbxProp p);
		static ::Dynamic hasProp_dyn();

		static int idToInt(Float f);
		static ::Dynamic idToInt_dyn();

		static int toInt( ::hxd::fmt::fbx::FbxProp n);
		static ::Dynamic toInt_dyn();

		static Float toFloat( ::hxd::fmt::fbx::FbxProp n);
		static ::Dynamic toFloat_dyn();

		static ::String toString( ::hxd::fmt::fbx::FbxProp n);
		static ::Dynamic toString_dyn();

		static  ::haxe::io::Bytes toBinary( ::hxd::fmt::fbx::FbxProp n);
		static ::Dynamic toBinary_dyn();

		static int getId( ::Dynamic n);
		static ::Dynamic getId_dyn();

		static ::String getName( ::Dynamic n);
		static ::Dynamic getName_dyn();

		static ::String getType( ::Dynamic n);
		static ::Dynamic getType_dyn();

};

} // end namespace hxd
} // end namespace fmt
} // end namespace fbx

#endif /* INCLUDED_hxd_fmt_fbx_FbxTools */ 
