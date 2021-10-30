#ifndef INCLUDED_hxd_fmt_fbx_DefaultMatrixes
#define INCLUDED_hxd_fmt_fbx_DefaultMatrixes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS1(h3d,Quat)
HX_DECLARE_CLASS2(h3d,col,Point)
HX_DECLARE_CLASS3(hxd,fmt,fbx,DefaultMatrixes)

namespace hxd{
namespace fmt{
namespace fbx{


class HXCPP_CLASS_ATTRIBUTES DefaultMatrixes_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DefaultMatrixes_obj OBJ_;
		DefaultMatrixes_obj();

	public:
		enum { _hx_ClassId = 0x692e0c75 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fmt.fbx.DefaultMatrixes")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fmt.fbx.DefaultMatrixes"); }
		static ::hx::ObjectPtr< DefaultMatrixes_obj > __new();
		static ::hx::ObjectPtr< DefaultMatrixes_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DefaultMatrixes_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DefaultMatrixes",b0,26,8d,f0); }

		static void rightHandToLeft( ::h3d::Matrix m);
		static ::Dynamic rightHandToLeft_dyn();

		 ::h3d::col::Point trans;
		 ::h3d::col::Point scale;
		 ::h3d::col::Point rotate;
		 ::h3d::col::Point preRot;
		 ::Dynamic wasRemoved;
		 ::h3d::Matrix transPos;
		 ::h3d::Matrix toMatrix(bool leftHand);
		::Dynamic toMatrix_dyn();

		 ::h3d::Quat toQuaternion(bool leftHand);
		::Dynamic toQuaternion_dyn();

};

} // end namespace hxd
} // end namespace fmt
} // end namespace fbx

#endif /* INCLUDED_hxd_fmt_fbx_DefaultMatrixes */ 
