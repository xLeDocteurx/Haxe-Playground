#ifndef INCLUDED_h3d_mat_Stencil
#define INCLUDED_h3d_mat_Stencil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
HX_DECLARE_CLASS2(h3d,mat,Compare)
HX_DECLARE_CLASS2(h3d,mat,Stencil)
HX_DECLARE_CLASS2(h3d,mat,StencilOp)
HX_DECLARE_CLASS3(hxd,impl,_Serializable,NoSerializeSupport)

namespace h3d{
namespace mat{


class HXCPP_CLASS_ATTRIBUTES Stencil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Stencil_obj OBJ_;
		Stencil_obj();

	public:
		enum { _hx_ClassId = 0x4e671d75 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.mat.Stencil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.mat.Stencil"); }
		static ::hx::ObjectPtr< Stencil_obj > __new();
		static ::hx::ObjectPtr< Stencil_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Stencil_obj();

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
		::String __ToString() const { return HX_("Stencil",dc,e5,54,4d); }

		static void __boot();
		static int getReadMask(int v);
		static ::Dynamic getReadMask_dyn();

		static int readMask_bits;
		static int readMask_offset;
		static int readMask_mask;
		static int getWriteMask(int v);
		static ::Dynamic getWriteMask_dyn();

		static int writeMask_bits;
		static int writeMask_offset;
		static int writeMask_mask;
		static int getReference(int v);
		static ::Dynamic getReference_dyn();

		static int reference_bits;
		static int reference_offset;
		static int reference_mask;
		static int getFrontTest(int v);
		static ::Dynamic getFrontTest_dyn();

		static int frontTest_bits;
		static int frontTest_offset;
		static int frontTest_mask;
		static int getFrontPass(int v);
		static ::Dynamic getFrontPass_dyn();

		static int frontPass_bits;
		static int frontPass_offset;
		static int frontPass_mask;
		static int getFrontSTfail(int v);
		static ::Dynamic getFrontSTfail_dyn();

		static int frontSTfail_bits;
		static int frontSTfail_offset;
		static int frontSTfail_mask;
		static int getFrontDPfail(int v);
		static ::Dynamic getFrontDPfail_dyn();

		static int frontDPfail_bits;
		static int frontDPfail_offset;
		static int frontDPfail_mask;
		static int getBackTest(int v);
		static ::Dynamic getBackTest_dyn();

		static int backTest_bits;
		static int backTest_offset;
		static int backTest_mask;
		static int getBackPass(int v);
		static ::Dynamic getBackPass_dyn();

		static int backPass_bits;
		static int backPass_offset;
		static int backPass_mask;
		static int getBackSTfail(int v);
		static ::Dynamic getBackSTfail_dyn();

		static int backSTfail_bits;
		static int backSTfail_offset;
		static int backSTfail_mask;
		static int getBackDPfail(int v);
		static ::Dynamic getBackDPfail_dyn();

		static int backDPfail_bits;
		static int backDPfail_offset;
		static int backDPfail_mask;
		int maskBits;
		int opBits;
		int readMask;
		int writeMask;
		int reference;
		 ::h3d::mat::Compare frontTest;
		 ::h3d::mat::StencilOp frontPass;
		 ::h3d::mat::StencilOp frontSTfail;
		 ::h3d::mat::StencilOp frontDPfail;
		 ::h3d::mat::Compare backTest;
		 ::h3d::mat::StencilOp backPass;
		 ::h3d::mat::StencilOp backSTfail;
		 ::h3d::mat::StencilOp backDPfail;
		void setFront( ::h3d::mat::StencilOp stfail, ::h3d::mat::StencilOp dpfail, ::h3d::mat::StencilOp pass);
		::Dynamic setFront_dyn();

		void setBack( ::h3d::mat::StencilOp stfail, ::h3d::mat::StencilOp dpfail, ::h3d::mat::StencilOp pass);
		::Dynamic setBack_dyn();

		void setOp( ::h3d::mat::StencilOp stfail, ::h3d::mat::StencilOp dpfail, ::h3d::mat::StencilOp pass);
		::Dynamic setOp_dyn();

		void setFunc( ::h3d::mat::Compare f,::hx::Null< int >  reference,::hx::Null< int >  readMask,::hx::Null< int >  writeMask);
		::Dynamic setFunc_dyn();

		 ::h3d::mat::Stencil clone();
		::Dynamic clone_dyn();

		void load( ::h3d::mat::Stencil s);
		::Dynamic load_dyn();

		int set_readMask(int v);
		::Dynamic set_readMask_dyn();

		int set_writeMask(int v);
		::Dynamic set_writeMask_dyn();

		int set_reference(int v);
		::Dynamic set_reference_dyn();

		 ::h3d::mat::Compare set_frontTest( ::h3d::mat::Compare v);
		::Dynamic set_frontTest_dyn();

		 ::h3d::mat::StencilOp set_frontPass( ::h3d::mat::StencilOp v);
		::Dynamic set_frontPass_dyn();

		 ::h3d::mat::StencilOp set_frontSTfail( ::h3d::mat::StencilOp v);
		::Dynamic set_frontSTfail_dyn();

		 ::h3d::mat::StencilOp set_frontDPfail( ::h3d::mat::StencilOp v);
		::Dynamic set_frontDPfail_dyn();

		 ::h3d::mat::Compare set_backTest( ::h3d::mat::Compare v);
		::Dynamic set_backTest_dyn();

		 ::h3d::mat::StencilOp set_backPass( ::h3d::mat::StencilOp v);
		::Dynamic set_backPass_dyn();

		 ::h3d::mat::StencilOp set_backSTfail( ::h3d::mat::StencilOp v);
		::Dynamic set_backSTfail_dyn();

		 ::h3d::mat::StencilOp set_backDPfail( ::h3d::mat::StencilOp v);
		::Dynamic set_backDPfail_dyn();

		void loadOpBits(int bits);
		::Dynamic loadOpBits_dyn();

		void loadMaskBits(int bits);
		::Dynamic loadMaskBits_dyn();

};

} // end namespace h3d
} // end namespace mat

#endif /* INCLUDED_h3d_mat_Stencil */ 
