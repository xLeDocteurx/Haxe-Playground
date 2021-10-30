#ifndef INCLUDED_hxd_App
#define INCLUDED_hxd_App

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_IDrawable
#include <h3d/IDrawable.h>
#endif
HX_DECLARE_CLASS1(h2d,Layers)
HX_DECLARE_CLASS1(h2d,Object)
HX_DECLARE_CLASS1(h2d,Scene)
HX_DECLARE_CLASS1(h3d,Engine)
HX_DECLARE_CLASS1(h3d,IDrawable)
HX_DECLARE_CLASS2(h3d,scene,Object)
HX_DECLARE_CLASS2(h3d,scene,Scene)
HX_DECLARE_CLASS1(hxd,App)
HX_DECLARE_CLASS1(hxd,InteractiveScene)
HX_DECLARE_CLASS1(hxd,SceneEvents)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace hxd{


class HXCPP_CLASS_ATTRIBUTES App_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef App_obj OBJ_;
		App_obj();

	public:
		enum { _hx_ClassId = 0x4b589375 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxd.App")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxd.App"); }
		static ::hx::ObjectPtr< App_obj > __new();
		static ::hx::ObjectPtr< App_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~App_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("App",81,b4,31,00); }

		static void staticHandler();
		static ::Dynamic staticHandler_dyn();

		 ::h3d::Engine engine;
		 ::h3d::scene::Scene s3d;
		 ::h2d::Scene s2d;
		 ::hxd::SceneEvents sevents;
		bool isDisposed;
		void onResize();
		::Dynamic onResize_dyn();

		void setScene(::Dynamic scene,::hx::Null< bool >  disposePrevious);
		::Dynamic setScene_dyn();

		void setCurrent();
		::Dynamic setCurrent_dyn();

		void setScene2D( ::h2d::Scene s2d,::hx::Null< bool >  disposePrevious);
		::Dynamic setScene2D_dyn();

		void setScene3D( ::h3d::scene::Scene s3d,::hx::Null< bool >  disposePrevious);
		::Dynamic setScene3D_dyn();

		void render( ::h3d::Engine e);
		::Dynamic render_dyn();

		void setup();
		::Dynamic setup_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		void loadAssets( ::Dynamic onLoaded);
		::Dynamic loadAssets_dyn();

		virtual void init();
		::Dynamic init_dyn();

		void mainLoop();
		::Dynamic mainLoop_dyn();

		virtual void update(Float dt);
		::Dynamic update_dyn();

};

} // end namespace hxd

#endif /* INCLUDED_hxd_App */ 
