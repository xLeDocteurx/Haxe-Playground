#ifndef INCLUDED_hxd_fmt_fbx_BaseLibrary
#define INCLUDED_hxd_fmt_fbx_BaseLibrary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,anim,Animation)
HX_DECLARE_CLASS2(h3d,anim,Joint)
HX_DECLARE_CLASS2(h3d,anim,Skin)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(hxd,fmt,fbx,BaseLibrary)
HX_DECLARE_CLASS3(hxd,fmt,fbx,DefaultMatrixes)
HX_DECLARE_CLASS3(hxd,fmt,fbx,Geometry)
HX_DECLARE_CLASS4(hxd,fmt,fbx,_BaseLibrary,AnimCurve)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace hxd{
namespace fmt{
namespace fbx{


class HXCPP_CLASS_ATTRIBUTES BaseLibrary_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BaseLibrary_obj OBJ_;
		BaseLibrary_obj();

	public:
		enum { _hx_ClassId = 0x37ade3ab };

		void __construct(::String fileName);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.fmt.fbx.BaseLibrary")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.fmt.fbx.BaseLibrary"); }
		static ::hx::ObjectPtr< BaseLibrary_obj > __new(::String fileName);
		static ::hx::ObjectPtr< BaseLibrary_obj > __alloc(::hx::Ctx *_hx_ctx,::String fileName);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BaseLibrary_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BaseLibrary",ca,92,a9,75); }

		static void __boot();
		static int maxBonesPerSkin;
		 ::Dynamic root;
		 ::haxe::ds::IntMap ids;
		 ::haxe::ds::IntMap connect;
		 ::haxe::ds::IntMap namedConnect;
		 ::haxe::ds::IntMap invConnect;
		bool leftHand;
		 ::haxe::ds::IntMap defaultModelMatrixes;
		 ::haxe::ds::StringMap uvAnims;
		::Array< ::Dynamic> animationEvents;
		bool isMaya;
		::String fileName;
		Float version;
		 ::haxe::ds::StringMap keepJoints;
		 ::haxe::ds::StringMap skipObjects;
		int bonesPerVertex;
		bool unskinnedJointsAsObjects;
		bool allowVertexColor;
		bool normalizeScaleOrient;
		void reset();
		::Dynamic reset_dyn();

		void loadFile( ::haxe::io::Bytes data);
		::Dynamic loadFile_dyn();

		void load( ::Dynamic root);
		::Dynamic load_dyn();

		::Array< Float > toFloats( ::Dynamic n);
		::Dynamic toFloats_dyn();

		::Array< ::Dynamic> getAllModels();
		::Dynamic getAllModels_dyn();

		::Array< ::Dynamic> getRootModels();
		::Dynamic getRootModels_dyn();

		bool isRootModel( ::Dynamic m);
		::Dynamic isRootModel_dyn();

		void updateModelScale();
		::Dynamic updateModelScale_dyn();

		void convertYupToZup(int originalUpAxis);
		::Dynamic convertYupToZup_dyn();

		void convertPoints(::Array< Float > a);
		::Dynamic convertPoints_dyn();

		void leftHandConvert();
		::Dynamic leftHandConvert_dyn();

		void init( ::Dynamic n);
		::Dynamic init_dyn();

		 ::hxd::fmt::fbx::Geometry getGeometry(::String name);
		::Dynamic getGeometry_dyn();

		 ::Dynamic getParent( ::Dynamic node,::String nodeName, ::Dynamic opt);
		::Dynamic getParent_dyn();

		 ::Dynamic getChild( ::Dynamic node,::String nodeName, ::Dynamic opt);
		::Dynamic getChild_dyn();

		 ::Dynamic getSpecChild( ::Dynamic node,::String name);
		::Dynamic getSpecChild_dyn();

		::Array< ::Dynamic> getChilds( ::Dynamic node,::String nodeName);
		::Dynamic getChilds_dyn();

		::Array< ::Dynamic> getParents( ::Dynamic node,::String nodeName);
		::Dynamic getParents_dyn();

		 ::Dynamic getRoot();
		::Dynamic getRoot_dyn();

		void ignoreMissingObject(int id);
		::Dynamic ignoreMissingObject_dyn();

		 ::Dynamic buildHierarchy();
		::Dynamic buildHierarchy_dyn();

		 ::hxd::fmt::fbx::_BaseLibrary::AnimCurve getObjectCurve( ::haxe::ds::IntMap curves, ::Dynamic model,::String curveName,::String animName);
		::Dynamic getObjectCurve_dyn();

		void mergeModels(::Array< ::String > modelNames);
		::Dynamic mergeModels_dyn();

		void addLink( ::Dynamic parent, ::Dynamic child);
		::Dynamic addLink_dyn();

		void removeLink( ::Dynamic parent, ::Dynamic child);
		::Dynamic removeLink_dyn();

		bool checkData( ::Dynamic t);
		::Dynamic checkData_dyn();

		bool roundValues(::Array< Float > data,Float def,::hx::Null< Float >  mult);
		::Dynamic roundValues_dyn();

		::Array< ::String > getAnimationNames();
		::Dynamic getAnimationNames_dyn();

		 ::h3d::anim::Animation loadAnimation(::String animName, ::Dynamic root, ::hxd::fmt::fbx::BaseLibrary lib);
		::Dynamic loadAnimation_dyn();

		int sortDistinctFloats(Float a,Float b);
		::Dynamic sortDistinctFloats_dyn();

		bool isNullJoint( ::Dynamic model);
		::Dynamic isNullJoint_dyn();

		::String getModelPath( ::Dynamic model);
		::Dynamic getModelPath_dyn();

		void autoMerge();
		::Dynamic autoMerge_dyn();

		virtual bool keepJoint( ::h3d::anim::Joint j);
		::Dynamic keepJoint_dyn();

		 ::h3d::anim::Skin createSkin( ::haxe::ds::IntMap hskins, ::haxe::ds::IntMap hgeom,::Array< ::Dynamic> rootJoints,int bonesPerVertex);
		::Dynamic createSkin_dyn();

		Float round(Float v);
		::Dynamic round_dyn();

		void updateDefaultMatrix( ::Dynamic model, ::hxd::fmt::fbx::DefaultMatrixes d);
		::Dynamic updateDefaultMatrix_dyn();

		 ::hxd::fmt::fbx::DefaultMatrixes getDefaultMatrixes( ::Dynamic model);
		::Dynamic getDefaultMatrixes_dyn();

};

} // end namespace hxd
} // end namespace fmt
} // end namespace fbx

#endif /* INCLUDED_hxd_fmt_fbx_BaseLibrary */ 
