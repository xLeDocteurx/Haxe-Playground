#ifndef INCLUDED_h3d_scene_Object
#define INCLUDED_h3d_scene_Object

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
HX_DECLARE_CLASS1(h3d,IDrawable)
HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS1(h3d,Quat)
HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(h3d,anim,Animation)
HX_DECLARE_CLASS2(h3d,col,Bounds)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS2(h3d,col,Point)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)
HX_DECLARE_CLASS2(h3d,mat,BaseMaterial)
HX_DECLARE_CLASS2(h3d,mat,Material)
HX_DECLARE_CLASS2(h3d,scene,Mesh)
HX_DECLARE_CLASS2(h3d,scene,Object)
HX_DECLARE_CLASS2(h3d,scene,RenderContext)
HX_DECLARE_CLASS2(h3d,scene,Scene)
HX_DECLARE_CLASS1(hxd,InteractiveScene)
HX_DECLARE_CLASS2(hxd,impl,AnyProps)
HX_DECLARE_CLASS2(hxd,impl,ArrayIterator_h3d_scene_Object)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES Object_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Object_obj OBJ_;
		Object_obj();

	public:
		enum { _hx_ClassId = 0x1797ae36 };

		void __construct( ::h3d::scene::Object parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.scene.Object")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.scene.Object"); }
		static ::hx::ObjectPtr< Object_obj > __new( ::h3d::scene::Object parent);
		static ::hx::ObjectPtr< Object_obj > __alloc(::hx::Ctx *_hx_ctx, ::h3d::scene::Object parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Object_obj();

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
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Object",df,f2,d3,49); }

		static void __boot();
		static Float ROT2RAD;
		static  ::h3d::Matrix tmpMat;
		static  ::h3d::Vector tmpVec;
		int flags;
		::Array< ::Dynamic> children;
		 ::h3d::scene::Object parent;
		::String name;
		Float x;
		Float y;
		Float z;
		Float scaleX;
		Float scaleY;
		Float scaleZ;
		 ::h3d::scene::Object follow;
		 ::h3d::Matrix defaultTransform;
		 ::h3d::anim::Animation currentAnimation;
		::Dynamic cullingCollider;
		::Dynamic set_cullingCollider(::Dynamic c);
		::Dynamic set_cullingCollider_dyn();

		 ::h3d::Matrix absPos;
		 ::h3d::Matrix invPos;
		 ::h3d::Quat qRot;
		int lastFrame;
		bool get_visible();
		::Dynamic get_visible_dyn();

		bool get_allocated();
		::Dynamic get_allocated_dyn();

		bool get_posChanged();
		::Dynamic get_posChanged_dyn();

		bool get_culled();
		::Dynamic get_culled_dyn();

		bool get_followPositionOnly();
		::Dynamic get_followPositionOnly_dyn();

		bool get_lightCameraCenter();
		::Dynamic get_lightCameraCenter_dyn();

		bool get_alwaysSync();
		::Dynamic get_alwaysSync_dyn();

		bool get_inheritCulled();
		::Dynamic get_inheritCulled_dyn();

		bool get_ignoreBounds();
		::Dynamic get_ignoreBounds_dyn();

		bool get_ignoreCollide();
		::Dynamic get_ignoreCollide_dyn();

		bool get_allowSerialize();
		::Dynamic get_allowSerialize_dyn();

		bool get_ignoreParentTransform();
		::Dynamic get_ignoreParentTransform_dyn();

		bool get_cullingColliderInherited();
		::Dynamic get_cullingColliderInherited_dyn();

		bool set_posChanged(bool b);
		::Dynamic set_posChanged_dyn();

		bool set_culled(bool b);
		::Dynamic set_culled_dyn();

		bool set_visible(bool b);
		::Dynamic set_visible_dyn();

		bool set_allocated(bool b);
		::Dynamic set_allocated_dyn();

		bool set_followPositionOnly(bool b);
		::Dynamic set_followPositionOnly_dyn();

		bool set_lightCameraCenter(bool b);
		::Dynamic set_lightCameraCenter_dyn();

		bool set_alwaysSync(bool b);
		::Dynamic set_alwaysSync_dyn();

		bool set_ignoreBounds(bool b);
		::Dynamic set_ignoreBounds_dyn();

		bool set_inheritCulled(bool b);
		::Dynamic set_inheritCulled_dyn();

		bool set_ignoreCollide(bool b);
		::Dynamic set_ignoreCollide_dyn();

		bool set_allowSerialize(bool b);
		::Dynamic set_allowSerialize_dyn();

		bool set_ignoreParentTransform(bool b);
		::Dynamic set_ignoreParentTransform_dyn();

		bool set_cullingColliderInherited(bool b);
		::Dynamic set_cullingColliderInherited_dyn();

		 ::h3d::anim::Animation playAnimation( ::h3d::anim::Animation a);
		::Dynamic playAnimation_dyn();

		 ::h3d::anim::Animation switchToAnimation( ::h3d::anim::Animation a);
		::Dynamic switchToAnimation_dyn();

		void stopAnimation( ::Dynamic recursive);
		::Dynamic stopAnimation_dyn();

		void applyAnimationTransform(::hx::Null< bool >  recursive);
		::Dynamic applyAnimationTransform_dyn();

		int getObjectsCount();
		::Dynamic getObjectsCount_dyn();

		virtual  ::h3d::mat::Material getMaterialByName(::String name);
		::Dynamic getMaterialByName_dyn();

		bool contains( ::h3d::scene::Object o);
		::Dynamic contains_dyn();

		 ::Dynamic find( ::Dynamic f);
		::Dynamic find_dyn();

		::cpp::VirtualArray findAll( ::Dynamic f,::cpp::VirtualArray arr);
		::Dynamic findAll_dyn();

		virtual ::Array< ::Dynamic> getMaterials(::Array< ::Dynamic> a,::hx::Null< bool >  recursive);
		::Dynamic getMaterials_dyn();

		 ::h3d::col::Point localToGlobal( ::h3d::col::Point pt);
		::Dynamic localToGlobal_dyn();

		 ::h3d::col::Point globalToLocal( ::h3d::col::Point pt);
		::Dynamic globalToLocal_dyn();

		 ::h3d::Matrix getInvPos();
		::Dynamic getInvPos_dyn();

		 ::h3d::col::Bounds getBounds( ::h3d::col::Bounds b);
		::Dynamic getBounds_dyn();

		virtual  ::h3d::col::Bounds getBoundsRec( ::h3d::col::Bounds b);
		::Dynamic getBoundsRec_dyn();

		::Array< ::Dynamic> getMeshes(::Array< ::Dynamic> out);
		::Dynamic getMeshes_dyn();

		 ::h3d::scene::Mesh getMeshByName(::String name);
		::Dynamic getMeshByName_dyn();

		virtual  ::h3d::scene::Object getObjectByName(::String name);
		::Dynamic getObjectByName_dyn();

		virtual  ::h3d::scene::Object clone( ::h3d::scene::Object o);
		::Dynamic clone_dyn();

		void addChild( ::h3d::scene::Object o);
		::Dynamic addChild_dyn();

		void addChildAt( ::h3d::scene::Object o,int pos);
		::Dynamic addChildAt_dyn();

		void iterVisibleMeshes( ::Dynamic callb);
		::Dynamic iterVisibleMeshes_dyn();

		void onParentChanged();
		::Dynamic onParentChanged_dyn();

		virtual void onAdd();
		::Dynamic onAdd_dyn();

		virtual void onRemove();
		::Dynamic onRemove_dyn();

		void removeChild( ::h3d::scene::Object o);
		::Dynamic removeChild_dyn();

		void removeChildren();
		::Dynamic removeChildren_dyn();

		void remove();
		::Dynamic remove_dyn();

		 ::h3d::scene::Scene getScene();
		::Dynamic getScene_dyn();

		 ::h3d::Matrix getAbsPos();
		::Dynamic getAbsPos_dyn();

		 ::h3d::Matrix getRelPos( ::h3d::scene::Object obj);
		::Dynamic getRelPos_dyn();

		bool isMesh();
		::Dynamic isMesh_dyn();

		 ::h3d::scene::Mesh toMesh();
		::Dynamic toMesh_dyn();

		::Dynamic getCollider();
		::Dynamic getCollider_dyn();

		virtual ::Dynamic getGlobalCollider();
		::Dynamic getGlobalCollider_dyn();

		virtual ::Dynamic getLocalCollider();
		::Dynamic getLocalCollider_dyn();

		virtual void draw( ::h3d::scene::RenderContext ctx);
		::Dynamic draw_dyn();

		 ::h3d::scene::Object set_follow( ::h3d::scene::Object v);
		::Dynamic set_follow_dyn();

		virtual void calcAbsPos();
		::Dynamic calcAbsPos_dyn();

		virtual void sync( ::h3d::scene::RenderContext ctx);
		::Dynamic sync_dyn();

		void syncRec( ::h3d::scene::RenderContext ctx);
		::Dynamic syncRec_dyn();

		virtual void syncPos();
		::Dynamic syncPos_dyn();

		virtual void emit( ::h3d::scene::RenderContext ctx);
		::Dynamic emit_dyn();

		void emitRec( ::h3d::scene::RenderContext ctx);
		::Dynamic emitRec_dyn();

		Float set_x(Float v);
		::Dynamic set_x_dyn();

		Float set_y(Float v);
		::Dynamic set_y_dyn();

		Float set_z(Float v);
		::Dynamic set_z_dyn();

		Float set_scaleX(Float v);
		::Dynamic set_scaleX_dyn();

		Float set_scaleY(Float v);
		::Dynamic set_scaleY_dyn();

		Float set_scaleZ(Float v);
		::Dynamic set_scaleZ_dyn();

		 ::h3d::Matrix set_defaultTransform( ::h3d::Matrix v);
		::Dynamic set_defaultTransform_dyn();

		void setPosition(Float x,Float y,Float z);
		::Dynamic setPosition_dyn();

		void setTransform( ::h3d::Matrix mat);
		::Dynamic setTransform_dyn();

		 ::h3d::Matrix getTransform( ::h3d::Matrix mat);
		::Dynamic getTransform_dyn();

		void rotate(Float rx,Float ry,Float rz);
		::Dynamic rotate_dyn();

		void setRotation(Float rx,Float ry,Float rz);
		::Dynamic setRotation_dyn();

		void setRotationAxis(Float ax,Float ay,Float az,Float angle);
		::Dynamic setRotationAxis_dyn();

		void setDirection( ::h3d::Vector v);
		::Dynamic setDirection_dyn();

		 ::h3d::Vector getLocalDirection();
		::Dynamic getLocalDirection_dyn();

		 ::h3d::Quat getRotationQuat();
		::Dynamic getRotationQuat_dyn();

		void setRotationQuat( ::h3d::Quat q);
		::Dynamic setRotationQuat_dyn();

		void scale(Float v);
		::Dynamic scale_dyn();

		void setScale(Float v);
		::Dynamic setScale_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		 ::h3d::scene::Object getChildAt(int n);
		::Dynamic getChildAt_dyn();

		int getChildIndex( ::h3d::scene::Object o);
		::Dynamic getChildIndex_dyn();

		int get_numChildren();
		::Dynamic get_numChildren_dyn();

		 ::hxd::impl::ArrayIterator_h3d_scene_Object iterator();
		::Dynamic iterator_dyn();

};

} // end namespace h3d
} // end namespace scene

#endif /* INCLUDED_h3d_scene_Object */ 
