#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h2d_col_Bounds
#include <h2d/col/Bounds.h>
#endif
#ifndef INCLUDED_h2d_col_IBounds
#include <h2d/col/IBounds.h>
#endif
#ifndef INCLUDED_h2d_col_IPoint
#include <h2d/col/IPoint.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7bb77669076d9b02_42_new,"h2d.col.IBounds","new",0xf7de804e,"h2d.col.IBounds.new","h2d/col/IBounds.hx",42,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_49_toBounds,"h2d.col.IBounds","toBounds",0x9ea6ffa2,"h2d.col.IBounds.toBounds","h2d/col/IBounds.hx",49,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_56_intersects,"h2d.col.IBounds","intersects",0xfa8b0c86,"h2d.col.IBounds.intersects","h2d/col/IBounds.hx",56,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_63_contains,"h2d.col.IBounds","contains",0x3dc62b71,"h2d.col.IBounds.contains","h2d/col/IBounds.hx",63,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_69_addBounds,"h2d.col.IBounds","addBounds",0x2e6e11e4,"h2d.col.IBounds.addBounds","h2d/col/IBounds.hx",69,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_79_addPoint,"h2d.col.IBounds","addPoint",0x5137abc1,"h2d.col.IBounds.addPoint","h2d/col/IBounds.hx",79,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_89_addPos,"h2d.col.IBounds","addPos",0xc363e6c5,"h2d.col.IBounds.addPos","h2d/col/IBounds.hx",89,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_103_set,"h2d.col.IBounds","set",0xf7e24b90,"h2d.col.IBounds.set","h2d/col/IBounds.hx",103,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_113_setMin,"h2d.col.IBounds","setMin",0x93c817e2,"h2d.col.IBounds.setMin","h2d/col/IBounds.hx",113,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_121_setMax,"h2d.col.IBounds","setMax",0x93c810f4,"h2d.col.IBounds.setMax","h2d/col/IBounds.hx",121,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_130_doIntersect,"h2d.col.IBounds","doIntersect",0x50350dc2,"h2d.col.IBounds.doIntersect","h2d/col/IBounds.hx",130,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_140_doUnion,"h2d.col.IBounds","doUnion",0x87808472,"h2d.col.IBounds.doUnion","h2d/col/IBounds.hx",140,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_150_intersection,"h2d.col.IBounds","intersection",0xfcc4849b,"h2d.col.IBounds.intersection","h2d/col/IBounds.hx",150,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_164_union,"h2d.col.IBounds","union",0x9a706c7d,"h2d.col.IBounds.union","h2d/col/IBounds.hx",164,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_176_load,"h2d.col.IBounds","load",0xe986da78,"h2d.col.IBounds.load","h2d/col/IBounds.hx",176,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_186_offset,"h2d.col.IBounds","offset",0x849d1065,"h2d.col.IBounds.offset","h2d/col/IBounds.hx",186,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_197_getMin,"h2d.col.IBounds","getMin",0xc77fc36e,"h2d.col.IBounds.getMin","h2d/col/IBounds.hx",197,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_204_getCenter,"h2d.col.IBounds","getCenter",0x925e0579,"h2d.col.IBounds.getCenter","h2d/col/IBounds.hx",204,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_211_getSize,"h2d.col.IBounds","getSize",0xcc428f65,"h2d.col.IBounds.getSize","h2d/col/IBounds.hx",211,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_218_getMax,"h2d.col.IBounds","getMax",0xc77fbc80,"h2d.col.IBounds.getMax","h2d/col/IBounds.hx",218,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_226_isEmpty,"h2d.col.IBounds","isEmpty",0xb9cc1d31,"h2d.col.IBounds.isEmpty","h2d/col/IBounds.hx",226,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_232_empty,"h2d.col.IBounds","empty",0x636341fb,"h2d.col.IBounds.empty","h2d/col/IBounds.hx",232,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_242_all,"h2d.col.IBounds","all",0xf7d4a90f,"h2d.col.IBounds.all","h2d/col/IBounds.hx",242,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_252_clone,"h2d.col.IBounds","clone",0x3bec1acb,"h2d.col.IBounds.clone","h2d/col/IBounds.hx",252,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_262_get_x,"h2d.col.IBounds","get_x",0x84e9acbd,"h2d.col.IBounds.get_x","h2d/col/IBounds.hx",262,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_266_get_y,"h2d.col.IBounds","get_y",0x84e9acbe,"h2d.col.IBounds.get_y","h2d/col/IBounds.hx",266,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_269_set_x,"h2d.col.IBounds","set_x",0x6db8a2c9,"h2d.col.IBounds.set_x","h2d/col/IBounds.hx",269,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_274_set_y,"h2d.col.IBounds","set_y",0x6db8a2ca,"h2d.col.IBounds.set_y","h2d/col/IBounds.hx",274,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_280_get_width,"h2d.col.IBounds","get_width",0x1e3868cb,"h2d.col.IBounds.get_width","h2d/col/IBounds.hx",280,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_284_get_height,"h2d.col.IBounds","get_height",0x0972c182,"h2d.col.IBounds.get_height","h2d/col/IBounds.hx",284,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_287_set_width,"h2d.col.IBounds","set_width",0x018954d7,"h2d.col.IBounds.set_width","h2d/col/IBounds.hx",287,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_292_set_height,"h2d.col.IBounds","set_height",0x0cf05ff6,"h2d.col.IBounds.set_height","h2d/col/IBounds.hx",292,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_299_toString,"h2d.col.IBounds","toString",0x49b9a1fe,"h2d.col.IBounds.toString","h2d/col/IBounds.hx",299,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_309_fromValues,"h2d.col.IBounds","fromValues",0xa99a52be,"h2d.col.IBounds.fromValues","h2d/col/IBounds.hx",309,0x03728de4)
HX_LOCAL_STACK_FRAME(_hx_pos_7bb77669076d9b02_321_fromPoints,"h2d.col.IBounds","fromPoints",0x511160ff,"h2d.col.IBounds.fromPoints","h2d/col/IBounds.hx",321,0x03728de4)
namespace h2d{
namespace col{

void IBounds_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7bb77669076d9b02_42_new)
HXDLIN(  42)		this->xMin = (int)2147483647;
HXDLIN(  42)		this->yMin = (int)2147483647;
HXDLIN(  42)		this->xMax = (int)-2147483648;
HXDLIN(  42)		this->yMax = (int)-2147483648;
            	}

Dynamic IBounds_obj::__CreateEmpty() { return new IBounds_obj; }

void *IBounds_obj::_hx_vtable = 0;

Dynamic IBounds_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IBounds_obj > _hx_result = new IBounds_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool IBounds_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x288ebc78;
}

 ::h2d::col::Bounds IBounds_obj::toBounds(::hx::Null< Float >  __o_scale){
            		Float scale = __o_scale.Default(((Float)1.));
            	HX_GC_STACKFRAME(&_hx_pos_7bb77669076d9b02_49_toBounds)
HXDLIN(  49)		Float x0 = (( (Float)(this->xMin) ) * scale);
HXDLIN(  49)		Float y0 = (( (Float)(this->yMin) ) * scale);
HXDLIN(  49)		Float width = (( (Float)((this->xMax - this->xMin)) ) * scale);
HXDLIN(  49)		Float height = (( (Float)((this->yMax - this->yMin)) ) * scale);
HXDLIN(  49)		 ::h2d::col::Bounds b =  ::h2d::col::Bounds_obj::__alloc( HX_CTX );
HXDLIN(  49)		b->xMin = x0;
HXDLIN(  49)		b->yMin = y0;
HXDLIN(  49)		b->xMax = (x0 + width);
HXDLIN(  49)		b->yMax = (y0 + height);
HXDLIN(  49)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC1(IBounds_obj,toBounds,return )

bool IBounds_obj::intersects( ::h2d::col::IBounds b){
            	HX_STACKFRAME(&_hx_pos_7bb77669076d9b02_56_intersects)
HXDLIN(  56)		bool _hx_tmp;
HXDLIN(  56)		bool _hx_tmp1;
HXDLIN(  56)		bool _hx_tmp2;
HXDLIN(  56)		if ((this->xMin <= b->xMax)) {
HXDLIN(  56)			_hx_tmp2 = (this->yMin > b->yMax);
            		}
            		else {
HXDLIN(  56)			_hx_tmp2 = true;
            		}
HXDLIN(  56)		if (!(_hx_tmp2)) {
HXDLIN(  56)			_hx_tmp1 = (this->xMax < b->xMin);
            		}
            		else {
HXDLIN(  56)			_hx_tmp1 = true;
            		}
HXDLIN(  56)		if (!(_hx_tmp1)) {
HXDLIN(  56)			_hx_tmp = (this->yMax < b->yMin);
            		}
            		else {
HXDLIN(  56)			_hx_tmp = true;
            		}
HXDLIN(  56)		return !(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(IBounds_obj,intersects,return )

bool IBounds_obj::contains( ::h2d::col::IPoint p){
            	HX_STACKFRAME(&_hx_pos_7bb77669076d9b02_63_contains)
HXDLIN(  63)		bool _hx_tmp;
HXDLIN(  63)		bool _hx_tmp1;
HXDLIN(  63)		if ((p->x >= this->xMin)) {
HXDLIN(  63)			_hx_tmp1 = (p->x < this->xMax);
            		}
            		else {
HXDLIN(  63)			_hx_tmp1 = false;
            		}
HXDLIN(  63)		if (_hx_tmp1) {
HXDLIN(  63)			_hx_tmp = (p->y >= this->yMin);
            		}
            		else {
HXDLIN(  63)			_hx_tmp = false;
            		}
HXDLIN(  63)		if (_hx_tmp) {
HXDLIN(  63)			return (p->y < this->yMax);
            		}
            		else {
HXDLIN(  63)			return false;
            		}
HXDLIN(  63)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(IBounds_obj,contains,return )

void IBounds_obj::addBounds( ::h2d::col::IBounds b){
            	HX_STACKFRAME(&_hx_pos_7bb77669076d9b02_69_addBounds)
HXLINE(  70)		if ((b->xMin < this->xMin)) {
HXLINE(  70)			this->xMin = b->xMin;
            		}
HXLINE(  71)		if ((b->xMax > this->xMax)) {
HXLINE(  71)			this->xMax = b->xMax;
            		}
HXLINE(  72)		if ((b->yMin < this->yMin)) {
HXLINE(  72)			this->yMin = b->yMin;
            		}
HXLINE(  73)		if ((b->yMax > this->yMax)) {
HXLINE(  73)			this->yMax = b->yMax;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(IBounds_obj,addBounds,(void))

void IBounds_obj::addPoint( ::h2d::col::IPoint p){
            	HX_STACKFRAME(&_hx_pos_7bb77669076d9b02_79_addPoint)
HXLINE(  80)		if ((p->x < this->xMin)) {
HXLINE(  80)			this->xMin = p->x;
            		}
HXLINE(  81)		if ((p->x > this->xMax)) {
HXLINE(  81)			this->xMax = p->x;
            		}
HXLINE(  82)		if ((p->y < this->yMin)) {
HXLINE(  82)			this->yMin = p->y;
            		}
HXLINE(  83)		if ((p->y > this->yMax)) {
HXLINE(  83)			this->yMax = p->y;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(IBounds_obj,addPoint,(void))

void IBounds_obj::addPos(int x,int y){
            	HX_STACKFRAME(&_hx_pos_7bb77669076d9b02_89_addPos)
HXLINE(  90)		if ((x < this->xMin)) {
HXLINE(  90)			this->xMin = x;
            		}
HXLINE(  91)		if ((x > this->xMax)) {
HXLINE(  91)			this->xMax = x;
            		}
HXLINE(  92)		if ((y < this->yMin)) {
HXLINE(  92)			this->yMin = y;
            		}
HXLINE(  93)		if ((y > this->yMax)) {
HXLINE(  93)			this->yMax = y;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(IBounds_obj,addPos,(void))

void IBounds_obj::set(int x,int y,int width,int height){
            	HX_STACKFRAME(&_hx_pos_7bb77669076d9b02_103_set)
HXLINE( 104)		this->xMin = x;
HXLINE( 105)		this->yMin = y;
HXLINE( 106)		this->xMax = (x + width);
HXLINE( 107)		this->yMax = (y + height);
            	}


HX_DEFINE_DYNAMIC_FUNC4(IBounds_obj,set,(void))

void IBounds_obj::setMin( ::h2d::col::IPoint p){
            	HX_STACKFRAME(&_hx_pos_7bb77669076d9b02_113_setMin)
HXLINE( 114)		this->xMin = p->x;
HXLINE( 115)		this->yMin = p->y;
            	}


HX_DEFINE_DYNAMIC_FUNC1(IBounds_obj,setMin,(void))

void IBounds_obj::setMax( ::h2d::col::IPoint p){
            	HX_STACKFRAME(&_hx_pos_7bb77669076d9b02_121_setMax)
HXLINE( 122)		this->xMax = p->x;
HXLINE( 123)		this->yMax = p->y;
            	}


HX_DEFINE_DYNAMIC_FUNC1(IBounds_obj,setMax,(void))

void IBounds_obj::doIntersect( ::h2d::col::IBounds b){
            	HX_STACKFRAME(&_hx_pos_7bb77669076d9b02_130_doIntersect)
HXLINE( 131)		int a = this->xMin;
HXDLIN( 131)		int b1 = b->xMin;
HXDLIN( 131)		int _hx_tmp;
HXDLIN( 131)		if ((a < b1)) {
HXLINE( 131)			_hx_tmp = b1;
            		}
            		else {
HXLINE( 131)			_hx_tmp = a;
            		}
HXDLIN( 131)		this->xMin = _hx_tmp;
HXLINE( 132)		int a1 = this->yMin;
HXDLIN( 132)		int b2 = b->yMin;
HXDLIN( 132)		int _hx_tmp1;
HXDLIN( 132)		if ((a1 < b2)) {
HXLINE( 132)			_hx_tmp1 = b2;
            		}
            		else {
HXLINE( 132)			_hx_tmp1 = a1;
            		}
HXDLIN( 132)		this->yMin = _hx_tmp1;
HXLINE( 133)		int a2 = this->xMax;
HXDLIN( 133)		int b3 = b->xMax;
HXDLIN( 133)		int _hx_tmp2;
HXDLIN( 133)		if ((a2 > b3)) {
HXLINE( 133)			_hx_tmp2 = b3;
            		}
            		else {
HXLINE( 133)			_hx_tmp2 = a2;
            		}
HXDLIN( 133)		this->xMax = _hx_tmp2;
HXLINE( 134)		int a3 = this->yMax;
HXDLIN( 134)		int b4 = b->yMax;
HXDLIN( 134)		int _hx_tmp3;
HXDLIN( 134)		if ((a3 > b4)) {
HXLINE( 134)			_hx_tmp3 = b4;
            		}
            		else {
HXLINE( 134)			_hx_tmp3 = a3;
            		}
HXDLIN( 134)		this->yMax = _hx_tmp3;
            	}


HX_DEFINE_DYNAMIC_FUNC1(IBounds_obj,doIntersect,(void))

void IBounds_obj::doUnion( ::h2d::col::IBounds b){
            	HX_STACKFRAME(&_hx_pos_7bb77669076d9b02_140_doUnion)
HXLINE( 141)		int a = this->xMin;
HXDLIN( 141)		int b1 = b->xMin;
HXDLIN( 141)		int _hx_tmp;
HXDLIN( 141)		if ((a > b1)) {
HXLINE( 141)			_hx_tmp = b1;
            		}
            		else {
HXLINE( 141)			_hx_tmp = a;
            		}
HXDLIN( 141)		this->xMin = _hx_tmp;
HXLINE( 142)		int a1 = this->yMin;
HXDLIN( 142)		int b2 = b->yMin;
HXDLIN( 142)		int _hx_tmp1;
HXDLIN( 142)		if ((a1 > b2)) {
HXLINE( 142)			_hx_tmp1 = b2;
            		}
            		else {
HXLINE( 142)			_hx_tmp1 = a1;
            		}
HXDLIN( 142)		this->yMin = _hx_tmp1;
HXLINE( 143)		int a2 = this->xMax;
HXDLIN( 143)		int b3 = b->xMax;
HXDLIN( 143)		int _hx_tmp2;
HXDLIN( 143)		if ((a2 < b3)) {
HXLINE( 143)			_hx_tmp2 = b3;
            		}
            		else {
HXLINE( 143)			_hx_tmp2 = a2;
            		}
HXDLIN( 143)		this->xMax = _hx_tmp2;
HXLINE( 144)		int a3 = this->yMax;
HXDLIN( 144)		int b4 = b->yMax;
HXDLIN( 144)		int _hx_tmp3;
HXDLIN( 144)		if ((a3 < b4)) {
HXLINE( 144)			_hx_tmp3 = b4;
            		}
            		else {
HXLINE( 144)			_hx_tmp3 = a3;
            		}
HXDLIN( 144)		this->yMax = _hx_tmp3;
            	}


HX_DEFINE_DYNAMIC_FUNC1(IBounds_obj,doUnion,(void))

 ::h2d::col::IBounds IBounds_obj::intersection( ::h2d::col::IBounds b){
            	HX_GC_STACKFRAME(&_hx_pos_7bb77669076d9b02_150_intersection)
HXLINE( 151)		 ::h2d::col::IBounds i =  ::h2d::col::IBounds_obj::__alloc( HX_CTX );
HXLINE( 152)		int a = this->xMin;
HXDLIN( 152)		int b1 = b->xMin;
HXDLIN( 152)		int _hx_tmp;
HXDLIN( 152)		if ((a < b1)) {
HXLINE( 152)			_hx_tmp = b1;
            		}
            		else {
HXLINE( 152)			_hx_tmp = a;
            		}
HXDLIN( 152)		i->xMin = _hx_tmp;
HXLINE( 153)		int a1 = this->yMin;
HXDLIN( 153)		int b2 = b->yMin;
HXDLIN( 153)		int _hx_tmp1;
HXDLIN( 153)		if ((a1 < b2)) {
HXLINE( 153)			_hx_tmp1 = b2;
            		}
            		else {
HXLINE( 153)			_hx_tmp1 = a1;
            		}
HXDLIN( 153)		i->yMin = _hx_tmp1;
HXLINE( 154)		int a2 = this->xMax;
HXDLIN( 154)		int b3 = b->xMax;
HXDLIN( 154)		int _hx_tmp2;
HXDLIN( 154)		if ((a2 > b3)) {
HXLINE( 154)			_hx_tmp2 = b3;
            		}
            		else {
HXLINE( 154)			_hx_tmp2 = a2;
            		}
HXDLIN( 154)		i->xMax = _hx_tmp2;
HXLINE( 155)		int a3 = this->yMax;
HXDLIN( 155)		int b4 = b->yMax;
HXDLIN( 155)		int _hx_tmp3;
HXDLIN( 155)		if ((a3 > b4)) {
HXLINE( 155)			_hx_tmp3 = b4;
            		}
            		else {
HXLINE( 155)			_hx_tmp3 = a3;
            		}
HXDLIN( 155)		i->yMax = _hx_tmp3;
HXLINE( 156)		if ((i->xMax < i->xMin)) {
HXLINE( 156)			i->xMax = i->xMin;
            		}
HXLINE( 157)		if ((i->yMax < i->yMin)) {
HXLINE( 157)			i->yMax = i->yMin;
            		}
HXLINE( 158)		return i;
            	}


HX_DEFINE_DYNAMIC_FUNC1(IBounds_obj,intersection,return )

 ::h2d::col::IBounds IBounds_obj::_hx_union( ::h2d::col::IBounds b){
            	HX_GC_STACKFRAME(&_hx_pos_7bb77669076d9b02_164_union)
HXLINE( 165)		 ::h2d::col::IBounds i =  ::h2d::col::IBounds_obj::__alloc( HX_CTX );
HXLINE( 166)		int a = this->xMin;
HXDLIN( 166)		int b1 = b->xMin;
HXDLIN( 166)		int _hx_tmp;
HXDLIN( 166)		if ((a > b1)) {
HXLINE( 166)			_hx_tmp = b1;
            		}
            		else {
HXLINE( 166)			_hx_tmp = a;
            		}
HXDLIN( 166)		i->xMin = _hx_tmp;
HXLINE( 167)		int a1 = this->yMin;
HXDLIN( 167)		int b2 = b->yMin;
HXDLIN( 167)		int _hx_tmp1;
HXDLIN( 167)		if ((a1 > b2)) {
HXLINE( 167)			_hx_tmp1 = b2;
            		}
            		else {
HXLINE( 167)			_hx_tmp1 = a1;
            		}
HXDLIN( 167)		i->yMin = _hx_tmp1;
HXLINE( 168)		int a2 = this->xMax;
HXDLIN( 168)		int b3 = b->xMax;
HXDLIN( 168)		int _hx_tmp2;
HXDLIN( 168)		if ((a2 < b3)) {
HXLINE( 168)			_hx_tmp2 = b3;
            		}
            		else {
HXLINE( 168)			_hx_tmp2 = a2;
            		}
HXDLIN( 168)		i->xMax = _hx_tmp2;
HXLINE( 169)		int a3 = this->yMax;
HXDLIN( 169)		int b4 = b->yMax;
HXDLIN( 169)		int _hx_tmp3;
HXDLIN( 169)		if ((a3 < b4)) {
HXLINE( 169)			_hx_tmp3 = b4;
            		}
            		else {
HXLINE( 169)			_hx_tmp3 = a3;
            		}
HXDLIN( 169)		i->yMax = _hx_tmp3;
HXLINE( 170)		return i;
            	}


HX_DEFINE_DYNAMIC_FUNC1(IBounds_obj,_hx_union,return )

void IBounds_obj::load( ::h2d::col::IBounds b){
            	HX_STACKFRAME(&_hx_pos_7bb77669076d9b02_176_load)
HXLINE( 177)		this->xMin = b->xMin;
HXLINE( 178)		this->yMin = b->yMin;
HXLINE( 179)		this->xMax = b->xMax;
HXLINE( 180)		this->yMax = b->yMax;
            	}


HX_DEFINE_DYNAMIC_FUNC1(IBounds_obj,load,(void))

void IBounds_obj::offset(int dx,int dy){
            	HX_STACKFRAME(&_hx_pos_7bb77669076d9b02_186_offset)
HXLINE( 187)		 ::h2d::col::IBounds _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 187)		_hx_tmp->xMin = (_hx_tmp->xMin + dx);
HXLINE( 188)		 ::h2d::col::IBounds _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 188)		_hx_tmp1->xMax = (_hx_tmp1->xMax + dx);
HXLINE( 189)		 ::h2d::col::IBounds _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)		_hx_tmp2->yMin = (_hx_tmp2->yMin + dy);
HXLINE( 190)		 ::h2d::col::IBounds _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)		_hx_tmp3->yMax = (_hx_tmp3->yMax + dy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(IBounds_obj,offset,(void))

 ::h2d::col::IPoint IBounds_obj::getMin(){
            	HX_GC_STACKFRAME(&_hx_pos_7bb77669076d9b02_197_getMin)
HXDLIN( 197)		return  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,this->xMin,this->yMin);
            	}


HX_DEFINE_DYNAMIC_FUNC0(IBounds_obj,getMin,return )

 ::h2d::col::IPoint IBounds_obj::getCenter(){
            	HX_GC_STACKFRAME(&_hx_pos_7bb77669076d9b02_204_getCenter)
HXDLIN( 204)		return  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,((this->xMin + this->xMax) >> 1),((this->yMin + this->yMax) >> 1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(IBounds_obj,getCenter,return )

 ::h2d::col::IPoint IBounds_obj::getSize(){
            	HX_GC_STACKFRAME(&_hx_pos_7bb77669076d9b02_211_getSize)
HXDLIN( 211)		return  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,(this->xMax - this->xMin),(this->yMax - this->yMin));
            	}


HX_DEFINE_DYNAMIC_FUNC0(IBounds_obj,getSize,return )

 ::h2d::col::IPoint IBounds_obj::getMax(){
            	HX_GC_STACKFRAME(&_hx_pos_7bb77669076d9b02_218_getMax)
HXDLIN( 218)		return  ::h2d::col::IPoint_obj::__alloc( HX_CTX ,this->xMax,this->yMax);
            	}


HX_DEFINE_DYNAMIC_FUNC0(IBounds_obj,getMax,return )

bool IBounds_obj::isEmpty(){
            	HX_STACKFRAME(&_hx_pos_7bb77669076d9b02_226_isEmpty)
HXDLIN( 226)		if ((this->xMax > this->xMin)) {
HXDLIN( 226)			return (this->yMax <= this->yMin);
            		}
            		else {
HXDLIN( 226)			return true;
            		}
HXDLIN( 226)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(IBounds_obj,isEmpty,return )

void IBounds_obj::empty(){
            	HX_STACKFRAME(&_hx_pos_7bb77669076d9b02_232_empty)
HXLINE( 233)		this->xMin = (int)2147483647;
HXLINE( 234)		this->yMin = (int)2147483647;
HXLINE( 235)		this->xMax = (int)-2147483648;
HXLINE( 236)		this->yMax = (int)-2147483648;
            	}


HX_DEFINE_DYNAMIC_FUNC0(IBounds_obj,empty,(void))

void IBounds_obj::all(){
            	HX_STACKFRAME(&_hx_pos_7bb77669076d9b02_242_all)
HXLINE( 243)		this->xMin = (int)-2147483648;
HXLINE( 244)		this->yMin = (int)-2147483648;
HXLINE( 245)		this->xMax = (int)2147483647;
HXLINE( 246)		this->yMax = (int)2147483647;
            	}


HX_DEFINE_DYNAMIC_FUNC0(IBounds_obj,all,(void))

 ::h2d::col::IBounds IBounds_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_7bb77669076d9b02_252_clone)
HXLINE( 253)		 ::h2d::col::IBounds b =  ::h2d::col::IBounds_obj::__alloc( HX_CTX );
HXLINE( 254)		b->xMin = this->xMin;
HXLINE( 255)		b->yMin = this->yMin;
HXLINE( 256)		b->xMax = this->xMax;
HXLINE( 257)		b->yMax = this->yMax;
HXLINE( 258)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC0(IBounds_obj,clone,return )

int IBounds_obj::get_x(){
            	HX_STACKFRAME(&_hx_pos_7bb77669076d9b02_262_get_x)
HXDLIN( 262)		return this->xMin;
            	}


HX_DEFINE_DYNAMIC_FUNC0(IBounds_obj,get_x,return )

int IBounds_obj::get_y(){
            	HX_STACKFRAME(&_hx_pos_7bb77669076d9b02_266_get_y)
HXDLIN( 266)		return this->yMin;
            	}


HX_DEFINE_DYNAMIC_FUNC0(IBounds_obj,get_y,return )

int IBounds_obj::set_x(int x){
            	HX_STACKFRAME(&_hx_pos_7bb77669076d9b02_269_set_x)
HXLINE( 270)		 ::h2d::col::IBounds _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 270)		_hx_tmp->xMax = (_hx_tmp->xMax + (x - this->xMin));
HXLINE( 271)		return (this->xMin = x);
            	}


HX_DEFINE_DYNAMIC_FUNC1(IBounds_obj,set_x,return )

int IBounds_obj::set_y(int y){
            	HX_STACKFRAME(&_hx_pos_7bb77669076d9b02_274_set_y)
HXLINE( 275)		 ::h2d::col::IBounds _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 275)		_hx_tmp->yMax = (_hx_tmp->yMax + (y - this->yMin));
HXLINE( 276)		return (this->yMin = y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(IBounds_obj,set_y,return )

int IBounds_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_7bb77669076d9b02_280_get_width)
HXDLIN( 280)		return (this->xMax - this->xMin);
            	}


HX_DEFINE_DYNAMIC_FUNC0(IBounds_obj,get_width,return )

int IBounds_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_7bb77669076d9b02_284_get_height)
HXDLIN( 284)		return (this->yMax - this->yMin);
            	}


HX_DEFINE_DYNAMIC_FUNC0(IBounds_obj,get_height,return )

int IBounds_obj::set_width(int w){
            	HX_STACKFRAME(&_hx_pos_7bb77669076d9b02_287_set_width)
HXLINE( 288)		this->xMax = (this->xMin + w);
HXLINE( 289)		return w;
            	}


HX_DEFINE_DYNAMIC_FUNC1(IBounds_obj,set_width,return )

int IBounds_obj::set_height(int h){
            	HX_STACKFRAME(&_hx_pos_7bb77669076d9b02_292_set_height)
HXLINE( 293)		this->yMax = (this->yMin + h);
HXLINE( 294)		return h;
            	}


HX_DEFINE_DYNAMIC_FUNC1(IBounds_obj,set_height,return )

::String IBounds_obj::toString(){
            	HX_GC_STACKFRAME(&_hx_pos_7bb77669076d9b02_299_toString)
HXDLIN( 299)		::String _hx_tmp = ((HX_("{",7b,00,00,00) + ::Std_obj::string( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,this->xMin,this->yMin))) + HX_(",",2c,00,00,00));
HXDLIN( 299)		return ((_hx_tmp + ::Std_obj::string( ::h2d::col::IPoint_obj::__alloc( HX_CTX ,(this->xMax - this->xMin),(this->yMax - this->yMin)))) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(IBounds_obj,toString,return )

 ::h2d::col::IBounds IBounds_obj::fromValues(int x0,int y0,int width,int height){
            	HX_GC_STACKFRAME(&_hx_pos_7bb77669076d9b02_309_fromValues)
HXLINE( 310)		 ::h2d::col::IBounds b =  ::h2d::col::IBounds_obj::__alloc( HX_CTX );
HXLINE( 311)		b->xMin = x0;
HXLINE( 312)		b->yMin = y0;
HXLINE( 313)		b->xMax = (x0 + width);
HXLINE( 314)		b->yMax = (y0 + height);
HXLINE( 315)		return b;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(IBounds_obj,fromValues,return )

 ::h2d::col::IBounds IBounds_obj::fromPoints( ::h2d::col::IPoint min, ::h2d::col::IPoint max){
            	HX_GC_STACKFRAME(&_hx_pos_7bb77669076d9b02_321_fromPoints)
HXLINE( 322)		 ::h2d::col::IBounds b =  ::h2d::col::IBounds_obj::__alloc( HX_CTX );
HXLINE( 323)		{
HXLINE( 323)			b->xMin = min->x;
HXDLIN( 323)			b->yMin = min->y;
            		}
HXLINE( 324)		{
HXLINE( 324)			b->xMax = max->x;
HXDLIN( 324)			b->yMax = max->y;
            		}
HXLINE( 325)		return b;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(IBounds_obj,fromPoints,return )


::hx::ObjectPtr< IBounds_obj > IBounds_obj::__new() {
	::hx::ObjectPtr< IBounds_obj > __this = new IBounds_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< IBounds_obj > IBounds_obj::__alloc(::hx::Ctx *_hx_ctx) {
	IBounds_obj *__this = (IBounds_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IBounds_obj), false, "h2d.col.IBounds"));
	*(void **)__this = IBounds_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

IBounds_obj::IBounds_obj()
{
}

::hx::Val IBounds_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_x() ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_y() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"all") ) { return ::hx::Val( all_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"xMin") ) { return ::hx::Val( xMin ); }
		if (HX_FIELD_EQ(inName,"yMin") ) { return ::hx::Val( yMin ); }
		if (HX_FIELD_EQ(inName,"xMax") ) { return ::hx::Val( xMax ); }
		if (HX_FIELD_EQ(inName,"yMax") ) { return ::hx::Val( yMax ); }
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_width() ); }
		if (HX_FIELD_EQ(inName,"union") ) { return ::hx::Val( _hx_union_dyn() ); }
		if (HX_FIELD_EQ(inName,"empty") ) { return ::hx::Val( empty_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return ::hx::Val( get_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return ::hx::Val( get_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_height() ); }
		if (HX_FIELD_EQ(inName,"addPos") ) { return ::hx::Val( addPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMin") ) { return ::hx::Val( setMin_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMax") ) { return ::hx::Val( setMax_dyn() ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMin") ) { return ::hx::Val( getMin_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMax") ) { return ::hx::Val( getMax_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"doUnion") ) { return ::hx::Val( doUnion_dyn() ); }
		if (HX_FIELD_EQ(inName,"getSize") ) { return ::hx::Val( getSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return ::hx::Val( isEmpty_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toBounds") ) { return ::hx::Val( toBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"addPoint") ) { return ::hx::Val( addPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addBounds") ) { return ::hx::Val( addBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCenter") ) { return ::hx::Val( getCenter_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"intersects") ) { return ::hx::Val( intersects_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"doIntersect") ) { return ::hx::Val( doIntersect_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"intersection") ) { return ::hx::Val( intersection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool IBounds_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fromValues") ) { outValue = fromValues_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromPoints") ) { outValue = fromPoints_dyn(); return true; }
	}
	return false;
}

::hx::Val IBounds_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_x(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_y(inValue.Cast< int >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"xMin") ) { xMin=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yMin") ) { yMin=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xMax") ) { xMax=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yMax") ) { yMax=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast< int >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_height(inValue.Cast< int >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IBounds_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("xMin",fa,63,8c,4f));
	outFields->push(HX_("yMin",99,9a,35,50));
	outFields->push(HX_("xMax",0c,5d,8c,4f));
	outFields->push(HX_("yMax",ab,93,35,50));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo IBounds_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(IBounds_obj,xMin),HX_("xMin",fa,63,8c,4f)},
	{::hx::fsInt,(int)offsetof(IBounds_obj,yMin),HX_("yMin",99,9a,35,50)},
	{::hx::fsInt,(int)offsetof(IBounds_obj,xMax),HX_("xMax",0c,5d,8c,4f)},
	{::hx::fsInt,(int)offsetof(IBounds_obj,yMax),HX_("yMax",ab,93,35,50)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *IBounds_obj_sStaticStorageInfo = 0;
#endif

static ::String IBounds_obj_sMemberFields[] = {
	HX_("xMin",fa,63,8c,4f),
	HX_("yMin",99,9a,35,50),
	HX_("xMax",0c,5d,8c,4f),
	HX_("yMax",ab,93,35,50),
	HX_("toBounds",50,2e,5c,8d),
	HX_("intersects",b4,c2,eb,e3),
	HX_("contains",1f,5a,7b,2c),
	HX_("addBounds",76,bb,41,1e),
	HX_("addPoint",6f,da,ec,3f),
	HX_("addPos",f3,6d,06,9f),
	HX_("set",a2,9b,57,00),
	HX_("setMin",10,9f,6a,6f),
	HX_("setMax",22,98,6a,6f),
	HX_("doIntersect",d4,bf,73,9b),
	HX_("doUnion",84,45,14,da),
	HX_("intersection",49,a2,61,88),
	HX_("union",0f,65,e7,a6),
	HX_("load",26,9a,b7,47),
	HX_("offset",93,97,3f,60),
	HX_("getMin",9c,4a,22,a3),
	HX_("getCenter",0b,af,31,82),
	HX_("getSize",77,50,d6,1e),
	HX_("getMax",ae,43,22,a3),
	HX_("isEmpty",43,de,5f,0c),
	HX_("empty",8d,3a,da,6f),
	HX_("all",21,f9,49,00),
	HX_("clone",5d,13,63,48),
	HX_("get_x",4f,a5,60,91),
	HX_("get_y",50,a5,60,91),
	HX_("set_x",5b,9b,2f,7a),
	HX_("set_y",5c,9b,2f,7a),
	HX_("get_width",5d,12,0c,0e),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_width",69,fe,5c,f1),
	HX_("set_height",24,16,51,f6),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class IBounds_obj::__mClass;

static ::String IBounds_obj_sStaticFields[] = {
	HX_("fromValues",ec,08,fb,92),
	HX_("fromPoints",2d,17,72,3a),
	::String(null())
};

void IBounds_obj::__register()
{
	IBounds_obj _hx_dummy;
	IBounds_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h2d.col.IBounds",5c,01,31,8d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &IBounds_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(IBounds_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IBounds_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< IBounds_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IBounds_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IBounds_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h2d
} // end namespace col
