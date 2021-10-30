#ifndef INCLUDED_h3d_BufferFlag
#define INCLUDED_h3d_BufferFlag

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(h3d,BufferFlag)
namespace h3d{


class BufferFlag_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef BufferFlag_obj OBJ_;

	public:
		BufferFlag_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("h3d.BufferFlag",01,70,00,5e); }
		::String __ToString() const { return HX_("BufferFlag.",c2,55,0a,84) + _hx_tag; }

		static ::h3d::BufferFlag Dynamic;
		static inline ::h3d::BufferFlag Dynamic_dyn() { return Dynamic; }
		static ::h3d::BufferFlag LargeBuffer;
		static inline ::h3d::BufferFlag LargeBuffer_dyn() { return LargeBuffer; }
		static ::h3d::BufferFlag Managed;
		static inline ::h3d::BufferFlag Managed_dyn() { return Managed; }
		static ::h3d::BufferFlag NoAlloc;
		static inline ::h3d::BufferFlag NoAlloc_dyn() { return NoAlloc; }
		static ::h3d::BufferFlag Quads;
		static inline ::h3d::BufferFlag Quads_dyn() { return Quads; }
		static ::h3d::BufferFlag RawFormat;
		static inline ::h3d::BufferFlag RawFormat_dyn() { return RawFormat; }
		static ::h3d::BufferFlag Triangles;
		static inline ::h3d::BufferFlag Triangles_dyn() { return Triangles; }
		static ::h3d::BufferFlag UniformBuffer;
		static inline ::h3d::BufferFlag UniformBuffer_dyn() { return UniformBuffer; }
};

} // end namespace h3d

#endif /* INCLUDED_h3d_BufferFlag */ 
