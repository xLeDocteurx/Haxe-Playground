#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_mat_Compare
#include <h3d/mat/Compare.h>
#endif
#ifndef INCLUDED_h3d_mat_Stencil
#include <h3d/mat/Stencil.h>
#endif
#ifndef INCLUDED_h3d_mat_StencilOp
#include <h3d/mat/StencilOp.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_68735a4f56e7b814_8_new,"h3d.mat.Stencil","new",0x5c9b0ecb,"h3d.mat.Stencil.new","h3d/mat/Stencil.hx",8,0x2c141e07)
HX_LOCAL_STACK_FRAME(_hx_pos_68735a4f56e7b814_32_setFront,"h3d.mat.Stencil","setFront",0xbfaa1f5c,"h3d.mat.Stencil.setFront","h3d/mat/Stencil.hx",32,0x2c141e07)
HX_LOCAL_STACK_FRAME(_hx_pos_68735a4f56e7b814_38_setBack,"h3d.mat.Stencil","setBack",0x06336ad4,"h3d.mat.Stencil.setBack","h3d/mat/Stencil.hx",38,0x2c141e07)
HX_LOCAL_STACK_FRAME(_hx_pos_68735a4f56e7b814_44_setOp,"h3d.mat.Stencil","setOp",0xe5937c8e,"h3d.mat.Stencil.setOp","h3d/mat/Stencil.hx",44,0x2c141e07)
HX_LOCAL_STACK_FRAME(_hx_pos_68735a4f56e7b814_49_setFunc,"h3d.mat.Stencil","setFunc",0x08e77bf1,"h3d.mat.Stencil.setFunc","h3d/mat/Stencil.hx",49,0x2c141e07)
HX_LOCAL_STACK_FRAME(_hx_pos_68735a4f56e7b814_56_clone,"h3d.mat.Stencil","clone",0xb3c70288,"h3d.mat.Stencil.clone","h3d/mat/Stencil.hx",56,0x2c141e07)
HX_LOCAL_STACK_FRAME(_hx_pos_68735a4f56e7b814_63_load,"h3d.mat.Stencil","load",0xa9c6f95b,"h3d.mat.Stencil.load","h3d/mat/Stencil.hx",63,0x2c141e07)
HX_LOCAL_STACK_FRAME(_hx_pos_68a3a05e53f9813c_87_set_readMask,"h3d.mat.Stencil","set_readMask",0x05620f14,"h3d.mat.Stencil.set_readMask","hxd/impl/BitsBuilder.hx",87,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_68a3a05e53f9813c_87_set_writeMask,"h3d.mat.Stencil","set_writeMask",0x2d6b7d79,"h3d.mat.Stencil.set_writeMask","hxd/impl/BitsBuilder.hx",87,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_68a3a05e53f9813c_87_set_reference,"h3d.mat.Stencil","set_reference",0x37264fd9,"h3d.mat.Stencil.set_reference","hxd/impl/BitsBuilder.hx",87,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_68a3a05e53f9813c_87_set_frontTest,"h3d.mat.Stencil","set_frontTest",0x66665da9,"h3d.mat.Stencil.set_frontTest","hxd/impl/BitsBuilder.hx",87,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_68a3a05e53f9813c_87_set_frontPass,"h3d.mat.Stencil","set_frontPass",0x63be7a28,"h3d.mat.Stencil.set_frontPass","hxd/impl/BitsBuilder.hx",87,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_68a3a05e53f9813c_87_set_frontSTfail,"h3d.mat.Stencil","set_frontSTfail",0x5a26cbf6,"h3d.mat.Stencil.set_frontSTfail","hxd/impl/BitsBuilder.hx",87,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_68a3a05e53f9813c_87_set_frontDPfail,"h3d.mat.Stencil","set_frontDPfail",0x0d321061,"h3d.mat.Stencil.set_frontDPfail","hxd/impl/BitsBuilder.hx",87,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_68a3a05e53f9813c_87_set_backTest,"h3d.mat.Stencil","set_backTest",0xa50d61cb,"h3d.mat.Stencil.set_backTest","hxd/impl/BitsBuilder.hx",87,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_68a3a05e53f9813c_87_set_backPass,"h3d.mat.Stencil","set_backPass",0xa2657e4a,"h3d.mat.Stencil.set_backPass","hxd/impl/BitsBuilder.hx",87,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_68a3a05e53f9813c_87_set_backSTfail,"h3d.mat.Stencil","set_backSTfail",0xd3b09c98,"h3d.mat.Stencil.set_backSTfail","hxd/impl/BitsBuilder.hx",87,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_68a3a05e53f9813c_87_set_backDPfail,"h3d.mat.Stencil","set_backDPfail",0x86bbe103,"h3d.mat.Stencil.set_backDPfail","hxd/impl/BitsBuilder.hx",87,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_68a3a05e53f9813c_140_loadOpBits,"h3d.mat.Stencil","loadOpBits",0xa9eb9082,"h3d.mat.Stencil.loadOpBits","hxd/impl/BitsBuilder.hx",140,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_68a3a05e53f9813c_140_loadMaskBits,"h3d.mat.Stencil","loadMaskBits",0x6361568d,"h3d.mat.Stencil.loadMaskBits","hxd/impl/BitsBuilder.hx",140,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_68a3a05e53f9813c_101_getReadMask,"h3d.mat.Stencil","getReadMask",0xb3ddff83,"h3d.mat.Stencil.getReadMask","hxd/impl/BitsBuilder.hx",101,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_68a3a05e53f9813c_101_getWriteMask,"h3d.mat.Stencil","getWriteMask",0x2b61ee2a,"h3d.mat.Stencil.getWriteMask","hxd/impl/BitsBuilder.hx",101,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_68a3a05e53f9813c_101_getReference,"h3d.mat.Stencil","getReference",0x351cc08a,"h3d.mat.Stencil.getReference","hxd/impl/BitsBuilder.hx",101,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_68a3a05e53f9813c_101_getFrontTest,"h3d.mat.Stencil","getFrontTest",0x645cce5a,"h3d.mat.Stencil.getFrontTest","hxd/impl/BitsBuilder.hx",101,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_68a3a05e53f9813c_101_getFrontPass,"h3d.mat.Stencil","getFrontPass",0x61b4ead9,"h3d.mat.Stencil.getFrontPass","hxd/impl/BitsBuilder.hx",101,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_68a3a05e53f9813c_101_getFrontSTfail,"h3d.mat.Stencil","getFrontSTfail",0x971f8ae7,"h3d.mat.Stencil.getFrontSTfail","hxd/impl/BitsBuilder.hx",101,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_68a3a05e53f9813c_101_getFrontDPfail,"h3d.mat.Stencil","getFrontDPfail",0x4a2acf52,"h3d.mat.Stencil.getFrontDPfail","hxd/impl/BitsBuilder.hx",101,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_68a3a05e53f9813c_101_getBackTest,"h3d.mat.Stencil","getBackTest",0x5389523a,"h3d.mat.Stencil.getBackTest","hxd/impl/BitsBuilder.hx",101,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_68a3a05e53f9813c_101_getBackPass,"h3d.mat.Stencil","getBackPass",0x50e16eb9,"h3d.mat.Stencil.getBackPass","hxd/impl/BitsBuilder.hx",101,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_68a3a05e53f9813c_101_getBackSTfail,"h3d.mat.Stencil","getBackSTfail",0x0d5cc6c7,"h3d.mat.Stencil.getBackSTfail","hxd/impl/BitsBuilder.hx",101,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_68a3a05e53f9813c_101_getBackDPfail,"h3d.mat.Stencil","getBackDPfail",0xc0680b32,"h3d.mat.Stencil.getBackDPfail","hxd/impl/BitsBuilder.hx",101,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_68a3a05e53f9813c_108_boot,"h3d.mat.Stencil","boot",0xa32ae367,"h3d.mat.Stencil.boot","hxd/impl/BitsBuilder.hx",108,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_68a3a05e53f9813c_114_boot,"h3d.mat.Stencil","boot",0xa32ae367,"h3d.mat.Stencil.boot","hxd/impl/BitsBuilder.hx",114,0xc714215d)
HX_LOCAL_STACK_FRAME(_hx_pos_68a3a05e53f9813c_120_boot,"h3d.mat.Stencil","boot",0xa32ae367,"h3d.mat.Stencil.boot","hxd/impl/BitsBuilder.hx",120,0xc714215d)
namespace h3d{
namespace mat{

void Stencil_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_68735a4f56e7b814_8_new)
HXLINE(  11)		this->opBits = 0;
HXLINE(  10)		this->maskBits = 0;
HXLINE(  28)		this->setOp(::h3d::mat::StencilOp_obj::Keep_dyn(),::h3d::mat::StencilOp_obj::Keep_dyn(),::h3d::mat::StencilOp_obj::Keep_dyn());
HXLINE(  29)		this->setFunc(::h3d::mat::Compare_obj::Always_dyn(),null(),null(),null());
            	}

Dynamic Stencil_obj::__CreateEmpty() { return new Stencil_obj; }

void *Stencil_obj::_hx_vtable = 0;

Dynamic Stencil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Stencil_obj > _hx_result = new Stencil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Stencil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4e671d75;
}

static ::hxd::impl::_Serializable::NoSerializeSupport_obj _hx_h3d_mat_Stencil__hx_hxd_impl__Serializable_NoSerializeSupport= {
};

void *Stencil_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xa6f1a21a: return &_hx_h3d_mat_Stencil__hx_hxd_impl__Serializable_NoSerializeSupport;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void Stencil_obj::setFront( ::h3d::mat::StencilOp stfail, ::h3d::mat::StencilOp dpfail, ::h3d::mat::StencilOp pass){
            	HX_STACKFRAME(&_hx_pos_68735a4f56e7b814_32_setFront)
HXLINE(  33)		this->set_frontSTfail(stfail);
HXLINE(  34)		this->set_frontDPfail(dpfail);
HXLINE(  35)		this->set_frontPass(pass);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Stencil_obj,setFront,(void))

void Stencil_obj::setBack( ::h3d::mat::StencilOp stfail, ::h3d::mat::StencilOp dpfail, ::h3d::mat::StencilOp pass){
            	HX_STACKFRAME(&_hx_pos_68735a4f56e7b814_38_setBack)
HXLINE(  39)		this->set_backSTfail(stfail);
HXLINE(  40)		this->set_backDPfail(dpfail);
HXLINE(  41)		this->set_backPass(pass);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Stencil_obj,setBack,(void))

void Stencil_obj::setOp( ::h3d::mat::StencilOp stfail, ::h3d::mat::StencilOp dpfail, ::h3d::mat::StencilOp pass){
            	HX_STACKFRAME(&_hx_pos_68735a4f56e7b814_44_setOp)
HXLINE(  45)		this->setFront(stfail,dpfail,pass);
HXLINE(  46)		this->setBack(stfail,dpfail,pass);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Stencil_obj,setOp,(void))

void Stencil_obj::setFunc( ::h3d::mat::Compare f,::hx::Null< int >  __o_reference,::hx::Null< int >  __o_readMask,::hx::Null< int >  __o_writeMask){
            		int reference = __o_reference.Default(0);
            		int readMask = __o_readMask.Default(255);
            		int writeMask = __o_writeMask.Default(255);
            	HX_STACKFRAME(&_hx_pos_68735a4f56e7b814_49_setFunc)
HXLINE(  50)		this->set_frontTest(this->set_backTest(f));
HXLINE(  51)		this->set_reference(reference);
HXLINE(  52)		this->set_readMask(readMask);
HXLINE(  53)		this->set_writeMask(writeMask);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Stencil_obj,setFunc,(void))

 ::h3d::mat::Stencil Stencil_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_68735a4f56e7b814_56_clone)
HXLINE(  57)		 ::h3d::mat::Stencil s =  ::h3d::mat::Stencil_obj::__alloc( HX_CTX );
HXLINE(  58)		s->opBits = this->opBits;
HXLINE(  59)		s->maskBits = this->maskBits;
HXLINE(  60)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stencil_obj,clone,return )

void Stencil_obj::load( ::h3d::mat::Stencil s){
            	HX_STACKFRAME(&_hx_pos_68735a4f56e7b814_63_load)
HXLINE(  64)		this->opBits = s->opBits;
HXLINE(  65)		this->maskBits = s->maskBits;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stencil_obj,load,(void))

int Stencil_obj::set_readMask(int v){
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_87_set_readMask)
HXDLIN(  87)		this->maskBits = ((this->maskBits & -256) | (v & 255));
HXDLIN(  87)		return (this->readMask = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stencil_obj,set_readMask,return )

int Stencil_obj::set_writeMask(int v){
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_87_set_writeMask)
HXDLIN(  87)		this->maskBits = ((this->maskBits & -65281) | ((v & 255) << 8));
HXDLIN(  87)		return (this->writeMask = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stencil_obj,set_writeMask,return )

int Stencil_obj::set_reference(int v){
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_87_set_reference)
HXDLIN(  87)		this->maskBits = ((this->maskBits & -16711681) | ((v & 255) << 16));
HXDLIN(  87)		return (this->reference = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stencil_obj,set_reference,return )

 ::h3d::mat::Compare Stencil_obj::set_frontTest( ::h3d::mat::Compare v){
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_87_set_frontTest)
HXDLIN(  87)		int _hx_tmp = (this->opBits & -8);
HXDLIN(  87)		this->opBits = (_hx_tmp | _hx_getEnumValueIndex(v));
HXDLIN(  87)		return (this->frontTest = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stencil_obj,set_frontTest,return )

 ::h3d::mat::StencilOp Stencil_obj::set_frontPass( ::h3d::mat::StencilOp v){
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_87_set_frontPass)
HXDLIN(  87)		int _hx_tmp = (this->opBits & -57);
HXDLIN(  87)		this->opBits = (_hx_tmp | (_hx_getEnumValueIndex(v) << 3));
HXDLIN(  87)		return (this->frontPass = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stencil_obj,set_frontPass,return )

 ::h3d::mat::StencilOp Stencil_obj::set_frontSTfail( ::h3d::mat::StencilOp v){
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_87_set_frontSTfail)
HXDLIN(  87)		int _hx_tmp = (this->opBits & -449);
HXDLIN(  87)		this->opBits = (_hx_tmp | (_hx_getEnumValueIndex(v) << 6));
HXDLIN(  87)		return (this->frontSTfail = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stencil_obj,set_frontSTfail,return )

 ::h3d::mat::StencilOp Stencil_obj::set_frontDPfail( ::h3d::mat::StencilOp v){
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_87_set_frontDPfail)
HXDLIN(  87)		int _hx_tmp = (this->opBits & -3585);
HXDLIN(  87)		this->opBits = (_hx_tmp | (_hx_getEnumValueIndex(v) << 9));
HXDLIN(  87)		return (this->frontDPfail = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stencil_obj,set_frontDPfail,return )

 ::h3d::mat::Compare Stencil_obj::set_backTest( ::h3d::mat::Compare v){
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_87_set_backTest)
HXDLIN(  87)		int _hx_tmp = (this->opBits & -28673);
HXDLIN(  87)		this->opBits = (_hx_tmp | (_hx_getEnumValueIndex(v) << 12));
HXDLIN(  87)		return (this->backTest = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stencil_obj,set_backTest,return )

 ::h3d::mat::StencilOp Stencil_obj::set_backPass( ::h3d::mat::StencilOp v){
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_87_set_backPass)
HXDLIN(  87)		int _hx_tmp = (this->opBits & -229377);
HXDLIN(  87)		this->opBits = (_hx_tmp | (_hx_getEnumValueIndex(v) << 15));
HXDLIN(  87)		return (this->backPass = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stencil_obj,set_backPass,return )

 ::h3d::mat::StencilOp Stencil_obj::set_backSTfail( ::h3d::mat::StencilOp v){
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_87_set_backSTfail)
HXDLIN(  87)		int _hx_tmp = (this->opBits & -1835009);
HXDLIN(  87)		this->opBits = (_hx_tmp | (_hx_getEnumValueIndex(v) << 18));
HXDLIN(  87)		return (this->backSTfail = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stencil_obj,set_backSTfail,return )

 ::h3d::mat::StencilOp Stencil_obj::set_backDPfail( ::h3d::mat::StencilOp v){
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_87_set_backDPfail)
HXDLIN(  87)		int _hx_tmp = (this->opBits & -14680065);
HXDLIN(  87)		this->opBits = (_hx_tmp | (_hx_getEnumValueIndex(v) << 21));
HXDLIN(  87)		return (this->backDPfail = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stencil_obj,set_backDPfail,return )

void Stencil_obj::loadOpBits(int bits){
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_140_loadOpBits)
HXDLIN( 140)		this->opBits = bits;
HXDLIN( 140)		{
HXLINE(  93)			this->set_frontTest(::Type_obj::createEnumIndex(::hx::ClassOf< ::h3d::mat::Compare >(),(this->opBits & 7),null()));
HXDLIN(  93)			this->set_frontPass(::Type_obj::createEnumIndex(::hx::ClassOf< ::h3d::mat::StencilOp >(),((this->opBits >> 3) & 7),null()));
HXDLIN(  93)			this->set_frontSTfail(::Type_obj::createEnumIndex(::hx::ClassOf< ::h3d::mat::StencilOp >(),((this->opBits >> 6) & 7),null()));
HXDLIN(  93)			this->set_frontDPfail(::Type_obj::createEnumIndex(::hx::ClassOf< ::h3d::mat::StencilOp >(),((this->opBits >> 9) & 7),null()));
HXDLIN(  93)			this->set_backTest(::Type_obj::createEnumIndex(::hx::ClassOf< ::h3d::mat::Compare >(),((this->opBits >> 12) & 7),null()));
HXDLIN(  93)			this->set_backPass(::Type_obj::createEnumIndex(::hx::ClassOf< ::h3d::mat::StencilOp >(),((this->opBits >> 15) & 7),null()));
HXDLIN(  93)			this->set_backSTfail(::Type_obj::createEnumIndex(::hx::ClassOf< ::h3d::mat::StencilOp >(),((this->opBits >> 18) & 7),null()));
HXDLIN(  93)			this->set_backDPfail(::Type_obj::createEnumIndex(::hx::ClassOf< ::h3d::mat::StencilOp >(),((this->opBits >> 21) & 7),null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stencil_obj,loadOpBits,(void))

void Stencil_obj::loadMaskBits(int bits){
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_140_loadMaskBits)
HXDLIN( 140)		this->maskBits = bits;
HXDLIN( 140)		{
HXLINE(  93)			this->set_readMask((this->maskBits & 255));
HXDLIN(  93)			this->set_writeMask(((this->maskBits >> 8) & 255));
HXDLIN(  93)			this->set_reference(((this->maskBits >> 16) & 255));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stencil_obj,loadMaskBits,(void))

int Stencil_obj::getReadMask(int v){
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_101_getReadMask)
HXDLIN( 101)		return (v & 255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stencil_obj,getReadMask,return )

int Stencil_obj::readMask_bits;

int Stencil_obj::readMask_offset;

int Stencil_obj::readMask_mask;

int Stencil_obj::getWriteMask(int v){
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_101_getWriteMask)
HXDLIN( 101)		return ((v >> 8) & 255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stencil_obj,getWriteMask,return )

int Stencil_obj::writeMask_bits;

int Stencil_obj::writeMask_offset;

int Stencil_obj::writeMask_mask;

int Stencil_obj::getReference(int v){
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_101_getReference)
HXDLIN( 101)		return ((v >> 16) & 255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stencil_obj,getReference,return )

int Stencil_obj::reference_bits;

int Stencil_obj::reference_offset;

int Stencil_obj::reference_mask;

int Stencil_obj::getFrontTest(int v){
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_101_getFrontTest)
HXDLIN( 101)		return (v & 7);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stencil_obj,getFrontTest,return )

int Stencil_obj::frontTest_bits;

int Stencil_obj::frontTest_offset;

int Stencil_obj::frontTest_mask;

int Stencil_obj::getFrontPass(int v){
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_101_getFrontPass)
HXDLIN( 101)		return ((v >> 3) & 7);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stencil_obj,getFrontPass,return )

int Stencil_obj::frontPass_bits;

int Stencil_obj::frontPass_offset;

int Stencil_obj::frontPass_mask;

int Stencil_obj::getFrontSTfail(int v){
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_101_getFrontSTfail)
HXDLIN( 101)		return ((v >> 6) & 7);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stencil_obj,getFrontSTfail,return )

int Stencil_obj::frontSTfail_bits;

int Stencil_obj::frontSTfail_offset;

int Stencil_obj::frontSTfail_mask;

int Stencil_obj::getFrontDPfail(int v){
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_101_getFrontDPfail)
HXDLIN( 101)		return ((v >> 9) & 7);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stencil_obj,getFrontDPfail,return )

int Stencil_obj::frontDPfail_bits;

int Stencil_obj::frontDPfail_offset;

int Stencil_obj::frontDPfail_mask;

int Stencil_obj::getBackTest(int v){
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_101_getBackTest)
HXDLIN( 101)		return ((v >> 12) & 7);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stencil_obj,getBackTest,return )

int Stencil_obj::backTest_bits;

int Stencil_obj::backTest_offset;

int Stencil_obj::backTest_mask;

int Stencil_obj::getBackPass(int v){
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_101_getBackPass)
HXDLIN( 101)		return ((v >> 15) & 7);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stencil_obj,getBackPass,return )

int Stencil_obj::backPass_bits;

int Stencil_obj::backPass_offset;

int Stencil_obj::backPass_mask;

int Stencil_obj::getBackSTfail(int v){
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_101_getBackSTfail)
HXDLIN( 101)		return ((v >> 18) & 7);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stencil_obj,getBackSTfail,return )

int Stencil_obj::backSTfail_bits;

int Stencil_obj::backSTfail_offset;

int Stencil_obj::backSTfail_mask;

int Stencil_obj::getBackDPfail(int v){
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_101_getBackDPfail)
HXDLIN( 101)		return ((v >> 21) & 7);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stencil_obj,getBackDPfail,return )

int Stencil_obj::backDPfail_bits;

int Stencil_obj::backDPfail_offset;

int Stencil_obj::backDPfail_mask;


::hx::ObjectPtr< Stencil_obj > Stencil_obj::__new() {
	::hx::ObjectPtr< Stencil_obj > __this = new Stencil_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Stencil_obj > Stencil_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Stencil_obj *__this = (Stencil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Stencil_obj), true, "h3d.mat.Stencil"));
	*(void **)__this = Stencil_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Stencil_obj::Stencil_obj()
{
}

void Stencil_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stencil);
	HX_MARK_MEMBER_NAME(maskBits,"maskBits");
	HX_MARK_MEMBER_NAME(opBits,"opBits");
	HX_MARK_MEMBER_NAME(readMask,"readMask");
	HX_MARK_MEMBER_NAME(writeMask,"writeMask");
	HX_MARK_MEMBER_NAME(reference,"reference");
	HX_MARK_MEMBER_NAME(frontTest,"frontTest");
	HX_MARK_MEMBER_NAME(frontPass,"frontPass");
	HX_MARK_MEMBER_NAME(frontSTfail,"frontSTfail");
	HX_MARK_MEMBER_NAME(frontDPfail,"frontDPfail");
	HX_MARK_MEMBER_NAME(backTest,"backTest");
	HX_MARK_MEMBER_NAME(backPass,"backPass");
	HX_MARK_MEMBER_NAME(backSTfail,"backSTfail");
	HX_MARK_MEMBER_NAME(backDPfail,"backDPfail");
	HX_MARK_END_CLASS();
}

void Stencil_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(maskBits,"maskBits");
	HX_VISIT_MEMBER_NAME(opBits,"opBits");
	HX_VISIT_MEMBER_NAME(readMask,"readMask");
	HX_VISIT_MEMBER_NAME(writeMask,"writeMask");
	HX_VISIT_MEMBER_NAME(reference,"reference");
	HX_VISIT_MEMBER_NAME(frontTest,"frontTest");
	HX_VISIT_MEMBER_NAME(frontPass,"frontPass");
	HX_VISIT_MEMBER_NAME(frontSTfail,"frontSTfail");
	HX_VISIT_MEMBER_NAME(frontDPfail,"frontDPfail");
	HX_VISIT_MEMBER_NAME(backTest,"backTest");
	HX_VISIT_MEMBER_NAME(backPass,"backPass");
	HX_VISIT_MEMBER_NAME(backSTfail,"backSTfail");
	HX_VISIT_MEMBER_NAME(backDPfail,"backDPfail");
}

::hx::Val Stencil_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"setOp") ) { return ::hx::Val( setOp_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"opBits") ) { return ::hx::Val( opBits ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setBack") ) { return ::hx::Val( setBack_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFunc") ) { return ::hx::Val( setFunc_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maskBits") ) { return ::hx::Val( maskBits ); }
		if (HX_FIELD_EQ(inName,"readMask") ) { return ::hx::Val( readMask ); }
		if (HX_FIELD_EQ(inName,"backTest") ) { return ::hx::Val( backTest ); }
		if (HX_FIELD_EQ(inName,"backPass") ) { return ::hx::Val( backPass ); }
		if (HX_FIELD_EQ(inName,"setFront") ) { return ::hx::Val( setFront_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeMask") ) { return ::hx::Val( writeMask ); }
		if (HX_FIELD_EQ(inName,"reference") ) { return ::hx::Val( reference ); }
		if (HX_FIELD_EQ(inName,"frontTest") ) { return ::hx::Val( frontTest ); }
		if (HX_FIELD_EQ(inName,"frontPass") ) { return ::hx::Val( frontPass ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backSTfail") ) { return ::hx::Val( backSTfail ); }
		if (HX_FIELD_EQ(inName,"backDPfail") ) { return ::hx::Val( backDPfail ); }
		if (HX_FIELD_EQ(inName,"loadOpBits") ) { return ::hx::Val( loadOpBits_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"frontSTfail") ) { return ::hx::Val( frontSTfail ); }
		if (HX_FIELD_EQ(inName,"frontDPfail") ) { return ::hx::Val( frontDPfail ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_readMask") ) { return ::hx::Val( set_readMask_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backTest") ) { return ::hx::Val( set_backTest_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backPass") ) { return ::hx::Val( set_backPass_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadMaskBits") ) { return ::hx::Val( loadMaskBits_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_writeMask") ) { return ::hx::Val( set_writeMask_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_reference") ) { return ::hx::Val( set_reference_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frontTest") ) { return ::hx::Val( set_frontTest_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frontPass") ) { return ::hx::Val( set_frontPass_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_backSTfail") ) { return ::hx::Val( set_backSTfail_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backDPfail") ) { return ::hx::Val( set_backDPfail_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_frontSTfail") ) { return ::hx::Val( set_frontSTfail_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frontDPfail") ) { return ::hx::Val( set_frontDPfail_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Stencil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"getReadMask") ) { outValue = getReadMask_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBackTest") ) { outValue = getBackTest_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBackPass") ) { outValue = getBackPass_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getWriteMask") ) { outValue = getWriteMask_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getReference") ) { outValue = getReference_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getFrontTest") ) { outValue = getFrontTest_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getFrontPass") ) { outValue = getFrontPass_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBackSTfail") ) { outValue = getBackSTfail_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBackDPfail") ) { outValue = getBackDPfail_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getFrontSTfail") ) { outValue = getFrontSTfail_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getFrontDPfail") ) { outValue = getFrontDPfail_dyn(); return true; }
	}
	return false;
}

::hx::Val Stencil_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"opBits") ) { opBits=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maskBits") ) { maskBits=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"readMask") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_readMask(inValue.Cast< int >()) );readMask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backTest") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backTest(inValue.Cast<  ::h3d::mat::Compare >()) );backTest=inValue.Cast<  ::h3d::mat::Compare >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backPass") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backPass(inValue.Cast<  ::h3d::mat::StencilOp >()) );backPass=inValue.Cast<  ::h3d::mat::StencilOp >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeMask") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_writeMask(inValue.Cast< int >()) );writeMask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"reference") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_reference(inValue.Cast< int >()) );reference=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frontTest") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frontTest(inValue.Cast<  ::h3d::mat::Compare >()) );frontTest=inValue.Cast<  ::h3d::mat::Compare >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frontPass") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frontPass(inValue.Cast<  ::h3d::mat::StencilOp >()) );frontPass=inValue.Cast<  ::h3d::mat::StencilOp >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backSTfail") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backSTfail(inValue.Cast<  ::h3d::mat::StencilOp >()) );backSTfail=inValue.Cast<  ::h3d::mat::StencilOp >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backDPfail") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backDPfail(inValue.Cast<  ::h3d::mat::StencilOp >()) );backDPfail=inValue.Cast<  ::h3d::mat::StencilOp >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"frontSTfail") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frontSTfail(inValue.Cast<  ::h3d::mat::StencilOp >()) );frontSTfail=inValue.Cast<  ::h3d::mat::StencilOp >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frontDPfail") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frontDPfail(inValue.Cast<  ::h3d::mat::StencilOp >()) );frontDPfail=inValue.Cast<  ::h3d::mat::StencilOp >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stencil_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("maskBits",12,4e,f7,de));
	outFields->push(HX_("opBits",c7,2c,6e,0a));
	outFields->push(HX_("readMask",62,1b,4e,70));
	outFields->push(HX_("writeMask",6b,35,0a,51));
	outFields->push(HX_("reference",cb,07,c5,5a));
	outFields->push(HX_("frontTest",9b,15,05,8a));
	outFields->push(HX_("frontPass",1a,32,5d,87));
	outFields->push(HX_("frontSTfail",68,e4,d8,ac));
	outFields->push(HX_("frontDPfail",d3,28,e4,5f));
	outFields->push(HX_("backTest",19,6e,f9,0f));
	outFields->push(HX_("backPass",98,8a,51,0d));
	outFields->push(HX_("backSTfail",66,d8,f2,da));
	outFields->push(HX_("backDPfail",d1,1c,fe,8d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Stencil_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Stencil_obj,maskBits),HX_("maskBits",12,4e,f7,de)},
	{::hx::fsInt,(int)offsetof(Stencil_obj,opBits),HX_("opBits",c7,2c,6e,0a)},
	{::hx::fsInt,(int)offsetof(Stencil_obj,readMask),HX_("readMask",62,1b,4e,70)},
	{::hx::fsInt,(int)offsetof(Stencil_obj,writeMask),HX_("writeMask",6b,35,0a,51)},
	{::hx::fsInt,(int)offsetof(Stencil_obj,reference),HX_("reference",cb,07,c5,5a)},
	{::hx::fsObject /*  ::h3d::mat::Compare */ ,(int)offsetof(Stencil_obj,frontTest),HX_("frontTest",9b,15,05,8a)},
	{::hx::fsObject /*  ::h3d::mat::StencilOp */ ,(int)offsetof(Stencil_obj,frontPass),HX_("frontPass",1a,32,5d,87)},
	{::hx::fsObject /*  ::h3d::mat::StencilOp */ ,(int)offsetof(Stencil_obj,frontSTfail),HX_("frontSTfail",68,e4,d8,ac)},
	{::hx::fsObject /*  ::h3d::mat::StencilOp */ ,(int)offsetof(Stencil_obj,frontDPfail),HX_("frontDPfail",d3,28,e4,5f)},
	{::hx::fsObject /*  ::h3d::mat::Compare */ ,(int)offsetof(Stencil_obj,backTest),HX_("backTest",19,6e,f9,0f)},
	{::hx::fsObject /*  ::h3d::mat::StencilOp */ ,(int)offsetof(Stencil_obj,backPass),HX_("backPass",98,8a,51,0d)},
	{::hx::fsObject /*  ::h3d::mat::StencilOp */ ,(int)offsetof(Stencil_obj,backSTfail),HX_("backSTfail",66,d8,f2,da)},
	{::hx::fsObject /*  ::h3d::mat::StencilOp */ ,(int)offsetof(Stencil_obj,backDPfail),HX_("backDPfail",d1,1c,fe,8d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Stencil_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Stencil_obj::readMask_bits,HX_("readMask_bits",43,78,d1,7a)},
	{::hx::fsInt,(void *) &Stencil_obj::readMask_offset,HX_("readMask_offset",10,9e,81,5b)},
	{::hx::fsInt,(void *) &Stencil_obj::readMask_mask,HX_("readMask_mask",29,be,10,82)},
	{::hx::fsInt,(void *) &Stencil_obj::writeMask_bits,HX_("writeMask_bits",9a,5d,2d,51)},
	{::hx::fsInt,(void *) &Stencil_obj::writeMask_offset,HX_("writeMask_offset",27,c7,a2,6c)},
	{::hx::fsInt,(void *) &Stencil_obj::writeMask_mask,HX_("writeMask_mask",80,a3,6c,58)},
	{::hx::fsInt,(void *) &Stencil_obj::reference_bits,HX_("reference_bits",3a,ef,3b,19)},
	{::hx::fsInt,(void *) &Stencil_obj::reference_offset,HX_("reference_offset",c7,00,b1,42)},
	{::hx::fsInt,(void *) &Stencil_obj::reference_mask,HX_("reference_mask",20,35,7b,20)},
	{::hx::fsInt,(void *) &Stencil_obj::frontTest_bits,HX_("frontTest_bits",6a,cf,e7,6f)},
	{::hx::fsInt,(void *) &Stencil_obj::frontTest_offset,HX_("frontTest_offset",f7,4c,39,84)},
	{::hx::fsInt,(void *) &Stencil_obj::frontTest_mask,HX_("frontTest_mask",50,15,27,77)},
	{::hx::fsInt,(void *) &Stencil_obj::frontPass_bits,HX_("frontPass_bits",8b,06,fd,d8)},
	{::hx::fsInt,(void *) &Stencil_obj::frontPass_offset,HX_("frontPass_offset",58,4e,63,46)},
	{::hx::fsInt,(void *) &Stencil_obj::frontPass_mask,HX_("frontPass_mask",71,4c,3c,e0)},
	{::hx::fsInt,(void *) &Stencil_obj::frontSTfail_bits,HX_("frontSTfail_bits",7d,39,b2,ab)},
	{::hx::fsInt,(void *) &Stencil_obj::frontSTfail_offset,HX_("frontSTfail_offset",ca,a1,00,17)},
	{::hx::fsInt,(void *) &Stencil_obj::frontSTfail_mask,HX_("frontSTfail_mask",63,7f,f1,b2)},
	{::hx::fsInt,(void *) &Stencil_obj::frontDPfail_bits,HX_("frontDPfail_bits",32,11,80,1d)},
	{::hx::fsInt,(void *) &Stencil_obj::frontDPfail_offset,HX_("frontDPfail_offset",bf,90,bb,f9)},
	{::hx::fsInt,(void *) &Stencil_obj::frontDPfail_mask,HX_("frontDPfail_mask",18,57,bf,24)},
	{::hx::fsInt,(void *) &Stencil_obj::backTest_bits,HX_("backTest_bits",2c,ee,2b,9e)},
	{::hx::fsInt,(void *) &Stencil_obj::backTest_offset,HX_("backTest_offset",39,20,d4,e2)},
	{::hx::fsInt,(void *) &Stencil_obj::backTest_mask,HX_("backTest_mask",12,34,6b,a5)},
	{::hx::fsInt,(void *) &Stencil_obj::backPass_bits,HX_("backPass_bits",4d,25,41,07)},
	{::hx::fsInt,(void *) &Stencil_obj::backPass_offset,HX_("backPass_offset",9a,21,fe,a4)},
	{::hx::fsInt,(void *) &Stencil_obj::backPass_mask,HX_("backPass_mask",33,6b,80,0e)},
	{::hx::fsInt,(void *) &Stencil_obj::backSTfail_bits,HX_("backSTfail_bits",bf,0c,4d,0a)},
	{::hx::fsInt,(void *) &Stencil_obj::backSTfail_offset,HX_("backSTfail_offset",8c,49,68,70)},
	{::hx::fsInt,(void *) &Stencil_obj::backSTfail_mask,HX_("backSTfail_mask",a5,52,8c,11)},
	{::hx::fsInt,(void *) &Stencil_obj::backDPfail_bits,HX_("backDPfail_bits",74,e4,1a,7c)},
	{::hx::fsInt,(void *) &Stencil_obj::backDPfail_offset,HX_("backDPfail_offset",81,38,23,53)},
	{::hx::fsInt,(void *) &Stencil_obj::backDPfail_mask,HX_("backDPfail_mask",5a,2a,5a,83)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Stencil_obj_sMemberFields[] = {
	HX_("maskBits",12,4e,f7,de),
	HX_("opBits",c7,2c,6e,0a),
	HX_("readMask",62,1b,4e,70),
	HX_("writeMask",6b,35,0a,51),
	HX_("reference",cb,07,c5,5a),
	HX_("frontTest",9b,15,05,8a),
	HX_("frontPass",1a,32,5d,87),
	HX_("frontSTfail",68,e4,d8,ac),
	HX_("frontDPfail",d3,28,e4,5f),
	HX_("backTest",19,6e,f9,0f),
	HX_("backPass",98,8a,51,0d),
	HX_("backSTfail",66,d8,f2,da),
	HX_("backDPfail",d1,1c,fe,8d),
	HX_("setFront",a7,81,c2,14),
	HX_("setBack",e9,1a,95,06),
	HX_("setOp",63,8d,2f,7a),
	HX_("setFunc",06,2c,49,09),
	HX_("clone",5d,13,63,48),
	HX_("load",26,9a,b7,47),
	HX_("set_readMask",df,f2,60,3a),
	HX_("set_writeMask",4e,eb,73,57),
	HX_("set_reference",ae,bd,2e,61),
	HX_("set_frontTest",7e,cb,6e,90),
	HX_("set_frontPass",fd,e7,c6,8d),
	HX_("set_frontSTfail",0b,19,86,69),
	HX_("set_frontDPfail",76,5d,91,1c),
	HX_("set_backTest",96,45,0c,da),
	HX_("set_backPass",15,62,64,d7),
	HX_("set_backSTfail",23,49,08,71),
	HX_("set_backDPfail",8e,8d,13,24),
	HX_("loadOpBits",8d,5b,99,bf),
	HX_("loadMaskBits",58,3a,60,98),
	::String(null()) };

static void Stencil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stencil_obj::readMask_bits,"readMask_bits");
	HX_MARK_MEMBER_NAME(Stencil_obj::readMask_offset,"readMask_offset");
	HX_MARK_MEMBER_NAME(Stencil_obj::readMask_mask,"readMask_mask");
	HX_MARK_MEMBER_NAME(Stencil_obj::writeMask_bits,"writeMask_bits");
	HX_MARK_MEMBER_NAME(Stencil_obj::writeMask_offset,"writeMask_offset");
	HX_MARK_MEMBER_NAME(Stencil_obj::writeMask_mask,"writeMask_mask");
	HX_MARK_MEMBER_NAME(Stencil_obj::reference_bits,"reference_bits");
	HX_MARK_MEMBER_NAME(Stencil_obj::reference_offset,"reference_offset");
	HX_MARK_MEMBER_NAME(Stencil_obj::reference_mask,"reference_mask");
	HX_MARK_MEMBER_NAME(Stencil_obj::frontTest_bits,"frontTest_bits");
	HX_MARK_MEMBER_NAME(Stencil_obj::frontTest_offset,"frontTest_offset");
	HX_MARK_MEMBER_NAME(Stencil_obj::frontTest_mask,"frontTest_mask");
	HX_MARK_MEMBER_NAME(Stencil_obj::frontPass_bits,"frontPass_bits");
	HX_MARK_MEMBER_NAME(Stencil_obj::frontPass_offset,"frontPass_offset");
	HX_MARK_MEMBER_NAME(Stencil_obj::frontPass_mask,"frontPass_mask");
	HX_MARK_MEMBER_NAME(Stencil_obj::frontSTfail_bits,"frontSTfail_bits");
	HX_MARK_MEMBER_NAME(Stencil_obj::frontSTfail_offset,"frontSTfail_offset");
	HX_MARK_MEMBER_NAME(Stencil_obj::frontSTfail_mask,"frontSTfail_mask");
	HX_MARK_MEMBER_NAME(Stencil_obj::frontDPfail_bits,"frontDPfail_bits");
	HX_MARK_MEMBER_NAME(Stencil_obj::frontDPfail_offset,"frontDPfail_offset");
	HX_MARK_MEMBER_NAME(Stencil_obj::frontDPfail_mask,"frontDPfail_mask");
	HX_MARK_MEMBER_NAME(Stencil_obj::backTest_bits,"backTest_bits");
	HX_MARK_MEMBER_NAME(Stencil_obj::backTest_offset,"backTest_offset");
	HX_MARK_MEMBER_NAME(Stencil_obj::backTest_mask,"backTest_mask");
	HX_MARK_MEMBER_NAME(Stencil_obj::backPass_bits,"backPass_bits");
	HX_MARK_MEMBER_NAME(Stencil_obj::backPass_offset,"backPass_offset");
	HX_MARK_MEMBER_NAME(Stencil_obj::backPass_mask,"backPass_mask");
	HX_MARK_MEMBER_NAME(Stencil_obj::backSTfail_bits,"backSTfail_bits");
	HX_MARK_MEMBER_NAME(Stencil_obj::backSTfail_offset,"backSTfail_offset");
	HX_MARK_MEMBER_NAME(Stencil_obj::backSTfail_mask,"backSTfail_mask");
	HX_MARK_MEMBER_NAME(Stencil_obj::backDPfail_bits,"backDPfail_bits");
	HX_MARK_MEMBER_NAME(Stencil_obj::backDPfail_offset,"backDPfail_offset");
	HX_MARK_MEMBER_NAME(Stencil_obj::backDPfail_mask,"backDPfail_mask");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Stencil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stencil_obj::readMask_bits,"readMask_bits");
	HX_VISIT_MEMBER_NAME(Stencil_obj::readMask_offset,"readMask_offset");
	HX_VISIT_MEMBER_NAME(Stencil_obj::readMask_mask,"readMask_mask");
	HX_VISIT_MEMBER_NAME(Stencil_obj::writeMask_bits,"writeMask_bits");
	HX_VISIT_MEMBER_NAME(Stencil_obj::writeMask_offset,"writeMask_offset");
	HX_VISIT_MEMBER_NAME(Stencil_obj::writeMask_mask,"writeMask_mask");
	HX_VISIT_MEMBER_NAME(Stencil_obj::reference_bits,"reference_bits");
	HX_VISIT_MEMBER_NAME(Stencil_obj::reference_offset,"reference_offset");
	HX_VISIT_MEMBER_NAME(Stencil_obj::reference_mask,"reference_mask");
	HX_VISIT_MEMBER_NAME(Stencil_obj::frontTest_bits,"frontTest_bits");
	HX_VISIT_MEMBER_NAME(Stencil_obj::frontTest_offset,"frontTest_offset");
	HX_VISIT_MEMBER_NAME(Stencil_obj::frontTest_mask,"frontTest_mask");
	HX_VISIT_MEMBER_NAME(Stencil_obj::frontPass_bits,"frontPass_bits");
	HX_VISIT_MEMBER_NAME(Stencil_obj::frontPass_offset,"frontPass_offset");
	HX_VISIT_MEMBER_NAME(Stencil_obj::frontPass_mask,"frontPass_mask");
	HX_VISIT_MEMBER_NAME(Stencil_obj::frontSTfail_bits,"frontSTfail_bits");
	HX_VISIT_MEMBER_NAME(Stencil_obj::frontSTfail_offset,"frontSTfail_offset");
	HX_VISIT_MEMBER_NAME(Stencil_obj::frontSTfail_mask,"frontSTfail_mask");
	HX_VISIT_MEMBER_NAME(Stencil_obj::frontDPfail_bits,"frontDPfail_bits");
	HX_VISIT_MEMBER_NAME(Stencil_obj::frontDPfail_offset,"frontDPfail_offset");
	HX_VISIT_MEMBER_NAME(Stencil_obj::frontDPfail_mask,"frontDPfail_mask");
	HX_VISIT_MEMBER_NAME(Stencil_obj::backTest_bits,"backTest_bits");
	HX_VISIT_MEMBER_NAME(Stencil_obj::backTest_offset,"backTest_offset");
	HX_VISIT_MEMBER_NAME(Stencil_obj::backTest_mask,"backTest_mask");
	HX_VISIT_MEMBER_NAME(Stencil_obj::backPass_bits,"backPass_bits");
	HX_VISIT_MEMBER_NAME(Stencil_obj::backPass_offset,"backPass_offset");
	HX_VISIT_MEMBER_NAME(Stencil_obj::backPass_mask,"backPass_mask");
	HX_VISIT_MEMBER_NAME(Stencil_obj::backSTfail_bits,"backSTfail_bits");
	HX_VISIT_MEMBER_NAME(Stencil_obj::backSTfail_offset,"backSTfail_offset");
	HX_VISIT_MEMBER_NAME(Stencil_obj::backSTfail_mask,"backSTfail_mask");
	HX_VISIT_MEMBER_NAME(Stencil_obj::backDPfail_bits,"backDPfail_bits");
	HX_VISIT_MEMBER_NAME(Stencil_obj::backDPfail_offset,"backDPfail_offset");
	HX_VISIT_MEMBER_NAME(Stencil_obj::backDPfail_mask,"backDPfail_mask");
};

#endif

::hx::Class Stencil_obj::__mClass;

static ::String Stencil_obj_sStaticFields[] = {
	HX_("getReadMask",18,de,41,96),
	HX_("readMask_bits",43,78,d1,7a),
	HX_("readMask_offset",10,9e,81,5b),
	HX_("readMask_mask",29,be,10,82),
	HX_("getWriteMask",f5,d1,60,60),
	HX_("writeMask_bits",9a,5d,2d,51),
	HX_("writeMask_offset",27,c7,a2,6c),
	HX_("writeMask_mask",80,a3,6c,58),
	HX_("getReference",55,a4,1b,6a),
	HX_("reference_bits",3a,ef,3b,19),
	HX_("reference_offset",c7,00,b1,42),
	HX_("reference_mask",20,35,7b,20),
	HX_("getFrontTest",25,b2,5b,99),
	HX_("frontTest_bits",6a,cf,e7,6f),
	HX_("frontTest_offset",f7,4c,39,84),
	HX_("frontTest_mask",50,15,27,77),
	HX_("getFrontPass",a4,ce,b3,96),
	HX_("frontPass_bits",8b,06,fd,d8),
	HX_("frontPass_offset",58,4e,63,46),
	HX_("frontPass_mask",71,4c,3c,e0),
	HX_("getFrontSTfail",72,37,77,34),
	HX_("frontSTfail_bits",7d,39,b2,ab),
	HX_("frontSTfail_offset",ca,a1,00,17),
	HX_("frontSTfail_mask",63,7f,f1,b2),
	HX_("getFrontDPfail",dd,7b,82,e7),
	HX_("frontDPfail_bits",32,11,80,1d),
	HX_("frontDPfail_offset",bf,90,bb,f9),
	HX_("frontDPfail_mask",18,57,bf,24),
	HX_("getBackTest",cf,30,ed,35),
	HX_("backTest_bits",2c,ee,2b,9e),
	HX_("backTest_offset",39,20,d4,e2),
	HX_("backTest_mask",12,34,6b,a5),
	HX_("getBackPass",4e,4d,45,33),
	HX_("backPass_bits",4d,25,41,07),
	HX_("backPass_offset",9a,21,fe,a4),
	HX_("backPass_mask",33,6b,80,0e),
	HX_("getBackSTfail",9c,34,65,37),
	HX_("backSTfail_bits",bf,0c,4d,0a),
	HX_("backSTfail_offset",8c,49,68,70),
	HX_("backSTfail_mask",a5,52,8c,11),
	HX_("getBackDPfail",07,79,70,ea),
	HX_("backDPfail_bits",74,e4,1a,7c),
	HX_("backDPfail_offset",81,38,23,53),
	HX_("backDPfail_mask",5a,2a,5a,83),
	::String(null())
};

void Stencil_obj::__register()
{
	Stencil_obj _hx_dummy;
	Stencil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.mat.Stencil",59,4d,0b,43);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Stencil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Stencil_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Stencil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Stencil_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Stencil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Stencil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stencil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stencil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Stencil_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_108_boot)
HXDLIN( 108)		readMask_bits = 8;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_114_boot)
HXDLIN( 114)		readMask_offset = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_120_boot)
HXDLIN( 120)		readMask_mask = 255;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_108_boot)
HXDLIN( 108)		writeMask_bits = 8;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_114_boot)
HXDLIN( 114)		writeMask_offset = 8;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_120_boot)
HXDLIN( 120)		writeMask_mask = 65280;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_108_boot)
HXDLIN( 108)		reference_bits = 8;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_114_boot)
HXDLIN( 114)		reference_offset = 16;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_120_boot)
HXDLIN( 120)		reference_mask = 16711680;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_108_boot)
HXDLIN( 108)		frontTest_bits = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_114_boot)
HXDLIN( 114)		frontTest_offset = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_120_boot)
HXDLIN( 120)		frontTest_mask = 7;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_108_boot)
HXDLIN( 108)		frontPass_bits = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_114_boot)
HXDLIN( 114)		frontPass_offset = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_120_boot)
HXDLIN( 120)		frontPass_mask = 56;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_108_boot)
HXDLIN( 108)		frontSTfail_bits = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_114_boot)
HXDLIN( 114)		frontSTfail_offset = 6;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_120_boot)
HXDLIN( 120)		frontSTfail_mask = 448;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_108_boot)
HXDLIN( 108)		frontDPfail_bits = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_114_boot)
HXDLIN( 114)		frontDPfail_offset = 9;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_120_boot)
HXDLIN( 120)		frontDPfail_mask = 3584;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_108_boot)
HXDLIN( 108)		backTest_bits = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_114_boot)
HXDLIN( 114)		backTest_offset = 12;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_120_boot)
HXDLIN( 120)		backTest_mask = 28672;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_108_boot)
HXDLIN( 108)		backPass_bits = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_114_boot)
HXDLIN( 114)		backPass_offset = 15;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_120_boot)
HXDLIN( 120)		backPass_mask = 229376;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_108_boot)
HXDLIN( 108)		backSTfail_bits = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_114_boot)
HXDLIN( 114)		backSTfail_offset = 18;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_120_boot)
HXDLIN( 120)		backSTfail_mask = 1835008;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_108_boot)
HXDLIN( 108)		backDPfail_bits = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_114_boot)
HXDLIN( 114)		backDPfail_offset = 21;
            	}
{
            	HX_STACKFRAME(&_hx_pos_68a3a05e53f9813c_120_boot)
HXDLIN( 120)		backDPfail_mask = 14680064;
            	}
}

} // end namespace h3d
} // end namespace mat
