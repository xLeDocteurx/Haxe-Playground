#ifndef INCLUDED_h3d_impl_MemoryManager
#define INCLUDED_h3d_impl_MemoryManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,Buffer)
HX_DECLARE_CLASS1(h3d,BufferFlag)
HX_DECLARE_CLASS1(h3d,Indexes)
HX_DECLARE_CLASS2(h3d,impl,Driver)
HX_DECLARE_CLASS2(h3d,impl,ManagedBuffer)
HX_DECLARE_CLASS2(h3d,impl,MemoryManager)
HX_DECLARE_CLASS2(h3d,mat,DepthBuffer)
HX_DECLARE_CLASS2(h3d,mat,Texture)

namespace h3d{
namespace impl{


class HXCPP_CLASS_ATTRIBUTES MemoryManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MemoryManager_obj OBJ_;
		MemoryManager_obj();

	public:
		enum { _hx_ClassId = 0x19006137 };

		void __construct( ::h3d::impl::Driver driver);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h3d.impl.MemoryManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h3d.impl.MemoryManager"); }
		static ::hx::ObjectPtr< MemoryManager_obj > __new( ::h3d::impl::Driver driver);
		static ::hx::ObjectPtr< MemoryManager_obj > __alloc(::hx::Ctx *_hx_ctx, ::h3d::impl::Driver driver);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		static void __alloc_dynamic_functions(::hx::Ctx *_hx_alloc,MemoryManager_obj *_hx_obj);
		//~MemoryManager_obj();

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
		::String __ToString() const { return HX_("MemoryManager",4c,11,d5,03); }

		static void __boot();
		static Float MAX_MEMORY;
		static int MAX_BUFFERS;
		static int SIZE;
		static ::Array< ::Dynamic> ALL_FLAGS;
		 ::h3d::impl::Driver driver;
		::Array< ::Dynamic> buffers;
		::Array< ::Dynamic> indexes;
		::Array< ::Dynamic> textures;
		::Array< ::Dynamic> depths;
		 ::h3d::Indexes triIndexes;
		 ::h3d::Indexes quadIndexes;
		Float usedMemory;
		Float texMemory;
		int bufferCount;
		void init();
		::Dynamic init_dyn();

		void initIndexes();
		::Dynamic initIndexes_dyn();

		::Dynamic garbage;
		inline ::Dynamic &garbage_dyn() {return garbage; }

		void cleanManagedBuffers();
		::Dynamic cleanManagedBuffers_dyn();

		void allocManaged( ::h3d::impl::ManagedBuffer m);
		::Dynamic allocManaged_dyn();

		void freeManaged( ::h3d::impl::ManagedBuffer m);
		::Dynamic freeManaged_dyn();

		void allocBuffer( ::h3d::Buffer b,int stride);
		::Dynamic allocBuffer_dyn();

		void deleteIndexes( ::h3d::Indexes i);
		::Dynamic deleteIndexes_dyn();

		void allocIndexes( ::h3d::Indexes i);
		::Dynamic allocIndexes_dyn();

		int bpp( ::h3d::mat::Texture t);
		::Dynamic bpp_dyn();

		bool cleanTextures(::hx::Null< bool >  force);
		::Dynamic cleanTextures_dyn();

		int sortByLRU( ::h3d::mat::Texture t1, ::h3d::mat::Texture t2);
		::Dynamic sortByLRU_dyn();

		void deleteTexture( ::h3d::mat::Texture t);
		::Dynamic deleteTexture_dyn();

		void allocTexture( ::h3d::mat::Texture t);
		::Dynamic allocTexture_dyn();

		void allocDepth( ::h3d::mat::DepthBuffer b);
		::Dynamic allocDepth_dyn();

		void deleteDepth( ::h3d::mat::DepthBuffer b);
		::Dynamic deleteDepth_dyn();

		void onContextLost();
		::Dynamic onContextLost_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		int freeMemorySize();
		::Dynamic freeMemorySize_dyn();

		 ::Dynamic stats();
		::Dynamic stats_dyn();

		::Array< ::Dynamic> allocStats();
		::Dynamic allocStats_dyn();

};

} // end namespace h3d
} // end namespace impl

#endif /* INCLUDED_h3d_impl_MemoryManager */ 
