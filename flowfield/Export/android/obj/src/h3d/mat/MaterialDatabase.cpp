#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_h3d_mat_BaseMaterial
#include <h3d/mat/BaseMaterial.h>
#endif
#ifndef INCLUDED_h3d_mat_Material
#include <h3d/mat/Material.h>
#endif
#ifndef INCLUDED_h3d_mat_MaterialDatabase
#include <h3d/mat/MaterialDatabase.h>
#endif
#ifndef INCLUDED_h3d_mat_MaterialSetup
#include <h3d/mat/MaterialSetup.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_hxd_fs_FileEntry
#include <hxd/fs/FileEntry.h>
#endif
#ifndef INCLUDED_hxd_fs_FileSystem
#include <hxd/fs/FileSystem.h>
#endif
#ifndef INCLUDED_hxd_fs_LocalFileSystem
#include <hxd/fs/LocalFileSystem.h>
#endif
#ifndef INCLUDED_hxd_fs_NotFound
#include <hxd/fs/NotFound.h>
#endif
#ifndef INCLUDED_hxd_impl_AnyProps
#include <hxd/impl/AnyProps.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif
#ifndef INCLUDED_hxd_res_Any
#include <hxd/res/Any.h>
#endif
#ifndef INCLUDED_hxd_res_Loader
#include <hxd/res/Loader.h>
#endif
#ifndef INCLUDED_hxd_res_Resource
#include <hxd/res/Resource.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e5f61cecda7bb55f_5_new,"h3d.mat.MaterialDatabase","new",0xf37ad777,"h3d.mat.MaterialDatabase.new","h3d/mat/MaterialDatabase.hx",5,0x8e8e8897)
HX_LOCAL_STACK_FRAME(_hx_pos_e5f61cecda7bb55f_11_getFilePath,"h3d.mat.MaterialDatabase","getFilePath",0x0940070e,"h3d.mat.MaterialDatabase.getFilePath","h3d/mat/MaterialDatabase.hx",11,0x8e8e8897)
HX_LOCAL_STACK_FRAME(_hx_pos_e5f61cecda7bb55f_14_getModelData,"h3d.mat.MaterialDatabase","getModelData",0xe9e1a906,"h3d.mat.MaterialDatabase.getModelData","h3d/mat/MaterialDatabase.hx",14,0x8e8e8897)
HX_LOCAL_STACK_FRAME(_hx_pos_e5f61cecda7bb55f_26_saveData,"h3d.mat.MaterialDatabase","saveData",0xe751d590,"h3d.mat.MaterialDatabase.saveData","h3d/mat/MaterialDatabase.hx",26,0x8e8e8897)
HX_LOCAL_STACK_FRAME(_hx_pos_e5f61cecda7bb55f_41_loadMatProps,"h3d.mat.MaterialDatabase","loadMatProps",0xd29992ff,"h3d.mat.MaterialDatabase.loadMatProps","h3d/mat/MaterialDatabase.hx",41,0x8e8e8897)
HX_LOCAL_STACK_FRAME(_hx_pos_e5f61cecda7bb55f_51_saveMatProps,"h3d.mat.MaterialDatabase","saveMatProps",0x2bb8f316,"h3d.mat.MaterialDatabase.saveMatProps","h3d/mat/MaterialDatabase.hx",51,0x8e8e8897)
namespace h3d{
namespace mat{

void MaterialDatabase_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_e5f61cecda7bb55f_5_new)
HXDLIN(   5)		this->db =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic MaterialDatabase_obj::__CreateEmpty() { return new MaterialDatabase_obj; }

void *MaterialDatabase_obj::_hx_vtable = 0;

Dynamic MaterialDatabase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MaterialDatabase_obj > _hx_result = new MaterialDatabase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MaterialDatabase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0c80aacd;
}

::String MaterialDatabase_obj::getFilePath( ::hxd::res::Resource model){
            	HX_STACKFRAME(&_hx_pos_e5f61cecda7bb55f_11_getFilePath)
HXDLIN(  11)		return (model->entry->get_directory() + HX_("/materials.props",1f,fc,dc,7b));
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialDatabase_obj,getFilePath,return )

 ::Dynamic MaterialDatabase_obj::getModelData( ::hxd::res::Resource model){
            	HX_GC_STACKFRAME(&_hx_pos_e5f61cecda7bb55f_14_getModelData)
HXLINE(  15)		if (::hx::IsNull( model )) {
HXLINE(  16)			return null();
            		}
HXLINE(  17)		::Dynamic this1 = this->db;
HXDLIN(  17)		 ::Dynamic cached = ( ( ::haxe::ds::StringMap)(this1) )->get(model->entry->get_directory());
HXLINE(  18)		if (::hx::IsNotNull( cached )) {
HXLINE(  19)			return cached->__Field(HX_("v",76,00,00,00),::hx::paccDynamic);
            		}
HXLINE(  20)		::String file = this->getFilePath(model);
HXLINE(  21)		 ::Dynamic value;
HXDLIN(  21)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  21)			value =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,::hxd::res::Loader_obj::currentInstance->load(file)->toText())->doParse();
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  21)				{
HXLINE(  21)					null();
            				}
HXDLIN(  21)				if (::Std_obj::isOfType(::haxe::Exception_obj::caught(_g)->unwrap(),::hx::ClassOf< ::hxd::fs::NotFound >())) {
HXLINE(  21)					value =  ::Dynamic(::hx::Anon_obj::Create(0));
            				}
            				else {
HXLINE(  21)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  22)		{
HXLINE(  22)			::Dynamic this2 = this->db;
HXDLIN(  22)			::String key = model->entry->get_directory();
HXDLIN(  22)			( ( ::haxe::ds::StringMap)(this2) )->set(key, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("v",76,00,00,00),value)));
            		}
HXLINE(  23)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MaterialDatabase_obj,getModelData,return )

void MaterialDatabase_obj::saveData( ::hxd::res::Resource model, ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_e5f61cecda7bb55f_26_saveData)
HXLINE(  27)		::String file = this->getFilePath(model);
HXLINE(  29)		 ::hxd::fs::LocalFileSystem fs = ( ( ::hxd::fs::LocalFileSystem)(::Std_obj::downcast(::hxd::res::Loader_obj::currentInstance->fs,::hx::ClassOf< ::hxd::fs::LocalFileSystem >())) );
HXLINE(  30)		bool _hx_tmp;
HXDLIN(  30)		if (::hx::IsNotNull( fs )) {
HXLINE(  30)			_hx_tmp = !(::haxe::io::Path_obj::isAbsolute(file));
            		}
            		else {
HXLINE(  30)			_hx_tmp = false;
            		}
HXDLIN(  30)		if (_hx_tmp) {
HXLINE(  31)			file = (fs->baseDir + file);
            		}
HXLINE(  32)		if (::hx::IsNull( data )) {
HXLINE(  33)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  33)				::sys::FileSystem_obj::deleteFile(file);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE(  33)					{
HXLINE(  33)						null();
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            		else {
HXLINE(  35)			 ::Dynamic replacer = null();
HXDLIN(  35)			::sys::io::File_obj::saveContent(file,::haxe::format::JsonPrinter_obj::print(data,replacer,HX_("\t",09,00,00,00)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(MaterialDatabase_obj,saveData,(void))

 ::Dynamic MaterialDatabase_obj::loadMatProps( ::h3d::mat::Material material, ::h3d::mat::MaterialSetup setup){
            	HX_STACKFRAME(&_hx_pos_e5f61cecda7bb55f_41_loadMatProps)
HXLINE(  42)		 ::Dynamic p = this->getModelData(material->model);
HXLINE(  43)		if (::hx::IsNull( p )) {
HXLINE(  43)			return p;
            		}
HXLINE(  44)		p =  ::Dynamic(p->__Field(HX_("materials",ec,b5,0b,a0),::hx::paccDynamic));
HXLINE(  45)		if (::hx::IsNull( p )) {
HXLINE(  45)			return p;
            		}
HXLINE(  46)		p = ::Reflect_obj::field(p,setup->name);
HXLINE(  47)		if (::hx::IsNull( p )) {
HXLINE(  47)			return p;
            		}
HXLINE(  48)		return ::Reflect_obj::field(p,material->name);
            	}


HX_DEFINE_DYNAMIC_FUNC2(MaterialDatabase_obj,loadMatProps,return )

void MaterialDatabase_obj::saveMatProps( ::h3d::mat::Material material, ::h3d::mat::MaterialSetup setup){
            	HX_STACKFRAME(&_hx_pos_e5f61cecda7bb55f_51_saveMatProps)
HXLINE(  52)		::Array< ::String > path = ::Array_obj< ::String >::__new(3)->init(0,HX_("materials",ec,b5,0b,a0))->init(1,setup->name)->init(2,material->name);
HXLINE(  53)		 ::Dynamic root = this->getModelData(material->model);
HXLINE(  54)		if (::hx::IsNull( root )) {
HXLINE(  55)			return;
            		}
HXLINE(  56)		 ::Dynamic realRoot = root;
HXLINE(  57)		::cpp::VirtualArray prevs = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  58)		{
HXLINE(  58)			int _g = 0;
HXDLIN(  58)			int _g1 = (path->length - 1);
HXDLIN(  58)			while((_g < _g1)){
HXLINE(  58)				_g = (_g + 1);
HXDLIN(  58)				int i = (_g - 1);
HXLINE(  59)				 ::Dynamic next = ::Reflect_obj::field(root,path->__get(i));
HXLINE(  60)				if (::hx::IsNull( next )) {
HXLINE(  61)					next =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE(  62)					::Reflect_obj::setField(root,path->__get(i),next);
            				}
HXLINE(  64)				prevs->push(root);
HXLINE(  65)				root = next;
            			}
            		}
HXLINE(  67)		::String name = ( (::String)(path->pop()) );
HXLINE(  68)		::Reflect_obj::deleteField(root,name);
HXLINE(  70)		 ::Dynamic currentProps = material->props;
HXLINE(  71)		 ::Dynamic defaultProps = material->getDefaultProps(null());
HXLINE(  72)		bool _hx_tmp;
HXDLIN(  72)		if (::hx::IsNotNull( currentProps )) {
HXLINE(  72)			::String _hx_tmp1 = ::Std_obj::string(defaultProps);
HXDLIN(  72)			_hx_tmp = (_hx_tmp1 == ::Std_obj::string(currentProps));
            		}
            		else {
HXLINE(  72)			_hx_tmp = true;
            		}
HXDLIN(  72)		if (_hx_tmp) {
HXLINE(  74)			while((path->length > 0)){
HXLINE(  75)				::String name = ( (::String)(path->pop()) );
HXLINE(  76)				 ::Dynamic root = prevs->pop();
HXLINE(  77)				if ((::Reflect_obj::fields(::Reflect_obj::field(root,name))->length != 0)) {
HXLINE(  78)					goto _hx_goto_6;
            				}
HXLINE(  79)				::Reflect_obj::deleteField(root,name);
            			}
            			_hx_goto_6:;
            		}
            		else {
HXLINE(  82)			::Reflect_obj::setField(root,name,currentProps);
            		}
HXLINE(  85)		::String file = this->getFilePath(material->model);
HXLINE(  86)		if ((::Reflect_obj::fields(realRoot)->length == 0)) {
HXLINE(  87)			realRoot = null();
            		}
HXLINE(  88)		this->saveData(material->model,realRoot);
            	}


HX_DEFINE_DYNAMIC_FUNC2(MaterialDatabase_obj,saveMatProps,(void))


::hx::ObjectPtr< MaterialDatabase_obj > MaterialDatabase_obj::__new() {
	::hx::ObjectPtr< MaterialDatabase_obj > __this = new MaterialDatabase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MaterialDatabase_obj > MaterialDatabase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MaterialDatabase_obj *__this = (MaterialDatabase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MaterialDatabase_obj), true, "h3d.mat.MaterialDatabase"));
	*(void **)__this = MaterialDatabase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MaterialDatabase_obj::MaterialDatabase_obj()
{
}

void MaterialDatabase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MaterialDatabase);
	HX_MARK_MEMBER_NAME(db,"db");
	HX_MARK_END_CLASS();
}

void MaterialDatabase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(db,"db");
}

::hx::Val MaterialDatabase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"db") ) { return ::hx::Val( db ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"saveData") ) { return ::hx::Val( saveData_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getFilePath") ) { return ::hx::Val( getFilePath_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getModelData") ) { return ::hx::Val( getModelData_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadMatProps") ) { return ::hx::Val( loadMatProps_dyn() ); }
		if (HX_FIELD_EQ(inName,"saveMatProps") ) { return ::hx::Val( saveMatProps_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MaterialDatabase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"db") ) { db=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MaterialDatabase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("db",7e,57,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MaterialDatabase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(MaterialDatabase_obj,db),HX_("db",7e,57,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MaterialDatabase_obj_sStaticStorageInfo = 0;
#endif

static ::String MaterialDatabase_obj_sMemberFields[] = {
	HX_("db",7e,57,00,00),
	HX_("getFilePath",f7,90,89,89),
	HX_("getModelData",fd,ca,f0,a9),
	HX_("saveData",07,f0,1c,f6),
	HX_("loadMatProps",f6,b4,a8,92),
	HX_("saveMatProps",0d,15,c8,eb),
	::String(null()) };

::hx::Class MaterialDatabase_obj::__mClass;

void MaterialDatabase_obj::__register()
{
	MaterialDatabase_obj _hx_dummy;
	MaterialDatabase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.mat.MaterialDatabase",05,50,56,02);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MaterialDatabase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MaterialDatabase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MaterialDatabase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MaterialDatabase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace h3d
} // end namespace mat
