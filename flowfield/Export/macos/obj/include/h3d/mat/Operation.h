#ifndef INCLUDED_h3d_mat_Operation
#define INCLUDED_h3d_mat_Operation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(h3d,mat,Operation)
namespace h3d{
namespace mat{


class Operation_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Operation_obj OBJ_;

	public:
		Operation_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("h3d.mat.Operation",c4,64,d0,df); }
		::String __ToString() const { return HX_("Operation.",47,22,e4,8e) + _hx_tag; }

		static ::h3d::mat::Operation Add;
		static inline ::h3d::mat::Operation Add_dyn() { return Add; }
		static ::h3d::mat::Operation Max;
		static inline ::h3d::mat::Operation Max_dyn() { return Max; }
		static ::h3d::mat::Operation Min;
		static inline ::h3d::mat::Operation Min_dyn() { return Min; }
		static ::h3d::mat::Operation ReverseSub;
		static inline ::h3d::mat::Operation ReverseSub_dyn() { return ReverseSub; }
		static ::h3d::mat::Operation Sub;
		static inline ::h3d::mat::Operation Sub_dyn() { return Sub; }
};

} // end namespace h3d
} // end namespace mat

#endif /* INCLUDED_h3d_mat_Operation */ 
