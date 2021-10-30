#ifndef INCLUDED_h3d_pass_HardwarePick
#define INCLUDED_h3d_pass_HardwarePick

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h3d_pass_Default
#include <h3d/pass/Default.h>
#endif
HX_DECLARE_CLASS2(h3d,mat,Pass)
HX_DECLARE_CLASS2(h3d,mat,Texture)
HX_DECLARE_CLASS2(h3d,pass,Base)
HX_DECLARE_CLASS2(h3d,pass,Default)
HX_DECLARE_CLASS2(h3d,pass,HardwarePick)
HX_DECLARE_CLASS2(h3d,pass,PassList)
HX_DECLARE_CLASS2(h3d,pass,PassObject)
HX_DECLARE_CLASS3(h3d,pass,_HardwarePick,FixedColor)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)
HX_DECLARE_CLASS1(hxsl,Output)
HX_DECLARE_CLASS1(hxsl,Shader)

namespace h3d{
namespace pass{


class HXCPP_CLASS_ATTRIBUTES HardwarePick_obj : public  ::h3d::pass::Default_obj
{
	public:
		typedef  ::h3d::pass::Default_obj super;
		typedef HardwarePick_obj OBJ_;
		HardwarePick_obj();

	public:
		enum { _hx_ClassId = 0x1e09ccd3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.pass.HardwarePick")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.pass.HardwarePick"); }
		static ::hx::ObjectPtr< HardwarePick_obj > __new();
		static ::hx::ObjectPtr< HardwarePick_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HardwarePick_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HardwarePick",c9,b7,01,a3); }

		Float pickX;
		Float pickY;
		 ::h3d::pass::_HardwarePick::FixedColor fixedColor;
		int colorID;
		 ::h3d::mat::Texture texOut;
		 ::h3d::mat::Pass material;
		int pickedIndex;
		void dispose();

		::Array< ::Dynamic> getOutputs();

		void drawObject( ::h3d::pass::PassObject p);

		void nextID();
		::Dynamic nextID_dyn();

		void draw( ::h3d::pass::PassList passes, ::Dynamic sort);

};

} // end namespace h3d
} // end namespace pass

#endif /* INCLUDED_h3d_pass_HardwarePick */ 
