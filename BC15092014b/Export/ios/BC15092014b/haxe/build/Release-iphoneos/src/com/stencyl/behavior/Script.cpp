#include <hxcpp.h>

#ifndef INCLUDED_Ads
#include <Ads.h>
#endif
#ifndef INCLUDED_GameCenter
#include <GameCenter.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Native
#include <Native.h>
#endif
#ifndef INCLUDED_Purchases
#include <Purchases.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Body
#include <box2D/dynamics/B2Body.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2DebugDraw
#include <box2D/dynamics/B2DebugDraw.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Fixture
#include <box2D/dynamics/B2Fixture.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2World
#include <box2D/dynamics/B2World.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2Joint
#include <box2D/dynamics/joints/B2Joint.h>
#endif
#ifndef INCLUDED_com_stencyl_AssetLoader
#include <com/stencyl/AssetLoader.h>
#endif
#ifndef INCLUDED_com_stencyl_Data
#include <com/stencyl/Data.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_Input
#include <com/stencyl/Input.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_ActorScript
#include <com/stencyl/behavior/ActorScript.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Behavior
#include <com/stencyl/behavior/Behavior.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_BehaviorManager
#include <com/stencyl/behavior/BehaviorManager.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Script
#include <com/stencyl/behavior/Script.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_TimedTask
#include <com/stencyl/behavior/TimedTask.h>
#endif
#ifndef INCLUDED_com_stencyl_event_EventMaster
#include <com/stencyl/event/EventMaster.h>
#endif
#ifndef INCLUDED_com_stencyl_event_NativeListener
#include <com/stencyl/event/NativeListener.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_G
#include <com/stencyl/graphics/G.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_fonts_BitmapFont
#include <com/stencyl/graphics/fonts/BitmapFont.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_BlindsTransition
#include <com/stencyl/graphics/transitions/BlindsTransition.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_BubblesTransition
#include <com/stencyl/graphics/transitions/BubblesTransition.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_CircleTransition
#include <com/stencyl/graphics/transitions/CircleTransition.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_CrossfadeTransition
#include <com/stencyl/graphics/transitions/CrossfadeTransition.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_FadeInTransition
#include <com/stencyl/graphics/transitions/FadeInTransition.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_FadeOutTransition
#include <com/stencyl/graphics/transitions/FadeOutTransition.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_PixelizeTransition
#include <com/stencyl/graphics/transitions/PixelizeTransition.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_RectangleTransition
#include <com/stencyl/graphics/transitions/RectangleTransition.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_SlideTransition
#include <com/stencyl/graphics/transitions/SlideTransition.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_Transition
#include <com/stencyl/graphics/transitions/Transition.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Atlas
#include <com/stencyl/models/Atlas.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Font
#include <com/stencyl/models/Font.h>
#endif
#ifndef INCLUDED_com_stencyl_models_GameModel
#include <com/stencyl/models/GameModel.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Region
#include <com/stencyl/models/Region.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Scene
#include <com/stencyl/models/Scene.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Sound
#include <com/stencyl/models/Sound.h>
#endif
#ifndef INCLUDED_com_stencyl_models_SoundChannel
#include <com/stencyl/models/SoundChannel.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Terrain
#include <com/stencyl/models/Terrain.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_ActorType
#include <com/stencyl/models/actor/ActorType.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Collision
#include <com/stencyl/models/actor/Collision.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Group
#include <com/stencyl/models/actor/Group.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_Layer
#include <com/stencyl/models/scene/Layer.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_ScrollingBitmap
#include <com/stencyl/models/scene/ScrollingBitmap.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_TileLayer
#include <com/stencyl/models/scene/TileLayer.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_layers_RegularLayer
#include <com/stencyl/models/scene/layers/RegularLayer.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_ColorMatrix
#include <com/stencyl/utils/ColorMatrix.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_Utils
#include <com/stencyl/utils/Utils.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Collection
#include <de/polygonal/ds/Collection.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Hashable
#include <de/polygonal/ds/Hashable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_IntHashTable
#include <de/polygonal/ds/IntHashTable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_IntIntHashTable
#include <de/polygonal/ds/IntIntHashTable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Itr
#include <de/polygonal/ds/Itr.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Map
#include <de/polygonal/ds/Map.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Loader
#include <flash/display/Loader.h>
#endif
#ifndef INCLUDED_flash_display_LoaderInfo
#include <flash/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_media_Sound
#include <flash/media/Sound.h>
#endif
#ifndef INCLUDED_flash_media_SoundChannel
#include <flash/media/SoundChannel.h>
#endif
#ifndef INCLUDED_flash_net_SharedObject
#include <flash/net/SharedObject.h>
#endif
#ifndef INCLUDED_flash_net_SharedObjectFlushStatus
#include <flash/net/SharedObjectFlushStatus.h>
#endif
#ifndef INCLUDED_flash_net_URLLoader
#include <flash/net/URLLoader.h>
#endif
#ifndef INCLUDED_flash_net_URLRequest
#include <flash/net/URLRequest.h>
#endif
#ifndef INCLUDED_flash_net_URLVariables
#include <flash/net/URLVariables.h>
#endif
#ifndef INCLUDED_flash_system_LoaderContext
#include <flash/system/LoaderContext.h>
#endif
#ifndef INCLUDED_flash_ui_Mouse
#include <flash/ui/Mouse.h>
#endif
#ifndef INCLUDED_flash_utils_ByteArray
#include <flash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_flash_utils_IDataInput
#include <flash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_flash_utils_IDataOutput
#include <flash/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_crypto_BaseCode
#include <haxe/crypto/BaseCode.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_scripts_MyAssets
#include <scripts/MyAssets.h>
#endif
namespace com{
namespace stencyl{
namespace behavior{

Void Script_obj::__construct(::com::stencyl::Engine engine)
{
HX_STACK_PUSH("Script::new","com/stencyl/behavior/Script.hx",142);
{
	HX_STACK_LINE(143)
	this->engine = this->scene = engine;
	HX_STACK_LINE(145)
	this->scriptInit = false;
	HX_STACK_LINE(146)
	this->checkProperties = false;
	HX_STACK_LINE(147)
	this->nameMap = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(148)
	this->propertyChangeListeners = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(149)
	this->equalityPairs = ::haxe::ds::ObjectMap_obj::__new();
}
;
	return null();
}

Script_obj::~Script_obj() { }

Dynamic Script_obj::__CreateEmpty() { return  new Script_obj; }
hx::ObjectPtr< Script_obj > Script_obj::__new(::com::stencyl::Engine engine)
{  hx::ObjectPtr< Script_obj > result = new Script_obj();
	result->__construct(engine);
	return result;}

Dynamic Script_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Script_obj > result = new Script_obj();
	result->__construct(inArgs[0]);
	return result;}

Dynamic Script_obj::createBrightnessFilter( Float b){
	HX_STACK_PUSH("Script::createBrightnessFilter","com/stencyl/behavior/Script.hx",3928);
	HX_STACK_THIS(this);
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(3929)
	::com::stencyl::utils::ColorMatrix cm = ::com::stencyl::utils::ColorMatrix_obj::__new();		HX_STACK_VAR(cm,"cm");
	HX_STACK_LINE(3930)
	cm->adjustBrightness((Float(b) / Float((int)100)));
	struct _Function_1_1{
		inline static Array< Float > Block( ::com::stencyl::utils::ColorMatrix &cm){
			HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",3931);
			{
				HX_STACK_LINE(3931)
				Array< Float > out = cm->matrix;		HX_STACK_VAR(out,"out");
				HX_STACK_LINE(3931)
				out[(int)0] = cm->m11;
				HX_STACK_LINE(3931)
				out[(int)1] = cm->m12;
				HX_STACK_LINE(3931)
				out[(int)2] = cm->m13;
				HX_STACK_LINE(3931)
				out[(int)3] = cm->m14;
				HX_STACK_LINE(3931)
				out[(int)4] = cm->m15;
				HX_STACK_LINE(3931)
				out[(int)5] = cm->m21;
				HX_STACK_LINE(3931)
				out[(int)6] = cm->m22;
				HX_STACK_LINE(3931)
				out[(int)7] = cm->m23;
				HX_STACK_LINE(3931)
				out[(int)8] = cm->m24;
				HX_STACK_LINE(3931)
				out[(int)9] = cm->m25;
				HX_STACK_LINE(3931)
				out[(int)10] = cm->m31;
				HX_STACK_LINE(3931)
				out[(int)11] = cm->m32;
				HX_STACK_LINE(3931)
				out[(int)12] = cm->m33;
				HX_STACK_LINE(3931)
				out[(int)13] = cm->m34;
				HX_STACK_LINE(3931)
				out[(int)14] = cm->m35;
				HX_STACK_LINE(3931)
				out[(int)15] = cm->m41;
				HX_STACK_LINE(3931)
				out[(int)16] = cm->m42;
				HX_STACK_LINE(3931)
				out[(int)17] = cm->m43;
				HX_STACK_LINE(3931)
				out[(int)18] = cm->m44;
				HX_STACK_LINE(3931)
				out[(int)19] = cm->m45;
				HX_STACK_LINE(3931)
				return out;
			}
			return null();
		}
	};
	HX_STACK_LINE(3931)
	Dynamic matrix = hx::TCastToArray(_Function_1_1::Block(cm));		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(3932)
	matrix->__Field(HX_CSTRING("insert"),true)((int)0,HX_CSTRING("BrightnessFilter"));
	HX_STACK_LINE(3933)
	return matrix;
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,createBrightnessFilter,return )

Dynamic Script_obj::createSaturationFilter( Float s){
	HX_STACK_PUSH("Script::createSaturationFilter","com/stencyl/behavior/Script.hx",3919);
	HX_STACK_THIS(this);
	HX_STACK_ARG(s,"s");
	HX_STACK_LINE(3920)
	::com::stencyl::utils::ColorMatrix cm = ::com::stencyl::utils::ColorMatrix_obj::__new();		HX_STACK_VAR(cm,"cm");
	HX_STACK_LINE(3921)
	cm->adjustSaturation((Float(s) / Float((int)100)));
	struct _Function_1_1{
		inline static Array< Float > Block( ::com::stencyl::utils::ColorMatrix &cm){
			HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",3922);
			{
				HX_STACK_LINE(3922)
				Array< Float > out = cm->matrix;		HX_STACK_VAR(out,"out");
				HX_STACK_LINE(3922)
				out[(int)0] = cm->m11;
				HX_STACK_LINE(3922)
				out[(int)1] = cm->m12;
				HX_STACK_LINE(3922)
				out[(int)2] = cm->m13;
				HX_STACK_LINE(3922)
				out[(int)3] = cm->m14;
				HX_STACK_LINE(3922)
				out[(int)4] = cm->m15;
				HX_STACK_LINE(3922)
				out[(int)5] = cm->m21;
				HX_STACK_LINE(3922)
				out[(int)6] = cm->m22;
				HX_STACK_LINE(3922)
				out[(int)7] = cm->m23;
				HX_STACK_LINE(3922)
				out[(int)8] = cm->m24;
				HX_STACK_LINE(3922)
				out[(int)9] = cm->m25;
				HX_STACK_LINE(3922)
				out[(int)10] = cm->m31;
				HX_STACK_LINE(3922)
				out[(int)11] = cm->m32;
				HX_STACK_LINE(3922)
				out[(int)12] = cm->m33;
				HX_STACK_LINE(3922)
				out[(int)13] = cm->m34;
				HX_STACK_LINE(3922)
				out[(int)14] = cm->m35;
				HX_STACK_LINE(3922)
				out[(int)15] = cm->m41;
				HX_STACK_LINE(3922)
				out[(int)16] = cm->m42;
				HX_STACK_LINE(3922)
				out[(int)17] = cm->m43;
				HX_STACK_LINE(3922)
				out[(int)18] = cm->m44;
				HX_STACK_LINE(3922)
				out[(int)19] = cm->m45;
				HX_STACK_LINE(3922)
				return out;
			}
			return null();
		}
	};
	HX_STACK_LINE(3922)
	Dynamic matrix = hx::TCastToArray(_Function_1_1::Block(cm));		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(3923)
	matrix->__Field(HX_CSTRING("insert"),true)((int)0,HX_CSTRING("SaturationFilter"));
	HX_STACK_LINE(3924)
	return matrix;
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,createSaturationFilter,return )

Dynamic Script_obj::createHueFilter( Float h){
	HX_STACK_PUSH("Script::createHueFilter","com/stencyl/behavior/Script.hx",3909);
	HX_STACK_THIS(this);
	HX_STACK_ARG(h,"h");
	HX_STACK_LINE(3910)
	::com::stencyl::utils::ColorMatrix cm = ::com::stencyl::utils::ColorMatrix_obj::__new();		HX_STACK_VAR(cm,"cm");
	HX_STACK_LINE(3911)
	cm->adjustHue(h);
	HX_STACK_LINE(3912)
	cm->adjustSaturation((int)1);
	struct _Function_1_1{
		inline static Array< Float > Block( ::com::stencyl::utils::ColorMatrix &cm){
			HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",3913);
			{
				HX_STACK_LINE(3913)
				Array< Float > out = cm->matrix;		HX_STACK_VAR(out,"out");
				HX_STACK_LINE(3913)
				out[(int)0] = cm->m11;
				HX_STACK_LINE(3913)
				out[(int)1] = cm->m12;
				HX_STACK_LINE(3913)
				out[(int)2] = cm->m13;
				HX_STACK_LINE(3913)
				out[(int)3] = cm->m14;
				HX_STACK_LINE(3913)
				out[(int)4] = cm->m15;
				HX_STACK_LINE(3913)
				out[(int)5] = cm->m21;
				HX_STACK_LINE(3913)
				out[(int)6] = cm->m22;
				HX_STACK_LINE(3913)
				out[(int)7] = cm->m23;
				HX_STACK_LINE(3913)
				out[(int)8] = cm->m24;
				HX_STACK_LINE(3913)
				out[(int)9] = cm->m25;
				HX_STACK_LINE(3913)
				out[(int)10] = cm->m31;
				HX_STACK_LINE(3913)
				out[(int)11] = cm->m32;
				HX_STACK_LINE(3913)
				out[(int)12] = cm->m33;
				HX_STACK_LINE(3913)
				out[(int)13] = cm->m34;
				HX_STACK_LINE(3913)
				out[(int)14] = cm->m35;
				HX_STACK_LINE(3913)
				out[(int)15] = cm->m41;
				HX_STACK_LINE(3913)
				out[(int)16] = cm->m42;
				HX_STACK_LINE(3913)
				out[(int)17] = cm->m43;
				HX_STACK_LINE(3913)
				out[(int)18] = cm->m44;
				HX_STACK_LINE(3913)
				out[(int)19] = cm->m45;
				HX_STACK_LINE(3913)
				return out;
			}
			return null();
		}
	};
	HX_STACK_LINE(3913)
	Dynamic matrix = hx::TCastToArray(_Function_1_1::Block(cm));		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(3914)
	matrix->__Field(HX_CSTRING("insert"),true)((int)0,HX_CSTRING("HueFilter"));
	HX_STACK_LINE(3915)
	return matrix;
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,createHueFilter,return )

Dynamic Script_obj::createTintFilter( int color,hx::Null< Float >  __o_amount){
Float amount = __o_amount.Default(1);
	HX_STACK_PUSH("Script::createTintFilter","com/stencyl/behavior/Script.hx",3898);
	HX_STACK_THIS(this);
	HX_STACK_ARG(color,"color");
	HX_STACK_ARG(amount,"amount");
{
		HX_STACK_LINE(3899)
		Dynamic matrix = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(3900)
		hx::IndexRef((matrix).mPtr,(int)0) = HX_CSTRING("TintFilter");
		HX_STACK_LINE(3901)
		hx::IndexRef((matrix).mPtr,(int)1) = (Float(((int((int(color) >> int((int)16))) & int((int)255)))) / Float(255.0));
		HX_STACK_LINE(3902)
		hx::IndexRef((matrix).mPtr,(int)2) = (Float(((int((int(color) >> int((int)8))) & int((int)255)))) / Float(255.0));
		HX_STACK_LINE(3903)
		hx::IndexRef((matrix).mPtr,(int)3) = (Float(((int(color) & int((int)255)))) / Float(255.0));
		HX_STACK_LINE(3904)
		hx::IndexRef((matrix).mPtr,(int)4) = amount;
		HX_STACK_LINE(3905)
		return matrix;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createTintFilter,return )

Dynamic Script_obj::createNegativeFilter( ){
	HX_STACK_PUSH("Script::createNegativeFilter","com/stencyl/behavior/Script.hx",3891);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3892)
	Dynamic matrix = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(3893)
	hx::IndexRef((matrix).mPtr,(int)0) = HX_CSTRING("NegativeFilter");
	HX_STACK_LINE(3894)
	return matrix;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,createNegativeFilter,return )

Dynamic Script_obj::createSepiaFilter( ){
	HX_STACK_PUSH("Script::createSepiaFilter","com/stencyl/behavior/Script.hx",3879);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3880)
	Dynamic matrix = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(3881)
	matrix = matrix->__Field(HX_CSTRING("concat"),true)(Dynamic( Array_obj<Dynamic>::__new().Add(0.34).Add(0.33).Add(0.33).Add(0.00).Add(30.00)));
	HX_STACK_LINE(3882)
	matrix = matrix->__Field(HX_CSTRING("concat"),true)(Dynamic( Array_obj<Dynamic>::__new().Add(0.33).Add(0.34).Add(0.33).Add(0.00).Add(20.00)));
	HX_STACK_LINE(3883)
	matrix = matrix->__Field(HX_CSTRING("concat"),true)(Dynamic( Array_obj<Dynamic>::__new().Add(0.33).Add(0.33).Add(0.34).Add(0.00).Add(0.00)));
	HX_STACK_LINE(3884)
	matrix = matrix->__Field(HX_CSTRING("concat"),true)(Dynamic( Array_obj<Dynamic>::__new().Add(0.00).Add(0.00).Add(0.00).Add(1.00).Add(0.00)));
	HX_STACK_LINE(3885)
	matrix->__Field(HX_CSTRING("insert"),true)((int)0,HX_CSTRING("SepiaFilter"));
	HX_STACK_LINE(3887)
	return matrix;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,createSepiaFilter,return )

Dynamic Script_obj::createGrayscaleFilter( ){
	HX_STACK_PUSH("Script::createGrayscaleFilter","com/stencyl/behavior/Script.hx",3872);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3873)
	Dynamic matrix = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(3874)
	hx::IndexRef((matrix).mPtr,(int)0) = HX_CSTRING("GrayscaleFilter");
	HX_STACK_LINE(3875)
	return matrix;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,createGrayscaleFilter,return )

Void Script_obj::disableDebugDrawing( ){
{
		HX_STACK_PUSH("Script::disableDebugDrawing","com/stencyl/behavior/Script.hx",3857);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3858)
		::com::stencyl::Engine_obj::DEBUG_DRAW = false;
		HX_STACK_LINE(3860)
		if ((!(::com::stencyl::Engine_obj::NO_PHYSICS))){
			HX_STACK_LINE(3861)
			::com::stencyl::Engine_obj::debugDrawer->m_sprite->get_graphics()->clear();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,disableDebugDrawing,(void))

Void Script_obj::enableDebugDrawing( ){
{
		HX_STACK_PUSH("Script::enableDebugDrawing","com/stencyl/behavior/Script.hx",3847);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3848)
		::com::stencyl::Engine_obj::DEBUG_DRAW = true;
		HX_STACK_LINE(3850)
		if ((!(::com::stencyl::Engine_obj::NO_PHYSICS))){
			HX_STACK_LINE(3851)
			::com::stencyl::Engine_obj::debugDrawer->m_sprite->get_graphics()->clear();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,enableDebugDrawing,(void))

Void Script_obj::setIconBadgeNumber( int n){
{
		HX_STACK_PUSH("Script::setIconBadgeNumber","com/stencyl/behavior/Script.hx",3836);
		HX_STACK_THIS(this);
		HX_STACK_ARG(n,"n");
		HX_STACK_LINE(3836)
		::Native_obj::setIconBadgeNumber(n);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,setIconBadgeNumber,(void))

Void Script_obj::setKeyboardText( ::String text){
{
		HX_STACK_PUSH("Script::setKeyboardText","com/stencyl/behavior/Script.hx",3829);
		HX_STACK_THIS(this);
		HX_STACK_ARG(text,"text");
		HX_STACK_LINE(3829)
		::Native_obj::setKeyboardText(text);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,setKeyboardText,(void))

Void Script_obj::hideKeyboard( ){
{
		HX_STACK_PUSH("Script::hideKeyboard","com/stencyl/behavior/Script.hx",3822);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3822)
		::Native_obj::hideKeyboard();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,hideKeyboard,(void))

Void Script_obj::showKeyboard( ){
{
		HX_STACK_PUSH("Script::showKeyboard","com/stencyl/behavior/Script.hx",3815);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3815)
		::Native_obj::showKeyboard();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,showKeyboard,(void))

Void Script_obj::vibrate( hx::Null< Float >  __o_time){
Float time = __o_time.Default(1);
	HX_STACK_PUSH("Script::vibrate","com/stencyl/behavior/Script.hx",3808);
	HX_STACK_THIS(this);
	HX_STACK_ARG(time,"time");
{
		HX_STACK_LINE(3808)
		::Native_obj::vibrate(time);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,vibrate,(void))

Void Script_obj::showAlert( ::String title,::String msg){
{
		HX_STACK_PUSH("Script::showAlert","com/stencyl/behavior/Script.hx",3801);
		HX_STACK_THIS(this);
		HX_STACK_ARG(title,"title");
		HX_STACK_ARG(msg,"msg");
		HX_STACK_LINE(3801)
		::Native_obj::showAlert(title,msg);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,showAlert,(void))

int Script_obj::purchasesGetQuantity( ::String productID){
	HX_STACK_PUSH("Script::purchasesGetQuantity","com/stencyl/behavior/Script.hx",3788);
	HX_STACK_THIS(this);
	HX_STACK_ARG(productID,"productID");
	HX_STACK_LINE(3788)
	return ::Purchases_obj::getQuantity(productID);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,purchasesGetQuantity,return )

Void Script_obj::purchasesUse( ::String productID){
{
		HX_STACK_PUSH("Script::purchasesUse","com/stencyl/behavior/Script.hx",3781);
		HX_STACK_THIS(this);
		HX_STACK_ARG(productID,"productID");
		HX_STACK_LINE(3781)
		::Purchases_obj::use(productID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,purchasesUse,(void))

Void Script_obj::purchasesRequestProductInfo( Dynamic productIDlist){
{
		HX_STACK_PUSH("Script::purchasesRequestProductInfo","com/stencyl/behavior/Script.hx",3770);
		HX_STACK_THIS(this);
		HX_STACK_ARG(productIDlist,"productIDlist");
		HX_STACK_LINE(3770)
		::Purchases_obj::requestProductInfo(productIDlist);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,purchasesRequestProductInfo,(void))

::String Script_obj::purchasesGetPrice( ::String productID){
	HX_STACK_PUSH("Script::purchasesGetPrice","com/stencyl/behavior/Script.hx",3761);
	HX_STACK_THIS(this);
	HX_STACK_ARG(productID,"productID");
	HX_STACK_LINE(3761)
	return ::Purchases_obj::getPrice(productID);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,purchasesGetPrice,return )

::String Script_obj::purchasesGetDescription( ::String productID){
	HX_STACK_PUSH("Script::purchasesGetDescription","com/stencyl/behavior/Script.hx",3752);
	HX_STACK_THIS(this);
	HX_STACK_ARG(productID,"productID");
	HX_STACK_LINE(3752)
	return ::Purchases_obj::getDescription(productID);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,purchasesGetDescription,return )

::String Script_obj::purchasesGetTitle( ::String productID){
	HX_STACK_PUSH("Script::purchasesGetTitle","com/stencyl/behavior/Script.hx",3743);
	HX_STACK_THIS(this);
	HX_STACK_ARG(productID,"productID");
	HX_STACK_LINE(3743)
	return ::Purchases_obj::getTitle(productID);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,purchasesGetTitle,return )

bool Script_obj::purchasesHasBought( ::String productID){
	HX_STACK_PUSH("Script::purchasesHasBought","com/stencyl/behavior/Script.hx",3734);
	HX_STACK_THIS(this);
	HX_STACK_ARG(productID,"productID");
	HX_STACK_LINE(3734)
	return ::Purchases_obj::hasBought(productID);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,purchasesHasBought,return )

Void Script_obj::purchasesBuy( ::String productID){
{
		HX_STACK_PUSH("Script::purchasesBuy","com/stencyl/behavior/Script.hx",3727);
		HX_STACK_THIS(this);
		HX_STACK_ARG(productID,"productID");
		HX_STACK_LINE(3727)
		::Purchases_obj::buy(productID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,purchasesBuy,(void))

Void Script_obj::purchasesRestore( ){
{
		HX_STACK_PUSH("Script::purchasesRestore","com/stencyl/behavior/Script.hx",3720);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3720)
		::Purchases_obj::restorePurchases();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,purchasesRestore,(void))

bool Script_obj::purchasesAreInitialized( ){
	HX_STACK_PUSH("Script::purchasesAreInitialized","com/stencyl/behavior/Script.hx",3711);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3711)
	return ::Purchases_obj::canBuy();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,purchasesAreInitialized,return )

Void Script_obj::gameCenterShowBanner( ::String title,::String msg){
{
		HX_STACK_PUSH("Script::gameCenterShowBanner","com/stencyl/behavior/Script.hx",3702);
		HX_STACK_THIS(this);
		HX_STACK_ARG(title,"title");
		HX_STACK_ARG(msg,"msg");
		HX_STACK_LINE(3702)
		::GameCenter_obj::showAchievementBanner(title,msg);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,gameCenterShowBanner,(void))

Void Script_obj::gameCenterResetAchievements( ){
{
		HX_STACK_PUSH("Script::gameCenterResetAchievements","com/stencyl/behavior/Script.hx",3695);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3695)
		::GameCenter_obj::resetAchievements();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,gameCenterResetAchievements,(void))

Void Script_obj::gameCenterSubmitAchievement( ::String achievementID,Float percent){
{
		HX_STACK_PUSH("Script::gameCenterSubmitAchievement","com/stencyl/behavior/Script.hx",3688);
		HX_STACK_THIS(this);
		HX_STACK_ARG(achievementID,"achievementID");
		HX_STACK_ARG(percent,"percent");
		HX_STACK_LINE(3688)
		::GameCenter_obj::reportAchievement(achievementID,percent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,gameCenterSubmitAchievement,(void))

Void Script_obj::gameCenterSubmitScore( Float score,::String categoryID){
{
		HX_STACK_PUSH("Script::gameCenterSubmitScore","com/stencyl/behavior/Script.hx",3681);
		HX_STACK_THIS(this);
		HX_STACK_ARG(score,"score");
		HX_STACK_ARG(categoryID,"categoryID");
		HX_STACK_LINE(3681)
		::GameCenter_obj::reportScore(categoryID,::Std_obj::_int(score));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,gameCenterSubmitScore,(void))

Void Script_obj::gameCenterShowAchievements( ){
{
		HX_STACK_PUSH("Script::gameCenterShowAchievements","com/stencyl/behavior/Script.hx",3674);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3674)
		::GameCenter_obj::showAchievements();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,gameCenterShowAchievements,(void))

Void Script_obj::gameCenterShowLeaderboard( ::String categoryID){
{
		HX_STACK_PUSH("Script::gameCenterShowLeaderboard","com/stencyl/behavior/Script.hx",3667);
		HX_STACK_THIS(this);
		HX_STACK_ARG(categoryID,"categoryID");
		HX_STACK_LINE(3667)
		::GameCenter_obj::showLeaderboard(categoryID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,gameCenterShowLeaderboard,(void))

::String Script_obj::gameCenterGetPlayerID( ){
	HX_STACK_PUSH("Script::gameCenterGetPlayerID","com/stencyl/behavior/Script.hx",3658);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3658)
	return ::GameCenter_obj::getPlayerID();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,gameCenterGetPlayerID,return )

::String Script_obj::gameCenterGetPlayerName( ){
	HX_STACK_PUSH("Script::gameCenterGetPlayerName","com/stencyl/behavior/Script.hx",3649);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3649)
	return ::GameCenter_obj::getPlayerName();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,gameCenterGetPlayerName,return )

bool Script_obj::gameCenterIsAuthenticated( ){
	HX_STACK_PUSH("Script::gameCenterIsAuthenticated","com/stencyl/behavior/Script.hx",3640);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3640)
	return ::GameCenter_obj::isAuthenticated();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,gameCenterIsAuthenticated,return )

Void Script_obj::gameCenterInitialize( ){
{
		HX_STACK_PUSH("Script::gameCenterInitialize","com/stencyl/behavior/Script.hx",3633);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3633)
		::GameCenter_obj::initialize();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,gameCenterInitialize,(void))

Void Script_obj::hideMobileAd( ){
{
		HX_STACK_PUSH("Script::hideMobileAd","com/stencyl/behavior/Script.hx",3619);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3621)
		::Ads_obj::initialize(null(),null());
		HX_STACK_LINE(3622)
		::Ads_obj::hideAd();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,hideMobileAd,(void))

Void Script_obj::showMobileAd( ){
{
		HX_STACK_PUSH("Script::showMobileAd","com/stencyl/behavior/Script.hx",3607);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3609)
		::Ads_obj::initialize(null(),null());
		HX_STACK_LINE(3610)
		::Ads_obj::showAd(::scripts::MyAssets_obj::adPositionBottom);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,showMobileAd,(void))

bool Script_obj::atlasIsLoaded( int atlasID){
	HX_STACK_PUSH("Script::atlasIsLoaded","com/stencyl/behavior/Script.hx",3595);
	HX_STACK_THIS(this);
	HX_STACK_ARG(atlasID,"atlasID");
	HX_STACK_LINE(3599)
	::com::stencyl::models::Atlas atlas = ::com::stencyl::models::GameModel_obj::get()->atlases->get(atlasID);		HX_STACK_VAR(atlas,"atlas");
	HX_STACK_LINE(3600)
	return (bool((atlas != null())) && bool(atlas->active));
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,atlasIsLoaded,return )

Void Script_obj::unloadAtlas( int atlasID){
{
		HX_STACK_PUSH("Script::unloadAtlas","com/stencyl/behavior/Script.hx",3588);
		HX_STACK_THIS(this);
		HX_STACK_ARG(atlasID,"atlasID");
		HX_STACK_LINE(3588)
		this->engine->atlasesToUnload->set(atlasID,atlasID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,unloadAtlas,(void))

Void Script_obj::loadAtlas( int atlasID){
{
		HX_STACK_PUSH("Script::loadAtlas","com/stencyl/behavior/Script.hx",3581);
		HX_STACK_THIS(this);
		HX_STACK_ARG(atlasID,"atlasID");
		HX_STACK_LINE(3581)
		this->engine->atlasesToLoad->set(atlasID,atlasID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,loadAtlas,(void))

Void Script_obj::mochiSubmitScore( ::String boardID,Float score,Dynamic startFunc,Dynamic endFunc){
{
		HX_STACK_PUSH("Script::mochiSubmitScore","com/stencyl/behavior/Script.hx",3542);
		HX_STACK_THIS(this);
		HX_STACK_ARG(boardID,"boardID");
		HX_STACK_ARG(score,"score");
		HX_STACK_ARG(startFunc,"startFunc");
		HX_STACK_ARG(endFunc,"endFunc");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Script_obj,mochiSubmitScore,(void))

Void Script_obj::mochiShowScores( ::String boardID,Dynamic startFunc,Dynamic endFunc){
{
		HX_STACK_PUSH("Script::mochiShowScores","com/stencyl/behavior/Script.hx",3512);
		HX_STACK_THIS(this);
		HX_STACK_ARG(boardID,"boardID");
		HX_STACK_ARG(startFunc,"startFunc");
		HX_STACK_ARG(endFunc,"endFunc");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Script_obj,mochiShowScores,(void))

Void Script_obj::mochiShowAd( int width,int height,Dynamic startFunc,Dynamic endFunc){
{
		HX_STACK_PUSH("Script::mochiShowAd","com/stencyl/behavior/Script.hx",3476);
		HX_STACK_THIS(this);
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_ARG(startFunc,"startFunc");
		HX_STACK_ARG(endFunc,"endFunc");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Script_obj,mochiShowAd,(void))

int Script_obj::kongregateGetUserID( ){
	HX_STACK_PUSH("Script::kongregateGetUserID","com/stencyl/behavior/Script.hx",3463);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3463)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,kongregateGetUserID,return )

::String Script_obj::kongregateGetUsername( ){
	HX_STACK_PUSH("Script::kongregateGetUsername","com/stencyl/behavior/Script.hx",3454);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3454)
	return HX_CSTRING("Guest");
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,kongregateGetUsername,return )

bool Script_obj::kongregateIsGuest( ){
	HX_STACK_PUSH("Script::kongregateIsGuest","com/stencyl/behavior/Script.hx",3445);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3445)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,kongregateIsGuest,return )

Void Script_obj::kongregateSubmitStat( ::String name,Float stat){
{
		HX_STACK_PUSH("Script::kongregateSubmitStat","com/stencyl/behavior/Script.hx",3438);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(stat,"stat");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,kongregateSubmitStat,(void))

Void Script_obj::kongregateInitAPI( ){
{
		HX_STACK_PUSH("Script::kongregateInitAPI","com/stencyl/behavior/Script.hx",3431);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,kongregateInitAPI,(void))

Void Script_obj::newgroundsHelper( ::flash::events::MouseEvent event){
{
		HX_STACK_PUSH("Script::newgroundsHelper","com/stencyl/behavior/Script.hx",3420);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,newgroundsHelper,(void))

Void Script_obj::newgroundsShowScore( ::String boardName){
{
		HX_STACK_PUSH("Script::newgroundsShowScore","com/stencyl/behavior/Script.hx",3372);
		HX_STACK_THIS(this);
		HX_STACK_ARG(boardName,"boardName");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,newgroundsShowScore,(void))

Void Script_obj::newgroundsSubmitScore( ::String boardName,Float value){
{
		HX_STACK_PUSH("Script::newgroundsSubmitScore","com/stencyl/behavior/Script.hx",3365);
		HX_STACK_THIS(this);
		HX_STACK_ARG(boardName,"boardName");
		HX_STACK_ARG(value,"value");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,newgroundsSubmitScore,(void))

Void Script_obj::newgroundsUnlockMedal( ::String medalName){
{
		HX_STACK_PUSH("Script::newgroundsUnlockMedal","com/stencyl/behavior/Script.hx",3352);
		HX_STACK_THIS(this);
		HX_STACK_ARG(medalName,"medalName");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,newgroundsUnlockMedal,(void))

Void Script_obj::newgroundsSetMedalPosition( int x,int y){
{
		HX_STACK_PUSH("Script::newgroundsSetMedalPosition","com/stencyl/behavior/Script.hx",3338);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,newgroundsSetMedalPosition,(void))

Void Script_obj::newgroundsShowAd( ){
{
		HX_STACK_PUSH("Script::newgroundsShowAd","com/stencyl/behavior/Script.hx",3326);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,newgroundsShowAd,(void))

Void Script_obj::simpleTweet( ::String message,::String gameURL){
{
		HX_STACK_PUSH("Script::simpleTweet","com/stencyl/behavior/Script.hx",3310);
		HX_STACK_THIS(this);
		HX_STACK_ARG(message,"message");
		HX_STACK_ARG(gameURL,"gameURL");
		HX_STACK_LINE(3310)
		this->openURLInBrowser((HX_CSTRING("http://twitter.com/home?status=") + ::StringTools_obj::urlEncode(((message + HX_CSTRING(" ")) + gameURL))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,simpleTweet,(void))

::String Script_obj::convertToPseudoUnicode( ::String internationalText){
	HX_STACK_PUSH("Script::convertToPseudoUnicode","com/stencyl/behavior/Script.hx",3196);
	HX_STACK_THIS(this);
	HX_STACK_ARG(internationalText,"internationalText");
	HX_STACK_LINE(3201)
	Dynamic utf8List = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(utf8List,"utf8List");
	HX_STACK_LINE(3202)
	::String convertedString = HX_CSTRING("");		HX_STACK_VAR(convertedString,"convertedString");
	HX_STACK_LINE(3203)
	Array< ::String > hexAscii = Array_obj< ::String >::__new().Add(HX_CSTRING("A")).Add(HX_CSTRING("B")).Add(HX_CSTRING("C")).Add(HX_CSTRING("D")).Add(HX_CSTRING("E")).Add(HX_CSTRING("F"));		HX_STACK_VAR(hexAscii,"hexAscii");
	HX_STACK_LINE(3204)
	int other_bits = (int)6;		HX_STACK_VAR(other_bits,"other_bits");
	HX_STACK_LINE(3205)
	int realCount = (int)0;		HX_STACK_VAR(realCount,"realCount");
	HX_STACK_LINE(3207)
	{
		HX_STACK_LINE(3207)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = internationalText.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(3207)
		while(((_g1 < _g))){
			HX_STACK_LINE(3207)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(3209)
			if (((i < realCount))){
				HX_STACK_LINE(3210)
				continue;
			}
			HX_STACK_LINE(3214)
			if (((internationalText.charCodeAt(i) < (int)128))){
				HX_STACK_LINE(3215)
				hx::AddEq(convertedString,internationalText.charAt(i));
			}
			else{
				HX_STACK_LINE(3220)
				utf8List->__Field(HX_CSTRING("splice"),true)((int)0,utf8List->__Field(HX_CSTRING("length"),true));
				HX_STACK_LINE(3221)
				int utf8count = i;		HX_STACK_VAR(utf8count,"utf8count");
				HX_STACK_LINE(3223)
				while(((utf8count < internationalText.length))){
					HX_STACK_LINE(3225)
					if (((internationalText.charCodeAt(utf8count) >= (int)128))){
						HX_STACK_LINE(3227)
						utf8List->__Field(HX_CSTRING("push"),true)(internationalText.charCodeAt(utf8count));
						HX_STACK_LINE(3228)
						hx::AddEq(realCount,(int)1);
					}
					HX_STACK_LINE(3231)
					if (((bool((internationalText.charCodeAt(utf8count) < (int)128)) || bool((utf8count == (internationalText.length - (int)1)))))){
						HX_STACK_LINE(3233)
						while(((utf8List->__Field(HX_CSTRING("length"),true) > (int)0))){
							HX_STACK_LINE(3235)
							int charcode = (int)0;		HX_STACK_VAR(charcode,"charcode");
							HX_STACK_LINE(3236)
							int high_bit_mask = (int)63;		HX_STACK_VAR(high_bit_mask,"high_bit_mask");
							HX_STACK_LINE(3237)
							int high_bit_shift = (int)0;		HX_STACK_VAR(high_bit_shift,"high_bit_shift");
							HX_STACK_LINE(3238)
							int total_bits = (int)0;		HX_STACK_VAR(total_bits,"total_bits");
							struct _Function_7_1{
								inline static Float Block( Dynamic &utf8List){
									HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",3239);
									{
										HX_STACK_LINE(3239)
										Dynamic o = utf8List->__GetItem((int)0);		HX_STACK_VAR(o,"o");
										struct _Function_8_1{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",3239);
												{
													HX_STACK_LINE(3239)
													return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
												}
												return null();
											}
										};
										struct _Function_8_2{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",3239);
												{
													HX_STACK_LINE(3239)
													::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
													HX_STACK_LINE(3239)
													return (int)0;
												}
												return null();
											}
										};
										HX_STACK_LINE(3239)
										return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_8_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_8_2::Block(o)) )) )) )) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(3239)
							int character = ::Std_obj::_int(_Function_7_1::Block(utf8List));		HX_STACK_VAR(character,"character");
							HX_STACK_LINE(3240)
							utf8List->__Field(HX_CSTRING("splice"),true)((int)0,(int)1);
							HX_STACK_LINE(3243)
							while(((((int(character) & int((int)192))) == (int)192))){
								HX_STACK_LINE(3245)
								hx::ShlEq(character,(int)1);
								HX_STACK_LINE(3246)
								hx::AndEq(character,(int)255);
								HX_STACK_LINE(3247)
								hx::AddEq(total_bits,(int)6);
								HX_STACK_LINE(3248)
								hx::ShrEq(high_bit_mask,(int)1);
								HX_STACK_LINE(3249)
								(high_bit_shift)++;
								HX_STACK_LINE(3250)
								hx::ShlEq(charcode,other_bits);
								struct _Function_8_1{
									inline static Float Block( Dynamic &utf8List){
										HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",3251);
										{
											HX_STACK_LINE(3251)
											Dynamic o = utf8List->__GetItem((int)0);		HX_STACK_VAR(o,"o");
											struct _Function_9_1{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",3251);
													{
														HX_STACK_LINE(3251)
														return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
													}
													return null();
												}
											};
											struct _Function_9_2{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",3251);
													{
														HX_STACK_LINE(3251)
														::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
														HX_STACK_LINE(3251)
														return (int)0;
													}
													return null();
												}
											};
											HX_STACK_LINE(3251)
											return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_9_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_9_2::Block(o)) )) )) )) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(3251)
								hx::OrEq(charcode,(int(::Std_obj::_int(_Function_8_1::Block(utf8List))) & int((((int((int)1) << int(other_bits))) - (int)1))));
								HX_STACK_LINE(3252)
								utf8List->__Field(HX_CSTRING("splice"),true)((int)0,(int)1);
							}
							HX_STACK_LINE(3256)
							::String hexString = HX_CSTRING("");		HX_STACK_VAR(hexString,"hexString");
							HX_STACK_LINE(3257)
							hx::OrEq(charcode,(int(((int((int(character) >> int(high_bit_shift))) & int(high_bit_mask)))) << int(total_bits)));
							HX_STACK_LINE(3258)
							int quotient = charcode;		HX_STACK_VAR(quotient,"quotient");
							HX_STACK_LINE(3259)
							while(((quotient != (int)0))){
								HX_STACK_LINE(3261)
								int temp = hx::Mod(quotient,(int)16);		HX_STACK_VAR(temp,"temp");
								HX_STACK_LINE(3262)
								if (((temp < (int)10))){
									HX_STACK_LINE(3262)
									hx::AddEq(hexString,(HX_CSTRING("") + temp));
								}
								else{
									HX_STACK_LINE(3263)
									hx::AddEq(hexString,hexAscii->__get(::Std_obj::_int(::Math_obj::min(::Math_obj::max((temp - (int)10),(int)0),(int)5))));
								}
								HX_STACK_LINE(3265)
								quotient = ::Std_obj::_int(::Math_obj::floor((Float(quotient) / Float((int)16))));
							}
							HX_STACK_LINE(3269)
							::String formattedHexString = HX_CSTRING("");		HX_STACK_VAR(formattedHexString,"formattedHexString");
							HX_STACK_LINE(3270)
							int ii = (hexString.length - (int)1);		HX_STACK_VAR(ii,"ii");
							HX_STACK_LINE(3271)
							while(((ii >= (int)0))){
								HX_STACK_LINE(3273)
								hx::AddEq(formattedHexString,hexString.charAt(ii));
								HX_STACK_LINE(3274)
								(ii)--;
							}
							HX_STACK_LINE(3278)
							{
								HX_STACK_LINE(3278)
								int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
								int _g2 = ((int)4 - formattedHexString.length);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(3278)
								while(((_g3 < _g2))){
									HX_STACK_LINE(3278)
									int jj = (_g3)++;		HX_STACK_VAR(jj,"jj");
									HX_STACK_LINE(3280)
									formattedHexString = (HX_CSTRING("0") + formattedHexString);
								}
							}
							HX_STACK_LINE(3284)
							hx::AddEq(convertedString,(HX_CSTRING("~x") + formattedHexString));
						}
						HX_STACK_LINE(3287)
						hx::SubEq(realCount,(int)1);
						HX_STACK_LINE(3288)
						break;
					}
					HX_STACK_LINE(3291)
					hx::AddEq(utf8count,(int)1);
				}
			}
			HX_STACK_LINE(3295)
			hx::AddEq(realCount,(int)1);
		}
	}
	HX_STACK_LINE(3298)
	return convertedString;
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,convertToPseudoUnicode,return )

Void Script_obj::postToURL( ::String URL,::String data,Dynamic fn){
{
		HX_STACK_PUSH("Script::postToURL","com/stencyl/behavior/Script.hx",3161);
		HX_STACK_THIS(this);
		HX_STACK_ARG(URL,"URL");
		HX_STACK_ARG(data,"data");
		HX_STACK_ARG(fn,"fn");
		HX_STACK_LINE(3162)
		if (((fn == null()))){
			HX_STACK_LINE(3163)
			fn = this->defaultURLHandler_dyn();
		}
		HX_STACK_LINE(3167)
		::flash::net::URLRequest request = ::flash::net::URLRequest_obj::__new(URL);		HX_STACK_VAR(request,"request");
		HX_STACK_LINE(3168)
		request->method = HX_CSTRING("POST");
		HX_STACK_LINE(3170)
		if (((data != null()))){
			HX_STACK_LINE(3171)
			request->data = ::flash::net::URLVariables_obj::__new(data);
		}
		HX_STACK_LINE(3175)
		try{
			HX_STACK_LINE(3177)
			::flash::net::URLLoader loader = ::flash::net::URLLoader_obj::__new(request);		HX_STACK_VAR(loader,"loader");
			HX_STACK_LINE(3178)
			loader->addEventListener(::flash::events::Event_obj::COMPLETE,fn,null(),null(),null());
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::String >() ){
				HX_STACK_BEGIN_CATCH
				::String error = __e;{
					HX_STACK_LINE(3187)
					::haxe::Log_obj::trace(HX_CSTRING("Cannot open URL."),hx::SourceInfo(HX_CSTRING("Script.hx"),3188,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("postToURL")));
				}
			}
			else throw(__e);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Script_obj,postToURL,(void))

Void Script_obj::visitURL( ::String URL,Dynamic fn){
{
		HX_STACK_PUSH("Script::visitURL","com/stencyl/behavior/Script.hx",3131);
		HX_STACK_THIS(this);
		HX_STACK_ARG(URL,"URL");
		HX_STACK_ARG(fn,"fn");
		HX_STACK_LINE(3132)
		if (((fn == null()))){
			HX_STACK_LINE(3133)
			fn = this->defaultURLHandler_dyn();
		}
		HX_STACK_LINE(3137)
		try{
			HX_STACK_LINE(3139)
			::flash::net::URLRequest request = ::flash::net::URLRequest_obj::__new(URL);		HX_STACK_VAR(request,"request");
			HX_STACK_LINE(3140)
			request->method = HX_CSTRING("GET");
			HX_STACK_LINE(3142)
			::flash::net::URLLoader loader = ::flash::net::URLLoader_obj::__new(request);		HX_STACK_VAR(loader,"loader");
			HX_STACK_LINE(3143)
			loader->addEventListener(::flash::events::Event_obj::COMPLETE,fn,null(),null(),null());
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::String >() ){
				HX_STACK_BEGIN_CATCH
				::String error = __e;{
					HX_STACK_LINE(3152)
					::haxe::Log_obj::trace(HX_CSTRING("Cannot open URL."),hx::SourceInfo(HX_CSTRING("Script.hx"),3153,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("visitURL")));
				}
			}
			else throw(__e);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,visitURL,(void))

Void Script_obj::openURLInBrowser( ::String URL){
{
		HX_STACK_PUSH("Script::openURLInBrowser","com/stencyl/behavior/Script.hx",3123);
		HX_STACK_THIS(this);
		HX_STACK_ARG(URL,"URL");
		HX_STACK_LINE(3123)
		::flash::Lib_obj::getURL(::flash::net::URLRequest_obj::__new(URL),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,openURLInBrowser,(void))

Void Script_obj::defaultURLHandler( ::flash::events::Event event){
{
		HX_STACK_PUSH("Script::defaultURLHandler","com/stencyl/behavior/Script.hx",3110);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(3111)
		::flash::net::URLLoader loader = ::flash::net::URLLoader_obj::__new(event->get_target());		HX_STACK_VAR(loader,"loader");
		HX_STACK_LINE(3112)
		::haxe::Log_obj::trace((HX_CSTRING("Visited URL: ") + ::Std_obj::string(loader->data)),hx::SourceInfo(HX_CSTRING("Script.hx"),3112,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("defaultURLHandler")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,defaultURLHandler,(void))

Void Script_obj::loadGame( ::String fileName,Dynamic onComplete){
{
		HX_STACK_PUSH("Script::loadGame","com/stencyl/behavior/Script.hx",3091);
		HX_STACK_THIS(this);
		HX_STACK_ARG(fileName,"fileName");
		HX_STACK_ARG(onComplete,"onComplete");
		HX_STACK_LINE(3092)
		::flash::net::SharedObject data = ::flash::net::SharedObject_obj::getLocal(fileName,null(),null());		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(3094)
		::haxe::Log_obj::trace((HX_CSTRING("Loaded Save: ") + fileName),hx::SourceInfo(HX_CSTRING("Script.hx"),3094,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("loadGame")));
		HX_STACK_LINE(3096)
		{
			HX_STACK_LINE(3096)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::String > _g1 = ::Reflect_obj::fields(data->data);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(3096)
			while(((_g < _g1->length))){
				HX_STACK_LINE(3096)
				::String key = _g1->__get(_g);		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(3096)
				++(_g);
				HX_STACK_LINE(3098)
				::haxe::Log_obj::trace(((key + HX_CSTRING(" - ")) + ::Std_obj::string(::Reflect_obj::field(data->data,key))),hx::SourceInfo(HX_CSTRING("Script.hx"),3098,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("loadGame")));
				HX_STACK_LINE(3099)
				{
					HX_STACK_LINE(3099)
					Dynamic value = ::Reflect_obj::field(data->data,key);		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(3099)
					this->engine->gameAttributes->set(key,value);
				}
			}
		}
		HX_STACK_LINE(3102)
		onComplete(true).Cast< Void >();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,loadGame,(void))

Void Script_obj::saveGame( ::String fileName,Dynamic onComplete){
{
		HX_STACK_PUSH("Script::saveGame","com/stencyl/behavior/Script.hx",3040);
		HX_STACK_THIS(this);
		HX_STACK_ARG(fileName,"fileName");
		HX_STACK_ARG(onComplete,"onComplete");
		HX_STACK_LINE(3041)
		::flash::net::SharedObject so = ::flash::net::SharedObject_obj::getLocal(fileName,null(),null());		HX_STACK_VAR(so,"so");
		HX_STACK_LINE(3043)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->engine->gameAttributes->keys());  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(3045)
				Dynamic o = so->data;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(3045)
				if (((o != null()))){
					HX_STACK_LINE(3045)
					o->__SetField(key,this->engine->gameAttributes->get(key),false);
				}
			}
;
		}
		HX_STACK_LINE(3051)
		::flash::net::SharedObjectFlushStatus flushStatus = null();		HX_STACK_VAR(flushStatus,"flushStatus");
		HX_STACK_LINE(3054)
		try{
			HX_STACK_LINE(3055)
			flushStatus = so->flush(null());
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(3061)
					::haxe::Log_obj::trace((((HX_CSTRING("Error: Failed to save - ") + fileName) + HX_CSTRING(" - ")) + ::Std_obj::string(e)),hx::SourceInfo(HX_CSTRING("Script.hx"),3061,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("saveGame")));
					HX_STACK_LINE(3063)
					onComplete(false).Cast< Void >();
					HX_STACK_LINE(3064)
					return null();
				}
			}
		}
		HX_STACK_LINE(3067)
		::haxe::Log_obj::trace(flushStatus,hx::SourceInfo(HX_CSTRING("Script.hx"),3067,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("saveGame")));
		HX_STACK_LINE(3069)
		if (((flushStatus != null()))){
			HX_STACK_LINE(3070)
			if (((flushStatus == ::flash::net::SharedObjectFlushStatus_obj::PENDING))){
			}
			else{
				HX_STACK_LINE(3076)
				if (((flushStatus == ::flash::net::SharedObjectFlushStatus_obj::FLUSHED))){
					HX_STACK_LINE(3078)
					::haxe::Log_obj::trace((HX_CSTRING("Saved Game: ") + fileName),hx::SourceInfo(HX_CSTRING("Script.hx"),3078,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("saveGame")));
					HX_STACK_LINE(3079)
					onComplete(true).Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,saveGame,(void))

Void Script_obj::tweenNumber( ::String attributeName,Float value,hx::Null< Float >  __o_duration,Dynamic easing){
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("Script::tweenNumber","com/stencyl/behavior/Script.hx",3011);
	HX_STACK_THIS(this);
	HX_STACK_ARG(attributeName,"attributeName");
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		struct _Function_1_1{
			inline static Dynamic Block( Float &value){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",3019);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , value,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(3011)
		::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,_Function_1_1::Block(value),null(),null())->ease((  (((easing == null()))) ? ::motion::easing::IEasing(::motion::easing::Linear_obj::get_easeNone()) : ::motion::easing::IEasing(easing) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Script_obj,tweenNumber,(void))

int Script_obj::randomInt( Float low,Float high){
	HX_STACK_PUSH("Script::randomInt","com/stencyl/behavior/Script.hx",2996);
	HX_STACK_THIS(this);
	HX_STACK_ARG(low,"low");
	HX_STACK_ARG(high,"high");
	HX_STACK_LINE(2996)
	if (((low <= high))){
		HX_STACK_LINE(2998)
		return (::Std_obj::_int(low) + ::Math_obj::floor((this->randomFloat() * (((::Std_obj::_int(high) - ::Std_obj::_int(low)) + (int)1)))));
	}
	else{
		HX_STACK_LINE(3002)
		return (::Std_obj::_int(high) + ::Math_obj::floor((this->randomFloat() * (((::Std_obj::_int(low) - ::Std_obj::_int(high)) + (int)1)))));
	}
	HX_STACK_LINE(2996)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,randomInt,return )

Float Script_obj::randomFloat( ){
	HX_STACK_PUSH("Script::randomFloat","com/stencyl/behavior/Script.hx",2988);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2988)
	return ::Math_obj::random();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,randomFloat,return )

Void Script_obj::setTimeScale( Float scale){
{
		HX_STACK_PUSH("Script::setTimeScale","com/stencyl/behavior/Script.hx",2980);
		HX_STACK_THIS(this);
		HX_STACK_ARG(scale,"scale");
		HX_STACK_LINE(2980)
		::com::stencyl::Engine_obj::timeScale = scale;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,setTimeScale,(void))

bool Script_obj::isTransitioning( ){
	HX_STACK_PUSH("Script::isTransitioning","com/stencyl/behavior/Script.hx",2972);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2972)
	return this->engine->isTransitioning();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,isTransitioning,return )

Void Script_obj::setOffscreenTolerance( Float top,Float left,Float bottom,Float right){
{
		HX_STACK_PUSH("Script::setOffscreenTolerance","com/stencyl/behavior/Script.hx",2961);
		HX_STACK_THIS(this);
		HX_STACK_ARG(top,"top");
		HX_STACK_ARG(left,"left");
		HX_STACK_ARG(bottom,"bottom");
		HX_STACK_ARG(right,"right");
		HX_STACK_LINE(2962)
		::com::stencyl::Engine_obj::paddingTop = ::Std_obj::_int(top);
		HX_STACK_LINE(2963)
		::com::stencyl::Engine_obj::paddingLeft = ::Std_obj::_int(left);
		HX_STACK_LINE(2964)
		::com::stencyl::Engine_obj::paddingRight = ::Std_obj::_int(right);
		HX_STACK_LINE(2965)
		::com::stencyl::Engine_obj::paddingBottom = ::Std_obj::_int(bottom);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Script_obj,setOffscreenTolerance,(void))

int Script_obj::getScreenHeight( ){
	HX_STACK_PUSH("Script::getScreenHeight","com/stencyl/behavior/Script.hx",2953);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2953)
	return ::com::stencyl::Engine_obj::screenHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getScreenHeight,return )

int Script_obj::getScreenWidth( ){
	HX_STACK_PUSH("Script::getScreenWidth","com/stencyl/behavior/Script.hx",2945);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2945)
	return ::com::stencyl::Engine_obj::screenWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getScreenWidth,return )

Void Script_obj::unpauseAll( ){
{
		HX_STACK_PUSH("Script::unpauseAll","com/stencyl/behavior/Script.hx",2937);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2937)
		::com::stencyl::Engine_obj::paused = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,unpauseAll,(void))

Void Script_obj::pauseAll( ){
{
		HX_STACK_PUSH("Script::pauseAll","com/stencyl/behavior/Script.hx",2929);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2929)
		::com::stencyl::Engine_obj::paused = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,pauseAll,(void))

Void Script_obj::toggleFullScreen( ){
{
		HX_STACK_PUSH("Script::toggleFullScreen","com/stencyl/behavior/Script.hx",2919);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,toggleFullScreen,(void))

Void Script_obj::unpause( ){
{
		HX_STACK_PUSH("Script::unpause","com/stencyl/behavior/Script.hx",2914);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2914)
		this->engine->unpause();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,unpause,(void))

Void Script_obj::pause( ){
{
		HX_STACK_PUSH("Script::pause","com/stencyl/behavior/Script.hx",2909);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2909)
		this->engine->pause();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,pause,(void))

::com::stencyl::models::Font Script_obj::getFont( int fontID){
	HX_STACK_PUSH("Script::getFont","com/stencyl/behavior/Script.hx",2900);
	HX_STACK_THIS(this);
	HX_STACK_ARG(fontID,"fontID");
	HX_STACK_LINE(2900)
	return hx::TCast< com::stencyl::models::Font >::cast(::com::stencyl::Data_obj::get()->resources->get(fontID));
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getFont,return )

int Script_obj::getMiddleLayer( ){
	HX_STACK_PUSH("Script::getMiddleLayer","com/stencyl/behavior/Script.hx",2891);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2891)
	return this->engine->getMiddleLayer();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getMiddleLayer,return )

int Script_obj::getBottomLayer( ){
	HX_STACK_PUSH("Script::getBottomLayer","com/stencyl/behavior/Script.hx",2883);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2883)
	return this->engine->getBottomLayer();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getBottomLayer,return )

int Script_obj::getTopLayer( ){
	HX_STACK_PUSH("Script::getTopLayer","com/stencyl/behavior/Script.hx",2875);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2875)
	return this->engine->getTopLayer();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getTopLayer,return )

Void Script_obj::stopShakingScreen( ){
{
		HX_STACK_PUSH("Script::stopShakingScreen","com/stencyl/behavior/Script.hx",2863);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2863)
		this->engine->stopShakingScreen();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,stopShakingScreen,(void))

Void Script_obj::startShakingScreen( hx::Null< Float >  __o_intensity,hx::Null< Float >  __o_duration){
Float intensity = __o_intensity.Default(0.05);
Float duration = __o_duration.Default(0.5);
	HX_STACK_PUSH("Script::startShakingScreen","com/stencyl/behavior/Script.hx",2855);
	HX_STACK_THIS(this);
	HX_STACK_ARG(intensity,"intensity");
	HX_STACK_ARG(duration,"duration");
{
		HX_STACK_LINE(2855)
		this->engine->shakeScreen(intensity,duration);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,startShakingScreen,(void))

::flash::display::BitmapData Script_obj::imageFromText( ::String text){
	HX_STACK_PUSH("Script::imageFromText","com/stencyl/behavior/Script.hx",2777);
	HX_STACK_THIS(this);
	HX_STACK_ARG(text,"text");
	HX_STACK_LINE(2778)
	Array< ::String > parts = text.split(HX_CSTRING(";"));		HX_STACK_VAR(parts,"parts");
	HX_STACK_LINE(2779)
	Dynamic width = ::Std_obj::parseInt(parts->__get((int)0));		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(2780)
	Dynamic height = ::Std_obj::parseInt(parts->__get((int)1));		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(2781)
	::haxe::io::Bytes bytes = ::com::stencyl::behavior::Script_obj::fromBase64(parts->__get((int)2));		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(2783)
	::flash::utils::ByteArray data = ::flash::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(2785)
	{
		HX_STACK_LINE(2785)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = bytes->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2785)
		while(((_g1 < _g))){
			HX_STACK_LINE(2785)
			int n = (_g1)++;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(2787)
			{
				HX_STACK_LINE(2787)
				data->ensureElem(data->position,true);
				HX_STACK_LINE(2787)
				data->b[(data->position)++] = bytes->b->__get(n);
			}
		}
	}
	HX_STACK_LINE(2790)
	data->position = (int)0;
	HX_STACK_LINE(2792)
	::flash::display::BitmapData img = ::flash::display::BitmapData_obj::__new(width,height,true,(int)0,null());		HX_STACK_VAR(img,"img");
	HX_STACK_LINE(2793)
	::com::stencyl::behavior::Script_obj::dummyRect->x = (int)0;
	HX_STACK_LINE(2794)
	::com::stencyl::behavior::Script_obj::dummyRect->y = (int)0;
	HX_STACK_LINE(2795)
	::com::stencyl::behavior::Script_obj::dummyRect->width = width;
	HX_STACK_LINE(2796)
	::com::stencyl::behavior::Script_obj::dummyRect->height = height;
	HX_STACK_LINE(2797)
	img->setPixels(::com::stencyl::behavior::Script_obj::dummyRect,data);
	HX_STACK_LINE(2798)
	return img;
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,imageFromText,return )

::String Script_obj::imageToText( ::flash::display::BitmapData img){
	HX_STACK_PUSH("Script::imageToText","com/stencyl/behavior/Script.hx",2752);
	HX_STACK_THIS(this);
	HX_STACK_ARG(img,"img");
	HX_STACK_LINE(2753)
	::com::stencyl::behavior::Script_obj::dummyRect->x = (int)0;
	HX_STACK_LINE(2754)
	::com::stencyl::behavior::Script_obj::dummyRect->y = (int)0;
	HX_STACK_LINE(2755)
	::com::stencyl::behavior::Script_obj::dummyRect->width = img->get_width();
	HX_STACK_LINE(2756)
	::com::stencyl::behavior::Script_obj::dummyRect->height = img->get_height();
	HX_STACK_LINE(2758)
	::flash::utils::ByteArray bytes = img->getPixels(::com::stencyl::behavior::Script_obj::dummyRect);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(2761)
	::haxe::io::Bytes b = ::haxe::io::Bytes_obj::alloc(bytes->length);		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(2763)
	{
		HX_STACK_LINE(2763)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = bytes->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2763)
		while(((_g1 < _g))){
			HX_STACK_LINE(2763)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(2765)
			b->b[i] = bytes->__get(i);
		}
	}
	HX_STACK_LINE(2768)
	return ((((img->get_width() + HX_CSTRING(";")) + img->get_height()) + HX_CSTRING(";")) + ::com::stencyl::behavior::Script_obj::toBase64(b));
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,imageToText,return )

Void Script_obj::clearFiltersForImage( ::flash::display::Bitmap img){
{
		HX_STACK_PUSH("Script::clearFiltersForImage","com/stencyl/behavior/Script.hx",2743);
		HX_STACK_THIS(this);
		HX_STACK_ARG(img,"img");
		HX_STACK_LINE(2743)
		if (((img != null()))){
			HX_STACK_LINE(2745)
			img->set_filters(Dynamic( Array_obj<Dynamic>::__new()));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,clearFiltersForImage,(void))

Void Script_obj::setFilterForImage( ::flash::display::Bitmap img,Dynamic filter){
{
		HX_STACK_PUSH("Script::setFilterForImage","com/stencyl/behavior/Script.hx",2737);
		HX_STACK_THIS(this);
		HX_STACK_ARG(img,"img");
		HX_STACK_ARG(filter,"filter");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,setFilterForImage,(void))

Void Script_obj::moveImageBy( ::flash::display::Bitmap img,Float x,Float y,hx::Null< Float >  __o_duration,Dynamic easing){
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("Script::moveImageBy","com/stencyl/behavior/Script.hx",2723);
	HX_STACK_THIS(this);
	HX_STACK_ARG(img,"img");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		HX_STACK_LINE(2723)
		this->moveImageTo(img,(img->get_x() + x),(img->get_y() + y),duration,easing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Script_obj,moveImageBy,(void))

Void Script_obj::spinImageBy( ::flash::display::Bitmap img,Float angle,hx::Null< Float >  __o_duration,Dynamic easing){
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("Script::spinImageBy","com/stencyl/behavior/Script.hx",2718);
	HX_STACK_THIS(this);
	HX_STACK_ARG(img,"img");
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		HX_STACK_LINE(2718)
		this->spinImageTo(img,(img->get_rotation() + angle),duration,easing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Script_obj,spinImageBy,(void))

Void Script_obj::moveImageTo( ::flash::display::Bitmap img,Float x,Float y,hx::Null< Float >  __o_duration,Dynamic easing){
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("Script::moveImageTo","com/stencyl/behavior/Script.hx",2704);
	HX_STACK_THIS(this);
	HX_STACK_ARG(img,"img");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		HX_STACK_LINE(2705)
		x = (x * ::com::stencyl::Engine_obj::SCALE);
		HX_STACK_LINE(2706)
		y = (y * ::com::stencyl::Engine_obj::SCALE);
		HX_STACK_LINE(2708)
		if (((easing == null()))){
			HX_STACK_LINE(2709)
			easing = ::motion::easing::Linear_obj::get_easeNone();
		}
		struct _Function_1_1{
			inline static Dynamic Block( Float &x,Float &y){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",2713);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("x") , x,false);
					__result->Add(HX_CSTRING("y") , y,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(2713)
		::motion::Actuate_obj::tween(img,duration,_Function_1_1::Block(x,y),null(),null())->ease(easing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Script_obj,moveImageTo,(void))

Void Script_obj::spinImageTo( ::flash::display::Bitmap img,Float angle,hx::Null< Float >  __o_duration,Dynamic easing){
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("Script::spinImageTo","com/stencyl/behavior/Script.hx",2694);
	HX_STACK_THIS(this);
	HX_STACK_ARG(img,"img");
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		HX_STACK_LINE(2695)
		if (((easing == null()))){
			HX_STACK_LINE(2696)
			easing = ::motion::easing::Linear_obj::get_easeNone();
		}
		struct _Function_1_1{
			inline static Dynamic Block( Float &angle){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",2700);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("rotation") , angle,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(2700)
		::motion::Actuate_obj::tween(img,duration,_Function_1_1::Block(angle),null(),null())->ease(easing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Script_obj,spinImageTo,(void))

Void Script_obj::growImageTo( ::flash::display::Bitmap img,hx::Null< Float >  __o_scaleX,hx::Null< Float >  __o_scaleY,hx::Null< Float >  __o_duration,Dynamic easing){
Float scaleX = __o_scaleX.Default(1);
Float scaleY = __o_scaleY.Default(1);
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("Script::growImageTo","com/stencyl/behavior/Script.hx",2683);
	HX_STACK_THIS(this);
	HX_STACK_ARG(img,"img");
	HX_STACK_ARG(scaleX,"scaleX");
	HX_STACK_ARG(scaleY,"scaleY");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		HX_STACK_LINE(2684)
		if (((easing == null()))){
			HX_STACK_LINE(2685)
			easing = ::motion::easing::Linear_obj::get_easeNone();
		}
		struct _Function_1_1{
			inline static Dynamic Block( Float &scaleY,Float &scaleX){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",2689);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("scaleX") , scaleX,false);
					__result->Add(HX_CSTRING("scaleY") , scaleY,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(2689)
		::motion::Actuate_obj::tween(img,duration,_Function_1_1::Block(scaleY,scaleX),null(),null())->ease(easing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Script_obj,growImageTo,(void))

Void Script_obj::fadeImageTo( ::flash::display::Bitmap img,Float value,hx::Null< Float >  __o_duration,Dynamic easing){
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("Script::fadeImageTo","com/stencyl/behavior/Script.hx",2673);
	HX_STACK_THIS(this);
	HX_STACK_ARG(img,"img");
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		HX_STACK_LINE(2674)
		if (((easing == null()))){
			HX_STACK_LINE(2675)
			easing = ::motion::easing::Linear_obj::get_easeNone();
		}
		struct _Function_1_1{
			inline static Dynamic Block( Float &value){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",2679);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , value,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(2679)
		::motion::Actuate_obj::tween(img,duration,_Function_1_1::Block(value),null(),null())->ease(easing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Script_obj,fadeImageTo,(void))

Void Script_obj::setYForImage( ::flash::display::Bitmap img,Float value){
{
		HX_STACK_PUSH("Script::setYForImage","com/stencyl/behavior/Script.hx",2665);
		HX_STACK_THIS(this);
		HX_STACK_ARG(img,"img");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(2665)
		if (((img != null()))){
			HX_STACK_LINE(2667)
			img->set_y((::com::stencyl::Engine_obj::SCALE * value));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,setYForImage,(void))

Void Script_obj::setXForImage( ::flash::display::Bitmap img,Float value){
{
		HX_STACK_PUSH("Script::setXForImage","com/stencyl/behavior/Script.hx",2657);
		HX_STACK_THIS(this);
		HX_STACK_ARG(img,"img");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(2657)
		if (((img != null()))){
			HX_STACK_LINE(2659)
			img->set_x((::com::stencyl::Engine_obj::SCALE * value));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,setXForImage,(void))

Void Script_obj::flipImageVertical( ::flash::display::BitmapData img){
{
		HX_STACK_PUSH("Script::flipImageVertical","com/stencyl/behavior/Script.hx",2637);
		HX_STACK_THIS(this);
		HX_STACK_ARG(img,"img");
		HX_STACK_LINE(2638)
		::flash::geom::Matrix matrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(2639)
		matrix->scale((int)1,(int)-1);
		HX_STACK_LINE(2640)
		matrix->translate((int)0,img->get_height());
		HX_STACK_LINE(2642)
		::flash::display::BitmapData final = ::flash::display::BitmapData_obj::__new(img->get_width(),img->get_height(),true,(int)0,null());		HX_STACK_VAR(final,"final");
		HX_STACK_LINE(2643)
		final->draw(img,matrix,null(),null(),null(),null());
		HX_STACK_LINE(2645)
		::com::stencyl::behavior::Script_obj::dummyRect->x = (int)0;
		HX_STACK_LINE(2646)
		::com::stencyl::behavior::Script_obj::dummyRect->y = (int)0;
		HX_STACK_LINE(2647)
		::com::stencyl::behavior::Script_obj::dummyRect->width = final->get_width();
		HX_STACK_LINE(2648)
		::com::stencyl::behavior::Script_obj::dummyRect->height = final->get_height();
		HX_STACK_LINE(2650)
		::com::stencyl::behavior::Script_obj::dummyPoint->x = (int)0;
		HX_STACK_LINE(2651)
		::com::stencyl::behavior::Script_obj::dummyPoint->y = (int)0;
		HX_STACK_LINE(2653)
		img->copyPixels(final,::com::stencyl::behavior::Script_obj::dummyRect,::com::stencyl::behavior::Script_obj::dummyPoint,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,flipImageVertical,(void))

Void Script_obj::flipImageHorizontal( ::flash::display::BitmapData img){
{
		HX_STACK_PUSH("Script::flipImageHorizontal","com/stencyl/behavior/Script.hx",2616);
		HX_STACK_THIS(this);
		HX_STACK_ARG(img,"img");
		HX_STACK_LINE(2617)
		::flash::geom::Matrix matrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(2618)
		matrix->scale((int)-1,(int)1);
		HX_STACK_LINE(2619)
		matrix->translate(img->get_width(),(int)0);
		HX_STACK_LINE(2621)
		::flash::display::BitmapData final = ::flash::display::BitmapData_obj::__new(img->get_width(),img->get_height(),true,(int)0,null());		HX_STACK_VAR(final,"final");
		HX_STACK_LINE(2622)
		final->draw(img,matrix,null(),null(),null(),null());
		HX_STACK_LINE(2624)
		::com::stencyl::behavior::Script_obj::dummyRect->x = (int)0;
		HX_STACK_LINE(2625)
		::com::stencyl::behavior::Script_obj::dummyRect->y = (int)0;
		HX_STACK_LINE(2626)
		::com::stencyl::behavior::Script_obj::dummyRect->width = final->get_width();
		HX_STACK_LINE(2627)
		::com::stencyl::behavior::Script_obj::dummyRect->height = final->get_height();
		HX_STACK_LINE(2629)
		::com::stencyl::behavior::Script_obj::dummyPoint->x = (int)0;
		HX_STACK_LINE(2630)
		::com::stencyl::behavior::Script_obj::dummyPoint->y = (int)0;
		HX_STACK_LINE(2632)
		img->copyPixels(final,::com::stencyl::behavior::Script_obj::dummyRect,::com::stencyl::behavior::Script_obj::dummyPoint,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,flipImageHorizontal,(void))

Void Script_obj::imageSwapColor( ::flash::display::BitmapData img,int originalColor,int newColor){
{
		HX_STACK_PUSH("Script::imageSwapColor","com/stencyl/behavior/Script.hx",2596);
		HX_STACK_THIS(this);
		HX_STACK_ARG(img,"img");
		HX_STACK_ARG(originalColor,"originalColor");
		HX_STACK_ARG(newColor,"newColor");
		HX_STACK_LINE(2596)
		if (((img != null()))){
			HX_STACK_LINE(2599)
			::com::stencyl::behavior::Script_obj::dummyRect->x = (int)0;
			HX_STACK_LINE(2600)
			::com::stencyl::behavior::Script_obj::dummyRect->y = (int)0;
			HX_STACK_LINE(2601)
			::com::stencyl::behavior::Script_obj::dummyRect->width = img->get_width();
			HX_STACK_LINE(2602)
			::com::stencyl::behavior::Script_obj::dummyRect->height = img->get_height();
			HX_STACK_LINE(2604)
			::com::stencyl::behavior::Script_obj::dummyPoint->x = (int)0;
			HX_STACK_LINE(2605)
			::com::stencyl::behavior::Script_obj::dummyPoint->y = (int)0;
			HX_STACK_LINE(2607)
			originalColor = (int((int)-16777216) | int(originalColor));
			HX_STACK_LINE(2608)
			newColor = (int((int)-16777216) | int(newColor));
			HX_STACK_LINE(2610)
			img->threshold(img,::com::stencyl::behavior::Script_obj::dummyRect,::com::stencyl::behavior::Script_obj::dummyPoint,HX_CSTRING("=="),originalColor,newColor,(int)-1,true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Script_obj,imageSwapColor,(void))

int Script_obj::imageGetPixel( ::flash::display::BitmapData img,int x,int y){
	HX_STACK_PUSH("Script::imageGetPixel","com/stencyl/behavior/Script.hx",2583);
	HX_STACK_THIS(this);
	HX_STACK_ARG(img,"img");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(2584)
	if (((img != null()))){
		HX_STACK_LINE(2586)
		x = ::Std_obj::_int((x * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(2587)
		y = ::Std_obj::_int((y * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(2589)
		return img->getPixel(x,y);
	}
	HX_STACK_LINE(2592)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC3(Script_obj,imageGetPixel,return )

Void Script_obj::imageSetPixel( ::flash::display::BitmapData img,int x,int y,int color){
{
		HX_STACK_PUSH("Script::imageSetPixel","com/stencyl/behavior/Script.hx",2555);
		HX_STACK_THIS(this);
		HX_STACK_ARG(img,"img");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(color,"color");
		HX_STACK_LINE(2555)
		if (((img != null()))){
			HX_STACK_LINE(2558)
			x = ::Std_obj::_int((x * ::com::stencyl::Engine_obj::SCALE));
			HX_STACK_LINE(2559)
			y = ::Std_obj::_int((y * ::com::stencyl::Engine_obj::SCALE));
			HX_STACK_LINE(2561)
			img->setPixel(x,y,color);
			HX_STACK_LINE(2563)
			if (((::com::stencyl::Engine_obj::SCALE == (int)2))){
				HX_STACK_LINE(2565)
				img->setPixel((x + (int)1),y,color);
				HX_STACK_LINE(2566)
				img->setPixel(x,(y + (int)1),color);
				HX_STACK_LINE(2567)
				img->setPixel((x + (int)1),(y + (int)1),color);
			}
			HX_STACK_LINE(2570)
			if (((::com::stencyl::Engine_obj::SCALE == (int)4))){
				HX_STACK_LINE(2572)
				img->setPixel((x + (int)2),y,color);
				HX_STACK_LINE(2573)
				img->setPixel((x + (int)2),(y + (int)1),color);
				HX_STACK_LINE(2574)
				img->setPixel((x + (int)2),(y + (int)2),color);
				HX_STACK_LINE(2576)
				img->setPixel(x,(y + (int)2),color);
				HX_STACK_LINE(2577)
				img->setPixel((x + (int)1),(y + (int)2),color);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Script_obj,imageSetPixel,(void))

Void Script_obj::filterImage( ::flash::display::BitmapData img,Dynamic filter){
{
		HX_STACK_PUSH("Script::filterImage","com/stencyl/behavior/Script.hx",2546);
		HX_STACK_THIS(this);
		HX_STACK_ARG(img,"img");
		HX_STACK_ARG(filter,"filter");
		HX_STACK_LINE(2546)
		if (((img != null()))){
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,filterImage,(void))

Void Script_obj::fillImage( ::flash::display::BitmapData img,int color){
{
		HX_STACK_PUSH("Script::fillImage","com/stencyl/behavior/Script.hx",2514);
		HX_STACK_THIS(this);
		HX_STACK_ARG(img,"img");
		HX_STACK_ARG(color,"color");
		HX_STACK_LINE(2514)
		if (((img != null()))){
			HX_STACK_LINE(2517)
			::com::stencyl::behavior::Script_obj::dummyRect->x = (int)0;
			HX_STACK_LINE(2518)
			::com::stencyl::behavior::Script_obj::dummyRect->y = (int)0;
			HX_STACK_LINE(2519)
			::com::stencyl::behavior::Script_obj::dummyRect->width = img->get_width();
			HX_STACK_LINE(2520)
			::com::stencyl::behavior::Script_obj::dummyRect->height = img->get_height();
			HX_STACK_LINE(2522)
			img->fillRect(::com::stencyl::behavior::Script_obj::dummyRect,(int((int)-16777216) | int(color)));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,fillImage,(void))

Void Script_obj::retainImageUsingMask( ::flash::display::BitmapData dest,::flash::display::BitmapData mask,int x,int y){
{
		HX_STACK_PUSH("Script::retainImageUsingMask","com/stencyl/behavior/Script.hx",2497);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dest,"dest");
		HX_STACK_ARG(mask,"mask");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(2498)
		x = ::Std_obj::_int((x * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(2499)
		y = ::Std_obj::_int((y * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(2501)
		::com::stencyl::behavior::Script_obj::dummyRect->x = (int)0;
		HX_STACK_LINE(2502)
		::com::stencyl::behavior::Script_obj::dummyRect->y = (int)0;
		HX_STACK_LINE(2504)
		::com::stencyl::behavior::Script_obj::dummyRect->width = mask->get_width();
		HX_STACK_LINE(2505)
		::com::stencyl::behavior::Script_obj::dummyRect->height = mask->get_height();
		HX_STACK_LINE(2507)
		::com::stencyl::behavior::Script_obj::dummyPoint->x = x;
		HX_STACK_LINE(2508)
		::com::stencyl::behavior::Script_obj::dummyPoint->y = y;
		HX_STACK_LINE(2510)
		dest->copyChannel(mask,::com::stencyl::behavior::Script_obj::dummyRect,::com::stencyl::behavior::Script_obj::dummyPoint,(int)8,(int)8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Script_obj,retainImageUsingMask,(void))

Void Script_obj::clearImageUsingMask( ::flash::display::BitmapData dest,::flash::display::BitmapData mask,int x,int y){
{
		HX_STACK_PUSH("Script::clearImageUsingMask","com/stencyl/behavior/Script.hx",2467);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dest,"dest");
		HX_STACK_ARG(mask,"mask");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(2468)
		x = ::Std_obj::_int((x * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(2469)
		y = ::Std_obj::_int((y * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(2472)
		::flash::display::Sprite temp = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(2473)
		::flash::display::Bitmap bmpDest = ::flash::display::Bitmap_obj::__new(dest,null(),null());		HX_STACK_VAR(bmpDest,"bmpDest");
		HX_STACK_LINE(2474)
		::flash::display::Bitmap bmpMask = ::flash::display::Bitmap_obj::__new(mask,null(),null());		HX_STACK_VAR(bmpMask,"bmpMask");
		HX_STACK_LINE(2475)
		bmpMask->set_x(x);
		HX_STACK_LINE(2476)
		bmpMask->set_y(y);
		HX_STACK_LINE(2477)
		bmpDest->set_blendMode(::flash::display::BlendMode_obj::LAYER);
		HX_STACK_LINE(2478)
		bmpMask->set_blendMode(::flash::display::BlendMode_obj::ERASE);
		HX_STACK_LINE(2479)
		temp->addChild(bmpDest);
		HX_STACK_LINE(2480)
		temp->addChild(bmpMask);
		HX_STACK_LINE(2482)
		::flash::display::BitmapData final = ::flash::display::BitmapData_obj::__new(dest->get_width(),dest->get_height(),true,(int)0,null());		HX_STACK_VAR(final,"final");
		HX_STACK_LINE(2483)
		final->draw(temp,null(),null(),null(),null(),null());
		HX_STACK_LINE(2485)
		::com::stencyl::behavior::Script_obj::dummyRect->x = (int)0;
		HX_STACK_LINE(2486)
		::com::stencyl::behavior::Script_obj::dummyRect->y = (int)0;
		HX_STACK_LINE(2487)
		::com::stencyl::behavior::Script_obj::dummyRect->width = dest->get_width();
		HX_STACK_LINE(2488)
		::com::stencyl::behavior::Script_obj::dummyRect->height = dest->get_height();
		HX_STACK_LINE(2490)
		::com::stencyl::behavior::Script_obj::dummyPoint->x = (int)0;
		HX_STACK_LINE(2491)
		::com::stencyl::behavior::Script_obj::dummyPoint->y = (int)0;
		HX_STACK_LINE(2493)
		dest->copyPixels(final,::com::stencyl::behavior::Script_obj::dummyRect,::com::stencyl::behavior::Script_obj::dummyPoint,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Script_obj,clearImageUsingMask,(void))

Void Script_obj::clearImage( ::flash::display::BitmapData img){
{
		HX_STACK_PUSH("Script::clearImage","com/stencyl/behavior/Script.hx",2454);
		HX_STACK_THIS(this);
		HX_STACK_ARG(img,"img");
		HX_STACK_LINE(2454)
		if (((img != null()))){
			HX_STACK_LINE(2457)
			::com::stencyl::behavior::Script_obj::dummyRect->x = (int)0;
			HX_STACK_LINE(2458)
			::com::stencyl::behavior::Script_obj::dummyRect->y = (int)0;
			HX_STACK_LINE(2459)
			::com::stencyl::behavior::Script_obj::dummyRect->width = img->get_width();
			HX_STACK_LINE(2460)
			::com::stencyl::behavior::Script_obj::dummyRect->height = img->get_height();
			HX_STACK_LINE(2462)
			img->fillRect(::com::stencyl::behavior::Script_obj::dummyRect,(int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,clearImage,(void))

Void Script_obj::clearImagePartially( ::flash::display::BitmapData img,int x,int y,int width,int height){
{
		HX_STACK_PUSH("Script::clearImagePartially","com/stencyl/behavior/Script.hx",2436);
		HX_STACK_THIS(this);
		HX_STACK_ARG(img,"img");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(2437)
		x = ::Std_obj::_int((x * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(2438)
		y = ::Std_obj::_int((y * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(2439)
		width = ::Std_obj::_int((width * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(2440)
		height = ::Std_obj::_int((height * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(2442)
		if (((img != null()))){
			HX_STACK_LINE(2444)
			::com::stencyl::behavior::Script_obj::dummyRect->x = x;
			HX_STACK_LINE(2445)
			::com::stencyl::behavior::Script_obj::dummyRect->y = y;
			HX_STACK_LINE(2446)
			::com::stencyl::behavior::Script_obj::dummyRect->width = width;
			HX_STACK_LINE(2447)
			::com::stencyl::behavior::Script_obj::dummyRect->height = height;
			HX_STACK_LINE(2449)
			img->fillRect(::com::stencyl::behavior::Script_obj::dummyRect,(int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Script_obj,clearImagePartially,(void))

Void Script_obj::drawTextOnImage( ::flash::display::BitmapData img,::String text,int x,int y,::com::stencyl::models::Font font){
{
		HX_STACK_PUSH("Script::drawTextOnImage","com/stencyl/behavior/Script.hx",2405);
		HX_STACK_THIS(this);
		HX_STACK_ARG(img,"img");
		HX_STACK_ARG(text,"text");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(font,"font");
		HX_STACK_LINE(2406)
		x = ::Std_obj::_int((x * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(2407)
		y = ::Std_obj::_int((y * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(2409)
		if (((img != null()))){
			HX_STACK_LINE(2422)
			::com::stencyl::graphics::fonts::BitmapFont_obj::skipFlags = true;
			HX_STACK_LINE(2423)
			::com::stencyl::behavior::Script_obj::drawData->splice((int)0,::com::stencyl::behavior::Script_obj::drawData->length);
			HX_STACK_LINE(2424)
			font->font->render(::com::stencyl::behavior::Script_obj::drawData,text,(int)0,(int)1,(int)0,(int)0,(int)0,font->fontScale,(int)0,false);
			HX_STACK_LINE(2425)
			::flash::display::Sprite temp = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(2426)
			font->font->drawText(temp->get_graphics(),::com::stencyl::behavior::Script_obj::drawData,true,(int)0);
			HX_STACK_LINE(2427)
			::com::stencyl::behavior::Script_obj::ma->tx = x;
			HX_STACK_LINE(2428)
			::com::stencyl::behavior::Script_obj::ma->ty = y;
			HX_STACK_LINE(2429)
			img->draw(temp,::com::stencyl::behavior::Script_obj::ma,null(),null(),null(),null());
			HX_STACK_LINE(2430)
			::com::stencyl::graphics::fonts::BitmapFont_obj::skipFlags = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Script_obj,drawTextOnImage,(void))

Void Script_obj::drawImageOnImage( ::flash::display::BitmapData source,::flash::display::BitmapData dest,int x,int y,::flash::display::BlendMode blendMode){
{
		HX_STACK_PUSH("Script::drawImageOnImage","com/stencyl/behavior/Script.hx",2375);
		HX_STACK_THIS(this);
		HX_STACK_ARG(source,"source");
		HX_STACK_ARG(dest,"dest");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(blendMode,"blendMode");
		HX_STACK_LINE(2376)
		x = ::Std_obj::_int((x * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(2377)
		y = ::Std_obj::_int((y * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(2379)
		if (((bool((source != null())) && bool((dest != null()))))){
			HX_STACK_LINE(2381)
			::com::stencyl::behavior::Script_obj::dummyRect->x = (int)0;
			HX_STACK_LINE(2382)
			::com::stencyl::behavior::Script_obj::dummyRect->y = (int)0;
			HX_STACK_LINE(2383)
			::com::stencyl::behavior::Script_obj::dummyRect->width = source->get_width();
			HX_STACK_LINE(2384)
			::com::stencyl::behavior::Script_obj::dummyRect->height = source->get_height();
			HX_STACK_LINE(2386)
			::com::stencyl::behavior::Script_obj::dummyPoint->x = x;
			HX_STACK_LINE(2387)
			::com::stencyl::behavior::Script_obj::dummyPoint->y = y;
			HX_STACK_LINE(2389)
			if (((blendMode == ::flash::display::BlendMode_obj::NORMAL))){
				HX_STACK_LINE(2390)
				dest->copyPixels(source,::com::stencyl::behavior::Script_obj::dummyRect,::com::stencyl::behavior::Script_obj::dummyPoint,null(),null(),true);
			}
			else{
				HX_STACK_LINE(2396)
				::flash::geom::Matrix drawMatrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(drawMatrix,"drawMatrix");
				HX_STACK_LINE(2397)
				drawMatrix->identity();
				HX_STACK_LINE(2398)
				drawMatrix->translate((x * ::com::stencyl::Engine_obj::SCALE),(y * ::com::stencyl::Engine_obj::SCALE));
				HX_STACK_LINE(2399)
				dest->draw(source,drawMatrix,null(),blendMode,null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Script_obj,drawImageOnImage,(void))

::flash::display::BitmapData Script_obj::resizeImage( ::flash::display::BitmapData img,hx::Null< Float >  __o_xScale,hx::Null< Float >  __o_yScale,hx::Null< bool >  __o_smoothing){
Float xScale = __o_xScale.Default(1.0);
Float yScale = __o_yScale.Default(1.0);
bool smoothing = __o_smoothing.Default(true);
	HX_STACK_PUSH("Script::resizeImage","com/stencyl/behavior/Script.hx",2364);
	HX_STACK_THIS(this);
	HX_STACK_ARG(img,"img");
	HX_STACK_ARG(xScale,"xScale");
	HX_STACK_ARG(yScale,"yScale");
	HX_STACK_ARG(smoothing,"smoothing");
{
		HX_STACK_LINE(2365)
		::flash::geom::Matrix matrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(2366)
		matrix->scale(xScale,yScale);
		HX_STACK_LINE(2368)
		::flash::display::BitmapData toReturn = ::flash::display::BitmapData_obj::__new(::Std_obj::_int((img->get_width() * xScale)),::Std_obj::_int((img->get_height() * yScale)),true,(int)0,null());		HX_STACK_VAR(toReturn,"toReturn");
		HX_STACK_LINE(2369)
		toReturn->draw(img,matrix,null(),null(),null(),smoothing);
		HX_STACK_LINE(2371)
		return toReturn;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Script_obj,resizeImage,return )

Void Script_obj::removeImage( ::flash::display::Bitmap img){
{
		HX_STACK_PUSH("Script::removeImage","com/stencyl/behavior/Script.hx",2355);
		HX_STACK_THIS(this);
		HX_STACK_ARG(img,"img");
		HX_STACK_LINE(2355)
		if (((img != null()))){
			HX_STACK_LINE(2357)
			img->get_parent()->removeChild(img);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,removeImage,(void))

Void Script_obj::attachImageToLayer( ::flash::display::Bitmap img,int layerID,int x,int y,hx::Null< int >  __o_pos){
int pos = __o_pos.Default(1);
	HX_STACK_PUSH("Script::attachImageToLayer","com/stencyl/behavior/Script.hx",2329);
	HX_STACK_THIS(this);
	HX_STACK_ARG(img,"img");
	HX_STACK_ARG(layerID,"layerID");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(pos,"pos");
{
		HX_STACK_LINE(2330)
		x = ::Std_obj::_int((x * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(2331)
		y = ::Std_obj::_int((y * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(2333)
		if (((img != null()))){
			HX_STACK_LINE(2336)
			if (((pos == (int)2))){
				struct _Function_3_1{
					inline static ::com::stencyl::models::scene::Layer Block( ::com::stencyl::behavior::Script_obj *__this,int &layerID){
						HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",2338);
						{
							HX_STACK_LINE(2338)
							::de::polygonal::ds::IntHashTable _this = __this->engine->layers;		HX_STACK_VAR(_this,"_this");
							struct _Function_4_1{
								inline static int Block( int &layerID,::de::polygonal::ds::IntHashTable _this){
									HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",2338);
									{
										HX_STACK_LINE(2338)
										::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(2338)
										int i = _this1->_hash->__get((int((layerID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
										struct _Function_5_1{
											inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &layerID){
												HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",2338);
												{
													HX_STACK_LINE(2338)
													int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
													HX_STACK_LINE(2338)
													i = _this1->_data->__get((i + (int)2));
													HX_STACK_LINE(2338)
													while(((i != (int)-1))){
														HX_STACK_LINE(2338)
														if (((_this1->_data->__get(i) == layerID))){
															HX_STACK_LINE(2338)
															v = _this1->_data->__get((i + (int)1));
															HX_STACK_LINE(2338)
															break;
														}
														HX_STACK_LINE(2338)
														i = _this1->_data->__get((i + (int)2));
													}
													HX_STACK_LINE(2338)
													return v;
												}
												return null();
											}
										};
										HX_STACK_LINE(2338)
										return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == layerID))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_5_1::Block(i,_this1,layerID)) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(2338)
							int i = _Function_4_1::Block(layerID,_this);		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(2338)
							return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::scene::Layer(null()) : ::com::stencyl::models::scene::Layer(_this->_vals->__GetItem(i)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(2338)
				::com::stencyl::models::scene::Layer layer = _Function_3_1::Block(this,layerID);		HX_STACK_VAR(layer,"layer");
				HX_STACK_LINE(2339)
				layer->addChild(img);
			}
			else{
				HX_STACK_LINE(2344)
				::flash::display::DisplayObjectContainer layer = this->engine->actorsPerLayer->get(layerID);		HX_STACK_VAR(layer,"layer");
				HX_STACK_LINE(2345)
				layer->addChild(img);
			}
			HX_STACK_LINE(2348)
			img->set_x(x);
			HX_STACK_LINE(2349)
			img->set_y(y);
			HX_STACK_LINE(2350)
			img->set_smoothing(::scripts::MyAssets_obj::antialias);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Script_obj,attachImageToLayer,(void))

Void Script_obj::attachImageToHUD( ::flash::display::Bitmap img,int x,int y){
{
		HX_STACK_PUSH("Script::attachImageToHUD","com/stencyl/behavior/Script.hx",2315);
		HX_STACK_THIS(this);
		HX_STACK_ARG(img,"img");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(2316)
		x = ::Std_obj::_int((x * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(2317)
		y = ::Std_obj::_int((y * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(2319)
		if (((img != null()))){
			HX_STACK_LINE(2321)
			this->engine->hudLayer->addChild(img);
			HX_STACK_LINE(2322)
			img->set_x(x);
			HX_STACK_LINE(2323)
			img->set_y(y);
			HX_STACK_LINE(2324)
			img->set_smoothing(::scripts::MyAssets_obj::antialias);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Script_obj,attachImageToHUD,(void))

Void Script_obj::attachImageToActor( ::flash::display::Bitmap img,::com::stencyl::models::Actor a,int x,int y,hx::Null< int >  __o_pos){
int pos = __o_pos.Default(1);
	HX_STACK_PUSH("Script::attachImageToActor","com/stencyl/behavior/Script.hx",2266);
	HX_STACK_THIS(this);
	HX_STACK_ARG(img,"img");
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(pos,"pos");
{
		HX_STACK_LINE(2267)
		x = ::Std_obj::_int((x * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(2268)
		y = ::Std_obj::_int((y * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(2270)
		if (((img != null()))){
			HX_STACK_LINE(2273)
			if (((pos == (int)2))){
				HX_STACK_LINE(2275)
				a->addChild(img);
				HX_STACK_LINE(2276)
				a->setChildIndex(img,(int)0);
			}
			else{
				HX_STACK_LINE(2280)
				a->addChild(img);
			}
			HX_STACK_LINE(2285)
			if (((::com::stencyl::Engine_obj::SCALE == (int)1))){
				HX_STACK_LINE(2287)
				img->set_x((x - (Float(a->getWidth()) / Float((int)2))));
				HX_STACK_LINE(2288)
				img->set_y((y - (Float(a->getHeight()) / Float((int)2))));
			}
			else{
				HX_STACK_LINE(2291)
				if (((::com::stencyl::Engine_obj::SCALE == (int)2))){
					HX_STACK_LINE(2293)
					img->set_x((x - (::com::stencyl::Engine_obj::SCALE * a->getWidth())));
					HX_STACK_LINE(2294)
					img->set_y((y - (::com::stencyl::Engine_obj::SCALE * a->getHeight())));
				}
				else{
					HX_STACK_LINE(2297)
					if (((::com::stencyl::Engine_obj::SCALE == (int)4))){
						HX_STACK_LINE(2299)
						img->set_x((x - ((::com::stencyl::Engine_obj::SCALE * a->getWidth()) * (int)2)));
						HX_STACK_LINE(2300)
						img->set_y((y - ((::com::stencyl::Engine_obj::SCALE * a->getHeight()) * (int)2)));
					}
					else{
						HX_STACK_LINE(2305)
						img->set_x((x - ((::com::stencyl::Engine_obj::SCALE * a->getWidth()) * 0.75)));
						HX_STACK_LINE(2306)
						img->set_y((y - ((::com::stencyl::Engine_obj::SCALE * a->getHeight()) * 0.75)));
					}
				}
			}
			HX_STACK_LINE(2309)
			img->set_smoothing(::scripts::MyAssets_obj::antialias);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Script_obj,attachImageToActor,(void))

Void Script_obj::bringImagetoFront( ::flash::display::Bitmap img){
{
		HX_STACK_PUSH("Script::bringImagetoFront","com/stencyl/behavior/Script.hx",2258);
		HX_STACK_THIS(this);
		HX_STACK_ARG(img,"img");
		HX_STACK_LINE(2258)
		if (((bool((img != null())) && bool((img->get_parent() != null()))))){
			HX_STACK_LINE(2260)
			this->setOrderForImage(img,(img->get_parent()->get_numChildren() - (int)1));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,bringImagetoFront,(void))

Void Script_obj::bringImageToBack( ::flash::display::Bitmap img){
{
		HX_STACK_PUSH("Script::bringImageToBack","com/stencyl/behavior/Script.hx",2250);
		HX_STACK_THIS(this);
		HX_STACK_ARG(img,"img");
		HX_STACK_LINE(2250)
		if (((bool((img != null())) && bool((img->get_parent() != null()))))){
			HX_STACK_LINE(2252)
			this->setOrderForImage(img,(int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,bringImageToBack,(void))

Void Script_obj::bringImageForward( ::flash::display::Bitmap img){
{
		HX_STACK_PUSH("Script::bringImageForward","com/stencyl/behavior/Script.hx",2242);
		HX_STACK_THIS(this);
		HX_STACK_ARG(img,"img");
		HX_STACK_LINE(2242)
		if (((bool((img != null())) && bool((img->get_parent() != null()))))){
			HX_STACK_LINE(2244)
			this->setOrderForImage(img,(img->get_parent()->getChildIndex(img) + (int)1));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,bringImageForward,(void))

Void Script_obj::bringImageBack( ::flash::display::Bitmap img){
{
		HX_STACK_PUSH("Script::bringImageBack","com/stencyl/behavior/Script.hx",2234);
		HX_STACK_THIS(this);
		HX_STACK_ARG(img,"img");
		HX_STACK_LINE(2234)
		if (((bool((img != null())) && bool((img->get_parent() != null()))))){
			HX_STACK_LINE(2236)
			this->setOrderForImage(img,(img->get_parent()->getChildIndex(img) - (int)1));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,bringImageBack,(void))

Void Script_obj::setOrderForImage( ::flash::display::Bitmap img,int order){
{
		HX_STACK_PUSH("Script::setOrderForImage","com/stencyl/behavior/Script.hx",2223);
		HX_STACK_THIS(this);
		HX_STACK_ARG(img,"img");
		HX_STACK_ARG(order,"order");
		HX_STACK_LINE(2223)
		if (((bool((img != null())) && bool((img->get_parent() != null()))))){
			HX_STACK_LINE(2225)
			if (((bool((order >= (int)0)) && bool((order < img->get_parent()->get_numChildren()))))){
				HX_STACK_LINE(2227)
				img->get_parent()->setChildIndex(img,order);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,setOrderForImage,(void))

::flash::display::BitmapData Script_obj::getSubImage( ::flash::display::BitmapData img,int x,int y,int width,int height){
	HX_STACK_PUSH("Script::getSubImage","com/stencyl/behavior/Script.hx",2196);
	HX_STACK_THIS(this);
	HX_STACK_ARG(img,"img");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_LINE(2197)
	x = ::Std_obj::_int((x * ::com::stencyl::Engine_obj::SCALE));
	HX_STACK_LINE(2198)
	y = ::Std_obj::_int((y * ::com::stencyl::Engine_obj::SCALE));
	HX_STACK_LINE(2199)
	width = ::Std_obj::_int((width * ::com::stencyl::Engine_obj::SCALE));
	HX_STACK_LINE(2200)
	height = ::Std_obj::_int((height * ::com::stencyl::Engine_obj::SCALE));
	HX_STACK_LINE(2202)
	if (((bool((bool((bool((bool((bool((bool((img != null())) && bool((x >= (int)0)))) && bool((y >= (int)0)))) && bool((width > (int)0)))) && bool((height > (int)0)))) && bool((x < img->get_width())))) && bool((y < img->get_height()))))){
		HX_STACK_LINE(2204)
		::flash::display::BitmapData newImg = ::flash::display::BitmapData_obj::__new(width,height,null(),null(),null());		HX_STACK_VAR(newImg,"newImg");
		HX_STACK_LINE(2206)
		::com::stencyl::behavior::Script_obj::dummyRect->x = x;
		HX_STACK_LINE(2207)
		::com::stencyl::behavior::Script_obj::dummyRect->y = y;
		HX_STACK_LINE(2208)
		::com::stencyl::behavior::Script_obj::dummyRect->width = width;
		HX_STACK_LINE(2209)
		::com::stencyl::behavior::Script_obj::dummyRect->height = height;
		HX_STACK_LINE(2211)
		::com::stencyl::behavior::Script_obj::dummyPoint->x = (int)0;
		HX_STACK_LINE(2212)
		::com::stencyl::behavior::Script_obj::dummyPoint->y = (int)0;
		HX_STACK_LINE(2214)
		newImg->copyPixels(img,::com::stencyl::behavior::Script_obj::dummyRect,::com::stencyl::behavior::Script_obj::dummyPoint,null(),null(),null());
		HX_STACK_LINE(2216)
		return newImg;
	}
	HX_STACK_LINE(2219)
	return ::flash::display::BitmapData_obj::__new((int)1,(int)1,null(),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC5(Script_obj,getSubImage,return )

Void Script_obj::loadImageFromURL( ::String URL,Dynamic onComplete){
{
		HX_STACK_PUSH("Script::loadImageFromURL","com/stencyl/behavior/Script.hx",2165);
		HX_STACK_THIS(this);
		HX_STACK_ARG(URL,"URL");
		HX_STACK_ARG(onComplete,"onComplete");
		HX_STACK_LINE(2165)
		Dynamic onComplete1 = Dynamic( Array_obj<Dynamic>::__new().Add(onComplete));		HX_STACK_VAR(onComplete1,"onComplete1");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,onComplete1)
		Void run(::flash::events::Event event){
			HX_STACK_PUSH("*::_Function_1_1","com/stencyl/behavior/Script.hx",2184);
			HX_STACK_ARG(event,"event");
			{
				HX_STACK_LINE(2185)
				::flash::display::BitmapData bitmapData = (hx::TCast< flash::display::Bitmap >::cast(event->get_currentTarget()->__Field(HX_CSTRING("content"),true)))->bitmapData;		HX_STACK_VAR(bitmapData,"bitmapData");
				HX_STACK_LINE(2186)
				onComplete1->__GetItem((int)0)(bitmapData).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(2183)
		Dynamic handler =  Dynamic(new _Function_1_1(onComplete1));		HX_STACK_VAR(handler,"handler");
		HX_STACK_LINE(2189)
		::flash::display::Loader loader = ::flash::display::Loader_obj::__new();		HX_STACK_VAR(loader,"loader");
		HX_STACK_LINE(2190)
		loader->contentLoaderInfo->addEventListener(::flash::events::Event_obj::COMPLETE,handler,null(),null(),null());
		HX_STACK_LINE(2191)
		loader->load(::flash::net::URLRequest_obj::__new(URL),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,loadImageFromURL,(void))

::flash::display::BitmapData Script_obj::getExternalImage( ::String path){
	HX_STACK_PUSH("Script::getExternalImage","com/stencyl/behavior/Script.hx",2160);
	HX_STACK_THIS(this);
	HX_STACK_ARG(path,"path");
	HX_STACK_LINE(2160)
	return ::openfl::Assets_obj::getBitmapData((HX_CSTRING("assets/data/") + path),false);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getExternalImage,return )

::flash::display::BitmapData Script_obj::getImageForActor( ::com::stencyl::models::Actor a){
	HX_STACK_PUSH("Script::getImageForActor","com/stencyl/behavior/Script.hx",2153);
	HX_STACK_THIS(this);
	HX_STACK_ARG(a,"a");
	HX_STACK_LINE(2154)
	::flash::display::BitmapData original = a->getCurrentImage();		HX_STACK_VAR(original,"original");
	HX_STACK_LINE(2155)
	return original->clone();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getImageForActor,return )

::flash::display::BitmapData Script_obj::captureScreenshot( ){
	HX_STACK_PUSH("Script::captureScreenshot","com/stencyl/behavior/Script.hx",2146);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2147)
	::flash::display::BitmapData img = ::flash::display::BitmapData_obj::__new(this->getScreenWidth(),this->getScreenHeight(),null(),null(),null());		HX_STACK_VAR(img,"img");
	HX_STACK_LINE(2148)
	img->draw(::flash::Lib_obj::get_current()->get_stage(),null(),null(),null(),null(),null());
	HX_STACK_LINE(2149)
	return img;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,captureScreenshot,return )

Void Script_obj::setBackground( ::String oldBackName,::String newBackName){
{
		HX_STACK_PUSH("Script::setBackground","com/stencyl/behavior/Script.hx",2117);
		HX_STACK_THIS(this);
		HX_STACK_ARG(oldBackName,"oldBackName");
		HX_STACK_ARG(newBackName,"newBackName");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,setBackground,(void))

Void Script_obj::setScrollSpeedForBackground( Float xSpeed,Float ySpeed,hx::Null< int >  __o_backgroundID){
int backgroundID = __o_backgroundID.Default(-1);
	HX_STACK_PUSH("Script::setScrollSpeedForBackground","com/stencyl/behavior/Script.hx",2094);
	HX_STACK_THIS(this);
	HX_STACK_ARG(xSpeed,"xSpeed");
	HX_STACK_ARG(ySpeed,"ySpeed");
	HX_STACK_ARG(backgroundID,"backgroundID");
{
		HX_STACK_LINE(2095)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = ::com::stencyl::Engine_obj::engine->master->get_numChildren();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2095)
		while(((_g1 < _g))){
			HX_STACK_LINE(2095)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(2097)
			::flash::display::DisplayObject child = ::com::stencyl::Engine_obj::engine->master->getChildAt(i);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(2100)
			if ((::Std_obj::is(child,hx::ClassOf< ::com::stencyl::models::scene::ScrollingBitmap >()))){
				HX_STACK_LINE(2102)
				::com::stencyl::models::scene::ScrollingBitmap bg = hx::TCast< com::stencyl::models::scene::ScrollingBitmap >::cast(child);		HX_STACK_VAR(bg,"bg");
				HX_STACK_LINE(2104)
				if (((bool((backgroundID == (int)-1)) || bool((backgroundID == bg->backgroundID))))){
					HX_STACK_LINE(2106)
					bg->xVelocity = xSpeed;
					HX_STACK_LINE(2107)
					bg->yVelocity = ySpeed;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Script_obj,setScrollSpeedForBackground,(void))

Float Script_obj::getSoundLength( ::com::stencyl::models::Sound clip){
	HX_STACK_PUSH("Script::getSoundLength","com/stencyl/behavior/Script.hx",2069);
	HX_STACK_THIS(this);
	HX_STACK_ARG(clip,"clip");
	HX_STACK_LINE(2069)
	if (((bool((clip != null())) && bool((clip->src != null()))))){
		HX_STACK_LINE(2071)
		return (clip->src->get_length() * (int)1000);
	}
	else{
		HX_STACK_LINE(2080)
		return (int)0;
	}
	HX_STACK_LINE(2069)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getSoundLength,return )

Float Script_obj::getSoundLengthForChannel( int channelNum){
	HX_STACK_PUSH("Script::getSoundLengthForChannel","com/stencyl/behavior/Script.hx",2047);
	HX_STACK_THIS(this);
	HX_STACK_ARG(channelNum,"channelNum");
	HX_STACK_LINE(2048)
	::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(channelNum).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
	HX_STACK_LINE(2050)
	if (((bool((sc != null())) && bool((sc->currentSource != null()))))){
		HX_STACK_LINE(2051)
		return (sc->currentSource->get_length() * (int)1000);
	}
	else{
		HX_STACK_LINE(2060)
		return (int)0;
	}
	HX_STACK_LINE(2050)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getSoundLengthForChannel,return )

Float Script_obj::getPositionForChannel( int channelNum){
	HX_STACK_PUSH("Script::getPositionForChannel","com/stencyl/behavior/Script.hx",2029);
	HX_STACK_THIS(this);
	HX_STACK_ARG(channelNum,"channelNum");
	HX_STACK_LINE(2030)
	::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(channelNum).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
	HX_STACK_LINE(2032)
	if (((bool((sc != null())) && bool((sc->currentSound != null()))))){
		HX_STACK_LINE(2033)
		return sc->currentSound->get_position();
	}
	else{
		HX_STACK_LINE(2038)
		return (int)0;
	}
	HX_STACK_LINE(2032)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getPositionForChannel,return )

Void Script_obj::fadeOutForAllSounds( Float time){
{
		HX_STACK_PUSH("Script::fadeOutForAllSounds","com/stencyl/behavior/Script.hx",2016);
		HX_STACK_THIS(this);
		HX_STACK_ARG(time,"time");
		HX_STACK_LINE(2017)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = ::com::stencyl::behavior::Script_obj::CHANNELS;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2017)
		while(((_g1 < _g))){
			HX_STACK_LINE(2017)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(2019)
			::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(i).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
			HX_STACK_LINE(2020)
			sc->fadeOutSound(time);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,fadeOutForAllSounds,(void))

Void Script_obj::fadeInForAllSounds( Float time){
{
		HX_STACK_PUSH("Script::fadeInForAllSounds","com/stencyl/behavior/Script.hx",2004);
		HX_STACK_THIS(this);
		HX_STACK_ARG(time,"time");
		HX_STACK_LINE(2005)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = ::com::stencyl::behavior::Script_obj::CHANNELS;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2005)
		while(((_g1 < _g))){
			HX_STACK_LINE(2005)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(2007)
			::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(i).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
			HX_STACK_LINE(2008)
			sc->fadeInSound(time);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,fadeInForAllSounds,(void))

Void Script_obj::fadeOutSoundOnChannel( int channelNum,Float time){
{
		HX_STACK_PUSH("Script::fadeOutSoundOnChannel","com/stencyl/behavior/Script.hx",1995);
		HX_STACK_THIS(this);
		HX_STACK_ARG(channelNum,"channelNum");
		HX_STACK_ARG(time,"time");
		HX_STACK_LINE(1996)
		::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(channelNum).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
		HX_STACK_LINE(1997)
		sc->fadeOutSound(time);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,fadeOutSoundOnChannel,(void))

Void Script_obj::fadeInSoundOnChannel( int channelNum,Float time){
{
		HX_STACK_PUSH("Script::fadeInSoundOnChannel","com/stencyl/behavior/Script.hx",1986);
		HX_STACK_THIS(this);
		HX_STACK_ARG(channelNum,"channelNum");
		HX_STACK_ARG(time,"time");
		HX_STACK_LINE(1987)
		::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(channelNum).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
		HX_STACK_LINE(1988)
		sc->fadeInSound(time);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,fadeInSoundOnChannel,(void))

Void Script_obj::setVolumeForAllSounds( Float volume){
{
		HX_STACK_PUSH("Script::setVolumeForAllSounds","com/stencyl/behavior/Script.hx",1972);
		HX_STACK_THIS(this);
		HX_STACK_ARG(volume,"volume");
		HX_STACK_LINE(1973)
		::com::stencyl::models::SoundChannel_obj::masterVolume = volume;
		HX_STACK_LINE(1975)
		{
			HX_STACK_LINE(1975)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::com::stencyl::behavior::Script_obj::CHANNELS;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1975)
			while(((_g1 < _g))){
				HX_STACK_LINE(1975)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1977)
				::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(i).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
				HX_STACK_LINE(1978)
				sc->setVolume(sc->volume);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,setVolumeForAllSounds,(void))

Void Script_obj::stopAllSounds( ){
{
		HX_STACK_PUSH("Script::stopAllSounds","com/stencyl/behavior/Script.hx",1960);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1961)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = ::com::stencyl::behavior::Script_obj::CHANNELS;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1961)
		while(((_g1 < _g))){
			HX_STACK_LINE(1961)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1963)
			::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(i).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
			HX_STACK_LINE(1964)
			sc->stopSound();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,stopAllSounds,(void))

Void Script_obj::setVolumeForChannel( Float volume,int channelNum){
{
		HX_STACK_PUSH("Script::setVolumeForChannel","com/stencyl/behavior/Script.hx",1951);
		HX_STACK_THIS(this);
		HX_STACK_ARG(volume,"volume");
		HX_STACK_ARG(channelNum,"channelNum");
		HX_STACK_LINE(1952)
		::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(channelNum).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
		HX_STACK_LINE(1953)
		sc->setVolume(volume);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,setVolumeForChannel,(void))

Void Script_obj::resumeSoundOnChannel( int channelNum){
{
		HX_STACK_PUSH("Script::resumeSoundOnChannel","com/stencyl/behavior/Script.hx",1942);
		HX_STACK_THIS(this);
		HX_STACK_ARG(channelNum,"channelNum");
		HX_STACK_LINE(1943)
		::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(channelNum).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
		HX_STACK_LINE(1944)
		sc->setPause(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,resumeSoundOnChannel,(void))

Void Script_obj::pauseSoundOnChannel( int channelNum){
{
		HX_STACK_PUSH("Script::pauseSoundOnChannel","com/stencyl/behavior/Script.hx",1933);
		HX_STACK_THIS(this);
		HX_STACK_ARG(channelNum,"channelNum");
		HX_STACK_LINE(1934)
		::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(channelNum).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
		HX_STACK_LINE(1935)
		sc->setPause(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,pauseSoundOnChannel,(void))

Void Script_obj::stopSoundOnChannel( int channelNum){
{
		HX_STACK_PUSH("Script::stopSoundOnChannel","com/stencyl/behavior/Script.hx",1924);
		HX_STACK_THIS(this);
		HX_STACK_ARG(channelNum,"channelNum");
		HX_STACK_LINE(1925)
		::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(channelNum).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
		HX_STACK_LINE(1926)
		sc->stopSound();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,stopSoundOnChannel,(void))

Void Script_obj::loopSoundOnChannel( ::com::stencyl::models::Sound clip,int channelNum){
{
		HX_STACK_PUSH("Script::loopSoundOnChannel","com/stencyl/behavior/Script.hx",1915);
		HX_STACK_THIS(this);
		HX_STACK_ARG(clip,"clip");
		HX_STACK_ARG(channelNum,"channelNum");
		HX_STACK_LINE(1916)
		::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(channelNum).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
		HX_STACK_LINE(1917)
		sc->loopSound(clip);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,loopSoundOnChannel,(void))

Void Script_obj::playSoundOnChannel( ::com::stencyl::models::Sound clip,int channelNum){
{
		HX_STACK_PUSH("Script::playSoundOnChannel","com/stencyl/behavior/Script.hx",1906);
		HX_STACK_THIS(this);
		HX_STACK_ARG(clip,"clip");
		HX_STACK_ARG(channelNum,"channelNum");
		HX_STACK_LINE(1907)
		::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(channelNum).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
		HX_STACK_LINE(1908)
		sc->playSound(clip);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,playSoundOnChannel,(void))

Void Script_obj::loopSound( ::com::stencyl::models::Sound clip){
{
		HX_STACK_PUSH("Script::loopSound","com/stencyl/behavior/Script.hx",1883);
		HX_STACK_THIS(this);
		HX_STACK_ARG(clip,"clip");
		HX_STACK_LINE(1883)
		if (((clip != null()))){
			HX_STACK_LINE(1886)
			{
				HX_STACK_LINE(1886)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = ::com::stencyl::behavior::Script_obj::CHANNELS;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1886)
				while(((_g1 < _g))){
					HX_STACK_LINE(1886)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1888)
					::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(i).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
					HX_STACK_LINE(1890)
					if (((sc->currentSound == null()))){
						HX_STACK_LINE(1893)
						sc->loopSound(clip);
						HX_STACK_LINE(1894)
						return null();
					}
				}
			}
			HX_STACK_LINE(1898)
			::haxe::Log_obj::trace(HX_CSTRING("No channels available to loop sound"),hx::SourceInfo(HX_CSTRING("Script.hx"),1898,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("loopSound")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,loopSound,(void))

Void Script_obj::playSound( ::com::stencyl::models::Sound clip){
{
		HX_STACK_PUSH("Script::playSound","com/stencyl/behavior/Script.hx",1860);
		HX_STACK_THIS(this);
		HX_STACK_ARG(clip,"clip");
		HX_STACK_LINE(1860)
		if (((clip != null()))){
			HX_STACK_LINE(1863)
			{
				HX_STACK_LINE(1863)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = ::com::stencyl::behavior::Script_obj::CHANNELS;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1863)
				while(((_g1 < _g))){
					HX_STACK_LINE(1863)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1865)
					::com::stencyl::models::SoundChannel sc = this->engine->channels->__get(i).StaticCast< ::com::stencyl::models::SoundChannel >();		HX_STACK_VAR(sc,"sc");
					HX_STACK_LINE(1867)
					if (((sc->currentSound == null()))){
						HX_STACK_LINE(1870)
						sc->playSound(clip);
						HX_STACK_LINE(1871)
						return null();
					}
				}
			}
			HX_STACK_LINE(1875)
			::haxe::Log_obj::trace(HX_CSTRING("No channels available to play sound"),hx::SourceInfo(HX_CSTRING("Script.hx"),1875,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("playSound")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,playSound,(void))

::com::stencyl::models::Sound Script_obj::getSoundByName( ::String soundName){
	HX_STACK_PUSH("Script::getSoundByName","com/stencyl/behavior/Script.hx",1842);
	HX_STACK_THIS(this);
	HX_STACK_ARG(soundName,"soundName");
	HX_STACK_LINE(1843)
	Dynamic sounds = ::com::stencyl::Data_obj::get()->getResourcesOfType(hx::ClassOf< ::com::stencyl::models::Sound >());		HX_STACK_VAR(sounds,"sounds");
	HX_STACK_LINE(1845)
	{
		HX_STACK_LINE(1845)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1845)
		while(((_g < sounds->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(1845)
			Dynamic sound = sounds->__GetItem(_g);		HX_STACK_VAR(sound,"sound");
			HX_STACK_LINE(1845)
			++(_g);
			HX_STACK_LINE(1847)
			if (((sound->__Field(HX_CSTRING("name"),true) == soundName))){
				HX_STACK_LINE(1848)
				return sound;
			}
		}
	}
	HX_STACK_LINE(1853)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getSoundByName,return )

::com::stencyl::models::Sound Script_obj::getSound( int soundID){
	HX_STACK_PUSH("Script::getSound","com/stencyl/behavior/Script.hx",1827);
	HX_STACK_THIS(this);
	HX_STACK_ARG(soundID,"soundID");
	HX_STACK_LINE(1828)
	::com::stencyl::models::Resource temp = ::com::stencyl::Data_obj::get()->resources->get(soundID);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(1830)
	if (((temp == null()))){
		HX_STACK_LINE(1831)
		return null();
	}
	HX_STACK_LINE(1835)
	return hx::TCast< com::stencyl::models::Sound >::cast(temp);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getSound,return )

Void Script_obj::unmute( ){
{
		HX_STACK_PUSH("Script::unmute","com/stencyl/behavior/Script.hx",1819);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,unmute,(void))

Void Script_obj::mute( ){
{
		HX_STACK_PUSH("Script::mute","com/stencyl/behavior/Script.hx",1814);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,mute,(void))

Void Script_obj::makeActorNotPassThroughTerrain( ::com::stencyl::models::Actor actor){
{
		HX_STACK_PUSH("Script::makeActorNotPassThroughTerrain","com/stencyl/behavior/Script.hx",1791);
		HX_STACK_THIS(this);
		HX_STACK_ARG(actor,"actor");
		HX_STACK_LINE(1792)
		if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
			HX_STACK_LINE(1794)
			if (((bool((actor != null())) && bool((actor->physicsMode == (int)1))))){
				HX_STACK_LINE(1795)
				actor->continuousCollision = true;
			}
			HX_STACK_LINE(1798)
			return null();
		}
		HX_STACK_LINE(1801)
		::box2D::dynamics::B2World_obj::m_continuousPhysics = true;
		HX_STACK_LINE(1803)
		if (((bool((actor != null())) && bool((actor->physicsMode == (int)0))))){
			HX_STACK_LINE(1804)
			actor->body->setBullet(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,makeActorNotPassThroughTerrain,(void))

Float Script_obj::toPixelUnits( Float value){
	HX_STACK_PUSH("Script::toPixelUnits","com/stencyl/behavior/Script.hx",1786);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(1786)
	return ::com::stencyl::Engine_obj::toPixelUnits(value);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,toPixelUnits,return )

Float Script_obj::toPhysicalUnits( Float value){
	HX_STACK_PUSH("Script::toPhysicalUnits","com/stencyl/behavior/Script.hx",1781);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(1781)
	return ::com::stencyl::Engine_obj::toPhysicalUnits(value);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,toPhysicalUnits,return )

Void Script_obj::enableContinuousCollisions( ){
{
		HX_STACK_PUSH("Script::enableContinuousCollisions","com/stencyl/behavior/Script.hx",1776);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1776)
		::box2D::dynamics::B2World_obj::m_continuousPhysics = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,enableContinuousCollisions,(void))

::box2D::common::math::B2Vec2 Script_obj::getGravity( ){
	HX_STACK_PUSH("Script::getGravity","com/stencyl/behavior/Script.hx",1760);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1760)
	if (((this->engine->world == null()))){
		HX_STACK_LINE(1763)
		::com::stencyl::behavior::Script_obj::dummyVec->x = this->engine->gravityX;
		HX_STACK_LINE(1764)
		::com::stencyl::behavior::Script_obj::dummyVec->y = this->engine->gravityY;
		HX_STACK_LINE(1766)
		return ::com::stencyl::behavior::Script_obj::dummyVec;
	}
	else{
		HX_STACK_LINE(1770)
		return this->engine->world->getGravity();
	}
	HX_STACK_LINE(1760)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getGravity,return )

Void Script_obj::setGravity( Float x,Float y){
{
		HX_STACK_PUSH("Script::setGravity","com/stencyl/behavior/Script.hx",1746);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(1746)
		if (((this->engine->world == null()))){
			HX_STACK_LINE(1749)
			this->engine->gravityX = x;
			HX_STACK_LINE(1750)
			this->engine->gravityY = y;
		}
		else{
			HX_STACK_LINE(1754)
			this->engine->world->setGravity(::box2D::common::math::B2Vec2_obj::__new(x,y));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,setGravity,(void))

::com::stencyl::models::actor::Group Script_obj::getActorGroup( int groupID){
	HX_STACK_PUSH("Script::getActorGroup","com/stencyl/behavior/Script.hx",1729);
	HX_STACK_THIS(this);
	HX_STACK_ARG(groupID,"groupID");
	HX_STACK_LINE(1729)
	return this->engine->getGroup(groupID,null());
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getActorGroup,return )

::com::stencyl::models::Actor Script_obj::getActor( int actorID){
	HX_STACK_PUSH("Script::getActor","com/stencyl/behavior/Script.hx",1721);
	HX_STACK_THIS(this);
	HX_STACK_ARG(actorID,"actorID");
	HX_STACK_LINE(1721)
	return this->engine->getActor(actorID);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getActor,return )

Array< ::Dynamic > Script_obj::getActorsOfType( ::com::stencyl::models::actor::ActorType type){
	HX_STACK_PUSH("Script::getActorsOfType","com/stencyl/behavior/Script.hx",1713);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(1713)
	return this->engine->getActorsOfType(type);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getActorsOfType,return )

Array< ::Dynamic > Script_obj::getAllActorTypes( ){
	HX_STACK_PUSH("Script::getAllActorTypes","com/stencyl/behavior/Script.hx",1705);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1705)
	return ::com::stencyl::Data_obj::get()->getAllActorTypes();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getAllActorTypes,return )

::com::stencyl::models::actor::ActorType Script_obj::getActorType( int actorTypeID){
	HX_STACK_PUSH("Script::getActorType","com/stencyl/behavior/Script.hx",1697);
	HX_STACK_THIS(this);
	HX_STACK_ARG(actorTypeID,"actorTypeID");
	HX_STACK_LINE(1697)
	return hx::TCast< com::stencyl::models::actor::ActorType >::cast(::com::stencyl::Data_obj::get()->resources->get(actorTypeID));
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getActorType,return )

::com::stencyl::models::actor::ActorType Script_obj::getActorTypeByName( ::String typeName){
	HX_STACK_PUSH("Script::getActorTypeByName","com/stencyl/behavior/Script.hx",1679);
	HX_STACK_THIS(this);
	HX_STACK_ARG(typeName,"typeName");
	HX_STACK_LINE(1680)
	Array< ::Dynamic > types = this->getAllActorTypes();		HX_STACK_VAR(types,"types");
	HX_STACK_LINE(1682)
	{
		HX_STACK_LINE(1682)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1682)
		while(((_g < types->length))){
			HX_STACK_LINE(1682)
			::com::stencyl::models::actor::ActorType type = types->__get(_g).StaticCast< ::com::stencyl::models::actor::ActorType >();		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(1682)
			++(_g);
			HX_STACK_LINE(1684)
			if (((type->name == typeName))){
				HX_STACK_LINE(1685)
				return type;
			}
		}
	}
	HX_STACK_LINE(1690)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getActorTypeByName,return )

Void Script_obj::createActorInNextScene( ::com::stencyl::models::actor::ActorType type,Float x,Float y,int layerConst){
{
		HX_STACK_PUSH("Script::createActorInNextScene","com/stencyl/behavior/Script.hx",1667);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(layerConst,"layerConst");
		HX_STACK_LINE(1667)
		this->engine->createActorInNextScene(type,x,y,layerConst);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Script_obj,createActorInNextScene,(void))

Void Script_obj::recycleActor( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Script::recycleActor","com/stencyl/behavior/Script.hx",1662);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(1662)
		this->engine->recycleActor(a);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,recycleActor,(void))

::com::stencyl::models::Actor Script_obj::createRecycledActor( ::com::stencyl::models::actor::ActorType type,Float x,Float y,int layerConst){
	HX_STACK_PUSH("Script::createRecycledActor","com/stencyl/behavior/Script.hx",1655);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(layerConst,"layerConst");
	HX_STACK_LINE(1656)
	::com::stencyl::models::Actor a = this->engine->getRecycledActorOfType(type,x,y,layerConst);		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(1657)
	::com::stencyl::behavior::Script_obj::lastCreatedActor = a;
	HX_STACK_LINE(1658)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC4(Script_obj,createRecycledActor,return )

::com::stencyl::models::Actor Script_obj::createActor( ::com::stencyl::models::actor::ActorType type,Float x,Float y,int layerConst){
	HX_STACK_PUSH("Script::createActor","com/stencyl/behavior/Script.hx",1648);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(layerConst,"layerConst");
	HX_STACK_LINE(1649)
	::com::stencyl::models::Actor a = this->engine->createActorOfType(type,x,y,layerConst);		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(1650)
	::com::stencyl::behavior::Script_obj::lastCreatedActor = a;
	HX_STACK_LINE(1651)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC4(Script_obj,createActor,return )

::com::stencyl::models::Actor Script_obj::getLastCreatedActor( ){
	HX_STACK_PUSH("Script::getLastCreatedActor","com/stencyl/behavior/Script.hx",1643);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1643)
	return ::com::stencyl::behavior::Script_obj::lastCreatedActor;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getLastCreatedActor,return )

Void Script_obj::hideCursor( ){
{
		HX_STACK_PUSH("Script::hideCursor","com/stencyl/behavior/Script.hx",1634);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1634)
		::flash::ui::Mouse_obj::hide();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,hideCursor,(void))

Void Script_obj::showCursor( ){
{
		HX_STACK_PUSH("Script::showCursor","com/stencyl/behavior/Script.hx",1629);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1629)
		::flash::ui::Mouse_obj::show();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,showCursor,(void))

Float Script_obj::getMouseReleasedY( ){
	HX_STACK_PUSH("Script::getMouseReleasedY","com/stencyl/behavior/Script.hx",1619);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1619)
	return ::com::stencyl::behavior::Script_obj::mry;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getMouseReleasedY,return )

Float Script_obj::getMouseReleasedX( ){
	HX_STACK_PUSH("Script::getMouseReleasedX","com/stencyl/behavior/Script.hx",1614);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1614)
	return ::com::stencyl::behavior::Script_obj::mrx;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getMouseReleasedX,return )

Float Script_obj::getMousePressedY( ){
	HX_STACK_PUSH("Script::getMousePressedY","com/stencyl/behavior/Script.hx",1609);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1609)
	return ::com::stencyl::behavior::Script_obj::mpy;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getMousePressedY,return )

Float Script_obj::getMousePressedX( ){
	HX_STACK_PUSH("Script::getMousePressedX","com/stencyl/behavior/Script.hx",1604);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1604)
	return ::com::stencyl::behavior::Script_obj::mpx;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getMousePressedX,return )

Float Script_obj::getMouseWorldY( ){
	HX_STACK_PUSH("Script::getMouseWorldY","com/stencyl/behavior/Script.hx",1599);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1599)
	return ((Float(::com::stencyl::Input_obj::mouseY) / Float(::com::stencyl::Engine_obj::SCALE)) + ::com::stencyl::Engine_obj::cameraY);
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getMouseWorldY,return )

Float Script_obj::getMouseWorldX( ){
	HX_STACK_PUSH("Script::getMouseWorldX","com/stencyl/behavior/Script.hx",1594);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1594)
	return ((Float(::com::stencyl::Input_obj::mouseX) / Float(::com::stencyl::Engine_obj::SCALE)) + ::com::stencyl::Engine_obj::cameraX);
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getMouseWorldX,return )

Float Script_obj::getMouseY( ){
	HX_STACK_PUSH("Script::getMouseY","com/stencyl/behavior/Script.hx",1589);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1589)
	return (Float(::com::stencyl::Input_obj::mouseY) / Float(::com::stencyl::Engine_obj::SCALE));
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getMouseY,return )

Float Script_obj::getMouseX( ){
	HX_STACK_PUSH("Script::getMouseX","com/stencyl/behavior/Script.hx",1584);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1584)
	return (Float(::com::stencyl::Input_obj::mouseX) / Float(::com::stencyl::Engine_obj::SCALE));
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getMouseX,return )

bool Script_obj::isMouseReleased( ){
	HX_STACK_PUSH("Script::isMouseReleased","com/stencyl/behavior/Script.hx",1579);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1579)
	return ::com::stencyl::Input_obj::mouseReleased;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,isMouseReleased,return )

bool Script_obj::isMousePressed( ){
	HX_STACK_PUSH("Script::isMousePressed","com/stencyl/behavior/Script.hx",1574);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1574)
	return ::com::stencyl::Input_obj::mousePressed;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,isMousePressed,return )

bool Script_obj::isMouseDown( ){
	HX_STACK_PUSH("Script::isMouseDown","com/stencyl/behavior/Script.hx",1569);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1569)
	return ::com::stencyl::Input_obj::mouseDown;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,isMouseDown,return )

bool Script_obj::isKeyReleased( ::String abstractKey){
	HX_STACK_PUSH("Script::isKeyReleased","com/stencyl/behavior/Script.hx",1564);
	HX_STACK_THIS(this);
	HX_STACK_ARG(abstractKey,"abstractKey");
	HX_STACK_LINE(1564)
	return ::com::stencyl::Input_obj::released(abstractKey);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,isKeyReleased,return )

bool Script_obj::isKeyPressed( ::String abstractKey){
	HX_STACK_PUSH("Script::isKeyPressed","com/stencyl/behavior/Script.hx",1559);
	HX_STACK_THIS(this);
	HX_STACK_ARG(abstractKey,"abstractKey");
	HX_STACK_LINE(1559)
	return ::com::stencyl::Input_obj::pressed(abstractKey);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,isKeyPressed,return )

bool Script_obj::isKeyDown( ::String abstractKey){
	HX_STACK_PUSH("Script::isKeyDown","com/stencyl/behavior/Script.hx",1554);
	HX_STACK_THIS(this);
	HX_STACK_ARG(abstractKey,"abstractKey");
	HX_STACK_LINE(1554)
	return ::com::stencyl::Input_obj::check(abstractKey);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,isKeyDown,return )

Void Script_obj::simulateKeyRelease( ::String abstractKey){
{
		HX_STACK_PUSH("Script::simulateKeyRelease","com/stencyl/behavior/Script.hx",1549);
		HX_STACK_THIS(this);
		HX_STACK_ARG(abstractKey,"abstractKey");
		HX_STACK_LINE(1549)
		::com::stencyl::Input_obj::simulateKeyRelease(abstractKey);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,simulateKeyRelease,(void))

Void Script_obj::simulateKeyPress( ::String abstractKey){
{
		HX_STACK_PUSH("Script::simulateKeyPress","com/stencyl/behavior/Script.hx",1544);
		HX_STACK_THIS(this);
		HX_STACK_ARG(abstractKey,"abstractKey");
		HX_STACK_LINE(1544)
		::com::stencyl::Input_obj::simulateKeyPress(abstractKey);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,simulateKeyPress,(void))

bool Script_obj::isShiftDown( ){
	HX_STACK_PUSH("Script::isShiftDown","com/stencyl/behavior/Script.hx",1539);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1539)
	return ::com::stencyl::Input_obj::check(::com::stencyl::Engine_obj::INTERNAL_SHIFT);
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,isShiftDown,return )

bool Script_obj::isCtrlDown( ){
	HX_STACK_PUSH("Script::isCtrlDown","com/stencyl/behavior/Script.hx",1534);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1534)
	return ::com::stencyl::Input_obj::check(::com::stencyl::Engine_obj::INTERNAL_CTRL);
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,isCtrlDown,return )

::com::stencyl::models::Actor Script_obj::getCamera( ){
	HX_STACK_PUSH("Script::getCamera","com/stencyl/behavior/Script.hx",1522);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1522)
	return this->engine->camera;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getCamera,return )

Float Script_obj::getScreenYCenter( ){
	HX_STACK_PUSH("Script::getScreenYCenter","com/stencyl/behavior/Script.hx",1512);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1512)
	return (::Math_obj::abs((Float(::com::stencyl::Engine_obj::cameraY) / Float(::com::stencyl::Engine_obj::SCALE))) + (Float((Float(::com::stencyl::Engine_obj::screenHeight) / Float((int)2))) / Float(::com::stencyl::Engine_obj::SCALE)));
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getScreenYCenter,return )

Float Script_obj::getScreenXCenter( ){
	HX_STACK_PUSH("Script::getScreenXCenter","com/stencyl/behavior/Script.hx",1502);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1502)
	return (::Math_obj::abs((Float(::com::stencyl::Engine_obj::cameraX) / Float(::com::stencyl::Engine_obj::SCALE))) + (Float((Float(::com::stencyl::Engine_obj::screenWidth) / Float((int)2))) / Float(::com::stencyl::Engine_obj::SCALE)));
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getScreenXCenter,return )

Float Script_obj::getScreenY( ){
	HX_STACK_PUSH("Script::getScreenY","com/stencyl/behavior/Script.hx",1492);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1492)
	return ::Math_obj::abs((Float(::com::stencyl::Engine_obj::cameraY) / Float(::com::stencyl::Engine_obj::SCALE)));
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getScreenY,return )

Float Script_obj::getScreenX( ){
	HX_STACK_PUSH("Script::getScreenX","com/stencyl/behavior/Script.hx",1482);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1482)
	return ::Math_obj::abs((Float(::com::stencyl::Engine_obj::cameraX) / Float(::com::stencyl::Engine_obj::SCALE)));
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getScreenX,return )

Void Script_obj::fadeTileLayerTo( int layerID,Float alphaPct,Float duration,Dynamic easing){
{
		HX_STACK_PUSH("Script::fadeTileLayerTo","com/stencyl/behavior/Script.hx",1461);
		HX_STACK_THIS(this);
		HX_STACK_ARG(layerID,"layerID");
		HX_STACK_ARG(alphaPct,"alphaPct");
		HX_STACK_ARG(duration,"duration");
		HX_STACK_ARG(easing,"easing");
		HX_STACK_LINE(1462)
		if (((easing == null()))){
			HX_STACK_LINE(1463)
			easing = ::motion::easing::Linear_obj::get_easeNone();
		}
		struct _Function_1_1{
			inline static ::com::stencyl::models::scene::TileLayer Block( ::com::stencyl::behavior::Script_obj *__this,int &layerID){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1467);
				{
					HX_STACK_LINE(1467)
					::de::polygonal::ds::IntHashTable _this = __this->engine->tileLayers;		HX_STACK_VAR(_this,"_this");
					struct _Function_2_1{
						inline static int Block( int &layerID,::de::polygonal::ds::IntHashTable _this){
							HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1467);
							{
								HX_STACK_LINE(1467)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1467)
								int i = _this1->_hash->__get((int((layerID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
								struct _Function_3_1{
									inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &layerID){
										HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1467);
										{
											HX_STACK_LINE(1467)
											int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(1467)
											i = _this1->_data->__get((i + (int)2));
											HX_STACK_LINE(1467)
											while(((i != (int)-1))){
												HX_STACK_LINE(1467)
												if (((_this1->_data->__get(i) == layerID))){
													HX_STACK_LINE(1467)
													v = _this1->_data->__get((i + (int)1));
													HX_STACK_LINE(1467)
													break;
												}
												HX_STACK_LINE(1467)
												i = _this1->_data->__get((i + (int)2));
											}
											HX_STACK_LINE(1467)
											return v;
										}
										return null();
									}
								};
								HX_STACK_LINE(1467)
								return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == layerID))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,layerID)) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1467)
					int i = _Function_2_1::Block(layerID,_this);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1467)
					return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::scene::TileLayer(null()) : ::com::stencyl::models::scene::TileLayer(_this->_vals->__GetItem(i)) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static Dynamic Block( Float &alphaPct){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1467);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , alphaPct,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1467)
		::motion::Actuate_obj::tween(_Function_1_1::Block(this,layerID),duration,_Function_1_2::Block(alphaPct),null(),null())->ease(easing);
		struct _Function_1_3{
			inline static ::com::stencyl::models::scene::Layer Block( ::com::stencyl::behavior::Script_obj *__this,int &layerID){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1468);
				{
					HX_STACK_LINE(1468)
					::de::polygonal::ds::IntHashTable _this = __this->engine->layers;		HX_STACK_VAR(_this,"_this");
					struct _Function_2_1{
						inline static int Block( int &layerID,::de::polygonal::ds::IntHashTable _this){
							HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1468);
							{
								HX_STACK_LINE(1468)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1468)
								int i = _this1->_hash->__get((int((layerID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
								struct _Function_3_1{
									inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &layerID){
										HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1468);
										{
											HX_STACK_LINE(1468)
											int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(1468)
											i = _this1->_data->__get((i + (int)2));
											HX_STACK_LINE(1468)
											while(((i != (int)-1))){
												HX_STACK_LINE(1468)
												if (((_this1->_data->__get(i) == layerID))){
													HX_STACK_LINE(1468)
													v = _this1->_data->__get((i + (int)1));
													HX_STACK_LINE(1468)
													break;
												}
												HX_STACK_LINE(1468)
												i = _this1->_data->__get((i + (int)2));
											}
											HX_STACK_LINE(1468)
											return v;
										}
										return null();
									}
								};
								HX_STACK_LINE(1468)
								return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == layerID))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,layerID)) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1468)
					int i = _Function_2_1::Block(layerID,_this);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1468)
					return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::scene::Layer(null()) : ::com::stencyl::models::scene::Layer(_this->_vals->__GetItem(i)) );
				}
				return null();
			}
		};
		struct _Function_1_4{
			inline static Dynamic Block( Float &alphaPct){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1468);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , alphaPct,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1468)
		::motion::Actuate_obj::tween(_Function_1_3::Block(this,layerID),duration,_Function_1_4::Block(alphaPct),null(),null())->ease(easing);
		struct _Function_1_5{
			inline static Dynamic Block( Float &alphaPct){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1469);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , alphaPct,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1469)
		::motion::Actuate_obj::tween(this->engine->actorsPerLayer->get(layerID),duration,_Function_1_5::Block(alphaPct),null(),null())->ease(easing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Script_obj,fadeTileLayerTo,(void))

Void Script_obj::hideTileLayer( int layerID){
{
		HX_STACK_PUSH("Script::hideTileLayer","com/stencyl/behavior/Script.hx",1446);
		HX_STACK_THIS(this);
		HX_STACK_ARG(layerID,"layerID");
		struct _Function_1_1{
			inline static ::com::stencyl::models::scene::TileLayer Block( ::com::stencyl::behavior::Script_obj *__this,int &layerID){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1447);
				{
					HX_STACK_LINE(1447)
					::de::polygonal::ds::IntHashTable _this = __this->engine->tileLayers;		HX_STACK_VAR(_this,"_this");
					struct _Function_2_1{
						inline static int Block( int &layerID,::de::polygonal::ds::IntHashTable _this){
							HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1447);
							{
								HX_STACK_LINE(1447)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1447)
								int i = _this1->_hash->__get((int((layerID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
								struct _Function_3_1{
									inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &layerID){
										HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1447);
										{
											HX_STACK_LINE(1447)
											int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(1447)
											i = _this1->_data->__get((i + (int)2));
											HX_STACK_LINE(1447)
											while(((i != (int)-1))){
												HX_STACK_LINE(1447)
												if (((_this1->_data->__get(i) == layerID))){
													HX_STACK_LINE(1447)
													v = _this1->_data->__get((i + (int)1));
													HX_STACK_LINE(1447)
													break;
												}
												HX_STACK_LINE(1447)
												i = _this1->_data->__get((i + (int)2));
											}
											HX_STACK_LINE(1447)
											return v;
										}
										return null();
									}
								};
								HX_STACK_LINE(1447)
								return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == layerID))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,layerID)) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1447)
					int i = _Function_2_1::Block(layerID,_this);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1447)
					return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::scene::TileLayer(null()) : ::com::stencyl::models::scene::TileLayer(_this->_vals->__GetItem(i)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(1447)
		(_Function_1_1::Block(this,layerID))->set_alpha((int)0);
		struct _Function_1_2{
			inline static ::com::stencyl::models::scene::Layer Block( ::com::stencyl::behavior::Script_obj *__this,int &layerID){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1448);
				{
					HX_STACK_LINE(1448)
					::de::polygonal::ds::IntHashTable _this = __this->engine->layers;		HX_STACK_VAR(_this,"_this");
					struct _Function_2_1{
						inline static int Block( int &layerID,::de::polygonal::ds::IntHashTable _this){
							HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1448);
							{
								HX_STACK_LINE(1448)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1448)
								int i = _this1->_hash->__get((int((layerID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
								struct _Function_3_1{
									inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &layerID){
										HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1448);
										{
											HX_STACK_LINE(1448)
											int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(1448)
											i = _this1->_data->__get((i + (int)2));
											HX_STACK_LINE(1448)
											while(((i != (int)-1))){
												HX_STACK_LINE(1448)
												if (((_this1->_data->__get(i) == layerID))){
													HX_STACK_LINE(1448)
													v = _this1->_data->__get((i + (int)1));
													HX_STACK_LINE(1448)
													break;
												}
												HX_STACK_LINE(1448)
												i = _this1->_data->__get((i + (int)2));
											}
											HX_STACK_LINE(1448)
											return v;
										}
										return null();
									}
								};
								HX_STACK_LINE(1448)
								return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == layerID))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,layerID)) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1448)
					int i = _Function_2_1::Block(layerID,_this);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1448)
					return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::scene::Layer(null()) : ::com::stencyl::models::scene::Layer(_this->_vals->__GetItem(i)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(1448)
		(_Function_1_2::Block(this,layerID))->set_alpha((int)0);
		HX_STACK_LINE(1449)
		this->engine->actorsPerLayer->get(layerID)->__Field(HX_CSTRING("set_alpha"),true)((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,hideTileLayer,(void))

Void Script_obj::showTileLayer( int layerID){
{
		HX_STACK_PUSH("Script::showTileLayer","com/stencyl/behavior/Script.hx",1434);
		HX_STACK_THIS(this);
		HX_STACK_ARG(layerID,"layerID");
		struct _Function_1_1{
			inline static ::com::stencyl::models::scene::TileLayer Block( ::com::stencyl::behavior::Script_obj *__this,int &layerID){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1435);
				{
					HX_STACK_LINE(1435)
					::de::polygonal::ds::IntHashTable _this = __this->engine->tileLayers;		HX_STACK_VAR(_this,"_this");
					struct _Function_2_1{
						inline static int Block( int &layerID,::de::polygonal::ds::IntHashTable _this){
							HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1435);
							{
								HX_STACK_LINE(1435)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1435)
								int i = _this1->_hash->__get((int((layerID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
								struct _Function_3_1{
									inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &layerID){
										HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1435);
										{
											HX_STACK_LINE(1435)
											int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(1435)
											i = _this1->_data->__get((i + (int)2));
											HX_STACK_LINE(1435)
											while(((i != (int)-1))){
												HX_STACK_LINE(1435)
												if (((_this1->_data->__get(i) == layerID))){
													HX_STACK_LINE(1435)
													v = _this1->_data->__get((i + (int)1));
													HX_STACK_LINE(1435)
													break;
												}
												HX_STACK_LINE(1435)
												i = _this1->_data->__get((i + (int)2));
											}
											HX_STACK_LINE(1435)
											return v;
										}
										return null();
									}
								};
								HX_STACK_LINE(1435)
								return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == layerID))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,layerID)) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1435)
					int i = _Function_2_1::Block(layerID,_this);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1435)
					return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::scene::TileLayer(null()) : ::com::stencyl::models::scene::TileLayer(_this->_vals->__GetItem(i)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(1435)
		(_Function_1_1::Block(this,layerID))->set_alpha((int)1);
		struct _Function_1_2{
			inline static ::com::stencyl::models::scene::Layer Block( ::com::stencyl::behavior::Script_obj *__this,int &layerID){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1436);
				{
					HX_STACK_LINE(1436)
					::de::polygonal::ds::IntHashTable _this = __this->engine->layers;		HX_STACK_VAR(_this,"_this");
					struct _Function_2_1{
						inline static int Block( int &layerID,::de::polygonal::ds::IntHashTable _this){
							HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1436);
							{
								HX_STACK_LINE(1436)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1436)
								int i = _this1->_hash->__get((int((layerID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
								struct _Function_3_1{
									inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &layerID){
										HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1436);
										{
											HX_STACK_LINE(1436)
											int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(1436)
											i = _this1->_data->__get((i + (int)2));
											HX_STACK_LINE(1436)
											while(((i != (int)-1))){
												HX_STACK_LINE(1436)
												if (((_this1->_data->__get(i) == layerID))){
													HX_STACK_LINE(1436)
													v = _this1->_data->__get((i + (int)1));
													HX_STACK_LINE(1436)
													break;
												}
												HX_STACK_LINE(1436)
												i = _this1->_data->__get((i + (int)2));
											}
											HX_STACK_LINE(1436)
											return v;
										}
										return null();
									}
								};
								HX_STACK_LINE(1436)
								return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == layerID))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,layerID)) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1436)
					int i = _Function_2_1::Block(layerID,_this);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1436)
					return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::scene::Layer(null()) : ::com::stencyl::models::scene::Layer(_this->_vals->__GetItem(i)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(1436)
		(_Function_1_2::Block(this,layerID))->set_alpha((int)1);
		HX_STACK_LINE(1437)
		this->engine->actorsPerLayer->get(layerID)->__Field(HX_CSTRING("set_alpha"),true)((int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,showTileLayer,(void))

Void Script_obj::setBlendModeForLayer( int layerID,::flash::display::BlendMode mode){
{
		HX_STACK_PUSH("Script::setBlendModeForLayer","com/stencyl/behavior/Script.hx",1416);
		HX_STACK_THIS(this);
		HX_STACK_ARG(layerID,"layerID");
		HX_STACK_ARG(mode,"mode");
		struct _Function_1_1{
			inline static ::com::stencyl::models::scene::TileLayer Block( ::com::stencyl::behavior::Script_obj *__this,int &layerID){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1418);
				{
					HX_STACK_LINE(1418)
					::de::polygonal::ds::IntHashTable _this = __this->engine->tileLayers;		HX_STACK_VAR(_this,"_this");
					struct _Function_2_1{
						inline static int Block( int &layerID,::de::polygonal::ds::IntHashTable _this){
							HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1418);
							{
								HX_STACK_LINE(1418)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1418)
								int i = _this1->_hash->__get((int((layerID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
								struct _Function_3_1{
									inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &layerID){
										HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1418);
										{
											HX_STACK_LINE(1418)
											int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(1418)
											i = _this1->_data->__get((i + (int)2));
											HX_STACK_LINE(1418)
											while(((i != (int)-1))){
												HX_STACK_LINE(1418)
												if (((_this1->_data->__get(i) == layerID))){
													HX_STACK_LINE(1418)
													v = _this1->_data->__get((i + (int)1));
													HX_STACK_LINE(1418)
													break;
												}
												HX_STACK_LINE(1418)
												i = _this1->_data->__get((i + (int)2));
											}
											HX_STACK_LINE(1418)
											return v;
										}
										return null();
									}
								};
								HX_STACK_LINE(1418)
								return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == layerID))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,layerID)) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1418)
					int i = _Function_2_1::Block(layerID,_this);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1418)
					return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::scene::TileLayer(null()) : ::com::stencyl::models::scene::TileLayer(_this->_vals->__GetItem(i)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(1418)
		::com::stencyl::models::scene::TileLayer tileLayer = _Function_1_1::Block(this,layerID);		HX_STACK_VAR(tileLayer,"tileLayer");
		HX_STACK_LINE(1419)
		tileLayer->blendName = ::Std_obj::string(mode);
		HX_STACK_LINE(1420)
		tileLayer->draw(::Std_obj::_int(::com::stencyl::Engine_obj::cameraX),::Std_obj::_int(::com::stencyl::Engine_obj::cameraY),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,setBlendModeForLayer,(void))

::com::stencyl::models::scene::Layer Script_obj::getLayer( int layerID){
	HX_STACK_PUSH("Script::getLayer","com/stencyl/behavior/Script.hx",1411);
	HX_STACK_THIS(this);
	HX_STACK_ARG(layerID,"layerID");
	struct _Function_1_1{
		inline static ::com::stencyl::models::scene::Layer Block( ::com::stencyl::behavior::Script_obj *__this,int &layerID){
			HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1412);
			{
				HX_STACK_LINE(1412)
				::de::polygonal::ds::IntHashTable _this = __this->engine->layers;		HX_STACK_VAR(_this,"_this");
				struct _Function_2_1{
					inline static int Block( int &layerID,::de::polygonal::ds::IntHashTable _this){
						HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1412);
						{
							HX_STACK_LINE(1412)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1412)
							int i = _this1->_hash->__get((int((layerID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
							struct _Function_3_1{
								inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &layerID){
									HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",1412);
									{
										HX_STACK_LINE(1412)
										int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(1412)
										i = _this1->_data->__get((i + (int)2));
										HX_STACK_LINE(1412)
										while(((i != (int)-1))){
											HX_STACK_LINE(1412)
											if (((_this1->_data->__get(i) == layerID))){
												HX_STACK_LINE(1412)
												v = _this1->_data->__get((i + (int)1));
												HX_STACK_LINE(1412)
												break;
											}
											HX_STACK_LINE(1412)
											i = _this1->_data->__get((i + (int)2));
										}
										HX_STACK_LINE(1412)
										return v;
									}
									return null();
								}
							};
							HX_STACK_LINE(1412)
							return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == layerID))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,layerID)) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(1412)
				int i = _Function_2_1::Block(layerID,_this);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1412)
				return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::scene::Layer(null()) : ::com::stencyl::models::scene::Layer(_this->_vals->__GetItem(i)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(1411)
	return _Function_1_1::Block(this,layerID);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getLayer,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createCircleIn( Float duration,hx::Null< int >  __o_color){
int color = __o_color.Default(-16777216);
	HX_STACK_PUSH("Script::createCircleIn","com/stencyl/behavior/Script.hx",1397);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(color,"color");
{
		HX_STACK_LINE(1397)
		return ::com::stencyl::graphics::transitions::CircleTransition_obj::__new(::com::stencyl::graphics::transitions::Transition_obj::IN,duration,color);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createCircleIn,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createCircleOut( Float duration,hx::Null< int >  __o_color){
int color = __o_color.Default(-16777216);
	HX_STACK_PUSH("Script::createCircleOut","com/stencyl/behavior/Script.hx",1392);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(color,"color");
{
		HX_STACK_LINE(1392)
		return ::com::stencyl::graphics::transitions::CircleTransition_obj::__new(::com::stencyl::graphics::transitions::Transition_obj::OUT,duration,color);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createCircleOut,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createFadeIn( Float duration,hx::Null< int >  __o_color){
int color = __o_color.Default(-16777216);
	HX_STACK_PUSH("Script::createFadeIn","com/stencyl/behavior/Script.hx",1387);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(color,"color");
{
		HX_STACK_LINE(1387)
		return ::com::stencyl::graphics::transitions::FadeInTransition_obj::__new(duration,color);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createFadeIn,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createFadeOut( Float duration,hx::Null< int >  __o_color){
int color = __o_color.Default(-16777216);
	HX_STACK_PUSH("Script::createFadeOut","com/stencyl/behavior/Script.hx",1382);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(color,"color");
{
		HX_STACK_LINE(1382)
		return ::com::stencyl::graphics::transitions::FadeOutTransition_obj::__new(duration,color);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createFadeOut,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createCrossfadeTransition( Float duration){
	HX_STACK_PUSH("Script::createCrossfadeTransition","com/stencyl/behavior/Script.hx",1377);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_LINE(1377)
	return ::com::stencyl::graphics::transitions::CrossfadeTransition_obj::__new(this->engine->root,duration);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,createCrossfadeTransition,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createSlideRightTransition( Float duration){
	HX_STACK_PUSH("Script::createSlideRightTransition","com/stencyl/behavior/Script.hx",1372);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_LINE(1372)
	return this->createSlideTransition(duration,::com::stencyl::graphics::transitions::SlideTransition_obj::SLIDE_RIGHT);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,createSlideRightTransition,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createSlideLeftTransition( Float duration){
	HX_STACK_PUSH("Script::createSlideLeftTransition","com/stencyl/behavior/Script.hx",1367);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_LINE(1367)
	return this->createSlideTransition(duration,::com::stencyl::graphics::transitions::SlideTransition_obj::SLIDE_LEFT);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,createSlideLeftTransition,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createSlideDownTransition( Float duration){
	HX_STACK_PUSH("Script::createSlideDownTransition","com/stencyl/behavior/Script.hx",1362);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_LINE(1362)
	return this->createSlideTransition(duration,::com::stencyl::graphics::transitions::SlideTransition_obj::SLIDE_DOWN);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,createSlideDownTransition,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createSlideUpTransition( Float duration){
	HX_STACK_PUSH("Script::createSlideUpTransition","com/stencyl/behavior/Script.hx",1357);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_LINE(1357)
	return this->createSlideTransition(duration,::com::stencyl::graphics::transitions::SlideTransition_obj::SLIDE_UP);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,createSlideUpTransition,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createSlideTransition( Float duration,::String direction){
	HX_STACK_PUSH("Script::createSlideTransition","com/stencyl/behavior/Script.hx",1351);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(direction,"direction");
	HX_STACK_LINE(1351)
	return ::com::stencyl::graphics::transitions::SlideTransition_obj::__new(this->engine->master,duration,direction);
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createSlideTransition,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createRectangleIn( Float duration,hx::Null< int >  __o_color){
int color = __o_color.Default(-16777216);
	HX_STACK_PUSH("Script::createRectangleIn","com/stencyl/behavior/Script.hx",1338);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(color,"color");
{
		HX_STACK_LINE(1338)
		return ::com::stencyl::graphics::transitions::RectangleTransition_obj::__new(::com::stencyl::graphics::transitions::Transition_obj::IN,duration,color);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createRectangleIn,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createRectangleOut( Float duration,hx::Null< int >  __o_color){
int color = __o_color.Default(-16777216);
	HX_STACK_PUSH("Script::createRectangleOut","com/stencyl/behavior/Script.hx",1325);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(color,"color");
{
		HX_STACK_LINE(1325)
		return ::com::stencyl::graphics::transitions::RectangleTransition_obj::__new(::com::stencyl::graphics::transitions::Transition_obj::OUT,duration,color);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createRectangleOut,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createBlindsIn( Float duration,hx::Null< int >  __o_color){
int color = __o_color.Default(-16777216);
	HX_STACK_PUSH("Script::createBlindsIn","com/stencyl/behavior/Script.hx",1312);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(color,"color");
{
		HX_STACK_LINE(1312)
		return ::com::stencyl::graphics::transitions::BlindsTransition_obj::__new(::com::stencyl::graphics::transitions::Transition_obj::IN,duration,(int)10,color);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createBlindsIn,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createBlindsOut( Float duration,hx::Null< int >  __o_color){
int color = __o_color.Default(-16777216);
	HX_STACK_PUSH("Script::createBlindsOut","com/stencyl/behavior/Script.hx",1299);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(color,"color");
{
		HX_STACK_LINE(1299)
		return ::com::stencyl::graphics::transitions::BlindsTransition_obj::__new(::com::stencyl::graphics::transitions::Transition_obj::OUT,duration,(int)10,color);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createBlindsOut,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createBubblesIn( Float duration,hx::Null< int >  __o_color){
int color = __o_color.Default(-16777216);
	HX_STACK_PUSH("Script::createBubblesIn","com/stencyl/behavior/Script.hx",1286);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(color,"color");
{
		HX_STACK_LINE(1286)
		return ::com::stencyl::graphics::transitions::BubblesTransition_obj::__new(::com::stencyl::graphics::transitions::Transition_obj::IN,duration,(int)50,color);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createBubblesIn,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createBubblesOut( Float duration,hx::Null< int >  __o_color){
int color = __o_color.Default(-16777216);
	HX_STACK_PUSH("Script::createBubblesOut","com/stencyl/behavior/Script.hx",1273);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(color,"color");
{
		HX_STACK_LINE(1273)
		return ::com::stencyl::graphics::transitions::BubblesTransition_obj::__new(::com::stencyl::graphics::transitions::Transition_obj::OUT,duration,(int)50,color);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createBubblesOut,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createPixelizeIn( Float duration,hx::Null< int >  __o_pixelSize){
int pixelSize = __o_pixelSize.Default(15);
	HX_STACK_PUSH("Script::createPixelizeIn","com/stencyl/behavior/Script.hx",1260);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(pixelSize,"pixelSize");
{
		HX_STACK_LINE(1260)
		return ::com::stencyl::graphics::transitions::PixelizeTransition_obj::__new(duration,pixelSize,(int)1);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createPixelizeIn,return )

::com::stencyl::graphics::transitions::Transition Script_obj::createPixelizeOut( Float duration,hx::Null< int >  __o_pixelSize){
int pixelSize = __o_pixelSize.Default(15);
	HX_STACK_PUSH("Script::createPixelizeOut","com/stencyl/behavior/Script.hx",1247);
	HX_STACK_THIS(this);
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(pixelSize,"pixelSize");
{
		HX_STACK_LINE(1247)
		return ::com::stencyl::graphics::transitions::PixelizeTransition_obj::__new(duration,(int)1,pixelSize);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,createPixelizeOut,return )

Void Script_obj::switchScene( int sceneID,::com::stencyl::graphics::transitions::Transition leave,::com::stencyl::graphics::transitions::Transition enter){
{
		HX_STACK_PUSH("Script::switchScene","com/stencyl/behavior/Script.hx",1234);
		HX_STACK_THIS(this);
		HX_STACK_ARG(sceneID,"sceneID");
		HX_STACK_ARG(leave,"leave");
		HX_STACK_ARG(enter,"enter");
		HX_STACK_LINE(1234)
		this->engine->switchScene(sceneID,leave,enter);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Script_obj,switchScene,(void))

Void Script_obj::reloadCurrentScene( ::com::stencyl::graphics::transitions::Transition leave,::com::stencyl::graphics::transitions::Transition enter){
{
		HX_STACK_PUSH("Script::reloadCurrentScene","com/stencyl/behavior/Script.hx",1222);
		HX_STACK_THIS(this);
		HX_STACK_ARG(leave,"leave");
		HX_STACK_ARG(enter,"enter");
		HX_STACK_LINE(1222)
		this->engine->switchScene(this->getCurrentScene(),leave,enter);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,reloadCurrentScene,(void))

int Script_obj::getTileHeight( ){
	HX_STACK_PUSH("Script::getTileHeight","com/stencyl/behavior/Script.hx",1207);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1207)
	return this->getScene()->tileHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getTileHeight,return )

int Script_obj::getTileWidth( ){
	HX_STACK_PUSH("Script::getTileWidth","com/stencyl/behavior/Script.hx",1197);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1197)
	return this->getScene()->tileWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getTileWidth,return )

int Script_obj::getSceneHeight( ){
	HX_STACK_PUSH("Script::getSceneHeight","com/stencyl/behavior/Script.hx",1187);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1187)
	return this->getScene()->sceneHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getSceneHeight,return )

int Script_obj::getSceneWidth( ){
	HX_STACK_PUSH("Script::getSceneWidth","com/stencyl/behavior/Script.hx",1177);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1177)
	return this->getScene()->sceneWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getSceneWidth,return )

::String Script_obj::getCurrentSceneName( ){
	HX_STACK_PUSH("Script::getCurrentSceneName","com/stencyl/behavior/Script.hx",1167);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1167)
	return this->getScene()->name;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getCurrentSceneName,return )

int Script_obj::getIDForScene( ::String sceneName){
	HX_STACK_PUSH("Script::getIDForScene","com/stencyl/behavior/Script.hx",1149);
	HX_STACK_THIS(this);
	HX_STACK_ARG(sceneName,"sceneName");
	HX_STACK_LINE(1150)
	for(::cpp::FastIterator_obj< ::com::stencyl::models::Scene > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Scene >(::com::stencyl::models::GameModel_obj::get()->scenes->iterator());  __it->hasNext(); ){
		::com::stencyl::models::Scene s = __it->next();
		if (((sceneName == s->name))){
			HX_STACK_LINE(1153)
			return s->ID;
		}
;
	}
	HX_STACK_LINE(1158)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getIDForScene,return )

int Script_obj::getCurrentScene( ){
	HX_STACK_PUSH("Script::getCurrentScene","com/stencyl/behavior/Script.hx",1139);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1139)
	return this->getScene()->ID;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getCurrentScene,return )

::com::stencyl::models::Scene Script_obj::getScene( ){
	HX_STACK_PUSH("Script::getScene","com/stencyl/behavior/Script.hx",1129);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1129)
	return this->engine->scene;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getScene,return )

int Script_obj::getStepSize( ){
	HX_STACK_PUSH("Script::getStepSize","com/stencyl/behavior/Script.hx",1115);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1115)
	return ::com::stencyl::Engine_obj::STEP_SIZE;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getStepSize,return )

::com::stencyl::behavior::TimedTask Script_obj::runPeriodically( Float interval,Dynamic toExecute,::com::stencyl::models::Actor actor){
	HX_STACK_PUSH("Script::runPeriodically","com/stencyl/behavior/Script.hx",1107);
	HX_STACK_THIS(this);
	HX_STACK_ARG(interval,"interval");
	HX_STACK_ARG(toExecute,"toExecute");
	HX_STACK_ARG(actor,"actor");
	HX_STACK_LINE(1108)
	::com::stencyl::behavior::TimedTask t = ::com::stencyl::behavior::TimedTask_obj::__new(toExecute,::Std_obj::_int(interval),true,actor);		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(1109)
	this->engine->addTask(t);
	HX_STACK_LINE(1111)
	return t;
}


HX_DEFINE_DYNAMIC_FUNC3(Script_obj,runPeriodically,return )

::com::stencyl::behavior::TimedTask Script_obj::runLater( Float delay,Dynamic toExecute,::com::stencyl::models::Actor actor){
	HX_STACK_PUSH("Script::runLater","com/stencyl/behavior/Script.hx",1093);
	HX_STACK_THIS(this);
	HX_STACK_ARG(delay,"delay");
	HX_STACK_ARG(toExecute,"toExecute");
	HX_STACK_ARG(actor,"actor");
	HX_STACK_LINE(1094)
	::com::stencyl::behavior::TimedTask t = ::com::stencyl::behavior::TimedTask_obj::__new(toExecute,::Std_obj::_int(delay),false,actor);		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(1095)
	this->engine->addTask(t);
	HX_STACK_LINE(1097)
	return t;
}


HX_DEFINE_DYNAMIC_FUNC3(Script_obj,runLater,return )

Dynamic Script_obj::getGameAttribute( ::String name){
	HX_STACK_PUSH("Script::getGameAttribute","com/stencyl/behavior/Script.hx",1078);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(1078)
	return this->engine->getGameAttribute(name);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getGameAttribute,return )

Void Script_obj::setGameAttribute( ::String name,Dynamic value){
{
		HX_STACK_PUSH("Script::setGameAttribute","com/stencyl/behavior/Script.hx",1070);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(1071)
		Dynamic value1 = value;		HX_STACK_VAR(value1,"value1");
		HX_STACK_LINE(1071)
		this->engine->gameAttributes->set(name,value1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,setGameAttribute,(void))

Dynamic Script_obj::sayToScene( ::String behaviorName,::String msg,Dynamic args){
	HX_STACK_PUSH("Script::sayToScene","com/stencyl/behavior/Script.hx",1058);
	HX_STACK_THIS(this);
	HX_STACK_ARG(behaviorName,"behaviorName");
	HX_STACK_ARG(msg,"msg");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(1058)
	return this->engine->say(behaviorName,msg,args);
}


HX_DEFINE_DYNAMIC_FUNC3(Script_obj,sayToScene,return )

Dynamic Script_obj::shoutToScene( ::String msg,Dynamic args){
	HX_STACK_PUSH("Script::shoutToScene","com/stencyl/behavior/Script.hx",1050);
	HX_STACK_THIS(this);
	HX_STACK_ARG(msg,"msg");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(1050)
	return this->engine->shout(msg,args);
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,shoutToScene,return )

Void Script_obj::setValueForScene( ::String behaviorName,::String attributeName,Dynamic value){
{
		HX_STACK_PUSH("Script::setValueForScene","com/stencyl/behavior/Script.hx",1042);
		HX_STACK_THIS(this);
		HX_STACK_ARG(behaviorName,"behaviorName");
		HX_STACK_ARG(attributeName,"attributeName");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(1042)
		this->engine->setValue(behaviorName,attributeName,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Script_obj,setValueForScene,(void))

Dynamic Script_obj::getValueForScene( ::String behaviorName,::String attributeName){
	HX_STACK_PUSH("Script::getValueForScene","com/stencyl/behavior/Script.hx",1034);
	HX_STACK_THIS(this);
	HX_STACK_ARG(behaviorName,"behaviorName");
	HX_STACK_ARG(attributeName,"attributeName");
	HX_STACK_LINE(1034)
	return this->engine->getValue(behaviorName,attributeName);
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,getValueForScene,return )

Void Script_obj::disableThisBehavior( ){
{
		HX_STACK_PUSH("Script::disableThisBehavior","com/stencyl/behavior/Script.hx",1021);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1021)
		this->engine->behaviors->disableBehavior(this->wrapper->name);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,disableThisBehavior,(void))

bool Script_obj::isBehaviorEnabledForScene( ::String behaviorName){
	HX_STACK_PUSH("Script::isBehaviorEnabledForScene","com/stencyl/behavior/Script.hx",1012);
	HX_STACK_THIS(this);
	HX_STACK_ARG(behaviorName,"behaviorName");
	HX_STACK_LINE(1012)
	return this->engine->behaviors->isBehaviorEnabled(behaviorName);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,isBehaviorEnabledForScene,return )

Void Script_obj::disableBehaviorForScene( ::String behaviorName){
{
		HX_STACK_PUSH("Script::disableBehaviorForScene","com/stencyl/behavior/Script.hx",1000);
		HX_STACK_THIS(this);
		HX_STACK_ARG(behaviorName,"behaviorName");
		HX_STACK_LINE(1000)
		this->engine->behaviors->disableBehavior(behaviorName);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,disableBehaviorForScene,(void))

Void Script_obj::enableBehaviorForScene( ::String behaviorName){
{
		HX_STACK_PUSH("Script::enableBehaviorForScene","com/stencyl/behavior/Script.hx",990);
		HX_STACK_THIS(this);
		HX_STACK_ARG(behaviorName,"behaviorName");
		HX_STACK_LINE(990)
		this->engine->behaviors->enableBehavior(behaviorName);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,enableBehaviorForScene,(void))

bool Script_obj::sceneHasBehavior( ::String behaviorName){
	HX_STACK_PUSH("Script::sceneHasBehavior","com/stencyl/behavior/Script.hx",980);
	HX_STACK_THIS(this);
	HX_STACK_ARG(behaviorName,"behaviorName");
	HX_STACK_LINE(980)
	return this->engine->behaviors->hasBehavior(behaviorName);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,sceneHasBehavior,return )

Array< ::Dynamic > Script_obj::getActorsInRegion( ::com::stencyl::models::Region r){
	HX_STACK_PUSH("Script::getActorsInRegion","com/stencyl/behavior/Script.hx",949);
	HX_STACK_THIS(this);
	HX_STACK_ARG(r,"r");
	HX_STACK_LINE(950)
	::haxe::ds::IntMap ids = r->getContainedActors();		HX_STACK_VAR(ids,"ids");
	HX_STACK_LINE(952)
	Array< ::Dynamic > toReturn = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(toReturn,"toReturn");
	struct _Function_1_1{
		inline static Dynamic Block( ::haxe::ds::IntMap &ids){
			HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",954);
			{
				HX_STACK_LINE(954)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(ids);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","com/stencyl/behavior/Script.hx",954);
					{
						HX_STACK_LINE(954)
						return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(954)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(954)
	for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >((_Function_1_1::Block(ids))());  __it->hasNext(); ){
		int i = __it->next();
		toReturn->push(this->engine->getActor(i));
	}
	HX_STACK_LINE(959)
	return toReturn;
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getActorsInRegion,return )

bool Script_obj::isInRegion( ::com::stencyl::models::Actor a,::com::stencyl::models::Region r){
	HX_STACK_PUSH("Script::isInRegion","com/stencyl/behavior/Script.hx",944);
	HX_STACK_THIS(this);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(r,"r");
	HX_STACK_LINE(944)
	return this->engine->isInRegion(a,r);
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,isInRegion,return )

::com::stencyl::models::Region Script_obj::createCircularRegion( Float x,Float y,Float r){
	HX_STACK_PUSH("Script::createCircularRegion","com/stencyl/behavior/Script.hx",939);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(r,"r");
	HX_STACK_LINE(939)
	return ::com::stencyl::behavior::Script_obj::lastCreatedRegion = this->engine->createCircularRegion(x,y,r);
}


HX_DEFINE_DYNAMIC_FUNC3(Script_obj,createCircularRegion,return )

::com::stencyl::models::Region Script_obj::createBoxRegion( Float x,Float y,Float w,Float h){
	HX_STACK_PUSH("Script::createBoxRegion","com/stencyl/behavior/Script.hx",934);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(w,"w");
	HX_STACK_ARG(h,"h");
	HX_STACK_LINE(934)
	return ::com::stencyl::behavior::Script_obj::lastCreatedRegion = this->engine->createBoxRegion(x,y,w,h);
}


HX_DEFINE_DYNAMIC_FUNC4(Script_obj,createBoxRegion,return )

Void Script_obj::removeRegion( int regionID){
{
		HX_STACK_PUSH("Script::removeRegion","com/stencyl/behavior/Script.hx",929);
		HX_STACK_THIS(this);
		HX_STACK_ARG(regionID,"regionID");
		HX_STACK_LINE(929)
		this->engine->removeRegion(regionID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,removeRegion,(void))

::com::stencyl::models::Region Script_obj::getRegion( int regionID){
	HX_STACK_PUSH("Script::getRegion","com/stencyl/behavior/Script.hx",924);
	HX_STACK_THIS(this);
	HX_STACK_ARG(regionID,"regionID");
	HX_STACK_LINE(924)
	return this->engine->getRegion(regionID);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getRegion,return )

Array< ::Dynamic > Script_obj::getAllRegions( ){
	HX_STACK_PUSH("Script::getAllRegions","com/stencyl/behavior/Script.hx",911);
	HX_STACK_THIS(this);
	HX_STACK_LINE(912)
	Array< ::Dynamic > regions = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(regions,"regions");
	HX_STACK_LINE(914)
	for(::cpp::FastIterator_obj< ::com::stencyl::models::Region > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Region >(this->engine->regions->iterator());  __it->hasNext(); ){
		::com::stencyl::models::Region r = __it->next();
		{
			HX_STACK_LINE(916)
			if (((r == null()))){
				HX_STACK_LINE(916)
				continue;
			}
			HX_STACK_LINE(917)
			regions->push(r);
		}
;
	}
	HX_STACK_LINE(920)
	return regions;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getAllRegions,return )

::com::stencyl::models::Region Script_obj::getLastCreatedRegion( ){
	HX_STACK_PUSH("Script::getLastCreatedRegion","com/stencyl/behavior/Script.hx",906);
	HX_STACK_THIS(this);
	HX_STACK_LINE(906)
	return ::com::stencyl::behavior::Script_obj::lastCreatedRegion;
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,getLastCreatedRegion,return )

Void Script_obj::addPauseListener( Dynamic func){
{
		HX_STACK_PUSH("Script::addPauseListener","com/stencyl/behavior/Script.hx",892);
		HX_STACK_THIS(this);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(893)
		this->engine->whenPausedListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(895)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(896)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(this->engine->whenPausedListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,addPauseListener,(void))

Void Script_obj::addFocusChangeListener( Dynamic func){
{
		HX_STACK_PUSH("Script::addFocusChangeListener","com/stencyl/behavior/Script.hx",882);
		HX_STACK_THIS(this);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(883)
		this->engine->whenFocusChangedListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(885)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(886)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(this->engine->whenFocusChangedListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,addFocusChangeListener,(void))

Void Script_obj::addSoundListener( Dynamic obj,Dynamic func){
{
		HX_STACK_PUSH("Script::addSoundListener","com/stencyl/behavior/Script.hx",866);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_ARG(func,"func");
		struct _Function_1_1{
			inline static bool Block( ::com::stencyl::behavior::Script_obj *__this,Dynamic &obj){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",867);
				{
					HX_STACK_LINE(867)
					Dynamic key = obj;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(867)
					return __this->engine->soundListeners->__Internal->exists(::__hxcpp_obj_id(key));
				}
				return null();
			}
		};
		HX_STACK_LINE(867)
		if ((!(_Function_1_1::Block(this,obj)))){
			HX_STACK_LINE(869)
			Dynamic key = obj;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(869)
			this->engine->soundListeners->__Internal->set(::__hxcpp_obj_id(key),Dynamic( Array_obj<Dynamic>::__new() ));
		}
		HX_STACK_LINE(872)
		Dynamic listeners = this->engine->soundListeners->get(obj);		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(873)
		listeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(875)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(876)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(listeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addSoundListener,(void))

Void Script_obj::addWhenTypeGroupKilledListener( Dynamic obj,Dynamic func){
{
		HX_STACK_PUSH("Script::addWhenTypeGroupKilledListener","com/stencyl/behavior/Script.hx",850);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_ARG(func,"func");
		struct _Function_1_1{
			inline static bool Block( ::com::stencyl::behavior::Script_obj *__this,Dynamic &obj){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",851);
				{
					HX_STACK_LINE(851)
					Dynamic key = obj;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(851)
					return __this->engine->whenTypeGroupDiesListeners->__Internal->exists(::__hxcpp_obj_id(key));
				}
				return null();
			}
		};
		HX_STACK_LINE(851)
		if ((!(_Function_1_1::Block(this,obj)))){
			HX_STACK_LINE(853)
			Dynamic key = obj;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(853)
			this->engine->whenTypeGroupDiesListeners->__Internal->set(::__hxcpp_obj_id(key),Dynamic( Array_obj<Dynamic>::__new() ));
		}
		HX_STACK_LINE(856)
		Dynamic listeners = this->engine->whenTypeGroupDiesListeners->get(obj);		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(857)
		listeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(859)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(860)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(listeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addWhenTypeGroupKilledListener,(void))

Void Script_obj::addWhenTypeGroupCreatedListener( Dynamic obj,Dynamic func){
{
		HX_STACK_PUSH("Script::addWhenTypeGroupCreatedListener","com/stencyl/behavior/Script.hx",834);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_ARG(func,"func");
		struct _Function_1_1{
			inline static bool Block( ::com::stencyl::behavior::Script_obj *__this,Dynamic &obj){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",835);
				{
					HX_STACK_LINE(835)
					Dynamic key = obj;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(835)
					return __this->engine->whenTypeGroupCreatedListeners->__Internal->exists(::__hxcpp_obj_id(key));
				}
				return null();
			}
		};
		HX_STACK_LINE(835)
		if ((!(_Function_1_1::Block(this,obj)))){
			HX_STACK_LINE(837)
			Dynamic key = obj;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(837)
			this->engine->whenTypeGroupCreatedListeners->__Internal->set(::__hxcpp_obj_id(key),Dynamic( Array_obj<Dynamic>::__new() ));
		}
		HX_STACK_LINE(840)
		Dynamic listeners = this->engine->whenTypeGroupCreatedListeners->get(obj);		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(841)
		listeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(843)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(844)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(listeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addWhenTypeGroupCreatedListener,(void))

Void Script_obj::addSceneCollisionListener( Dynamic obj,Dynamic obj2,Dynamic func){
{
		HX_STACK_PUSH("Script::addSceneCollisionListener","com/stencyl/behavior/Script.hx",808);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_ARG(obj2,"obj2");
		HX_STACK_ARG(func,"func");
		struct _Function_1_1{
			inline static bool Block( ::com::stencyl::behavior::Script_obj *__this,Dynamic &obj){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",809);
				{
					HX_STACK_LINE(809)
					int key = obj;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(809)
					return __this->engine->collisionListeners->exists(key);
				}
				return null();
			}
		};
		HX_STACK_LINE(809)
		if ((!(_Function_1_1::Block(this,obj)))){
			HX_STACK_LINE(811)
			int key = obj;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(811)
			this->engine->collisionListeners->set(key,::haxe::ds::IntMap_obj::__new());
		}
		struct _Function_1_2{
			inline static bool Block( ::com::stencyl::behavior::Script_obj *__this,Dynamic &obj2){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",814);
				{
					HX_STACK_LINE(814)
					int key = obj2;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(814)
					return __this->engine->collisionListeners->exists(key);
				}
				return null();
			}
		};
		HX_STACK_LINE(814)
		if ((!(_Function_1_2::Block(this,obj2)))){
			HX_STACK_LINE(816)
			int key = obj2;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(816)
			this->engine->collisionListeners->set(key,::haxe::ds::IntMap_obj::__new());
		}
		struct _Function_1_3{
			inline static Dynamic Block( ::com::stencyl::behavior::Script_obj *__this,Dynamic &obj){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",819);
				{
					HX_STACK_LINE(819)
					int key = obj;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(819)
					return __this->engine->collisionListeners->get(key);
				}
				return null();
			}
		};
		HX_STACK_LINE(819)
		if ((!((_Function_1_3::Block(this,obj))->__Field(HX_CSTRING("exists"),true)(obj2)))){
			struct _Function_2_1{
				inline static Dynamic Block( ::com::stencyl::behavior::Script_obj *__this,Dynamic &obj){
					HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",821);
					{
						HX_STACK_LINE(821)
						int key = obj;		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(821)
						return __this->engine->collisionListeners->get(key);
					}
					return null();
				}
			};
			HX_STACK_LINE(820)
			(_Function_2_1::Block(this,obj))->__Field(HX_CSTRING("set"),true)(obj2,Dynamic( Array_obj<Dynamic>::__new() ));
		}
		struct _Function_1_4{
			inline static Dynamic Block( ::com::stencyl::behavior::Script_obj *__this,Dynamic &obj){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",824);
				{
					HX_STACK_LINE(824)
					int key = obj;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(824)
					return __this->engine->collisionListeners->get(key);
				}
				return null();
			}
		};
		HX_STACK_LINE(824)
		Dynamic listeners = hx::TCastToArray((_Function_1_4::Block(this,obj))->__Field(HX_CSTRING("get"),true)(obj2));		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(825)
		listeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(827)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(828)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(listeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Script_obj,addSceneCollisionListener,(void))

Void Script_obj::addCollisionListener( ::com::stencyl::models::Actor a,Dynamic func){
{
		HX_STACK_PUSH("Script::addCollisionListener","com/stencyl/behavior/Script.hx",790);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(791)
		if (((a == null()))){
			HX_STACK_LINE(793)
			::haxe::Log_obj::trace(((HX_CSTRING("Error in ") + this->wrapper->classname) + HX_CSTRING(": Cannot add listener function to null actor.")),hx::SourceInfo(HX_CSTRING("Script.hx"),793,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("addCollisionListener")));
			HX_STACK_LINE(794)
			return null();
		}
		HX_STACK_LINE(797)
		a->collisionListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(798)
		(a->collisionListenerCount)++;
		HX_STACK_LINE(800)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(801)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(a->collisionListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addCollisionListener,(void))

Void Script_obj::propertyChanged( ::String propertyKey,Dynamic property){
{
		HX_STACK_PUSH("Script::propertyChanged","com/stencyl/behavior/Script.hx",742);
		HX_STACK_THIS(this);
		HX_STACK_ARG(propertyKey,"propertyKey");
		HX_STACK_ARG(property,"property");
		HX_STACK_LINE(742)
		if ((this->checkProperties)){
			HX_STACK_LINE(745)
			Dynamic listeners = this->propertyChangeListeners->get(propertyKey);		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(747)
			if (((listeners != null()))){
				HX_STACK_LINE(749)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(751)
				while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
					HX_STACK_LINE(753)
					try{
						HX_STACK_LINE(755)
						Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(756)
						f(property,listeners).Cast< Void >();
						HX_STACK_LINE(758)
						if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
							HX_STACK_LINE(760)
							(r)--;
							HX_STACK_LINE(763)
							if (((this->equalityPairs->get(f) != null()))){
								HX_STACK_LINE(765)
								{
									HX_STACK_LINE(765)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									Dynamic _g1 = hx::TCastToArray(this->equalityPairs->get(f));		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(765)
									while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
										HX_STACK_LINE(765)
										Dynamic list = _g1->__GetItem(_g);		HX_STACK_VAR(list,"list");
										HX_STACK_LINE(765)
										++(_g);
										HX_STACK_LINE(767)
										if (((list != listeners))){
											HX_STACK_LINE(768)
											list->__Field(HX_CSTRING("splice"),true)(::com::stencyl::utils::Utils_obj::indexOf(list,f),(int)1);
										}
									}
								}
								HX_STACK_LINE(773)
								this->equalityPairs->__Internal->remove(::__hxcpp_obj_id(f));
							}
						}
					}
					catch(Dynamic __e){
						if (__e.IsClass< ::String >() ){
							HX_STACK_BEGIN_CATCH
							::String e = __e;{
								HX_STACK_LINE(779)
								::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Script.hx"),780,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("propertyChanged")));
							}
						}
						else throw(__e);
					}
					HX_STACK_LINE(783)
					(r)++;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,propertyChanged,(void))

Void Script_obj::addPropertyChangeListener( ::String propertyKey,::String propertyKey2,Dynamic func){
{
		HX_STACK_PUSH("Script::addPropertyChangeListener","com/stencyl/behavior/Script.hx",700);
		HX_STACK_THIS(this);
		HX_STACK_ARG(propertyKey,"propertyKey");
		HX_STACK_ARG(propertyKey2,"propertyKey2");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(701)
		if ((!(this->propertyChangeListeners->exists(propertyKey)))){
			HX_STACK_LINE(702)
			this->propertyChangeListeners->set(propertyKey,Dynamic( Array_obj<Dynamic>::__new() ));
		}
		HX_STACK_LINE(707)
		if (((bool((propertyKey2 != null())) && bool(!(this->propertyChangeListeners->exists(propertyKey2)))))){
			HX_STACK_LINE(708)
			this->propertyChangeListeners->set(propertyKey2,Dynamic( Array_obj<Dynamic>::__new() ));
		}
		HX_STACK_LINE(712)
		Dynamic listeners = this->propertyChangeListeners->get(propertyKey);		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(713)
		Dynamic listeners2 = this->propertyChangeListeners->get(propertyKey2);		HX_STACK_VAR(listeners2,"listeners2");
		HX_STACK_LINE(715)
		listeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(717)
		if (((propertyKey2 != null()))){
			HX_STACK_LINE(719)
			listeners2->__Field(HX_CSTRING("push"),true)(func);
			HX_STACK_LINE(722)
			Dynamic arr = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(723)
			arr->__Field(HX_CSTRING("push"),true)(listeners);
			HX_STACK_LINE(724)
			arr->__Field(HX_CSTRING("push"),true)(listeners2);
			HX_STACK_LINE(725)
			this->equalityPairs->__Internal->set(::__hxcpp_obj_id(func),arr);
		}
		HX_STACK_LINE(728)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(730)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(listeners,func);
			HX_STACK_LINE(732)
			if (((propertyKey2 != null()))){
				HX_STACK_LINE(733)
				(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(listeners2,func);
			}
		}
		HX_STACK_LINE(738)
		this->checkProperties = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Script_obj,addPropertyChangeListener,(void))

Void Script_obj::addMouseOverActorListener( ::com::stencyl::models::Actor a,Dynamic func){
{
		HX_STACK_PUSH("Script::addMouseOverActorListener","com/stencyl/behavior/Script.hx",684);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(685)
		if (((a == null()))){
			HX_STACK_LINE(687)
			::haxe::Log_obj::trace(((HX_CSTRING("Error in ") + this->wrapper->classname) + HX_CSTRING(": Cannot add listener function to null actor.")),hx::SourceInfo(HX_CSTRING("Script.hx"),687,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("addMouseOverActorListener")));
			HX_STACK_LINE(688)
			return null();
		}
		HX_STACK_LINE(691)
		a->mouseOverListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(693)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(694)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(a->mouseOverListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addMouseOverActorListener,(void))

Void Script_obj::addMouseDraggedListener( Dynamic func){
{
		HX_STACK_PUSH("Script::addMouseDraggedListener","com/stencyl/behavior/Script.hx",674);
		HX_STACK_THIS(this);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(675)
		this->engine->whenMouseDraggedListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(677)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(678)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(this->engine->whenMouseDraggedListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,addMouseDraggedListener,(void))

Void Script_obj::addMouseMovedListener( Dynamic func){
{
		HX_STACK_PUSH("Script::addMouseMovedListener","com/stencyl/behavior/Script.hx",664);
		HX_STACK_THIS(this);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(665)
		this->engine->whenMouseMovedListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(667)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(668)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(this->engine->whenMouseMovedListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,addMouseMovedListener,(void))

Void Script_obj::addMouseReleasedListener( Dynamic func){
{
		HX_STACK_PUSH("Script::addMouseReleasedListener","com/stencyl/behavior/Script.hx",654);
		HX_STACK_THIS(this);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(655)
		this->engine->whenMouseReleasedListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(657)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(658)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(this->engine->whenMouseReleasedListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,addMouseReleasedListener,(void))

Void Script_obj::addMousePressedListener( Dynamic func){
{
		HX_STACK_PUSH("Script::addMousePressedListener","com/stencyl/behavior/Script.hx",644);
		HX_STACK_THIS(this);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(645)
		this->engine->whenMousePressedListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(647)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(648)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(this->engine->whenMousePressedListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,addMousePressedListener,(void))

Void Script_obj::addAnyKeyReleasedListener( Dynamic func){
{
		HX_STACK_PUSH("Script::addAnyKeyReleasedListener","com/stencyl/behavior/Script.hx",634);
		HX_STACK_THIS(this);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(635)
		this->engine->whenAnyKeyReleasedListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(637)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(638)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(this->engine->whenAnyKeyReleasedListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,addAnyKeyReleasedListener,(void))

Void Script_obj::addAnyKeyPressedListener( Dynamic func){
{
		HX_STACK_PUSH("Script::addAnyKeyPressedListener","com/stencyl/behavior/Script.hx",624);
		HX_STACK_THIS(this);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(625)
		this->engine->whenAnyKeyPressedListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(627)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(628)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(this->engine->whenAnyKeyPressedListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,addAnyKeyPressedListener,(void))

Void Script_obj::addKeyStateListener( ::String key,Dynamic func){
{
		HX_STACK_PUSH("Script::addKeyStateListener","com/stencyl/behavior/Script.hx",606);
		HX_STACK_THIS(this);
		HX_STACK_ARG(key,"key");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(607)
		if (((this->engine->whenKeyPressedListeners->get(key) == null()))){
			HX_STACK_LINE(608)
			this->engine->whenKeyPressedListeners->set(key,Dynamic( Array_obj<Dynamic>::__new() ));
		}
		HX_STACK_LINE(612)
		this->engine->hasKeyPressedListeners = true;
		HX_STACK_LINE(614)
		Dynamic listeners = this->engine->whenKeyPressedListeners->get(key);		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(615)
		listeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(617)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(618)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(listeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addKeyStateListener,(void))

Void Script_obj::addMultiTouchEndListener( Dynamic func){
{
		HX_STACK_PUSH("Script::addMultiTouchEndListener","com/stencyl/behavior/Script.hx",594);
		HX_STACK_THIS(this);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(596)
		this->engine->whenMTEndListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(598)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(599)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(this->engine->whenMTEndListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,addMultiTouchEndListener,(void))

Void Script_obj::addMultiTouchMoveListener( Dynamic func){
{
		HX_STACK_PUSH("Script::addMultiTouchMoveListener","com/stencyl/behavior/Script.hx",582);
		HX_STACK_THIS(this);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(584)
		this->engine->whenMTDragListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(586)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(587)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(this->engine->whenMTDragListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,addMultiTouchMoveListener,(void))

Void Script_obj::addMultiTouchStartListener( Dynamic func){
{
		HX_STACK_PUSH("Script::addMultiTouchStartListener","com/stencyl/behavior/Script.hx",570);
		HX_STACK_THIS(this);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(572)
		this->engine->whenMTStartListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(574)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(575)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(this->engine->whenMTStartListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,addMultiTouchStartListener,(void))

Void Script_obj::addSwipeListener( Dynamic func){
{
		HX_STACK_PUSH("Script::addSwipeListener","com/stencyl/behavior/Script.hx",560);
		HX_STACK_THIS(this);
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(561)
		this->engine->whenSwipedListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(563)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(564)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(this->engine->whenSwipedListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,addSwipeListener,(void))

Void Script_obj::addActorTypeGroupPositionListener( Dynamic obj,Dynamic func){
{
		HX_STACK_PUSH("Script::addActorTypeGroupPositionListener","com/stencyl/behavior/Script.hx",544);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_ARG(func,"func");
		struct _Function_1_1{
			inline static bool Block( ::com::stencyl::behavior::Script_obj *__this,Dynamic &obj){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",545);
				{
					HX_STACK_LINE(545)
					int key = obj;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(545)
					return __this->engine->typeGroupPositionListeners->exists(key);
				}
				return null();
			}
		};
		HX_STACK_LINE(545)
		if ((!(_Function_1_1::Block(this,obj)))){
			HX_STACK_LINE(547)
			int key = obj;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(547)
			this->engine->typeGroupPositionListeners->set(key,Dynamic( Array_obj<Dynamic>::__new() ));
		}
		struct _Function_1_2{
			inline static Dynamic Block( ::com::stencyl::behavior::Script_obj *__this,Dynamic &obj){
				HX_STACK_PUSH("*::closure","com/stencyl/behavior/Script.hx",550);
				{
					HX_STACK_LINE(550)
					int key = obj;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(550)
					return __this->engine->typeGroupPositionListeners->get(key);
				}
				return null();
			}
		};
		HX_STACK_LINE(550)
		Dynamic listeners = hx::TCastToArray(_Function_1_2::Block(this,obj));		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(551)
		listeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(553)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(554)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(listeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addActorTypeGroupPositionListener,(void))

Void Script_obj::addActorPositionListener( ::com::stencyl::models::Actor a,Dynamic func){
{
		HX_STACK_PUSH("Script::addActorPositionListener","com/stencyl/behavior/Script.hx",527);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(528)
		if (((a == null()))){
			HX_STACK_LINE(530)
			::haxe::Log_obj::trace(((HX_CSTRING("Error in ") + this->wrapper->classname) + HX_CSTRING(": Cannot add listener function to null actor.")),hx::SourceInfo(HX_CSTRING("Script.hx"),530,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("addActorPositionListener")));
			HX_STACK_LINE(531)
			return null();
		}
		HX_STACK_LINE(534)
		a->positionListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(535)
		(a->positionListenerCount)++;
		HX_STACK_LINE(537)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(538)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(a->positionListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addActorPositionListener,(void))

Void Script_obj::addActorExitsRegionListener( ::com::stencyl::models::Region reg,Dynamic func){
{
		HX_STACK_PUSH("Script::addActorExitsRegionListener","com/stencyl/behavior/Script.hx",511);
		HX_STACK_THIS(this);
		HX_STACK_ARG(reg,"reg");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(512)
		if (((reg == null()))){
			HX_STACK_LINE(514)
			::haxe::Log_obj::trace(((HX_CSTRING("Error in ") + this->wrapper->classname) + HX_CSTRING(": Cannot add listener function to null region.")),hx::SourceInfo(HX_CSTRING("Script.hx"),514,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("addActorExitsRegionListener")));
			HX_STACK_LINE(515)
			return null();
		}
		HX_STACK_LINE(518)
		reg->whenActorExitsListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(520)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(521)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(reg->whenActorExitsListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addActorExitsRegionListener,(void))

Void Script_obj::addActorEntersRegionListener( ::com::stencyl::models::Region reg,Dynamic func){
{
		HX_STACK_PUSH("Script::addActorEntersRegionListener","com/stencyl/behavior/Script.hx",495);
		HX_STACK_THIS(this);
		HX_STACK_ARG(reg,"reg");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(496)
		if (((reg == null()))){
			HX_STACK_LINE(498)
			::haxe::Log_obj::trace(((HX_CSTRING("Error in ") + this->wrapper->classname) + HX_CSTRING(": Cannot add listener function to null region.")),hx::SourceInfo(HX_CSTRING("Script.hx"),498,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("addActorEntersRegionListener")));
			HX_STACK_LINE(499)
			return null();
		}
		HX_STACK_LINE(502)
		reg->whenActorEntersListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(504)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >()))){
			HX_STACK_LINE(505)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(reg->whenActorEntersListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addActorEntersRegionListener,(void))

Void Script_obj::addWhenDrawingListener( ::com::stencyl::models::Actor a,Dynamic func){
{
		HX_STACK_PUSH("Script::addWhenDrawingListener","com/stencyl/behavior/Script.hx",463);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(464)
		bool isActorScript = ::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >());		HX_STACK_VAR(isActorScript,"isActorScript");
		HX_STACK_LINE(466)
		if (((a == null()))){
			HX_STACK_LINE(467)
			if ((isActorScript)){
				HX_STACK_LINE(469)
				a = (hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor;
			}
		}
		HX_STACK_LINE(474)
		Dynamic listeners;		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(476)
		if (((a != null()))){
			HX_STACK_LINE(477)
			listeners = a->whenDrawingListeners;
		}
		else{
			HX_STACK_LINE(482)
			listeners = this->engine->whenDrawingListeners;
		}
		HX_STACK_LINE(486)
		listeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(488)
		if ((isActorScript)){
			HX_STACK_LINE(489)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(listeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addWhenDrawingListener,(void))

Void Script_obj::addWhenUpdatedListener( ::com::stencyl::models::Actor a,Dynamic func){
{
		HX_STACK_PUSH("Script::addWhenUpdatedListener","com/stencyl/behavior/Script.hx",431);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(432)
		bool isActorScript = ::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >());		HX_STACK_VAR(isActorScript,"isActorScript");
		HX_STACK_LINE(434)
		if (((a == null()))){
			HX_STACK_LINE(435)
			if ((isActorScript)){
				HX_STACK_LINE(437)
				a = (hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor;
			}
		}
		HX_STACK_LINE(442)
		Dynamic listeners;		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(444)
		if (((a != null()))){
			HX_STACK_LINE(445)
			listeners = a->whenUpdatedListeners;
		}
		else{
			HX_STACK_LINE(450)
			listeners = this->engine->whenUpdatedListeners;
		}
		HX_STACK_LINE(454)
		listeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(456)
		if ((isActorScript)){
			HX_STACK_LINE(457)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(listeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addWhenUpdatedListener,(void))

Void Script_obj::addWhenKilledListener( ::com::stencyl::models::Actor a,Dynamic func){
{
		HX_STACK_PUSH("Script::addWhenKilledListener","com/stencyl/behavior/Script.hx",413);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(414)
		bool isActorScript = ::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >());		HX_STACK_VAR(isActorScript,"isActorScript");
		HX_STACK_LINE(416)
		if (((a == null()))){
			HX_STACK_LINE(418)
			::haxe::Log_obj::trace(((HX_CSTRING("Error in ") + this->wrapper->classname) + HX_CSTRING(": Cannot add listener function to null actor.")),hx::SourceInfo(HX_CSTRING("Script.hx"),418,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("addWhenKilledListener")));
			HX_STACK_LINE(419)
			return null();
		}
		HX_STACK_LINE(422)
		a->whenKilledListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(424)
		if ((isActorScript)){
			HX_STACK_LINE(425)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(a->whenKilledListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addWhenKilledListener,(void))

Void Script_obj::addWhenCreatedListener( ::com::stencyl::models::Actor a,Dynamic func){
{
		HX_STACK_PUSH("Script::addWhenCreatedListener","com/stencyl/behavior/Script.hx",395);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(396)
		bool isActorScript = ::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::behavior::ActorScript >());		HX_STACK_VAR(isActorScript,"isActorScript");
		HX_STACK_LINE(398)
		if (((a == null()))){
			HX_STACK_LINE(400)
			::haxe::Log_obj::trace(((HX_CSTRING("Error in ") + this->wrapper->classname) + HX_CSTRING(": Cannot add listener function to null actor.")),hx::SourceInfo(HX_CSTRING("Script.hx"),400,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("addWhenCreatedListener")));
			HX_STACK_LINE(401)
			return null();
		}
		HX_STACK_LINE(404)
		a->whenCreatedListeners->__Field(HX_CSTRING("push"),true)(func);
		HX_STACK_LINE(406)
		if ((isActorScript)){
			HX_STACK_LINE(407)
			(hx::TCast< com::stencyl::behavior::ActorScript >::cast(hx::ObjectPtr<OBJ_>(this)))->actor->registerListener(a->whenCreatedListeners,func);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addWhenCreatedListener,(void))

Void Script_obj::addPurchaseListener( int type,Dynamic func){
{
		HX_STACK_PUSH("Script::addPurchaseListener","com/stencyl/behavior/Script.hx",390);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(390)
		this->engine->nativeListeners->push(::com::stencyl::event::NativeListener_obj::__new(::com::stencyl::event::EventMaster_obj::TYPE_PURCHASES,type,func));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addPurchaseListener,(void))

Void Script_obj::addGameCenterListener( int type,Dynamic func){
{
		HX_STACK_PUSH("Script::addGameCenterListener","com/stencyl/behavior/Script.hx",385);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(385)
		this->engine->nativeListeners->push(::com::stencyl::event::NativeListener_obj::__new(::com::stencyl::event::EventMaster_obj::TYPE_GAMECENTER,type,func));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addGameCenterListener,(void))

Void Script_obj::addMobileAdListener( int type,Dynamic func){
{
		HX_STACK_PUSH("Script::addMobileAdListener","com/stencyl/behavior/Script.hx",380);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(380)
		this->engine->nativeListeners->push(::com::stencyl::event::NativeListener_obj::__new(::com::stencyl::event::EventMaster_obj::TYPE_ADS,type,func));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addMobileAdListener,(void))

Void Script_obj::addMobileKeyboardListener( int type,Dynamic func){
{
		HX_STACK_PUSH("Script::addMobileKeyboardListener","com/stencyl/behavior/Script.hx",375);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(func,"func");
		HX_STACK_LINE(375)
		this->engine->nativeListeners->push(::com::stencyl::event::NativeListener_obj::__new(::com::stencyl::event::EventMaster_obj::TYPE_KEYBOARD,type,func));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,addMobileKeyboardListener,(void))

Void Script_obj::init( ){
{
		HX_STACK_PUSH("Script::init","com/stencyl/behavior/Script.hx",362);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,init,(void))

::com::stencyl::models::actor::Group Script_obj::getGroupByName( ::String groupName){
	HX_STACK_PUSH("Script::getGroupByName","com/stencyl/behavior/Script.hx",353);
	HX_STACK_THIS(this);
	HX_STACK_ARG(groupName,"groupName");
	HX_STACK_LINE(353)
	return this->engine->getGroupByName(groupName);
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getGroupByName,return )

::com::stencyl::models::actor::Group Script_obj::internalGetGroup( Dynamic arg,Dynamic arg2){
	HX_STACK_PUSH("Script::internalGetGroup","com/stencyl/behavior/Script.hx",315);
	HX_STACK_THIS(this);
	HX_STACK_ARG(arg,"arg");
	HX_STACK_ARG(arg2,"arg2");
	HX_STACK_LINE(315)
	if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
		HX_STACK_LINE(317)
		return (hx::TCast< com::stencyl::models::Actor >::cast(arg))->getGroup();
	}
	else{
		HX_STACK_LINE(323)
		::box2D::dynamics::B2Fixture fixture = hx::TCast< box2D::dynamics::B2Fixture >::cast(arg2);		HX_STACK_VAR(fixture,"fixture");
		HX_STACK_LINE(325)
		if (((fixture == null()))){
			HX_STACK_LINE(327)
			::haxe::Log_obj::trace(HX_CSTRING("internalGetGroup - Warning - null shape passed in"),hx::SourceInfo(HX_CSTRING("Script.hx"),327,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("internalGetGroup")));
			HX_STACK_LINE(328)
			return (hx::TCast< com::stencyl::models::Actor >::cast(arg))->getGroup();
		}
		else{
			HX_STACK_LINE(333)
			int value = fixture->groupID;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(335)
			if (((value == ::com::stencyl::models::GameModel_obj::INHERIT_ID))){
				HX_STACK_LINE(337)
				::box2D::dynamics::B2Body body = fixture->getBody();		HX_STACK_VAR(body,"body");
				HX_STACK_LINE(339)
				if (((body != null()))){
					HX_STACK_LINE(340)
					return this->engine->getGroup(body->getUserData()->__Field(HX_CSTRING("groupID"),true),null());
				}
				HX_STACK_LINE(344)
				::haxe::Log_obj::trace(HX_CSTRING("internalGetGroup - Warning - shape inherits groupID from actor but is not attached to a body"),hx::SourceInfo(HX_CSTRING("Script.hx"),344,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("internalGetGroup")));
			}
			HX_STACK_LINE(347)
			return this->engine->getGroup(value,null());
		}
	}
	HX_STACK_LINE(315)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,internalGetGroup,return )

Void Script_obj::clearListeners( ){
{
		HX_STACK_PUSH("Script::clearListeners","com/stencyl/behavior/Script.hx",308);
		HX_STACK_THIS(this);
		HX_STACK_LINE(308)
		this->propertyChangeListeners = ::haxe::ds::StringMap_obj::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Script_obj,clearListeners,(void))

Void Script_obj::forwardMessage( ::String msg){
{
		HX_STACK_PUSH("Script::forwardMessage","com/stencyl/behavior/Script.hx",304);
		HX_STACK_THIS(this);
		HX_STACK_ARG(msg,"msg");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,forwardMessage,(void))

::String Script_obj::toInternalName( ::String displayName){
	HX_STACK_PUSH("Script::toInternalName","com/stencyl/behavior/Script.hx",283);
	HX_STACK_THIS(this);
	HX_STACK_ARG(displayName,"displayName");
	HX_STACK_LINE(284)
	if (((this->nameMap == null()))){
		HX_STACK_LINE(285)
		return displayName;
	}
	HX_STACK_LINE(289)
	::String newName = this->nameMap->get(displayName);		HX_STACK_VAR(newName,"newName");
	HX_STACK_LINE(291)
	if (((newName == null()))){
		HX_STACK_LINE(292)
		return displayName;
	}
	else{
		HX_STACK_LINE(298)
		return newName;
	}
	HX_STACK_LINE(291)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,toInternalName,return )

Dynamic Script_obj::getDefaultValue( Dynamic o){
	HX_STACK_PUSH("Script::getDefaultValue","com/stencyl/behavior/Script.hx",278);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(278)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,getDefaultValue,return )

bool Script_obj::isPrimitive( Dynamic o){
	HX_STACK_PUSH("Script::isPrimitive","com/stencyl/behavior/Script.hx",258);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(259)
	if ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))){
		HX_STACK_LINE(260)
		return true;
	}
	else{
		HX_STACK_LINE(264)
		if ((::Std_obj::is(o,hx::ClassOf< ::Float >()))){
			HX_STACK_LINE(265)
			return true;
		}
		else{
			HX_STACK_LINE(269)
			if ((::Std_obj::is(o,hx::ClassOf< ::Int >()))){
				HX_STACK_LINE(270)
				return true;
			}
		}
	}
	HX_STACK_LINE(274)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,isPrimitive,return )

bool Script_obj::hasValue( Dynamic o){
	HX_STACK_PUSH("Script::hasValue","com/stencyl/behavior/Script.hx",230);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(230)
	if ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))){
		HX_STACK_LINE(232)
		return true;
	}
	else{
		HX_STACK_LINE(236)
		if ((::Std_obj::is(o,hx::ClassOf< ::String >()))){
			HX_STACK_LINE(237)
			return true;
		}
		else{
			HX_STACK_LINE(241)
			if ((::Std_obj::is(o,hx::ClassOf< ::Float >()))){
				HX_STACK_LINE(242)
				return true;
			}
			else{
				HX_STACK_LINE(246)
				if ((::Std_obj::is(o,hx::ClassOf< ::Int >()))){
					HX_STACK_LINE(247)
					return true;
				}
				else{
					HX_STACK_LINE(252)
					return (o != null());
				}
			}
		}
	}
	HX_STACK_LINE(230)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,hasValue,return )

Float Script_obj::asNumber( Dynamic o){
	HX_STACK_PUSH("Script::asNumber","com/stencyl/behavior/Script.hx",195);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(195)
	if (((o == null()))){
		HX_STACK_LINE(197)
		return (int)0;
	}
	else{
		HX_STACK_LINE(201)
		if ((::Std_obj::is(o,hx::ClassOf< ::Float >()))){
			HX_STACK_LINE(202)
			return o;
		}
		else{
			HX_STACK_LINE(206)
			if ((::Std_obj::is(o,hx::ClassOf< ::Int >()))){
				HX_STACK_LINE(207)
				return o;
			}
			else{
				HX_STACK_LINE(211)
				if ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))){
					HX_STACK_LINE(212)
					return (  ((hx::TCast< Bool >::cast(o))) ? Float((int)1) : Float((int)0) );
				}
				else{
					HX_STACK_LINE(216)
					if ((::Std_obj::is(o,hx::ClassOf< ::String >()))){
						HX_STACK_LINE(217)
						return ::Std_obj::parseFloat(o);
					}
					else{
						HX_STACK_LINE(224)
						::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
						HX_STACK_LINE(225)
						return (int)0;
					}
				}
			}
		}
	}
	HX_STACK_LINE(195)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,asNumber,return )

bool Script_obj::asBoolean( Dynamic o){
	HX_STACK_PUSH("Script::asBoolean","com/stencyl/behavior/Script.hx",167);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(167)
	return (bool((o == true)) || bool((o == HX_CSTRING("true"))));
}


HX_DEFINE_DYNAMIC_FUNC1(Script_obj,asBoolean,return )

bool Script_obj::sameAsAny( Dynamic o,Dynamic one,Dynamic two){
	HX_STACK_PUSH("Script::sameAsAny","com/stencyl/behavior/Script.hx",162);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_ARG(one,"one");
	HX_STACK_ARG(two,"two");
	HX_STACK_LINE(162)
	return (bool((o == one)) || bool((o == two)));
}


HX_DEFINE_DYNAMIC_FUNC3(Script_obj,sameAsAny,return )

bool Script_obj::sameAs( Dynamic o,Dynamic o2){
	HX_STACK_PUSH("Script::sameAs","com/stencyl/behavior/Script.hx",157);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_ARG(o2,"o2");
	HX_STACK_LINE(157)
	return (o == o2);
}


HX_DEFINE_DYNAMIC_FUNC2(Script_obj,sameAs,return )

int Script_obj::FRONT;

int Script_obj::MIDDLE;

int Script_obj::BACK;

int Script_obj::CHANNELS;

::com::stencyl::models::Actor Script_obj::lastCreatedActor;

::box2D::dynamics::joints::B2Joint Script_obj::lastCreatedJoint;

::com::stencyl::models::Region Script_obj::lastCreatedRegion;

::com::stencyl::models::Terrain Script_obj::lastCreatedTerrainRegion;

Float Script_obj::mpx;

Float Script_obj::mpy;

Float Script_obj::mrx;

Float Script_obj::mry;

::box2D::common::math::B2Vec2 Script_obj::dummyVec;

Array< Float > Script_obj::drawData;

::flash::geom::Matrix Script_obj::ma;

bool Script_obj::strCompare( ::String one,::String two,int whichWay){
	HX_STACK_PUSH("Script::strCompare","com/stencyl/behavior/Script.hx",172);
	HX_STACK_ARG(one,"one");
	HX_STACK_ARG(two,"two");
	HX_STACK_ARG(whichWay,"whichWay");
	HX_STACK_LINE(172)
	if (((whichWay < (int)0))){
		HX_STACK_LINE(174)
		return (one < two);
	}
	else{
		HX_STACK_LINE(179)
		return (one > two);
	}
	HX_STACK_LINE(172)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Script_obj,strCompare,return )

bool Script_obj::strCompareBefore( ::String a,::String b){
	HX_STACK_PUSH("Script::strCompareBefore","com/stencyl/behavior/Script.hx",185);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(185)
	return (a < b);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Script_obj,strCompareBefore,return )

bool Script_obj::strCompareAfter( ::String a,::String b){
	HX_STACK_PUSH("Script::strCompareAfter","com/stencyl/behavior/Script.hx",190);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(190)
	return (a > b);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Script_obj,strCompareAfter,return )

::flash::geom::Rectangle Script_obj::dummyRect;

::flash::geom::Point Script_obj::dummyPoint;

::String Script_obj::BASE_64_ENCODINGS;

::String Script_obj::BASE_64_PADDING;

::String Script_obj::toBase64( ::haxe::io::Bytes bytes){
	HX_STACK_PUSH("Script::toBase64","com/stencyl/behavior/Script.hx",2805);
	HX_STACK_ARG(bytes,"bytes");
	HX_STACK_LINE(2806)
	::haxe::io::Bytes encodings = ::haxe::io::Bytes_obj::ofString(HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"));		HX_STACK_VAR(encodings,"encodings");
	HX_STACK_LINE(2807)
	::String base64 = ::haxe::crypto::BaseCode_obj::__new(encodings)->encodeBytes(bytes)->toString();		HX_STACK_VAR(base64,"base64");
	HX_STACK_LINE(2809)
	int remainder = hx::Mod(base64.length,(int)4);		HX_STACK_VAR(remainder,"remainder");
	HX_STACK_LINE(2811)
	if (((remainder > (int)1))){
		HX_STACK_LINE(2812)
		hx::AddEq(base64,HX_CSTRING("="));
	}
	HX_STACK_LINE(2816)
	if (((remainder == (int)2))){
		HX_STACK_LINE(2817)
		hx::AddEq(base64,HX_CSTRING("="));
	}
	HX_STACK_LINE(2821)
	return base64;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Script_obj,toBase64,return )

::haxe::io::Bytes Script_obj::fromBase64( ::String base64){
	HX_STACK_PUSH("Script::fromBase64","com/stencyl/behavior/Script.hx",2825);
	HX_STACK_ARG(base64,"base64");
	HX_STACK_LINE(2826)
	int paddingSize = (int)-1;		HX_STACK_VAR(paddingSize,"paddingSize");
	HX_STACK_LINE(2828)
	if (((base64.charAt((base64.length - (int)2)) == HX_CSTRING("=")))){
		HX_STACK_LINE(2829)
		paddingSize = (int)2;
	}
	else{
		HX_STACK_LINE(2833)
		if (((base64.charAt((base64.length - (int)1)) == HX_CSTRING("=")))){
			HX_STACK_LINE(2834)
			paddingSize = (int)1;
		}
	}
	HX_STACK_LINE(2838)
	if (((paddingSize != (int)-1))){
		HX_STACK_LINE(2839)
		base64 = base64.substr((int)0,(base64.length - paddingSize));
	}
	HX_STACK_LINE(2843)
	::haxe::io::Bytes encodings = ::haxe::io::Bytes_obj::ofString(HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"));		HX_STACK_VAR(encodings,"encodings");
	HX_STACK_LINE(2844)
	return ::haxe::crypto::BaseCode_obj::__new(encodings)->decodeBytes(::haxe::io::Bytes_obj::ofString(base64));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Script_obj,fromBase64,return )

Void Script_obj::abortTween( Dynamic target){
{
		HX_STACK_PUSH("Script::abortTween","com/stencyl/behavior/Script.hx",3026);
		HX_STACK_ARG(target,"target");
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Script_obj,abortTween,(void))


Script_obj::Script_obj()
{
}

void Script_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Script);
	HX_MARK_MEMBER_NAME(scriptInit,"scriptInit");
	HX_MARK_MEMBER_NAME(nameMap,"nameMap");
	HX_MARK_MEMBER_NAME(checkProperties,"checkProperties");
	HX_MARK_MEMBER_NAME(equalityPairs,"equalityPairs");
	HX_MARK_MEMBER_NAME(propertyChangeListeners,"propertyChangeListeners");
	HX_MARK_MEMBER_NAME(scene,"scene");
	HX_MARK_MEMBER_NAME(engine,"engine");
	HX_MARK_MEMBER_NAME(wrapper,"wrapper");
	HX_MARK_END_CLASS();
}

void Script_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scriptInit,"scriptInit");
	HX_VISIT_MEMBER_NAME(nameMap,"nameMap");
	HX_VISIT_MEMBER_NAME(checkProperties,"checkProperties");
	HX_VISIT_MEMBER_NAME(equalityPairs,"equalityPairs");
	HX_VISIT_MEMBER_NAME(propertyChangeListeners,"propertyChangeListeners");
	HX_VISIT_MEMBER_NAME(scene,"scene");
	HX_VISIT_MEMBER_NAME(engine,"engine");
	HX_VISIT_MEMBER_NAME(wrapper,"wrapper");
}

Dynamic Script_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ma") ) { return ma; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mpx") ) { return mpx; }
		if (HX_FIELD_EQ(inName,"mpy") ) { return mpy; }
		if (HX_FIELD_EQ(inName,"mrx") ) { return mrx; }
		if (HX_FIELD_EQ(inName,"mry") ) { return mry; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"BACK") ) { return BACK; }
		if (HX_FIELD_EQ(inName,"mute") ) { return mute_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FRONT") ) { return FRONT; }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		if (HX_FIELD_EQ(inName,"scene") ) { return scene; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"MIDDLE") ) { return MIDDLE; }
		if (HX_FIELD_EQ(inName,"unmute") ) { return unmute_dyn(); }
		if (HX_FIELD_EQ(inName,"sameAs") ) { return sameAs_dyn(); }
		if (HX_FIELD_EQ(inName,"engine") ) { return engine; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"vibrate") ) { return vibrate_dyn(); }
		if (HX_FIELD_EQ(inName,"unpause") ) { return unpause_dyn(); }
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"nameMap") ) { return nameMap; }
		if (HX_FIELD_EQ(inName,"wrapper") ) { return wrapper; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"CHANNELS") ) { return CHANNELS; }
		if (HX_FIELD_EQ(inName,"dummyVec") ) { return dummyVec; }
		if (HX_FIELD_EQ(inName,"drawData") ) { return drawData; }
		if (HX_FIELD_EQ(inName,"toBase64") ) { return toBase64_dyn(); }
		if (HX_FIELD_EQ(inName,"visitURL") ) { return visitURL_dyn(); }
		if (HX_FIELD_EQ(inName,"loadGame") ) { return loadGame_dyn(); }
		if (HX_FIELD_EQ(inName,"saveGame") ) { return saveGame_dyn(); }
		if (HX_FIELD_EQ(inName,"pauseAll") ) { return pauseAll_dyn(); }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		if (HX_FIELD_EQ(inName,"getActor") ) { return getActor_dyn(); }
		if (HX_FIELD_EQ(inName,"getLayer") ) { return getLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"getScene") ) { return getScene_dyn(); }
		if (HX_FIELD_EQ(inName,"runLater") ) { return runLater_dyn(); }
		if (HX_FIELD_EQ(inName,"hasValue") ) { return hasValue_dyn(); }
		if (HX_FIELD_EQ(inName,"asNumber") ) { return asNumber_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dummyRect") ) { return dummyRect; }
		if (HX_FIELD_EQ(inName,"showAlert") ) { return showAlert_dyn(); }
		if (HX_FIELD_EQ(inName,"loadAtlas") ) { return loadAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"postToURL") ) { return postToURL_dyn(); }
		if (HX_FIELD_EQ(inName,"randomInt") ) { return randomInt_dyn(); }
		if (HX_FIELD_EQ(inName,"fillImage") ) { return fillImage_dyn(); }
		if (HX_FIELD_EQ(inName,"loopSound") ) { return loopSound_dyn(); }
		if (HX_FIELD_EQ(inName,"playSound") ) { return playSound_dyn(); }
		if (HX_FIELD_EQ(inName,"getMouseY") ) { return getMouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"getMouseX") ) { return getMouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"isKeyDown") ) { return isKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"getCamera") ) { return getCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"getRegion") ) { return getRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"asBoolean") ) { return asBoolean_dyn(); }
		if (HX_FIELD_EQ(inName,"sameAsAny") ) { return sameAsAny_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"strCompare") ) { return strCompare_dyn(); }
		if (HX_FIELD_EQ(inName,"dummyPoint") ) { return dummyPoint; }
		if (HX_FIELD_EQ(inName,"fromBase64") ) { return fromBase64_dyn(); }
		if (HX_FIELD_EQ(inName,"abortTween") ) { return abortTween_dyn(); }
		if (HX_FIELD_EQ(inName,"unpauseAll") ) { return unpauseAll_dyn(); }
		if (HX_FIELD_EQ(inName,"clearImage") ) { return clearImage_dyn(); }
		if (HX_FIELD_EQ(inName,"getGravity") ) { return getGravity_dyn(); }
		if (HX_FIELD_EQ(inName,"setGravity") ) { return setGravity_dyn(); }
		if (HX_FIELD_EQ(inName,"hideCursor") ) { return hideCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"showCursor") ) { return showCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"isCtrlDown") ) { return isCtrlDown_dyn(); }
		if (HX_FIELD_EQ(inName,"getScreenY") ) { return getScreenY_dyn(); }
		if (HX_FIELD_EQ(inName,"getScreenX") ) { return getScreenX_dyn(); }
		if (HX_FIELD_EQ(inName,"sayToScene") ) { return sayToScene_dyn(); }
		if (HX_FIELD_EQ(inName,"isInRegion") ) { return isInRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"scriptInit") ) { return scriptInit; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"unloadAtlas") ) { return unloadAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"mochiShowAd") ) { return mochiShowAd_dyn(); }
		if (HX_FIELD_EQ(inName,"simpleTweet") ) { return simpleTweet_dyn(); }
		if (HX_FIELD_EQ(inName,"tweenNumber") ) { return tweenNumber_dyn(); }
		if (HX_FIELD_EQ(inName,"randomFloat") ) { return randomFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"getTopLayer") ) { return getTopLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"imageToText") ) { return imageToText_dyn(); }
		if (HX_FIELD_EQ(inName,"moveImageBy") ) { return moveImageBy_dyn(); }
		if (HX_FIELD_EQ(inName,"spinImageBy") ) { return spinImageBy_dyn(); }
		if (HX_FIELD_EQ(inName,"moveImageTo") ) { return moveImageTo_dyn(); }
		if (HX_FIELD_EQ(inName,"spinImageTo") ) { return spinImageTo_dyn(); }
		if (HX_FIELD_EQ(inName,"growImageTo") ) { return growImageTo_dyn(); }
		if (HX_FIELD_EQ(inName,"fadeImageTo") ) { return fadeImageTo_dyn(); }
		if (HX_FIELD_EQ(inName,"filterImage") ) { return filterImage_dyn(); }
		if (HX_FIELD_EQ(inName,"resizeImage") ) { return resizeImage_dyn(); }
		if (HX_FIELD_EQ(inName,"removeImage") ) { return removeImage_dyn(); }
		if (HX_FIELD_EQ(inName,"getSubImage") ) { return getSubImage_dyn(); }
		if (HX_FIELD_EQ(inName,"createActor") ) { return createActor_dyn(); }
		if (HX_FIELD_EQ(inName,"isMouseDown") ) { return isMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"isShiftDown") ) { return isShiftDown_dyn(); }
		if (HX_FIELD_EQ(inName,"switchScene") ) { return switchScene_dyn(); }
		if (HX_FIELD_EQ(inName,"getStepSize") ) { return getStepSize_dyn(); }
		if (HX_FIELD_EQ(inName,"isPrimitive") ) { return isPrimitive_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hideKeyboard") ) { return hideKeyboard_dyn(); }
		if (HX_FIELD_EQ(inName,"showKeyboard") ) { return showKeyboard_dyn(); }
		if (HX_FIELD_EQ(inName,"purchasesUse") ) { return purchasesUse_dyn(); }
		if (HX_FIELD_EQ(inName,"purchasesBuy") ) { return purchasesBuy_dyn(); }
		if (HX_FIELD_EQ(inName,"hideMobileAd") ) { return hideMobileAd_dyn(); }
		if (HX_FIELD_EQ(inName,"showMobileAd") ) { return showMobileAd_dyn(); }
		if (HX_FIELD_EQ(inName,"setTimeScale") ) { return setTimeScale_dyn(); }
		if (HX_FIELD_EQ(inName,"setYForImage") ) { return setYForImage_dyn(); }
		if (HX_FIELD_EQ(inName,"setXForImage") ) { return setXForImage_dyn(); }
		if (HX_FIELD_EQ(inName,"toPixelUnits") ) { return toPixelUnits_dyn(); }
		if (HX_FIELD_EQ(inName,"getActorType") ) { return getActorType_dyn(); }
		if (HX_FIELD_EQ(inName,"recycleActor") ) { return recycleActor_dyn(); }
		if (HX_FIELD_EQ(inName,"isKeyPressed") ) { return isKeyPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"createFadeIn") ) { return createFadeIn_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileWidth") ) { return getTileWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"shoutToScene") ) { return shoutToScene_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRegion") ) { return removeRegion_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"atlasIsLoaded") ) { return atlasIsLoaded_dyn(); }
		if (HX_FIELD_EQ(inName,"imageFromText") ) { return imageFromText_dyn(); }
		if (HX_FIELD_EQ(inName,"imageGetPixel") ) { return imageGetPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"imageSetPixel") ) { return imageSetPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"setBackground") ) { return setBackground_dyn(); }
		if (HX_FIELD_EQ(inName,"stopAllSounds") ) { return stopAllSounds_dyn(); }
		if (HX_FIELD_EQ(inName,"getActorGroup") ) { return getActorGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"isKeyReleased") ) { return isKeyReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"hideTileLayer") ) { return hideTileLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"showTileLayer") ) { return showTileLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"createFadeOut") ) { return createFadeOut_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileHeight") ) { return getTileHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"getSceneWidth") ) { return getSceneWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"getIDForScene") ) { return getIDForScene_dyn(); }
		if (HX_FIELD_EQ(inName,"getAllRegions") ) { return getAllRegions_dyn(); }
		if (HX_FIELD_EQ(inName,"equalityPairs") ) { return equalityPairs; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getScreenWidth") ) { return getScreenWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"getMiddleLayer") ) { return getMiddleLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"getBottomLayer") ) { return getBottomLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"imageSwapColor") ) { return imageSwapColor_dyn(); }
		if (HX_FIELD_EQ(inName,"bringImageBack") ) { return bringImageBack_dyn(); }
		if (HX_FIELD_EQ(inName,"getSoundLength") ) { return getSoundLength_dyn(); }
		if (HX_FIELD_EQ(inName,"getSoundByName") ) { return getSoundByName_dyn(); }
		if (HX_FIELD_EQ(inName,"getMouseWorldY") ) { return getMouseWorldY_dyn(); }
		if (HX_FIELD_EQ(inName,"getMouseWorldX") ) { return getMouseWorldX_dyn(); }
		if (HX_FIELD_EQ(inName,"isMousePressed") ) { return isMousePressed_dyn(); }
		if (HX_FIELD_EQ(inName,"createCircleIn") ) { return createCircleIn_dyn(); }
		if (HX_FIELD_EQ(inName,"createBlindsIn") ) { return createBlindsIn_dyn(); }
		if (HX_FIELD_EQ(inName,"getSceneHeight") ) { return getSceneHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"getGroupByName") ) { return getGroupByName_dyn(); }
		if (HX_FIELD_EQ(inName,"clearListeners") ) { return clearListeners_dyn(); }
		if (HX_FIELD_EQ(inName,"forwardMessage") ) { return forwardMessage_dyn(); }
		if (HX_FIELD_EQ(inName,"toInternalName") ) { return toInternalName_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"strCompareAfter") ) { return strCompareAfter_dyn(); }
		if (HX_FIELD_EQ(inName,"createHueFilter") ) { return createHueFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"setKeyboardText") ) { return setKeyboardText_dyn(); }
		if (HX_FIELD_EQ(inName,"mochiShowScores") ) { return mochiShowScores_dyn(); }
		if (HX_FIELD_EQ(inName,"isTransitioning") ) { return isTransitioning_dyn(); }
		if (HX_FIELD_EQ(inName,"getScreenHeight") ) { return getScreenHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTextOnImage") ) { return drawTextOnImage_dyn(); }
		if (HX_FIELD_EQ(inName,"toPhysicalUnits") ) { return toPhysicalUnits_dyn(); }
		if (HX_FIELD_EQ(inName,"getActorsOfType") ) { return getActorsOfType_dyn(); }
		if (HX_FIELD_EQ(inName,"isMouseReleased") ) { return isMouseReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"fadeTileLayerTo") ) { return fadeTileLayerTo_dyn(); }
		if (HX_FIELD_EQ(inName,"createCircleOut") ) { return createCircleOut_dyn(); }
		if (HX_FIELD_EQ(inName,"createBlindsOut") ) { return createBlindsOut_dyn(); }
		if (HX_FIELD_EQ(inName,"createBubblesIn") ) { return createBubblesIn_dyn(); }
		if (HX_FIELD_EQ(inName,"getCurrentScene") ) { return getCurrentScene_dyn(); }
		if (HX_FIELD_EQ(inName,"runPeriodically") ) { return runPeriodically_dyn(); }
		if (HX_FIELD_EQ(inName,"createBoxRegion") ) { return createBoxRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"propertyChanged") ) { return propertyChanged_dyn(); }
		if (HX_FIELD_EQ(inName,"getDefaultValue") ) { return getDefaultValue_dyn(); }
		if (HX_FIELD_EQ(inName,"checkProperties") ) { return checkProperties; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lastCreatedActor") ) { return lastCreatedActor; }
		if (HX_FIELD_EQ(inName,"lastCreatedJoint") ) { return lastCreatedJoint; }
		if (HX_FIELD_EQ(inName,"strCompareBefore") ) { return strCompareBefore_dyn(); }
		if (HX_FIELD_EQ(inName,"createTintFilter") ) { return createTintFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"purchasesRestore") ) { return purchasesRestore_dyn(); }
		if (HX_FIELD_EQ(inName,"mochiSubmitScore") ) { return mochiSubmitScore_dyn(); }
		if (HX_FIELD_EQ(inName,"newgroundsHelper") ) { return newgroundsHelper_dyn(); }
		if (HX_FIELD_EQ(inName,"newgroundsShowAd") ) { return newgroundsShowAd_dyn(); }
		if (HX_FIELD_EQ(inName,"openURLInBrowser") ) { return openURLInBrowser_dyn(); }
		if (HX_FIELD_EQ(inName,"toggleFullScreen") ) { return toggleFullScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"drawImageOnImage") ) { return drawImageOnImage_dyn(); }
		if (HX_FIELD_EQ(inName,"attachImageToHUD") ) { return attachImageToHUD_dyn(); }
		if (HX_FIELD_EQ(inName,"bringImageToBack") ) { return bringImageToBack_dyn(); }
		if (HX_FIELD_EQ(inName,"setOrderForImage") ) { return setOrderForImage_dyn(); }
		if (HX_FIELD_EQ(inName,"loadImageFromURL") ) { return loadImageFromURL_dyn(); }
		if (HX_FIELD_EQ(inName,"getExternalImage") ) { return getExternalImage_dyn(); }
		if (HX_FIELD_EQ(inName,"getImageForActor") ) { return getImageForActor_dyn(); }
		if (HX_FIELD_EQ(inName,"getAllActorTypes") ) { return getAllActorTypes_dyn(); }
		if (HX_FIELD_EQ(inName,"getMousePressedY") ) { return getMousePressedY_dyn(); }
		if (HX_FIELD_EQ(inName,"getMousePressedX") ) { return getMousePressedX_dyn(); }
		if (HX_FIELD_EQ(inName,"simulateKeyPress") ) { return simulateKeyPress_dyn(); }
		if (HX_FIELD_EQ(inName,"getScreenYCenter") ) { return getScreenYCenter_dyn(); }
		if (HX_FIELD_EQ(inName,"getScreenXCenter") ) { return getScreenXCenter_dyn(); }
		if (HX_FIELD_EQ(inName,"createBubblesOut") ) { return createBubblesOut_dyn(); }
		if (HX_FIELD_EQ(inName,"createPixelizeIn") ) { return createPixelizeIn_dyn(); }
		if (HX_FIELD_EQ(inName,"getGameAttribute") ) { return getGameAttribute_dyn(); }
		if (HX_FIELD_EQ(inName,"setGameAttribute") ) { return setGameAttribute_dyn(); }
		if (HX_FIELD_EQ(inName,"setValueForScene") ) { return setValueForScene_dyn(); }
		if (HX_FIELD_EQ(inName,"getValueForScene") ) { return getValueForScene_dyn(); }
		if (HX_FIELD_EQ(inName,"sceneHasBehavior") ) { return sceneHasBehavior_dyn(); }
		if (HX_FIELD_EQ(inName,"addPauseListener") ) { return addPauseListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addSoundListener") ) { return addSoundListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addSwipeListener") ) { return addSwipeListener_dyn(); }
		if (HX_FIELD_EQ(inName,"internalGetGroup") ) { return internalGetGroup_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lastCreatedRegion") ) { return lastCreatedRegion; }
		if (HX_FIELD_EQ(inName,"createSepiaFilter") ) { return createSepiaFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"purchasesGetPrice") ) { return purchasesGetPrice_dyn(); }
		if (HX_FIELD_EQ(inName,"purchasesGetTitle") ) { return purchasesGetTitle_dyn(); }
		if (HX_FIELD_EQ(inName,"kongregateIsGuest") ) { return kongregateIsGuest_dyn(); }
		if (HX_FIELD_EQ(inName,"kongregateInitAPI") ) { return kongregateInitAPI_dyn(); }
		if (HX_FIELD_EQ(inName,"defaultURLHandler") ) { return defaultURLHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"stopShakingScreen") ) { return stopShakingScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"setFilterForImage") ) { return setFilterForImage_dyn(); }
		if (HX_FIELD_EQ(inName,"flipImageVertical") ) { return flipImageVertical_dyn(); }
		if (HX_FIELD_EQ(inName,"bringImagetoFront") ) { return bringImagetoFront_dyn(); }
		if (HX_FIELD_EQ(inName,"bringImageForward") ) { return bringImageForward_dyn(); }
		if (HX_FIELD_EQ(inName,"captureScreenshot") ) { return captureScreenshot_dyn(); }
		if (HX_FIELD_EQ(inName,"getMouseReleasedY") ) { return getMouseReleasedY_dyn(); }
		if (HX_FIELD_EQ(inName,"getMouseReleasedX") ) { return getMouseReleasedX_dyn(); }
		if (HX_FIELD_EQ(inName,"createRectangleIn") ) { return createRectangleIn_dyn(); }
		if (HX_FIELD_EQ(inName,"createPixelizeOut") ) { return createPixelizeOut_dyn(); }
		if (HX_FIELD_EQ(inName,"getActorsInRegion") ) { return getActorsInRegion_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"enableDebugDrawing") ) { return enableDebugDrawing_dyn(); }
		if (HX_FIELD_EQ(inName,"setIconBadgeNumber") ) { return setIconBadgeNumber_dyn(); }
		if (HX_FIELD_EQ(inName,"purchasesHasBought") ) { return purchasesHasBought_dyn(); }
		if (HX_FIELD_EQ(inName,"startShakingScreen") ) { return startShakingScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"attachImageToLayer") ) { return attachImageToLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"attachImageToActor") ) { return attachImageToActor_dyn(); }
		if (HX_FIELD_EQ(inName,"fadeInForAllSounds") ) { return fadeInForAllSounds_dyn(); }
		if (HX_FIELD_EQ(inName,"stopSoundOnChannel") ) { return stopSoundOnChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"loopSoundOnChannel") ) { return loopSoundOnChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"playSoundOnChannel") ) { return playSoundOnChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"getActorTypeByName") ) { return getActorTypeByName_dyn(); }
		if (HX_FIELD_EQ(inName,"simulateKeyRelease") ) { return simulateKeyRelease_dyn(); }
		if (HX_FIELD_EQ(inName,"createRectangleOut") ) { return createRectangleOut_dyn(); }
		if (HX_FIELD_EQ(inName,"reloadCurrentScene") ) { return reloadCurrentScene_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"disableDebugDrawing") ) { return disableDebugDrawing_dyn(); }
		if (HX_FIELD_EQ(inName,"kongregateGetUserID") ) { return kongregateGetUserID_dyn(); }
		if (HX_FIELD_EQ(inName,"newgroundsShowScore") ) { return newgroundsShowScore_dyn(); }
		if (HX_FIELD_EQ(inName,"flipImageHorizontal") ) { return flipImageHorizontal_dyn(); }
		if (HX_FIELD_EQ(inName,"clearImageUsingMask") ) { return clearImageUsingMask_dyn(); }
		if (HX_FIELD_EQ(inName,"clearImagePartially") ) { return clearImagePartially_dyn(); }
		if (HX_FIELD_EQ(inName,"fadeOutForAllSounds") ) { return fadeOutForAllSounds_dyn(); }
		if (HX_FIELD_EQ(inName,"setVolumeForChannel") ) { return setVolumeForChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"pauseSoundOnChannel") ) { return pauseSoundOnChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"createRecycledActor") ) { return createRecycledActor_dyn(); }
		if (HX_FIELD_EQ(inName,"getLastCreatedActor") ) { return getLastCreatedActor_dyn(); }
		if (HX_FIELD_EQ(inName,"getCurrentSceneName") ) { return getCurrentSceneName_dyn(); }
		if (HX_FIELD_EQ(inName,"disableThisBehavior") ) { return disableThisBehavior_dyn(); }
		if (HX_FIELD_EQ(inName,"addKeyStateListener") ) { return addKeyStateListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addPurchaseListener") ) { return addPurchaseListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addMobileAdListener") ) { return addMobileAdListener_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createNegativeFilter") ) { return createNegativeFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"purchasesGetQuantity") ) { return purchasesGetQuantity_dyn(); }
		if (HX_FIELD_EQ(inName,"gameCenterShowBanner") ) { return gameCenterShowBanner_dyn(); }
		if (HX_FIELD_EQ(inName,"gameCenterInitialize") ) { return gameCenterInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"kongregateSubmitStat") ) { return kongregateSubmitStat_dyn(); }
		if (HX_FIELD_EQ(inName,"clearFiltersForImage") ) { return clearFiltersForImage_dyn(); }
		if (HX_FIELD_EQ(inName,"retainImageUsingMask") ) { return retainImageUsingMask_dyn(); }
		if (HX_FIELD_EQ(inName,"fadeInSoundOnChannel") ) { return fadeInSoundOnChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"resumeSoundOnChannel") ) { return resumeSoundOnChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"setBlendModeForLayer") ) { return setBlendModeForLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"createCircularRegion") ) { return createCircularRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"getLastCreatedRegion") ) { return getLastCreatedRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"addCollisionListener") ) { return addCollisionListener_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createGrayscaleFilter") ) { return createGrayscaleFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"gameCenterSubmitScore") ) { return gameCenterSubmitScore_dyn(); }
		if (HX_FIELD_EQ(inName,"gameCenterGetPlayerID") ) { return gameCenterGetPlayerID_dyn(); }
		if (HX_FIELD_EQ(inName,"kongregateGetUsername") ) { return kongregateGetUsername_dyn(); }
		if (HX_FIELD_EQ(inName,"newgroundsSubmitScore") ) { return newgroundsSubmitScore_dyn(); }
		if (HX_FIELD_EQ(inName,"newgroundsUnlockMedal") ) { return newgroundsUnlockMedal_dyn(); }
		if (HX_FIELD_EQ(inName,"setOffscreenTolerance") ) { return setOffscreenTolerance_dyn(); }
		if (HX_FIELD_EQ(inName,"getPositionForChannel") ) { return getPositionForChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"fadeOutSoundOnChannel") ) { return fadeOutSoundOnChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"setVolumeForAllSounds") ) { return setVolumeForAllSounds_dyn(); }
		if (HX_FIELD_EQ(inName,"createSlideTransition") ) { return createSlideTransition_dyn(); }
		if (HX_FIELD_EQ(inName,"addMouseMovedListener") ) { return addMouseMovedListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addWhenKilledListener") ) { return addWhenKilledListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addGameCenterListener") ) { return addGameCenterListener_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createBrightnessFilter") ) { return createBrightnessFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"createSaturationFilter") ) { return createSaturationFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"convertToPseudoUnicode") ) { return convertToPseudoUnicode_dyn(); }
		if (HX_FIELD_EQ(inName,"createActorInNextScene") ) { return createActorInNextScene_dyn(); }
		if (HX_FIELD_EQ(inName,"enableBehaviorForScene") ) { return enableBehaviorForScene_dyn(); }
		if (HX_FIELD_EQ(inName,"addFocusChangeListener") ) { return addFocusChangeListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addWhenDrawingListener") ) { return addWhenDrawingListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addWhenUpdatedListener") ) { return addWhenUpdatedListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addWhenCreatedListener") ) { return addWhenCreatedListener_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"purchasesGetDescription") ) { return purchasesGetDescription_dyn(); }
		if (HX_FIELD_EQ(inName,"purchasesAreInitialized") ) { return purchasesAreInitialized_dyn(); }
		if (HX_FIELD_EQ(inName,"gameCenterGetPlayerName") ) { return gameCenterGetPlayerName_dyn(); }
		if (HX_FIELD_EQ(inName,"createSlideUpTransition") ) { return createSlideUpTransition_dyn(); }
		if (HX_FIELD_EQ(inName,"disableBehaviorForScene") ) { return disableBehaviorForScene_dyn(); }
		if (HX_FIELD_EQ(inName,"addMouseDraggedListener") ) { return addMouseDraggedListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addMousePressedListener") ) { return addMousePressedListener_dyn(); }
		if (HX_FIELD_EQ(inName,"propertyChangeListeners") ) { return propertyChangeListeners; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lastCreatedTerrainRegion") ) { return lastCreatedTerrainRegion; }
		if (HX_FIELD_EQ(inName,"getSoundLengthForChannel") ) { return getSoundLengthForChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"addMouseReleasedListener") ) { return addMouseReleasedListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addAnyKeyPressedListener") ) { return addAnyKeyPressedListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addMultiTouchEndListener") ) { return addMultiTouchEndListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addActorPositionListener") ) { return addActorPositionListener_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"gameCenterShowLeaderboard") ) { return gameCenterShowLeaderboard_dyn(); }
		if (HX_FIELD_EQ(inName,"gameCenterIsAuthenticated") ) { return gameCenterIsAuthenticated_dyn(); }
		if (HX_FIELD_EQ(inName,"createCrossfadeTransition") ) { return createCrossfadeTransition_dyn(); }
		if (HX_FIELD_EQ(inName,"createSlideLeftTransition") ) { return createSlideLeftTransition_dyn(); }
		if (HX_FIELD_EQ(inName,"createSlideDownTransition") ) { return createSlideDownTransition_dyn(); }
		if (HX_FIELD_EQ(inName,"isBehaviorEnabledForScene") ) { return isBehaviorEnabledForScene_dyn(); }
		if (HX_FIELD_EQ(inName,"addSceneCollisionListener") ) { return addSceneCollisionListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addPropertyChangeListener") ) { return addPropertyChangeListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addMouseOverActorListener") ) { return addMouseOverActorListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addAnyKeyReleasedListener") ) { return addAnyKeyReleasedListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addMultiTouchMoveListener") ) { return addMultiTouchMoveListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addMobileKeyboardListener") ) { return addMobileKeyboardListener_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"gameCenterShowAchievements") ) { return gameCenterShowAchievements_dyn(); }
		if (HX_FIELD_EQ(inName,"newgroundsSetMedalPosition") ) { return newgroundsSetMedalPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"enableContinuousCollisions") ) { return enableContinuousCollisions_dyn(); }
		if (HX_FIELD_EQ(inName,"createSlideRightTransition") ) { return createSlideRightTransition_dyn(); }
		if (HX_FIELD_EQ(inName,"addMultiTouchStartListener") ) { return addMultiTouchStartListener_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"purchasesRequestProductInfo") ) { return purchasesRequestProductInfo_dyn(); }
		if (HX_FIELD_EQ(inName,"gameCenterResetAchievements") ) { return gameCenterResetAchievements_dyn(); }
		if (HX_FIELD_EQ(inName,"gameCenterSubmitAchievement") ) { return gameCenterSubmitAchievement_dyn(); }
		if (HX_FIELD_EQ(inName,"setScrollSpeedForBackground") ) { return setScrollSpeedForBackground_dyn(); }
		if (HX_FIELD_EQ(inName,"addActorExitsRegionListener") ) { return addActorExitsRegionListener_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"addActorEntersRegionListener") ) { return addActorEntersRegionListener_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"makeActorNotPassThroughTerrain") ) { return makeActorNotPassThroughTerrain_dyn(); }
		if (HX_FIELD_EQ(inName,"addWhenTypeGroupKilledListener") ) { return addWhenTypeGroupKilledListener_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"addWhenTypeGroupCreatedListener") ) { return addWhenTypeGroupCreatedListener_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"addActorTypeGroupPositionListener") ) { return addActorTypeGroupPositionListener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Script_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ma") ) { ma=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mpx") ) { mpx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mpy") ) { mpy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mrx") ) { mrx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mry") ) { mry=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"BACK") ) { BACK=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FRONT") ) { FRONT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scene") ) { scene=inValue.Cast< ::com::stencyl::Engine >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"MIDDLE") ) { MIDDLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"engine") ) { engine=inValue.Cast< ::com::stencyl::Engine >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nameMap") ) { nameMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrapper") ) { wrapper=inValue.Cast< ::com::stencyl::behavior::Behavior >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"CHANNELS") ) { CHANNELS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dummyVec") ) { dummyVec=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawData") ) { drawData=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dummyRect") ) { dummyRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dummyPoint") ) { dummyPoint=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scriptInit") ) { scriptInit=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"equalityPairs") ) { equalityPairs=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkProperties") ) { checkProperties=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lastCreatedActor") ) { lastCreatedActor=inValue.Cast< ::com::stencyl::models::Actor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastCreatedJoint") ) { lastCreatedJoint=inValue.Cast< ::box2D::dynamics::joints::B2Joint >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lastCreatedRegion") ) { lastCreatedRegion=inValue.Cast< ::com::stencyl::models::Region >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"propertyChangeListeners") ) { propertyChangeListeners=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lastCreatedTerrainRegion") ) { lastCreatedTerrainRegion=inValue.Cast< ::com::stencyl::models::Terrain >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Script_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("scriptInit"));
	outFields->push(HX_CSTRING("nameMap"));
	outFields->push(HX_CSTRING("checkProperties"));
	outFields->push(HX_CSTRING("equalityPairs"));
	outFields->push(HX_CSTRING("propertyChangeListeners"));
	outFields->push(HX_CSTRING("scene"));
	outFields->push(HX_CSTRING("engine"));
	outFields->push(HX_CSTRING("wrapper"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("FRONT"),
	HX_CSTRING("MIDDLE"),
	HX_CSTRING("BACK"),
	HX_CSTRING("CHANNELS"),
	HX_CSTRING("lastCreatedActor"),
	HX_CSTRING("lastCreatedJoint"),
	HX_CSTRING("lastCreatedRegion"),
	HX_CSTRING("lastCreatedTerrainRegion"),
	HX_CSTRING("mpx"),
	HX_CSTRING("mpy"),
	HX_CSTRING("mrx"),
	HX_CSTRING("mry"),
	HX_CSTRING("dummyVec"),
	HX_CSTRING("drawData"),
	HX_CSTRING("ma"),
	HX_CSTRING("strCompare"),
	HX_CSTRING("strCompareBefore"),
	HX_CSTRING("strCompareAfter"),
	HX_CSTRING("dummyRect"),
	HX_CSTRING("dummyPoint"),
	HX_CSTRING("BASE_64_ENCODINGS"),
	HX_CSTRING("BASE_64_PADDING"),
	HX_CSTRING("toBase64"),
	HX_CSTRING("fromBase64"),
	HX_CSTRING("abortTween"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("createBrightnessFilter"),
	HX_CSTRING("createSaturationFilter"),
	HX_CSTRING("createHueFilter"),
	HX_CSTRING("createTintFilter"),
	HX_CSTRING("createNegativeFilter"),
	HX_CSTRING("createSepiaFilter"),
	HX_CSTRING("createGrayscaleFilter"),
	HX_CSTRING("disableDebugDrawing"),
	HX_CSTRING("enableDebugDrawing"),
	HX_CSTRING("setIconBadgeNumber"),
	HX_CSTRING("setKeyboardText"),
	HX_CSTRING("hideKeyboard"),
	HX_CSTRING("showKeyboard"),
	HX_CSTRING("vibrate"),
	HX_CSTRING("showAlert"),
	HX_CSTRING("purchasesGetQuantity"),
	HX_CSTRING("purchasesUse"),
	HX_CSTRING("purchasesRequestProductInfo"),
	HX_CSTRING("purchasesGetPrice"),
	HX_CSTRING("purchasesGetDescription"),
	HX_CSTRING("purchasesGetTitle"),
	HX_CSTRING("purchasesHasBought"),
	HX_CSTRING("purchasesBuy"),
	HX_CSTRING("purchasesRestore"),
	HX_CSTRING("purchasesAreInitialized"),
	HX_CSTRING("gameCenterShowBanner"),
	HX_CSTRING("gameCenterResetAchievements"),
	HX_CSTRING("gameCenterSubmitAchievement"),
	HX_CSTRING("gameCenterSubmitScore"),
	HX_CSTRING("gameCenterShowAchievements"),
	HX_CSTRING("gameCenterShowLeaderboard"),
	HX_CSTRING("gameCenterGetPlayerID"),
	HX_CSTRING("gameCenterGetPlayerName"),
	HX_CSTRING("gameCenterIsAuthenticated"),
	HX_CSTRING("gameCenterInitialize"),
	HX_CSTRING("hideMobileAd"),
	HX_CSTRING("showMobileAd"),
	HX_CSTRING("atlasIsLoaded"),
	HX_CSTRING("unloadAtlas"),
	HX_CSTRING("loadAtlas"),
	HX_CSTRING("mochiSubmitScore"),
	HX_CSTRING("mochiShowScores"),
	HX_CSTRING("mochiShowAd"),
	HX_CSTRING("kongregateGetUserID"),
	HX_CSTRING("kongregateGetUsername"),
	HX_CSTRING("kongregateIsGuest"),
	HX_CSTRING("kongregateSubmitStat"),
	HX_CSTRING("kongregateInitAPI"),
	HX_CSTRING("newgroundsHelper"),
	HX_CSTRING("newgroundsShowScore"),
	HX_CSTRING("newgroundsSubmitScore"),
	HX_CSTRING("newgroundsUnlockMedal"),
	HX_CSTRING("newgroundsSetMedalPosition"),
	HX_CSTRING("newgroundsShowAd"),
	HX_CSTRING("simpleTweet"),
	HX_CSTRING("convertToPseudoUnicode"),
	HX_CSTRING("postToURL"),
	HX_CSTRING("visitURL"),
	HX_CSTRING("openURLInBrowser"),
	HX_CSTRING("defaultURLHandler"),
	HX_CSTRING("loadGame"),
	HX_CSTRING("saveGame"),
	HX_CSTRING("tweenNumber"),
	HX_CSTRING("randomInt"),
	HX_CSTRING("randomFloat"),
	HX_CSTRING("setTimeScale"),
	HX_CSTRING("isTransitioning"),
	HX_CSTRING("setOffscreenTolerance"),
	HX_CSTRING("getScreenHeight"),
	HX_CSTRING("getScreenWidth"),
	HX_CSTRING("unpauseAll"),
	HX_CSTRING("pauseAll"),
	HX_CSTRING("toggleFullScreen"),
	HX_CSTRING("unpause"),
	HX_CSTRING("pause"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getMiddleLayer"),
	HX_CSTRING("getBottomLayer"),
	HX_CSTRING("getTopLayer"),
	HX_CSTRING("stopShakingScreen"),
	HX_CSTRING("startShakingScreen"),
	HX_CSTRING("imageFromText"),
	HX_CSTRING("imageToText"),
	HX_CSTRING("clearFiltersForImage"),
	HX_CSTRING("setFilterForImage"),
	HX_CSTRING("moveImageBy"),
	HX_CSTRING("spinImageBy"),
	HX_CSTRING("moveImageTo"),
	HX_CSTRING("spinImageTo"),
	HX_CSTRING("growImageTo"),
	HX_CSTRING("fadeImageTo"),
	HX_CSTRING("setYForImage"),
	HX_CSTRING("setXForImage"),
	HX_CSTRING("flipImageVertical"),
	HX_CSTRING("flipImageHorizontal"),
	HX_CSTRING("imageSwapColor"),
	HX_CSTRING("imageGetPixel"),
	HX_CSTRING("imageSetPixel"),
	HX_CSTRING("filterImage"),
	HX_CSTRING("fillImage"),
	HX_CSTRING("retainImageUsingMask"),
	HX_CSTRING("clearImageUsingMask"),
	HX_CSTRING("clearImage"),
	HX_CSTRING("clearImagePartially"),
	HX_CSTRING("drawTextOnImage"),
	HX_CSTRING("drawImageOnImage"),
	HX_CSTRING("resizeImage"),
	HX_CSTRING("removeImage"),
	HX_CSTRING("attachImageToLayer"),
	HX_CSTRING("attachImageToHUD"),
	HX_CSTRING("attachImageToActor"),
	HX_CSTRING("bringImagetoFront"),
	HX_CSTRING("bringImageToBack"),
	HX_CSTRING("bringImageForward"),
	HX_CSTRING("bringImageBack"),
	HX_CSTRING("setOrderForImage"),
	HX_CSTRING("getSubImage"),
	HX_CSTRING("loadImageFromURL"),
	HX_CSTRING("getExternalImage"),
	HX_CSTRING("getImageForActor"),
	HX_CSTRING("captureScreenshot"),
	HX_CSTRING("setBackground"),
	HX_CSTRING("setScrollSpeedForBackground"),
	HX_CSTRING("getSoundLength"),
	HX_CSTRING("getSoundLengthForChannel"),
	HX_CSTRING("getPositionForChannel"),
	HX_CSTRING("fadeOutForAllSounds"),
	HX_CSTRING("fadeInForAllSounds"),
	HX_CSTRING("fadeOutSoundOnChannel"),
	HX_CSTRING("fadeInSoundOnChannel"),
	HX_CSTRING("setVolumeForAllSounds"),
	HX_CSTRING("stopAllSounds"),
	HX_CSTRING("setVolumeForChannel"),
	HX_CSTRING("resumeSoundOnChannel"),
	HX_CSTRING("pauseSoundOnChannel"),
	HX_CSTRING("stopSoundOnChannel"),
	HX_CSTRING("loopSoundOnChannel"),
	HX_CSTRING("playSoundOnChannel"),
	HX_CSTRING("loopSound"),
	HX_CSTRING("playSound"),
	HX_CSTRING("getSoundByName"),
	HX_CSTRING("getSound"),
	HX_CSTRING("unmute"),
	HX_CSTRING("mute"),
	HX_CSTRING("makeActorNotPassThroughTerrain"),
	HX_CSTRING("toPixelUnits"),
	HX_CSTRING("toPhysicalUnits"),
	HX_CSTRING("enableContinuousCollisions"),
	HX_CSTRING("getGravity"),
	HX_CSTRING("setGravity"),
	HX_CSTRING("getActorGroup"),
	HX_CSTRING("getActor"),
	HX_CSTRING("getActorsOfType"),
	HX_CSTRING("getAllActorTypes"),
	HX_CSTRING("getActorType"),
	HX_CSTRING("getActorTypeByName"),
	HX_CSTRING("createActorInNextScene"),
	HX_CSTRING("recycleActor"),
	HX_CSTRING("createRecycledActor"),
	HX_CSTRING("createActor"),
	HX_CSTRING("getLastCreatedActor"),
	HX_CSTRING("hideCursor"),
	HX_CSTRING("showCursor"),
	HX_CSTRING("getMouseReleasedY"),
	HX_CSTRING("getMouseReleasedX"),
	HX_CSTRING("getMousePressedY"),
	HX_CSTRING("getMousePressedX"),
	HX_CSTRING("getMouseWorldY"),
	HX_CSTRING("getMouseWorldX"),
	HX_CSTRING("getMouseY"),
	HX_CSTRING("getMouseX"),
	HX_CSTRING("isMouseReleased"),
	HX_CSTRING("isMousePressed"),
	HX_CSTRING("isMouseDown"),
	HX_CSTRING("isKeyReleased"),
	HX_CSTRING("isKeyPressed"),
	HX_CSTRING("isKeyDown"),
	HX_CSTRING("simulateKeyRelease"),
	HX_CSTRING("simulateKeyPress"),
	HX_CSTRING("isShiftDown"),
	HX_CSTRING("isCtrlDown"),
	HX_CSTRING("getCamera"),
	HX_CSTRING("getScreenYCenter"),
	HX_CSTRING("getScreenXCenter"),
	HX_CSTRING("getScreenY"),
	HX_CSTRING("getScreenX"),
	HX_CSTRING("fadeTileLayerTo"),
	HX_CSTRING("hideTileLayer"),
	HX_CSTRING("showTileLayer"),
	HX_CSTRING("setBlendModeForLayer"),
	HX_CSTRING("getLayer"),
	HX_CSTRING("createCircleIn"),
	HX_CSTRING("createCircleOut"),
	HX_CSTRING("createFadeIn"),
	HX_CSTRING("createFadeOut"),
	HX_CSTRING("createCrossfadeTransition"),
	HX_CSTRING("createSlideRightTransition"),
	HX_CSTRING("createSlideLeftTransition"),
	HX_CSTRING("createSlideDownTransition"),
	HX_CSTRING("createSlideUpTransition"),
	HX_CSTRING("createSlideTransition"),
	HX_CSTRING("createRectangleIn"),
	HX_CSTRING("createRectangleOut"),
	HX_CSTRING("createBlindsIn"),
	HX_CSTRING("createBlindsOut"),
	HX_CSTRING("createBubblesIn"),
	HX_CSTRING("createBubblesOut"),
	HX_CSTRING("createPixelizeIn"),
	HX_CSTRING("createPixelizeOut"),
	HX_CSTRING("switchScene"),
	HX_CSTRING("reloadCurrentScene"),
	HX_CSTRING("getTileHeight"),
	HX_CSTRING("getTileWidth"),
	HX_CSTRING("getSceneHeight"),
	HX_CSTRING("getSceneWidth"),
	HX_CSTRING("getCurrentSceneName"),
	HX_CSTRING("getIDForScene"),
	HX_CSTRING("getCurrentScene"),
	HX_CSTRING("getScene"),
	HX_CSTRING("getStepSize"),
	HX_CSTRING("runPeriodically"),
	HX_CSTRING("runLater"),
	HX_CSTRING("getGameAttribute"),
	HX_CSTRING("setGameAttribute"),
	HX_CSTRING("sayToScene"),
	HX_CSTRING("shoutToScene"),
	HX_CSTRING("setValueForScene"),
	HX_CSTRING("getValueForScene"),
	HX_CSTRING("disableThisBehavior"),
	HX_CSTRING("isBehaviorEnabledForScene"),
	HX_CSTRING("disableBehaviorForScene"),
	HX_CSTRING("enableBehaviorForScene"),
	HX_CSTRING("sceneHasBehavior"),
	HX_CSTRING("getActorsInRegion"),
	HX_CSTRING("isInRegion"),
	HX_CSTRING("createCircularRegion"),
	HX_CSTRING("createBoxRegion"),
	HX_CSTRING("removeRegion"),
	HX_CSTRING("getRegion"),
	HX_CSTRING("getAllRegions"),
	HX_CSTRING("getLastCreatedRegion"),
	HX_CSTRING("addPauseListener"),
	HX_CSTRING("addFocusChangeListener"),
	HX_CSTRING("addSoundListener"),
	HX_CSTRING("addWhenTypeGroupKilledListener"),
	HX_CSTRING("addWhenTypeGroupCreatedListener"),
	HX_CSTRING("addSceneCollisionListener"),
	HX_CSTRING("addCollisionListener"),
	HX_CSTRING("propertyChanged"),
	HX_CSTRING("addPropertyChangeListener"),
	HX_CSTRING("addMouseOverActorListener"),
	HX_CSTRING("addMouseDraggedListener"),
	HX_CSTRING("addMouseMovedListener"),
	HX_CSTRING("addMouseReleasedListener"),
	HX_CSTRING("addMousePressedListener"),
	HX_CSTRING("addAnyKeyReleasedListener"),
	HX_CSTRING("addAnyKeyPressedListener"),
	HX_CSTRING("addKeyStateListener"),
	HX_CSTRING("addMultiTouchEndListener"),
	HX_CSTRING("addMultiTouchMoveListener"),
	HX_CSTRING("addMultiTouchStartListener"),
	HX_CSTRING("addSwipeListener"),
	HX_CSTRING("addActorTypeGroupPositionListener"),
	HX_CSTRING("addActorPositionListener"),
	HX_CSTRING("addActorExitsRegionListener"),
	HX_CSTRING("addActorEntersRegionListener"),
	HX_CSTRING("addWhenDrawingListener"),
	HX_CSTRING("addWhenUpdatedListener"),
	HX_CSTRING("addWhenKilledListener"),
	HX_CSTRING("addWhenCreatedListener"),
	HX_CSTRING("addPurchaseListener"),
	HX_CSTRING("addGameCenterListener"),
	HX_CSTRING("addMobileAdListener"),
	HX_CSTRING("addMobileKeyboardListener"),
	HX_CSTRING("init"),
	HX_CSTRING("getGroupByName"),
	HX_CSTRING("internalGetGroup"),
	HX_CSTRING("clearListeners"),
	HX_CSTRING("forwardMessage"),
	HX_CSTRING("toInternalName"),
	HX_CSTRING("getDefaultValue"),
	HX_CSTRING("isPrimitive"),
	HX_CSTRING("hasValue"),
	HX_CSTRING("asNumber"),
	HX_CSTRING("asBoolean"),
	HX_CSTRING("sameAsAny"),
	HX_CSTRING("sameAs"),
	HX_CSTRING("scriptInit"),
	HX_CSTRING("nameMap"),
	HX_CSTRING("checkProperties"),
	HX_CSTRING("equalityPairs"),
	HX_CSTRING("propertyChangeListeners"),
	HX_CSTRING("scene"),
	HX_CSTRING("engine"),
	HX_CSTRING("wrapper"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Script_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Script_obj::FRONT,"FRONT");
	HX_MARK_MEMBER_NAME(Script_obj::MIDDLE,"MIDDLE");
	HX_MARK_MEMBER_NAME(Script_obj::BACK,"BACK");
	HX_MARK_MEMBER_NAME(Script_obj::CHANNELS,"CHANNELS");
	HX_MARK_MEMBER_NAME(Script_obj::lastCreatedActor,"lastCreatedActor");
	HX_MARK_MEMBER_NAME(Script_obj::lastCreatedJoint,"lastCreatedJoint");
	HX_MARK_MEMBER_NAME(Script_obj::lastCreatedRegion,"lastCreatedRegion");
	HX_MARK_MEMBER_NAME(Script_obj::lastCreatedTerrainRegion,"lastCreatedTerrainRegion");
	HX_MARK_MEMBER_NAME(Script_obj::mpx,"mpx");
	HX_MARK_MEMBER_NAME(Script_obj::mpy,"mpy");
	HX_MARK_MEMBER_NAME(Script_obj::mrx,"mrx");
	HX_MARK_MEMBER_NAME(Script_obj::mry,"mry");
	HX_MARK_MEMBER_NAME(Script_obj::dummyVec,"dummyVec");
	HX_MARK_MEMBER_NAME(Script_obj::drawData,"drawData");
	HX_MARK_MEMBER_NAME(Script_obj::ma,"ma");
	HX_MARK_MEMBER_NAME(Script_obj::dummyRect,"dummyRect");
	HX_MARK_MEMBER_NAME(Script_obj::dummyPoint,"dummyPoint");
	HX_MARK_MEMBER_NAME(Script_obj::BASE_64_ENCODINGS,"BASE_64_ENCODINGS");
	HX_MARK_MEMBER_NAME(Script_obj::BASE_64_PADDING,"BASE_64_PADDING");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Script_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Script_obj::FRONT,"FRONT");
	HX_VISIT_MEMBER_NAME(Script_obj::MIDDLE,"MIDDLE");
	HX_VISIT_MEMBER_NAME(Script_obj::BACK,"BACK");
	HX_VISIT_MEMBER_NAME(Script_obj::CHANNELS,"CHANNELS");
	HX_VISIT_MEMBER_NAME(Script_obj::lastCreatedActor,"lastCreatedActor");
	HX_VISIT_MEMBER_NAME(Script_obj::lastCreatedJoint,"lastCreatedJoint");
	HX_VISIT_MEMBER_NAME(Script_obj::lastCreatedRegion,"lastCreatedRegion");
	HX_VISIT_MEMBER_NAME(Script_obj::lastCreatedTerrainRegion,"lastCreatedTerrainRegion");
	HX_VISIT_MEMBER_NAME(Script_obj::mpx,"mpx");
	HX_VISIT_MEMBER_NAME(Script_obj::mpy,"mpy");
	HX_VISIT_MEMBER_NAME(Script_obj::mrx,"mrx");
	HX_VISIT_MEMBER_NAME(Script_obj::mry,"mry");
	HX_VISIT_MEMBER_NAME(Script_obj::dummyVec,"dummyVec");
	HX_VISIT_MEMBER_NAME(Script_obj::drawData,"drawData");
	HX_VISIT_MEMBER_NAME(Script_obj::ma,"ma");
	HX_VISIT_MEMBER_NAME(Script_obj::dummyRect,"dummyRect");
	HX_VISIT_MEMBER_NAME(Script_obj::dummyPoint,"dummyPoint");
	HX_VISIT_MEMBER_NAME(Script_obj::BASE_64_ENCODINGS,"BASE_64_ENCODINGS");
	HX_VISIT_MEMBER_NAME(Script_obj::BASE_64_PADDING,"BASE_64_PADDING");
};

Class Script_obj::__mClass;

void Script_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.behavior.Script"), hx::TCanCast< Script_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Script_obj::__boot()
{
	FRONT= (int)0;
	MIDDLE= (int)1;
	BACK= (int)2;
	CHANNELS= (int)32;
	lastCreatedActor= null();
	lastCreatedJoint= null();
	lastCreatedRegion= null();
	lastCreatedTerrainRegion= null();
	mpx= (int)0;
	mpy= (int)0;
	mrx= (int)0;
	mry= (int)0;
	dummyVec= ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	drawData= Array_obj< Float >::__new();
	ma= ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	dummyRect= ::flash::geom::Rectangle_obj::__new((int)0,(int)0,(int)1,(int)1);
	dummyPoint= ::flash::geom::Point_obj::__new((int)0,(int)0);
	BASE_64_ENCODINGS= HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
	BASE_64_PADDING= HX_CSTRING("=");
}

} // end namespace com
} // end namespace stencyl
} // end namespace behavior
