#ifndef INCLUDED_h3d_mat_TextureFlags
#define INCLUDED_h3d_mat_TextureFlags

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,mat,TextureFlags)
namespace h3d{
namespace mat{


class TextureFlags_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef TextureFlags_obj OBJ_;

	public:
		TextureFlags_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("h3d.mat.TextureFlags",ef,77,8e,16); }
		::String __ToString() const { return HX_("TextureFlags.",22,d6,21,13) + _hx_tag; }

		static ::h3d::mat::TextureFlags AlphaPremultiplied;
		static inline ::h3d::mat::TextureFlags AlphaPremultiplied_dyn() { return AlphaPremultiplied; }
		static ::h3d::mat::TextureFlags Cube;
		static inline ::h3d::mat::TextureFlags Cube_dyn() { return Cube; }
		static ::h3d::mat::TextureFlags Dynamic;
		static inline ::h3d::mat::TextureFlags Dynamic_dyn() { return Dynamic; }
		static ::h3d::mat::TextureFlags IsArray;
		static inline ::h3d::mat::TextureFlags IsArray_dyn() { return IsArray; }
		static ::h3d::mat::TextureFlags IsNPOT;
		static inline ::h3d::mat::TextureFlags IsNPOT_dyn() { return IsNPOT; }
		static ::h3d::mat::TextureFlags Loading;
		static inline ::h3d::mat::TextureFlags Loading_dyn() { return Loading; }
		static ::h3d::mat::TextureFlags ManualMipMapGen;
		static inline ::h3d::mat::TextureFlags ManualMipMapGen_dyn() { return ManualMipMapGen; }
		static ::h3d::mat::TextureFlags MipMapped;
		static inline ::h3d::mat::TextureFlags MipMapped_dyn() { return MipMapped; }
		static ::h3d::mat::TextureFlags NoAlloc;
		static inline ::h3d::mat::TextureFlags NoAlloc_dyn() { return NoAlloc; }
		static ::h3d::mat::TextureFlags Serialize;
		static inline ::h3d::mat::TextureFlags Serialize_dyn() { return Serialize; }
		static ::h3d::mat::TextureFlags Target;
		static inline ::h3d::mat::TextureFlags Target_dyn() { return Target; }
		static ::h3d::mat::TextureFlags WasCleared;
		static inline ::h3d::mat::TextureFlags WasCleared_dyn() { return WasCleared; }
};

} // end namespace h3d
} // end namespace mat

#endif /* INCLUDED_h3d_mat_TextureFlags */ 
