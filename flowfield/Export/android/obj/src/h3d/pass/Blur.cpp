#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h2d_BlendMode
#include <h2d/BlendMode.h>
#endif
#ifndef INCLUDED_h3d_Engine
#include <h3d/Engine.h>
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_impl_TextureCache
#include <h3d/impl/TextureCache.h>
#endif
#ifndef INCLUDED_h3d_mat_DepthBuffer
#include <h3d/mat/DepthBuffer.h>
#endif
#ifndef INCLUDED_h3d_mat_Pass
#include <h3d/mat/Pass.h>
#endif
#ifndef INCLUDED_h3d_mat_Texture
#include <h3d/mat/Texture.h>
#endif
#ifndef INCLUDED_h3d_mat_TextureFlags
#include <h3d/mat/TextureFlags.h>
#endif
#ifndef INCLUDED_h3d_pass_Blur
#include <h3d/pass/Blur.h>
#endif
#ifndef INCLUDED_h3d_pass_Copy
#include <h3d/pass/Copy.h>
#endif
#ifndef INCLUDED_h3d_pass_ScreenFx
#include <h3d/pass/ScreenFx.h>
#endif
#ifndef INCLUDED_h3d_shader_Blur
#include <h3d/shader/Blur.h>
#endif
#ifndef INCLUDED_h3d_shader_ScreenShader
#include <h3d/shader/ScreenShader.h>
#endif
#ifndef INCLUDED_hxd_PixelFormat
#include <hxd/PixelFormat.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
#ifndef INCLUDED_hxsl_Output
#include <hxsl/Output.h>
#endif
#ifndef INCLUDED_hxsl_Shader
#include <hxsl/Shader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cabe723226692012_4_new,"h3d.pass.Blur","new",0x7dcdba81,"h3d.pass.Blur.new","h3d/pass/Blur.hx",4,0x405fbfaf)
static const Float _hx_array_data_9ae4660f_1[] = {
	(Float)0,(Float)0,(Float)-1,(Float)0,(Float)0,(Float)-1,(Float)0,(Float)0,(Float)1,(Float)0,(Float)0,(Float)0,
};
static const Float _hx_array_data_9ae4660f_2[] = {
	(Float)0,(Float)0,(Float)1,(Float)0,(Float)0,(Float)-1,(Float)0,(Float)0,(Float)-1,(Float)0,(Float)0,(Float)0,
};
static const Float _hx_array_data_9ae4660f_3[] = {
	(Float)1,(Float)0,(Float)0,(Float)0,(Float)0,(Float)0,(Float)1,(Float)0,(Float)0,(Float)1,(Float)0,(Float)0,
};
static const Float _hx_array_data_9ae4660f_4[] = {
	(Float)1,(Float)0,(Float)0,(Float)0,(Float)0,(Float)0,(Float)-1,(Float)0,(Float)0,(Float)-1,(Float)0,(Float)0,
};
static const Float _hx_array_data_9ae4660f_5[] = {
	(Float)1,(Float)0,(Float)0,(Float)0,(Float)0,(Float)-1,(Float)0,(Float)0,(Float)0,(Float)1,(Float)0,(Float)0,
};
static const Float _hx_array_data_9ae4660f_6[] = {
	(Float)-1,(Float)0,(Float)0,(Float)0,(Float)0,(Float)-1,(Float)0,(Float)0,(Float)0,(Float)0,(Float)-1,(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_cabe723226692012_44_set_radius,"h3d.pass.Blur","set_radius",0x3473ea8e,"h3d.pass.Blur.set_radius","h3d/pass/Blur.hx",44,0x405fbfaf)
HX_LOCAL_STACK_FRAME(_hx_pos_cabe723226692012_51_set_quality,"h3d.pass.Blur","set_quality",0xce45df03,"h3d.pass.Blur.set_quality","h3d/pass/Blur.hx",51,0x405fbfaf)
HX_LOCAL_STACK_FRAME(_hx_pos_cabe723226692012_58_set_gain,"h3d.pass.Blur","set_gain",0x3293c3bb,"h3d.pass.Blur.set_gain","h3d/pass/Blur.hx",58,0x405fbfaf)
HX_LOCAL_STACK_FRAME(_hx_pos_cabe723226692012_65_set_linear,"h3d.pass.Blur","set_linear",0x701d6c21,"h3d.pass.Blur.set_linear","h3d/pass/Blur.hx",65,0x405fbfaf)
HX_LOCAL_STACK_FRAME(_hx_pos_cabe723226692012_72_gauss,"h3d.pass.Blur","gauss",0xce1e12dc,"h3d.pass.Blur.gauss","h3d/pass/Blur.hx",72,0x405fbfaf)
HX_LOCAL_STACK_FRAME(_hx_pos_cabe723226692012_79_calcValues,"h3d.pass.Blur","calcValues",0x941dba56,"h3d.pass.Blur.calcValues","h3d/pass/Blur.hx",79,0x405fbfaf)
HX_LOCAL_STACK_FRAME(_hx_pos_cabe723226692012_121_getKernelSize,"h3d.pass.Blur","getKernelSize",0x6d6ddeb5,"h3d.pass.Blur.getKernelSize","h3d/pass/Blur.hx",121,0x405fbfaf)
HX_LOCAL_STACK_FRAME(_hx_pos_cabe723226692012_126_apply,"h3d.pass.Blur","apply",0x639cf9cf,"h3d.pass.Blur.apply","h3d/pass/Blur.hx",126,0x405fbfaf)
HX_LOCAL_STACK_FRAME(_hx_pos_cabe723226692012_4_boot,"h3d.pass.Blur","boot",0x8e4e76f1,"h3d.pass.Blur.boot","h3d/pass/Blur.hx",4,0x405fbfaf)
namespace h3d{
namespace pass{

void Blur_obj::__construct(::hx::Null< Float >  __o_radius,::hx::Null< Float >  __o_gain,::hx::Null< Float >  __o_linear,::hx::Null< Float >  __o_quality){
            		Float radius = __o_radius.Default(((Float)1.));
            		Float gain = __o_gain.Default(((Float)1.));
            		Float linear = __o_linear.Default(((Float)0.));
            		Float quality = __o_quality.Default(((Float)1.));
            	HX_GC_STACKFRAME(&_hx_pos_cabe723226692012_4_new)
HXLINE(   6)		 ::h3d::Matrix _hx_tmp = ::h3d::Matrix_obj::L(::Array_obj< Float >::fromData( _hx_array_data_9ae4660f_1,12));
HXLINE(   7)		 ::h3d::Matrix _hx_tmp1 = ::h3d::Matrix_obj::L(::Array_obj< Float >::fromData( _hx_array_data_9ae4660f_2,12));
HXLINE(   8)		 ::h3d::Matrix _hx_tmp2 = ::h3d::Matrix_obj::L(::Array_obj< Float >::fromData( _hx_array_data_9ae4660f_3,12));
HXLINE(   9)		 ::h3d::Matrix _hx_tmp3 = ::h3d::Matrix_obj::L(::Array_obj< Float >::fromData( _hx_array_data_9ae4660f_4,12));
HXLINE(  10)		 ::h3d::Matrix _hx_tmp4 = ::h3d::Matrix_obj::L(::Array_obj< Float >::fromData( _hx_array_data_9ae4660f_5,12));
HXLINE(   6)		this->cubeDir = ::Array_obj< ::Dynamic>::__new(6)->init(0,_hx_tmp)->init(1,_hx_tmp1)->init(2,_hx_tmp2)->init(3,_hx_tmp3)->init(4,_hx_tmp4)->init(5,::h3d::Matrix_obj::L(::Array_obj< Float >::fromData( _hx_array_data_9ae4660f_6,12)));
HXLINE(  37)		super::__construct( ::h3d::shader::Blur_obj::__alloc( HX_CTX ),null());
HXLINE(  38)		this->set_radius(radius);
HXLINE(  39)		this->set_quality(quality);
HXLINE(  40)		this->set_gain(gain);
HXLINE(  41)		this->set_linear(linear);
            	}

Dynamic Blur_obj::__CreateEmpty() { return new Blur_obj; }

void *Blur_obj::_hx_vtable = 0;

Dynamic Blur_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Blur_obj > _hx_result = new Blur_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Blur_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2eb55725) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2eb55725;
	} else {
		return inClassId==(int)0x35a83008;
	}
}

Float Blur_obj::set_radius(Float r){
            	HX_STACKFRAME(&_hx_pos_cabe723226692012_44_set_radius)
HXLINE(  45)		if ((this->radius == r)) {
HXLINE(  46)			return r;
            		}
HXLINE(  47)		this->values = null();
HXLINE(  48)		return (this->radius = r);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Blur_obj,set_radius,return )

Float Blur_obj::set_quality(Float q){
            	HX_STACKFRAME(&_hx_pos_cabe723226692012_51_set_quality)
HXLINE(  52)		if ((this->quality == q)) {
HXLINE(  53)			return q;
            		}
HXLINE(  54)		this->values = null();
HXLINE(  55)		return (this->quality = q);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Blur_obj,set_quality,return )

Float Blur_obj::set_gain(Float s){
            	HX_STACKFRAME(&_hx_pos_cabe723226692012_58_set_gain)
HXLINE(  59)		if ((this->gain == s)) {
HXLINE(  60)			return s;
            		}
HXLINE(  61)		this->values = null();
HXLINE(  62)		return (this->gain = s);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Blur_obj,set_gain,return )

Float Blur_obj::set_linear(Float b){
            	HX_STACKFRAME(&_hx_pos_cabe723226692012_65_set_linear)
HXLINE(  66)		if ((this->linear == b)) {
HXLINE(  67)			return b;
            		}
HXLINE(  68)		this->values = null();
HXLINE(  69)		return (this->linear = b);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Blur_obj,set_linear,return )

Float Blur_obj::gauss(Float x,Float s){
            	HX_STACKFRAME(&_hx_pos_cabe723226692012_72_gauss)
HXLINE(  73)		if ((s <= 0)) {
HXLINE(  73)			if ((x == 0)) {
HXLINE(  73)				return ( (Float)(1) );
            			}
            			else {
HXLINE(  73)				return ( (Float)(0) );
            			}
            		}
HXLINE(  74)		Float sq = (s * s);
HXLINE(  75)		Float p = ::Math_obj::pow(((Float)2.718281828459),(-((x * x)) / (( (Float)(2) ) * sq)));
HXLINE(  76)		return (p / ::Math_obj::sqrt(((( (Float)(2) ) * ::Math_obj::PI) * sq)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Blur_obj,gauss,return )

void Blur_obj::calcValues(){
            	HX_STACKFRAME(&_hx_pos_cabe723226692012_79_calcValues)
HXLINE(  80)		this->values = ::Array_obj< Float >::__new(0);
HXLINE(  81)		this->offsets = ::Array_obj< Float >::__new(0);
HXLINE(  83)		Float tot = ((Float)0.);
HXLINE(  84)		Float f = this->quality;
HXDLIN(  84)		Float min = ((Float)0.);
HXDLIN(  84)		Float max = ((Float)1.);
HXDLIN(  84)		Float qadj;
HXDLIN(  84)		if ((f < min)) {
HXLINE(  84)			qadj = min;
            		}
            		else {
HXLINE(  84)			if ((f > max)) {
HXLINE(  84)				qadj = max;
            			}
            			else {
HXLINE(  84)				qadj = f;
            			}
            		}
HXDLIN(  84)		Float qadj1 = ((qadj * ((Float)0.7)) + ((Float)0.3));
HXLINE(  85)		int width;
HXDLIN(  85)		if ((this->radius > 0)) {
HXLINE(  85)			Float a = (this->radius - ( (Float)(1) ));
HXDLIN(  85)			Float width1;
HXDLIN(  85)			if ((a < 1)) {
HXLINE(  85)				width1 = ( (Float)(1) );
            			}
            			else {
HXLINE(  85)				width1 = a;
            			}
HXDLIN(  85)			width = ::Math_obj::ceil(((width1 * qadj1) / ( (Float)(2) )));
            		}
            		else {
HXLINE(  85)			width = 0;
            		}
HXLINE(  86)		Float sigma = ::Math_obj::sqrt(this->radius);
HXLINE(  87)		{
HXLINE(  87)			int _g = 0;
HXDLIN(  87)			int _g1 = (width + 1);
HXDLIN(  87)			while((_g < _g1)){
HXLINE(  87)				_g = (_g + 1);
HXDLIN(  87)				int i = (_g - 1);
HXLINE(  88)				int i1 = (i * 2);
HXLINE(  89)				int i2;
HXDLIN(  89)				if ((i == 0)) {
HXLINE(  89)					i2 = 0;
            				}
            				else {
HXLINE(  89)					i2 = ((i * 2) - 1);
            				}
HXLINE(  90)				Float g1 = this->gauss(( (Float)(i1) ),sigma);
HXLINE(  91)				Float g2 = this->gauss(( (Float)(i2) ),sigma);
HXLINE(  92)				Float g = (g1 + g2);
HXLINE(  93)				this->values[i] = g;
HXLINE(  94)				Float _hx_tmp;
HXDLIN(  94)				if ((i == 0)) {
HXLINE(  94)					_hx_tmp = ( (Float)(0) );
            				}
            				else {
HXLINE(  94)					_hx_tmp = (((g1 * ( (Float)(i1) )) + (g2 * ( (Float)(i2) ))) / ((g * ( (Float)(i) )) * ::Math_obj::sqrt(qadj1)));
            				}
HXDLIN(  94)				this->offsets[i] = _hx_tmp;
HXLINE(  95)				tot = (tot + g);
HXLINE(  96)				if ((i > 0)) {
HXLINE(  96)					tot = (tot + g);
            				}
            			}
            		}
HXLINE( 100)		Float minVal = (this->values->__get(0) * (((Float)0.01) / qadj1));
HXLINE( 101)		while((this->values->length > 2)){
HXLINE( 102)			Float last = this->values->__get((this->values->length - 1));
HXLINE( 103)			if ((last > minVal)) {
HXLINE( 103)				goto _hx_goto_13;
            			}
HXLINE( 104)			tot = (tot - (last * ( (Float)(2) )));
HXLINE( 105)			this->values->pop();
            		}
            		_hx_goto_13:;
HXLINE( 108)		tot = (tot / this->gain);
HXLINE( 109)		{
HXLINE( 109)			int _g2 = 0;
HXDLIN( 109)			int _g3 = this->values->length;
HXDLIN( 109)			while((_g2 < _g3)){
HXLINE( 109)				_g2 = (_g2 + 1);
HXDLIN( 109)				int i = (_g2 - 1);
HXLINE( 110)				::Array< Float > base = this->values;
HXDLIN( 110)				int i1 = i;
HXDLIN( 110)				base[i1] = (base->__get(i1) / tot);
            			}
            		}
HXLINE( 112)		if ((this->linear > 0)) {
HXLINE( 113)			Float m = (this->gain / ( (Float)(((this->values->length * 2) - 1)) ));
HXLINE( 114)			{
HXLINE( 114)				int _g = 0;
HXDLIN( 114)				int _g1 = this->values->length;
HXDLIN( 114)				while((_g < _g1)){
HXLINE( 114)					_g = (_g + 1);
HXDLIN( 114)					int i = (_g - 1);
HXLINE( 115)					Float a = this->values->__get(i);
HXDLIN( 115)					this->values[i] = (a + (this->linear * (m - a)));
HXLINE( 116)					Float a1 = this->offsets->__get(i);
HXDLIN( 116)					Float _hx_tmp;
HXDLIN( 116)					if ((i == 0)) {
HXLINE( 116)						_hx_tmp = ( (Float)(0) );
            					}
            					else {
HXLINE( 116)						_hx_tmp = ((( (Float)((i * 2)) ) - ((Float)0.5)) / (( (Float)(i) ) * qadj1));
            					}
HXDLIN( 116)					this->offsets[i] = (a1 + (this->linear * (_hx_tmp - a1)));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Blur_obj,calcValues,(void))

int Blur_obj::getKernelSize(){
            	HX_STACKFRAME(&_hx_pos_cabe723226692012_121_getKernelSize)
HXLINE( 122)		if (::hx::IsNull( this->values )) {
HXLINE( 122)			this->calcValues();
            		}
HXLINE( 123)		if ((this->radius <= 0)) {
HXLINE( 123)			return 0;
            		}
            		else {
HXLINE( 123)			return ((this->values->length * 2) - 1);
            		}
HXDLIN( 123)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Blur_obj,getKernelSize,return )

void Blur_obj::apply( ::h3d::impl::RenderContext ctx, ::h3d::mat::Texture src, ::h3d::mat::Texture output){
            	HX_STACKFRAME(&_hx_pos_cabe723226692012_126_apply)
HXLINE( 128)		bool _hx_tmp;
HXDLIN( 128)		if ((this->radius <= 0)) {
HXLINE( 128)			_hx_tmp = ::hx::IsNull( ( ( ::h3d::shader::Blur)(this->shader) )->fixedColor__ );
            		}
            		else {
HXLINE( 128)			_hx_tmp = false;
            		}
HXDLIN( 128)		if (_hx_tmp) {
HXLINE( 129)			if (::hx::IsNotNull( output )) {
HXLINE( 129)				::h3d::pass::Copy_obj::run(src,output,null(),null(),null());
            			}
HXLINE( 130)			return;
            		}
HXLINE( 133)		if (::hx::IsNull( output )) {
HXLINE( 133)			output = src;
            		}
HXLINE( 134)		if (::hx::IsNull( this->values )) {
HXLINE( 134)			this->calcValues();
            		}
HXLINE( 136)		int this1 = src->flags;
HXDLIN( 136)		bool isCube = ((this1 & (1 << _hx_getEnumValueIndex(::h3d::mat::TextureFlags_obj::Cube_dyn()))) != 0);
HXLINE( 137)		int faceCount;
HXDLIN( 137)		if (isCube) {
HXLINE( 137)			faceCount = 6;
            		}
            		else {
HXLINE( 137)			faceCount = 1;
            		}
HXLINE( 138)		 ::h3d::mat::Texture tmp = ctx->textures->allocTarget((src->name + HX_("BlurTmp",50,e4,8f,90)),src->width,src->height,false,src->format,isCube);
HXLINE( 140)		{
HXLINE( 140)			 ::h3d::shader::Blur _this = ( ( ::h3d::shader::Blur)(this->shader) );
HXDLIN( 140)			_this->constModified = true;
HXDLIN( 140)			_this->Quality__ = this->values->length;
            		}
HXLINE( 141)		( ( ::h3d::shader::Blur)(this->shader) )->values__ = this->values;
HXLINE( 142)		( ( ::h3d::shader::Blur)(this->shader) )->offsets__ = this->offsets;
HXLINE( 144)		if (isCube) {
HXLINE( 145)			( ( ::h3d::shader::Blur)(this->shader) )->cubeTexture__ = src;
HXLINE( 146)			{
HXLINE( 146)				 ::h3d::shader::Blur _this = ( ( ::h3d::shader::Blur)(this->shader) );
HXDLIN( 146)				_this->constModified = true;
HXDLIN( 146)				_this->isCube__ = true;
            			}
            		}
            		else {
HXLINE( 149)			( ( ::h3d::shader::Blur)(this->shader) )->texture__ = src;
HXLINE( 150)			{
HXLINE( 150)				 ::h3d::shader::Blur _this = ( ( ::h3d::shader::Blur)(this->shader) );
HXDLIN( 150)				_this->constModified = true;
HXDLIN( 150)				_this->isCube__ = false;
            			}
            		}
HXLINE( 153)		{
HXLINE( 153)			 ::h3d::Vector _this1 = ( ( ::h3d::shader::Blur)(this->shader) )->pixel__;
HXDLIN( 153)			_this1->x = (( (Float)(1) ) / ( (Float)(src->width) ));
HXDLIN( 153)			_this1->y = ( (Float)(0) );
HXDLIN( 153)			_this1->z = ((Float)0.);
HXDLIN( 153)			_this1->w = ((Float)1.);
            		}
HXLINE( 154)		{
HXLINE( 154)			int _g = 0;
HXDLIN( 154)			int _g1 = faceCount;
HXDLIN( 154)			while((_g < _g1)){
HXLINE( 154)				_g = (_g + 1);
HXDLIN( 154)				int i = (_g - 1);
HXLINE( 155)				this->get_engine()->pushTarget(tmp,i,null());
HXLINE( 156)				if (isCube) {
HXLINE( 156)					( ( ::h3d::shader::Blur)(this->shader) )->cubeDir__ = this->cubeDir->__get(i).StaticCast<  ::h3d::Matrix >();
            				}
HXLINE( 157)				this->render();
HXLINE( 158)				this->get_engine()->popTarget();
            			}
            		}
HXLINE( 161)		if (isCube) {
HXLINE( 162)			( ( ::h3d::shader::Blur)(this->shader) )->cubeTexture__ = tmp;
            		}
            		else {
HXLINE( 164)			( ( ::h3d::shader::Blur)(this->shader) )->texture__ = tmp;
            		}
HXLINE( 166)		{
HXLINE( 166)			 ::h3d::Vector _this2 = ( ( ::h3d::shader::Blur)(this->shader) )->pixel__;
HXDLIN( 166)			_this2->x = ( (Float)(0) );
HXDLIN( 166)			_this2->y = (( (Float)(1) ) / ( (Float)(src->height) ));
HXDLIN( 166)			_this2->z = ((Float)0.);
HXDLIN( 166)			_this2->w = ((Float)1.);
            		}
HXLINE( 167)		 ::h3d::mat::DepthBuffer outDepth = output->depthBuffer;
HXLINE( 168)		output->depthBuffer = null();
HXLINE( 169)		{
HXLINE( 169)			int _g2 = 0;
HXDLIN( 169)			int _g3 = faceCount;
HXDLIN( 169)			while((_g2 < _g3)){
HXLINE( 169)				_g2 = (_g2 + 1);
HXDLIN( 169)				int i = (_g2 - 1);
HXLINE( 170)				this->get_engine()->pushTarget(output,i,null());
HXLINE( 171)				if (isCube) {
HXLINE( 171)					( ( ::h3d::shader::Blur)(this->shader) )->cubeDir__ = this->cubeDir->__get(i).StaticCast<  ::h3d::Matrix >();
            				}
HXLINE( 172)				this->render();
HXLINE( 173)				this->get_engine()->popTarget();
            			}
            		}
HXLINE( 175)		output->depthBuffer = outDepth;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Blur_obj,apply,(void))


::hx::ObjectPtr< Blur_obj > Blur_obj::__new(::hx::Null< Float >  __o_radius,::hx::Null< Float >  __o_gain,::hx::Null< Float >  __o_linear,::hx::Null< Float >  __o_quality) {
	::hx::ObjectPtr< Blur_obj > __this = new Blur_obj();
	__this->__construct(__o_radius,__o_gain,__o_linear,__o_quality);
	return __this;
}

::hx::ObjectPtr< Blur_obj > Blur_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_radius,::hx::Null< Float >  __o_gain,::hx::Null< Float >  __o_linear,::hx::Null< Float >  __o_quality) {
	Blur_obj *__this = (Blur_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Blur_obj), true, "h3d.pass.Blur"));
	*(void **)__this = Blur_obj::_hx_vtable;
	__this->__construct(__o_radius,__o_gain,__o_linear,__o_quality);
	return __this;
}

Blur_obj::Blur_obj()
{
}

void Blur_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Blur);
	HX_MARK_MEMBER_NAME(cubeDir,"cubeDir");
	HX_MARK_MEMBER_NAME(radius,"radius");
	HX_MARK_MEMBER_NAME(gain,"gain");
	HX_MARK_MEMBER_NAME(linear,"linear");
	HX_MARK_MEMBER_NAME(quality,"quality");
	HX_MARK_MEMBER_NAME(values,"values");
	HX_MARK_MEMBER_NAME(offsets,"offsets");
	 ::h3d::pass::ScreenFx_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Blur_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cubeDir,"cubeDir");
	HX_VISIT_MEMBER_NAME(radius,"radius");
	HX_VISIT_MEMBER_NAME(gain,"gain");
	HX_VISIT_MEMBER_NAME(linear,"linear");
	HX_VISIT_MEMBER_NAME(quality,"quality");
	HX_VISIT_MEMBER_NAME(values,"values");
	HX_VISIT_MEMBER_NAME(offsets,"offsets");
	 ::h3d::pass::ScreenFx_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Blur_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"gain") ) { return ::hx::Val( gain ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"gauss") ) { return ::hx::Val( gauss_dyn() ); }
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { return ::hx::Val( radius ); }
		if (HX_FIELD_EQ(inName,"linear") ) { return ::hx::Val( linear ); }
		if (HX_FIELD_EQ(inName,"values") ) { return ::hx::Val( values ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cubeDir") ) { return ::hx::Val( cubeDir ); }
		if (HX_FIELD_EQ(inName,"quality") ) { return ::hx::Val( quality ); }
		if (HX_FIELD_EQ(inName,"offsets") ) { return ::hx::Val( offsets ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_gain") ) { return ::hx::Val( set_gain_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_radius") ) { return ::hx::Val( set_radius_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_linear") ) { return ::hx::Val( set_linear_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcValues") ) { return ::hx::Val( calcValues_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_quality") ) { return ::hx::Val( set_quality_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getKernelSize") ) { return ::hx::Val( getKernelSize_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Blur_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"gain") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_gain(inValue.Cast< Float >()) );gain=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_radius(inValue.Cast< Float >()) );radius=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"linear") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_linear(inValue.Cast< Float >()) );linear=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"values") ) { values=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cubeDir") ) { cubeDir=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"quality") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_quality(inValue.Cast< Float >()) );quality=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsets") ) { offsets=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Blur_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("cubeDir",58,7f,c9,8c));
	outFields->push(HX_("radius",52,d0,f6,b0));
	outFields->push(HX_("gain",7f,f0,5e,44));
	outFields->push(HX_("linear",e5,51,a0,ec));
	outFields->push(HX_("quality",bf,04,4c,44));
	outFields->push(HX_("values",e2,03,b7,4f));
	outFields->push(HX_("offsets",80,09,65,d7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Blur_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Blur_obj,cubeDir),HX_("cubeDir",58,7f,c9,8c)},
	{::hx::fsFloat,(int)offsetof(Blur_obj,radius),HX_("radius",52,d0,f6,b0)},
	{::hx::fsFloat,(int)offsetof(Blur_obj,gain),HX_("gain",7f,f0,5e,44)},
	{::hx::fsFloat,(int)offsetof(Blur_obj,linear),HX_("linear",e5,51,a0,ec)},
	{::hx::fsFloat,(int)offsetof(Blur_obj,quality),HX_("quality",bf,04,4c,44)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Blur_obj,values),HX_("values",e2,03,b7,4f)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Blur_obj,offsets),HX_("offsets",80,09,65,d7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Blur_obj_sStaticStorageInfo = 0;
#endif

static ::String Blur_obj_sMemberFields[] = {
	HX_("cubeDir",58,7f,c9,8c),
	HX_("radius",52,d0,f6,b0),
	HX_("gain",7f,f0,5e,44),
	HX_("linear",e5,51,a0,ec),
	HX_("quality",bf,04,4c,44),
	HX_("values",e2,03,b7,4f),
	HX_("offsets",80,09,65,d7),
	HX_("set_radius",8f,de,fb,a4),
	HX_("set_quality",e2,6b,b3,d4),
	HX_("set_gain",7c,05,77,72),
	HX_("set_linear",22,60,a5,e0),
	HX_("gauss",7b,9e,bc,8e),
	HX_("calcValues",57,ae,a5,04),
	HX_("getKernelSize",54,a1,ff,13),
	HX_("apply",6e,85,3b,24),
	::String(null()) };

::hx::Class Blur_obj::__mClass;

void Blur_obj::__register()
{
	Blur_obj _hx_dummy;
	Blur_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.pass.Blur",0f,66,e4,9a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Blur_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Blur_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Blur_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Blur_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Blur_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_cabe723226692012_4_boot)
HXDLIN(   4)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ignore",12,b9,c8,92),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("shader",25,bf,20,1d))))));
            	}
}

} // end namespace h3d
} // end namespace pass
