#ifndef INCLUDED_h3d_scene__Object_ObjectFlags_Impl_
#define INCLUDED_h3d_scene__Object_ObjectFlags_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(h3d,scene,_Object,ObjectFlags_Impl_)

namespace h3d{
namespace scene{
namespace _Object{


class HXCPP_CLASS_ATTRIBUTES ObjectFlags_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ObjectFlags_Impl__obj OBJ_;
		ObjectFlags_Impl__obj();

	public:
		enum { _hx_ClassId = 0x42e12e7d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="h3d.scene._Object.ObjectFlags_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"h3d.scene._Object.ObjectFlags_Impl_"); }

		inline static ::hx::ObjectPtr< ObjectFlags_Impl__obj > __new() {
			::hx::ObjectPtr< ObjectFlags_Impl__obj > __this = new ObjectFlags_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ObjectFlags_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			ObjectFlags_Impl__obj *__this = (ObjectFlags_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ObjectFlags_Impl__obj), false, "h3d.scene._Object.ObjectFlags_Impl_"));
			*(void **)__this = ObjectFlags_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ObjectFlags_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ObjectFlags_Impl_",88,fa,1b,34); }

		static void __boot();
		static int FPosChanged;
		static int FVisible;
		static int FCulled;
		static int FFollowPositionOnly;
		static int FLightCameraCenter;
		static int FAllocated;
		static int FAlwaysSync;
		static int FInheritCulled;
		static int FNoSerialize;
		static int FIgnoreBounds;
		static int FIgnoreCollide;
		static int FIgnoreParentTransform;
		static int FCullingColliderInherited;
		static int _new(int value);
		static ::Dynamic _new_dyn();

		static int toInt(int this1);
		static ::Dynamic toInt_dyn();

		static bool has(int this1,int f);
		static ::Dynamic has_dyn();

		static bool set(int this1,int f,bool b);
		static ::Dynamic set_dyn();

};

} // end namespace h3d
} // end namespace scene
} // end namespace _Object

#endif /* INCLUDED_h3d_scene__Object_ObjectFlags_Impl_ */ 
