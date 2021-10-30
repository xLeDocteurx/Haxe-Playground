#ifndef INCLUDED_hxd_fmt_fbx_HMDOut
#define INCLUDED_hxd_fmt_fbx_HMDOut

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_fmt_fbx_BaseLibrary
#include <hxd/fmt/fbx/BaseLibrary.h>
#endif
HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS2(h3d,anim,AnimatedObject)
HX_DECLARE_CLASS2(h3d,anim,Animation)
HX_DECLARE_CLASS2(h3d,anim,Joint)
HX_DECLARE_CLASS2(h3d,anim,LinearObject)
HX_DECLARE_CLASS2(h3d,anim,Skin)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,BytesOutput)
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS3(hxd,fmt,fbx,BaseLibrary)
HX_DECLARE_CLASS3(hxd,fmt,fbx,Geometry)
HX_DECLARE_CLASS3(hxd,fmt,fbx,HMDOut)
HX_DECLARE_CLASS3(hxd,fmt,fbx,TmpObject)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Animation)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Data)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Position)
HX_DECLARE_CLASS3(hxd,fmt,hmd,Skin)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace hxd{
namespace fmt{
namespace fbx{


class HXCPP_CLASS_ATTRIBUTES HMDOut_obj : public  ::hxd::fmt::fbx::BaseLibrary_obj
{
	public:
		typedef  ::hxd::fmt::fbx::BaseLibrary_obj super;
		typedef HMDOut_obj OBJ_;
		HMDOut_obj();

	public:
		enum { _hx_ClassId = 0x02fadaee };

		void __construct(::String fileName);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fmt.fbx.HMDOut")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fmt.fbx.HMDOut"); }
		static ::hx::ObjectPtr< HMDOut_obj > __new(::String fileName);
		static ::hx::ObjectPtr< HMDOut_obj > __alloc(::hx::Ctx *_hx_ctx,::String fileName);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HMDOut_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HMDOut",2f,80,bb,4c); }

		 ::hxd::fmt::hmd::Data d;
		 ::haxe::io::BytesOutput dataOut;
		::String filePath;
		 ::haxe::io::Bytes tmp;
		bool absoluteTexturePath;
		bool optimizeSkin;
		bool floatSkinIndexes;
		Float int32tof(int v);
		::Dynamic int32tof_dyn();

		bool keepJoint( ::h3d::anim::Joint j);

		::Array< Float > buildTangents( ::hxd::fmt::fbx::Geometry geom);
		::Dynamic buildTangents_dyn();

		 ::Dynamic buildGeom( ::hxd::fmt::fbx::Geometry geom, ::h3d::anim::Skin skin, ::haxe::io::BytesOutput dataOut,bool genTangents);
		::Dynamic buildGeom_dyn();

		void addModels(bool includeGeometry);
		::Dynamic addModels_dyn();

		::String makeTexturePath( ::Dynamic tex);
		::Dynamic makeTexturePath_dyn();

		 ::hxd::fmt::hmd::Skin makeSkin( ::h3d::anim::Skin skin, ::hxd::fmt::fbx::TmpObject obj);
		::Dynamic makeSkin_dyn();

		 ::hxd::fmt::hmd::Position makePosition( ::h3d::Matrix m);
		::Dynamic makePosition_dyn();

		void writeFloat(Float f);
		::Dynamic writeFloat_dyn();

		void writeFrame( ::h3d::anim::LinearObject o,int fid);
		::Dynamic writeFrame_dyn();

		 ::hxd::fmt::hmd::Animation makeAnimation( ::h3d::anim::Animation anim);
		::Dynamic makeAnimation_dyn();

		 ::hxd::fmt::hmd::Data toHMD(::String filePath,bool includeGeometry);
		::Dynamic toHMD_dyn();

};

} // end namespace hxd
} // end namespace fmt
} // end namespace fbx

#endif /* INCLUDED_hxd_fmt_fbx_HMDOut */ 
