#ifndef INCLUDED_h3d_Camera
#define INCLUDED_h3d_Camera

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Camera)
HX_DECLARE_CLASS1(h3d,Matrix)
HX_DECLARE_CLASS1(h3d,Vector)
HX_DECLARE_CLASS2(h3d,col,Bounds)
HX_DECLARE_CLASS2(h3d,col,Collider)
HX_DECLARE_CLASS2(h3d,col,Frustum)
HX_DECLARE_CLASS2(h3d,col,Point)
HX_DECLARE_CLASS2(h3d,col,Ray)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{


class HXCPP_CLASS_ATTRIBUTES Camera_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Camera_obj OBJ_;
		Camera_obj();

	public:
		enum { _hx_ClassId = 0x0fe53afe };

		void __construct(::hx::Null< Float >  __o_fovY,::hx::Null< Float >  __o_zoom,::hx::Null< Float >  __o_screenRatio,::hx::Null< Float >  __o_zNear,::hx::Null< Float >  __o_zFar,::hx::Null< bool >  __o_rightHanded);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.Camera")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.Camera"); }
		static ::hx::ObjectPtr< Camera_obj > __new(::hx::Null< Float >  __o_fovY,::hx::Null< Float >  __o_zoom,::hx::Null< Float >  __o_screenRatio,::hx::Null< Float >  __o_zNear,::hx::Null< Float >  __o_zFar,::hx::Null< bool >  __o_rightHanded);
		static ::hx::ObjectPtr< Camera_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_fovY,::hx::Null< Float >  __o_zoom,::hx::Null< Float >  __o_screenRatio,::hx::Null< Float >  __o_zNear,::hx::Null< Float >  __o_zFar,::hx::Null< bool >  __o_rightHanded);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Camera_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Camera",c5,ba,20,ec); }

		Float zoom;
		Float screenRatio;
		Float fovY;
		Float zNear;
		Float zFar;
		 ::h3d::col::Bounds orthoBounds;
		bool rightHanded;
		 ::h3d::Matrix mproj;
		 ::h3d::Matrix mcam;
		 ::h3d::Matrix m;
		 ::h3d::Vector pos;
		 ::h3d::Vector up;
		 ::h3d::Vector target;
		Float viewX;
		Float viewY;
		 ::Dynamic follow;
		 ::h3d::col::Frustum frustum;
		 ::h3d::Matrix minv;
		 ::h3d::Matrix mcamInv;
		 ::h3d::Matrix mprojInv;
		bool needInv;
		void setFovX(Float fovX,Float withRatio);
		::Dynamic setFovX_dyn();

		Float getFovX();
		::Dynamic getFovX_dyn();

		 ::h3d::Camera clone();
		::Dynamic clone_dyn();

		 ::h3d::Matrix getInverseViewProj();
		::Dynamic getInverseViewProj_dyn();

		 ::h3d::Matrix getInverseProj();
		::Dynamic getInverseProj_dyn();

		 ::h3d::Matrix getInverseView();
		::Dynamic getInverseView_dyn();

		void setCubeMap(int face, ::h3d::Vector position);
		::Dynamic setCubeMap_dyn();

		 ::h3d::Vector unproject(Float screenX,Float screenY,Float camZ);
		::Dynamic unproject_dyn();

		 ::h3d::col::Ray rayFromScreen(Float pixelX,Float pixelY,::hx::Null< int >  sceneWidth,::hx::Null< int >  sceneHeight);
		::Dynamic rayFromScreen_dyn();

		void update();
		::Dynamic update_dyn();

		::Array< ::Dynamic> getFrustumCorners(::hx::Null< Float >  zMax,::hx::Null< Float >  zMin);
		::Dynamic getFrustumCorners_dyn();

		bool lostUp();
		::Dynamic lostUp_dyn();

		 ::h3d::col::Point getViewDirection(Float dx,Float dy,::hx::Null< Float >  dz);
		::Dynamic getViewDirection_dyn();

		void movePosAxis(Float dx,Float dy,::hx::Null< Float >  dz);
		::Dynamic movePosAxis_dyn();

		void moveTargetAxis(Float dx,Float dy,::hx::Null< Float >  dz);
		::Dynamic moveTargetAxis_dyn();

		void forward(::hx::Null< Float >  speed);
		::Dynamic forward_dyn();

		void backward(::hx::Null< Float >  speed);
		::Dynamic backward_dyn();

		void makeCameraMatrix( ::h3d::Matrix m);
		::Dynamic makeCameraMatrix_dyn();

		void setTransform( ::h3d::Matrix m);
		::Dynamic setTransform_dyn();

		void makeFrustumMatrix( ::h3d::Matrix m);
		::Dynamic makeFrustumMatrix_dyn();

		 ::h3d::Vector project(Float x,Float y,Float z,Float screenWidth,Float screenHeight,::hx::Null< bool >  snapToPixel);
		::Dynamic project_dyn();

		void load( ::h3d::Camera cam);
		::Dynamic load_dyn();

};

} // end namespace h3d

#endif /* INCLUDED_h3d_Camera */ 
