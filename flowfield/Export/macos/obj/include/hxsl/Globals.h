#ifndef INCLUDED_hxsl_Globals
#define INCLUDED_hxsl_Globals

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(hxsl,Globals)

namespace hxsl{


class HXCPP_CLASS_ATTRIBUTES Globals_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Globals_obj OBJ_;
		Globals_obj();

	public:
		enum { _hx_ClassId = 0x78041763 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxsl.Globals")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxsl.Globals"); }
		static ::hx::ObjectPtr< Globals_obj > __new();
		static ::hx::ObjectPtr< Globals_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Globals_obj();

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
		::String __ToString() const { return HX_("Globals",90,2d,8a,e1); }

		static ::Array< ::String > ALL;
		static  ::haxe::ds::StringMap MAP;
		static int allocID(::String path);
		static ::Dynamic allocID_dyn();

		static ::String getIDName(int id);
		static ::Dynamic getIDName_dyn();

		 ::haxe::ds::IntMap map;
		::Array< ::Dynamic> channels;
		int maxChannels;
		void set(::String path, ::Dynamic v);
		::Dynamic set_dyn();

		 ::Dynamic get(::String path);
		::Dynamic get_dyn();

		void fastSet(int id, ::Dynamic v);
		::Dynamic fastSet_dyn();

		 ::Dynamic fastGet(int id);
		::Dynamic fastGet_dyn();

		void resetChannels();
		::Dynamic resetChannels_dyn();

		int allocChannelID( ::h3d::mat::Texture t);
		::Dynamic allocChannelID_dyn();

};

} // end namespace hxsl

#endif /* INCLUDED_hxsl_Globals */ 
