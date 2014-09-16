#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_JoystickController
#include <JoystickController.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Purchases
#include <Purchases.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_box2D_collision_B2AABB
#include <box2D/collision/B2AABB.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2CircleShape
#include <box2D/collision/shapes/B2CircleShape.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2PolygonShape
#include <box2D/collision/shapes/B2PolygonShape.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2Shape
#include <box2D/collision/shapes/B2Shape.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2Body
#include <box2D/dynamics/B2Body.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2BodyDef
#include <box2D/dynamics/B2BodyDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2ContactListener
#include <box2D/dynamics/B2ContactListener.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2ContactManager
#include <box2D/dynamics/B2ContactManager.h>
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
#ifndef INCLUDED_box2D_dynamics_contacts_B2Contact
#include <box2D/dynamics/contacts/B2Contact.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2ContactEdge
#include <box2D/dynamics/contacts/B2ContactEdge.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2DistanceJoint
#include <box2D/dynamics/joints/B2DistanceJoint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2DistanceJointDef
#include <box2D/dynamics/joints/B2DistanceJointDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2Joint
#include <box2D/dynamics/joints/B2Joint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2JointDef
#include <box2D/dynamics/joints/B2JointDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2LineJoint
#include <box2D/dynamics/joints/B2LineJoint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2LineJointDef
#include <box2D/dynamics/joints/B2LineJointDef.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2RevoluteJoint
#include <box2D/dynamics/joints/B2RevoluteJoint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_joints_B2RevoluteJointDef
#include <box2D/dynamics/joints/B2RevoluteJointDef.h>
#endif
#ifndef INCLUDED_com_nmefermmmtools_debug_Stats
#include <com/nmefermmmtools/debug/Stats.h>
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
#ifndef INCLUDED_com_stencyl_behavior_Attribute
#include <com/stencyl/behavior/Attribute.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Behavior
#include <com/stencyl/behavior/Behavior.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_BehaviorInstance
#include <com/stencyl/behavior/BehaviorInstance.h>
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
#ifndef INCLUDED_com_stencyl_graphics_shaders_PostProcess
#include <com/stencyl/graphics/shaders/PostProcess.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_FadeInTransition
#include <com/stencyl/graphics/transitions/FadeInTransition.h>
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
#ifndef INCLUDED_com_stencyl_models_Background
#include <com/stencyl/models/Background.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Font
#include <com/stencyl/models/Font.h>
#endif
#ifndef INCLUDED_com_stencyl_models_GameModel
#include <com/stencyl/models/GameModel.h>
#endif
#ifndef INCLUDED_com_stencyl_models_GroupDef
#include <com/stencyl/models/GroupDef.h>
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
#ifndef INCLUDED_com_stencyl_models_actor_Animation
#include <com/stencyl/models/actor/Animation.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Collision
#include <com/stencyl/models/actor/Collision.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Group
#include <com/stencyl/models/actor/Group.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Sprite
#include <com/stencyl/models/actor/Sprite.h>
#endif
#ifndef INCLUDED_com_stencyl_models_background_ImageBackground
#include <com/stencyl/models/background/ImageBackground.h>
#endif
#ifndef INCLUDED_com_stencyl_models_background_ScrollingBackground
#include <com/stencyl/models/background/ScrollingBackground.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_ActorInstance
#include <com/stencyl/models/scene/ActorInstance.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_DeferredActor
#include <com/stencyl/models/scene/DeferredActor.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_Layer
#include <com/stencyl/models/scene/Layer.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_RegionDef
#include <com/stencyl/models/scene/RegionDef.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_ScrollingBitmap
#include <com/stencyl/models/scene/ScrollingBitmap.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_TerrainDef
#include <com/stencyl/models/scene/TerrainDef.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_Tile
#include <com/stencyl/models/scene/Tile.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_TileLayer
#include <com/stencyl/models/scene/TileLayer.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_Wireframe
#include <com/stencyl/models/scene/Wireframe.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_layers_BackgroundLayer
#include <com/stencyl/models/scene/layers/BackgroundLayer.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_layers_RegularLayer
#include <com/stencyl/models/scene/layers/RegularLayer.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_Utils
#include <com/stencyl/utils/Utils.h>
#endif
#ifndef INCLUDED_cpp_vm_Gc
#include <cpp/vm/Gc.h>
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
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Shape
#include <flash/display/Shape.h>
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
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_media_SoundChannel
#include <flash/media/SoundChannel.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif
#ifndef INCLUDED_openfl_display_DirectRenderer
#include <openfl/display/DirectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLView
#include <openfl/display/OpenGLView.h>
#endif
#ifndef INCLUDED_openfl_gl_GLFramebuffer
#include <openfl/gl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_openfl_gl_GLObject
#include <openfl/gl/GLObject.h>
#endif
#ifndef INCLUDED_scripts_MyAssets
#include <scripts/MyAssets.h>
#endif
namespace com{
namespace stencyl{

Void Engine_obj::__construct(::flash::display::Sprite root)
{
HX_STACK_PUSH("Engine::new","com/stencyl/Engine.hx",106);
{
	HX_STACK_LINE(389)
	this->isFullScreen = false;
	HX_STACK_LINE(473)
	this->shaderLayer = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(478)
	root->set_mouseChildren(false);
	HX_STACK_LINE(479)
	root->set_mouseEnabled(false);
	HX_STACK_LINE(482)
	if ((::scripts::MyAssets_obj::debugDraw)){
		HX_STACK_LINE(483)
		::com::stencyl::Engine_obj::DEBUG_DRAW = true;
	}
	HX_STACK_LINE(487)
	::com::stencyl::Engine_obj::engine = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(488)
	this->root = root;
	HX_STACK_LINE(490)
	::com::stencyl::Engine_obj::screenScaleX = root->get_scaleX();
	HX_STACK_LINE(491)
	::com::stencyl::Engine_obj::screenScaleY = root->get_scaleY();
	HX_STACK_LINE(492)
	::com::stencyl::Engine_obj::screenOffsetX = ::Std_obj::_int(root->get_x());
	HX_STACK_LINE(493)
	::com::stencyl::Engine_obj::screenOffsetY = ::Std_obj::_int(root->get_y());
	HX_STACK_LINE(495)
	::com::stencyl::Engine_obj::NO_PHYSICS = (::scripts::MyAssets_obj::physicsMode == (int)1);
	HX_STACK_LINE(497)
	::com::stencyl::Engine_obj::stage->addEventListener(::flash::events::Event_obj::ENTER_FRAME,this->onUpdate_dyn(),null(),null(),null());
	HX_STACK_LINE(498)
	::com::stencyl::Engine_obj::stage->addEventListener(::flash::events::Event_obj::DEACTIVATE,this->onFocusLost_dyn(),null(),null(),null());
	HX_STACK_LINE(499)
	::com::stencyl::Engine_obj::stage->addEventListener(::flash::events::Event_obj::ACTIVATE,this->onFocus_dyn(),null(),null(),null());
	HX_STACK_LINE(500)
	this->begin(::scripts::MyAssets_obj::initSceneID);
	HX_STACK_LINE(504)
	root->addChild(this->shaderLayer);
}
;
	return null();
}

Engine_obj::~Engine_obj() { }

Dynamic Engine_obj::__CreateEmpty() { return  new Engine_obj; }
hx::ObjectPtr< Engine_obj > Engine_obj::__new(::flash::display::Sprite root)
{  hx::ObjectPtr< Engine_obj > result = new Engine_obj();
	result->__construct(root);
	return result;}

Dynamic Engine_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Engine_obj > result = new Engine_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Engine_obj::setScrollFactor( int layerID,Float amount){
{
		HX_STACK_PUSH("Engine::setScrollFactor","com/stencyl/Engine.hx",3979);
		HX_STACK_THIS(this);
		HX_STACK_ARG(layerID,"layerID");
		HX_STACK_ARG(amount,"amount");
		HX_STACK_LINE(3979)
		this->scrollFactors->set(layerID,amount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,setScrollFactor,(void))

Void Engine_obj::setOffscreenTolerance( int top,int left,int bottom,int right){
{
		HX_STACK_PUSH("Engine::setOffscreenTolerance","com/stencyl/Engine.hx",3967);
		HX_STACK_THIS(this);
		HX_STACK_ARG(top,"top");
		HX_STACK_ARG(left,"left");
		HX_STACK_ARG(bottom,"bottom");
		HX_STACK_ARG(right,"right");
		HX_STACK_LINE(3968)
		::com::stencyl::Engine_obj::paddingTop = top;
		HX_STACK_LINE(3969)
		::com::stencyl::Engine_obj::paddingLeft = left;
		HX_STACK_LINE(3970)
		::com::stencyl::Engine_obj::paddingBottom = bottom;
		HX_STACK_LINE(3971)
		::com::stencyl::Engine_obj::paddingRight = right;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,setOffscreenTolerance,(void))

Dynamic Engine_obj::getGameAttribute( ::String name){
	HX_STACK_PUSH("Engine::getGameAttribute","com/stencyl/Engine.hx",3958);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(3958)
	return this->gameAttributes->get(name);
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getGameAttribute,return )

Void Engine_obj::setGameAttribute( ::String name,Dynamic value){
{
		HX_STACK_PUSH("Engine::setGameAttribute","com/stencyl/Engine.hx",3953);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(3954)
		Dynamic value1 = value;		HX_STACK_VAR(value1,"value1");
		HX_STACK_LINE(3954)
		this->gameAttributes->set(name,value1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,setGameAttribute,(void))

int Engine_obj::nextTerrainRegionID( ){
	HX_STACK_PUSH("Engine::nextTerrainRegionID","com/stencyl/Engine.hx",3936);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3937)
	int ID = (int)-1;		HX_STACK_VAR(ID,"ID");
	struct _Function_1_1{
		inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3939);
			{
				HX_STACK_LINE(3939)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->terrainRegions);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",3939);
					{
						HX_STACK_LINE(3939)
						return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(3939)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(3939)
	for(::cpp::FastIterator_obj< ::com::stencyl::models::Terrain > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Terrain >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		::com::stencyl::models::Terrain r = __it->next();
		{
			HX_STACK_LINE(3941)
			if (((r == null()))){
				HX_STACK_LINE(3941)
				continue;
			}
			HX_STACK_LINE(3942)
			ID = ::Std_obj::_int(::Math_obj::max(ID,r->ID));
		}
;
	}
	HX_STACK_LINE(3945)
	return (ID + (int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,nextTerrainRegionID,return )

::haxe::ds::IntMap Engine_obj::getTerrainRegions( ){
	HX_STACK_PUSH("Engine::getTerrainRegions","com/stencyl/Engine.hx",3931);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3931)
	return this->terrainRegions;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getTerrainRegions,return )

::com::stencyl::models::Terrain Engine_obj::getTerrainRegion( int ID){
	HX_STACK_PUSH("Engine::getTerrainRegion","com/stencyl/Engine.hx",3926);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ID,"ID");
	HX_STACK_LINE(3926)
	return this->terrainRegions->get(ID);
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getTerrainRegion,return )

Void Engine_obj::removeTerrainRegion( int ID){
{
		HX_STACK_PUSH("Engine::removeTerrainRegion","com/stencyl/Engine.hx",3919);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ID,"ID");
		HX_STACK_LINE(3920)
		::com::stencyl::models::Terrain t = this->getTerrainRegion(ID);		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(3921)
		this->terrainRegions->remove(ID);
		HX_STACK_LINE(3922)
		t->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,removeTerrainRegion,(void))

Void Engine_obj::addTerrainRegion( ::com::stencyl::models::Terrain r){
{
		HX_STACK_PUSH("Engine::addTerrainRegion","com/stencyl/Engine.hx",3912);
		HX_STACK_THIS(this);
		HX_STACK_ARG(r,"r");
		HX_STACK_LINE(3913)
		int nextID = this->nextTerrainRegionID();		HX_STACK_VAR(nextID,"nextID");
		HX_STACK_LINE(3914)
		r->ID = nextID;
		HX_STACK_LINE(3915)
		this->terrainRegions->set(nextID,r);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,addTerrainRegion,(void))

::com::stencyl::models::Terrain Engine_obj::createCircularTerrainRegion( Float x,Float y,Float r,hx::Null< int >  __o_groupID){
int groupID = __o_groupID.Default(1);
	HX_STACK_PUSH("Engine::createCircularTerrainRegion","com/stencyl/Engine.hx",3900);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(r,"r");
	HX_STACK_ARG(groupID,"groupID");
{
		HX_STACK_LINE(3901)
		x = ::com::stencyl::Engine_obj::toPhysicalUnits(x);
		HX_STACK_LINE(3902)
		y = ::com::stencyl::Engine_obj::toPhysicalUnits(y);
		HX_STACK_LINE(3903)
		r = ::com::stencyl::Engine_obj::toPhysicalUnits(r);
		HX_STACK_LINE(3905)
		::box2D::collision::shapes::B2CircleShape cShape = ::box2D::collision::shapes::B2CircleShape_obj::__new(null());		HX_STACK_VAR(cShape,"cShape");
		HX_STACK_LINE(3906)
		cShape->m_radius = r;
		HX_STACK_LINE(3908)
		return this->createTerrainRegion(x,y,cShape,true,groupID);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,createCircularTerrainRegion,return )

::com::stencyl::models::Terrain Engine_obj::createBoxTerrainRegion( Float x,Float y,Float w,Float h,hx::Null< int >  __o_groupID){
int groupID = __o_groupID.Default(1);
	HX_STACK_PUSH("Engine::createBoxTerrainRegion","com/stencyl/Engine.hx",3887);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(w,"w");
	HX_STACK_ARG(h,"h");
	HX_STACK_ARG(groupID,"groupID");
{
		HX_STACK_LINE(3888)
		x = ::com::stencyl::Engine_obj::toPhysicalUnits(x);
		HX_STACK_LINE(3889)
		y = ::com::stencyl::Engine_obj::toPhysicalUnits(y);
		HX_STACK_LINE(3890)
		w = ::com::stencyl::Engine_obj::toPhysicalUnits(w);
		HX_STACK_LINE(3891)
		h = ::com::stencyl::Engine_obj::toPhysicalUnits(h);
		HX_STACK_LINE(3893)
		::box2D::collision::shapes::B2PolygonShape p = ::box2D::collision::shapes::B2PolygonShape_obj::__new();		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(3894)
		p->setAsBox((Float(w) / Float((int)2)),(Float(h) / Float((int)2)));
		HX_STACK_LINE(3896)
		return this->createTerrainRegion(x,y,p,true,groupID);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Engine_obj,createBoxTerrainRegion,return )

::com::stencyl::models::Terrain Engine_obj::createTerrainRegion( Float x,Float y,::box2D::collision::shapes::B2Shape shape,hx::Null< bool >  __o_offset,hx::Null< int >  __o_groupID){
bool offset = __o_offset.Default(false);
int groupID = __o_groupID.Default(1);
	HX_STACK_PUSH("Engine::createTerrainRegion","com/stencyl/Engine.hx",3871);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(shape,"shape");
	HX_STACK_ARG(offset,"offset");
	HX_STACK_ARG(groupID,"groupID");
{
		HX_STACK_LINE(3872)
		Array< ::Dynamic > shapeList = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(shapeList,"shapeList");
		HX_STACK_LINE(3873)
		shapeList->push(shape);
		HX_STACK_LINE(3874)
		::com::stencyl::models::Terrain region = ::com::stencyl::models::Terrain_obj::__new(hx::ObjectPtr<OBJ_>(this),x,y,shapeList,groupID,null());		HX_STACK_VAR(region,"region");
		HX_STACK_LINE(3876)
		if ((offset)){
			HX_STACK_LINE(3878)
			region->setX((::com::stencyl::Engine_obj::toPixelUnits(x) + (Float(region->regionWidth) / Float((int)2))),null(),null());
			HX_STACK_LINE(3879)
			region->setY((::com::stencyl::Engine_obj::toPixelUnits(y) + (Float(region->regionHeight) / Float((int)2))),null(),null());
		}
		HX_STACK_LINE(3882)
		this->addTerrainRegion(region);
		HX_STACK_LINE(3883)
		return region;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Engine_obj,createTerrainRegion,return )

bool Engine_obj::isInRegion( ::com::stencyl::models::Actor a,::com::stencyl::models::Region r){
	HX_STACK_PUSH("Engine::isInRegion","com/stencyl/Engine.hx",3853);
	HX_STACK_THIS(this);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(r,"r");
	struct _Function_1_1{
		inline static ::com::stencyl::models::Region Block( ::com::stencyl::Engine_obj *__this,::com::stencyl::models::Region &r){
			HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3854);
			{
				HX_STACK_LINE(3854)
				::de::polygonal::ds::IntHashTable _this = __this->regions;		HX_STACK_VAR(_this,"_this");
				int key = r->getID();		HX_STACK_VAR(key,"key");
				struct _Function_2_1{
					inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
						HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3854);
						{
							HX_STACK_LINE(3854)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(3854)
							int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
							struct _Function_3_1{
								inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3854);
									{
										HX_STACK_LINE(3854)
										int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(3854)
										i = _this1->_data->__get((i + (int)2));
										HX_STACK_LINE(3854)
										while(((i != (int)-1))){
											HX_STACK_LINE(3854)
											if (((_this1->_data->__get(i) == key))){
												HX_STACK_LINE(3854)
												v = _this1->_data->__get((i + (int)1));
												HX_STACK_LINE(3854)
												break;
											}
											HX_STACK_LINE(3854)
											i = _this1->_data->__get((i + (int)2));
										}
										HX_STACK_LINE(3854)
										return v;
									}
									return null();
								}
							};
							HX_STACK_LINE(3854)
							return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,key)) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(3854)
				int i = _Function_2_1::Block(_this,key);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(3854)
				return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::Region(null()) : ::com::stencyl::models::Region(_this->_vals->__GetItem(i)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(3853)
	if (((bool((r != null())) && bool((_Function_1_1::Block(this,r) != null()))))){
		HX_STACK_LINE(3855)
		return r->containsActor(a);
	}
	else{
		HX_STACK_LINE(3861)
		::haxe::Log_obj::trace(HX_CSTRING("Region does not exist."),hx::SourceInfo(HX_CSTRING("Engine.hx"),3861,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("isInRegion")));
		HX_STACK_LINE(3862)
		return false;
	}
	HX_STACK_LINE(3853)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,isInRegion,return )

int Engine_obj::nextRegionID( ){
	HX_STACK_PUSH("Engine::nextRegionID","com/stencyl/Engine.hx",3836);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3837)
	int ID = (int)-1;		HX_STACK_VAR(ID,"ID");
	HX_STACK_LINE(3839)
	for(::cpp::FastIterator_obj< ::com::stencyl::models::Region > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Region >(this->regions->iterator());  __it->hasNext(); ){
		::com::stencyl::models::Region r = __it->next();
		{
			HX_STACK_LINE(3841)
			if (((r == null()))){
				HX_STACK_LINE(3842)
				continue;
			}
			HX_STACK_LINE(3846)
			ID = ::Std_obj::_int(::Math_obj::max(ID,r->ID));
		}
;
	}
	HX_STACK_LINE(3849)
	return (ID + (int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,nextRegionID,return )

::de::polygonal::ds::IntHashTable Engine_obj::getRegions( ){
	HX_STACK_PUSH("Engine::getRegions","com/stencyl/Engine.hx",3831);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3831)
	return this->regions;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getRegions,return )

::com::stencyl::models::Region Engine_obj::getRegion( int ID){
	HX_STACK_PUSH("Engine::getRegion","com/stencyl/Engine.hx",3826);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ID,"ID");
	struct _Function_1_1{
		inline static ::com::stencyl::models::Region Block( ::com::stencyl::Engine_obj *__this,int &ID){
			HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3827);
			{
				HX_STACK_LINE(3827)
				::de::polygonal::ds::IntHashTable _this = __this->regions;		HX_STACK_VAR(_this,"_this");
				struct _Function_2_1{
					inline static int Block( int &ID,::de::polygonal::ds::IntHashTable _this){
						HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3827);
						{
							HX_STACK_LINE(3827)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(3827)
							int i = _this1->_hash->__get((int((ID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
							struct _Function_3_1{
								inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &ID){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3827);
									{
										HX_STACK_LINE(3827)
										int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(3827)
										i = _this1->_data->__get((i + (int)2));
										HX_STACK_LINE(3827)
										while(((i != (int)-1))){
											HX_STACK_LINE(3827)
											if (((_this1->_data->__get(i) == ID))){
												HX_STACK_LINE(3827)
												v = _this1->_data->__get((i + (int)1));
												HX_STACK_LINE(3827)
												break;
											}
											HX_STACK_LINE(3827)
											i = _this1->_data->__get((i + (int)2));
										}
										HX_STACK_LINE(3827)
										return v;
									}
									return null();
								}
							};
							HX_STACK_LINE(3827)
							return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == ID))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,ID)) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(3827)
				int i = _Function_2_1::Block(ID,_this);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(3827)
				return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::Region(null()) : ::com::stencyl::models::Region(_this->_vals->__GetItem(i)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(3826)
	return _Function_1_1::Block(this,ID);
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getRegion,return )

Void Engine_obj::removeRegion( int ID){
{
		HX_STACK_PUSH("Engine::removeRegion","com/stencyl/Engine.hx",3814);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ID,"ID");
		HX_STACK_LINE(3815)
		::com::stencyl::models::Region r = this->getRegion(ID);		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(3816)
		{
			HX_STACK_LINE(3816)
			::de::polygonal::ds::IntHashTable _this = this->regions;		HX_STACK_VAR(_this,"_this");
			int key = r->ID;		HX_STACK_VAR(key,"key");
			struct _Function_2_1{
				inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3816);
					{
						HX_STACK_LINE(3816)
						::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(3816)
						int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
						struct _Function_3_1{
							inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3816);
								{
									HX_STACK_LINE(3816)
									int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(3816)
									i = _this1->_data->__get((i + (int)2));
									HX_STACK_LINE(3816)
									while(((i != (int)-1))){
										HX_STACK_LINE(3816)
										if (((_this1->_data->__get(i) == key))){
											HX_STACK_LINE(3816)
											v = _this1->_data->__get((i + (int)1));
											HX_STACK_LINE(3816)
											break;
										}
										HX_STACK_LINE(3816)
										i = _this1->_data->__get((i + (int)2));
									}
									HX_STACK_LINE(3816)
									return v;
								}
								return null();
							}
						};
						HX_STACK_LINE(3816)
						return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,key)) )) );
					}
					return null();
				}
			};
			HX_STACK_LINE(3816)
			int i = _Function_2_1::Block(_this,key);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(3816)
			if (((i == (int)-2147483647))){
				HX_STACK_LINE(3816)
				false;
			}
			else{
				HX_STACK_LINE(3816)
				_this->_key0 = (int)-2147483647;
				HX_STACK_LINE(3816)
				hx::IndexRef((_this->_vals).mPtr,i) = null();
				HX_STACK_LINE(3816)
				_this->_keys[i] = (int)-2147483647;
				HX_STACK_LINE(3816)
				_this->_next[i] = _this->_free;
				HX_STACK_LINE(3816)
				_this->_free = i;
				HX_STACK_LINE(3816)
				bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
				HX_STACK_LINE(3816)
				if (((_this->_sizeLevel > (int)0))){
					HX_STACK_LINE(3816)
					if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
						HX_STACK_LINE(3816)
						if ((_this->_isResizable)){
							HX_STACK_LINE(3816)
							shrink = true;
						}
					}
				}
				HX_STACK_LINE(3816)
				{
					HX_STACK_LINE(3816)
					::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(3816)
					int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(3816)
					int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(3816)
					if (((i1 == (int)-1))){
						HX_STACK_LINE(3816)
						false;
					}
					else{
						HX_STACK_LINE(3816)
						if (((key == _this1->_data->__get(i1)))){
							HX_STACK_LINE(3816)
							if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
								HX_STACK_LINE(3816)
								_this1->_hash[b] = (int)-1;
							}
							else{
								HX_STACK_LINE(3816)
								_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
							}
							HX_STACK_LINE(3816)
							int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(3816)
							_this1->_next[j] = _this1->_free;
							HX_STACK_LINE(3816)
							_this1->_free = j;
							HX_STACK_LINE(3816)
							_this1->_data[(i1 + (int)1)] = (int)-2147483647;
							HX_STACK_LINE(3816)
							_this1->_data[(i1 + (int)2)] = (int)-1;
							HX_STACK_LINE(3816)
							(_this1->_size)--;
							HX_STACK_LINE(3816)
							if (((_this1->_sizeLevel > (int)0))){
								HX_STACK_LINE(3816)
								if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
									HX_STACK_LINE(3816)
									if ((_this1->_isResizable)){
										HX_STACK_LINE(3816)
										_this1->_shrink();
									}
								}
							}
							HX_STACK_LINE(3816)
							true;
						}
						else{
							HX_STACK_LINE(3816)
							bool exists = false;		HX_STACK_VAR(exists,"exists");
							HX_STACK_LINE(3816)
							int i0 = i1;		HX_STACK_VAR(i0,"i0");
							HX_STACK_LINE(3816)
							i1 = _this1->_data->__get((i1 + (int)2));
							HX_STACK_LINE(3816)
							while(((i1 != (int)-1))){
								HX_STACK_LINE(3816)
								if (((_this1->_data->__get(i1) == key))){
									HX_STACK_LINE(3816)
									exists = true;
									HX_STACK_LINE(3816)
									break;
								}
								HX_STACK_LINE(3816)
								i1 = _this1->_data->__get(((i0 = i1) + (int)2));
							}
							HX_STACK_LINE(3816)
							if ((exists)){
								HX_STACK_LINE(3816)
								_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
								HX_STACK_LINE(3816)
								int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(3816)
								_this1->_next[j] = _this1->_free;
								HX_STACK_LINE(3816)
								_this1->_free = j;
								HX_STACK_LINE(3816)
								_this1->_data[(i1 + (int)1)] = (int)-2147483647;
								HX_STACK_LINE(3816)
								_this1->_data[(i1 + (int)2)] = (int)-1;
								HX_STACK_LINE(3816)
								--(_this1->_size);
								HX_STACK_LINE(3816)
								if (((_this1->_sizeLevel > (int)0))){
									HX_STACK_LINE(3816)
									if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
										HX_STACK_LINE(3816)
										if ((_this1->_isResizable)){
											HX_STACK_LINE(3816)
											_this1->_shrink();
										}
									}
								}
								HX_STACK_LINE(3816)
								true;
							}
							else{
								HX_STACK_LINE(3816)
								false;
							}
						}
					}
				}
				HX_STACK_LINE(3816)
				if ((shrink)){
					HX_STACK_LINE(3816)
					(_this->_sizeLevel)--;
					HX_STACK_LINE(3816)
					int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
					HX_STACK_LINE(3816)
					int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
					struct _Function_4_1{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3816);
							{
								HX_STACK_LINE(3816)
								Array< int > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(3816)
								a = Array_obj< int >::__new();
								HX_STACK_LINE(3816)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(3816)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(3816)
					_this->_next = _Function_4_1::Block(newSize);
					HX_STACK_LINE(3816)
					{
						HX_STACK_LINE(3816)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(3816)
						while(((_g1 < _g))){
							HX_STACK_LINE(3816)
							int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(3816)
							_this->_next[i1] = (i1 + (int)1);
						}
					}
					HX_STACK_LINE(3816)
					_this->_next[(newSize - (int)1)] = (int)-1;
					HX_STACK_LINE(3816)
					_this->_free = (int)0;
					struct _Function_4_2{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3816);
							{
								HX_STACK_LINE(3816)
								Array< int > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(3816)
								a = Array_obj< int >::__new();
								HX_STACK_LINE(3816)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(3816)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(3816)
					Array< int > tmpKeys = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
					HX_STACK_LINE(3816)
					{
						HX_STACK_LINE(3816)
						int k = newSize;		HX_STACK_VAR(k,"k");
						HX_STACK_LINE(3816)
						if (((k == (int)-1))){
							HX_STACK_LINE(3816)
							k = tmpKeys->length;
						}
						HX_STACK_LINE(3816)
						{
							HX_STACK_LINE(3816)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(3816)
							while(((_g < k))){
								HX_STACK_LINE(3816)
								int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(3816)
								tmpKeys[i1] = (int)-2147483647;
							}
						}
					}
					struct _Function_4_3{
						inline static Array< ::Dynamic > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3816);
							{
								HX_STACK_LINE(3816)
								Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(3816)
								a = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(3816)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(3816)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(3816)
					Array< ::Dynamic > tmpVals = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
					HX_STACK_LINE(3816)
					for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
						int i1 = __it->next();
						{
							HX_STACK_LINE(3816)
							tmpKeys[_this->_free] = _this->_keys->__get(i1);
							HX_STACK_LINE(3816)
							tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
							HX_STACK_LINE(3816)
							_this->_free = _this->_next->__get(_this->_free);
						}
;
					}
					HX_STACK_LINE(3816)
					_this->_keys = tmpKeys;
					HX_STACK_LINE(3816)
					_this->_vals = tmpVals;
					HX_STACK_LINE(3816)
					{
						HX_STACK_LINE(3816)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(3816)
						while(((_g1 < _g))){
							HX_STACK_LINE(3816)
							int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(3816)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
							HX_STACK_LINE(3816)
							int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
							HX_STACK_LINE(3816)
							if (((i2 == (int)-1))){
								HX_STACK_LINE(3816)
								false;
							}
							else{
								HX_STACK_LINE(3816)
								if (((_this1->_data->__get(i2) == key1))){
									HX_STACK_LINE(3816)
									_this1->_data[(i2 + (int)1)] = i1;
									HX_STACK_LINE(3816)
									true;
								}
								else{
									HX_STACK_LINE(3816)
									i2 = _this1->_data->__get((i2 + (int)2));
									HX_STACK_LINE(3816)
									while(((i2 != (int)-1))){
										HX_STACK_LINE(3816)
										if (((_this1->_data->__get(i2) == key1))){
											HX_STACK_LINE(3816)
											_this1->_data[(i2 + (int)1)] = i1;
											HX_STACK_LINE(3816)
											break;
										}
										HX_STACK_LINE(3816)
										i2 = _this1->_data->__get((i2 + (int)2));
									}
									HX_STACK_LINE(3816)
									(i2 != (int)-1);
								}
							}
						}
					}
				}
				HX_STACK_LINE(3816)
				true;
			}
		}
		HX_STACK_LINE(3817)
		r->destroy();
		HX_STACK_LINE(3819)
		if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
			HX_STACK_LINE(3820)
			this->groups->get(::com::stencyl::models::GameModel_obj::REGION_ID)->__Field(HX_CSTRING("removeChild"),true)(r);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,removeRegion,(void))

Void Engine_obj::addRegion( ::com::stencyl::models::Region r){
{
		HX_STACK_PUSH("Engine::addRegion","com/stencyl/Engine.hx",3802);
		HX_STACK_THIS(this);
		HX_STACK_ARG(r,"r");
		HX_STACK_LINE(3803)
		int nextID = this->nextRegionID();		HX_STACK_VAR(nextID,"nextID");
		HX_STACK_LINE(3804)
		r->ID = nextID;
		HX_STACK_LINE(3805)
		{
			HX_STACK_LINE(3805)
			::de::polygonal::ds::IntHashTable _this = this->regions;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(3805)
			_this->_key0 = (int)-2147483647;
			HX_STACK_LINE(3805)
			if (((_this->_h->_size == _this->_h->_capacity))){
				HX_STACK_LINE(3805)
				int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
				HX_STACK_LINE(3805)
				int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
				struct _Function_3_1{
					inline static Array< int > Block( int &newSize){
						HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3805);
						{
							HX_STACK_LINE(3805)
							Array< int > a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(3805)
							a = Array_obj< int >::__new();
							HX_STACK_LINE(3805)
							a[(newSize - (int)1)] = null();
							HX_STACK_LINE(3805)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(3805)
				Array< int > tmp = _Function_3_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(3805)
				{
					HX_STACK_LINE(3805)
					Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
					int max = oldSize;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(3805)
					if (((max == (int)-1))){
						HX_STACK_LINE(3805)
						max = src->length;
					}
					HX_STACK_LINE(3805)
					int j = (int)0;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(3805)
					{
						HX_STACK_LINE(3805)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(3805)
						while(((_g < max))){
							HX_STACK_LINE(3805)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(3805)
							tmp[(j)++] = src->__get(i);
						}
					}
					HX_STACK_LINE(3805)
					tmp;
				}
				HX_STACK_LINE(3805)
				_this->_next = tmp;
				struct _Function_3_2{
					inline static Array< int > Block( int &newSize){
						HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3805);
						{
							HX_STACK_LINE(3805)
							Array< int > a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(3805)
							a = Array_obj< int >::__new();
							HX_STACK_LINE(3805)
							a[(newSize - (int)1)] = null();
							HX_STACK_LINE(3805)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(3805)
				Array< int > tmp1 = _Function_3_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(3805)
				{
					HX_STACK_LINE(3805)
					Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
					int max = oldSize;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(3805)
					if (((max == (int)-1))){
						HX_STACK_LINE(3805)
						max = src->length;
					}
					HX_STACK_LINE(3805)
					int j = (int)0;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(3805)
					{
						HX_STACK_LINE(3805)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(3805)
						while(((_g < max))){
							HX_STACK_LINE(3805)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(3805)
							tmp1[(j)++] = src->__get(i);
						}
					}
					HX_STACK_LINE(3805)
					tmp1;
				}
				HX_STACK_LINE(3805)
				_this->_keys = tmp1;
				HX_STACK_LINE(3805)
				{
					HX_STACK_LINE(3805)
					int _g = oldSize;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(3805)
					while(((_g < newSize))){
						HX_STACK_LINE(3805)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(3805)
						_this->_keys[i] = (int)-2147483647;
					}
				}
				HX_STACK_LINE(3805)
				{
					HX_STACK_LINE(3805)
					int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
					int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(3805)
					while(((_g1 < _g))){
						HX_STACK_LINE(3805)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(3805)
						_this->_next[i] = (i + (int)1);
					}
				}
				HX_STACK_LINE(3805)
				_this->_next[(newSize - (int)1)] = (int)-1;
				HX_STACK_LINE(3805)
				_this->_free = oldSize;
				struct _Function_3_3{
					inline static Array< ::Dynamic > Block( int &newSize){
						HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3805);
						{
							HX_STACK_LINE(3805)
							Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(3805)
							a = Array_obj< ::Dynamic >::__new();
							HX_STACK_LINE(3805)
							a[(newSize - (int)1)] = null();
							HX_STACK_LINE(3805)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(3805)
				Array< ::Dynamic > tmp2 = _Function_3_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(3805)
				{
					HX_STACK_LINE(3805)
					Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
					int max = oldSize;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(3805)
					if (((max == (int)-1))){
						HX_STACK_LINE(3805)
						max = src->length;
					}
					HX_STACK_LINE(3805)
					int j = (int)0;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(3805)
					{
						HX_STACK_LINE(3805)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(3805)
						while(((_g < max))){
							HX_STACK_LINE(3805)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(3805)
							tmp2[(j)++] = src->__get(i).StaticCast< ::com::stencyl::models::Region >();
						}
					}
					HX_STACK_LINE(3805)
					tmp2;
				}
				HX_STACK_LINE(3805)
				_this->_vals = tmp2;
				HX_STACK_LINE(3805)
				(_this->_sizeLevel)++;
			}
			HX_STACK_LINE(3805)
			{
				HX_STACK_LINE(3805)
				::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(3805)
				if (((_this1->_size == _this1->_capacity))){
					HX_STACK_LINE(3805)
					if ((_this1->_isResizable)){
						HX_STACK_LINE(3805)
						_this1->_expand();
					}
				}
				HX_STACK_LINE(3805)
				int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(3805)
				_this1->_free = _this1->_next->__get(_this1->_free);
				HX_STACK_LINE(3805)
				_this1->_data[i] = nextID;
				HX_STACK_LINE(3805)
				_this1->_data[(i + (int)1)] = _this->_free;
				HX_STACK_LINE(3805)
				int b = (int((nextID * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(3805)
				int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(3805)
				if (((j == (int)-1))){
					HX_STACK_LINE(3805)
					_this1->_hash[b] = i;
					HX_STACK_LINE(3805)
					(_this1->_size)++;
					HX_STACK_LINE(3805)
					true;
				}
				else{
					HX_STACK_LINE(3805)
					bool first = (_this1->_data->__get(j) != nextID);		HX_STACK_VAR(first,"first");
					HX_STACK_LINE(3805)
					int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(3805)
					while(((t != (int)-1))){
						HX_STACK_LINE(3805)
						if (((_this1->_data->__get(t) == nextID))){
							HX_STACK_LINE(3805)
							first = false;
						}
						HX_STACK_LINE(3805)
						j = t;
						HX_STACK_LINE(3805)
						t = _this1->_data->__get((t + (int)2));
					}
					HX_STACK_LINE(3805)
					_this1->_data[(j + (int)2)] = i;
					HX_STACK_LINE(3805)
					(_this1->_size)++;
					HX_STACK_LINE(3805)
					first;
				}
			}
			HX_STACK_LINE(3805)
			hx::IndexRef((_this->_vals).mPtr,_this->_free) = r;
			HX_STACK_LINE(3805)
			_this->_keys[_this->_free] = nextID;
			HX_STACK_LINE(3805)
			_this->_free = _this->_next->__get(_this->_free);
			HX_STACK_LINE(3805)
			true;
		}
		HX_STACK_LINE(3807)
		if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
			HX_STACK_LINE(3808)
			this->groups->get(::com::stencyl::models::GameModel_obj::REGION_ID)->__Field(HX_CSTRING("addChild"),true)(r);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,addRegion,(void))

::com::stencyl::models::Region Engine_obj::createCircularRegion( Float x,Float y,Float r){
	HX_STACK_PUSH("Engine::createCircularRegion","com/stencyl/Engine.hx",3781);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(r,"r");
	HX_STACK_LINE(3782)
	x = ::com::stencyl::Engine_obj::toPhysicalUnits(x);
	HX_STACK_LINE(3783)
	y = ::com::stencyl::Engine_obj::toPhysicalUnits(y);
	HX_STACK_LINE(3784)
	r = ::com::stencyl::Engine_obj::toPhysicalUnits(r);
	HX_STACK_LINE(3786)
	if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
		HX_STACK_LINE(3788)
		::com::stencyl::models::Region region = ::com::stencyl::models::Region_obj::__new(hx::ObjectPtr<OBJ_>(this),x,y,Array_obj< ::Dynamic >::__new(),::flash::geom::Rectangle_obj::__new((int)0,(int)0,(r * (int)2),(r * (int)2)));		HX_STACK_VAR(region,"region");
		HX_STACK_LINE(3789)
		this->addRegion(region);
		HX_STACK_LINE(3790)
		return region;
	}
	else{
		HX_STACK_LINE(3795)
		::box2D::collision::shapes::B2CircleShape cShape = ::box2D::collision::shapes::B2CircleShape_obj::__new(null());		HX_STACK_VAR(cShape,"cShape");
		HX_STACK_LINE(3796)
		cShape->m_radius = r;
		HX_STACK_LINE(3797)
		return this->createRegion(x,y,cShape,true);
	}
	HX_STACK_LINE(3786)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,createCircularRegion,return )

::com::stencyl::models::Region Engine_obj::createBoxRegion( Float x,Float y,Float w,Float h){
	HX_STACK_PUSH("Engine::createBoxRegion","com/stencyl/Engine.hx",3759);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(w,"w");
	HX_STACK_ARG(h,"h");
	HX_STACK_LINE(3760)
	x = ::com::stencyl::Engine_obj::toPhysicalUnits(x);
	HX_STACK_LINE(3761)
	y = ::com::stencyl::Engine_obj::toPhysicalUnits(y);
	HX_STACK_LINE(3762)
	w = ::com::stencyl::Engine_obj::toPhysicalUnits(w);
	HX_STACK_LINE(3763)
	h = ::com::stencyl::Engine_obj::toPhysicalUnits(h);
	HX_STACK_LINE(3765)
	if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
		HX_STACK_LINE(3767)
		::com::stencyl::models::Region region = ::com::stencyl::models::Region_obj::__new(hx::ObjectPtr<OBJ_>(this),x,y,Array_obj< ::Dynamic >::__new(),::flash::geom::Rectangle_obj::__new((int)0,(int)0,w,h));		HX_STACK_VAR(region,"region");
		HX_STACK_LINE(3768)
		this->addRegion(region);
		HX_STACK_LINE(3769)
		return region;
	}
	else{
		HX_STACK_LINE(3774)
		::box2D::collision::shapes::B2PolygonShape p = ::box2D::collision::shapes::B2PolygonShape_obj::__new();		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(3775)
		p->setAsBox((Float(w) / Float((int)2)),(Float(h) / Float((int)2)));
		HX_STACK_LINE(3776)
		return this->createRegion(x,y,p,true);
	}
	HX_STACK_LINE(3765)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,createBoxRegion,return )

::com::stencyl::models::Region Engine_obj::createRegion( Float x,Float y,::box2D::collision::shapes::B2Shape shape,hx::Null< bool >  __o_offset){
bool offset = __o_offset.Default(false);
	HX_STACK_PUSH("Engine::createRegion","com/stencyl/Engine.hx",3743);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(shape,"shape");
	HX_STACK_ARG(offset,"offset");
{
		HX_STACK_LINE(3744)
		Array< ::Dynamic > shapeList = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(shapeList,"shapeList");
		HX_STACK_LINE(3745)
		shapeList->push(shape);
		HX_STACK_LINE(3746)
		::com::stencyl::models::Region region = ::com::stencyl::models::Region_obj::__new(hx::ObjectPtr<OBJ_>(this),x,y,shapeList,null());		HX_STACK_VAR(region,"region");
		HX_STACK_LINE(3748)
		if ((offset)){
			HX_STACK_LINE(3750)
			region->setX((::com::stencyl::Engine_obj::toPixelUnits(x) + (Float(region->regionWidth) / Float((int)2))),null(),null());
			HX_STACK_LINE(3751)
			region->setY((::com::stencyl::Engine_obj::toPixelUnits(y) + (Float(region->regionHeight) / Float((int)2))),null(),null());
		}
		HX_STACK_LINE(3754)
		this->addRegion(region);
		HX_STACK_LINE(3755)
		return region;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,createRegion,return )

::box2D::dynamics::joints::B2LineJoint Engine_obj::createSlidingJoint( ::box2D::dynamics::B2Body one,::box2D::dynamics::B2Body two,::box2D::common::math::B2Vec2 dir,hx::Null< int >  __o_jointID,hx::Null< bool >  __o_collide,hx::Null< bool >  __o_limit,hx::Null< bool >  __o_motor,hx::Null< Float >  __o_lower,hx::Null< Float >  __o_upper,hx::Null< Float >  __o_force,hx::Null< Float >  __o_speed){
int jointID = __o_jointID.Default(-1);
bool collide = __o_collide.Default(false);
bool limit = __o_limit.Default(false);
bool motor = __o_motor.Default(false);
Float lower = __o_lower.Default(0);
Float upper = __o_upper.Default(0);
Float force = __o_force.Default(0);
Float speed = __o_speed.Default(0);
	HX_STACK_PUSH("Engine::createSlidingJoint","com/stencyl/Engine.hx",3674);
	HX_STACK_THIS(this);
	HX_STACK_ARG(one,"one");
	HX_STACK_ARG(two,"two");
	HX_STACK_ARG(dir,"dir");
	HX_STACK_ARG(jointID,"jointID");
	HX_STACK_ARG(collide,"collide");
	HX_STACK_ARG(limit,"limit");
	HX_STACK_ARG(motor,"motor");
	HX_STACK_ARG(lower,"lower");
	HX_STACK_ARG(upper,"upper");
	HX_STACK_ARG(force,"force");
	HX_STACK_ARG(speed,"speed");
{
		HX_STACK_LINE(3675)
		if (((two == null()))){
			HX_STACK_LINE(3676)
			two = this->world->m_groundBody;
		}
		HX_STACK_LINE(3680)
		if (((dir == null()))){
			HX_STACK_LINE(3681)
			dir = ::box2D::common::math::B2Vec2_obj::__new((int)1,(int)0);
		}
		HX_STACK_LINE(3685)
		dir->normalize();
		HX_STACK_LINE(3687)
		::box2D::common::math::B2Vec2 pt1 = one->getWorldCenter();		HX_STACK_VAR(pt1,"pt1");
		HX_STACK_LINE(3688)
		::box2D::common::math::B2Vec2 pt2 = two->getWorldCenter();		HX_STACK_VAR(pt2,"pt2");
		HX_STACK_LINE(3691)
		if (((one->getType() == (int)0))){
			HX_STACK_LINE(3692)
			if (((hx::TCast< com::stencyl::models::Actor >::cast(one->getUserData()) != null()))){
				HX_STACK_LINE(3695)
				pt1->x = (Float((hx::TCast< com::stencyl::models::Actor >::cast(one->getUserData()))->getPhysicsWidth()) / Float((int)2));
				HX_STACK_LINE(3696)
				pt1->y = (Float((hx::TCast< com::stencyl::models::Actor >::cast(one->getUserData()))->getPhysicsHeight()) / Float((int)2));
				HX_STACK_LINE(3697)
				pt1 = one->getWorldPoint(pt1);
			}
		}
		HX_STACK_LINE(3701)
		if (((two->getType() == (int)0))){
			HX_STACK_LINE(3702)
			if (((hx::TCast< com::stencyl::models::Actor >::cast(two->getUserData()) != null()))){
				HX_STACK_LINE(3705)
				pt2->x = (Float((hx::TCast< com::stencyl::models::Actor >::cast(two->getUserData()))->getPhysicsWidth()) / Float((int)2));
				HX_STACK_LINE(3706)
				pt2->y = (Float((hx::TCast< com::stencyl::models::Actor >::cast(two->getUserData()))->getPhysicsHeight()) / Float((int)2));
				HX_STACK_LINE(3707)
				pt2 = two->getWorldPoint(pt2);
			}
		}
		HX_STACK_LINE(3711)
		::box2D::dynamics::joints::B2LineJointDef pjd = ::box2D::dynamics::joints::B2LineJointDef_obj::__new();		HX_STACK_VAR(pjd,"pjd");
		HX_STACK_LINE(3712)
		pjd->initialize(one,two,pt1,dir);
		HX_STACK_LINE(3714)
		pjd->collideConnected = collide;
		HX_STACK_LINE(3715)
		pjd->enableLimit = limit;
		HX_STACK_LINE(3716)
		pjd->enableMotor = motor;
		HX_STACK_LINE(3717)
		pjd->lowerTranslation = ::com::stencyl::Engine_obj::toPhysicalUnits(lower);
		HX_STACK_LINE(3718)
		pjd->upperTranslation = ::com::stencyl::Engine_obj::toPhysicalUnits(upper);
		HX_STACK_LINE(3719)
		pjd->maxMotorForce = force;
		HX_STACK_LINE(3720)
		pjd->motorSpeed = ::com::stencyl::Engine_obj::toPhysicalUnits(speed);
		HX_STACK_LINE(3722)
		::box2D::dynamics::joints::B2Joint toReturn = this->world->createJoint(pjd);		HX_STACK_VAR(toReturn,"toReturn");
		HX_STACK_LINE(3724)
		if (((jointID == (int)-1))){
			HX_STACK_LINE(3725)
			this->addJoint(toReturn);
		}
		else{
			HX_STACK_LINE(3731)
			this->joints->set(jointID,toReturn);
			HX_STACK_LINE(3732)
			toReturn->ID = jointID;
		}
		HX_STACK_LINE(3735)
		return hx::TCast< box2D::dynamics::joints::B2LineJoint >::cast(toReturn);
	}
}


HX_DEFINE_DYNAMIC_FUNC11(Engine_obj,createSlidingJoint,return )

::box2D::dynamics::joints::B2RevoluteJoint Engine_obj::createHingeJoint( ::box2D::dynamics::B2Body one,::box2D::dynamics::B2Body two,::box2D::common::math::B2Vec2 pt,hx::Null< int >  __o_jointID,hx::Null< bool >  __o_collide,hx::Null< bool >  __o_limit,hx::Null< bool >  __o_motor,hx::Null< Float >  __o_lower,hx::Null< Float >  __o_upper,hx::Null< Float >  __o_torque,hx::Null< Float >  __o_speed){
int jointID = __o_jointID.Default(-1);
bool collide = __o_collide.Default(false);
bool limit = __o_limit.Default(false);
bool motor = __o_motor.Default(false);
Float lower = __o_lower.Default(0);
Float upper = __o_upper.Default(0);
Float torque = __o_torque.Default(0);
Float speed = __o_speed.Default(0);
	HX_STACK_PUSH("Engine::createHingeJoint","com/stencyl/Engine.hx",3613);
	HX_STACK_THIS(this);
	HX_STACK_ARG(one,"one");
	HX_STACK_ARG(two,"two");
	HX_STACK_ARG(pt,"pt");
	HX_STACK_ARG(jointID,"jointID");
	HX_STACK_ARG(collide,"collide");
	HX_STACK_ARG(limit,"limit");
	HX_STACK_ARG(motor,"motor");
	HX_STACK_ARG(lower,"lower");
	HX_STACK_ARG(upper,"upper");
	HX_STACK_ARG(torque,"torque");
	HX_STACK_ARG(speed,"speed");
{
		HX_STACK_LINE(3614)
		if (((two == null()))){
			HX_STACK_LINE(3615)
			two = this->world->m_groundBody;
		}
		HX_STACK_LINE(3619)
		if (((pt == null()))){
			HX_STACK_LINE(3620)
			pt = one->getLocalCenter();
		}
		HX_STACK_LINE(3624)
		::box2D::dynamics::joints::B2RevoluteJointDef jd = ::box2D::dynamics::joints::B2RevoluteJointDef_obj::__new();		HX_STACK_VAR(jd,"jd");
		HX_STACK_LINE(3626)
		jd->bodyA = one;
		HX_STACK_LINE(3627)
		jd->bodyB = two;
		HX_STACK_LINE(3629)
		pt->x = ::com::stencyl::Engine_obj::toPhysicalUnits(pt->x);
		HX_STACK_LINE(3630)
		pt->y = ::com::stencyl::Engine_obj::toPhysicalUnits(pt->y);
		HX_STACK_LINE(3632)
		jd->localAnchorA = pt;
		HX_STACK_LINE(3633)
		jd->localAnchorB = two->getLocalPoint(one->getWorldPoint(pt));
		HX_STACK_LINE(3634)
		jd->collideConnected = collide;
		HX_STACK_LINE(3635)
		jd->enableLimit = limit;
		HX_STACK_LINE(3636)
		jd->enableMotor = motor;
		HX_STACK_LINE(3637)
		jd->lowerAngle = lower;
		HX_STACK_LINE(3638)
		jd->upperAngle = upper;
		HX_STACK_LINE(3639)
		jd->maxMotorTorque = torque;
		HX_STACK_LINE(3640)
		jd->motorSpeed = speed;
		HX_STACK_LINE(3642)
		::box2D::dynamics::joints::B2Joint toReturn = this->world->createJoint(jd);		HX_STACK_VAR(toReturn,"toReturn");
		HX_STACK_LINE(3644)
		if (((jointID == (int)-1))){
			HX_STACK_LINE(3645)
			this->addJoint(toReturn);
		}
		else{
			HX_STACK_LINE(3651)
			this->joints->set(jointID,toReturn);
			HX_STACK_LINE(3652)
			toReturn->ID = jointID;
		}
		HX_STACK_LINE(3655)
		return hx::TCast< box2D::dynamics::joints::B2RevoluteJoint >::cast(toReturn);
	}
}


HX_DEFINE_DYNAMIC_FUNC11(Engine_obj,createHingeJoint,return )

::box2D::dynamics::joints::B2DistanceJoint Engine_obj::createCustomStickJoint( ::box2D::dynamics::B2Body one,Float x1,Float y1,::box2D::dynamics::B2Body two,Float x2,Float y2){
	HX_STACK_PUSH("Engine::createCustomStickJoint","com/stencyl/Engine.hx",3576);
	HX_STACK_THIS(this);
	HX_STACK_ARG(one,"one");
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(y1,"y1");
	HX_STACK_ARG(two,"two");
	HX_STACK_ARG(x2,"x2");
	HX_STACK_ARG(y2,"y2");
	HX_STACK_LINE(3577)
	::box2D::common::math::B2Vec2 v1 = ::box2D::common::math::B2Vec2_obj::__new(x1,y1);		HX_STACK_VAR(v1,"v1");
	HX_STACK_LINE(3578)
	::box2D::common::math::B2Vec2 v2 = ::box2D::common::math::B2Vec2_obj::__new(x2,y2);		HX_STACK_VAR(v2,"v2");
	HX_STACK_LINE(3580)
	v1->x = ::com::stencyl::Engine_obj::toPhysicalUnits(v1->x);
	HX_STACK_LINE(3581)
	v1->y = ::com::stencyl::Engine_obj::toPhysicalUnits(v1->y);
	HX_STACK_LINE(3582)
	v2->x = ::com::stencyl::Engine_obj::toPhysicalUnits(v2->x);
	HX_STACK_LINE(3583)
	v2->y = ::com::stencyl::Engine_obj::toPhysicalUnits(v2->y);
	HX_STACK_LINE(3585)
	v1 = one->getWorldPoint(v1);
	HX_STACK_LINE(3586)
	v2 = two->getWorldPoint(v2);
	HX_STACK_LINE(3588)
	::box2D::dynamics::joints::B2DistanceJointDef jd = ::box2D::dynamics::joints::B2DistanceJointDef_obj::__new();		HX_STACK_VAR(jd,"jd");
	HX_STACK_LINE(3589)
	jd->initialize(one,two,v1,v2);
	HX_STACK_LINE(3591)
	::box2D::dynamics::joints::B2Joint toReturn = this->world->createJoint(jd);		HX_STACK_VAR(toReturn,"toReturn");
	HX_STACK_LINE(3592)
	this->addJoint(toReturn);
	HX_STACK_LINE(3594)
	return hx::TCast< box2D::dynamics::joints::B2DistanceJoint >::cast(toReturn);
}


HX_DEFINE_DYNAMIC_FUNC6(Engine_obj,createCustomStickJoint,return )

::box2D::dynamics::joints::B2DistanceJoint Engine_obj::createStickJoint( ::box2D::dynamics::B2Body one,::box2D::dynamics::B2Body two,hx::Null< int >  __o_jointID,hx::Null< bool >  __o_collide,hx::Null< Float >  __o_damping,hx::Null< Float >  __o_frequencyHz){
int jointID = __o_jointID.Default(-1);
bool collide = __o_collide.Default(false);
Float damping = __o_damping.Default(0);
Float frequencyHz = __o_frequencyHz.Default(0);
	HX_STACK_PUSH("Engine::createStickJoint","com/stencyl/Engine.hx",3526);
	HX_STACK_THIS(this);
	HX_STACK_ARG(one,"one");
	HX_STACK_ARG(two,"two");
	HX_STACK_ARG(jointID,"jointID");
	HX_STACK_ARG(collide,"collide");
	HX_STACK_ARG(damping,"damping");
	HX_STACK_ARG(frequencyHz,"frequencyHz");
{
		HX_STACK_LINE(3527)
		::box2D::common::math::B2Vec2 v1 = one->getLocalCenter();		HX_STACK_VAR(v1,"v1");
		HX_STACK_LINE(3528)
		::box2D::common::math::B2Vec2 v2 = two->getLocalCenter();		HX_STACK_VAR(v2,"v2");
		HX_STACK_LINE(3530)
		if (((one->getType() == (int)0))){
			HX_STACK_LINE(3532)
			v1->x = (Float((hx::TCast< com::stencyl::models::Actor >::cast(one->getUserData()))->getPhysicsWidth()) / Float((int)2));
			HX_STACK_LINE(3533)
			v1->y = (Float((hx::TCast< com::stencyl::models::Actor >::cast(one->getUserData()))->getPhysicsHeight()) / Float((int)2));
		}
		HX_STACK_LINE(3536)
		if (((two->getType() == (int)0))){
			HX_STACK_LINE(3538)
			v2->x = (Float((hx::TCast< com::stencyl::models::Actor >::cast(two->getUserData()))->getPhysicsWidth()) / Float((int)2));
			HX_STACK_LINE(3539)
			v2->y = (Float((hx::TCast< com::stencyl::models::Actor >::cast(two->getUserData()))->getPhysicsHeight()) / Float((int)2));
		}
		HX_STACK_LINE(3542)
		v1 = one->getWorldPoint(v1);
		HX_STACK_LINE(3543)
		v2 = two->getWorldPoint(v2);
		HX_STACK_LINE(3545)
		::box2D::dynamics::joints::B2DistanceJointDef jd = ::box2D::dynamics::joints::B2DistanceJointDef_obj::__new();		HX_STACK_VAR(jd,"jd");
		HX_STACK_LINE(3546)
		jd->initialize(one,two,v1,v2);
		HX_STACK_LINE(3547)
		jd->collideConnected = collide;
		HX_STACK_LINE(3548)
		jd->dampingRatio = damping;
		HX_STACK_LINE(3549)
		jd->frequencyHz = frequencyHz;
		HX_STACK_LINE(3551)
		::box2D::dynamics::joints::B2Joint toReturn = this->world->createJoint(jd);		HX_STACK_VAR(toReturn,"toReturn");
		HX_STACK_LINE(3553)
		if (((jointID == (int)-1))){
			HX_STACK_LINE(3554)
			this->addJoint(toReturn);
		}
		else{
			HX_STACK_LINE(3560)
			this->joints->set(jointID,toReturn);
			HX_STACK_LINE(3561)
			toReturn->ID = jointID;
		}
		HX_STACK_LINE(3564)
		return hx::TCast< box2D::dynamics::joints::B2DistanceJoint >::cast(toReturn);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(Engine_obj,createStickJoint,return )

Void Engine_obj::destroyJoint( ::box2D::dynamics::joints::B2Joint j){
{
		HX_STACK_PUSH("Engine::destroyJoint","com/stencyl/Engine.hx",3510);
		HX_STACK_THIS(this);
		HX_STACK_ARG(j,"j");
		HX_STACK_LINE(3511)
		this->joints->remove(j->ID);
		HX_STACK_LINE(3512)
		this->world->destroyJoint(j);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,destroyJoint,(void))

::box2D::dynamics::joints::B2Joint Engine_obj::getJoint( int ID){
	HX_STACK_PUSH("Engine::getJoint","com/stencyl/Engine.hx",3505);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ID,"ID");
	HX_STACK_LINE(3505)
	return this->joints->get(ID);
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getJoint,return )

Void Engine_obj::addJoint( ::box2D::dynamics::joints::B2Joint j){
{
		HX_STACK_PUSH("Engine::addJoint","com/stencyl/Engine.hx",3498);
		HX_STACK_THIS(this);
		HX_STACK_ARG(j,"j");
		HX_STACK_LINE(3499)
		int nextID = this->nextJointID();		HX_STACK_VAR(nextID,"nextID");
		HX_STACK_LINE(3500)
		j->ID = nextID;
		HX_STACK_LINE(3501)
		this->joints->set(nextID,j);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,addJoint,(void))

int Engine_obj::nextJointID( ){
	HX_STACK_PUSH("Engine::nextJointID","com/stencyl/Engine.hx",3481);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3482)
	int ID = (int)-1;		HX_STACK_VAR(ID,"ID");
	struct _Function_1_1{
		inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3484);
			{
				HX_STACK_LINE(3484)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->joints);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",3484);
					{
						HX_STACK_LINE(3484)
						return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(3484)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(3484)
	for(::cpp::FastIterator_obj< ::box2D::dynamics::joints::B2Joint > *__it = ::cpp::CreateFastIterator< ::box2D::dynamics::joints::B2Joint >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		::box2D::dynamics::joints::B2Joint j = __it->next();
		{
			HX_STACK_LINE(3486)
			if (((j == null()))){
				HX_STACK_LINE(3487)
				continue;
			}
			HX_STACK_LINE(3491)
			ID = ::Std_obj::_int(::Math_obj::max(ID,j->ID));
		}
;
	}
	HX_STACK_LINE(3494)
	return (ID + (int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,nextJointID,return )

::com::stencyl::models::actor::Group Engine_obj::getGroupByName( ::String groupName){
	HX_STACK_PUSH("Engine::getGroupByName","com/stencyl/Engine.hx",3465);
	HX_STACK_THIS(this);
	HX_STACK_ARG(groupName,"groupName");
	HX_STACK_LINE(3466)
	::com::stencyl::models::actor::Group group = this->reverseGroups->get(groupName);		HX_STACK_VAR(group,"group");
	HX_STACK_LINE(3468)
	if (((group == null()))){
		HX_STACK_LINE(3469)
		return this->groups->get(::com::stencyl::models::GameModel_obj::ACTOR_ID);
	}
	HX_STACK_LINE(3473)
	return group;
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getGroupByName,return )

::com::stencyl::models::actor::Group Engine_obj::getGroup( int ID,::com::stencyl::models::Actor a){
	HX_STACK_PUSH("Engine::getGroup","com/stencyl/Engine.hx",3455);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ID,"ID");
	HX_STACK_ARG(a,"a");
	HX_STACK_LINE(3456)
	if (((bool((ID == ::com::stencyl::models::GameModel_obj::INHERIT_ID)) && bool((a != null()))))){
		HX_STACK_LINE(3457)
		return this->groups->get(a->getGroupID());
	}
	HX_STACK_LINE(3461)
	return this->groups->get(ID);
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,getGroup,return )

Void Engine_obj::disableGlobalSleeping( ){
{
		HX_STACK_PUSH("Engine::disableGlobalSleeping","com/stencyl/Engine.hx",3446);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3446)
		this->world->m_allowSleep = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,disableGlobalSleeping,(void))

Void Engine_obj::enableGlobalSleeping( ){
{
		HX_STACK_PUSH("Engine::enableGlobalSleeping","com/stencyl/Engine.hx",3441);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3441)
		this->world->m_allowSleep = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,enableGlobalSleeping,(void))

Float Engine_obj::getPhysicalHeight( ){
	HX_STACK_PUSH("Engine::getPhysicalHeight","com/stencyl/Engine.hx",3406);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3406)
	return this->physicalHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getPhysicalHeight,return )

Float Engine_obj::getPhysicalWidth( ){
	HX_STACK_PUSH("Engine::getPhysicalWidth","com/stencyl/Engine.hx",3401);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3401)
	return this->physicalWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getPhysicalWidth,return )

int Engine_obj::getNumberOfActorsWithinLayer( int layerID){
	HX_STACK_PUSH("Engine::getNumberOfActorsWithinLayer","com/stencyl/Engine.hx",3392);
	HX_STACK_THIS(this);
	HX_STACK_ARG(layerID,"layerID");
	HX_STACK_LINE(3392)
	return this->actorsPerLayer->get(layerID)->__Field(HX_CSTRING("get_numChildren"),true)();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getNumberOfActorsWithinLayer,return )

int Engine_obj::getIDFromLayerOrder( int layerOrder){
	HX_STACK_PUSH("Engine::getIDFromLayerOrder","com/stencyl/Engine.hx",3387);
	HX_STACK_THIS(this);
	HX_STACK_ARG(layerOrder,"layerOrder");
	HX_STACK_LINE(3387)
	return this->layersToDraw->get((layerOrder - (int)1));
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getIDFromLayerOrder,return )

int Engine_obj::getOrderForLayerID( int layerID){
	HX_STACK_PUSH("Engine::getOrderForLayerID","com/stencyl/Engine.hx",3382);
	HX_STACK_THIS(this);
	HX_STACK_ARG(layerID,"layerID");
	HX_STACK_LINE(3382)
	return this->layerOrders->get(layerID);
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getOrderForLayerID,return )

Void Engine_obj::bringForward( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Engine::bringForward","com/stencyl/Engine.hx",3368);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(3369)
		this->removeActorFromLayer(a,a->layerID);
		HX_STACK_LINE(3371)
		int order = this->getOrderForLayerID(a->layerID);		HX_STACK_VAR(order,"order");
		HX_STACK_LINE(3373)
		if (((order > (int)0))){
			HX_STACK_LINE(3374)
			a->layerID = this->layersToDraw->get((order - (int)1));
		}
		HX_STACK_LINE(3378)
		this->moveActorToLayer(a,a->layerID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,bringForward,(void))

Void Engine_obj::bringToFront( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Engine::bringToFront","com/stencyl/Engine.hx",3361);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(3362)
		this->removeActorFromLayer(a,a->layerID);
		HX_STACK_LINE(3363)
		a->layerID = this->getTopLayer();
		HX_STACK_LINE(3364)
		this->moveActorToLayer(a,a->layerID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,bringToFront,(void))

Void Engine_obj::sendBackward( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Engine::sendBackward","com/stencyl/Engine.hx",3346);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(3347)
		this->removeActorFromLayer(a,a->layerID);
		HX_STACK_LINE(3349)
		int order = this->getOrderForLayerID(a->layerID);		HX_STACK_VAR(order,"order");
		HX_STACK_LINE(3352)
		if (((order < (::Lambda_obj::count(this->layersToDraw,null()) - (int)1)))){
			HX_STACK_LINE(3353)
			a->layerID = this->layersToDraw->get((order + (int)1));
		}
		HX_STACK_LINE(3357)
		this->moveActorToLayer(a,a->layerID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,sendBackward,(void))

Void Engine_obj::sendToBack( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Engine::sendToBack","com/stencyl/Engine.hx",3339);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(3340)
		this->removeActorFromLayer(a,a->layerID);
		HX_STACK_LINE(3341)
		a->layerID = this->getBottomLayer();
		HX_STACK_LINE(3342)
		this->moveActorToLayer(a,a->layerID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,sendToBack,(void))

Void Engine_obj::moveToLayer( ::com::stencyl::models::Actor a,int layerID){
{
		HX_STACK_PUSH("Engine::moveToLayer","com/stencyl/Engine.hx",3319);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(layerID,"layerID");
		HX_STACK_LINE(3320)
		int lID = layerID;		HX_STACK_VAR(lID,"lID");
		HX_STACK_LINE(3323)
		if (((bool((lID < (int)0)) || bool((lID > (::Lambda_obj::count(this->layersToDraw,null()) - (int)1)))))){
			HX_STACK_LINE(3324)
			return null();
		}
		HX_STACK_LINE(3328)
		if (((a->layerID == layerID))){
			HX_STACK_LINE(3329)
			return null();
		}
		HX_STACK_LINE(3333)
		this->removeActorFromLayer(a,a->layerID);
		HX_STACK_LINE(3334)
		a->layerID = lID;
		HX_STACK_LINE(3335)
		this->moveActorToLayer(a,lID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,moveToLayer,(void))

Void Engine_obj::removeHUDActor( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Engine::removeHUDActor","com/stencyl/Engine.hx",3309);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(3310)
		::de::polygonal::ds::IntHashTable _this = this->hudActors;		HX_STACK_VAR(_this,"_this");
		int key = a->ID;		HX_STACK_VAR(key,"key");
		struct _Function_1_1{
			inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3310);
				{
					HX_STACK_LINE(3310)
					::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(3310)
					int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
					struct _Function_2_1{
						inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3310);
							{
								HX_STACK_LINE(3310)
								int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(3310)
								i = _this1->_data->__get((i + (int)2));
								HX_STACK_LINE(3310)
								while(((i != (int)-1))){
									HX_STACK_LINE(3310)
									if (((_this1->_data->__get(i) == key))){
										HX_STACK_LINE(3310)
										v = _this1->_data->__get((i + (int)1));
										HX_STACK_LINE(3310)
										break;
									}
									HX_STACK_LINE(3310)
									i = _this1->_data->__get((i + (int)2));
								}
								HX_STACK_LINE(3310)
								return v;
							}
							return null();
						}
					};
					HX_STACK_LINE(3310)
					return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_2_1::Block(i,_this1,key)) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(3310)
		int i = _Function_1_1::Block(_this,key);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(3310)
		if (((i == (int)-2147483647))){
			HX_STACK_LINE(3310)
			false;
		}
		else{
			HX_STACK_LINE(3310)
			_this->_key0 = (int)-2147483647;
			HX_STACK_LINE(3310)
			hx::IndexRef((_this->_vals).mPtr,i) = null();
			HX_STACK_LINE(3310)
			_this->_keys[i] = (int)-2147483647;
			HX_STACK_LINE(3310)
			_this->_next[i] = _this->_free;
			HX_STACK_LINE(3310)
			_this->_free = i;
			HX_STACK_LINE(3310)
			bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
			HX_STACK_LINE(3310)
			if (((_this->_sizeLevel > (int)0))){
				HX_STACK_LINE(3310)
				if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
					HX_STACK_LINE(3310)
					if ((_this->_isResizable)){
						HX_STACK_LINE(3310)
						shrink = true;
					}
				}
			}
			HX_STACK_LINE(3310)
			{
				HX_STACK_LINE(3310)
				::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(3310)
				int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(3310)
				int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(3310)
				if (((i1 == (int)-1))){
					HX_STACK_LINE(3310)
					false;
				}
				else{
					HX_STACK_LINE(3310)
					if (((key == _this1->_data->__get(i1)))){
						HX_STACK_LINE(3310)
						if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
							HX_STACK_LINE(3310)
							_this1->_hash[b] = (int)-1;
						}
						else{
							HX_STACK_LINE(3310)
							_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
						}
						HX_STACK_LINE(3310)
						int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(3310)
						_this1->_next[j] = _this1->_free;
						HX_STACK_LINE(3310)
						_this1->_free = j;
						HX_STACK_LINE(3310)
						_this1->_data[(i1 + (int)1)] = (int)-2147483647;
						HX_STACK_LINE(3310)
						_this1->_data[(i1 + (int)2)] = (int)-1;
						HX_STACK_LINE(3310)
						(_this1->_size)--;
						HX_STACK_LINE(3310)
						if (((_this1->_sizeLevel > (int)0))){
							HX_STACK_LINE(3310)
							if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
								HX_STACK_LINE(3310)
								if ((_this1->_isResizable)){
									HX_STACK_LINE(3310)
									_this1->_shrink();
								}
							}
						}
						HX_STACK_LINE(3310)
						true;
					}
					else{
						HX_STACK_LINE(3310)
						bool exists = false;		HX_STACK_VAR(exists,"exists");
						HX_STACK_LINE(3310)
						int i0 = i1;		HX_STACK_VAR(i0,"i0");
						HX_STACK_LINE(3310)
						i1 = _this1->_data->__get((i1 + (int)2));
						HX_STACK_LINE(3310)
						while(((i1 != (int)-1))){
							HX_STACK_LINE(3310)
							if (((_this1->_data->__get(i1) == key))){
								HX_STACK_LINE(3310)
								exists = true;
								HX_STACK_LINE(3310)
								break;
							}
							HX_STACK_LINE(3310)
							i1 = _this1->_data->__get(((i0 = i1) + (int)2));
						}
						HX_STACK_LINE(3310)
						if ((exists)){
							HX_STACK_LINE(3310)
							_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
							HX_STACK_LINE(3310)
							int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(3310)
							_this1->_next[j] = _this1->_free;
							HX_STACK_LINE(3310)
							_this1->_free = j;
							HX_STACK_LINE(3310)
							_this1->_data[(i1 + (int)1)] = (int)-2147483647;
							HX_STACK_LINE(3310)
							_this1->_data[(i1 + (int)2)] = (int)-1;
							HX_STACK_LINE(3310)
							--(_this1->_size);
							HX_STACK_LINE(3310)
							if (((_this1->_sizeLevel > (int)0))){
								HX_STACK_LINE(3310)
								if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
									HX_STACK_LINE(3310)
									if ((_this1->_isResizable)){
										HX_STACK_LINE(3310)
										_this1->_shrink();
									}
								}
							}
							HX_STACK_LINE(3310)
							true;
						}
						else{
							HX_STACK_LINE(3310)
							false;
						}
					}
				}
			}
			HX_STACK_LINE(3310)
			if ((shrink)){
				HX_STACK_LINE(3310)
				(_this->_sizeLevel)--;
				HX_STACK_LINE(3310)
				int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
				HX_STACK_LINE(3310)
				int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
				struct _Function_3_1{
					inline static Array< int > Block( int &newSize){
						HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3310);
						{
							HX_STACK_LINE(3310)
							Array< int > a1;		HX_STACK_VAR(a1,"a1");
							HX_STACK_LINE(3310)
							a1 = Array_obj< int >::__new();
							HX_STACK_LINE(3310)
							a1[(newSize - (int)1)] = null();
							HX_STACK_LINE(3310)
							return a1;
						}
						return null();
					}
				};
				HX_STACK_LINE(3310)
				_this->_next = _Function_3_1::Block(newSize);
				HX_STACK_LINE(3310)
				{
					HX_STACK_LINE(3310)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(3310)
					while(((_g1 < _g))){
						HX_STACK_LINE(3310)
						int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(3310)
						_this->_next[i1] = (i1 + (int)1);
					}
				}
				HX_STACK_LINE(3310)
				_this->_next[(newSize - (int)1)] = (int)-1;
				HX_STACK_LINE(3310)
				_this->_free = (int)0;
				struct _Function_3_2{
					inline static Array< int > Block( int &newSize){
						HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3310);
						{
							HX_STACK_LINE(3310)
							Array< int > a1;		HX_STACK_VAR(a1,"a1");
							HX_STACK_LINE(3310)
							a1 = Array_obj< int >::__new();
							HX_STACK_LINE(3310)
							a1[(newSize - (int)1)] = null();
							HX_STACK_LINE(3310)
							return a1;
						}
						return null();
					}
				};
				HX_STACK_LINE(3310)
				Array< int > tmpKeys = _Function_3_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
				HX_STACK_LINE(3310)
				{
					HX_STACK_LINE(3310)
					int k = newSize;		HX_STACK_VAR(k,"k");
					HX_STACK_LINE(3310)
					if (((k == (int)-1))){
						HX_STACK_LINE(3310)
						k = tmpKeys->length;
					}
					HX_STACK_LINE(3310)
					{
						HX_STACK_LINE(3310)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(3310)
						while(((_g < k))){
							HX_STACK_LINE(3310)
							int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(3310)
							tmpKeys[i1] = (int)-2147483647;
						}
					}
				}
				struct _Function_3_3{
					inline static Array< ::Dynamic > Block( int &newSize){
						HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3310);
						{
							HX_STACK_LINE(3310)
							Array< ::Dynamic > a1;		HX_STACK_VAR(a1,"a1");
							HX_STACK_LINE(3310)
							a1 = Array_obj< ::Dynamic >::__new();
							HX_STACK_LINE(3310)
							a1[(newSize - (int)1)] = null();
							HX_STACK_LINE(3310)
							return a1;
						}
						return null();
					}
				};
				HX_STACK_LINE(3310)
				Array< ::Dynamic > tmpVals = _Function_3_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
				HX_STACK_LINE(3310)
				for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
					int i1 = __it->next();
					{
						HX_STACK_LINE(3310)
						tmpKeys[_this->_free] = _this->_keys->__get(i1);
						HX_STACK_LINE(3310)
						tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
						HX_STACK_LINE(3310)
						_this->_free = _this->_next->__get(_this->_free);
					}
;
				}
				HX_STACK_LINE(3310)
				_this->_keys = tmpKeys;
				HX_STACK_LINE(3310)
				_this->_vals = tmpVals;
				HX_STACK_LINE(3310)
				{
					HX_STACK_LINE(3310)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(3310)
					while(((_g1 < _g))){
						HX_STACK_LINE(3310)
						int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(3310)
						::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
						int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
						HX_STACK_LINE(3310)
						int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
						HX_STACK_LINE(3310)
						if (((i2 == (int)-1))){
							HX_STACK_LINE(3310)
							false;
						}
						else{
							HX_STACK_LINE(3310)
							if (((_this1->_data->__get(i2) == key1))){
								HX_STACK_LINE(3310)
								_this1->_data[(i2 + (int)1)] = i1;
								HX_STACK_LINE(3310)
								true;
							}
							else{
								HX_STACK_LINE(3310)
								i2 = _this1->_data->__get((i2 + (int)2));
								HX_STACK_LINE(3310)
								while(((i2 != (int)-1))){
									HX_STACK_LINE(3310)
									if (((_this1->_data->__get(i2) == key1))){
										HX_STACK_LINE(3310)
										_this1->_data[(i2 + (int)1)] = i1;
										HX_STACK_LINE(3310)
										break;
									}
									HX_STACK_LINE(3310)
									i2 = _this1->_data->__get((i2 + (int)2));
								}
								HX_STACK_LINE(3310)
								(i2 != (int)-1);
							}
						}
					}
				}
			}
			HX_STACK_LINE(3310)
			true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,removeHUDActor,(void))

Void Engine_obj::addHUDActor( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Engine::addHUDActor","com/stencyl/Engine.hx",3304);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(3305)
		::de::polygonal::ds::IntHashTable _this = this->hudActors;		HX_STACK_VAR(_this,"_this");
		int key = a->ID;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(3305)
		_this->_key0 = (int)-2147483647;
		HX_STACK_LINE(3305)
		if (((_this->_h->_size == _this->_h->_capacity))){
			HX_STACK_LINE(3305)
			int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
			HX_STACK_LINE(3305)
			int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
			struct _Function_2_1{
				inline static Array< int > Block( int &newSize){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3305);
					{
						HX_STACK_LINE(3305)
						Array< int > a1;		HX_STACK_VAR(a1,"a1");
						HX_STACK_LINE(3305)
						a1 = Array_obj< int >::__new();
						HX_STACK_LINE(3305)
						a1[(newSize - (int)1)] = null();
						HX_STACK_LINE(3305)
						return a1;
					}
					return null();
				}
			};
			HX_STACK_LINE(3305)
			Array< int > tmp = _Function_2_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(3305)
			{
				HX_STACK_LINE(3305)
				Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
				int max = oldSize;		HX_STACK_VAR(max,"max");
				HX_STACK_LINE(3305)
				if (((max == (int)-1))){
					HX_STACK_LINE(3305)
					max = src->length;
				}
				HX_STACK_LINE(3305)
				int j = (int)0;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(3305)
				{
					HX_STACK_LINE(3305)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(3305)
					while(((_g < max))){
						HX_STACK_LINE(3305)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(3305)
						tmp[(j)++] = src->__get(i);
					}
				}
				HX_STACK_LINE(3305)
				tmp;
			}
			HX_STACK_LINE(3305)
			_this->_next = tmp;
			struct _Function_2_2{
				inline static Array< int > Block( int &newSize){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3305);
					{
						HX_STACK_LINE(3305)
						Array< int > a1;		HX_STACK_VAR(a1,"a1");
						HX_STACK_LINE(3305)
						a1 = Array_obj< int >::__new();
						HX_STACK_LINE(3305)
						a1[(newSize - (int)1)] = null();
						HX_STACK_LINE(3305)
						return a1;
					}
					return null();
				}
			};
			HX_STACK_LINE(3305)
			Array< int > tmp1 = _Function_2_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(3305)
			{
				HX_STACK_LINE(3305)
				Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
				int max = oldSize;		HX_STACK_VAR(max,"max");
				HX_STACK_LINE(3305)
				if (((max == (int)-1))){
					HX_STACK_LINE(3305)
					max = src->length;
				}
				HX_STACK_LINE(3305)
				int j = (int)0;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(3305)
				{
					HX_STACK_LINE(3305)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(3305)
					while(((_g < max))){
						HX_STACK_LINE(3305)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(3305)
						tmp1[(j)++] = src->__get(i);
					}
				}
				HX_STACK_LINE(3305)
				tmp1;
			}
			HX_STACK_LINE(3305)
			_this->_keys = tmp1;
			HX_STACK_LINE(3305)
			{
				HX_STACK_LINE(3305)
				int _g = oldSize;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(3305)
				while(((_g < newSize))){
					HX_STACK_LINE(3305)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(3305)
					_this->_keys[i] = (int)-2147483647;
				}
			}
			HX_STACK_LINE(3305)
			{
				HX_STACK_LINE(3305)
				int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
				int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(3305)
				while(((_g1 < _g))){
					HX_STACK_LINE(3305)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(3305)
					_this->_next[i] = (i + (int)1);
				}
			}
			HX_STACK_LINE(3305)
			_this->_next[(newSize - (int)1)] = (int)-1;
			HX_STACK_LINE(3305)
			_this->_free = oldSize;
			struct _Function_2_3{
				inline static Array< ::Dynamic > Block( int &newSize){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3305);
					{
						HX_STACK_LINE(3305)
						Array< ::Dynamic > a1;		HX_STACK_VAR(a1,"a1");
						HX_STACK_LINE(3305)
						a1 = Array_obj< ::Dynamic >::__new();
						HX_STACK_LINE(3305)
						a1[(newSize - (int)1)] = null();
						HX_STACK_LINE(3305)
						return a1;
					}
					return null();
				}
			};
			HX_STACK_LINE(3305)
			Array< ::Dynamic > tmp2 = _Function_2_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(3305)
			{
				HX_STACK_LINE(3305)
				Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
				int max = oldSize;		HX_STACK_VAR(max,"max");
				HX_STACK_LINE(3305)
				if (((max == (int)-1))){
					HX_STACK_LINE(3305)
					max = src->length;
				}
				HX_STACK_LINE(3305)
				int j = (int)0;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(3305)
				{
					HX_STACK_LINE(3305)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(3305)
					while(((_g < max))){
						HX_STACK_LINE(3305)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(3305)
						tmp2[(j)++] = src->__get(i).StaticCast< ::com::stencyl::models::Actor >();
					}
				}
				HX_STACK_LINE(3305)
				tmp2;
			}
			HX_STACK_LINE(3305)
			_this->_vals = tmp2;
			HX_STACK_LINE(3305)
			(_this->_sizeLevel)++;
		}
		HX_STACK_LINE(3305)
		{
			HX_STACK_LINE(3305)
			::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(3305)
			if (((_this1->_size == _this1->_capacity))){
				HX_STACK_LINE(3305)
				if ((_this1->_isResizable)){
					HX_STACK_LINE(3305)
					_this1->_expand();
				}
			}
			HX_STACK_LINE(3305)
			int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(3305)
			_this1->_free = _this1->_next->__get(_this1->_free);
			HX_STACK_LINE(3305)
			_this1->_data[i] = key;
			HX_STACK_LINE(3305)
			_this1->_data[(i + (int)1)] = _this->_free;
			HX_STACK_LINE(3305)
			int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(3305)
			int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(3305)
			if (((j == (int)-1))){
				HX_STACK_LINE(3305)
				_this1->_hash[b] = i;
				HX_STACK_LINE(3305)
				(_this1->_size)++;
				HX_STACK_LINE(3305)
				true;
			}
			else{
				HX_STACK_LINE(3305)
				bool first = (_this1->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
				HX_STACK_LINE(3305)
				int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(3305)
				while(((t != (int)-1))){
					HX_STACK_LINE(3305)
					if (((_this1->_data->__get(t) == key))){
						HX_STACK_LINE(3305)
						first = false;
					}
					HX_STACK_LINE(3305)
					j = t;
					HX_STACK_LINE(3305)
					t = _this1->_data->__get((t + (int)2));
				}
				HX_STACK_LINE(3305)
				_this1->_data[(j + (int)2)] = i;
				HX_STACK_LINE(3305)
				(_this1->_size)++;
				HX_STACK_LINE(3305)
				first;
			}
		}
		HX_STACK_LINE(3305)
		hx::IndexRef((_this->_vals).mPtr,_this->_free) = a;
		HX_STACK_LINE(3305)
		_this->_keys[_this->_free] = key;
		HX_STACK_LINE(3305)
		_this->_free = _this->_next->__get(_this->_free);
		HX_STACK_LINE(3305)
		true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,addHUDActor,(void))

Array< ::Dynamic > Engine_obj::getRecycledActorsOfType( ::com::stencyl::models::actor::ActorType type){
	HX_STACK_PUSH("Engine::getRecycledActorsOfType","com/stencyl/Engine.hx",3299);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(3299)
	return this->recycledActorsOfType->get(type->ID);
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getRecycledActorsOfType,return )

Array< ::Dynamic > Engine_obj::getActorsOfType( ::com::stencyl::models::actor::ActorType type){
	HX_STACK_PUSH("Engine::getActorsOfType","com/stencyl/Engine.hx",3278);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(3279)
	if (((type == null()))){
		HX_STACK_LINE(3281)
		::haxe::Log_obj::trace(HX_CSTRING("Error: getActorsOfType was passed a null type"),hx::SourceInfo(HX_CSTRING("Engine.hx"),3281,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("getActorsOfType")));
		HX_STACK_LINE(3282)
		return Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(3285)
	Array< ::Dynamic > result = this->actorsOfType->get(type->ID);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(3287)
	if (((result != null()))){
		HX_STACK_LINE(3288)
		return this->actorsOfType->get(type->ID);
	}
	else{
		HX_STACK_LINE(3293)
		return Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(3287)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getActorsOfType,return )

::com::stencyl::models::Actor Engine_obj::getActor( int ID){
	HX_STACK_PUSH("Engine::getActor","com/stencyl/Engine.hx",3273);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ID,"ID");
	struct _Function_1_1{
		inline static ::com::stencyl::models::Actor Block( ::com::stencyl::Engine_obj *__this,int &ID){
			HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3274);
			{
				HX_STACK_LINE(3274)
				::de::polygonal::ds::IntHashTable _this = __this->allActors;		HX_STACK_VAR(_this,"_this");
				struct _Function_2_1{
					inline static int Block( int &ID,::de::polygonal::ds::IntHashTable _this){
						HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3274);
						{
							HX_STACK_LINE(3274)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(3274)
							int i = _this1->_hash->__get((int((ID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
							struct _Function_3_1{
								inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &ID){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3274);
									{
										HX_STACK_LINE(3274)
										int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
										HX_STACK_LINE(3274)
										i = _this1->_data->__get((i + (int)2));
										HX_STACK_LINE(3274)
										while(((i != (int)-1))){
											HX_STACK_LINE(3274)
											if (((_this1->_data->__get(i) == ID))){
												HX_STACK_LINE(3274)
												v = _this1->_data->__get((i + (int)1));
												HX_STACK_LINE(3274)
												break;
											}
											HX_STACK_LINE(3274)
											i = _this1->_data->__get((i + (int)2));
										}
										HX_STACK_LINE(3274)
										return v;
									}
									return null();
								}
							};
							HX_STACK_LINE(3274)
							return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == ID))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,ID)) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(3274)
				int i = _Function_2_1::Block(ID,_this);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(3274)
				return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::Actor(null()) : ::com::stencyl::models::Actor(_this->_vals->__GetItem(i)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(3273)
	return _Function_1_1::Block(this,ID);
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,getActor,return )

Dynamic Engine_obj::shout( ::String msg,Dynamic args){
	HX_STACK_PUSH("Engine::shout","com/stencyl/Engine.hx",3264);
	HX_STACK_THIS(this);
	HX_STACK_ARG(msg,"msg");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(3264)
	return this->behaviors->call(msg,args);
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,shout,return )

Dynamic Engine_obj::say( ::String behaviorName,::String msg,Dynamic args){
	HX_STACK_PUSH("Engine::say","com/stencyl/Engine.hx",3259);
	HX_STACK_THIS(this);
	HX_STACK_ARG(behaviorName,"behaviorName");
	HX_STACK_ARG(msg,"msg");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(3259)
	return this->behaviors->call2(behaviorName,msg,args);
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,say,return )

Void Engine_obj::setValue( ::String behaviorName,::String attributeName,Dynamic value){
{
		HX_STACK_PUSH("Engine::setValue","com/stencyl/Engine.hx",3254);
		HX_STACK_THIS(this);
		HX_STACK_ARG(behaviorName,"behaviorName");
		HX_STACK_ARG(attributeName,"attributeName");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(3254)
		this->behaviors->setAttribute(behaviorName,attributeName,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,setValue,(void))

Dynamic Engine_obj::getValue( ::String behaviorName,::String attributeName){
	HX_STACK_PUSH("Engine::getValue","com/stencyl/Engine.hx",3249);
	HX_STACK_THIS(this);
	HX_STACK_ARG(behaviorName,"behaviorName");
	HX_STACK_ARG(attributeName,"attributeName");
	HX_STACK_LINE(3249)
	return this->behaviors->getAttribute(behaviorName,attributeName);
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,getValue,return )

Void Engine_obj::draw( ){
{
		HX_STACK_PUSH("Engine::draw","com/stencyl/Engine.hx",3117);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3118)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::scene::Layer > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::scene::Layer >(this->layers->iterator());  __it->hasNext(); ){
			::com::stencyl::models::scene::Layer l = __it->next();
			{
				HX_STACK_LINE(3120)
				l->overlay->get_graphics()->clear();
				HX_STACK_LINE(3132)
				l->bitmapOverlay->__Field(HX_CSTRING("graphics"),true)->__Field(HX_CSTRING("clear"),true)();
			}
;
		}
		HX_STACK_LINE(3137)
		if ((!(((this->hudActors->_h->_size == (int)0))))){
			HX_STACK_LINE(3138)
			for(::cpp::FastIterator_obj< ::com::stencyl::models::Actor > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Actor >(this->hudActors->iterator());  __it->hasNext(); ){
				::com::stencyl::models::Actor a = __it->next();
				if (((bool(a->dead) || bool(a->recycled)))){
					HX_STACK_LINE(3143)
					::de::polygonal::ds::IntHashTable _this = this->hudActors;		HX_STACK_VAR(_this,"_this");
					int key = a->ID;		HX_STACK_VAR(key,"key");
					struct _Function_3_1{
						inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3143);
							{
								HX_STACK_LINE(3143)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(3143)
								int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
								struct _Function_4_1{
									inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
										HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3143);
										{
											HX_STACK_LINE(3143)
											int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(3143)
											i = _this1->_data->__get((i + (int)2));
											HX_STACK_LINE(3143)
											while(((i != (int)-1))){
												HX_STACK_LINE(3143)
												if (((_this1->_data->__get(i) == key))){
													HX_STACK_LINE(3143)
													v = _this1->_data->__get((i + (int)1));
													HX_STACK_LINE(3143)
													break;
												}
												HX_STACK_LINE(3143)
												i = _this1->_data->__get((i + (int)2));
											}
											HX_STACK_LINE(3143)
											return v;
										}
										return null();
									}
								};
								HX_STACK_LINE(3143)
								return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_4_1::Block(i,_this1,key)) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(3143)
					int i = _Function_3_1::Block(_this,key);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(3143)
					if (((i == (int)-2147483647))){
						HX_STACK_LINE(3143)
						false;
					}
					else{
						HX_STACK_LINE(3143)
						_this->_key0 = (int)-2147483647;
						HX_STACK_LINE(3143)
						hx::IndexRef((_this->_vals).mPtr,i) = null();
						HX_STACK_LINE(3143)
						_this->_keys[i] = (int)-2147483647;
						HX_STACK_LINE(3143)
						_this->_next[i] = _this->_free;
						HX_STACK_LINE(3143)
						_this->_free = i;
						HX_STACK_LINE(3143)
						bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
						HX_STACK_LINE(3143)
						if (((_this->_sizeLevel > (int)0))){
							HX_STACK_LINE(3143)
							if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
								HX_STACK_LINE(3143)
								if ((_this->_isResizable)){
									HX_STACK_LINE(3143)
									shrink = true;
								}
							}
						}
						HX_STACK_LINE(3143)
						{
							HX_STACK_LINE(3143)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(3143)
							int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(3143)
							int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(3143)
							if (((i1 == (int)-1))){
								HX_STACK_LINE(3143)
								false;
							}
							else{
								HX_STACK_LINE(3143)
								if (((key == _this1->_data->__get(i1)))){
									HX_STACK_LINE(3143)
									if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
										HX_STACK_LINE(3143)
										_this1->_hash[b] = (int)-1;
									}
									else{
										HX_STACK_LINE(3143)
										_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
									}
									HX_STACK_LINE(3143)
									int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(3143)
									_this1->_next[j] = _this1->_free;
									HX_STACK_LINE(3143)
									_this1->_free = j;
									HX_STACK_LINE(3143)
									_this1->_data[(i1 + (int)1)] = (int)-2147483647;
									HX_STACK_LINE(3143)
									_this1->_data[(i1 + (int)2)] = (int)-1;
									HX_STACK_LINE(3143)
									(_this1->_size)--;
									HX_STACK_LINE(3143)
									if (((_this1->_sizeLevel > (int)0))){
										HX_STACK_LINE(3143)
										if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
											HX_STACK_LINE(3143)
											if ((_this1->_isResizable)){
												HX_STACK_LINE(3143)
												_this1->_shrink();
											}
										}
									}
									HX_STACK_LINE(3143)
									true;
								}
								else{
									HX_STACK_LINE(3143)
									bool exists = false;		HX_STACK_VAR(exists,"exists");
									HX_STACK_LINE(3143)
									int i0 = i1;		HX_STACK_VAR(i0,"i0");
									HX_STACK_LINE(3143)
									i1 = _this1->_data->__get((i1 + (int)2));
									HX_STACK_LINE(3143)
									while(((i1 != (int)-1))){
										HX_STACK_LINE(3143)
										if (((_this1->_data->__get(i1) == key))){
											HX_STACK_LINE(3143)
											exists = true;
											HX_STACK_LINE(3143)
											break;
										}
										HX_STACK_LINE(3143)
										i1 = _this1->_data->__get(((i0 = i1) + (int)2));
									}
									HX_STACK_LINE(3143)
									if ((exists)){
										HX_STACK_LINE(3143)
										_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
										HX_STACK_LINE(3143)
										int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(3143)
										_this1->_next[j] = _this1->_free;
										HX_STACK_LINE(3143)
										_this1->_free = j;
										HX_STACK_LINE(3143)
										_this1->_data[(i1 + (int)1)] = (int)-2147483647;
										HX_STACK_LINE(3143)
										_this1->_data[(i1 + (int)2)] = (int)-1;
										HX_STACK_LINE(3143)
										--(_this1->_size);
										HX_STACK_LINE(3143)
										if (((_this1->_sizeLevel > (int)0))){
											HX_STACK_LINE(3143)
											if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
												HX_STACK_LINE(3143)
												if ((_this1->_isResizable)){
													HX_STACK_LINE(3143)
													_this1->_shrink();
												}
											}
										}
										HX_STACK_LINE(3143)
										true;
									}
									else{
										HX_STACK_LINE(3143)
										false;
									}
								}
							}
						}
						HX_STACK_LINE(3143)
						if ((shrink)){
							HX_STACK_LINE(3143)
							(_this->_sizeLevel)--;
							HX_STACK_LINE(3143)
							int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
							HX_STACK_LINE(3143)
							int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
							struct _Function_5_1{
								inline static Array< int > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3143);
									{
										HX_STACK_LINE(3143)
										Array< int > a1;		HX_STACK_VAR(a1,"a1");
										HX_STACK_LINE(3143)
										a1 = Array_obj< int >::__new();
										HX_STACK_LINE(3143)
										a1[(newSize - (int)1)] = null();
										HX_STACK_LINE(3143)
										return a1;
									}
									return null();
								}
							};
							HX_STACK_LINE(3143)
							_this->_next = _Function_5_1::Block(newSize);
							HX_STACK_LINE(3143)
							{
								HX_STACK_LINE(3143)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(3143)
								while(((_g1 < _g))){
									HX_STACK_LINE(3143)
									int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
									HX_STACK_LINE(3143)
									_this->_next[i1] = (i1 + (int)1);
								}
							}
							HX_STACK_LINE(3143)
							_this->_next[(newSize - (int)1)] = (int)-1;
							HX_STACK_LINE(3143)
							_this->_free = (int)0;
							struct _Function_5_2{
								inline static Array< int > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3143);
									{
										HX_STACK_LINE(3143)
										Array< int > a1;		HX_STACK_VAR(a1,"a1");
										HX_STACK_LINE(3143)
										a1 = Array_obj< int >::__new();
										HX_STACK_LINE(3143)
										a1[(newSize - (int)1)] = null();
										HX_STACK_LINE(3143)
										return a1;
									}
									return null();
								}
							};
							HX_STACK_LINE(3143)
							Array< int > tmpKeys = _Function_5_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
							HX_STACK_LINE(3143)
							{
								HX_STACK_LINE(3143)
								int k = newSize;		HX_STACK_VAR(k,"k");
								HX_STACK_LINE(3143)
								if (((k == (int)-1))){
									HX_STACK_LINE(3143)
									k = tmpKeys->length;
								}
								HX_STACK_LINE(3143)
								{
									HX_STACK_LINE(3143)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(3143)
									while(((_g < k))){
										HX_STACK_LINE(3143)
										int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(3143)
										tmpKeys[i1] = (int)-2147483647;
									}
								}
							}
							struct _Function_5_3{
								inline static Array< ::Dynamic > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3143);
									{
										HX_STACK_LINE(3143)
										Array< ::Dynamic > a1;		HX_STACK_VAR(a1,"a1");
										HX_STACK_LINE(3143)
										a1 = Array_obj< ::Dynamic >::__new();
										HX_STACK_LINE(3143)
										a1[(newSize - (int)1)] = null();
										HX_STACK_LINE(3143)
										return a1;
									}
									return null();
								}
							};
							HX_STACK_LINE(3143)
							Array< ::Dynamic > tmpVals = _Function_5_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
							HX_STACK_LINE(3143)
							for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
								int i1 = __it->next();
								{
									HX_STACK_LINE(3143)
									tmpKeys[_this->_free] = _this->_keys->__get(i1);
									HX_STACK_LINE(3143)
									tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
									HX_STACK_LINE(3143)
									_this->_free = _this->_next->__get(_this->_free);
								}
;
							}
							HX_STACK_LINE(3143)
							_this->_keys = tmpKeys;
							HX_STACK_LINE(3143)
							_this->_vals = tmpVals;
							HX_STACK_LINE(3143)
							{
								HX_STACK_LINE(3143)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(3143)
								while(((_g1 < _g))){
									HX_STACK_LINE(3143)
									int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
									HX_STACK_LINE(3143)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
									HX_STACK_LINE(3143)
									int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
									HX_STACK_LINE(3143)
									if (((i2 == (int)-1))){
										HX_STACK_LINE(3143)
										false;
									}
									else{
										HX_STACK_LINE(3143)
										if (((_this1->_data->__get(i2) == key1))){
											HX_STACK_LINE(3143)
											_this1->_data[(i2 + (int)1)] = i1;
											HX_STACK_LINE(3143)
											true;
										}
										else{
											HX_STACK_LINE(3143)
											i2 = _this1->_data->__get((i2 + (int)2));
											HX_STACK_LINE(3143)
											while(((i2 != (int)-1))){
												HX_STACK_LINE(3143)
												if (((_this1->_data->__get(i2) == key1))){
													HX_STACK_LINE(3143)
													_this1->_data[(i2 + (int)1)] = i1;
													HX_STACK_LINE(3143)
													break;
												}
												HX_STACK_LINE(3143)
												i2 = _this1->_data->__get((i2 + (int)2));
											}
											HX_STACK_LINE(3143)
											(i2 != (int)-1);
										}
									}
								}
							}
						}
						HX_STACK_LINE(3143)
						true;
					}
				}
;
			}
		}
		HX_STACK_LINE(3150)
		if ((!(((this->allActors->_h->_size == (int)0))))){
			HX_STACK_LINE(3151)
			for(::cpp::FastIterator_obj< ::com::stencyl::models::Actor > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Actor >(this->allActors->iterator());  __it->hasNext(); ){
				::com::stencyl::models::Actor a = __it->next();
				if (((a->whenDrawingListeners->__Field(HX_CSTRING("length"),true) > (int)0))){
					struct _Function_3_1{
						inline static ::com::stencyl::models::scene::Layer Block( ::com::stencyl::Engine_obj *__this,::com::stencyl::models::Actor &a){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3156);
							{
								HX_STACK_LINE(3156)
								::de::polygonal::ds::IntHashTable _this = __this->layers;		HX_STACK_VAR(_this,"_this");
								int key = a->layerID;		HX_STACK_VAR(key,"key");
								struct _Function_4_1{
									inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
										HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3156);
										{
											HX_STACK_LINE(3156)
											::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(3156)
											int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
											struct _Function_5_1{
												inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
													HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3156);
													{
														HX_STACK_LINE(3156)
														int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
														HX_STACK_LINE(3156)
														i = _this1->_data->__get((i + (int)2));
														HX_STACK_LINE(3156)
														while(((i != (int)-1))){
															HX_STACK_LINE(3156)
															if (((_this1->_data->__get(i) == key))){
																HX_STACK_LINE(3156)
																v = _this1->_data->__get((i + (int)1));
																HX_STACK_LINE(3156)
																break;
															}
															HX_STACK_LINE(3156)
															i = _this1->_data->__get((i + (int)2));
														}
														HX_STACK_LINE(3156)
														return v;
													}
													return null();
												}
											};
											HX_STACK_LINE(3156)
											return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_5_1::Block(i,_this1,key)) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(3156)
								int i = _Function_4_1::Block(_this,key);		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(3156)
								return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::scene::Layer(null()) : ::com::stencyl::models::scene::Layer(_this->_vals->__GetItem(i)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(3156)
					::com::stencyl::models::scene::Layer layer = _Function_3_1::Block(this,a);		HX_STACK_VAR(layer,"layer");
					HX_STACK_LINE(3158)
					if (((layer != null()))){
						HX_STACK_LINE(3160)
						layer->drawnOn = true;
						HX_STACK_LINE(3162)
						this->g->graphics = layer->overlay->get_graphics();
						HX_STACK_LINE(3169)
						this->g->canvas = layer->bitmapOverlay;
						HX_STACK_LINE(3172)
						{
							HX_STACK_LINE(3172)
							::com::stencyl::graphics::G _this = this->g;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(3172)
							_this->drawActor = true;
							HX_STACK_LINE(3172)
							_this->actor = a;
							HX_STACK_LINE(3172)
							if ((a->smoothMove)){
								HX_STACK_LINE(3172)
								Float drawX = ((a->drawX - ::Math_obj::floor((Float(a->cacheWidth) / Float((int)2)))) - a->currOffset->x);		HX_STACK_VAR(drawX,"drawX");
								HX_STACK_LINE(3172)
								Float drawY = ((a->drawY - ::Math_obj::floor((Float(a->cacheHeight) / Float((int)2)))) - a->currOffset->y);		HX_STACK_VAR(drawY,"drawY");
								HX_STACK_LINE(3172)
								if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
									HX_STACK_LINE(3172)
									_this->x = (drawX * _this->scaleX);
									HX_STACK_LINE(3172)
									_this->y = (drawY * _this->scaleY);
								}
								else{
									HX_STACK_LINE(3172)
									_this->x = (drawX * _this->scaleX);
									HX_STACK_LINE(3172)
									_this->y = (drawY * _this->scaleY);
								}
							}
							else{
								HX_STACK_LINE(3172)
								if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
									HX_STACK_LINE(3172)
									_this->x = (a->colX * _this->scaleX);
									HX_STACK_LINE(3172)
									_this->y = (a->colY * _this->scaleY);
								}
								else{
									HX_STACK_LINE(3172)
									_this->x = (a->colX * _this->scaleX);
									HX_STACK_LINE(3172)
									_this->y = (a->colY * _this->scaleY);
								}
							}
						}
						HX_STACK_LINE(3173)
						{
							HX_STACK_LINE(3173)
							::com::stencyl::graphics::G _this = this->g;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(3173)
							_this->alpha = (int)1;
							HX_STACK_LINE(3173)
							_this->strokeSize = (int)0;
							HX_STACK_LINE(3173)
							_this->fillColor = (int)0;
							HX_STACK_LINE(3173)
							_this->strokeColor = (int)0;
							HX_STACK_LINE(3173)
							_this->font = _this->defaultFont;
						}
						HX_STACK_LINE(3174)
						{
							HX_STACK_LINE(3174)
							Dynamic listeners = a->whenDrawingListeners;		HX_STACK_VAR(listeners,"listeners");
							Dynamic value = this->g;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(3174)
							int r = (int)0;		HX_STACK_VAR(r,"r");
							HX_STACK_LINE(3174)
							while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
								HX_STACK_LINE(3174)
								try{
									HX_STACK_LINE(3174)
									Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
									HX_STACK_LINE(3174)
									f(value,(int)0,(int)0,listeners).Cast< Void >();
									HX_STACK_LINE(3174)
									if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
										HX_STACK_LINE(3174)
										(r)--;
									}
								}
								catch(Dynamic __e){
									if (__e.IsClass< ::String >() ){
										HX_STACK_BEGIN_CATCH
										::String e = __e;{
											HX_STACK_LINE(3174)
											::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4084,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners4")));
										}
									}
									else throw(__e);
								}
								HX_STACK_LINE(3174)
								(r)++;
							}
						}
					}
				}
;
			}
		}
		HX_STACK_LINE(3183)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::scene::TileLayer > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::scene::TileLayer >(this->tileLayers->iterator());  __it->hasNext(); ){
			::com::stencyl::models::scene::TileLayer layer = __it->next();
			{
				HX_STACK_LINE(3185)
				Dynamic scrollFactor = this->scrollFactors->get(layer->layerID);		HX_STACK_VAR(scrollFactor,"scrollFactor");
				HX_STACK_LINE(3187)
				if (((bool(this->cameraMoved) || bool(this->tileUpdated)))){
					HX_STACK_LINE(3188)
					layer->draw(::Std_obj::_int(::com::stencyl::Engine_obj::cameraX),::Std_obj::_int(::com::stencyl::Engine_obj::cameraY),scrollFactor);
				}
				HX_STACK_LINE(3192)
				layer->setPosition(::com::stencyl::Engine_obj::cameraX,::com::stencyl::Engine_obj::cameraY,scrollFactor);
			}
;
		}
		HX_STACK_LINE(3195)
		this->tileUpdated = false;
		HX_STACK_LINE(3199)
		this->g->graphics = this->transitionLayer->get_graphics();
		HX_STACK_LINE(3206)
		this->g->canvas = this->transitionBitmapLayer;
		HX_STACK_LINE(3209)
		{
			HX_STACK_LINE(3209)
			::com::stencyl::graphics::G _this = this->g;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(3209)
			_this->drawActor = false;
			HX_STACK_LINE(3209)
			_this->actor = null();
			HX_STACK_LINE(3209)
			_this->x = (int)0;
			HX_STACK_LINE(3209)
			_this->y = (int)0;
		}
		HX_STACK_LINE(3210)
		this->g->graphics->clear();
		HX_STACK_LINE(3217)
		this->g->canvas->__Field(HX_CSTRING("graphics"),true)->__Field(HX_CSTRING("clear"),true)();
		HX_STACK_LINE(3220)
		{
			HX_STACK_LINE(3220)
			::com::stencyl::graphics::G _this = this->g;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(3220)
			_this->alpha = (int)1;
			HX_STACK_LINE(3220)
			_this->strokeSize = (int)0;
			HX_STACK_LINE(3220)
			_this->fillColor = (int)0;
			HX_STACK_LINE(3220)
			_this->strokeColor = (int)0;
			HX_STACK_LINE(3220)
			_this->font = _this->defaultFont;
		}
		HX_STACK_LINE(3221)
		{
			HX_STACK_LINE(3221)
			Dynamic listeners = this->whenDrawingListeners;		HX_STACK_VAR(listeners,"listeners");
			Dynamic value = this->g;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(3221)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(3221)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(3221)
				try{
					HX_STACK_LINE(3221)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(3221)
					f(value,(int)0,(int)0,listeners).Cast< Void >();
					HX_STACK_LINE(3221)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(3221)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(3221)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4084,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners4")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(3221)
				(r)++;
			}
		}
		HX_STACK_LINE(3224)
		if (((bool((this->leave != null())) && bool(this->leave->isActive())))){
			HX_STACK_LINE(3225)
			this->leave->draw(null());
		}
		else{
			HX_STACK_LINE(3230)
			if (((bool((this->enter != null())) && bool(this->enter->isActive())))){
				HX_STACK_LINE(3231)
				this->enter->draw(null());
			}
		}
		HX_STACK_LINE(3236)
		if (((bool((this->shaders != null())) && bool((this->shaders->length > (int)0))))){
			HX_STACK_LINE(3237)
			this->shaders->__get((int)0).StaticCast< ::com::stencyl::graphics::shaders::PostProcess >()->capture();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,draw,(void))

bool Engine_obj::isPaused( ){
	HX_STACK_PUSH("Engine::isPaused","com/stencyl/Engine.hx",3081);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3081)
	return ::com::stencyl::Engine_obj::paused;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,isPaused,return )

Void Engine_obj::unpause( ){
{
		HX_STACK_PUSH("Engine::unpause","com/stencyl/Engine.hx",3061);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3062)
		::com::stencyl::Engine_obj::paused = false;
		HX_STACK_LINE(3064)
		if ((!(((this->allActors->_h->_size == (int)0))))){
			HX_STACK_LINE(3065)
			for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->allActors->keys());  __it->hasNext(); ){
				int actorID = __it->next();
				{
					struct _Function_3_1{
						inline static ::com::stencyl::models::Actor Block( ::com::stencyl::Engine_obj *__this,int &actorID){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3068);
							{
								HX_STACK_LINE(3068)
								::de::polygonal::ds::IntHashTable _this = __this->allActors;		HX_STACK_VAR(_this,"_this");
								struct _Function_4_1{
									inline static int Block( int &actorID,::de::polygonal::ds::IntHashTable _this){
										HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3068);
										{
											HX_STACK_LINE(3068)
											::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(3068)
											int i = _this1->_hash->__get((int((actorID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
											struct _Function_5_1{
												inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &actorID){
													HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3068);
													{
														HX_STACK_LINE(3068)
														int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
														HX_STACK_LINE(3068)
														i = _this1->_data->__get((i + (int)2));
														HX_STACK_LINE(3068)
														while(((i != (int)-1))){
															HX_STACK_LINE(3068)
															if (((_this1->_data->__get(i) == actorID))){
																HX_STACK_LINE(3068)
																v = _this1->_data->__get((i + (int)1));
																HX_STACK_LINE(3068)
																break;
															}
															HX_STACK_LINE(3068)
															i = _this1->_data->__get((i + (int)2));
														}
														HX_STACK_LINE(3068)
														return v;
													}
													return null();
												}
											};
											HX_STACK_LINE(3068)
											return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == actorID))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_5_1::Block(i,_this1,actorID)) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(3068)
								int i = _Function_4_1::Block(actorID,_this);		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(3068)
								return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::Actor(null()) : ::com::stencyl::models::Actor(_this->_vals->__GetItem(i)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(3068)
					::com::stencyl::models::Actor a = _Function_3_1::Block(this,actorID);		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(3070)
					if (((a != null()))){
						HX_STACK_LINE(3071)
						a->unpause();
					}
				}
;
			}
		}
		HX_STACK_LINE(3077)
		{
			HX_STACK_LINE(3077)
			Dynamic listeners = this->whenPausedListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(3077)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(3077)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(3077)
				try{
					HX_STACK_LINE(3077)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(3077)
					f(false,listeners).Cast< Void >();
					HX_STACK_LINE(3077)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(3077)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(3077)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(3077)
				(r)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,unpause,(void))

Void Engine_obj::pause( ){
{
		HX_STACK_PUSH("Engine::pause","com/stencyl/Engine.hx",3036);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3037)
		if ((this->isTransitioning())){
			HX_STACK_LINE(3038)
			return null();
		}
		HX_STACK_LINE(3042)
		::com::stencyl::Engine_obj::paused = true;
		HX_STACK_LINE(3044)
		if ((!(((this->allActors->_h->_size == (int)0))))){
			HX_STACK_LINE(3045)
			for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->allActors->keys());  __it->hasNext(); ){
				int actorID = __it->next();
				{
					struct _Function_3_1{
						inline static ::com::stencyl::models::Actor Block( ::com::stencyl::Engine_obj *__this,int &actorID){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3048);
							{
								HX_STACK_LINE(3048)
								::de::polygonal::ds::IntHashTable _this = __this->allActors;		HX_STACK_VAR(_this,"_this");
								struct _Function_4_1{
									inline static int Block( int &actorID,::de::polygonal::ds::IntHashTable _this){
										HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3048);
										{
											HX_STACK_LINE(3048)
											::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(3048)
											int i = _this1->_hash->__get((int((actorID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
											struct _Function_5_1{
												inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &actorID){
													HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",3048);
													{
														HX_STACK_LINE(3048)
														int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
														HX_STACK_LINE(3048)
														i = _this1->_data->__get((i + (int)2));
														HX_STACK_LINE(3048)
														while(((i != (int)-1))){
															HX_STACK_LINE(3048)
															if (((_this1->_data->__get(i) == actorID))){
																HX_STACK_LINE(3048)
																v = _this1->_data->__get((i + (int)1));
																HX_STACK_LINE(3048)
																break;
															}
															HX_STACK_LINE(3048)
															i = _this1->_data->__get((i + (int)2));
														}
														HX_STACK_LINE(3048)
														return v;
													}
													return null();
												}
											};
											HX_STACK_LINE(3048)
											return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == actorID))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_5_1::Block(i,_this1,actorID)) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(3048)
								int i = _Function_4_1::Block(actorID,_this);		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(3048)
								return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::Actor(null()) : ::com::stencyl::models::Actor(_this->_vals->__GetItem(i)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(3048)
					::com::stencyl::models::Actor a = _Function_3_1::Block(this,actorID);		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(3050)
					if (((a != null()))){
						HX_STACK_LINE(3051)
						a->pause();
					}
				}
;
			}
		}
		HX_STACK_LINE(3057)
		{
			HX_STACK_LINE(3057)
			Dynamic listeners = this->whenPausedListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(3057)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(3057)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(3057)
				try{
					HX_STACK_LINE(3057)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(3057)
					f(true,listeners).Cast< Void >();
					HX_STACK_LINE(3057)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(3057)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(3057)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(3057)
				(r)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,pause,(void))

Void Engine_obj::cameraFollow( ::com::stencyl::models::Actor actor,hx::Null< bool >  __o_lockX,hx::Null< bool >  __o_lockY){
bool lockX = __o_lockX.Default(true);
bool lockY = __o_lockY.Default(true);
	HX_STACK_PUSH("Engine::cameraFollow","com/stencyl/Engine.hx",3023);
	HX_STACK_THIS(this);
	HX_STACK_ARG(actor,"actor");
	HX_STACK_ARG(lockX,"lockX");
	HX_STACK_ARG(lockY,"lockY");
{
		HX_STACK_LINE(3023)
		this->camera->setLocation((actor->colX + (Float(actor->cacheWidth) / Float((int)2))),(actor->colY + (Float(actor->cacheHeight) / Float((int)2))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,cameraFollow,(void))

Void Engine_obj::stopShakingScreen( ){
{
		HX_STACK_PUSH("Engine::stopShakingScreen","com/stencyl/Engine.hx",3010);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3011)
		this->shakeTimer = (int)0;
		HX_STACK_LINE(3012)
		this->isShaking = false;
		HX_STACK_LINE(3014)
		this->master->set_x((int)0);
		HX_STACK_LINE(3015)
		this->master->set_y((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,stopShakingScreen,(void))

Void Engine_obj::shakeScreen( Float intensity,Float duration){
{
		HX_STACK_PUSH("Engine::shakeScreen","com/stencyl/Engine.hx",3003);
		HX_STACK_THIS(this);
		HX_STACK_ARG(intensity,"intensity");
		HX_STACK_ARG(duration,"duration");
		HX_STACK_LINE(3004)
		this->shakeTimer = ::Std_obj::_int((::com::stencyl::Engine_obj::MS_PER_SEC * duration));
		HX_STACK_LINE(3005)
		this->isShaking = true;
		HX_STACK_LINE(3006)
		this->shakeIntensity = intensity;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,shakeScreen,(void))

Void Engine_obj::removeTask( ::com::stencyl::behavior::TimedTask taskToRemove){
{
		HX_STACK_PUSH("Engine::removeTask","com/stencyl/Engine.hx",2994);
		HX_STACK_THIS(this);
		HX_STACK_ARG(taskToRemove,"taskToRemove");
		HX_STACK_LINE(2994)
		this->tasks->remove(taskToRemove);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,removeTask,(void))

Void Engine_obj::addTask( ::com::stencyl::behavior::TimedTask task){
{
		HX_STACK_PUSH("Engine::addTask","com/stencyl/Engine.hx",2989);
		HX_STACK_THIS(this);
		HX_STACK_ARG(task,"task");
		HX_STACK_LINE(2989)
		this->tasks->push(task);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,addTask,(void))

Void Engine_obj::soundFinished( int channelNum){
{
		HX_STACK_PUSH("Engine::soundFinished","com/stencyl/Engine.hx",2962);
		HX_STACK_THIS(this);
		HX_STACK_ARG(channelNum,"channelNum");
		HX_STACK_LINE(2963)
		::com::stencyl::models::SoundChannel sc = hx::TCast< com::stencyl::models::SoundChannel >::cast(this->channels->__get(channelNum).StaticCast< ::com::stencyl::models::SoundChannel >());		HX_STACK_VAR(sc,"sc");
		HX_STACK_LINE(2965)
		Dynamic channelListeners = this->soundListeners->get(channelNum);		HX_STACK_VAR(channelListeners,"channelListeners");
		HX_STACK_LINE(2966)
		Dynamic clipListeners = this->soundListeners->get(sc->currentClip);		HX_STACK_VAR(clipListeners,"clipListeners");
		HX_STACK_LINE(2971)
		if (((channelListeners != null()))){
			HX_STACK_LINE(2973)
			Dynamic listeners = channelListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(2973)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(2973)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(2973)
				try{
					HX_STACK_LINE(2973)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(2973)
					f(listeners).Cast< Void >();
					HX_STACK_LINE(2973)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(2973)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(2973)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4003,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(2973)
				(r)++;
			}
		}
		HX_STACK_LINE(2976)
		if (((clipListeners != null()))){
			HX_STACK_LINE(2978)
			Dynamic listeners = clipListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(2978)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(2978)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(2978)
				try{
					HX_STACK_LINE(2978)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(2978)
					f(listeners).Cast< Void >();
					HX_STACK_LINE(2978)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(2978)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(2978)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4003,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(2978)
				(r)++;
			}
		}
		HX_STACK_LINE(2981)
		sc->currentSound = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,soundFinished,(void))

Void Engine_obj::handleCollision( ::com::stencyl::models::Actor a,::com::stencyl::models::actor::Collision event){
{
		HX_STACK_PUSH("Engine::handleCollision","com/stencyl/Engine.hx",2820);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(2821)
		int type1 = a->typeID;		HX_STACK_VAR(type1,"type1");
		HX_STACK_LINE(2822)
		int type2 = event->otherActor->typeID;		HX_STACK_VAR(type2,"type2");
		HX_STACK_LINE(2824)
		int group1 = (int)0;		HX_STACK_VAR(group1,"group1");
		HX_STACK_LINE(2825)
		int group2 = (int)0;		HX_STACK_VAR(group2,"group2");
		HX_STACK_LINE(2827)
		if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
			HX_STACK_LINE(2829)
			group1 = event->thisActor->groupID;
			HX_STACK_LINE(2830)
			group2 = event->otherActor->groupID;
		}
		else{
			HX_STACK_LINE(2835)
			if (((event->thisShape != null()))){
				HX_STACK_LINE(2837)
				int value = event->thisShape->groupID;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(2839)
				if (((value == ::com::stencyl::models::GameModel_obj::INHERIT_ID))){
					HX_STACK_LINE(2841)
					::box2D::dynamics::B2Body body = event->thisShape->getBody();		HX_STACK_VAR(body,"body");
					HX_STACK_LINE(2843)
					if (((body != null()))){
						HX_STACK_LINE(2844)
						value = body->getUserData()->__Field(HX_CSTRING("groupID"),true);
					}
				}
				HX_STACK_LINE(2849)
				group1 = (::com::stencyl::models::Actor_obj::GROUP_OFFSET + value);
			}
			else{
				HX_STACK_LINE(2853)
				group1 = (::com::stencyl::models::Actor_obj::GROUP_OFFSET + event->thisActor->groupID);
			}
			HX_STACK_LINE(2857)
			if (((event->otherShape != null()))){
				HX_STACK_LINE(2859)
				int value = event->otherShape->groupID;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(2861)
				if (((value == ::com::stencyl::models::GameModel_obj::INHERIT_ID))){
					HX_STACK_LINE(2863)
					::box2D::dynamics::B2Body body = event->otherShape->getBody();		HX_STACK_VAR(body,"body");
					HX_STACK_LINE(2865)
					if (((body != null()))){
						HX_STACK_LINE(2866)
						value = body->getUserData()->__Field(HX_CSTRING("groupID"),true);
					}
				}
				HX_STACK_LINE(2871)
				group2 = (::com::stencyl::models::Actor_obj::GROUP_OFFSET + value);
			}
			else{
				HX_STACK_LINE(2875)
				group2 = (::com::stencyl::models::Actor_obj::GROUP_OFFSET + event->otherActor->groupID);
			}
		}
		HX_STACK_LINE(2881)
		if (((this->collisionPairs != null()))){
			struct _Function_2_1{
				inline static bool Block( ::com::stencyl::Engine_obj *__this,::com::stencyl::models::Actor &a){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2883);
					{
						HX_STACK_LINE(2883)
						int key = a->ID;		HX_STACK_VAR(key,"key");
						struct _Function_3_1{
							inline static bool Block( ::com::stencyl::Engine_obj *__this,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2883);
								{
									HX_STACK_LINE(2883)
									::de::polygonal::ds::IntIntHashTable _this = __this->collisionPairs->_h;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2883)
									int i = _this->_hash->__get((int((key * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i,"i");
									struct _Function_4_1{
										inline static bool Block( int &i,::de::polygonal::ds::IntIntHashTable _this,int &key){
											HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2883);
											{
												HX_STACK_LINE(2883)
												bool exists = false;		HX_STACK_VAR(exists,"exists");
												HX_STACK_LINE(2883)
												i = _this->_data->__get((i + (int)2));
												HX_STACK_LINE(2883)
												while(((i != (int)-1))){
													HX_STACK_LINE(2883)
													if (((_this->_data->__get(i) == key))){
														HX_STACK_LINE(2883)
														exists = true;
														HX_STACK_LINE(2883)
														break;
													}
													HX_STACK_LINE(2883)
													i = _this->_data->__get((i + (int)2));
												}
												HX_STACK_LINE(2883)
												return exists;
											}
											return null();
										}
									};
									HX_STACK_LINE(2883)
									return (  (((i == (int)-1))) ? bool(false) : bool((  (((_this->_data->__get(i) == key))) ? bool(true) : bool(_Function_4_1::Block(i,_this,key)) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(2883)
						return _Function_3_1::Block(__this,key);
					}
					return null();
				}
			};
			HX_STACK_LINE(2883)
			if ((!(_Function_2_1::Block(this,a)))){
				HX_STACK_LINE(2885)
				::de::polygonal::ds::IntHashTable _this = this->collisionPairs;		HX_STACK_VAR(_this,"_this");
				int key = a->ID;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(2885)
				_this->_key0 = (int)-2147483647;
				HX_STACK_LINE(2885)
				if (((_this->_h->_size == _this->_h->_capacity))){
					HX_STACK_LINE(2885)
					int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
					HX_STACK_LINE(2885)
					int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
					struct _Function_4_1{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2885);
							{
								HX_STACK_LINE(2885)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(2885)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(2885)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(2885)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(2885)
					Array< int > tmp = _Function_4_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(2885)
					{
						HX_STACK_LINE(2885)
						Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(2885)
						if (((max == (int)-1))){
							HX_STACK_LINE(2885)
							max = src->length;
						}
						HX_STACK_LINE(2885)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(2885)
						{
							HX_STACK_LINE(2885)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2885)
							while(((_g < max))){
								HX_STACK_LINE(2885)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(2885)
								tmp[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(2885)
						tmp;
					}
					HX_STACK_LINE(2885)
					_this->_next = tmp;
					struct _Function_4_2{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2885);
							{
								HX_STACK_LINE(2885)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(2885)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(2885)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(2885)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(2885)
					Array< int > tmp1 = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(2885)
					{
						HX_STACK_LINE(2885)
						Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(2885)
						if (((max == (int)-1))){
							HX_STACK_LINE(2885)
							max = src->length;
						}
						HX_STACK_LINE(2885)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(2885)
						{
							HX_STACK_LINE(2885)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2885)
							while(((_g < max))){
								HX_STACK_LINE(2885)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(2885)
								tmp1[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(2885)
						tmp1;
					}
					HX_STACK_LINE(2885)
					_this->_keys = tmp1;
					HX_STACK_LINE(2885)
					{
						HX_STACK_LINE(2885)
						int _g = oldSize;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2885)
						while(((_g < newSize))){
							HX_STACK_LINE(2885)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(2885)
							_this->_keys[i] = (int)-2147483647;
						}
					}
					HX_STACK_LINE(2885)
					{
						HX_STACK_LINE(2885)
						int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
						int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2885)
						while(((_g1 < _g))){
							HX_STACK_LINE(2885)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(2885)
							_this->_next[i] = (i + (int)1);
						}
					}
					HX_STACK_LINE(2885)
					_this->_next[(newSize - (int)1)] = (int)-1;
					HX_STACK_LINE(2885)
					_this->_free = oldSize;
					struct _Function_4_3{
						inline static Array< ::Dynamic > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2885);
							{
								HX_STACK_LINE(2885)
								Array< ::Dynamic > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(2885)
								a1 = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(2885)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(2885)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(2885)
					Array< ::Dynamic > tmp2 = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(2885)
					{
						HX_STACK_LINE(2885)
						Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(2885)
						if (((max == (int)-1))){
							HX_STACK_LINE(2885)
							max = src->length;
						}
						HX_STACK_LINE(2885)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(2885)
						{
							HX_STACK_LINE(2885)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2885)
							while(((_g < max))){
								HX_STACK_LINE(2885)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(2885)
								tmp2[(j)++] = src->__get(i).StaticCast< ::haxe::ds::IntMap >();
							}
						}
						HX_STACK_LINE(2885)
						tmp2;
					}
					HX_STACK_LINE(2885)
					_this->_vals = tmp2;
					HX_STACK_LINE(2885)
					(_this->_sizeLevel)++;
				}
				HX_STACK_LINE(2885)
				{
					HX_STACK_LINE(2885)
					::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(2885)
					if (((_this1->_size == _this1->_capacity))){
						HX_STACK_LINE(2885)
						if ((_this1->_isResizable)){
							HX_STACK_LINE(2885)
							_this1->_expand();
						}
					}
					HX_STACK_LINE(2885)
					int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(2885)
					_this1->_free = _this1->_next->__get(_this1->_free);
					HX_STACK_LINE(2885)
					_this1->_data[i] = key;
					HX_STACK_LINE(2885)
					_this1->_data[(i + (int)1)] = _this->_free;
					HX_STACK_LINE(2885)
					int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(2885)
					int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(2885)
					if (((j == (int)-1))){
						HX_STACK_LINE(2885)
						_this1->_hash[b] = i;
						HX_STACK_LINE(2885)
						(_this1->_size)++;
						HX_STACK_LINE(2885)
						true;
					}
					else{
						HX_STACK_LINE(2885)
						bool first = (_this1->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
						HX_STACK_LINE(2885)
						int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2885)
						while(((t != (int)-1))){
							HX_STACK_LINE(2885)
							if (((_this1->_data->__get(t) == key))){
								HX_STACK_LINE(2885)
								first = false;
							}
							HX_STACK_LINE(2885)
							j = t;
							HX_STACK_LINE(2885)
							t = _this1->_data->__get((t + (int)2));
						}
						HX_STACK_LINE(2885)
						_this1->_data[(j + (int)2)] = i;
						HX_STACK_LINE(2885)
						(_this1->_size)++;
						HX_STACK_LINE(2885)
						first;
					}
				}
				HX_STACK_LINE(2885)
				hx::IndexRef((_this->_vals).mPtr,_this->_free) = ::haxe::ds::IntMap_obj::__new();
				HX_STACK_LINE(2885)
				_this->_keys[_this->_free] = key;
				HX_STACK_LINE(2885)
				_this->_free = _this->_next->__get(_this->_free);
				HX_STACK_LINE(2885)
				true;
			}
			struct _Function_2_2{
				inline static bool Block( ::com::stencyl::Engine_obj *__this,::com::stencyl::models::actor::Collision &event){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2888);
					{
						HX_STACK_LINE(2888)
						int key = event->otherActor->ID;		HX_STACK_VAR(key,"key");
						struct _Function_3_1{
							inline static bool Block( ::com::stencyl::Engine_obj *__this,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2888);
								{
									HX_STACK_LINE(2888)
									::de::polygonal::ds::IntIntHashTable _this = __this->collisionPairs->_h;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2888)
									int i = _this->_hash->__get((int((key * (int)73856093)) & int(_this->_mask)));		HX_STACK_VAR(i,"i");
									struct _Function_4_1{
										inline static bool Block( int &i,::de::polygonal::ds::IntIntHashTable _this,int &key){
											HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2888);
											{
												HX_STACK_LINE(2888)
												bool exists = false;		HX_STACK_VAR(exists,"exists");
												HX_STACK_LINE(2888)
												i = _this->_data->__get((i + (int)2));
												HX_STACK_LINE(2888)
												while(((i != (int)-1))){
													HX_STACK_LINE(2888)
													if (((_this->_data->__get(i) == key))){
														HX_STACK_LINE(2888)
														exists = true;
														HX_STACK_LINE(2888)
														break;
													}
													HX_STACK_LINE(2888)
													i = _this->_data->__get((i + (int)2));
												}
												HX_STACK_LINE(2888)
												return exists;
											}
											return null();
										}
									};
									HX_STACK_LINE(2888)
									return (  (((i == (int)-1))) ? bool(false) : bool((  (((_this->_data->__get(i) == key))) ? bool(true) : bool(_Function_4_1::Block(i,_this,key)) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(2888)
						return _Function_3_1::Block(__this,key);
					}
					return null();
				}
			};
			HX_STACK_LINE(2888)
			if ((!(_Function_2_2::Block(this,event)))){
				HX_STACK_LINE(2890)
				::de::polygonal::ds::IntHashTable _this = this->collisionPairs;		HX_STACK_VAR(_this,"_this");
				int key = event->otherActor->ID;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(2890)
				_this->_key0 = (int)-2147483647;
				HX_STACK_LINE(2890)
				if (((_this->_h->_size == _this->_h->_capacity))){
					HX_STACK_LINE(2890)
					int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
					HX_STACK_LINE(2890)
					int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
					struct _Function_4_1{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2890);
							{
								HX_STACK_LINE(2890)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(2890)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(2890)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(2890)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(2890)
					Array< int > tmp = _Function_4_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(2890)
					{
						HX_STACK_LINE(2890)
						Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(2890)
						if (((max == (int)-1))){
							HX_STACK_LINE(2890)
							max = src->length;
						}
						HX_STACK_LINE(2890)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(2890)
						{
							HX_STACK_LINE(2890)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2890)
							while(((_g < max))){
								HX_STACK_LINE(2890)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(2890)
								tmp[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(2890)
						tmp;
					}
					HX_STACK_LINE(2890)
					_this->_next = tmp;
					struct _Function_4_2{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2890);
							{
								HX_STACK_LINE(2890)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(2890)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(2890)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(2890)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(2890)
					Array< int > tmp1 = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(2890)
					{
						HX_STACK_LINE(2890)
						Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(2890)
						if (((max == (int)-1))){
							HX_STACK_LINE(2890)
							max = src->length;
						}
						HX_STACK_LINE(2890)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(2890)
						{
							HX_STACK_LINE(2890)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2890)
							while(((_g < max))){
								HX_STACK_LINE(2890)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(2890)
								tmp1[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(2890)
						tmp1;
					}
					HX_STACK_LINE(2890)
					_this->_keys = tmp1;
					HX_STACK_LINE(2890)
					{
						HX_STACK_LINE(2890)
						int _g = oldSize;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2890)
						while(((_g < newSize))){
							HX_STACK_LINE(2890)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(2890)
							_this->_keys[i] = (int)-2147483647;
						}
					}
					HX_STACK_LINE(2890)
					{
						HX_STACK_LINE(2890)
						int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
						int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2890)
						while(((_g1 < _g))){
							HX_STACK_LINE(2890)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(2890)
							_this->_next[i] = (i + (int)1);
						}
					}
					HX_STACK_LINE(2890)
					_this->_next[(newSize - (int)1)] = (int)-1;
					HX_STACK_LINE(2890)
					_this->_free = oldSize;
					struct _Function_4_3{
						inline static Array< ::Dynamic > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2890);
							{
								HX_STACK_LINE(2890)
								Array< ::Dynamic > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(2890)
								a1 = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(2890)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(2890)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(2890)
					Array< ::Dynamic > tmp2 = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(2890)
					{
						HX_STACK_LINE(2890)
						Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(2890)
						if (((max == (int)-1))){
							HX_STACK_LINE(2890)
							max = src->length;
						}
						HX_STACK_LINE(2890)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(2890)
						{
							HX_STACK_LINE(2890)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2890)
							while(((_g < max))){
								HX_STACK_LINE(2890)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(2890)
								tmp2[(j)++] = src->__get(i).StaticCast< ::haxe::ds::IntMap >();
							}
						}
						HX_STACK_LINE(2890)
						tmp2;
					}
					HX_STACK_LINE(2890)
					_this->_vals = tmp2;
					HX_STACK_LINE(2890)
					(_this->_sizeLevel)++;
				}
				HX_STACK_LINE(2890)
				{
					HX_STACK_LINE(2890)
					::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(2890)
					if (((_this1->_size == _this1->_capacity))){
						HX_STACK_LINE(2890)
						if ((_this1->_isResizable)){
							HX_STACK_LINE(2890)
							_this1->_expand();
						}
					}
					HX_STACK_LINE(2890)
					int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(2890)
					_this1->_free = _this1->_next->__get(_this1->_free);
					HX_STACK_LINE(2890)
					_this1->_data[i] = key;
					HX_STACK_LINE(2890)
					_this1->_data[(i + (int)1)] = _this->_free;
					HX_STACK_LINE(2890)
					int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(2890)
					int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(2890)
					if (((j == (int)-1))){
						HX_STACK_LINE(2890)
						_this1->_hash[b] = i;
						HX_STACK_LINE(2890)
						(_this1->_size)++;
						HX_STACK_LINE(2890)
						true;
					}
					else{
						HX_STACK_LINE(2890)
						bool first = (_this1->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
						HX_STACK_LINE(2890)
						int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2890)
						while(((t != (int)-1))){
							HX_STACK_LINE(2890)
							if (((_this1->_data->__get(t) == key))){
								HX_STACK_LINE(2890)
								first = false;
							}
							HX_STACK_LINE(2890)
							j = t;
							HX_STACK_LINE(2890)
							t = _this1->_data->__get((t + (int)2));
						}
						HX_STACK_LINE(2890)
						_this1->_data[(j + (int)2)] = i;
						HX_STACK_LINE(2890)
						(_this1->_size)++;
						HX_STACK_LINE(2890)
						first;
					}
				}
				HX_STACK_LINE(2890)
				hx::IndexRef((_this->_vals).mPtr,_this->_free) = ::haxe::ds::IntMap_obj::__new();
				HX_STACK_LINE(2890)
				_this->_keys[_this->_free] = key;
				HX_STACK_LINE(2890)
				_this->_free = _this->_next->__get(_this->_free);
				HX_STACK_LINE(2890)
				true;
			}
			struct _Function_2_3{
				inline static ::haxe::ds::IntMap Block( ::com::stencyl::Engine_obj *__this,::com::stencyl::models::Actor &a){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2893);
					{
						HX_STACK_LINE(2893)
						::de::polygonal::ds::IntHashTable _this = __this->collisionPairs;		HX_STACK_VAR(_this,"_this");
						int key = a->ID;		HX_STACK_VAR(key,"key");
						struct _Function_3_1{
							inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2893);
								{
									HX_STACK_LINE(2893)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(2893)
									int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
									struct _Function_4_1{
										inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
											HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2893);
											{
												HX_STACK_LINE(2893)
												int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(2893)
												i = _this1->_data->__get((i + (int)2));
												HX_STACK_LINE(2893)
												while(((i != (int)-1))){
													HX_STACK_LINE(2893)
													if (((_this1->_data->__get(i) == key))){
														HX_STACK_LINE(2893)
														v = _this1->_data->__get((i + (int)1));
														HX_STACK_LINE(2893)
														break;
													}
													HX_STACK_LINE(2893)
													i = _this1->_data->__get((i + (int)2));
												}
												HX_STACK_LINE(2893)
												return v;
											}
											return null();
										}
									};
									HX_STACK_LINE(2893)
									return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_4_1::Block(i,_this1,key)) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(2893)
						int i = _Function_3_1::Block(_this,key);		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(2893)
						return (  (((i == (int)-2147483647))) ? ::haxe::ds::IntMap(null()) : ::haxe::ds::IntMap(_this->_vals->__GetItem(i)) );
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static ::haxe::ds::IntMap Block( ::com::stencyl::Engine_obj *__this,::com::stencyl::models::actor::Collision &event){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2893);
					{
						HX_STACK_LINE(2893)
						::de::polygonal::ds::IntHashTable _this = __this->collisionPairs;		HX_STACK_VAR(_this,"_this");
						int key = event->otherActor->ID;		HX_STACK_VAR(key,"key");
						struct _Function_3_1{
							inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2893);
								{
									HX_STACK_LINE(2893)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(2893)
									int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
									struct _Function_4_1{
										inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
											HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2893);
											{
												HX_STACK_LINE(2893)
												int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(2893)
												i = _this1->_data->__get((i + (int)2));
												HX_STACK_LINE(2893)
												while(((i != (int)-1))){
													HX_STACK_LINE(2893)
													if (((_this1->_data->__get(i) == key))){
														HX_STACK_LINE(2893)
														v = _this1->_data->__get((i + (int)1));
														HX_STACK_LINE(2893)
														break;
													}
													HX_STACK_LINE(2893)
													i = _this1->_data->__get((i + (int)2));
												}
												HX_STACK_LINE(2893)
												return v;
											}
											return null();
										}
									};
									HX_STACK_LINE(2893)
									return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_4_1::Block(i,_this1,key)) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(2893)
						int i = _Function_3_1::Block(_this,key);		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(2893)
						return (  (((i == (int)-2147483647))) ? ::haxe::ds::IntMap(null()) : ::haxe::ds::IntMap(_this->_vals->__GetItem(i)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(2893)
			if (((bool((_Function_2_3::Block(this,a))->exists(event->otherActor->ID)) || bool((_Function_2_4::Block(this,event))->exists(a->ID))))){
				HX_STACK_LINE(2894)
				return null();
			}
		}
		HX_STACK_LINE(2899)
		if (((bool((type1 > (int)-1)) || bool((type2 > (int)-1))))){
			HX_STACK_LINE(2901)
			if (((bool((bool(!(event->otherCollidedWithTerrain)) && bool(this->collisionListeners->exists(type1)))) && bool(this->collisionListeners->get(type1)->__Field(HX_CSTRING("exists"),true)(type2))))){
				HX_STACK_LINE(2903)
				Dynamic listeners = this->collisionListeners->get(type1)->__Field(HX_CSTRING("get"),true)(type2);		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(2904)
				{
					HX_STACK_LINE(2904)
					int r = (int)0;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(2904)
					while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(2904)
						try{
							HX_STACK_LINE(2904)
							Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(2904)
							f(event,listeners).Cast< Void >();
							HX_STACK_LINE(2904)
							if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
								HX_STACK_LINE(2904)
								(r)--;
							}
						}
						catch(Dynamic __e){
							if (__e.IsClass< ::String >() ){
								HX_STACK_BEGIN_CATCH
								::String e = __e;{
									HX_STACK_LINE(2904)
									::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
								}
							}
							else throw(__e);
						}
						HX_STACK_LINE(2904)
						(r)++;
					}
				}
				HX_STACK_LINE(2906)
				if (((listeners->__Field(HX_CSTRING("length"),true) == (int)0))){
					HX_STACK_LINE(2907)
					this->collisionListeners->get(type1)->__Field(HX_CSTRING("delete"),true)(type2);
				}
			}
			HX_STACK_LINE(2912)
			if (((bool((bool((type1 != type2)) && bool(this->collisionListeners->exists(type2)))) && bool(this->collisionListeners->get(type2)->__Field(HX_CSTRING("exists"),true)(type1))))){
				HX_STACK_LINE(2914)
				Dynamic listeners = this->collisionListeners->get(type2)->__Field(HX_CSTRING("get"),true)(type1);		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(2915)
				::com::stencyl::models::actor::Collision reverseEvent = event->switchData();		HX_STACK_VAR(reverseEvent,"reverseEvent");
				HX_STACK_LINE(2917)
				{
					HX_STACK_LINE(2917)
					int r = (int)0;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(2917)
					while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(2917)
						try{
							HX_STACK_LINE(2917)
							Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(2917)
							f(reverseEvent,listeners).Cast< Void >();
							HX_STACK_LINE(2917)
							if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
								HX_STACK_LINE(2917)
								(r)--;
							}
						}
						catch(Dynamic __e){
							if (__e.IsClass< ::String >() ){
								HX_STACK_BEGIN_CATCH
								::String e = __e;{
									HX_STACK_LINE(2917)
									::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
								}
							}
							else throw(__e);
						}
						HX_STACK_LINE(2917)
						(r)++;
					}
				}
				HX_STACK_LINE(2919)
				if (((listeners->__Field(HX_CSTRING("length"),true) == (int)0))){
					HX_STACK_LINE(2920)
					this->collisionListeners->get(type2)->__Field(HX_CSTRING("delete"),true)(type1);
				}
			}
		}
		HX_STACK_LINE(2926)
		if (((bool((group1 > (int)0)) && bool((group2 > (int)0))))){
			HX_STACK_LINE(2928)
			if (((bool(this->collisionListeners->exists(group1)) && bool(this->collisionListeners->get(group1)->__Field(HX_CSTRING("exists"),true)(group2))))){
				HX_STACK_LINE(2930)
				Dynamic listeners = this->collisionListeners->get(group1)->__Field(HX_CSTRING("get"),true)(group2);		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(2931)
				{
					HX_STACK_LINE(2931)
					int r = (int)0;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(2931)
					while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(2931)
						try{
							HX_STACK_LINE(2931)
							Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(2931)
							f(event,listeners).Cast< Void >();
							HX_STACK_LINE(2931)
							if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
								HX_STACK_LINE(2931)
								(r)--;
							}
						}
						catch(Dynamic __e){
							if (__e.IsClass< ::String >() ){
								HX_STACK_BEGIN_CATCH
								::String e = __e;{
									HX_STACK_LINE(2931)
									::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
								}
							}
							else throw(__e);
						}
						HX_STACK_LINE(2931)
						(r)++;
					}
				}
				HX_STACK_LINE(2933)
				if (((listeners->__Field(HX_CSTRING("length"),true) == (int)0))){
					HX_STACK_LINE(2934)
					this->collisionListeners->get(group1)->__Field(HX_CSTRING("delete"),true)(group2);
				}
			}
			HX_STACK_LINE(2939)
			if (((bool((bool((group1 != group2)) && bool(this->collisionListeners->exists(group2)))) && bool(this->collisionListeners->get(group2)->__Field(HX_CSTRING("exists"),true)(group1))))){
				HX_STACK_LINE(2941)
				Dynamic listeners = this->collisionListeners->get(group2)->__Field(HX_CSTRING("get"),true)(group1);		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(2942)
				::com::stencyl::models::actor::Collision reverseEvent = event->switchData();		HX_STACK_VAR(reverseEvent,"reverseEvent");
				HX_STACK_LINE(2944)
				{
					HX_STACK_LINE(2944)
					int r = (int)0;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(2944)
					while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(2944)
						try{
							HX_STACK_LINE(2944)
							Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(2944)
							f(reverseEvent,listeners).Cast< Void >();
							HX_STACK_LINE(2944)
							if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
								HX_STACK_LINE(2944)
								(r)--;
							}
						}
						catch(Dynamic __e){
							if (__e.IsClass< ::String >() ){
								HX_STACK_BEGIN_CATCH
								::String e = __e;{
									HX_STACK_LINE(2944)
									::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
								}
							}
							else throw(__e);
						}
						HX_STACK_LINE(2944)
						(r)++;
					}
				}
				HX_STACK_LINE(2946)
				if (((listeners->__Field(HX_CSTRING("length"),true) == (int)0))){
					HX_STACK_LINE(2947)
					this->collisionListeners->get(group2)->__Field(HX_CSTRING("delete"),true)(group1);
				}
			}
		}
		HX_STACK_LINE(2954)
		if (((this->collisionPairs != null()))){
			struct _Function_2_1{
				inline static ::haxe::ds::IntMap Block( ::com::stencyl::Engine_obj *__this,::com::stencyl::models::Actor &a){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2956);
					{
						HX_STACK_LINE(2956)
						::de::polygonal::ds::IntHashTable _this = __this->collisionPairs;		HX_STACK_VAR(_this,"_this");
						int key = a->ID;		HX_STACK_VAR(key,"key");
						struct _Function_3_1{
							inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2956);
								{
									HX_STACK_LINE(2956)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(2956)
									int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
									struct _Function_4_1{
										inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
											HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2956);
											{
												HX_STACK_LINE(2956)
												int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(2956)
												i = _this1->_data->__get((i + (int)2));
												HX_STACK_LINE(2956)
												while(((i != (int)-1))){
													HX_STACK_LINE(2956)
													if (((_this1->_data->__get(i) == key))){
														HX_STACK_LINE(2956)
														v = _this1->_data->__get((i + (int)1));
														HX_STACK_LINE(2956)
														break;
													}
													HX_STACK_LINE(2956)
													i = _this1->_data->__get((i + (int)2));
												}
												HX_STACK_LINE(2956)
												return v;
											}
											return null();
										}
									};
									HX_STACK_LINE(2956)
									return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_4_1::Block(i,_this1,key)) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(2956)
						int i = _Function_3_1::Block(_this,key);		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(2956)
						return (  (((i == (int)-2147483647))) ? ::haxe::ds::IntMap(null()) : ::haxe::ds::IntMap(_this->_vals->__GetItem(i)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(2956)
			(_Function_2_1::Block(this,a))->set(event->otherActor->ID,false);
			struct _Function_2_2{
				inline static ::haxe::ds::IntMap Block( ::com::stencyl::Engine_obj *__this,::com::stencyl::models::actor::Collision &event){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2957);
					{
						HX_STACK_LINE(2957)
						::de::polygonal::ds::IntHashTable _this = __this->collisionPairs;		HX_STACK_VAR(_this,"_this");
						int key = event->otherActor->ID;		HX_STACK_VAR(key,"key");
						struct _Function_3_1{
							inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2957);
								{
									HX_STACK_LINE(2957)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(2957)
									int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
									struct _Function_4_1{
										inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
											HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2957);
											{
												HX_STACK_LINE(2957)
												int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(2957)
												i = _this1->_data->__get((i + (int)2));
												HX_STACK_LINE(2957)
												while(((i != (int)-1))){
													HX_STACK_LINE(2957)
													if (((_this1->_data->__get(i) == key))){
														HX_STACK_LINE(2957)
														v = _this1->_data->__get((i + (int)1));
														HX_STACK_LINE(2957)
														break;
													}
													HX_STACK_LINE(2957)
													i = _this1->_data->__get((i + (int)2));
												}
												HX_STACK_LINE(2957)
												return v;
											}
											return null();
										}
									};
									HX_STACK_LINE(2957)
									return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_4_1::Block(i,_this1,key)) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(2957)
						int i = _Function_3_1::Block(_this,key);		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(2957)
						return (  (((i == (int)-2147483647))) ? ::haxe::ds::IntMap(null()) : ::haxe::ds::IntMap(_this->_vals->__GetItem(i)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(2957)
			(_Function_2_2::Block(this,event))->set(a->ID,false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,handleCollision,(void))

Void Engine_obj::focusChanged( bool lost){
{
		HX_STACK_PUSH("Engine::focusChanged","com/stencyl/Engine.hx",2809);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lost,"lost");
		HX_STACK_LINE(2810)
		if (((this->whenFocusChangedListeners == null()))){
			HX_STACK_LINE(2811)
			return null();
		}
		HX_STACK_LINE(2815)
		{
			HX_STACK_LINE(2815)
			Dynamic listeners = this->whenFocusChangedListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(2815)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(2815)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(2815)
				try{
					HX_STACK_LINE(2815)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(2815)
					f(lost,listeners).Cast< Void >();
					HX_STACK_LINE(2815)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(2815)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(2815)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(2815)
				(r)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,focusChanged,(void))

Void Engine_obj::onFocusLost( ::flash::events::Event event){
{
		HX_STACK_PUSH("Engine::onFocusLost","com/stencyl/Engine.hx",2804);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(2804)
		this->focusChanged(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,onFocusLost,(void))

Void Engine_obj::onFocus( ::flash::events::Event event){
{
		HX_STACK_PUSH("Engine::onFocus","com/stencyl/Engine.hx",2799);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(2799)
		this->focusChanged(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,onFocus,(void))

Void Engine_obj::postUpdate( Float currTime){
{
		HX_STACK_PUSH("Engine::postUpdate","com/stencyl/Engine.hx",2729);
		HX_STACK_THIS(this);
		HX_STACK_ARG(currTime,"currTime");
		HX_STACK_LINE(2730)
		while(((this->acc > ::com::stencyl::Engine_obj::STEP_SIZE))){
			HX_STACK_LINE(2732)
			this->update(::com::stencyl::Engine_obj::STEP_SIZE);
			HX_STACK_LINE(2733)
			hx::SubEq(this->acc,::com::stencyl::Engine_obj::STEP_SIZE);
			HX_STACK_LINE(2734)
			::com::stencyl::Input_obj::update();
		}
		HX_STACK_LINE(2737)
		this->lastTime = currTime;
		HX_STACK_LINE(2740)
		if ((!(((this->allActors->_h->_size == (int)0))))){
			HX_STACK_LINE(2741)
			for(::cpp::FastIterator_obj< ::com::stencyl::models::Actor > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Actor >(this->allActors->iterator());  __it->hasNext(); ){
				::com::stencyl::models::Actor a = __it->next();
				{
					HX_STACK_LINE(2744)
					if (((bool((a == null())) || bool((bool((a->physicsMode == (int)0)) && bool((a->body == null()))))))){
						HX_STACK_LINE(2745)
						continue;
					}
					HX_STACK_LINE(2749)
					if (((bool((a->currAnimationAsAnim != null())) && bool(a->currAnimationAsAnim->__Field(HX_CSTRING("needsBitmapUpdate"),true)())))){
						HX_STACK_LINE(2750)
						a->currAnimationAsAnim->__Field(HX_CSTRING("updateBitmap"),true)();
					}
					HX_STACK_LINE(2754)
					if (((bool(a->dead) || bool(a->dying)))){
						HX_STACK_LINE(2756)
						this->removeActor(a);
						HX_STACK_LINE(2757)
						continue;
					}
					else{
						HX_STACK_LINE(2760)
						if (((bool(a->updateMatrix) || bool(a->resetOrigin)))){
							HX_STACK_LINE(2762)
							a->updateDrawingMatrix();
							HX_STACK_LINE(2763)
							a->updateMatrix = false;
							HX_STACK_LINE(2764)
							a->resetOrigin = false;
						}
						else{
							HX_STACK_LINE(2766)
							if ((a->smoothMove)){
								HX_STACK_LINE(2767)
								if (((bool((a->drawX != a->realX)) || bool((a->drawY != a->realY))))){
									HX_STACK_LINE(2769)
									a->updateDrawingMatrix();
								}
							}
						}
					}
					HX_STACK_LINE(2774)
					if (((a->body == null()))){
						HX_STACK_LINE(2775)
						continue;
					}
				}
;
			}
		}
		HX_STACK_LINE(2783)
		int tempX = ::Std_obj::_int((Float(::com::stencyl::Engine_obj::cameraX) / Float(((this->scene->tileWidth * ::com::stencyl::Engine_obj::SCALE)))));		HX_STACK_VAR(tempX,"tempX");
		HX_STACK_LINE(2784)
		int tempY = ::Std_obj::_int((Float(::com::stencyl::Engine_obj::cameraY) / Float(((this->scene->tileHeight * ::com::stencyl::Engine_obj::SCALE)))));		HX_STACK_VAR(tempY,"tempY");
		HX_STACK_LINE(2786)
		this->cameraMoved = !(((bool((this->cameraOldX == tempX)) && bool((this->cameraOldY == tempY)))));
		HX_STACK_LINE(2788)
		this->cameraOldX = tempX;
		HX_STACK_LINE(2789)
		this->cameraOldY = tempY;
		HX_STACK_LINE(2791)
		this->draw();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,postUpdate,(void))

Void Engine_obj::onUpdate( ::flash::events::Event event){
{
		HX_STACK_PUSH("Engine::onUpdate","com/stencyl/Engine.hx",2682);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(2683)
		Float currTime = ::flash::Lib_obj::getTimer();		HX_STACK_VAR(currTime,"currTime");
		HX_STACK_LINE(2684)
		Float elapsedTime = (currTime - this->lastTime);		HX_STACK_VAR(elapsedTime,"elapsedTime");
		HX_STACK_LINE(2688)
		if (((elapsedTime >= (int)200))){
			HX_STACK_LINE(2689)
			elapsedTime = (int)200;
		}
		HX_STACK_LINE(2693)
		hx::AddEq(this->acc,elapsedTime);
		HX_STACK_LINE(2695)
		::com::stencyl::Engine_obj::elapsedTime = elapsedTime;
		HX_STACK_LINE(2697)
		if (((this->leave != null()))){
			HX_STACK_LINE(2700)
			::motion::actuators::SimpleActuator_obj::stage_onEnterFrame(null());
			HX_STACK_LINE(2702)
			if ((this->leave->isComplete())){
				HX_STACK_LINE(2704)
				this->leave->deactivate();
				HX_STACK_LINE(2705)
				this->enterScene();
			}
			HX_STACK_LINE(2708)
			this->postUpdate(currTime);
			HX_STACK_LINE(2710)
			return null();
		}
		HX_STACK_LINE(2713)
		if (((this->enter != null()))){
			HX_STACK_LINE(2714)
			if ((this->enter->isComplete())){
				HX_STACK_LINE(2717)
				this->enter->deactivate();
				HX_STACK_LINE(2718)
				this->enter->cleanup();
				HX_STACK_LINE(2719)
				this->enter = null();
			}
		}
		HX_STACK_LINE(2725)
		this->postUpdate(currTime);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,onUpdate,(void))

Void Engine_obj::update( Float elapsedTime){
{
		HX_STACK_PUSH("Engine::update","com/stencyl/Engine.hx",2343);
		HX_STACK_THIS(this);
		HX_STACK_ARG(elapsedTime,"elapsedTime");
		HX_STACK_LINE(2344)
		if (((this->scene == null()))){
			HX_STACK_LINE(2345)
			return null();
		}
		HX_STACK_LINE(2351)
		::motion::actuators::SimpleActuator_obj::stage_onEnterFrame(null());
		HX_STACK_LINE(2353)
		if ((!(::com::stencyl::Engine_obj::NO_PHYSICS))){
			HX_STACK_LINE(2355)
			::box2D::collision::B2AABB aabb = this->world->getScreenBounds();		HX_STACK_VAR(aabb,"aabb");
			HX_STACK_LINE(2356)
			aabb->lowerBound->x = (Float(((::Math_obj::abs((Float(::com::stencyl::Engine_obj::cameraX) / Float(::com::stencyl::Engine_obj::SCALE))) - ::com::stencyl::Engine_obj::paddingLeft))) / Float(::com::stencyl::Engine_obj::physicsScale));
			HX_STACK_LINE(2357)
			aabb->lowerBound->y = (Float(((::Math_obj::abs((Float(::com::stencyl::Engine_obj::cameraY) / Float(::com::stencyl::Engine_obj::SCALE))) - ::com::stencyl::Engine_obj::paddingTop))) / Float(::com::stencyl::Engine_obj::physicsScale));
			HX_STACK_LINE(2358)
			aabb->upperBound->x = (aabb->lowerBound->x + (Float((((::com::stencyl::Engine_obj::screenWidth + ::com::stencyl::Engine_obj::paddingRight) + ::com::stencyl::Engine_obj::paddingLeft))) / Float(::com::stencyl::Engine_obj::physicsScale)));
			HX_STACK_LINE(2359)
			aabb->upperBound->y = (aabb->lowerBound->y + (Float((((::com::stencyl::Engine_obj::screenHeight + ::com::stencyl::Engine_obj::paddingBottom) + ::com::stencyl::Engine_obj::paddingTop))) / Float(::com::stencyl::Engine_obj::physicsScale)));
		}
		HX_STACK_LINE(2362)
		int inputx = ::Std_obj::_int((Float(::com::stencyl::Input_obj::mouseX) / Float(::com::stencyl::Engine_obj::SCALE)));		HX_STACK_VAR(inputx,"inputx");
		HX_STACK_LINE(2363)
		int inputy = ::Std_obj::_int((Float(::com::stencyl::Input_obj::mouseY) / Float(::com::stencyl::Engine_obj::SCALE)));		HX_STACK_VAR(inputy,"inputy");
		HX_STACK_LINE(2365)
		if ((::com::stencyl::Input_obj::mousePressed)){
			HX_STACK_LINE(2367)
			::com::stencyl::behavior::Script_obj::mpx = inputx;
			HX_STACK_LINE(2368)
			::com::stencyl::behavior::Script_obj::mpy = inputy;
			HX_STACK_LINE(2369)
			{
				HX_STACK_LINE(2369)
				Dynamic listeners = this->whenMousePressedListeners;		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(2369)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(2369)
				while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
					HX_STACK_LINE(2369)
					try{
						HX_STACK_LINE(2369)
						Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(2369)
						f(listeners).Cast< Void >();
						HX_STACK_LINE(2369)
						if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
							HX_STACK_LINE(2369)
							(r)--;
						}
					}
					catch(Dynamic __e){
						if (__e.IsClass< ::String >() ){
							HX_STACK_BEGIN_CATCH
							::String e = __e;{
								HX_STACK_LINE(2369)
								::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4003,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
							}
						}
						else throw(__e);
					}
					HX_STACK_LINE(2369)
					(r)++;
				}
			}
		}
		HX_STACK_LINE(2372)
		if ((::com::stencyl::Input_obj::mouseReleased)){
			HX_STACK_LINE(2374)
			::com::stencyl::behavior::Script_obj::mrx = inputx;
			HX_STACK_LINE(2375)
			::com::stencyl::behavior::Script_obj::mry = inputy;
			HX_STACK_LINE(2376)
			{
				HX_STACK_LINE(2376)
				Dynamic listeners = this->whenMouseReleasedListeners;		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(2376)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(2376)
				while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
					HX_STACK_LINE(2376)
					try{
						HX_STACK_LINE(2376)
						Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(2376)
						f(listeners).Cast< Void >();
						HX_STACK_LINE(2376)
						if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
							HX_STACK_LINE(2376)
							(r)--;
						}
					}
					catch(Dynamic __e){
						if (__e.IsClass< ::String >() ){
							HX_STACK_BEGIN_CATCH
							::String e = __e;{
								HX_STACK_LINE(2376)
								::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4003,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
							}
						}
						else throw(__e);
					}
					HX_STACK_LINE(2376)
					(r)++;
				}
			}
		}
		HX_STACK_LINE(2379)
		if (((bool((this->mx != inputx)) || bool((this->my != inputy))))){
			HX_STACK_LINE(2381)
			this->mx = inputx;
			HX_STACK_LINE(2382)
			this->my = inputy;
			HX_STACK_LINE(2384)
			{
				HX_STACK_LINE(2384)
				Dynamic listeners = this->whenMouseMovedListeners;		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(2384)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(2384)
				while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
					HX_STACK_LINE(2384)
					try{
						HX_STACK_LINE(2384)
						Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(2384)
						f(listeners).Cast< Void >();
						HX_STACK_LINE(2384)
						if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
							HX_STACK_LINE(2384)
							(r)--;
						}
					}
					catch(Dynamic __e){
						if (__e.IsClass< ::String >() ){
							HX_STACK_BEGIN_CATCH
							::String e = __e;{
								HX_STACK_LINE(2384)
								::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4003,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
							}
						}
						else throw(__e);
					}
					HX_STACK_LINE(2384)
					(r)++;
				}
			}
			HX_STACK_LINE(2386)
			if (((bool(::com::stencyl::Input_obj::mouseDown) && bool(!(::com::stencyl::Input_obj::mousePressed))))){
				HX_STACK_LINE(2388)
				Dynamic listeners = this->whenMouseDraggedListeners;		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(2388)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(2388)
				while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
					HX_STACK_LINE(2388)
					try{
						HX_STACK_LINE(2388)
						Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(2388)
						f(listeners).Cast< Void >();
						HX_STACK_LINE(2388)
						if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
							HX_STACK_LINE(2388)
							(r)--;
						}
					}
					catch(Dynamic __e){
						if (__e.IsClass< ::String >() ){
							HX_STACK_BEGIN_CATCH
							::String e = __e;{
								HX_STACK_LINE(2388)
								::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4003,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
							}
						}
						else throw(__e);
					}
					HX_STACK_LINE(2388)
					(r)++;
				}
			}
		}
		HX_STACK_LINE(2393)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(2395)
		while(((i < this->tasks->length))){
			HX_STACK_LINE(2397)
			::com::stencyl::behavior::TimedTask t = this->tasks->__get(i).StaticCast< ::com::stencyl::behavior::TimedTask >();		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(2399)
			if ((!(t->done))){
				HX_STACK_LINE(2400)
				t->update(::com::stencyl::Engine_obj::STEP_SIZE);
			}
			HX_STACK_LINE(2404)
			if ((t->done)){
				HX_STACK_LINE(2406)
				this->tasks->remove(t);
				HX_STACK_LINE(2407)
				(i)--;
			}
			HX_STACK_LINE(2410)
			(i)++;
		}
		HX_STACK_LINE(2414)
		if ((this->hasKeyPressedListeners)){
			HX_STACK_LINE(2415)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->whenKeyPressedListeners->keys());  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(2419)
					bool pressed = ::com::stencyl::Input_obj::pressed(key);		HX_STACK_VAR(pressed,"pressed");
					HX_STACK_LINE(2420)
					bool released = ::com::stencyl::Input_obj::released(key);		HX_STACK_VAR(released,"released");
					HX_STACK_LINE(2422)
					if (((bool(pressed) || bool(released)))){
						HX_STACK_LINE(2424)
						Dynamic listeners = this->whenKeyPressedListeners->get(key);		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(2425)
						{
							HX_STACK_LINE(2425)
							Dynamic listeners1 = listeners;		HX_STACK_VAR(listeners1,"listeners1");
							HX_STACK_LINE(2425)
							int r = (int)0;		HX_STACK_VAR(r,"r");
							HX_STACK_LINE(2425)
							while(((r < listeners1->__Field(HX_CSTRING("length"),true)))){
								HX_STACK_LINE(2425)
								try{
									HX_STACK_LINE(2425)
									Dynamic f = listeners1->__GetItem(r);		HX_STACK_VAR(f,"f");
									HX_STACK_LINE(2425)
									f(pressed,released,listeners1).Cast< Void >();
									HX_STACK_LINE(2425)
									if (((::com::stencyl::utils::Utils_obj::indexOf(listeners1,f) == (int)-1))){
										HX_STACK_LINE(2425)
										(r)--;
									}
								}
								catch(Dynamic __e){
									if (__e.IsClass< ::String >() ){
										HX_STACK_BEGIN_CATCH
										::String e = __e;{
											HX_STACK_LINE(2425)
											::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4057,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners3")));
										}
									}
									else throw(__e);
								}
								HX_STACK_LINE(2425)
								(r)++;
							}
						}
					}
				}
;
			}
		}
		HX_STACK_LINE(2432)
		{
			HX_STACK_LINE(2432)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->nativeListeners->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2432)
			while(((_g1 < _g))){
				HX_STACK_LINE(2432)
				int n = (_g1)++;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(2434)
				::com::stencyl::event::NativeListener listener = this->nativeListeners->__get(n).StaticCast< ::com::stencyl::event::NativeListener >();		HX_STACK_VAR(listener,"listener");
				HX_STACK_LINE(2435)
				listener->checkEvents(::com::stencyl::Engine_obj::events);
			}
		}
		HX_STACK_LINE(2438)
		::com::stencyl::Engine_obj::events->clear();
		HX_STACK_LINE(2441)
		{
			HX_STACK_LINE(2441)
			Dynamic listeners = this->whenUpdatedListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(2441)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(2441)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(2441)
				try{
					HX_STACK_LINE(2441)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(2441)
					f(elapsedTime,listeners).Cast< Void >();
					HX_STACK_LINE(2441)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(2441)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(2441)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(2441)
				(r)++;
			}
		}
		HX_STACK_LINE(2443)
		if ((!(::com::stencyl::Engine_obj::NO_PHYSICS))){
			HX_STACK_LINE(2445)
			this->world->step(0.01,(int)3,(int)3);
			HX_STACK_LINE(2446)
			this->world->clearForces();
			HX_STACK_LINE(2448)
			if ((::com::stencyl::Engine_obj::DEBUG_DRAW)){
				HX_STACK_LINE(2449)
				this->world->drawDebugData();
			}
		}
		HX_STACK_LINE(2454)
		if ((!(((this->regions->_h->_size == (int)0))))){
			HX_STACK_LINE(2455)
			for(::cpp::FastIterator_obj< ::com::stencyl::models::Region > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Region >(this->regions->iterator());  __it->hasNext(); ){
				::com::stencyl::models::Region r = __it->next();
				{
					HX_STACK_LINE(2458)
					if (((r == null()))){
						HX_STACK_LINE(2458)
						continue;
					}
					HX_STACK_LINE(2459)
					r->innerUpdate(elapsedTime,true);
				}
;
			}
		}
		HX_STACK_LINE(2463)
		while(((this->disableCollisionList->length > (int)0))){
			HX_STACK_LINE(2464)
			this->disableCollisionList->pop().StaticCast< ::com::stencyl::models::Actor >();
		}
		HX_STACK_LINE(2468)
		if ((!(::com::stencyl::Engine_obj::NO_PHYSICS))){
			HX_STACK_LINE(2469)
			if ((!(((this->collisionPairs->_h->_size == (int)0))))){
				HX_STACK_LINE(2471)
				for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->collisionPairs->keys());  __it->hasNext(); ){
					int pair = __it->next();
					{
						HX_STACK_LINE(2474)
						::de::polygonal::ds::IntHashTable _this = this->collisionPairs;		HX_STACK_VAR(_this,"_this");
						struct _Function_4_1{
							inline static int Block( int &pair,::de::polygonal::ds::IntHashTable _this){
								HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2474);
								{
									HX_STACK_LINE(2474)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(2474)
									int i1 = _this1->_hash->__get((int((pair * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i1,"i1");
									struct _Function_5_1{
										inline static int Block( int &i1,::de::polygonal::ds::IntIntHashTable &_this1,int &pair){
											HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2474);
											{
												HX_STACK_LINE(2474)
												int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(2474)
												i1 = _this1->_data->__get((i1 + (int)2));
												HX_STACK_LINE(2474)
												while(((i1 != (int)-1))){
													HX_STACK_LINE(2474)
													if (((_this1->_data->__get(i1) == pair))){
														HX_STACK_LINE(2474)
														v = _this1->_data->__get((i1 + (int)1));
														HX_STACK_LINE(2474)
														break;
													}
													HX_STACK_LINE(2474)
													i1 = _this1->_data->__get((i1 + (int)2));
												}
												HX_STACK_LINE(2474)
												return v;
											}
											return null();
										}
									};
									HX_STACK_LINE(2474)
									return (  (((i1 == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i1) == pair))) ? int(_this1->_data->__get((i1 + (int)1))) : int(_Function_5_1::Block(i1,_this1,pair)) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(2474)
						int i1 = _Function_4_1::Block(pair,_this);		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(2474)
						if (((i1 == (int)-2147483647))){
							HX_STACK_LINE(2474)
							false;
						}
						else{
							HX_STACK_LINE(2474)
							_this->_key0 = (int)-2147483647;
							HX_STACK_LINE(2474)
							hx::IndexRef((_this->_vals).mPtr,i1) = null();
							HX_STACK_LINE(2474)
							_this->_keys[i1] = (int)-2147483647;
							HX_STACK_LINE(2474)
							_this->_next[i1] = _this->_free;
							HX_STACK_LINE(2474)
							_this->_free = i1;
							HX_STACK_LINE(2474)
							bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
							HX_STACK_LINE(2474)
							if (((_this->_sizeLevel > (int)0))){
								HX_STACK_LINE(2474)
								if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
									HX_STACK_LINE(2474)
									if ((_this->_isResizable)){
										HX_STACK_LINE(2474)
										shrink = true;
									}
								}
							}
							HX_STACK_LINE(2474)
							{
								HX_STACK_LINE(2474)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(2474)
								int b = (int((pair * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(2474)
								int i2 = _this1->_hash->__get(b);		HX_STACK_VAR(i2,"i2");
								HX_STACK_LINE(2474)
								if (((i2 == (int)-1))){
									HX_STACK_LINE(2474)
									false;
								}
								else{
									HX_STACK_LINE(2474)
									if (((pair == _this1->_data->__get(i2)))){
										HX_STACK_LINE(2474)
										if (((_this1->_data->__get((i2 + (int)2)) == (int)-1))){
											HX_STACK_LINE(2474)
											_this1->_hash[b] = (int)-1;
										}
										else{
											HX_STACK_LINE(2474)
											_this1->_hash[b] = _this1->_data->__get((i2 + (int)2));
										}
										HX_STACK_LINE(2474)
										int j = ::Std_obj::_int((Float(i2) / Float((int)3)));		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(2474)
										_this1->_next[j] = _this1->_free;
										HX_STACK_LINE(2474)
										_this1->_free = j;
										HX_STACK_LINE(2474)
										_this1->_data[(i2 + (int)1)] = (int)-2147483647;
										HX_STACK_LINE(2474)
										_this1->_data[(i2 + (int)2)] = (int)-1;
										HX_STACK_LINE(2474)
										(_this1->_size)--;
										HX_STACK_LINE(2474)
										if (((_this1->_sizeLevel > (int)0))){
											HX_STACK_LINE(2474)
											if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
												HX_STACK_LINE(2474)
												if ((_this1->_isResizable)){
													HX_STACK_LINE(2474)
													_this1->_shrink();
												}
											}
										}
										HX_STACK_LINE(2474)
										true;
									}
									else{
										HX_STACK_LINE(2474)
										bool exists = false;		HX_STACK_VAR(exists,"exists");
										HX_STACK_LINE(2474)
										int i0 = i2;		HX_STACK_VAR(i0,"i0");
										HX_STACK_LINE(2474)
										i2 = _this1->_data->__get((i2 + (int)2));
										HX_STACK_LINE(2474)
										while(((i2 != (int)-1))){
											HX_STACK_LINE(2474)
											if (((_this1->_data->__get(i2) == pair))){
												HX_STACK_LINE(2474)
												exists = true;
												HX_STACK_LINE(2474)
												break;
											}
											HX_STACK_LINE(2474)
											i2 = _this1->_data->__get(((i0 = i2) + (int)2));
										}
										HX_STACK_LINE(2474)
										if ((exists)){
											HX_STACK_LINE(2474)
											_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i2 + (int)2));
											HX_STACK_LINE(2474)
											int j = ::Std_obj::_int((Float(i2) / Float((int)3)));		HX_STACK_VAR(j,"j");
											HX_STACK_LINE(2474)
											_this1->_next[j] = _this1->_free;
											HX_STACK_LINE(2474)
											_this1->_free = j;
											HX_STACK_LINE(2474)
											_this1->_data[(i2 + (int)1)] = (int)-2147483647;
											HX_STACK_LINE(2474)
											_this1->_data[(i2 + (int)2)] = (int)-1;
											HX_STACK_LINE(2474)
											--(_this1->_size);
											HX_STACK_LINE(2474)
											if (((_this1->_sizeLevel > (int)0))){
												HX_STACK_LINE(2474)
												if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
													HX_STACK_LINE(2474)
													if ((_this1->_isResizable)){
														HX_STACK_LINE(2474)
														_this1->_shrink();
													}
												}
											}
											HX_STACK_LINE(2474)
											true;
										}
										else{
											HX_STACK_LINE(2474)
											false;
										}
									}
								}
							}
							HX_STACK_LINE(2474)
							if ((shrink)){
								HX_STACK_LINE(2474)
								(_this->_sizeLevel)--;
								HX_STACK_LINE(2474)
								int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
								HX_STACK_LINE(2474)
								int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
								struct _Function_6_1{
									inline static Array< int > Block( int &newSize){
										HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2474);
										{
											HX_STACK_LINE(2474)
											Array< int > a;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(2474)
											a = Array_obj< int >::__new();
											HX_STACK_LINE(2474)
											a[(newSize - (int)1)] = null();
											HX_STACK_LINE(2474)
											return a;
										}
										return null();
									}
								};
								HX_STACK_LINE(2474)
								_this->_next = _Function_6_1::Block(newSize);
								HX_STACK_LINE(2474)
								{
									HX_STACK_LINE(2474)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(2474)
									while(((_g1 < _g))){
										HX_STACK_LINE(2474)
										int i2 = (_g1)++;		HX_STACK_VAR(i2,"i2");
										HX_STACK_LINE(2474)
										_this->_next[i2] = (i2 + (int)1);
									}
								}
								HX_STACK_LINE(2474)
								_this->_next[(newSize - (int)1)] = (int)-1;
								HX_STACK_LINE(2474)
								_this->_free = (int)0;
								struct _Function_6_2{
									inline static Array< int > Block( int &newSize){
										HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2474);
										{
											HX_STACK_LINE(2474)
											Array< int > a;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(2474)
											a = Array_obj< int >::__new();
											HX_STACK_LINE(2474)
											a[(newSize - (int)1)] = null();
											HX_STACK_LINE(2474)
											return a;
										}
										return null();
									}
								};
								HX_STACK_LINE(2474)
								Array< int > tmpKeys = _Function_6_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
								HX_STACK_LINE(2474)
								{
									HX_STACK_LINE(2474)
									int k = newSize;		HX_STACK_VAR(k,"k");
									HX_STACK_LINE(2474)
									if (((k == (int)-1))){
										HX_STACK_LINE(2474)
										k = tmpKeys->length;
									}
									HX_STACK_LINE(2474)
									{
										HX_STACK_LINE(2474)
										int _g = (int)0;		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(2474)
										while(((_g < k))){
											HX_STACK_LINE(2474)
											int i2 = (_g)++;		HX_STACK_VAR(i2,"i2");
											HX_STACK_LINE(2474)
											tmpKeys[i2] = (int)-2147483647;
										}
									}
								}
								struct _Function_6_3{
									inline static Array< ::Dynamic > Block( int &newSize){
										HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2474);
										{
											HX_STACK_LINE(2474)
											Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(2474)
											a = Array_obj< ::Dynamic >::__new();
											HX_STACK_LINE(2474)
											a[(newSize - (int)1)] = null();
											HX_STACK_LINE(2474)
											return a;
										}
										return null();
									}
								};
								HX_STACK_LINE(2474)
								Array< ::Dynamic > tmpVals = _Function_6_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
								HX_STACK_LINE(2474)
								for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
									int i2 = __it->next();
									{
										HX_STACK_LINE(2474)
										tmpKeys[_this->_free] = _this->_keys->__get(i2);
										HX_STACK_LINE(2474)
										tmpVals[_this->_free] = _this->_vals->__GetItem(i2);
										HX_STACK_LINE(2474)
										_this->_free = _this->_next->__get(_this->_free);
									}
;
								}
								HX_STACK_LINE(2474)
								_this->_keys = tmpKeys;
								HX_STACK_LINE(2474)
								_this->_vals = tmpVals;
								HX_STACK_LINE(2474)
								{
									HX_STACK_LINE(2474)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(2474)
									while(((_g1 < _g))){
										HX_STACK_LINE(2474)
										int i2 = (_g1)++;		HX_STACK_VAR(i2,"i2");
										HX_STACK_LINE(2474)
										::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
										int key = _this->_keys->__get(i2);		HX_STACK_VAR(key,"key");
										HX_STACK_LINE(2474)
										int i3 = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i3,"i3");
										HX_STACK_LINE(2474)
										if (((i3 == (int)-1))){
											HX_STACK_LINE(2474)
											false;
										}
										else{
											HX_STACK_LINE(2474)
											if (((_this1->_data->__get(i3) == key))){
												HX_STACK_LINE(2474)
												_this1->_data[(i3 + (int)1)] = i2;
												HX_STACK_LINE(2474)
												true;
											}
											else{
												HX_STACK_LINE(2474)
												i3 = _this1->_data->__get((i3 + (int)2));
												HX_STACK_LINE(2474)
												while(((i3 != (int)-1))){
													HX_STACK_LINE(2474)
													if (((_this1->_data->__get(i3) == key))){
														HX_STACK_LINE(2474)
														_this1->_data[(i3 + (int)1)] = i2;
														HX_STACK_LINE(2474)
														break;
													}
													HX_STACK_LINE(2474)
													i3 = _this1->_data->__get((i3 + (int)2));
												}
												HX_STACK_LINE(2474)
												(i3 != (int)-1);
											}
										}
									}
								}
							}
							HX_STACK_LINE(2474)
							true;
						}
					}
;
				}
			}
		}
		HX_STACK_LINE(2479)
		::com::stencyl::models::actor::Animation_obj::updateAll(elapsedTime);
		HX_STACK_LINE(2481)
		if ((!(((this->allActors->_h->_size == (int)0))))){
			HX_STACK_LINE(2482)
			for(::cpp::FastIterator_obj< ::com::stencyl::models::Actor > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Actor >(this->allActors->iterator());  __it->hasNext(); ){
				::com::stencyl::models::Actor a = __it->next();
				if (((bool((bool((a != null())) && bool(!(a->dead)))) && bool(!(a->recycled))))){
					HX_STACK_LINE(2488)
					bool isOnScreen = (bool((bool((bool((bool(((bool((a->physicsMode > (int)0)) || bool(a->body->isActive())))) && bool(((a->colX + a->cacheWidth) >= ((Float(-(::com::stencyl::Engine_obj::cameraX)) / Float(::com::stencyl::Engine_obj::SCALE)) - ::com::stencyl::Engine_obj::paddingLeft))))) && bool(((a->colY + a->cacheHeight) >= ((Float(-(::com::stencyl::Engine_obj::cameraY)) / Float(::com::stencyl::Engine_obj::SCALE)) - ::com::stencyl::Engine_obj::paddingTop))))) && bool((a->colX < (((Float(-(::com::stencyl::Engine_obj::cameraX)) / Float(::com::stencyl::Engine_obj::SCALE)) + ::com::stencyl::Engine_obj::screenWidth) + ::com::stencyl::Engine_obj::paddingRight))))) && bool((a->colY < (((Float(-(::com::stencyl::Engine_obj::cameraY)) / Float(::com::stencyl::Engine_obj::SCALE)) + ::com::stencyl::Engine_obj::screenHeight) + ::com::stencyl::Engine_obj::paddingBottom))));		HX_STACK_VAR(isOnScreen,"isOnScreen");
					HX_STACK_LINE(2494)
					a->isOnScreenCache = isOnScreen;
					HX_STACK_LINE(2498)
					if (((bool((a->physicsMode == (int)0)) && bool((a->body != null()))))){
						HX_STACK_LINE(2499)
						if (((bool(a->killLeaveScreen) && bool(!(isOnScreen))))){
							HX_STACK_LINE(2501)
							this->recycleActor(a);
						}
						else{
							HX_STACK_LINE(2505)
							if (((bool((bool(a->body->isActive()) || bool(a->alwaysSimulate))) || bool(a->isHUD)))){
								HX_STACK_LINE(2506)
								a->innerUpdate(elapsedTime,false);
							}
						}
					}
					else{
						HX_STACK_LINE(2511)
						if (((a->physicsMode > (int)0))){
							HX_STACK_LINE(2512)
							if (((bool(a->killLeaveScreen) && bool(!(isOnScreen))))){
								HX_STACK_LINE(2514)
								this->recycleActor(a);
							}
							else{
								HX_STACK_LINE(2518)
								if (((bool((bool(isOnScreen) || bool(a->alwaysSimulate))) || bool(a->isHUD)))){
									HX_STACK_LINE(2519)
									a->innerUpdate(elapsedTime,false);
								}
							}
						}
					}
					HX_STACK_LINE(2524)
					if ((a->dead)){
						HX_STACK_LINE(2525)
						this->disableCollisionList->push(a);
					}
				}
;
			}
		}
		HX_STACK_LINE(2532)
		{
			HX_STACK_LINE(2532)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->disableCollisionList->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2532)
			while(((_g1 < _g))){
				HX_STACK_LINE(2532)
				int n = (_g1)++;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(2534)
				::com::stencyl::models::Actor a = this->disableCollisionList->__get(n).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(2536)
				if (((a != null()))){
					HX_STACK_LINE(2537)
					a->handlesCollisions = false;
				}
			}
		}
		HX_STACK_LINE(2542)
		{
			HX_STACK_LINE(2542)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->animatedTiles->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2542)
			while(((_g1 < _g))){
				HX_STACK_LINE(2542)
				int n = (_g1)++;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(2544)
				::com::stencyl::models::scene::Tile tile = this->animatedTiles->__get(n).StaticCast< ::com::stencyl::models::scene::Tile >();		HX_STACK_VAR(tile,"tile");
				HX_STACK_LINE(2545)
				tile->update(elapsedTime);
				HX_STACK_LINE(2546)
				this->tileUpdated = (bool(this->tileUpdated) || bool(tile->updateSource));
			}
		}
		HX_STACK_LINE(2549)
		if (((bool((this->leave != null())) && bool(this->leave->isActive())))){
			HX_STACK_LINE(2550)
			this->leave->update(elapsedTime);
		}
		else{
			HX_STACK_LINE(2554)
			if (((bool((this->enter != null())) && bool(this->enter->isActive())))){
				HX_STACK_LINE(2555)
				this->enter->update(elapsedTime);
			}
		}
		HX_STACK_LINE(2562)
		::com::stencyl::Engine_obj::cameraX = (-(::Math_obj::abs(this->camera->realX)) + ::com::stencyl::Engine_obj::screenWidthHalf);
		HX_STACK_LINE(2563)
		::com::stencyl::Engine_obj::cameraY = (-(::Math_obj::abs(this->camera->realY)) + ::com::stencyl::Engine_obj::screenHeightHalf);
		HX_STACK_LINE(2566)
		int maxCamX = (-(::com::stencyl::Engine_obj::sceneWidth) + ::com::stencyl::Engine_obj::screenWidth);		HX_STACK_VAR(maxCamX,"maxCamX");
		HX_STACK_LINE(2567)
		int maxCamY = (-(::com::stencyl::Engine_obj::sceneHeight) + ::com::stencyl::Engine_obj::screenHeight);		HX_STACK_VAR(maxCamY,"maxCamY");
		HX_STACK_LINE(2569)
		if (((::com::stencyl::Engine_obj::cameraX < maxCamX))){
			HX_STACK_LINE(2570)
			::com::stencyl::Engine_obj::cameraX = maxCamX;
		}
		HX_STACK_LINE(2574)
		if (((::com::stencyl::Engine_obj::cameraY < maxCamY))){
			HX_STACK_LINE(2575)
			::com::stencyl::Engine_obj::cameraY = maxCamY;
		}
		HX_STACK_LINE(2579)
		hx::MultEq(::com::stencyl::Engine_obj::cameraX,::com::stencyl::Engine_obj::SCALE);
		HX_STACK_LINE(2580)
		hx::MultEq(::com::stencyl::Engine_obj::cameraY,::com::stencyl::Engine_obj::SCALE);
		HX_STACK_LINE(2583)
		::com::stencyl::Engine_obj::cameraX = ::Math_obj::min((int)0,::com::stencyl::Engine_obj::cameraX);
		HX_STACK_LINE(2584)
		::com::stencyl::Engine_obj::cameraY = ::Math_obj::min((int)0,::com::stencyl::Engine_obj::cameraY);
		HX_STACK_LINE(2586)
		{
			HX_STACK_LINE(2586)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->master->get_numChildren();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2586)
			while(((_g1 < _g))){
				HX_STACK_LINE(2586)
				int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(2588)
				::flash::display::DisplayObject child = this->master->getChildAt(i1);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(2591)
				if ((::Std_obj::is(child,hx::ClassOf< ::com::stencyl::models::scene::layers::BackgroundLayer >()))){
					HX_STACK_LINE(2593)
					::com::stencyl::models::scene::layers::BackgroundLayer bgLayer = hx::TCast< com::stencyl::models::scene::layers::BackgroundLayer >::cast(child);		HX_STACK_VAR(bgLayer,"bgLayer");
					HX_STACK_LINE(2595)
					Float endX = ::Math_obj::abs((bgLayer->cacheWidth - (::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE)));		HX_STACK_VAR(endX,"endX");
					HX_STACK_LINE(2596)
					Float endY = ::Math_obj::abs((bgLayer->cacheHeight - (::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE)));		HX_STACK_VAR(endY,"endY");
					HX_STACK_LINE(2601)
					if (((maxCamX != (int)0))){
						HX_STACK_LINE(2602)
						child->set_x((-(endX) * ::Math_obj::abs((Float(::com::stencyl::Engine_obj::cameraX) / Float(((maxCamX * ::com::stencyl::Engine_obj::SCALE)))))));
					}
					else{
						HX_STACK_LINE(2607)
						child->set_x((int)0);
					}
					HX_STACK_LINE(2611)
					if (((maxCamY != (int)0))){
						HX_STACK_LINE(2612)
						child->set_y((-(endY) * ::Math_obj::abs((Float(::com::stencyl::Engine_obj::cameraY) / Float(((maxCamY * ::com::stencyl::Engine_obj::SCALE)))))));
					}
					else{
						HX_STACK_LINE(2617)
						child->set_y((int)0);
					}
					HX_STACK_LINE(2621)
					if ((bgLayer->isAnimated)){
						HX_STACK_LINE(2622)
						bgLayer->updateAnimation(elapsedTime);
					}
				}
				else{
					HX_STACK_LINE(2627)
					if ((::Std_obj::is(child,hx::ClassOf< ::com::stencyl::models::scene::ScrollingBitmap >()))){
						HX_STACK_LINE(2629)
						::com::stencyl::models::scene::ScrollingBitmap bg = hx::TCast< com::stencyl::models::scene::ScrollingBitmap >::cast(child);		HX_STACK_VAR(bg,"bg");
						HX_STACK_LINE(2631)
						if ((bg->parallax)){
							HX_STACK_LINE(2632)
							bg->updateParallax();
						}
						else{
							HX_STACK_LINE(2637)
							bg->updateAuto(elapsedTime);
						}
					}
					else{
						HX_STACK_LINE(2643)
						if ((::Std_obj::is(child,hx::ClassOf< ::com::stencyl::models::scene::layers::RegularLayer >()))){
							HX_STACK_LINE(2645)
							::com::stencyl::models::scene::layers::RegularLayer l = hx::TCast< com::stencyl::models::scene::layers::RegularLayer >::cast(child);		HX_STACK_VAR(l,"l");
							HX_STACK_LINE(2646)
							Dynamic scrollFactor = this->scrollFactors->get(l->layerID);		HX_STACK_VAR(scrollFactor,"scrollFactor");
							HX_STACK_LINE(2648)
							child->set_x((::com::stencyl::Engine_obj::cameraX * scrollFactor));
							HX_STACK_LINE(2649)
							child->set_y((::com::stencyl::Engine_obj::cameraY * scrollFactor));
						}
					}
				}
			}
		}
		HX_STACK_LINE(2655)
		if (((bool(!(::com::stencyl::Engine_obj::NO_PHYSICS)) && bool(::com::stencyl::Engine_obj::DEBUG_DRAW)))){
			HX_STACK_LINE(2657)
			this->debugLayer->set_x(::com::stencyl::Engine_obj::cameraX);
			HX_STACK_LINE(2658)
			this->debugLayer->set_y(::com::stencyl::Engine_obj::cameraY);
		}
		HX_STACK_LINE(2662)
		if ((this->isShaking)){
			HX_STACK_LINE(2664)
			hx::SubEq(this->shakeTimer,::com::stencyl::Engine_obj::STEP_SIZE);
			HX_STACK_LINE(2666)
			if (((this->shakeTimer <= (int)0))){
				HX_STACK_LINE(2668)
				this->stopShakingScreen();
				HX_STACK_LINE(2669)
				return null();
			}
			HX_STACK_LINE(2672)
			Float randX = ((-(this->shakeIntensity) * ::com::stencyl::Engine_obj::screenWidth) + (::Math_obj::random() * ((((int)2 * this->shakeIntensity) * ::com::stencyl::Engine_obj::screenWidth))));		HX_STACK_VAR(randX,"randX");
			HX_STACK_LINE(2673)
			Float randY = ((-(this->shakeIntensity) * ::com::stencyl::Engine_obj::screenHeight) + (::Math_obj::random() * ((((int)2 * this->shakeIntensity) * ::com::stencyl::Engine_obj::screenHeight))));		HX_STACK_VAR(randY,"randY");
			HX_STACK_LINE(2675)
			this->master->set_x((randX * ::com::stencyl::Engine_obj::SCALE));
			HX_STACK_LINE(2676)
			this->master->set_y((randY * ::com::stencyl::Engine_obj::SCALE));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,update,(void))

int Engine_obj::getMiddleLayer( ){
	HX_STACK_PUSH("Engine::getMiddleLayer","com/stencyl/Engine.hx",2333);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2333)
	return this->layersToDraw->get(this->middleLayer);
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getMiddleLayer,return )

int Engine_obj::getBottomLayer( ){
	HX_STACK_PUSH("Engine::getBottomLayer","com/stencyl/Engine.hx",2328);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2328)
	return this->layersToDraw->get(this->bottomLayer);
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getBottomLayer,return )

int Engine_obj::getTopLayer( ){
	HX_STACK_PUSH("Engine::getTopLayer","com/stencyl/Engine.hx",2323);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2323)
	return this->layersToDraw->get(this->topLayer);
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getTopLayer,return )

::com::stencyl::models::Actor Engine_obj::createActorOfType( ::com::stencyl::models::actor::ActorType type,Float x,Float y,int layerConst){
	HX_STACK_PUSH("Engine::createActorOfType","com/stencyl/Engine.hx",2260);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(layerConst,"layerConst");
	HX_STACK_LINE(2261)
	if (((type == null()))){
		HX_STACK_LINE(2263)
		::haxe::Log_obj::trace(HX_CSTRING("Tried to create actor with null or invalid type."),hx::SourceInfo(HX_CSTRING("Engine.hx"),2263,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("createActorOfType")));
		HX_STACK_LINE(2264)
		return null();
	}
	HX_STACK_LINE(2267)
	int layerID = (int)0;		HX_STACK_VAR(layerID,"layerID");
	HX_STACK_LINE(2269)
	if (((layerConst == ::com::stencyl::behavior::Script_obj::FRONT))){
		HX_STACK_LINE(2270)
		layerID = this->getTopLayer();
	}
	else{
		HX_STACK_LINE(2274)
		if (((layerConst == ::com::stencyl::behavior::Script_obj::BACK))){
			HX_STACK_LINE(2275)
			layerID = this->getBottomLayer();
		}
		else{
			HX_STACK_LINE(2280)
			layerID = this->getMiddleLayer();
		}
	}
	HX_STACK_LINE(2284)
	::com::stencyl::models::scene::ActorInstance ai = ::com::stencyl::models::scene::ActorInstance_obj::__new(::com::stencyl::utils::Utils_obj::INTEGER_MAX,::Std_obj::_int(x),::Std_obj::_int(y),(int)1,(int)1,layerID,(int)0,type->groupID,type->ID,null(),false);		HX_STACK_VAR(ai,"ai");
	HX_STACK_LINE(2299)
	::com::stencyl::models::Actor a = this->createActor(ai,true);		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(2300)
	a->initScripts();
	HX_STACK_LINE(2302)
	Dynamic f1 = this->whenTypeGroupCreatedListeners->get(type);		HX_STACK_VAR(f1,"f1");
	HX_STACK_LINE(2303)
	Dynamic f2 = this->whenTypeGroupCreatedListeners->get(a->getGroup());		HX_STACK_VAR(f2,"f2");
	HX_STACK_LINE(2305)
	if (((f1 != null()))){
		HX_STACK_LINE(2307)
		Dynamic listeners = f1;		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(2307)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(2307)
		while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(2307)
			try{
				HX_STACK_LINE(2307)
				Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(2307)
				f(a,listeners).Cast< Void >();
				HX_STACK_LINE(2307)
				if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
					HX_STACK_LINE(2307)
					(r)--;
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(2307)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(2307)
			(r)++;
		}
	}
	HX_STACK_LINE(2310)
	if (((f2 != null()))){
		HX_STACK_LINE(2312)
		Dynamic listeners = f2;		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(2312)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(2312)
		while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(2312)
			try{
				HX_STACK_LINE(2312)
				Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(2312)
				f(a,listeners).Cast< Void >();
				HX_STACK_LINE(2312)
				if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
					HX_STACK_LINE(2312)
					(r)--;
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(2312)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(2312)
			(r)++;
		}
	}
	HX_STACK_LINE(2315)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,createActorOfType,return )

::com::stencyl::models::Actor Engine_obj::getRecycledActorOfType( ::com::stencyl::models::actor::ActorType type,Float x,Float y,int layerConst){
	HX_STACK_PUSH("Engine::getRecycledActorOfType","com/stencyl/Engine.hx",2143);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(layerConst,"layerConst");
	HX_STACK_LINE(2144)
	::com::stencyl::models::Actor a = null();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(2146)
	if (((this->recycledActorsOfType->get(type->ID) == null()))){
		HX_STACK_LINE(2147)
		this->recycledActorsOfType->set(type->ID,Array_obj< ::Dynamic >::__new());
	}
	HX_STACK_LINE(2152)
	Array< ::Dynamic > cache = this->recycledActorsOfType->get(type->ID);		HX_STACK_VAR(cache,"cache");
	HX_STACK_LINE(2154)
	if (((cache != null()))){
		HX_STACK_LINE(2158)
		{
			HX_STACK_LINE(2158)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2158)
			while(((_g < cache->length))){
				HX_STACK_LINE(2158)
				::com::stencyl::models::Actor actor = cache->__get(_g).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actor,"actor");
				HX_STACK_LINE(2158)
				++(_g);
				HX_STACK_LINE(2160)
				if (((bool((actor != null())) && bool(actor->recycled)))){
					HX_STACK_LINE(2162)
					actor->createTime = ::flash::Lib_obj::getTimer();
					HX_STACK_LINE(2163)
					{
						HX_STACK_LINE(2163)
						::de::polygonal::ds::IntHashTable _this = this->allActors;		HX_STACK_VAR(_this,"_this");
						int key = actor->ID;		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(2163)
						_this->_key0 = (int)-2147483647;
						HX_STACK_LINE(2163)
						if (((_this->_h->_size == _this->_h->_capacity))){
							HX_STACK_LINE(2163)
							int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
							HX_STACK_LINE(2163)
							int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
							struct _Function_7_1{
								inline static Array< int > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2163);
									{
										HX_STACK_LINE(2163)
										Array< int > a1;		HX_STACK_VAR(a1,"a1");
										HX_STACK_LINE(2163)
										a1 = Array_obj< int >::__new();
										HX_STACK_LINE(2163)
										a1[(newSize - (int)1)] = null();
										HX_STACK_LINE(2163)
										return a1;
									}
									return null();
								}
							};
							HX_STACK_LINE(2163)
							Array< int > tmp = _Function_7_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
							HX_STACK_LINE(2163)
							{
								HX_STACK_LINE(2163)
								Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
								int max = oldSize;		HX_STACK_VAR(max,"max");
								HX_STACK_LINE(2163)
								if (((max == (int)-1))){
									HX_STACK_LINE(2163)
									max = src->length;
								}
								HX_STACK_LINE(2163)
								int j = (int)0;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(2163)
								{
									HX_STACK_LINE(2163)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(2163)
									while(((_g1 < max))){
										HX_STACK_LINE(2163)
										int i = (_g1)++;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(2163)
										tmp[(j)++] = src->__get(i);
									}
								}
								HX_STACK_LINE(2163)
								tmp;
							}
							HX_STACK_LINE(2163)
							_this->_next = tmp;
							struct _Function_7_2{
								inline static Array< int > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2163);
									{
										HX_STACK_LINE(2163)
										Array< int > a1;		HX_STACK_VAR(a1,"a1");
										HX_STACK_LINE(2163)
										a1 = Array_obj< int >::__new();
										HX_STACK_LINE(2163)
										a1[(newSize - (int)1)] = null();
										HX_STACK_LINE(2163)
										return a1;
									}
									return null();
								}
							};
							HX_STACK_LINE(2163)
							Array< int > tmp1 = _Function_7_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(2163)
							{
								HX_STACK_LINE(2163)
								Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
								int max = oldSize;		HX_STACK_VAR(max,"max");
								HX_STACK_LINE(2163)
								if (((max == (int)-1))){
									HX_STACK_LINE(2163)
									max = src->length;
								}
								HX_STACK_LINE(2163)
								int j = (int)0;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(2163)
								{
									HX_STACK_LINE(2163)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(2163)
									while(((_g1 < max))){
										HX_STACK_LINE(2163)
										int i = (_g1)++;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(2163)
										tmp1[(j)++] = src->__get(i);
									}
								}
								HX_STACK_LINE(2163)
								tmp1;
							}
							HX_STACK_LINE(2163)
							_this->_keys = tmp1;
							HX_STACK_LINE(2163)
							{
								HX_STACK_LINE(2163)
								int _g1 = oldSize;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(2163)
								while(((_g1 < newSize))){
									HX_STACK_LINE(2163)
									int i = (_g1)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(2163)
									_this->_keys[i] = (int)-2147483647;
								}
							}
							HX_STACK_LINE(2163)
							{
								HX_STACK_LINE(2163)
								int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
								int _g2 = (newSize - (int)1);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(2163)
								while(((_g1 < _g2))){
									HX_STACK_LINE(2163)
									int i = (_g1)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(2163)
									_this->_next[i] = (i + (int)1);
								}
							}
							HX_STACK_LINE(2163)
							_this->_next[(newSize - (int)1)] = (int)-1;
							HX_STACK_LINE(2163)
							_this->_free = oldSize;
							struct _Function_7_3{
								inline static Array< ::Dynamic > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2163);
									{
										HX_STACK_LINE(2163)
										Array< ::Dynamic > a1;		HX_STACK_VAR(a1,"a1");
										HX_STACK_LINE(2163)
										a1 = Array_obj< ::Dynamic >::__new();
										HX_STACK_LINE(2163)
										a1[(newSize - (int)1)] = null();
										HX_STACK_LINE(2163)
										return a1;
									}
									return null();
								}
							};
							HX_STACK_LINE(2163)
							Array< ::Dynamic > tmp2 = _Function_7_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(2163)
							{
								HX_STACK_LINE(2163)
								Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
								int max = oldSize;		HX_STACK_VAR(max,"max");
								HX_STACK_LINE(2163)
								if (((max == (int)-1))){
									HX_STACK_LINE(2163)
									max = src->length;
								}
								HX_STACK_LINE(2163)
								int j = (int)0;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(2163)
								{
									HX_STACK_LINE(2163)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(2163)
									while(((_g1 < max))){
										HX_STACK_LINE(2163)
										int i = (_g1)++;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(2163)
										tmp2[(j)++] = src->__get(i).StaticCast< ::com::stencyl::models::Actor >();
									}
								}
								HX_STACK_LINE(2163)
								tmp2;
							}
							HX_STACK_LINE(2163)
							_this->_vals = tmp2;
							HX_STACK_LINE(2163)
							(_this->_sizeLevel)++;
						}
						HX_STACK_LINE(2163)
						{
							HX_STACK_LINE(2163)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(2163)
							if (((_this1->_size == _this1->_capacity))){
								HX_STACK_LINE(2163)
								if ((_this1->_isResizable)){
									HX_STACK_LINE(2163)
									_this1->_expand();
								}
							}
							HX_STACK_LINE(2163)
							int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(2163)
							_this1->_free = _this1->_next->__get(_this1->_free);
							HX_STACK_LINE(2163)
							_this1->_data[i] = key;
							HX_STACK_LINE(2163)
							_this1->_data[(i + (int)1)] = _this->_free;
							HX_STACK_LINE(2163)
							int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(2163)
							int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(2163)
							if (((j == (int)-1))){
								HX_STACK_LINE(2163)
								_this1->_hash[b] = i;
								HX_STACK_LINE(2163)
								(_this1->_size)++;
								HX_STACK_LINE(2163)
								true;
							}
							else{
								HX_STACK_LINE(2163)
								bool first = (_this1->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
								HX_STACK_LINE(2163)
								int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(2163)
								while(((t != (int)-1))){
									HX_STACK_LINE(2163)
									if (((_this1->_data->__get(t) == key))){
										HX_STACK_LINE(2163)
										first = false;
									}
									HX_STACK_LINE(2163)
									j = t;
									HX_STACK_LINE(2163)
									t = _this1->_data->__get((t + (int)2));
								}
								HX_STACK_LINE(2163)
								_this1->_data[(j + (int)2)] = i;
								HX_STACK_LINE(2163)
								(_this1->_size)++;
								HX_STACK_LINE(2163)
								first;
							}
						}
						HX_STACK_LINE(2163)
						hx::IndexRef((_this->_vals).mPtr,_this->_free) = actor;
						HX_STACK_LINE(2163)
						_this->_keys[_this->_free] = key;
						HX_STACK_LINE(2163)
						_this->_free = _this->_next->__get(_this->_free);
						HX_STACK_LINE(2163)
						true;
					}
					HX_STACK_LINE(2165)
					actor->dead = false;
					HX_STACK_LINE(2166)
					actor->dying = false;
					HX_STACK_LINE(2167)
					actor->recycled = false;
					HX_STACK_LINE(2168)
					actor->killLeaveScreen = false;
					HX_STACK_LINE(2169)
					actor->switchToDefaultAnimation();
					HX_STACK_LINE(2170)
					actor->enableAllBehaviors();
					HX_STACK_LINE(2172)
					if (((actor->physicsMode == (int)0))){
						HX_STACK_LINE(2174)
						actor->body->setActive(true);
						HX_STACK_LINE(2175)
						actor->body->setAwake(true);
						HX_STACK_LINE(2177)
						actor->body->m_prev = null();
						HX_STACK_LINE(2178)
						actor->body->m_next = this->world->m_bodyList;
						HX_STACK_LINE(2180)
						if (((this->world->m_bodyList != null()))){
							HX_STACK_LINE(2181)
							this->world->m_bodyList->m_prev = actor->body;
						}
						HX_STACK_LINE(2185)
						this->world->m_bodyList = actor->body;
						HX_STACK_LINE(2186)
						++(this->world->m_bodyCount);
					}
					HX_STACK_LINE(2189)
					actor->registry = ::haxe::ds::StringMap_obj::__new();
					HX_STACK_LINE(2190)
					actor->enableActorDrawing();
					HX_STACK_LINE(2191)
					actor->setX(x,false,true);
					HX_STACK_LINE(2192)
					actor->setY(y,false,true);
					HX_STACK_LINE(2194)
					if (((actor->physicsMode == (int)0))){
						HX_STACK_LINE(2196)
						actor->colX = x;
						HX_STACK_LINE(2197)
						actor->colY = y;
					}
					HX_STACK_LINE(2200)
					actor->setAngle((int)0,false);
					HX_STACK_LINE(2201)
					actor->set_alpha((int)1);
					HX_STACK_LINE(2202)
					actor->realScaleX = (int)1;
					HX_STACK_LINE(2203)
					actor->realScaleY = (int)1;
					HX_STACK_LINE(2205)
					if (((actor->bodyDef != null()))){
						HX_STACK_LINE(2206)
						actor->continuousCollision = actor->bodyDef->bullet;
					}
					HX_STACK_LINE(2213)
					int layerID = (int)0;		HX_STACK_VAR(layerID,"layerID");
					HX_STACK_LINE(2215)
					if (((layerConst == ::com::stencyl::behavior::Script_obj::FRONT))){
						HX_STACK_LINE(2216)
						layerID = this->getTopLayer();
					}
					else{
						HX_STACK_LINE(2220)
						if (((layerConst == ::com::stencyl::behavior::Script_obj::BACK))){
							HX_STACK_LINE(2221)
							layerID = this->getBottomLayer();
						}
						else{
							HX_STACK_LINE(2226)
							layerID = this->getMiddleLayer();
						}
					}
					HX_STACK_LINE(2230)
					this->moveActorToLayer(actor,layerID);
					HX_STACK_LINE(2232)
					actor->initScripts();
					HX_STACK_LINE(2234)
					Dynamic f1 = this->whenTypeGroupCreatedListeners->get(type);		HX_STACK_VAR(f1,"f1");
					HX_STACK_LINE(2235)
					Dynamic f2 = this->whenTypeGroupCreatedListeners->get(actor->getGroup());		HX_STACK_VAR(f2,"f2");
					HX_STACK_LINE(2237)
					if (((f1 != null()))){
						HX_STACK_LINE(2239)
						Dynamic listeners = f1;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(2239)
						int r = (int)0;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(2239)
						while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
							HX_STACK_LINE(2239)
							try{
								HX_STACK_LINE(2239)
								Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(2239)
								f(actor,listeners).Cast< Void >();
								HX_STACK_LINE(2239)
								if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
									HX_STACK_LINE(2239)
									(r)--;
								}
							}
							catch(Dynamic __e){
								if (__e.IsClass< ::String >() ){
									HX_STACK_BEGIN_CATCH
									::String e = __e;{
										HX_STACK_LINE(2239)
										::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
									}
								}
								else throw(__e);
							}
							HX_STACK_LINE(2239)
							(r)++;
						}
					}
					HX_STACK_LINE(2242)
					if (((f2 != null()))){
						HX_STACK_LINE(2244)
						Dynamic listeners = f2;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(2244)
						int r = (int)0;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(2244)
						while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
							HX_STACK_LINE(2244)
							try{
								HX_STACK_LINE(2244)
								Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(2244)
								f(actor,listeners).Cast< Void >();
								HX_STACK_LINE(2244)
								if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
									HX_STACK_LINE(2244)
									(r)--;
								}
							}
							catch(Dynamic __e){
								if (__e.IsClass< ::String >() ){
									HX_STACK_BEGIN_CATCH
									::String e = __e;{
										HX_STACK_LINE(2244)
										::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
									}
								}
								else throw(__e);
							}
							HX_STACK_LINE(2244)
							(r)++;
						}
					}
					HX_STACK_LINE(2247)
					return actor;
				}
			}
		}
		HX_STACK_LINE(2252)
		a = this->createActorOfType(type,x,y,layerConst);
	}
	HX_STACK_LINE(2256)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,getRecycledActorOfType,return )

Void Engine_obj::recycleActor( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Engine::recycleActor","com/stencyl/Engine.hx",2030);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(2033)
		if (((bool((a == null())) || bool(a->recycled)))){
			HX_STACK_LINE(2034)
			return null();
		}
		HX_STACK_LINE(2038)
		Dynamic l1 = ::com::stencyl::Engine_obj::engine->whenTypeGroupDiesListeners->get(a->getType());		HX_STACK_VAR(l1,"l1");
		HX_STACK_LINE(2039)
		Dynamic l2 = ::com::stencyl::Engine_obj::engine->whenTypeGroupDiesListeners->get(a->getGroup());		HX_STACK_VAR(l2,"l2");
		HX_STACK_LINE(2041)
		{
			HX_STACK_LINE(2041)
			Dynamic listeners = a->whenKilledListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(2041)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(2041)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(2041)
				try{
					HX_STACK_LINE(2041)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(2041)
					f(listeners).Cast< Void >();
					HX_STACK_LINE(2041)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(2041)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(2041)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4003,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(2041)
				(r)++;
			}
		}
		HX_STACK_LINE(2043)
		if (((l1 != null()))){
			HX_STACK_LINE(2045)
			Dynamic listeners = l1;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(2045)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(2045)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(2045)
				try{
					HX_STACK_LINE(2045)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(2045)
					f(a,listeners).Cast< Void >();
					HX_STACK_LINE(2045)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(2045)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(2045)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(2045)
				(r)++;
			}
		}
		HX_STACK_LINE(2048)
		if (((l2 != null()))){
			HX_STACK_LINE(2050)
			Dynamic listeners = l2;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(2050)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(2050)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(2050)
				try{
					HX_STACK_LINE(2050)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(2050)
					f(a,listeners).Cast< Void >();
					HX_STACK_LINE(2050)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(2050)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(2050)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(2050)
				(r)++;
			}
		}
		HX_STACK_LINE(2053)
		if ((a->isHUD)){
			HX_STACK_LINE(2054)
			a->unanchorFromScreen();
		}
		HX_STACK_LINE(2058)
		if ((a->alwaysSimulate)){
			HX_STACK_LINE(2059)
			a->makeSometimesSimulate(false);
		}
		HX_STACK_LINE(2063)
		a->firstMove = false;
		HX_STACK_LINE(2064)
		a->setX((int)1000000,false,true);
		HX_STACK_LINE(2065)
		a->setY((int)1000000,false,true);
		HX_STACK_LINE(2066)
		a->colX = (int)1000000;
		HX_STACK_LINE(2067)
		a->colY = (int)1000000;
		HX_STACK_LINE(2068)
		a->recycled = true;
		HX_STACK_LINE(2069)
		a->killLeaveScreen = false;
		HX_STACK_LINE(2070)
		a->lastScreenState = false;
		HX_STACK_LINE(2071)
		a->lastSceneState = false;
		HX_STACK_LINE(2074)
		a->cancelTweens();
		HX_STACK_LINE(2075)
		a->clearFilters();
		HX_STACK_LINE(2076)
		a->resetBlendMode();
		HX_STACK_LINE(2082)
		a->fadeTo((int)1,0.01,null());
		HX_STACK_LINE(2084)
		a->realScaleX = (int)1;
		HX_STACK_LINE(2085)
		a->realScaleY = (int)1;
		HX_STACK_LINE(2087)
		a->switchToDefaultAnimation();
		HX_STACK_LINE(2088)
		a->disableActorDrawing();
		HX_STACK_LINE(2091)
		if (((bool((a->physicsMode == (int)0)) && bool((a->body != null()))))){
			HX_STACK_LINE(2093)
			::box2D::dynamics::contacts::B2ContactEdge contact = a->body->getContactList();		HX_STACK_VAR(contact,"contact");
			HX_STACK_LINE(2095)
			while(((contact != null()))){
				HX_STACK_LINE(2097)
				::com::stencyl::Engine_obj::engine->world->m_contactManager->m_contactListener->endContact(contact->contact);
				HX_STACK_LINE(2098)
				contact = contact->next;
			}
		}
		HX_STACK_LINE(2102)
		a->removeAllListeners();
		HX_STACK_LINE(2103)
		a->resetListeners();
		HX_STACK_LINE(2105)
		this->removeActorFromLayer(a,a->layerID);
		HX_STACK_LINE(2107)
		if (((a->physicsMode == (int)0))){
			HX_STACK_LINE(2109)
			a->body->setActive(false);
			HX_STACK_LINE(2110)
			a->body->setAwake(false);
			HX_STACK_LINE(2113)
			if (((a->body->m_prev != null()))){
				HX_STACK_LINE(2114)
				a->body->m_prev->m_next = a->body->m_next;
			}
			HX_STACK_LINE(2118)
			if (((a->body->m_next != null()))){
				HX_STACK_LINE(2119)
				a->body->m_next->m_prev = a->body->m_prev;
			}
			HX_STACK_LINE(2123)
			if (((a->body == this->world->m_bodyList))){
				HX_STACK_LINE(2124)
				this->world->m_bodyList = a->body->m_next;
			}
			HX_STACK_LINE(2128)
			a->body->m_prev = null();
			HX_STACK_LINE(2129)
			a->body->m_next = null();
			HX_STACK_LINE(2131)
			--(this->world->m_bodyCount);
		}
		HX_STACK_LINE(2134)
		a->xSpeed = (int)0;
		HX_STACK_LINE(2135)
		a->ySpeed = (int)0;
		HX_STACK_LINE(2136)
		a->rSpeed = (int)0;
		HX_STACK_LINE(2137)
		a->continuousCollision = false;
		HX_STACK_LINE(2139)
		{
			HX_STACK_LINE(2139)
			::de::polygonal::ds::IntHashTable _this = this->allActors;		HX_STACK_VAR(_this,"_this");
			int key = a->ID;		HX_STACK_VAR(key,"key");
			struct _Function_2_1{
				inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2139);
					{
						HX_STACK_LINE(2139)
						::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(2139)
						int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
						struct _Function_3_1{
							inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2139);
								{
									HX_STACK_LINE(2139)
									int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(2139)
									i = _this1->_data->__get((i + (int)2));
									HX_STACK_LINE(2139)
									while(((i != (int)-1))){
										HX_STACK_LINE(2139)
										if (((_this1->_data->__get(i) == key))){
											HX_STACK_LINE(2139)
											v = _this1->_data->__get((i + (int)1));
											HX_STACK_LINE(2139)
											break;
										}
										HX_STACK_LINE(2139)
										i = _this1->_data->__get((i + (int)2));
									}
									HX_STACK_LINE(2139)
									return v;
								}
								return null();
							}
						};
						HX_STACK_LINE(2139)
						return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,key)) )) );
					}
					return null();
				}
			};
			HX_STACK_LINE(2139)
			int i = _Function_2_1::Block(_this,key);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(2139)
			if (((i == (int)-2147483647))){
				HX_STACK_LINE(2139)
				false;
			}
			else{
				HX_STACK_LINE(2139)
				_this->_key0 = (int)-2147483647;
				HX_STACK_LINE(2139)
				hx::IndexRef((_this->_vals).mPtr,i) = null();
				HX_STACK_LINE(2139)
				_this->_keys[i] = (int)-2147483647;
				HX_STACK_LINE(2139)
				_this->_next[i] = _this->_free;
				HX_STACK_LINE(2139)
				_this->_free = i;
				HX_STACK_LINE(2139)
				bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
				HX_STACK_LINE(2139)
				if (((_this->_sizeLevel > (int)0))){
					HX_STACK_LINE(2139)
					if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
						HX_STACK_LINE(2139)
						if ((_this->_isResizable)){
							HX_STACK_LINE(2139)
							shrink = true;
						}
					}
				}
				HX_STACK_LINE(2139)
				{
					HX_STACK_LINE(2139)
					::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(2139)
					int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(2139)
					int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(2139)
					if (((i1 == (int)-1))){
						HX_STACK_LINE(2139)
						false;
					}
					else{
						HX_STACK_LINE(2139)
						if (((key == _this1->_data->__get(i1)))){
							HX_STACK_LINE(2139)
							if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
								HX_STACK_LINE(2139)
								_this1->_hash[b] = (int)-1;
							}
							else{
								HX_STACK_LINE(2139)
								_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
							}
							HX_STACK_LINE(2139)
							int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(2139)
							_this1->_next[j] = _this1->_free;
							HX_STACK_LINE(2139)
							_this1->_free = j;
							HX_STACK_LINE(2139)
							_this1->_data[(i1 + (int)1)] = (int)-2147483647;
							HX_STACK_LINE(2139)
							_this1->_data[(i1 + (int)2)] = (int)-1;
							HX_STACK_LINE(2139)
							(_this1->_size)--;
							HX_STACK_LINE(2139)
							if (((_this1->_sizeLevel > (int)0))){
								HX_STACK_LINE(2139)
								if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
									HX_STACK_LINE(2139)
									if ((_this1->_isResizable)){
										HX_STACK_LINE(2139)
										_this1->_shrink();
									}
								}
							}
							HX_STACK_LINE(2139)
							true;
						}
						else{
							HX_STACK_LINE(2139)
							bool exists = false;		HX_STACK_VAR(exists,"exists");
							HX_STACK_LINE(2139)
							int i0 = i1;		HX_STACK_VAR(i0,"i0");
							HX_STACK_LINE(2139)
							i1 = _this1->_data->__get((i1 + (int)2));
							HX_STACK_LINE(2139)
							while(((i1 != (int)-1))){
								HX_STACK_LINE(2139)
								if (((_this1->_data->__get(i1) == key))){
									HX_STACK_LINE(2139)
									exists = true;
									HX_STACK_LINE(2139)
									break;
								}
								HX_STACK_LINE(2139)
								i1 = _this1->_data->__get(((i0 = i1) + (int)2));
							}
							HX_STACK_LINE(2139)
							if ((exists)){
								HX_STACK_LINE(2139)
								_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
								HX_STACK_LINE(2139)
								int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(2139)
								_this1->_next[j] = _this1->_free;
								HX_STACK_LINE(2139)
								_this1->_free = j;
								HX_STACK_LINE(2139)
								_this1->_data[(i1 + (int)1)] = (int)-2147483647;
								HX_STACK_LINE(2139)
								_this1->_data[(i1 + (int)2)] = (int)-1;
								HX_STACK_LINE(2139)
								--(_this1->_size);
								HX_STACK_LINE(2139)
								if (((_this1->_sizeLevel > (int)0))){
									HX_STACK_LINE(2139)
									if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
										HX_STACK_LINE(2139)
										if ((_this1->_isResizable)){
											HX_STACK_LINE(2139)
											_this1->_shrink();
										}
									}
								}
								HX_STACK_LINE(2139)
								true;
							}
							else{
								HX_STACK_LINE(2139)
								false;
							}
						}
					}
				}
				HX_STACK_LINE(2139)
				if ((shrink)){
					HX_STACK_LINE(2139)
					(_this->_sizeLevel)--;
					HX_STACK_LINE(2139)
					int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
					HX_STACK_LINE(2139)
					int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
					struct _Function_4_1{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2139);
							{
								HX_STACK_LINE(2139)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(2139)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(2139)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(2139)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(2139)
					_this->_next = _Function_4_1::Block(newSize);
					HX_STACK_LINE(2139)
					{
						HX_STACK_LINE(2139)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2139)
						while(((_g1 < _g))){
							HX_STACK_LINE(2139)
							int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(2139)
							_this->_next[i1] = (i1 + (int)1);
						}
					}
					HX_STACK_LINE(2139)
					_this->_next[(newSize - (int)1)] = (int)-1;
					HX_STACK_LINE(2139)
					_this->_free = (int)0;
					struct _Function_4_2{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2139);
							{
								HX_STACK_LINE(2139)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(2139)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(2139)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(2139)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(2139)
					Array< int > tmpKeys = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
					HX_STACK_LINE(2139)
					{
						HX_STACK_LINE(2139)
						int k = newSize;		HX_STACK_VAR(k,"k");
						HX_STACK_LINE(2139)
						if (((k == (int)-1))){
							HX_STACK_LINE(2139)
							k = tmpKeys->length;
						}
						HX_STACK_LINE(2139)
						{
							HX_STACK_LINE(2139)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2139)
							while(((_g < k))){
								HX_STACK_LINE(2139)
								int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(2139)
								tmpKeys[i1] = (int)-2147483647;
							}
						}
					}
					struct _Function_4_3{
						inline static Array< ::Dynamic > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",2139);
							{
								HX_STACK_LINE(2139)
								Array< ::Dynamic > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(2139)
								a1 = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(2139)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(2139)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(2139)
					Array< ::Dynamic > tmpVals = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
					HX_STACK_LINE(2139)
					for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
						int i1 = __it->next();
						{
							HX_STACK_LINE(2139)
							tmpKeys[_this->_free] = _this->_keys->__get(i1);
							HX_STACK_LINE(2139)
							tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
							HX_STACK_LINE(2139)
							_this->_free = _this->_next->__get(_this->_free);
						}
;
					}
					HX_STACK_LINE(2139)
					_this->_keys = tmpKeys;
					HX_STACK_LINE(2139)
					_this->_vals = tmpVals;
					HX_STACK_LINE(2139)
					{
						HX_STACK_LINE(2139)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2139)
						while(((_g1 < _g))){
							HX_STACK_LINE(2139)
							int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(2139)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
							HX_STACK_LINE(2139)
							int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
							HX_STACK_LINE(2139)
							if (((i2 == (int)-1))){
								HX_STACK_LINE(2139)
								false;
							}
							else{
								HX_STACK_LINE(2139)
								if (((_this1->_data->__get(i2) == key1))){
									HX_STACK_LINE(2139)
									_this1->_data[(i2 + (int)1)] = i1;
									HX_STACK_LINE(2139)
									true;
								}
								else{
									HX_STACK_LINE(2139)
									i2 = _this1->_data->__get((i2 + (int)2));
									HX_STACK_LINE(2139)
									while(((i2 != (int)-1))){
										HX_STACK_LINE(2139)
										if (((_this1->_data->__get(i2) == key1))){
											HX_STACK_LINE(2139)
											_this1->_data[(i2 + (int)1)] = i1;
											HX_STACK_LINE(2139)
											break;
										}
										HX_STACK_LINE(2139)
										i2 = _this1->_data->__get((i2 + (int)2));
									}
									HX_STACK_LINE(2139)
									(i2 != (int)-1);
								}
							}
						}
					}
				}
				HX_STACK_LINE(2139)
				true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,recycleActor,(void))

Void Engine_obj::moveActorToLayer( ::com::stencyl::models::Actor a,int layerID){
{
		HX_STACK_PUSH("Engine::moveActorToLayer","com/stencyl/Engine.hx",2014);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(layerID,"layerID");
		HX_STACK_LINE(2015)
		::flash::display::DisplayObjectContainer layer = this->actorsPerLayer->get(layerID);		HX_STACK_VAR(layer,"layer");
		HX_STACK_LINE(2017)
		if (((layer == null()))){
			HX_STACK_LINE(2019)
			::haxe::Log_obj::trace(((HX_CSTRING("Layer ID: ") + layerID) + HX_CSTRING(" does not exist")),hx::SourceInfo(HX_CSTRING("Engine.hx"),2019,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("moveActorToLayer")));
			HX_STACK_LINE(2020)
			::haxe::Log_obj::trace(HX_CSTRING("Putting actor inside default group"),hx::SourceInfo(HX_CSTRING("Engine.hx"),2020,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("moveActorToLayer")));
			HX_STACK_LINE(2021)
			layer = this->defaultGroup;
		}
		HX_STACK_LINE(2025)
		layer->addChild(a);
		HX_STACK_LINE(2026)
		a->layerID = layerID;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,moveActorToLayer,(void))

Void Engine_obj::removeActorFromLayer( ::com::stencyl::models::Actor a,int layerID){
{
		HX_STACK_PUSH("Engine::removeActorFromLayer","com/stencyl/Engine.hx",1996);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(layerID,"layerID");
		HX_STACK_LINE(1997)
		::flash::display::DisplayObjectContainer layer = this->actorsPerLayer->get(layerID);		HX_STACK_VAR(layer,"layer");
		HX_STACK_LINE(1999)
		if (((layer == null()))){
			HX_STACK_LINE(2001)
			::haxe::Log_obj::trace(((HX_CSTRING("Layer ID: ") + layerID) + HX_CSTRING(" does not exist")),hx::SourceInfo(HX_CSTRING("Engine.hx"),2001,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("removeActorFromLayer")));
			HX_STACK_LINE(2002)
			::haxe::Log_obj::trace(HX_CSTRING("Assuming default group"),hx::SourceInfo(HX_CSTRING("Engine.hx"),2002,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("removeActorFromLayer")));
			HX_STACK_LINE(2003)
			layer = this->defaultGroup;
		}
		HX_STACK_LINE(2007)
		if ((layer->contains(a))){
			HX_STACK_LINE(2008)
			layer->removeChild(a);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,removeActorFromLayer,(void))

Void Engine_obj::removeActor( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Engine::removeActor","com/stencyl/Engine.hx",1965);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(1966)
		{
			HX_STACK_LINE(1966)
			::de::polygonal::ds::IntHashTable _this = this->allActors;		HX_STACK_VAR(_this,"_this");
			int key = a->ID;		HX_STACK_VAR(key,"key");
			struct _Function_2_1{
				inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1966);
					{
						HX_STACK_LINE(1966)
						::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1966)
						int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
						struct _Function_3_1{
							inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1966);
								{
									HX_STACK_LINE(1966)
									int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(1966)
									i = _this1->_data->__get((i + (int)2));
									HX_STACK_LINE(1966)
									while(((i != (int)-1))){
										HX_STACK_LINE(1966)
										if (((_this1->_data->__get(i) == key))){
											HX_STACK_LINE(1966)
											v = _this1->_data->__get((i + (int)1));
											HX_STACK_LINE(1966)
											break;
										}
										HX_STACK_LINE(1966)
										i = _this1->_data->__get((i + (int)2));
									}
									HX_STACK_LINE(1966)
									return v;
								}
								return null();
							}
						};
						HX_STACK_LINE(1966)
						return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,key)) )) );
					}
					return null();
				}
			};
			HX_STACK_LINE(1966)
			int i = _Function_2_1::Block(_this,key);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1966)
			if (((i == (int)-2147483647))){
				HX_STACK_LINE(1966)
				false;
			}
			else{
				HX_STACK_LINE(1966)
				_this->_key0 = (int)-2147483647;
				HX_STACK_LINE(1966)
				hx::IndexRef((_this->_vals).mPtr,i) = null();
				HX_STACK_LINE(1966)
				_this->_keys[i] = (int)-2147483647;
				HX_STACK_LINE(1966)
				_this->_next[i] = _this->_free;
				HX_STACK_LINE(1966)
				_this->_free = i;
				HX_STACK_LINE(1966)
				bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
				HX_STACK_LINE(1966)
				if (((_this->_sizeLevel > (int)0))){
					HX_STACK_LINE(1966)
					if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
						HX_STACK_LINE(1966)
						if ((_this->_isResizable)){
							HX_STACK_LINE(1966)
							shrink = true;
						}
					}
				}
				HX_STACK_LINE(1966)
				{
					HX_STACK_LINE(1966)
					::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(1966)
					int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(1966)
					int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(1966)
					if (((i1 == (int)-1))){
						HX_STACK_LINE(1966)
						false;
					}
					else{
						HX_STACK_LINE(1966)
						if (((key == _this1->_data->__get(i1)))){
							HX_STACK_LINE(1966)
							if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
								HX_STACK_LINE(1966)
								_this1->_hash[b] = (int)-1;
							}
							else{
								HX_STACK_LINE(1966)
								_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
							}
							HX_STACK_LINE(1966)
							int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(1966)
							_this1->_next[j] = _this1->_free;
							HX_STACK_LINE(1966)
							_this1->_free = j;
							HX_STACK_LINE(1966)
							_this1->_data[(i1 + (int)1)] = (int)-2147483647;
							HX_STACK_LINE(1966)
							_this1->_data[(i1 + (int)2)] = (int)-1;
							HX_STACK_LINE(1966)
							(_this1->_size)--;
							HX_STACK_LINE(1966)
							if (((_this1->_sizeLevel > (int)0))){
								HX_STACK_LINE(1966)
								if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
									HX_STACK_LINE(1966)
									if ((_this1->_isResizable)){
										HX_STACK_LINE(1966)
										_this1->_shrink();
									}
								}
							}
							HX_STACK_LINE(1966)
							true;
						}
						else{
							HX_STACK_LINE(1966)
							bool exists = false;		HX_STACK_VAR(exists,"exists");
							HX_STACK_LINE(1966)
							int i0 = i1;		HX_STACK_VAR(i0,"i0");
							HX_STACK_LINE(1966)
							i1 = _this1->_data->__get((i1 + (int)2));
							HX_STACK_LINE(1966)
							while(((i1 != (int)-1))){
								HX_STACK_LINE(1966)
								if (((_this1->_data->__get(i1) == key))){
									HX_STACK_LINE(1966)
									exists = true;
									HX_STACK_LINE(1966)
									break;
								}
								HX_STACK_LINE(1966)
								i1 = _this1->_data->__get(((i0 = i1) + (int)2));
							}
							HX_STACK_LINE(1966)
							if ((exists)){
								HX_STACK_LINE(1966)
								_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
								HX_STACK_LINE(1966)
								int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(1966)
								_this1->_next[j] = _this1->_free;
								HX_STACK_LINE(1966)
								_this1->_free = j;
								HX_STACK_LINE(1966)
								_this1->_data[(i1 + (int)1)] = (int)-2147483647;
								HX_STACK_LINE(1966)
								_this1->_data[(i1 + (int)2)] = (int)-1;
								HX_STACK_LINE(1966)
								--(_this1->_size);
								HX_STACK_LINE(1966)
								if (((_this1->_sizeLevel > (int)0))){
									HX_STACK_LINE(1966)
									if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
										HX_STACK_LINE(1966)
										if ((_this1->_isResizable)){
											HX_STACK_LINE(1966)
											_this1->_shrink();
										}
									}
								}
								HX_STACK_LINE(1966)
								true;
							}
							else{
								HX_STACK_LINE(1966)
								false;
							}
						}
					}
				}
				HX_STACK_LINE(1966)
				if ((shrink)){
					HX_STACK_LINE(1966)
					(_this->_sizeLevel)--;
					HX_STACK_LINE(1966)
					int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
					HX_STACK_LINE(1966)
					int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
					struct _Function_4_1{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1966);
							{
								HX_STACK_LINE(1966)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(1966)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(1966)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(1966)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1966)
					_this->_next = _Function_4_1::Block(newSize);
					HX_STACK_LINE(1966)
					{
						HX_STACK_LINE(1966)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1966)
						while(((_g1 < _g))){
							HX_STACK_LINE(1966)
							int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(1966)
							_this->_next[i1] = (i1 + (int)1);
						}
					}
					HX_STACK_LINE(1966)
					_this->_next[(newSize - (int)1)] = (int)-1;
					HX_STACK_LINE(1966)
					_this->_free = (int)0;
					struct _Function_4_2{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1966);
							{
								HX_STACK_LINE(1966)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(1966)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(1966)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(1966)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1966)
					Array< int > tmpKeys = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
					HX_STACK_LINE(1966)
					{
						HX_STACK_LINE(1966)
						int k = newSize;		HX_STACK_VAR(k,"k");
						HX_STACK_LINE(1966)
						if (((k == (int)-1))){
							HX_STACK_LINE(1966)
							k = tmpKeys->length;
						}
						HX_STACK_LINE(1966)
						{
							HX_STACK_LINE(1966)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1966)
							while(((_g < k))){
								HX_STACK_LINE(1966)
								int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(1966)
								tmpKeys[i1] = (int)-2147483647;
							}
						}
					}
					struct _Function_4_3{
						inline static Array< ::Dynamic > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1966);
							{
								HX_STACK_LINE(1966)
								Array< ::Dynamic > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(1966)
								a1 = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(1966)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(1966)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1966)
					Array< ::Dynamic > tmpVals = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
					HX_STACK_LINE(1966)
					for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
						int i1 = __it->next();
						{
							HX_STACK_LINE(1966)
							tmpKeys[_this->_free] = _this->_keys->__get(i1);
							HX_STACK_LINE(1966)
							tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
							HX_STACK_LINE(1966)
							_this->_free = _this->_next->__get(_this->_free);
						}
;
					}
					HX_STACK_LINE(1966)
					_this->_keys = tmpKeys;
					HX_STACK_LINE(1966)
					_this->_vals = tmpVals;
					HX_STACK_LINE(1966)
					{
						HX_STACK_LINE(1966)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1966)
						while(((_g1 < _g))){
							HX_STACK_LINE(1966)
							int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(1966)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
							HX_STACK_LINE(1966)
							int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
							HX_STACK_LINE(1966)
							if (((i2 == (int)-1))){
								HX_STACK_LINE(1966)
								false;
							}
							else{
								HX_STACK_LINE(1966)
								if (((_this1->_data->__get(i2) == key1))){
									HX_STACK_LINE(1966)
									_this1->_data[(i2 + (int)1)] = i1;
									HX_STACK_LINE(1966)
									true;
								}
								else{
									HX_STACK_LINE(1966)
									i2 = _this1->_data->__get((i2 + (int)2));
									HX_STACK_LINE(1966)
									while(((i2 != (int)-1))){
										HX_STACK_LINE(1966)
										if (((_this1->_data->__get(i2) == key1))){
											HX_STACK_LINE(1966)
											_this1->_data[(i2 + (int)1)] = i1;
											HX_STACK_LINE(1966)
											break;
										}
										HX_STACK_LINE(1966)
										i2 = _this1->_data->__get((i2 + (int)2));
									}
									HX_STACK_LINE(1966)
									(i2 != (int)-1);
								}
							}
						}
					}
				}
				HX_STACK_LINE(1966)
				true;
			}
		}
		HX_STACK_LINE(1969)
		this->removeActorFromLayer(a,a->layerID);
		HX_STACK_LINE(1972)
		this->groups->get(a->getGroupID())->__Field(HX_CSTRING("removeChild"),true)(a);
		HX_STACK_LINE(1974)
		if (((bool(a->isHUD) || bool(a->alwaysSimulate)))){
			HX_STACK_LINE(1976)
			::de::polygonal::ds::IntHashTable _this = this->hudActors;		HX_STACK_VAR(_this,"_this");
			int key = a->ID;		HX_STACK_VAR(key,"key");
			struct _Function_2_1{
				inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
					HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1976);
					{
						HX_STACK_LINE(1976)
						::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(1976)
						int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
						struct _Function_3_1{
							inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1976);
								{
									HX_STACK_LINE(1976)
									int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(1976)
									i = _this1->_data->__get((i + (int)2));
									HX_STACK_LINE(1976)
									while(((i != (int)-1))){
										HX_STACK_LINE(1976)
										if (((_this1->_data->__get(i) == key))){
											HX_STACK_LINE(1976)
											v = _this1->_data->__get((i + (int)1));
											HX_STACK_LINE(1976)
											break;
										}
										HX_STACK_LINE(1976)
										i = _this1->_data->__get((i + (int)2));
									}
									HX_STACK_LINE(1976)
									return v;
								}
								return null();
							}
						};
						HX_STACK_LINE(1976)
						return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,key)) )) );
					}
					return null();
				}
			};
			HX_STACK_LINE(1976)
			int i = _Function_2_1::Block(_this,key);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1976)
			if (((i == (int)-2147483647))){
				HX_STACK_LINE(1976)
				false;
			}
			else{
				HX_STACK_LINE(1976)
				_this->_key0 = (int)-2147483647;
				HX_STACK_LINE(1976)
				hx::IndexRef((_this->_vals).mPtr,i) = null();
				HX_STACK_LINE(1976)
				_this->_keys[i] = (int)-2147483647;
				HX_STACK_LINE(1976)
				_this->_next[i] = _this->_free;
				HX_STACK_LINE(1976)
				_this->_free = i;
				HX_STACK_LINE(1976)
				bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
				HX_STACK_LINE(1976)
				if (((_this->_sizeLevel > (int)0))){
					HX_STACK_LINE(1976)
					if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
						HX_STACK_LINE(1976)
						if ((_this->_isResizable)){
							HX_STACK_LINE(1976)
							shrink = true;
						}
					}
				}
				HX_STACK_LINE(1976)
				{
					HX_STACK_LINE(1976)
					::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(1976)
					int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(1976)
					int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(1976)
					if (((i1 == (int)-1))){
						HX_STACK_LINE(1976)
						false;
					}
					else{
						HX_STACK_LINE(1976)
						if (((key == _this1->_data->__get(i1)))){
							HX_STACK_LINE(1976)
							if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
								HX_STACK_LINE(1976)
								_this1->_hash[b] = (int)-1;
							}
							else{
								HX_STACK_LINE(1976)
								_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
							}
							HX_STACK_LINE(1976)
							int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(1976)
							_this1->_next[j] = _this1->_free;
							HX_STACK_LINE(1976)
							_this1->_free = j;
							HX_STACK_LINE(1976)
							_this1->_data[(i1 + (int)1)] = (int)-2147483647;
							HX_STACK_LINE(1976)
							_this1->_data[(i1 + (int)2)] = (int)-1;
							HX_STACK_LINE(1976)
							(_this1->_size)--;
							HX_STACK_LINE(1976)
							if (((_this1->_sizeLevel > (int)0))){
								HX_STACK_LINE(1976)
								if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
									HX_STACK_LINE(1976)
									if ((_this1->_isResizable)){
										HX_STACK_LINE(1976)
										_this1->_shrink();
									}
								}
							}
							HX_STACK_LINE(1976)
							true;
						}
						else{
							HX_STACK_LINE(1976)
							bool exists = false;		HX_STACK_VAR(exists,"exists");
							HX_STACK_LINE(1976)
							int i0 = i1;		HX_STACK_VAR(i0,"i0");
							HX_STACK_LINE(1976)
							i1 = _this1->_data->__get((i1 + (int)2));
							HX_STACK_LINE(1976)
							while(((i1 != (int)-1))){
								HX_STACK_LINE(1976)
								if (((_this1->_data->__get(i1) == key))){
									HX_STACK_LINE(1976)
									exists = true;
									HX_STACK_LINE(1976)
									break;
								}
								HX_STACK_LINE(1976)
								i1 = _this1->_data->__get(((i0 = i1) + (int)2));
							}
							HX_STACK_LINE(1976)
							if ((exists)){
								HX_STACK_LINE(1976)
								_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
								HX_STACK_LINE(1976)
								int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(1976)
								_this1->_next[j] = _this1->_free;
								HX_STACK_LINE(1976)
								_this1->_free = j;
								HX_STACK_LINE(1976)
								_this1->_data[(i1 + (int)1)] = (int)-2147483647;
								HX_STACK_LINE(1976)
								_this1->_data[(i1 + (int)2)] = (int)-1;
								HX_STACK_LINE(1976)
								--(_this1->_size);
								HX_STACK_LINE(1976)
								if (((_this1->_sizeLevel > (int)0))){
									HX_STACK_LINE(1976)
									if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
										HX_STACK_LINE(1976)
										if ((_this1->_isResizable)){
											HX_STACK_LINE(1976)
											_this1->_shrink();
										}
									}
								}
								HX_STACK_LINE(1976)
								true;
							}
							else{
								HX_STACK_LINE(1976)
								false;
							}
						}
					}
				}
				HX_STACK_LINE(1976)
				if ((shrink)){
					HX_STACK_LINE(1976)
					(_this->_sizeLevel)--;
					HX_STACK_LINE(1976)
					int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
					HX_STACK_LINE(1976)
					int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
					struct _Function_4_1{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1976);
							{
								HX_STACK_LINE(1976)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(1976)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(1976)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(1976)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1976)
					_this->_next = _Function_4_1::Block(newSize);
					HX_STACK_LINE(1976)
					{
						HX_STACK_LINE(1976)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1976)
						while(((_g1 < _g))){
							HX_STACK_LINE(1976)
							int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(1976)
							_this->_next[i1] = (i1 + (int)1);
						}
					}
					HX_STACK_LINE(1976)
					_this->_next[(newSize - (int)1)] = (int)-1;
					HX_STACK_LINE(1976)
					_this->_free = (int)0;
					struct _Function_4_2{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1976);
							{
								HX_STACK_LINE(1976)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(1976)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(1976)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(1976)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1976)
					Array< int > tmpKeys = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
					HX_STACK_LINE(1976)
					{
						HX_STACK_LINE(1976)
						int k = newSize;		HX_STACK_VAR(k,"k");
						HX_STACK_LINE(1976)
						if (((k == (int)-1))){
							HX_STACK_LINE(1976)
							k = tmpKeys->length;
						}
						HX_STACK_LINE(1976)
						{
							HX_STACK_LINE(1976)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1976)
							while(((_g < k))){
								HX_STACK_LINE(1976)
								int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(1976)
								tmpKeys[i1] = (int)-2147483647;
							}
						}
					}
					struct _Function_4_3{
						inline static Array< ::Dynamic > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1976);
							{
								HX_STACK_LINE(1976)
								Array< ::Dynamic > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(1976)
								a1 = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(1976)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(1976)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1976)
					Array< ::Dynamic > tmpVals = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
					HX_STACK_LINE(1976)
					for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
						int i1 = __it->next();
						{
							HX_STACK_LINE(1976)
							tmpKeys[_this->_free] = _this->_keys->__get(i1);
							HX_STACK_LINE(1976)
							tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
							HX_STACK_LINE(1976)
							_this->_free = _this->_next->__get(_this->_free);
						}
;
					}
					HX_STACK_LINE(1976)
					_this->_keys = tmpKeys;
					HX_STACK_LINE(1976)
					_this->_vals = tmpVals;
					HX_STACK_LINE(1976)
					{
						HX_STACK_LINE(1976)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1976)
						while(((_g1 < _g))){
							HX_STACK_LINE(1976)
							int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(1976)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
							HX_STACK_LINE(1976)
							int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
							HX_STACK_LINE(1976)
							if (((i2 == (int)-1))){
								HX_STACK_LINE(1976)
								false;
							}
							else{
								HX_STACK_LINE(1976)
								if (((_this1->_data->__get(i2) == key1))){
									HX_STACK_LINE(1976)
									_this1->_data[(i2 + (int)1)] = i1;
									HX_STACK_LINE(1976)
									true;
								}
								else{
									HX_STACK_LINE(1976)
									i2 = _this1->_data->__get((i2 + (int)2));
									HX_STACK_LINE(1976)
									while(((i2 != (int)-1))){
										HX_STACK_LINE(1976)
										if (((_this1->_data->__get(i2) == key1))){
											HX_STACK_LINE(1976)
											_this1->_data[(i2 + (int)1)] = i1;
											HX_STACK_LINE(1976)
											break;
										}
										HX_STACK_LINE(1976)
										i2 = _this1->_data->__get((i2 + (int)2));
									}
									HX_STACK_LINE(1976)
									(i2 != (int)-1);
								}
							}
						}
					}
				}
				HX_STACK_LINE(1976)
				true;
			}
		}
		HX_STACK_LINE(1979)
		a->destroy();
		HX_STACK_LINE(1983)
		if (((::com::stencyl::Data_obj::get()->resources->get(a->typeID) != null()))){
			HX_STACK_LINE(1985)
			::com::stencyl::models::actor::ActorType typeID = hx::TCast< com::stencyl::models::actor::ActorType >::cast(::com::stencyl::Data_obj::get()->resources->get(a->typeID));		HX_STACK_VAR(typeID,"typeID");
			HX_STACK_LINE(1986)
			Array< ::Dynamic > cache = this->actorsOfType->get(typeID->ID);		HX_STACK_VAR(cache,"cache");
			HX_STACK_LINE(1988)
			if (((cache != null()))){
				HX_STACK_LINE(1989)
				cache->remove(a);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,removeActor,(void))

::com::stencyl::models::Actor Engine_obj::createActor( ::com::stencyl::models::scene::ActorInstance ai,hx::Null< bool >  __o_offset){
bool offset = __o_offset.Default(false);
	HX_STACK_PUSH("Engine::createActor","com/stencyl/Engine.hx",1843);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ai,"ai");
	HX_STACK_ARG(offset,"offset");
{
		HX_STACK_LINE(1844)
		::com::stencyl::models::actor::Sprite s = hx::TCast< com::stencyl::models::actor::Sprite >::cast(::com::stencyl::Data_obj::get()->resources->get(ai->actorType->spriteID));		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(1846)
		::com::stencyl::models::Actor a = ::com::stencyl::models::Actor_obj::__new(hx::ObjectPtr<OBJ_>(this),ai->elementID,ai->groupID,(Float(ai->x) / Float(::com::stencyl::Engine_obj::physicsScale)),(Float(ai->y) / Float(::com::stencyl::Engine_obj::physicsScale)),ai->layerID,s->width,s->height,s,ai->behaviorValues,ai->actorType,(  ((::com::stencyl::Engine_obj::NO_PHYSICS)) ? ::box2D::dynamics::B2BodyDef(null()) : ::box2D::dynamics::B2BodyDef(ai->actorType->bodyDef) ),false,false,false,false,null(),ai->actorType->ID,ai->actorType->autoScale,ai->actorType->ignoreGravity,ai->actorType->physicsMode);		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(1871)
		if (((ai->angle != (int)0))){
			HX_STACK_LINE(1872)
			if (((bool((a->currOffset->x != (int)0)) || bool((a->currOffset->y != (int)0))))){
				HX_STACK_LINE(1875)
				int resetOrigX = ::Std_obj::_int(a->currOrigin->x);		HX_STACK_VAR(resetOrigX,"resetOrigX");
				HX_STACK_LINE(1876)
				int resetOrigY = ::Std_obj::_int(a->currOrigin->y);		HX_STACK_VAR(resetOrigY,"resetOrigY");
				HX_STACK_LINE(1878)
				a->setOriginPoint(::Std_obj::_int((Float(a->cacheWidth) / Float((int)2))),::Std_obj::_int((Float(a->cacheHeight) / Float((int)2))));
				HX_STACK_LINE(1879)
				a->setAngle(ai->angle,false);
				HX_STACK_LINE(1880)
				a->setOriginPoint(resetOrigX,resetOrigY);
			}
			else{
				HX_STACK_LINE(1884)
				a->setAngle(ai->angle,false);
			}
		}
		HX_STACK_LINE(1889)
		if (((bool((ai->scaleX != (int)1)) || bool((ai->scaleY != (int)1))))){
			HX_STACK_LINE(1890)
			a->growTo(ai->scaleX,ai->scaleY,(int)0,null());
		}
		HX_STACK_LINE(1894)
		a->set_name(ai->actorType->name);
		HX_STACK_LINE(1896)
		this->moveActorToLayer(a,ai->layerID);
		HX_STACK_LINE(1902)
		if (((this->recycledActorsOfType->get(ai->actorType->ID) == null()))){
			HX_STACK_LINE(1903)
			this->recycledActorsOfType->set(ai->actorType->ID,Array_obj< ::Dynamic >::__new());
		}
		HX_STACK_LINE(1908)
		Array< ::Dynamic > cache = this->recycledActorsOfType->get(ai->actorType->ID);		HX_STACK_VAR(cache,"cache");
		HX_STACK_LINE(1909)
		cache->push(a);
		HX_STACK_LINE(1913)
		if (((ai->actorType->physicsMode < (int)2))){
			HX_STACK_LINE(1915)
			::com::stencyl::models::actor::Group group = this->groups->get(ai->groupID);		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(1917)
			if (((group != null()))){
				HX_STACK_LINE(1918)
				group->addChild(a);
			}
		}
		HX_STACK_LINE(1926)
		if (((ai->elementID == ::com::stencyl::utils::Utils_obj::INTEGER_MAX))){
			HX_STACK_LINE(1928)
			(this->nextID)++;
			HX_STACK_LINE(1929)
			a->ID = this->nextID;
			HX_STACK_LINE(1930)
			{
				HX_STACK_LINE(1930)
				::de::polygonal::ds::IntHashTable _this = this->allActors;		HX_STACK_VAR(_this,"_this");
				int key = a->ID;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(1930)
				_this->_key0 = (int)-2147483647;
				HX_STACK_LINE(1930)
				if (((_this->_h->_size == _this->_h->_capacity))){
					HX_STACK_LINE(1930)
					int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
					HX_STACK_LINE(1930)
					int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
					struct _Function_4_1{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1930);
							{
								HX_STACK_LINE(1930)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(1930)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(1930)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(1930)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1930)
					Array< int > tmp = _Function_4_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(1930)
					{
						HX_STACK_LINE(1930)
						Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(1930)
						if (((max == (int)-1))){
							HX_STACK_LINE(1930)
							max = src->length;
						}
						HX_STACK_LINE(1930)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(1930)
						{
							HX_STACK_LINE(1930)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1930)
							while(((_g < max))){
								HX_STACK_LINE(1930)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1930)
								tmp[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(1930)
						tmp;
					}
					HX_STACK_LINE(1930)
					_this->_next = tmp;
					struct _Function_4_2{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1930);
							{
								HX_STACK_LINE(1930)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(1930)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(1930)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(1930)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1930)
					Array< int > tmp1 = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(1930)
					{
						HX_STACK_LINE(1930)
						Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(1930)
						if (((max == (int)-1))){
							HX_STACK_LINE(1930)
							max = src->length;
						}
						HX_STACK_LINE(1930)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(1930)
						{
							HX_STACK_LINE(1930)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1930)
							while(((_g < max))){
								HX_STACK_LINE(1930)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1930)
								tmp1[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(1930)
						tmp1;
					}
					HX_STACK_LINE(1930)
					_this->_keys = tmp1;
					HX_STACK_LINE(1930)
					{
						HX_STACK_LINE(1930)
						int _g = oldSize;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1930)
						while(((_g < newSize))){
							HX_STACK_LINE(1930)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(1930)
							_this->_keys[i] = (int)-2147483647;
						}
					}
					HX_STACK_LINE(1930)
					{
						HX_STACK_LINE(1930)
						int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
						int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1930)
						while(((_g1 < _g))){
							HX_STACK_LINE(1930)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(1930)
							_this->_next[i] = (i + (int)1);
						}
					}
					HX_STACK_LINE(1930)
					_this->_next[(newSize - (int)1)] = (int)-1;
					HX_STACK_LINE(1930)
					_this->_free = oldSize;
					struct _Function_4_3{
						inline static Array< ::Dynamic > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1930);
							{
								HX_STACK_LINE(1930)
								Array< ::Dynamic > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(1930)
								a1 = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(1930)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(1930)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1930)
					Array< ::Dynamic > tmp2 = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1930)
					{
						HX_STACK_LINE(1930)
						Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(1930)
						if (((max == (int)-1))){
							HX_STACK_LINE(1930)
							max = src->length;
						}
						HX_STACK_LINE(1930)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(1930)
						{
							HX_STACK_LINE(1930)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1930)
							while(((_g < max))){
								HX_STACK_LINE(1930)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1930)
								tmp2[(j)++] = src->__get(i).StaticCast< ::com::stencyl::models::Actor >();
							}
						}
						HX_STACK_LINE(1930)
						tmp2;
					}
					HX_STACK_LINE(1930)
					_this->_vals = tmp2;
					HX_STACK_LINE(1930)
					(_this->_sizeLevel)++;
				}
				HX_STACK_LINE(1930)
				{
					HX_STACK_LINE(1930)
					::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(1930)
					if (((_this1->_size == _this1->_capacity))){
						HX_STACK_LINE(1930)
						if ((_this1->_isResizable)){
							HX_STACK_LINE(1930)
							_this1->_expand();
						}
					}
					HX_STACK_LINE(1930)
					int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1930)
					_this1->_free = _this1->_next->__get(_this1->_free);
					HX_STACK_LINE(1930)
					_this1->_data[i] = key;
					HX_STACK_LINE(1930)
					_this1->_data[(i + (int)1)] = _this->_free;
					HX_STACK_LINE(1930)
					int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(1930)
					int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(1930)
					if (((j == (int)-1))){
						HX_STACK_LINE(1930)
						_this1->_hash[b] = i;
						HX_STACK_LINE(1930)
						(_this1->_size)++;
						HX_STACK_LINE(1930)
						true;
					}
					else{
						HX_STACK_LINE(1930)
						bool first = (_this1->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
						HX_STACK_LINE(1930)
						int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1930)
						while(((t != (int)-1))){
							HX_STACK_LINE(1930)
							if (((_this1->_data->__get(t) == key))){
								HX_STACK_LINE(1930)
								first = false;
							}
							HX_STACK_LINE(1930)
							j = t;
							HX_STACK_LINE(1930)
							t = _this1->_data->__get((t + (int)2));
						}
						HX_STACK_LINE(1930)
						_this1->_data[(j + (int)2)] = i;
						HX_STACK_LINE(1930)
						(_this1->_size)++;
						HX_STACK_LINE(1930)
						first;
					}
				}
				HX_STACK_LINE(1930)
				hx::IndexRef((_this->_vals).mPtr,_this->_free) = a;
				HX_STACK_LINE(1930)
				_this->_keys[_this->_free] = key;
				HX_STACK_LINE(1930)
				_this->_free = _this->_next->__get(_this->_free);
				HX_STACK_LINE(1930)
				true;
			}
		}
		else{
			HX_STACK_LINE(1935)
			{
				HX_STACK_LINE(1935)
				::de::polygonal::ds::IntHashTable _this = this->allActors;		HX_STACK_VAR(_this,"_this");
				int key = a->ID;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(1935)
				_this->_key0 = (int)-2147483647;
				HX_STACK_LINE(1935)
				if (((_this->_h->_size == _this->_h->_capacity))){
					HX_STACK_LINE(1935)
					int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
					HX_STACK_LINE(1935)
					int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
					struct _Function_4_1{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1935);
							{
								HX_STACK_LINE(1935)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(1935)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(1935)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(1935)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1935)
					Array< int > tmp = _Function_4_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(1935)
					{
						HX_STACK_LINE(1935)
						Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(1935)
						if (((max == (int)-1))){
							HX_STACK_LINE(1935)
							max = src->length;
						}
						HX_STACK_LINE(1935)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(1935)
						{
							HX_STACK_LINE(1935)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1935)
							while(((_g < max))){
								HX_STACK_LINE(1935)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1935)
								tmp[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(1935)
						tmp;
					}
					HX_STACK_LINE(1935)
					_this->_next = tmp;
					struct _Function_4_2{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1935);
							{
								HX_STACK_LINE(1935)
								Array< int > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(1935)
								a1 = Array_obj< int >::__new();
								HX_STACK_LINE(1935)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(1935)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1935)
					Array< int > tmp1 = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(1935)
					{
						HX_STACK_LINE(1935)
						Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(1935)
						if (((max == (int)-1))){
							HX_STACK_LINE(1935)
							max = src->length;
						}
						HX_STACK_LINE(1935)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(1935)
						{
							HX_STACK_LINE(1935)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1935)
							while(((_g < max))){
								HX_STACK_LINE(1935)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1935)
								tmp1[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(1935)
						tmp1;
					}
					HX_STACK_LINE(1935)
					_this->_keys = tmp1;
					HX_STACK_LINE(1935)
					{
						HX_STACK_LINE(1935)
						int _g = oldSize;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1935)
						while(((_g < newSize))){
							HX_STACK_LINE(1935)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(1935)
							_this->_keys[i] = (int)-2147483647;
						}
					}
					HX_STACK_LINE(1935)
					{
						HX_STACK_LINE(1935)
						int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
						int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1935)
						while(((_g1 < _g))){
							HX_STACK_LINE(1935)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(1935)
							_this->_next[i] = (i + (int)1);
						}
					}
					HX_STACK_LINE(1935)
					_this->_next[(newSize - (int)1)] = (int)-1;
					HX_STACK_LINE(1935)
					_this->_free = oldSize;
					struct _Function_4_3{
						inline static Array< ::Dynamic > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1935);
							{
								HX_STACK_LINE(1935)
								Array< ::Dynamic > a1;		HX_STACK_VAR(a1,"a1");
								HX_STACK_LINE(1935)
								a1 = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(1935)
								a1[(newSize - (int)1)] = null();
								HX_STACK_LINE(1935)
								return a1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1935)
					Array< ::Dynamic > tmp2 = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1935)
					{
						HX_STACK_LINE(1935)
						Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(1935)
						if (((max == (int)-1))){
							HX_STACK_LINE(1935)
							max = src->length;
						}
						HX_STACK_LINE(1935)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(1935)
						{
							HX_STACK_LINE(1935)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1935)
							while(((_g < max))){
								HX_STACK_LINE(1935)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1935)
								tmp2[(j)++] = src->__get(i).StaticCast< ::com::stencyl::models::Actor >();
							}
						}
						HX_STACK_LINE(1935)
						tmp2;
					}
					HX_STACK_LINE(1935)
					_this->_vals = tmp2;
					HX_STACK_LINE(1935)
					(_this->_sizeLevel)++;
				}
				HX_STACK_LINE(1935)
				{
					HX_STACK_LINE(1935)
					::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(1935)
					if (((_this1->_size == _this1->_capacity))){
						HX_STACK_LINE(1935)
						if ((_this1->_isResizable)){
							HX_STACK_LINE(1935)
							_this1->_expand();
						}
					}
					HX_STACK_LINE(1935)
					int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1935)
					_this1->_free = _this1->_next->__get(_this1->_free);
					HX_STACK_LINE(1935)
					_this1->_data[i] = key;
					HX_STACK_LINE(1935)
					_this1->_data[(i + (int)1)] = _this->_free;
					HX_STACK_LINE(1935)
					int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(1935)
					int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(1935)
					if (((j == (int)-1))){
						HX_STACK_LINE(1935)
						_this1->_hash[b] = i;
						HX_STACK_LINE(1935)
						(_this1->_size)++;
						HX_STACK_LINE(1935)
						true;
					}
					else{
						HX_STACK_LINE(1935)
						bool first = (_this1->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
						HX_STACK_LINE(1935)
						int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1935)
						while(((t != (int)-1))){
							HX_STACK_LINE(1935)
							if (((_this1->_data->__get(t) == key))){
								HX_STACK_LINE(1935)
								first = false;
							}
							HX_STACK_LINE(1935)
							j = t;
							HX_STACK_LINE(1935)
							t = _this1->_data->__get((t + (int)2));
						}
						HX_STACK_LINE(1935)
						_this1->_data[(j + (int)2)] = i;
						HX_STACK_LINE(1935)
						(_this1->_size)++;
						HX_STACK_LINE(1935)
						first;
					}
				}
				HX_STACK_LINE(1935)
				hx::IndexRef((_this->_vals).mPtr,_this->_free) = a;
				HX_STACK_LINE(1935)
				_this->_keys[_this->_free] = key;
				HX_STACK_LINE(1935)
				_this->_free = _this->_next->__get(_this->_free);
				HX_STACK_LINE(1935)
				true;
			}
			HX_STACK_LINE(1936)
			this->nextID = ::Std_obj::_int(::Math_obj::max(a->ID,this->nextID));
		}
		HX_STACK_LINE(1939)
		a->internalUpdate((int)0,false);
		HX_STACK_LINE(1940)
		a->updateDrawingMatrix();
		HX_STACK_LINE(1945)
		if (((ai->actorType != null()))){
			HX_STACK_LINE(1947)
			Array< ::Dynamic > cache1 = this->actorsOfType->get(ai->actorType->ID);		HX_STACK_VAR(cache1,"cache1");
			HX_STACK_LINE(1949)
			if (((cache1 == null()))){
				HX_STACK_LINE(1951)
				cache1 = Array_obj< ::Dynamic >::__new();
				HX_STACK_LINE(1952)
				this->actorsOfType->set(ai->actorType->ID,cache1);
			}
			HX_STACK_LINE(1955)
			if (((cache1 != null()))){
				HX_STACK_LINE(1956)
				cache1->push(a);
			}
		}
		HX_STACK_LINE(1961)
		return a;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,createActor,return )

Void Engine_obj::createActorInNextScene( ::com::stencyl::models::actor::ActorType type,Float x,Float y,int layer){
{
		HX_STACK_PUSH("Engine::createActorInNextScene","com/stencyl/Engine.hx",1838);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(layer,"layer");
		HX_STACK_LINE(1838)
		this->actorsToCreateInNextScene->push(::com::stencyl::models::scene::DeferredActor_obj::__new(type,x,y,layer));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,createActorInNextScene,(void))

bool Engine_obj::isTransitioningOut( ){
	HX_STACK_PUSH("Engine::isTransitioningOut","com/stencyl/Engine.hx",1824);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1825)
	if (((bool((this->leave != null())) && bool(this->leave->isActive())))){
		HX_STACK_LINE(1826)
		return true;
	}
	HX_STACK_LINE(1830)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,isTransitioningOut,return )

bool Engine_obj::isTransitioning( ){
	HX_STACK_PUSH("Engine::isTransitioning","com/stencyl/Engine.hx",1809);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1810)
	if (((bool((this->enter != null())) && bool(this->enter->isActive())))){
		HX_STACK_LINE(1811)
		return true;
	}
	else{
		HX_STACK_LINE(1815)
		if (((bool((this->leave != null())) && bool(this->leave->isActive())))){
			HX_STACK_LINE(1816)
			return true;
		}
	}
	HX_STACK_LINE(1820)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,isTransitioning,return )

Void Engine_obj::enterScene( ){
{
		HX_STACK_PUSH("Engine::enterScene","com/stencyl/Engine.hx",1789);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1790)
		if ((!(this->enter->isComplete()))){
			HX_STACK_LINE(1792)
			this->enter->start();
			HX_STACK_LINE(1794)
			if (((this->leave != null()))){
				HX_STACK_LINE(1795)
				this->leave->cleanup();
			}
		}
		HX_STACK_LINE(1800)
		this->leave = null();
		HX_STACK_LINE(1804)
		this->cleanup();
		HX_STACK_LINE(1805)
		this->loadScene(this->sceneToEnter);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,enterScene,(void))

Void Engine_obj::switchScene( int sceneID,::com::stencyl::graphics::transitions::Transition leave,::com::stencyl::graphics::transitions::Transition enter){
{
		HX_STACK_PUSH("Engine::switchScene","com/stencyl/Engine.hx",1751);
		HX_STACK_THIS(this);
		HX_STACK_ARG(sceneID,"sceneID");
		HX_STACK_ARG(leave,"leave");
		HX_STACK_ARG(enter,"enter");
		HX_STACK_LINE(1754)
		if ((this->isTransitioning())){
			HX_STACK_LINE(1755)
			return null();
		}
		HX_STACK_LINE(1760)
		::haxe::Log_obj::trace((HX_CSTRING("Switching to scene ") + sceneID),hx::SourceInfo(HX_CSTRING("Engine.hx"),1760,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("switchScene")));
		HX_STACK_LINE(1762)
		if (((bool((leave != null())) && bool(leave->isComplete())))){
			HX_STACK_LINE(1763)
			leave->reset();
		}
		HX_STACK_LINE(1767)
		if (((bool((leave == null())) || bool((leave->duration == (int)0))))){
			HX_STACK_LINE(1768)
			leave = ::com::stencyl::graphics::transitions::Transition_obj::__new((int)0);
		}
		HX_STACK_LINE(1772)
		if (((bool((enter == null())) || bool((enter->duration == (int)0))))){
			HX_STACK_LINE(1773)
			enter = ::com::stencyl::graphics::transitions::Transition_obj::__new((int)1);
		}
		HX_STACK_LINE(1777)
		this->leave = leave;
		HX_STACK_LINE(1778)
		this->enter = enter;
		HX_STACK_LINE(1780)
		if ((!(this->leave->isComplete()))){
			HX_STACK_LINE(1781)
			this->leave->start();
		}
		HX_STACK_LINE(1785)
		this->sceneToEnter = sceneID;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,switchScene,(void))

Void Engine_obj::cleanup( ){
{
		HX_STACK_PUSH("Engine::cleanup","com/stencyl/Engine.hx",1597);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1599)
		::JoystickController_obj::reset();
		HX_STACK_LINE(1602)
		if (((bool((::com::stencyl::Engine_obj::debugDrawer != null())) && bool((::com::stencyl::Engine_obj::debugDrawer->m_sprite != null()))))){
			HX_STACK_LINE(1603)
			::com::stencyl::Engine_obj::debugDrawer->m_sprite->get_graphics()->clear();
		}
		HX_STACK_LINE(1607)
		::com::stencyl::utils::Utils_obj::removeAllChildren(this->master);
		HX_STACK_LINE(1608)
		::com::stencyl::utils::Utils_obj::removeAllChildren(this->hudLayer);
		HX_STACK_LINE(1610)
		this->behaviors->destroy();
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1612);
				{
					HX_STACK_LINE(1612)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->actorsPerLayer);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",1612);
						{
							HX_STACK_LINE(1612)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(1612)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(1612)
		for(::cpp::FastIterator_obj< ::flash::display::DisplayObjectContainer > *__it = ::cpp::CreateFastIterator< ::flash::display::DisplayObjectContainer >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::flash::display::DisplayObjectContainer group = __it->next();
			::com::stencyl::utils::Utils_obj::removeAllChildren(group);
		}
		HX_STACK_LINE(1619)
		this->camera->destroy();
		HX_STACK_LINE(1620)
		this->camera = null();
		HX_STACK_LINE(1625)
		if (((this->world != null()))){
			HX_STACK_LINE(1627)
			::box2D::dynamics::B2Body worldbody = this->world->getBodyList();		HX_STACK_VAR(worldbody,"worldbody");
			HX_STACK_LINE(1628)
			::box2D::dynamics::joints::B2Joint j = this->world->getJointList();		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(1630)
			while(((j != null()))){
				HX_STACK_LINE(1632)
				this->world->destroyJoint(j);
				HX_STACK_LINE(1633)
				j = j->getNext();
			}
			HX_STACK_LINE(1636)
			while(((worldbody != null()))){
				HX_STACK_LINE(1638)
				this->world->destroyBody(worldbody);
				HX_STACK_LINE(1639)
				worldbody = worldbody->getNext();
			}
		}
		struct _Function_1_2{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1643);
				{
					HX_STACK_LINE(1643)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->actorsOfType);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",1643);
						{
							HX_STACK_LINE(1643)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(1643)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(1643)
		for(::cpp::FastIterator_obj< Array< ::Dynamic > > *__it = ::cpp::CreateFastIterator< Array< ::Dynamic > >((_Function_1_2::Block(this))());  __it->hasNext(); ){
			Array< ::Dynamic > set = __it->next();
			set->splice((int)0,set->length);
		}
		struct _Function_1_3{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1648);
				{
					HX_STACK_LINE(1648)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->recycledActorsOfType);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",1648);
						{
							HX_STACK_LINE(1648)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(1648)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(1648)
		for(::cpp::FastIterator_obj< Array< ::Dynamic > > *__it = ::cpp::CreateFastIterator< Array< ::Dynamic > >((_Function_1_3::Block(this))());  __it->hasNext(); ){
			Array< ::Dynamic > rList = __it->next();
			{
				HX_STACK_LINE(1650)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1650)
				while(((_g < rList->length))){
					HX_STACK_LINE(1650)
					::com::stencyl::models::Actor a = rList->__get(_g).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(1650)
					++(_g);
					HX_STACK_LINE(1652)
					if ((!(a->destroyed))){
						HX_STACK_LINE(1653)
						a->destroy();
					}
				}
			}
;
		}
		struct _Function_1_4{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1659);
				{
					HX_STACK_LINE(1659)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->recycledActorsOfType);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",1659);
						{
							HX_STACK_LINE(1659)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(1659)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(1659)
		for(::cpp::FastIterator_obj< Array< ::Dynamic > > *__it = ::cpp::CreateFastIterator< Array< ::Dynamic > >((_Function_1_4::Block(this))());  __it->hasNext(); ){
			Array< ::Dynamic > set = __it->next();
			set->splice((int)0,set->length);
		}
		HX_STACK_LINE(1665)
		if (((bool((this->scene != null())) && bool((this->scene->terrain != null()))))){
			HX_STACK_LINE(1666)
			for(::cpp::FastIterator_obj< ::com::stencyl::models::scene::TileLayer > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::scene::TileLayer >(this->scene->terrain->iterator());  __it->hasNext(); ){
				::com::stencyl::models::scene::TileLayer tl = __it->next();
				tl->clearBitmap();
			}
		}
		HX_STACK_LINE(1673)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::Actor > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Actor >(this->allActors->iterator());  __it->hasNext(); ){
			::com::stencyl::models::Actor a = __it->next();
			a->destroy();
		}
		HX_STACK_LINE(1679)
		while(((::Lambda_obj::count(this->allActors,null()) > (int)0))){
			HX_STACK_LINE(1680)
			for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->allActors->keys());  __it->hasNext(); ){
				int key = __it->next();
				{
					HX_STACK_LINE(1683)
					::de::polygonal::ds::IntHashTable _this = this->allActors;		HX_STACK_VAR(_this,"_this");
					struct _Function_3_1{
						inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1683);
							{
								HX_STACK_LINE(1683)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1683)
								int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
								struct _Function_4_1{
									inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
										HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1683);
										{
											HX_STACK_LINE(1683)
											int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(1683)
											i = _this1->_data->__get((i + (int)2));
											HX_STACK_LINE(1683)
											while(((i != (int)-1))){
												HX_STACK_LINE(1683)
												if (((_this1->_data->__get(i) == key))){
													HX_STACK_LINE(1683)
													v = _this1->_data->__get((i + (int)1));
													HX_STACK_LINE(1683)
													break;
												}
												HX_STACK_LINE(1683)
												i = _this1->_data->__get((i + (int)2));
											}
											HX_STACK_LINE(1683)
											return v;
										}
										return null();
									}
								};
								HX_STACK_LINE(1683)
								return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_4_1::Block(i,_this1,key)) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1683)
					int i = _Function_3_1::Block(_this,key);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1683)
					if (((i == (int)-2147483647))){
						HX_STACK_LINE(1683)
						false;
					}
					else{
						HX_STACK_LINE(1683)
						_this->_key0 = (int)-2147483647;
						HX_STACK_LINE(1683)
						hx::IndexRef((_this->_vals).mPtr,i) = null();
						HX_STACK_LINE(1683)
						_this->_keys[i] = (int)-2147483647;
						HX_STACK_LINE(1683)
						_this->_next[i] = _this->_free;
						HX_STACK_LINE(1683)
						_this->_free = i;
						HX_STACK_LINE(1683)
						bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
						HX_STACK_LINE(1683)
						if (((_this->_sizeLevel > (int)0))){
							HX_STACK_LINE(1683)
							if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
								HX_STACK_LINE(1683)
								if ((_this->_isResizable)){
									HX_STACK_LINE(1683)
									shrink = true;
								}
							}
						}
						HX_STACK_LINE(1683)
						{
							HX_STACK_LINE(1683)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1683)
							int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(1683)
							int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(1683)
							if (((i1 == (int)-1))){
								HX_STACK_LINE(1683)
								false;
							}
							else{
								HX_STACK_LINE(1683)
								if (((key == _this1->_data->__get(i1)))){
									HX_STACK_LINE(1683)
									if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
										HX_STACK_LINE(1683)
										_this1->_hash[b] = (int)-1;
									}
									else{
										HX_STACK_LINE(1683)
										_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
									}
									HX_STACK_LINE(1683)
									int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(1683)
									_this1->_next[j] = _this1->_free;
									HX_STACK_LINE(1683)
									_this1->_free = j;
									HX_STACK_LINE(1683)
									_this1->_data[(i1 + (int)1)] = (int)-2147483647;
									HX_STACK_LINE(1683)
									_this1->_data[(i1 + (int)2)] = (int)-1;
									HX_STACK_LINE(1683)
									(_this1->_size)--;
									HX_STACK_LINE(1683)
									if (((_this1->_sizeLevel > (int)0))){
										HX_STACK_LINE(1683)
										if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
											HX_STACK_LINE(1683)
											if ((_this1->_isResizable)){
												HX_STACK_LINE(1683)
												_this1->_shrink();
											}
										}
									}
									HX_STACK_LINE(1683)
									true;
								}
								else{
									HX_STACK_LINE(1683)
									bool exists = false;		HX_STACK_VAR(exists,"exists");
									HX_STACK_LINE(1683)
									int i0 = i1;		HX_STACK_VAR(i0,"i0");
									HX_STACK_LINE(1683)
									i1 = _this1->_data->__get((i1 + (int)2));
									HX_STACK_LINE(1683)
									while(((i1 != (int)-1))){
										HX_STACK_LINE(1683)
										if (((_this1->_data->__get(i1) == key))){
											HX_STACK_LINE(1683)
											exists = true;
											HX_STACK_LINE(1683)
											break;
										}
										HX_STACK_LINE(1683)
										i1 = _this1->_data->__get(((i0 = i1) + (int)2));
									}
									HX_STACK_LINE(1683)
									if ((exists)){
										HX_STACK_LINE(1683)
										_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
										HX_STACK_LINE(1683)
										int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(1683)
										_this1->_next[j] = _this1->_free;
										HX_STACK_LINE(1683)
										_this1->_free = j;
										HX_STACK_LINE(1683)
										_this1->_data[(i1 + (int)1)] = (int)-2147483647;
										HX_STACK_LINE(1683)
										_this1->_data[(i1 + (int)2)] = (int)-1;
										HX_STACK_LINE(1683)
										--(_this1->_size);
										HX_STACK_LINE(1683)
										if (((_this1->_sizeLevel > (int)0))){
											HX_STACK_LINE(1683)
											if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
												HX_STACK_LINE(1683)
												if ((_this1->_isResizable)){
													HX_STACK_LINE(1683)
													_this1->_shrink();
												}
											}
										}
										HX_STACK_LINE(1683)
										true;
									}
									else{
										HX_STACK_LINE(1683)
										false;
									}
								}
							}
						}
						HX_STACK_LINE(1683)
						if ((shrink)){
							HX_STACK_LINE(1683)
							(_this->_sizeLevel)--;
							HX_STACK_LINE(1683)
							int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
							HX_STACK_LINE(1683)
							int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
							struct _Function_5_1{
								inline static Array< int > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1683);
									{
										HX_STACK_LINE(1683)
										Array< int > a;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(1683)
										a = Array_obj< int >::__new();
										HX_STACK_LINE(1683)
										a[(newSize - (int)1)] = null();
										HX_STACK_LINE(1683)
										return a;
									}
									return null();
								}
							};
							HX_STACK_LINE(1683)
							_this->_next = _Function_5_1::Block(newSize);
							HX_STACK_LINE(1683)
							{
								HX_STACK_LINE(1683)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1683)
								while(((_g1 < _g))){
									HX_STACK_LINE(1683)
									int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
									HX_STACK_LINE(1683)
									_this->_next[i1] = (i1 + (int)1);
								}
							}
							HX_STACK_LINE(1683)
							_this->_next[(newSize - (int)1)] = (int)-1;
							HX_STACK_LINE(1683)
							_this->_free = (int)0;
							struct _Function_5_2{
								inline static Array< int > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1683);
									{
										HX_STACK_LINE(1683)
										Array< int > a;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(1683)
										a = Array_obj< int >::__new();
										HX_STACK_LINE(1683)
										a[(newSize - (int)1)] = null();
										HX_STACK_LINE(1683)
										return a;
									}
									return null();
								}
							};
							HX_STACK_LINE(1683)
							Array< int > tmpKeys = _Function_5_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
							HX_STACK_LINE(1683)
							{
								HX_STACK_LINE(1683)
								int k = newSize;		HX_STACK_VAR(k,"k");
								HX_STACK_LINE(1683)
								if (((k == (int)-1))){
									HX_STACK_LINE(1683)
									k = tmpKeys->length;
								}
								HX_STACK_LINE(1683)
								{
									HX_STACK_LINE(1683)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(1683)
									while(((_g < k))){
										HX_STACK_LINE(1683)
										int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(1683)
										tmpKeys[i1] = (int)-2147483647;
									}
								}
							}
							struct _Function_5_3{
								inline static Array< ::Dynamic > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1683);
									{
										HX_STACK_LINE(1683)
										Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(1683)
										a = Array_obj< ::Dynamic >::__new();
										HX_STACK_LINE(1683)
										a[(newSize - (int)1)] = null();
										HX_STACK_LINE(1683)
										return a;
									}
									return null();
								}
							};
							HX_STACK_LINE(1683)
							Array< ::Dynamic > tmpVals = _Function_5_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
							HX_STACK_LINE(1683)
							for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
								int i1 = __it->next();
								{
									HX_STACK_LINE(1683)
									tmpKeys[_this->_free] = _this->_keys->__get(i1);
									HX_STACK_LINE(1683)
									tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
									HX_STACK_LINE(1683)
									_this->_free = _this->_next->__get(_this->_free);
								}
;
							}
							HX_STACK_LINE(1683)
							_this->_keys = tmpKeys;
							HX_STACK_LINE(1683)
							_this->_vals = tmpVals;
							HX_STACK_LINE(1683)
							{
								HX_STACK_LINE(1683)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1683)
								while(((_g1 < _g))){
									HX_STACK_LINE(1683)
									int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
									HX_STACK_LINE(1683)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
									HX_STACK_LINE(1683)
									int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
									HX_STACK_LINE(1683)
									if (((i2 == (int)-1))){
										HX_STACK_LINE(1683)
										false;
									}
									else{
										HX_STACK_LINE(1683)
										if (((_this1->_data->__get(i2) == key1))){
											HX_STACK_LINE(1683)
											_this1->_data[(i2 + (int)1)] = i1;
											HX_STACK_LINE(1683)
											true;
										}
										else{
											HX_STACK_LINE(1683)
											i2 = _this1->_data->__get((i2 + (int)2));
											HX_STACK_LINE(1683)
											while(((i2 != (int)-1))){
												HX_STACK_LINE(1683)
												if (((_this1->_data->__get(i2) == key1))){
													HX_STACK_LINE(1683)
													_this1->_data[(i2 + (int)1)] = i1;
													HX_STACK_LINE(1683)
													break;
												}
												HX_STACK_LINE(1683)
												i2 = _this1->_data->__get((i2 + (int)2));
											}
											HX_STACK_LINE(1683)
											(i2 != (int)-1);
										}
									}
								}
							}
						}
						HX_STACK_LINE(1683)
						true;
					}
				}
;
			}
		}
		HX_STACK_LINE(1687)
		this->scene->unload();
		HX_STACK_LINE(1689)
		this->actorsOfType = null();
		HX_STACK_LINE(1690)
		this->recycledActorsOfType = null();
		HX_STACK_LINE(1692)
		this->hudActors = null();
		HX_STACK_LINE(1693)
		this->layers = null();
		HX_STACK_LINE(1694)
		this->actorsPerLayer = null();
		HX_STACK_LINE(1695)
		this->layersToDraw = null();
		HX_STACK_LINE(1696)
		this->layerOrders = null();
		HX_STACK_LINE(1697)
		this->dynamicTiles = null();
		HX_STACK_LINE(1698)
		this->animatedTiles = null();
		HX_STACK_LINE(1700)
		this->regions = null();
		HX_STACK_LINE(1701)
		this->terrainRegions = null();
		HX_STACK_LINE(1702)
		this->joints = null();
		HX_STACK_LINE(1703)
		this->groups = null();
		HX_STACK_LINE(1704)
		this->reverseGroups = null();
		HX_STACK_LINE(1705)
		this->allActors = null();
		HX_STACK_LINE(1706)
		this->scene = null();
		HX_STACK_LINE(1707)
		this->tasks = null();
		HX_STACK_LINE(1709)
		this->collisionPairs = null();
		HX_STACK_LINE(1710)
		this->disableCollisionList = null();
		HX_STACK_LINE(1712)
		this->whenKeyPressedListeners = null();
		HX_STACK_LINE(1713)
		this->hasKeyPressedListeners = false;
		HX_STACK_LINE(1714)
		this->whenAnyKeyPressedListeners = null();
		HX_STACK_LINE(1715)
		this->whenAnyKeyReleasedListeners = null();
		HX_STACK_LINE(1716)
		this->whenTypeGroupCreatedListeners = null();
		HX_STACK_LINE(1717)
		this->whenTypeGroupDiesListeners = null();
		HX_STACK_LINE(1718)
		this->typeGroupPositionListeners = null();
		HX_STACK_LINE(1719)
		this->collisionListeners = null();
		HX_STACK_LINE(1720)
		this->soundListeners = null();
		HX_STACK_LINE(1722)
		this->whenUpdatedListeners = null();
		HX_STACK_LINE(1723)
		this->whenDrawingListeners = null();
		HX_STACK_LINE(1724)
		this->whenMousePressedListeners = null();
		HX_STACK_LINE(1725)
		this->whenMouseReleasedListeners = null();
		HX_STACK_LINE(1726)
		this->whenMouseMovedListeners = null();
		HX_STACK_LINE(1727)
		this->whenMouseDraggedListeners = null();
		HX_STACK_LINE(1728)
		this->whenPausedListeners = null();
		HX_STACK_LINE(1730)
		this->whenSwipedListeners = null();
		HX_STACK_LINE(1731)
		this->whenMTStartListeners = null();
		HX_STACK_LINE(1732)
		this->whenMTDragListeners = null();
		HX_STACK_LINE(1733)
		this->whenMTEndListeners = null();
		HX_STACK_LINE(1735)
		this->whenFocusChangedListeners = null();
		HX_STACK_LINE(1736)
		this->nativeListeners = null();
		HX_STACK_LINE(1738)
		::com::stencyl::behavior::Script_obj::lastCreatedActor = null();
		HX_STACK_LINE(1739)
		::com::stencyl::behavior::Script_obj::lastCreatedJoint = null();
		HX_STACK_LINE(1740)
		::com::stencyl::behavior::Script_obj::lastCreatedRegion = null();
		HX_STACK_LINE(1741)
		::com::stencyl::behavior::Script_obj::lastCreatedTerrainRegion = null();
		HX_STACK_LINE(1745)
		::com::stencyl::Input_obj::update();
		HX_STACK_LINE(1747)
		this->world = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,cleanup,(void))

Void Engine_obj::optimizePool( ){
{
		HX_STACK_PUSH("Engine::optimizePool","com/stencyl/Engine.hx",1575);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1576);
				{
					HX_STACK_LINE(1576)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->recycledActorsOfType);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",1576);
						{
							HX_STACK_LINE(1576)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(1576)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(1575)
		for(::cpp::FastIterator_obj< Array< ::Dynamic > > *__it = ::cpp::CreateFastIterator< Array< ::Dynamic > >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			Array< ::Dynamic > cache = __it->next();
			{
				HX_STACK_LINE(1578)
				Array< ::Dynamic > toRemove = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(toRemove,"toRemove");
				HX_STACK_LINE(1580)
				{
					HX_STACK_LINE(1580)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1580)
					while(((_g < cache->length))){
						HX_STACK_LINE(1580)
						::com::stencyl::models::Actor actor = cache->__get(_g).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actor,"actor");
						HX_STACK_LINE(1580)
						++(_g);
						HX_STACK_LINE(1582)
						if (((bool((actor != null())) && bool(actor->recycled)))){
							HX_STACK_LINE(1583)
							toRemove->push(actor);
						}
					}
				}
				HX_STACK_LINE(1588)
				{
					HX_STACK_LINE(1588)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1588)
					while(((_g < toRemove->length))){
						HX_STACK_LINE(1588)
						::com::stencyl::models::Actor actor = toRemove->__get(_g).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actor,"actor");
						HX_STACK_LINE(1588)
						++(_g);
						HX_STACK_LINE(1590)
						cache->remove(actor);
						HX_STACK_LINE(1591)
						this->removeActor(actor);
					}
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,optimizePool,(void))

Void Engine_obj::initLayers( ){
{
		HX_STACK_PUSH("Engine::initLayers","com/stencyl/Engine.hx",1418);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1419)
		::haxe::ds::IntMap layers = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(layers,"layers");
		HX_STACK_LINE(1420)
		::haxe::ds::IntMap orders = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(orders,"orders");
		HX_STACK_LINE(1421)
		::haxe::ds::IntMap exists = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(exists,"exists");
		HX_STACK_LINE(1422)
		int highestLayerOrder = (int)0;		HX_STACK_VAR(highestLayerOrder,"highestLayerOrder");
		HX_STACK_LINE(1424)
		this->tileLayers = this->scene->terrain;
		HX_STACK_LINE(1425)
		this->animatedTiles = this->scene->animatedTiles;
		HX_STACK_LINE(1427)
		if (((this->animatedTiles != null()))){
			HX_STACK_LINE(1429)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->animatedTiles;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1429)
			while(((_g < _g1->length))){
				HX_STACK_LINE(1429)
				::com::stencyl::models::scene::Tile tile = _g1->__get(_g).StaticCast< ::com::stencyl::models::scene::Tile >();		HX_STACK_VAR(tile,"tile");
				HX_STACK_LINE(1429)
				++(_g);
				HX_STACK_LINE(1431)
				tile->currFrame = (int)0;
				HX_STACK_LINE(1432)
				tile->currTime = (int)0;
			}
		}
		HX_STACK_LINE(1436)
		if (((this->scene->terrain != null()))){
			HX_STACK_LINE(1437)
			for(::cpp::FastIterator_obj< ::com::stencyl::models::scene::TileLayer > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::scene::TileLayer >(this->scene->terrain->iterator());  __it->hasNext(); ){
				::com::stencyl::models::scene::TileLayer l = __it->next();
				{
					HX_STACK_LINE(1440)
					highestLayerOrder = ::Std_obj::_int(::Math_obj::max(highestLayerOrder,l->zOrder));
					HX_STACK_LINE(1442)
					layers->set(l->zOrder,l->layerID);
					HX_STACK_LINE(1443)
					orders->set(l->layerID,l->zOrder);
					HX_STACK_LINE(1444)
					exists->set(l->zOrder,l->zOrder);
				}
;
			}
		}
		HX_STACK_LINE(1448)
		{
			HX_STACK_LINE(1448)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (highestLayerOrder + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1448)
			while(((_g1 < _g))){
				HX_STACK_LINE(1448)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1450)
				if ((!(exists->exists(i)))){
					HX_STACK_LINE(1451)
					layers->set(i,(int)-1);
				}
			}
		}
		HX_STACK_LINE(1456)
		this->layersToDraw = layers;
		HX_STACK_LINE(1457)
		this->layerOrders = orders;
		HX_STACK_LINE(1459)
		bool foundBottom = false;		HX_STACK_VAR(foundBottom,"foundBottom");
		HX_STACK_LINE(1460)
		bool foundMiddle = false;		HX_STACK_VAR(foundMiddle,"foundMiddle");
		HX_STACK_LINE(1461)
		int realNumLayers = (int)0;		HX_STACK_VAR(realNumLayers,"realNumLayers");
		HX_STACK_LINE(1464)
		{
			HX_STACK_LINE(1464)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (highestLayerOrder + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1464)
			while(((_g1 < _g))){
				HX_STACK_LINE(1464)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1466)
				int layerID = this->layersToDraw->get(i);		HX_STACK_VAR(layerID,"layerID");
				HX_STACK_LINE(1468)
				if (((layerID != (int)-1))){
					HX_STACK_LINE(1469)
					(realNumLayers)++;
				}
			}
		}
		HX_STACK_LINE(1474)
		int numLayersProcessed = (int)0;		HX_STACK_VAR(numLayersProcessed,"numLayersProcessed");
		HX_STACK_LINE(1476)
		{
			HX_STACK_LINE(1476)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (highestLayerOrder + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1476)
			while(((_g1 < _g))){
				HX_STACK_LINE(1476)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1478)
				int j = (highestLayerOrder - i);		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(1479)
				int layerID = this->layersToDraw->get(j);		HX_STACK_VAR(layerID,"layerID");
				HX_STACK_LINE(1481)
				if (((bool((layerID == (int)-1)) || bool(!(this->layersToDraw->exists(j)))))){
					HX_STACK_LINE(1482)
					continue;
				}
				HX_STACK_LINE(1487)
				::com::stencyl::models::scene::layers::RegularLayer list = ::com::stencyl::models::scene::layers::RegularLayer_obj::__new();		HX_STACK_VAR(list,"list");
				HX_STACK_LINE(1488)
				list->layerID = layerID;
				HX_STACK_LINE(1489)
				::com::stencyl::models::scene::Layer terrain = null();		HX_STACK_VAR(terrain,"terrain");
				HX_STACK_LINE(1490)
				::flash::display::Sprite overlay = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(overlay,"overlay");
				HX_STACK_LINE(1497)
				::flash::display::Sprite bitmapOverlay = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(bitmapOverlay,"bitmapOverlay");
				HX_STACK_LINE(1500)
				if (((this->scene->terrain != null()))){
					struct _Function_4_1{
						inline static ::com::stencyl::models::scene::TileLayer Block( ::com::stencyl::Engine_obj *__this,int &layerID){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1502);
							{
								HX_STACK_LINE(1502)
								::de::polygonal::ds::IntHashTable _this = __this->scene->terrain;		HX_STACK_VAR(_this,"_this");
								struct _Function_5_1{
									inline static int Block( int &layerID,::de::polygonal::ds::IntHashTable _this){
										HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1502);
										{
											HX_STACK_LINE(1502)
											::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(1502)
											int i1 = _this1->_hash->__get((int((layerID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i1,"i1");
											struct _Function_6_1{
												inline static int Block( int &i1,::de::polygonal::ds::IntIntHashTable &_this1,int &layerID){
													HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1502);
													{
														HX_STACK_LINE(1502)
														int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
														HX_STACK_LINE(1502)
														i1 = _this1->_data->__get((i1 + (int)2));
														HX_STACK_LINE(1502)
														while(((i1 != (int)-1))){
															HX_STACK_LINE(1502)
															if (((_this1->_data->__get(i1) == layerID))){
																HX_STACK_LINE(1502)
																v = _this1->_data->__get((i1 + (int)1));
																HX_STACK_LINE(1502)
																break;
															}
															HX_STACK_LINE(1502)
															i1 = _this1->_data->__get((i1 + (int)2));
														}
														HX_STACK_LINE(1502)
														return v;
													}
													return null();
												}
											};
											HX_STACK_LINE(1502)
											return (  (((i1 == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i1) == layerID))) ? int(_this1->_data->__get((i1 + (int)1))) : int(_Function_6_1::Block(i1,_this1,layerID)) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1502)
								int i1 = _Function_5_1::Block(layerID,_this);		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(1502)
								return (  (((i1 == (int)-2147483647))) ? ::com::stencyl::models::scene::TileLayer(null()) : ::com::stencyl::models::scene::TileLayer(_this->_vals->__GetItem(i1)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1501)
					terrain = ::com::stencyl::models::scene::Layer_obj::__new(layerID,j,_Function_4_1::Block(this,layerID),overlay,bitmapOverlay);
				}
				HX_STACK_LINE(1505)
				if ((!(foundBottom))){
					HX_STACK_LINE(1507)
					foundBottom = true;
					HX_STACK_LINE(1508)
					this->bottomLayer = j;
				}
				HX_STACK_LINE(1511)
				if (((bool(!(foundMiddle)) && bool((numLayersProcessed == ::Math_obj::floor((Float(realNumLayers) / Float((int)2)))))))){
					HX_STACK_LINE(1513)
					foundMiddle = true;
					HX_STACK_LINE(1514)
					this->middleLayer = j;
				}
				HX_STACK_LINE(1517)
				if (((terrain != null()))){
					struct _Function_4_1{
						inline static ::com::stencyl::models::scene::TileLayer Block( ::com::stencyl::Engine_obj *__this,int &layerID){
							HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1519);
							{
								HX_STACK_LINE(1519)
								::de::polygonal::ds::IntHashTable _this = __this->scene->terrain;		HX_STACK_VAR(_this,"_this");
								struct _Function_5_1{
									inline static int Block( int &layerID,::de::polygonal::ds::IntHashTable _this){
										HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1519);
										{
											HX_STACK_LINE(1519)
											::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(1519)
											int i1 = _this1->_hash->__get((int((layerID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i1,"i1");
											struct _Function_6_1{
												inline static int Block( int &i1,::de::polygonal::ds::IntIntHashTable &_this1,int &layerID){
													HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1519);
													{
														HX_STACK_LINE(1519)
														int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
														HX_STACK_LINE(1519)
														i1 = _this1->_data->__get((i1 + (int)2));
														HX_STACK_LINE(1519)
														while(((i1 != (int)-1))){
															HX_STACK_LINE(1519)
															if (((_this1->_data->__get(i1) == layerID))){
																HX_STACK_LINE(1519)
																v = _this1->_data->__get((i1 + (int)1));
																HX_STACK_LINE(1519)
																break;
															}
															HX_STACK_LINE(1519)
															i1 = _this1->_data->__get((i1 + (int)2));
														}
														HX_STACK_LINE(1519)
														return v;
													}
													return null();
												}
											};
											HX_STACK_LINE(1519)
											return (  (((i1 == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i1) == layerID))) ? int(_this1->_data->__get((i1 + (int)1))) : int(_Function_6_1::Block(i1,_this1,layerID)) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1519)
								int i1 = _Function_5_1::Block(layerID,_this);		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(1519)
								return (  (((i1 == (int)-2147483647))) ? ::com::stencyl::models::scene::TileLayer(null()) : ::com::stencyl::models::scene::TileLayer(_this->_vals->__GetItem(i1)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1519)
					::com::stencyl::models::scene::TileLayer tileLayer = _Function_4_1::Block(this,layerID);		HX_STACK_VAR(tileLayer,"tileLayer");
					HX_STACK_LINE(1521)
					if (((tileLayer == null()))){
						HX_STACK_LINE(1523)
						::haxe::Log_obj::trace((HX_CSTRING("LayerID does not exist: ") + layerID),hx::SourceInfo(HX_CSTRING("Engine.hx"),1523,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("initLayers")));
						HX_STACK_LINE(1524)
						continue;
					}
					HX_STACK_LINE(1527)
					tileLayer->reset();
					HX_STACK_LINE(1529)
					terrain->set_name(::com::stencyl::Engine_obj::REGULAR_LAYER);
					HX_STACK_LINE(1530)
					this->master->addChild(terrain);
					HX_STACK_LINE(1531)
					this->master->addChild(tileLayer);
					HX_STACK_LINE(1533)
					if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
						struct _Function_5_1{
							inline static ::com::stencyl::models::scene::TileLayer Block( ::com::stencyl::Engine_obj *__this,int &layerID){
								HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1535);
								{
									HX_STACK_LINE(1535)
									::de::polygonal::ds::IntHashTable _this = __this->scene->terrain;		HX_STACK_VAR(_this,"_this");
									struct _Function_6_1{
										inline static int Block( int &layerID,::de::polygonal::ds::IntHashTable _this){
											HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1535);
											{
												HX_STACK_LINE(1535)
												::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1535)
												int i1 = _this1->_hash->__get((int((layerID * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i1,"i1");
												struct _Function_7_1{
													inline static int Block( int &i1,::de::polygonal::ds::IntIntHashTable &_this1,int &layerID){
														HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1535);
														{
															HX_STACK_LINE(1535)
															int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
															HX_STACK_LINE(1535)
															i1 = _this1->_data->__get((i1 + (int)2));
															HX_STACK_LINE(1535)
															while(((i1 != (int)-1))){
																HX_STACK_LINE(1535)
																if (((_this1->_data->__get(i1) == layerID))){
																	HX_STACK_LINE(1535)
																	v = _this1->_data->__get((i1 + (int)1));
																	HX_STACK_LINE(1535)
																	break;
																}
																HX_STACK_LINE(1535)
																i1 = _this1->_data->__get((i1 + (int)2));
															}
															HX_STACK_LINE(1535)
															return v;
														}
														return null();
													}
												};
												HX_STACK_LINE(1535)
												return (  (((i1 == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i1) == layerID))) ? int(_this1->_data->__get((i1 + (int)1))) : int(_Function_7_1::Block(i1,_this1,layerID)) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(1535)
									int i1 = _Function_6_1::Block(layerID,_this);		HX_STACK_VAR(i1,"i1");
									HX_STACK_LINE(1535)
									return (  (((i1 == (int)-2147483647))) ? ::com::stencyl::models::scene::TileLayer(null()) : ::com::stencyl::models::scene::TileLayer(_this->_vals->__GetItem(i1)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1534)
						(_Function_5_1::Block(this,layerID))->mountGrid();
					}
					HX_STACK_LINE(1538)
					{
						HX_STACK_LINE(1538)
						::de::polygonal::ds::IntHashTable _this = this->layers;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1538)
						_this->_key0 = (int)-2147483647;
						HX_STACK_LINE(1538)
						if (((_this->_h->_size == _this->_h->_capacity))){
							HX_STACK_LINE(1538)
							int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
							HX_STACK_LINE(1538)
							int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
							struct _Function_6_1{
								inline static Array< int > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1538);
									{
										HX_STACK_LINE(1538)
										Array< int > a;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(1538)
										a = Array_obj< int >::__new();
										HX_STACK_LINE(1538)
										a[(newSize - (int)1)] = null();
										HX_STACK_LINE(1538)
										return a;
									}
									return null();
								}
							};
							HX_STACK_LINE(1538)
							Array< int > tmp = _Function_6_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
							HX_STACK_LINE(1538)
							{
								HX_STACK_LINE(1538)
								Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
								int max = oldSize;		HX_STACK_VAR(max,"max");
								HX_STACK_LINE(1538)
								if (((max == (int)-1))){
									HX_STACK_LINE(1538)
									max = src->length;
								}
								HX_STACK_LINE(1538)
								int j1 = (int)0;		HX_STACK_VAR(j1,"j1");
								HX_STACK_LINE(1538)
								{
									HX_STACK_LINE(1538)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1538)
									while(((_g2 < max))){
										HX_STACK_LINE(1538)
										int i1 = (_g2)++;		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(1538)
										tmp[(j1)++] = src->__get(i1);
									}
								}
								HX_STACK_LINE(1538)
								tmp;
							}
							HX_STACK_LINE(1538)
							_this->_next = tmp;
							struct _Function_6_2{
								inline static Array< int > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1538);
									{
										HX_STACK_LINE(1538)
										Array< int > a;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(1538)
										a = Array_obj< int >::__new();
										HX_STACK_LINE(1538)
										a[(newSize - (int)1)] = null();
										HX_STACK_LINE(1538)
										return a;
									}
									return null();
								}
							};
							HX_STACK_LINE(1538)
							Array< int > tmp1 = _Function_6_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(1538)
							{
								HX_STACK_LINE(1538)
								Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
								int max = oldSize;		HX_STACK_VAR(max,"max");
								HX_STACK_LINE(1538)
								if (((max == (int)-1))){
									HX_STACK_LINE(1538)
									max = src->length;
								}
								HX_STACK_LINE(1538)
								int j1 = (int)0;		HX_STACK_VAR(j1,"j1");
								HX_STACK_LINE(1538)
								{
									HX_STACK_LINE(1538)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1538)
									while(((_g2 < max))){
										HX_STACK_LINE(1538)
										int i1 = (_g2)++;		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(1538)
										tmp1[(j1)++] = src->__get(i1);
									}
								}
								HX_STACK_LINE(1538)
								tmp1;
							}
							HX_STACK_LINE(1538)
							_this->_keys = tmp1;
							HX_STACK_LINE(1538)
							{
								HX_STACK_LINE(1538)
								int _g2 = oldSize;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(1538)
								while(((_g2 < newSize))){
									HX_STACK_LINE(1538)
									int i1 = (_g2)++;		HX_STACK_VAR(i1,"i1");
									HX_STACK_LINE(1538)
									_this->_keys[i1] = (int)-2147483647;
								}
							}
							HX_STACK_LINE(1538)
							{
								HX_STACK_LINE(1538)
								int _g11 = (oldSize - (int)1);		HX_STACK_VAR(_g11,"_g11");
								int _g2 = (newSize - (int)1);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(1538)
								while(((_g11 < _g2))){
									HX_STACK_LINE(1538)
									int i1 = (_g11)++;		HX_STACK_VAR(i1,"i1");
									HX_STACK_LINE(1538)
									_this->_next[i1] = (i1 + (int)1);
								}
							}
							HX_STACK_LINE(1538)
							_this->_next[(newSize - (int)1)] = (int)-1;
							HX_STACK_LINE(1538)
							_this->_free = oldSize;
							struct _Function_6_3{
								inline static Array< ::Dynamic > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1538);
									{
										HX_STACK_LINE(1538)
										Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(1538)
										a = Array_obj< ::Dynamic >::__new();
										HX_STACK_LINE(1538)
										a[(newSize - (int)1)] = null();
										HX_STACK_LINE(1538)
										return a;
									}
									return null();
								}
							};
							HX_STACK_LINE(1538)
							Array< ::Dynamic > tmp2 = _Function_6_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(1538)
							{
								HX_STACK_LINE(1538)
								Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
								int max = oldSize;		HX_STACK_VAR(max,"max");
								HX_STACK_LINE(1538)
								if (((max == (int)-1))){
									HX_STACK_LINE(1538)
									max = src->length;
								}
								HX_STACK_LINE(1538)
								int j1 = (int)0;		HX_STACK_VAR(j1,"j1");
								HX_STACK_LINE(1538)
								{
									HX_STACK_LINE(1538)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1538)
									while(((_g2 < max))){
										HX_STACK_LINE(1538)
										int i1 = (_g2)++;		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(1538)
										tmp2[(j1)++] = src->__get(i1).StaticCast< ::com::stencyl::models::scene::Layer >();
									}
								}
								HX_STACK_LINE(1538)
								tmp2;
							}
							HX_STACK_LINE(1538)
							_this->_vals = tmp2;
							HX_STACK_LINE(1538)
							(_this->_sizeLevel)++;
						}
						HX_STACK_LINE(1538)
						{
							HX_STACK_LINE(1538)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1538)
							if (((_this1->_size == _this1->_capacity))){
								HX_STACK_LINE(1538)
								if ((_this1->_isResizable)){
									HX_STACK_LINE(1538)
									_this1->_expand();
								}
							}
							HX_STACK_LINE(1538)
							int i1 = (_this1->_free * (int)3);		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(1538)
							_this1->_free = _this1->_next->__get(_this1->_free);
							HX_STACK_LINE(1538)
							_this1->_data[i1] = layerID;
							HX_STACK_LINE(1538)
							_this1->_data[(i1 + (int)1)] = _this->_free;
							HX_STACK_LINE(1538)
							int b = (int((layerID * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(1538)
							int j1 = _this1->_hash->__get(b);		HX_STACK_VAR(j1,"j1");
							HX_STACK_LINE(1538)
							if (((j1 == (int)-1))){
								HX_STACK_LINE(1538)
								_this1->_hash[b] = i1;
								HX_STACK_LINE(1538)
								(_this1->_size)++;
								HX_STACK_LINE(1538)
								true;
							}
							else{
								HX_STACK_LINE(1538)
								bool first = (_this1->_data->__get(j1) != layerID);		HX_STACK_VAR(first,"first");
								HX_STACK_LINE(1538)
								int t = _this1->_data->__get((j1 + (int)2));		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1538)
								while(((t != (int)-1))){
									HX_STACK_LINE(1538)
									if (((_this1->_data->__get(t) == layerID))){
										HX_STACK_LINE(1538)
										first = false;
									}
									HX_STACK_LINE(1538)
									j1 = t;
									HX_STACK_LINE(1538)
									t = _this1->_data->__get((t + (int)2));
								}
								HX_STACK_LINE(1538)
								_this1->_data[(j1 + (int)2)] = i1;
								HX_STACK_LINE(1538)
								(_this1->_size)++;
								HX_STACK_LINE(1538)
								first;
							}
						}
						HX_STACK_LINE(1538)
						hx::IndexRef((_this->_vals).mPtr,_this->_free) = terrain;
						HX_STACK_LINE(1538)
						_this->_keys[_this->_free] = layerID;
						HX_STACK_LINE(1538)
						_this->_free = _this->_next->__get(_this->_free);
						HX_STACK_LINE(1538)
						true;
					}
					HX_STACK_LINE(1539)
					this->scrollFactors->set(layerID,(int)1);
				}
				HX_STACK_LINE(1542)
				list->set_name(::com::stencyl::Engine_obj::REGULAR_LAYER);
				HX_STACK_LINE(1543)
				this->master->addChild(list);
				HX_STACK_LINE(1544)
				this->master->addChild(overlay);
				HX_STACK_LINE(1545)
				this->master->addChild(bitmapOverlay);
				HX_STACK_LINE(1547)
				this->actorsPerLayer->set(layerID,list);
				HX_STACK_LINE(1551)
				this->topLayer = j;
				HX_STACK_LINE(1552)
				this->defaultGroup = list;
				HX_STACK_LINE(1554)
				(numLayersProcessed)++;
			}
		}
		HX_STACK_LINE(1558)
		if (((this->defaultGroup == null()))){
			HX_STACK_LINE(1560)
			this->defaultGroup = ::com::stencyl::models::scene::layers::RegularLayer_obj::__new();
			HX_STACK_LINE(1561)
			this->defaultGroup->set_name(::com::stencyl::Engine_obj::REGULAR_LAYER);
			HX_STACK_LINE(1562)
			this->master->addChild(this->defaultGroup);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,initLayers,(void))

Void Engine_obj::loadTerrain( ){
{
		HX_STACK_PUSH("Engine::loadTerrain","com/stencyl/Engine.hx",1348);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1349)
		this->initLayers();
		HX_STACK_LINE(1351)
		{
			HX_STACK_LINE(1351)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->scene->wireframes;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1351)
			while(((_g < _g1->length))){
				HX_STACK_LINE(1351)
				::com::stencyl::models::scene::Wireframe wireframe = _g1->__get(_g).StaticCast< ::com::stencyl::models::scene::Wireframe >();		HX_STACK_VAR(wireframe,"wireframe");
				HX_STACK_LINE(1351)
				++(_g);
				HX_STACK_LINE(1353)
				::com::stencyl::models::Actor a = null();		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(1355)
				if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
				}
				else{
					HX_STACK_LINE(1385)
					a = ::com::stencyl::models::Actor_obj::__new(hx::ObjectPtr<OBJ_>(this),::com::stencyl::utils::Utils_obj::INTEGER_MAX,::com::stencyl::models::GameModel_obj::TERRAIN_ID,wireframe->x,wireframe->y,this->getTopLayer(),::Std_obj::_int(wireframe->width),::Std_obj::_int(wireframe->height),null(),::haxe::ds::StringMap_obj::__new(),null(),null(),false,true,false,false,wireframe->shape,null(),null(),null(),null());
				}
				HX_STACK_LINE(1408)
				a->set_name(HX_CSTRING("Terrain"));
				HX_STACK_LINE(1409)
				a->typeID = (int)-1;
				HX_STACK_LINE(1410)
				a->set_visible(false);
				HX_STACK_LINE(1412)
				this->getGroup(::com::stencyl::models::GameModel_obj::TERRAIN_ID,null())->addChild(a);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,loadTerrain,(void))

Void Engine_obj::loadJoints( ){
{
		HX_STACK_PUSH("Engine::loadJoints","com/stencyl/Engine.hx",1244);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1245)
		if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
			HX_STACK_LINE(1246)
			return null();
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1250);
				{
					HX_STACK_LINE(1250)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->scene->joints);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",1250);
						{
							HX_STACK_LINE(1250)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(1250)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(1250)
		for(::cpp::FastIterator_obj< ::box2D::dynamics::joints::B2JointDef > *__it = ::cpp::CreateFastIterator< ::box2D::dynamics::joints::B2JointDef >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::box2D::dynamics::joints::B2JointDef jd = __it->next();
			{
				HX_STACK_LINE(1252)
				int a1 = jd->actor1;		HX_STACK_VAR(a1,"a1");
				HX_STACK_LINE(1253)
				int a2 = jd->actor2;		HX_STACK_VAR(a2,"a2");
				HX_STACK_LINE(1254)
				bool collide = jd->collideConnected;		HX_STACK_VAR(collide,"collide");
				HX_STACK_LINE(1256)
				::box2D::dynamics::B2Body one = null();		HX_STACK_VAR(one,"one");
				HX_STACK_LINE(1257)
				::box2D::dynamics::B2Body two = null();		HX_STACK_VAR(two,"two");
				HX_STACK_LINE(1259)
				::box2D::common::math::B2Vec2 pt = null();		HX_STACK_VAR(pt,"pt");
				HX_STACK_LINE(1264)
				if (((jd->type == (int)3))){
					HX_STACK_LINE(1265)
					this->joints->set(jd->ID,this->createStickJoint(this->getActor(a1)->body,this->getActor(a2)->body,jd->ID,collide,null(),null()));
				}
				else{
					HX_STACK_LINE(1270)
					if (((jd->type == (int)1))){
						HX_STACK_LINE(1272)
						::box2D::dynamics::joints::B2RevoluteJointDef r = hx::TCast< box2D::dynamics::joints::B2RevoluteJointDef >::cast(jd);		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(1273)
						pt = this->getActor(a1)->body->getLocalCenter()->copy(null());
						HX_STACK_LINE(1275)
						pt->x = ::com::stencyl::Engine_obj::toPixelUnits(pt->x);
						HX_STACK_LINE(1276)
						pt->y = ::com::stencyl::Engine_obj::toPixelUnits(pt->y);
						HX_STACK_LINE(1278)
						one = this->getActor(a1)->body;
						HX_STACK_LINE(1279)
						two = null();
						HX_STACK_LINE(1281)
						if (((a2 == (int)-1))){
							HX_STACK_LINE(1282)
							two = this->world->m_groundBody;
						}
						else{
							HX_STACK_LINE(1287)
							two = this->getActor(a2)->body;
						}
						HX_STACK_LINE(1291)
						this->joints->set(jd->ID,this->createHingeJoint(one,two,pt,jd->ID,collide,r->enableLimit,r->enableMotor,r->lowerAngle,r->upperAngle,r->maxMotorTorque,-(r->motorSpeed)));
					}
					else{
						HX_STACK_LINE(1308)
						if (((bool((jd->type == (int)2)) || bool((jd->type == (int)7))))){
							HX_STACK_LINE(1310)
							::box2D::dynamics::joints::B2LineJointDef s = hx::TCast< box2D::dynamics::joints::B2LineJointDef >::cast(jd);		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(1311)
							pt = this->getActor(a1)->body->getLocalCenter()->copy(null());
							HX_STACK_LINE(1313)
							pt->x = ::com::stencyl::Engine_obj::toPixelUnits(pt->x);
							HX_STACK_LINE(1314)
							pt->y = ::com::stencyl::Engine_obj::toPixelUnits(pt->y);
							HX_STACK_LINE(1316)
							one = this->getActor(a1)->body;
							HX_STACK_LINE(1317)
							two = null();
							HX_STACK_LINE(1319)
							if (((a2 == (int)-1))){
								HX_STACK_LINE(1320)
								two = this->world->m_groundBody;
							}
							else{
								HX_STACK_LINE(1325)
								two = this->getActor(a2)->body;
							}
							HX_STACK_LINE(1329)
							this->joints->set(jd->ID,this->createSlidingJoint(one,two,s->localAxisA,jd->ID,collide,s->enableLimit,s->enableMotor,s->lowerTranslation,s->upperTranslation,s->maxMotorForce,s->motorSpeed));
						}
					}
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,loadJoints,(void))

Void Engine_obj::loadTerrainRegions( ){
{
		HX_STACK_PUSH("Engine::loadTerrainRegions","com/stencyl/Engine.hx",1221);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1222)
		this->terrainRegions = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(1224)
		if ((::com::stencyl::Engine_obj::NO_PHYSICS)){
			HX_STACK_LINE(1225)
			return null();
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1229);
				{
					HX_STACK_LINE(1229)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->scene->terrainRegions);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",1229);
						{
							HX_STACK_LINE(1229)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(1229)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(1229)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::scene::TerrainDef > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::scene::TerrainDef >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::com::stencyl::models::scene::TerrainDef r = __it->next();
			{
				HX_STACK_LINE(1231)
				::com::stencyl::models::Terrain region = ::com::stencyl::models::Terrain_obj::__new(hx::ObjectPtr<OBJ_>(this),r->x,r->y,r->shapes,r->groupID,r->fillColor);		HX_STACK_VAR(region,"region");
				HX_STACK_LINE(1232)
				region->set_name(r->name);
				HX_STACK_LINE(1234)
				region->setX((::com::stencyl::Engine_obj::toPixelUnits(r->x) + (Float(region->regionWidth) / Float((int)2))),null(),null());
				HX_STACK_LINE(1235)
				region->setY((::com::stencyl::Engine_obj::toPixelUnits(r->y) + (Float(region->regionHeight) / Float((int)2))),null(),null());
				HX_STACK_LINE(1237)
				region->ID = r->ID;
				HX_STACK_LINE(1239)
				this->addTerrainRegion(region);
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,loadTerrainRegions,(void))

Void Engine_obj::loadRegions( ){
{
		HX_STACK_PUSH("Engine::loadRegions","com/stencyl/Engine.hx",1199);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1200)
		this->regions = ::de::polygonal::ds::IntHashTable_obj::__new((int)32,null(),null(),null());
		HX_STACK_LINE(1201)
		this->regions->reuseIterator = true;
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1203);
				{
					HX_STACK_LINE(1203)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->scene->regions);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",1203);
						{
							HX_STACK_LINE(1203)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(1203)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(1203)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::scene::RegionDef > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::scene::RegionDef >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::com::stencyl::models::scene::RegionDef r = __it->next();
			{
				HX_STACK_LINE(1205)
				::com::stencyl::models::Region region = ::com::stencyl::models::Region_obj::__new(hx::ObjectPtr<OBJ_>(this),r->x,r->y,r->shapes,r->simpleBounds);		HX_STACK_VAR(region,"region");
				HX_STACK_LINE(1206)
				region->set_name(r->name);
				HX_STACK_LINE(1208)
				if ((!(::com::stencyl::Engine_obj::NO_PHYSICS))){
					HX_STACK_LINE(1210)
					region->setX((::com::stencyl::Engine_obj::toPixelUnits(r->x) + (Float(region->regionWidth) / Float((int)2))),null(),null());
					HX_STACK_LINE(1211)
					region->setY((::com::stencyl::Engine_obj::toPixelUnits(r->y) + (Float(region->regionHeight) / Float((int)2))),null(),null());
				}
				HX_STACK_LINE(1214)
				region->ID = r->ID;
				HX_STACK_LINE(1216)
				this->addRegion(region);
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,loadRegions,(void))

Void Engine_obj::loadCamera( ){
{
		HX_STACK_PUSH("Engine::loadCamera","com/stencyl/Engine.hx",1188);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1189)
		this->camera = ::com::stencyl::models::Actor_obj::__new(hx::ObjectPtr<OBJ_>(this),(int)-1,::com::stencyl::models::GameModel_obj::DOODAD_ID,(int)0,(int)0,this->getTopLayer(),(int)2,(int)2,null(),null(),null(),null(),true,false,true,false,null(),(int)0,true,false,null());
		HX_STACK_LINE(1190)
		this->camera->set_name(HX_CSTRING("Camera"));
		HX_STACK_LINE(1191)
		this->camera->isCamera = true;
		HX_STACK_LINE(1193)
		this->cameraMoved = true;
		HX_STACK_LINE(1194)
		this->cameraOldX = (int)-1;
		HX_STACK_LINE(1195)
		this->cameraOldY = (int)-1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,loadCamera,(void))

Void Engine_obj::initActorScripts( ){
{
		HX_STACK_PUSH("Engine::initActorScripts","com/stencyl/Engine.hx",1178);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1179)
		{
			HX_STACK_LINE(1179)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->actorsToCreate;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1179)
			while(((_g < _g1->length))){
				HX_STACK_LINE(1179)
				::com::stencyl::models::Actor a = _g1->__get(_g).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(1179)
				++(_g);
				HX_STACK_LINE(1181)
				a->initScripts();
			}
		}
		HX_STACK_LINE(1184)
		this->actorsToCreate = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,initActorScripts,(void))

Void Engine_obj::loadDeferredActors( ){
{
		HX_STACK_PUSH("Engine::loadDeferredActors","com/stencyl/Engine.hx",1168);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1169)
		{
			HX_STACK_LINE(1169)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->actorsToCreateInNextScene;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1169)
			while(((_g < _g1->length))){
				HX_STACK_LINE(1169)
				::com::stencyl::models::scene::DeferredActor a = _g1->__get(_g).StaticCast< ::com::stencyl::models::scene::DeferredActor >();		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(1169)
				++(_g);
				HX_STACK_LINE(1171)
				::com::stencyl::behavior::Script_obj::lastCreatedActor = this->createActorOfType(a->type,a->x,a->y,a->layer);
			}
		}
		HX_STACK_LINE(1174)
		this->actorsToCreateInNextScene = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,loadDeferredActors,(void))

Void Engine_obj::loadActors( ){
{
		HX_STACK_PUSH("Engine::loadActors","com/stencyl/Engine.hx",1158);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1159)
		this->actorsToCreate = Array_obj< ::Dynamic >::__new();
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",1161);
				{
					HX_STACK_LINE(1161)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->scene->actors);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",1161);
						{
							HX_STACK_LINE(1161)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(1161)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(1161)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::scene::ActorInstance > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::scene::ActorInstance >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::com::stencyl::models::scene::ActorInstance instance = __it->next();
			this->actorsToCreate->push(this->createActor(instance,true));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,loadActors,(void))

Void Engine_obj::initPhysics( ){
{
		HX_STACK_PUSH("Engine::initPhysics","com/stencyl/Engine.hx",1101);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1102)
		::box2D::common::math::B2Vec2 gravity = ::box2D::common::math::B2Vec2_obj::__new(this->scene->gravityX,this->scene->gravityY);		HX_STACK_VAR(gravity,"gravity");
		HX_STACK_LINE(1103)
		this->world = ::box2D::dynamics::B2World_obj::__new(gravity,false);
		HX_STACK_LINE(1105)
		::box2D::dynamics::B2World_obj::m_continuousPhysics = false;
		HX_STACK_LINE(1106)
		::box2D::dynamics::B2World_obj::m_warmStarting = true;
		HX_STACK_LINE(1108)
		::box2D::collision::B2AABB aabb = ::box2D::collision::B2AABB_obj::__new();		HX_STACK_VAR(aabb,"aabb");
		HX_STACK_LINE(1109)
		aabb->lowerBound->x = (int)0;
		HX_STACK_LINE(1110)
		aabb->lowerBound->y = (int)0;
		HX_STACK_LINE(1111)
		aabb->upperBound->x = (Float(::com::stencyl::Engine_obj::screenWidth) / Float(::com::stencyl::Engine_obj::physicsScale));
		HX_STACK_LINE(1112)
		aabb->upperBound->y = (Float(::com::stencyl::Engine_obj::screenHeight) / Float(::com::stencyl::Engine_obj::physicsScale));
		HX_STACK_LINE(1113)
		this->world->setScreenBounds(aabb);
		HX_STACK_LINE(1115)
		::com::stencyl::Engine_obj::debugDrawer = ::box2D::dynamics::B2DebugDraw_obj::__new();
		HX_STACK_LINE(1116)
		::com::stencyl::Engine_obj::debugDrawer->setSprite(this->debugLayer);
		HX_STACK_LINE(1117)
		::com::stencyl::Engine_obj::debugDrawer->setLineThickness((int)3);
		HX_STACK_LINE(1118)
		::com::stencyl::Engine_obj::debugDrawer->setDrawScale(((int)10 * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(1119)
		::com::stencyl::Engine_obj::debugDrawer->setFillAlpha((int)0);
		HX_STACK_LINE(1120)
		::com::stencyl::Engine_obj::debugDrawer->setFlags((int(::box2D::dynamics::B2DebugDraw_obj::e_shapeBit) | int(::box2D::dynamics::B2DebugDraw_obj::e_jointBit)));
		HX_STACK_LINE(1121)
		this->world->setDebugDraw(::com::stencyl::Engine_obj::debugDrawer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,initPhysics,(void))

Void Engine_obj::loadBackground( int backgroundID,hx::Null< bool >  __o_isForeground){
bool isForeground = __o_isForeground.Default(false);
	HX_STACK_PUSH("Engine::loadBackground","com/stencyl/Engine.hx",937);
	HX_STACK_THIS(this);
	HX_STACK_ARG(backgroundID,"backgroundID");
	HX_STACK_ARG(isForeground,"isForeground");
{
		HX_STACK_LINE(938)
		::com::stencyl::models::background::ImageBackground background = hx::TCast< com::stencyl::models::background::ImageBackground >::cast(::com::stencyl::Data_obj::get()->resources->get(backgroundID));		HX_STACK_VAR(background,"background");
		HX_STACK_LINE(939)
		::com::stencyl::models::scene::layers::BackgroundLayer backImg = ::com::stencyl::models::scene::layers::BackgroundLayer_obj::__new(background->img,background);		HX_STACK_VAR(backImg,"backImg");
		HX_STACK_LINE(941)
		if (((bool((background == null())) || bool((background->img == null()))))){
			HX_STACK_LINE(943)
			::haxe::Log_obj::trace(HX_CSTRING("Warning: Could not load a background. Ignoring..."),hx::SourceInfo(HX_CSTRING("Engine.hx"),943,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("loadBackground")));
			HX_STACK_LINE(944)
			return null();
		}
		HX_STACK_LINE(947)
		if (((bool(background->repeats) && bool(!(background->repeated))))){
			HX_STACK_LINE(948)
			background->drawRepeated(backImg,::Std_obj::_int((::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE)),::Std_obj::_int((::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE)));
		}
		HX_STACK_LINE(952)
		if ((::Std_obj::is(background,hx::ClassOf< ::com::stencyl::models::background::ScrollingBackground >()))){
			HX_STACK_LINE(954)
			::com::stencyl::models::background::ScrollingBackground scroller = hx::TCast< com::stencyl::models::background::ScrollingBackground >::cast(background);		HX_STACK_VAR(scroller,"scroller");
			HX_STACK_LINE(955)
			::com::stencyl::models::scene::ScrollingBitmap img = ::com::stencyl::models::scene::ScrollingBitmap_obj::__new(background->img,scroller->xVelocity,scroller->yVelocity,(int)0,(int)0,backgroundID);		HX_STACK_VAR(img,"img");
			HX_STACK_LINE(956)
			img->set_name(::com::stencyl::Engine_obj::SCROLLING_BACKGROUND);
			HX_STACK_LINE(957)
			this->master->addChild(img);
		}
		else{
			HX_STACK_LINE(960)
			if ((background->repeats)){
				HX_STACK_LINE(962)
				::com::stencyl::models::scene::ScrollingBitmap img = ::com::stencyl::models::scene::ScrollingBitmap_obj::__new(background->img,(int)0,(int)0,background->parallaxX,background->parallaxY,backgroundID);		HX_STACK_VAR(img,"img");
				HX_STACK_LINE(963)
				img->set_name(::com::stencyl::Engine_obj::SCROLLING_BACKGROUND);
				HX_STACK_LINE(964)
				this->master->addChild(img);
			}
			else{
				HX_STACK_LINE(969)
				backImg->cacheWidth = backImg->get_width();
				HX_STACK_LINE(970)
				backImg->cacheHeight = backImg->get_height();
				HX_STACK_LINE(971)
				backImg->set_name(::com::stencyl::Engine_obj::BACKGROUND);
				HX_STACK_LINE(972)
				this->master->addChild(backImg);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,loadBackground,(void))

Void Engine_obj::loadForegrounds( ){
{
		HX_STACK_PUSH("Engine::loadForegrounds","com/stencyl/Engine.hx",929);
		HX_STACK_THIS(this);
		HX_STACK_LINE(930)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< int > _g1 = this->scene->fgs;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(930)
		while(((_g < _g1->length))){
			HX_STACK_LINE(930)
			int backgroundID = _g1->__get(_g);		HX_STACK_VAR(backgroundID,"backgroundID");
			HX_STACK_LINE(930)
			++(_g);
			HX_STACK_LINE(932)
			this->loadBackground(backgroundID,true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,loadForegrounds,(void))

Void Engine_obj::loadBackgrounds( ){
{
		HX_STACK_PUSH("Engine::loadBackgrounds","com/stencyl/Engine.hx",917);
		HX_STACK_THIS(this);
		HX_STACK_LINE(918)
		::flash::display::Shape bg = ::flash::display::Shape_obj::__new();		HX_STACK_VAR(bg,"bg");
		HX_STACK_LINE(919)
		this->scene->colorBackground->draw(bg->get_graphics(),(int)0,(int)0,::Std_obj::_int((::com::stencyl::Engine_obj::screenWidth * ::com::stencyl::Engine_obj::SCALE)),::Std_obj::_int((::com::stencyl::Engine_obj::screenHeight * ::com::stencyl::Engine_obj::SCALE)));
		HX_STACK_LINE(920)
		this->master->addChild(bg);
		HX_STACK_LINE(922)
		{
			HX_STACK_LINE(922)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< int > _g1 = this->scene->bgs;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(922)
			while(((_g < _g1->length))){
				HX_STACK_LINE(922)
				int backgroundID = _g1->__get(_g);		HX_STACK_VAR(backgroundID,"backgroundID");
				HX_STACK_LINE(922)
				++(_g);
				HX_STACK_LINE(924)
				this->loadBackground(backgroundID,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,loadBackgrounds,(void))

Void Engine_obj::loadScene( int sceneID){
{
		HX_STACK_PUSH("Engine::loadScene","com/stencyl/Engine.hx",760);
		HX_STACK_THIS(this);
		HX_STACK_ARG(sceneID,"sceneID");
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",761);
				{
					HX_STACK_LINE(761)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->atlasesToUnload);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",761);
						{
							HX_STACK_LINE(761)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(761)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(761)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			int atlas = __it->next();
			::com::stencyl::Data_obj::get()->unloadAtlas(atlas);
		}
		HX_STACK_LINE(767)
		::cpp::vm::Gc_obj::run(true);
		struct _Function_1_2{
			inline static Dynamic Block( ::com::stencyl::Engine_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",770);
				{
					HX_STACK_LINE(770)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->atlasesToLoad);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",770);
						{
							HX_STACK_LINE(770)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(770)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(770)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >((_Function_1_2::Block(this))());  __it->hasNext(); ){
			int atlas = __it->next();
			::com::stencyl::Data_obj::get()->loadAtlas(atlas);
		}
		HX_STACK_LINE(775)
		this->atlasesToLoad = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(776)
		this->atlasesToUnload = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(778)
		this->collisionPairs = ::de::polygonal::ds::IntHashTable_obj::__new((int)32,null(),null(),null());
		HX_STACK_LINE(782)
		{
			HX_STACK_LINE(782)
			::com::stencyl::Engine_obj::paddingTop = (int)0;
			HX_STACK_LINE(782)
			::com::stencyl::Engine_obj::paddingLeft = (int)0;
			HX_STACK_LINE(782)
			::com::stencyl::Engine_obj::paddingBottom = (int)0;
			HX_STACK_LINE(782)
			::com::stencyl::Engine_obj::paddingRight = (int)0;
		}
		HX_STACK_LINE(784)
		this->tasks = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(786)
		this->scene = ::com::stencyl::models::GameModel_obj::get()->scenes->get(sceneID);
		HX_STACK_LINE(788)
		if (((bool((sceneID == (int)-1)) || bool((this->scene == null()))))){
			HX_STACK_LINE(790)
			this->scene = ::com::stencyl::models::GameModel_obj::get()->scenes->get(::com::stencyl::models::GameModel_obj::get()->defaultSceneID);
			HX_STACK_LINE(793)
			if (((this->scene == null()))){
				HX_STACK_LINE(795)
				::haxe::Log_obj::trace((HX_CSTRING("Could not load scene: ") + sceneID),hx::SourceInfo(HX_CSTRING("Engine.hx"),795,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("loadScene")));
				HX_STACK_LINE(796)
				::com::stencyl::Engine_obj::stage->removeEventListener(::flash::events::Event_obj::ENTER_FRAME,this->onUpdate_dyn(),null());
				HX_STACK_LINE(797)
				return null();
			}
		}
		HX_STACK_LINE(801)
		this->scene->load();
		HX_STACK_LINE(803)
		::com::stencyl::Engine_obj::sceneWidth = this->scene->sceneWidth;
		HX_STACK_LINE(804)
		::com::stencyl::Engine_obj::sceneHeight = this->scene->sceneHeight;
		HX_STACK_LINE(806)
		this->behaviors = ::com::stencyl::behavior::BehaviorManager_obj::__new();
		HX_STACK_LINE(808)
		this->groups = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(809)
		this->reverseGroups = ::haxe::ds::StringMap_obj::__new();
		HX_STACK_LINE(811)
		{
			HX_STACK_LINE(811)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::com::stencyl::models::GameModel_obj::get()->groups;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(811)
			while(((_g < _g1->length))){
				HX_STACK_LINE(811)
				::com::stencyl::models::GroupDef grp = _g1->__get(_g).StaticCast< ::com::stencyl::models::GroupDef >();		HX_STACK_VAR(grp,"grp");
				HX_STACK_LINE(811)
				++(_g);
				HX_STACK_LINE(813)
				::com::stencyl::models::actor::Group g = ::com::stencyl::models::actor::Group_obj::__new(grp->ID,grp->name);		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(814)
				this->groups->set(grp->ID,g);
				HX_STACK_LINE(815)
				this->reverseGroups->set(grp->name,g);
				HX_STACK_LINE(816)
				g->name = grp->name;
			}
		}
		HX_STACK_LINE(820)
		::com::stencyl::models::actor::Group regionGroup = ::com::stencyl::models::actor::Group_obj::__new(::com::stencyl::models::GameModel_obj::REGION_ID,HX_CSTRING("Regions"));		HX_STACK_VAR(regionGroup,"regionGroup");
		HX_STACK_LINE(821)
		this->groups->set(::com::stencyl::models::GameModel_obj::REGION_ID,regionGroup);
		HX_STACK_LINE(822)
		this->reverseGroups->set(HX_CSTRING("Regions"),regionGroup);
		HX_STACK_LINE(824)
		this->disableCollisionList = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(825)
		this->actorsOfType = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(826)
		this->recycledActorsOfType = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(828)
		this->regions = ::de::polygonal::ds::IntHashTable_obj::__new((int)32,null(),null(),null());
		HX_STACK_LINE(829)
		this->regions->reuseIterator = true;
		HX_STACK_LINE(831)
		this->terrainRegions = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(832)
		this->joints = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(834)
		this->layers = ::de::polygonal::ds::IntHashTable_obj::__new((int)16,null(),null(),null());
		HX_STACK_LINE(835)
		this->layers->reuseIterator = true;
		HX_STACK_LINE(836)
		this->tileLayers = ::de::polygonal::ds::IntHashTable_obj::__new((int)16,null(),null(),null());
		HX_STACK_LINE(837)
		this->tileLayers->reuseIterator = true;
		HX_STACK_LINE(838)
		this->scrollFactors = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(841)
		this->dynamicTiles = ::haxe::ds::StringMap_obj::__new();
		HX_STACK_LINE(842)
		this->animatedTiles = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(843)
		this->hudActors = ::de::polygonal::ds::IntHashTable_obj::__new((int)64,null(),null(),null());
		HX_STACK_LINE(844)
		this->hudActors->reuseIterator = true;
		HX_STACK_LINE(845)
		this->allActors = ::de::polygonal::ds::IntHashTable_obj::__new((int)256,null(),null(),null());
		HX_STACK_LINE(846)
		this->allActors->reuseIterator = true;
		HX_STACK_LINE(847)
		this->actorsPerLayer = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(848)
		this->nextID = (int)0;
		HX_STACK_LINE(851)
		this->whenKeyPressedListeners = ::haxe::ds::StringMap_obj::__new();
		HX_STACK_LINE(852)
		this->hasKeyPressedListeners = false;
		HX_STACK_LINE(853)
		this->whenAnyKeyPressedListeners = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(854)
		this->whenAnyKeyReleasedListeners = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(856)
		this->whenTypeGroupCreatedListeners = ::haxe::ds::ObjectMap_obj::__new();
		HX_STACK_LINE(857)
		this->whenTypeGroupDiesListeners = ::haxe::ds::ObjectMap_obj::__new();
		HX_STACK_LINE(858)
		this->typeGroupPositionListeners = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(859)
		this->collisionListeners = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(860)
		this->soundListeners = ::haxe::ds::ObjectMap_obj::__new();
		HX_STACK_LINE(861)
		this->nativeListeners = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(863)
		this->whenUpdatedListeners = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(864)
		this->whenDrawingListeners = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(865)
		this->whenMousePressedListeners = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(866)
		this->whenMouseReleasedListeners = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(867)
		this->whenMouseMovedListeners = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(868)
		this->whenMouseDraggedListeners = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(869)
		this->whenPausedListeners = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(870)
		this->whenSwipedListeners = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(871)
		this->whenMTStartListeners = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(872)
		this->whenMTDragListeners = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(873)
		this->whenMTEndListeners = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(874)
		this->whenFocusChangedListeners = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(876)
		if ((!(::com::stencyl::Engine_obj::NO_PHYSICS))){
			HX_STACK_LINE(878)
			this->initPhysics();
			HX_STACK_LINE(880)
			this->gravityX = this->scene->gravityX;
			HX_STACK_LINE(881)
			this->gravityY = this->scene->gravityY;
		}
		else{
			HX_STACK_LINE(886)
			this->gravityX = this->scene->gravityX;
			HX_STACK_LINE(887)
			this->gravityY = this->scene->gravityY;
		}
		HX_STACK_LINE(890)
		this->loadBackgrounds();
		HX_STACK_LINE(891)
		this->loadTerrain();
		HX_STACK_LINE(892)
		this->loadRegions();
		HX_STACK_LINE(893)
		this->loadTerrainRegions();
		HX_STACK_LINE(894)
		this->loadActors();
		HX_STACK_LINE(895)
		this->loadCamera();
		HX_STACK_LINE(896)
		this->loadJoints();
		HX_STACK_LINE(898)
		this->loadDeferredActors();
		HX_STACK_LINE(899)
		::com::stencyl::Engine_obj::initBehaviors(this->behaviors,this->scene->behaviorValues,hx::ObjectPtr<OBJ_>(this),hx::ObjectPtr<OBJ_>(this),true);
		HX_STACK_LINE(900)
		this->initActorScripts();
		HX_STACK_LINE(902)
		this->loadForegrounds();
		HX_STACK_LINE(905)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::scene::TileLayer > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::scene::TileLayer >(this->tileLayers->iterator());  __it->hasNext(); ){
			::com::stencyl::models::scene::TileLayer layer = __it->next();
			{
				HX_STACK_LINE(907)
				layer->draw(::Std_obj::_int(::com::stencyl::Engine_obj::cameraX),::Std_obj::_int(::com::stencyl::Engine_obj::cameraY),null());
				HX_STACK_LINE(908)
				layer->setPosition(::com::stencyl::Engine_obj::cameraX,::com::stencyl::Engine_obj::cameraY,null());
			}
;
		}
		HX_STACK_LINE(912)
		::cpp::vm::Gc_obj::run(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,loadScene,(void))

Void Engine_obj::begin( int initSceneID){
{
		HX_STACK_PUSH("Engine::begin","com/stencyl/Engine.hx",590);
		HX_STACK_THIS(this);
		HX_STACK_ARG(initSceneID,"initSceneID");
		HX_STACK_LINE(591)
		this->atlasesToLoad = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(592)
		this->atlasesToUnload = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(594)
		::com::stencyl::Input_obj::enable();
		HX_STACK_LINE(595)
		::com::stencyl::Input_obj::define(::com::stencyl::Engine_obj::INTERNAL_SHIFT,Array_obj< int >::__new().Add((int)16));
		HX_STACK_LINE(596)
		::com::stencyl::Input_obj::define(::com::stencyl::Engine_obj::INTERNAL_CTRL,Array_obj< int >::__new().Add((int)17));
		HX_STACK_LINE(598)
		::com::stencyl::Engine_obj::landscape = ::scripts::MyAssets_obj::landscape;
		HX_STACK_LINE(599)
		int stageWidth = ::scripts::MyAssets_obj::stageWidth;		HX_STACK_VAR(stageWidth,"stageWidth");
		HX_STACK_LINE(600)
		int stageHeight = ::scripts::MyAssets_obj::stageHeight;		HX_STACK_VAR(stageHeight,"stageHeight");
		HX_STACK_LINE(602)
		::com::stencyl::Engine_obj::screenWidth = ::Std_obj::_int(stageWidth);
		HX_STACK_LINE(603)
		::com::stencyl::Engine_obj::screenHeight = ::Std_obj::_int(stageHeight);
		HX_STACK_LINE(604)
		::com::stencyl::Engine_obj::screenWidthHalf = ::Std_obj::_int((Float(stageWidth) / Float((int)2)));
		HX_STACK_LINE(605)
		::com::stencyl::Engine_obj::screenHeightHalf = ::Std_obj::_int((Float(stageHeight) / Float((int)2)));
		HX_STACK_LINE(608)
		if ((!(::scripts::MyAssets_obj::autorotate))){
			HX_STACK_LINE(609)
			if ((::com::stencyl::Engine_obj::landscape)){
				HX_STACK_LINE(611)
				::flash::display::Stage_obj::setFixedOrientation(::flash::display::Stage_obj::OrientationLandscapeLeft);
			}
			else{
				HX_STACK_LINE(616)
				::flash::display::Stage_obj::setFixedOrientation(::flash::display::Stage_obj::OrientationPortrait);
			}
		}
		HX_STACK_LINE(622)
		::com::stencyl::Data_obj::get();
		HX_STACK_LINE(623)
		::com::stencyl::models::GameModel_obj::get()->loadScenes();
		HX_STACK_LINE(627)
		for(::cpp::FastIterator_obj< ::com::stencyl::models::Resource > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Resource >(::com::stencyl::Data_obj::get()->resources->iterator());  __it->hasNext(); ){
			::com::stencyl::models::Resource r = __it->next();
			if ((::Std_obj::is(r,hx::ClassOf< ::com::stencyl::models::Sound >()))){
				HX_STACK_LINE(631)
				::com::stencyl::models::Sound sound = hx::TCast< com::stencyl::models::Sound >::cast(r);		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(632)
				::com::stencyl::models::Atlas atlas = ::com::stencyl::models::GameModel_obj::get()->atlases->get(sound->atlasID);		HX_STACK_VAR(atlas,"atlas");
				HX_STACK_LINE(634)
				if (((bool((atlas != null())) && bool(atlas->active)))){
					HX_STACK_LINE(635)
					sound->loadGraphics();
				}
			}
;
		}
		HX_STACK_LINE(642)
		this->g = ::com::stencyl::graphics::G_obj::__new();
		HX_STACK_LINE(646)
		::com::stencyl::Engine_obj::started = true;
		HX_STACK_LINE(647)
		this->cameraMoved = false;
		HX_STACK_LINE(648)
		this->tileUpdated = false;
		HX_STACK_LINE(652)
		this->shakeTimer = (int)0;
		HX_STACK_LINE(653)
		this->shakeIntensity = 0.01;
		HX_STACK_LINE(654)
		this->isShaking = false;
		HX_STACK_LINE(658)
		this->leave = null();
		HX_STACK_LINE(659)
		this->enter = null();
		HX_STACK_LINE(661)
		::com::stencyl::Engine_obj::cameraX = (int)0;
		HX_STACK_LINE(662)
		::com::stencyl::Engine_obj::cameraY = (int)0;
		HX_STACK_LINE(664)
		this->cameraOldX = (int)-1;
		HX_STACK_LINE(665)
		this->cameraOldY = (int)-1;
		HX_STACK_LINE(667)
		this->acc = (int)0;
		HX_STACK_LINE(668)
		this->lastTime = ::flash::Lib_obj::getTimer();
		HX_STACK_LINE(671)
		::com::stencyl::Engine_obj::sceneWidth = stageWidth;
		HX_STACK_LINE(672)
		::com::stencyl::Engine_obj::sceneHeight = stageHeight;
		HX_STACK_LINE(675)
		this->master = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(676)
		this->root->addChild(this->master);
		HX_STACK_LINE(678)
		this->hudLayer = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(679)
		this->root->addChild(this->hudLayer);
		HX_STACK_LINE(681)
		this->transitionLayer = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(682)
		this->root->addChild(this->transitionLayer);
		HX_STACK_LINE(689)
		this->transitionBitmapLayer = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(694)
		this->debugLayer = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(695)
		this->root->addChild(this->debugLayer);
		HX_STACK_LINE(698)
		this->actorsToCreateInNextScene = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(699)
		this->gameAttributes = ::haxe::ds::StringMap_obj::__new();
		HX_STACK_LINE(704)
		if ((::scripts::MyAssets_obj::showConsole)){
			HX_STACK_LINE(707)
			this->stats = ::com::nmefermmmtools::debug::Stats_obj::__new(null());
			HX_STACK_LINE(708)
			::com::stencyl::Engine_obj::stage->addChild(this->stats);
		}
		HX_STACK_LINE(729)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(::com::stencyl::models::GameModel_obj::get()->gameAttributes->keys());  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(731)
				Dynamic value = ::com::stencyl::models::GameModel_obj::get()->gameAttributes->get(key);		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(731)
				this->gameAttributes->set(key,value);
			}
;
		}
		HX_STACK_LINE(735)
		this->channels = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(737)
		{
			HX_STACK_LINE(737)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::com::stencyl::behavior::Script_obj::CHANNELS;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(737)
			while(((_g1 < _g))){
				HX_STACK_LINE(737)
				int index = (_g1)++;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(739)
				this->channels->push(::com::stencyl::models::SoundChannel_obj::__new(hx::ObjectPtr<OBJ_>(this),index));
			}
		}
		HX_STACK_LINE(744)
		::Purchases_obj::initialize(null());
		HX_STACK_LINE(752)
		this->enter = ::com::stencyl::graphics::transitions::FadeInTransition_obj::__new(0.5,null());
		HX_STACK_LINE(753)
		this->enter->start();
		HX_STACK_LINE(754)
		this->sceneToEnter = initSceneID;
		HX_STACK_LINE(756)
		this->loadScene(initSceneID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,begin,(void))

Void Engine_obj::resetShaders( ){
{
		HX_STACK_PUSH("Engine::resetShaders","com/stencyl/Engine.hx",578);
		HX_STACK_THIS(this);
		HX_STACK_LINE(578)
		if (((this->shaders != null()))){
			HX_STACK_LINE(581)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->shaders;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(581)
			while(((_g < _g1->length))){
				HX_STACK_LINE(581)
				::com::stencyl::graphics::shaders::PostProcess shader = _g1->__get(_g).StaticCast< ::com::stencyl::graphics::shaders::PostProcess >();		HX_STACK_VAR(shader,"shader");
				HX_STACK_LINE(581)
				++(_g);
				HX_STACK_LINE(583)
				shader->rebuild();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,resetShaders,(void))

Void Engine_obj::toggleShadersForHUD( ){
{
		HX_STACK_PUSH("Engine::toggleShadersForHUD","com/stencyl/Engine.hx",570);
		HX_STACK_THIS(this);
		HX_STACK_LINE(570)
		if (((bool((bool((this->shaderLayer != null())) && bool((this->hudLayer != null())))) && bool((this->root != null()))))){
			HX_STACK_LINE(572)
			this->root->swapChildren(this->shaderLayer,this->hudLayer);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,toggleShadersForHUD,(void))

Void Engine_obj::clearShaders( ){
{
		HX_STACK_PUSH("Engine::clearShaders","com/stencyl/Engine.hx",564);
		HX_STACK_THIS(this);
		HX_STACK_LINE(565)
		::com::stencyl::utils::Utils_obj::removeAllChildren(this->shaderLayer);
		HX_STACK_LINE(566)
		this->shaders = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,clearShaders,(void))

Void Engine_obj::addShader( ::com::stencyl::graphics::shaders::PostProcess s,hx::Null< bool >  __o_addToDisplayTree){
bool addToDisplayTree = __o_addToDisplayTree.Default(true);
	HX_STACK_PUSH("Engine::addShader","com/stencyl/Engine.hx",517);
	HX_STACK_THIS(this);
	HX_STACK_ARG(s,"s");
	HX_STACK_ARG(addToDisplayTree,"addToDisplayTree");
{
		HX_STACK_LINE(521)
		if (((bool((this->shaders != null())) && bool((s->renderTo == null()))))){
			HX_STACK_LINE(523)
			bool removeAll = false;		HX_STACK_VAR(removeAll,"removeAll");
			HX_STACK_LINE(525)
			{
				HX_STACK_LINE(525)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::Dynamic > _g1 = this->shaders;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(525)
				while(((_g < _g1->length))){
					HX_STACK_LINE(525)
					::com::stencyl::graphics::shaders::PostProcess shader = _g1->__get(_g).StaticCast< ::com::stencyl::graphics::shaders::PostProcess >();		HX_STACK_VAR(shader,"shader");
					HX_STACK_LINE(525)
					++(_g);
					HX_STACK_LINE(527)
					if (((shader->renderTo == null()))){
						HX_STACK_LINE(529)
						removeAll = true;
						HX_STACK_LINE(530)
						break;
					}
				}
			}
			HX_STACK_LINE(534)
			if ((removeAll)){
				HX_STACK_LINE(536)
				::haxe::Log_obj::trace(HX_CSTRING("Enabling a shader over an existing shader. Clearing existing shader first."),hx::SourceInfo(HX_CSTRING("Engine.hx"),536,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("addShader")));
				HX_STACK_LINE(537)
				this->clearShaders();
			}
		}
		HX_STACK_LINE(541)
		if ((addToDisplayTree)){
			HX_STACK_LINE(542)
			this->shaderLayer->addChild(s);
		}
		HX_STACK_LINE(546)
		if (((this->shaders == null()))){
			HX_STACK_LINE(547)
			this->shaders = Array_obj< ::Dynamic >::__new().Add(s);
		}
		else{
			HX_STACK_LINE(552)
			this->shaders->push(s);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,addShader,(void))

::String Engine_obj::BACKGROUND;

::String Engine_obj::SCROLLING_BACKGROUND;

::String Engine_obj::REGULAR_LAYER;

::String Engine_obj::DOODAD;

::String Engine_obj::INTERNAL_SHIFT;

::String Engine_obj::INTERNAL_CTRL;

bool Engine_obj::NO_PHYSICS;

bool Engine_obj::DEBUG_DRAW;

::String Engine_obj::IMG_BASE;

Float Engine_obj::SCALE;

bool Engine_obj::isStandardIOS;

bool Engine_obj::isExtendedIOS;

bool Engine_obj::isTabletIOS;

::com::stencyl::Engine Engine_obj::engine;

bool Engine_obj::landscape;

Float Engine_obj::cameraX;

Float Engine_obj::cameraY;

Float Engine_obj::screenScaleX;

Float Engine_obj::screenScaleY;

int Engine_obj::screenOffsetX;

int Engine_obj::screenOffsetY;

int Engine_obj::screenWidth;

int Engine_obj::screenHeight;

int Engine_obj::sceneWidth;

int Engine_obj::sceneHeight;

int Engine_obj::screenWidthHalf;

int Engine_obj::screenHeightHalf;

bool Engine_obj::paused;

bool Engine_obj::started;

::com::stencyl::event::EventMaster Engine_obj::events;

int Engine_obj::ITERATIONS;

Float Engine_obj::physicsScale;

int Engine_obj::paddingLeft;

int Engine_obj::paddingRight;

int Engine_obj::paddingTop;

int Engine_obj::paddingBottom;

::String Engine_obj::mochiID;

::String Engine_obj::ngID;

::String Engine_obj::ngKey;

::flash::display::MovieClip Engine_obj::movieClip;

::flash::display::Stage Engine_obj::stage;

int Engine_obj::STEP_SIZE;

int Engine_obj::MS_PER_SEC;

Float Engine_obj::elapsedTime;

Float Engine_obj::timeScale;

bool Engine_obj::debug;

bool Engine_obj::debugDraw;

::box2D::dynamics::B2DebugDraw Engine_obj::debugDrawer;

Void Engine_obj::initBehaviors( ::com::stencyl::behavior::BehaviorManager manager,::haxe::ds::StringMap behaviorValues,Dynamic parent,::com::stencyl::Engine game,bool initialize){
{
		HX_STACK_PUSH("Engine::initBehaviors","com/stencyl/Engine.hx",984);
		HX_STACK_ARG(manager,"manager");
		HX_STACK_ARG(behaviorValues,"behaviorValues");
		HX_STACK_ARG(parent,"parent");
		HX_STACK_ARG(game,"game");
		HX_STACK_ARG(initialize,"initialize");
		HX_STACK_LINE(985)
		if (((behaviorValues == null()))){
			HX_STACK_LINE(986)
			return null();
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::haxe::ds::StringMap &behaviorValues){
				HX_STACK_PUSH("*::closure","com/stencyl/Engine.hx",990);
				{
					HX_STACK_LINE(990)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(behaviorValues);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Engine.hx",990);
						{
							HX_STACK_LINE(990)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(990)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(990)
		for(::cpp::FastIterator_obj< ::com::stencyl::behavior::BehaviorInstance > *__it = ::cpp::CreateFastIterator< ::com::stencyl::behavior::BehaviorInstance >((_Function_1_1::Block(behaviorValues))());  __it->hasNext(); ){
			::com::stencyl::behavior::BehaviorInstance behaviorInstance = __it->next();
			{
				HX_STACK_LINE(992)
				::com::stencyl::behavior::BehaviorInstance bi = behaviorInstance;		HX_STACK_VAR(bi,"bi");
				HX_STACK_LINE(994)
				if (((bool((bi == null())) || bool(!(bi->enabled))))){
					HX_STACK_LINE(995)
					continue;
				}
				HX_STACK_LINE(999)
				::com::stencyl::behavior::Behavior _template = ::com::stencyl::Data_obj::get()->behaviors->get(bi->behaviorID);		HX_STACK_VAR(_template,"template");
				HX_STACK_LINE(1000)
				::haxe::ds::StringMap attributes = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(attributes,"attributes");
				HX_STACK_LINE(1002)
				if (((_template == null()))){
					HX_STACK_LINE(1004)
					::haxe::Log_obj::trace((HX_CSTRING("Non-Existent Behavior ID (Init): ") + bi->behaviorID),hx::SourceInfo(HX_CSTRING("Engine.hx"),1004,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("initBehaviors")));
					HX_STACK_LINE(1005)
					continue;
				}
				HX_STACK_LINE(1009)
				if ((_template->isEvent)){
					HX_STACK_LINE(1010)
					for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(_template->attributes->keys());  __it->hasNext(); ){
						::String key = __it->next();
						{
							HX_STACK_LINE(1013)
							::com::stencyl::behavior::Attribute att = _template->attributes->get(key);		HX_STACK_VAR(att,"att");
							HX_STACK_LINE(1015)
							if (((att == null()))){
								HX_STACK_LINE(1016)
								continue;
							}
							HX_STACK_LINE(1020)
							::com::stencyl::behavior::Attribute attribute = hx::TCast< com::stencyl::behavior::Attribute >::cast(att);		HX_STACK_VAR(attribute,"attribute");
							HX_STACK_LINE(1022)
							if (((attribute == null()))){
								HX_STACK_LINE(1023)
								continue;
							}
							HX_STACK_LINE(1027)
							::String type = attribute->type;		HX_STACK_VAR(type,"type");
							HX_STACK_LINE(1028)
							int ID = attribute->ID;		HX_STACK_VAR(ID,"ID");
							HX_STACK_LINE(1030)
							if (((type == HX_CSTRING("list")))){
								HX_STACK_LINE(1031)
								attributes->set(key,::com::stencyl::behavior::Attribute_obj::__new(ID,attribute->fieldName,attribute->fullName,Dynamic( Array_obj<Dynamic>::__new()),type,null(),attribute->hidden));
							}
						}
;
					}
				}
				HX_STACK_LINE(1037)
				for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(bi->values->keys());  __it->hasNext(); ){
					::String key = __it->next();
					{
						HX_STACK_LINE(1039)
						Dynamic value = bi->values->get(key);		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(1041)
						if (((_template == null()))){
							HX_STACK_LINE(1043)
							::haxe::Log_obj::trace((HX_CSTRING("Non-Existent Behavior ID (Init): ") + bi->behaviorID),hx::SourceInfo(HX_CSTRING("Engine.hx"),1043,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("initBehaviors")));
							HX_STACK_LINE(1044)
							continue;
						}
						HX_STACK_LINE(1047)
						::com::stencyl::behavior::Attribute att = _template->attributes->get(key);		HX_STACK_VAR(att,"att");
						HX_STACK_LINE(1049)
						if (((att == null()))){
							HX_STACK_LINE(1050)
							continue;
						}
						HX_STACK_LINE(1054)
						::com::stencyl::behavior::Attribute attribute = hx::TCast< com::stencyl::behavior::Attribute >::cast(att);		HX_STACK_VAR(attribute,"attribute");
						HX_STACK_LINE(1056)
						if (((attribute == null()))){
							HX_STACK_LINE(1057)
							continue;
						}
						HX_STACK_LINE(1061)
						::String type = attribute->type;		HX_STACK_VAR(type,"type");
						HX_STACK_LINE(1062)
						int ID = attribute->ID;		HX_STACK_VAR(ID,"ID");
						HX_STACK_LINE(1064)
						attributes->set(key,::com::stencyl::behavior::Attribute_obj::__new(ID,attribute->fieldName,attribute->fullName,value,type,null(),attribute->hidden));
					}
;
				}
				HX_STACK_LINE(1067)
				if (((_template == null()))){
					HX_STACK_LINE(1069)
					::haxe::Log_obj::trace((HX_CSTRING("Non-Existent Behavior ID (Init): ") + bi->behaviorID),hx::SourceInfo(HX_CSTRING("Engine.hx"),1069,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("initBehaviors")));
					HX_STACK_LINE(1070)
					continue;
				}
				HX_STACK_LINE(1073)
				::com::stencyl::behavior::Behavior b = ::com::stencyl::behavior::Behavior_obj::__new(parent,game,_template->ID,_template->name,_template->classname,true,false,attributes,_template->type,_template->isEvent);		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(1087)
				manager->add(b);
			}
;
		}
		HX_STACK_LINE(1090)
		if ((initialize)){
			HX_STACK_LINE(1091)
			manager->initScripts();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Engine_obj,initBehaviors,(void))

Float Engine_obj::toPhysicalUnits( Float value){
	HX_STACK_PUSH("Engine::toPhysicalUnits","com/stencyl/Engine.hx",3411);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(3412)
	hx::DivEq(value,::com::stencyl::Engine_obj::physicsScale);
	HX_STACK_LINE(3414)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,toPhysicalUnits,return )

Float Engine_obj::toPixelUnits( Float value){
	HX_STACK_PUSH("Engine::toPixelUnits","com/stencyl/Engine.hx",3418);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(3419)
	hx::MultEq(value,::com::stencyl::Engine_obj::physicsScale);
	HX_STACK_LINE(3421)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,toPixelUnits,return )

::box2D::common::math::B2Vec2 Engine_obj::vToPhysicalUnits( ::box2D::common::math::B2Vec2 v){
	HX_STACK_PUSH("Engine::vToPhysicalUnits","com/stencyl/Engine.hx",3425);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(3426)
	v->x = ::com::stencyl::Engine_obj::toPhysicalUnits(v->x);
	HX_STACK_LINE(3427)
	v->y = ::com::stencyl::Engine_obj::toPhysicalUnits(v->y);
	HX_STACK_LINE(3429)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,vToPhysicalUnits,return )

::box2D::common::math::B2Vec2 Engine_obj::vToPixelUnits( ::box2D::common::math::B2Vec2 v){
	HX_STACK_PUSH("Engine::vToPixelUnits","com/stencyl/Engine.hx",3433);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(3434)
	v->x = ::com::stencyl::Engine_obj::toPixelUnits(v->x);
	HX_STACK_LINE(3435)
	v->y = ::com::stencyl::Engine_obj::toPixelUnits(v->y);
	HX_STACK_LINE(3437)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,vToPixelUnits,return )

Void Engine_obj::invokeListeners( Dynamic listeners){
{
		HX_STACK_PUSH("Engine::invokeListeners","com/stencyl/Engine.hx",3985);
		HX_STACK_ARG(listeners,"listeners");
		HX_STACK_LINE(3986)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(3988)
		while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(3990)
			try{
				HX_STACK_LINE(3992)
				Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(3993)
				f(listeners).Cast< Void >();
				HX_STACK_LINE(3995)
				if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
					HX_STACK_LINE(3996)
					(r)--;
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(4002)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4003,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(4006)
			(r)++;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,invokeListeners,(void))

Void Engine_obj::invokeListeners2( Dynamic listeners,Dynamic value){
{
		HX_STACK_PUSH("Engine::invokeListeners2","com/stencyl/Engine.hx",4012);
		HX_STACK_ARG(listeners,"listeners");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(4013)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(4015)
		while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(4017)
			try{
				HX_STACK_LINE(4019)
				Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(4020)
				f(value,listeners).Cast< Void >();
				HX_STACK_LINE(4022)
				if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
					HX_STACK_LINE(4023)
					(r)--;
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(4029)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(4033)
			(r)++;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Engine_obj,invokeListeners2,(void))

Void Engine_obj::invokeListeners3( Dynamic listeners,Dynamic value,Dynamic value2){
{
		HX_STACK_PUSH("Engine::invokeListeners3","com/stencyl/Engine.hx",4039);
		HX_STACK_ARG(listeners,"listeners");
		HX_STACK_ARG(value,"value");
		HX_STACK_ARG(value2,"value2");
		HX_STACK_LINE(4040)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(4042)
		while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(4044)
			try{
				HX_STACK_LINE(4046)
				Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(4047)
				f(value,value2,listeners).Cast< Void >();
				HX_STACK_LINE(4049)
				if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
					HX_STACK_LINE(4050)
					(r)--;
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(4056)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4057,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners3")));
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(4060)
			(r)++;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Engine_obj,invokeListeners3,(void))

Void Engine_obj::invokeListeners4( Dynamic listeners,Dynamic value,Dynamic value2,Dynamic value3){
{
		HX_STACK_PUSH("Engine::invokeListeners4","com/stencyl/Engine.hx",4066);
		HX_STACK_ARG(listeners,"listeners");
		HX_STACK_ARG(value,"value");
		HX_STACK_ARG(value2,"value2");
		HX_STACK_ARG(value3,"value3");
		HX_STACK_LINE(4067)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(4069)
		while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(4071)
			try{
				HX_STACK_LINE(4073)
				Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(4074)
				f(value,value2,value3,listeners).Cast< Void >();
				HX_STACK_LINE(4076)
				if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
					HX_STACK_LINE(4077)
					(r)--;
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(4083)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4084,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners4")));
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(4087)
			(r)++;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Engine_obj,invokeListeners4,(void))

Void Engine_obj::invokeListeners5( Dynamic listeners,Dynamic value,Dynamic value2,Dynamic value3,Dynamic value4){
{
		HX_STACK_PUSH("Engine::invokeListeners5","com/stencyl/Engine.hx",4093);
		HX_STACK_ARG(listeners,"listeners");
		HX_STACK_ARG(value,"value");
		HX_STACK_ARG(value2,"value2");
		HX_STACK_ARG(value3,"value3");
		HX_STACK_ARG(value4,"value4");
		HX_STACK_LINE(4094)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(4096)
		while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(4098)
			try{
				HX_STACK_LINE(4100)
				Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(4101)
				f(value,value2,value3,value4,listeners).Cast< Void >();
				HX_STACK_LINE(4103)
				if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
					HX_STACK_LINE(4104)
					(r)--;
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(4110)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4111,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners5")));
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(4114)
			(r)++;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Engine_obj,invokeListeners5,(void))

Void Engine_obj::invokeListeners6( Dynamic listeners,Dynamic value,Dynamic value2,Dynamic value3,Dynamic value4,Dynamic value5){
{
		HX_STACK_PUSH("Engine::invokeListeners6","com/stencyl/Engine.hx",4120);
		HX_STACK_ARG(listeners,"listeners");
		HX_STACK_ARG(value,"value");
		HX_STACK_ARG(value2,"value2");
		HX_STACK_ARG(value3,"value3");
		HX_STACK_ARG(value4,"value4");
		HX_STACK_ARG(value5,"value5");
		HX_STACK_LINE(4121)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(4123)
		while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(4125)
			try{
				HX_STACK_LINE(4127)
				Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(4128)
				f(value,value2,value3,value4,value5,listeners).Cast< Void >();
				HX_STACK_LINE(4130)
				if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
					HX_STACK_LINE(4131)
					(r)--;
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(4137)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4138,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners6")));
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(4141)
			(r)++;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Engine_obj,invokeListeners6,(void))


Engine_obj::Engine_obj()
{
}

void Engine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Engine);
	HX_MARK_MEMBER_NAME(stats,"stats");
	HX_MARK_MEMBER_NAME(isFullScreen,"isFullScreen");
	HX_MARK_MEMBER_NAME(shaders,"shaders");
	HX_MARK_MEMBER_NAME(shaderLayer,"shaderLayer");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(nativeListeners,"nativeListeners");
	HX_MARK_MEMBER_NAME(whenFocusChangedListeners,"whenFocusChangedListeners");
	HX_MARK_MEMBER_NAME(whenMTEndListeners,"whenMTEndListeners");
	HX_MARK_MEMBER_NAME(whenMTDragListeners,"whenMTDragListeners");
	HX_MARK_MEMBER_NAME(whenMTStartListeners,"whenMTStartListeners");
	HX_MARK_MEMBER_NAME(whenSwipedListeners,"whenSwipedListeners");
	HX_MARK_MEMBER_NAME(whenPausedListeners,"whenPausedListeners");
	HX_MARK_MEMBER_NAME(whenMouseDraggedListeners,"whenMouseDraggedListeners");
	HX_MARK_MEMBER_NAME(whenMouseMovedListeners,"whenMouseMovedListeners");
	HX_MARK_MEMBER_NAME(whenMouseReleasedListeners,"whenMouseReleasedListeners");
	HX_MARK_MEMBER_NAME(whenMousePressedListeners,"whenMousePressedListeners");
	HX_MARK_MEMBER_NAME(whenDrawingListeners,"whenDrawingListeners");
	HX_MARK_MEMBER_NAME(whenUpdatedListeners,"whenUpdatedListeners");
	HX_MARK_MEMBER_NAME(soundListeners,"soundListeners");
	HX_MARK_MEMBER_NAME(collisionListeners,"collisionListeners");
	HX_MARK_MEMBER_NAME(typeGroupPositionListeners,"typeGroupPositionListeners");
	HX_MARK_MEMBER_NAME(whenTypeGroupDiesListeners,"whenTypeGroupDiesListeners");
	HX_MARK_MEMBER_NAME(whenTypeGroupCreatedListeners,"whenTypeGroupCreatedListeners");
	HX_MARK_MEMBER_NAME(whenAnyKeyReleasedListeners,"whenAnyKeyReleasedListeners");
	HX_MARK_MEMBER_NAME(whenAnyKeyPressedListeners,"whenAnyKeyPressedListeners");
	HX_MARK_MEMBER_NAME(hasKeyPressedListeners,"hasKeyPressedListeners");
	HX_MARK_MEMBER_NAME(whenKeyPressedListeners,"whenKeyPressedListeners");
	HX_MARK_MEMBER_NAME(disableCollisionList,"disableCollisionList");
	HX_MARK_MEMBER_NAME(collisionPairs,"collisionPairs");
	HX_MARK_MEMBER_NAME(my,"my");
	HX_MARK_MEMBER_NAME(mx,"mx");
	HX_MARK_MEMBER_NAME(acc,"acc");
	HX_MARK_MEMBER_NAME(lastTime,"lastTime");
	HX_MARK_MEMBER_NAME(behaviors,"behaviors");
	HX_MARK_MEMBER_NAME(gameAttributes,"gameAttributes");
	HX_MARK_MEMBER_NAME(actorsToCreate,"actorsToCreate");
	HX_MARK_MEMBER_NAME(atlasesToUnload,"atlasesToUnload");
	HX_MARK_MEMBER_NAME(atlasesToLoad,"atlasesToLoad");
	HX_MARK_MEMBER_NAME(cameraOldY,"cameraOldY");
	HX_MARK_MEMBER_NAME(cameraOldX,"cameraOldX");
	HX_MARK_MEMBER_NAME(cameraMoved,"cameraMoved");
	HX_MARK_MEMBER_NAME(tileUpdated,"tileUpdated");
	HX_MARK_MEMBER_NAME(layerOrders,"layerOrders");
	HX_MARK_MEMBER_NAME(layersToDraw,"layersToDraw");
	HX_MARK_MEMBER_NAME(middleLayer,"middleLayer");
	HX_MARK_MEMBER_NAME(bottomLayer,"bottomLayer");
	HX_MARK_MEMBER_NAME(topLayer,"topLayer");
	HX_MARK_MEMBER_NAME(animatedTiles,"animatedTiles");
	HX_MARK_MEMBER_NAME(dynamicTiles,"dynamicTiles");
	HX_MARK_MEMBER_NAME(scrollFactors,"scrollFactors");
	HX_MARK_MEMBER_NAME(tileLayers,"tileLayers");
	HX_MARK_MEMBER_NAME(layers,"layers");
	HX_MARK_MEMBER_NAME(actorsToCreateInNextScene,"actorsToCreateInNextScene");
	HX_MARK_MEMBER_NAME(recycledActorsOfType,"recycledActorsOfType");
	HX_MARK_MEMBER_NAME(actorsOfType,"actorsOfType");
	HX_MARK_MEMBER_NAME(hudActors,"hudActors");
	HX_MARK_MEMBER_NAME(actorsPerLayer,"actorsPerLayer");
	HX_MARK_MEMBER_NAME(nextID,"nextID");
	HX_MARK_MEMBER_NAME(allActors,"allActors");
	HX_MARK_MEMBER_NAME(reverseGroups,"reverseGroups");
	HX_MARK_MEMBER_NAME(groups,"groups");
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_MEMBER_NAME(debugLayer,"debugLayer");
	HX_MARK_MEMBER_NAME(transitionLayer,"transitionLayer");
	HX_MARK_MEMBER_NAME(transitionBitmapLayer,"transitionBitmapLayer");
	HX_MARK_MEMBER_NAME(hudLayer,"hudLayer");
	HX_MARK_MEMBER_NAME(master,"master");
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(defaultGroup,"defaultGroup");
	HX_MARK_MEMBER_NAME(joints,"joints");
	HX_MARK_MEMBER_NAME(terrainRegions,"terrainRegions");
	HX_MARK_MEMBER_NAME(regions,"regions");
	HX_MARK_MEMBER_NAME(tasks,"tasks");
	HX_MARK_MEMBER_NAME(channels,"channels");
	HX_MARK_MEMBER_NAME(camera,"camera");
	HX_MARK_MEMBER_NAME(scene,"scene");
	HX_MARK_MEMBER_NAME(isShaking,"isShaking");
	HX_MARK_MEMBER_NAME(shakeIntensity,"shakeIntensity");
	HX_MARK_MEMBER_NAME(shakeTimer,"shakeTimer");
	HX_MARK_MEMBER_NAME(sceneToEnter,"sceneToEnter");
	HX_MARK_MEMBER_NAME(enter,"enter");
	HX_MARK_MEMBER_NAME(leave,"leave");
	HX_MARK_MEMBER_NAME(physicalHeight,"physicalHeight");
	HX_MARK_MEMBER_NAME(physicalWidth,"physicalWidth");
	HX_MARK_MEMBER_NAME(gravityY,"gravityY");
	HX_MARK_MEMBER_NAME(gravityX,"gravityX");
	HX_MARK_MEMBER_NAME(world,"world");
	HX_MARK_END_CLASS();
}

void Engine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stats,"stats");
	HX_VISIT_MEMBER_NAME(isFullScreen,"isFullScreen");
	HX_VISIT_MEMBER_NAME(shaders,"shaders");
	HX_VISIT_MEMBER_NAME(shaderLayer,"shaderLayer");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(nativeListeners,"nativeListeners");
	HX_VISIT_MEMBER_NAME(whenFocusChangedListeners,"whenFocusChangedListeners");
	HX_VISIT_MEMBER_NAME(whenMTEndListeners,"whenMTEndListeners");
	HX_VISIT_MEMBER_NAME(whenMTDragListeners,"whenMTDragListeners");
	HX_VISIT_MEMBER_NAME(whenMTStartListeners,"whenMTStartListeners");
	HX_VISIT_MEMBER_NAME(whenSwipedListeners,"whenSwipedListeners");
	HX_VISIT_MEMBER_NAME(whenPausedListeners,"whenPausedListeners");
	HX_VISIT_MEMBER_NAME(whenMouseDraggedListeners,"whenMouseDraggedListeners");
	HX_VISIT_MEMBER_NAME(whenMouseMovedListeners,"whenMouseMovedListeners");
	HX_VISIT_MEMBER_NAME(whenMouseReleasedListeners,"whenMouseReleasedListeners");
	HX_VISIT_MEMBER_NAME(whenMousePressedListeners,"whenMousePressedListeners");
	HX_VISIT_MEMBER_NAME(whenDrawingListeners,"whenDrawingListeners");
	HX_VISIT_MEMBER_NAME(whenUpdatedListeners,"whenUpdatedListeners");
	HX_VISIT_MEMBER_NAME(soundListeners,"soundListeners");
	HX_VISIT_MEMBER_NAME(collisionListeners,"collisionListeners");
	HX_VISIT_MEMBER_NAME(typeGroupPositionListeners,"typeGroupPositionListeners");
	HX_VISIT_MEMBER_NAME(whenTypeGroupDiesListeners,"whenTypeGroupDiesListeners");
	HX_VISIT_MEMBER_NAME(whenTypeGroupCreatedListeners,"whenTypeGroupCreatedListeners");
	HX_VISIT_MEMBER_NAME(whenAnyKeyReleasedListeners,"whenAnyKeyReleasedListeners");
	HX_VISIT_MEMBER_NAME(whenAnyKeyPressedListeners,"whenAnyKeyPressedListeners");
	HX_VISIT_MEMBER_NAME(hasKeyPressedListeners,"hasKeyPressedListeners");
	HX_VISIT_MEMBER_NAME(whenKeyPressedListeners,"whenKeyPressedListeners");
	HX_VISIT_MEMBER_NAME(disableCollisionList,"disableCollisionList");
	HX_VISIT_MEMBER_NAME(collisionPairs,"collisionPairs");
	HX_VISIT_MEMBER_NAME(my,"my");
	HX_VISIT_MEMBER_NAME(mx,"mx");
	HX_VISIT_MEMBER_NAME(acc,"acc");
	HX_VISIT_MEMBER_NAME(lastTime,"lastTime");
	HX_VISIT_MEMBER_NAME(behaviors,"behaviors");
	HX_VISIT_MEMBER_NAME(gameAttributes,"gameAttributes");
	HX_VISIT_MEMBER_NAME(actorsToCreate,"actorsToCreate");
	HX_VISIT_MEMBER_NAME(atlasesToUnload,"atlasesToUnload");
	HX_VISIT_MEMBER_NAME(atlasesToLoad,"atlasesToLoad");
	HX_VISIT_MEMBER_NAME(cameraOldY,"cameraOldY");
	HX_VISIT_MEMBER_NAME(cameraOldX,"cameraOldX");
	HX_VISIT_MEMBER_NAME(cameraMoved,"cameraMoved");
	HX_VISIT_MEMBER_NAME(tileUpdated,"tileUpdated");
	HX_VISIT_MEMBER_NAME(layerOrders,"layerOrders");
	HX_VISIT_MEMBER_NAME(layersToDraw,"layersToDraw");
	HX_VISIT_MEMBER_NAME(middleLayer,"middleLayer");
	HX_VISIT_MEMBER_NAME(bottomLayer,"bottomLayer");
	HX_VISIT_MEMBER_NAME(topLayer,"topLayer");
	HX_VISIT_MEMBER_NAME(animatedTiles,"animatedTiles");
	HX_VISIT_MEMBER_NAME(dynamicTiles,"dynamicTiles");
	HX_VISIT_MEMBER_NAME(scrollFactors,"scrollFactors");
	HX_VISIT_MEMBER_NAME(tileLayers,"tileLayers");
	HX_VISIT_MEMBER_NAME(layers,"layers");
	HX_VISIT_MEMBER_NAME(actorsToCreateInNextScene,"actorsToCreateInNextScene");
	HX_VISIT_MEMBER_NAME(recycledActorsOfType,"recycledActorsOfType");
	HX_VISIT_MEMBER_NAME(actorsOfType,"actorsOfType");
	HX_VISIT_MEMBER_NAME(hudActors,"hudActors");
	HX_VISIT_MEMBER_NAME(actorsPerLayer,"actorsPerLayer");
	HX_VISIT_MEMBER_NAME(nextID,"nextID");
	HX_VISIT_MEMBER_NAME(allActors,"allActors");
	HX_VISIT_MEMBER_NAME(reverseGroups,"reverseGroups");
	HX_VISIT_MEMBER_NAME(groups,"groups");
	HX_VISIT_MEMBER_NAME(g,"g");
	HX_VISIT_MEMBER_NAME(debugLayer,"debugLayer");
	HX_VISIT_MEMBER_NAME(transitionLayer,"transitionLayer");
	HX_VISIT_MEMBER_NAME(transitionBitmapLayer,"transitionBitmapLayer");
	HX_VISIT_MEMBER_NAME(hudLayer,"hudLayer");
	HX_VISIT_MEMBER_NAME(master,"master");
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(defaultGroup,"defaultGroup");
	HX_VISIT_MEMBER_NAME(joints,"joints");
	HX_VISIT_MEMBER_NAME(terrainRegions,"terrainRegions");
	HX_VISIT_MEMBER_NAME(regions,"regions");
	HX_VISIT_MEMBER_NAME(tasks,"tasks");
	HX_VISIT_MEMBER_NAME(channels,"channels");
	HX_VISIT_MEMBER_NAME(camera,"camera");
	HX_VISIT_MEMBER_NAME(scene,"scene");
	HX_VISIT_MEMBER_NAME(isShaking,"isShaking");
	HX_VISIT_MEMBER_NAME(shakeIntensity,"shakeIntensity");
	HX_VISIT_MEMBER_NAME(shakeTimer,"shakeTimer");
	HX_VISIT_MEMBER_NAME(sceneToEnter,"sceneToEnter");
	HX_VISIT_MEMBER_NAME(enter,"enter");
	HX_VISIT_MEMBER_NAME(leave,"leave");
	HX_VISIT_MEMBER_NAME(physicalHeight,"physicalHeight");
	HX_VISIT_MEMBER_NAME(physicalWidth,"physicalWidth");
	HX_VISIT_MEMBER_NAME(gravityY,"gravityY");
	HX_VISIT_MEMBER_NAME(gravityX,"gravityX");
	HX_VISIT_MEMBER_NAME(world,"world");
}

Dynamic Engine_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { return g; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"my") ) { return my; }
		if (HX_FIELD_EQ(inName,"mx") ) { return mx; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"say") ) { return say_dyn(); }
		if (HX_FIELD_EQ(inName,"acc") ) { return acc; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ngID") ) { return ngID; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"root") ) { return root; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"SCALE") ) { return SCALE; }
		if (HX_FIELD_EQ(inName,"ngKey") ) { return ngKey; }
		if (HX_FIELD_EQ(inName,"stage") ) { return stage; }
		if (HX_FIELD_EQ(inName,"debug") ) { return debug; }
		if (HX_FIELD_EQ(inName,"shout") ) { return shout_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"stats") ) { return stats; }
		if (HX_FIELD_EQ(inName,"tasks") ) { return tasks; }
		if (HX_FIELD_EQ(inName,"scene") ) { return scene; }
		if (HX_FIELD_EQ(inName,"enter") ) { return enter; }
		if (HX_FIELD_EQ(inName,"leave") ) { return leave; }
		if (HX_FIELD_EQ(inName,"world") ) { return world; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"DOODAD") ) { return DOODAD; }
		if (HX_FIELD_EQ(inName,"engine") ) { return engine; }
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"events") ) { return events; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		if (HX_FIELD_EQ(inName,"layers") ) { return layers; }
		if (HX_FIELD_EQ(inName,"nextID") ) { return nextID; }
		if (HX_FIELD_EQ(inName,"groups") ) { return groups; }
		if (HX_FIELD_EQ(inName,"master") ) { return master; }
		if (HX_FIELD_EQ(inName,"joints") ) { return joints; }
		if (HX_FIELD_EQ(inName,"camera") ) { return camera; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cameraX") ) { return cameraX; }
		if (HX_FIELD_EQ(inName,"cameraY") ) { return cameraY; }
		if (HX_FIELD_EQ(inName,"started") ) { return started; }
		if (HX_FIELD_EQ(inName,"mochiID") ) { return mochiID; }
		if (HX_FIELD_EQ(inName,"unpause") ) { return unpause_dyn(); }
		if (HX_FIELD_EQ(inName,"addTask") ) { return addTask_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"cleanup") ) { return cleanup_dyn(); }
		if (HX_FIELD_EQ(inName,"shaders") ) { return shaders; }
		if (HX_FIELD_EQ(inName,"regions") ) { return regions; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"IMG_BASE") ) { return IMG_BASE; }
		if (HX_FIELD_EQ(inName,"getJoint") ) { return getJoint_dyn(); }
		if (HX_FIELD_EQ(inName,"addJoint") ) { return addJoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getGroup") ) { return getGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"getActor") ) { return getActor_dyn(); }
		if (HX_FIELD_EQ(inName,"setValue") ) { return setValue_dyn(); }
		if (HX_FIELD_EQ(inName,"getValue") ) { return getValue_dyn(); }
		if (HX_FIELD_EQ(inName,"isPaused") ) { return isPaused_dyn(); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"lastTime") ) { return lastTime; }
		if (HX_FIELD_EQ(inName,"topLayer") ) { return topLayer; }
		if (HX_FIELD_EQ(inName,"hudLayer") ) { return hudLayer; }
		if (HX_FIELD_EQ(inName,"channels") ) { return channels; }
		if (HX_FIELD_EQ(inName,"gravityY") ) { return gravityY; }
		if (HX_FIELD_EQ(inName,"gravityX") ) { return gravityX; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"landscape") ) { return landscape; }
		if (HX_FIELD_EQ(inName,"movieClip") ) { return movieClip; }
		if (HX_FIELD_EQ(inName,"STEP_SIZE") ) { return STEP_SIZE; }
		if (HX_FIELD_EQ(inName,"timeScale") ) { return timeScale; }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw; }
		if (HX_FIELD_EQ(inName,"getRegion") ) { return getRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"addRegion") ) { return addRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"loadScene") ) { return loadScene_dyn(); }
		if (HX_FIELD_EQ(inName,"addShader") ) { return addShader_dyn(); }
		if (HX_FIELD_EQ(inName,"behaviors") ) { return behaviors; }
		if (HX_FIELD_EQ(inName,"hudActors") ) { return hudActors; }
		if (HX_FIELD_EQ(inName,"allActors") ) { return allActors; }
		if (HX_FIELD_EQ(inName,"isShaking") ) { return isShaking; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"BACKGROUND") ) { return BACKGROUND; }
		if (HX_FIELD_EQ(inName,"NO_PHYSICS") ) { return NO_PHYSICS; }
		if (HX_FIELD_EQ(inName,"DEBUG_DRAW") ) { return DEBUG_DRAW; }
		if (HX_FIELD_EQ(inName,"sceneWidth") ) { return sceneWidth; }
		if (HX_FIELD_EQ(inName,"ITERATIONS") ) { return ITERATIONS; }
		if (HX_FIELD_EQ(inName,"paddingTop") ) { return paddingTop; }
		if (HX_FIELD_EQ(inName,"MS_PER_SEC") ) { return MS_PER_SEC; }
		if (HX_FIELD_EQ(inName,"isInRegion") ) { return isInRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"getRegions") ) { return getRegions_dyn(); }
		if (HX_FIELD_EQ(inName,"sendToBack") ) { return sendToBack_dyn(); }
		if (HX_FIELD_EQ(inName,"removeTask") ) { return removeTask_dyn(); }
		if (HX_FIELD_EQ(inName,"postUpdate") ) { return postUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"enterScene") ) { return enterScene_dyn(); }
		if (HX_FIELD_EQ(inName,"initLayers") ) { return initLayers_dyn(); }
		if (HX_FIELD_EQ(inName,"loadJoints") ) { return loadJoints_dyn(); }
		if (HX_FIELD_EQ(inName,"loadCamera") ) { return loadCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"loadActors") ) { return loadActors_dyn(); }
		if (HX_FIELD_EQ(inName,"cameraOldY") ) { return cameraOldY; }
		if (HX_FIELD_EQ(inName,"cameraOldX") ) { return cameraOldX; }
		if (HX_FIELD_EQ(inName,"tileLayers") ) { return tileLayers; }
		if (HX_FIELD_EQ(inName,"debugLayer") ) { return debugLayer; }
		if (HX_FIELD_EQ(inName,"shakeTimer") ) { return shakeTimer; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isTabletIOS") ) { return isTabletIOS; }
		if (HX_FIELD_EQ(inName,"screenWidth") ) { return screenWidth; }
		if (HX_FIELD_EQ(inName,"sceneHeight") ) { return sceneHeight; }
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { return paddingLeft; }
		if (HX_FIELD_EQ(inName,"elapsedTime") ) { return elapsedTime; }
		if (HX_FIELD_EQ(inName,"debugDrawer") ) { return debugDrawer; }
		if (HX_FIELD_EQ(inName,"nextJointID") ) { return nextJointID_dyn(); }
		if (HX_FIELD_EQ(inName,"moveToLayer") ) { return moveToLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"addHUDActor") ) { return addHUDActor_dyn(); }
		if (HX_FIELD_EQ(inName,"shakeScreen") ) { return shakeScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"getTopLayer") ) { return getTopLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"removeActor") ) { return removeActor_dyn(); }
		if (HX_FIELD_EQ(inName,"createActor") ) { return createActor_dyn(); }
		if (HX_FIELD_EQ(inName,"switchScene") ) { return switchScene_dyn(); }
		if (HX_FIELD_EQ(inName,"loadTerrain") ) { return loadTerrain_dyn(); }
		if (HX_FIELD_EQ(inName,"loadRegions") ) { return loadRegions_dyn(); }
		if (HX_FIELD_EQ(inName,"initPhysics") ) { return initPhysics_dyn(); }
		if (HX_FIELD_EQ(inName,"shaderLayer") ) { return shaderLayer; }
		if (HX_FIELD_EQ(inName,"cameraMoved") ) { return cameraMoved; }
		if (HX_FIELD_EQ(inName,"tileUpdated") ) { return tileUpdated; }
		if (HX_FIELD_EQ(inName,"layerOrders") ) { return layerOrders; }
		if (HX_FIELD_EQ(inName,"middleLayer") ) { return middleLayer; }
		if (HX_FIELD_EQ(inName,"bottomLayer") ) { return bottomLayer; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenScaleX") ) { return screenScaleX; }
		if (HX_FIELD_EQ(inName,"screenScaleY") ) { return screenScaleY; }
		if (HX_FIELD_EQ(inName,"screenHeight") ) { return screenHeight; }
		if (HX_FIELD_EQ(inName,"physicsScale") ) { return physicsScale; }
		if (HX_FIELD_EQ(inName,"paddingRight") ) { return paddingRight; }
		if (HX_FIELD_EQ(inName,"toPixelUnits") ) { return toPixelUnits_dyn(); }
		if (HX_FIELD_EQ(inName,"nextRegionID") ) { return nextRegionID_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRegion") ) { return removeRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"createRegion") ) { return createRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"destroyJoint") ) { return destroyJoint_dyn(); }
		if (HX_FIELD_EQ(inName,"bringForward") ) { return bringForward_dyn(); }
		if (HX_FIELD_EQ(inName,"bringToFront") ) { return bringToFront_dyn(); }
		if (HX_FIELD_EQ(inName,"sendBackward") ) { return sendBackward_dyn(); }
		if (HX_FIELD_EQ(inName,"cameraFollow") ) { return cameraFollow_dyn(); }
		if (HX_FIELD_EQ(inName,"focusChanged") ) { return focusChanged_dyn(); }
		if (HX_FIELD_EQ(inName,"recycleActor") ) { return recycleActor_dyn(); }
		if (HX_FIELD_EQ(inName,"optimizePool") ) { return optimizePool_dyn(); }
		if (HX_FIELD_EQ(inName,"resetShaders") ) { return resetShaders_dyn(); }
		if (HX_FIELD_EQ(inName,"clearShaders") ) { return clearShaders_dyn(); }
		if (HX_FIELD_EQ(inName,"isFullScreen") ) { return isFullScreen; }
		if (HX_FIELD_EQ(inName,"layersToDraw") ) { return layersToDraw; }
		if (HX_FIELD_EQ(inName,"dynamicTiles") ) { return dynamicTiles; }
		if (HX_FIELD_EQ(inName,"actorsOfType") ) { return actorsOfType; }
		if (HX_FIELD_EQ(inName,"defaultGroup") ) { return defaultGroup; }
		if (HX_FIELD_EQ(inName,"sceneToEnter") ) { return sceneToEnter; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"REGULAR_LAYER") ) { return REGULAR_LAYER; }
		if (HX_FIELD_EQ(inName,"INTERNAL_CTRL") ) { return INTERNAL_CTRL; }
		if (HX_FIELD_EQ(inName,"isStandardIOS") ) { return isStandardIOS; }
		if (HX_FIELD_EQ(inName,"isExtendedIOS") ) { return isExtendedIOS; }
		if (HX_FIELD_EQ(inName,"screenOffsetX") ) { return screenOffsetX; }
		if (HX_FIELD_EQ(inName,"screenOffsetY") ) { return screenOffsetY; }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { return paddingBottom; }
		if (HX_FIELD_EQ(inName,"initBehaviors") ) { return initBehaviors_dyn(); }
		if (HX_FIELD_EQ(inName,"vToPixelUnits") ) { return vToPixelUnits_dyn(); }
		if (HX_FIELD_EQ(inName,"soundFinished") ) { return soundFinished_dyn(); }
		if (HX_FIELD_EQ(inName,"atlasesToLoad") ) { return atlasesToLoad; }
		if (HX_FIELD_EQ(inName,"animatedTiles") ) { return animatedTiles; }
		if (HX_FIELD_EQ(inName,"scrollFactors") ) { return scrollFactors; }
		if (HX_FIELD_EQ(inName,"reverseGroups") ) { return reverseGroups; }
		if (HX_FIELD_EQ(inName,"physicalWidth") ) { return physicalWidth; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"INTERNAL_SHIFT") ) { return INTERNAL_SHIFT; }
		if (HX_FIELD_EQ(inName,"getGroupByName") ) { return getGroupByName_dyn(); }
		if (HX_FIELD_EQ(inName,"removeHUDActor") ) { return removeHUDActor_dyn(); }
		if (HX_FIELD_EQ(inName,"getMiddleLayer") ) { return getMiddleLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"getBottomLayer") ) { return getBottomLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"loadBackground") ) { return loadBackground_dyn(); }
		if (HX_FIELD_EQ(inName,"soundListeners") ) { return soundListeners; }
		if (HX_FIELD_EQ(inName,"collisionPairs") ) { return collisionPairs; }
		if (HX_FIELD_EQ(inName,"gameAttributes") ) { return gameAttributes; }
		if (HX_FIELD_EQ(inName,"actorsToCreate") ) { return actorsToCreate; }
		if (HX_FIELD_EQ(inName,"actorsPerLayer") ) { return actorsPerLayer; }
		if (HX_FIELD_EQ(inName,"terrainRegions") ) { return terrainRegions; }
		if (HX_FIELD_EQ(inName,"shakeIntensity") ) { return shakeIntensity; }
		if (HX_FIELD_EQ(inName,"physicalHeight") ) { return physicalHeight; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"screenWidthHalf") ) { return screenWidthHalf; }
		if (HX_FIELD_EQ(inName,"toPhysicalUnits") ) { return toPhysicalUnits_dyn(); }
		if (HX_FIELD_EQ(inName,"invokeListeners") ) { return invokeListeners_dyn(); }
		if (HX_FIELD_EQ(inName,"setScrollFactor") ) { return setScrollFactor_dyn(); }
		if (HX_FIELD_EQ(inName,"createBoxRegion") ) { return createBoxRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"getActorsOfType") ) { return getActorsOfType_dyn(); }
		if (HX_FIELD_EQ(inName,"handleCollision") ) { return handleCollision_dyn(); }
		if (HX_FIELD_EQ(inName,"isTransitioning") ) { return isTransitioning_dyn(); }
		if (HX_FIELD_EQ(inName,"loadForegrounds") ) { return loadForegrounds_dyn(); }
		if (HX_FIELD_EQ(inName,"loadBackgrounds") ) { return loadBackgrounds_dyn(); }
		if (HX_FIELD_EQ(inName,"nativeListeners") ) { return nativeListeners; }
		if (HX_FIELD_EQ(inName,"atlasesToUnload") ) { return atlasesToUnload; }
		if (HX_FIELD_EQ(inName,"transitionLayer") ) { return transitionLayer; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"screenHeightHalf") ) { return screenHeightHalf; }
		if (HX_FIELD_EQ(inName,"vToPhysicalUnits") ) { return vToPhysicalUnits_dyn(); }
		if (HX_FIELD_EQ(inName,"invokeListeners2") ) { return invokeListeners2_dyn(); }
		if (HX_FIELD_EQ(inName,"invokeListeners3") ) { return invokeListeners3_dyn(); }
		if (HX_FIELD_EQ(inName,"invokeListeners4") ) { return invokeListeners4_dyn(); }
		if (HX_FIELD_EQ(inName,"invokeListeners5") ) { return invokeListeners5_dyn(); }
		if (HX_FIELD_EQ(inName,"invokeListeners6") ) { return invokeListeners6_dyn(); }
		if (HX_FIELD_EQ(inName,"getGameAttribute") ) { return getGameAttribute_dyn(); }
		if (HX_FIELD_EQ(inName,"setGameAttribute") ) { return setGameAttribute_dyn(); }
		if (HX_FIELD_EQ(inName,"getTerrainRegion") ) { return getTerrainRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"addTerrainRegion") ) { return addTerrainRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"createHingeJoint") ) { return createHingeJoint_dyn(); }
		if (HX_FIELD_EQ(inName,"createStickJoint") ) { return createStickJoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getPhysicalWidth") ) { return getPhysicalWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"moveActorToLayer") ) { return moveActorToLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"initActorScripts") ) { return initActorScripts_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getTerrainRegions") ) { return getTerrainRegions_dyn(); }
		if (HX_FIELD_EQ(inName,"getPhysicalHeight") ) { return getPhysicalHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"stopShakingScreen") ) { return stopShakingScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"createActorOfType") ) { return createActorOfType_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createSlidingJoint") ) { return createSlidingJoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getOrderForLayerID") ) { return getOrderForLayerID_dyn(); }
		if (HX_FIELD_EQ(inName,"isTransitioningOut") ) { return isTransitioningOut_dyn(); }
		if (HX_FIELD_EQ(inName,"loadTerrainRegions") ) { return loadTerrainRegions_dyn(); }
		if (HX_FIELD_EQ(inName,"loadDeferredActors") ) { return loadDeferredActors_dyn(); }
		if (HX_FIELD_EQ(inName,"whenMTEndListeners") ) { return whenMTEndListeners; }
		if (HX_FIELD_EQ(inName,"collisionListeners") ) { return collisionListeners; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nextTerrainRegionID") ) { return nextTerrainRegionID_dyn(); }
		if (HX_FIELD_EQ(inName,"removeTerrainRegion") ) { return removeTerrainRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"createTerrainRegion") ) { return createTerrainRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"getIDFromLayerOrder") ) { return getIDFromLayerOrder_dyn(); }
		if (HX_FIELD_EQ(inName,"toggleShadersForHUD") ) { return toggleShadersForHUD_dyn(); }
		if (HX_FIELD_EQ(inName,"whenMTDragListeners") ) { return whenMTDragListeners; }
		if (HX_FIELD_EQ(inName,"whenSwipedListeners") ) { return whenSwipedListeners; }
		if (HX_FIELD_EQ(inName,"whenPausedListeners") ) { return whenPausedListeners; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"SCROLLING_BACKGROUND") ) { return SCROLLING_BACKGROUND; }
		if (HX_FIELD_EQ(inName,"createCircularRegion") ) { return createCircularRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"enableGlobalSleeping") ) { return enableGlobalSleeping_dyn(); }
		if (HX_FIELD_EQ(inName,"removeActorFromLayer") ) { return removeActorFromLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"whenMTStartListeners") ) { return whenMTStartListeners; }
		if (HX_FIELD_EQ(inName,"whenDrawingListeners") ) { return whenDrawingListeners; }
		if (HX_FIELD_EQ(inName,"whenUpdatedListeners") ) { return whenUpdatedListeners; }
		if (HX_FIELD_EQ(inName,"disableCollisionList") ) { return disableCollisionList; }
		if (HX_FIELD_EQ(inName,"recycledActorsOfType") ) { return recycledActorsOfType; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setOffscreenTolerance") ) { return setOffscreenTolerance_dyn(); }
		if (HX_FIELD_EQ(inName,"disableGlobalSleeping") ) { return disableGlobalSleeping_dyn(); }
		if (HX_FIELD_EQ(inName,"transitionBitmapLayer") ) { return transitionBitmapLayer; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createBoxTerrainRegion") ) { return createBoxTerrainRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"createCustomStickJoint") ) { return createCustomStickJoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getRecycledActorOfType") ) { return getRecycledActorOfType_dyn(); }
		if (HX_FIELD_EQ(inName,"createActorInNextScene") ) { return createActorInNextScene_dyn(); }
		if (HX_FIELD_EQ(inName,"hasKeyPressedListeners") ) { return hasKeyPressedListeners; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getRecycledActorsOfType") ) { return getRecycledActorsOfType_dyn(); }
		if (HX_FIELD_EQ(inName,"whenMouseMovedListeners") ) { return whenMouseMovedListeners; }
		if (HX_FIELD_EQ(inName,"whenKeyPressedListeners") ) { return whenKeyPressedListeners; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"whenFocusChangedListeners") ) { return whenFocusChangedListeners; }
		if (HX_FIELD_EQ(inName,"whenMouseDraggedListeners") ) { return whenMouseDraggedListeners; }
		if (HX_FIELD_EQ(inName,"whenMousePressedListeners") ) { return whenMousePressedListeners; }
		if (HX_FIELD_EQ(inName,"actorsToCreateInNextScene") ) { return actorsToCreateInNextScene; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"whenMouseReleasedListeners") ) { return whenMouseReleasedListeners; }
		if (HX_FIELD_EQ(inName,"typeGroupPositionListeners") ) { return typeGroupPositionListeners; }
		if (HX_FIELD_EQ(inName,"whenTypeGroupDiesListeners") ) { return whenTypeGroupDiesListeners; }
		if (HX_FIELD_EQ(inName,"whenAnyKeyPressedListeners") ) { return whenAnyKeyPressedListeners; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"createCircularTerrainRegion") ) { return createCircularTerrainRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"whenAnyKeyReleasedListeners") ) { return whenAnyKeyReleasedListeners; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"getNumberOfActorsWithinLayer") ) { return getNumberOfActorsWithinLayer_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"whenTypeGroupCreatedListeners") ) { return whenTypeGroupCreatedListeners; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Engine_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< ::com::stencyl::graphics::G >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"my") ) { my=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mx") ) { mx=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"acc") ) { acc=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ngID") ) { ngID=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"SCALE") ) { SCALE=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ngKey") ) { ngKey=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::flash::display::Stage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debug") ) { debug=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stats") ) { stats=inValue.Cast< ::com::nmefermmmtools::debug::Stats >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tasks") ) { tasks=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scene") ) { scene=inValue.Cast< ::com::stencyl::models::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enter") ) { enter=inValue.Cast< ::com::stencyl::graphics::transitions::Transition >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leave") ) { leave=inValue.Cast< ::com::stencyl::graphics::transitions::Transition >(); return inValue; }
		if (HX_FIELD_EQ(inName,"world") ) { world=inValue.Cast< ::box2D::dynamics::B2World >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"DOODAD") ) { DOODAD=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"engine") ) { engine=inValue.Cast< ::com::stencyl::Engine >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"events") ) { events=inValue.Cast< ::com::stencyl::event::EventMaster >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast< ::com::stencyl::graphics::shaders::PostProcess >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layers") ) { layers=inValue.Cast< ::de::polygonal::ds::IntHashTable >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextID") ) { nextID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"groups") ) { groups=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"master") ) { master=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"joints") ) { joints=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast< ::com::stencyl::models::Actor >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cameraX") ) { cameraX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameraY") ) { cameraY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"started") ) { started=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mochiID") ) { mochiID=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shaders") ) { shaders=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"regions") ) { regions=inValue.Cast< ::de::polygonal::ds::IntHashTable >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"IMG_BASE") ) { IMG_BASE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastTime") ) { lastTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"topLayer") ) { topLayer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hudLayer") ) { hudLayer=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravityY") ) { gravityY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravityX") ) { gravityX=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"landscape") ) { landscape=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"movieClip") ) { movieClip=inValue.Cast< ::flash::display::MovieClip >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STEP_SIZE") ) { STEP_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeScale") ) { timeScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { debugDraw=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"behaviors") ) { behaviors=inValue.Cast< ::com::stencyl::behavior::BehaviorManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hudActors") ) { hudActors=inValue.Cast< ::de::polygonal::ds::IntHashTable >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allActors") ) { allActors=inValue.Cast< ::de::polygonal::ds::IntHashTable >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isShaking") ) { isShaking=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"BACKGROUND") ) { BACKGROUND=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NO_PHYSICS") ) { NO_PHYSICS=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEBUG_DRAW") ) { DEBUG_DRAW=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sceneWidth") ) { sceneWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ITERATIONS") ) { ITERATIONS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingTop") ) { paddingTop=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MS_PER_SEC") ) { MS_PER_SEC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameraOldY") ) { cameraOldY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameraOldX") ) { cameraOldX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileLayers") ) { tileLayers=inValue.Cast< ::de::polygonal::ds::IntHashTable >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugLayer") ) { debugLayer=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shakeTimer") ) { shakeTimer=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isTabletIOS") ) { isTabletIOS=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenWidth") ) { screenWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sceneHeight") ) { sceneHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { paddingLeft=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"elapsedTime") ) { elapsedTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugDrawer") ) { debugDrawer=inValue.Cast< ::box2D::dynamics::B2DebugDraw >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shaderLayer") ) { shaderLayer=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameraMoved") ) { cameraMoved=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileUpdated") ) { tileUpdated=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layerOrders") ) { layerOrders=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"middleLayer") ) { middleLayer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottomLayer") ) { bottomLayer=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenScaleX") ) { screenScaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenScaleY") ) { screenScaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenHeight") ) { screenHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"physicsScale") ) { physicsScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingRight") ) { paddingRight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isFullScreen") ) { isFullScreen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layersToDraw") ) { layersToDraw=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dynamicTiles") ) { dynamicTiles=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actorsOfType") ) { actorsOfType=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultGroup") ) { defaultGroup=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sceneToEnter") ) { sceneToEnter=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"REGULAR_LAYER") ) { REGULAR_LAYER=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INTERNAL_CTRL") ) { INTERNAL_CTRL=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isStandardIOS") ) { isStandardIOS=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isExtendedIOS") ) { isExtendedIOS=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenOffsetX") ) { screenOffsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenOffsetY") ) { screenOffsetY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { paddingBottom=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"atlasesToLoad") ) { atlasesToLoad=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animatedTiles") ) { animatedTiles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollFactors") ) { scrollFactors=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"reverseGroups") ) { reverseGroups=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"physicalWidth") ) { physicalWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"INTERNAL_SHIFT") ) { INTERNAL_SHIFT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soundListeners") ) { soundListeners=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"collisionPairs") ) { collisionPairs=inValue.Cast< ::de::polygonal::ds::IntHashTable >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gameAttributes") ) { gameAttributes=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actorsToCreate") ) { actorsToCreate=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actorsPerLayer") ) { actorsPerLayer=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"terrainRegions") ) { terrainRegions=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shakeIntensity") ) { shakeIntensity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"physicalHeight") ) { physicalHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"screenWidthHalf") ) { screenWidthHalf=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nativeListeners") ) { nativeListeners=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"atlasesToUnload") ) { atlasesToUnload=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transitionLayer") ) { transitionLayer=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"screenHeightHalf") ) { screenHeightHalf=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"whenMTEndListeners") ) { whenMTEndListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"collisionListeners") ) { collisionListeners=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"whenMTDragListeners") ) { whenMTDragListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"whenSwipedListeners") ) { whenSwipedListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"whenPausedListeners") ) { whenPausedListeners=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"SCROLLING_BACKGROUND") ) { SCROLLING_BACKGROUND=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"whenMTStartListeners") ) { whenMTStartListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"whenDrawingListeners") ) { whenDrawingListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"whenUpdatedListeners") ) { whenUpdatedListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"disableCollisionList") ) { disableCollisionList=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"recycledActorsOfType") ) { recycledActorsOfType=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"transitionBitmapLayer") ) { transitionBitmapLayer=inValue.Cast< ::flash::display::DisplayObject >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hasKeyPressedListeners") ) { hasKeyPressedListeners=inValue.Cast< bool >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"whenMouseMovedListeners") ) { whenMouseMovedListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"whenKeyPressedListeners") ) { whenKeyPressedListeners=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"whenFocusChangedListeners") ) { whenFocusChangedListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"whenMouseDraggedListeners") ) { whenMouseDraggedListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"whenMousePressedListeners") ) { whenMousePressedListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actorsToCreateInNextScene") ) { actorsToCreateInNextScene=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"whenMouseReleasedListeners") ) { whenMouseReleasedListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"typeGroupPositionListeners") ) { typeGroupPositionListeners=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"whenTypeGroupDiesListeners") ) { whenTypeGroupDiesListeners=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"whenAnyKeyPressedListeners") ) { whenAnyKeyPressedListeners=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"whenAnyKeyReleasedListeners") ) { whenAnyKeyReleasedListeners=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"whenTypeGroupCreatedListeners") ) { whenTypeGroupCreatedListeners=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Engine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("stats"));
	outFields->push(HX_CSTRING("isFullScreen"));
	outFields->push(HX_CSTRING("shaders"));
	outFields->push(HX_CSTRING("shaderLayer"));
	outFields->push(HX_CSTRING("shader"));
	outFields->push(HX_CSTRING("nativeListeners"));
	outFields->push(HX_CSTRING("whenFocusChangedListeners"));
	outFields->push(HX_CSTRING("whenMTEndListeners"));
	outFields->push(HX_CSTRING("whenMTDragListeners"));
	outFields->push(HX_CSTRING("whenMTStartListeners"));
	outFields->push(HX_CSTRING("whenSwipedListeners"));
	outFields->push(HX_CSTRING("whenPausedListeners"));
	outFields->push(HX_CSTRING("whenMouseDraggedListeners"));
	outFields->push(HX_CSTRING("whenMouseMovedListeners"));
	outFields->push(HX_CSTRING("whenMouseReleasedListeners"));
	outFields->push(HX_CSTRING("whenMousePressedListeners"));
	outFields->push(HX_CSTRING("whenDrawingListeners"));
	outFields->push(HX_CSTRING("whenUpdatedListeners"));
	outFields->push(HX_CSTRING("soundListeners"));
	outFields->push(HX_CSTRING("collisionListeners"));
	outFields->push(HX_CSTRING("typeGroupPositionListeners"));
	outFields->push(HX_CSTRING("whenTypeGroupDiesListeners"));
	outFields->push(HX_CSTRING("whenTypeGroupCreatedListeners"));
	outFields->push(HX_CSTRING("whenAnyKeyReleasedListeners"));
	outFields->push(HX_CSTRING("whenAnyKeyPressedListeners"));
	outFields->push(HX_CSTRING("hasKeyPressedListeners"));
	outFields->push(HX_CSTRING("whenKeyPressedListeners"));
	outFields->push(HX_CSTRING("disableCollisionList"));
	outFields->push(HX_CSTRING("collisionPairs"));
	outFields->push(HX_CSTRING("my"));
	outFields->push(HX_CSTRING("mx"));
	outFields->push(HX_CSTRING("acc"));
	outFields->push(HX_CSTRING("lastTime"));
	outFields->push(HX_CSTRING("behaviors"));
	outFields->push(HX_CSTRING("gameAttributes"));
	outFields->push(HX_CSTRING("actorsToCreate"));
	outFields->push(HX_CSTRING("atlasesToUnload"));
	outFields->push(HX_CSTRING("atlasesToLoad"));
	outFields->push(HX_CSTRING("cameraOldY"));
	outFields->push(HX_CSTRING("cameraOldX"));
	outFields->push(HX_CSTRING("cameraMoved"));
	outFields->push(HX_CSTRING("tileUpdated"));
	outFields->push(HX_CSTRING("layerOrders"));
	outFields->push(HX_CSTRING("layersToDraw"));
	outFields->push(HX_CSTRING("middleLayer"));
	outFields->push(HX_CSTRING("bottomLayer"));
	outFields->push(HX_CSTRING("topLayer"));
	outFields->push(HX_CSTRING("animatedTiles"));
	outFields->push(HX_CSTRING("dynamicTiles"));
	outFields->push(HX_CSTRING("scrollFactors"));
	outFields->push(HX_CSTRING("tileLayers"));
	outFields->push(HX_CSTRING("layers"));
	outFields->push(HX_CSTRING("actorsToCreateInNextScene"));
	outFields->push(HX_CSTRING("recycledActorsOfType"));
	outFields->push(HX_CSTRING("actorsOfType"));
	outFields->push(HX_CSTRING("hudActors"));
	outFields->push(HX_CSTRING("actorsPerLayer"));
	outFields->push(HX_CSTRING("nextID"));
	outFields->push(HX_CSTRING("allActors"));
	outFields->push(HX_CSTRING("reverseGroups"));
	outFields->push(HX_CSTRING("groups"));
	outFields->push(HX_CSTRING("g"));
	outFields->push(HX_CSTRING("debugLayer"));
	outFields->push(HX_CSTRING("transitionLayer"));
	outFields->push(HX_CSTRING("transitionBitmapLayer"));
	outFields->push(HX_CSTRING("hudLayer"));
	outFields->push(HX_CSTRING("master"));
	outFields->push(HX_CSTRING("root"));
	outFields->push(HX_CSTRING("defaultGroup"));
	outFields->push(HX_CSTRING("joints"));
	outFields->push(HX_CSTRING("terrainRegions"));
	outFields->push(HX_CSTRING("regions"));
	outFields->push(HX_CSTRING("tasks"));
	outFields->push(HX_CSTRING("channels"));
	outFields->push(HX_CSTRING("camera"));
	outFields->push(HX_CSTRING("scene"));
	outFields->push(HX_CSTRING("isShaking"));
	outFields->push(HX_CSTRING("shakeIntensity"));
	outFields->push(HX_CSTRING("shakeTimer"));
	outFields->push(HX_CSTRING("sceneToEnter"));
	outFields->push(HX_CSTRING("enter"));
	outFields->push(HX_CSTRING("leave"));
	outFields->push(HX_CSTRING("physicalHeight"));
	outFields->push(HX_CSTRING("physicalWidth"));
	outFields->push(HX_CSTRING("gravityY"));
	outFields->push(HX_CSTRING("gravityX"));
	outFields->push(HX_CSTRING("world"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BACKGROUND"),
	HX_CSTRING("SCROLLING_BACKGROUND"),
	HX_CSTRING("REGULAR_LAYER"),
	HX_CSTRING("DOODAD"),
	HX_CSTRING("INTERNAL_SHIFT"),
	HX_CSTRING("INTERNAL_CTRL"),
	HX_CSTRING("NO_PHYSICS"),
	HX_CSTRING("DEBUG_DRAW"),
	HX_CSTRING("IMG_BASE"),
	HX_CSTRING("SCALE"),
	HX_CSTRING("isStandardIOS"),
	HX_CSTRING("isExtendedIOS"),
	HX_CSTRING("isTabletIOS"),
	HX_CSTRING("engine"),
	HX_CSTRING("landscape"),
	HX_CSTRING("cameraX"),
	HX_CSTRING("cameraY"),
	HX_CSTRING("screenScaleX"),
	HX_CSTRING("screenScaleY"),
	HX_CSTRING("screenOffsetX"),
	HX_CSTRING("screenOffsetY"),
	HX_CSTRING("screenWidth"),
	HX_CSTRING("screenHeight"),
	HX_CSTRING("sceneWidth"),
	HX_CSTRING("sceneHeight"),
	HX_CSTRING("screenWidthHalf"),
	HX_CSTRING("screenHeightHalf"),
	HX_CSTRING("paused"),
	HX_CSTRING("started"),
	HX_CSTRING("events"),
	HX_CSTRING("ITERATIONS"),
	HX_CSTRING("physicsScale"),
	HX_CSTRING("paddingLeft"),
	HX_CSTRING("paddingRight"),
	HX_CSTRING("paddingTop"),
	HX_CSTRING("paddingBottom"),
	HX_CSTRING("mochiID"),
	HX_CSTRING("ngID"),
	HX_CSTRING("ngKey"),
	HX_CSTRING("movieClip"),
	HX_CSTRING("stage"),
	HX_CSTRING("STEP_SIZE"),
	HX_CSTRING("MS_PER_SEC"),
	HX_CSTRING("elapsedTime"),
	HX_CSTRING("timeScale"),
	HX_CSTRING("debug"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("debugDrawer"),
	HX_CSTRING("initBehaviors"),
	HX_CSTRING("toPhysicalUnits"),
	HX_CSTRING("toPixelUnits"),
	HX_CSTRING("vToPhysicalUnits"),
	HX_CSTRING("vToPixelUnits"),
	HX_CSTRING("invokeListeners"),
	HX_CSTRING("invokeListeners2"),
	HX_CSTRING("invokeListeners3"),
	HX_CSTRING("invokeListeners4"),
	HX_CSTRING("invokeListeners5"),
	HX_CSTRING("invokeListeners6"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setScrollFactor"),
	HX_CSTRING("setOffscreenTolerance"),
	HX_CSTRING("getGameAttribute"),
	HX_CSTRING("setGameAttribute"),
	HX_CSTRING("nextTerrainRegionID"),
	HX_CSTRING("getTerrainRegions"),
	HX_CSTRING("getTerrainRegion"),
	HX_CSTRING("removeTerrainRegion"),
	HX_CSTRING("addTerrainRegion"),
	HX_CSTRING("createCircularTerrainRegion"),
	HX_CSTRING("createBoxTerrainRegion"),
	HX_CSTRING("createTerrainRegion"),
	HX_CSTRING("isInRegion"),
	HX_CSTRING("nextRegionID"),
	HX_CSTRING("getRegions"),
	HX_CSTRING("getRegion"),
	HX_CSTRING("removeRegion"),
	HX_CSTRING("addRegion"),
	HX_CSTRING("createCircularRegion"),
	HX_CSTRING("createBoxRegion"),
	HX_CSTRING("createRegion"),
	HX_CSTRING("createSlidingJoint"),
	HX_CSTRING("createHingeJoint"),
	HX_CSTRING("createCustomStickJoint"),
	HX_CSTRING("createStickJoint"),
	HX_CSTRING("destroyJoint"),
	HX_CSTRING("getJoint"),
	HX_CSTRING("addJoint"),
	HX_CSTRING("nextJointID"),
	HX_CSTRING("getGroupByName"),
	HX_CSTRING("getGroup"),
	HX_CSTRING("disableGlobalSleeping"),
	HX_CSTRING("enableGlobalSleeping"),
	HX_CSTRING("getPhysicalHeight"),
	HX_CSTRING("getPhysicalWidth"),
	HX_CSTRING("getNumberOfActorsWithinLayer"),
	HX_CSTRING("getIDFromLayerOrder"),
	HX_CSTRING("getOrderForLayerID"),
	HX_CSTRING("bringForward"),
	HX_CSTRING("bringToFront"),
	HX_CSTRING("sendBackward"),
	HX_CSTRING("sendToBack"),
	HX_CSTRING("moveToLayer"),
	HX_CSTRING("removeHUDActor"),
	HX_CSTRING("addHUDActor"),
	HX_CSTRING("getRecycledActorsOfType"),
	HX_CSTRING("getActorsOfType"),
	HX_CSTRING("getActor"),
	HX_CSTRING("shout"),
	HX_CSTRING("say"),
	HX_CSTRING("setValue"),
	HX_CSTRING("getValue"),
	HX_CSTRING("draw"),
	HX_CSTRING("isPaused"),
	HX_CSTRING("unpause"),
	HX_CSTRING("pause"),
	HX_CSTRING("cameraFollow"),
	HX_CSTRING("stopShakingScreen"),
	HX_CSTRING("shakeScreen"),
	HX_CSTRING("removeTask"),
	HX_CSTRING("addTask"),
	HX_CSTRING("soundFinished"),
	HX_CSTRING("handleCollision"),
	HX_CSTRING("focusChanged"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("postUpdate"),
	HX_CSTRING("onUpdate"),
	HX_CSTRING("update"),
	HX_CSTRING("getMiddleLayer"),
	HX_CSTRING("getBottomLayer"),
	HX_CSTRING("getTopLayer"),
	HX_CSTRING("createActorOfType"),
	HX_CSTRING("getRecycledActorOfType"),
	HX_CSTRING("recycleActor"),
	HX_CSTRING("moveActorToLayer"),
	HX_CSTRING("removeActorFromLayer"),
	HX_CSTRING("removeActor"),
	HX_CSTRING("createActor"),
	HX_CSTRING("createActorInNextScene"),
	HX_CSTRING("isTransitioningOut"),
	HX_CSTRING("isTransitioning"),
	HX_CSTRING("enterScene"),
	HX_CSTRING("switchScene"),
	HX_CSTRING("cleanup"),
	HX_CSTRING("optimizePool"),
	HX_CSTRING("initLayers"),
	HX_CSTRING("loadTerrain"),
	HX_CSTRING("loadJoints"),
	HX_CSTRING("loadTerrainRegions"),
	HX_CSTRING("loadRegions"),
	HX_CSTRING("loadCamera"),
	HX_CSTRING("initActorScripts"),
	HX_CSTRING("loadDeferredActors"),
	HX_CSTRING("loadActors"),
	HX_CSTRING("initPhysics"),
	HX_CSTRING("loadBackground"),
	HX_CSTRING("loadForegrounds"),
	HX_CSTRING("loadBackgrounds"),
	HX_CSTRING("loadScene"),
	HX_CSTRING("begin"),
	HX_CSTRING("resetShaders"),
	HX_CSTRING("toggleShadersForHUD"),
	HX_CSTRING("clearShaders"),
	HX_CSTRING("addShader"),
	HX_CSTRING("stats"),
	HX_CSTRING("isFullScreen"),
	HX_CSTRING("shaders"),
	HX_CSTRING("shaderLayer"),
	HX_CSTRING("shader"),
	HX_CSTRING("nativeListeners"),
	HX_CSTRING("whenFocusChangedListeners"),
	HX_CSTRING("whenMTEndListeners"),
	HX_CSTRING("whenMTDragListeners"),
	HX_CSTRING("whenMTStartListeners"),
	HX_CSTRING("whenSwipedListeners"),
	HX_CSTRING("whenPausedListeners"),
	HX_CSTRING("whenMouseDraggedListeners"),
	HX_CSTRING("whenMouseMovedListeners"),
	HX_CSTRING("whenMouseReleasedListeners"),
	HX_CSTRING("whenMousePressedListeners"),
	HX_CSTRING("whenDrawingListeners"),
	HX_CSTRING("whenUpdatedListeners"),
	HX_CSTRING("soundListeners"),
	HX_CSTRING("collisionListeners"),
	HX_CSTRING("typeGroupPositionListeners"),
	HX_CSTRING("whenTypeGroupDiesListeners"),
	HX_CSTRING("whenTypeGroupCreatedListeners"),
	HX_CSTRING("whenAnyKeyReleasedListeners"),
	HX_CSTRING("whenAnyKeyPressedListeners"),
	HX_CSTRING("hasKeyPressedListeners"),
	HX_CSTRING("whenKeyPressedListeners"),
	HX_CSTRING("disableCollisionList"),
	HX_CSTRING("collisionPairs"),
	HX_CSTRING("my"),
	HX_CSTRING("mx"),
	HX_CSTRING("acc"),
	HX_CSTRING("lastTime"),
	HX_CSTRING("behaviors"),
	HX_CSTRING("gameAttributes"),
	HX_CSTRING("actorsToCreate"),
	HX_CSTRING("atlasesToUnload"),
	HX_CSTRING("atlasesToLoad"),
	HX_CSTRING("cameraOldY"),
	HX_CSTRING("cameraOldX"),
	HX_CSTRING("cameraMoved"),
	HX_CSTRING("tileUpdated"),
	HX_CSTRING("layerOrders"),
	HX_CSTRING("layersToDraw"),
	HX_CSTRING("middleLayer"),
	HX_CSTRING("bottomLayer"),
	HX_CSTRING("topLayer"),
	HX_CSTRING("animatedTiles"),
	HX_CSTRING("dynamicTiles"),
	HX_CSTRING("scrollFactors"),
	HX_CSTRING("tileLayers"),
	HX_CSTRING("layers"),
	HX_CSTRING("actorsToCreateInNextScene"),
	HX_CSTRING("recycledActorsOfType"),
	HX_CSTRING("actorsOfType"),
	HX_CSTRING("hudActors"),
	HX_CSTRING("actorsPerLayer"),
	HX_CSTRING("nextID"),
	HX_CSTRING("allActors"),
	HX_CSTRING("reverseGroups"),
	HX_CSTRING("groups"),
	HX_CSTRING("g"),
	HX_CSTRING("debugLayer"),
	HX_CSTRING("transitionLayer"),
	HX_CSTRING("transitionBitmapLayer"),
	HX_CSTRING("hudLayer"),
	HX_CSTRING("master"),
	HX_CSTRING("root"),
	HX_CSTRING("defaultGroup"),
	HX_CSTRING("joints"),
	HX_CSTRING("terrainRegions"),
	HX_CSTRING("regions"),
	HX_CSTRING("tasks"),
	HX_CSTRING("channels"),
	HX_CSTRING("camera"),
	HX_CSTRING("scene"),
	HX_CSTRING("isShaking"),
	HX_CSTRING("shakeIntensity"),
	HX_CSTRING("shakeTimer"),
	HX_CSTRING("sceneToEnter"),
	HX_CSTRING("enter"),
	HX_CSTRING("leave"),
	HX_CSTRING("physicalHeight"),
	HX_CSTRING("physicalWidth"),
	HX_CSTRING("gravityY"),
	HX_CSTRING("gravityX"),
	HX_CSTRING("world"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Engine_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Engine_obj::BACKGROUND,"BACKGROUND");
	HX_MARK_MEMBER_NAME(Engine_obj::SCROLLING_BACKGROUND,"SCROLLING_BACKGROUND");
	HX_MARK_MEMBER_NAME(Engine_obj::REGULAR_LAYER,"REGULAR_LAYER");
	HX_MARK_MEMBER_NAME(Engine_obj::DOODAD,"DOODAD");
	HX_MARK_MEMBER_NAME(Engine_obj::INTERNAL_SHIFT,"INTERNAL_SHIFT");
	HX_MARK_MEMBER_NAME(Engine_obj::INTERNAL_CTRL,"INTERNAL_CTRL");
	HX_MARK_MEMBER_NAME(Engine_obj::NO_PHYSICS,"NO_PHYSICS");
	HX_MARK_MEMBER_NAME(Engine_obj::DEBUG_DRAW,"DEBUG_DRAW");
	HX_MARK_MEMBER_NAME(Engine_obj::IMG_BASE,"IMG_BASE");
	HX_MARK_MEMBER_NAME(Engine_obj::SCALE,"SCALE");
	HX_MARK_MEMBER_NAME(Engine_obj::isStandardIOS,"isStandardIOS");
	HX_MARK_MEMBER_NAME(Engine_obj::isExtendedIOS,"isExtendedIOS");
	HX_MARK_MEMBER_NAME(Engine_obj::isTabletIOS,"isTabletIOS");
	HX_MARK_MEMBER_NAME(Engine_obj::engine,"engine");
	HX_MARK_MEMBER_NAME(Engine_obj::landscape,"landscape");
	HX_MARK_MEMBER_NAME(Engine_obj::cameraX,"cameraX");
	HX_MARK_MEMBER_NAME(Engine_obj::cameraY,"cameraY");
	HX_MARK_MEMBER_NAME(Engine_obj::screenScaleX,"screenScaleX");
	HX_MARK_MEMBER_NAME(Engine_obj::screenScaleY,"screenScaleY");
	HX_MARK_MEMBER_NAME(Engine_obj::screenOffsetX,"screenOffsetX");
	HX_MARK_MEMBER_NAME(Engine_obj::screenOffsetY,"screenOffsetY");
	HX_MARK_MEMBER_NAME(Engine_obj::screenWidth,"screenWidth");
	HX_MARK_MEMBER_NAME(Engine_obj::screenHeight,"screenHeight");
	HX_MARK_MEMBER_NAME(Engine_obj::sceneWidth,"sceneWidth");
	HX_MARK_MEMBER_NAME(Engine_obj::sceneHeight,"sceneHeight");
	HX_MARK_MEMBER_NAME(Engine_obj::screenWidthHalf,"screenWidthHalf");
	HX_MARK_MEMBER_NAME(Engine_obj::screenHeightHalf,"screenHeightHalf");
	HX_MARK_MEMBER_NAME(Engine_obj::paused,"paused");
	HX_MARK_MEMBER_NAME(Engine_obj::started,"started");
	HX_MARK_MEMBER_NAME(Engine_obj::events,"events");
	HX_MARK_MEMBER_NAME(Engine_obj::ITERATIONS,"ITERATIONS");
	HX_MARK_MEMBER_NAME(Engine_obj::physicsScale,"physicsScale");
	HX_MARK_MEMBER_NAME(Engine_obj::paddingLeft,"paddingLeft");
	HX_MARK_MEMBER_NAME(Engine_obj::paddingRight,"paddingRight");
	HX_MARK_MEMBER_NAME(Engine_obj::paddingTop,"paddingTop");
	HX_MARK_MEMBER_NAME(Engine_obj::paddingBottom,"paddingBottom");
	HX_MARK_MEMBER_NAME(Engine_obj::mochiID,"mochiID");
	HX_MARK_MEMBER_NAME(Engine_obj::ngID,"ngID");
	HX_MARK_MEMBER_NAME(Engine_obj::ngKey,"ngKey");
	HX_MARK_MEMBER_NAME(Engine_obj::movieClip,"movieClip");
	HX_MARK_MEMBER_NAME(Engine_obj::stage,"stage");
	HX_MARK_MEMBER_NAME(Engine_obj::STEP_SIZE,"STEP_SIZE");
	HX_MARK_MEMBER_NAME(Engine_obj::MS_PER_SEC,"MS_PER_SEC");
	HX_MARK_MEMBER_NAME(Engine_obj::elapsedTime,"elapsedTime");
	HX_MARK_MEMBER_NAME(Engine_obj::timeScale,"timeScale");
	HX_MARK_MEMBER_NAME(Engine_obj::debug,"debug");
	HX_MARK_MEMBER_NAME(Engine_obj::debugDraw,"debugDraw");
	HX_MARK_MEMBER_NAME(Engine_obj::debugDrawer,"debugDrawer");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Engine_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Engine_obj::BACKGROUND,"BACKGROUND");
	HX_VISIT_MEMBER_NAME(Engine_obj::SCROLLING_BACKGROUND,"SCROLLING_BACKGROUND");
	HX_VISIT_MEMBER_NAME(Engine_obj::REGULAR_LAYER,"REGULAR_LAYER");
	HX_VISIT_MEMBER_NAME(Engine_obj::DOODAD,"DOODAD");
	HX_VISIT_MEMBER_NAME(Engine_obj::INTERNAL_SHIFT,"INTERNAL_SHIFT");
	HX_VISIT_MEMBER_NAME(Engine_obj::INTERNAL_CTRL,"INTERNAL_CTRL");
	HX_VISIT_MEMBER_NAME(Engine_obj::NO_PHYSICS,"NO_PHYSICS");
	HX_VISIT_MEMBER_NAME(Engine_obj::DEBUG_DRAW,"DEBUG_DRAW");
	HX_VISIT_MEMBER_NAME(Engine_obj::IMG_BASE,"IMG_BASE");
	HX_VISIT_MEMBER_NAME(Engine_obj::SCALE,"SCALE");
	HX_VISIT_MEMBER_NAME(Engine_obj::isStandardIOS,"isStandardIOS");
	HX_VISIT_MEMBER_NAME(Engine_obj::isExtendedIOS,"isExtendedIOS");
	HX_VISIT_MEMBER_NAME(Engine_obj::isTabletIOS,"isTabletIOS");
	HX_VISIT_MEMBER_NAME(Engine_obj::engine,"engine");
	HX_VISIT_MEMBER_NAME(Engine_obj::landscape,"landscape");
	HX_VISIT_MEMBER_NAME(Engine_obj::cameraX,"cameraX");
	HX_VISIT_MEMBER_NAME(Engine_obj::cameraY,"cameraY");
	HX_VISIT_MEMBER_NAME(Engine_obj::screenScaleX,"screenScaleX");
	HX_VISIT_MEMBER_NAME(Engine_obj::screenScaleY,"screenScaleY");
	HX_VISIT_MEMBER_NAME(Engine_obj::screenOffsetX,"screenOffsetX");
	HX_VISIT_MEMBER_NAME(Engine_obj::screenOffsetY,"screenOffsetY");
	HX_VISIT_MEMBER_NAME(Engine_obj::screenWidth,"screenWidth");
	HX_VISIT_MEMBER_NAME(Engine_obj::screenHeight,"screenHeight");
	HX_VISIT_MEMBER_NAME(Engine_obj::sceneWidth,"sceneWidth");
	HX_VISIT_MEMBER_NAME(Engine_obj::sceneHeight,"sceneHeight");
	HX_VISIT_MEMBER_NAME(Engine_obj::screenWidthHalf,"screenWidthHalf");
	HX_VISIT_MEMBER_NAME(Engine_obj::screenHeightHalf,"screenHeightHalf");
	HX_VISIT_MEMBER_NAME(Engine_obj::paused,"paused");
	HX_VISIT_MEMBER_NAME(Engine_obj::started,"started");
	HX_VISIT_MEMBER_NAME(Engine_obj::events,"events");
	HX_VISIT_MEMBER_NAME(Engine_obj::ITERATIONS,"ITERATIONS");
	HX_VISIT_MEMBER_NAME(Engine_obj::physicsScale,"physicsScale");
	HX_VISIT_MEMBER_NAME(Engine_obj::paddingLeft,"paddingLeft");
	HX_VISIT_MEMBER_NAME(Engine_obj::paddingRight,"paddingRight");
	HX_VISIT_MEMBER_NAME(Engine_obj::paddingTop,"paddingTop");
	HX_VISIT_MEMBER_NAME(Engine_obj::paddingBottom,"paddingBottom");
	HX_VISIT_MEMBER_NAME(Engine_obj::mochiID,"mochiID");
	HX_VISIT_MEMBER_NAME(Engine_obj::ngID,"ngID");
	HX_VISIT_MEMBER_NAME(Engine_obj::ngKey,"ngKey");
	HX_VISIT_MEMBER_NAME(Engine_obj::movieClip,"movieClip");
	HX_VISIT_MEMBER_NAME(Engine_obj::stage,"stage");
	HX_VISIT_MEMBER_NAME(Engine_obj::STEP_SIZE,"STEP_SIZE");
	HX_VISIT_MEMBER_NAME(Engine_obj::MS_PER_SEC,"MS_PER_SEC");
	HX_VISIT_MEMBER_NAME(Engine_obj::elapsedTime,"elapsedTime");
	HX_VISIT_MEMBER_NAME(Engine_obj::timeScale,"timeScale");
	HX_VISIT_MEMBER_NAME(Engine_obj::debug,"debug");
	HX_VISIT_MEMBER_NAME(Engine_obj::debugDraw,"debugDraw");
	HX_VISIT_MEMBER_NAME(Engine_obj::debugDrawer,"debugDrawer");
};

Class Engine_obj::__mClass;

void Engine_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.Engine"), hx::TCanCast< Engine_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Engine_obj::__boot()
{
	BACKGROUND= HX_CSTRING("b");
	SCROLLING_BACKGROUND= HX_CSTRING("s");
	REGULAR_LAYER= HX_CSTRING("l");
	DOODAD= HX_CSTRING("");
	INTERNAL_SHIFT= HX_CSTRING("iSHIFT");
	INTERNAL_CTRL= HX_CSTRING("iCTRL");
	NO_PHYSICS= false;
	DEBUG_DRAW= false;
	IMG_BASE= HX_CSTRING("");
	SCALE= (int)1;
	isStandardIOS= false;
	isExtendedIOS= false;
	isTabletIOS= false;
	engine= null();
	landscape= false;
	paused= false;
	started= false;
	events= ::com::stencyl::event::EventMaster_obj::__new();
	ITERATIONS= (int)3;
	physicsScale= 10.0;
	paddingLeft= (int)0;
	paddingRight= (int)0;
	paddingTop= (int)0;
	paddingBottom= (int)0;
	STEP_SIZE= (int)10;
	MS_PER_SEC= (int)1000;
	elapsedTime= (int)0;
	timeScale= (int)1;
	debug= false;
	debugDraw= false;
}

} // end namespace com
} // end namespace stencyl
