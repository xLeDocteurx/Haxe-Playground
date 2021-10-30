#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_h3d_IDrawable
#include <h3d/IDrawable.h>
#endif
#ifndef INCLUDED_h3d_Matrix
#include <h3d/Matrix.h>
#endif
#ifndef INCLUDED_h3d_Quat
#include <h3d/Quat.h>
#endif
#ifndef INCLUDED_h3d_Vector
#include <h3d/Vector.h>
#endif
#ifndef INCLUDED_h3d_anim_Animation
#include <h3d/anim/Animation.h>
#endif
#ifndef INCLUDED_h3d_col_Bounds
#include <h3d/col/Bounds.h>
#endif
#ifndef INCLUDED_h3d_col_Collider
#include <h3d/col/Collider.h>
#endif
#ifndef INCLUDED_h3d_col_GroupCollider
#include <h3d/col/GroupCollider.h>
#endif
#ifndef INCLUDED_h3d_col_ObjectCollider
#include <h3d/col/ObjectCollider.h>
#endif
#ifndef INCLUDED_h3d_col_Point
#include <h3d/col/Point.h>
#endif
#ifndef INCLUDED_h3d_impl_RenderContext
#include <h3d/impl/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_mat_BaseMaterial
#include <h3d/mat/BaseMaterial.h>
#endif
#ifndef INCLUDED_h3d_mat_Material
#include <h3d/mat/Material.h>
#endif
#ifndef INCLUDED_h3d_scene_Mesh
#include <h3d/scene/Mesh.h>
#endif
#ifndef INCLUDED_h3d_scene_Object
#include <h3d/scene/Object.h>
#endif
#ifndef INCLUDED_h3d_scene_RenderContext
#include <h3d/scene/RenderContext.h>
#endif
#ifndef INCLUDED_h3d_scene_Scene
#include <h3d/scene/Scene.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxd_InteractiveScene
#include <hxd/InteractiveScene.h>
#endif
#ifndef INCLUDED_hxd_impl_AnyProps
#include <hxd/impl/AnyProps.h>
#endif
#ifndef INCLUDED_hxd_impl_ArrayIterator_h3d_scene_Object
#include <hxd/impl/ArrayIterator_h3d_scene_Object.h>
#endif
#ifndef INCLUDED_hxd_impl__Serializable_NoSerializeSupport
#include <hxd/impl/_Serializable/NoSerializeSupport.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_176_new,"h3d.scene.Object","new",0xf5a97c08,"h3d.scene.Object.new","h3d/scene/Object.hx",176,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_156_set_cullingCollider,"h3d.scene.Object","set_cullingCollider",0x02a4ab8f,"h3d.scene.Object.set_cullingCollider","h3d/scene/Object.hx",156,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_189_get_visible,"h3d.scene.Object","get_visible",0xab046c31,"h3d.scene.Object.get_visible","h3d/scene/Object.hx",189,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_190_get_allocated,"h3d.scene.Object","get_allocated",0xf3213486,"h3d.scene.Object.get_allocated","h3d/scene/Object.hx",190,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_191_get_posChanged,"h3d.scene.Object","get_posChanged",0xeda1c361,"h3d.scene.Object.get_posChanged","h3d/scene/Object.hx",191,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_192_get_culled,"h3d.scene.Object","get_culled",0xf613f7b2,"h3d.scene.Object.get_culled","h3d/scene/Object.hx",192,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_193_get_followPositionOnly,"h3d.scene.Object","get_followPositionOnly",0xa525d467,"h3d.scene.Object.get_followPositionOnly","h3d/scene/Object.hx",193,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_194_get_lightCameraCenter,"h3d.scene.Object","get_lightCameraCenter",0xa5b968cf,"h3d.scene.Object.get_lightCameraCenter","h3d/scene/Object.hx",194,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_195_get_alwaysSync,"h3d.scene.Object","get_alwaysSync",0x0c3ab66b,"h3d.scene.Object.get_alwaysSync","h3d/scene/Object.hx",195,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_196_get_inheritCulled,"h3d.scene.Object","get_inheritCulled",0x5fb901eb,"h3d.scene.Object.get_inheritCulled","h3d/scene/Object.hx",196,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_197_get_ignoreBounds,"h3d.scene.Object","get_ignoreBounds",0x8966e508,"h3d.scene.Object.get_ignoreBounds","h3d/scene/Object.hx",197,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_198_get_ignoreCollide,"h3d.scene.Object","get_ignoreCollide",0xaa4d118b,"h3d.scene.Object.get_ignoreCollide","h3d/scene/Object.hx",198,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_199_get_allowSerialize,"h3d.scene.Object","get_allowSerialize",0x986ed238,"h3d.scene.Object.get_allowSerialize","h3d/scene/Object.hx",199,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_200_get_ignoreParentTransform,"h3d.scene.Object","get_ignoreParentTransform",0xc914c9ef,"h3d.scene.Object.get_ignoreParentTransform","h3d/scene/Object.hx",200,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_201_get_cullingColliderInherited,"h3d.scene.Object","get_cullingColliderInherited",0x98123017,"h3d.scene.Object.get_cullingColliderInherited","h3d/scene/Object.hx",201,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_202_set_posChanged,"h3d.scene.Object","set_posChanged",0x0dc1abd5,"h3d.scene.Object.set_posChanged","h3d/scene/Object.hx",202,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_203_set_culled,"h3d.scene.Object","set_culled",0xf9919626,"h3d.scene.Object.set_culled","h3d/scene/Object.hx",203,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_204_set_visible,"h3d.scene.Object","set_visible",0xb571733d,"h3d.scene.Object.set_visible","h3d/scene/Object.hx",204,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_205_set_allocated,"h3d.scene.Object","set_allocated",0x38271692,"h3d.scene.Object.set_allocated","h3d/scene/Object.hx",205,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_206_set_followPositionOnly,"h3d.scene.Object","set_followPositionOnly",0xd8d150db,"h3d.scene.Object.set_followPositionOnly","h3d/scene/Object.hx",206,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_207_set_lightCameraCenter,"h3d.scene.Object","set_lightCameraCenter",0xf9c236db,"h3d.scene.Object.set_lightCameraCenter","h3d/scene/Object.hx",207,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_208_set_alwaysSync,"h3d.scene.Object","set_alwaysSync",0x2c5a9edf,"h3d.scene.Object.set_alwaysSync","h3d/scene/Object.hx",208,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_209_set_ignoreBounds,"h3d.scene.Object","set_ignoreBounds",0xdfa8d27c,"h3d.scene.Object.set_ignoreBounds","h3d/scene/Object.hx",209,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_210_set_inheritCulled,"h3d.scene.Object","set_inheritCulled",0x8326d9f7,"h3d.scene.Object.set_inheritCulled","h3d/scene/Object.hx",210,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_211_set_ignoreCollide,"h3d.scene.Object","set_ignoreCollide",0xcdbae997,"h3d.scene.Object.set_ignoreCollide","h3d/scene/Object.hx",211,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_212_set_allowSerialize,"h3d.scene.Object","set_allowSerialize",0x751e04ac,"h3d.scene.Object.set_allowSerialize","h3d/scene/Object.hx",212,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_213_set_ignoreParentTransform,"h3d.scene.Object","set_ignoreParentTransform",0x356b8dfb,"h3d.scene.Object.set_ignoreParentTransform","h3d/scene/Object.hx",213,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_214_set_cullingColliderInherited,"h3d.scene.Object","set_cullingColliderInherited",0x9b3c7b8b,"h3d.scene.Object.set_cullingColliderInherited","h3d/scene/Object.hx",214,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_220_playAnimation,"h3d.scene.Object","playAnimation",0xdaaa1018,"h3d.scene.Object.playAnimation","h3d/scene/Object.hx",220,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_227_switchToAnimation,"h3d.scene.Object","switchToAnimation",0x9b168e1d,"h3d.scene.Object.switchToAnimation","h3d/scene/Object.hx",227,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_233_stopAnimation,"h3d.scene.Object","stopAnimation",0x03729c4a,"h3d.scene.Object.stopAnimation","h3d/scene/Object.hx",233,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_248_applyAnimationTransform,"h3d.scene.Object","applyAnimationTransform",0x2a2f2a7e,"h3d.scene.Object.applyAnimationTransform","h3d/scene/Object.hx",248,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_268_getObjectsCount,"h3d.scene.Object","getObjectsCount",0x1bf7a8b9,"h3d.scene.Object.getObjectsCount","h3d/scene/Object.hx",268,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_278_getMaterialByName,"h3d.scene.Object","getMaterialByName",0x9fd4e4a7,"h3d.scene.Object.getMaterialByName","h3d/scene/Object.hx",278,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_289_contains,"h3d.scene.Object","contains",0xf5ae6d77,"h3d.scene.Object.contains","h3d/scene/Object.hx",289,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_300_find,"h3d.scene.Object","find",0xf95c5791,"h3d.scene.Object.find","h3d/scene/Object.hx",300,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_314_findAll,"h3d.scene.Object","findAll",0x29bdaa10,"h3d.scene.Object.findAll","h3d/scene/Object.hx",314,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_327_getMaterials,"h3d.scene.Object","getMaterials",0xd65df1ce,"h3d.scene.Object.getMaterials","h3d/scene/Object.hx",327,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_339_localToGlobal,"h3d.scene.Object","localToGlobal",0x3d1b0f71,"h3d.scene.Object.localToGlobal","h3d/scene/Object.hx",339,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_349_globalToLocal,"h3d.scene.Object","globalToLocal",0x60de1c75,"h3d.scene.Object.globalToLocal","h3d/scene/Object.hx",349,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_357_getInvPos,"h3d.scene.Object","getInvPos",0x5f9d5801,"h3d.scene.Object.getInvPos","h3d/scene/Object.hx",357,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_371_getBounds,"h3d.scene.Object","getBounds",0x25f1e953,"h3d.scene.Object.getBounds","h3d/scene/Object.hx",371,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_379_getBoundsRec,"h3d.scene.Object","getBoundsRec",0xa080fdbd,"h3d.scene.Object.getBoundsRec","h3d/scene/Object.hx",379,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_394_getMeshes,"h3d.scene.Object","getMeshes",0xc8861a79,"h3d.scene.Object.getMeshes","h3d/scene/Object.hx",394,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_407_getMeshByName,"h3d.scene.Object","getMeshByName",0x43d9c36d,"h3d.scene.Object.getMeshByName","h3d/scene/Object.hx",407,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_413_getObjectByName,"h3d.scene.Object","getObjectByName",0x863f153f,"h3d.scene.Object.getObjectByName","h3d/scene/Object.hx",413,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_426_clone,"h3d.scene.Object","clone",0x7f38f905,"h3d.scene.Object.clone","h3d/scene/Object.hx",426,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_456_addChild,"h3d.scene.Object","addChild",0x8849e313,"h3d.scene.Object.addChild","h3d/scene/Object.hx",456,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_462_addChildAt,"h3d.scene.Object","addChildAt",0x98d746e6,"h3d.scene.Object.addChildAt","h3d/scene/Object.hx",462,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_494_iterVisibleMeshes,"h3d.scene.Object","iterVisibleMeshes",0xb8c8831d,"h3d.scene.Object.iterVisibleMeshes","h3d/scene/Object.hx",494,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_506_onParentChanged,"h3d.scene.Object","onParentChanged",0xd9621bf3,"h3d.scene.Object.onParentChanged","h3d/scene/Object.hx",506,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_511_onAdd,"h3d.scene.Object","onAdd",0x69376bea,"h3d.scene.Object.onAdd","h3d/scene/Object.hx",511,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_518_onRemove,"h3d.scene.Object","onRemove",0xad68a61b,"h3d.scene.Object.onRemove","h3d/scene/Object.hx",518,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_528_removeChild,"h3d.scene.Object","removeChild",0xc5d31a60,"h3d.scene.Object.removeChild","h3d/scene/Object.hx",528,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_539_removeChildren,"h3d.scene.Object","removeChildren",0xcf647afb,"h3d.scene.Object.removeChildren","h3d/scene/Object.hx",539,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_548_remove,"h3d.scene.Object","remove",0xc8dba99c,"h3d.scene.Object.remove","h3d/scene/Object.hx",548,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_554_getScene,"h3d.scene.Object","getScene",0xa1dbfc2e,"h3d.scene.Object.getScene","h3d/scene/Object.hx",554,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_563_getAbsPos,"h3d.scene.Object","getAbsPos",0x41f7db20,"h3d.scene.Object.getAbsPos","h3d/scene/Object.hx",563,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_571_getRelPos,"h3d.scene.Object","getRelPos",0xc39c3c99,"h3d.scene.Object.getRelPos","h3d/scene/Object.hx",571,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_584_isMesh,"h3d.scene.Object","isMesh",0x2a131c4f,"h3d.scene.Object.isMesh","h3d/scene/Object.hx",584,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_590_toMesh,"h3d.scene.Object","toMesh",0x4265c260,"h3d.scene.Object.toMesh","h3d/scene/Object.hx",590,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_601_getCollider,"h3d.scene.Object","getCollider",0x71af3592,"h3d.scene.Object.getCollider","h3d/scene/Object.hx",601,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_628_getGlobalCollider,"h3d.scene.Object","getGlobalCollider",0x210dd895,"h3d.scene.Object.getGlobalCollider","h3d/scene/Object.hx",628,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_640_getLocalCollider,"h3d.scene.Object","getLocalCollider",0xceeb1ca1,"h3d.scene.Object.getLocalCollider","h3d/scene/Object.hx",640,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_643_draw,"h3d.scene.Object","draw",0xf810b35c,"h3d.scene.Object.draw","h3d/scene/Object.hx",643,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_646_set_follow,"h3d.scene.Object","set_follow",0xb83c3906,"h3d.scene.Object.set_follow","h3d/scene/Object.hx",646,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_651_calcAbsPos,"h3d.scene.Object","calcAbsPos",0x01b2bc0f,"h3d.scene.Object.calcAbsPos","h3d/scene/Object.hx",651,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_684_sync,"h3d.scene.Object","sync",0x020041b3,"h3d.scene.Object.sync","h3d/scene/Object.hx",684,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_687_syncRec,"h3d.scene.Object","syncRec",0xab6e215d,"h3d.scene.Object.syncRec","h3d/scene/Object.hx",687,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_739_syncPos,"h3d.scene.Object","syncPos",0xab6ca5a1,"h3d.scene.Object.syncPos","h3d/scene/Object.hx",739,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_749_emit,"h3d.scene.Object","emit",0xf8b625ab,"h3d.scene.Object.emit","h3d/scene/Object.hx",749,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_752_emitRec,"h3d.scene.Object","emitRec",0xc3350865,"h3d.scene.Object.emitRec","h3d/scene/Object.hx",752,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_773_set_x,"h3d.scene.Object","set_x",0xb1058103,"h3d.scene.Object.set_x","h3d/scene/Object.hx",773,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_779_set_y,"h3d.scene.Object","set_y",0xb1058104,"h3d.scene.Object.set_y","h3d/scene/Object.hx",779,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_785_set_z,"h3d.scene.Object","set_z",0xb1058105,"h3d.scene.Object.set_z","h3d/scene/Object.hx",785,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_791_set_scaleX,"h3d.scene.Object","set_scaleX",0xfacb9223,"h3d.scene.Object.set_scaleX","h3d/scene/Object.hx",791,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_797_set_scaleY,"h3d.scene.Object","set_scaleY",0xfacb9224,"h3d.scene.Object.set_scaleY","h3d/scene/Object.hx",797,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_803_set_scaleZ,"h3d.scene.Object","set_scaleZ",0xfacb9225,"h3d.scene.Object.set_scaleZ","h3d/scene/Object.hx",803,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_809_set_defaultTransform,"h3d.scene.Object","set_defaultTransform",0x80dc6840,"h3d.scene.Object.set_defaultTransform","h3d/scene/Object.hx",809,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_818_setPosition,"h3d.scene.Object","setPosition",0x7d40fe13,"h3d.scene.Object.setPosition","h3d/scene/Object.hx",818,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_830_setTransform,"h3d.scene.Object","setTransform",0x90de8cc2,"h3d.scene.Object.setTransform","h3d/scene/Object.hx",830,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_847_getTransform,"h3d.scene.Object","getTransform",0x7be5694e,"h3d.scene.Object.getTransform","h3d/scene/Object.hx",847,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_861_rotate,"h3d.scene.Object","rotate",0x8f7353b3,"h3d.scene.Object.rotate","h3d/scene/Object.hx",861,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_871_setRotation,"h3d.scene.Object","setRotation",0xbacc9aa8,"h3d.scene.Object.setRotation","h3d/scene/Object.hx",871,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_879_setRotationAxis,"h3d.scene.Object","setRotationAxis",0xacc55769,"h3d.scene.Object.setRotationAxis","h3d/scene/Object.hx",879,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_887_setDirection,"h3d.scene.Object","setDirection",0x5b8bc195,"h3d.scene.Object.setDirection","h3d/scene/Object.hx",887,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_896_getLocalDirection,"h3d.scene.Object","getLocalDirection",0x7dc0e432,"h3d.scene.Object.getLocalDirection","h3d/scene/Object.hx",896,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_904_getRotationQuat,"h3d.scene.Object","getRotationQuat",0xbb8af693,"h3d.scene.Object.getRotationQuat","h3d/scene/Object.hx",904,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_911_setRotationQuat,"h3d.scene.Object","setRotationQuat",0xb756739f,"h3d.scene.Object.setRotationQuat","h3d/scene/Object.hx",911,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_919_scale,"h3d.scene.Object","scale",0xafa4b432,"h3d.scene.Object.scale","h3d/scene/Object.hx",919,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_929_setScale,"h3d.scene.Object","setScale",0x50364ae0,"h3d.scene.Object.setScale","h3d/scene/Object.hx",929,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_940_toString,"h3d.scene.Object","toString",0x01a1e404,"h3d.scene.Object.toString","h3d/scene/Object.hx",940,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_947_getChildAt,"h3d.scene.Object","getChildAt",0x80aea111,"h3d.scene.Object.getChildAt","h3d/scene/Object.hx",947,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_953_getChildIndex,"h3d.scene.Object","getChildIndex",0xae3235b4,"h3d.scene.Object.getChildIndex","h3d/scene/Object.hx",953,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_961_get_numChildren,"h3d.scene.Object","get_numChildren",0x985ea8e4,"h3d.scene.Object.get_numChildren","h3d/scene/Object.hx",961,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_968_iterator,"h3d.scene.Object","iterator",0x5ccd5d46,"h3d.scene.Object.iterator","h3d/scene/Object.hx",968,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_35_boot,"h3d.scene.Object","boot",0xf6bc0b8a,"h3d.scene.Object.boot","h3d/scene/Object.hx",35,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_828_boot,"h3d.scene.Object","boot",0xf6bc0b8a,"h3d.scene.Object.boot","h3d/scene/Object.hx",828,0x76367d66)
HX_LOCAL_STACK_FRAME(_hx_pos_eb74e35b1b6238ec_829_boot,"h3d.scene.Object","boot",0xf6bc0b8a,"h3d.scene.Object.boot","h3d/scene/Object.hx",829,0x76367d66)
namespace h3d{
namespace scene{

void Object_obj::__construct( ::h3d::scene::Object parent){
            	HX_GC_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_176_new)
HXLINE( 177)		int this1 = 0;
HXDLIN( 177)		this->flags = this1;
HXLINE( 178)		this->absPos =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE( 179)		this->absPos->identity();
HXLINE( 180)		{
HXLINE( 180)			this->x = ( (Float)(0) );
HXDLIN( 180)			{
HXLINE( 180)				int f = 1;
HXDLIN( 180)				bool b = true;
HXDLIN( 180)				if (b) {
HXLINE( 180)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 180)					_hx_tmp->flags = (_hx_tmp->flags | f);
            				}
            				else {
HXLINE( 180)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 180)					_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            				}
            			}
            		}
HXDLIN( 180)		{
HXLINE( 180)			this->y = ( (Float)(0) );
HXDLIN( 180)			{
HXLINE( 180)				int f1 = 1;
HXDLIN( 180)				bool b1 = true;
HXDLIN( 180)				if (b1) {
HXLINE( 180)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 180)					_hx_tmp->flags = (_hx_tmp->flags | f1);
            				}
            				else {
HXLINE( 180)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 180)					_hx_tmp->flags = (_hx_tmp->flags & ~(f1));
            				}
            			}
            		}
HXDLIN( 180)		{
HXLINE( 180)			this->z = ( (Float)(0) );
HXDLIN( 180)			{
HXLINE( 180)				int f2 = 1;
HXDLIN( 180)				bool b2 = true;
HXDLIN( 180)				if (b2) {
HXLINE( 180)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 180)					_hx_tmp->flags = (_hx_tmp->flags | f2);
            				}
            				else {
HXLINE( 180)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 180)					_hx_tmp->flags = (_hx_tmp->flags & ~(f2));
            				}
            			}
            		}
HXDLIN( 180)		{
HXLINE( 180)			this->scaleX = ( (Float)(1) );
HXDLIN( 180)			{
HXLINE( 180)				int f3 = 1;
HXDLIN( 180)				bool b3 = true;
HXDLIN( 180)				if (b3) {
HXLINE( 180)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 180)					_hx_tmp->flags = (_hx_tmp->flags | f3);
            				}
            				else {
HXLINE( 180)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 180)					_hx_tmp->flags = (_hx_tmp->flags & ~(f3));
            				}
            			}
            		}
HXDLIN( 180)		{
HXLINE( 180)			this->scaleY = ( (Float)(1) );
HXDLIN( 180)			{
HXLINE( 180)				int f4 = 1;
HXDLIN( 180)				bool b4 = true;
HXDLIN( 180)				if (b4) {
HXLINE( 180)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 180)					_hx_tmp->flags = (_hx_tmp->flags | f4);
            				}
            				else {
HXLINE( 180)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 180)					_hx_tmp->flags = (_hx_tmp->flags & ~(f4));
            				}
            			}
            		}
HXDLIN( 180)		{
HXLINE( 180)			this->scaleZ = ( (Float)(1) );
HXDLIN( 180)			{
HXLINE( 180)				int f5 = 1;
HXDLIN( 180)				bool b5 = true;
HXDLIN( 180)				if (b5) {
HXLINE( 180)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 180)					_hx_tmp->flags = (_hx_tmp->flags | f5);
            				}
            				else {
HXLINE( 180)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 180)					_hx_tmp->flags = (_hx_tmp->flags & ~(f5));
            				}
            			}
            		}
HXLINE( 181)		this->qRot =  ::h3d::Quat_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 182)		{
HXLINE( 182)			int f6 = 1;
HXDLIN( 182)			bool b6 = ::hx::IsNotNull( this->follow );
HXDLIN( 182)			if (b6) {
HXLINE( 182)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp->flags = (_hx_tmp->flags | f6);
            			}
            			else {
HXLINE( 182)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)				_hx_tmp->flags = (_hx_tmp->flags & ~(f6));
            			}
            		}
HXLINE( 183)		{
HXLINE( 183)			int f7 = 2;
HXDLIN( 183)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)			_hx_tmp->flags = (_hx_tmp->flags | f7);
            		}
HXLINE( 184)		this->children = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 185)		if (::hx::IsNotNull( parent )) {
HXLINE( 186)			parent->addChild(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}

Dynamic Object_obj::__CreateEmpty() { return new Object_obj; }

void *Object_obj::_hx_vtable = 0;

Dynamic Object_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Object_obj > _hx_result = new Object_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Object_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1797ae36;
}

static ::hxd::impl::_Serializable::NoSerializeSupport_obj _hx_h3d_scene_Object__hx_hxd_impl__Serializable_NoSerializeSupport= {
};

void *Object_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xa6f1a21a: return &_hx_h3d_scene_Object__hx_hxd_impl__Serializable_NoSerializeSupport;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::Dynamic Object_obj::set_cullingCollider(::Dynamic c){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_156_set_cullingCollider)
HXLINE( 157)		this->cullingCollider = c;
HXLINE( 158)		{
HXLINE( 158)			int f = 4096;
HXDLIN( 158)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 158)			_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            		}
HXLINE( 159)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_cullingCollider,return )

bool Object_obj::get_visible(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_189_get_visible)
HXDLIN( 189)		return ((this->flags & 2) != 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,get_visible,return )

bool Object_obj::get_allocated(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_190_get_allocated)
HXDLIN( 190)		return ((this->flags & 32) != 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,get_allocated,return )

bool Object_obj::get_posChanged(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_191_get_posChanged)
HXDLIN( 191)		return ((this->flags & 1) != 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,get_posChanged,return )

bool Object_obj::get_culled(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_192_get_culled)
HXDLIN( 192)		return ((this->flags & 4) != 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,get_culled,return )

bool Object_obj::get_followPositionOnly(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_193_get_followPositionOnly)
HXDLIN( 193)		return ((this->flags & 8) != 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,get_followPositionOnly,return )

bool Object_obj::get_lightCameraCenter(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_194_get_lightCameraCenter)
HXDLIN( 194)		return ((this->flags & 16) != 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,get_lightCameraCenter,return )

bool Object_obj::get_alwaysSync(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_195_get_alwaysSync)
HXDLIN( 195)		return ((this->flags & 64) != 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,get_alwaysSync,return )

bool Object_obj::get_inheritCulled(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_196_get_inheritCulled)
HXDLIN( 196)		return ((this->flags & 128) != 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,get_inheritCulled,return )

bool Object_obj::get_ignoreBounds(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_197_get_ignoreBounds)
HXDLIN( 197)		return ((this->flags & 512) != 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,get_ignoreBounds,return )

bool Object_obj::get_ignoreCollide(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_198_get_ignoreCollide)
HXDLIN( 198)		return ((this->flags & 1024) != 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,get_ignoreCollide,return )

bool Object_obj::get_allowSerialize(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_199_get_allowSerialize)
HXDLIN( 199)		return ((this->flags & 256) == 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,get_allowSerialize,return )

bool Object_obj::get_ignoreParentTransform(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_200_get_ignoreParentTransform)
HXDLIN( 200)		return ((this->flags & 2048) != 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,get_ignoreParentTransform,return )

bool Object_obj::get_cullingColliderInherited(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_201_get_cullingColliderInherited)
HXDLIN( 201)		return ((this->flags & 4096) != 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,get_cullingColliderInherited,return )

bool Object_obj::set_posChanged(bool b){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_202_set_posChanged)
HXDLIN( 202)		int f = 1;
HXDLIN( 202)		bool b1;
HXDLIN( 202)		if (!(b)) {
HXDLIN( 202)			b1 = ::hx::IsNotNull( this->follow );
            		}
            		else {
HXDLIN( 202)			b1 = true;
            		}
HXDLIN( 202)		if (b1) {
HXDLIN( 202)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 202)			_hx_tmp->flags = (_hx_tmp->flags | f);
            		}
            		else {
HXDLIN( 202)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 202)			_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            		}
HXDLIN( 202)		return b1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_posChanged,return )

bool Object_obj::set_culled(bool b){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_203_set_culled)
HXDLIN( 203)		int f = 4;
HXDLIN( 203)		if (b) {
HXDLIN( 203)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)			_hx_tmp->flags = (_hx_tmp->flags | f);
            		}
            		else {
HXDLIN( 203)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)			_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            		}
HXDLIN( 203)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_culled,return )

bool Object_obj::set_visible(bool b){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_204_set_visible)
HXDLIN( 204)		int f = 2;
HXDLIN( 204)		if (b) {
HXDLIN( 204)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)			_hx_tmp->flags = (_hx_tmp->flags | f);
            		}
            		else {
HXDLIN( 204)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 204)			_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            		}
HXDLIN( 204)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_visible,return )

bool Object_obj::set_allocated(bool b){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_205_set_allocated)
HXDLIN( 205)		int f = 32;
HXDLIN( 205)		if (b) {
HXDLIN( 205)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)			_hx_tmp->flags = (_hx_tmp->flags | f);
            		}
            		else {
HXDLIN( 205)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 205)			_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            		}
HXDLIN( 205)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_allocated,return )

bool Object_obj::set_followPositionOnly(bool b){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_206_set_followPositionOnly)
HXDLIN( 206)		int f = 8;
HXDLIN( 206)		if (b) {
HXDLIN( 206)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 206)			_hx_tmp->flags = (_hx_tmp->flags | f);
            		}
            		else {
HXDLIN( 206)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 206)			_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            		}
HXDLIN( 206)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_followPositionOnly,return )

bool Object_obj::set_lightCameraCenter(bool b){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_207_set_lightCameraCenter)
HXDLIN( 207)		int f = 16;
HXDLIN( 207)		if (b) {
HXDLIN( 207)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 207)			_hx_tmp->flags = (_hx_tmp->flags | f);
            		}
            		else {
HXDLIN( 207)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 207)			_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            		}
HXDLIN( 207)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_lightCameraCenter,return )

bool Object_obj::set_alwaysSync(bool b){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_208_set_alwaysSync)
HXDLIN( 208)		int f = 64;
HXDLIN( 208)		if (b) {
HXDLIN( 208)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 208)			_hx_tmp->flags = (_hx_tmp->flags | f);
            		}
            		else {
HXDLIN( 208)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 208)			_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            		}
HXDLIN( 208)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_alwaysSync,return )

bool Object_obj::set_ignoreBounds(bool b){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_209_set_ignoreBounds)
HXDLIN( 209)		int f = 512;
HXDLIN( 209)		if (b) {
HXDLIN( 209)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 209)			_hx_tmp->flags = (_hx_tmp->flags | f);
            		}
            		else {
HXDLIN( 209)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 209)			_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            		}
HXDLIN( 209)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_ignoreBounds,return )

bool Object_obj::set_inheritCulled(bool b){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_210_set_inheritCulled)
HXDLIN( 210)		int f = 128;
HXDLIN( 210)		if (b) {
HXDLIN( 210)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)			_hx_tmp->flags = (_hx_tmp->flags | f);
            		}
            		else {
HXDLIN( 210)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)			_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            		}
HXDLIN( 210)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_inheritCulled,return )

bool Object_obj::set_ignoreCollide(bool b){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_211_set_ignoreCollide)
HXDLIN( 211)		int f = 1024;
HXDLIN( 211)		if (b) {
HXDLIN( 211)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)			_hx_tmp->flags = (_hx_tmp->flags | f);
            		}
            		else {
HXDLIN( 211)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 211)			_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            		}
HXDLIN( 211)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_ignoreCollide,return )

bool Object_obj::set_allowSerialize(bool b){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_212_set_allowSerialize)
HXDLIN( 212)		int f = 256;
HXDLIN( 212)		bool b1 = !(b);
HXDLIN( 212)		if (b1) {
HXDLIN( 212)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)			_hx_tmp->flags = (_hx_tmp->flags | f);
            		}
            		else {
HXDLIN( 212)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 212)			_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            		}
HXDLIN( 212)		return !(b1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_allowSerialize,return )

bool Object_obj::set_ignoreParentTransform(bool b){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_213_set_ignoreParentTransform)
HXDLIN( 213)		int f = 2048;
HXDLIN( 213)		if (b) {
HXDLIN( 213)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 213)			_hx_tmp->flags = (_hx_tmp->flags | f);
            		}
            		else {
HXDLIN( 213)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 213)			_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            		}
HXDLIN( 213)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_ignoreParentTransform,return )

bool Object_obj::set_cullingColliderInherited(bool b){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_214_set_cullingColliderInherited)
HXDLIN( 214)		int f = 4096;
HXDLIN( 214)		if (b) {
HXDLIN( 214)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 214)			_hx_tmp->flags = (_hx_tmp->flags | f);
            		}
            		else {
HXDLIN( 214)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 214)			_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            		}
HXDLIN( 214)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_cullingColliderInherited,return )

 ::h3d::anim::Animation Object_obj::playAnimation( ::h3d::anim::Animation a){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_220_playAnimation)
HXDLIN( 220)		return (this->currentAnimation = a->createInstance(::hx::ObjectPtr<OBJ_>(this)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,playAnimation,return )

 ::h3d::anim::Animation Object_obj::switchToAnimation( ::h3d::anim::Animation a){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_227_switchToAnimation)
HXDLIN( 227)		return (this->currentAnimation = a);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,switchToAnimation,return )

void Object_obj::stopAnimation( ::Dynamic __o_recursive){
            		 ::Dynamic recursive = __o_recursive;
            		if (::hx::IsNull(__o_recursive)) recursive = false;
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_233_stopAnimation)
HXLINE( 234)		this->currentAnimation = null();
HXLINE( 235)		if (( (bool)(recursive) )) {
HXLINE( 236)			int _g = 0;
HXDLIN( 236)			::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 236)			while((_g < _g1->length)){
HXLINE( 236)				 ::h3d::scene::Object c = _g1->__get(_g).StaticCast<  ::h3d::scene::Object >();
HXDLIN( 236)				_g = (_g + 1);
HXLINE( 237)				c->stopAnimation(true);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,stopAnimation,(void))

void Object_obj::applyAnimationTransform(::hx::Null< bool >  __o_recursive){
            		bool recursive = __o_recursive.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_248_applyAnimationTransform)
HXLINE( 249)		if (::hx::IsNotNull( this->defaultTransform )) {
HXLINE( 250)			 ::h3d::Matrix _this = this->defaultTransform;
HXDLIN( 250)			 ::h3d::Vector v = null();
HXDLIN( 250)			if (::hx::IsNull( v )) {
HXLINE( 250)				v =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXDLIN( 250)			v->x = ::Math_obj::sqrt((((_this->_11 * _this->_11) + (_this->_12 * _this->_12)) + (_this->_13 * _this->_13)));
HXDLIN( 250)			v->y = ::Math_obj::sqrt((((_this->_21 * _this->_21) + (_this->_22 * _this->_22)) + (_this->_23 * _this->_23)));
HXDLIN( 250)			v->z = ::Math_obj::sqrt((((_this->_31 * _this->_31) + (_this->_32 * _this->_32)) + (_this->_33 * _this->_33)));
HXDLIN( 250)			if (((((_this->_11 * ((_this->_22 * _this->_33) - (_this->_23 * _this->_32))) + (_this->_12 * ((_this->_23 * _this->_31) - (_this->_21 * _this->_33)))) + (_this->_13 * ((_this->_21 * _this->_32) - (_this->_22 * _this->_31)))) < 0)) {
HXLINE( 250)				 ::h3d::Vector v1 = v;
HXDLIN( 250)				v1->x = (v1->x * ( (Float)(-1) ));
HXDLIN( 250)				 ::h3d::Vector v2 = v;
HXDLIN( 250)				v2->y = (v2->y * ( (Float)(-1) ));
HXDLIN( 250)				 ::h3d::Vector v3 = v;
HXDLIN( 250)				v3->z = (v3->z * ( (Float)(-1) ));
            			}
HXDLIN( 250)			 ::h3d::Vector s = v;
HXLINE( 251)			{
HXLINE( 251)				Float v1 = s->x;
HXDLIN( 251)				this->scaleX = v1;
HXDLIN( 251)				{
HXLINE( 251)					int f = 1;
HXDLIN( 251)					bool b = true;
HXDLIN( 251)					if (b) {
HXLINE( 251)						 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 251)						_hx_tmp->flags = (_hx_tmp->flags | f);
            					}
            					else {
HXLINE( 251)						 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 251)						_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            					}
            				}
            			}
HXLINE( 252)			{
HXLINE( 252)				Float v2 = s->y;
HXDLIN( 252)				this->scaleY = v2;
HXDLIN( 252)				{
HXLINE( 252)					int f1 = 1;
HXDLIN( 252)					bool b1 = true;
HXDLIN( 252)					if (b1) {
HXLINE( 252)						 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)						_hx_tmp->flags = (_hx_tmp->flags | f1);
            					}
            					else {
HXLINE( 252)						 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)						_hx_tmp->flags = (_hx_tmp->flags & ~(f1));
            					}
            				}
            			}
HXLINE( 253)			{
HXLINE( 253)				Float v3 = s->z;
HXDLIN( 253)				this->scaleZ = v3;
HXDLIN( 253)				{
HXLINE( 253)					int f2 = 1;
HXDLIN( 253)					bool b2 = true;
HXDLIN( 253)					if (b2) {
HXLINE( 253)						 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)						_hx_tmp->flags = (_hx_tmp->flags | f2);
            					}
            					else {
HXLINE( 253)						 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 253)						_hx_tmp->flags = (_hx_tmp->flags & ~(f2));
            					}
            				}
            			}
HXLINE( 254)			this->qRot->initRotateMatrix(this->defaultTransform);
HXLINE( 255)			{
HXLINE( 255)				Float v4 = this->defaultTransform->_41;
HXDLIN( 255)				this->x = v4;
HXDLIN( 255)				{
HXLINE( 255)					int f3 = 1;
HXDLIN( 255)					bool b3 = true;
HXDLIN( 255)					if (b3) {
HXLINE( 255)						 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 255)						_hx_tmp->flags = (_hx_tmp->flags | f3);
            					}
            					else {
HXLINE( 255)						 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 255)						_hx_tmp->flags = (_hx_tmp->flags & ~(f3));
            					}
            				}
            			}
HXLINE( 256)			{
HXLINE( 256)				Float v5 = this->defaultTransform->_42;
HXDLIN( 256)				this->y = v5;
HXDLIN( 256)				{
HXLINE( 256)					int f4 = 1;
HXDLIN( 256)					bool b4 = true;
HXDLIN( 256)					if (b4) {
HXLINE( 256)						 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 256)						_hx_tmp->flags = (_hx_tmp->flags | f4);
            					}
            					else {
HXLINE( 256)						 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 256)						_hx_tmp->flags = (_hx_tmp->flags & ~(f4));
            					}
            				}
            			}
HXLINE( 257)			{
HXLINE( 257)				Float v6 = this->defaultTransform->_43;
HXDLIN( 257)				this->z = v6;
HXDLIN( 257)				{
HXLINE( 257)					int f5 = 1;
HXDLIN( 257)					bool b5 = true;
HXDLIN( 257)					if (b5) {
HXLINE( 257)						 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 257)						_hx_tmp->flags = (_hx_tmp->flags | f5);
            					}
            					else {
HXLINE( 257)						 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 257)						_hx_tmp->flags = (_hx_tmp->flags & ~(f5));
            					}
            				}
            			}
HXLINE( 258)			{
HXLINE( 258)				 ::h3d::Matrix v7 = null();
HXDLIN( 258)				this->defaultTransform = v7;
HXDLIN( 258)				{
HXLINE( 258)					int f6 = 1;
HXDLIN( 258)					bool b6 = true;
HXDLIN( 258)					if (b6) {
HXLINE( 258)						 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 258)						_hx_tmp->flags = (_hx_tmp->flags | f6);
            					}
            					else {
HXLINE( 258)						 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 258)						_hx_tmp->flags = (_hx_tmp->flags & ~(f6));
            					}
            				}
            			}
            		}
HXLINE( 260)		if (recursive) {
HXLINE( 261)			int _g = 0;
HXDLIN( 261)			::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 261)			while((_g < _g1->length)){
HXLINE( 261)				 ::h3d::scene::Object c = _g1->__get(_g).StaticCast<  ::h3d::scene::Object >();
HXDLIN( 261)				_g = (_g + 1);
HXLINE( 262)				c->applyAnimationTransform(null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,applyAnimationTransform,(void))

int Object_obj::getObjectsCount(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_268_getObjectsCount)
HXLINE( 269)		int k = 0;
HXLINE( 270)		{
HXLINE( 270)			int _g = 0;
HXDLIN( 270)			::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 270)			while((_g < _g1->length)){
HXLINE( 270)				 ::h3d::scene::Object c = _g1->__get(_g).StaticCast<  ::h3d::scene::Object >();
HXDLIN( 270)				_g = (_g + 1);
HXLINE( 271)				k = (k + (c->getObjectsCount() + 1));
            			}
            		}
HXLINE( 272)		return k;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,getObjectsCount,return )

 ::h3d::mat::Material Object_obj::getMaterialByName(::String name){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_278_getMaterialByName)
HXLINE( 279)		{
HXLINE( 279)			int _g = 0;
HXDLIN( 279)			::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 279)			while((_g < _g1->length)){
HXLINE( 279)				 ::h3d::scene::Object o = _g1->__get(_g).StaticCast<  ::h3d::scene::Object >();
HXDLIN( 279)				_g = (_g + 1);
HXLINE( 280)				 ::h3d::mat::Material m = o->getMaterialByName(name);
HXLINE( 281)				if (::hx::IsNotNull( m )) {
HXLINE( 281)					return m;
            				}
            			}
            		}
HXLINE( 283)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,getMaterialByName,return )

bool Object_obj::contains( ::h3d::scene::Object o){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_289_contains)
HXLINE( 290)		while(::hx::IsNotNull( o )){
HXLINE( 291)			o = o->parent;
HXLINE( 292)			if (::hx::IsInstanceEq( o,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 292)				return true;
            			}
            		}
HXLINE( 294)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,contains,return )

 ::Dynamic Object_obj::find( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_300_find)
HXLINE( 301)		 ::Dynamic v = f(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 302)		if (::hx::IsNotNull( v )) {
HXLINE( 303)			return v;
            		}
HXLINE( 304)		{
HXLINE( 304)			int _g = 0;
HXDLIN( 304)			::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 304)			while((_g < _g1->length)){
HXLINE( 304)				 ::h3d::scene::Object o = _g1->__get(_g).StaticCast<  ::h3d::scene::Object >();
HXDLIN( 304)				_g = (_g + 1);
HXLINE( 305)				 ::Dynamic v = o->find(f);
HXLINE( 306)				if (::hx::IsNotNull( v )) {
HXLINE( 306)					return v;
            				}
            			}
            		}
HXLINE( 308)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,find,return )

::cpp::VirtualArray Object_obj::findAll( ::Dynamic f,::cpp::VirtualArray arr){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_314_findAll)
HXLINE( 315)		if (::hx::IsNull( arr )) {
HXLINE( 315)			arr = ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE( 316)		 ::Dynamic v = f(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 317)		if (::hx::IsNotNull( v )) {
HXLINE( 318)			arr->push(v);
            		}
HXLINE( 319)		{
HXLINE( 319)			int _g = 0;
HXDLIN( 319)			::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 319)			while((_g < _g1->length)){
HXLINE( 319)				 ::h3d::scene::Object o = _g1->__get(_g).StaticCast<  ::h3d::scene::Object >();
HXDLIN( 319)				_g = (_g + 1);
HXLINE( 320)				o->findAll(f,arr);
            			}
            		}
HXLINE( 321)		return arr;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Object_obj,findAll,return )

::Array< ::Dynamic> Object_obj::getMaterials(::Array< ::Dynamic> a,::hx::Null< bool >  __o_recursive){
            		bool recursive = __o_recursive.Default(true);
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_327_getMaterials)
HXLINE( 328)		if (::hx::IsNull( a )) {
HXLINE( 328)			a = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 329)		if (recursive) {
HXLINE( 330)			int _g = 0;
HXDLIN( 330)			::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 330)			while((_g < _g1->length)){
HXLINE( 330)				 ::h3d::scene::Object o = _g1->__get(_g).StaticCast<  ::h3d::scene::Object >();
HXDLIN( 330)				_g = (_g + 1);
HXLINE( 331)				o->getMaterials(a,null());
            			}
            		}
HXLINE( 333)		return a;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Object_obj,getMaterials,return )

 ::h3d::col::Point Object_obj::localToGlobal( ::h3d::col::Point pt){
            	HX_GC_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_339_localToGlobal)
HXLINE( 340)		this->syncPos();
HXLINE( 341)		if (::hx::IsNull( pt )) {
HXLINE( 341)			pt =  ::h3d::col::Point_obj::__alloc( HX_CTX ,null(),null(),null());
            		}
HXLINE( 342)		{
HXLINE( 342)			 ::h3d::Matrix m = this->absPos;
HXDLIN( 342)			Float px = ((((pt->x * m->_11) + (pt->y * m->_21)) + (pt->z * m->_31)) + m->_41);
HXDLIN( 342)			Float py = ((((pt->x * m->_12) + (pt->y * m->_22)) + (pt->z * m->_32)) + m->_42);
HXDLIN( 342)			Float pz = ((((pt->x * m->_13) + (pt->y * m->_23)) + (pt->z * m->_33)) + m->_43);
HXDLIN( 342)			pt->x = px;
HXDLIN( 342)			pt->y = py;
HXDLIN( 342)			pt->z = pz;
            		}
HXLINE( 343)		return pt;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,localToGlobal,return )

 ::h3d::col::Point Object_obj::globalToLocal( ::h3d::col::Point pt){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_349_globalToLocal)
HXLINE( 350)		{
HXLINE( 350)			 ::h3d::Matrix m = this->getInvPos();
HXDLIN( 350)			Float px = ((((pt->x * m->_11) + (pt->y * m->_21)) + (pt->z * m->_31)) + m->_41);
HXDLIN( 350)			Float py = ((((pt->x * m->_12) + (pt->y * m->_22)) + (pt->z * m->_32)) + m->_42);
HXDLIN( 350)			Float pz = ((((pt->x * m->_13) + (pt->y * m->_23)) + (pt->z * m->_33)) + m->_43);
HXDLIN( 350)			pt->x = px;
HXDLIN( 350)			pt->y = py;
HXDLIN( 350)			pt->z = pz;
            		}
HXLINE( 351)		return pt;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,globalToLocal,return )

 ::h3d::Matrix Object_obj::getInvPos(){
            	HX_GC_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_357_getInvPos)
HXLINE( 358)		this->syncPos();
HXLINE( 359)		if (::hx::IsNull( this->invPos )) {
HXLINE( 360)			this->invPos =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE( 361)			this->invPos->_44 = ( (Float)(0) );
            		}
HXLINE( 363)		if ((this->invPos->_44 == 0)) {
HXLINE( 364)			this->invPos->inverse3x4(this->absPos);
            		}
HXLINE( 365)		return this->invPos;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,getInvPos,return )

 ::h3d::col::Bounds Object_obj::getBounds( ::h3d::col::Bounds b){
            	HX_GC_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_371_getBounds)
HXLINE( 372)		if (::hx::IsNull( b )) {
HXLINE( 373)			b =  ::h3d::col::Bounds_obj::__alloc( HX_CTX );
            		}
HXLINE( 374)		if (::hx::IsNotNull( this->parent )) {
HXLINE( 375)			this->parent->syncPos();
            		}
HXLINE( 376)		return this->getBoundsRec(b);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,getBounds,return )

 ::h3d::col::Bounds Object_obj::getBoundsRec( ::h3d::col::Bounds b){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_379_getBoundsRec)
HXLINE( 380)		if (((this->flags & 1) != 0)) {
HXLINE( 381)			{
HXLINE( 381)				int _g = 0;
HXDLIN( 381)				::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 381)				while((_g < _g1->length)){
HXLINE( 381)					 ::h3d::scene::Object c = _g1->__get(_g).StaticCast<  ::h3d::scene::Object >();
HXDLIN( 381)					_g = (_g + 1);
HXLINE( 382)					{
HXLINE( 382)						int f = 1;
HXDLIN( 382)						bool b = true;
HXDLIN( 382)						if (b) {
HXLINE( 382)							 ::h3d::scene::Object c1 = c;
HXDLIN( 382)							c1->flags = (c1->flags | f);
            						}
            						else {
HXLINE( 382)							 ::h3d::scene::Object c1 = c;
HXDLIN( 382)							c1->flags = (c1->flags & ~(f));
            						}
            					}
            				}
            			}
HXLINE( 383)			{
HXLINE( 383)				int f = 1;
HXDLIN( 383)				bool b = ::hx::IsNotNull( this->follow );
HXDLIN( 383)				if (b) {
HXLINE( 383)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 383)					_hx_tmp->flags = (_hx_tmp->flags | f);
            				}
            				else {
HXLINE( 383)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 383)					_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            				}
            			}
HXLINE( 384)			this->calcAbsPos();
            		}
HXLINE( 386)		{
HXLINE( 386)			int _g = 0;
HXDLIN( 386)			::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 386)			while((_g < _g1->length)){
HXLINE( 386)				 ::h3d::scene::Object c = _g1->__get(_g).StaticCast<  ::h3d::scene::Object >();
HXDLIN( 386)				_g = (_g + 1);
HXLINE( 387)				c->getBoundsRec(b);
            			}
            		}
HXLINE( 388)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,getBoundsRec,return )

::Array< ::Dynamic> Object_obj::getMeshes(::Array< ::Dynamic> out){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_394_getMeshes)
HXLINE( 395)		if (::hx::IsNull( out )) {
HXLINE( 395)			out = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 396)		 ::h3d::scene::Mesh m = ( ( ::h3d::scene::Mesh)(::Std_obj::downcast(::hx::ObjectPtr<OBJ_>(this),::hx::ClassOf< ::h3d::scene::Mesh >())) );
HXLINE( 397)		if (::hx::IsNotNull( m )) {
HXLINE( 397)			out->push(m);
            		}
HXLINE( 398)		{
HXLINE( 398)			int _g = 0;
HXDLIN( 398)			::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 398)			while((_g < _g1->length)){
HXLINE( 398)				 ::h3d::scene::Object c = _g1->__get(_g).StaticCast<  ::h3d::scene::Object >();
HXDLIN( 398)				_g = (_g + 1);
HXLINE( 399)				c->getMeshes(out);
            			}
            		}
HXLINE( 400)		return out;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,getMeshes,return )

 ::h3d::scene::Mesh Object_obj::getMeshByName(::String name){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_407_getMeshByName)
HXDLIN( 407)		return ( ( ::h3d::scene::Mesh)(::Std_obj::downcast(this->getObjectByName(name),::hx::ClassOf< ::h3d::scene::Mesh >())) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,getMeshByName,return )

 ::h3d::scene::Object Object_obj::getObjectByName(::String name){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_413_getObjectByName)
HXLINE( 414)		if ((this->name == name)) {
HXLINE( 415)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 416)		{
HXLINE( 416)			int _g = 0;
HXDLIN( 416)			::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 416)			while((_g < _g1->length)){
HXLINE( 416)				 ::h3d::scene::Object c = _g1->__get(_g).StaticCast<  ::h3d::scene::Object >();
HXDLIN( 416)				_g = (_g + 1);
HXLINE( 417)				 ::h3d::scene::Object o = c->getObjectByName(name);
HXLINE( 418)				if (::hx::IsNotNull( o )) {
HXLINE( 418)					return o;
            				}
            			}
            		}
HXLINE( 420)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,getObjectByName,return )

 ::h3d::scene::Object Object_obj::clone( ::h3d::scene::Object o){
            	HX_GC_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_426_clone)
HXLINE( 427)		if (::hx::IsNull( o )) {
HXLINE( 427)			o =  ::h3d::scene::Object_obj::__alloc( HX_CTX ,null());
            		}
HXLINE( 431)		{
HXLINE( 431)			Float v = this->x;
HXDLIN( 431)			o->x = v;
HXDLIN( 431)			{
HXLINE( 431)				int f = 1;
HXDLIN( 431)				bool b = true;
HXDLIN( 431)				if (b) {
HXLINE( 431)					 ::h3d::scene::Object o1 = o;
HXDLIN( 431)					o1->flags = (o1->flags | f);
            				}
            				else {
HXLINE( 431)					 ::h3d::scene::Object o1 = o;
HXDLIN( 431)					o1->flags = (o1->flags & ~(f));
            				}
            			}
            		}
HXLINE( 432)		{
HXLINE( 432)			Float v1 = this->y;
HXDLIN( 432)			o->y = v1;
HXDLIN( 432)			{
HXLINE( 432)				int f1 = 1;
HXDLIN( 432)				bool b1 = true;
HXDLIN( 432)				if (b1) {
HXLINE( 432)					 ::h3d::scene::Object o1 = o;
HXDLIN( 432)					o1->flags = (o1->flags | f1);
            				}
            				else {
HXLINE( 432)					 ::h3d::scene::Object o1 = o;
HXDLIN( 432)					o1->flags = (o1->flags & ~(f1));
            				}
            			}
            		}
HXLINE( 433)		{
HXLINE( 433)			Float v2 = this->z;
HXDLIN( 433)			o->z = v2;
HXDLIN( 433)			{
HXLINE( 433)				int f2 = 1;
HXDLIN( 433)				bool b2 = true;
HXDLIN( 433)				if (b2) {
HXLINE( 433)					 ::h3d::scene::Object o1 = o;
HXDLIN( 433)					o1->flags = (o1->flags | f2);
            				}
            				else {
HXLINE( 433)					 ::h3d::scene::Object o1 = o;
HXDLIN( 433)					o1->flags = (o1->flags & ~(f2));
            				}
            			}
            		}
HXLINE( 434)		{
HXLINE( 434)			Float v3 = this->scaleX;
HXDLIN( 434)			o->scaleX = v3;
HXDLIN( 434)			{
HXLINE( 434)				int f3 = 1;
HXDLIN( 434)				bool b3 = true;
HXDLIN( 434)				if (b3) {
HXLINE( 434)					 ::h3d::scene::Object o1 = o;
HXDLIN( 434)					o1->flags = (o1->flags | f3);
            				}
            				else {
HXLINE( 434)					 ::h3d::scene::Object o1 = o;
HXDLIN( 434)					o1->flags = (o1->flags & ~(f3));
            				}
            			}
            		}
HXLINE( 435)		{
HXLINE( 435)			Float v4 = this->scaleY;
HXDLIN( 435)			o->scaleY = v4;
HXDLIN( 435)			{
HXLINE( 435)				int f4 = 1;
HXDLIN( 435)				bool b4 = true;
HXDLIN( 435)				if (b4) {
HXLINE( 435)					 ::h3d::scene::Object o1 = o;
HXDLIN( 435)					o1->flags = (o1->flags | f4);
            				}
            				else {
HXLINE( 435)					 ::h3d::scene::Object o1 = o;
HXDLIN( 435)					o1->flags = (o1->flags & ~(f4));
            				}
            			}
            		}
HXLINE( 436)		{
HXLINE( 436)			Float v5 = this->scaleZ;
HXDLIN( 436)			o->scaleZ = v5;
HXDLIN( 436)			{
HXLINE( 436)				int f5 = 1;
HXDLIN( 436)				bool b5 = true;
HXDLIN( 436)				if (b5) {
HXLINE( 436)					 ::h3d::scene::Object o1 = o;
HXDLIN( 436)					o1->flags = (o1->flags | f5);
            				}
            				else {
HXLINE( 436)					 ::h3d::scene::Object o1 = o;
HXDLIN( 436)					o1->flags = (o1->flags & ~(f5));
            				}
            			}
            		}
HXLINE( 437)		{
HXLINE( 437)			 ::h3d::Quat _this = o->qRot;
HXDLIN( 437)			 ::h3d::Quat q = this->qRot;
HXDLIN( 437)			_this->x = q->x;
HXDLIN( 437)			_this->y = q->y;
HXDLIN( 437)			_this->z = q->z;
HXDLIN( 437)			_this->w = q->w;
            		}
HXLINE( 438)		o->name = this->name;
HXLINE( 439)		o->set_follow(this->follow);
HXLINE( 440)		{
HXLINE( 440)			bool b6 = ((this->flags & 8) != 0);
HXDLIN( 440)			int f6 = 8;
HXDLIN( 440)			if (b6) {
HXLINE( 440)				 ::h3d::scene::Object o1 = o;
HXDLIN( 440)				o1->flags = (o1->flags | f6);
            			}
            			else {
HXLINE( 440)				 ::h3d::scene::Object o1 = o;
HXDLIN( 440)				o1->flags = (o1->flags & ~(f6));
            			}
            		}
HXLINE( 441)		{
HXLINE( 441)			bool b7 = ((this->flags & 2) != 0);
HXDLIN( 441)			int f7 = 2;
HXDLIN( 441)			if (b7) {
HXLINE( 441)				 ::h3d::scene::Object o1 = o;
HXDLIN( 441)				o1->flags = (o1->flags | f7);
            			}
            			else {
HXLINE( 441)				 ::h3d::scene::Object o1 = o;
HXDLIN( 441)				o1->flags = (o1->flags & ~(f7));
            			}
            		}
HXLINE( 442)		if (::hx::IsNotNull( this->defaultTransform )) {
HXLINE( 443)			 ::h3d::Matrix v = this->defaultTransform->clone();
HXDLIN( 443)			o->defaultTransform = v;
HXDLIN( 443)			{
HXLINE( 443)				int f = 1;
HXDLIN( 443)				bool b = true;
HXDLIN( 443)				if (b) {
HXLINE( 443)					 ::h3d::scene::Object o1 = o;
HXDLIN( 443)					o1->flags = (o1->flags | f);
            				}
            				else {
HXLINE( 443)					 ::h3d::scene::Object o1 = o;
HXDLIN( 443)					o1->flags = (o1->flags & ~(f));
            				}
            			}
            		}
HXLINE( 444)		{
HXLINE( 444)			int _g = 0;
HXDLIN( 444)			::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 444)			while((_g < _g1->length)){
HXLINE( 444)				 ::h3d::scene::Object c = _g1->__get(_g).StaticCast<  ::h3d::scene::Object >();
HXDLIN( 444)				_g = (_g + 1);
HXLINE( 445)				 ::h3d::scene::Object c1 = c->clone(null());
HXLINE( 446)				c1->parent = o;
HXLINE( 447)				o->children->push(c1);
            			}
            		}
HXLINE( 449)		return o;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,clone,return )

void Object_obj::addChild( ::h3d::scene::Object o){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_456_addChild)
HXDLIN( 456)		this->addChildAt(o,this->children->length);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,addChild,(void))

void Object_obj::addChildAt( ::h3d::scene::Object o,int pos){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_462_addChildAt)
HXLINE( 463)		if ((pos < 0)) {
HXLINE( 463)			pos = 0;
            		}
HXLINE( 464)		if ((pos > this->children->length)) {
HXLINE( 464)			pos = this->children->length;
            		}
HXLINE( 465)		 ::h3d::scene::Object p = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 466)		while(::hx::IsNotNull( p )){
HXLINE( 467)			if (::hx::IsInstanceEq( p,o )) {
HXLINE( 467)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Recursive addChild",49,6a,2a,0c)));
            			}
HXLINE( 468)			p = p->parent;
            		}
HXLINE( 470)		if (::hx::IsNotNull( o->parent )) {
HXLINE( 472)			bool old = ((o->flags & 32) != 0);
HXLINE( 473)			{
HXLINE( 473)				int f = 32;
HXDLIN( 473)				 ::h3d::scene::Object o1 = o;
HXDLIN( 473)				o1->flags = (o1->flags & ~(f));
            			}
HXLINE( 474)			o->parent->removeChild(o);
HXLINE( 475)			{
HXLINE( 475)				int f1 = 32;
HXDLIN( 475)				if (old) {
HXLINE( 475)					 ::h3d::scene::Object o1 = o;
HXDLIN( 475)					o1->flags = (o1->flags | f1);
            				}
            				else {
HXLINE( 475)					 ::h3d::scene::Object o1 = o;
HXDLIN( 475)					o1->flags = (o1->flags & ~(f1));
            				}
            			}
            		}
HXLINE( 477)		this->children->insert(pos,o);
HXLINE( 478)		bool _hx_tmp;
HXDLIN( 478)		if (((this->flags & 32) == 0)) {
HXLINE( 478)			_hx_tmp = ((o->flags & 32) != 0);
            		}
            		else {
HXLINE( 478)			_hx_tmp = false;
            		}
HXDLIN( 478)		if (_hx_tmp) {
HXLINE( 479)			o->onRemove();
            		}
HXLINE( 480)		o->parent = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 481)		{
HXLINE( 481)			int f = 1;
HXDLIN( 481)			bool b = true;
HXDLIN( 481)			if (b) {
HXLINE( 481)				 ::h3d::scene::Object o1 = o;
HXDLIN( 481)				o1->flags = (o1->flags | f);
            			}
            			else {
HXLINE( 481)				 ::h3d::scene::Object o1 = o;
HXDLIN( 481)				o1->flags = (o1->flags & ~(f));
            			}
            		}
HXLINE( 483)		if (((this->flags & 32) != 0)) {
HXLINE( 484)			if (((o->flags & 32) == 0)) {
HXLINE( 485)				o->onAdd();
            			}
            			else {
HXLINE( 487)				o->onParentChanged();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Object_obj,addChildAt,(void))

void Object_obj::iterVisibleMeshes( ::Dynamic callb){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_494_iterVisibleMeshes)
HXLINE( 495)		bool _hx_tmp;
HXDLIN( 495)		if (((this->flags & 2) != 0)) {
HXLINE( 495)			if (((this->flags & 4) != 0)) {
HXLINE( 495)				_hx_tmp = ((this->flags & 128) != 0);
            			}
            			else {
HXLINE( 495)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 495)			_hx_tmp = true;
            		}
HXDLIN( 495)		if (_hx_tmp) {
HXLINE( 496)			return;
            		}
HXLINE( 497)		if (((this->flags & 4) == 0)) {
HXLINE( 498)			 ::h3d::scene::Mesh m = ( ( ::h3d::scene::Mesh)(::Std_obj::downcast(::hx::ObjectPtr<OBJ_>(this),::hx::ClassOf< ::h3d::scene::Mesh >())) );
HXLINE( 499)			if (::hx::IsNotNull( m )) {
HXLINE( 499)				callb(m);
            			}
            		}
HXLINE( 501)		{
HXLINE( 501)			int _g = 0;
HXDLIN( 501)			::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 501)			while((_g < _g1->length)){
HXLINE( 501)				 ::h3d::scene::Object o = _g1->__get(_g).StaticCast<  ::h3d::scene::Object >();
HXDLIN( 501)				_g = (_g + 1);
HXLINE( 502)				o->iterVisibleMeshes(callb);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,iterVisibleMeshes,(void))

void Object_obj::onParentChanged(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_506_onParentChanged)
HXDLIN( 506)		int _g = 0;
HXDLIN( 506)		::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 506)		while((_g < _g1->length)){
HXDLIN( 506)			 ::h3d::scene::Object c = _g1->__get(_g).StaticCast<  ::h3d::scene::Object >();
HXDLIN( 506)			_g = (_g + 1);
HXLINE( 507)			c->onParentChanged();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,onParentChanged,(void))

void Object_obj::onAdd(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_511_onAdd)
HXLINE( 512)		{
HXLINE( 512)			int f = 32;
HXDLIN( 512)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 512)			_hx_tmp->flags = (_hx_tmp->flags | f);
            		}
HXLINE( 513)		{
HXLINE( 513)			int _g = 0;
HXDLIN( 513)			::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 513)			while((_g < _g1->length)){
HXLINE( 513)				 ::h3d::scene::Object c = _g1->__get(_g).StaticCast<  ::h3d::scene::Object >();
HXDLIN( 513)				_g = (_g + 1);
HXLINE( 514)				c->onAdd();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,onAdd,(void))

void Object_obj::onRemove(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_518_onRemove)
HXLINE( 519)		{
HXLINE( 519)			int f = 32;
HXDLIN( 519)			 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 519)			_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            		}
HXLINE( 520)		{
HXLINE( 520)			int _g = 0;
HXDLIN( 520)			::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 520)			while((_g < _g1->length)){
HXLINE( 520)				 ::h3d::scene::Object c = _g1->__get(_g).StaticCast<  ::h3d::scene::Object >();
HXDLIN( 520)				_g = (_g + 1);
HXLINE( 521)				c->onRemove();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,onRemove,(void))

void Object_obj::removeChild( ::h3d::scene::Object o){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_528_removeChild)
HXDLIN( 528)		if (this->children->remove(o)) {
HXLINE( 529)			if (((o->flags & 32) != 0)) {
HXLINE( 529)				o->onRemove();
            			}
HXLINE( 530)			o->parent = null();
HXLINE( 531)			{
HXLINE( 531)				int f = 1;
HXDLIN( 531)				bool b = true;
HXDLIN( 531)				if (b) {
HXLINE( 531)					 ::h3d::scene::Object o1 = o;
HXDLIN( 531)					o1->flags = (o1->flags | f);
            				}
            				else {
HXLINE( 531)					 ::h3d::scene::Object o1 = o;
HXDLIN( 531)					o1->flags = (o1->flags & ~(f));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,removeChild,(void))

void Object_obj::removeChildren(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_539_removeChildren)
HXDLIN( 539)		while((this->children->length > 0)){
HXLINE( 540)			this->removeChild(this->children->__get(0).StaticCast<  ::h3d::scene::Object >());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,removeChildren,(void))

void Object_obj::remove(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_548_remove)
HXDLIN( 548)		if (::hx::IsNotNull( this->parent )) {
HXDLIN( 548)			this->parent->removeChild(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,remove,(void))

 ::h3d::scene::Scene Object_obj::getScene(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_554_getScene)
HXLINE( 555)		 ::h3d::scene::Object p = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 556)		while(::hx::IsNotNull( p->parent )){
HXLINE( 556)			p = p->parent;
            		}
HXLINE( 557)		return ( ( ::h3d::scene::Scene)(::Std_obj::downcast(p,::hx::ClassOf< ::h3d::scene::Scene >())) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,getScene,return )

 ::h3d::Matrix Object_obj::getAbsPos(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_563_getAbsPos)
HXLINE( 564)		this->syncPos();
HXLINE( 565)		return this->absPos;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,getAbsPos,return )

 ::h3d::Matrix Object_obj::getRelPos( ::h3d::scene::Object obj){
            	HX_GC_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_571_getRelPos)
HXLINE( 572)		if (::hx::IsNull( obj )) {
HXLINE( 573)			return this->getAbsPos();
            		}
HXLINE( 574)		this->syncPos();
HXLINE( 575)		 ::h3d::Matrix m =  ::h3d::Matrix_obj::__alloc( HX_CTX );
HXLINE( 576)		 ::h3d::Matrix _hx_tmp = this->absPos;
HXDLIN( 576)		m->multiply(_hx_tmp,obj->getInvPos());
HXLINE( 577)		return m;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,getRelPos,return )

bool Object_obj::isMesh(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_584_isMesh)
HXDLIN( 584)		return ::hx::IsNotNull( ( ( ::h3d::scene::Mesh)(::Std_obj::downcast(::hx::ObjectPtr<OBJ_>(this),::hx::ClassOf< ::h3d::scene::Mesh >())) ) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,isMesh,return )

 ::h3d::scene::Mesh Object_obj::toMesh(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_590_toMesh)
HXLINE( 591)		 ::h3d::scene::Mesh m = ( ( ::h3d::scene::Mesh)(::Std_obj::downcast(::hx::ObjectPtr<OBJ_>(this),::hx::ClassOf< ::h3d::scene::Mesh >())) );
HXLINE( 592)		if (::hx::IsNotNull( m )) {
HXLINE( 593)			return m;
            		}
HXLINE( 594)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((::Std_obj::string(::hx::ObjectPtr<OBJ_>(this)) + HX_(" is not a Mesh",ef,29,43,33))));
HXDLIN( 594)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,toMesh,return )

::Dynamic Object_obj::getCollider(){
            	HX_GC_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_601_getCollider)
HXLINE( 602)		if (((this->flags & 1024) != 0)) {
HXLINE( 603)			return null();
            		}
HXLINE( 604)		::Array< ::Dynamic> colliders = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 605)		::Dynamic col = this->getGlobalCollider();
HXLINE( 606)		if (::hx::IsNotNull( col )) {
HXLINE( 607)			colliders->push(col);
            		}
HXLINE( 608)		{
HXLINE( 608)			int _g = 0;
HXDLIN( 608)			::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 608)			while((_g < _g1->length)){
HXLINE( 608)				 ::h3d::scene::Object obj = _g1->__get(_g).StaticCast<  ::h3d::scene::Object >();
HXDLIN( 608)				_g = (_g + 1);
HXLINE( 609)				::Dynamic c = obj->getCollider();
HXLINE( 610)				if (::hx::IsNull( c )) {
HXLINE( 610)					continue;
            				}
HXLINE( 611)				 ::h3d::col::GroupCollider cgrp = ( ( ::h3d::col::GroupCollider)(::Std_obj::downcast(c,::hx::ClassOf< ::h3d::col::GroupCollider >())) );
HXLINE( 612)				if (::hx::IsNotNull( cgrp )) {
HXLINE( 613)					int _g = 0;
HXDLIN( 613)					::Array< ::Dynamic> _g1 = cgrp->colliders;
HXDLIN( 613)					while((_g < _g1->length)){
HXLINE( 613)						::Dynamic c = _g1->__get(_g);
HXDLIN( 613)						_g = (_g + 1);
HXLINE( 614)						colliders->push(c);
            					}
            				}
            				else {
HXLINE( 616)					colliders->push(c);
            				}
            			}
            		}
HXLINE( 618)		if ((colliders->length == 0)) {
HXLINE( 619)			return null();
            		}
HXLINE( 620)		if ((colliders->length == 1)) {
HXLINE( 621)			return colliders->__get(0);
            		}
HXLINE( 622)		return  ::h3d::col::GroupCollider_obj::__alloc( HX_CTX ,colliders);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,getCollider,return )

::Dynamic Object_obj::getGlobalCollider(){
            	HX_GC_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_628_getGlobalCollider)
HXLINE( 629)		if (((this->flags & 1024) != 0)) {
HXLINE( 630)			return null();
            		}
HXLINE( 631)		::Dynamic col = this->getLocalCollider();
HXLINE( 632)		if (::hx::IsNull( col )) {
HXLINE( 632)			return null();
            		}
            		else {
HXLINE( 632)			return  ::h3d::col::ObjectCollider_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),col);
            		}
HXDLIN( 632)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,getGlobalCollider,return )

::Dynamic Object_obj::getLocalCollider(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_640_getLocalCollider)
HXDLIN( 640)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,getLocalCollider,return )

void Object_obj::draw( ::h3d::scene::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_643_draw)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,draw,(void))

 ::h3d::scene::Object Object_obj::set_follow( ::h3d::scene::Object v){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_646_set_follow)
HXLINE( 647)		{
HXLINE( 647)			int f = 1;
HXDLIN( 647)			bool b = true;
HXDLIN( 647)			if (b) {
HXLINE( 647)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 647)				_hx_tmp->flags = (_hx_tmp->flags | f);
            			}
            			else {
HXLINE( 647)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 647)				_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            			}
            		}
HXLINE( 648)		return (this->follow = v);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_follow,return )

void Object_obj::calcAbsPos(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_651_calcAbsPos)
HXLINE( 652)		this->qRot->toMatrix(this->absPos);
HXLINE( 654)		 ::h3d::Matrix fh = this->absPos;
HXDLIN( 654)		fh->_11 = (fh->_11 * this->scaleX);
HXLINE( 655)		 ::h3d::Matrix fh1 = this->absPos;
HXDLIN( 655)		fh1->_12 = (fh1->_12 * this->scaleX);
HXLINE( 656)		 ::h3d::Matrix fh2 = this->absPos;
HXDLIN( 656)		fh2->_13 = (fh2->_13 * this->scaleX);
HXLINE( 657)		 ::h3d::Matrix fh3 = this->absPos;
HXDLIN( 657)		fh3->_21 = (fh3->_21 * this->scaleY);
HXLINE( 658)		 ::h3d::Matrix fh4 = this->absPos;
HXDLIN( 658)		fh4->_22 = (fh4->_22 * this->scaleY);
HXLINE( 659)		 ::h3d::Matrix fh5 = this->absPos;
HXDLIN( 659)		fh5->_23 = (fh5->_23 * this->scaleY);
HXLINE( 660)		 ::h3d::Matrix fh6 = this->absPos;
HXDLIN( 660)		fh6->_31 = (fh6->_31 * this->scaleZ);
HXLINE( 661)		 ::h3d::Matrix fh7 = this->absPos;
HXDLIN( 661)		fh7->_32 = (fh7->_32 * this->scaleZ);
HXLINE( 662)		 ::h3d::Matrix fh8 = this->absPos;
HXDLIN( 662)		fh8->_33 = (fh8->_33 * this->scaleZ);
HXLINE( 663)		this->absPos->_41 = this->x;
HXLINE( 664)		this->absPos->_42 = this->y;
HXLINE( 665)		this->absPos->_43 = this->z;
HXLINE( 666)		if (::hx::IsNotNull( this->follow )) {
HXLINE( 667)			this->follow->syncPos();
HXLINE( 668)			if (((this->flags & 8) != 0)) {
HXLINE( 669)				{
HXLINE( 669)					 ::h3d::Matrix _this = this->absPos;
HXDLIN( 669)					 ::h3d::Matrix a = this->absPos;
HXDLIN( 669)					 ::h3d::Matrix b = this->parent->absPos;
HXDLIN( 669)					Float m11 = a->_11;
HXDLIN( 669)					Float m12 = a->_12;
HXDLIN( 669)					Float m13 = a->_13;
HXDLIN( 669)					Float m21 = a->_21;
HXDLIN( 669)					Float m22 = a->_22;
HXDLIN( 669)					Float m23 = a->_23;
HXDLIN( 669)					Float a31 = a->_31;
HXDLIN( 669)					Float a32 = a->_32;
HXDLIN( 669)					Float a33 = a->_33;
HXDLIN( 669)					Float a41 = a->_41;
HXDLIN( 669)					Float a42 = a->_42;
HXDLIN( 669)					Float a43 = a->_43;
HXDLIN( 669)					Float b11 = b->_11;
HXDLIN( 669)					Float b12 = b->_12;
HXDLIN( 669)					Float b13 = b->_13;
HXDLIN( 669)					Float b21 = b->_21;
HXDLIN( 669)					Float b22 = b->_22;
HXDLIN( 669)					Float b23 = b->_23;
HXDLIN( 669)					Float b31 = b->_31;
HXDLIN( 669)					Float b32 = b->_32;
HXDLIN( 669)					Float b33 = b->_33;
HXDLIN( 669)					Float b41 = b->_41;
HXDLIN( 669)					Float b42 = b->_42;
HXDLIN( 669)					Float b43 = b->_43;
HXDLIN( 669)					_this->_11 = (((m11 * b11) + (m12 * b21)) + (m13 * b31));
HXDLIN( 669)					_this->_12 = (((m11 * b12) + (m12 * b22)) + (m13 * b32));
HXDLIN( 669)					_this->_13 = (((m11 * b13) + (m12 * b23)) + (m13 * b33));
HXDLIN( 669)					_this->_14 = ( (Float)(0) );
HXDLIN( 669)					_this->_21 = (((m21 * b11) + (m22 * b21)) + (m23 * b31));
HXDLIN( 669)					_this->_22 = (((m21 * b12) + (m22 * b22)) + (m23 * b32));
HXDLIN( 669)					_this->_23 = (((m21 * b13) + (m22 * b23)) + (m23 * b33));
HXDLIN( 669)					_this->_24 = ( (Float)(0) );
HXDLIN( 669)					_this->_31 = (((a31 * b11) + (a32 * b21)) + (a33 * b31));
HXDLIN( 669)					_this->_32 = (((a31 * b12) + (a32 * b22)) + (a33 * b32));
HXDLIN( 669)					_this->_33 = (((a31 * b13) + (a32 * b23)) + (a33 * b33));
HXDLIN( 669)					_this->_34 = ( (Float)(0) );
HXDLIN( 669)					_this->_41 = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + b41);
HXDLIN( 669)					_this->_42 = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + b42);
HXDLIN( 669)					_this->_43 = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + b43);
HXDLIN( 669)					_this->_44 = ( (Float)(1) );
            				}
HXLINE( 670)				this->absPos->_41 = (this->x + this->follow->absPos->_41);
HXLINE( 671)				this->absPos->_42 = (this->y + this->follow->absPos->_42);
HXLINE( 672)				this->absPos->_43 = (this->z + this->follow->absPos->_43);
            			}
            			else {
HXLINE( 674)				this->absPos->multiply3x4(this->absPos,this->follow->absPos);
            			}
            		}
            		else {
HXLINE( 675)			bool _hx_tmp;
HXDLIN( 675)			if (::hx::IsNotNull( this->parent )) {
HXLINE( 675)				_hx_tmp = ((this->flags & 2048) == 0);
            			}
            			else {
HXLINE( 675)				_hx_tmp = false;
            			}
HXDLIN( 675)			if (_hx_tmp) {
HXLINE( 676)				 ::h3d::Matrix _this = this->absPos;
HXDLIN( 676)				 ::h3d::Matrix a = this->absPos;
HXDLIN( 676)				 ::h3d::Matrix b = this->parent->absPos;
HXDLIN( 676)				Float m11 = a->_11;
HXDLIN( 676)				Float m12 = a->_12;
HXDLIN( 676)				Float m13 = a->_13;
HXDLIN( 676)				Float m21 = a->_21;
HXDLIN( 676)				Float m22 = a->_22;
HXDLIN( 676)				Float m23 = a->_23;
HXDLIN( 676)				Float a31 = a->_31;
HXDLIN( 676)				Float a32 = a->_32;
HXDLIN( 676)				Float a33 = a->_33;
HXDLIN( 676)				Float a41 = a->_41;
HXDLIN( 676)				Float a42 = a->_42;
HXDLIN( 676)				Float a43 = a->_43;
HXDLIN( 676)				Float b11 = b->_11;
HXDLIN( 676)				Float b12 = b->_12;
HXDLIN( 676)				Float b13 = b->_13;
HXDLIN( 676)				Float b21 = b->_21;
HXDLIN( 676)				Float b22 = b->_22;
HXDLIN( 676)				Float b23 = b->_23;
HXDLIN( 676)				Float b31 = b->_31;
HXDLIN( 676)				Float b32 = b->_32;
HXDLIN( 676)				Float b33 = b->_33;
HXDLIN( 676)				Float b41 = b->_41;
HXDLIN( 676)				Float b42 = b->_42;
HXDLIN( 676)				Float b43 = b->_43;
HXDLIN( 676)				_this->_11 = (((m11 * b11) + (m12 * b21)) + (m13 * b31));
HXDLIN( 676)				_this->_12 = (((m11 * b12) + (m12 * b22)) + (m13 * b32));
HXDLIN( 676)				_this->_13 = (((m11 * b13) + (m12 * b23)) + (m13 * b33));
HXDLIN( 676)				_this->_14 = ( (Float)(0) );
HXDLIN( 676)				_this->_21 = (((m21 * b11) + (m22 * b21)) + (m23 * b31));
HXDLIN( 676)				_this->_22 = (((m21 * b12) + (m22 * b22)) + (m23 * b32));
HXDLIN( 676)				_this->_23 = (((m21 * b13) + (m22 * b23)) + (m23 * b33));
HXDLIN( 676)				_this->_24 = ( (Float)(0) );
HXDLIN( 676)				_this->_31 = (((a31 * b11) + (a32 * b21)) + (a33 * b31));
HXDLIN( 676)				_this->_32 = (((a31 * b12) + (a32 * b22)) + (a33 * b32));
HXDLIN( 676)				_this->_33 = (((a31 * b13) + (a32 * b23)) + (a33 * b33));
HXDLIN( 676)				_this->_34 = ( (Float)(0) );
HXDLIN( 676)				_this->_41 = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + b41);
HXDLIN( 676)				_this->_42 = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + b42);
HXDLIN( 676)				_this->_43 = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + b43);
HXDLIN( 676)				_this->_44 = ( (Float)(1) );
            			}
            		}
HXLINE( 678)		if (::hx::IsNotNull( this->defaultTransform )) {
HXLINE( 679)			 ::h3d::Matrix _this = this->absPos;
HXDLIN( 679)			 ::h3d::Matrix a = this->defaultTransform;
HXDLIN( 679)			 ::h3d::Matrix b = this->absPos;
HXDLIN( 679)			Float m11 = a->_11;
HXDLIN( 679)			Float m12 = a->_12;
HXDLIN( 679)			Float m13 = a->_13;
HXDLIN( 679)			Float m21 = a->_21;
HXDLIN( 679)			Float m22 = a->_22;
HXDLIN( 679)			Float m23 = a->_23;
HXDLIN( 679)			Float a31 = a->_31;
HXDLIN( 679)			Float a32 = a->_32;
HXDLIN( 679)			Float a33 = a->_33;
HXDLIN( 679)			Float a41 = a->_41;
HXDLIN( 679)			Float a42 = a->_42;
HXDLIN( 679)			Float a43 = a->_43;
HXDLIN( 679)			Float b11 = b->_11;
HXDLIN( 679)			Float b12 = b->_12;
HXDLIN( 679)			Float b13 = b->_13;
HXDLIN( 679)			Float b21 = b->_21;
HXDLIN( 679)			Float b22 = b->_22;
HXDLIN( 679)			Float b23 = b->_23;
HXDLIN( 679)			Float b31 = b->_31;
HXDLIN( 679)			Float b32 = b->_32;
HXDLIN( 679)			Float b33 = b->_33;
HXDLIN( 679)			Float b41 = b->_41;
HXDLIN( 679)			Float b42 = b->_42;
HXDLIN( 679)			Float b43 = b->_43;
HXDLIN( 679)			_this->_11 = (((m11 * b11) + (m12 * b21)) + (m13 * b31));
HXDLIN( 679)			_this->_12 = (((m11 * b12) + (m12 * b22)) + (m13 * b32));
HXDLIN( 679)			_this->_13 = (((m11 * b13) + (m12 * b23)) + (m13 * b33));
HXDLIN( 679)			_this->_14 = ( (Float)(0) );
HXDLIN( 679)			_this->_21 = (((m21 * b11) + (m22 * b21)) + (m23 * b31));
HXDLIN( 679)			_this->_22 = (((m21 * b12) + (m22 * b22)) + (m23 * b32));
HXDLIN( 679)			_this->_23 = (((m21 * b13) + (m22 * b23)) + (m23 * b33));
HXDLIN( 679)			_this->_24 = ( (Float)(0) );
HXDLIN( 679)			_this->_31 = (((a31 * b11) + (a32 * b21)) + (a33 * b31));
HXDLIN( 679)			_this->_32 = (((a31 * b12) + (a32 * b22)) + (a33 * b32));
HXDLIN( 679)			_this->_33 = (((a31 * b13) + (a32 * b23)) + (a33 * b33));
HXDLIN( 679)			_this->_34 = ( (Float)(0) );
HXDLIN( 679)			_this->_41 = ((((a41 * b11) + (a42 * b21)) + (a43 * b31)) + b41);
HXDLIN( 679)			_this->_42 = ((((a41 * b12) + (a42 * b22)) + (a43 * b32)) + b42);
HXDLIN( 679)			_this->_43 = ((((a41 * b13) + (a42 * b23)) + (a43 * b33)) + b43);
HXDLIN( 679)			_this->_44 = ( (Float)(1) );
            		}
HXLINE( 680)		if (::hx::IsNotNull( this->invPos )) {
HXLINE( 681)			this->invPos->_44 = ( (Float)(0) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,calcAbsPos,(void))

void Object_obj::sync( ::h3d::scene::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_684_sync)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,sync,(void))

void Object_obj::syncRec( ::h3d::scene::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_687_syncRec)
HXLINE( 688)		if (::hx::IsNotNull( this->currentAnimation )) {
HXLINE( 689)			 ::h3d::scene::Object old = this->parent;
HXLINE( 690)			Float dt = ctx->elapsedTime;
HXLINE( 691)			while(true){
HXLINE( 691)				bool _hx_tmp;
HXDLIN( 691)				if ((dt > 0)) {
HXLINE( 691)					_hx_tmp = ::hx::IsNotNull( this->currentAnimation );
            				}
            				else {
HXLINE( 691)					_hx_tmp = false;
            				}
HXDLIN( 691)				if (!(_hx_tmp)) {
HXLINE( 691)					goto _hx_goto_90;
            				}
HXLINE( 692)				dt = this->currentAnimation->update(dt);
            			}
            			_hx_goto_90:;
HXLINE( 693)			bool _hx_tmp;
HXDLIN( 693)			if (::hx::IsNotNull( this->currentAnimation )) {
HXLINE( 693)				bool _hx_tmp1;
HXDLIN( 693)				bool _hx_tmp2;
HXDLIN( 693)				if (ctx->visibleFlag) {
HXLINE( 693)					_hx_tmp2 = ((this->flags & 2) != 0);
            				}
            				else {
HXLINE( 693)					_hx_tmp2 = false;
            				}
HXDLIN( 693)				if (_hx_tmp2) {
HXLINE( 693)					_hx_tmp1 = ((this->flags & 4) == 0);
            				}
            				else {
HXLINE( 693)					_hx_tmp1 = false;
            				}
HXDLIN( 693)				if (!(_hx_tmp1)) {
HXLINE( 693)					_hx_tmp = ((this->flags & 64) != 0);
            				}
            				else {
HXLINE( 693)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 693)				_hx_tmp = false;
            			}
HXDLIN( 693)			if (_hx_tmp) {
HXLINE( 694)				this->currentAnimation->sync(null());
            			}
HXLINE( 695)			bool _hx_tmp1;
HXDLIN( 695)			if (::hx::IsNull( this->parent )) {
HXLINE( 695)				_hx_tmp1 = ::hx::IsNotNull( old );
            			}
            			else {
HXLINE( 695)				_hx_tmp1 = false;
            			}
HXDLIN( 695)			if (_hx_tmp1) {
HXLINE( 696)				return;
            			}
            		}
HXLINE( 698)		bool old = ctx->visibleFlag;
HXLINE( 699)		bool _hx_tmp;
HXDLIN( 699)		if (((this->flags & 2) != 0)) {
HXLINE( 699)			if (((this->flags & 4) != 0)) {
HXLINE( 699)				_hx_tmp = ((this->flags & 128) != 0);
            			}
            			else {
HXLINE( 699)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 699)			_hx_tmp = true;
            		}
HXDLIN( 699)		if (_hx_tmp) {
HXLINE( 700)			ctx->visibleFlag = false;
            		}
HXLINE( 702)		bool _hx_tmp1;
HXDLIN( 702)		if (::hx::IsNotNull( ctx->cullingCollider )) {
HXLINE( 702)			if (::hx::IsNotNull( this->cullingCollider )) {
HXLINE( 702)				_hx_tmp1 = ((this->flags & 4096) != 0);
            			}
            			else {
HXLINE( 702)				_hx_tmp1 = true;
            			}
            		}
            		else {
HXLINE( 702)			_hx_tmp1 = false;
            		}
HXDLIN( 702)		if (_hx_tmp1) {
HXLINE( 703)			this->set_cullingCollider(ctx->cullingCollider);
HXLINE( 704)			{
HXLINE( 704)				int f = 4096;
HXDLIN( 704)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 704)				_hx_tmp->flags = (_hx_tmp->flags | f);
            			}
            		}
            		else {
HXLINE( 706)			if (((this->flags & 4096) != 0)) {
HXLINE( 707)				this->set_cullingCollider(null());
            			}
            		}
HXLINE( 709)		::Dynamic prevCollider = ctx->cullingCollider;
HXLINE( 710)		if (((this->flags & 128) != 0)) {
HXLINE( 711)			ctx->cullingCollider = this->cullingCollider;
            		}
HXLINE( 713)		bool changed = ((this->flags & 1) != 0);
HXLINE( 714)		if (changed) {
HXLINE( 714)			this->calcAbsPos();
            		}
HXLINE( 715)		this->sync(ctx);
HXLINE( 716)		{
HXLINE( 716)			int f = 1;
HXDLIN( 716)			bool b = ::hx::IsNotNull( this->follow );
HXDLIN( 716)			if (b) {
HXLINE( 716)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 716)				_hx_tmp->flags = (_hx_tmp->flags | f);
            			}
            			else {
HXLINE( 716)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 716)				_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            			}
            		}
HXLINE( 717)		this->lastFrame = ctx->frame;
HXLINE( 718)		int p = 0;
HXDLIN( 718)		int len = this->children->length;
HXLINE( 719)		while((p < len)){
HXLINE( 720)			 ::h3d::scene::Object c = this->children->__get(p).StaticCast<  ::h3d::scene::Object >();
HXLINE( 721)			if (::hx::IsNull( c )) {
HXLINE( 722)				goto _hx_goto_91;
            			}
HXLINE( 723)			if ((c->lastFrame != ctx->frame)) {
HXLINE( 724)				if (changed) {
HXLINE( 724)					int f = 1;
HXDLIN( 724)					bool b = true;
HXDLIN( 724)					if (b) {
HXLINE( 724)						 ::h3d::scene::Object c1 = c;
HXDLIN( 724)						c1->flags = (c1->flags | f);
            					}
            					else {
HXLINE( 724)						 ::h3d::scene::Object c1 = c;
HXDLIN( 724)						c1->flags = (c1->flags & ~(f));
            					}
            				}
HXLINE( 725)				c->syncRec(ctx);
            			}
HXLINE( 729)			if (::hx::IsInstanceNotEq( this->children->__get(p).StaticCast<  ::h3d::scene::Object >(),c )) {
HXLINE( 730)				p = 0;
HXLINE( 731)				len = this->children->length;
            			}
            			else {
HXLINE( 733)				p = (p + 1);
            			}
            		}
            		_hx_goto_91:;
HXLINE( 735)		ctx->visibleFlag = old;
HXLINE( 736)		ctx->cullingCollider = prevCollider;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,syncRec,(void))

void Object_obj::syncPos(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_739_syncPos)
HXLINE( 740)		if (::hx::IsNotNull( this->parent )) {
HXLINE( 740)			this->parent->syncPos();
            		}
HXLINE( 741)		if (((this->flags & 1) != 0)) {
HXLINE( 742)			{
HXLINE( 742)				int f = 1;
HXDLIN( 742)				bool b = ::hx::IsNotNull( this->follow );
HXDLIN( 742)				if (b) {
HXLINE( 742)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 742)					_hx_tmp->flags = (_hx_tmp->flags | f);
            				}
            				else {
HXLINE( 742)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 742)					_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            				}
            			}
HXLINE( 743)			this->calcAbsPos();
HXLINE( 744)			{
HXLINE( 744)				int _g = 0;
HXDLIN( 744)				::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 744)				while((_g < _g1->length)){
HXLINE( 744)					 ::h3d::scene::Object c = _g1->__get(_g).StaticCast<  ::h3d::scene::Object >();
HXDLIN( 744)					_g = (_g + 1);
HXLINE( 745)					{
HXLINE( 745)						int f = 1;
HXDLIN( 745)						bool b = true;
HXDLIN( 745)						if (b) {
HXLINE( 745)							 ::h3d::scene::Object c1 = c;
HXDLIN( 745)							c1->flags = (c1->flags | f);
            						}
            						else {
HXLINE( 745)							 ::h3d::scene::Object c1 = c;
HXDLIN( 745)							c1->flags = (c1->flags & ~(f));
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,syncPos,(void))

void Object_obj::emit( ::h3d::scene::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_749_emit)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,emit,(void))

void Object_obj::emitRec( ::h3d::scene::RenderContext ctx){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_752_emitRec)
HXLINE( 754)		bool _hx_tmp;
HXDLIN( 754)		if (((this->flags & 2) != 0)) {
HXLINE( 754)			bool _hx_tmp1;
HXDLIN( 754)			if (((this->flags & 4) != 0)) {
HXLINE( 754)				_hx_tmp1 = ((this->flags & 128) != 0);
            			}
            			else {
HXLINE( 754)				_hx_tmp1 = false;
            			}
HXDLIN( 754)			if (_hx_tmp1) {
HXLINE( 754)				_hx_tmp = !(ctx->computingStatic);
            			}
            			else {
HXLINE( 754)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 754)			_hx_tmp = true;
            		}
HXDLIN( 754)		if (_hx_tmp) {
HXLINE( 755)			return;
            		}
HXLINE( 758)		if (((this->flags & 1) != 0)) {
HXLINE( 760)			if (::hx::IsNotNull( this->currentAnimation )) {
HXLINE( 760)				this->currentAnimation->sync(null());
            			}
HXLINE( 761)			{
HXLINE( 761)				int f = 1;
HXDLIN( 761)				bool b = ::hx::IsNotNull( this->follow );
HXDLIN( 761)				if (b) {
HXLINE( 761)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 761)					_hx_tmp->flags = (_hx_tmp->flags | f);
            				}
            				else {
HXLINE( 761)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 761)					_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            				}
            			}
HXLINE( 762)			this->calcAbsPos();
HXLINE( 763)			{
HXLINE( 763)				int _g = 0;
HXDLIN( 763)				::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 763)				while((_g < _g1->length)){
HXLINE( 763)					 ::h3d::scene::Object c = _g1->__get(_g).StaticCast<  ::h3d::scene::Object >();
HXDLIN( 763)					_g = (_g + 1);
HXLINE( 764)					{
HXLINE( 764)						int f = 1;
HXDLIN( 764)						bool b = true;
HXDLIN( 764)						if (b) {
HXLINE( 764)							 ::h3d::scene::Object c1 = c;
HXDLIN( 764)							c1->flags = (c1->flags | f);
            						}
            						else {
HXLINE( 764)							 ::h3d::scene::Object c1 = c;
HXDLIN( 764)							c1->flags = (c1->flags & ~(f));
            						}
            					}
            				}
            			}
            		}
HXLINE( 766)		bool _hx_tmp1;
HXDLIN( 766)		if (((this->flags & 4) != 0)) {
HXLINE( 766)			_hx_tmp1 = ctx->computingStatic;
            		}
            		else {
HXLINE( 766)			_hx_tmp1 = true;
            		}
HXDLIN( 766)		if (_hx_tmp1) {
HXLINE( 767)			this->emit(ctx);
            		}
HXLINE( 769)		{
HXLINE( 769)			int _g = 0;
HXDLIN( 769)			::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 769)			while((_g < _g1->length)){
HXLINE( 769)				 ::h3d::scene::Object c = _g1->__get(_g).StaticCast<  ::h3d::scene::Object >();
HXDLIN( 769)				_g = (_g + 1);
HXLINE( 770)				c->emitRec(ctx);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,emitRec,(void))

Float Object_obj::set_x(Float v){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_773_set_x)
HXLINE( 774)		this->x = v;
HXLINE( 775)		{
HXLINE( 775)			int f = 1;
HXDLIN( 775)			bool b = true;
HXDLIN( 775)			if (b) {
HXLINE( 775)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 775)				_hx_tmp->flags = (_hx_tmp->flags | f);
            			}
            			else {
HXLINE( 775)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 775)				_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            			}
            		}
HXLINE( 776)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_x,return )

Float Object_obj::set_y(Float v){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_779_set_y)
HXLINE( 780)		this->y = v;
HXLINE( 781)		{
HXLINE( 781)			int f = 1;
HXDLIN( 781)			bool b = true;
HXDLIN( 781)			if (b) {
HXLINE( 781)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 781)				_hx_tmp->flags = (_hx_tmp->flags | f);
            			}
            			else {
HXLINE( 781)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 781)				_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            			}
            		}
HXLINE( 782)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_y,return )

Float Object_obj::set_z(Float v){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_785_set_z)
HXLINE( 786)		this->z = v;
HXLINE( 787)		{
HXLINE( 787)			int f = 1;
HXDLIN( 787)			bool b = true;
HXDLIN( 787)			if (b) {
HXLINE( 787)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 787)				_hx_tmp->flags = (_hx_tmp->flags | f);
            			}
            			else {
HXLINE( 787)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 787)				_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            			}
            		}
HXLINE( 788)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_z,return )

Float Object_obj::set_scaleX(Float v){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_791_set_scaleX)
HXLINE( 792)		this->scaleX = v;
HXLINE( 793)		{
HXLINE( 793)			int f = 1;
HXDLIN( 793)			bool b = true;
HXDLIN( 793)			if (b) {
HXLINE( 793)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 793)				_hx_tmp->flags = (_hx_tmp->flags | f);
            			}
            			else {
HXLINE( 793)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 793)				_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            			}
            		}
HXLINE( 794)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_scaleX,return )

Float Object_obj::set_scaleY(Float v){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_797_set_scaleY)
HXLINE( 798)		this->scaleY = v;
HXLINE( 799)		{
HXLINE( 799)			int f = 1;
HXDLIN( 799)			bool b = true;
HXDLIN( 799)			if (b) {
HXLINE( 799)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 799)				_hx_tmp->flags = (_hx_tmp->flags | f);
            			}
            			else {
HXLINE( 799)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 799)				_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            			}
            		}
HXLINE( 800)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_scaleY,return )

Float Object_obj::set_scaleZ(Float v){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_803_set_scaleZ)
HXLINE( 804)		this->scaleZ = v;
HXLINE( 805)		{
HXLINE( 805)			int f = 1;
HXDLIN( 805)			bool b = true;
HXDLIN( 805)			if (b) {
HXLINE( 805)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 805)				_hx_tmp->flags = (_hx_tmp->flags | f);
            			}
            			else {
HXLINE( 805)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 805)				_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            			}
            		}
HXLINE( 806)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_scaleZ,return )

 ::h3d::Matrix Object_obj::set_defaultTransform( ::h3d::Matrix v){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_809_set_defaultTransform)
HXLINE( 810)		this->defaultTransform = v;
HXLINE( 811)		{
HXLINE( 811)			int f = 1;
HXDLIN( 811)			bool b = true;
HXDLIN( 811)			if (b) {
HXLINE( 811)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 811)				_hx_tmp->flags = (_hx_tmp->flags | f);
            			}
            			else {
HXLINE( 811)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 811)				_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            			}
            		}
HXLINE( 812)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,set_defaultTransform,return )

void Object_obj::setPosition(Float x,Float y,Float z){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_818_setPosition)
HXLINE( 819)		{
HXLINE( 819)			this->x = x;
HXDLIN( 819)			{
HXLINE( 819)				int f = 1;
HXDLIN( 819)				bool b = true;
HXDLIN( 819)				if (b) {
HXLINE( 819)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 819)					_hx_tmp->flags = (_hx_tmp->flags | f);
            				}
            				else {
HXLINE( 819)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 819)					_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            				}
            			}
            		}
HXLINE( 820)		{
HXLINE( 820)			this->y = y;
HXDLIN( 820)			{
HXLINE( 820)				int f1 = 1;
HXDLIN( 820)				bool b1 = true;
HXDLIN( 820)				if (b1) {
HXLINE( 820)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 820)					_hx_tmp->flags = (_hx_tmp->flags | f1);
            				}
            				else {
HXLINE( 820)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 820)					_hx_tmp->flags = (_hx_tmp->flags & ~(f1));
            				}
            			}
            		}
HXLINE( 821)		{
HXLINE( 821)			this->z = z;
HXDLIN( 821)			{
HXLINE( 821)				int f2 = 1;
HXDLIN( 821)				bool b2 = true;
HXDLIN( 821)				if (b2) {
HXLINE( 821)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 821)					_hx_tmp->flags = (_hx_tmp->flags | f2);
            				}
            				else {
HXLINE( 821)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 821)					_hx_tmp->flags = (_hx_tmp->flags & ~(f2));
            				}
            			}
            		}
HXLINE( 822)		{
HXLINE( 822)			int f3 = 1;
HXDLIN( 822)			bool b3 = true;
HXDLIN( 822)			if (b3) {
HXLINE( 822)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 822)				_hx_tmp->flags = (_hx_tmp->flags | f3);
            			}
            			else {
HXLINE( 822)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 822)				_hx_tmp->flags = (_hx_tmp->flags & ~(f3));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Object_obj,setPosition,(void))

void Object_obj::setTransform( ::h3d::Matrix mat){
            	HX_GC_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_830_setTransform)
HXLINE( 831)		 ::h3d::Vector v = ::h3d::scene::Object_obj::tmpVec;
HXDLIN( 831)		if (::hx::IsNull( v )) {
HXLINE( 831)			v =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXDLIN( 831)		v->x = ::Math_obj::sqrt((((mat->_11 * mat->_11) + (mat->_12 * mat->_12)) + (mat->_13 * mat->_13)));
HXDLIN( 831)		v->y = ::Math_obj::sqrt((((mat->_21 * mat->_21) + (mat->_22 * mat->_22)) + (mat->_23 * mat->_23)));
HXDLIN( 831)		v->z = ::Math_obj::sqrt((((mat->_31 * mat->_31) + (mat->_32 * mat->_32)) + (mat->_33 * mat->_33)));
HXDLIN( 831)		if (((((mat->_11 * ((mat->_22 * mat->_33) - (mat->_23 * mat->_32))) + (mat->_12 * ((mat->_23 * mat->_31) - (mat->_21 * mat->_33)))) + (mat->_13 * ((mat->_21 * mat->_32) - (mat->_22 * mat->_31)))) < 0)) {
HXLINE( 831)			 ::h3d::Vector v1 = v;
HXDLIN( 831)			v1->x = (v1->x * ( (Float)(-1) ));
HXDLIN( 831)			 ::h3d::Vector v2 = v;
HXDLIN( 831)			v2->y = (v2->y * ( (Float)(-1) ));
HXDLIN( 831)			 ::h3d::Vector v3 = v;
HXDLIN( 831)			v3->z = (v3->z * ( (Float)(-1) ));
            		}
HXDLIN( 831)		 ::h3d::Vector s = v;
HXLINE( 832)		{
HXLINE( 832)			Float v1 = mat->_41;
HXDLIN( 832)			this->x = v1;
HXDLIN( 832)			{
HXLINE( 832)				int f = 1;
HXDLIN( 832)				bool b = true;
HXDLIN( 832)				if (b) {
HXLINE( 832)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 832)					_hx_tmp->flags = (_hx_tmp->flags | f);
            				}
            				else {
HXLINE( 832)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 832)					_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            				}
            			}
            		}
HXLINE( 833)		{
HXLINE( 833)			Float v2 = mat->_42;
HXDLIN( 833)			this->y = v2;
HXDLIN( 833)			{
HXLINE( 833)				int f1 = 1;
HXDLIN( 833)				bool b1 = true;
HXDLIN( 833)				if (b1) {
HXLINE( 833)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 833)					_hx_tmp->flags = (_hx_tmp->flags | f1);
            				}
            				else {
HXLINE( 833)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 833)					_hx_tmp->flags = (_hx_tmp->flags & ~(f1));
            				}
            			}
            		}
HXLINE( 834)		{
HXLINE( 834)			Float v3 = mat->_43;
HXDLIN( 834)			this->z = v3;
HXDLIN( 834)			{
HXLINE( 834)				int f2 = 1;
HXDLIN( 834)				bool b2 = true;
HXDLIN( 834)				if (b2) {
HXLINE( 834)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 834)					_hx_tmp->flags = (_hx_tmp->flags | f2);
            				}
            				else {
HXLINE( 834)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 834)					_hx_tmp->flags = (_hx_tmp->flags & ~(f2));
            				}
            			}
            		}
HXLINE( 835)		{
HXLINE( 835)			Float v4 = s->x;
HXDLIN( 835)			this->scaleX = v4;
HXDLIN( 835)			{
HXLINE( 835)				int f3 = 1;
HXDLIN( 835)				bool b3 = true;
HXDLIN( 835)				if (b3) {
HXLINE( 835)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 835)					_hx_tmp->flags = (_hx_tmp->flags | f3);
            				}
            				else {
HXLINE( 835)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 835)					_hx_tmp->flags = (_hx_tmp->flags & ~(f3));
            				}
            			}
            		}
HXLINE( 836)		{
HXLINE( 836)			Float v5 = s->y;
HXDLIN( 836)			this->scaleY = v5;
HXDLIN( 836)			{
HXLINE( 836)				int f4 = 1;
HXDLIN( 836)				bool b4 = true;
HXDLIN( 836)				if (b4) {
HXLINE( 836)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 836)					_hx_tmp->flags = (_hx_tmp->flags | f4);
            				}
            				else {
HXLINE( 836)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 836)					_hx_tmp->flags = (_hx_tmp->flags & ~(f4));
            				}
            			}
            		}
HXLINE( 837)		{
HXLINE( 837)			Float v6 = s->z;
HXDLIN( 837)			this->scaleZ = v6;
HXDLIN( 837)			{
HXLINE( 837)				int f5 = 1;
HXDLIN( 837)				bool b5 = true;
HXDLIN( 837)				if (b5) {
HXLINE( 837)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 837)					_hx_tmp->flags = (_hx_tmp->flags | f5);
            				}
            				else {
HXLINE( 837)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 837)					_hx_tmp->flags = (_hx_tmp->flags & ~(f5));
            				}
            			}
            		}
HXLINE( 838)		::h3d::scene::Object_obj::tmpMat->load(mat);
HXLINE( 839)		::h3d::scene::Object_obj::tmpMat->prependScale((((Float)1.0) / s->x),(((Float)1.0) / s->y),(((Float)1.0) / s->z));
HXLINE( 840)		this->qRot->initRotateMatrix(::h3d::scene::Object_obj::tmpMat);
HXLINE( 841)		{
HXLINE( 841)			int f6 = 1;
HXDLIN( 841)			bool b6 = true;
HXDLIN( 841)			if (b6) {
HXLINE( 841)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 841)				_hx_tmp->flags = (_hx_tmp->flags | f6);
            			}
            			else {
HXLINE( 841)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 841)				_hx_tmp->flags = (_hx_tmp->flags & ~(f6));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,setTransform,(void))

 ::h3d::Matrix Object_obj::getTransform( ::h3d::Matrix mat){
            	HX_GC_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_847_getTransform)
HXLINE( 848)		if (::hx::IsNull( mat )) {
HXLINE( 848)			mat =  ::h3d::Matrix_obj::__alloc( HX_CTX );
            		}
HXLINE( 849)		mat->initScale(this->scaleX,this->scaleY,this->scaleZ);
HXLINE( 850)		this->qRot->toMatrix(::h3d::scene::Object_obj::tmpMat);
HXLINE( 851)		mat->multiply3x4(mat,::h3d::scene::Object_obj::tmpMat);
HXLINE( 852)		mat->_41 = this->x;
HXLINE( 853)		mat->_42 = this->y;
HXLINE( 854)		mat->_43 = this->z;
HXLINE( 855)		return mat;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,getTransform,return )

void Object_obj::rotate(Float rx,Float ry,Float rz){
            	HX_GC_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_861_rotate)
HXLINE( 862)		 ::h3d::Quat qTmp =  ::h3d::Quat_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 863)		qTmp->initRotation(rx,ry,rz);
HXLINE( 864)		this->qRot->multiply(qTmp,this->qRot);
HXLINE( 865)		{
HXLINE( 865)			int f = 1;
HXDLIN( 865)			bool b = true;
HXDLIN( 865)			if (b) {
HXLINE( 865)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 865)				_hx_tmp->flags = (_hx_tmp->flags | f);
            			}
            			else {
HXLINE( 865)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 865)				_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Object_obj,rotate,(void))

void Object_obj::setRotation(Float rx,Float ry,Float rz){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_871_setRotation)
HXLINE( 872)		this->qRot->initRotation(rx,ry,rz);
HXLINE( 873)		{
HXLINE( 873)			int f = 1;
HXDLIN( 873)			bool b = true;
HXDLIN( 873)			if (b) {
HXLINE( 873)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 873)				_hx_tmp->flags = (_hx_tmp->flags | f);
            			}
            			else {
HXLINE( 873)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 873)				_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Object_obj,setRotation,(void))

void Object_obj::setRotationAxis(Float ax,Float ay,Float az,Float angle){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_879_setRotationAxis)
HXLINE( 880)		this->qRot->initRotateAxis(ax,ay,az,angle);
HXLINE( 881)		{
HXLINE( 881)			int f = 1;
HXDLIN( 881)			bool b = true;
HXDLIN( 881)			if (b) {
HXLINE( 881)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 881)				_hx_tmp->flags = (_hx_tmp->flags | f);
            			}
            			else {
HXLINE( 881)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 881)				_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Object_obj,setRotationAxis,(void))

void Object_obj::setDirection( ::h3d::Vector v){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_887_setDirection)
HXLINE( 888)		this->qRot->initDirection(v);
HXLINE( 889)		{
HXLINE( 889)			int f = 1;
HXDLIN( 889)			bool b = true;
HXDLIN( 889)			if (b) {
HXLINE( 889)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 889)				_hx_tmp->flags = (_hx_tmp->flags | f);
            			}
            			else {
HXLINE( 889)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 889)				_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,setDirection,(void))

 ::h3d::Vector Object_obj::getLocalDirection(){
            	HX_GC_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_896_getLocalDirection)
HXDLIN( 896)		 ::h3d::Quat _this = this->qRot;
HXDLIN( 896)		return  ::h3d::Vector_obj::__alloc( HX_CTX ,(( (Float)(1) ) - (( (Float)(2) ) * ((_this->y * _this->y) + (_this->z * _this->z)))),(( (Float)(2) ) * ((_this->x * _this->y) + (_this->z * _this->w))),(( (Float)(2) ) * ((_this->x * _this->z) - (_this->y * _this->w))),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,getLocalDirection,return )

 ::h3d::Quat Object_obj::getRotationQuat(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_904_getRotationQuat)
HXDLIN( 904)		return this->qRot;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,getRotationQuat,return )

void Object_obj::setRotationQuat( ::h3d::Quat q){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_911_setRotationQuat)
HXLINE( 912)		this->qRot = q;
HXLINE( 913)		{
HXLINE( 913)			int f = 1;
HXDLIN( 913)			bool b = true;
HXDLIN( 913)			if (b) {
HXLINE( 913)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 913)				_hx_tmp->flags = (_hx_tmp->flags | f);
            			}
            			else {
HXLINE( 913)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 913)				_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,setRotationQuat,(void))

void Object_obj::scale(Float v){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_919_scale)
HXLINE( 920)		{
HXLINE( 920)			Float v1 = (this->scaleX * v);
HXDLIN( 920)			this->scaleX = v1;
HXDLIN( 920)			{
HXLINE( 920)				int f = 1;
HXDLIN( 920)				bool b = true;
HXDLIN( 920)				if (b) {
HXLINE( 920)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 920)					_hx_tmp->flags = (_hx_tmp->flags | f);
            				}
            				else {
HXLINE( 920)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 920)					_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            				}
            			}
            		}
HXLINE( 921)		{
HXLINE( 921)			Float v2 = (this->scaleY * v);
HXDLIN( 921)			this->scaleY = v2;
HXDLIN( 921)			{
HXLINE( 921)				int f1 = 1;
HXDLIN( 921)				bool b1 = true;
HXDLIN( 921)				if (b1) {
HXLINE( 921)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 921)					_hx_tmp->flags = (_hx_tmp->flags | f1);
            				}
            				else {
HXLINE( 921)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 921)					_hx_tmp->flags = (_hx_tmp->flags & ~(f1));
            				}
            			}
            		}
HXLINE( 922)		{
HXLINE( 922)			Float v3 = (this->scaleZ * v);
HXDLIN( 922)			this->scaleZ = v3;
HXDLIN( 922)			{
HXLINE( 922)				int f2 = 1;
HXDLIN( 922)				bool b2 = true;
HXDLIN( 922)				if (b2) {
HXLINE( 922)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 922)					_hx_tmp->flags = (_hx_tmp->flags | f2);
            				}
            				else {
HXLINE( 922)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 922)					_hx_tmp->flags = (_hx_tmp->flags & ~(f2));
            				}
            			}
            		}
HXLINE( 923)		{
HXLINE( 923)			int f3 = 1;
HXDLIN( 923)			bool b3 = true;
HXDLIN( 923)			if (b3) {
HXLINE( 923)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 923)				_hx_tmp->flags = (_hx_tmp->flags | f3);
            			}
            			else {
HXLINE( 923)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 923)				_hx_tmp->flags = (_hx_tmp->flags & ~(f3));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,scale,(void))

void Object_obj::setScale(Float v){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_929_setScale)
HXLINE( 930)		{
HXLINE( 930)			this->scaleX = v;
HXDLIN( 930)			{
HXLINE( 930)				int f = 1;
HXDLIN( 930)				bool b = true;
HXDLIN( 930)				if (b) {
HXLINE( 930)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 930)					_hx_tmp->flags = (_hx_tmp->flags | f);
            				}
            				else {
HXLINE( 930)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 930)					_hx_tmp->flags = (_hx_tmp->flags & ~(f));
            				}
            			}
            		}
HXLINE( 931)		{
HXLINE( 931)			this->scaleY = v;
HXDLIN( 931)			{
HXLINE( 931)				int f1 = 1;
HXDLIN( 931)				bool b1 = true;
HXDLIN( 931)				if (b1) {
HXLINE( 931)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 931)					_hx_tmp->flags = (_hx_tmp->flags | f1);
            				}
            				else {
HXLINE( 931)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 931)					_hx_tmp->flags = (_hx_tmp->flags & ~(f1));
            				}
            			}
            		}
HXLINE( 932)		{
HXLINE( 932)			this->scaleZ = v;
HXDLIN( 932)			{
HXLINE( 932)				int f2 = 1;
HXDLIN( 932)				bool b2 = true;
HXDLIN( 932)				if (b2) {
HXLINE( 932)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 932)					_hx_tmp->flags = (_hx_tmp->flags | f2);
            				}
            				else {
HXLINE( 932)					 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 932)					_hx_tmp->flags = (_hx_tmp->flags & ~(f2));
            				}
            			}
            		}
HXLINE( 933)		{
HXLINE( 933)			int f3 = 1;
HXDLIN( 933)			bool b3 = true;
HXDLIN( 933)			if (b3) {
HXLINE( 933)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 933)				_hx_tmp->flags = (_hx_tmp->flags | f3);
            			}
            			else {
HXLINE( 933)				 ::h3d::scene::Object _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 933)				_hx_tmp->flags = (_hx_tmp->flags & ~(f3));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,setScale,(void))

::String Object_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_940_toString)
HXDLIN( 940)		::String _hx_tmp = ( (::String)(::Type_obj::getClassName(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this))).split(HX_(".",2e,00,00,00))->pop()) );
HXDLIN( 940)		::String _hx_tmp1;
HXDLIN( 940)		if (::hx::IsNull( this->name )) {
HXDLIN( 940)			_hx_tmp1 = HX_("",00,00,00,00);
            		}
            		else {
HXDLIN( 940)			_hx_tmp1 = ((HX_("(",28,00,00,00) + this->name) + HX_(")",29,00,00,00));
            		}
HXDLIN( 940)		return (_hx_tmp + _hx_tmp1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,toString,return )

 ::h3d::scene::Object Object_obj::getChildAt(int n){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_947_getChildAt)
HXDLIN( 947)		return this->children->__get(n).StaticCast<  ::h3d::scene::Object >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,getChildAt,return )

int Object_obj::getChildIndex( ::h3d::scene::Object o){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_953_getChildIndex)
HXLINE( 954)		{
HXLINE( 954)			int _g = 0;
HXDLIN( 954)			int _g1 = this->children->length;
HXDLIN( 954)			while((_g < _g1)){
HXLINE( 954)				_g = (_g + 1);
HXDLIN( 954)				int i = (_g - 1);
HXLINE( 955)				if (::hx::IsInstanceEq( this->children->__get(i).StaticCast<  ::h3d::scene::Object >(),o )) {
HXLINE( 956)					return i;
            				}
            			}
            		}
HXLINE( 957)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Object_obj,getChildIndex,return )

int Object_obj::get_numChildren(){
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_961_get_numChildren)
HXDLIN( 961)		return this->children->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,get_numChildren,return )

 ::hxd::impl::ArrayIterator_h3d_scene_Object Object_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_968_iterator)
HXDLIN( 968)		return  ::hxd::impl::ArrayIterator_h3d_scene_Object_obj::__alloc( HX_CTX ,this->children);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Object_obj,iterator,return )

Float Object_obj::ROT2RAD;

 ::h3d::Matrix Object_obj::tmpMat;

 ::h3d::Vector Object_obj::tmpVec;


::hx::ObjectPtr< Object_obj > Object_obj::__new( ::h3d::scene::Object parent) {
	::hx::ObjectPtr< Object_obj > __this = new Object_obj();
	__this->__construct(parent);
	return __this;
}

::hx::ObjectPtr< Object_obj > Object_obj::__alloc(::hx::Ctx *_hx_ctx, ::h3d::scene::Object parent) {
	Object_obj *__this = (Object_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Object_obj), true, "h3d.scene.Object"));
	*(void **)__this = Object_obj::_hx_vtable;
	__this->__construct(parent);
	return __this;
}

Object_obj::Object_obj()
{
}

void Object_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Object);
	HX_MARK_MEMBER_NAME(flags,"flags");
	HX_MARK_MEMBER_NAME(children,"children");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(scaleZ,"scaleZ");
	HX_MARK_MEMBER_NAME(follow,"follow");
	HX_MARK_MEMBER_NAME(defaultTransform,"defaultTransform");
	HX_MARK_MEMBER_NAME(currentAnimation,"currentAnimation");
	HX_MARK_MEMBER_NAME(cullingCollider,"cullingCollider");
	HX_MARK_MEMBER_NAME(absPos,"absPos");
	HX_MARK_MEMBER_NAME(invPos,"invPos");
	HX_MARK_MEMBER_NAME(qRot,"qRot");
	HX_MARK_MEMBER_NAME(lastFrame,"lastFrame");
	HX_MARK_END_CLASS();
}

void Object_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(flags,"flags");
	HX_VISIT_MEMBER_NAME(children,"children");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(z,"z");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(scaleZ,"scaleZ");
	HX_VISIT_MEMBER_NAME(follow,"follow");
	HX_VISIT_MEMBER_NAME(defaultTransform,"defaultTransform");
	HX_VISIT_MEMBER_NAME(currentAnimation,"currentAnimation");
	HX_VISIT_MEMBER_NAME(cullingCollider,"cullingCollider");
	HX_VISIT_MEMBER_NAME(absPos,"absPos");
	HX_VISIT_MEMBER_NAME(invPos,"invPos");
	HX_VISIT_MEMBER_NAME(qRot,"qRot");
	HX_VISIT_MEMBER_NAME(lastFrame,"lastFrame");
}

::hx::Val Object_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		if (HX_FIELD_EQ(inName,"z") ) { return ::hx::Val( z ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"qRot") ) { return ::hx::Val( qRot ); }
		if (HX_FIELD_EQ(inName,"find") ) { return ::hx::Val( find_dyn() ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		if (HX_FIELD_EQ(inName,"sync") ) { return ::hx::Val( sync_dyn() ); }
		if (HX_FIELD_EQ(inName,"emit") ) { return ::hx::Val( emit_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flags") ) { return ::hx::Val( flags ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"onAdd") ) { return ::hx::Val( onAdd_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_z") ) { return ::hx::Val( set_z_dyn() ); }
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return ::hx::Val( scaleX ); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return ::hx::Val( scaleY ); }
		if (HX_FIELD_EQ(inName,"scaleZ") ) { return ::hx::Val( scaleZ ); }
		if (HX_FIELD_EQ(inName,"follow") ) { return ::hx::Val( follow ); }
		if (HX_FIELD_EQ(inName,"culled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_culled() ); }
		if (HX_FIELD_EQ(inName,"absPos") ) { return ::hx::Val( absPos ); }
		if (HX_FIELD_EQ(inName,"invPos") ) { return ::hx::Val( invPos ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"isMesh") ) { return ::hx::Val( isMesh_dyn() ); }
		if (HX_FIELD_EQ(inName,"toMesh") ) { return ::hx::Val( toMesh_dyn() ); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return ::hx::Val( rotate_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_visible() ); }
		if (HX_FIELD_EQ(inName,"findAll") ) { return ::hx::Val( findAll_dyn() ); }
		if (HX_FIELD_EQ(inName,"syncRec") ) { return ::hx::Val( syncRec_dyn() ); }
		if (HX_FIELD_EQ(inName,"syncPos") ) { return ::hx::Val( syncPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"emitRec") ) { return ::hx::Val( emitRec_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { return ::hx::Val( children ); }
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"addChild") ) { return ::hx::Val( addChild_dyn() ); }
		if (HX_FIELD_EQ(inName,"onRemove") ) { return ::hx::Val( onRemove_dyn() ); }
		if (HX_FIELD_EQ(inName,"getScene") ) { return ::hx::Val( getScene_dyn() ); }
		if (HX_FIELD_EQ(inName,"setScale") ) { return ::hx::Val( setScale_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allocated") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_allocated() ); }
		if (HX_FIELD_EQ(inName,"lastFrame") ) { return ::hx::Val( lastFrame ); }
		if (HX_FIELD_EQ(inName,"getInvPos") ) { return ::hx::Val( getInvPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return ::hx::Val( getBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMeshes") ) { return ::hx::Val( getMeshes_dyn() ); }
		if (HX_FIELD_EQ(inName,"getAbsPos") ) { return ::hx::Val( getAbsPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRelPos") ) { return ::hx::Val( getRelPos_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alwaysSync") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_alwaysSync() ); }
		if (HX_FIELD_EQ(inName,"posChanged") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_posChanged() ); }
		if (HX_FIELD_EQ(inName,"get_culled") ) { return ::hx::Val( get_culled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_culled") ) { return ::hx::Val( set_culled_dyn() ); }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return ::hx::Val( addChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_follow") ) { return ::hx::Val( set_follow_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcAbsPos") ) { return ::hx::Val( calcAbsPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return ::hx::Val( set_scaleX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return ::hx::Val( set_scaleY_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleZ") ) { return ::hx::Val( set_scaleZ_dyn() ); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return ::hx::Val( getChildAt_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numChildren() ); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return ::hx::Val( get_visible_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return ::hx::Val( set_visible_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return ::hx::Val( removeChild_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCollider") ) { return ::hx::Val( getCollider_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return ::hx::Val( setPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"setRotation") ) { return ::hx::Val( setRotation_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ignoreBounds") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ignoreBounds() ); }
		if (HX_FIELD_EQ(inName,"getMaterials") ) { return ::hx::Val( getMaterials_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBoundsRec") ) { return ::hx::Val( getBoundsRec_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTransform") ) { return ::hx::Val( setTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTransform") ) { return ::hx::Val( getTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"setDirection") ) { return ::hx::Val( setDirection_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inheritCulled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_inheritCulled() ); }
		if (HX_FIELD_EQ(inName,"ignoreCollide") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ignoreCollide() ); }
		if (HX_FIELD_EQ(inName,"get_allocated") ) { return ::hx::Val( get_allocated_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_allocated") ) { return ::hx::Val( set_allocated_dyn() ); }
		if (HX_FIELD_EQ(inName,"playAnimation") ) { return ::hx::Val( playAnimation_dyn() ); }
		if (HX_FIELD_EQ(inName,"stopAnimation") ) { return ::hx::Val( stopAnimation_dyn() ); }
		if (HX_FIELD_EQ(inName,"localToGlobal") ) { return ::hx::Val( localToGlobal_dyn() ); }
		if (HX_FIELD_EQ(inName,"globalToLocal") ) { return ::hx::Val( globalToLocal_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMeshByName") ) { return ::hx::Val( getMeshByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return ::hx::Val( getChildIndex_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowSerialize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_allowSerialize() ); }
		if (HX_FIELD_EQ(inName,"get_posChanged") ) { return ::hx::Val( get_posChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_alwaysSync") ) { return ::hx::Val( get_alwaysSync_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_posChanged") ) { return ::hx::Val( set_posChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alwaysSync") ) { return ::hx::Val( set_alwaysSync_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeChildren") ) { return ::hx::Val( removeChildren_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cullingCollider") ) { return ::hx::Val( cullingCollider ); }
		if (HX_FIELD_EQ(inName,"getObjectsCount") ) { return ::hx::Val( getObjectsCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"getObjectByName") ) { return ::hx::Val( getObjectByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"onParentChanged") ) { return ::hx::Val( onParentChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"setRotationAxis") ) { return ::hx::Val( setRotationAxis_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRotationQuat") ) { return ::hx::Val( getRotationQuat_dyn() ); }
		if (HX_FIELD_EQ(inName,"setRotationQuat") ) { return ::hx::Val( setRotationQuat_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return ::hx::Val( get_numChildren_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"defaultTransform") ) { return ::hx::Val( defaultTransform ); }
		if (HX_FIELD_EQ(inName,"currentAnimation") ) { return ::hx::Val( currentAnimation ); }
		if (HX_FIELD_EQ(inName,"get_ignoreBounds") ) { return ::hx::Val( get_ignoreBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_ignoreBounds") ) { return ::hx::Val( set_ignoreBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"getLocalCollider") ) { return ::hx::Val( getLocalCollider_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lightCameraCenter") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_lightCameraCenter() ); }
		if (HX_FIELD_EQ(inName,"get_inheritCulled") ) { return ::hx::Val( get_inheritCulled_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_ignoreCollide") ) { return ::hx::Val( get_ignoreCollide_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_inheritCulled") ) { return ::hx::Val( set_inheritCulled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_ignoreCollide") ) { return ::hx::Val( set_ignoreCollide_dyn() ); }
		if (HX_FIELD_EQ(inName,"switchToAnimation") ) { return ::hx::Val( switchToAnimation_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMaterialByName") ) { return ::hx::Val( getMaterialByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"iterVisibleMeshes") ) { return ::hx::Val( iterVisibleMeshes_dyn() ); }
		if (HX_FIELD_EQ(inName,"getGlobalCollider") ) { return ::hx::Val( getGlobalCollider_dyn() ); }
		if (HX_FIELD_EQ(inName,"getLocalDirection") ) { return ::hx::Val( getLocalDirection_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"followPositionOnly") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_followPositionOnly() ); }
		if (HX_FIELD_EQ(inName,"get_allowSerialize") ) { return ::hx::Val( get_allowSerialize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_allowSerialize") ) { return ::hx::Val( set_allowSerialize_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_cullingCollider") ) { return ::hx::Val( set_cullingCollider_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_defaultTransform") ) { return ::hx::Val( set_defaultTransform_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ignoreParentTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ignoreParentTransform() ); }
		if (HX_FIELD_EQ(inName,"get_lightCameraCenter") ) { return ::hx::Val( get_lightCameraCenter_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_lightCameraCenter") ) { return ::hx::Val( set_lightCameraCenter_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_followPositionOnly") ) { return ::hx::Val( get_followPositionOnly_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_followPositionOnly") ) { return ::hx::Val( set_followPositionOnly_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"applyAnimationTransform") ) { return ::hx::Val( applyAnimationTransform_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"cullingColliderInherited") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_cullingColliderInherited() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_ignoreParentTransform") ) { return ::hx::Val( get_ignoreParentTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_ignoreParentTransform") ) { return ::hx::Val( set_ignoreParentTransform_dyn() ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"get_cullingColliderInherited") ) { return ::hx::Val( get_cullingColliderInherited_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_cullingColliderInherited") ) { return ::hx::Val( set_cullingColliderInherited_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Object_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"tmpMat") ) { outValue = ( tmpMat ); return true; }
		if (HX_FIELD_EQ(inName,"tmpVec") ) { outValue = ( tmpVec ); return true; }
	}
	return false;
}

::hx::Val Object_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_x(inValue.Cast< Float >()) );x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_y(inValue.Cast< Float >()) );y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_z(inValue.Cast< Float >()) );z=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"qRot") ) { qRot=inValue.Cast<  ::h3d::Quat >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flags") ) { flags=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::h3d::scene::Object >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleX(inValue.Cast< Float >()) );scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleY(inValue.Cast< Float >()) );scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleZ") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleZ(inValue.Cast< Float >()) );scaleZ=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"follow") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_follow(inValue.Cast<  ::h3d::scene::Object >()) );follow=inValue.Cast<  ::h3d::scene::Object >(); return inValue; }
		if (HX_FIELD_EQ(inName,"culled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_culled(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"absPos") ) { absPos=inValue.Cast<  ::h3d::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"invPos") ) { invPos=inValue.Cast<  ::h3d::Matrix >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_visible(inValue.Cast< bool >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allocated") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_allocated(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"lastFrame") ) { lastFrame=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alwaysSync") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alwaysSync(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"posChanged") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_posChanged(inValue.Cast< bool >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ignoreBounds") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_ignoreBounds(inValue.Cast< bool >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inheritCulled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_inheritCulled(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"ignoreCollide") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_ignoreCollide(inValue.Cast< bool >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowSerialize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_allowSerialize(inValue.Cast< bool >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cullingCollider") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_cullingCollider(inValue.Cast< ::Dynamic >()) );cullingCollider=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"defaultTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_defaultTransform(inValue.Cast<  ::h3d::Matrix >()) );defaultTransform=inValue.Cast<  ::h3d::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentAnimation") ) { currentAnimation=inValue.Cast<  ::h3d::anim::Animation >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lightCameraCenter") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_lightCameraCenter(inValue.Cast< bool >()) ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"followPositionOnly") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_followPositionOnly(inValue.Cast< bool >()) ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ignoreParentTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_ignoreParentTransform(inValue.Cast< bool >()) ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"cullingColliderInherited") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_cullingColliderInherited(inValue.Cast< bool >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Object_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"tmpMat") ) { tmpMat=ioValue.Cast<  ::h3d::Matrix >(); return true; }
		if (HX_FIELD_EQ(inName,"tmpVec") ) { tmpVec=ioValue.Cast<  ::h3d::Vector >(); return true; }
	}
	return false;
}

void Object_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("flags",47,2b,8c,02));
	outFields->push(HX_("children",3f,19,6a,70));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("numChildren",a5,69,80,5c));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("z",7a,00,00,00));
	outFields->push(HX_("scaleX",8e,ea,25,3c));
	outFields->push(HX_("scaleY",8f,ea,25,3c));
	outFields->push(HX_("scaleZ",90,ea,25,3c));
	outFields->push(HX_("visible",72,78,24,a3));
	outFields->push(HX_("allocated",07,93,8d,3c));
	outFields->push(HX_("follow",71,91,96,f9));
	outFields->push(HX_("followPositionOnly",c6,1d,c4,0b));
	outFields->push(HX_("defaultTransform",6b,94,8b,08));
	outFields->push(HX_("currentAnimation",8b,63,65,3e));
	outFields->push(HX_("culled",91,ee,eb,3a));
	outFields->push(HX_("alwaysSync",ca,08,a1,01));
	outFields->push(HX_("inheritCulled",ec,34,5d,c0));
	outFields->push(HX_("ignoreBounds",27,cd,cd,62));
	outFields->push(HX_("ignoreCollide",8c,44,f1,0a));
	outFields->push(HX_("allowSerialize",17,40,77,c7));
	outFields->push(HX_("ignoreParentTransform",f0,65,95,58));
	outFields->push(HX_("lightCameraCenter",50,b0,59,2b));
	outFields->push(HX_("cullingCollider",c4,6d,5f,be));
	outFields->push(HX_("cullingColliderInherited",b6,4a,84,d6));
	outFields->push(HX_("absPos",42,78,23,82));
	outFields->push(HX_("invPos",23,f5,c8,9f));
	outFields->push(HX_("qRot",26,b6,ef,4a));
	outFields->push(HX_("posChanged",c0,15,08,e3));
	outFields->push(HX_("lastFrame",f7,a5,30,53));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Object_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Object_obj,flags),HX_("flags",47,2b,8c,02)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Object_obj,children),HX_("children",3f,19,6a,70)},
	{::hx::fsObject /*  ::h3d::scene::Object */ ,(int)offsetof(Object_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsString,(int)offsetof(Object_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsFloat,(int)offsetof(Object_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Object_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Object_obj,z),HX_("z",7a,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Object_obj,scaleX),HX_("scaleX",8e,ea,25,3c)},
	{::hx::fsFloat,(int)offsetof(Object_obj,scaleY),HX_("scaleY",8f,ea,25,3c)},
	{::hx::fsFloat,(int)offsetof(Object_obj,scaleZ),HX_("scaleZ",90,ea,25,3c)},
	{::hx::fsObject /*  ::h3d::scene::Object */ ,(int)offsetof(Object_obj,follow),HX_("follow",71,91,96,f9)},
	{::hx::fsObject /*  ::h3d::Matrix */ ,(int)offsetof(Object_obj,defaultTransform),HX_("defaultTransform",6b,94,8b,08)},
	{::hx::fsObject /*  ::h3d::anim::Animation */ ,(int)offsetof(Object_obj,currentAnimation),HX_("currentAnimation",8b,63,65,3e)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(Object_obj,cullingCollider),HX_("cullingCollider",c4,6d,5f,be)},
	{::hx::fsObject /*  ::h3d::Matrix */ ,(int)offsetof(Object_obj,absPos),HX_("absPos",42,78,23,82)},
	{::hx::fsObject /*  ::h3d::Matrix */ ,(int)offsetof(Object_obj,invPos),HX_("invPos",23,f5,c8,9f)},
	{::hx::fsObject /*  ::h3d::Quat */ ,(int)offsetof(Object_obj,qRot),HX_("qRot",26,b6,ef,4a)},
	{::hx::fsInt,(int)offsetof(Object_obj,lastFrame),HX_("lastFrame",f7,a5,30,53)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Object_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Object_obj::ROT2RAD,HX_("ROT2RAD",3a,62,05,67)},
	{::hx::fsObject /*  ::h3d::Matrix */ ,(void *) &Object_obj::tmpMat,HX_("tmpMat",09,be,55,6e)},
	{::hx::fsObject /*  ::h3d::Vector */ ,(void *) &Object_obj::tmpVec,HX_("tmpVec",bd,95,5c,6e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Object_obj_sMemberFields[] = {
	HX_("flags",47,2b,8c,02),
	HX_("children",3f,19,6a,70),
	HX_("parent",2a,05,7e,ed),
	HX_("name",4b,72,ff,48),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("z",7a,00,00,00),
	HX_("scaleX",8e,ea,25,3c),
	HX_("scaleY",8f,ea,25,3c),
	HX_("scaleZ",90,ea,25,3c),
	HX_("follow",71,91,96,f9),
	HX_("defaultTransform",6b,94,8b,08),
	HX_("currentAnimation",8b,63,65,3e),
	HX_("cullingCollider",c4,6d,5f,be),
	HX_("set_cullingCollider",e7,2f,07,86),
	HX_("absPos",42,78,23,82),
	HX_("invPos",23,f5,c8,9f),
	HX_("qRot",26,b6,ef,4a),
	HX_("lastFrame",f7,a5,30,53),
	HX_("get_visible",89,d8,1e,29),
	HX_("get_allocated",de,66,f1,fd),
	HX_("get_posChanged",09,9e,fd,58),
	HX_("get_culled",5a,5e,73,2b),
	HX_("get_followPositionOnly",0f,97,58,65),
	HX_("get_lightCameraCenter",27,b3,07,aa),
	HX_("get_alwaysSync",13,91,96,77),
	HX_("get_inheritCulled",43,40,cd,c6),
	HX_("get_ignoreBounds",b0,b9,6c,67),
	HX_("get_ignoreCollide",e3,4f,61,11),
	HX_("get_allowSerialize",e0,20,11,63),
	HX_("get_ignoreParentTransform",47,20,93,5e),
	HX_("get_cullingColliderInherited",bf,60,d8,17),
	HX_("set_posChanged",7d,86,1d,79),
	HX_("set_culled",ce,fc,f0,2e),
	HX_("set_visible",95,df,8b,33),
	HX_("set_allocated",ea,48,f7,42),
	HX_("set_followPositionOnly",83,13,04,99),
	HX_("set_lightCameraCenter",33,81,10,fe),
	HX_("set_alwaysSync",87,79,b6,97),
	HX_("set_ignoreBounds",24,a7,ae,bd),
	HX_("set_inheritCulled",4f,18,3b,ea),
	HX_("set_ignoreCollide",ef,27,cf,34),
	HX_("set_allowSerialize",54,53,c0,3f),
	HX_("set_ignoreParentTransform",53,e4,e9,ca),
	HX_("set_cullingColliderInherited",33,ac,02,1b),
	HX_("playAnimation",70,42,7a,e5),
	HX_("switchToAnimation",75,cc,2a,02),
	HX_("stopAnimation",a2,ce,42,0e),
	HX_("applyAnimationTransform",d6,ba,66,96),
	HX_("getObjectsCount",11,21,fb,a0),
	HX_("getMaterialByName",ff,22,e9,06),
	HX_("contains",1f,5a,7b,2c),
	HX_("find",39,d0,bb,43),
	HX_("findAll",68,0a,65,25),
	HX_("getMaterials",76,52,62,af),
	HX_("localToGlobal",c9,41,eb,47),
	HX_("globalToLocal",cd,4e,ae,6b),
	HX_("getInvPos",59,7e,1f,1c),
	HX_("getBounds",ab,0f,74,e2),
	HX_("getBoundsRec",65,5e,85,79),
	HX_("getMeshes",d1,40,08,85),
	HX_("getMeshByName",c5,f5,a9,4e),
	HX_("getObjectByName",97,8d,42,0b),
	HX_("clone",5d,13,63,48),
	HX_("addChild",bb,cf,16,bf),
	HX_("addChildAt",8e,ad,36,ce),
	HX_("iterVisibleMeshes",75,c1,dc,1f),
	HX_("onParentChanged",4b,94,65,5e),
	HX_("onAdd",42,86,61,32),
	HX_("onRemove",c3,92,35,e4),
	HX_("removeChild",b8,86,ed,43),
	HX_("removeChildren",a3,55,c0,3a),
	HX_("remove",44,9c,88,04),
	HX_("getScene",d6,e8,a8,d8),
	HX_("getAbsPos",78,01,7a,fe),
	HX_("getRelPos",f1,62,1e,80),
	HX_("isMesh",f7,0e,c0,65),
	HX_("toMesh",08,b5,12,7e),
	HX_("getCollider",ea,a1,c9,ef),
	HX_("getGlobalCollider",ed,16,22,88),
	HX_("getLocalCollider",49,f1,f0,ac),
	HX_("draw",04,2c,70,42),
	HX_("set_follow",ae,9f,9b,ed),
	HX_("calcAbsPos",b7,22,12,37),
	HX_("sync",5b,ba,5f,4c),
	HX_("syncRec",b5,81,15,a7),
	HX_("syncPos",f9,05,14,a7),
	HX_("emit",53,9e,15,43),
	HX_("emitRec",bd,68,dc,be),
	HX_("set_x",5b,9b,2f,7a),
	HX_("set_y",5c,9b,2f,7a),
	HX_("set_z",5d,9b,2f,7a),
	HX_("set_scaleX",cb,f8,2a,30),
	HX_("set_scaleY",cc,f8,2a,30),
	HX_("set_scaleZ",cd,f8,2a,30),
	HX_("set_defaultTransform",e8,b0,ad,f3),
	HX_("setPosition",6b,6a,5b,fb),
	HX_("setTransform",6a,ed,e2,69),
	HX_("getTransform",f6,c9,e9,54),
	HX_("rotate",5b,46,20,cb),
	HX_("setRotation",00,07,e7,38),
	HX_("setRotationAxis",c1,cf,c8,31),
	HX_("setDirection",3d,22,90,34),
	HX_("getLocalDirection",8a,22,d5,e4),
	HX_("getRotationQuat",eb,6e,8e,40),
	HX_("setRotationQuat",f7,eb,59,3c),
	HX_("scale",8a,ce,ce,78),
	HX_("setScale",88,37,03,87),
	HX_("toString",ac,d0,6e,38),
	HX_("getChildAt",b9,07,0e,b6),
	HX_("getChildIndex",0c,68,02,b9),
	HX_("get_numChildren",3c,21,62,1d),
	HX_("iterator",ee,49,9a,93),
	::String(null()) };

static void Object_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Object_obj::ROT2RAD,"ROT2RAD");
	HX_MARK_MEMBER_NAME(Object_obj::tmpMat,"tmpMat");
	HX_MARK_MEMBER_NAME(Object_obj::tmpVec,"tmpVec");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Object_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Object_obj::ROT2RAD,"ROT2RAD");
	HX_VISIT_MEMBER_NAME(Object_obj::tmpMat,"tmpMat");
	HX_VISIT_MEMBER_NAME(Object_obj::tmpVec,"tmpVec");
};

#endif

::hx::Class Object_obj::__mClass;

static ::String Object_obj_sStaticFields[] = {
	HX_("ROT2RAD",3a,62,05,67),
	HX_("tmpMat",09,be,55,6e),
	HX_("tmpVec",bd,95,5c,6e),
	::String(null())
};

void Object_obj::__register()
{
	Object_obj _hx_dummy;
	Object_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("h3d.scene.Object",16,18,b1,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Object_obj::__GetStatic;
	__mClass->mSetStaticField = &Object_obj::__SetStatic;
	__mClass->mMarkFunc = Object_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Object_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Object_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Object_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Object_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Object_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Object_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Object_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_35_boot)
HXDLIN(  35)		ROT2RAD = ((Float)-0.017453292519943295769236907684886);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_828_boot)
HXDLIN( 828)		tmpMat =  ::h3d::Matrix_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_eb74e35b1b6238ec_829_boot)
HXDLIN( 829)		tmpVec =  ::h3d::Vector_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
}

} // end namespace h3d
} // end namespace scene
