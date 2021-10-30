#ifndef INCLUDED_h3d_anim_Skin
#define INCLUDED_h3d_anim_Skin

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,anim,Joint)
HX_DECLARE_CLASS2(h3d,anim,Skin)
HX_DECLARE_CLASS3(h3d,anim,_Skin,Influence)
HX_DECLARE_CLASS3(h3d,anim,_Skin,Permut)
HX_DECLARE_CLASS2(h3d,prim,Primitive)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace anim{


class HXCPP_CLASS_ATTRIBUTES Skin_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Skin_obj OBJ_;
		Skin_obj();

	public:
		enum { _hx_ClassId = 0x184a9e03 };

		void __construct(::String name,int vertexCount,int bonesPerVertex);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.anim.Skin")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.anim.Skin"); }
		static ::hx::ObjectPtr< Skin_obj > __new(::String name,int vertexCount,int bonesPerVertex);
		static ::hx::ObjectPtr< Skin_obj > __alloc(::hx::Ctx *_hx_ctx,::String name,int vertexCount,int bonesPerVertex);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Skin_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Skin",9d,42,2e,37); }

		::String name;
		int vertexCount;
		int bonesPerVertex;
		::Array< int > vertexJoints;
		::Array< Float > vertexWeights;
		::Array< ::Dynamic> rootJoints;
		 ::haxe::ds::StringMap namedJoints;
		::Array< ::Dynamic> allJoints;
		::Array< ::Dynamic> boundJoints;
		 ::h3d::prim::Primitive primitive;
		::Array< ::Dynamic> splitJoints;
		::Array< int > triangleGroups;
		::Array< ::Dynamic> envelop;
		void setJoints(::Array< ::Dynamic> joints,::Array< ::Dynamic> roots);
		::Dynamic setJoints_dyn();

		void addInfluence(int vid, ::h3d::anim::Joint j,Float w);
		::Dynamic addInfluence_dyn();

		int sortInfluences( ::h3d::anim::_Skin::Influence i1, ::h3d::anim::_Skin::Influence i2);
		::Dynamic sortInfluences_dyn();

		bool isSplit();
		::Dynamic isSplit_dyn();

		void initWeights();
		::Dynamic initWeights_dyn();

		int sortByBindIndex( ::h3d::anim::Joint j1, ::h3d::anim::Joint j2);
		::Dynamic sortByBindIndex_dyn();

		bool isSub(::Array< ::Dynamic> a,::Array< ::Dynamic> b);
		::Dynamic isSub_dyn();

		bool merge(::Array< ::Dynamic> permuts);
		::Dynamic merge_dyn();

		int jointsDiff( ::h3d::anim::_Skin::Permut p1, ::h3d::anim::_Skin::Permut p2);
		::Dynamic jointsDiff_dyn();

		bool split(int maxBones,::Array< int > index,::Array< int > triangleMaterials);
		::Dynamic split_dyn();

};

} // end namespace h3d
} // end namespace anim

#endif /* INCLUDED_h3d_anim_Skin */ 
