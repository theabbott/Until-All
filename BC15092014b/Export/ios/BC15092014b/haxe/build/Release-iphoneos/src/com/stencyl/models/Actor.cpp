#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_box2D_collision_B2AABB
#include <box2D/collision/B2AABB.h>
#endif
#ifndef INCLUDED_box2D_collision_B2WorldManifold
#include <box2D/collision/B2WorldManifold.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2CircleShape
#include <box2D/collision/shapes/B2CircleShape.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2MassData
#include <box2D/collision/shapes/B2MassData.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2PolygonShape
#include <box2D/collision/shapes/B2PolygonShape.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2Shape
#include <box2D/collision/shapes/B2Shape.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Mat22
#include <box2D/common/math/B2Mat22.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Transform
#include <box2D/common/math/B2Transform.h>
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
#ifndef INCLUDED_box2D_dynamics_B2Fixture
#include <box2D/dynamics/B2Fixture.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2FixtureDef
#include <box2D/dynamics/B2FixtureDef.h>
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
#ifndef INCLUDED_com_stencyl_behavior_Behavior
#include <com/stencyl/behavior/Behavior.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_BehaviorManager
#include <com/stencyl/behavior/BehaviorManager.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_AbstractAnimation
#include <com/stencyl/graphics/AbstractAnimation.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_BitmapAnimation
#include <com/stencyl/graphics/BitmapAnimation.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_G
#include <com/stencyl/graphics/G.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_SheetAnimation
#include <com/stencyl/graphics/SheetAnimation.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_fonts_Label
#include <com/stencyl/graphics/fonts/Label.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
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
#ifndef INCLUDED_com_stencyl_models_Terrain
#include <com/stencyl/models/Terrain.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_ActorType
#include <com/stencyl/models/actor/ActorType.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_AngleHolder
#include <com/stencyl/models/actor/AngleHolder.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Animation
#include <com/stencyl/models/actor/Animation.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Collision
#include <com/stencyl/models/actor/Collision.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_CollisionPoint
#include <com/stencyl/models/actor/CollisionPoint.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Group
#include <com/stencyl/models/actor/Group.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Sprite
#include <com/stencyl/models/actor/Sprite.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_CollisionInfo
#include <com/stencyl/models/collision/CollisionInfo.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_Hitbox
#include <com/stencyl/models/collision/Hitbox.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_Mask
#include <com/stencyl/models/collision/Mask.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_Masklist
#include <com/stencyl/models/collision/Masklist.h>
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
#ifndef INCLUDED_flash_Memory
#include <flash/Memory.h>
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
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
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
#ifndef INCLUDED_flash_geom_Transform
#include <flash/geom/Transform.h>
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
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_scripts_MyAssets
#include <scripts/MyAssets.h>
#endif
namespace com{
namespace stencyl{
namespace models{

Void Actor_obj::__construct(::com::stencyl::Engine engine,int ID,int groupID,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_layerID,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height,::com::stencyl::models::actor::Sprite sprite,::haxe::ds::StringMap behaviorValues,::com::stencyl::models::actor::ActorType actorType,::box2D::dynamics::B2BodyDef bodyDef,hx::Null< bool >  __o_isSensor,hx::Null< bool >  __o_isStationary,hx::Null< bool >  __o_isKinematic,hx::Null< bool >  __o_canRotate,Dynamic shape,hx::Null< int >  __o_typeID,hx::Null< bool >  __o_autoScale,hx::Null< bool >  __o_ignoreGravity,hx::Null< int >  __o_physicsMode)
{
HX_STACK_PUSH("Actor::new","com/stencyl/models/Actor.hx",93);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
int layerID = __o_layerID.Default(0);
Float width = __o_width.Default(32);
Float height = __o_height.Default(32);
bool isSensor = __o_isSensor.Default(false);
bool isStationary = __o_isStationary.Default(false);
bool isKinematic = __o_isKinematic.Default(false);
bool canRotate = __o_canRotate.Default(false);
int typeID = __o_typeID.Default(0);
bool autoScale = __o_autoScale.Default(true);
bool ignoreGravity = __o_ignoreGravity.Default(false);
int physicsMode = __o_physicsMode.Default(0);
{
	HX_STACK_LINE(225)
	this->maxMove = (int)99999;
	HX_STACK_LINE(224)
	this->minMove = (int)3;
	HX_STACK_LINE(223)
	this->moveYDistance = (int)0;
	HX_STACK_LINE(222)
	this->moveXDistance = (int)0;
	HX_STACK_LINE(221)
	this->moveMultiplier = 0.33;
	HX_STACK_LINE(220)
	this->drawY = (int)0;
	HX_STACK_LINE(219)
	this->drawX = (int)0;
	HX_STACK_LINE(218)
	this->snapOnSet = false;
	HX_STACK_LINE(217)
	this->firstMove = false;
	HX_STACK_LINE(216)
	this->smoothMove = false;
	HX_STACK_LINE(196)
	this->tint = false;
	HX_STACK_LINE(195)
	this->animsBackedUp = false;
	HX_STACK_LINE(320)
	super::__construct();
	HX_STACK_LINE(322)
	if (((bool(::com::stencyl::Engine_obj::NO_PHYSICS) && bool((physicsMode == (int)0))))){
		HX_STACK_LINE(324)
		physicsMode = (int)1;
		HX_STACK_LINE(325)
		this->physicsMode = (int)1;
	}
	HX_STACK_LINE(330)
	this->dummy = ::box2D::common::math::B2Vec2_obj::__new(null(),null());
	HX_STACK_LINE(331)
	this->zero = ::box2D::common::math::B2Vec2_obj::__new((int)0,(int)0);
	HX_STACK_LINE(333)
	this->_point = ::com::stencyl::utils::Utils_obj::point;
	HX_STACK_LINE(334)
	this->_moveX = this->_moveY = (int)0;
	HX_STACK_LINE(336)
	this->HITBOX = ::com::stencyl::models::collision::Mask_obj::__new();
	HX_STACK_LINE(337)
	this->set_shape(this->HITBOX);
	HX_STACK_LINE(339)
	if (((bool(::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::models::Region >())) && bool(::com::stencyl::Engine_obj::NO_PHYSICS)))){
		HX_STACK_LINE(341)
		shape = this->HITBOX = ::com::stencyl::models::collision::Hitbox_obj::__new(::Std_obj::_int(width),::Std_obj::_int(height),(int)0,(int)0,false);
		HX_STACK_LINE(342)
		this->set_shape(shape);
	}
	HX_STACK_LINE(346)
	this->set_x((int)0);
	HX_STACK_LINE(347)
	this->set_y((int)0);
	HX_STACK_LINE(348)
	this->set_rotation((int)0);
	HX_STACK_LINE(350)
	this->realX = (int)0;
	HX_STACK_LINE(351)
	this->realY = (int)0;
	HX_STACK_LINE(352)
	this->realAngle = (int)0;
	HX_STACK_LINE(353)
	this->realScaleX = (int)1;
	HX_STACK_LINE(354)
	this->realScaleY = (int)1;
	HX_STACK_LINE(356)
	this->originX = (int)0;
	HX_STACK_LINE(357)
	this->originY = (int)0;
	HX_STACK_LINE(358)
	this->collidable = true;
	HX_STACK_LINE(359)
	this->solid = !(isSensor);
	HX_STACK_LINE(360)
	this->updateMatrix = true;
	HX_STACK_LINE(362)
	if (((physicsMode > (int)0))){
		HX_STACK_LINE(364)
		this->set_x((x * ::com::stencyl::Engine_obj::physicsScale));
		HX_STACK_LINE(365)
		this->set_y((y * ::com::stencyl::Engine_obj::physicsScale));
	}
	else{
		HX_STACK_LINE(370)
		this->set_x(x);
		HX_STACK_LINE(371)
		this->set_y(y);
	}
	HX_STACK_LINE(374)
	this->realX = this->colX = x;
	HX_STACK_LINE(375)
	this->realY = this->colY = y;
	HX_STACK_LINE(377)
	this->activeAngleTweens = (int)0;
	HX_STACK_LINE(378)
	this->activePositionTweens = (int)0;
	HX_STACK_LINE(382)
	this->lastScale = ::flash::geom::Point_obj::__new((int)1,(int)1);
	HX_STACK_LINE(383)
	this->lastX = (int)-1000;
	HX_STACK_LINE(384)
	this->lastY = (int)-1000;
	HX_STACK_LINE(385)
	this->lastAngle = (int)0;
	HX_STACK_LINE(387)
	this->tweenLoc = ::flash::geom::Point_obj::__new((int)0,(int)0);
	HX_STACK_LINE(388)
	this->tweenAngle = ::com::stencyl::models::actor::AngleHolder_obj::__new();
	HX_STACK_LINE(390)
	this->transformPoint = ::flash::geom::Point_obj::__new((int)0,(int)0);
	HX_STACK_LINE(391)
	this->transformMatrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(392)
	this->drawMatrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(394)
	this->currOrigin = ::flash::geom::Point_obj::__new((int)0,(int)0);
	HX_STACK_LINE(395)
	this->currOffset = ::flash::geom::Point_obj::__new((int)0,(int)0);
	HX_STACK_LINE(396)
	this->registry = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(398)
	this->physicsMode = physicsMode;
	HX_STACK_LINE(399)
	this->autoScale = autoScale;
	HX_STACK_LINE(400)
	this->xSpeed = (int)0;
	HX_STACK_LINE(401)
	this->ySpeed = (int)0;
	HX_STACK_LINE(402)
	this->rSpeed = (int)0;
	HX_STACK_LINE(404)
	this->mouseState = (int)0;
	HX_STACK_LINE(406)
	this->lastScreenState = false;
	HX_STACK_LINE(407)
	this->lastSceneState = false;
	HX_STACK_LINE(408)
	this->isOnScreenCache = false;
	HX_STACK_LINE(410)
	this->isCamera = false;
	HX_STACK_LINE(411)
	this->isRegion = false;
	HX_STACK_LINE(412)
	this->isTerrainRegion = false;
	HX_STACK_LINE(413)
	this->drawActor = true;
	HX_STACK_LINE(415)
	this->killLeaveScreen = false;
	HX_STACK_LINE(416)
	this->alwaysSimulate = false;
	HX_STACK_LINE(417)
	this->isHUD = false;
	HX_STACK_LINE(418)
	this->continuousCollision = false;
	HX_STACK_LINE(420)
	this->fixedRotation = false;
	HX_STACK_LINE(421)
	this->ignoreGravity = ignoreGravity;
	HX_STACK_LINE(422)
	this->resetOrigin = true;
	HX_STACK_LINE(426)
	this->allListeners = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(427)
	this->allListenerReferences = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(429)
	this->whenCreatedListeners = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(430)
	this->whenUpdatedListeners = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(431)
	this->whenDrawingListeners = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(432)
	this->whenKilledListeners = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(433)
	this->mouseOverListeners = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(434)
	this->positionListeners = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(435)
	this->collisionListeners = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(439)
	this->recycled = false;
	HX_STACK_LINE(440)
	this->paused = false;
	HX_STACK_LINE(441)
	this->destroyed = false;
	HX_STACK_LINE(443)
	this->set_name(HX_CSTRING("Unknown"));
	HX_STACK_LINE(444)
	this->ID = ID;
	HX_STACK_LINE(445)
	this->groupID = groupID;
	HX_STACK_LINE(446)
	this->layerID = layerID;
	HX_STACK_LINE(447)
	this->typeID = typeID;
	HX_STACK_LINE(448)
	this->engine = engine;
	HX_STACK_LINE(450)
	this->groupsToCollideWith = ::com::stencyl::models::GameModel_obj::get()->groupsCollidesWith->get(groupID);
	HX_STACK_LINE(452)
	this->collisions = ::de::polygonal::ds::IntHashTable_obj::__new((int)16,null(),null(),null());
	HX_STACK_LINE(453)
	this->simpleCollisions = ::de::polygonal::ds::IntHashTable_obj::__new((int)16,null(),null(),null());
	HX_STACK_LINE(454)
	this->contacts = ::de::polygonal::ds::IntHashTable_obj::__new((int)16,null(),null(),null());
	HX_STACK_LINE(455)
	this->regionContacts = ::de::polygonal::ds::IntHashTable_obj::__new((int)16,null(),null(),null());
	HX_STACK_LINE(457)
	this->collisions->reuseIterator = true;
	HX_STACK_LINE(458)
	this->simpleCollisions->reuseIterator = true;
	HX_STACK_LINE(459)
	this->contacts->reuseIterator = true;
	HX_STACK_LINE(460)
	this->regionContacts->reuseIterator = true;
	HX_STACK_LINE(462)
	this->contactCount = (int)0;
	HX_STACK_LINE(463)
	this->collisionsCount = (int)0;
	HX_STACK_LINE(465)
	this->handlesCollisions = true;
	HX_STACK_LINE(469)
	this->behaviors = ::com::stencyl::behavior::BehaviorManager_obj::__new();
	HX_STACK_LINE(473)
	this->currAnimationName = HX_CSTRING("");
	HX_STACK_LINE(474)
	this->animationMap = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(475)
	this->shapeMap = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(476)
	this->originMap = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(478)
	this->sprite = sprite;
	HX_STACK_LINE(482)
	if (((sprite != null()))){
		HX_STACK_LINE(484)
		::com::stencyl::models::actor::Sprite s = hx::TCast< com::stencyl::models::actor::Sprite >::cast(::com::stencyl::Data_obj::get()->resources->get(actorType->spriteID));		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(486)
		if (((s != null()))){
			HX_STACK_LINE(488)
			this->type = hx::TCast< com::stencyl::models::actor::ActorType >::cast(::com::stencyl::Data_obj::get()->resources->get(typeID));
			HX_STACK_LINE(490)
			::String defaultAnim = HX_CSTRING("");		HX_STACK_VAR(defaultAnim,"defaultAnim");
			struct _Function_3_1{
				inline static Dynamic Block( ::com::stencyl::models::actor::Sprite &s){
					HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",492);
					{
						HX_STACK_LINE(492)
						Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(s->animations);		HX_STACK_VAR(_e,"_e");

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_e)
						Dynamic run(){
							HX_STACK_PUSH("*::_Function_4_1","com/stencyl/models/Actor.hx",492);
							{
								HX_STACK_LINE(492)
								return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
							}
							return null();
						}
						HX_END_LOCAL_FUNC0(return)

						HX_STACK_LINE(492)
						return  Dynamic(new _Function_4_1(_e));
					}
					return null();
				}
			};
			HX_STACK_LINE(492)
			for(::cpp::FastIterator_obj< ::com::stencyl::models::actor::Animation > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::actor::Animation >((_Function_3_1::Block(s))());  __it->hasNext(); ){
				::com::stencyl::models::actor::Animation a = __it->next();
				{
					HX_STACK_LINE(494)
					this->addAnim(a->animID,a->animName,a->imgData,a->frameCount,::Math_obj::floor((Float(a->imgWidth) / Float(a->framesAcross))),::Math_obj::floor((Float(a->imgHeight) / Float(a->framesDown))),a->framesAcross,a->framesDown,a->originX,a->originY,a->durations,a->looping,(  (((physicsMode > (int)0))) ? ::haxe::ds::IntMap(a->simpleShapes) : ::haxe::ds::IntMap(a->physicsShapes) ));
					HX_STACK_LINE(511)
					if (((a->animID == s->defaultAnimation))){
						HX_STACK_LINE(512)
						defaultAnim = a->animName;
					}
				}
;
			}
		}
	}
	HX_STACK_LINE(521)
	this->addAnim((int)-1,HX_CSTRING("recyclingDefault"),null(),(int)1,(int)1,(int)1,(int)1,(int)1,(int)1,(int)1,Array_obj< int >::__new().Add((int)1000),false,null());
	HX_STACK_LINE(523)
	if (((bool((bodyDef != null())) && bool((physicsMode == (int)0))))){
		HX_STACK_LINE(525)
		if ((bodyDef->bullet)){
			HX_STACK_LINE(526)
			::box2D::dynamics::B2World_obj::m_continuousPhysics = true;
		}
		HX_STACK_LINE(530)
		bodyDef->groupID = groupID;
		HX_STACK_LINE(532)
		this->initFromBody(bodyDef);
		HX_STACK_LINE(535)
		::box2D::collision::shapes::B2PolygonShape box = ::box2D::collision::shapes::B2PolygonShape_obj::__new();		HX_STACK_VAR(box,"box");
		HX_STACK_LINE(536)
		box->setAsBox((int)1,(int)1);
		HX_STACK_LINE(537)
		this->body->createFixture2(box,0.1);
		HX_STACK_LINE(539)
		this->md = ::box2D::collision::shapes::B2MassData_obj::__new();
		HX_STACK_LINE(540)
		this->md->mass = bodyDef->mass;
		HX_STACK_LINE(541)
		this->md->I = bodyDef->aMass;
		HX_STACK_LINE(542)
		this->md->center->x = (int)0;
		HX_STACK_LINE(543)
		this->md->center->y = (int)0;
		HX_STACK_LINE(545)
		this->body->setMassData(this->md);
		HX_STACK_LINE(546)
		this->bodyScale = ::flash::geom::Point_obj::__new((int)1,(int)1);
	}
	else{
		HX_STACK_LINE(551)
		if (((bool((shape == null())) || bool((::Type_obj::_typeof(shape) == ::ValueType_obj::TFloat))))){
			HX_STACK_LINE(552)
			shape = ::com::stencyl::models::Actor_obj::createBox(width,height);
		}
		HX_STACK_LINE(556)
		if (((bodyDef != null()))){
			HX_STACK_LINE(557)
			this->continuousCollision = bodyDef->bullet;
		}
		HX_STACK_LINE(561)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::models::Region >()))){
			HX_STACK_LINE(563)
			isSensor = true;
			HX_STACK_LINE(564)
			canRotate = false;
		}
		HX_STACK_LINE(567)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::com::stencyl::models::Terrain >()))){
			HX_STACK_LINE(568)
			canRotate = false;
		}
		HX_STACK_LINE(572)
		if (((bool((shape != null())) && bool(::Std_obj::is(shape,hx::ClassOf< ::com::stencyl::models::collision::Mask >()))))){
			HX_STACK_LINE(574)
			this->set_shape(shape);
			HX_STACK_LINE(575)
			this->isTerrain = true;
		}
		else{
			HX_STACK_LINE(578)
			if (((physicsMode == (int)0))){
				HX_STACK_LINE(579)
				this->initBody(groupID,isSensor,isStationary,isKinematic,canRotate,shape);
			}
		}
	}
	HX_STACK_LINE(584)
	this->switchToDefaultAnimation();
	HX_STACK_LINE(587)
	if (((sprite != null()))){
		HX_STACK_LINE(588)
		this->setLocation(::com::stencyl::Engine_obj::toPixelUnits(x),::com::stencyl::Engine_obj::toPixelUnits(y));
	}
	else{
		HX_STACK_LINE(593)
		if (((bool((shape != null())) && bool(::Std_obj::is(shape,hx::ClassOf< ::com::stencyl::models::collision::Mask >()))))){
			HX_STACK_LINE(597)
			::flash::display::Bitmap dummy = ::flash::display::Bitmap_obj::__new(::flash::display::BitmapData_obj::__new((int)1,(int)1,true,(int)0,null()),null(),null());		HX_STACK_VAR(dummy,"dummy");
			HX_STACK_LINE(598)
			dummy->set_x(width);
			HX_STACK_LINE(599)
			dummy->set_y(height);
			HX_STACK_LINE(600)
			this->addChild(dummy);
			HX_STACK_LINE(601)
			this->cacheWidth = this->set_width(width);
			HX_STACK_LINE(602)
			this->cacheHeight = this->set_height(height);
		}
		else{
			HX_STACK_LINE(605)
			if (((physicsMode == (int)0))){
				HX_STACK_LINE(606)
				this->body->setPosition(::box2D::common::math::B2Vec2_obj::__new(x,y));
			}
		}
	}
	HX_STACK_LINE(612)
	if (((bool((behaviorValues == null())) && bool((actorType != null()))))){
		HX_STACK_LINE(613)
		behaviorValues = actorType->behaviorValues;
	}
	HX_STACK_LINE(617)
	::com::stencyl::Engine_obj::initBehaviors(this->behaviors,behaviorValues,hx::ObjectPtr<OBJ_>(this),engine,false);
}
;
	return null();
}

Actor_obj::~Actor_obj() { }

Dynamic Actor_obj::__CreateEmpty() { return  new Actor_obj; }
hx::ObjectPtr< Actor_obj > Actor_obj::__new(::com::stencyl::Engine engine,int ID,int groupID,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_layerID,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height,::com::stencyl::models::actor::Sprite sprite,::haxe::ds::StringMap behaviorValues,::com::stencyl::models::actor::ActorType actorType,::box2D::dynamics::B2BodyDef bodyDef,hx::Null< bool >  __o_isSensor,hx::Null< bool >  __o_isStationary,hx::Null< bool >  __o_isKinematic,hx::Null< bool >  __o_canRotate,Dynamic shape,hx::Null< int >  __o_typeID,hx::Null< bool >  __o_autoScale,hx::Null< bool >  __o_ignoreGravity,hx::Null< int >  __o_physicsMode)
{  hx::ObjectPtr< Actor_obj > result = new Actor_obj();
	result->__construct(engine,ID,groupID,__o_x,__o_y,__o_layerID,__o_width,__o_height,sprite,behaviorValues,actorType,bodyDef,__o_isSensor,__o_isStationary,__o_isKinematic,__o_canRotate,shape,__o_typeID,__o_autoScale,__o_ignoreGravity,__o_physicsMode);
	return result;}

Dynamic Actor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Actor_obj > result = new Actor_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12],inArgs[13],inArgs[14],inArgs[15],inArgs[16],inArgs[17],inArgs[18],inArgs[19],inArgs[20]);
	return result;}

Void Actor_obj::handleCollisionsSimple( ::com::stencyl::models::Actor a,bool fromX,bool fromY,Float sign){
{
		HX_STACK_PUSH("Actor::handleCollisionsSimple","com/stencyl/models/Actor.hx",4483);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(fromX,"fromX");
		HX_STACK_ARG(fromY,"fromY");
		HX_STACK_ARG(sign,"sign");
		HX_STACK_LINE(4484)
		if ((::Std_obj::is(a,hx::ClassOf< ::com::stencyl::models::Region >()))){
			HX_STACK_LINE(4486)
			::com::stencyl::models::Region region = hx::TCast< com::stencyl::models::Region >::cast(a);		HX_STACK_VAR(region,"region");
			HX_STACK_LINE(4487)
			region->addActor(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(4488)
			return null();
		}
		struct _Function_1_1{
			inline static ::com::stencyl::models::collision::CollisionInfo Block( ::com::stencyl::models::Actor_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4491);
				{
					HX_STACK_LINE(4491)
					::de::polygonal::ds::IntHashTable _this = __this->simpleCollisions;		HX_STACK_VAR(_this,"_this");
					int key = (__this->collisionsCount - (int)1);		HX_STACK_VAR(key,"key");
					struct _Function_2_1{
						inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4491);
							{
								HX_STACK_LINE(4491)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(4491)
								int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
								struct _Function_3_1{
									inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
										HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4491);
										{
											HX_STACK_LINE(4491)
											int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(4491)
											i = _this1->_data->__get((i + (int)2));
											HX_STACK_LINE(4491)
											while(((i != (int)-1))){
												HX_STACK_LINE(4491)
												if (((_this1->_data->__get(i) == key))){
													HX_STACK_LINE(4491)
													v = _this1->_data->__get((i + (int)1));
													HX_STACK_LINE(4491)
													break;
												}
												HX_STACK_LINE(4491)
												i = _this1->_data->__get((i + (int)2));
											}
											HX_STACK_LINE(4491)
											return v;
										}
										return null();
									}
								};
								HX_STACK_LINE(4491)
								return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,key)) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(4491)
					int i = _Function_2_1::Block(_this,key);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(4491)
					return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::collision::CollisionInfo(null()) : ::com::stencyl::models::collision::CollisionInfo(_this->_vals->__GetItem(i)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(4491)
		::com::stencyl::models::collision::CollisionInfo info = _Function_1_1::Block(this);		HX_STACK_VAR(info,"info");
		HX_STACK_LINE(4493)
		::com::stencyl::utils::Utils_obj::collision->thisActor = ::com::stencyl::utils::Utils_obj::collision->actorA = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(4494)
		::com::stencyl::utils::Utils_obj::collision->otherActor = ::com::stencyl::utils::Utils_obj::collision->actorB = a;
		HX_STACK_LINE(4496)
		if (((a->physicsMode == (int)1))){
			HX_STACK_LINE(4497)
			a->clearCollisionList();
		}
		HX_STACK_LINE(4501)
		if ((fromX)){
			HX_STACK_LINE(4504)
			if (((a->ID == ::com::stencyl::utils::Utils_obj::INTEGER_MAX))){
				HX_STACK_LINE(4506)
				::com::stencyl::utils::Utils_obj::collision->thisFromLeft = (sign < (int)0);
				HX_STACK_LINE(4507)
				::com::stencyl::utils::Utils_obj::collision->thisFromRight = (sign > (int)0);
			}
			else{
				HX_STACK_LINE(4511)
				::com::stencyl::utils::Utils_obj::collision->thisFromLeft = (a->colX < this->colX);
				HX_STACK_LINE(4512)
				::com::stencyl::utils::Utils_obj::collision->thisFromRight = (a->colX > this->colX);
			}
			HX_STACK_LINE(4515)
			::com::stencyl::utils::Utils_obj::collision->otherFromLeft = !(::com::stencyl::utils::Utils_obj::collision->thisFromLeft);
			HX_STACK_LINE(4516)
			::com::stencyl::utils::Utils_obj::collision->otherFromRight = !(::com::stencyl::utils::Utils_obj::collision->thisFromRight);
			HX_STACK_LINE(4518)
			::com::stencyl::utils::Utils_obj::collision->thisFromTop = ::com::stencyl::utils::Utils_obj::collision->otherFromTop = false;
			HX_STACK_LINE(4519)
			::com::stencyl::utils::Utils_obj::collision->thisFromBottom = ::com::stencyl::utils::Utils_obj::collision->otherFromBottom = false;
		}
		HX_STACK_LINE(4522)
		if ((fromY)){
			HX_STACK_LINE(4525)
			if (((a->ID == ::com::stencyl::utils::Utils_obj::INTEGER_MAX))){
				HX_STACK_LINE(4527)
				::com::stencyl::utils::Utils_obj::collision->thisFromTop = (sign < (int)0);
				HX_STACK_LINE(4528)
				::com::stencyl::utils::Utils_obj::collision->thisFromBottom = (sign > (int)0);
			}
			else{
				HX_STACK_LINE(4532)
				::com::stencyl::utils::Utils_obj::collision->thisFromTop = (a->colY < this->colY);
				HX_STACK_LINE(4533)
				::com::stencyl::utils::Utils_obj::collision->thisFromBottom = (a->colY > this->colY);
			}
			HX_STACK_LINE(4536)
			::com::stencyl::utils::Utils_obj::collision->otherFromTop = !(::com::stencyl::utils::Utils_obj::collision->thisFromTop);
			HX_STACK_LINE(4537)
			::com::stencyl::utils::Utils_obj::collision->otherFromBottom = !(::com::stencyl::utils::Utils_obj::collision->thisFromBottom);
			HX_STACK_LINE(4539)
			::com::stencyl::utils::Utils_obj::collision->thisFromLeft = ::com::stencyl::utils::Utils_obj::collision->otherFromLeft = false;
			HX_STACK_LINE(4540)
			::com::stencyl::utils::Utils_obj::collision->thisFromRight = ::com::stencyl::utils::Utils_obj::collision->otherFromRight = false;
		}
		HX_STACK_LINE(4544)
		::com::stencyl::utils::Utils_obj::collision->thisCollidedWithActor = true;
		HX_STACK_LINE(4545)
		::com::stencyl::utils::Utils_obj::collision->thisCollidedWithTile = (a->ID == ::com::stencyl::utils::Utils_obj::INTEGER_MAX);
		HX_STACK_LINE(4547)
		if (((info != null()))){
			HX_STACK_LINE(4548)
			::com::stencyl::utils::Utils_obj::collision->thisCollidedWithSensor = !(info->maskB->solid);
		}
		else{
			HX_STACK_LINE(4553)
			::com::stencyl::utils::Utils_obj::collision->thisCollidedWithSensor = false;
		}
		HX_STACK_LINE(4557)
		::com::stencyl::utils::Utils_obj::collision->thisCollidedWithTerrain = false;
		HX_STACK_LINE(4559)
		::com::stencyl::utils::Utils_obj::collision->otherCollidedWithActor = true;
		HX_STACK_LINE(4560)
		::com::stencyl::utils::Utils_obj::collision->otherCollidedWithTile = (a->ID == ::com::stencyl::utils::Utils_obj::INTEGER_MAX);
		HX_STACK_LINE(4562)
		if (((info != null()))){
			HX_STACK_LINE(4563)
			::com::stencyl::utils::Utils_obj::collision->otherCollidedWithSensor = !(info->maskA->solid);
		}
		else{
			HX_STACK_LINE(4568)
			::com::stencyl::utils::Utils_obj::collision->otherCollidedWithSensor = false;
		}
		HX_STACK_LINE(4572)
		::com::stencyl::utils::Utils_obj::collision->otherCollidedWithTerrain = false;
		HX_STACK_LINE(4574)
		::com::stencyl::models::Actor_obj::lastCollided = a;
		HX_STACK_LINE(4575)
		{
			HX_STACK_LINE(4575)
			Dynamic listeners = this->collisionListeners;		HX_STACK_VAR(listeners,"listeners");
			Dynamic value = ::com::stencyl::utils::Utils_obj::collision;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(4575)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(4575)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(4575)
				try{
					HX_STACK_LINE(4575)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(4575)
					f(value,listeners).Cast< Void >();
					HX_STACK_LINE(4575)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(4575)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(4575)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(4575)
				(r)++;
			}
		}
		HX_STACK_LINE(4576)
		this->engine->handleCollision(hx::ObjectPtr<OBJ_>(this),::com::stencyl::utils::Utils_obj::collision);
		HX_STACK_LINE(4578)
		::com::stencyl::models::Actor_obj::lastCollided = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(4579)
		{
			HX_STACK_LINE(4579)
			Dynamic listeners = a->collisionListeners;		HX_STACK_VAR(listeners,"listeners");
			Dynamic value = ::com::stencyl::utils::Utils_obj::collision->switchData();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(4579)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(4579)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(4579)
				try{
					HX_STACK_LINE(4579)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(4579)
					f(value,listeners).Cast< Void >();
					HX_STACK_LINE(4579)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(4579)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(4579)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(4579)
				(r)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Actor_obj,handleCollisionsSimple,(void))

Void Actor_obj::moveCollideY( ::com::stencyl::models::Actor a,Float sign){
{
		HX_STACK_PUSH("Actor::moveCollideY","com/stencyl/models/Actor.hx",4478);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(sign,"sign");
		HX_STACK_LINE(4478)
		this->handleCollisionsSimple(a,false,true,sign);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,moveCollideY,(void))

Void Actor_obj::moveCollideX( ::com::stencyl::models::Actor a,Float sign){
{
		HX_STACK_PUSH("Actor::moveCollideX","com/stencyl/models/Actor.hx",4469);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(sign,"sign");
		HX_STACK_LINE(4469)
		this->handleCollisionsSimple(a,true,false,sign);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,moveCollideX,(void))

Void Actor_obj::moveActorTowards( Float x,Float y,Float amount,Dynamic solidType,hx::Null< bool >  __o_sweep){
bool sweep = __o_sweep.Default(false);
	HX_STACK_PUSH("Actor::moveActorTowards","com/stencyl/models/Actor.hx",4457);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(amount,"amount");
	HX_STACK_ARG(solidType,"solidType");
	HX_STACK_ARG(sweep,"sweep");
{
		HX_STACK_LINE(4458)
		this->_point->x = (x - this->realX);
		HX_STACK_LINE(4459)
		this->_point->y = (y - this->realY);
		HX_STACK_LINE(4460)
		this->_point->normalize(amount);
		HX_STACK_LINE(4461)
		this->moveActorBy(this->_point->x,this->_point->y,solidType,sweep);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Actor_obj,moveActorTowards,(void))

Void Actor_obj::moveActorTo( Float x,Float y,Dynamic solidType,hx::Null< bool >  __o_sweep){
bool sweep = __o_sweep.Default(false);
	HX_STACK_PUSH("Actor::moveActorTo","com/stencyl/models/Actor.hx",4444);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(solidType,"solidType");
	HX_STACK_ARG(sweep,"sweep");
{
		HX_STACK_LINE(4444)
		this->moveActorBy((x - this->realX),(y - this->realY),solidType,sweep);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Actor_obj,moveActorTo,(void))

Void Actor_obj::moveActorBy( Float x,Float y,Dynamic solidType,hx::Null< bool >  __o_sweep){
bool sweep = __o_sweep.Default(false);
	HX_STACK_PUSH("Actor::moveActorBy","com/stencyl/models/Actor.hx",4339);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(solidType,"solidType");
	HX_STACK_ARG(sweep,"sweep");
{
		HX_STACK_LINE(4340)
		if (((bool((x == (int)0)) && bool((y == (int)0))))){
			HX_STACK_LINE(4341)
			return null();
		}
		HX_STACK_LINE(4345)
		this->clearCollisionList();
		HX_STACK_LINE(4347)
		if (((solidType != null()))){
			HX_STACK_LINE(4349)
			Float sign;		HX_STACK_VAR(sign,"sign");
			Float signIncr;		HX_STACK_VAR(signIncr,"signIncr");
			::com::stencyl::models::Actor e;		HX_STACK_VAR(e,"e");
			bool checkMove;		HX_STACK_VAR(checkMove,"checkMove");
			HX_STACK_LINE(4351)
			if (((x != (int)0))){
				HX_STACK_LINE(4353)
				this->allowAdd = false;
				HX_STACK_LINE(4355)
				if (((bool(this->collidable) && bool(((bool(sweep) || bool((this->collideTypes(solidType,(this->realX + x),this->realY) != null())))))))){
					HX_STACK_LINE(4357)
					this->allowAdd = true;
					HX_STACK_LINE(4359)
					while(((x != (int)0))){
						HX_STACK_LINE(4361)
						signIncr = (  (((bool((x >= (int)1)) || bool((x <= (int)-1))))) ? Float((int)1) : Float(x) );
						HX_STACK_LINE(4362)
						sign = (  (((x > (int)0))) ? Float(signIncr) : Float(-(signIncr)) );
						HX_STACK_LINE(4363)
						checkMove = (::Std_obj::_int(this->realX) != ::Std_obj::_int((this->realX + sign)));
						HX_STACK_LINE(4366)
						if (((bool(checkMove) && bool(((e = this->collide(::com::stencyl::models::GameModel_obj::REGION_ID,(this->realX + sign),this->realY)) != null()))))){
							HX_STACK_LINE(4367)
							(hx::TCast< com::stencyl::models::Region >::cast(e))->addActor(hx::ObjectPtr<OBJ_>(this));
						}
						HX_STACK_LINE(4371)
						if (((bool(checkMove) && bool(((e = this->collideTypes(solidType,(this->realX + sign),this->realY)) != null()))))){
							HX_STACK_LINE(4373)
							this->moveCollideX(e,sign);
							struct _Function_6_1{
								inline static ::com::stencyl::models::collision::CollisionInfo Block( ::com::stencyl::models::Actor_obj *__this){
									HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4375);
									{
										HX_STACK_LINE(4375)
										::de::polygonal::ds::IntHashTable _this = __this->simpleCollisions;		HX_STACK_VAR(_this,"_this");
										int key = (__this->collisionsCount - (int)1);		HX_STACK_VAR(key,"key");
										struct _Function_7_1{
											inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4375);
												{
													HX_STACK_LINE(4375)
													::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(4375)
													int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
													struct _Function_8_1{
														inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
															HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4375);
															{
																HX_STACK_LINE(4375)
																int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
																HX_STACK_LINE(4375)
																i = _this1->_data->__get((i + (int)2));
																HX_STACK_LINE(4375)
																while(((i != (int)-1))){
																	HX_STACK_LINE(4375)
																	if (((_this1->_data->__get(i) == key))){
																		HX_STACK_LINE(4375)
																		v = _this1->_data->__get((i + (int)1));
																		HX_STACK_LINE(4375)
																		break;
																	}
																	HX_STACK_LINE(4375)
																	i = _this1->_data->__get((i + (int)2));
																}
																HX_STACK_LINE(4375)
																return v;
															}
															return null();
														}
													};
													HX_STACK_LINE(4375)
													return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_8_1::Block(i,_this1,key)) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(4375)
										int i = _Function_7_1::Block(_this,key);		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(4375)
										return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::collision::CollisionInfo(null()) : ::com::stencyl::models::collision::CollisionInfo(_this->_vals->__GetItem(i)) );
									}
									return null();
								}
							};
							struct _Function_6_2{
								inline static ::com::stencyl::models::collision::CollisionInfo Block( ::com::stencyl::models::Actor_obj *__this){
									HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4375);
									{
										HX_STACK_LINE(4375)
										::de::polygonal::ds::IntHashTable _this = __this->simpleCollisions;		HX_STACK_VAR(_this,"_this");
										int key = (__this->collisionsCount - (int)1);		HX_STACK_VAR(key,"key");
										struct _Function_7_1{
											inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4375);
												{
													HX_STACK_LINE(4375)
													::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(4375)
													int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
													struct _Function_8_1{
														inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
															HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4375);
															{
																HX_STACK_LINE(4375)
																int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
																HX_STACK_LINE(4375)
																i = _this1->_data->__get((i + (int)2));
																HX_STACK_LINE(4375)
																while(((i != (int)-1))){
																	HX_STACK_LINE(4375)
																	if (((_this1->_data->__get(i) == key))){
																		HX_STACK_LINE(4375)
																		v = _this1->_data->__get((i + (int)1));
																		HX_STACK_LINE(4375)
																		break;
																	}
																	HX_STACK_LINE(4375)
																	i = _this1->_data->__get((i + (int)2));
																}
																HX_STACK_LINE(4375)
																return v;
															}
															return null();
														}
													};
													HX_STACK_LINE(4375)
													return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_8_1::Block(i,_this1,key)) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(4375)
										int i = _Function_7_1::Block(_this,key);		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(4375)
										return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::collision::CollisionInfo(null()) : ::com::stencyl::models::collision::CollisionInfo(_this->_vals->__GetItem(i)) );
									}
									return null();
								}
							};
							HX_STACK_LINE(4375)
							if (((bool((_Function_6_1::Block(this) != null())) && bool((_Function_6_2::Block(this))->solidCollision)))){
								HX_STACK_LINE(4377)
								this->xSpeed = (int)0;
								HX_STACK_LINE(4378)
								break;
							}
						}
						HX_STACK_LINE(4382)
						hx::AddEq(this->realX,sign);
						HX_STACK_LINE(4383)
						hx::SubEq(x,sign);
					}
				}
				else{
					HX_STACK_LINE(4386)
					hx::AddEq(this->realX,x);
				}
			}
			HX_STACK_LINE(4388)
			if (((y != (int)0))){
				HX_STACK_LINE(4390)
				this->allowAdd = false;
				HX_STACK_LINE(4392)
				if (((bool(this->collidable) && bool(((bool(sweep) || bool((this->collideTypes(solidType,this->realX,(this->realY + y)) != null())))))))){
					HX_STACK_LINE(4394)
					this->allowAdd = true;
					HX_STACK_LINE(4396)
					while(((y != (int)0))){
						HX_STACK_LINE(4398)
						signIncr = (  (((bool((y >= (int)1)) || bool((y <= (int)-1))))) ? Float((int)1) : Float(y) );
						HX_STACK_LINE(4399)
						sign = (  (((y > (int)0))) ? Float(signIncr) : Float(-(signIncr)) );
						HX_STACK_LINE(4400)
						checkMove = (::Std_obj::_int(this->realY) != ::Std_obj::_int((this->realY + sign)));
						HX_STACK_LINE(4403)
						if (((bool(checkMove) && bool(((e = this->collide(::com::stencyl::models::GameModel_obj::REGION_ID,this->realX,(this->realY + sign))) != null()))))){
							HX_STACK_LINE(4404)
							(hx::TCast< com::stencyl::models::Region >::cast(e))->addActor(hx::ObjectPtr<OBJ_>(this));
						}
						HX_STACK_LINE(4408)
						if (((bool(checkMove) && bool(((e = this->collideTypes(solidType,this->realX,(this->realY + sign))) != null()))))){
							HX_STACK_LINE(4410)
							this->moveCollideY(e,sign);
							struct _Function_6_1{
								inline static ::com::stencyl::models::collision::CollisionInfo Block( ::com::stencyl::models::Actor_obj *__this){
									HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4412);
									{
										HX_STACK_LINE(4412)
										::de::polygonal::ds::IntHashTable _this = __this->simpleCollisions;		HX_STACK_VAR(_this,"_this");
										int key = (__this->collisionsCount - (int)1);		HX_STACK_VAR(key,"key");
										struct _Function_7_1{
											inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4412);
												{
													HX_STACK_LINE(4412)
													::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(4412)
													int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
													struct _Function_8_1{
														inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
															HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4412);
															{
																HX_STACK_LINE(4412)
																int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
																HX_STACK_LINE(4412)
																i = _this1->_data->__get((i + (int)2));
																HX_STACK_LINE(4412)
																while(((i != (int)-1))){
																	HX_STACK_LINE(4412)
																	if (((_this1->_data->__get(i) == key))){
																		HX_STACK_LINE(4412)
																		v = _this1->_data->__get((i + (int)1));
																		HX_STACK_LINE(4412)
																		break;
																	}
																	HX_STACK_LINE(4412)
																	i = _this1->_data->__get((i + (int)2));
																}
																HX_STACK_LINE(4412)
																return v;
															}
															return null();
														}
													};
													HX_STACK_LINE(4412)
													return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_8_1::Block(i,_this1,key)) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(4412)
										int i = _Function_7_1::Block(_this,key);		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(4412)
										return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::collision::CollisionInfo(null()) : ::com::stencyl::models::collision::CollisionInfo(_this->_vals->__GetItem(i)) );
									}
									return null();
								}
							};
							struct _Function_6_2{
								inline static ::com::stencyl::models::collision::CollisionInfo Block( ::com::stencyl::models::Actor_obj *__this){
									HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4412);
									{
										HX_STACK_LINE(4412)
										::de::polygonal::ds::IntHashTable _this = __this->simpleCollisions;		HX_STACK_VAR(_this,"_this");
										int key = (__this->collisionsCount - (int)1);		HX_STACK_VAR(key,"key");
										struct _Function_7_1{
											inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4412);
												{
													HX_STACK_LINE(4412)
													::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(4412)
													int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
													struct _Function_8_1{
														inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
															HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4412);
															{
																HX_STACK_LINE(4412)
																int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
																HX_STACK_LINE(4412)
																i = _this1->_data->__get((i + (int)2));
																HX_STACK_LINE(4412)
																while(((i != (int)-1))){
																	HX_STACK_LINE(4412)
																	if (((_this1->_data->__get(i) == key))){
																		HX_STACK_LINE(4412)
																		v = _this1->_data->__get((i + (int)1));
																		HX_STACK_LINE(4412)
																		break;
																	}
																	HX_STACK_LINE(4412)
																	i = _this1->_data->__get((i + (int)2));
																}
																HX_STACK_LINE(4412)
																return v;
															}
															return null();
														}
													};
													HX_STACK_LINE(4412)
													return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_8_1::Block(i,_this1,key)) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(4412)
										int i = _Function_7_1::Block(_this,key);		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(4412)
										return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::collision::CollisionInfo(null()) : ::com::stencyl::models::collision::CollisionInfo(_this->_vals->__GetItem(i)) );
									}
									return null();
								}
							};
							HX_STACK_LINE(4412)
							if (((bool((_Function_6_1::Block(this) != null())) && bool((_Function_6_2::Block(this))->solidCollision)))){
								HX_STACK_LINE(4414)
								this->ySpeed = (int)0;
								HX_STACK_LINE(4415)
								break;
							}
						}
						HX_STACK_LINE(4419)
						hx::AddEq(this->realY,sign);
						HX_STACK_LINE(4420)
						hx::SubEq(y,sign);
					}
				}
				else{
					HX_STACK_LINE(4424)
					hx::AddEq(this->realY,y);
				}
			}
		}
		else{
			HX_STACK_LINE(4429)
			hx::AddEq(this->realX,x);
			HX_STACK_LINE(4430)
			hx::AddEq(this->realY,y);
		}
		HX_STACK_LINE(4433)
		this->resetReal(this->realX,this->realY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Actor_obj,moveActorBy,(void))

Void Actor_obj::resetReal( Float x,Float y){
{
		HX_STACK_PUSH("Actor::resetReal","com/stencyl/models/Actor.hx",4332);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(4333)
		this->realX = x;
		HX_STACK_LINE(4333)
		this->realY = y;
		HX_STACK_LINE(4334)
		this->colX = ((this->realX - ::Math_obj::floor((Float(this->cacheWidth) / Float((int)2)))) - this->currOffset->x);
		HX_STACK_LINE(4335)
		this->colY = ((this->realY - ::Math_obj::floor((Float(this->cacheHeight) / Float((int)2)))) - this->currOffset->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,resetReal,(void))

bool Actor_obj::alreadyCollided( ::com::stencyl::models::collision::Mask maskA,::com::stencyl::models::collision::Mask maskB){
	HX_STACK_PUSH("Actor::alreadyCollided","com/stencyl/models/Actor.hx",4319);
	HX_STACK_THIS(this);
	HX_STACK_ARG(maskA,"maskA");
	HX_STACK_ARG(maskB,"maskB");
	HX_STACK_LINE(4320)
	for(::cpp::FastIterator_obj< ::com::stencyl::models::collision::CollisionInfo > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::collision::CollisionInfo >(this->simpleCollisions->iterator());  __it->hasNext(); ){
		::com::stencyl::models::collision::CollisionInfo info = __it->next();
		if (((bool((info->maskA == maskA)) && bool((info->maskB == maskB))))){
			HX_STACK_LINE(4323)
			return true;
		}
;
	}
	HX_STACK_LINE(4328)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,alreadyCollided,return )

Void Actor_obj::addCollision( ::com::stencyl::models::collision::CollisionInfo info){
{
		HX_STACK_PUSH("Actor::addCollision","com/stencyl/models/Actor.hx",4311);
		HX_STACK_THIS(this);
		HX_STACK_ARG(info,"info");
		HX_STACK_LINE(4312)
		if ((!(this->allowAdd))){
			HX_STACK_LINE(4312)
			return null();
		}
		HX_STACK_LINE(4314)
		{
			HX_STACK_LINE(4314)
			::de::polygonal::ds::IntHashTable _this = this->simpleCollisions;		HX_STACK_VAR(_this,"_this");
			int key = this->collisionsCount;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(4314)
			_this->_key0 = (int)-2147483647;
			HX_STACK_LINE(4314)
			if (((_this->_h->_size == _this->_h->_capacity))){
				HX_STACK_LINE(4314)
				int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
				HX_STACK_LINE(4314)
				int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
				struct _Function_3_1{
					inline static Array< int > Block( int &newSize){
						HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4314);
						{
							HX_STACK_LINE(4314)
							Array< int > a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(4314)
							a = Array_obj< int >::__new();
							HX_STACK_LINE(4314)
							a[(newSize - (int)1)] = null();
							HX_STACK_LINE(4314)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(4314)
				Array< int > tmp = _Function_3_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(4314)
				{
					HX_STACK_LINE(4314)
					Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
					int max = oldSize;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(4314)
					if (((max == (int)-1))){
						HX_STACK_LINE(4314)
						max = src->length;
					}
					HX_STACK_LINE(4314)
					int j = (int)0;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(4314)
					{
						HX_STACK_LINE(4314)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(4314)
						while(((_g < max))){
							HX_STACK_LINE(4314)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(4314)
							tmp[(j)++] = src->__get(i);
						}
					}
					HX_STACK_LINE(4314)
					tmp;
				}
				HX_STACK_LINE(4314)
				_this->_next = tmp;
				struct _Function_3_2{
					inline static Array< int > Block( int &newSize){
						HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4314);
						{
							HX_STACK_LINE(4314)
							Array< int > a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(4314)
							a = Array_obj< int >::__new();
							HX_STACK_LINE(4314)
							a[(newSize - (int)1)] = null();
							HX_STACK_LINE(4314)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(4314)
				Array< int > tmp1 = _Function_3_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(4314)
				{
					HX_STACK_LINE(4314)
					Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
					int max = oldSize;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(4314)
					if (((max == (int)-1))){
						HX_STACK_LINE(4314)
						max = src->length;
					}
					HX_STACK_LINE(4314)
					int j = (int)0;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(4314)
					{
						HX_STACK_LINE(4314)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(4314)
						while(((_g < max))){
							HX_STACK_LINE(4314)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(4314)
							tmp1[(j)++] = src->__get(i);
						}
					}
					HX_STACK_LINE(4314)
					tmp1;
				}
				HX_STACK_LINE(4314)
				_this->_keys = tmp1;
				HX_STACK_LINE(4314)
				{
					HX_STACK_LINE(4314)
					int _g = oldSize;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(4314)
					while(((_g < newSize))){
						HX_STACK_LINE(4314)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(4314)
						_this->_keys[i] = (int)-2147483647;
					}
				}
				HX_STACK_LINE(4314)
				{
					HX_STACK_LINE(4314)
					int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
					int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(4314)
					while(((_g1 < _g))){
						HX_STACK_LINE(4314)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(4314)
						_this->_next[i] = (i + (int)1);
					}
				}
				HX_STACK_LINE(4314)
				_this->_next[(newSize - (int)1)] = (int)-1;
				HX_STACK_LINE(4314)
				_this->_free = oldSize;
				struct _Function_3_3{
					inline static Array< ::Dynamic > Block( int &newSize){
						HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4314);
						{
							HX_STACK_LINE(4314)
							Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(4314)
							a = Array_obj< ::Dynamic >::__new();
							HX_STACK_LINE(4314)
							a[(newSize - (int)1)] = null();
							HX_STACK_LINE(4314)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(4314)
				Array< ::Dynamic > tmp2 = _Function_3_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(4314)
				{
					HX_STACK_LINE(4314)
					Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
					int max = oldSize;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(4314)
					if (((max == (int)-1))){
						HX_STACK_LINE(4314)
						max = src->length;
					}
					HX_STACK_LINE(4314)
					int j = (int)0;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(4314)
					{
						HX_STACK_LINE(4314)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(4314)
						while(((_g < max))){
							HX_STACK_LINE(4314)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(4314)
							tmp2[(j)++] = src->__get(i).StaticCast< ::com::stencyl::models::collision::CollisionInfo >();
						}
					}
					HX_STACK_LINE(4314)
					tmp2;
				}
				HX_STACK_LINE(4314)
				_this->_vals = tmp2;
				HX_STACK_LINE(4314)
				(_this->_sizeLevel)++;
			}
			HX_STACK_LINE(4314)
			{
				HX_STACK_LINE(4314)
				::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(4314)
				if (((_this1->_size == _this1->_capacity))){
					HX_STACK_LINE(4314)
					if ((_this1->_isResizable)){
						HX_STACK_LINE(4314)
						_this1->_expand();
					}
				}
				HX_STACK_LINE(4314)
				int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(4314)
				_this1->_free = _this1->_next->__get(_this1->_free);
				HX_STACK_LINE(4314)
				_this1->_data[i] = key;
				HX_STACK_LINE(4314)
				_this1->_data[(i + (int)1)] = _this->_free;
				HX_STACK_LINE(4314)
				int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(4314)
				int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(4314)
				if (((j == (int)-1))){
					HX_STACK_LINE(4314)
					_this1->_hash[b] = i;
					HX_STACK_LINE(4314)
					(_this1->_size)++;
					HX_STACK_LINE(4314)
					true;
				}
				else{
					HX_STACK_LINE(4314)
					bool first = (_this1->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
					HX_STACK_LINE(4314)
					int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(4314)
					while(((t != (int)-1))){
						HX_STACK_LINE(4314)
						if (((_this1->_data->__get(t) == key))){
							HX_STACK_LINE(4314)
							first = false;
						}
						HX_STACK_LINE(4314)
						j = t;
						HX_STACK_LINE(4314)
						t = _this1->_data->__get((t + (int)2));
					}
					HX_STACK_LINE(4314)
					_this1->_data[(j + (int)2)] = i;
					HX_STACK_LINE(4314)
					(_this1->_size)++;
					HX_STACK_LINE(4314)
					first;
				}
			}
			HX_STACK_LINE(4314)
			hx::IndexRef((_this->_vals).mPtr,_this->_free) = info;
			HX_STACK_LINE(4314)
			_this->_keys[_this->_free] = key;
			HX_STACK_LINE(4314)
			_this->_free = _this->_next->__get(_this->_free);
			HX_STACK_LINE(4314)
			true;
		}
		HX_STACK_LINE(4315)
		(this->collisionsCount)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,addCollision,(void))

Void Actor_obj::clearCollisionList( ){
{
		HX_STACK_PUSH("Actor::clearCollisionList","com/stencyl/models/Actor.hx",4298);
		HX_STACK_THIS(this);
		HX_STACK_LINE(4299)
		if (((this->collisionsCount > (int)0))){
			HX_STACK_LINE(4300)
			for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->simpleCollisions->keys());  __it->hasNext(); ){
				int k = __it->next();
				{
					HX_STACK_LINE(4303)
					::de::polygonal::ds::IntHashTable _this = this->simpleCollisions;		HX_STACK_VAR(_this,"_this");
					struct _Function_3_1{
						inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &k){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4303);
							{
								HX_STACK_LINE(4303)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(4303)
								int i = _this1->_hash->__get((int((k * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
								struct _Function_4_1{
									inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &k){
										HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4303);
										{
											HX_STACK_LINE(4303)
											int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(4303)
											i = _this1->_data->__get((i + (int)2));
											HX_STACK_LINE(4303)
											while(((i != (int)-1))){
												HX_STACK_LINE(4303)
												if (((_this1->_data->__get(i) == k))){
													HX_STACK_LINE(4303)
													v = _this1->_data->__get((i + (int)1));
													HX_STACK_LINE(4303)
													break;
												}
												HX_STACK_LINE(4303)
												i = _this1->_data->__get((i + (int)2));
											}
											HX_STACK_LINE(4303)
											return v;
										}
										return null();
									}
								};
								HX_STACK_LINE(4303)
								return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == k))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_4_1::Block(i,_this1,k)) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(4303)
					int i = _Function_3_1::Block(_this,k);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(4303)
					if (((i == (int)-2147483647))){
						HX_STACK_LINE(4303)
						false;
					}
					else{
						HX_STACK_LINE(4303)
						_this->_key0 = (int)-2147483647;
						HX_STACK_LINE(4303)
						hx::IndexRef((_this->_vals).mPtr,i) = null();
						HX_STACK_LINE(4303)
						_this->_keys[i] = (int)-2147483647;
						HX_STACK_LINE(4303)
						_this->_next[i] = _this->_free;
						HX_STACK_LINE(4303)
						_this->_free = i;
						HX_STACK_LINE(4303)
						bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
						HX_STACK_LINE(4303)
						if (((_this->_sizeLevel > (int)0))){
							HX_STACK_LINE(4303)
							if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
								HX_STACK_LINE(4303)
								if ((_this->_isResizable)){
									HX_STACK_LINE(4303)
									shrink = true;
								}
							}
						}
						HX_STACK_LINE(4303)
						{
							HX_STACK_LINE(4303)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(4303)
							int b = (int((k * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(4303)
							int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(4303)
							if (((i1 == (int)-1))){
								HX_STACK_LINE(4303)
								false;
							}
							else{
								HX_STACK_LINE(4303)
								if (((k == _this1->_data->__get(i1)))){
									HX_STACK_LINE(4303)
									if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
										HX_STACK_LINE(4303)
										_this1->_hash[b] = (int)-1;
									}
									else{
										HX_STACK_LINE(4303)
										_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
									}
									HX_STACK_LINE(4303)
									int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(4303)
									_this1->_next[j] = _this1->_free;
									HX_STACK_LINE(4303)
									_this1->_free = j;
									HX_STACK_LINE(4303)
									_this1->_data[(i1 + (int)1)] = (int)-2147483647;
									HX_STACK_LINE(4303)
									_this1->_data[(i1 + (int)2)] = (int)-1;
									HX_STACK_LINE(4303)
									(_this1->_size)--;
									HX_STACK_LINE(4303)
									if (((_this1->_sizeLevel > (int)0))){
										HX_STACK_LINE(4303)
										if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
											HX_STACK_LINE(4303)
											if ((_this1->_isResizable)){
												HX_STACK_LINE(4303)
												_this1->_shrink();
											}
										}
									}
									HX_STACK_LINE(4303)
									true;
								}
								else{
									HX_STACK_LINE(4303)
									bool exists = false;		HX_STACK_VAR(exists,"exists");
									HX_STACK_LINE(4303)
									int i0 = i1;		HX_STACK_VAR(i0,"i0");
									HX_STACK_LINE(4303)
									i1 = _this1->_data->__get((i1 + (int)2));
									HX_STACK_LINE(4303)
									while(((i1 != (int)-1))){
										HX_STACK_LINE(4303)
										if (((_this1->_data->__get(i1) == k))){
											HX_STACK_LINE(4303)
											exists = true;
											HX_STACK_LINE(4303)
											break;
										}
										HX_STACK_LINE(4303)
										i1 = _this1->_data->__get(((i0 = i1) + (int)2));
									}
									HX_STACK_LINE(4303)
									if ((exists)){
										HX_STACK_LINE(4303)
										_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
										HX_STACK_LINE(4303)
										int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(4303)
										_this1->_next[j] = _this1->_free;
										HX_STACK_LINE(4303)
										_this1->_free = j;
										HX_STACK_LINE(4303)
										_this1->_data[(i1 + (int)1)] = (int)-2147483647;
										HX_STACK_LINE(4303)
										_this1->_data[(i1 + (int)2)] = (int)-1;
										HX_STACK_LINE(4303)
										--(_this1->_size);
										HX_STACK_LINE(4303)
										if (((_this1->_sizeLevel > (int)0))){
											HX_STACK_LINE(4303)
											if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
												HX_STACK_LINE(4303)
												if ((_this1->_isResizable)){
													HX_STACK_LINE(4303)
													_this1->_shrink();
												}
											}
										}
										HX_STACK_LINE(4303)
										true;
									}
									else{
										HX_STACK_LINE(4303)
										false;
									}
								}
							}
						}
						HX_STACK_LINE(4303)
						if ((shrink)){
							HX_STACK_LINE(4303)
							(_this->_sizeLevel)--;
							HX_STACK_LINE(4303)
							int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
							HX_STACK_LINE(4303)
							int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
							struct _Function_5_1{
								inline static Array< int > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4303);
									{
										HX_STACK_LINE(4303)
										Array< int > a;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(4303)
										a = Array_obj< int >::__new();
										HX_STACK_LINE(4303)
										a[(newSize - (int)1)] = null();
										HX_STACK_LINE(4303)
										return a;
									}
									return null();
								}
							};
							HX_STACK_LINE(4303)
							_this->_next = _Function_5_1::Block(newSize);
							HX_STACK_LINE(4303)
							{
								HX_STACK_LINE(4303)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(4303)
								while(((_g1 < _g))){
									HX_STACK_LINE(4303)
									int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
									HX_STACK_LINE(4303)
									_this->_next[i1] = (i1 + (int)1);
								}
							}
							HX_STACK_LINE(4303)
							_this->_next[(newSize - (int)1)] = (int)-1;
							HX_STACK_LINE(4303)
							_this->_free = (int)0;
							struct _Function_5_2{
								inline static Array< int > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4303);
									{
										HX_STACK_LINE(4303)
										Array< int > a;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(4303)
										a = Array_obj< int >::__new();
										HX_STACK_LINE(4303)
										a[(newSize - (int)1)] = null();
										HX_STACK_LINE(4303)
										return a;
									}
									return null();
								}
							};
							HX_STACK_LINE(4303)
							Array< int > tmpKeys = _Function_5_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
							HX_STACK_LINE(4303)
							{
								HX_STACK_LINE(4303)
								int k1 = newSize;		HX_STACK_VAR(k1,"k1");
								HX_STACK_LINE(4303)
								if (((k1 == (int)-1))){
									HX_STACK_LINE(4303)
									k1 = tmpKeys->length;
								}
								HX_STACK_LINE(4303)
								{
									HX_STACK_LINE(4303)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(4303)
									while(((_g < k1))){
										HX_STACK_LINE(4303)
										int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(4303)
										tmpKeys[i1] = (int)-2147483647;
									}
								}
							}
							struct _Function_5_3{
								inline static Array< ::Dynamic > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",4303);
									{
										HX_STACK_LINE(4303)
										Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(4303)
										a = Array_obj< ::Dynamic >::__new();
										HX_STACK_LINE(4303)
										a[(newSize - (int)1)] = null();
										HX_STACK_LINE(4303)
										return a;
									}
									return null();
								}
							};
							HX_STACK_LINE(4303)
							Array< ::Dynamic > tmpVals = _Function_5_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
							HX_STACK_LINE(4303)
							for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
								int i1 = __it->next();
								{
									HX_STACK_LINE(4303)
									tmpKeys[_this->_free] = _this->_keys->__get(i1);
									HX_STACK_LINE(4303)
									tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
									HX_STACK_LINE(4303)
									_this->_free = _this->_next->__get(_this->_free);
								}
;
							}
							HX_STACK_LINE(4303)
							_this->_keys = tmpKeys;
							HX_STACK_LINE(4303)
							_this->_vals = tmpVals;
							HX_STACK_LINE(4303)
							{
								HX_STACK_LINE(4303)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(4303)
								while(((_g1 < _g))){
									HX_STACK_LINE(4303)
									int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
									HX_STACK_LINE(4303)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									int key = _this->_keys->__get(i1);		HX_STACK_VAR(key,"key");
									HX_STACK_LINE(4303)
									int i2 = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
									HX_STACK_LINE(4303)
									if (((i2 == (int)-1))){
										HX_STACK_LINE(4303)
										false;
									}
									else{
										HX_STACK_LINE(4303)
										if (((_this1->_data->__get(i2) == key))){
											HX_STACK_LINE(4303)
											_this1->_data[(i2 + (int)1)] = i1;
											HX_STACK_LINE(4303)
											true;
										}
										else{
											HX_STACK_LINE(4303)
											i2 = _this1->_data->__get((i2 + (int)2));
											HX_STACK_LINE(4303)
											while(((i2 != (int)-1))){
												HX_STACK_LINE(4303)
												if (((_this1->_data->__get(i2) == key))){
													HX_STACK_LINE(4303)
													_this1->_data[(i2 + (int)1)] = i1;
													HX_STACK_LINE(4303)
													break;
												}
												HX_STACK_LINE(4303)
												i2 = _this1->_data->__get((i2 + (int)2));
											}
											HX_STACK_LINE(4303)
											(i2 != (int)-1);
										}
									}
								}
							}
						}
						HX_STACK_LINE(4303)
						true;
					}
				}
;
			}
		}
		HX_STACK_LINE(4307)
		this->collisionsCount = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,clearCollisionList,(void))

Void Actor_obj::collideTypesInto( Array< int > types,Float x,Float y,Array< ::Dynamic > array){
{
		HX_STACK_PUSH("Actor::collideTypesInto","com/stencyl/models/Actor.hx",4292);
		HX_STACK_THIS(this);
		HX_STACK_ARG(types,"types");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(array,"array");
		HX_STACK_LINE(4293)
		::String type;		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(4294)
		{
			HX_STACK_LINE(4294)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(4294)
			while(((_g < types->length))){
				HX_STACK_LINE(4294)
				int type1 = types->__get(_g);		HX_STACK_VAR(type1,"type1");
				HX_STACK_LINE(4294)
				++(_g);
				HX_STACK_LINE(4294)
				this->collideInto(type1,x,y,array);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Actor_obj,collideTypesInto,(void))

Void Actor_obj::collideInto( int groupID,Float x,Float y,Array< ::Dynamic > array){
{
		HX_STACK_PUSH("Actor::collideInto","com/stencyl/models/Actor.hx",4234);
		HX_STACK_THIS(this);
		HX_STACK_ARG(groupID,"groupID");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(array,"array");
		HX_STACK_LINE(4236)
		::com::stencyl::models::actor::Group actorList = this->engine->getGroup(groupID,null());		HX_STACK_VAR(actorList,"actorList");
		HX_STACK_LINE(4238)
		this->_x = this->realX;
		HX_STACK_LINE(4238)
		this->_y = this->realY;
		HX_STACK_LINE(4239)
		this->resetReal(x,y);
		HX_STACK_LINE(4240)
		int n = array->length;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(4242)
		if (((this->_mask == null()))){
			HX_STACK_LINE(4244)
			{
				HX_STACK_LINE(4244)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::Dynamic > _g1 = actorList->list;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(4244)
				while(((_g < _g1->length))){
					HX_STACK_LINE(4244)
					::com::stencyl::models::Actor actor = _g1->__get(_g).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actor,"actor");
					HX_STACK_LINE(4244)
					++(_g);
					HX_STACK_LINE(4246)
					::com::stencyl::models::Actor e = actor;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(4248)
					if ((e->recycled)){
						HX_STACK_LINE(4249)
						continue;
					}
					HX_STACK_LINE(4253)
					if (((bool((bool((bool((bool((bool(((this->colX + this->cacheWidth) >= e->colX)) && bool(((this->colY + this->cacheHeight) >= e->colY)))) && bool((this->colX <= (e->colX + e->cacheWidth))))) && bool((this->colY <= (e->colY + e->cacheHeight))))) && bool(e->collidable))) && bool((e != hx::ObjectPtr<OBJ_>(this)))))){
						HX_STACK_LINE(4258)
						if (((bool((e->_mask == null())) || bool(e->_mask->collide(this->HITBOX))))){
							HX_STACK_LINE(4259)
							array[(n)++] = e;
						}
					}
				}
			}
			HX_STACK_LINE(4262)
			this->resetReal(this->_x,this->_y);
			HX_STACK_LINE(4263)
			return null();
		}
		HX_STACK_LINE(4266)
		{
			HX_STACK_LINE(4266)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = actorList->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(4266)
			while(((_g < _g1->length))){
				HX_STACK_LINE(4266)
				::com::stencyl::models::Actor actor = _g1->__get(_g).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actor,"actor");
				HX_STACK_LINE(4266)
				++(_g);
				HX_STACK_LINE(4268)
				::com::stencyl::models::Actor e = actor;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(4270)
				if (((bool((bool((bool((bool((bool(((this->colX + this->cacheWidth) >= e->colX)) && bool(((this->colY + this->cacheHeight) >= e->colY)))) && bool((this->colX <= (e->colX + e->cacheWidth))))) && bool((this->colY <= (e->colY + e->cacheHeight))))) && bool(e->collidable))) && bool((e != hx::ObjectPtr<OBJ_>(this)))))){
					HX_STACK_LINE(4275)
					if ((this->_mask->collide((  (((e->_mask != null()))) ? ::com::stencyl::models::collision::Mask(e->_mask) : ::com::stencyl::models::collision::Mask(e->HITBOX) )))){
						HX_STACK_LINE(4276)
						array[(n)++] = e;
					}
				}
			}
		}
		HX_STACK_LINE(4279)
		this->resetReal(this->_x,this->_y);
		HX_STACK_LINE(4280)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Actor_obj,collideInto,(void))

::com::stencyl::models::Actor Actor_obj::collideWith( ::com::stencyl::models::Actor e,Float x,Float y){
	HX_STACK_PUSH("Actor::collideWith","com/stencyl/models/Actor.hx",4195);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(4196)
	this->_x = this->realX;
	HX_STACK_LINE(4196)
	this->_y = this->realY;
	HX_STACK_LINE(4197)
	this->resetReal(x,y);
	HX_STACK_LINE(4199)
	if (((bool((bool((bool((bool((bool(((this->colX + this->cacheWidth) >= e->colX)) && bool(((this->colY + this->cacheHeight) >= e->colY)))) && bool((this->colX <= (e->colX + e->cacheWidth))))) && bool((this->colY <= (e->colY + e->cacheHeight))))) && bool(this->collidable))) && bool(e->collidable)))){
		HX_STACK_LINE(4205)
		if (((this->_mask == null()))){
			HX_STACK_LINE(4207)
			if (((bool((e->_mask == null())) || bool(e->_mask->collide(this->HITBOX))))){
				HX_STACK_LINE(4209)
				this->resetReal(this->_x,this->_y);
				HX_STACK_LINE(4210)
				return e;
			}
			HX_STACK_LINE(4212)
			this->resetReal(this->_x,this->_y);
			HX_STACK_LINE(4213)
			return null();
		}
		HX_STACK_LINE(4215)
		if ((this->_mask->collide((  (((e->_mask != null()))) ? ::com::stencyl::models::collision::Mask(e->_mask) : ::com::stencyl::models::collision::Mask(e->HITBOX) )))){
			HX_STACK_LINE(4217)
			this->resetReal(this->_x,this->_y);
			HX_STACK_LINE(4218)
			return e;
		}
	}
	HX_STACK_LINE(4221)
	this->resetReal(this->_x,this->_y);
	HX_STACK_LINE(4222)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,collideWith,return )

::com::stencyl::models::Actor Actor_obj::collideTypes( Dynamic types,Float x,Float y){
	HX_STACK_PUSH("Actor::collideTypes","com/stencyl/models/Actor.hx",4162);
	HX_STACK_THIS(this);
	HX_STACK_ARG(types,"types");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(4163)
	if ((::Std_obj::is(types,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(4164)
		return this->collide(types,x,y);
	}
	else{
		HX_STACK_LINE(4169)
		Array< int > a = types;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(4170)
		if (((a != null()))){
			HX_STACK_LINE(4172)
			::com::stencyl::models::Actor e;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(4173)
			int type;		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(4174)
			{
				HX_STACK_LINE(4174)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(4174)
				while(((_g < a->length))){
					HX_STACK_LINE(4174)
					int type1 = a->__get(_g);		HX_STACK_VAR(type1,"type1");
					HX_STACK_LINE(4174)
					++(_g);
					HX_STACK_LINE(4176)
					if (((type1 == ::com::stencyl::models::GameModel_obj::REGION_ID))){
						HX_STACK_LINE(4176)
						continue;
					}
					HX_STACK_LINE(4178)
					e = this->collide(type1,x,y);
					HX_STACK_LINE(4179)
					if (((e != null()))){
						HX_STACK_LINE(4179)
						return e;
					}
				}
			}
		}
	}
	HX_STACK_LINE(4184)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,collideTypes,return )

::com::stencyl::models::Actor Actor_obj::collide( int groupID,Float x,Float y){
	HX_STACK_PUSH("Actor::collide","com/stencyl/models/Actor.hx",4090);
	HX_STACK_THIS(this);
	HX_STACK_ARG(groupID,"groupID");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(4092)
	::com::stencyl::models::actor::Group actorList = this->engine->getGroup(groupID,null());		HX_STACK_VAR(actorList,"actorList");
	HX_STACK_LINE(4094)
	this->_x = this->realX;
	HX_STACK_LINE(4094)
	this->_y = this->realY;
	HX_STACK_LINE(4095)
	this->resetReal(x,y);
	HX_STACK_LINE(4097)
	if (((this->_mask == null()))){
		HX_STACK_LINE(4099)
		{
			HX_STACK_LINE(4099)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = actorList->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(4099)
			while(((_g < _g1->length))){
				HX_STACK_LINE(4099)
				::com::stencyl::models::Actor actor = _g1->__get(_g).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actor,"actor");
				HX_STACK_LINE(4099)
				++(_g);
				HX_STACK_LINE(4101)
				::com::stencyl::models::Actor e = actor;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(4103)
				if ((e->recycled)){
					HX_STACK_LINE(4104)
					continue;
				}
				HX_STACK_LINE(4108)
				if (((bool((bool((bool((bool((bool(((this->colX + this->cacheWidth) >= e->colX)) && bool(((this->colY + this->cacheHeight) >= e->colY)))) && bool((this->colX <= (e->colX + e->cacheWidth))))) && bool((this->colY <= (e->colY + e->cacheHeight))))) && bool(e->collidable))) && bool((e != hx::ObjectPtr<OBJ_>(this)))))){
					HX_STACK_LINE(4113)
					if (((bool((e->_mask == null())) || bool(e->_mask->collide(this->HITBOX))))){
						HX_STACK_LINE(4116)
						this->resetReal(this->_x,this->_y);
						HX_STACK_LINE(4118)
						return e;
					}
				}
			}
		}
		HX_STACK_LINE(4123)
		this->resetReal(this->_x,this->_y);
		HX_STACK_LINE(4124)
		return null();
	}
	HX_STACK_LINE(4127)
	{
		HX_STACK_LINE(4127)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = actorList->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(4127)
		while(((_g < _g1->length))){
			HX_STACK_LINE(4127)
			::com::stencyl::models::Actor actor = _g1->__get(_g).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actor,"actor");
			HX_STACK_LINE(4127)
			++(_g);
			HX_STACK_LINE(4129)
			::com::stencyl::models::Actor e = actor;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(4131)
			if ((e->recycled)){
				HX_STACK_LINE(4132)
				continue;
			}
			HX_STACK_LINE(4136)
			if (((bool((bool((bool((bool((bool(((this->colX + this->cacheWidth) >= e->colX)) && bool(((this->colY + this->cacheHeight) >= e->colY)))) && bool((this->colX <= (e->colX + e->cacheWidth))))) && bool((this->colY <= (e->colY + e->cacheHeight))))) && bool(e->collidable))) && bool((e != hx::ObjectPtr<OBJ_>(this)))))){
				HX_STACK_LINE(4141)
				if ((this->_mask->collide((  (((e->_mask != null()))) ? ::com::stencyl::models::collision::Mask(e->_mask) : ::com::stencyl::models::collision::Mask(e->HITBOX) )))){
					HX_STACK_LINE(4144)
					this->resetReal(this->_x,this->_y);
					HX_STACK_LINE(4146)
					return e;
				}
			}
		}
	}
	HX_STACK_LINE(4150)
	this->resetReal(this->_x,this->_y);
	HX_STACK_LINE(4151)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,collide,return )

::com::stencyl::models::collision::Mask Actor_obj::set_shape( ::com::stencyl::models::collision::Mask value){
	HX_STACK_PUSH("Actor::set_shape","com/stencyl/models/Actor.hx",4074);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(4075)
	if (((this->_mask == value))){
		HX_STACK_LINE(4075)
		return value;
	}
	HX_STACK_LINE(4076)
	if (((this->_mask != null()))){
		HX_STACK_LINE(4076)
		this->_mask->assignTo(null());
	}
	HX_STACK_LINE(4077)
	this->_mask = value;
	HX_STACK_LINE(4078)
	if (((value != null()))){
		HX_STACK_LINE(4078)
		this->_mask->assignTo(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(4079)
	return this->_mask;
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,set_shape,return )

::com::stencyl::models::collision::Mask Actor_obj::get_shape( ){
	HX_STACK_PUSH("Actor::get_shape","com/stencyl/models/Actor.hx",4072);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4072)
	return this->_mask;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,get_shape,return )

Void Actor_obj::setLocation( Float x,Float y){
{
		HX_STACK_PUSH("Actor::setLocation","com/stencyl/models/Actor.hx",4055);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(4056)
		this->realX = x;
		HX_STACK_LINE(4057)
		this->realY = y;
		HX_STACK_LINE(4059)
		this->setX(x,false,true);
		HX_STACK_LINE(4060)
		this->setY(y,false,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,setLocation,(void))

::String Actor_obj::toString( ){
	HX_STACK_PUSH("Actor::toString","com/stencyl/models/Actor.hx",4041);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4042)
	if (((this->get_name() == null()))){
		HX_STACK_LINE(4043)
		return (HX_CSTRING("Unknown Actor ") + this->ID);
	}
	HX_STACK_LINE(4047)
	return ((((HX_CSTRING("[Actor ") + this->ID) + HX_CSTRING(",")) + this->get_name()) + HX_CSTRING("]"));
}


Void Actor_obj::killSelfAfterLeavingScreen( ){
{
		HX_STACK_PUSH("Actor::killSelfAfterLeavingScreen","com/stencyl/models/Actor.hx",4036);
		HX_STACK_THIS(this);
		HX_STACK_LINE(4036)
		this->killLeaveScreen = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,killSelfAfterLeavingScreen,(void))

::com::stencyl::models::Actor Actor_obj::getLastCollidedActor( ){
	HX_STACK_PUSH("Actor::getLastCollidedActor","com/stencyl/models/Actor.hx",4029);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4029)
	return ::com::stencyl::models::Actor_obj::lastCollided;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getLastCollidedActor,return )

bool Actor_obj::isInScene( ){
	HX_STACK_PUSH("Actor::isInScene","com/stencyl/models/Actor.hx",4020);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4020)
	return (bool((bool((bool((bool(((bool((this->physicsMode > (int)0)) || bool(this->body->isActive())))) && bool((this->getX(null()) >= (int)0)))) && bool((this->getY(null()) >= (int)0)))) && bool((this->getX(null()) < ::com::stencyl::Engine_obj::sceneWidth)))) && bool((this->getY(null()) < ::com::stencyl::Engine_obj::sceneHeight)));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isInScene,return )

bool Actor_obj::isOnScreen( ){
	HX_STACK_PUSH("Actor::isOnScreen","com/stencyl/models/Actor.hx",4003);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4004)
	Float cameraX = (Float(::com::stencyl::Engine_obj::cameraX) / Float(::com::stencyl::Engine_obj::SCALE));		HX_STACK_VAR(cameraX,"cameraX");
	HX_STACK_LINE(4005)
	Float cameraY = (Float(::com::stencyl::Engine_obj::cameraY) / Float(::com::stencyl::Engine_obj::SCALE));		HX_STACK_VAR(cameraY,"cameraY");
	HX_STACK_LINE(4007)
	int left = ::com::stencyl::Engine_obj::paddingLeft;		HX_STACK_VAR(left,"left");
	HX_STACK_LINE(4008)
	int top = ::com::stencyl::Engine_obj::paddingTop;		HX_STACK_VAR(top,"top");
	HX_STACK_LINE(4009)
	int right = ::com::stencyl::Engine_obj::paddingRight;		HX_STACK_VAR(right,"right");
	HX_STACK_LINE(4010)
	int bottom = ::com::stencyl::Engine_obj::paddingBottom;		HX_STACK_VAR(bottom,"bottom");
	HX_STACK_LINE(4012)
	return (bool((bool((bool((bool(((bool((this->physicsMode > (int)0)) || bool(this->body->isActive())))) && bool((this->getX(null()) >= (-(cameraX) - left))))) && bool((this->getY(null()) >= (-(cameraY) - top))))) && bool((this->getX(null()) < ((-(cameraX) + ::com::stencyl::Engine_obj::screenWidth) + right))))) && bool((this->getY(null()) < ((-(cameraY) + ::com::stencyl::Engine_obj::screenHeight) + bottom))));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isOnScreen,return )

bool Actor_obj::isAlive( ){
	HX_STACK_PUSH("Actor::isAlive","com/stencyl/models/Actor.hx",3997);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3997)
	return !(((bool((bool(this->dead) || bool(this->dying))) || bool(this->recycled))));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isAlive,return )

bool Actor_obj::isDying( ){
	HX_STACK_PUSH("Actor::isDying","com/stencyl/models/Actor.hx",3992);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3992)
	return this->dying;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isDying,return )

Void Actor_obj::die( ){
{
		HX_STACK_PUSH("Actor::die","com/stencyl/models/Actor.hx",3970);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3971)
		this->dying = true;
		HX_STACK_LINE(3973)
		Dynamic a = this->engine->whenTypeGroupDiesListeners->get(this->getType());		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(3974)
		Dynamic b = this->engine->whenTypeGroupDiesListeners->get(this->getGroup());		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(3976)
		{
			HX_STACK_LINE(3976)
			Dynamic listeners = this->whenKilledListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(3976)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(3976)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(3976)
				try{
					HX_STACK_LINE(3976)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(3976)
					f(listeners).Cast< Void >();
					HX_STACK_LINE(3976)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(3976)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(3976)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4003,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(3976)
				(r)++;
			}
		}
		HX_STACK_LINE(3978)
		if (((a != null()))){
			HX_STACK_LINE(3980)
			Dynamic listeners = a;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(3980)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(3980)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(3980)
				try{
					HX_STACK_LINE(3980)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(3980)
					f(hx::ObjectPtr<OBJ_>(this),listeners).Cast< Void >();
					HX_STACK_LINE(3980)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(3980)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(3980)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(3980)
				(r)++;
			}
		}
		HX_STACK_LINE(3983)
		if (((b != null()))){
			HX_STACK_LINE(3985)
			Dynamic listeners = b;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(3985)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(3985)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(3985)
				try{
					HX_STACK_LINE(3985)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(3985)
					f(hx::ObjectPtr<OBJ_>(this),listeners).Cast< Void >();
					HX_STACK_LINE(3985)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(3985)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(3985)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(3985)
				(r)++;
			}
		}
		HX_STACK_LINE(3988)
		this->removeAllListeners();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,die,(void))

bool Actor_obj::alwaysSimulates( ){
	HX_STACK_PUSH("Actor::alwaysSimulates","com/stencyl/models/Actor.hx",3965);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3965)
	return this->alwaysSimulate;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,alwaysSimulates,return )

Void Actor_obj::makeSometimesSimulate( hx::Null< bool >  __o_alterBody){
bool alterBody = __o_alterBody.Default(true);
	HX_STACK_PUSH("Actor::makeSometimesSimulate","com/stencyl/models/Actor.hx",3954);
	HX_STACK_THIS(this);
	HX_STACK_ARG(alterBody,"alterBody");
{
		HX_STACK_LINE(3955)
		if (((bool((this->physicsMode == (int)0)) && bool(alterBody)))){
			HX_STACK_LINE(3956)
			this->body->setAlwaysActive(false);
		}
		HX_STACK_LINE(3960)
		this->alwaysSimulate = false;
		HX_STACK_LINE(3961)
		this->engine->removeHUDActor(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,makeSometimesSimulate,(void))

Void Actor_obj::makeAlwaysSimulate( hx::Null< bool >  __o_alterBody){
bool alterBody = __o_alterBody.Default(true);
	HX_STACK_PUSH("Actor::makeAlwaysSimulate","com/stencyl/models/Actor.hx",3943);
	HX_STACK_THIS(this);
	HX_STACK_ARG(alterBody,"alterBody");
{
		HX_STACK_LINE(3944)
		if (((bool((this->physicsMode == (int)0)) && bool(alterBody)))){
			HX_STACK_LINE(3945)
			this->body->setAlwaysActive(true);
		}
		HX_STACK_LINE(3949)
		this->alwaysSimulate = true;
		HX_STACK_LINE(3950)
		this->engine->addHUDActor(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,makeAlwaysSimulate,(void))

bool Actor_obj::isAnchoredToScreen( ){
	HX_STACK_PUSH("Actor::isAnchoredToScreen","com/stencyl/models/Actor.hx",3938);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3938)
	return this->isHUD;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isAnchoredToScreen,return )

Void Actor_obj::unanchorFromScreen( ){
{
		HX_STACK_PUSH("Actor::unanchorFromScreen","com/stencyl/models/Actor.hx",3923);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3924)
		if (((this->physicsMode == (int)0))){
			HX_STACK_LINE(3925)
			this->body->setAlwaysActive(this->alwaysSimulate);
		}
		HX_STACK_LINE(3929)
		this->isHUD = false;
		HX_STACK_LINE(3930)
		this->engine->removeHUDActor(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(3931)
		this->engine->hudLayer->removeChild(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(3932)
		this->engine->moveActorToLayer(hx::ObjectPtr<OBJ_>(this),this->layerID);
		HX_STACK_LINE(3934)
		this->updateMatrix = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,unanchorFromScreen,(void))

Void Actor_obj::anchorToScreen( ){
{
		HX_STACK_PUSH("Actor::anchorToScreen","com/stencyl/models/Actor.hx",3908);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3909)
		if (((this->physicsMode == (int)0))){
			HX_STACK_LINE(3910)
			this->body->setAlwaysActive(true);
		}
		HX_STACK_LINE(3914)
		this->isHUD = true;
		HX_STACK_LINE(3915)
		this->engine->removeActorFromLayer(hx::ObjectPtr<OBJ_>(this),this->layerID);
		HX_STACK_LINE(3916)
		this->engine->addHUDActor(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(3917)
		this->engine->hudLayer->addChild(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(3919)
		this->updateMatrix = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,anchorToScreen,(void))

Void Actor_obj::removeAllListeners( ){
{
		HX_STACK_PUSH("Actor::removeAllListeners","com/stencyl/models/Actor.hx",3881);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3882)
		{
			HX_STACK_LINE(3882)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->allListenerReferences->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(3882)
			while(((_g1 < _g))){
				HX_STACK_LINE(3882)
				int k = (_g1)++;		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(3884)
				Dynamic listener = this->allListenerReferences->__GetItem(k);		HX_STACK_VAR(listener,"listener");
				HX_STACK_LINE(3886)
				if (((listener != null()))){
					HX_STACK_LINE(3888)
					Dynamic list = hx::TCastToArray(this->allListeners->get(k));		HX_STACK_VAR(list,"list");
					HX_STACK_LINE(3890)
					if (((list != null()))){
						HX_STACK_LINE(3892)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						int _g2 = list->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(3892)
						while(((_g3 < _g2))){
							HX_STACK_LINE(3892)
							int r = (_g3)++;		HX_STACK_VAR(r,"r");
							HX_STACK_LINE(3894)
							{
								HX_STACK_LINE(3894)
								Dynamic value = list->__GetItem(r);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(3894)
								int len = listener->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(3894)
								int i = (len - (int)1);		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(3894)
								while(((i > (int)-1))){
									HX_STACK_LINE(3894)
									if (((listener->__GetItem(i) == value))){
										HX_STACK_LINE(3894)
										listener->__Field(HX_CSTRING("splice"),true)(i,(int)1);
									}
									HX_STACK_LINE(3894)
									(i)--;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(3900)
		{
			HX_STACK_LINE(3900)
			Dynamic arr = this->allListenerReferences;		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(3900)
			arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,removeAllListeners,(void))

Void Actor_obj::registerListener( Dynamic type,Dynamic listener){
{
		HX_STACK_PUSH("Actor::registerListener","com/stencyl/models/Actor.hx",3858);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(listener,"listener");
		HX_STACK_LINE(3859)
		int ePos = ::com::stencyl::utils::Utils_obj::indexOf(this->allListenerReferences,type);		HX_STACK_VAR(ePos,"ePos");
		HX_STACK_LINE(3861)
		Dynamic listenerList = null();		HX_STACK_VAR(listenerList,"listenerList");
		HX_STACK_LINE(3863)
		if (((ePos != (int)-1))){
			HX_STACK_LINE(3864)
			listenerList = this->allListeners->get(ePos);
		}
		else{
			HX_STACK_LINE(3870)
			this->allListenerReferences->__Field(HX_CSTRING("push"),true)(type);
			HX_STACK_LINE(3871)
			ePos = (this->allListenerReferences->__Field(HX_CSTRING("length"),true) - (int)1);
			HX_STACK_LINE(3873)
			listenerList = Dynamic( Array_obj<Dynamic>::__new() );
			HX_STACK_LINE(3874)
			this->allListeners->set(ePos,listenerList);
		}
		HX_STACK_LINE(3877)
		listenerList->__Field(HX_CSTRING("push"),true)(listener);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,registerListener,(void))

Dynamic Actor_obj::hasActorValue( ::String name){
	HX_STACK_PUSH("Actor::hasActorValue","com/stencyl/models/Actor.hx",3844);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(3845)
	if (((this->registry == null()))){
		HX_STACK_LINE(3846)
		return null();
	}
	HX_STACK_LINE(3850)
	return (this->registry->get(name) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,hasActorValue,return )

Dynamic Actor_obj::getActorValue( ::String name){
	HX_STACK_PUSH("Actor::getActorValue","com/stencyl/models/Actor.hx",3831);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(3831)
	if (((this->registry == null()))){
		HX_STACK_LINE(3833)
		return null();
	}
	else{
		HX_STACK_LINE(3838)
		return this->registry->get(name);
	}
	HX_STACK_LINE(3831)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,getActorValue,return )

Void Actor_obj::setActorValue( ::String name,Dynamic value){
{
		HX_STACK_PUSH("Actor::setActorValue","com/stencyl/models/Actor.hx",3823);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(3823)
		if (((this->registry != null()))){
			HX_STACK_LINE(3826)
			Dynamic value1 = value;		HX_STACK_VAR(value1,"value1");
			HX_STACK_LINE(3826)
			this->registry->set(name,value1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,setActorValue,(void))

Dynamic Actor_obj::say( ::String behaviorName,::String msg,Dynamic args){
	HX_STACK_PUSH("Actor::say","com/stencyl/models/Actor.hx",3814);
	HX_STACK_THIS(this);
	HX_STACK_ARG(behaviorName,"behaviorName");
	HX_STACK_ARG(msg,"msg");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(3814)
	return this->behaviors->call2(behaviorName,msg,args);
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,say,return )

Dynamic Actor_obj::shout( ::String msg,Dynamic args){
	HX_STACK_PUSH("Actor::shout","com/stencyl/models/Actor.hx",3809);
	HX_STACK_THIS(this);
	HX_STACK_ARG(msg,"msg");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(3809)
	return this->behaviors->call(msg,args);
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,shout,return )

Void Actor_obj::setValue( ::String behaviorName,::String attributeName,Dynamic value){
{
		HX_STACK_PUSH("Actor::setValue","com/stencyl/models/Actor.hx",3804);
		HX_STACK_THIS(this);
		HX_STACK_ARG(behaviorName,"behaviorName");
		HX_STACK_ARG(attributeName,"attributeName");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(3804)
		this->behaviors->setAttribute(behaviorName,attributeName,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,setValue,(void))

Dynamic Actor_obj::getValue( ::String behaviorName,::String attributeName){
	HX_STACK_PUSH("Actor::getValue","com/stencyl/models/Actor.hx",3799);
	HX_STACK_THIS(this);
	HX_STACK_ARG(behaviorName,"behaviorName");
	HX_STACK_ARG(attributeName,"attributeName");
	HX_STACK_LINE(3799)
	return this->behaviors->getAttribute(behaviorName,attributeName);
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,getValue,return )

Void Actor_obj::enableAllBehaviors( ){
{
		HX_STACK_PUSH("Actor::enableAllBehaviors","com/stencyl/models/Actor.hx",3784);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3784)
		if (((this->behaviors != null()))){
			HX_STACK_LINE(3787)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->behaviors->behaviors;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(3787)
			while(((_g < _g1->length))){
				HX_STACK_LINE(3787)
				::com::stencyl::behavior::Behavior b = _g1->__get(_g).StaticCast< ::com::stencyl::behavior::Behavior >();		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(3787)
				++(_g);
				HX_STACK_LINE(3789)
				b->enabled = true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,enableAllBehaviors,(void))

bool Actor_obj::isBehaviorEnabled( ::String name){
	HX_STACK_PUSH("Actor::isBehaviorEnabled","com/stencyl/models/Actor.hx",3774);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(3775)
	if (((this->behaviors != null()))){
		HX_STACK_LINE(3776)
		return this->behaviors->isBehaviorEnabled(name);
	}
	HX_STACK_LINE(3780)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,isBehaviorEnabled,return )

Void Actor_obj::disableBehavior( ::String name){
{
		HX_STACK_PUSH("Actor::disableBehavior","com/stencyl/models/Actor.hx",3766);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_LINE(3766)
		if (((this->behaviors != null()))){
			HX_STACK_LINE(3768)
			this->behaviors->disableBehavior(name);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,disableBehavior,(void))

Void Actor_obj::enableBehavior( ::String name){
{
		HX_STACK_PUSH("Actor::enableBehavior","com/stencyl/models/Actor.hx",3758);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_LINE(3758)
		if (((this->behaviors != null()))){
			HX_STACK_LINE(3760)
			this->behaviors->enableBehavior(name);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,enableBehavior,(void))

bool Actor_obj::hasBehavior( ::String name){
	HX_STACK_PUSH("Actor::hasBehavior","com/stencyl/models/Actor.hx",3748);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(3749)
	if (((this->behaviors != null()))){
		HX_STACK_LINE(3750)
		return this->behaviors->hasBehavior(name);
	}
	HX_STACK_LINE(3754)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,hasBehavior,return )

Void Actor_obj::addBehavior( ::com::stencyl::behavior::Behavior b){
{
		HX_STACK_PUSH("Actor::addBehavior","com/stencyl/models/Actor.hx",3740);
		HX_STACK_THIS(this);
		HX_STACK_ARG(b,"b");
		HX_STACK_LINE(3740)
		if (((this->behaviors != null()))){
			HX_STACK_LINE(3742)
			this->behaviors->add(b);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,addBehavior,(void))

Void Actor_obj::resetBlendMode( ){
{
		HX_STACK_PUSH("Actor::resetBlendMode","com/stencyl/models/Actor.hx",3722);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3724);
				{
					HX_STACK_LINE(3724)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->animationMap);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/models/Actor.hx",3724);
						{
							HX_STACK_LINE(3724)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(3724)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(3722)
		for(::cpp::FastIterator_obj< ::com::stencyl::graphics::SheetAnimation > *__it = ::cpp::CreateFastIterator< ::com::stencyl::graphics::SheetAnimation >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::com::stencyl::graphics::SheetAnimation anim = __it->next();
			if (((::Type_obj::getClass(anim) == hx::ClassOf< ::com::stencyl::graphics::SheetAnimation >()))){
				HX_STACK_LINE(3728)
				anim->blendName = HX_CSTRING("NORMAL");
				HX_STACK_LINE(3729)
				{
					HX_STACK_LINE(3729)
					anim->data[(int)0] = (int)0;
					HX_STACK_LINE(3729)
					anim->data[(int)1] = (int)0;
					HX_STACK_LINE(3729)
					anim->data[(int)2] = anim->frameIndex;
					HX_STACK_LINE(3729)
					if ((anim->tint)){
						HX_STACK_LINE(3729)
						anim->data[(int)3] = anim->redValue;
						HX_STACK_LINE(3729)
						anim->data[(int)4] = anim->greenValue;
						HX_STACK_LINE(3729)
						anim->data[(int)5] = anim->blueValue;
						HX_STACK_LINE(3729)
						anim->get_graphics()->clear();
						HX_STACK_LINE(3729)
						anim->tilesheet->drawTiles(anim->get_graphics(),anim->data,::scripts::MyAssets_obj::antialias,(int)4);
					}
					else{
						HX_STACK_LINE(3729)
						anim->data[(int)3] = (int)1;
						HX_STACK_LINE(3729)
						anim->data[(int)4] = (int)1;
						HX_STACK_LINE(3729)
						anim->data[(int)5] = (int)1;
						HX_STACK_LINE(3729)
						anim->get_graphics()->clear();
						HX_STACK_LINE(3729)
						if (((anim->blendName == HX_CSTRING("ADD")))){
							HX_STACK_LINE(3729)
							anim->tilesheet->drawTiles(anim->get_graphics(),anim->data,::scripts::MyAssets_obj::antialias,(int)65540);
						}
						else{
							HX_STACK_LINE(3729)
							if (((anim->blendName == HX_CSTRING("MULTIPLY")))){
								HX_STACK_LINE(3729)
								anim->tilesheet->drawTiles(anim->get_graphics(),anim->data,::scripts::MyAssets_obj::antialias,(int)131076);
							}
							else{
								HX_STACK_LINE(3729)
								if (((anim->blendName == HX_CSTRING("SCREEN")))){
									HX_STACK_LINE(3729)
									anim->tilesheet->drawTiles(anim->get_graphics(),anim->data,::scripts::MyAssets_obj::antialias,(int)262148);
								}
								else{
									HX_STACK_LINE(3729)
									anim->tilesheet->drawTiles(anim->get_graphics(),anim->data,::scripts::MyAssets_obj::antialias,(int)4);
								}
							}
						}
					}
					HX_STACK_LINE(3729)
					anim->needsUpdate = false;
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,resetBlendMode,(void))

Void Actor_obj::setBlendMode( Dynamic blendName){
{
		HX_STACK_PUSH("Actor::setBlendMode","com/stencyl/models/Actor.hx",3706);
		HX_STACK_THIS(this);
		HX_STACK_ARG(blendName,"blendName");
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3708);
				{
					HX_STACK_LINE(3708)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->animationMap);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/models/Actor.hx",3708);
						{
							HX_STACK_LINE(3708)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(3708)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(3706)
		for(::cpp::FastIterator_obj< ::com::stencyl::graphics::SheetAnimation > *__it = ::cpp::CreateFastIterator< ::com::stencyl::graphics::SheetAnimation >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::com::stencyl::graphics::SheetAnimation anim = __it->next();
			if (((::Type_obj::getClass(anim) == hx::ClassOf< ::com::stencyl::graphics::SheetAnimation >()))){
				HX_STACK_LINE(3712)
				anim->blendName = blendName;
				HX_STACK_LINE(3713)
				{
					HX_STACK_LINE(3713)
					anim->data[(int)0] = (int)0;
					HX_STACK_LINE(3713)
					anim->data[(int)1] = (int)0;
					HX_STACK_LINE(3713)
					anim->data[(int)2] = anim->frameIndex;
					HX_STACK_LINE(3713)
					if ((anim->tint)){
						HX_STACK_LINE(3713)
						anim->data[(int)3] = anim->redValue;
						HX_STACK_LINE(3713)
						anim->data[(int)4] = anim->greenValue;
						HX_STACK_LINE(3713)
						anim->data[(int)5] = anim->blueValue;
						HX_STACK_LINE(3713)
						anim->get_graphics()->clear();
						HX_STACK_LINE(3713)
						anim->tilesheet->drawTiles(anim->get_graphics(),anim->data,::scripts::MyAssets_obj::antialias,(int)4);
					}
					else{
						HX_STACK_LINE(3713)
						anim->data[(int)3] = (int)1;
						HX_STACK_LINE(3713)
						anim->data[(int)4] = (int)1;
						HX_STACK_LINE(3713)
						anim->data[(int)5] = (int)1;
						HX_STACK_LINE(3713)
						anim->get_graphics()->clear();
						HX_STACK_LINE(3713)
						if (((anim->blendName == HX_CSTRING("ADD")))){
							HX_STACK_LINE(3713)
							anim->tilesheet->drawTiles(anim->get_graphics(),anim->data,::scripts::MyAssets_obj::antialias,(int)65540);
						}
						else{
							HX_STACK_LINE(3713)
							if (((anim->blendName == HX_CSTRING("MULTIPLY")))){
								HX_STACK_LINE(3713)
								anim->tilesheet->drawTiles(anim->get_graphics(),anim->data,::scripts::MyAssets_obj::antialias,(int)131076);
							}
							else{
								HX_STACK_LINE(3713)
								if (((anim->blendName == HX_CSTRING("SCREEN")))){
									HX_STACK_LINE(3713)
									anim->tilesheet->drawTiles(anim->get_graphics(),anim->data,::scripts::MyAssets_obj::antialias,(int)262148);
								}
								else{
									HX_STACK_LINE(3713)
									anim->tilesheet->drawTiles(anim->get_graphics(),anim->data,::scripts::MyAssets_obj::antialias,(int)4);
								}
							}
						}
					}
					HX_STACK_LINE(3713)
					anim->needsUpdate = false;
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setBlendMode,(void))

Void Actor_obj::clearFilters( ){
{
		HX_STACK_PUSH("Actor::clearFilters","com/stencyl/models/Actor.hx",3668);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3668)
		if ((this->animsBackedUp)){
			HX_STACK_LINE(3676)
			::flash::geom::Point pt = ::flash::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(pt,"pt");
			HX_STACK_LINE(3678)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->backupAnimationMap->keys());  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(3680)
					Dynamic imageData = this->backupAnimationMap->get(key);		HX_STACK_VAR(imageData,"imageData");
					HX_STACK_LINE(3681)
					Dynamic sheetValue = this->animationMap->get(key);		HX_STACK_VAR(sheetValue,"sheetValue");
					HX_STACK_LINE(3682)
					sheetValue->__Field(HX_CSTRING("tilesheet"),true)->__Field(HX_CSTRING("__bitmap"),true)->__Field(HX_CSTRING("copyPixels"),true)(imageData,imageData->__Field(HX_CSTRING("rect"),true),pt);
					HX_STACK_LINE(3683)
					sheetValue->__FieldRef(HX_CSTRING("tint")) = false;
					HX_STACK_LINE(3684)
					sheetValue->__Field(HX_CSTRING("updateBitmap"),true)();
				}
;
			}
		}
		else{
			HX_STACK_LINE(3687)
			if ((this->tint)){
				struct _Function_3_1{
					inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
						HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3689);
						{
							HX_STACK_LINE(3689)
							Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->animationMap);		HX_STACK_VAR(_e,"_e");

							HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_e)
							Dynamic run(){
								HX_STACK_PUSH("*::_Function_4_1","com/stencyl/models/Actor.hx",3689);
								{
									HX_STACK_LINE(3689)
									return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(3689)
							return  Dynamic(new _Function_4_1(_e));
						}
						return null();
					}
				};
				HX_STACK_LINE(3688)
				for(::cpp::FastIterator_obj< ::com::stencyl::graphics::SheetAnimation > *__it = ::cpp::CreateFastIterator< ::com::stencyl::graphics::SheetAnimation >((_Function_3_1::Block(this))());  __it->hasNext(); ){
					::com::stencyl::graphics::SheetAnimation anim = __it->next();
					if (((::Type_obj::getClass(anim) == hx::ClassOf< ::com::stencyl::graphics::SheetAnimation >()))){
						HX_STACK_LINE(3693)
						anim->tint = false;
						HX_STACK_LINE(3694)
						{
							HX_STACK_LINE(3694)
							anim->data[(int)0] = (int)0;
							HX_STACK_LINE(3694)
							anim->data[(int)1] = (int)0;
							HX_STACK_LINE(3694)
							anim->data[(int)2] = anim->frameIndex;
							HX_STACK_LINE(3694)
							if ((anim->tint)){
								HX_STACK_LINE(3694)
								anim->data[(int)3] = anim->redValue;
								HX_STACK_LINE(3694)
								anim->data[(int)4] = anim->greenValue;
								HX_STACK_LINE(3694)
								anim->data[(int)5] = anim->blueValue;
								HX_STACK_LINE(3694)
								anim->get_graphics()->clear();
								HX_STACK_LINE(3694)
								anim->tilesheet->drawTiles(anim->get_graphics(),anim->data,::scripts::MyAssets_obj::antialias,(int)4);
							}
							else{
								HX_STACK_LINE(3694)
								anim->data[(int)3] = (int)1;
								HX_STACK_LINE(3694)
								anim->data[(int)4] = (int)1;
								HX_STACK_LINE(3694)
								anim->data[(int)5] = (int)1;
								HX_STACK_LINE(3694)
								anim->get_graphics()->clear();
								HX_STACK_LINE(3694)
								if (((anim->blendName == HX_CSTRING("ADD")))){
									HX_STACK_LINE(3694)
									anim->tilesheet->drawTiles(anim->get_graphics(),anim->data,::scripts::MyAssets_obj::antialias,(int)65540);
								}
								else{
									HX_STACK_LINE(3694)
									if (((anim->blendName == HX_CSTRING("MULTIPLY")))){
										HX_STACK_LINE(3694)
										anim->tilesheet->drawTiles(anim->get_graphics(),anim->data,::scripts::MyAssets_obj::antialias,(int)131076);
									}
									else{
										HX_STACK_LINE(3694)
										if (((anim->blendName == HX_CSTRING("SCREEN")))){
											HX_STACK_LINE(3694)
											anim->tilesheet->drawTiles(anim->get_graphics(),anim->data,::scripts::MyAssets_obj::antialias,(int)262148);
										}
										else{
											HX_STACK_LINE(3694)
											anim->tilesheet->drawTiles(anim->get_graphics(),anim->data,::scripts::MyAssets_obj::antialias,(int)4);
										}
									}
								}
							}
							HX_STACK_LINE(3694)
							anim->needsUpdate = false;
						}
					}
;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,clearFilters,(void))

Void Actor_obj::setFilter( Dynamic filter){
{
		HX_STACK_PUSH("Actor::setFilter","com/stencyl/models/Actor.hx",3401);
		HX_STACK_THIS(this);
		HX_STACK_ARG(filter,"filter");
		HX_STACK_LINE(3402)
		::String filterName;		HX_STACK_VAR(filterName,"filterName");
		HX_STACK_LINE(3403)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(3404)
		int srcA;		HX_STACK_VAR(srcA,"srcA");
		HX_STACK_LINE(3405)
		int srcR;		HX_STACK_VAR(srcR,"srcR");
		HX_STACK_LINE(3406)
		int srcG;		HX_STACK_VAR(srcG,"srcG");
		HX_STACK_LINE(3407)
		int srcB;		HX_STACK_VAR(srcB,"srcB");
		HX_STACK_LINE(3408)
		Float redResult;		HX_STACK_VAR(redResult,"redResult");
		HX_STACK_LINE(3409)
		Float greenResult;		HX_STACK_VAR(greenResult,"greenResult");
		HX_STACK_LINE(3410)
		Float blueResult;		HX_STACK_VAR(blueResult,"blueResult");
		HX_STACK_LINE(3413)
		Dynamic defaultMatrix = filter->__GetItem((int)0);		HX_STACK_VAR(defaultMatrix,"defaultMatrix");
		HX_STACK_LINE(3415)
		filterName = defaultMatrix->__GetItem((int)0);
		HX_STACK_LINE(3417)
		if (((filterName != HX_CSTRING("TintFilter")))){
			HX_STACK_LINE(3418)
			if ((!(this->animsBackedUp))){
				HX_STACK_LINE(3422)
				this->backupAnimationMap = ::haxe::ds::StringMap_obj::__new();
				HX_STACK_LINE(3424)
				for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->animationMap->keys());  __it->hasNext(); ){
					::String key = __it->next();
					{
						HX_STACK_LINE(3426)
						Dynamic anim = this->animationMap->get(key);		HX_STACK_VAR(anim,"anim");
						HX_STACK_LINE(3428)
						if (((::Type_obj::getClass(anim) == hx::ClassOf< ::com::stencyl::graphics::SheetAnimation >()))){
							HX_STACK_LINE(3430)
							{
								HX_STACK_LINE(3430)
								Dynamic value = anim->__Field(HX_CSTRING("tilesheet"),true)->__Field(HX_CSTRING("__bitmap"),true)->__Field(HX_CSTRING("clone"),true)();		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(3430)
								this->backupAnimationMap->set(key,value);
							}
							HX_STACK_LINE(3432)
							int frameWidth = anim->__Field(HX_CSTRING("frameWidth"),true);		HX_STACK_VAR(frameWidth,"frameWidth");
							HX_STACK_LINE(3433)
							int frameHeight = anim->__Field(HX_CSTRING("frameHeight"),true);		HX_STACK_VAR(frameHeight,"frameHeight");
							HX_STACK_LINE(3434)
							::flash::display::BitmapData tempData = anim->__Field(HX_CSTRING("tilesheet"),true)->__Field(HX_CSTRING("__bitmap"),true)->__Field(HX_CSTRING("clone"),true)();		HX_STACK_VAR(tempData,"tempData");
							HX_STACK_LINE(3435)
							::openfl::display::Tilesheet tempTilesheet = ::openfl::display::Tilesheet_obj::__new(tempData);		HX_STACK_VAR(tempTilesheet,"tempTilesheet");
							HX_STACK_LINE(3437)
							int i1 = (int)0;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(3439)
							while(((i1 < anim->__Field(HX_CSTRING("numFrames"),true)))){
								HX_STACK_LINE(3441)
								tempTilesheet->addTileRect(::flash::geom::Rectangle_obj::__new((frameWidth * (hx::Mod(i1,anim->__Field(HX_CSTRING("framesAcross"),true)))),(::Math_obj::floor((Float(i1) / Float(anim->__Field(HX_CSTRING("framesAcross"),true)))) * frameHeight),frameWidth,frameHeight),null());
								HX_STACK_LINE(3442)
								(i1)++;
							}
							HX_STACK_LINE(3445)
							anim->__FieldRef(HX_CSTRING("tilesheet")) = tempTilesheet;
							HX_STACK_LINE(3446)
							anim->__Field(HX_CSTRING("updateBitmap"),true)();
						}
					}
;
				}
				HX_STACK_LINE(3449)
				this->animsBackedUp = true;
			}
		}
		HX_STACK_LINE(3453)
		if (((filterName == HX_CSTRING("NegativeFilter")))){
			struct _Function_2_1{
				inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
					HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3455);
					{
						HX_STACK_LINE(3455)
						Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->animationMap);		HX_STACK_VAR(_e,"_e");

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_e)
						Dynamic run(){
							HX_STACK_PUSH("*::_Function_3_1","com/stencyl/models/Actor.hx",3455);
							{
								HX_STACK_LINE(3455)
								return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
							}
							return null();
						}
						HX_END_LOCAL_FUNC0(return)

						HX_STACK_LINE(3455)
						return  Dynamic(new _Function_3_1(_e));
					}
					return null();
				}
			};
			HX_STACK_LINE(3454)
			for(::cpp::FastIterator_obj< ::com::stencyl::graphics::SheetAnimation > *__it = ::cpp::CreateFastIterator< ::com::stencyl::graphics::SheetAnimation >((_Function_2_1::Block(this))());  __it->hasNext(); ){
				::com::stencyl::graphics::SheetAnimation anim = __it->next();
				if (((::Type_obj::getClass(anim) == hx::ClassOf< ::com::stencyl::graphics::SheetAnimation >()))){
					HX_STACK_LINE(3459)
					::flash::display::BitmapData imageData = anim->tilesheet->__bitmap;		HX_STACK_VAR(imageData,"imageData");
					HX_STACK_LINE(3460)
					::flash::utils::ByteArray byteArray = imageData->getPixels(imageData->get_rect());		HX_STACK_VAR(byteArray,"byteArray");
					HX_STACK_LINE(3461)
					int len = byteArray->length;		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(3464)
					::flash::Memory_obj::select(byteArray);
					HX_STACK_LINE(3466)
					i = (int)0;
					HX_STACK_LINE(3467)
					while(((i < len))){
						HX_STACK_LINE(3469)
						srcA = ::flash::Memory_obj::getByte(i);
						HX_STACK_LINE(3470)
						if (((srcA == (int)0))){
							HX_STACK_LINE(3473)
							i = (i + (int)4);
							HX_STACK_LINE(3474)
							continue;
						}
						HX_STACK_LINE(3477)
						srcR = ::flash::Memory_obj::getByte((i + (int)1));
						HX_STACK_LINE(3478)
						srcG = ::flash::Memory_obj::getByte((i + (int)2));
						HX_STACK_LINE(3479)
						srcB = ::flash::Memory_obj::getByte((i + (int)3));
						HX_STACK_LINE(3481)
						::flash::Memory_obj::setByte((i + (int)1),((int)255 - srcR));
						HX_STACK_LINE(3482)
						::flash::Memory_obj::setByte((i + (int)2),((int)255 - srcG));
						HX_STACK_LINE(3483)
						::flash::Memory_obj::setByte((i + (int)3),((int)255 - srcB));
						HX_STACK_LINE(3485)
						i = (i + (int)4);
					}
					HX_STACK_LINE(3489)
					byteArray->position = (int)0;
					HX_STACK_LINE(3491)
					imageData->setPixels(imageData->get_rect(),byteArray);
				}
;
			}
		}
		else{
			HX_STACK_LINE(3496)
			if (((filterName == HX_CSTRING("TintFilter")))){
				HX_STACK_LINE(3498)
				this->tint = true;
				struct _Function_3_1{
					inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
						HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3500);
						{
							HX_STACK_LINE(3500)
							Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->animationMap);		HX_STACK_VAR(_e,"_e");

							HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_e)
							Dynamic run(){
								HX_STACK_PUSH("*::_Function_4_1","com/stencyl/models/Actor.hx",3500);
								{
									HX_STACK_LINE(3500)
									return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(3500)
							return  Dynamic(new _Function_4_1(_e));
						}
						return null();
					}
				};
				HX_STACK_LINE(3500)
				for(::cpp::FastIterator_obj< ::com::stencyl::graphics::SheetAnimation > *__it = ::cpp::CreateFastIterator< ::com::stencyl::graphics::SheetAnimation >((_Function_3_1::Block(this))());  __it->hasNext(); ){
					::com::stencyl::graphics::SheetAnimation anim = __it->next();
					if (((::Type_obj::getClass(anim) == hx::ClassOf< ::com::stencyl::graphics::SheetAnimation >()))){
						HX_STACK_LINE(3505)
						anim->tint = true;
						HX_STACK_LINE(3506)
						Float tintAmount = ((int)1 - defaultMatrix->__GetItem((int)4));		HX_STACK_VAR(tintAmount,"tintAmount");
						HX_STACK_LINE(3507)
						anim->redValue = ::Math_obj::min((defaultMatrix->__GetItem((int)1) + tintAmount),(int)1);
						HX_STACK_LINE(3508)
						anim->greenValue = ::Math_obj::min((defaultMatrix->__GetItem((int)2) + tintAmount),(int)1);
						HX_STACK_LINE(3509)
						anim->blueValue = ::Math_obj::min((defaultMatrix->__GetItem((int)3) + tintAmount),(int)1);
						HX_STACK_LINE(3510)
						{
							HX_STACK_LINE(3510)
							anim->data[(int)0] = (int)0;
							HX_STACK_LINE(3510)
							anim->data[(int)1] = (int)0;
							HX_STACK_LINE(3510)
							anim->data[(int)2] = anim->frameIndex;
							HX_STACK_LINE(3510)
							if ((anim->tint)){
								HX_STACK_LINE(3510)
								anim->data[(int)3] = anim->redValue;
								HX_STACK_LINE(3510)
								anim->data[(int)4] = anim->greenValue;
								HX_STACK_LINE(3510)
								anim->data[(int)5] = anim->blueValue;
								HX_STACK_LINE(3510)
								anim->get_graphics()->clear();
								HX_STACK_LINE(3510)
								anim->tilesheet->drawTiles(anim->get_graphics(),anim->data,::scripts::MyAssets_obj::antialias,(int)4);
							}
							else{
								HX_STACK_LINE(3510)
								anim->data[(int)3] = (int)1;
								HX_STACK_LINE(3510)
								anim->data[(int)4] = (int)1;
								HX_STACK_LINE(3510)
								anim->data[(int)5] = (int)1;
								HX_STACK_LINE(3510)
								anim->get_graphics()->clear();
								HX_STACK_LINE(3510)
								if (((anim->blendName == HX_CSTRING("ADD")))){
									HX_STACK_LINE(3510)
									anim->tilesheet->drawTiles(anim->get_graphics(),anim->data,::scripts::MyAssets_obj::antialias,(int)65540);
								}
								else{
									HX_STACK_LINE(3510)
									if (((anim->blendName == HX_CSTRING("MULTIPLY")))){
										HX_STACK_LINE(3510)
										anim->tilesheet->drawTiles(anim->get_graphics(),anim->data,::scripts::MyAssets_obj::antialias,(int)131076);
									}
									else{
										HX_STACK_LINE(3510)
										if (((anim->blendName == HX_CSTRING("SCREEN")))){
											HX_STACK_LINE(3510)
											anim->tilesheet->drawTiles(anim->get_graphics(),anim->data,::scripts::MyAssets_obj::antialias,(int)262148);
										}
										else{
											HX_STACK_LINE(3510)
											anim->tilesheet->drawTiles(anim->get_graphics(),anim->data,::scripts::MyAssets_obj::antialias,(int)4);
										}
									}
								}
							}
							HX_STACK_LINE(3510)
							anim->needsUpdate = false;
						}
					}
;
				}
			}
			else{
				HX_STACK_LINE(3514)
				if (((filterName == HX_CSTRING("GrayscaleFilter")))){
					struct _Function_4_1{
						inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3516);
							{
								HX_STACK_LINE(3516)
								Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->animationMap);		HX_STACK_VAR(_e,"_e");

								HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_5_1,Array< ::Dynamic >,_e)
								Dynamic run(){
									HX_STACK_PUSH("*::_Function_5_1","com/stencyl/models/Actor.hx",3516);
									{
										HX_STACK_LINE(3516)
										return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
									}
									return null();
								}
								HX_END_LOCAL_FUNC0(return)

								HX_STACK_LINE(3516)
								return  Dynamic(new _Function_5_1(_e));
							}
							return null();
						}
					};
					HX_STACK_LINE(3515)
					for(::cpp::FastIterator_obj< ::com::stencyl::graphics::SheetAnimation > *__it = ::cpp::CreateFastIterator< ::com::stencyl::graphics::SheetAnimation >((_Function_4_1::Block(this))());  __it->hasNext(); ){
						::com::stencyl::graphics::SheetAnimation anim = __it->next();
						if (((::Type_obj::getClass(anim) == hx::ClassOf< ::com::stencyl::graphics::SheetAnimation >()))){
							HX_STACK_LINE(3520)
							::flash::display::BitmapData imageData = anim->tilesheet->__bitmap;		HX_STACK_VAR(imageData,"imageData");
							HX_STACK_LINE(3521)
							::flash::utils::ByteArray byteArray = imageData->getPixels(imageData->get_rect());		HX_STACK_VAR(byteArray,"byteArray");
							HX_STACK_LINE(3522)
							int len = byteArray->length;		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(3523)
							int greyResult;		HX_STACK_VAR(greyResult,"greyResult");
							HX_STACK_LINE(3526)
							::flash::Memory_obj::select(byteArray);
							HX_STACK_LINE(3528)
							i = (int)0;
							HX_STACK_LINE(3529)
							while(((i < len))){
								HX_STACK_LINE(3531)
								srcA = ::flash::Memory_obj::getByte(i);
								HX_STACK_LINE(3532)
								if (((srcA == (int)0))){
									HX_STACK_LINE(3535)
									i = (i + (int)4);
									HX_STACK_LINE(3536)
									continue;
								}
								HX_STACK_LINE(3539)
								srcR = ::flash::Memory_obj::getByte((i + (int)1));
								HX_STACK_LINE(3540)
								srcG = ::flash::Memory_obj::getByte((i + (int)2));
								HX_STACK_LINE(3541)
								srcB = ::flash::Memory_obj::getByte((i + (int)3));
								HX_STACK_LINE(3544)
								greyResult = ::Std_obj::_int((((srcR * 0.5) + (srcG * 0.5)) + (srcB * 0.5)));
								HX_STACK_LINE(3546)
								if (((greyResult > (int)254))){
									HX_STACK_LINE(3547)
									greyResult = (int)255;
								}
								else{
									HX_STACK_LINE(3550)
									if (((greyResult < (int)1))){
										HX_STACK_LINE(3551)
										greyResult = (int)0;
									}
								}
								HX_STACK_LINE(3555)
								::flash::Memory_obj::setByte((i + (int)1),greyResult);
								HX_STACK_LINE(3556)
								::flash::Memory_obj::setByte((i + (int)2),greyResult);
								HX_STACK_LINE(3557)
								::flash::Memory_obj::setByte((i + (int)3),greyResult);
								HX_STACK_LINE(3559)
								i = (i + (int)4);
							}
							HX_STACK_LINE(3563)
							byteArray->position = (int)0;
							HX_STACK_LINE(3565)
							imageData->setPixels(imageData->get_rect(),byteArray);
						}
;
					}
				}
				else{
					HX_STACK_LINE(3572)
					Array< Float > matrix = Array_obj< Float >::__new();		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(3573)
					matrix[(int)0] = defaultMatrix->__GetItem((int)1);
					HX_STACK_LINE(3574)
					matrix[(int)1] = defaultMatrix->__GetItem((int)2);
					HX_STACK_LINE(3575)
					matrix[(int)2] = defaultMatrix->__GetItem((int)3);
					HX_STACK_LINE(3576)
					matrix[(int)3] = defaultMatrix->__GetItem((int)5);
					HX_STACK_LINE(3577)
					matrix[(int)4] = defaultMatrix->__GetItem((int)6);
					HX_STACK_LINE(3578)
					matrix[(int)5] = defaultMatrix->__GetItem((int)7);
					HX_STACK_LINE(3579)
					matrix[(int)6] = defaultMatrix->__GetItem((int)8);
					HX_STACK_LINE(3580)
					matrix[(int)7] = defaultMatrix->__GetItem((int)10);
					HX_STACK_LINE(3581)
					matrix[(int)8] = defaultMatrix->__GetItem((int)11);
					HX_STACK_LINE(3582)
					matrix[(int)9] = defaultMatrix->__GetItem((int)12);
					HX_STACK_LINE(3583)
					matrix[(int)10] = defaultMatrix->__GetItem((int)13);
					HX_STACK_LINE(3584)
					matrix[(int)11] = defaultMatrix->__GetItem((int)15);
					struct _Function_4_1{
						inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3586);
							{
								HX_STACK_LINE(3586)
								Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->animationMap);		HX_STACK_VAR(_e,"_e");

								HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_5_1,Array< ::Dynamic >,_e)
								Dynamic run(){
									HX_STACK_PUSH("*::_Function_5_1","com/stencyl/models/Actor.hx",3586);
									{
										HX_STACK_LINE(3586)
										return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
									}
									return null();
								}
								HX_END_LOCAL_FUNC0(return)

								HX_STACK_LINE(3586)
								return  Dynamic(new _Function_5_1(_e));
							}
							return null();
						}
					};
					HX_STACK_LINE(3586)
					for(::cpp::FastIterator_obj< ::com::stencyl::graphics::SheetAnimation > *__it = ::cpp::CreateFastIterator< ::com::stencyl::graphics::SheetAnimation >((_Function_4_1::Block(this))());  __it->hasNext(); ){
						::com::stencyl::graphics::SheetAnimation anim = __it->next();
						if (((::Type_obj::getClass(anim) == hx::ClassOf< ::com::stencyl::graphics::SheetAnimation >()))){
							HX_STACK_LINE(3590)
							::flash::display::BitmapData imageData = anim->tilesheet->__bitmap;		HX_STACK_VAR(imageData,"imageData");
							HX_STACK_LINE(3591)
							::flash::utils::ByteArray byteArray = imageData->getPixels(imageData->get_rect());		HX_STACK_VAR(byteArray,"byteArray");
							HX_STACK_LINE(3592)
							int len = byteArray->length;		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(3595)
							::flash::Memory_obj::select(byteArray);
							HX_STACK_LINE(3597)
							i = (int)0;
							HX_STACK_LINE(3598)
							while(((i < len))){
								HX_STACK_LINE(3600)
								srcA = ::flash::Memory_obj::getByte(i);
								HX_STACK_LINE(3601)
								if (((srcA == (int)0))){
									HX_STACK_LINE(3604)
									i = (i + (int)4);
									HX_STACK_LINE(3605)
									continue;
								}
								HX_STACK_LINE(3608)
								srcR = ::flash::Memory_obj::getByte((i + (int)1));
								HX_STACK_LINE(3609)
								srcG = ::flash::Memory_obj::getByte((i + (int)2));
								HX_STACK_LINE(3610)
								srcB = ::flash::Memory_obj::getByte((i + (int)3));
								HX_STACK_LINE(3612)
								redResult = ((((matrix->__get((int)0) * srcR) + (matrix->__get((int)1) * srcG)) + (matrix->__get((int)2) * srcB)) + matrix->__get((int)3));
								HX_STACK_LINE(3613)
								if (((redResult > (int)254))){
									HX_STACK_LINE(3614)
									::flash::Memory_obj::setByte((i + (int)1),(int)255);
								}
								else{
									HX_STACK_LINE(3617)
									if (((redResult < (int)1))){
										HX_STACK_LINE(3618)
										::flash::Memory_obj::setByte((i + (int)1),(int)0);
									}
									else{
										HX_STACK_LINE(3622)
										::flash::Memory_obj::setByte((i + (int)1),::Std_obj::_int(redResult));
									}
								}
								HX_STACK_LINE(3626)
								greenResult = ((((matrix->__get((int)4) * srcR) + (matrix->__get((int)5) * srcG)) + (matrix->__get((int)6) * srcB)) + matrix->__get((int)7));
								HX_STACK_LINE(3627)
								if (((greenResult > (int)254))){
									HX_STACK_LINE(3628)
									::flash::Memory_obj::setByte((i + (int)2),(int)255);
								}
								else{
									HX_STACK_LINE(3631)
									if (((greenResult < (int)1))){
										HX_STACK_LINE(3632)
										::flash::Memory_obj::setByte((i + (int)2),(int)0);
									}
									else{
										HX_STACK_LINE(3636)
										::flash::Memory_obj::setByte((i + (int)2),::Std_obj::_int(greenResult));
									}
								}
								HX_STACK_LINE(3640)
								blueResult = ((((matrix->__get((int)8) * srcR) + (matrix->__get((int)9) * srcG)) + (matrix->__get((int)10) * srcB)) + matrix->__get((int)11));
								HX_STACK_LINE(3641)
								if (((blueResult > (int)254))){
									HX_STACK_LINE(3642)
									::flash::Memory_obj::setByte((i + (int)3),(int)255);
								}
								else{
									HX_STACK_LINE(3645)
									if (((blueResult < (int)1))){
										HX_STACK_LINE(3646)
										::flash::Memory_obj::setByte((i + (int)3),(int)0);
									}
									else{
										HX_STACK_LINE(3650)
										::flash::Memory_obj::setByte((i + (int)3),::Std_obj::_int(blueResult));
									}
								}
								HX_STACK_LINE(3654)
								i = (i + (int)4);
							}
							HX_STACK_LINE(3658)
							byteArray->position = (int)0;
							HX_STACK_LINE(3660)
							imageData->setPixels(imageData->get_rect(),byteArray);
						}
;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setFilter,(void))

bool Actor_obj::drawsImage( ){
	HX_STACK_PUSH("Actor::drawsImage","com/stencyl/models/Actor.hx",3375);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3375)
	return this->drawActor;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,drawsImage,return )

Void Actor_obj::disableActorDrawing( ){
{
		HX_STACK_PUSH("Actor::disableActorDrawing","com/stencyl/models/Actor.hx",3357);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3358)
		this->drawActor = false;
		HX_STACK_LINE(3360)
		if (((this->currAnimation != null()))){
			HX_STACK_LINE(3361)
			this->currAnimation->set_visible(false);
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3365);
				{
					HX_STACK_LINE(3365)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->animationMap);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/models/Actor.hx",3365);
						{
							HX_STACK_LINE(3365)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(3365)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(3365)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			Dynamic anim = __it->next();
			if (((anim != null()))){
				HX_STACK_LINE(3368)
				anim->__FieldRef(HX_CSTRING("visible")) = false;
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,disableActorDrawing,(void))

Void Actor_obj::enableActorDrawing( ){
{
		HX_STACK_PUSH("Actor::enableActorDrawing","com/stencyl/models/Actor.hx",3339);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3340)
		this->drawActor = true;
		HX_STACK_LINE(3342)
		if (((this->currAnimation != null()))){
			HX_STACK_LINE(3343)
			this->currAnimation->set_visible(true);
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3347);
				{
					HX_STACK_LINE(3347)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->animationMap);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/models/Actor.hx",3347);
						{
							HX_STACK_LINE(3347)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(3347)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(3347)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			Dynamic anim = __it->next();
			if (((anim != null()))){
				HX_STACK_LINE(3350)
				anim->__FieldRef(HX_CSTRING("visible")) = true;
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,enableActorDrawing,(void))

::flash::display::BitmapData Actor_obj::getCurrentImage( ){
	HX_STACK_PUSH("Actor::getCurrentImage","com/stencyl/models/Actor.hx",3334);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3334)
	return (hx::TCast< com::stencyl::graphics::AbstractAnimation >::cast(this->currAnimation))->getCurrentImage();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getCurrentImage,return )

Void Actor_obj::drawImage( ::com::stencyl::graphics::G g){
{
		HX_STACK_PUSH("Actor::drawImage","com/stencyl/models/Actor.hx",3292);
		HX_STACK_THIS(this);
		HX_STACK_ARG(g,"g");
		HX_STACK_LINE(3292)
		if (((this->currAnimation != null()))){
			HX_STACK_LINE(3295)
			Float x = (int)0;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(3296)
			Float y = (int)0;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(3299)
			if ((g->drawActor)){
				HX_STACK_LINE(3301)
				x = (g->x + ::com::stencyl::Engine_obj::cameraX);
				HX_STACK_LINE(3302)
				y = (g->y + ::com::stencyl::Engine_obj::cameraY);
			}
			else{
				HX_STACK_LINE(3307)
				x = g->x;
				HX_STACK_LINE(3308)
				y = g->y;
			}
			HX_STACK_LINE(3313)
			if (((this->realAngle > (int)0))){
				HX_STACK_LINE(3315)
				this->drawMatrix->identity();
				HX_STACK_LINE(3316)
				this->transformPoint->x = ((int)0 - (Float((this->cacheWidth * ::com::stencyl::Engine_obj::SCALE)) / Float((int)2)));
				HX_STACK_LINE(3317)
				this->transformPoint->y = ((int)0 - (Float((this->cacheHeight * ::com::stencyl::Engine_obj::SCALE)) / Float((int)2)));
				HX_STACK_LINE(3319)
				this->drawMatrix->translate((-(this->transformPoint->x) * ::com::stencyl::Engine_obj::SCALE),(-(this->transformPoint->y) * ::com::stencyl::Engine_obj::SCALE));
				HX_STACK_LINE(3320)
				this->drawMatrix->scale(this->realScaleX,this->realScaleY);
				HX_STACK_LINE(3321)
				this->drawMatrix->rotate((this->realAngle * ((Float(3.1415926535897) / Float((int)180)))));
				HX_STACK_LINE(3323)
				this->drawMatrix->translate((this->colX * ::com::stencyl::Engine_obj::SCALE),(this->colY * ::com::stencyl::Engine_obj::SCALE));
				HX_STACK_LINE(3325)
				hx::AddEq(x,(this->transformMatrix->tx - this->drawMatrix->tx));
				HX_STACK_LINE(3326)
				hx::AddEq(y,(this->transformMatrix->ty - this->drawMatrix->ty));
			}
			HX_STACK_LINE(3329)
			(hx::TCast< com::stencyl::graphics::AbstractAnimation >::cast(this->currAnimation))->draw(g,x,y,(this->realAngle * ((Float(3.1415926535897) / Float((int)180)))),g->alpha);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,drawImage,(void))

Void Actor_obj::onTweenPositionComplete( ){
{
		HX_STACK_PUSH("Actor::onTweenPositionComplete","com/stencyl/models/Actor.hx",3276);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3277)
		this->updateTweenProperties();
		HX_STACK_LINE(3278)
		(this->activePositionTweens)--;
		HX_STACK_LINE(3280)
		if (((this->currOffset != null()))){
			HX_STACK_LINE(3281)
			this->resetReal(this->realX,this->realY);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,onTweenPositionComplete,(void))

Void Actor_obj::onTweenAngleComplete( ){
{
		HX_STACK_PUSH("Actor::onTweenAngleComplete","com/stencyl/models/Actor.hx",3270);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3271)
		this->updateTweenProperties();
		HX_STACK_LINE(3272)
		(this->activeAngleTweens)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,onTweenAngleComplete,(void))

Void Actor_obj::moveBy( Float x,Float y,hx::Null< Float >  __o_duration,Dynamic easing){
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("Actor::moveBy","com/stencyl/models/Actor.hx",3265);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		HX_STACK_LINE(3265)
		this->moveTo((this->getX(false) + x),(this->getY(false) + y),duration,easing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Actor_obj,moveBy,(void))

Void Actor_obj::spinBy( Float angle,hx::Null< Float >  __o_duration,Dynamic easing){
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("Actor::spinBy","com/stencyl/models/Actor.hx",3260);
	HX_STACK_THIS(this);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		HX_STACK_LINE(3260)
		this->spinTo((this->realAngle + angle),duration,easing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,spinBy,(void))

Void Actor_obj::moveTo( Float x,Float y,hx::Null< Float >  __o_duration,Dynamic easing){
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("Actor::moveTo","com/stencyl/models/Actor.hx",3244);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		HX_STACK_LINE(3245)
		this->tweenLoc->x = this->getX(false);
		HX_STACK_LINE(3246)
		this->tweenLoc->y = this->getY(false);
		HX_STACK_LINE(3248)
		if (((easing == null()))){
			HX_STACK_LINE(3249)
			easing = ::motion::easing::Linear_obj::get_easeNone();
		}
		HX_STACK_LINE(3253)
		(this->activePositionTweens)++;
		struct _Function_1_1{
			inline static Dynamic Block( Float &x,Float &y){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3255);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("x") , x,false);
					__result->Add(HX_CSTRING("y") , y,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(3255)
		::motion::Actuate_obj::tween(this->tweenLoc,duration,_Function_1_1::Block(x,y),null(),null())->ease(easing)->onComplete(this->onTweenPositionComplete_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Actor_obj,moveTo,(void))

Void Actor_obj::spinTo( Float angle,hx::Null< Float >  __o_duration,Dynamic easing){
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("Actor::spinTo","com/stencyl/models/Actor.hx",3230);
	HX_STACK_THIS(this);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		HX_STACK_LINE(3231)
		this->tweenAngle->angle = this->realAngle;
		HX_STACK_LINE(3233)
		if (((easing == null()))){
			HX_STACK_LINE(3234)
			easing = ::motion::easing::Linear_obj::get_easeNone();
		}
		HX_STACK_LINE(3238)
		(this->activeAngleTweens)++;
		struct _Function_1_1{
			inline static Dynamic Block( Float &angle){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3240);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("angle") , angle,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(3240)
		::motion::Actuate_obj::tween(this->tweenAngle,duration,_Function_1_1::Block(angle),null(),null())->ease(easing)->onComplete(this->onTweenAngleComplete_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,spinTo,(void))

Void Actor_obj::growTo( hx::Null< Float >  __o_scaleX,hx::Null< Float >  __o_scaleY,hx::Null< Float >  __o_duration,Dynamic easing){
Float scaleX = __o_scaleX.Default(1);
Float scaleY = __o_scaleY.Default(1);
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("Actor::growTo","com/stencyl/models/Actor.hx",3219);
	HX_STACK_THIS(this);
	HX_STACK_ARG(scaleX,"scaleX");
	HX_STACK_ARG(scaleY,"scaleY");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		HX_STACK_LINE(3220)
		if (((easing == null()))){
			HX_STACK_LINE(3221)
			easing = ::motion::easing::Linear_obj::get_easeNone();
		}
		struct _Function_1_1{
			inline static Dynamic Block( Float &scaleY,Float &scaleX){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3225);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("realScaleX") , scaleX,false);
					__result->Add(HX_CSTRING("realScaleY") , scaleY,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(3225)
		::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,_Function_1_1::Block(scaleY,scaleX),null(),null())->ease(easing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Actor_obj,growTo,(void))

Void Actor_obj::fadeTo( Float value,hx::Null< Float >  __o_duration,Dynamic easing){
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("Actor::fadeTo","com/stencyl/models/Actor.hx",3209);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		HX_STACK_LINE(3210)
		if (((easing == null()))){
			HX_STACK_LINE(3211)
			easing = ::motion::easing::Linear_obj::get_easeNone();
		}
		struct _Function_1_1{
			inline static Dynamic Block( Float &value){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",3215);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , value,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(3215)
		::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,_Function_1_1::Block(value),null(),null())->ease(easing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,fadeTo,(void))

Void Actor_obj::cancelTweens( ){
{
		HX_STACK_PUSH("Actor::cancelTweens","com/stencyl/models/Actor.hx",3194);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3195)
		::motion::Actuate_obj::stop(hx::ObjectPtr<OBJ_>(this),Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("alpha")).Add(HX_CSTRING("realScaleX")).Add(HX_CSTRING("realScaleY"))),false,false);
		HX_STACK_LINE(3197)
		::motion::Actuate_obj::stop(this->tweenAngle,null(),false,false);
		HX_STACK_LINE(3198)
		::motion::Actuate_obj::stop(this->tweenLoc,null(),false,false);
		HX_STACK_LINE(3200)
		this->activePositionTweens = (int)0;
		HX_STACK_LINE(3201)
		this->activeAngleTweens = (int)0;
		HX_STACK_LINE(3203)
		::motion::Actuate_obj::unloadForTarget(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(3204)
		::motion::Actuate_obj::unloadForTarget(this->tweenAngle);
		HX_STACK_LINE(3205)
		::motion::Actuate_obj::unloadForTarget(this->tweenLoc);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,cancelTweens,(void))

bool Actor_obj::isMouseReleased( ){
	HX_STACK_PUSH("Actor::isMouseReleased","com/stencyl/models/Actor.hx",3185);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3185)
	return (bool(this->isMouseOver()) && bool(::com::stencyl::Input_obj::mouseReleased));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isMouseReleased,return )

bool Actor_obj::isMousePressed( ){
	HX_STACK_PUSH("Actor::isMousePressed","com/stencyl/models/Actor.hx",3180);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3180)
	return (bool(this->isMouseOver()) && bool(::com::stencyl::Input_obj::mousePressed));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isMousePressed,return )

bool Actor_obj::isMouseDown( ){
	HX_STACK_PUSH("Actor::isMouseDown","com/stencyl/models/Actor.hx",3175);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3175)
	return (bool(this->isMouseOver()) && bool(::com::stencyl::Input_obj::mouseDown));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isMouseDown,return )

bool Actor_obj::isMouseHover( ){
	HX_STACK_PUSH("Actor::isMouseHover","com/stencyl/models/Actor.hx",3170);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3170)
	return (bool(this->isMouseOver()) && bool(::com::stencyl::Input_obj::mouseUp));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isMouseHover,return )

bool Actor_obj::isMouseOver( ){
	HX_STACK_PUSH("Actor::isMouseOver","com/stencyl/models/Actor.hx",3123);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3124)
	Float mx;		HX_STACK_VAR(mx,"mx");
	HX_STACK_LINE(3125)
	Float my;		HX_STACK_VAR(my,"my");
	HX_STACK_LINE(3127)
	if ((this->isHUD)){
		HX_STACK_LINE(3129)
		mx = (Float(::com::stencyl::Input_obj::mouseX) / Float(::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(3130)
		my = (Float(::com::stencyl::Input_obj::mouseY) / Float(::com::stencyl::Engine_obj::SCALE));
	}
	else{
		HX_STACK_LINE(3135)
		mx = (Float(((::com::stencyl::Input_obj::mouseX - ::com::stencyl::Engine_obj::cameraX))) / Float(::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(3136)
		my = (Float(((::com::stencyl::Input_obj::mouseY - ::com::stencyl::Engine_obj::cameraY))) / Float(::com::stencyl::Engine_obj::SCALE));
	}
	HX_STACK_LINE(3142)
	Float offsetX = (((this->get_scaleX() - (int)1)) * ::Math_obj::floor((Float(this->cacheWidth) / Float((int)2))));		HX_STACK_VAR(offsetX,"offsetX");
	HX_STACK_LINE(3143)
	Float offsetY = (((this->get_scaleY() - (int)1)) * ::Math_obj::floor((Float(this->cacheHeight) / Float((int)2))));		HX_STACK_VAR(offsetY,"offsetY");
	HX_STACK_LINE(3145)
	Float xPos = (this->colX - offsetX);		HX_STACK_VAR(xPos,"xPos");
	HX_STACK_LINE(3146)
	Float yPos = (this->colY - offsetY);		HX_STACK_VAR(yPos,"yPos");
	HX_STACK_LINE(3148)
	if (((this->get_rotation() != (int)0))){
		HX_STACK_LINE(3152)
		Float actorOriginX = (xPos + this->currOrigin->x);		HX_STACK_VAR(actorOriginX,"actorOriginX");
		HX_STACK_LINE(3153)
		Float actorOriginY = (yPos + this->currOrigin->y);		HX_STACK_VAR(actorOriginY,"actorOriginY");
		HX_STACK_LINE(3154)
		Float xFromOrigin = (mx - actorOriginX);		HX_STACK_VAR(xFromOrigin,"xFromOrigin");
		HX_STACK_LINE(3155)
		Float yFromOrigin = (my - actorOriginY);		HX_STACK_VAR(yFromOrigin,"yFromOrigin");
		HX_STACK_LINE(3156)
		Float rotationRadians = ((Float(3.1415926535897) / Float((int)180)) * this->get_rotation());		HX_STACK_VAR(rotationRadians,"rotationRadians");
		HX_STACK_LINE(3157)
		Float mxNew = ((actorOriginX + (xFromOrigin * ::Math_obj::cos(rotationRadians))) + (yFromOrigin * ::Math_obj::sin(rotationRadians)));		HX_STACK_VAR(mxNew,"mxNew");
		HX_STACK_LINE(3158)
		Float myNew = ((actorOriginY - (xFromOrigin * ::Math_obj::sin(rotationRadians))) + (yFromOrigin * ::Math_obj::cos(rotationRadians)));		HX_STACK_VAR(myNew,"myNew");
		HX_STACK_LINE(3159)
		mx = mxNew;
		HX_STACK_LINE(3160)
		my = myNew;
	}
	HX_STACK_LINE(3163)
	return (bool((bool((bool((mx >= xPos)) && bool((my >= yPos)))) && bool((mx < ((xPos + this->cacheWidth) + (offsetX * (int)2)))))) && bool((my < ((yPos + this->cacheHeight) + (offsetY * (int)2)))));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isMouseOver,return )

Void Actor_obj::setAngularDamping( Float newDamping){
{
		HX_STACK_PUSH("Actor::setAngularDamping","com/stencyl/models/Actor.hx",3111);
		HX_STACK_THIS(this);
		HX_STACK_ARG(newDamping,"newDamping");
		HX_STACK_LINE(3111)
		if (((this->physicsMode == (int)0))){
			HX_STACK_LINE(3113)
			this->body->setAngularDamping(newDamping);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setAngularDamping,(void))

Void Actor_obj::setLinearDamping( Float newDamping){
{
		HX_STACK_PUSH("Actor::setLinearDamping","com/stencyl/models/Actor.hx",3103);
		HX_STACK_THIS(this);
		HX_STACK_ARG(newDamping,"newDamping");
		HX_STACK_LINE(3103)
		if (((this->physicsMode == (int)0))){
			HX_STACK_LINE(3105)
			this->body->setLinearDamping(newDamping);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setLinearDamping,(void))

Void Actor_obj::setAngularMass( Float newAMass){
{
		HX_STACK_PUSH("Actor::setAngularMass","com/stencyl/models/Actor.hx",3094);
		HX_STACK_THIS(this);
		HX_STACK_ARG(newAMass,"newAMass");
		HX_STACK_LINE(3094)
		if (((this->physicsMode == (int)0))){
			HX_STACK_LINE(3097)
			this->md->I = newAMass;
			HX_STACK_LINE(3098)
			this->body->setMassData(this->md);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setAngularMass,(void))

Void Actor_obj::setMass( Float newMass){
{
		HX_STACK_PUSH("Actor::setMass","com/stencyl/models/Actor.hx",3085);
		HX_STACK_THIS(this);
		HX_STACK_ARG(newMass,"newMass");
		HX_STACK_LINE(3085)
		if (((this->physicsMode == (int)0))){
			HX_STACK_LINE(3088)
			this->md->mass = newMass;
			HX_STACK_LINE(3089)
			this->body->setMassData(this->md);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setMass,(void))

Void Actor_obj::setBounciness( Float value){
{
		HX_STACK_PUSH("Actor::setBounciness","com/stencyl/models/Actor.hx",3077);
		HX_STACK_THIS(this);
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(3077)
		if (((this->physicsMode == (int)0))){
			HX_STACK_LINE(3079)
			this->body->setBounciness(value);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setBounciness,(void))

Void Actor_obj::setFriction( Float value){
{
		HX_STACK_PUSH("Actor::setFriction","com/stencyl/models/Actor.hx",3069);
		HX_STACK_THIS(this);
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(3069)
		if (((this->physicsMode == (int)0))){
			HX_STACK_LINE(3071)
			this->body->setFriction(value);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setFriction,(void))

Float Actor_obj::getAngularDamping( ){
	HX_STACK_PUSH("Actor::getAngularDamping","com/stencyl/models/Actor.hx",3059);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3060)
	if (((this->physicsMode == (int)0))){
		HX_STACK_LINE(3061)
		return this->body->getAngularDamping();
	}
	HX_STACK_LINE(3065)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getAngularDamping,return )

Float Actor_obj::getLinearDamping( ){
	HX_STACK_PUSH("Actor::getLinearDamping","com/stencyl/models/Actor.hx",3049);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3050)
	if (((this->physicsMode == (int)0))){
		HX_STACK_LINE(3051)
		return this->body->getLinearDamping();
	}
	HX_STACK_LINE(3055)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getLinearDamping,return )

Float Actor_obj::getAngularMass( ){
	HX_STACK_PUSH("Actor::getAngularMass","com/stencyl/models/Actor.hx",3039);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3040)
	if (((this->physicsMode == (int)0))){
		HX_STACK_LINE(3041)
		return this->md->I;
	}
	HX_STACK_LINE(3045)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getAngularMass,return )

Float Actor_obj::getMass( ){
	HX_STACK_PUSH("Actor::getMass","com/stencyl/models/Actor.hx",3029);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3030)
	if (((this->physicsMode == (int)0))){
		HX_STACK_LINE(3031)
		return this->md->mass;
	}
	HX_STACK_LINE(3035)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getMass,return )

Float Actor_obj::getBounciness( ){
	HX_STACK_PUSH("Actor::getBounciness","com/stencyl/models/Actor.hx",3019);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3020)
	if (((bool((this->physicsMode == (int)0)) && bool((this->body->m_fixtureList != null()))))){
		HX_STACK_LINE(3021)
		return this->body->m_fixtureList->m_restitution;
	}
	HX_STACK_LINE(3025)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getBounciness,return )

Float Actor_obj::getFriction( ){
	HX_STACK_PUSH("Actor::getFriction","com/stencyl/models/Actor.hx",3009);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3010)
	if (((bool((this->physicsMode == (int)0)) && bool((this->body->m_fixtureList != null()))))){
		HX_STACK_LINE(3011)
		return this->body->m_fixtureList->m_friction;
	}
	HX_STACK_LINE(3015)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getFriction,return )

bool Actor_obj::ignoresGravity( ){
	HX_STACK_PUSH("Actor::ignoresGravity","com/stencyl/models/Actor.hx",2999);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3000)
	if (((this->physicsMode > (int)0))){
		HX_STACK_LINE(3001)
		return this->ignoreGravity;
	}
	HX_STACK_LINE(3005)
	return this->body->isIgnoringGravity();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,ignoresGravity,return )

Void Actor_obj::setIgnoreGravity( bool state){
{
		HX_STACK_PUSH("Actor::setIgnoreGravity","com/stencyl/models/Actor.hx",2989);
		HX_STACK_THIS(this);
		HX_STACK_ARG(state,"state");
		HX_STACK_LINE(2990)
		this->ignoreGravity = state;
		HX_STACK_LINE(2992)
		if (((this->physicsMode == (int)0))){
			HX_STACK_LINE(2993)
			this->body->setIgnoreGravity(state);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setIgnoreGravity,(void))

Void Actor_obj::disableRotation( ){
{
		HX_STACK_PUSH("Actor::disableRotation","com/stencyl/models/Actor.hx",2976);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2976)
		if (((this->physicsMode > (int)0))){
			HX_STACK_LINE(2978)
			this->fixedRotation = true;
		}
		else{
			HX_STACK_LINE(2983)
			this->body->setFixedRotation(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,disableRotation,(void))

Void Actor_obj::enableRotation( ){
{
		HX_STACK_PUSH("Actor::enableRotation","com/stencyl/models/Actor.hx",2963);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2963)
		if (((this->physicsMode > (int)0))){
			HX_STACK_LINE(2965)
			this->fixedRotation = false;
		}
		else{
			HX_STACK_LINE(2970)
			this->body->setFixedRotation(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,enableRotation,(void))

::box2D::dynamics::B2Body Actor_obj::getBody( ){
	HX_STACK_PUSH("Actor::getBody","com/stencyl/models/Actor.hx",2958);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2958)
	return this->body;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getBody,return )

Float Actor_obj::getPhysicsHeight( ){
	HX_STACK_PUSH("Actor::getPhysicsHeight","com/stencyl/models/Actor.hx",2949);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2949)
	return (Float(this->cacheHeight) / Float(::com::stencyl::Engine_obj::physicsScale));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getPhysicsHeight,return )

Float Actor_obj::getPhysicsWidth( ){
	HX_STACK_PUSH("Actor::getPhysicsWidth","com/stencyl/models/Actor.hx",2944);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2944)
	return (Float(this->cacheWidth) / Float(::com::stencyl::Engine_obj::physicsScale));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getPhysicsWidth,return )

Float Actor_obj::getHeight( ){
	HX_STACK_PUSH("Actor::getHeight","com/stencyl/models/Actor.hx",2939);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2939)
	return this->cacheHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getHeight,return )

Float Actor_obj::getWidth( ){
	HX_STACK_PUSH("Actor::getWidth","com/stencyl/models/Actor.hx",2934);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2934)
	return this->cacheWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getWidth,return )

Void Actor_obj::applyTorque( Float torque){
{
		HX_STACK_PUSH("Actor::applyTorque","com/stencyl/models/Actor.hx",2913);
		HX_STACK_THIS(this);
		HX_STACK_ARG(torque,"torque");
		HX_STACK_LINE(2913)
		if (((this->physicsMode > (int)0))){
			HX_STACK_LINE(2915)
			if ((!(this->fixedRotation))){
				HX_STACK_LINE(2917)
				hx::SubEq(this->rSpeed,torque);
			}
		}
		else{
			HX_STACK_LINE(2924)
			this->body->applyTorque(torque);
			HX_STACK_LINE(2925)
			this->body->setAwake(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,applyTorque,(void))

Void Actor_obj::applyImpulseInDirection( Float angle,Float speed){
{
		HX_STACK_PUSH("Actor::applyImpulseInDirection","com/stencyl/models/Actor.hx",2903);
		HX_STACK_THIS(this);
		HX_STACK_ARG(angle,"angle");
		HX_STACK_ARG(speed,"speed");
		HX_STACK_LINE(2903)
		this->applyImpulse(::Math_obj::cos(((Float(3.1415926535897) / Float((int)180)) * angle)),::Math_obj::sin(((Float(3.1415926535897) / Float((int)180)) * angle)),speed);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,applyImpulseInDirection,(void))

Void Actor_obj::applyImpulse( Float dirX,Float dirY,Float magnitude){
{
		HX_STACK_PUSH("Actor::applyImpulse","com/stencyl/models/Actor.hx",2869);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dirX,"dirX");
		HX_STACK_ARG(dirY,"dirY");
		HX_STACK_ARG(magnitude,"magnitude");
		HX_STACK_LINE(2870)
		if (((this->physicsMode > (int)0))){
			HX_STACK_LINE(2872)
			this->dummy->x = dirX;
			HX_STACK_LINE(2873)
			this->dummy->y = dirY;
			HX_STACK_LINE(2874)
			this->dummy->normalize();
			HX_STACK_LINE(2877)
			this->accelerateX((this->dummy->x * magnitude));
			HX_STACK_LINE(2878)
			this->accelerateY((this->dummy->y * magnitude));
			HX_STACK_LINE(2881)
			return null();
		}
		HX_STACK_LINE(2884)
		if (((bool((dirX == (int)0)) && bool((dirY == (int)0))))){
			HX_STACK_LINE(2885)
			return null();
		}
		HX_STACK_LINE(2889)
		this->dummy->x = dirX;
		HX_STACK_LINE(2890)
		this->dummy->y = dirY;
		HX_STACK_LINE(2891)
		this->dummy->normalize();
		HX_STACK_LINE(2893)
		if (((magnitude > (int)0))){
			HX_STACK_LINE(2894)
			this->dummy->multiply(magnitude);
		}
		HX_STACK_LINE(2898)
		this->body->applyImpulse(this->dummy,this->body->getWorldCenter());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,applyImpulse,(void))

Void Actor_obj::pushInDirection( Float angle,Float speed){
{
		HX_STACK_PUSH("Actor::pushInDirection","com/stencyl/models/Actor.hx",2859);
		HX_STACK_THIS(this);
		HX_STACK_ARG(angle,"angle");
		HX_STACK_ARG(speed,"speed");
		HX_STACK_LINE(2859)
		this->push(::Math_obj::cos(((Float(3.1415926535897) / Float((int)180)) * angle)),::Math_obj::sin(((Float(3.1415926535897) / Float((int)180)) * angle)),speed);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,pushInDirection,(void))

Void Actor_obj::push( Float dirX,Float dirY,Float magnitude){
{
		HX_STACK_PUSH("Actor::push","com/stencyl/models/Actor.hx",2828);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dirX,"dirX");
		HX_STACK_ARG(dirY,"dirY");
		HX_STACK_ARG(magnitude,"magnitude");
		HX_STACK_LINE(2829)
		if (((this->physicsMode > (int)0))){
			HX_STACK_LINE(2831)
			this->dummy->x = dirX;
			HX_STACK_LINE(2832)
			this->dummy->y = dirY;
			HX_STACK_LINE(2833)
			this->dummy->normalize();
			HX_STACK_LINE(2835)
			this->accelerateX(((this->dummy->x * magnitude) * 0.01));
			HX_STACK_LINE(2836)
			this->accelerateY(((this->dummy->y * magnitude) * 0.01));
			HX_STACK_LINE(2837)
			return null();
		}
		HX_STACK_LINE(2840)
		if (((bool((dirX == (int)0)) && bool((dirY == (int)0))))){
			HX_STACK_LINE(2841)
			return null();
		}
		HX_STACK_LINE(2845)
		this->dummy->x = dirX;
		HX_STACK_LINE(2846)
		this->dummy->y = dirY;
		HX_STACK_LINE(2847)
		this->dummy->normalize();
		HX_STACK_LINE(2849)
		if (((magnitude > (int)0))){
			HX_STACK_LINE(2850)
			this->dummy->multiply(magnitude);
		}
		HX_STACK_LINE(2854)
		this->body->applyForce(this->dummy,this->body->getWorldCenter());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,push,(void))

Void Actor_obj::changeAngularVelocity( Float omega){
{
		HX_STACK_PUSH("Actor::changeAngularVelocity","com/stencyl/models/Actor.hx",2810);
		HX_STACK_THIS(this);
		HX_STACK_ARG(omega,"omega");
		HX_STACK_LINE(2810)
		if (((this->physicsMode > (int)0))){
			HX_STACK_LINE(2812)
			hx::AddEq(this->rSpeed,((Float((int)180) / Float(3.1415926535897)) * omega));
		}
		else{
			HX_STACK_LINE(2818)
			this->body->setAngularVelocity((this->body->getAngularVelocity() + omega));
			HX_STACK_LINE(2819)
			this->body->setAwake(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,changeAngularVelocity,(void))

Void Actor_obj::setAngularVelocity( Float omega){
{
		HX_STACK_PUSH("Actor::setAngularVelocity","com/stencyl/models/Actor.hx",2796);
		HX_STACK_THIS(this);
		HX_STACK_ARG(omega,"omega");
		HX_STACK_LINE(2796)
		if (((this->physicsMode > (int)0))){
			HX_STACK_LINE(2798)
			this->rSpeed = ((Float((int)180) / Float(3.1415926535897)) * omega);
		}
		else{
			HX_STACK_LINE(2804)
			this->body->setAngularVelocity(omega);
			HX_STACK_LINE(2805)
			this->body->setAwake(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setAngularVelocity,(void))

Float Actor_obj::getAngularVelocity( ){
	HX_STACK_PUSH("Actor::getAngularVelocity","com/stencyl/models/Actor.hx",2786);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2787)
	if (((this->physicsMode > (int)0))){
		HX_STACK_LINE(2788)
		return ((Float(3.1415926535897) / Float((int)180)) * this->rSpeed);
	}
	HX_STACK_LINE(2792)
	return this->body->getAngularVelocity();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getAngularVelocity,return )

Void Actor_obj::rotate( Float angle,hx::Null< bool >  __o_inRadians){
bool inRadians = __o_inRadians.Default(true);
	HX_STACK_PUSH("Actor::rotate","com/stencyl/models/Actor.hx",2757);
	HX_STACK_THIS(this);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(inRadians,"inRadians");
{
		HX_STACK_LINE(2757)
		if ((inRadians)){
			HX_STACK_LINE(2759)
			if (((this->physicsMode > (int)0))){
				HX_STACK_LINE(2761)
				hx::AddEq(this->realAngle,((Float((int)180) / Float(3.1415926535897)) * angle));
			}
			else{
				HX_STACK_LINE(2766)
				this->body->setAngle((this->body->getAngle() + angle));
			}
		}
		else{
			HX_STACK_LINE(2772)
			if (((this->physicsMode > (int)0))){
				HX_STACK_LINE(2774)
				hx::AddEq(this->realAngle,angle);
			}
			else{
				HX_STACK_LINE(2779)
				this->body->setAngle((this->body->getAngle() + ((Float(3.1415926535897) / Float((int)180)) * angle)));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,rotate,(void))

Void Actor_obj::setAngle( Float angle,hx::Null< bool >  __o_inRadians){
bool inRadians = __o_inRadians.Default(true);
	HX_STACK_PUSH("Actor::setAngle","com/stencyl/models/Actor.hx",2726);
	HX_STACK_THIS(this);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(inRadians,"inRadians");
{
		HX_STACK_LINE(2727)
		if ((inRadians)){
			HX_STACK_LINE(2728)
			if (((this->physicsMode > (int)0))){
				HX_STACK_LINE(2730)
				this->realAngle = ((Float((int)180) / Float(3.1415926535897)) * angle);
			}
			else{
				HX_STACK_LINE(2735)
				this->body->setAngle(angle);
			}
		}
		else{
			HX_STACK_LINE(2741)
			if (((this->physicsMode > (int)0))){
				HX_STACK_LINE(2743)
				this->realAngle = angle;
			}
			else{
				HX_STACK_LINE(2748)
				this->body->setAngle(((Float(3.1415926535897) / Float((int)180)) * angle));
			}
		}
		HX_STACK_LINE(2753)
		this->updateMatrix = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,setAngle,(void))

Float Actor_obj::getAngleInDegrees( ){
	HX_STACK_PUSH("Actor::getAngleInDegrees","com/stencyl/models/Actor.hx",2716);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2717)
	if (((this->physicsMode > (int)0))){
		HX_STACK_LINE(2718)
		return this->realAngle;
	}
	HX_STACK_LINE(2722)
	return ((Float((int)180) / Float(3.1415926535897)) * this->body->getAngle());
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getAngleInDegrees,return )

Float Actor_obj::getAngle( ){
	HX_STACK_PUSH("Actor::getAngle","com/stencyl/models/Actor.hx",2706);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2707)
	if (((this->physicsMode > (int)0))){
		HX_STACK_LINE(2708)
		return ((Float(3.1415926535897) / Float((int)180)) * this->realAngle);
	}
	HX_STACK_LINE(2712)
	return this->body->getAngle();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getAngle,return )

Void Actor_obj::accelerate( Float angle,Float speed){
{
		HX_STACK_PUSH("Actor::accelerate","com/stencyl/models/Actor.hx",2696);
		HX_STACK_THIS(this);
		HX_STACK_ARG(angle,"angle");
		HX_STACK_ARG(speed,"speed");
		HX_STACK_LINE(2697)
		this->setXVelocity((this->getXVelocity() + (speed * ::Math_obj::cos(((Float(3.1415926535897) / Float((int)180)) * angle)))));
		HX_STACK_LINE(2698)
		this->setYVelocity((this->getYVelocity() + (speed * ::Math_obj::sin(((Float(3.1415926535897) / Float((int)180)) * angle)))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,accelerate,(void))

Void Actor_obj::accelerateY( Float dy){
{
		HX_STACK_PUSH("Actor::accelerateY","com/stencyl/models/Actor.hx",2691);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dy,"dy");
		HX_STACK_LINE(2691)
		this->setYVelocity((this->getYVelocity() + dy));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,accelerateY,(void))

Void Actor_obj::accelerateX( Float dx){
{
		HX_STACK_PUSH("Actor::accelerateX","com/stencyl/models/Actor.hx",2686);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dx,"dx");
		HX_STACK_LINE(2686)
		this->setXVelocity((this->getXVelocity() + dx));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,accelerateX,(void))

Void Actor_obj::setVelocity( Float angle,Float speed){
{
		HX_STACK_PUSH("Actor::setVelocity","com/stencyl/models/Actor.hx",2680);
		HX_STACK_THIS(this);
		HX_STACK_ARG(angle,"angle");
		HX_STACK_ARG(speed,"speed");
		HX_STACK_LINE(2681)
		this->setXVelocity((speed * ::Math_obj::cos(((Float(3.1415926535897) / Float((int)180)) * angle))));
		HX_STACK_LINE(2682)
		this->setYVelocity((speed * ::Math_obj::sin(((Float(3.1415926535897) / Float((int)180)) * angle))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,setVelocity,(void))

Void Actor_obj::setYVelocity( Float dy){
{
		HX_STACK_PUSH("Actor::setYVelocity","com/stencyl/models/Actor.hx",2666);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dy,"dy");
		HX_STACK_LINE(2667)
		if (((this->physicsMode > (int)0))){
			HX_STACK_LINE(2669)
			this->ySpeed = dy;
			HX_STACK_LINE(2670)
			return null();
		}
		HX_STACK_LINE(2673)
		::box2D::common::math::B2Vec2 v = this->body->getLinearVelocity();		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(2674)
		v->y = dy;
		HX_STACK_LINE(2675)
		this->body->setLinearVelocity(v);
		HX_STACK_LINE(2676)
		this->body->setAwake(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setYVelocity,(void))

Void Actor_obj::setXVelocity( Float dx){
{
		HX_STACK_PUSH("Actor::setXVelocity","com/stencyl/models/Actor.hx",2652);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dx,"dx");
		HX_STACK_LINE(2653)
		if (((this->physicsMode > (int)0))){
			HX_STACK_LINE(2655)
			this->xSpeed = dx;
			HX_STACK_LINE(2656)
			return null();
		}
		HX_STACK_LINE(2659)
		::box2D::common::math::B2Vec2 v = this->body->getLinearVelocity();		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(2660)
		v->x = dx;
		HX_STACK_LINE(2661)
		this->body->setLinearVelocity(v);
		HX_STACK_LINE(2662)
		this->body->setAwake(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setXVelocity,(void))

Float Actor_obj::getYVelocity( ){
	HX_STACK_PUSH("Actor::getYVelocity","com/stencyl/models/Actor.hx",2642);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2643)
	if (((this->physicsMode > (int)0))){
		HX_STACK_LINE(2644)
		return this->ySpeed;
	}
	HX_STACK_LINE(2648)
	return this->body->getLinearVelocity()->y;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getYVelocity,return )

Float Actor_obj::getXVelocity( ){
	HX_STACK_PUSH("Actor::getXVelocity","com/stencyl/models/Actor.hx",2632);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2633)
	if (((this->physicsMode > (int)0))){
		HX_STACK_LINE(2634)
		return this->xSpeed;
	}
	HX_STACK_LINE(2638)
	return this->body->getLinearVelocity()->x;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getXVelocity,return )

Void Actor_obj::setOriginPoint( int x,int y){
{
		HX_STACK_PUSH("Actor::setOriginPoint","com/stencyl/models/Actor.hx",2562);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(2563)
		::box2D::common::math::B2Vec2 resetPosition = null();		HX_STACK_VAR(resetPosition,"resetPosition");
		HX_STACK_LINE(2565)
		if (((this->physicsMode == (int)0))){
			HX_STACK_LINE(2566)
			resetPosition = this->body->getPosition();
		}
		else{
			HX_STACK_LINE(2571)
			resetPosition = ::box2D::common::math::B2Vec2_obj::__new(::com::stencyl::Engine_obj::toPhysicalUnits(this->realX),::com::stencyl::Engine_obj::toPhysicalUnits(this->realY));
		}
		HX_STACK_LINE(2575)
		::box2D::common::math::B2Vec2 offsetDiff = ::box2D::common::math::B2Vec2_obj::__new(this->currOffset->x,this->currOffset->y);		HX_STACK_VAR(offsetDiff,"offsetDiff");
		HX_STACK_LINE(2576)
		Float radians = this->getAngle();		HX_STACK_VAR(radians,"radians");
		HX_STACK_LINE(2578)
		bool rotated = (::Std_obj::_int((radians * ((Float((int)180) / Float(3.1415926535897))))) != (int)0);		HX_STACK_VAR(rotated,"rotated");
		HX_STACK_LINE(2580)
		Float w = this->cacheWidth;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(2581)
		Float h = this->cacheHeight;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(2583)
		int newOffX = ::Std_obj::_int((x - (Float(w) / Float((int)2))));		HX_STACK_VAR(newOffX,"newOffX");
		HX_STACK_LINE(2584)
		int newOffY = ::Std_obj::_int((y - (Float(h) / Float((int)2))));		HX_STACK_VAR(newOffY,"newOffY");
		HX_STACK_LINE(2586)
		if (((bool((bool((this->currOrigin != null())) && bool(((bool((::Std_obj::_int(this->currOffset->x) != newOffX)) || bool((::Std_obj::_int(this->currOffset->y) != newOffY))))))) && bool(rotated)))){
			HX_STACK_LINE(2588)
			Float oldAng = (radians + ::Math_obj::atan2(-(this->currOffset->y),-(this->currOffset->x)));		HX_STACK_VAR(oldAng,"oldAng");
			HX_STACK_LINE(2589)
			Float newAng = (radians + ::Math_obj::atan2(-(newOffY),-(newOffX)));		HX_STACK_VAR(newAng,"newAng");
			HX_STACK_LINE(2590)
			Float oldDist = ::Math_obj::sqrt((::Math_obj::pow(this->currOffset->x,(int)2) + ::Math_obj::pow(this->currOffset->y,(int)2)));		HX_STACK_VAR(oldDist,"oldDist");
			HX_STACK_LINE(2591)
			Float newDist = ::Math_obj::sqrt((::Math_obj::pow(newOffX,(int)2) + ::Math_obj::pow(newOffY,(int)2)));		HX_STACK_VAR(newDist,"newDist");
			HX_STACK_LINE(2593)
			int oldFixCenterX = ::Math_obj::round((this->currOrigin->x + (::Math_obj::cos(oldAng) * oldDist)));		HX_STACK_VAR(oldFixCenterX,"oldFixCenterX");
			HX_STACK_LINE(2594)
			int oldFixCenterY = ::Math_obj::round((this->currOrigin->y + (::Math_obj::sin(oldAng) * oldDist)));		HX_STACK_VAR(oldFixCenterY,"oldFixCenterY");
			HX_STACK_LINE(2595)
			int newFixCenterX = ::Math_obj::round((x + (::Math_obj::cos(newAng) * newDist)));		HX_STACK_VAR(newFixCenterX,"newFixCenterX");
			HX_STACK_LINE(2596)
			int newFixCenterY = ::Math_obj::round((y + (::Math_obj::sin(newAng) * newDist)));		HX_STACK_VAR(newFixCenterY,"newFixCenterY");
			HX_STACK_LINE(2598)
			hx::AddEq(resetPosition->x,::com::stencyl::Engine_obj::toPhysicalUnits((oldFixCenterX - newFixCenterX)));
			HX_STACK_LINE(2599)
			hx::AddEq(resetPosition->y,::com::stencyl::Engine_obj::toPhysicalUnits((oldFixCenterY - newFixCenterY)));
		}
		HX_STACK_LINE(2602)
		this->currOrigin->x = x;
		HX_STACK_LINE(2603)
		this->currOrigin->y = y;
		HX_STACK_LINE(2604)
		this->originX = this->currOffset->x = newOffX;
		HX_STACK_LINE(2605)
		this->originY = this->currOffset->y = newOffY;
		HX_STACK_LINE(2607)
		offsetDiff->x = (this->currOffset->x - offsetDiff->x);
		HX_STACK_LINE(2608)
		offsetDiff->y = (this->currOffset->y - offsetDiff->y);
		HX_STACK_LINE(2610)
		hx::AddEq(resetPosition->x,::com::stencyl::Engine_obj::toPhysicalUnits(offsetDiff->x));
		HX_STACK_LINE(2611)
		hx::AddEq(resetPosition->y,::com::stencyl::Engine_obj::toPhysicalUnits(offsetDiff->y));
		HX_STACK_LINE(2613)
		if (((this->physicsMode == (int)0))){
			HX_STACK_LINE(2614)
			this->body->setPosition(resetPosition);
		}
		else{
			HX_STACK_LINE(2620)
			this->realX = ::com::stencyl::Engine_obj::toPixelUnits(resetPosition->x);
			HX_STACK_LINE(2621)
			this->realY = ::com::stencyl::Engine_obj::toPixelUnits(resetPosition->y);
		}
		HX_STACK_LINE(2624)
		this->resetOrigin = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,setOriginPoint,(void))

Void Actor_obj::followWithOffset( ::com::stencyl::models::Actor a,int ox,int oy){
{
		HX_STACK_PUSH("Actor::followWithOffset","com/stencyl/models/Actor.hx",2546);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(ox,"ox");
		HX_STACK_ARG(oy,"oy");
		HX_STACK_LINE(2547)
		if (((this->physicsMode > (int)0))){
			HX_STACK_LINE(2549)
			{
				HX_STACK_LINE(2549)
				bool sweep = false;		HX_STACK_VAR(sweep,"sweep");
				HX_STACK_LINE(2549)
				this->moveActorBy(((a->getXCenter() + ox) - this->realX),((a->getYCenter() + oy) - this->realY),null(),sweep);
			}
			HX_STACK_LINE(2550)
			return null();
		}
		HX_STACK_LINE(2553)
		::box2D::common::math::B2Vec2 pt = a->body->getWorldCenter();		HX_STACK_VAR(pt,"pt");
		HX_STACK_LINE(2555)
		hx::AddEq(pt->x,::com::stencyl::Engine_obj::toPhysicalUnits(ox));
		HX_STACK_LINE(2556)
		hx::AddEq(pt->y,::com::stencyl::Engine_obj::toPhysicalUnits(oy));
		HX_STACK_LINE(2558)
		this->body->setPosition(pt);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,followWithOffset,(void))

Void Actor_obj::follow( ::com::stencyl::models::Actor a){
{
		HX_STACK_PUSH("Actor::follow","com/stencyl/models/Actor.hx",2530);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(2531)
		if (((a == null()))){
			HX_STACK_LINE(2532)
			return null();
		}
		HX_STACK_LINE(2536)
		if (((this->physicsMode > (int)0))){
			HX_STACK_LINE(2538)
			{
				HX_STACK_LINE(2538)
				bool sweep = false;		HX_STACK_VAR(sweep,"sweep");
				HX_STACK_LINE(2538)
				this->moveActorBy((a->getXCenter() - this->realX),(a->getYCenter() - this->realY),null(),sweep);
			}
			HX_STACK_LINE(2539)
			return null();
		}
		HX_STACK_LINE(2542)
		this->body->setPosition(a->body->getWorldCenter());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,follow,(void))

Void Actor_obj::setY( Float y,hx::Null< bool >  __o_resetSpeed,hx::Null< bool >  __o_noCollision){
bool resetSpeed = __o_resetSpeed.Default(false);
bool noCollision = __o_noCollision.Default(false);
	HX_STACK_PUSH("Actor::setY","com/stencyl/models/Actor.hx",2487);
	HX_STACK_THIS(this);
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(resetSpeed,"resetSpeed");
	HX_STACK_ARG(noCollision,"noCollision");
{
		HX_STACK_LINE(2488)
		if (((this->physicsMode == (int)1))){
			HX_STACK_LINE(2490)
			bool sweep = false;		HX_STACK_VAR(sweep,"sweep");
			HX_STACK_LINE(2490)
			this->moveActorBy((this->realX - this->realX),(((y + ::Math_obj::floor((Float(this->cacheHeight) / Float((int)2)))) + this->currOffset->y) - this->realY),(  (((bool(!(noCollision)) && bool(this->continuousCollision)))) ? Dynamic(this->groupsToCollideWith) : Dynamic(null()) ),sweep);
		}
		else{
			HX_STACK_LINE(2493)
			if (((this->physicsMode == (int)2))){
				HX_STACK_LINE(2494)
				this->resetReal(this->realX,((y + ::Math_obj::floor((Float(this->cacheHeight) / Float((int)2)))) + this->currOffset->y));
			}
			else{
				HX_STACK_LINE(2500)
				if (((bool(this->isRegion) || bool(this->isTerrainRegion)))){
					HX_STACK_LINE(2501)
					this->dummy->y = ::com::stencyl::Engine_obj::toPhysicalUnits(y);
				}
				else{
					HX_STACK_LINE(2506)
					this->dummy->y = ::com::stencyl::Engine_obj::toPhysicalUnits(((y + ::Math_obj::floor((Float(this->cacheHeight) / Float((int)2)))) + this->currOffset->y));
				}
				HX_STACK_LINE(2510)
				this->dummy->x = this->body->getPosition()->x;
				HX_STACK_LINE(2512)
				this->body->setPosition(this->dummy);
				HX_STACK_LINE(2514)
				if ((resetSpeed)){
					HX_STACK_LINE(2515)
					this->body->setLinearVelocity(this->zero);
				}
			}
		}
		HX_STACK_LINE(2520)
		if ((this->snapOnSet)){
			HX_STACK_LINE(2522)
			this->drawX = this->realX;
			HX_STACK_LINE(2523)
			this->drawY = this->realY;
		}
		HX_STACK_LINE(2526)
		this->updateMatrix = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,setY,(void))

Void Actor_obj::setX( Float x,hx::Null< bool >  __o_resetSpeed,hx::Null< bool >  __o_noCollision){
bool resetSpeed = __o_resetSpeed.Default(false);
bool noCollision = __o_noCollision.Default(false);
	HX_STACK_PUSH("Actor::setX","com/stencyl/models/Actor.hx",2444);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(resetSpeed,"resetSpeed");
	HX_STACK_ARG(noCollision,"noCollision");
{
		HX_STACK_LINE(2445)
		if (((this->physicsMode == (int)1))){
			HX_STACK_LINE(2447)
			bool sweep = false;		HX_STACK_VAR(sweep,"sweep");
			HX_STACK_LINE(2447)
			this->moveActorBy((((x + ::Math_obj::floor((Float(this->cacheWidth) / Float((int)2)))) + this->currOffset->x) - this->realX),(this->realY - this->realY),(  (((bool(!(noCollision)) && bool(this->continuousCollision)))) ? Dynamic(this->groupsToCollideWith) : Dynamic(null()) ),sweep);
		}
		else{
			HX_STACK_LINE(2450)
			if (((this->physicsMode == (int)2))){
				HX_STACK_LINE(2451)
				this->resetReal(((x + ::Math_obj::floor((Float(this->cacheWidth) / Float((int)2)))) + this->currOffset->x),this->realY);
			}
			else{
				HX_STACK_LINE(2457)
				if (((bool(this->isRegion) || bool(this->isTerrainRegion)))){
					HX_STACK_LINE(2458)
					this->dummy->x = ::com::stencyl::Engine_obj::toPhysicalUnits(x);
				}
				else{
					HX_STACK_LINE(2463)
					this->dummy->x = ::com::stencyl::Engine_obj::toPhysicalUnits(((x + ::Math_obj::floor((Float(this->cacheWidth) / Float((int)2)))) + this->currOffset->x));
				}
				HX_STACK_LINE(2467)
				this->dummy->y = this->body->getPosition()->y;
				HX_STACK_LINE(2469)
				this->body->setPosition(this->dummy);
				HX_STACK_LINE(2471)
				if ((resetSpeed)){
					HX_STACK_LINE(2472)
					this->body->setLinearVelocity(this->zero);
				}
			}
		}
		HX_STACK_LINE(2477)
		if ((this->snapOnSet)){
			HX_STACK_LINE(2479)
			this->drawX = this->realX;
			HX_STACK_LINE(2480)
			this->drawY = this->realY;
		}
		HX_STACK_LINE(2483)
		this->updateMatrix = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Actor_obj,setX,(void))

Float Actor_obj::getScreenY( ){
	HX_STACK_PUSH("Actor::getScreenY","com/stencyl/models/Actor.hx",2431);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2431)
	if ((this->isHUD)){
		HX_STACK_LINE(2433)
		return this->getY(null());
	}
	else{
		HX_STACK_LINE(2438)
		return (this->getY(null()) + (Float(::com::stencyl::Engine_obj::cameraY) / Float(::com::stencyl::Engine_obj::SCALE)));
	}
	HX_STACK_LINE(2431)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getScreenY,return )

Float Actor_obj::getScreenX( ){
	HX_STACK_PUSH("Actor::getScreenX","com/stencyl/models/Actor.hx",2418);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2418)
	if ((this->isHUD)){
		HX_STACK_LINE(2420)
		return this->getX(null());
	}
	else{
		HX_STACK_LINE(2425)
		return (this->getX(null()) + (Float(::com::stencyl::Engine_obj::cameraX) / Float(::com::stencyl::Engine_obj::SCALE)));
	}
	HX_STACK_LINE(2418)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getScreenX,return )

Float Actor_obj::getYCenter( ){
	HX_STACK_PUSH("Actor::getYCenter","com/stencyl/models/Actor.hx",2405);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2405)
	if (((this->physicsMode == (int)0))){
		HX_STACK_LINE(2407)
		return ::Math_obj::round((::com::stencyl::Engine_obj::toPixelUnits(this->body->getWorldCenter()->y) - this->currOffset->y));
	}
	else{
		HX_STACK_LINE(2412)
		return (this->realY - this->currOffset->y);
	}
	HX_STACK_LINE(2405)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getYCenter,return )

Float Actor_obj::getXCenter( ){
	HX_STACK_PUSH("Actor::getXCenter","com/stencyl/models/Actor.hx",2391);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2391)
	if (((this->physicsMode == (int)0))){
		HX_STACK_LINE(2393)
		return ::Math_obj::round((::com::stencyl::Engine_obj::toPixelUnits(this->body->getWorldCenter()->x) - this->currOffset->x));
	}
	else{
		HX_STACK_LINE(2398)
		return (this->realX - this->currOffset->x);
	}
	HX_STACK_LINE(2391)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getXCenter,return )

Float Actor_obj::getY( hx::Null< bool >  __o_round){
bool round = __o_round.Default(true);
	HX_STACK_PUSH("Actor::getY","com/stencyl/models/Actor.hx",2365);
	HX_STACK_THIS(this);
	HX_STACK_ARG(round,"round");
{
		HX_STACK_LINE(2366)
		Float toReturn = (int)-1;		HX_STACK_VAR(toReturn,"toReturn");
		HX_STACK_LINE(2368)
		if ((!(::com::stencyl::Engine_obj::NO_PHYSICS))){
			HX_STACK_LINE(2369)
			if (((bool(this->isRegion) || bool(this->isTerrainRegion)))){
				HX_STACK_LINE(2371)
				toReturn = (::com::stencyl::Engine_obj::toPixelUnits(this->body->getPosition()->y) - (Float(this->cacheHeight) / Float((int)2)));
			}
			else{
				HX_STACK_LINE(2375)
				if (((this->physicsMode == (int)0))){
					HX_STACK_LINE(2376)
					toReturn = (((this->body->getPosition()->y * ::com::stencyl::Engine_obj::physicsScale) - ::Math_obj::floor((Float(this->cacheHeight) / Float((int)2)))) - this->currOffset->y);
				}
			}
		}
		HX_STACK_LINE(2381)
		if (((bool(::com::stencyl::Engine_obj::NO_PHYSICS) || bool((this->physicsMode > (int)0))))){
			HX_STACK_LINE(2382)
			toReturn = ((this->realY - ::Math_obj::floor((Float(this->cacheHeight) / Float((int)2)))) - this->currOffset->y);
		}
		HX_STACK_LINE(2386)
		return (  ((round)) ? Float(::Math_obj::round(toReturn)) : Float(toReturn) );
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,getY,return )

Float Actor_obj::getX( hx::Null< bool >  __o_round){
bool round = __o_round.Default(true);
	HX_STACK_PUSH("Actor::getX","com/stencyl/models/Actor.hx",2340);
	HX_STACK_THIS(this);
	HX_STACK_ARG(round,"round");
{
		HX_STACK_LINE(2341)
		Float toReturn = (int)-1;		HX_STACK_VAR(toReturn,"toReturn");
		HX_STACK_LINE(2343)
		if ((!(::com::stencyl::Engine_obj::NO_PHYSICS))){
			HX_STACK_LINE(2344)
			if (((bool(this->isRegion) || bool(this->isTerrainRegion)))){
				HX_STACK_LINE(2346)
				toReturn = (::com::stencyl::Engine_obj::toPixelUnits(this->body->getPosition()->x) - (Float(this->cacheWidth) / Float((int)2)));
			}
			else{
				HX_STACK_LINE(2350)
				if (((this->physicsMode == (int)0))){
					HX_STACK_LINE(2351)
					toReturn = (((this->body->getPosition()->x * ::com::stencyl::Engine_obj::physicsScale) - ::Math_obj::floor((Float(this->cacheWidth) / Float((int)2)))) - this->currOffset->x);
				}
			}
		}
		HX_STACK_LINE(2356)
		if (((bool(::com::stencyl::Engine_obj::NO_PHYSICS) || bool((this->physicsMode > (int)0))))){
			HX_STACK_LINE(2357)
			toReturn = ((this->realX - ::Math_obj::floor((Float(this->cacheWidth) / Float((int)2)))) - this->currOffset->x);
		}
		HX_STACK_LINE(2361)
		return (  ((round)) ? Float(::Math_obj::round(toReturn)) : Float(toReturn) );
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,getX,return )

Void Actor_obj::enableSmoothMotion( ){
{
		HX_STACK_PUSH("Actor::enableSmoothMotion","com/stencyl/models/Actor.hx",2333);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2333)
		this->smoothMove = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,enableSmoothMotion,(void))

Void Actor_obj::setZIndex( int zindex){
{
		HX_STACK_PUSH("Actor::setZIndex","com/stencyl/models/Actor.hx",2315);
		HX_STACK_THIS(this);
		HX_STACK_ARG(zindex,"zindex");
		HX_STACK_LINE(2316)
		int max = (this->get_parent()->get_numChildren() - (int)1);		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(2317)
		if (((zindex > max))){
			HX_STACK_LINE(2318)
			zindex = max;
		}
		HX_STACK_LINE(2321)
		if (((zindex < (int)0))){
			HX_STACK_LINE(2322)
			zindex = (int)0;
		}
		HX_STACK_LINE(2325)
		this->get_parent()->setChildIndex(hx::ObjectPtr<OBJ_>(this),zindex);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setZIndex,(void))

int Actor_obj::getZIndex( ){
	HX_STACK_PUSH("Actor::getZIndex","com/stencyl/models/Actor.hx",2310);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2310)
	return this->get_parent()->getChildIndex(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getZIndex,return )

Void Actor_obj::moveUp( ){
{
		HX_STACK_PUSH("Actor::moveUp","com/stencyl/models/Actor.hx",2300);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2301)
		int index = this->get_parent()->getChildIndex(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(2302)
		int max = (this->get_parent()->get_numChildren() - (int)1);		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(2303)
		if (((index < max))){
			HX_STACK_LINE(2304)
			this->get_parent()->setChildIndex(hx::ObjectPtr<OBJ_>(this),(index + (int)1));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,moveUp,(void))

Void Actor_obj::moveDown( ){
{
		HX_STACK_PUSH("Actor::moveDown","com/stencyl/models/Actor.hx",2291);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2292)
		int index = this->get_parent()->getChildIndex(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(2293)
		if (((index > (int)0))){
			HX_STACK_LINE(2294)
			this->get_parent()->setChildIndex(hx::ObjectPtr<OBJ_>(this),(index - (int)1));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,moveDown,(void))

Void Actor_obj::moveToTop( ){
{
		HX_STACK_PUSH("Actor::moveToTop","com/stencyl/models/Actor.hx",2286);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2286)
		this->get_parent()->setChildIndex(hx::ObjectPtr<OBJ_>(this),(this->get_parent()->get_numChildren() - (int)1));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,moveToTop,(void))

Void Actor_obj::moveToBottom( ){
{
		HX_STACK_PUSH("Actor::moveToBottom","com/stencyl/models/Actor.hx",2281);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2281)
		this->get_parent()->setChildIndex(hx::ObjectPtr<OBJ_>(this),(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,moveToBottom,(void))

Void Actor_obj::sendBackward( ){
{
		HX_STACK_PUSH("Actor::sendBackward","com/stencyl/models/Actor.hx",2273);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2273)
		if ((!(this->isHUD))){
			HX_STACK_LINE(2275)
			this->engine->sendBackward(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,sendBackward,(void))

Void Actor_obj::sendToBack( ){
{
		HX_STACK_PUSH("Actor::sendToBack","com/stencyl/models/Actor.hx",2265);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2265)
		if ((!(this->isHUD))){
			HX_STACK_LINE(2267)
			this->engine->sendToBack(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,sendToBack,(void))

Void Actor_obj::bringForward( ){
{
		HX_STACK_PUSH("Actor::bringForward","com/stencyl/models/Actor.hx",2257);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2257)
		if ((!(this->isHUD))){
			HX_STACK_LINE(2259)
			this->engine->bringForward(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,bringForward,(void))

Void Actor_obj::bringToFront( ){
{
		HX_STACK_PUSH("Actor::bringToFront","com/stencyl/models/Actor.hx",2249);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2249)
		if ((!(this->isHUD))){
			HX_STACK_LINE(2251)
			this->engine->bringToFront(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,bringToFront,(void))

Void Actor_obj::moveToLayer( Float layerID){
{
		HX_STACK_PUSH("Actor::moveToLayer","com/stencyl/models/Actor.hx",2241);
		HX_STACK_THIS(this);
		HX_STACK_ARG(layerID,"layerID");
		HX_STACK_LINE(2241)
		if ((!(this->isHUD))){
			HX_STACK_LINE(2243)
			this->engine->moveToLayer(hx::ObjectPtr<OBJ_>(this),::Std_obj::_int(layerID));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,moveToLayer,(void))

bool Actor_obj::getIsTerrainRegion( ){
	HX_STACK_PUSH("Actor::getIsTerrainRegion","com/stencyl/models/Actor.hx",2232);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2232)
	return this->isTerrainRegion;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getIsTerrainRegion,return )

bool Actor_obj::getIsRegion( ){
	HX_STACK_PUSH("Actor::getIsRegion","com/stencyl/models/Actor.hx",2227);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2227)
	return this->isRegion;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getIsRegion,return )

::com::stencyl::models::actor::Group Actor_obj::getGroup( ){
	HX_STACK_PUSH("Actor::getGroup","com/stencyl/models/Actor.hx",2222);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2222)
	return this->engine->groups->get(this->getGroupID());
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getGroup,return )

Void Actor_obj::unpause( ){
{
		HX_STACK_PUSH("Actor::unpause","com/stencyl/models/Actor.hx",2205);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2205)
		if ((this->isPausable())){
			HX_STACK_LINE(2208)
			this->paused = false;
			HX_STACK_LINE(2210)
			if (((this->physicsMode == (int)0))){
				HX_STACK_LINE(2211)
				this->body->setPaused(false);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,unpause,(void))

Void Actor_obj::pause( ){
{
		HX_STACK_PUSH("Actor::pause","com/stencyl/models/Actor.hx",2192);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2192)
		if ((this->isPausable())){
			HX_STACK_LINE(2195)
			this->paused = true;
			HX_STACK_LINE(2197)
			if (((this->physicsMode == (int)0))){
				HX_STACK_LINE(2198)
				this->body->setPaused(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,pause,(void))

bool Actor_obj::isPaused( ){
	HX_STACK_PUSH("Actor::isPaused","com/stencyl/models/Actor.hx",2187);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2187)
	return this->paused;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isPaused,return )

bool Actor_obj::isPausable( ){
	HX_STACK_PUSH("Actor::isPausable","com/stencyl/models/Actor.hx",2182);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2182)
	return this->getType()->pausable;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isPausable,return )

::com::stencyl::models::actor::ActorType Actor_obj::getType( ){
	HX_STACK_PUSH("Actor::getType","com/stencyl/models/Actor.hx",2161);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2162)
	if (((this->typeID == (int)-1))){
		HX_STACK_LINE(2163)
		return null();
	}
	HX_STACK_LINE(2167)
	::com::stencyl::models::Resource result = ::com::stencyl::Data_obj::get()->resources->get(this->typeID);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(2169)
	if ((::Std_obj::is(result,hx::ClassOf< ::com::stencyl::models::actor::ActorType >()))){
		HX_STACK_LINE(2170)
		return hx::TCast< com::stencyl::models::actor::ActorType >::cast(result);
	}
	HX_STACK_LINE(2174)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getType,return )

int Actor_obj::getLayerOrder( ){
	HX_STACK_PUSH("Actor::getLayerOrder","com/stencyl/models/Actor.hx",2156);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2156)
	return (this->engine->getOrderForLayerID(this->layerID) + (int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getLayerOrder,return )

int Actor_obj::getLayerID( ){
	HX_STACK_PUSH("Actor::getLayerID","com/stencyl/models/Actor.hx",2151);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2151)
	return this->layerID;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getLayerID,return )

int Actor_obj::getGroupID( ){
	HX_STACK_PUSH("Actor::getGroupID","com/stencyl/models/Actor.hx",2138);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2138)
	if (((this->physicsMode > (int)0))){
		HX_STACK_LINE(2140)
		return this->groupID;
	}
	else{
		HX_STACK_LINE(2145)
		return this->body->groupID;
	}
	HX_STACK_LINE(2138)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getGroupID,return )

::String Actor_obj::getName( ){
	HX_STACK_PUSH("Actor::getName","com/stencyl/models/Actor.hx",2133);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2133)
	return this->get_name();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getName,return )

int Actor_obj::getID( ){
	HX_STACK_PUSH("Actor::getID","com/stencyl/models/Actor.hx",2128);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2128)
	return this->ID;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getID,return )

Void Actor_obj::removeRegionContact( ::box2D::dynamics::contacts::B2Contact point){
{
		HX_STACK_PUSH("Actor::removeRegionContact","com/stencyl/models/Actor.hx",2116);
		HX_STACK_THIS(this);
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(2116)
		if (((this->regionContacts != null()))){
			HX_STACK_LINE(2119)
			::de::polygonal::ds::IntHashTable _this = this->regionContacts;		HX_STACK_VAR(_this,"_this");
			int key = point->key;		HX_STACK_VAR(key,"key");
			struct _Function_2_1{
				inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
					HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2119);
					{
						HX_STACK_LINE(2119)
						::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(2119)
						int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
						struct _Function_3_1{
							inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2119);
								{
									HX_STACK_LINE(2119)
									int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(2119)
									i = _this1->_data->__get((i + (int)2));
									HX_STACK_LINE(2119)
									while(((i != (int)-1))){
										HX_STACK_LINE(2119)
										if (((_this1->_data->__get(i) == key))){
											HX_STACK_LINE(2119)
											v = _this1->_data->__get((i + (int)1));
											HX_STACK_LINE(2119)
											break;
										}
										HX_STACK_LINE(2119)
										i = _this1->_data->__get((i + (int)2));
									}
									HX_STACK_LINE(2119)
									return v;
								}
								return null();
							}
						};
						HX_STACK_LINE(2119)
						return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_3_1::Block(i,_this1,key)) )) );
					}
					return null();
				}
			};
			HX_STACK_LINE(2119)
			int i = _Function_2_1::Block(_this,key);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(2119)
			if (((i == (int)-2147483647))){
				HX_STACK_LINE(2119)
				false;
			}
			else{
				HX_STACK_LINE(2119)
				_this->_key0 = (int)-2147483647;
				HX_STACK_LINE(2119)
				hx::IndexRef((_this->_vals).mPtr,i) = null();
				HX_STACK_LINE(2119)
				_this->_keys[i] = (int)-2147483647;
				HX_STACK_LINE(2119)
				_this->_next[i] = _this->_free;
				HX_STACK_LINE(2119)
				_this->_free = i;
				HX_STACK_LINE(2119)
				bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
				HX_STACK_LINE(2119)
				if (((_this->_sizeLevel > (int)0))){
					HX_STACK_LINE(2119)
					if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
						HX_STACK_LINE(2119)
						if ((_this->_isResizable)){
							HX_STACK_LINE(2119)
							shrink = true;
						}
					}
				}
				HX_STACK_LINE(2119)
				{
					HX_STACK_LINE(2119)
					::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(2119)
					int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(2119)
					int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(2119)
					if (((i1 == (int)-1))){
						HX_STACK_LINE(2119)
						false;
					}
					else{
						HX_STACK_LINE(2119)
						if (((key == _this1->_data->__get(i1)))){
							HX_STACK_LINE(2119)
							if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
								HX_STACK_LINE(2119)
								_this1->_hash[b] = (int)-1;
							}
							else{
								HX_STACK_LINE(2119)
								_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
							}
							HX_STACK_LINE(2119)
							int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(2119)
							_this1->_next[j] = _this1->_free;
							HX_STACK_LINE(2119)
							_this1->_free = j;
							HX_STACK_LINE(2119)
							_this1->_data[(i1 + (int)1)] = (int)-2147483647;
							HX_STACK_LINE(2119)
							_this1->_data[(i1 + (int)2)] = (int)-1;
							HX_STACK_LINE(2119)
							(_this1->_size)--;
							HX_STACK_LINE(2119)
							if (((_this1->_sizeLevel > (int)0))){
								HX_STACK_LINE(2119)
								if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
									HX_STACK_LINE(2119)
									if ((_this1->_isResizable)){
										HX_STACK_LINE(2119)
										_this1->_shrink();
									}
								}
							}
							HX_STACK_LINE(2119)
							true;
						}
						else{
							HX_STACK_LINE(2119)
							bool exists = false;		HX_STACK_VAR(exists,"exists");
							HX_STACK_LINE(2119)
							int i0 = i1;		HX_STACK_VAR(i0,"i0");
							HX_STACK_LINE(2119)
							i1 = _this1->_data->__get((i1 + (int)2));
							HX_STACK_LINE(2119)
							while(((i1 != (int)-1))){
								HX_STACK_LINE(2119)
								if (((_this1->_data->__get(i1) == key))){
									HX_STACK_LINE(2119)
									exists = true;
									HX_STACK_LINE(2119)
									break;
								}
								HX_STACK_LINE(2119)
								i1 = _this1->_data->__get(((i0 = i1) + (int)2));
							}
							HX_STACK_LINE(2119)
							if ((exists)){
								HX_STACK_LINE(2119)
								_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
								HX_STACK_LINE(2119)
								int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(2119)
								_this1->_next[j] = _this1->_free;
								HX_STACK_LINE(2119)
								_this1->_free = j;
								HX_STACK_LINE(2119)
								_this1->_data[(i1 + (int)1)] = (int)-2147483647;
								HX_STACK_LINE(2119)
								_this1->_data[(i1 + (int)2)] = (int)-1;
								HX_STACK_LINE(2119)
								--(_this1->_size);
								HX_STACK_LINE(2119)
								if (((_this1->_sizeLevel > (int)0))){
									HX_STACK_LINE(2119)
									if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
										HX_STACK_LINE(2119)
										if ((_this1->_isResizable)){
											HX_STACK_LINE(2119)
											_this1->_shrink();
										}
									}
								}
								HX_STACK_LINE(2119)
								true;
							}
							else{
								HX_STACK_LINE(2119)
								false;
							}
						}
					}
				}
				HX_STACK_LINE(2119)
				if ((shrink)){
					HX_STACK_LINE(2119)
					(_this->_sizeLevel)--;
					HX_STACK_LINE(2119)
					int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
					HX_STACK_LINE(2119)
					int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
					struct _Function_4_1{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2119);
							{
								HX_STACK_LINE(2119)
								Array< int > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(2119)
								a = Array_obj< int >::__new();
								HX_STACK_LINE(2119)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(2119)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(2119)
					_this->_next = _Function_4_1::Block(newSize);
					HX_STACK_LINE(2119)
					{
						HX_STACK_LINE(2119)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2119)
						while(((_g1 < _g))){
							HX_STACK_LINE(2119)
							int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(2119)
							_this->_next[i1] = (i1 + (int)1);
						}
					}
					HX_STACK_LINE(2119)
					_this->_next[(newSize - (int)1)] = (int)-1;
					HX_STACK_LINE(2119)
					_this->_free = (int)0;
					struct _Function_4_2{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2119);
							{
								HX_STACK_LINE(2119)
								Array< int > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(2119)
								a = Array_obj< int >::__new();
								HX_STACK_LINE(2119)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(2119)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(2119)
					Array< int > tmpKeys = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
					HX_STACK_LINE(2119)
					{
						HX_STACK_LINE(2119)
						int k = newSize;		HX_STACK_VAR(k,"k");
						HX_STACK_LINE(2119)
						if (((k == (int)-1))){
							HX_STACK_LINE(2119)
							k = tmpKeys->length;
						}
						HX_STACK_LINE(2119)
						{
							HX_STACK_LINE(2119)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2119)
							while(((_g < k))){
								HX_STACK_LINE(2119)
								int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(2119)
								tmpKeys[i1] = (int)-2147483647;
							}
						}
					}
					struct _Function_4_3{
						inline static Array< ::Dynamic > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2119);
							{
								HX_STACK_LINE(2119)
								Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(2119)
								a = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(2119)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(2119)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(2119)
					Array< ::Dynamic > tmpVals = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
					HX_STACK_LINE(2119)
					for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
						int i1 = __it->next();
						{
							HX_STACK_LINE(2119)
							tmpKeys[_this->_free] = _this->_keys->__get(i1);
							HX_STACK_LINE(2119)
							tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
							HX_STACK_LINE(2119)
							_this->_free = _this->_next->__get(_this->_free);
						}
;
					}
					HX_STACK_LINE(2119)
					_this->_keys = tmpKeys;
					HX_STACK_LINE(2119)
					_this->_vals = tmpVals;
					HX_STACK_LINE(2119)
					{
						HX_STACK_LINE(2119)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2119)
						while(((_g1 < _g))){
							HX_STACK_LINE(2119)
							int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(2119)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
							HX_STACK_LINE(2119)
							int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
							HX_STACK_LINE(2119)
							if (((i2 == (int)-1))){
								HX_STACK_LINE(2119)
								false;
							}
							else{
								HX_STACK_LINE(2119)
								if (((_this1->_data->__get(i2) == key1))){
									HX_STACK_LINE(2119)
									_this1->_data[(i2 + (int)1)] = i1;
									HX_STACK_LINE(2119)
									true;
								}
								else{
									HX_STACK_LINE(2119)
									i2 = _this1->_data->__get((i2 + (int)2));
									HX_STACK_LINE(2119)
									while(((i2 != (int)-1))){
										HX_STACK_LINE(2119)
										if (((_this1->_data->__get(i2) == key1))){
											HX_STACK_LINE(2119)
											_this1->_data[(i2 + (int)1)] = i1;
											HX_STACK_LINE(2119)
											break;
										}
										HX_STACK_LINE(2119)
										i2 = _this1->_data->__get((i2 + (int)2));
									}
									HX_STACK_LINE(2119)
									(i2 != (int)-1);
								}
							}
						}
					}
				}
				HX_STACK_LINE(2119)
				true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,removeRegionContact,(void))

Void Actor_obj::addRegionContact( ::box2D::dynamics::contacts::B2Contact point){
{
		HX_STACK_PUSH("Actor::addRegionContact","com/stencyl/models/Actor.hx",2108);
		HX_STACK_THIS(this);
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(2108)
		if (((this->regionContacts != null()))){
			HX_STACK_LINE(2111)
			::de::polygonal::ds::IntHashTable _this = this->regionContacts;		HX_STACK_VAR(_this,"_this");
			int key = point->key;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(2111)
			_this->_key0 = (int)-2147483647;
			HX_STACK_LINE(2111)
			if (((_this->_h->_size == _this->_h->_capacity))){
				HX_STACK_LINE(2111)
				int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
				HX_STACK_LINE(2111)
				int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
				struct _Function_3_1{
					inline static Array< int > Block( int &newSize){
						HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2111);
						{
							HX_STACK_LINE(2111)
							Array< int > a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(2111)
							a = Array_obj< int >::__new();
							HX_STACK_LINE(2111)
							a[(newSize - (int)1)] = null();
							HX_STACK_LINE(2111)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(2111)
				Array< int > tmp = _Function_3_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(2111)
				{
					HX_STACK_LINE(2111)
					Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
					int max = oldSize;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(2111)
					if (((max == (int)-1))){
						HX_STACK_LINE(2111)
						max = src->length;
					}
					HX_STACK_LINE(2111)
					int j = (int)0;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(2111)
					{
						HX_STACK_LINE(2111)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2111)
						while(((_g < max))){
							HX_STACK_LINE(2111)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(2111)
							tmp[(j)++] = src->__get(i);
						}
					}
					HX_STACK_LINE(2111)
					tmp;
				}
				HX_STACK_LINE(2111)
				_this->_next = tmp;
				struct _Function_3_2{
					inline static Array< int > Block( int &newSize){
						HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2111);
						{
							HX_STACK_LINE(2111)
							Array< int > a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(2111)
							a = Array_obj< int >::__new();
							HX_STACK_LINE(2111)
							a[(newSize - (int)1)] = null();
							HX_STACK_LINE(2111)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(2111)
				Array< int > tmp1 = _Function_3_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(2111)
				{
					HX_STACK_LINE(2111)
					Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
					int max = oldSize;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(2111)
					if (((max == (int)-1))){
						HX_STACK_LINE(2111)
						max = src->length;
					}
					HX_STACK_LINE(2111)
					int j = (int)0;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(2111)
					{
						HX_STACK_LINE(2111)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2111)
						while(((_g < max))){
							HX_STACK_LINE(2111)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(2111)
							tmp1[(j)++] = src->__get(i);
						}
					}
					HX_STACK_LINE(2111)
					tmp1;
				}
				HX_STACK_LINE(2111)
				_this->_keys = tmp1;
				HX_STACK_LINE(2111)
				{
					HX_STACK_LINE(2111)
					int _g = oldSize;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(2111)
					while(((_g < newSize))){
						HX_STACK_LINE(2111)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(2111)
						_this->_keys[i] = (int)-2147483647;
					}
				}
				HX_STACK_LINE(2111)
				{
					HX_STACK_LINE(2111)
					int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
					int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(2111)
					while(((_g1 < _g))){
						HX_STACK_LINE(2111)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(2111)
						_this->_next[i] = (i + (int)1);
					}
				}
				HX_STACK_LINE(2111)
				_this->_next[(newSize - (int)1)] = (int)-1;
				HX_STACK_LINE(2111)
				_this->_free = oldSize;
				struct _Function_3_3{
					inline static Array< ::Dynamic > Block( int &newSize){
						HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2111);
						{
							HX_STACK_LINE(2111)
							Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(2111)
							a = Array_obj< ::Dynamic >::__new();
							HX_STACK_LINE(2111)
							a[(newSize - (int)1)] = null();
							HX_STACK_LINE(2111)
							return a;
						}
						return null();
					}
				};
				HX_STACK_LINE(2111)
				Array< ::Dynamic > tmp2 = _Function_3_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2111)
				{
					HX_STACK_LINE(2111)
					Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
					int max = oldSize;		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(2111)
					if (((max == (int)-1))){
						HX_STACK_LINE(2111)
						max = src->length;
					}
					HX_STACK_LINE(2111)
					int j = (int)0;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(2111)
					{
						HX_STACK_LINE(2111)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2111)
						while(((_g < max))){
							HX_STACK_LINE(2111)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(2111)
							tmp2[(j)++] = src->__get(i).StaticCast< ::box2D::dynamics::contacts::B2Contact >();
						}
					}
					HX_STACK_LINE(2111)
					tmp2;
				}
				HX_STACK_LINE(2111)
				_this->_vals = tmp2;
				HX_STACK_LINE(2111)
				(_this->_sizeLevel)++;
			}
			HX_STACK_LINE(2111)
			{
				HX_STACK_LINE(2111)
				::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(2111)
				if (((_this1->_size == _this1->_capacity))){
					HX_STACK_LINE(2111)
					if ((_this1->_isResizable)){
						HX_STACK_LINE(2111)
						_this1->_expand();
					}
				}
				HX_STACK_LINE(2111)
				int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(2111)
				_this1->_free = _this1->_next->__get(_this1->_free);
				HX_STACK_LINE(2111)
				_this1->_data[i] = key;
				HX_STACK_LINE(2111)
				_this1->_data[(i + (int)1)] = _this->_free;
				HX_STACK_LINE(2111)
				int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(2111)
				int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(2111)
				if (((j == (int)-1))){
					HX_STACK_LINE(2111)
					_this1->_hash[b] = i;
					HX_STACK_LINE(2111)
					(_this1->_size)++;
					HX_STACK_LINE(2111)
					true;
				}
				else{
					HX_STACK_LINE(2111)
					bool first = (_this1->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
					HX_STACK_LINE(2111)
					int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(2111)
					while(((t != (int)-1))){
						HX_STACK_LINE(2111)
						if (((_this1->_data->__get(t) == key))){
							HX_STACK_LINE(2111)
							first = false;
						}
						HX_STACK_LINE(2111)
						j = t;
						HX_STACK_LINE(2111)
						t = _this1->_data->__get((t + (int)2));
					}
					HX_STACK_LINE(2111)
					_this1->_data[(j + (int)2)] = i;
					HX_STACK_LINE(2111)
					(_this1->_size)++;
					HX_STACK_LINE(2111)
					first;
				}
			}
			HX_STACK_LINE(2111)
			hx::IndexRef((_this->_vals).mPtr,_this->_free) = point;
			HX_STACK_LINE(2111)
			_this->_keys[_this->_free] = key;
			HX_STACK_LINE(2111)
			_this->_free = _this->_next->__get(_this->_free);
			HX_STACK_LINE(2111)
			true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,addRegionContact,(void))

Void Actor_obj::removeContact( ::box2D::dynamics::contacts::B2Contact point){
{
		HX_STACK_PUSH("Actor::removeContact","com/stencyl/models/Actor.hx",2089);
		HX_STACK_THIS(this);
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(2090)
		if (((this->collisions != null()))){
			struct _Function_2_1{
				inline static bool Block( ::com::stencyl::models::Actor_obj *__this,::box2D::dynamics::contacts::B2Contact &point){
					HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2092);
					{
						HX_STACK_LINE(2092)
						::de::polygonal::ds::IntHashTable _this = __this->collisions;		HX_STACK_VAR(_this,"_this");
						int key = point->key;		HX_STACK_VAR(key,"key");
						struct _Function_3_1{
							inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2092);
								{
									HX_STACK_LINE(2092)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(2092)
									int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
									struct _Function_4_1{
										inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
											HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2092);
											{
												HX_STACK_LINE(2092)
												int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(2092)
												i = _this1->_data->__get((i + (int)2));
												HX_STACK_LINE(2092)
												while(((i != (int)-1))){
													HX_STACK_LINE(2092)
													if (((_this1->_data->__get(i) == key))){
														HX_STACK_LINE(2092)
														v = _this1->_data->__get((i + (int)1));
														HX_STACK_LINE(2092)
														break;
													}
													HX_STACK_LINE(2092)
													i = _this1->_data->__get((i + (int)2));
												}
												HX_STACK_LINE(2092)
												return v;
											}
											return null();
										}
									};
									HX_STACK_LINE(2092)
									return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_4_1::Block(i,_this1,key)) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(2092)
						int i = _Function_3_1::Block(_this,key);		HX_STACK_VAR(i,"i");
						struct _Function_3_2{
							inline static bool Block( int &i,::de::polygonal::ds::IntHashTable _this,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2092);
								{
									HX_STACK_LINE(2092)
									_this->_key0 = (int)-2147483647;
									HX_STACK_LINE(2092)
									hx::IndexRef((_this->_vals).mPtr,i) = null();
									HX_STACK_LINE(2092)
									_this->_keys[i] = (int)-2147483647;
									HX_STACK_LINE(2092)
									_this->_next[i] = _this->_free;
									HX_STACK_LINE(2092)
									_this->_free = i;
									HX_STACK_LINE(2092)
									bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
									HX_STACK_LINE(2092)
									if (((_this->_sizeLevel > (int)0))){
										HX_STACK_LINE(2092)
										if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
											HX_STACK_LINE(2092)
											if ((_this->_isResizable)){
												HX_STACK_LINE(2092)
												shrink = true;
											}
										}
									}
									HX_STACK_LINE(2092)
									{
										HX_STACK_LINE(2092)
										::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(2092)
										int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(2092)
										int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(2092)
										if (((i1 == (int)-1))){
											HX_STACK_LINE(2092)
											false;
										}
										else{
											HX_STACK_LINE(2092)
											if (((key == _this1->_data->__get(i1)))){
												HX_STACK_LINE(2092)
												if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
													HX_STACK_LINE(2092)
													_this1->_hash[b] = (int)-1;
												}
												else{
													HX_STACK_LINE(2092)
													_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
												}
												HX_STACK_LINE(2092)
												int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
												HX_STACK_LINE(2092)
												_this1->_next[j] = _this1->_free;
												HX_STACK_LINE(2092)
												_this1->_free = j;
												HX_STACK_LINE(2092)
												_this1->_data[(i1 + (int)1)] = (int)-2147483647;
												HX_STACK_LINE(2092)
												_this1->_data[(i1 + (int)2)] = (int)-1;
												HX_STACK_LINE(2092)
												(_this1->_size)--;
												HX_STACK_LINE(2092)
												if (((_this1->_sizeLevel > (int)0))){
													HX_STACK_LINE(2092)
													if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
														HX_STACK_LINE(2092)
														if ((_this1->_isResizable)){
															HX_STACK_LINE(2092)
															_this1->_shrink();
														}
													}
												}
												HX_STACK_LINE(2092)
												true;
											}
											else{
												HX_STACK_LINE(2092)
												bool exists = false;		HX_STACK_VAR(exists,"exists");
												HX_STACK_LINE(2092)
												int i0 = i1;		HX_STACK_VAR(i0,"i0");
												HX_STACK_LINE(2092)
												i1 = _this1->_data->__get((i1 + (int)2));
												HX_STACK_LINE(2092)
												while(((i1 != (int)-1))){
													HX_STACK_LINE(2092)
													if (((_this1->_data->__get(i1) == key))){
														HX_STACK_LINE(2092)
														exists = true;
														HX_STACK_LINE(2092)
														break;
													}
													HX_STACK_LINE(2092)
													i1 = _this1->_data->__get(((i0 = i1) + (int)2));
												}
												HX_STACK_LINE(2092)
												if ((exists)){
													HX_STACK_LINE(2092)
													_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
													HX_STACK_LINE(2092)
													int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
													HX_STACK_LINE(2092)
													_this1->_next[j] = _this1->_free;
													HX_STACK_LINE(2092)
													_this1->_free = j;
													HX_STACK_LINE(2092)
													_this1->_data[(i1 + (int)1)] = (int)-2147483647;
													HX_STACK_LINE(2092)
													_this1->_data[(i1 + (int)2)] = (int)-1;
													HX_STACK_LINE(2092)
													--(_this1->_size);
													HX_STACK_LINE(2092)
													if (((_this1->_sizeLevel > (int)0))){
														HX_STACK_LINE(2092)
														if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
															HX_STACK_LINE(2092)
															if ((_this1->_isResizable)){
																HX_STACK_LINE(2092)
																_this1->_shrink();
															}
														}
													}
													HX_STACK_LINE(2092)
													true;
												}
												else{
													HX_STACK_LINE(2092)
													false;
												}
											}
										}
									}
									HX_STACK_LINE(2092)
									if ((shrink)){
										HX_STACK_LINE(2092)
										(_this->_sizeLevel)--;
										HX_STACK_LINE(2092)
										int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
										HX_STACK_LINE(2092)
										int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
										struct _Function_5_1{
											inline static Array< int > Block( int &newSize){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2092);
												{
													HX_STACK_LINE(2092)
													Array< int > a;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(2092)
													a = Array_obj< int >::__new();
													HX_STACK_LINE(2092)
													a[(newSize - (int)1)] = null();
													HX_STACK_LINE(2092)
													return a;
												}
												return null();
											}
										};
										HX_STACK_LINE(2092)
										_this->_next = _Function_5_1::Block(newSize);
										HX_STACK_LINE(2092)
										{
											HX_STACK_LINE(2092)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(2092)
											while(((_g1 < _g))){
												HX_STACK_LINE(2092)
												int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
												HX_STACK_LINE(2092)
												_this->_next[i1] = (i1 + (int)1);
											}
										}
										HX_STACK_LINE(2092)
										_this->_next[(newSize - (int)1)] = (int)-1;
										HX_STACK_LINE(2092)
										_this->_free = (int)0;
										struct _Function_5_2{
											inline static Array< int > Block( int &newSize){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2092);
												{
													HX_STACK_LINE(2092)
													Array< int > a;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(2092)
													a = Array_obj< int >::__new();
													HX_STACK_LINE(2092)
													a[(newSize - (int)1)] = null();
													HX_STACK_LINE(2092)
													return a;
												}
												return null();
											}
										};
										HX_STACK_LINE(2092)
										Array< int > tmpKeys = _Function_5_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
										HX_STACK_LINE(2092)
										{
											HX_STACK_LINE(2092)
											int k = newSize;		HX_STACK_VAR(k,"k");
											HX_STACK_LINE(2092)
											if (((k == (int)-1))){
												HX_STACK_LINE(2092)
												k = tmpKeys->length;
											}
											HX_STACK_LINE(2092)
											{
												HX_STACK_LINE(2092)
												int _g = (int)0;		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(2092)
												while(((_g < k))){
													HX_STACK_LINE(2092)
													int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
													HX_STACK_LINE(2092)
													tmpKeys[i1] = (int)-2147483647;
												}
											}
										}
										struct _Function_5_3{
											inline static Array< ::Dynamic > Block( int &newSize){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2092);
												{
													HX_STACK_LINE(2092)
													Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(2092)
													a = Array_obj< ::Dynamic >::__new();
													HX_STACK_LINE(2092)
													a[(newSize - (int)1)] = null();
													HX_STACK_LINE(2092)
													return a;
												}
												return null();
											}
										};
										HX_STACK_LINE(2092)
										Array< ::Dynamic > tmpVals = _Function_5_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
										HX_STACK_LINE(2092)
										for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
											int i1 = __it->next();
											{
												HX_STACK_LINE(2092)
												tmpKeys[_this->_free] = _this->_keys->__get(i1);
												HX_STACK_LINE(2092)
												tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
												HX_STACK_LINE(2092)
												_this->_free = _this->_next->__get(_this->_free);
											}
;
										}
										HX_STACK_LINE(2092)
										_this->_keys = tmpKeys;
										HX_STACK_LINE(2092)
										_this->_vals = tmpVals;
										HX_STACK_LINE(2092)
										{
											HX_STACK_LINE(2092)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(2092)
											while(((_g1 < _g))){
												HX_STACK_LINE(2092)
												int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
												HX_STACK_LINE(2092)
												::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
												int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
												HX_STACK_LINE(2092)
												int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
												HX_STACK_LINE(2092)
												if (((i2 == (int)-1))){
													HX_STACK_LINE(2092)
													false;
												}
												else{
													HX_STACK_LINE(2092)
													if (((_this1->_data->__get(i2) == key1))){
														HX_STACK_LINE(2092)
														_this1->_data[(i2 + (int)1)] = i1;
														HX_STACK_LINE(2092)
														true;
													}
													else{
														HX_STACK_LINE(2092)
														i2 = _this1->_data->__get((i2 + (int)2));
														HX_STACK_LINE(2092)
														while(((i2 != (int)-1))){
															HX_STACK_LINE(2092)
															if (((_this1->_data->__get(i2) == key1))){
																HX_STACK_LINE(2092)
																_this1->_data[(i2 + (int)1)] = i1;
																HX_STACK_LINE(2092)
																break;
															}
															HX_STACK_LINE(2092)
															i2 = _this1->_data->__get((i2 + (int)2));
														}
														HX_STACK_LINE(2092)
														(i2 != (int)-1);
													}
												}
											}
										}
									}
									HX_STACK_LINE(2092)
									return true;
								}
								return null();
							}
						};
						HX_STACK_LINE(2092)
						return (  (((i == (int)-2147483647))) ? bool(false) : bool(_Function_3_2::Block(i,_this,key)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(2091)
			if ((_Function_2_1::Block(this,point))){
				HX_STACK_LINE(2093)
				(this->collisionsCount)--;
			}
		}
		HX_STACK_LINE(2098)
		if (((this->contacts != null()))){
			struct _Function_2_1{
				inline static bool Block( ::com::stencyl::models::Actor_obj *__this,::box2D::dynamics::contacts::B2Contact &point){
					HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2100);
					{
						HX_STACK_LINE(2100)
						::de::polygonal::ds::IntHashTable _this = __this->contacts;		HX_STACK_VAR(_this,"_this");
						int key = point->key;		HX_STACK_VAR(key,"key");
						struct _Function_3_1{
							inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2100);
								{
									HX_STACK_LINE(2100)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(2100)
									int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
									struct _Function_4_1{
										inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
											HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2100);
											{
												HX_STACK_LINE(2100)
												int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(2100)
												i = _this1->_data->__get((i + (int)2));
												HX_STACK_LINE(2100)
												while(((i != (int)-1))){
													HX_STACK_LINE(2100)
													if (((_this1->_data->__get(i) == key))){
														HX_STACK_LINE(2100)
														v = _this1->_data->__get((i + (int)1));
														HX_STACK_LINE(2100)
														break;
													}
													HX_STACK_LINE(2100)
													i = _this1->_data->__get((i + (int)2));
												}
												HX_STACK_LINE(2100)
												return v;
											}
											return null();
										}
									};
									HX_STACK_LINE(2100)
									return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_4_1::Block(i,_this1,key)) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(2100)
						int i = _Function_3_1::Block(_this,key);		HX_STACK_VAR(i,"i");
						struct _Function_3_2{
							inline static bool Block( int &i,::de::polygonal::ds::IntHashTable _this,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2100);
								{
									HX_STACK_LINE(2100)
									_this->_key0 = (int)-2147483647;
									HX_STACK_LINE(2100)
									hx::IndexRef((_this->_vals).mPtr,i) = null();
									HX_STACK_LINE(2100)
									_this->_keys[i] = (int)-2147483647;
									HX_STACK_LINE(2100)
									_this->_next[i] = _this->_free;
									HX_STACK_LINE(2100)
									_this->_free = i;
									HX_STACK_LINE(2100)
									bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
									HX_STACK_LINE(2100)
									if (((_this->_sizeLevel > (int)0))){
										HX_STACK_LINE(2100)
										if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
											HX_STACK_LINE(2100)
											if ((_this->_isResizable)){
												HX_STACK_LINE(2100)
												shrink = true;
											}
										}
									}
									HX_STACK_LINE(2100)
									{
										HX_STACK_LINE(2100)
										::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(2100)
										int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(2100)
										int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(2100)
										if (((i1 == (int)-1))){
											HX_STACK_LINE(2100)
											false;
										}
										else{
											HX_STACK_LINE(2100)
											if (((key == _this1->_data->__get(i1)))){
												HX_STACK_LINE(2100)
												if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
													HX_STACK_LINE(2100)
													_this1->_hash[b] = (int)-1;
												}
												else{
													HX_STACK_LINE(2100)
													_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
												}
												HX_STACK_LINE(2100)
												int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
												HX_STACK_LINE(2100)
												_this1->_next[j] = _this1->_free;
												HX_STACK_LINE(2100)
												_this1->_free = j;
												HX_STACK_LINE(2100)
												_this1->_data[(i1 + (int)1)] = (int)-2147483647;
												HX_STACK_LINE(2100)
												_this1->_data[(i1 + (int)2)] = (int)-1;
												HX_STACK_LINE(2100)
												(_this1->_size)--;
												HX_STACK_LINE(2100)
												if (((_this1->_sizeLevel > (int)0))){
													HX_STACK_LINE(2100)
													if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
														HX_STACK_LINE(2100)
														if ((_this1->_isResizable)){
															HX_STACK_LINE(2100)
															_this1->_shrink();
														}
													}
												}
												HX_STACK_LINE(2100)
												true;
											}
											else{
												HX_STACK_LINE(2100)
												bool exists = false;		HX_STACK_VAR(exists,"exists");
												HX_STACK_LINE(2100)
												int i0 = i1;		HX_STACK_VAR(i0,"i0");
												HX_STACK_LINE(2100)
												i1 = _this1->_data->__get((i1 + (int)2));
												HX_STACK_LINE(2100)
												while(((i1 != (int)-1))){
													HX_STACK_LINE(2100)
													if (((_this1->_data->__get(i1) == key))){
														HX_STACK_LINE(2100)
														exists = true;
														HX_STACK_LINE(2100)
														break;
													}
													HX_STACK_LINE(2100)
													i1 = _this1->_data->__get(((i0 = i1) + (int)2));
												}
												HX_STACK_LINE(2100)
												if ((exists)){
													HX_STACK_LINE(2100)
													_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
													HX_STACK_LINE(2100)
													int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
													HX_STACK_LINE(2100)
													_this1->_next[j] = _this1->_free;
													HX_STACK_LINE(2100)
													_this1->_free = j;
													HX_STACK_LINE(2100)
													_this1->_data[(i1 + (int)1)] = (int)-2147483647;
													HX_STACK_LINE(2100)
													_this1->_data[(i1 + (int)2)] = (int)-1;
													HX_STACK_LINE(2100)
													--(_this1->_size);
													HX_STACK_LINE(2100)
													if (((_this1->_sizeLevel > (int)0))){
														HX_STACK_LINE(2100)
														if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
															HX_STACK_LINE(2100)
															if ((_this1->_isResizable)){
																HX_STACK_LINE(2100)
																_this1->_shrink();
															}
														}
													}
													HX_STACK_LINE(2100)
													true;
												}
												else{
													HX_STACK_LINE(2100)
													false;
												}
											}
										}
									}
									HX_STACK_LINE(2100)
									if ((shrink)){
										HX_STACK_LINE(2100)
										(_this->_sizeLevel)--;
										HX_STACK_LINE(2100)
										int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
										HX_STACK_LINE(2100)
										int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
										struct _Function_5_1{
											inline static Array< int > Block( int &newSize){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2100);
												{
													HX_STACK_LINE(2100)
													Array< int > a;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(2100)
													a = Array_obj< int >::__new();
													HX_STACK_LINE(2100)
													a[(newSize - (int)1)] = null();
													HX_STACK_LINE(2100)
													return a;
												}
												return null();
											}
										};
										HX_STACK_LINE(2100)
										_this->_next = _Function_5_1::Block(newSize);
										HX_STACK_LINE(2100)
										{
											HX_STACK_LINE(2100)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(2100)
											while(((_g1 < _g))){
												HX_STACK_LINE(2100)
												int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
												HX_STACK_LINE(2100)
												_this->_next[i1] = (i1 + (int)1);
											}
										}
										HX_STACK_LINE(2100)
										_this->_next[(newSize - (int)1)] = (int)-1;
										HX_STACK_LINE(2100)
										_this->_free = (int)0;
										struct _Function_5_2{
											inline static Array< int > Block( int &newSize){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2100);
												{
													HX_STACK_LINE(2100)
													Array< int > a;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(2100)
													a = Array_obj< int >::__new();
													HX_STACK_LINE(2100)
													a[(newSize - (int)1)] = null();
													HX_STACK_LINE(2100)
													return a;
												}
												return null();
											}
										};
										HX_STACK_LINE(2100)
										Array< int > tmpKeys = _Function_5_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
										HX_STACK_LINE(2100)
										{
											HX_STACK_LINE(2100)
											int k = newSize;		HX_STACK_VAR(k,"k");
											HX_STACK_LINE(2100)
											if (((k == (int)-1))){
												HX_STACK_LINE(2100)
												k = tmpKeys->length;
											}
											HX_STACK_LINE(2100)
											{
												HX_STACK_LINE(2100)
												int _g = (int)0;		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(2100)
												while(((_g < k))){
													HX_STACK_LINE(2100)
													int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
													HX_STACK_LINE(2100)
													tmpKeys[i1] = (int)-2147483647;
												}
											}
										}
										struct _Function_5_3{
											inline static Array< ::Dynamic > Block( int &newSize){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2100);
												{
													HX_STACK_LINE(2100)
													Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(2100)
													a = Array_obj< ::Dynamic >::__new();
													HX_STACK_LINE(2100)
													a[(newSize - (int)1)] = null();
													HX_STACK_LINE(2100)
													return a;
												}
												return null();
											}
										};
										HX_STACK_LINE(2100)
										Array< ::Dynamic > tmpVals = _Function_5_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
										HX_STACK_LINE(2100)
										for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
											int i1 = __it->next();
											{
												HX_STACK_LINE(2100)
												tmpKeys[_this->_free] = _this->_keys->__get(i1);
												HX_STACK_LINE(2100)
												tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
												HX_STACK_LINE(2100)
												_this->_free = _this->_next->__get(_this->_free);
											}
;
										}
										HX_STACK_LINE(2100)
										_this->_keys = tmpKeys;
										HX_STACK_LINE(2100)
										_this->_vals = tmpVals;
										HX_STACK_LINE(2100)
										{
											HX_STACK_LINE(2100)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(2100)
											while(((_g1 < _g))){
												HX_STACK_LINE(2100)
												int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
												HX_STACK_LINE(2100)
												::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
												int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
												HX_STACK_LINE(2100)
												int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
												HX_STACK_LINE(2100)
												if (((i2 == (int)-1))){
													HX_STACK_LINE(2100)
													false;
												}
												else{
													HX_STACK_LINE(2100)
													if (((_this1->_data->__get(i2) == key1))){
														HX_STACK_LINE(2100)
														_this1->_data[(i2 + (int)1)] = i1;
														HX_STACK_LINE(2100)
														true;
													}
													else{
														HX_STACK_LINE(2100)
														i2 = _this1->_data->__get((i2 + (int)2));
														HX_STACK_LINE(2100)
														while(((i2 != (int)-1))){
															HX_STACK_LINE(2100)
															if (((_this1->_data->__get(i2) == key1))){
																HX_STACK_LINE(2100)
																_this1->_data[(i2 + (int)1)] = i1;
																HX_STACK_LINE(2100)
																break;
															}
															HX_STACK_LINE(2100)
															i2 = _this1->_data->__get((i2 + (int)2));
														}
														HX_STACK_LINE(2100)
														(i2 != (int)-1);
													}
												}
											}
										}
									}
									HX_STACK_LINE(2100)
									return true;
								}
								return null();
							}
						};
						HX_STACK_LINE(2100)
						return (  (((i == (int)-2147483647))) ? bool(false) : bool(_Function_3_2::Block(i,_this,key)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(2099)
			if ((_Function_2_1::Block(this,point))){
				HX_STACK_LINE(2101)
				(this->contactCount)--;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,removeContact,(void))

Void Actor_obj::addContact( ::box2D::dynamics::contacts::B2Contact point){
{
		HX_STACK_PUSH("Actor::addContact","com/stencyl/models/Actor.hx",2075);
		HX_STACK_THIS(this);
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(2075)
		if (((this->contacts != null()))){
			HX_STACK_LINE(2078)
			{
				HX_STACK_LINE(2078)
				::de::polygonal::ds::IntHashTable _this = this->contacts;		HX_STACK_VAR(_this,"_this");
				int key = point->key;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(2078)
				_this->_key0 = (int)-2147483647;
				HX_STACK_LINE(2078)
				if (((_this->_h->_size == _this->_h->_capacity))){
					HX_STACK_LINE(2078)
					int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
					HX_STACK_LINE(2078)
					int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
					struct _Function_4_1{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2078);
							{
								HX_STACK_LINE(2078)
								Array< int > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(2078)
								a = Array_obj< int >::__new();
								HX_STACK_LINE(2078)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(2078)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(2078)
					Array< int > tmp = _Function_4_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(2078)
					{
						HX_STACK_LINE(2078)
						Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(2078)
						if (((max == (int)-1))){
							HX_STACK_LINE(2078)
							max = src->length;
						}
						HX_STACK_LINE(2078)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(2078)
						{
							HX_STACK_LINE(2078)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2078)
							while(((_g < max))){
								HX_STACK_LINE(2078)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(2078)
								tmp[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(2078)
						tmp;
					}
					HX_STACK_LINE(2078)
					_this->_next = tmp;
					struct _Function_4_2{
						inline static Array< int > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2078);
							{
								HX_STACK_LINE(2078)
								Array< int > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(2078)
								a = Array_obj< int >::__new();
								HX_STACK_LINE(2078)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(2078)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(2078)
					Array< int > tmp1 = _Function_4_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(2078)
					{
						HX_STACK_LINE(2078)
						Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(2078)
						if (((max == (int)-1))){
							HX_STACK_LINE(2078)
							max = src->length;
						}
						HX_STACK_LINE(2078)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(2078)
						{
							HX_STACK_LINE(2078)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2078)
							while(((_g < max))){
								HX_STACK_LINE(2078)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(2078)
								tmp1[(j)++] = src->__get(i);
							}
						}
						HX_STACK_LINE(2078)
						tmp1;
					}
					HX_STACK_LINE(2078)
					_this->_keys = tmp1;
					HX_STACK_LINE(2078)
					{
						HX_STACK_LINE(2078)
						int _g = oldSize;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2078)
						while(((_g < newSize))){
							HX_STACK_LINE(2078)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(2078)
							_this->_keys[i] = (int)-2147483647;
						}
					}
					HX_STACK_LINE(2078)
					{
						HX_STACK_LINE(2078)
						int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
						int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2078)
						while(((_g1 < _g))){
							HX_STACK_LINE(2078)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(2078)
							_this->_next[i] = (i + (int)1);
						}
					}
					HX_STACK_LINE(2078)
					_this->_next[(newSize - (int)1)] = (int)-1;
					HX_STACK_LINE(2078)
					_this->_free = oldSize;
					struct _Function_4_3{
						inline static Array< ::Dynamic > Block( int &newSize){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2078);
							{
								HX_STACK_LINE(2078)
								Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(2078)
								a = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(2078)
								a[(newSize - (int)1)] = null();
								HX_STACK_LINE(2078)
								return a;
							}
							return null();
						}
					};
					HX_STACK_LINE(2078)
					Array< ::Dynamic > tmp2 = _Function_4_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(2078)
					{
						HX_STACK_LINE(2078)
						Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
						int max = oldSize;		HX_STACK_VAR(max,"max");
						HX_STACK_LINE(2078)
						if (((max == (int)-1))){
							HX_STACK_LINE(2078)
							max = src->length;
						}
						HX_STACK_LINE(2078)
						int j = (int)0;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(2078)
						{
							HX_STACK_LINE(2078)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2078)
							while(((_g < max))){
								HX_STACK_LINE(2078)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(2078)
								tmp2[(j)++] = src->__get(i).StaticCast< ::box2D::dynamics::contacts::B2Contact >();
							}
						}
						HX_STACK_LINE(2078)
						tmp2;
					}
					HX_STACK_LINE(2078)
					_this->_vals = tmp2;
					HX_STACK_LINE(2078)
					(_this->_sizeLevel)++;
				}
				HX_STACK_LINE(2078)
				{
					HX_STACK_LINE(2078)
					::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(2078)
					if (((_this1->_size == _this1->_capacity))){
						HX_STACK_LINE(2078)
						if ((_this1->_isResizable)){
							HX_STACK_LINE(2078)
							_this1->_expand();
						}
					}
					HX_STACK_LINE(2078)
					int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(2078)
					_this1->_free = _this1->_next->__get(_this1->_free);
					HX_STACK_LINE(2078)
					_this1->_data[i] = key;
					HX_STACK_LINE(2078)
					_this1->_data[(i + (int)1)] = _this->_free;
					HX_STACK_LINE(2078)
					int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(2078)
					int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(2078)
					if (((j == (int)-1))){
						HX_STACK_LINE(2078)
						_this1->_hash[b] = i;
						HX_STACK_LINE(2078)
						(_this1->_size)++;
						HX_STACK_LINE(2078)
						true;
					}
					else{
						HX_STACK_LINE(2078)
						bool first = (_this1->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
						HX_STACK_LINE(2078)
						int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2078)
						while(((t != (int)-1))){
							HX_STACK_LINE(2078)
							if (((_this1->_data->__get(t) == key))){
								HX_STACK_LINE(2078)
								first = false;
							}
							HX_STACK_LINE(2078)
							j = t;
							HX_STACK_LINE(2078)
							t = _this1->_data->__get((t + (int)2));
						}
						HX_STACK_LINE(2078)
						_this1->_data[(j + (int)2)] = i;
						HX_STACK_LINE(2078)
						(_this1->_size)++;
						HX_STACK_LINE(2078)
						first;
					}
				}
				HX_STACK_LINE(2078)
				hx::IndexRef((_this->_vals).mPtr,_this->_free) = point;
				HX_STACK_LINE(2078)
				_this->_keys[_this->_free] = key;
				HX_STACK_LINE(2078)
				_this->_free = _this->_next->__get(_this->_free);
				HX_STACK_LINE(2078)
				true;
			}
			HX_STACK_LINE(2079)
			(this->contactCount)++;
			struct _Function_2_1{
				inline static bool Block( ::com::stencyl::models::Actor_obj *__this,::box2D::dynamics::contacts::B2Contact &point){
					HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2081);
					{
						HX_STACK_LINE(2081)
						::de::polygonal::ds::IntHashTable _this = __this->collisions;		HX_STACK_VAR(_this,"_this");
						int key = point->key;		HX_STACK_VAR(key,"key");
						struct _Function_3_1{
							inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2081);
								{
									HX_STACK_LINE(2081)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(2081)
									int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
									struct _Function_4_1{
										inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
											HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2081);
											{
												HX_STACK_LINE(2081)
												int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(2081)
												i = _this1->_data->__get((i + (int)2));
												HX_STACK_LINE(2081)
												while(((i != (int)-1))){
													HX_STACK_LINE(2081)
													if (((_this1->_data->__get(i) == key))){
														HX_STACK_LINE(2081)
														v = _this1->_data->__get((i + (int)1));
														HX_STACK_LINE(2081)
														break;
													}
													HX_STACK_LINE(2081)
													i = _this1->_data->__get((i + (int)2));
												}
												HX_STACK_LINE(2081)
												return v;
											}
											return null();
										}
									};
									HX_STACK_LINE(2081)
									return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_4_1::Block(i,_this1,key)) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(2081)
						int i = _Function_3_1::Block(_this,key);		HX_STACK_VAR(i,"i");
						struct _Function_3_2{
							inline static bool Block( int &i,::de::polygonal::ds::IntHashTable _this,int &key){
								HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2081);
								{
									HX_STACK_LINE(2081)
									_this->_key0 = (int)-2147483647;
									HX_STACK_LINE(2081)
									hx::IndexRef((_this->_vals).mPtr,i) = null();
									HX_STACK_LINE(2081)
									_this->_keys[i] = (int)-2147483647;
									HX_STACK_LINE(2081)
									_this->_next[i] = _this->_free;
									HX_STACK_LINE(2081)
									_this->_free = i;
									HX_STACK_LINE(2081)
									bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
									HX_STACK_LINE(2081)
									if (((_this->_sizeLevel > (int)0))){
										HX_STACK_LINE(2081)
										if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
											HX_STACK_LINE(2081)
											if ((_this->_isResizable)){
												HX_STACK_LINE(2081)
												shrink = true;
											}
										}
									}
									HX_STACK_LINE(2081)
									{
										HX_STACK_LINE(2081)
										::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(2081)
										int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(2081)
										int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(2081)
										if (((i1 == (int)-1))){
											HX_STACK_LINE(2081)
											false;
										}
										else{
											HX_STACK_LINE(2081)
											if (((key == _this1->_data->__get(i1)))){
												HX_STACK_LINE(2081)
												if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
													HX_STACK_LINE(2081)
													_this1->_hash[b] = (int)-1;
												}
												else{
													HX_STACK_LINE(2081)
													_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
												}
												HX_STACK_LINE(2081)
												int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
												HX_STACK_LINE(2081)
												_this1->_next[j] = _this1->_free;
												HX_STACK_LINE(2081)
												_this1->_free = j;
												HX_STACK_LINE(2081)
												_this1->_data[(i1 + (int)1)] = (int)-2147483647;
												HX_STACK_LINE(2081)
												_this1->_data[(i1 + (int)2)] = (int)-1;
												HX_STACK_LINE(2081)
												(_this1->_size)--;
												HX_STACK_LINE(2081)
												if (((_this1->_sizeLevel > (int)0))){
													HX_STACK_LINE(2081)
													if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
														HX_STACK_LINE(2081)
														if ((_this1->_isResizable)){
															HX_STACK_LINE(2081)
															_this1->_shrink();
														}
													}
												}
												HX_STACK_LINE(2081)
												true;
											}
											else{
												HX_STACK_LINE(2081)
												bool exists = false;		HX_STACK_VAR(exists,"exists");
												HX_STACK_LINE(2081)
												int i0 = i1;		HX_STACK_VAR(i0,"i0");
												HX_STACK_LINE(2081)
												i1 = _this1->_data->__get((i1 + (int)2));
												HX_STACK_LINE(2081)
												while(((i1 != (int)-1))){
													HX_STACK_LINE(2081)
													if (((_this1->_data->__get(i1) == key))){
														HX_STACK_LINE(2081)
														exists = true;
														HX_STACK_LINE(2081)
														break;
													}
													HX_STACK_LINE(2081)
													i1 = _this1->_data->__get(((i0 = i1) + (int)2));
												}
												HX_STACK_LINE(2081)
												if ((exists)){
													HX_STACK_LINE(2081)
													_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
													HX_STACK_LINE(2081)
													int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
													HX_STACK_LINE(2081)
													_this1->_next[j] = _this1->_free;
													HX_STACK_LINE(2081)
													_this1->_free = j;
													HX_STACK_LINE(2081)
													_this1->_data[(i1 + (int)1)] = (int)-2147483647;
													HX_STACK_LINE(2081)
													_this1->_data[(i1 + (int)2)] = (int)-1;
													HX_STACK_LINE(2081)
													--(_this1->_size);
													HX_STACK_LINE(2081)
													if (((_this1->_sizeLevel > (int)0))){
														HX_STACK_LINE(2081)
														if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
															HX_STACK_LINE(2081)
															if ((_this1->_isResizable)){
																HX_STACK_LINE(2081)
																_this1->_shrink();
															}
														}
													}
													HX_STACK_LINE(2081)
													true;
												}
												else{
													HX_STACK_LINE(2081)
													false;
												}
											}
										}
									}
									HX_STACK_LINE(2081)
									if ((shrink)){
										HX_STACK_LINE(2081)
										(_this->_sizeLevel)--;
										HX_STACK_LINE(2081)
										int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
										HX_STACK_LINE(2081)
										int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
										struct _Function_5_1{
											inline static Array< int > Block( int &newSize){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2081);
												{
													HX_STACK_LINE(2081)
													Array< int > a;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(2081)
													a = Array_obj< int >::__new();
													HX_STACK_LINE(2081)
													a[(newSize - (int)1)] = null();
													HX_STACK_LINE(2081)
													return a;
												}
												return null();
											}
										};
										HX_STACK_LINE(2081)
										_this->_next = _Function_5_1::Block(newSize);
										HX_STACK_LINE(2081)
										{
											HX_STACK_LINE(2081)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(2081)
											while(((_g1 < _g))){
												HX_STACK_LINE(2081)
												int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
												HX_STACK_LINE(2081)
												_this->_next[i1] = (i1 + (int)1);
											}
										}
										HX_STACK_LINE(2081)
										_this->_next[(newSize - (int)1)] = (int)-1;
										HX_STACK_LINE(2081)
										_this->_free = (int)0;
										struct _Function_5_2{
											inline static Array< int > Block( int &newSize){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2081);
												{
													HX_STACK_LINE(2081)
													Array< int > a;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(2081)
													a = Array_obj< int >::__new();
													HX_STACK_LINE(2081)
													a[(newSize - (int)1)] = null();
													HX_STACK_LINE(2081)
													return a;
												}
												return null();
											}
										};
										HX_STACK_LINE(2081)
										Array< int > tmpKeys = _Function_5_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
										HX_STACK_LINE(2081)
										{
											HX_STACK_LINE(2081)
											int k = newSize;		HX_STACK_VAR(k,"k");
											HX_STACK_LINE(2081)
											if (((k == (int)-1))){
												HX_STACK_LINE(2081)
												k = tmpKeys->length;
											}
											HX_STACK_LINE(2081)
											{
												HX_STACK_LINE(2081)
												int _g = (int)0;		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(2081)
												while(((_g < k))){
													HX_STACK_LINE(2081)
													int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
													HX_STACK_LINE(2081)
													tmpKeys[i1] = (int)-2147483647;
												}
											}
										}
										struct _Function_5_3{
											inline static Array< ::Dynamic > Block( int &newSize){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",2081);
												{
													HX_STACK_LINE(2081)
													Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
													HX_STACK_LINE(2081)
													a = Array_obj< ::Dynamic >::__new();
													HX_STACK_LINE(2081)
													a[(newSize - (int)1)] = null();
													HX_STACK_LINE(2081)
													return a;
												}
												return null();
											}
										};
										HX_STACK_LINE(2081)
										Array< ::Dynamic > tmpVals = _Function_5_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
										HX_STACK_LINE(2081)
										for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
											int i1 = __it->next();
											{
												HX_STACK_LINE(2081)
												tmpKeys[_this->_free] = _this->_keys->__get(i1);
												HX_STACK_LINE(2081)
												tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
												HX_STACK_LINE(2081)
												_this->_free = _this->_next->__get(_this->_free);
											}
;
										}
										HX_STACK_LINE(2081)
										_this->_keys = tmpKeys;
										HX_STACK_LINE(2081)
										_this->_vals = tmpVals;
										HX_STACK_LINE(2081)
										{
											HX_STACK_LINE(2081)
											int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
											int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(2081)
											while(((_g1 < _g))){
												HX_STACK_LINE(2081)
												int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
												HX_STACK_LINE(2081)
												::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
												int key1 = _this->_keys->__get(i1);		HX_STACK_VAR(key1,"key1");
												HX_STACK_LINE(2081)
												int i2 = _this1->_hash->__get((int((key1 * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
												HX_STACK_LINE(2081)
												if (((i2 == (int)-1))){
													HX_STACK_LINE(2081)
													false;
												}
												else{
													HX_STACK_LINE(2081)
													if (((_this1->_data->__get(i2) == key1))){
														HX_STACK_LINE(2081)
														_this1->_data[(i2 + (int)1)] = i1;
														HX_STACK_LINE(2081)
														true;
													}
													else{
														HX_STACK_LINE(2081)
														i2 = _this1->_data->__get((i2 + (int)2));
														HX_STACK_LINE(2081)
														while(((i2 != (int)-1))){
															HX_STACK_LINE(2081)
															if (((_this1->_data->__get(i2) == key1))){
																HX_STACK_LINE(2081)
																_this1->_data[(i2 + (int)1)] = i1;
																HX_STACK_LINE(2081)
																break;
															}
															HX_STACK_LINE(2081)
															i2 = _this1->_data->__get((i2 + (int)2));
														}
														HX_STACK_LINE(2081)
														(i2 != (int)-1);
													}
												}
											}
										}
									}
									HX_STACK_LINE(2081)
									return true;
								}
								return null();
							}
						};
						HX_STACK_LINE(2081)
						return (  (((i == (int)-2147483647))) ? bool(false) : bool(_Function_3_2::Block(i,_this,key)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(2081)
			if ((_Function_2_1::Block(this,point))){
				HX_STACK_LINE(2082)
				(this->collisionsCount)--;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,addContact,(void))

Void Actor_obj::handleCollisions( ){
{
		HX_STACK_PUSH("Actor::handleCollisions","com/stencyl/models/Actor.hx",1914);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1915)
		::com::stencyl::models::Actor otherActor;		HX_STACK_VAR(otherActor,"otherActor");
		HX_STACK_LINE(1916)
		::box2D::dynamics::B2Fixture otherShape;		HX_STACK_VAR(otherShape,"otherShape");
		HX_STACK_LINE(1917)
		::box2D::dynamics::B2Fixture thisShape;		HX_STACK_VAR(thisShape,"thisShape");
		HX_STACK_LINE(1920)
		if (((this->contactCount > (int)0))){
			HX_STACK_LINE(1921)
			for(::cpp::FastIterator_obj< ::box2D::dynamics::contacts::B2Contact > *__it = ::cpp::CreateFastIterator< ::box2D::dynamics::contacts::B2Contact >(this->contacts->iterator());  __it->hasNext(); ){
				::box2D::dynamics::contacts::B2Contact p = __it->next();
				{
					HX_STACK_LINE(1924)
					int key = p->key;		HX_STACK_VAR(key,"key");
					struct _Function_3_1{
						inline static ::com::stencyl::models::actor::Collision Block( ::com::stencyl::models::Actor_obj *__this,int &key){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1926);
							{
								HX_STACK_LINE(1926)
								::de::polygonal::ds::IntHashTable _this = __this->collisions;		HX_STACK_VAR(_this,"_this");
								struct _Function_4_1{
									inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
										HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1926);
										{
											HX_STACK_LINE(1926)
											::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(1926)
											int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
											struct _Function_5_1{
												inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
													HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1926);
													{
														HX_STACK_LINE(1926)
														int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
														HX_STACK_LINE(1926)
														i = _this1->_data->__get((i + (int)2));
														HX_STACK_LINE(1926)
														while(((i != (int)-1))){
															HX_STACK_LINE(1926)
															if (((_this1->_data->__get(i) == key))){
																HX_STACK_LINE(1926)
																v = _this1->_data->__get((i + (int)1));
																HX_STACK_LINE(1926)
																break;
															}
															HX_STACK_LINE(1926)
															i = _this1->_data->__get((i + (int)2));
														}
														HX_STACK_LINE(1926)
														return v;
													}
													return null();
												}
											};
											HX_STACK_LINE(1926)
											return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_5_1::Block(i,_this1,key)) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1926)
								int i = _Function_4_1::Block(_this,key);		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1926)
								return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::actor::Collision(null()) : ::com::stencyl::models::actor::Collision(_this->_vals->__GetItem(i)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1926)
					if (((_Function_3_1::Block(this,key) != null()))){
						HX_STACK_LINE(1927)
						continue;
					}
					HX_STACK_LINE(1931)
					::com::stencyl::models::Actor a1 = hx::TCast< com::stencyl::models::Actor >::cast(p->getFixtureA()->getUserData());		HX_STACK_VAR(a1,"a1");
					HX_STACK_LINE(1932)
					::com::stencyl::models::Actor a2 = hx::TCast< com::stencyl::models::Actor >::cast(p->getFixtureB()->getUserData());		HX_STACK_VAR(a2,"a2");
					HX_STACK_LINE(1934)
					if (((a1 == hx::ObjectPtr<OBJ_>(this)))){
						HX_STACK_LINE(1936)
						otherActor = a2;
						HX_STACK_LINE(1937)
						otherShape = p->getFixtureB();
						HX_STACK_LINE(1938)
						thisShape = p->getFixtureA();
					}
					else{
						HX_STACK_LINE(1943)
						otherActor = a1;
						HX_STACK_LINE(1944)
						otherShape = p->getFixtureA();
						HX_STACK_LINE(1945)
						thisShape = p->getFixtureB();
					}
					HX_STACK_LINE(1949)
					::com::stencyl::models::actor::Collision d = ::com::stencyl::models::actor::Collision_obj::__new();		HX_STACK_VAR(d,"d");
					HX_STACK_LINE(1950)
					d->otherActor = otherActor;
					HX_STACK_LINE(1951)
					d->otherShape = otherShape;
					HX_STACK_LINE(1952)
					d->thisActor = hx::ObjectPtr<OBJ_>(this);
					HX_STACK_LINE(1953)
					d->thisShape = thisShape;
					HX_STACK_LINE(1954)
					d->actorA = a1;
					HX_STACK_LINE(1955)
					d->actorB = a2;
					HX_STACK_LINE(1959)
					p->getWorldManifold(::com::stencyl::models::Actor_obj::manifold);
					HX_STACK_LINE(1961)
					::box2D::common::math::B2Vec2 pt = null();		HX_STACK_VAR(pt,"pt");
					HX_STACK_LINE(1962)
					::com::stencyl::models::actor::CollisionPoint cp;		HX_STACK_VAR(cp,"cp");
					HX_STACK_LINE(1964)
					{
						HX_STACK_LINE(1964)
						::de::polygonal::ds::IntHashTable _this = this->collisions;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1964)
						_this->_key0 = (int)-2147483647;
						HX_STACK_LINE(1964)
						if (((_this->_h->_size == _this->_h->_capacity))){
							HX_STACK_LINE(1964)
							int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
							HX_STACK_LINE(1964)
							int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
							struct _Function_5_1{
								inline static Array< int > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1964);
									{
										HX_STACK_LINE(1964)
										Array< int > a;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(1964)
										a = Array_obj< int >::__new();
										HX_STACK_LINE(1964)
										a[(newSize - (int)1)] = null();
										HX_STACK_LINE(1964)
										return a;
									}
									return null();
								}
							};
							HX_STACK_LINE(1964)
							Array< int > tmp = _Function_5_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
							HX_STACK_LINE(1964)
							{
								HX_STACK_LINE(1964)
								Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
								int max = oldSize;		HX_STACK_VAR(max,"max");
								HX_STACK_LINE(1964)
								if (((max == (int)-1))){
									HX_STACK_LINE(1964)
									max = src->length;
								}
								HX_STACK_LINE(1964)
								int j = (int)0;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(1964)
								{
									HX_STACK_LINE(1964)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(1964)
									while(((_g < max))){
										HX_STACK_LINE(1964)
										int i = (_g)++;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(1964)
										tmp[(j)++] = src->__get(i);
									}
								}
								HX_STACK_LINE(1964)
								tmp;
							}
							HX_STACK_LINE(1964)
							_this->_next = tmp;
							struct _Function_5_2{
								inline static Array< int > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1964);
									{
										HX_STACK_LINE(1964)
										Array< int > a;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(1964)
										a = Array_obj< int >::__new();
										HX_STACK_LINE(1964)
										a[(newSize - (int)1)] = null();
										HX_STACK_LINE(1964)
										return a;
									}
									return null();
								}
							};
							HX_STACK_LINE(1964)
							Array< int > tmp1 = _Function_5_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(1964)
							{
								HX_STACK_LINE(1964)
								Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
								int max = oldSize;		HX_STACK_VAR(max,"max");
								HX_STACK_LINE(1964)
								if (((max == (int)-1))){
									HX_STACK_LINE(1964)
									max = src->length;
								}
								HX_STACK_LINE(1964)
								int j = (int)0;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(1964)
								{
									HX_STACK_LINE(1964)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(1964)
									while(((_g < max))){
										HX_STACK_LINE(1964)
										int i = (_g)++;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(1964)
										tmp1[(j)++] = src->__get(i);
									}
								}
								HX_STACK_LINE(1964)
								tmp1;
							}
							HX_STACK_LINE(1964)
							_this->_keys = tmp1;
							HX_STACK_LINE(1964)
							{
								HX_STACK_LINE(1964)
								int _g = oldSize;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1964)
								while(((_g < newSize))){
									HX_STACK_LINE(1964)
									int i = (_g)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1964)
									_this->_keys[i] = (int)-2147483647;
								}
							}
							HX_STACK_LINE(1964)
							{
								HX_STACK_LINE(1964)
								int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
								int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1964)
								while(((_g1 < _g))){
									HX_STACK_LINE(1964)
									int i = (_g1)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1964)
									_this->_next[i] = (i + (int)1);
								}
							}
							HX_STACK_LINE(1964)
							_this->_next[(newSize - (int)1)] = (int)-1;
							HX_STACK_LINE(1964)
							_this->_free = oldSize;
							struct _Function_5_3{
								inline static Array< ::Dynamic > Block( int &newSize){
									HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1964);
									{
										HX_STACK_LINE(1964)
										Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(1964)
										a = Array_obj< ::Dynamic >::__new();
										HX_STACK_LINE(1964)
										a[(newSize - (int)1)] = null();
										HX_STACK_LINE(1964)
										return a;
									}
									return null();
								}
							};
							HX_STACK_LINE(1964)
							Array< ::Dynamic > tmp2 = _Function_5_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(1964)
							{
								HX_STACK_LINE(1964)
								Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
								int max = oldSize;		HX_STACK_VAR(max,"max");
								HX_STACK_LINE(1964)
								if (((max == (int)-1))){
									HX_STACK_LINE(1964)
									max = src->length;
								}
								HX_STACK_LINE(1964)
								int j = (int)0;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(1964)
								{
									HX_STACK_LINE(1964)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(1964)
									while(((_g < max))){
										HX_STACK_LINE(1964)
										int i = (_g)++;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(1964)
										tmp2[(j)++] = src->__get(i).StaticCast< ::com::stencyl::models::actor::Collision >();
									}
								}
								HX_STACK_LINE(1964)
								tmp2;
							}
							HX_STACK_LINE(1964)
							_this->_vals = tmp2;
							HX_STACK_LINE(1964)
							(_this->_sizeLevel)++;
						}
						HX_STACK_LINE(1964)
						{
							HX_STACK_LINE(1964)
							::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1964)
							if (((_this1->_size == _this1->_capacity))){
								HX_STACK_LINE(1964)
								if ((_this1->_isResizable)){
									HX_STACK_LINE(1964)
									_this1->_expand();
								}
							}
							HX_STACK_LINE(1964)
							int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(1964)
							_this1->_free = _this1->_next->__get(_this1->_free);
							HX_STACK_LINE(1964)
							_this1->_data[i] = key;
							HX_STACK_LINE(1964)
							_this1->_data[(i + (int)1)] = _this->_free;
							HX_STACK_LINE(1964)
							int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(1964)
							int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(1964)
							if (((j == (int)-1))){
								HX_STACK_LINE(1964)
								_this1->_hash[b] = i;
								HX_STACK_LINE(1964)
								(_this1->_size)++;
								HX_STACK_LINE(1964)
								true;
							}
							else{
								HX_STACK_LINE(1964)
								bool first = (_this1->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
								HX_STACK_LINE(1964)
								int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
								HX_STACK_LINE(1964)
								while(((t != (int)-1))){
									HX_STACK_LINE(1964)
									if (((_this1->_data->__get(t) == key))){
										HX_STACK_LINE(1964)
										first = false;
									}
									HX_STACK_LINE(1964)
									j = t;
									HX_STACK_LINE(1964)
									t = _this1->_data->__get((t + (int)2));
								}
								HX_STACK_LINE(1964)
								_this1->_data[(j + (int)2)] = i;
								HX_STACK_LINE(1964)
								(_this1->_size)++;
								HX_STACK_LINE(1964)
								first;
							}
						}
						HX_STACK_LINE(1964)
						hx::IndexRef((_this->_vals).mPtr,_this->_free) = d;
						HX_STACK_LINE(1964)
						_this->_keys[_this->_free] = key;
						HX_STACK_LINE(1964)
						_this->_free = _this->_next->__get(_this->_free);
						HX_STACK_LINE(1964)
						true;
					}
					HX_STACK_LINE(1965)
					(this->collisionsCount)++;
					HX_STACK_LINE(1967)
					::com::stencyl::models::Actor thisActor = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(thisActor,"thisActor");
					HX_STACK_LINE(1968)
					::box2D::dynamics::B2Body body = thisActor->getBody();		HX_STACK_VAR(body,"body");
					HX_STACK_LINE(1969)
					::box2D::dynamics::B2Body otherBody = otherActor->getBody();		HX_STACK_VAR(otherBody,"otherBody");
					HX_STACK_LINE(1970)
					::box2D::dynamics::B2Body body1 = p->getFixtureA()->getBody();		HX_STACK_VAR(body1,"body1");
					HX_STACK_LINE(1971)
					::box2D::dynamics::B2Body body2 = p->getFixtureB()->getBody();		HX_STACK_VAR(body2,"body2");
					HX_STACK_LINE(1974)
					{
						HX_STACK_LINE(1974)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						Array< ::Dynamic > _g1 = ::com::stencyl::models::Actor_obj::manifold->m_points;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1974)
						while(((_g < _g1->length))){
							HX_STACK_LINE(1974)
							::box2D::common::math::B2Vec2 point = _g1->__get(_g).StaticCast< ::box2D::common::math::B2Vec2 >();		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(1974)
							++(_g);
							HX_STACK_LINE(1977)
							if (((bool((point->x != (int)0)) && bool((point->y != (int)0))))){
								HX_STACK_LINE(1979)
								pt = point;
								HX_STACK_LINE(1981)
								cp = ::com::stencyl::models::actor::CollisionPoint_obj::__new(pt->x,pt->y,::com::stencyl::models::Actor_obj::manifold->m_normal->x,::com::stencyl::models::Actor_obj::manifold->m_normal->y);
								HX_STACK_LINE(1989)
								d->points->push(cp);
								HX_STACK_LINE(1991)
								if (((body1 == body))){
									HX_STACK_LINE(1993)
									d->thisFromBottom = (bool(d->thisFromBottom) || bool((cp->normalY > (int)0)));
									HX_STACK_LINE(1994)
									d->thisFromTop = (bool(d->thisFromTop) || bool((cp->normalY < (int)0)));
									HX_STACK_LINE(1995)
									d->thisFromLeft = (bool(d->thisFromLeft) || bool((cp->normalX < (int)0)));
									HX_STACK_LINE(1996)
									d->thisFromRight = (bool(d->thisFromRight) || bool((cp->normalX > (int)0)));
								}
								else{
									HX_STACK_LINE(1999)
									if (((body2 == body))){
										HX_STACK_LINE(2001)
										d->thisFromBottom = (bool(d->thisFromBottom) || bool((cp->normalY < (int)0)));
										HX_STACK_LINE(2002)
										d->thisFromTop = (bool(d->thisFromTop) || bool((cp->normalY > (int)0)));
										HX_STACK_LINE(2003)
										d->thisFromLeft = (bool(d->thisFromLeft) || bool((cp->normalX > (int)0)));
										HX_STACK_LINE(2004)
										d->thisFromRight = (bool(d->thisFromRight) || bool((cp->normalX < (int)0)));
									}
								}
								HX_STACK_LINE(2009)
								if (((body1 == otherBody))){
									HX_STACK_LINE(2011)
									d->otherFromBottom = (bool(d->otherFromBottom) || bool((cp->normalY > (int)0)));
									HX_STACK_LINE(2012)
									d->otherFromTop = (bool(d->otherFromTop) || bool((cp->normalY < (int)0)));
									HX_STACK_LINE(2013)
									d->otherFromLeft = (bool(d->otherFromLeft) || bool((cp->normalX < (int)0)));
									HX_STACK_LINE(2014)
									d->otherFromRight = (bool(d->otherFromRight) || bool((cp->normalX > (int)0)));
								}
								else{
									HX_STACK_LINE(2017)
									if (((body2 == otherBody))){
										HX_STACK_LINE(2019)
										d->otherFromBottom = (bool(d->otherFromBottom) || bool((cp->normalY < (int)0)));
										HX_STACK_LINE(2020)
										d->otherFromTop = (bool(d->otherFromTop) || bool((cp->normalY > (int)0)));
										HX_STACK_LINE(2021)
										d->otherFromLeft = (bool(d->otherFromLeft) || bool((cp->normalX > (int)0)));
										HX_STACK_LINE(2022)
										d->otherFromRight = (bool(d->otherFromRight) || bool((cp->normalX < (int)0)));
									}
								}
								HX_STACK_LINE(2027)
								if (((otherActor != null()))){
									HX_STACK_LINE(2029)
									d->thisCollidedWithActor = (bool(d->thisCollidedWithActor) || bool((bool((bool((otherActor->groupID != (int)1)) && bool((otherActor->groupID != (int)-2)))) && bool(!(otherActor->isTerrainRegion)))));
									HX_STACK_LINE(2030)
									d->thisCollidedWithTerrain = (bool(d->thisCollidedWithTerrain) || bool(otherActor->isTerrainRegion));
									HX_STACK_LINE(2031)
									d->thisCollidedWithTile = (bool(d->thisCollidedWithTile) || bool((otherActor->groupID == (int)1)));
								}
								HX_STACK_LINE(2034)
								d->otherCollidedWithActor = (bool(d->otherCollidedWithActor) || bool((bool((bool((this->groupID != (int)1)) && bool((this->groupID != (int)-2)))) && bool(!(this->isTerrainRegion)))));
								HX_STACK_LINE(2035)
								d->otherCollidedWithTerrain = (bool(d->otherCollidedWithTerrain) || bool(this->isTerrainRegion));
								HX_STACK_LINE(2036)
								d->otherCollidedWithTile = (bool(d->otherCollidedWithTile) || bool((this->groupID == (int)1)));
								HX_STACK_LINE(2038)
								d->thisCollidedWithSensor = (bool(d->thisCollidedWithSensor) || bool(otherShape->isSensor()));
								HX_STACK_LINE(2039)
								d->otherCollidedWithSensor = (bool(d->otherCollidedWithSensor) || bool(thisShape->isSensor()));
							}
						}
					}
				}
;
			}
		}
		HX_STACK_LINE(2046)
		if (((this->collisionsCount > (int)0))){
			HX_STACK_LINE(2047)
			for(::cpp::FastIterator_obj< ::com::stencyl::models::actor::Collision > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::actor::Collision >(this->collisions->iterator());  __it->hasNext(); ){
				::com::stencyl::models::actor::Collision collision = __it->next();
				{
					HX_STACK_LINE(2052)
					if (((bool((bool((bool((bool((collision == null())) || bool((collision->thisActor == null())))) || bool((collision->otherActor == null())))) || bool(!(collision->thisActor->handlesCollisions)))) || bool(!(collision->otherActor->handlesCollisions))))){
						HX_STACK_LINE(2057)
						continue;
					}
					HX_STACK_LINE(2061)
					::com::stencyl::models::Actor_obj::lastCollided = collision->otherActor;
					HX_STACK_LINE(2062)
					{
						HX_STACK_LINE(2062)
						Dynamic listeners = this->collisionListeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(2062)
						int r = (int)0;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(2062)
						while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
							HX_STACK_LINE(2062)
							try{
								HX_STACK_LINE(2062)
								Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(2062)
								f(collision,listeners).Cast< Void >();
								HX_STACK_LINE(2062)
								if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
									HX_STACK_LINE(2062)
									(r)--;
								}
							}
							catch(Dynamic __e){
								if (__e.IsClass< ::String >() ){
									HX_STACK_BEGIN_CATCH
									::String e = __e;{
										HX_STACK_LINE(2062)
										::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
									}
								}
								else throw(__e);
							}
							HX_STACK_LINE(2062)
							(r)++;
						}
					}
					HX_STACK_LINE(2064)
					this->engine->handleCollision(hx::ObjectPtr<OBJ_>(this),collision);
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,handleCollisions,(void))

Void Actor_obj::checkScreenState( ){
{
		HX_STACK_PUSH("Actor::checkScreenState","com/stencyl/models/Actor.hx",1877);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1878)
		bool onScreen = this->isOnScreen();		HX_STACK_VAR(onScreen,"onScreen");
		HX_STACK_LINE(1879)
		bool inScene = (bool(onScreen) || bool(this->isInScene()));		HX_STACK_VAR(inScene,"inScene");
		HX_STACK_LINE(1881)
		bool enteredScreen = (bool(!(this->lastScreenState)) && bool(onScreen));		HX_STACK_VAR(enteredScreen,"enteredScreen");
		HX_STACK_LINE(1882)
		bool enteredScene = (bool(!(this->lastSceneState)) && bool(inScene));		HX_STACK_VAR(enteredScene,"enteredScene");
		HX_STACK_LINE(1883)
		bool exitedScreen = (bool(this->lastScreenState) && bool(!(onScreen)));		HX_STACK_VAR(exitedScreen,"exitedScreen");
		HX_STACK_LINE(1884)
		bool exitedScene = (bool(this->lastSceneState) && bool(!(inScene)));		HX_STACK_VAR(exitedScene,"exitedScene");
		HX_STACK_LINE(1886)
		{
			HX_STACK_LINE(1886)
			Dynamic listeners = this->positionListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(1886)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(1886)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(1886)
				try{
					HX_STACK_LINE(1886)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(1886)
					f(enteredScreen,exitedScreen,enteredScene,exitedScene,listeners).Cast< Void >();
					HX_STACK_LINE(1886)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(1886)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(1886)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4111,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners5")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(1886)
				(r)++;
			}
		}
		HX_STACK_LINE(1888)
		Dynamic typeListeners = this->engine->typeGroupPositionListeners->get((this->groupID + ::com::stencyl::models::Actor_obj::GROUP_OFFSET));		HX_STACK_VAR(typeListeners,"typeListeners");
		HX_STACK_LINE(1889)
		Dynamic groupListeners = this->engine->typeGroupPositionListeners->get(this->typeID);		HX_STACK_VAR(groupListeners,"groupListeners");
		HX_STACK_LINE(1891)
		if (((typeListeners != null()))){
			HX_STACK_LINE(1893)
			Dynamic listeners = typeListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(1893)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(1893)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(1893)
				try{
					HX_STACK_LINE(1893)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(1893)
					f(hx::ObjectPtr<OBJ_>(this),enteredScreen,exitedScreen,enteredScene,exitedScene,listeners).Cast< Void >();
					HX_STACK_LINE(1893)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(1893)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(1893)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4138,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners6")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(1893)
				(r)++;
			}
		}
		HX_STACK_LINE(1896)
		if (((groupListeners != null()))){
			HX_STACK_LINE(1898)
			Dynamic listeners = groupListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(1898)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(1898)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(1898)
				try{
					HX_STACK_LINE(1898)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(1898)
					f(hx::ObjectPtr<OBJ_>(this),enteredScreen,exitedScreen,enteredScene,exitedScene,listeners).Cast< Void >();
					HX_STACK_LINE(1898)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(1898)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(1898)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4138,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners6")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(1898)
				(r)++;
			}
		}
		HX_STACK_LINE(1901)
		this->lastScreenState = onScreen;
		HX_STACK_LINE(1902)
		this->lastSceneState = inScene;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,checkScreenState,(void))

Void Actor_obj::scaleBody( Float width,Float height){
{
		HX_STACK_PUSH("Actor::scaleBody","com/stencyl/models/Actor.hx",1807);
		HX_STACK_THIS(this);
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(1808)
		Array< ::Dynamic > fixtureList = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(fixtureList,"fixtureList");
		HX_STACK_LINE(1809)
		::box2D::dynamics::B2Fixture fixture = this->body->getFixtureList();		HX_STACK_VAR(fixture,"fixture");
		HX_STACK_LINE(1811)
		while(((fixture != null()))){
			HX_STACK_LINE(1813)
			fixtureList->push(fixture);
			HX_STACK_LINE(1814)
			fixture = fixture->getNext();
		}
		HX_STACK_LINE(1817)
		{
			HX_STACK_LINE(1817)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1817)
			while(((_g < fixtureList->length))){
				HX_STACK_LINE(1817)
				::box2D::dynamics::B2Fixture f = fixtureList->__get(_g).StaticCast< ::box2D::dynamics::B2Fixture >();		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(1817)
				++(_g);
				HX_STACK_LINE(1819)
				::box2D::collision::shapes::B2Shape poly = f->getShape();		HX_STACK_VAR(poly,"poly");
				HX_STACK_LINE(1820)
				::box2D::common::math::B2Vec2 center = this->body->getLocalCenter();		HX_STACK_VAR(center,"center");
				HX_STACK_LINE(1821)
				if ((::Std_obj::is(poly,hx::ClassOf< ::box2D::collision::shapes::B2CircleShape >()))){
					HX_STACK_LINE(1823)
					Float factorX = ((Float((int)1) / Float(this->bodyScale->x)) * width);		HX_STACK_VAR(factorX,"factorX");
					HX_STACK_LINE(1824)
					Float factorY = ((Float((int)1) / Float(this->bodyScale->y)) * height);		HX_STACK_VAR(factorY,"factorY");
					HX_STACK_LINE(1826)
					::box2D::common::math::B2Vec2 p = (hx::TCast< box2D::collision::shapes::B2CircleShape >::cast(poly))->m_p;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(1827)
					p->subtract(center);
					HX_STACK_LINE(1828)
					p->x = (p->x * factorX);
					HX_STACK_LINE(1829)
					p->y = (p->y * factorY);
					HX_STACK_LINE(1831)
					(hx::TCast< box2D::collision::shapes::B2CircleShape >::cast(poly))->m_p = center->copy(null());
					HX_STACK_LINE(1832)
					(hx::TCast< box2D::collision::shapes::B2CircleShape >::cast(poly))->m_p->add(p);
					HX_STACK_LINE(1833)
					poly->m_radius = (poly->m_radius * ::Math_obj::abs(factorX));
				}
				else{
					HX_STACK_LINE(1836)
					if ((::Std_obj::is(poly,hx::ClassOf< ::box2D::collision::shapes::B2PolygonShape >()))){
						HX_STACK_LINE(1838)
						Array< ::Dynamic > verts = (hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(poly))->m_vertices;		HX_STACK_VAR(verts,"verts");
						HX_STACK_LINE(1839)
						Array< ::Dynamic > newVerts = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(newVerts,"newVerts");
						HX_STACK_LINE(1841)
						{
							HX_STACK_LINE(1841)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(1841)
							while(((_g1 < verts->length))){
								HX_STACK_LINE(1841)
								::box2D::common::math::B2Vec2 v = verts->__get(_g1).StaticCast< ::box2D::common::math::B2Vec2 >();		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(1841)
								++(_g1);
								HX_STACK_LINE(1843)
								v->subtract(center);
								HX_STACK_LINE(1844)
								v->x = ((v->x * ((Float((int)1) / Float(::Math_obj::abs(this->bodyScale->x))))) * ::Math_obj::abs(width));
								HX_STACK_LINE(1845)
								v->y = ((v->y * ((Float((int)1) / Float(::Math_obj::abs(this->bodyScale->y))))) * ::Math_obj::abs(height));
								HX_STACK_LINE(1847)
								if (((bool((bool((this->bodyScale->x > (int)0)) && bool((width < (int)0)))) || bool((bool((this->bodyScale->x < (int)0)) && bool((width > (int)0))))))){
									HX_STACK_LINE(1848)
									v->x = -(v->x);
								}
								HX_STACK_LINE(1852)
								if (((bool((bool((this->bodyScale->y > (int)0)) && bool((height < (int)0)))) || bool((bool((this->bodyScale->y < (int)0)) && bool((height > (int)0))))))){
									HX_STACK_LINE(1853)
									v->y = -(v->y);
								}
								HX_STACK_LINE(1857)
								::box2D::common::math::B2Vec2 newVert = center->copy(null());		HX_STACK_VAR(newVert,"newVert");
								HX_STACK_LINE(1858)
								newVert->add(v);
								HX_STACK_LINE(1860)
								newVerts->push(newVert);
							}
						}
						HX_STACK_LINE(1863)
						if (((bool((bool((bool((bool((this->bodyScale->x > (int)0)) && bool((width < (int)0)))) || bool((bool((this->bodyScale->x < (int)0)) && bool((width > (int)0)))))) || bool((bool((this->bodyScale->y > (int)0)) && bool((height < (int)0)))))) || bool((bool((this->bodyScale->y < (int)0)) && bool((height > (int)0))))))){
							HX_STACK_LINE(1864)
							newVerts->reverse();
						}
						HX_STACK_LINE(1868)
						(hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(poly))->setAsArray(newVerts,newVerts->length);
					}
				}
			}
		}
		HX_STACK_LINE(1872)
		this->bodyScale->x = width;
		HX_STACK_LINE(1873)
		this->bodyScale->y = height;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,scaleBody,(void))

Void Actor_obj::updateTweenProperties( ){
{
		HX_STACK_PUSH("Actor::updateTweenProperties","com/stencyl/models/Actor.hx",1736);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1739)
		bool a = (this->activePositionTweens > (int)0);		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(1740)
		bool b = (this->activeAngleTweens > (int)0);		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(1742)
		if (((bool((bool((bool((bool(this->autoScale) && bool((this->physicsMode == (int)0)))) && bool((this->body != null())))) && bool((this->bodyDef->type != ::box2D::dynamics::B2Body_obj::b2_staticBody)))) && bool(((bool((this->bodyScale->x != this->realScaleX)) || bool((this->bodyScale->y != this->realScaleY)))))))){
			HX_STACK_LINE(1743)
			if (((bool((this->realScaleX != (int)0)) && bool((this->realScaleY != (int)0))))){
				HX_STACK_LINE(1745)
				this->scaleBody(this->realScaleX,this->realScaleY);
			}
		}
		HX_STACK_LINE(1750)
		if (((bool(a) && bool(b)))){
			HX_STACK_LINE(1752)
			if (((this->physicsMode == (int)0))){
				HX_STACK_LINE(1754)
				this->realX = this->tweenLoc->x;
				HX_STACK_LINE(1755)
				this->realY = this->tweenLoc->y;
				HX_STACK_LINE(1756)
				this->realAngle = this->tweenAngle->angle;
				HX_STACK_LINE(1758)
				this->dummy->x = ::com::stencyl::Engine_obj::toPhysicalUnits(((this->realX + ::Math_obj::floor((Float(this->cacheWidth) / Float((int)2)))) + this->currOffset->x));
				HX_STACK_LINE(1759)
				this->dummy->y = ::com::stencyl::Engine_obj::toPhysicalUnits(((this->realY + ::Math_obj::floor((Float(this->cacheHeight) / Float((int)2)))) + this->currOffset->y));
				HX_STACK_LINE(1761)
				this->body->setPositionAndAngle(this->dummy,((Float(3.1415926535897) / Float((int)180)) * this->realAngle));
			}
			else{
				HX_STACK_LINE(1770)
				this->moveActorBy((this->tweenLoc->x - this->getX(false)),(this->tweenLoc->y - this->getY(false)),this->groupsToCollideWith,null());
				HX_STACK_LINE(1771)
				this->setAngle(this->tweenAngle->angle,false);
			}
			HX_STACK_LINE(1774)
			this->updateMatrix = true;
		}
		else{
			HX_STACK_LINE(1779)
			if ((a)){
				HX_STACK_LINE(1780)
				if (((this->physicsMode == (int)0))){
					HX_STACK_LINE(1783)
					this->setX(this->tweenLoc->x,null(),null());
					HX_STACK_LINE(1784)
					this->setY(this->tweenLoc->y,null(),null());
				}
				else{
					HX_STACK_LINE(1789)
					this->moveActorBy((this->tweenLoc->x - this->getX(false)),(this->tweenLoc->y - this->getY(false)),this->groupsToCollideWith,null());
					HX_STACK_LINE(1790)
					this->updateMatrix = true;
				}
			}
			HX_STACK_LINE(1794)
			if ((b)){
				HX_STACK_LINE(1795)
				this->setAngle(this->tweenAngle->angle,false);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,updateTweenProperties,(void))

Void Actor_obj::updateDrawingMatrix( ){
{
		HX_STACK_PUSH("Actor::updateDrawingMatrix","com/stencyl/models/Actor.hx",1571);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1572)
		if ((this->paused)){
			HX_STACK_LINE(1573)
			return null();
		}
		HX_STACK_LINE(1577)
		if ((this->smoothMove)){
			HX_STACK_LINE(1579)
			if ((!(this->firstMove))){
				HX_STACK_LINE(1581)
				this->drawX = this->realX;
				HX_STACK_LINE(1582)
				this->drawY = this->realY;
				HX_STACK_LINE(1583)
				this->firstMove = true;
			}
			HX_STACK_LINE(1586)
			this->moveXDistance = (this->realX - this->drawX);
			HX_STACK_LINE(1587)
			this->moveYDistance = (this->realY - this->drawY);
			HX_STACK_LINE(1590)
			if (((this->moveXDistance > this->minMove))){
				HX_STACK_LINE(1591)
				if ((((this->moveXDistance * this->moveMultiplier) > this->minMove))){
					HX_STACK_LINE(1593)
					if (((this->moveXDistance > this->maxMove))){
						HX_STACK_LINE(1595)
						this->drawX = this->realX;
					}
					else{
						HX_STACK_LINE(1600)
						hx::AddEq(this->drawX,(this->moveXDistance * this->moveMultiplier));
					}
				}
				else{
					HX_STACK_LINE(1606)
					hx::AddEq(this->drawX,this->minMove);
				}
			}
			else{
				HX_STACK_LINE(1611)
				if (((this->moveXDistance < (this->minMove * (int)-1)))){
					HX_STACK_LINE(1612)
					if ((((this->moveXDistance * this->moveMultiplier) < (this->minMove * (int)-1)))){
						HX_STACK_LINE(1614)
						if (((this->moveXDistance < (this->maxMove * (int)-1)))){
							HX_STACK_LINE(1616)
							this->drawX = this->realX;
						}
						else{
							HX_STACK_LINE(1621)
							hx::AddEq(this->drawX,(this->moveXDistance * this->moveMultiplier));
						}
					}
					else{
						HX_STACK_LINE(1627)
						hx::SubEq(this->drawX,this->minMove);
					}
				}
				else{
					HX_STACK_LINE(1633)
					this->drawX = this->realX;
				}
			}
			HX_STACK_LINE(1638)
			if (((this->moveYDistance > this->minMove))){
				HX_STACK_LINE(1639)
				if ((((this->moveYDistance * this->moveMultiplier) > this->minMove))){
					HX_STACK_LINE(1641)
					if (((this->moveYDistance > this->maxMove))){
						HX_STACK_LINE(1643)
						this->drawY = this->realY;
					}
					else{
						HX_STACK_LINE(1648)
						hx::AddEq(this->drawY,(this->moveYDistance * this->moveMultiplier));
					}
				}
				else{
					HX_STACK_LINE(1654)
					hx::AddEq(this->drawY,this->minMove);
				}
			}
			else{
				HX_STACK_LINE(1659)
				if (((this->moveYDistance < (this->minMove * (int)-1)))){
					HX_STACK_LINE(1660)
					if ((((this->moveYDistance * this->moveMultiplier) < (this->minMove * (int)-1)))){
						HX_STACK_LINE(1662)
						if (((this->moveYDistance < (this->maxMove * (int)-1)))){
							HX_STACK_LINE(1664)
							this->drawY = this->realY;
						}
						else{
							HX_STACK_LINE(1669)
							hx::AddEq(this->drawY,(this->moveYDistance * this->moveMultiplier));
						}
					}
					else{
						HX_STACK_LINE(1675)
						hx::SubEq(this->drawY,this->minMove);
					}
				}
				else{
					HX_STACK_LINE(1681)
					this->drawY = this->realY;
				}
			}
		}
		else{
			HX_STACK_LINE(1688)
			if (((this->physicsMode > (int)0))){
				HX_STACK_LINE(1691)
				this->drawX = this->realX;
				HX_STACK_LINE(1692)
				this->drawY = this->realY;
			}
			else{
				HX_STACK_LINE(1697)
				::box2D::common::math::B2Vec2 p = this->body->getPosition();		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(1699)
				this->drawX = (p->x * ::com::stencyl::Engine_obj::physicsScale);
				HX_STACK_LINE(1700)
				this->drawY = (p->y * ::com::stencyl::Engine_obj::physicsScale);
			}
		}
		HX_STACK_LINE(1704)
		Float trueScaleX = (::com::stencyl::Engine_obj::SCALE * this->realScaleX);		HX_STACK_VAR(trueScaleX,"trueScaleX");
		HX_STACK_LINE(1705)
		Float trueScaleY = (::com::stencyl::Engine_obj::SCALE * this->realScaleY);		HX_STACK_VAR(trueScaleY,"trueScaleY");
		HX_STACK_LINE(1707)
		this->transformPoint->x = (this->currOrigin->x - (Float((this->cacheWidth * ::com::stencyl::Engine_obj::SCALE)) / Float((int)2)));
		HX_STACK_LINE(1708)
		this->transformPoint->y = (this->currOrigin->y - (Float((this->cacheHeight * ::com::stencyl::Engine_obj::SCALE)) / Float((int)2)));
		HX_STACK_LINE(1710)
		this->transformMatrix->identity();
		HX_STACK_LINE(1711)
		this->transformMatrix->translate((-(this->transformPoint->x) * ::com::stencyl::Engine_obj::SCALE),(-(this->transformPoint->y) * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(1712)
		this->transformMatrix->scale(this->realScaleX,this->realScaleY);
		HX_STACK_LINE(1714)
		if (((this->realAngle != (int)0))){
			HX_STACK_LINE(1715)
			this->transformMatrix->rotate((this->realAngle * ((Float(3.1415926535897) / Float((int)180)))));
		}
		HX_STACK_LINE(1719)
		this->transformMatrix->translate((this->drawX * ::com::stencyl::Engine_obj::SCALE),(this->drawY * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(1722)
		if (((this->transformObj == null()))){
			HX_STACK_LINE(1723)
			this->transformObj = this->get_transform();
		}
		HX_STACK_LINE(1727)
		this->transformObj->set_matrix(this->transformMatrix);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,updateDrawingMatrix,(void))

Void Actor_obj::internalUpdate( Float elapsedTime,bool doAll){
{
		HX_STACK_PUSH("Actor::internalUpdate","com/stencyl/models/Actor.hx",1497);
		HX_STACK_THIS(this);
		HX_STACK_ARG(elapsedTime,"elapsedTime");
		HX_STACK_ARG(doAll,"doAll");
		HX_STACK_LINE(1498)
		if ((this->paused)){
			HX_STACK_LINE(1499)
			return null();
		}
		HX_STACK_LINE(1503)
		if (((this->physicsMode > (int)0))){
			HX_STACK_LINE(1505)
			if (((bool((bool((this->physicsMode == (int)1)) && bool(!(this->ignoreGravity)))) && bool(!(this->isHUD))))){
				HX_STACK_LINE(1508)
				hx::AddEq(this->xSpeed,((elapsedTime * this->engine->gravityX) * 0.001));
				HX_STACK_LINE(1509)
				hx::AddEq(this->ySpeed,((elapsedTime * this->engine->gravityY) * 0.001));
			}
			HX_STACK_LINE(1512)
			if (((bool((this->xSpeed != (int)0)) || bool((this->ySpeed != (int)0))))){
				HX_STACK_LINE(1514)
				this->resetReal(this->realX,this->realY);
				HX_STACK_LINE(1516)
				this->moveActorBy(((elapsedTime * this->xSpeed) * 0.01),((elapsedTime * this->ySpeed) * 0.01),this->groupsToCollideWith,null());
			}
			HX_STACK_LINE(1519)
			if (((this->rSpeed != (int)0))){
				HX_STACK_LINE(1520)
				hx::AddEq(this->realAngle,((elapsedTime * this->rSpeed) * 0.001));
			}
			HX_STACK_LINE(1524)
			if ((this->fixedRotation)){
				HX_STACK_LINE(1526)
				this->realAngle = (int)0;
				HX_STACK_LINE(1527)
				this->rSpeed = (int)0;
			}
		}
		else{
			HX_STACK_LINE(1533)
			::box2D::common::math::B2Vec2 p = this->body->getPosition();		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(1541)
			this->realX = (p->x * ::com::stencyl::Engine_obj::physicsScale);
			HX_STACK_LINE(1542)
			this->realY = (p->y * ::com::stencyl::Engine_obj::physicsScale);
			HX_STACK_LINE(1545)
			this->resetReal(this->realX,this->realY);
			HX_STACK_LINE(1547)
			this->realAngle = (this->body->getAngle() * ((Float((int)180) / Float(3.1415926535897))));
		}
		HX_STACK_LINE(1550)
		if (((bool((bool((bool((bool((this->lastX != this->realX)) || bool((this->lastY != this->realY)))) || bool((this->lastAngle != this->realAngle)))) || bool((this->lastScale->x != this->realScaleX)))) || bool((this->lastScale->y != this->realScaleY))))){
			HX_STACK_LINE(1551)
			this->updateMatrix = true;
		}
		HX_STACK_LINE(1555)
		this->lastX = this->realX;
		HX_STACK_LINE(1556)
		this->lastY = this->realY;
		HX_STACK_LINE(1557)
		this->lastAngle = this->realAngle;
		HX_STACK_LINE(1558)
		this->lastScale->x = this->realScaleX;
		HX_STACK_LINE(1559)
		this->lastScale->y = this->realScaleY;
		HX_STACK_LINE(1561)
		if (((bool(doAll) && bool((this->currAnimationAsAnim != null()))))){
			HX_STACK_LINE(1562)
			this->currAnimationAsAnim->__Field(HX_CSTRING("update"),true)(elapsedTime);
		}
		HX_STACK_LINE(1567)
		this->updateTweenProperties();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,internalUpdate,(void))

Void Actor_obj::innerUpdate( Float elapsedTime,bool hudCheck){
{
		HX_STACK_PUSH("Actor::innerUpdate","com/stencyl/models/Actor.hx",1393);
		HX_STACK_THIS(this);
		HX_STACK_ARG(elapsedTime,"elapsedTime");
		HX_STACK_ARG(hudCheck,"hudCheck");
		HX_STACK_LINE(1395)
		if (((bool((bool((bool((bool((bool(this->paused) || bool(this->isCamera))) || bool(this->dying))) || bool(this->dead))) || bool(this->destroyed))) || bool((bool(hudCheck) && bool(((bool(this->isHUD) || bool(this->alwaysSimulate))))))))){
			HX_STACK_LINE(1396)
			return null();
		}
		HX_STACK_LINE(1400)
		if (((this->mouseOverListeners->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(1403)
			bool mouseOver = this->isMouseOver();		HX_STACK_VAR(mouseOver,"mouseOver");
			HX_STACK_LINE(1405)
			if (((bool((this->mouseState <= (int)0)) && bool(mouseOver)))){
				HX_STACK_LINE(1406)
				this->mouseState = (int)1;
			}
			HX_STACK_LINE(1417)
			if ((mouseOver)){
				HX_STACK_LINE(1421)
				this->mouseState = (int)2;
				HX_STACK_LINE(1423)
				if ((::com::stencyl::Input_obj::mousePressed)){
					HX_STACK_LINE(1424)
					this->mouseState = (int)3;
				}
				else{
					HX_STACK_LINE(1429)
					if ((::com::stencyl::Input_obj::mouseDown)){
						HX_STACK_LINE(1430)
						this->mouseState = (int)4;
					}
				}
				HX_STACK_LINE(1435)
				if ((::com::stencyl::Input_obj::mouseReleased)){
					HX_STACK_LINE(1436)
					this->mouseState = (int)5;
				}
			}
			else{
				HX_STACK_LINE(1442)
				if (((bool((this->mouseState > (int)0)) && bool(!(mouseOver))))){
					HX_STACK_LINE(1443)
					this->mouseState = (int)-1;
				}
				else{
					HX_STACK_LINE(1448)
					if (((bool((this->mouseState == (int)-1)) && bool(!(mouseOver))))){
						HX_STACK_LINE(1449)
						this->mouseState = (int)0;
					}
				}
			}
			HX_STACK_LINE(1453)
			{
				HX_STACK_LINE(1453)
				Dynamic listeners = this->mouseOverListeners;		HX_STACK_VAR(listeners,"listeners");
				Dynamic value = this->mouseState;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(1453)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(1453)
				while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
					HX_STACK_LINE(1453)
					try{
						HX_STACK_LINE(1453)
						Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(1453)
						f(value,listeners).Cast< Void >();
						HX_STACK_LINE(1453)
						if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
							HX_STACK_LINE(1453)
							(r)--;
						}
					}
					catch(Dynamic __e){
						if (__e.IsClass< ::String >() ){
							HX_STACK_BEGIN_CATCH
							::String e = __e;{
								HX_STACK_LINE(1453)
								::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
							}
						}
						else throw(__e);
					}
					HX_STACK_LINE(1453)
					(r)++;
				}
			}
		}
		HX_STACK_LINE(1456)
		int checkType = this->type->ID;		HX_STACK_VAR(checkType,"checkType");
		HX_STACK_LINE(1457)
		int groupType = (::com::stencyl::models::Actor_obj::GROUP_OFFSET + this->groupID);		HX_STACK_VAR(groupType,"groupType");
		HX_STACK_LINE(1459)
		::haxe::ds::IntMap ec = this->engine->collisionListeners;		HX_STACK_VAR(ec,"ec");
		HX_STACK_LINE(1460)
		::haxe::ds::IntMap ep = this->engine->typeGroupPositionListeners;		HX_STACK_VAR(ep,"ep");
		HX_STACK_LINE(1462)
		if (((this->physicsMode == (int)0))){
			HX_STACK_LINE(1463)
			if (((bool((bool((this->collisionListenerCount > (int)0)) || bool((ec->get(checkType) != null())))) || bool((ec->get(groupType) != null()))))){
				HX_STACK_LINE(1469)
				::com::stencyl::models::Actor otherActor;		HX_STACK_VAR(otherActor,"otherActor");
				HX_STACK_LINE(1469)
				::box2D::dynamics::B2Fixture otherShape;		HX_STACK_VAR(otherShape,"otherShape");
				HX_STACK_LINE(1469)
				::box2D::dynamics::B2Fixture thisShape;		HX_STACK_VAR(thisShape,"thisShape");
				HX_STACK_LINE(1469)
				if (((this->contactCount > (int)0))){
					HX_STACK_LINE(1469)
					for(::cpp::FastIterator_obj< ::box2D::dynamics::contacts::B2Contact > *__it = ::cpp::CreateFastIterator< ::box2D::dynamics::contacts::B2Contact >(this->contacts->iterator());  __it->hasNext(); ){
						::box2D::dynamics::contacts::B2Contact p = __it->next();
						{
							HX_STACK_LINE(1469)
							int key = p->key;		HX_STACK_VAR(key,"key");
							struct _Function_5_1{
								inline static ::com::stencyl::models::actor::Collision Block( ::com::stencyl::models::Actor_obj *__this,int &key){
									HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1469);
									{
										HX_STACK_LINE(1469)
										::de::polygonal::ds::IntHashTable _this = __this->collisions;		HX_STACK_VAR(_this,"_this");
										struct _Function_6_1{
											inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &key){
												HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1469);
												{
													HX_STACK_LINE(1469)
													::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1469)
													int i = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
													struct _Function_7_1{
														inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &key){
															HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1469);
															{
																HX_STACK_LINE(1469)
																int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
																HX_STACK_LINE(1469)
																i = _this1->_data->__get((i + (int)2));
																HX_STACK_LINE(1469)
																while(((i != (int)-1))){
																	HX_STACK_LINE(1469)
																	if (((_this1->_data->__get(i) == key))){
																		HX_STACK_LINE(1469)
																		v = _this1->_data->__get((i + (int)1));
																		HX_STACK_LINE(1469)
																		break;
																	}
																	HX_STACK_LINE(1469)
																	i = _this1->_data->__get((i + (int)2));
																}
																HX_STACK_LINE(1469)
																return v;
															}
															return null();
														}
													};
													HX_STACK_LINE(1469)
													return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == key))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_7_1::Block(i,_this1,key)) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(1469)
										int i = _Function_6_1::Block(_this,key);		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(1469)
										return (  (((i == (int)-2147483647))) ? ::com::stencyl::models::actor::Collision(null()) : ::com::stencyl::models::actor::Collision(_this->_vals->__GetItem(i)) );
									}
									return null();
								}
							};
							HX_STACK_LINE(1469)
							if (((_Function_5_1::Block(this,key) != null()))){
								HX_STACK_LINE(1469)
								continue;
							}
							HX_STACK_LINE(1469)
							::com::stencyl::models::Actor a1 = hx::TCast< com::stencyl::models::Actor >::cast(p->getFixtureA()->getUserData());		HX_STACK_VAR(a1,"a1");
							HX_STACK_LINE(1469)
							::com::stencyl::models::Actor a2 = hx::TCast< com::stencyl::models::Actor >::cast(p->getFixtureB()->getUserData());		HX_STACK_VAR(a2,"a2");
							HX_STACK_LINE(1469)
							if (((a1 == hx::ObjectPtr<OBJ_>(this)))){
								HX_STACK_LINE(1469)
								otherActor = a2;
								HX_STACK_LINE(1469)
								otherShape = p->getFixtureB();
								HX_STACK_LINE(1469)
								thisShape = p->getFixtureA();
							}
							else{
								HX_STACK_LINE(1469)
								otherActor = a1;
								HX_STACK_LINE(1469)
								otherShape = p->getFixtureA();
								HX_STACK_LINE(1469)
								thisShape = p->getFixtureB();
							}
							HX_STACK_LINE(1469)
							::com::stencyl::models::actor::Collision d = ::com::stencyl::models::actor::Collision_obj::__new();		HX_STACK_VAR(d,"d");
							HX_STACK_LINE(1469)
							d->otherActor = otherActor;
							HX_STACK_LINE(1469)
							d->otherShape = otherShape;
							HX_STACK_LINE(1469)
							d->thisActor = hx::ObjectPtr<OBJ_>(this);
							HX_STACK_LINE(1469)
							d->thisShape = thisShape;
							HX_STACK_LINE(1469)
							d->actorA = a1;
							HX_STACK_LINE(1469)
							d->actorB = a2;
							HX_STACK_LINE(1469)
							p->getWorldManifold(::com::stencyl::models::Actor_obj::manifold);
							HX_STACK_LINE(1469)
							::box2D::common::math::B2Vec2 pt = null();		HX_STACK_VAR(pt,"pt");
							HX_STACK_LINE(1469)
							::com::stencyl::models::actor::CollisionPoint cp;		HX_STACK_VAR(cp,"cp");
							HX_STACK_LINE(1469)
							{
								HX_STACK_LINE(1469)
								::de::polygonal::ds::IntHashTable _this = this->collisions;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1469)
								_this->_key0 = (int)-2147483647;
								HX_STACK_LINE(1469)
								if (((_this->_h->_size == _this->_h->_capacity))){
									HX_STACK_LINE(1469)
									int oldSize = _this->_h->_capacity;		HX_STACK_VAR(oldSize,"oldSize");
									HX_STACK_LINE(1469)
									int newSize = (int(oldSize) << int((int)1));		HX_STACK_VAR(newSize,"newSize");
									struct _Function_7_1{
										inline static Array< int > Block( int &newSize){
											HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1469);
											{
												HX_STACK_LINE(1469)
												Array< int > a;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(1469)
												a = Array_obj< int >::__new();
												HX_STACK_LINE(1469)
												a[(newSize - (int)1)] = null();
												HX_STACK_LINE(1469)
												return a;
											}
											return null();
										}
									};
									HX_STACK_LINE(1469)
									Array< int > tmp = _Function_7_1::Block(newSize);		HX_STACK_VAR(tmp,"tmp");
									HX_STACK_LINE(1469)
									{
										HX_STACK_LINE(1469)
										Array< int > src = _this->_next;		HX_STACK_VAR(src,"src");
										int max = oldSize;		HX_STACK_VAR(max,"max");
										HX_STACK_LINE(1469)
										if (((max == (int)-1))){
											HX_STACK_LINE(1469)
											max = src->length;
										}
										HX_STACK_LINE(1469)
										int j = (int)0;		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(1469)
										{
											HX_STACK_LINE(1469)
											int _g = (int)0;		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(1469)
											while(((_g < max))){
												HX_STACK_LINE(1469)
												int i = (_g)++;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(1469)
												tmp[(j)++] = src->__get(i);
											}
										}
										HX_STACK_LINE(1469)
										tmp;
									}
									HX_STACK_LINE(1469)
									_this->_next = tmp;
									struct _Function_7_2{
										inline static Array< int > Block( int &newSize){
											HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1469);
											{
												HX_STACK_LINE(1469)
												Array< int > a;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(1469)
												a = Array_obj< int >::__new();
												HX_STACK_LINE(1469)
												a[(newSize - (int)1)] = null();
												HX_STACK_LINE(1469)
												return a;
											}
											return null();
										}
									};
									HX_STACK_LINE(1469)
									Array< int > tmp1 = _Function_7_2::Block(newSize);		HX_STACK_VAR(tmp1,"tmp1");
									HX_STACK_LINE(1469)
									{
										HX_STACK_LINE(1469)
										Array< int > src = _this->_keys;		HX_STACK_VAR(src,"src");
										int max = oldSize;		HX_STACK_VAR(max,"max");
										HX_STACK_LINE(1469)
										if (((max == (int)-1))){
											HX_STACK_LINE(1469)
											max = src->length;
										}
										HX_STACK_LINE(1469)
										int j = (int)0;		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(1469)
										{
											HX_STACK_LINE(1469)
											int _g = (int)0;		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(1469)
											while(((_g < max))){
												HX_STACK_LINE(1469)
												int i = (_g)++;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(1469)
												tmp1[(j)++] = src->__get(i);
											}
										}
										HX_STACK_LINE(1469)
										tmp1;
									}
									HX_STACK_LINE(1469)
									_this->_keys = tmp1;
									HX_STACK_LINE(1469)
									{
										HX_STACK_LINE(1469)
										int _g = oldSize;		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(1469)
										while(((_g < newSize))){
											HX_STACK_LINE(1469)
											int i = (_g)++;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(1469)
											_this->_keys[i] = (int)-2147483647;
										}
									}
									HX_STACK_LINE(1469)
									{
										HX_STACK_LINE(1469)
										int _g1 = (oldSize - (int)1);		HX_STACK_VAR(_g1,"_g1");
										int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(1469)
										while(((_g1 < _g))){
											HX_STACK_LINE(1469)
											int i = (_g1)++;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(1469)
											_this->_next[i] = (i + (int)1);
										}
									}
									HX_STACK_LINE(1469)
									_this->_next[(newSize - (int)1)] = (int)-1;
									HX_STACK_LINE(1469)
									_this->_free = oldSize;
									struct _Function_7_3{
										inline static Array< ::Dynamic > Block( int &newSize){
											HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1469);
											{
												HX_STACK_LINE(1469)
												Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(1469)
												a = Array_obj< ::Dynamic >::__new();
												HX_STACK_LINE(1469)
												a[(newSize - (int)1)] = null();
												HX_STACK_LINE(1469)
												return a;
											}
											return null();
										}
									};
									HX_STACK_LINE(1469)
									Array< ::Dynamic > tmp2 = _Function_7_3::Block(newSize);		HX_STACK_VAR(tmp2,"tmp2");
									HX_STACK_LINE(1469)
									{
										HX_STACK_LINE(1469)
										Array< ::Dynamic > src = _this->_vals;		HX_STACK_VAR(src,"src");
										int max = oldSize;		HX_STACK_VAR(max,"max");
										HX_STACK_LINE(1469)
										if (((max == (int)-1))){
											HX_STACK_LINE(1469)
											max = src->length;
										}
										HX_STACK_LINE(1469)
										int j = (int)0;		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(1469)
										{
											HX_STACK_LINE(1469)
											int _g = (int)0;		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(1469)
											while(((_g < max))){
												HX_STACK_LINE(1469)
												int i = (_g)++;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(1469)
												tmp2[(j)++] = src->__get(i).StaticCast< ::com::stencyl::models::actor::Collision >();
											}
										}
										HX_STACK_LINE(1469)
										tmp2;
									}
									HX_STACK_LINE(1469)
									_this->_vals = tmp2;
									HX_STACK_LINE(1469)
									(_this->_sizeLevel)++;
								}
								HX_STACK_LINE(1469)
								{
									HX_STACK_LINE(1469)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(1469)
									if (((_this1->_size == _this1->_capacity))){
										HX_STACK_LINE(1469)
										if ((_this1->_isResizable)){
											HX_STACK_LINE(1469)
											_this1->_expand();
										}
									}
									HX_STACK_LINE(1469)
									int i = (_this1->_free * (int)3);		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1469)
									_this1->_free = _this1->_next->__get(_this1->_free);
									HX_STACK_LINE(1469)
									_this1->_data[i] = key;
									HX_STACK_LINE(1469)
									_this1->_data[(i + (int)1)] = _this->_free;
									HX_STACK_LINE(1469)
									int b = (int((key * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(1469)
									int j = _this1->_hash->__get(b);		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(1469)
									if (((j == (int)-1))){
										HX_STACK_LINE(1469)
										_this1->_hash[b] = i;
										HX_STACK_LINE(1469)
										(_this1->_size)++;
										HX_STACK_LINE(1469)
										true;
									}
									else{
										HX_STACK_LINE(1469)
										bool first = (_this1->_data->__get(j) != key);		HX_STACK_VAR(first,"first");
										HX_STACK_LINE(1469)
										int t = _this1->_data->__get((j + (int)2));		HX_STACK_VAR(t,"t");
										HX_STACK_LINE(1469)
										while(((t != (int)-1))){
											HX_STACK_LINE(1469)
											if (((_this1->_data->__get(t) == key))){
												HX_STACK_LINE(1469)
												first = false;
											}
											HX_STACK_LINE(1469)
											j = t;
											HX_STACK_LINE(1469)
											t = _this1->_data->__get((t + (int)2));
										}
										HX_STACK_LINE(1469)
										_this1->_data[(j + (int)2)] = i;
										HX_STACK_LINE(1469)
										(_this1->_size)++;
										HX_STACK_LINE(1469)
										first;
									}
								}
								HX_STACK_LINE(1469)
								hx::IndexRef((_this->_vals).mPtr,_this->_free) = d;
								HX_STACK_LINE(1469)
								_this->_keys[_this->_free] = key;
								HX_STACK_LINE(1469)
								_this->_free = _this->_next->__get(_this->_free);
								HX_STACK_LINE(1469)
								true;
							}
							HX_STACK_LINE(1469)
							(this->collisionsCount)++;
							HX_STACK_LINE(1469)
							::com::stencyl::models::Actor thisActor = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(thisActor,"thisActor");
							HX_STACK_LINE(1469)
							::box2D::dynamics::B2Body body = thisActor->getBody();		HX_STACK_VAR(body,"body");
							HX_STACK_LINE(1469)
							::box2D::dynamics::B2Body otherBody = otherActor->getBody();		HX_STACK_VAR(otherBody,"otherBody");
							HX_STACK_LINE(1469)
							::box2D::dynamics::B2Body body1 = p->getFixtureA()->getBody();		HX_STACK_VAR(body1,"body1");
							HX_STACK_LINE(1469)
							::box2D::dynamics::B2Body body2 = p->getFixtureB()->getBody();		HX_STACK_VAR(body2,"body2");
							HX_STACK_LINE(1469)
							{
								HX_STACK_LINE(1469)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								Array< ::Dynamic > _g1 = ::com::stencyl::models::Actor_obj::manifold->m_points;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(1469)
								while(((_g < _g1->length))){
									HX_STACK_LINE(1469)
									::box2D::common::math::B2Vec2 point = _g1->__get(_g).StaticCast< ::box2D::common::math::B2Vec2 >();		HX_STACK_VAR(point,"point");
									HX_STACK_LINE(1469)
									++(_g);
									HX_STACK_LINE(1469)
									if (((bool((point->x != (int)0)) && bool((point->y != (int)0))))){
										HX_STACK_LINE(1469)
										pt = point;
										HX_STACK_LINE(1469)
										cp = ::com::stencyl::models::actor::CollisionPoint_obj::__new(pt->x,pt->y,::com::stencyl::models::Actor_obj::manifold->m_normal->x,::com::stencyl::models::Actor_obj::manifold->m_normal->y);
										HX_STACK_LINE(1469)
										d->points->push(cp);
										HX_STACK_LINE(1469)
										if (((body1 == body))){
											HX_STACK_LINE(1469)
											d->thisFromBottom = (bool(d->thisFromBottom) || bool((cp->normalY > (int)0)));
											HX_STACK_LINE(1469)
											d->thisFromTop = (bool(d->thisFromTop) || bool((cp->normalY < (int)0)));
											HX_STACK_LINE(1469)
											d->thisFromLeft = (bool(d->thisFromLeft) || bool((cp->normalX < (int)0)));
											HX_STACK_LINE(1469)
											d->thisFromRight = (bool(d->thisFromRight) || bool((cp->normalX > (int)0)));
										}
										else{
											HX_STACK_LINE(1469)
											if (((body2 == body))){
												HX_STACK_LINE(1469)
												d->thisFromBottom = (bool(d->thisFromBottom) || bool((cp->normalY < (int)0)));
												HX_STACK_LINE(1469)
												d->thisFromTop = (bool(d->thisFromTop) || bool((cp->normalY > (int)0)));
												HX_STACK_LINE(1469)
												d->thisFromLeft = (bool(d->thisFromLeft) || bool((cp->normalX > (int)0)));
												HX_STACK_LINE(1469)
												d->thisFromRight = (bool(d->thisFromRight) || bool((cp->normalX < (int)0)));
											}
										}
										HX_STACK_LINE(1469)
										if (((body1 == otherBody))){
											HX_STACK_LINE(1469)
											d->otherFromBottom = (bool(d->otherFromBottom) || bool((cp->normalY > (int)0)));
											HX_STACK_LINE(1469)
											d->otherFromTop = (bool(d->otherFromTop) || bool((cp->normalY < (int)0)));
											HX_STACK_LINE(1469)
											d->otherFromLeft = (bool(d->otherFromLeft) || bool((cp->normalX < (int)0)));
											HX_STACK_LINE(1469)
											d->otherFromRight = (bool(d->otherFromRight) || bool((cp->normalX > (int)0)));
										}
										else{
											HX_STACK_LINE(1469)
											if (((body2 == otherBody))){
												HX_STACK_LINE(1469)
												d->otherFromBottom = (bool(d->otherFromBottom) || bool((cp->normalY < (int)0)));
												HX_STACK_LINE(1469)
												d->otherFromTop = (bool(d->otherFromTop) || bool((cp->normalY > (int)0)));
												HX_STACK_LINE(1469)
												d->otherFromLeft = (bool(d->otherFromLeft) || bool((cp->normalX > (int)0)));
												HX_STACK_LINE(1469)
												d->otherFromRight = (bool(d->otherFromRight) || bool((cp->normalX < (int)0)));
											}
										}
										HX_STACK_LINE(1469)
										if (((otherActor != null()))){
											HX_STACK_LINE(1469)
											d->thisCollidedWithActor = (bool(d->thisCollidedWithActor) || bool((bool((bool((otherActor->groupID != (int)1)) && bool((otherActor->groupID != (int)-2)))) && bool(!(otherActor->isTerrainRegion)))));
											HX_STACK_LINE(1469)
											d->thisCollidedWithTerrain = (bool(d->thisCollidedWithTerrain) || bool(otherActor->isTerrainRegion));
											HX_STACK_LINE(1469)
											d->thisCollidedWithTile = (bool(d->thisCollidedWithTile) || bool((otherActor->groupID == (int)1)));
										}
										HX_STACK_LINE(1469)
										d->otherCollidedWithActor = (bool(d->otherCollidedWithActor) || bool((bool((bool((this->groupID != (int)1)) && bool((this->groupID != (int)-2)))) && bool(!(this->isTerrainRegion)))));
										HX_STACK_LINE(1469)
										d->otherCollidedWithTerrain = (bool(d->otherCollidedWithTerrain) || bool(this->isTerrainRegion));
										HX_STACK_LINE(1469)
										d->otherCollidedWithTile = (bool(d->otherCollidedWithTile) || bool((this->groupID == (int)1)));
										HX_STACK_LINE(1469)
										d->thisCollidedWithSensor = (bool(d->thisCollidedWithSensor) || bool(otherShape->isSensor()));
										HX_STACK_LINE(1469)
										d->otherCollidedWithSensor = (bool(d->otherCollidedWithSensor) || bool(thisShape->isSensor()));
									}
								}
							}
						}
;
					}
				}
				HX_STACK_LINE(1469)
				if (((this->collisionsCount > (int)0))){
					HX_STACK_LINE(1469)
					for(::cpp::FastIterator_obj< ::com::stencyl::models::actor::Collision > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::actor::Collision >(this->collisions->iterator());  __it->hasNext(); ){
						::com::stencyl::models::actor::Collision collision = __it->next();
						{
							HX_STACK_LINE(1469)
							if (((bool((bool((bool((bool((collision == null())) || bool((collision->thisActor == null())))) || bool((collision->otherActor == null())))) || bool(!(collision->thisActor->handlesCollisions)))) || bool(!(collision->otherActor->handlesCollisions))))){
								HX_STACK_LINE(1469)
								continue;
							}
							HX_STACK_LINE(1469)
							::com::stencyl::models::Actor_obj::lastCollided = collision->otherActor;
							HX_STACK_LINE(1469)
							{
								HX_STACK_LINE(1469)
								Dynamic listeners = this->collisionListeners;		HX_STACK_VAR(listeners,"listeners");
								HX_STACK_LINE(1469)
								int r = (int)0;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(1469)
								while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
									HX_STACK_LINE(1469)
									try{
										HX_STACK_LINE(1469)
										Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
										HX_STACK_LINE(1469)
										f(collision,listeners).Cast< Void >();
										HX_STACK_LINE(1469)
										if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
											HX_STACK_LINE(1469)
											(r)--;
										}
									}
									catch(Dynamic __e){
										if (__e.IsClass< ::String >() ){
											HX_STACK_BEGIN_CATCH
											::String e = __e;{
												HX_STACK_LINE(1469)
												::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
											}
										}
										else throw(__e);
									}
									HX_STACK_LINE(1469)
									(r)++;
								}
							}
							HX_STACK_LINE(1469)
							this->engine->handleCollision(hx::ObjectPtr<OBJ_>(this),collision);
						}
;
					}
				}
			}
		}
		HX_STACK_LINE(1473)
		this->internalUpdate(elapsedTime,true);
		HX_STACK_LINE(1475)
		if (((this->physicsMode < (int)2))){
			HX_STACK_LINE(1477)
			Dynamic listeners = this->whenUpdatedListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(1477)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(1477)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(1477)
				try{
					HX_STACK_LINE(1477)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(1477)
					f(elapsedTime,listeners).Cast< Void >();
					HX_STACK_LINE(1477)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(1477)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(1477)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(1477)
				(r)++;
			}
		}
		HX_STACK_LINE(1480)
		if (((bool((bool((this->positionListenerCount > (int)0)) || bool((ep->get(checkType) != null())))) || bool((ep->get(groupType) != null()))))){
			HX_STACK_LINE(1483)
			this->checkScreenState();
		}
		HX_STACK_LINE(1488)
		if (((this->label != null()))){
			HX_STACK_LINE(1489)
			this->label->setAlpha(this->get_alpha());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,innerUpdate,(void))

Void Actor_obj::update( Float elapsedTime){
{
		HX_STACK_PUSH("Actor::update","com/stencyl/models/Actor.hx",1388);
		HX_STACK_THIS(this);
		HX_STACK_ARG(elapsedTime,"elapsedTime");
		HX_STACK_LINE(1388)
		this->innerUpdate(elapsedTime,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,update,(void))

Void Actor_obj::switchAnimation( ::String name){
{
		HX_STACK_PUSH("Actor::switchAnimation","com/stencyl/models/Actor.hx",1065);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_LINE(1065)
		if (((name != this->currAnimationName))){
			HX_STACK_LINE(1068)
			Dynamic newAnimation = this->animationMap->get(name);		HX_STACK_VAR(newAnimation,"newAnimation");
			HX_STACK_LINE(1070)
			if (((newAnimation == null()))){
				HX_STACK_LINE(1071)
				return null();
			}
			HX_STACK_LINE(1075)
			if (((this->currAnimation != null()))){
				HX_STACK_LINE(1076)
				this->removeChild(this->currAnimation);
			}
			HX_STACK_LINE(1082)
			bool isDifferentShape = false;		HX_STACK_VAR(isDifferentShape,"isDifferentShape");
			HX_STACK_LINE(1086)
			if (((bool((this->body != null())) && bool((this->physicsMode == (int)0))))){
				HX_STACK_LINE(1088)
				Dynamic arrOld = this->shapeMap->get(this->currAnimationName);		HX_STACK_VAR(arrOld,"arrOld");
				HX_STACK_LINE(1089)
				Dynamic arrNew = this->shapeMap->get(name);		HX_STACK_VAR(arrNew,"arrNew");
				HX_STACK_LINE(1091)
				if (((bool((arrOld == null())) || bool((arrNew == null()))))){
					HX_STACK_LINE(1092)
					isDifferentShape = true;
				}
				else{
					HX_STACK_LINE(1097)
					if (((bool((arrOld->__Field(HX_CSTRING("length"),true) != arrNew->__Field(HX_CSTRING("length"),true))) || bool((arrOld->__Field(HX_CSTRING("length"),true) > (int)1))))){
						HX_STACK_LINE(1099)
						isDifferentShape = true;
					}
					else{
						HX_STACK_LINE(1105)
						::box2D::dynamics::B2FixtureDef oldDef = arrOld->__GetItem((int)0);		HX_STACK_VAR(oldDef,"oldDef");
						HX_STACK_LINE(1106)
						::box2D::dynamics::B2FixtureDef newDef = arrNew->__GetItem((int)0);		HX_STACK_VAR(newDef,"newDef");
						HX_STACK_LINE(1108)
						if (((bool((oldDef == null())) || bool((newDef == null()))))){
							HX_STACK_LINE(1109)
							isDifferentShape = true;
						}
						else{
							HX_STACK_LINE(1115)
							::box2D::collision::shapes::B2Shape oldShape = oldDef->shape;		HX_STACK_VAR(oldShape,"oldShape");
							HX_STACK_LINE(1116)
							::box2D::collision::shapes::B2Shape newShape = newDef->shape;		HX_STACK_VAR(newShape,"newShape");
							HX_STACK_LINE(1118)
							if (((oldDef->isSensor != newDef->isSensor))){
								HX_STACK_LINE(1119)
								isDifferentShape = true;
							}
							else{
								HX_STACK_LINE(1123)
								if (((oldDef->groupID != newDef->groupID))){
									HX_STACK_LINE(1124)
									isDifferentShape = true;
								}
								else{
									HX_STACK_LINE(1128)
									if (((::Type_obj::getClass(oldShape) == ::Type_obj::getClass(newShape)))){
										HX_STACK_LINE(1129)
										if (((::Type_obj::getClass(oldShape) == hx::ClassOf< ::box2D::collision::shapes::B2PolygonShape >()))){
											HX_STACK_LINE(1132)
											::box2D::collision::shapes::B2PolygonShape polyOld = hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(oldShape);		HX_STACK_VAR(polyOld,"polyOld");
											HX_STACK_LINE(1133)
											::box2D::collision::shapes::B2PolygonShape polyNew = hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(newShape);		HX_STACK_VAR(polyNew,"polyNew");
											HX_STACK_LINE(1135)
											if (((polyOld->m_vertexCount != polyNew->m_vertexCount))){
												HX_STACK_LINE(1136)
												isDifferentShape = true;
											}
											else{
												HX_STACK_LINE(1142)
												int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
												int _g = polyOld->m_vertexCount;		HX_STACK_VAR(_g,"_g");
												HX_STACK_LINE(1142)
												while(((_g1 < _g))){
													HX_STACK_LINE(1142)
													int i = (_g1)++;		HX_STACK_VAR(i,"i");
													HX_STACK_LINE(1144)
													if (((polyOld->m_vertices->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >()->x != polyNew->m_vertices->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >()->x))){
														HX_STACK_LINE(1146)
														isDifferentShape = true;
														HX_STACK_LINE(1147)
														break;
													}
													else{
														HX_STACK_LINE(1150)
														if (((polyOld->m_vertices->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >()->y != polyNew->m_vertices->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >()->y))){
															HX_STACK_LINE(1152)
															isDifferentShape = true;
															HX_STACK_LINE(1153)
															break;
														}
													}
												}
											}
										}
										else{
											HX_STACK_LINE(1159)
											if (((::Type_obj::getClass(oldShape) == hx::ClassOf< ::box2D::collision::shapes::B2CircleShape >()))){
												HX_STACK_LINE(1161)
												::box2D::collision::shapes::B2CircleShape circleOld = hx::TCast< box2D::collision::shapes::B2CircleShape >::cast(oldShape);		HX_STACK_VAR(circleOld,"circleOld");
												HX_STACK_LINE(1162)
												::box2D::collision::shapes::B2CircleShape circleNew = hx::TCast< box2D::collision::shapes::B2CircleShape >::cast(newShape);		HX_STACK_VAR(circleNew,"circleNew");
												HX_STACK_LINE(1164)
												if (((bool((bool((circleOld->m_radius != circleNew->m_radius)) || bool((circleOld->m_p->x != circleNew->m_p->x)))) || bool((circleOld->m_p->y != circleNew->m_p->y))))){
													HX_STACK_LINE(1167)
													isDifferentShape = true;
												}
											}
										}
									}
									else{
										HX_STACK_LINE(1174)
										isDifferentShape = true;
									}
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(1184)
			this->currAnimationName = name;
			HX_STACK_LINE(1185)
			this->currAnimation = newAnimation;
			HX_STACK_LINE(1187)
			this->currAnimationAsAnim = hx::TCast< com::stencyl::graphics::AbstractAnimation >::cast(this->currAnimation);
			HX_STACK_LINE(1189)
			this->addChild(newAnimation);
			HX_STACK_LINE(1193)
			::box2D::common::math::B2Vec2 animOrigin = this->originMap->get(name);		HX_STACK_VAR(animOrigin,"animOrigin");
			HX_STACK_LINE(1195)
			if (((this->physicsMode == (int)0))){
				HX_STACK_LINE(1196)
				this->updateTweenProperties();
			}
			HX_STACK_LINE(1200)
			Float centerx = ((Float((Float(this->currAnimation->get_width()) / Float(::com::stencyl::Engine_obj::SCALE))) / Float((int)2)) - animOrigin->x);		HX_STACK_VAR(centerx,"centerx");
			HX_STACK_LINE(1201)
			Float centery = ((Float((Float(this->currAnimation->get_height()) / Float(::com::stencyl::Engine_obj::SCALE))) / Float((int)2)) - animOrigin->y);		HX_STACK_VAR(centery,"centery");
			HX_STACK_LINE(1203)
			if (((bool((bool((this->body != null())) && bool(isDifferentShape))) && bool((this->physicsMode == (int)0))))){
				HX_STACK_LINE(1206)
				Array< ::Dynamic > regions = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(regions,"regions");
				HX_STACK_LINE(1210)
				::box2D::dynamics::contacts::B2ContactEdge contact = this->body->getContactList();		HX_STACK_VAR(contact,"contact");
				HX_STACK_LINE(1212)
				while(((contact != null()))){
					HX_STACK_LINE(1214)
					if (((bool(::Std_obj::is(contact->other->getUserData(),hx::ClassOf< ::com::stencyl::models::Region >())) && bool(contact->contact->isTouching())))){
						HX_STACK_LINE(1215)
						regions->push(contact->other->getUserData());
					}
					HX_STACK_LINE(1219)
					::com::stencyl::Engine_obj::engine->world->m_contactManager->m_contactListener->endContact(contact->contact);
					HX_STACK_LINE(1220)
					contact = contact->next;
				}
				HX_STACK_LINE(1225)
				for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->collisions->keys());  __it->hasNext(); ){
					int k = __it->next();
					{
						HX_STACK_LINE(1227)
						::de::polygonal::ds::IntHashTable _this = this->collisions;		HX_STACK_VAR(_this,"_this");
						struct _Function_4_1{
							inline static int Block( ::de::polygonal::ds::IntHashTable _this,int &k){
								HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1227);
								{
									HX_STACK_LINE(1227)
									::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(1227)
									int i = _this1->_hash->__get((int((k * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i,"i");
									struct _Function_5_1{
										inline static int Block( int &i,::de::polygonal::ds::IntIntHashTable &_this1,int &k){
											HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1227);
											{
												HX_STACK_LINE(1227)
												int v = (int)-2147483647;		HX_STACK_VAR(v,"v");
												HX_STACK_LINE(1227)
												i = _this1->_data->__get((i + (int)2));
												HX_STACK_LINE(1227)
												while(((i != (int)-1))){
													HX_STACK_LINE(1227)
													if (((_this1->_data->__get(i) == k))){
														HX_STACK_LINE(1227)
														v = _this1->_data->__get((i + (int)1));
														HX_STACK_LINE(1227)
														break;
													}
													HX_STACK_LINE(1227)
													i = _this1->_data->__get((i + (int)2));
												}
												HX_STACK_LINE(1227)
												return v;
											}
											return null();
										}
									};
									HX_STACK_LINE(1227)
									return (  (((i == (int)-1))) ? int((int)-2147483647) : int((  (((_this1->_data->__get(i) == k))) ? int(_this1->_data->__get((i + (int)1))) : int(_Function_5_1::Block(i,_this1,k)) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1227)
						int i = _Function_4_1::Block(_this,k);		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(1227)
						if (((i == (int)-2147483647))){
							HX_STACK_LINE(1227)
							false;
						}
						else{
							HX_STACK_LINE(1227)
							_this->_key0 = (int)-2147483647;
							HX_STACK_LINE(1227)
							hx::IndexRef((_this->_vals).mPtr,i) = null();
							HX_STACK_LINE(1227)
							_this->_keys[i] = (int)-2147483647;
							HX_STACK_LINE(1227)
							_this->_next[i] = _this->_free;
							HX_STACK_LINE(1227)
							_this->_free = i;
							HX_STACK_LINE(1227)
							bool shrink = false;		HX_STACK_VAR(shrink,"shrink");
							HX_STACK_LINE(1227)
							if (((_this->_sizeLevel > (int)0))){
								HX_STACK_LINE(1227)
								if ((((_this->_h->_size - (int)1) == (int(_this->_h->_capacity) >> int((int)2))))){
									HX_STACK_LINE(1227)
									if ((_this->_isResizable)){
										HX_STACK_LINE(1227)
										shrink = true;
									}
								}
							}
							HX_STACK_LINE(1227)
							{
								HX_STACK_LINE(1227)
								::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1227)
								int b = (int((k * (int)73856093)) & int(_this1->_mask));		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(1227)
								int i1 = _this1->_hash->__get(b);		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(1227)
								if (((i1 == (int)-1))){
									HX_STACK_LINE(1227)
									false;
								}
								else{
									HX_STACK_LINE(1227)
									if (((k == _this1->_data->__get(i1)))){
										HX_STACK_LINE(1227)
										if (((_this1->_data->__get((i1 + (int)2)) == (int)-1))){
											HX_STACK_LINE(1227)
											_this1->_hash[b] = (int)-1;
										}
										else{
											HX_STACK_LINE(1227)
											_this1->_hash[b] = _this1->_data->__get((i1 + (int)2));
										}
										HX_STACK_LINE(1227)
										int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(1227)
										_this1->_next[j] = _this1->_free;
										HX_STACK_LINE(1227)
										_this1->_free = j;
										HX_STACK_LINE(1227)
										_this1->_data[(i1 + (int)1)] = (int)-2147483647;
										HX_STACK_LINE(1227)
										_this1->_data[(i1 + (int)2)] = (int)-1;
										HX_STACK_LINE(1227)
										(_this1->_size)--;
										HX_STACK_LINE(1227)
										if (((_this1->_sizeLevel > (int)0))){
											HX_STACK_LINE(1227)
											if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
												HX_STACK_LINE(1227)
												if ((_this1->_isResizable)){
													HX_STACK_LINE(1227)
													_this1->_shrink();
												}
											}
										}
										HX_STACK_LINE(1227)
										true;
									}
									else{
										HX_STACK_LINE(1227)
										bool exists = false;		HX_STACK_VAR(exists,"exists");
										HX_STACK_LINE(1227)
										int i0 = i1;		HX_STACK_VAR(i0,"i0");
										HX_STACK_LINE(1227)
										i1 = _this1->_data->__get((i1 + (int)2));
										HX_STACK_LINE(1227)
										while(((i1 != (int)-1))){
											HX_STACK_LINE(1227)
											if (((_this1->_data->__get(i1) == k))){
												HX_STACK_LINE(1227)
												exists = true;
												HX_STACK_LINE(1227)
												break;
											}
											HX_STACK_LINE(1227)
											i1 = _this1->_data->__get(((i0 = i1) + (int)2));
										}
										HX_STACK_LINE(1227)
										if ((exists)){
											HX_STACK_LINE(1227)
											_this1->_data[(i0 + (int)2)] = _this1->_data->__get((i1 + (int)2));
											HX_STACK_LINE(1227)
											int j = ::Std_obj::_int((Float(i1) / Float((int)3)));		HX_STACK_VAR(j,"j");
											HX_STACK_LINE(1227)
											_this1->_next[j] = _this1->_free;
											HX_STACK_LINE(1227)
											_this1->_free = j;
											HX_STACK_LINE(1227)
											_this1->_data[(i1 + (int)1)] = (int)-2147483647;
											HX_STACK_LINE(1227)
											_this1->_data[(i1 + (int)2)] = (int)-1;
											HX_STACK_LINE(1227)
											--(_this1->_size);
											HX_STACK_LINE(1227)
											if (((_this1->_sizeLevel > (int)0))){
												HX_STACK_LINE(1227)
												if (((_this1->_size == (int(_this1->_capacity) >> int((int)2))))){
													HX_STACK_LINE(1227)
													if ((_this1->_isResizable)){
														HX_STACK_LINE(1227)
														_this1->_shrink();
													}
												}
											}
											HX_STACK_LINE(1227)
											true;
										}
										else{
											HX_STACK_LINE(1227)
											false;
										}
									}
								}
							}
							HX_STACK_LINE(1227)
							if ((shrink)){
								HX_STACK_LINE(1227)
								(_this->_sizeLevel)--;
								HX_STACK_LINE(1227)
								int oldSize = (int(_this->_h->_capacity) << int((int)1));		HX_STACK_VAR(oldSize,"oldSize");
								HX_STACK_LINE(1227)
								int newSize = _this->_h->_capacity;		HX_STACK_VAR(newSize,"newSize");
								struct _Function_6_1{
									inline static Array< int > Block( int &newSize){
										HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1227);
										{
											HX_STACK_LINE(1227)
											Array< int > a;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(1227)
											a = Array_obj< int >::__new();
											HX_STACK_LINE(1227)
											a[(newSize - (int)1)] = null();
											HX_STACK_LINE(1227)
											return a;
										}
										return null();
									}
								};
								HX_STACK_LINE(1227)
								_this->_next = _Function_6_1::Block(newSize);
								HX_STACK_LINE(1227)
								{
									HX_STACK_LINE(1227)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									int _g = (newSize - (int)1);		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(1227)
									while(((_g1 < _g))){
										HX_STACK_LINE(1227)
										int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(1227)
										_this->_next[i1] = (i1 + (int)1);
									}
								}
								HX_STACK_LINE(1227)
								_this->_next[(newSize - (int)1)] = (int)-1;
								HX_STACK_LINE(1227)
								_this->_free = (int)0;
								struct _Function_6_2{
									inline static Array< int > Block( int &newSize){
										HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1227);
										{
											HX_STACK_LINE(1227)
											Array< int > a;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(1227)
											a = Array_obj< int >::__new();
											HX_STACK_LINE(1227)
											a[(newSize - (int)1)] = null();
											HX_STACK_LINE(1227)
											return a;
										}
										return null();
									}
								};
								HX_STACK_LINE(1227)
								Array< int > tmpKeys = _Function_6_2::Block(newSize);		HX_STACK_VAR(tmpKeys,"tmpKeys");
								HX_STACK_LINE(1227)
								{
									HX_STACK_LINE(1227)
									int k1 = newSize;		HX_STACK_VAR(k1,"k1");
									HX_STACK_LINE(1227)
									if (((k1 == (int)-1))){
										HX_STACK_LINE(1227)
										k1 = tmpKeys->length;
									}
									HX_STACK_LINE(1227)
									{
										HX_STACK_LINE(1227)
										int _g = (int)0;		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(1227)
										while(((_g < k1))){
											HX_STACK_LINE(1227)
											int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
											HX_STACK_LINE(1227)
											tmpKeys[i1] = (int)-2147483647;
										}
									}
								}
								struct _Function_6_3{
									inline static Array< ::Dynamic > Block( int &newSize){
										HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1227);
										{
											HX_STACK_LINE(1227)
											Array< ::Dynamic > a;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(1227)
											a = Array_obj< ::Dynamic >::__new();
											HX_STACK_LINE(1227)
											a[(newSize - (int)1)] = null();
											HX_STACK_LINE(1227)
											return a;
										}
										return null();
									}
								};
								HX_STACK_LINE(1227)
								Array< ::Dynamic > tmpVals = _Function_6_3::Block(newSize);		HX_STACK_VAR(tmpVals,"tmpVals");
								HX_STACK_LINE(1227)
								for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(_this->_h->iterator());  __it->hasNext(); ){
									int i1 = __it->next();
									{
										HX_STACK_LINE(1227)
										tmpKeys[_this->_free] = _this->_keys->__get(i1);
										HX_STACK_LINE(1227)
										tmpVals[_this->_free] = _this->_vals->__GetItem(i1);
										HX_STACK_LINE(1227)
										_this->_free = _this->_next->__get(_this->_free);
									}
;
								}
								HX_STACK_LINE(1227)
								_this->_keys = tmpKeys;
								HX_STACK_LINE(1227)
								_this->_vals = tmpVals;
								HX_STACK_LINE(1227)
								{
									HX_STACK_LINE(1227)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									int _g = _this->_free;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(1227)
									while(((_g1 < _g))){
										HX_STACK_LINE(1227)
										int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(1227)
										::de::polygonal::ds::IntIntHashTable _this1 = _this->_h;		HX_STACK_VAR(_this1,"_this1");
										int key = _this->_keys->__get(i1);		HX_STACK_VAR(key,"key");
										HX_STACK_LINE(1227)
										int i2 = _this1->_hash->__get((int((key * (int)73856093)) & int(_this1->_mask)));		HX_STACK_VAR(i2,"i2");
										HX_STACK_LINE(1227)
										if (((i2 == (int)-1))){
											HX_STACK_LINE(1227)
											false;
										}
										else{
											HX_STACK_LINE(1227)
											if (((_this1->_data->__get(i2) == key))){
												HX_STACK_LINE(1227)
												_this1->_data[(i2 + (int)1)] = i1;
												HX_STACK_LINE(1227)
												true;
											}
											else{
												HX_STACK_LINE(1227)
												i2 = _this1->_data->__get((i2 + (int)2));
												HX_STACK_LINE(1227)
												while(((i2 != (int)-1))){
													HX_STACK_LINE(1227)
													if (((_this1->_data->__get(i2) == key))){
														HX_STACK_LINE(1227)
														_this1->_data[(i2 + (int)1)] = i1;
														HX_STACK_LINE(1227)
														break;
													}
													HX_STACK_LINE(1227)
													i2 = _this1->_data->__get((i2 + (int)2));
												}
												HX_STACK_LINE(1227)
												(i2 != (int)-1);
											}
										}
									}
								}
							}
							HX_STACK_LINE(1227)
							true;
						}
					}
;
				}
				HX_STACK_LINE(1230)
				this->collisions = ::de::polygonal::ds::IntHashTable_obj::__new((int)16,null(),null(),null());
				HX_STACK_LINE(1231)
				this->simpleCollisions = ::de::polygonal::ds::IntHashTable_obj::__new((int)16,null(),null(),null());
				HX_STACK_LINE(1232)
				this->contacts = ::de::polygonal::ds::IntHashTable_obj::__new((int)16,null(),null(),null());
				HX_STACK_LINE(1233)
				this->regionContacts = ::de::polygonal::ds::IntHashTable_obj::__new((int)16,null(),null(),null());
				HX_STACK_LINE(1235)
				this->collisions->reuseIterator = true;
				HX_STACK_LINE(1236)
				this->simpleCollisions->reuseIterator = true;
				HX_STACK_LINE(1237)
				this->contacts->reuseIterator = true;
				HX_STACK_LINE(1238)
				this->regionContacts->reuseIterator = true;
				HX_STACK_LINE(1240)
				this->contactCount = (int)0;
				HX_STACK_LINE(1241)
				this->collisionsCount = (int)0;
				HX_STACK_LINE(1245)
				while(((this->body->m_fixtureCount > (int)0))){
					HX_STACK_LINE(1246)
					this->body->DestroyFixture(this->body->getFixtureList());
				}
				HX_STACK_LINE(1250)
				{
					HX_STACK_LINE(1250)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					Dynamic _g1 = hx::TCastToArray(this->shapeMap->get(name));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1250)
					while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(1250)
						Dynamic f = _g1->__GetItem(_g);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(1250)
						++(_g);
						HX_STACK_LINE(1252)
						::box2D::dynamics::B2FixtureDef originFixDef = ::box2D::dynamics::B2FixtureDef_obj::__new();		HX_STACK_VAR(originFixDef,"originFixDef");
						HX_STACK_LINE(1254)
						if (((this->bodyDef->friction < ::com::stencyl::utils::Utils_obj::NUMBER_MAX_VALUE))){
							HX_STACK_LINE(1256)
							originFixDef->friction = this->bodyDef->friction;
							HX_STACK_LINE(1257)
							originFixDef->restitution = this->bodyDef->bounciness;
							HX_STACK_LINE(1259)
							if (((this->bodyDef->mass > (int)0))){
								HX_STACK_LINE(1260)
								originFixDef->density = 0.1;
							}
						}
						HX_STACK_LINE(1265)
						originFixDef->density = f->__Field(HX_CSTRING("density"),true);
						HX_STACK_LINE(1266)
						originFixDef->isSensor = f->__Field(HX_CSTRING("isSensor"),true);
						HX_STACK_LINE(1267)
						originFixDef->groupID = f->__Field(HX_CSTRING("groupID"),true);
						HX_STACK_LINE(1268)
						originFixDef->shape = f->__Field(HX_CSTRING("shape"),true);
						HX_STACK_LINE(1271)
						if (((animOrigin != null()))){
							HX_STACK_LINE(1273)
							this->body->origin->x = ::com::stencyl::Engine_obj::toPhysicalUnits(-(animOrigin->x));
							HX_STACK_LINE(1274)
							this->body->origin->y = ::com::stencyl::Engine_obj::toPhysicalUnits(-(animOrigin->y));
							HX_STACK_LINE(1276)
							if ((::Std_obj::is(f->__Field(HX_CSTRING("shape"),true),hx::ClassOf< ::box2D::collision::shapes::B2PolygonShape >()))){
								HX_STACK_LINE(1278)
								::box2D::common::math::B2Transform xf = ::box2D::common::math::B2Transform_obj::__new(null(),null());		HX_STACK_VAR(xf,"xf");
								HX_STACK_LINE(1279)
								::box2D::collision::shapes::B2PolygonShape oldBox = hx::TCast< box2D::collision::shapes::B2PolygonShape >::cast(f->__Field(HX_CSTRING("shape"),true));		HX_STACK_VAR(oldBox,"oldBox");
								HX_STACK_LINE(1280)
								::box2D::collision::shapes::B2PolygonShape newBox = ::box2D::collision::shapes::B2PolygonShape_obj::__new();		HX_STACK_VAR(newBox,"newBox");
								HX_STACK_LINE(1282)
								newBox->setAsArray(oldBox->m_vertices,oldBox->m_vertices->length);
								HX_STACK_LINE(1284)
								Array< ::Dynamic > vertices = newBox->m_vertices;		HX_STACK_VAR(vertices,"vertices");
								HX_STACK_LINE(1285)
								Array< ::Dynamic > normals = newBox->m_normals;		HX_STACK_VAR(normals,"normals");
								HX_STACK_LINE(1287)
								{
									HX_STACK_LINE(1287)
									::box2D::common::math::B2Vec2 _this = xf->position;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1287)
									_this->x = ::com::stencyl::Engine_obj::toPhysicalUnits(centerx);
									HX_STACK_LINE(1287)
									_this->y = ::com::stencyl::Engine_obj::toPhysicalUnits(centery);
								}
								HX_STACK_LINE(1288)
								xf->R->setAngle((int)0);
								HX_STACK_LINE(1290)
								{
									HX_STACK_LINE(1290)
									int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
									int _g2 = newBox->m_vertexCount;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1290)
									while(((_g3 < _g2))){
										HX_STACK_LINE(1290)
										int i = (_g3)++;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(1292)
										vertices[i] = xf->multiply(vertices->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >());
										HX_STACK_LINE(1293)
										normals[i] = xf->R->multiplyV(normals->__get(i).StaticCast< ::box2D::common::math::B2Vec2 >());
									}
								}
								HX_STACK_LINE(1296)
								newBox->setAsArray(vertices,vertices->length);
								HX_STACK_LINE(1297)
								newBox->m_normals = normals;
								HX_STACK_LINE(1299)
								originFixDef->shape = newBox;
							}
							else{
								HX_STACK_LINE(1302)
								if ((::Std_obj::is(f->__Field(HX_CSTRING("shape"),true),hx::ClassOf< ::box2D::collision::shapes::B2CircleShape >()))){
									HX_STACK_LINE(1304)
									::box2D::collision::shapes::B2CircleShape oldCircle = hx::TCast< box2D::collision::shapes::B2CircleShape >::cast(f->__Field(HX_CSTRING("shape"),true));		HX_STACK_VAR(oldCircle,"oldCircle");
									HX_STACK_LINE(1305)
									::box2D::collision::shapes::B2CircleShape newCircle = ::box2D::collision::shapes::B2CircleShape_obj::__new(null());		HX_STACK_VAR(newCircle,"newCircle");
									HX_STACK_LINE(1307)
									newCircle->setRadius(oldCircle->getRadius());
									HX_STACK_LINE(1308)
									newCircle->m_p->x = (oldCircle->m_p->x + ::com::stencyl::Engine_obj::toPhysicalUnits(centerx));
									HX_STACK_LINE(1309)
									newCircle->m_p->y = (oldCircle->m_p->y + ::com::stencyl::Engine_obj::toPhysicalUnits(centery));
									HX_STACK_LINE(1311)
									originFixDef->shape = newCircle;
								}
							}
						}
						HX_STACK_LINE(1315)
						::box2D::dynamics::B2Fixture fix = this->body->createFixture(originFixDef);		HX_STACK_VAR(fix,"fix");
						HX_STACK_LINE(1316)
						fix->SetUserData(hx::ObjectPtr<OBJ_>(this));
					}
				}
				HX_STACK_LINE(1319)
				if (((this->body->getFixtureList() != null()))){
					HX_STACK_LINE(1321)
					this->bodyScale->x = (int)1;
					HX_STACK_LINE(1322)
					this->bodyScale->y = (int)1;
					HX_STACK_LINE(1324)
					{
						HX_STACK_LINE(1324)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1324)
						while(((_g < regions->length))){
							HX_STACK_LINE(1324)
							::com::stencyl::models::Region r = regions->__get(_g).StaticCast< ::com::stencyl::models::Region >();		HX_STACK_VAR(r,"r");
							HX_STACK_LINE(1324)
							++(_g);
							HX_STACK_LINE(1326)
							::box2D::collision::B2AABB mine = this->body->getFixtureList()->m_aabb;		HX_STACK_VAR(mine,"mine");
							HX_STACK_LINE(1327)
							::box2D::collision::B2AABB other = r->getBody()->getFixtureList()->m_aabb;		HX_STACK_VAR(other,"other");
							HX_STACK_LINE(1329)
							if ((other->testOverlap(mine))){
								HX_STACK_LINE(1330)
								r->addActor(hx::ObjectPtr<OBJ_>(this));
							}
						}
					}
				}
				HX_STACK_LINE(1336)
				if (((this->md != null()))){
					HX_STACK_LINE(1337)
					this->body->setMassData(this->md);
				}
			}
			else{
				HX_STACK_LINE(1342)
				if (((bool((this->shapeMap->get(name) != null())) && bool((this->physicsMode == (int)1))))){
					HX_STACK_LINE(1345)
					this->set_shape(this->shapeMap->get(name));
					HX_STACK_LINE(1346)
					this->HITBOX = this->_mask;
					HX_STACK_LINE(1349)
					isDifferentShape = true;
				}
			}
			HX_STACK_LINE(1352)
			this->cacheWidth = (Float(this->currAnimation->get_width()) / Float(::com::stencyl::Engine_obj::SCALE));
			HX_STACK_LINE(1353)
			this->cacheHeight = (Float(this->currAnimation->get_height()) / Float(::com::stencyl::Engine_obj::SCALE));
			HX_STACK_LINE(1355)
			if (((this->body != null()))){
				HX_STACK_LINE(1357)
				this->body->size->x = ::com::stencyl::Engine_obj::toPhysicalUnits(this->cacheWidth);
				HX_STACK_LINE(1358)
				this->body->size->y = ::com::stencyl::Engine_obj::toPhysicalUnits(this->cacheHeight);
			}
			HX_STACK_LINE(1361)
			if (((this->physicsMode == (int)0))){
				HX_STACK_LINE(1363)
				this->realX = this->getX(false);
				HX_STACK_LINE(1364)
				this->realY = this->getY(false);
			}
			HX_STACK_LINE(1367)
			if (((animOrigin != null()))){
				HX_STACK_LINE(1368)
				this->setOriginPoint(::Std_obj::_int(animOrigin->x),::Std_obj::_int(animOrigin->y));
			}
			HX_STACK_LINE(1372)
			this->updateMatrix = true;
			HX_STACK_LINE(1376)
			if ((::Std_obj::is(this->currAnimation,hx::ClassOf< ::com::stencyl::graphics::AbstractAnimation >()))){
				HX_STACK_LINE(1377)
				(hx::TCast< com::stencyl::graphics::AbstractAnimation >::cast(this->currAnimation))->reset();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,switchAnimation,(void))

int Actor_obj::getNumFrames( ){
	HX_STACK_PUSH("Actor::getNumFrames","com/stencyl/models/Actor.hx",1052);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1052)
	if ((::Std_obj::is(this->currAnimation,hx::ClassOf< ::com::stencyl::graphics::AbstractAnimation >()))){
		HX_STACK_LINE(1054)
		return (hx::TCast< com::stencyl::graphics::AbstractAnimation >::cast(this->currAnimation))->getNumFrames();
	}
	else{
		HX_STACK_LINE(1059)
		return (int)0;
	}
	HX_STACK_LINE(1052)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getNumFrames,return )

Void Actor_obj::setCurrentFrame( int frame){
{
		HX_STACK_PUSH("Actor::setCurrentFrame","com/stencyl/models/Actor.hx",1044);
		HX_STACK_THIS(this);
		HX_STACK_ARG(frame,"frame");
		HX_STACK_LINE(1044)
		if ((::Std_obj::is(this->currAnimation,hx::ClassOf< ::com::stencyl::graphics::AbstractAnimation >()))){
			HX_STACK_LINE(1046)
			(hx::TCast< com::stencyl::graphics::AbstractAnimation >::cast(this->currAnimation))->setFrame(frame);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setCurrentFrame,(void))

int Actor_obj::getCurrentFrame( ){
	HX_STACK_PUSH("Actor::getCurrentFrame","com/stencyl/models/Actor.hx",1031);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1031)
	if ((::Std_obj::is(this->currAnimation,hx::ClassOf< ::com::stencyl::graphics::AbstractAnimation >()))){
		HX_STACK_LINE(1033)
		return (hx::TCast< com::stencyl::graphics::AbstractAnimation >::cast(this->currAnimation))->getCurrentFrame();
	}
	else{
		HX_STACK_LINE(1038)
		return (int)0;
	}
	HX_STACK_LINE(1031)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getCurrentFrame,return )

bool Actor_obj::isAnimationPlaying( ){
	HX_STACK_PUSH("Actor::isAnimationPlaying","com/stencyl/models/Actor.hx",1018);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1018)
	if ((::Std_obj::is(this->currAnimation,hx::ClassOf< ::com::stencyl::graphics::AbstractAnimation >()))){
		HX_STACK_LINE(1020)
		return !((hx::TCast< com::stencyl::graphics::AbstractAnimation >::cast(this->currAnimation))->isFinished());
	}
	else{
		HX_STACK_LINE(1025)
		return true;
	}
	HX_STACK_LINE(1018)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,isAnimationPlaying,return )

Void Actor_obj::switchToDefaultAnimation( ){
{
		HX_STACK_PUSH("Actor::switchToDefaultAnimation","com/stencyl/models/Actor.hx",995);
		HX_STACK_THIS(this);
		HX_STACK_LINE(995)
		if (((bool((this->sprite != null())) && bool((::Lambda_obj::count(this->sprite->animations,null()) > (int)0))))){
			HX_STACK_LINE(999)
			::com::stencyl::models::actor::Animation anim = this->sprite->animations->get(this->sprite->defaultAnimation);		HX_STACK_VAR(anim,"anim");
			HX_STACK_LINE(1002)
			if (((anim == null()))){
				struct _Function_3_1{
					inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
						HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",1004);
						{
							HX_STACK_LINE(1004)
							Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->sprite->animations);		HX_STACK_VAR(_e,"_e");

							HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_e)
							Dynamic run(){
								HX_STACK_PUSH("*::_Function_4_1","com/stencyl/models/Actor.hx",1004);
								{
									HX_STACK_LINE(1004)
									return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(1004)
							return  Dynamic(new _Function_4_1(_e));
						}
						return null();
					}
				};
				HX_STACK_LINE(1003)
				for(::cpp::FastIterator_obj< ::com::stencyl::models::actor::Animation > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::actor::Animation >((_Function_3_1::Block(this))());  __it->hasNext(); ){
					::com::stencyl::models::actor::Animation a = __it->next();
					{
						HX_STACK_LINE(1006)
						anim = a;
						HX_STACK_LINE(1007)
						break;
					}
;
				}
			}
			HX_STACK_LINE(1011)
			this->defaultAnim = (hx::TCast< com::stencyl::models::actor::Animation >::cast(anim))->animName;
			HX_STACK_LINE(1012)
			this->switchAnimation(this->defaultAnim);
			HX_STACK_LINE(1013)
			this->setCurrentFrame((int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,switchToDefaultAnimation,(void))

Void Actor_obj::setAnimation( ::String name){
{
		HX_STACK_PUSH("Actor::setAnimation","com/stencyl/models/Actor.hx",990);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_LINE(990)
		this->switchAnimation(name);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,setAnimation,(void))

::String Actor_obj::getAnimation( ){
	HX_STACK_PUSH("Actor::getAnimation","com/stencyl/models/Actor.hx",985);
	HX_STACK_THIS(this);
	HX_STACK_LINE(985)
	return this->currAnimationName;
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,getAnimation,return )

Void Actor_obj::addAnimation( ::String name,::flash::display::DisplayObject sprite){
{
		HX_STACK_PUSH("Actor::addAnimation","com/stencyl/models/Actor.hx",980);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(sprite,"sprite");
		HX_STACK_LINE(980)
		this->animationMap->set(name,sprite);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,addAnimation,(void))

Void Actor_obj::initBody( int groupID,bool isSensor,bool isStationary,bool isKinematic,bool canRotate,Dynamic shape){
{
		HX_STACK_PUSH("Actor::initBody","com/stencyl/models/Actor.hx",908);
		HX_STACK_THIS(this);
		HX_STACK_ARG(groupID,"groupID");
		HX_STACK_ARG(isSensor,"isSensor");
		HX_STACK_ARG(isStationary,"isStationary");
		HX_STACK_ARG(isKinematic,"isKinematic");
		HX_STACK_ARG(canRotate,"canRotate");
		HX_STACK_ARG(shape,"shape");
		HX_STACK_LINE(909)
		::box2D::dynamics::B2BodyDef bodyDef = ::box2D::dynamics::B2BodyDef_obj::__new();		HX_STACK_VAR(bodyDef,"bodyDef");
		HX_STACK_LINE(911)
		bodyDef->groupID = groupID;
		HX_STACK_LINE(912)
		bodyDef->position->x = ::com::stencyl::Engine_obj::toPhysicalUnits(this->get_x());
		HX_STACK_LINE(913)
		bodyDef->position->y = ::com::stencyl::Engine_obj::toPhysicalUnits(this->get_y());
		HX_STACK_LINE(915)
		bodyDef->angle = (int)0;
		HX_STACK_LINE(916)
		bodyDef->fixedRotation = !(canRotate);
		HX_STACK_LINE(917)
		bodyDef->allowSleep = false;
		HX_STACK_LINE(919)
		if ((isStationary)){
			HX_STACK_LINE(920)
			bodyDef->type = ::box2D::dynamics::B2Body_obj::b2_staticBody;
		}
		else{
			HX_STACK_LINE(924)
			if ((isKinematic)){
				HX_STACK_LINE(925)
				bodyDef->type = ::box2D::dynamics::B2Body_obj::b2_kinematicBody;
			}
			else{
				HX_STACK_LINE(930)
				bodyDef->type = ::box2D::dynamics::B2Body_obj::b2_dynamicBody;
			}
		}
		HX_STACK_LINE(934)
		if ((::Std_obj::is(shape,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(936)
			bodyDef->userData = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(937)
			this->body = ::com::stencyl::Engine_obj::engine->world->createBody(bodyDef);
			HX_STACK_LINE(939)
			Dynamic arr = hx::TCastToArray(shape);		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(941)
			{
				HX_STACK_LINE(941)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(941)
				while(((_g < arr->__Field(HX_CSTRING("length"),true)))){
					HX_STACK_LINE(941)
					Dynamic item = arr->__GetItem(_g);		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(941)
					++(_g);
					HX_STACK_LINE(943)
					::box2D::dynamics::B2FixtureDef fixtureDef = ::box2D::dynamics::B2FixtureDef_obj::__new();		HX_STACK_VAR(fixtureDef,"fixtureDef");
					HX_STACK_LINE(944)
					fixtureDef->shape = item;
					HX_STACK_LINE(945)
					fixtureDef->friction = 1.0;
					HX_STACK_LINE(946)
					fixtureDef->density = 0.1;
					HX_STACK_LINE(947)
					fixtureDef->restitution = (int)0;
					HX_STACK_LINE(948)
					fixtureDef->isSensor = false;
					HX_STACK_LINE(949)
					fixtureDef->groupID = ::com::stencyl::models::GameModel_obj::TERRAIN_ID;
					HX_STACK_LINE(950)
					fixtureDef->userData = hx::ObjectPtr<OBJ_>(this);
					HX_STACK_LINE(952)
					this->body->createFixture(fixtureDef);
				}
			}
		}
		else{
			HX_STACK_LINE(958)
			::box2D::dynamics::B2FixtureDef fixtureDef = ::box2D::dynamics::B2FixtureDef_obj::__new();		HX_STACK_VAR(fixtureDef,"fixtureDef");
			HX_STACK_LINE(959)
			fixtureDef->shape = shape;
			HX_STACK_LINE(960)
			fixtureDef->friction = 1.0;
			HX_STACK_LINE(961)
			fixtureDef->density = 0.1;
			HX_STACK_LINE(962)
			fixtureDef->restitution = (int)0;
			HX_STACK_LINE(963)
			fixtureDef->isSensor = isSensor;
			HX_STACK_LINE(964)
			fixtureDef->groupID = ::com::stencyl::models::GameModel_obj::INHERIT_ID;
			HX_STACK_LINE(965)
			fixtureDef->userData = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(967)
			bodyDef->userData = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(968)
			this->body = ::com::stencyl::Engine_obj::engine->world->createBody(bodyDef);
			HX_STACK_LINE(969)
			this->body->createFixture(fixtureDef);
		}
		HX_STACK_LINE(972)
		this->bodyDef = bodyDef;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Actor_obj,initBody,(void))

Void Actor_obj::initFromBody( ::box2D::dynamics::B2BodyDef bodyDef){
{
		HX_STACK_PUSH("Actor::initFromBody","com/stencyl/models/Actor.hx",900);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bodyDef,"bodyDef");
		HX_STACK_LINE(901)
		bodyDef->allowSleep = false;
		HX_STACK_LINE(902)
		bodyDef->userData = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(903)
		this->bodyDef = bodyDef;
		HX_STACK_LINE(904)
		this->body = ::com::stencyl::Engine_obj::engine->world->createBody(bodyDef);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,initFromBody,(void))

Void Actor_obj::initScripts( ){
{
		HX_STACK_PUSH("Actor::initScripts","com/stencyl/models/Actor.hx",858);
		HX_STACK_THIS(this);
		HX_STACK_LINE(859)
		if (((this->physicsMode == (int)2))){
			HX_STACK_LINE(861)
			this->handlesCollisions = false;
			HX_STACK_LINE(862)
			return null();
		}
		HX_STACK_LINE(865)
		this->handlesCollisions = true;
		HX_STACK_LINE(866)
		this->behaviors->initScripts();
		HX_STACK_LINE(868)
		int r = (int)0;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(870)
		while(((r < this->whenCreatedListeners->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(872)
			try{
				HX_STACK_LINE(874)
				Dynamic f = this->whenCreatedListeners->__GetItem(r);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(875)
				f(this->whenCreatedListeners).Cast< Void >();
				HX_STACK_LINE(877)
				if (((::com::stencyl::utils::Utils_obj::indexOf(this->whenCreatedListeners,f) == (int)-1))){
					HX_STACK_LINE(878)
					(r)--;
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::String >() ){
					HX_STACK_BEGIN_CATCH
					::String e = __e;{
						HX_STACK_LINE(884)
						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Actor.hx"),885,HX_CSTRING("com.stencyl.models.Actor"),HX_CSTRING("initScripts")));
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(888)
			(r)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,initScripts,(void))

Void Actor_obj::addAnim( int animID,::String name,::flash::display::BitmapData imgData,hx::Null< int >  __o_frameCount,hx::Null< int >  __o_frameWidth,hx::Null< int >  __o_frameHeight,hx::Null< int >  __o_framesAcross,hx::Null< int >  __o_framesDown,hx::Null< Float >  __o_originX,hx::Null< Float >  __o_originY,Array< int > durations,hx::Null< bool >  __o_looping,::haxe::ds::IntMap shapes){
int frameCount = __o_frameCount.Default(1);
int frameWidth = __o_frameWidth.Default(0);
int frameHeight = __o_frameHeight.Default(0);
int framesAcross = __o_framesAcross.Default(1);
int framesDown = __o_framesDown.Default(1);
Float originX = __o_originX.Default(0);
Float originY = __o_originY.Default(0);
bool looping = __o_looping.Default(true);
	HX_STACK_PUSH("Actor::addAnim","com/stencyl/models/Actor.hx",760);
	HX_STACK_THIS(this);
	HX_STACK_ARG(animID,"animID");
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(imgData,"imgData");
	HX_STACK_ARG(frameCount,"frameCount");
	HX_STACK_ARG(frameWidth,"frameWidth");
	HX_STACK_ARG(frameHeight,"frameHeight");
	HX_STACK_ARG(framesAcross,"framesAcross");
	HX_STACK_ARG(framesDown,"framesDown");
	HX_STACK_ARG(originX,"originX");
	HX_STACK_ARG(originY,"originY");
	HX_STACK_ARG(durations,"durations");
	HX_STACK_ARG(looping,"looping");
	HX_STACK_ARG(shapes,"shapes");
{
		HX_STACK_LINE(761)
		if (((shapes != null()))){
			HX_STACK_LINE(763)
			Dynamic arr = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(765)
			if (((this->physicsMode == (int)1))){
				struct _Function_3_1{
					inline static Dynamic Block( ::haxe::ds::IntMap &shapes){
						HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",767);
						{
							HX_STACK_LINE(767)
							Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(shapes);		HX_STACK_VAR(_e,"_e");

							HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_e)
							Dynamic run(){
								HX_STACK_PUSH("*::_Function_4_1","com/stencyl/models/Actor.hx",767);
								{
									HX_STACK_LINE(767)
									return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(767)
							return  Dynamic(new _Function_4_1(_e));
						}
						return null();
					}
				};
				HX_STACK_LINE(766)
				for(::cpp::FastIterator_obj< ::com::stencyl::models::collision::Hitbox > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::collision::Hitbox >((_Function_3_1::Block(shapes))());  __it->hasNext(); ){
					::com::stencyl::models::collision::Hitbox s = __it->next();
					{
						HX_STACK_LINE(769)
						if (((bool(::Std_obj::is(s,hx::ClassOf< ::com::stencyl::models::collision::Hitbox >())) && bool((this->physicsMode > (int)0))))){
							HX_STACK_LINE(771)
							s = (hx::TCast< com::stencyl::models::collision::Hitbox >::cast(s))->clone();
							HX_STACK_LINE(772)
							s->assignTo(hx::ObjectPtr<OBJ_>(this));
						}
						HX_STACK_LINE(775)
						arr->__Field(HX_CSTRING("push"),true)(s);
					}
;
				}
			}
			else{
				HX_STACK_LINE(779)
				if (((this->physicsMode == (int)2))){
				}
				else{
					struct _Function_4_1{
						inline static Dynamic Block( ::haxe::ds::IntMap &shapes){
							HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",786);
							{
								HX_STACK_LINE(786)
								Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(shapes);		HX_STACK_VAR(_e,"_e");

								HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_5_1,Array< ::Dynamic >,_e)
								Dynamic run(){
									HX_STACK_PUSH("*::_Function_5_1","com/stencyl/models/Actor.hx",786);
									{
										HX_STACK_LINE(786)
										return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
									}
									return null();
								}
								HX_END_LOCAL_FUNC0(return)

								HX_STACK_LINE(786)
								return  Dynamic(new _Function_5_1(_e));
							}
							return null();
						}
					};
					HX_STACK_LINE(785)
					for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >((_Function_4_1::Block(shapes))());  __it->hasNext(); ){
						Dynamic s = __it->next();
						arr->__Field(HX_CSTRING("push"),true)(s);
					}
				}
			}
			HX_STACK_LINE(792)
			if (((this->physicsMode > (int)0))){
				HX_STACK_LINE(793)
				this->shapeMap->set(name,::com::stencyl::models::collision::Masklist_obj::__new(arr));
			}
			else{
				HX_STACK_LINE(798)
				this->shapeMap->set(name,arr);
			}
		}
		HX_STACK_LINE(803)
		if (((bool((bool((imgData == null())) || bool((imgData->get_width() <= (int)0)))) || bool((imgData->get_height() <= (int)0))))){
			HX_STACK_LINE(808)
			this->animationMap->set(name,::com::stencyl::graphics::BitmapAnimation_obj::__new(::flash::display::BitmapData_obj::__new((int)16,(int)16,null(),null(),null()),(int)1,(int)1,(int)1,Array_obj< int >::__new().Add((int)1000000),false,null()));
			HX_STACK_LINE(809)
			this->originMap->set(name,::box2D::common::math::B2Vec2_obj::__new(originX,originY));
			HX_STACK_LINE(810)
			return null();
		}
		HX_STACK_LINE(814)
		::openfl::display::Tilesheet tilesheet = ::openfl::display::Tilesheet_obj::__new(imgData);		HX_STACK_VAR(tilesheet,"tilesheet");
		HX_STACK_LINE(816)
		frameWidth = ::Std_obj::_int((Float(imgData->get_width()) / Float(framesAcross)));
		HX_STACK_LINE(817)
		frameHeight = ::Std_obj::_int((Float(imgData->get_height()) / Float(framesDown)));
		HX_STACK_LINE(819)
		{
			HX_STACK_LINE(819)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(819)
			while(((_g < frameCount))){
				HX_STACK_LINE(819)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(821)
				tilesheet->addTileRect(::flash::geom::Rectangle_obj::__new((frameWidth * (hx::Mod(i,framesAcross))),(::Math_obj::floor((Float(i) / Float(framesAcross))) * frameHeight),frameWidth,frameHeight),null());
			}
		}
		HX_STACK_LINE(825)
		::com::stencyl::graphics::SheetAnimation sprite = ::com::stencyl::graphics::SheetAnimation_obj::__new(tilesheet,durations,frameWidth,frameHeight,looping,(  ((this->sprite->animations->get(animID)->__Field(HX_CSTRING("sync"),true))) ? ::com::stencyl::models::actor::Animation(this->sprite->animations->get(animID)) : ::com::stencyl::models::actor::Animation(null()) ));		HX_STACK_VAR(sprite,"sprite");
		HX_STACK_LINE(835)
		sprite->framesAcross = framesAcross;
		HX_STACK_LINE(837)
		this->animationMap->set(name,sprite);
		HX_STACK_LINE(854)
		this->originMap->set(name,::box2D::common::math::B2Vec2_obj::__new(originX,originY));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC13(Actor_obj,addAnim,(void))

Void Actor_obj::resetListeners( ){
{
		HX_STACK_PUSH("Actor::resetListeners","com/stencyl/models/Actor.hx",699);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",700);
				{
					HX_STACK_LINE(700)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->allListeners);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/models/Actor.hx",700);
						{
							HX_STACK_LINE(700)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(700)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(700)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			int key = __it->next();
			this->allListeners->remove(key);
		}
		HX_STACK_LINE(705)
		while(((this->allListenerReferences->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(706)
			this->allListenerReferences->__Field(HX_CSTRING("pop"),true)();
		}
		HX_STACK_LINE(710)
		while(((this->whenUpdatedListeners->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(711)
			this->whenUpdatedListeners->__Field(HX_CSTRING("pop"),true)();
		}
		HX_STACK_LINE(715)
		while(((this->whenDrawingListeners->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(716)
			this->whenDrawingListeners->__Field(HX_CSTRING("pop"),true)();
		}
		HX_STACK_LINE(720)
		while(((this->whenKilledListeners->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(721)
			this->whenKilledListeners->__Field(HX_CSTRING("pop"),true)();
		}
		HX_STACK_LINE(725)
		while(((this->mouseOverListeners->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(726)
			this->mouseOverListeners->__Field(HX_CSTRING("pop"),true)();
		}
		HX_STACK_LINE(730)
		while(((this->positionListeners->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(731)
			this->positionListeners->__Field(HX_CSTRING("pop"),true)();
		}
		HX_STACK_LINE(735)
		while(((this->collisionListeners->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(736)
			this->collisionListeners->__Field(HX_CSTRING("pop"),true)();
		}
		HX_STACK_LINE(740)
		this->positionListenerCount = (int)0;
		HX_STACK_LINE(741)
		this->collisionListenerCount = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,resetListeners,(void))

Void Actor_obj::destroy( ){
{
		HX_STACK_PUSH("Actor::destroy","com/stencyl/models/Actor.hx",621);
		HX_STACK_THIS(this);
		HX_STACK_LINE(622)
		if ((this->destroyed)){
			HX_STACK_LINE(623)
			return null();
		}
		HX_STACK_LINE(627)
		this->destroyed = true;
		struct _Function_1_1{
			inline static Dynamic Block( ::com::stencyl::models::Actor_obj *__this){
				HX_STACK_PUSH("*::closure","com/stencyl/models/Actor.hx",629);
				{
					HX_STACK_LINE(629)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->animationMap);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","com/stencyl/models/Actor.hx",629);
						{
							HX_STACK_LINE(629)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(629)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(629)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			Dynamic anim = __it->next();
			anim->__FieldRef(HX_CSTRING("visible")) = false;
		}
		HX_STACK_LINE(634)
		::com::stencyl::utils::Utils_obj::removeAllChildren(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(636)
		if (((bool((this->body != null())) && bool((this->physicsMode == (int)0))))){
			HX_STACK_LINE(638)
			::box2D::dynamics::contacts::B2ContactEdge contact = this->body->getContactList();		HX_STACK_VAR(contact,"contact");
			HX_STACK_LINE(640)
			while(((contact != null()))){
				HX_STACK_LINE(642)
				::com::stencyl::Engine_obj::engine->world->m_contactManager->m_contactListener->endContact(contact->contact);
				HX_STACK_LINE(643)
				contact = contact->next;
			}
			HX_STACK_LINE(646)
			::com::stencyl::Engine_obj::engine->world->destroyBody(this->body);
		}
		HX_STACK_LINE(649)
		this->cancelTweens();
		HX_STACK_LINE(651)
		::com::stencyl::models::Actor_obj::lastCollided = null();
		HX_STACK_LINE(653)
		this->shapeMap = null();
		HX_STACK_LINE(654)
		this->originMap = null();
		HX_STACK_LINE(655)
		this->defaultAnim = null();
		HX_STACK_LINE(656)
		this->animationMap = null();
		HX_STACK_LINE(657)
		this->currAnimationAsAnim = null();
		HX_STACK_LINE(658)
		this->currAnimation = null();
		HX_STACK_LINE(659)
		this->currOffset = null();
		HX_STACK_LINE(660)
		this->currOrigin = null();
		HX_STACK_LINE(661)
		this->body = null();
		HX_STACK_LINE(662)
		this->sprite = null();
		HX_STACK_LINE(663)
		this->contacts = null();
		HX_STACK_LINE(664)
		this->regionContacts = null();
		HX_STACK_LINE(665)
		this->contactCount = (int)0;
		HX_STACK_LINE(666)
		this->collisionsCount = (int)0;
		HX_STACK_LINE(668)
		this->transformPoint = null();
		HX_STACK_LINE(669)
		this->transformMatrix = null();
		HX_STACK_LINE(671)
		this->whenCreatedListeners = null();
		HX_STACK_LINE(672)
		this->whenUpdatedListeners = null();
		HX_STACK_LINE(673)
		this->whenDrawingListeners = null();
		HX_STACK_LINE(674)
		this->whenKilledListeners = null();
		HX_STACK_LINE(675)
		this->mouseOverListeners = null();
		HX_STACK_LINE(676)
		this->positionListeners = null();
		HX_STACK_LINE(677)
		this->collisionListeners = null();
		HX_STACK_LINE(678)
		this->allListeners = null();
		HX_STACK_LINE(679)
		this->allListenerReferences = null();
		HX_STACK_LINE(681)
		this->positionListenerCount = (int)0;
		HX_STACK_LINE(682)
		this->collisionListenerCount = (int)0;
		HX_STACK_LINE(684)
		this->registry = null();
		HX_STACK_LINE(686)
		this->collisions = null();
		HX_STACK_LINE(687)
		this->simpleCollisions = null();
		HX_STACK_LINE(689)
		if (((this->bodyDef != null()))){
			HX_STACK_LINE(691)
			this->bodyDef->userData = null();
			HX_STACK_LINE(692)
			this->bodyDef = null();
		}
		HX_STACK_LINE(695)
		this->behaviors->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,destroy,(void))

int Actor_obj::GROUP_OFFSET;

::com::stencyl::models::Actor Actor_obj::lastCollided;

::box2D::collision::shapes::B2PolygonShape Actor_obj::createBox( Float width,Float height){
	HX_STACK_PUSH("Actor::createBox","com/stencyl/models/Actor.hx",893);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_LINE(894)
	::box2D::collision::shapes::B2PolygonShape boxShape = ::box2D::collision::shapes::B2PolygonShape_obj::__new();		HX_STACK_VAR(boxShape,"boxShape");
	HX_STACK_LINE(895)
	boxShape->setAsBox(::com::stencyl::Engine_obj::toPhysicalUnits((Float(width) / Float((int)2))),::com::stencyl::Engine_obj::toPhysicalUnits((Float(height) / Float((int)2))));
	HX_STACK_LINE(896)
	return boxShape;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,createBox,return )

::box2D::collision::B2WorldManifold Actor_obj::manifold;


Actor_obj::Actor_obj()
{
}

void Actor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Actor);
	HX_MARK_MEMBER_NAME(allowAdd,"allowAdd");
	HX_MARK_MEMBER_NAME(simpleCollisions,"simpleCollisions");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_moveY,"_moveY");
	HX_MARK_MEMBER_NAME(_moveX,"_moveX");
	HX_MARK_MEMBER_NAME(_y,"_y");
	HX_MARK_MEMBER_NAME(_x,"_x");
	HX_MARK_MEMBER_NAME(_mask,"_mask");
	HX_MARK_MEMBER_NAME(HITBOX,"HITBOX");
	HX_MARK_MEMBER_NAME(collisionsCount,"collisionsCount");
	HX_MARK_MEMBER_NAME(contactCount,"contactCount");
	HX_MARK_MEMBER_NAME(zero,"zero");
	HX_MARK_MEMBER_NAME(dummy,"dummy");
	HX_MARK_MEMBER_NAME(collisions,"collisions");
	HX_MARK_MEMBER_NAME(regionContacts,"regionContacts");
	HX_MARK_MEMBER_NAME(contacts,"contacts");
	HX_MARK_MEMBER_NAME(handlesCollisions,"handlesCollisions");
	HX_MARK_MEMBER_NAME(bodyScale,"bodyScale");
	HX_MARK_MEMBER_NAME(md,"md");
	HX_MARK_MEMBER_NAME(bodyDef,"bodyDef");
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(isOnScreenCache,"isOnScreenCache");
	HX_MARK_MEMBER_NAME(lastSceneState,"lastSceneState");
	HX_MARK_MEMBER_NAME(lastScreenState,"lastScreenState");
	HX_MARK_MEMBER_NAME(mouseState,"mouseState");
	HX_MARK_MEMBER_NAME(collisionListenerCount,"collisionListenerCount");
	HX_MARK_MEMBER_NAME(positionListenerCount,"positionListenerCount");
	HX_MARK_MEMBER_NAME(collisionListeners,"collisionListeners");
	HX_MARK_MEMBER_NAME(positionListeners,"positionListeners");
	HX_MARK_MEMBER_NAME(mouseOverListeners,"mouseOverListeners");
	HX_MARK_MEMBER_NAME(whenKilledListeners,"whenKilledListeners");
	HX_MARK_MEMBER_NAME(whenDrawingListeners,"whenDrawingListeners");
	HX_MARK_MEMBER_NAME(whenUpdatedListeners,"whenUpdatedListeners");
	HX_MARK_MEMBER_NAME(whenCreatedListeners,"whenCreatedListeners");
	HX_MARK_MEMBER_NAME(allListenerReferences,"allListenerReferences");
	HX_MARK_MEMBER_NAME(allListeners,"allListeners");
	HX_MARK_MEMBER_NAME(registry,"registry");
	HX_MARK_MEMBER_NAME(behaviors,"behaviors");
	HX_MARK_MEMBER_NAME(maxMove,"maxMove");
	HX_MARK_MEMBER_NAME(minMove,"minMove");
	HX_MARK_MEMBER_NAME(moveYDistance,"moveYDistance");
	HX_MARK_MEMBER_NAME(moveXDistance,"moveXDistance");
	HX_MARK_MEMBER_NAME(moveMultiplier,"moveMultiplier");
	HX_MARK_MEMBER_NAME(drawY,"drawY");
	HX_MARK_MEMBER_NAME(drawX,"drawX");
	HX_MARK_MEMBER_NAME(snapOnSet,"snapOnSet");
	HX_MARK_MEMBER_NAME(firstMove,"firstMove");
	HX_MARK_MEMBER_NAME(smoothMove,"smoothMove");
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_MEMBER_NAME(drawMatrix,"drawMatrix");
	HX_MARK_MEMBER_NAME(updateMatrix,"updateMatrix");
	HX_MARK_MEMBER_NAME(transformMatrix,"transformMatrix");
	HX_MARK_MEMBER_NAME(transformPoint,"transformPoint");
	HX_MARK_MEMBER_NAME(transformObj,"transformObj");
	HX_MARK_MEMBER_NAME(currOffset,"currOffset");
	HX_MARK_MEMBER_NAME(currOrigin,"currOrigin");
	HX_MARK_MEMBER_NAME(defaultAnim,"defaultAnim");
	HX_MARK_MEMBER_NAME(originMap,"originMap");
	HX_MARK_MEMBER_NAME(shapeMap,"shapeMap");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(tint,"tint");
	HX_MARK_MEMBER_NAME(animsBackedUp,"animsBackedUp");
	HX_MARK_MEMBER_NAME(backupAnimationMap,"backupAnimationMap");
	HX_MARK_MEMBER_NAME(animationMap,"animationMap");
	HX_MARK_MEMBER_NAME(currAnimationName,"currAnimationName");
	HX_MARK_MEMBER_NAME(currAnimation,"currAnimation");
	HX_MARK_MEMBER_NAME(currAnimationAsAnim,"currAnimationAsAnim");
	HX_MARK_MEMBER_NAME(cacheHeight,"cacheHeight");
	HX_MARK_MEMBER_NAME(cacheWidth,"cacheWidth");
	HX_MARK_MEMBER_NAME(activePositionTweens,"activePositionTweens");
	HX_MARK_MEMBER_NAME(activeAngleTweens,"activeAngleTweens");
	HX_MARK_MEMBER_NAME(tweenAngle,"tweenAngle");
	HX_MARK_MEMBER_NAME(tweenLoc,"tweenLoc");
	HX_MARK_MEMBER_NAME(continuousCollision,"continuousCollision");
	HX_MARK_MEMBER_NAME(rSpeed,"rSpeed");
	HX_MARK_MEMBER_NAME(ySpeed,"ySpeed");
	HX_MARK_MEMBER_NAME(xSpeed,"xSpeed");
	HX_MARK_MEMBER_NAME(colY,"colY");
	HX_MARK_MEMBER_NAME(colX,"colX");
	HX_MARK_MEMBER_NAME(lastScale,"lastScale");
	HX_MARK_MEMBER_NAME(lastAngle,"lastAngle");
	HX_MARK_MEMBER_NAME(lastY,"lastY");
	HX_MARK_MEMBER_NAME(lastX,"lastX");
	HX_MARK_MEMBER_NAME(realScaleY,"realScaleY");
	HX_MARK_MEMBER_NAME(realScaleX,"realScaleX");
	HX_MARK_MEMBER_NAME(realAngle,"realAngle");
	HX_MARK_MEMBER_NAME(realY,"realY");
	HX_MARK_MEMBER_NAME(realX,"realX");
	HX_MARK_MEMBER_NAME(originY,"originY");
	HX_MARK_MEMBER_NAME(originX,"originX");
	HX_MARK_MEMBER_NAME(resetOrigin,"resetOrigin");
	HX_MARK_MEMBER_NAME(solid,"solid");
	HX_MARK_MEMBER_NAME(collidable,"collidable");
	HX_MARK_MEMBER_NAME(ignoreGravity,"ignoreGravity");
	HX_MARK_MEMBER_NAME(fixedRotation,"fixedRotation");
	HX_MARK_MEMBER_NAME(dying,"dying");
	HX_MARK_MEMBER_NAME(dead,"dead");
	HX_MARK_MEMBER_NAME(autoScale,"autoScale");
	HX_MARK_MEMBER_NAME(physicsMode,"physicsMode");
	HX_MARK_MEMBER_NAME(killLeaveScreen,"killLeaveScreen");
	HX_MARK_MEMBER_NAME(isCamera,"isCamera");
	HX_MARK_MEMBER_NAME(alwaysSimulate,"alwaysSimulate");
	HX_MARK_MEMBER_NAME(isHUD,"isHUD");
	HX_MARK_MEMBER_NAME(drawActor,"drawActor");
	HX_MARK_MEMBER_NAME(destroyed,"destroyed");
	HX_MARK_MEMBER_NAME(isTerrain,"isTerrain");
	HX_MARK_MEMBER_NAME(isTerrainRegion,"isTerrainRegion");
	HX_MARK_MEMBER_NAME(isRegion,"isRegion");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(recycled,"recycled");
	HX_MARK_MEMBER_NAME(groupsToCollideWith,"groupsToCollideWith");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(typeID,"typeID");
	HX_MARK_MEMBER_NAME(layerID,"layerID");
	HX_MARK_MEMBER_NAME(groupID,"groupID");
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_MEMBER_NAME(createTime,"createTime");
	HX_MARK_MEMBER_NAME(engine,"engine");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Actor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(allowAdd,"allowAdd");
	HX_VISIT_MEMBER_NAME(simpleCollisions,"simpleCollisions");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_moveY,"_moveY");
	HX_VISIT_MEMBER_NAME(_moveX,"_moveX");
	HX_VISIT_MEMBER_NAME(_y,"_y");
	HX_VISIT_MEMBER_NAME(_x,"_x");
	HX_VISIT_MEMBER_NAME(_mask,"_mask");
	HX_VISIT_MEMBER_NAME(HITBOX,"HITBOX");
	HX_VISIT_MEMBER_NAME(collisionsCount,"collisionsCount");
	HX_VISIT_MEMBER_NAME(contactCount,"contactCount");
	HX_VISIT_MEMBER_NAME(zero,"zero");
	HX_VISIT_MEMBER_NAME(dummy,"dummy");
	HX_VISIT_MEMBER_NAME(collisions,"collisions");
	HX_VISIT_MEMBER_NAME(regionContacts,"regionContacts");
	HX_VISIT_MEMBER_NAME(contacts,"contacts");
	HX_VISIT_MEMBER_NAME(handlesCollisions,"handlesCollisions");
	HX_VISIT_MEMBER_NAME(bodyScale,"bodyScale");
	HX_VISIT_MEMBER_NAME(md,"md");
	HX_VISIT_MEMBER_NAME(bodyDef,"bodyDef");
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(isOnScreenCache,"isOnScreenCache");
	HX_VISIT_MEMBER_NAME(lastSceneState,"lastSceneState");
	HX_VISIT_MEMBER_NAME(lastScreenState,"lastScreenState");
	HX_VISIT_MEMBER_NAME(mouseState,"mouseState");
	HX_VISIT_MEMBER_NAME(collisionListenerCount,"collisionListenerCount");
	HX_VISIT_MEMBER_NAME(positionListenerCount,"positionListenerCount");
	HX_VISIT_MEMBER_NAME(collisionListeners,"collisionListeners");
	HX_VISIT_MEMBER_NAME(positionListeners,"positionListeners");
	HX_VISIT_MEMBER_NAME(mouseOverListeners,"mouseOverListeners");
	HX_VISIT_MEMBER_NAME(whenKilledListeners,"whenKilledListeners");
	HX_VISIT_MEMBER_NAME(whenDrawingListeners,"whenDrawingListeners");
	HX_VISIT_MEMBER_NAME(whenUpdatedListeners,"whenUpdatedListeners");
	HX_VISIT_MEMBER_NAME(whenCreatedListeners,"whenCreatedListeners");
	HX_VISIT_MEMBER_NAME(allListenerReferences,"allListenerReferences");
	HX_VISIT_MEMBER_NAME(allListeners,"allListeners");
	HX_VISIT_MEMBER_NAME(registry,"registry");
	HX_VISIT_MEMBER_NAME(behaviors,"behaviors");
	HX_VISIT_MEMBER_NAME(maxMove,"maxMove");
	HX_VISIT_MEMBER_NAME(minMove,"minMove");
	HX_VISIT_MEMBER_NAME(moveYDistance,"moveYDistance");
	HX_VISIT_MEMBER_NAME(moveXDistance,"moveXDistance");
	HX_VISIT_MEMBER_NAME(moveMultiplier,"moveMultiplier");
	HX_VISIT_MEMBER_NAME(drawY,"drawY");
	HX_VISIT_MEMBER_NAME(drawX,"drawX");
	HX_VISIT_MEMBER_NAME(snapOnSet,"snapOnSet");
	HX_VISIT_MEMBER_NAME(firstMove,"firstMove");
	HX_VISIT_MEMBER_NAME(smoothMove,"smoothMove");
	HX_VISIT_MEMBER_NAME(label,"label");
	HX_VISIT_MEMBER_NAME(drawMatrix,"drawMatrix");
	HX_VISIT_MEMBER_NAME(updateMatrix,"updateMatrix");
	HX_VISIT_MEMBER_NAME(transformMatrix,"transformMatrix");
	HX_VISIT_MEMBER_NAME(transformPoint,"transformPoint");
	HX_VISIT_MEMBER_NAME(transformObj,"transformObj");
	HX_VISIT_MEMBER_NAME(currOffset,"currOffset");
	HX_VISIT_MEMBER_NAME(currOrigin,"currOrigin");
	HX_VISIT_MEMBER_NAME(defaultAnim,"defaultAnim");
	HX_VISIT_MEMBER_NAME(originMap,"originMap");
	HX_VISIT_MEMBER_NAME(shapeMap,"shapeMap");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(tint,"tint");
	HX_VISIT_MEMBER_NAME(animsBackedUp,"animsBackedUp");
	HX_VISIT_MEMBER_NAME(backupAnimationMap,"backupAnimationMap");
	HX_VISIT_MEMBER_NAME(animationMap,"animationMap");
	HX_VISIT_MEMBER_NAME(currAnimationName,"currAnimationName");
	HX_VISIT_MEMBER_NAME(currAnimation,"currAnimation");
	HX_VISIT_MEMBER_NAME(currAnimationAsAnim,"currAnimationAsAnim");
	HX_VISIT_MEMBER_NAME(cacheHeight,"cacheHeight");
	HX_VISIT_MEMBER_NAME(cacheWidth,"cacheWidth");
	HX_VISIT_MEMBER_NAME(activePositionTweens,"activePositionTweens");
	HX_VISIT_MEMBER_NAME(activeAngleTweens,"activeAngleTweens");
	HX_VISIT_MEMBER_NAME(tweenAngle,"tweenAngle");
	HX_VISIT_MEMBER_NAME(tweenLoc,"tweenLoc");
	HX_VISIT_MEMBER_NAME(continuousCollision,"continuousCollision");
	HX_VISIT_MEMBER_NAME(rSpeed,"rSpeed");
	HX_VISIT_MEMBER_NAME(ySpeed,"ySpeed");
	HX_VISIT_MEMBER_NAME(xSpeed,"xSpeed");
	HX_VISIT_MEMBER_NAME(colY,"colY");
	HX_VISIT_MEMBER_NAME(colX,"colX");
	HX_VISIT_MEMBER_NAME(lastScale,"lastScale");
	HX_VISIT_MEMBER_NAME(lastAngle,"lastAngle");
	HX_VISIT_MEMBER_NAME(lastY,"lastY");
	HX_VISIT_MEMBER_NAME(lastX,"lastX");
	HX_VISIT_MEMBER_NAME(realScaleY,"realScaleY");
	HX_VISIT_MEMBER_NAME(realScaleX,"realScaleX");
	HX_VISIT_MEMBER_NAME(realAngle,"realAngle");
	HX_VISIT_MEMBER_NAME(realY,"realY");
	HX_VISIT_MEMBER_NAME(realX,"realX");
	HX_VISIT_MEMBER_NAME(originY,"originY");
	HX_VISIT_MEMBER_NAME(originX,"originX");
	HX_VISIT_MEMBER_NAME(resetOrigin,"resetOrigin");
	HX_VISIT_MEMBER_NAME(solid,"solid");
	HX_VISIT_MEMBER_NAME(collidable,"collidable");
	HX_VISIT_MEMBER_NAME(ignoreGravity,"ignoreGravity");
	HX_VISIT_MEMBER_NAME(fixedRotation,"fixedRotation");
	HX_VISIT_MEMBER_NAME(dying,"dying");
	HX_VISIT_MEMBER_NAME(dead,"dead");
	HX_VISIT_MEMBER_NAME(autoScale,"autoScale");
	HX_VISIT_MEMBER_NAME(physicsMode,"physicsMode");
	HX_VISIT_MEMBER_NAME(killLeaveScreen,"killLeaveScreen");
	HX_VISIT_MEMBER_NAME(isCamera,"isCamera");
	HX_VISIT_MEMBER_NAME(alwaysSimulate,"alwaysSimulate");
	HX_VISIT_MEMBER_NAME(isHUD,"isHUD");
	HX_VISIT_MEMBER_NAME(drawActor,"drawActor");
	HX_VISIT_MEMBER_NAME(destroyed,"destroyed");
	HX_VISIT_MEMBER_NAME(isTerrain,"isTerrain");
	HX_VISIT_MEMBER_NAME(isTerrainRegion,"isTerrainRegion");
	HX_VISIT_MEMBER_NAME(isRegion,"isRegion");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(recycled,"recycled");
	HX_VISIT_MEMBER_NAME(groupsToCollideWith,"groupsToCollideWith");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(typeID,"typeID");
	HX_VISIT_MEMBER_NAME(layerID,"layerID");
	HX_VISIT_MEMBER_NAME(groupID,"groupID");
	HX_VISIT_MEMBER_NAME(ID,"ID");
	HX_VISIT_MEMBER_NAME(createTime,"createTime");
	HX_VISIT_MEMBER_NAME(engine,"engine");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Actor_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_y") ) { return _y; }
		if (HX_FIELD_EQ(inName,"_x") ) { return _x; }
		if (HX_FIELD_EQ(inName,"md") ) { return md; }
		if (HX_FIELD_EQ(inName,"ID") ) { return ID; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"die") ) { return die_dyn(); }
		if (HX_FIELD_EQ(inName,"say") ) { return say_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		if (HX_FIELD_EQ(inName,"setY") ) { return setY_dyn(); }
		if (HX_FIELD_EQ(inName,"setX") ) { return setX_dyn(); }
		if (HX_FIELD_EQ(inName,"getY") ) { return getY_dyn(); }
		if (HX_FIELD_EQ(inName,"getX") ) { return getX_dyn(); }
		if (HX_FIELD_EQ(inName,"zero") ) { return zero; }
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
		if (HX_FIELD_EQ(inName,"tint") ) { return tint; }
		if (HX_FIELD_EQ(inName,"colY") ) { return colY; }
		if (HX_FIELD_EQ(inName,"colX") ) { return colX; }
		if (HX_FIELD_EQ(inName,"dead") ) { return dead; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_mask") ) { return _mask; }
		if (HX_FIELD_EQ(inName,"shape") ) { return get_shape(); }
		if (HX_FIELD_EQ(inName,"shout") ) { return shout_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		if (HX_FIELD_EQ(inName,"getID") ) { return getID_dyn(); }
		if (HX_FIELD_EQ(inName,"dummy") ) { return dummy; }
		if (HX_FIELD_EQ(inName,"drawY") ) { return drawY; }
		if (HX_FIELD_EQ(inName,"drawX") ) { return drawX; }
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
		if (HX_FIELD_EQ(inName,"lastY") ) { return lastY; }
		if (HX_FIELD_EQ(inName,"lastX") ) { return lastX; }
		if (HX_FIELD_EQ(inName,"realY") ) { return realY; }
		if (HX_FIELD_EQ(inName,"realX") ) { return realX; }
		if (HX_FIELD_EQ(inName,"solid") ) { return solid; }
		if (HX_FIELD_EQ(inName,"dying") ) { return dying; }
		if (HX_FIELD_EQ(inName,"isHUD") ) { return isHUD; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"_moveY") ) { return _moveY; }
		if (HX_FIELD_EQ(inName,"_moveX") ) { return _moveX; }
		if (HX_FIELD_EQ(inName,"HITBOX") ) { return HITBOX; }
		if (HX_FIELD_EQ(inName,"moveBy") ) { return moveBy_dyn(); }
		if (HX_FIELD_EQ(inName,"spinBy") ) { return spinBy_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"spinTo") ) { return spinTo_dyn(); }
		if (HX_FIELD_EQ(inName,"growTo") ) { return growTo_dyn(); }
		if (HX_FIELD_EQ(inName,"fadeTo") ) { return fadeTo_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"follow") ) { return follow_dyn(); }
		if (HX_FIELD_EQ(inName,"moveUp") ) { return moveUp_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"rSpeed") ) { return rSpeed; }
		if (HX_FIELD_EQ(inName,"ySpeed") ) { return ySpeed; }
		if (HX_FIELD_EQ(inName,"xSpeed") ) { return xSpeed; }
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"typeID") ) { return typeID; }
		if (HX_FIELD_EQ(inName,"engine") ) { return engine; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"collide") ) { return collide_dyn(); }
		if (HX_FIELD_EQ(inName,"isAlive") ) { return isAlive_dyn(); }
		if (HX_FIELD_EQ(inName,"isDying") ) { return isDying_dyn(); }
		if (HX_FIELD_EQ(inName,"setMass") ) { return setMass_dyn(); }
		if (HX_FIELD_EQ(inName,"getMass") ) { return getMass_dyn(); }
		if (HX_FIELD_EQ(inName,"getBody") ) { return getBody_dyn(); }
		if (HX_FIELD_EQ(inName,"unpause") ) { return unpause_dyn(); }
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
		if (HX_FIELD_EQ(inName,"addAnim") ) { return addAnim_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"bodyDef") ) { return bodyDef; }
		if (HX_FIELD_EQ(inName,"maxMove") ) { return maxMove; }
		if (HX_FIELD_EQ(inName,"minMove") ) { return minMove; }
		if (HX_FIELD_EQ(inName,"originY") ) { return originY; }
		if (HX_FIELD_EQ(inName,"originX") ) { return originX; }
		if (HX_FIELD_EQ(inName,"layerID") ) { return layerID; }
		if (HX_FIELD_EQ(inName,"groupID") ) { return groupID; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"manifold") ) { return manifold; }
		if (HX_FIELD_EQ(inName,"allowAdd") ) { return allowAdd; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"setValue") ) { return setValue_dyn(); }
		if (HX_FIELD_EQ(inName,"getValue") ) { return getValue_dyn(); }
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"setAngle") ) { return setAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"getAngle") ) { return getAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"moveDown") ) { return moveDown_dyn(); }
		if (HX_FIELD_EQ(inName,"getGroup") ) { return getGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"isPaused") ) { return isPaused_dyn(); }
		if (HX_FIELD_EQ(inName,"initBody") ) { return initBody_dyn(); }
		if (HX_FIELD_EQ(inName,"contacts") ) { return contacts; }
		if (HX_FIELD_EQ(inName,"registry") ) { return registry; }
		if (HX_FIELD_EQ(inName,"shapeMap") ) { return shapeMap; }
		if (HX_FIELD_EQ(inName,"tweenLoc") ) { return tweenLoc; }
		if (HX_FIELD_EQ(inName,"isCamera") ) { return isCamera; }
		if (HX_FIELD_EQ(inName,"isRegion") ) { return isRegion; }
		if (HX_FIELD_EQ(inName,"recycled") ) { return recycled; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"createBox") ) { return createBox_dyn(); }
		if (HX_FIELD_EQ(inName,"resetReal") ) { return resetReal_dyn(); }
		if (HX_FIELD_EQ(inName,"set_shape") ) { return set_shape_dyn(); }
		if (HX_FIELD_EQ(inName,"get_shape") ) { return get_shape_dyn(); }
		if (HX_FIELD_EQ(inName,"isInScene") ) { return isInScene_dyn(); }
		if (HX_FIELD_EQ(inName,"setFilter") ) { return setFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"drawImage") ) { return drawImage_dyn(); }
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"setZIndex") ) { return setZIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"getZIndex") ) { return getZIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"moveToTop") ) { return moveToTop_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleBody") ) { return scaleBody_dyn(); }
		if (HX_FIELD_EQ(inName,"bodyScale") ) { return bodyScale; }
		if (HX_FIELD_EQ(inName,"behaviors") ) { return behaviors; }
		if (HX_FIELD_EQ(inName,"snapOnSet") ) { return snapOnSet; }
		if (HX_FIELD_EQ(inName,"firstMove") ) { return firstMove; }
		if (HX_FIELD_EQ(inName,"originMap") ) { return originMap; }
		if (HX_FIELD_EQ(inName,"lastScale") ) { return lastScale; }
		if (HX_FIELD_EQ(inName,"lastAngle") ) { return lastAngle; }
		if (HX_FIELD_EQ(inName,"realAngle") ) { return realAngle; }
		if (HX_FIELD_EQ(inName,"autoScale") ) { return autoScale; }
		if (HX_FIELD_EQ(inName,"drawActor") ) { return drawActor; }
		if (HX_FIELD_EQ(inName,"destroyed") ) { return destroyed; }
		if (HX_FIELD_EQ(inName,"isTerrain") ) { return isTerrain; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isOnScreen") ) { return isOnScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"drawsImage") ) { return drawsImage_dyn(); }
		if (HX_FIELD_EQ(inName,"accelerate") ) { return accelerate_dyn(); }
		if (HX_FIELD_EQ(inName,"getScreenY") ) { return getScreenY_dyn(); }
		if (HX_FIELD_EQ(inName,"getScreenX") ) { return getScreenX_dyn(); }
		if (HX_FIELD_EQ(inName,"getYCenter") ) { return getYCenter_dyn(); }
		if (HX_FIELD_EQ(inName,"getXCenter") ) { return getXCenter_dyn(); }
		if (HX_FIELD_EQ(inName,"sendToBack") ) { return sendToBack_dyn(); }
		if (HX_FIELD_EQ(inName,"isPausable") ) { return isPausable_dyn(); }
		if (HX_FIELD_EQ(inName,"getLayerID") ) { return getLayerID_dyn(); }
		if (HX_FIELD_EQ(inName,"getGroupID") ) { return getGroupID_dyn(); }
		if (HX_FIELD_EQ(inName,"addContact") ) { return addContact_dyn(); }
		if (HX_FIELD_EQ(inName,"collisions") ) { return collisions; }
		if (HX_FIELD_EQ(inName,"mouseState") ) { return mouseState; }
		if (HX_FIELD_EQ(inName,"smoothMove") ) { return smoothMove; }
		if (HX_FIELD_EQ(inName,"drawMatrix") ) { return drawMatrix; }
		if (HX_FIELD_EQ(inName,"currOffset") ) { return currOffset; }
		if (HX_FIELD_EQ(inName,"currOrigin") ) { return currOrigin; }
		if (HX_FIELD_EQ(inName,"cacheWidth") ) { return cacheWidth; }
		if (HX_FIELD_EQ(inName,"tweenAngle") ) { return tweenAngle; }
		if (HX_FIELD_EQ(inName,"realScaleY") ) { return realScaleY; }
		if (HX_FIELD_EQ(inName,"realScaleX") ) { return realScaleX; }
		if (HX_FIELD_EQ(inName,"collidable") ) { return collidable; }
		if (HX_FIELD_EQ(inName,"createTime") ) { return createTime; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"moveActorTo") ) { return moveActorTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveActorBy") ) { return moveActorBy_dyn(); }
		if (HX_FIELD_EQ(inName,"collideInto") ) { return collideInto_dyn(); }
		if (HX_FIELD_EQ(inName,"collideWith") ) { return collideWith_dyn(); }
		if (HX_FIELD_EQ(inName,"setLocation") ) { return setLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"hasBehavior") ) { return hasBehavior_dyn(); }
		if (HX_FIELD_EQ(inName,"addBehavior") ) { return addBehavior_dyn(); }
		if (HX_FIELD_EQ(inName,"isMouseDown") ) { return isMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"isMouseOver") ) { return isMouseOver_dyn(); }
		if (HX_FIELD_EQ(inName,"setFriction") ) { return setFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"getFriction") ) { return getFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"applyTorque") ) { return applyTorque_dyn(); }
		if (HX_FIELD_EQ(inName,"accelerateY") ) { return accelerateY_dyn(); }
		if (HX_FIELD_EQ(inName,"accelerateX") ) { return accelerateX_dyn(); }
		if (HX_FIELD_EQ(inName,"setVelocity") ) { return setVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"moveToLayer") ) { return moveToLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"getIsRegion") ) { return getIsRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"innerUpdate") ) { return innerUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"initScripts") ) { return initScripts_dyn(); }
		if (HX_FIELD_EQ(inName,"defaultAnim") ) { return defaultAnim; }
		if (HX_FIELD_EQ(inName,"cacheHeight") ) { return cacheHeight; }
		if (HX_FIELD_EQ(inName,"resetOrigin") ) { return resetOrigin; }
		if (HX_FIELD_EQ(inName,"physicsMode") ) { return physicsMode; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"GROUP_OFFSET") ) { return GROUP_OFFSET; }
		if (HX_FIELD_EQ(inName,"lastCollided") ) { return lastCollided; }
		if (HX_FIELD_EQ(inName,"moveCollideY") ) { return moveCollideY_dyn(); }
		if (HX_FIELD_EQ(inName,"moveCollideX") ) { return moveCollideX_dyn(); }
		if (HX_FIELD_EQ(inName,"addCollision") ) { return addCollision_dyn(); }
		if (HX_FIELD_EQ(inName,"collideTypes") ) { return collideTypes_dyn(); }
		if (HX_FIELD_EQ(inName,"setBlendMode") ) { return setBlendMode_dyn(); }
		if (HX_FIELD_EQ(inName,"clearFilters") ) { return clearFilters_dyn(); }
		if (HX_FIELD_EQ(inName,"cancelTweens") ) { return cancelTweens_dyn(); }
		if (HX_FIELD_EQ(inName,"isMouseHover") ) { return isMouseHover_dyn(); }
		if (HX_FIELD_EQ(inName,"applyImpulse") ) { return applyImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"setYVelocity") ) { return setYVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"setXVelocity") ) { return setXVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"getYVelocity") ) { return getYVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"getXVelocity") ) { return getXVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"moveToBottom") ) { return moveToBottom_dyn(); }
		if (HX_FIELD_EQ(inName,"sendBackward") ) { return sendBackward_dyn(); }
		if (HX_FIELD_EQ(inName,"bringForward") ) { return bringForward_dyn(); }
		if (HX_FIELD_EQ(inName,"bringToFront") ) { return bringToFront_dyn(); }
		if (HX_FIELD_EQ(inName,"contactCount") ) { return contactCount; }
		if (HX_FIELD_EQ(inName,"getNumFrames") ) { return getNumFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"setAnimation") ) { return setAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"getAnimation") ) { return getAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"addAnimation") ) { return addAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"initFromBody") ) { return initFromBody_dyn(); }
		if (HX_FIELD_EQ(inName,"allListeners") ) { return allListeners; }
		if (HX_FIELD_EQ(inName,"updateMatrix") ) { return updateMatrix; }
		if (HX_FIELD_EQ(inName,"transformObj") ) { return transformObj; }
		if (HX_FIELD_EQ(inName,"animationMap") ) { return animationMap; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hasActorValue") ) { return hasActorValue_dyn(); }
		if (HX_FIELD_EQ(inName,"getActorValue") ) { return getActorValue_dyn(); }
		if (HX_FIELD_EQ(inName,"setActorValue") ) { return setActorValue_dyn(); }
		if (HX_FIELD_EQ(inName,"setBounciness") ) { return setBounciness_dyn(); }
		if (HX_FIELD_EQ(inName,"getBounciness") ) { return getBounciness_dyn(); }
		if (HX_FIELD_EQ(inName,"getLayerOrder") ) { return getLayerOrder_dyn(); }
		if (HX_FIELD_EQ(inName,"removeContact") ) { return removeContact_dyn(); }
		if (HX_FIELD_EQ(inName,"moveYDistance") ) { return moveYDistance; }
		if (HX_FIELD_EQ(inName,"moveXDistance") ) { return moveXDistance; }
		if (HX_FIELD_EQ(inName,"animsBackedUp") ) { return animsBackedUp; }
		if (HX_FIELD_EQ(inName,"currAnimation") ) { return currAnimation; }
		if (HX_FIELD_EQ(inName,"ignoreGravity") ) { return ignoreGravity; }
		if (HX_FIELD_EQ(inName,"fixedRotation") ) { return fixedRotation; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"anchorToScreen") ) { return anchorToScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"enableBehavior") ) { return enableBehavior_dyn(); }
		if (HX_FIELD_EQ(inName,"resetBlendMode") ) { return resetBlendMode_dyn(); }
		if (HX_FIELD_EQ(inName,"isMousePressed") ) { return isMousePressed_dyn(); }
		if (HX_FIELD_EQ(inName,"setAngularMass") ) { return setAngularMass_dyn(); }
		if (HX_FIELD_EQ(inName,"getAngularMass") ) { return getAngularMass_dyn(); }
		if (HX_FIELD_EQ(inName,"ignoresGravity") ) { return ignoresGravity_dyn(); }
		if (HX_FIELD_EQ(inName,"enableRotation") ) { return enableRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"setOriginPoint") ) { return setOriginPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"internalUpdate") ) { return internalUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"resetListeners") ) { return resetListeners_dyn(); }
		if (HX_FIELD_EQ(inName,"regionContacts") ) { return regionContacts; }
		if (HX_FIELD_EQ(inName,"lastSceneState") ) { return lastSceneState; }
		if (HX_FIELD_EQ(inName,"moveMultiplier") ) { return moveMultiplier; }
		if (HX_FIELD_EQ(inName,"transformPoint") ) { return transformPoint; }
		if (HX_FIELD_EQ(inName,"alwaysSimulate") ) { return alwaysSimulate; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"alreadyCollided") ) { return alreadyCollided_dyn(); }
		if (HX_FIELD_EQ(inName,"alwaysSimulates") ) { return alwaysSimulates_dyn(); }
		if (HX_FIELD_EQ(inName,"disableBehavior") ) { return disableBehavior_dyn(); }
		if (HX_FIELD_EQ(inName,"getCurrentImage") ) { return getCurrentImage_dyn(); }
		if (HX_FIELD_EQ(inName,"isMouseReleased") ) { return isMouseReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"disableRotation") ) { return disableRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"getPhysicsWidth") ) { return getPhysicsWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"pushInDirection") ) { return pushInDirection_dyn(); }
		if (HX_FIELD_EQ(inName,"collisionsCount") ) { return collisionsCount; }
		if (HX_FIELD_EQ(inName,"switchAnimation") ) { return switchAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"setCurrentFrame") ) { return setCurrentFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"getCurrentFrame") ) { return getCurrentFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"isOnScreenCache") ) { return isOnScreenCache; }
		if (HX_FIELD_EQ(inName,"lastScreenState") ) { return lastScreenState; }
		if (HX_FIELD_EQ(inName,"transformMatrix") ) { return transformMatrix; }
		if (HX_FIELD_EQ(inName,"killLeaveScreen") ) { return killLeaveScreen; }
		if (HX_FIELD_EQ(inName,"isTerrainRegion") ) { return isTerrainRegion; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"simpleCollisions") ) { return simpleCollisions; }
		if (HX_FIELD_EQ(inName,"moveActorTowards") ) { return moveActorTowards_dyn(); }
		if (HX_FIELD_EQ(inName,"collideTypesInto") ) { return collideTypesInto_dyn(); }
		if (HX_FIELD_EQ(inName,"registerListener") ) { return registerListener_dyn(); }
		if (HX_FIELD_EQ(inName,"setLinearDamping") ) { return setLinearDamping_dyn(); }
		if (HX_FIELD_EQ(inName,"getLinearDamping") ) { return getLinearDamping_dyn(); }
		if (HX_FIELD_EQ(inName,"setIgnoreGravity") ) { return setIgnoreGravity_dyn(); }
		if (HX_FIELD_EQ(inName,"getPhysicsHeight") ) { return getPhysicsHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"followWithOffset") ) { return followWithOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"addRegionContact") ) { return addRegionContact_dyn(); }
		if (HX_FIELD_EQ(inName,"handleCollisions") ) { return handleCollisions_dyn(); }
		if (HX_FIELD_EQ(inName,"checkScreenState") ) { return checkScreenState_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"isBehaviorEnabled") ) { return isBehaviorEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"setAngularDamping") ) { return setAngularDamping_dyn(); }
		if (HX_FIELD_EQ(inName,"getAngularDamping") ) { return getAngularDamping_dyn(); }
		if (HX_FIELD_EQ(inName,"getAngleInDegrees") ) { return getAngleInDegrees_dyn(); }
		if (HX_FIELD_EQ(inName,"handlesCollisions") ) { return handlesCollisions; }
		if (HX_FIELD_EQ(inName,"positionListeners") ) { return positionListeners; }
		if (HX_FIELD_EQ(inName,"currAnimationName") ) { return currAnimationName; }
		if (HX_FIELD_EQ(inName,"activeAngleTweens") ) { return activeAngleTweens; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"clearCollisionList") ) { return clearCollisionList_dyn(); }
		if (HX_FIELD_EQ(inName,"makeAlwaysSimulate") ) { return makeAlwaysSimulate_dyn(); }
		if (HX_FIELD_EQ(inName,"isAnchoredToScreen") ) { return isAnchoredToScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"unanchorFromScreen") ) { return unanchorFromScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAllListeners") ) { return removeAllListeners_dyn(); }
		if (HX_FIELD_EQ(inName,"enableAllBehaviors") ) { return enableAllBehaviors_dyn(); }
		if (HX_FIELD_EQ(inName,"enableActorDrawing") ) { return enableActorDrawing_dyn(); }
		if (HX_FIELD_EQ(inName,"setAngularVelocity") ) { return setAngularVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"getAngularVelocity") ) { return getAngularVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"enableSmoothMotion") ) { return enableSmoothMotion_dyn(); }
		if (HX_FIELD_EQ(inName,"getIsTerrainRegion") ) { return getIsTerrainRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"isAnimationPlaying") ) { return isAnimationPlaying_dyn(); }
		if (HX_FIELD_EQ(inName,"collisionListeners") ) { return collisionListeners; }
		if (HX_FIELD_EQ(inName,"mouseOverListeners") ) { return mouseOverListeners; }
		if (HX_FIELD_EQ(inName,"backupAnimationMap") ) { return backupAnimationMap; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"disableActorDrawing") ) { return disableActorDrawing_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRegionContact") ) { return removeRegionContact_dyn(); }
		if (HX_FIELD_EQ(inName,"updateDrawingMatrix") ) { return updateDrawingMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"whenKilledListeners") ) { return whenKilledListeners; }
		if (HX_FIELD_EQ(inName,"currAnimationAsAnim") ) { return currAnimationAsAnim; }
		if (HX_FIELD_EQ(inName,"continuousCollision") ) { return continuousCollision; }
		if (HX_FIELD_EQ(inName,"groupsToCollideWith") ) { return groupsToCollideWith; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getLastCollidedActor") ) { return getLastCollidedActor_dyn(); }
		if (HX_FIELD_EQ(inName,"onTweenAngleComplete") ) { return onTweenAngleComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"whenDrawingListeners") ) { return whenDrawingListeners; }
		if (HX_FIELD_EQ(inName,"whenUpdatedListeners") ) { return whenUpdatedListeners; }
		if (HX_FIELD_EQ(inName,"whenCreatedListeners") ) { return whenCreatedListeners; }
		if (HX_FIELD_EQ(inName,"activePositionTweens") ) { return activePositionTweens; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"makeSometimesSimulate") ) { return makeSometimesSimulate_dyn(); }
		if (HX_FIELD_EQ(inName,"changeAngularVelocity") ) { return changeAngularVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"updateTweenProperties") ) { return updateTweenProperties_dyn(); }
		if (HX_FIELD_EQ(inName,"positionListenerCount") ) { return positionListenerCount; }
		if (HX_FIELD_EQ(inName,"allListenerReferences") ) { return allListenerReferences; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"handleCollisionsSimple") ) { return handleCollisionsSimple_dyn(); }
		if (HX_FIELD_EQ(inName,"collisionListenerCount") ) { return collisionListenerCount; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onTweenPositionComplete") ) { return onTweenPositionComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"applyImpulseInDirection") ) { return applyImpulseInDirection_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"switchToDefaultAnimation") ) { return switchToDefaultAnimation_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"killSelfAfterLeavingScreen") ) { return killSelfAfterLeavingScreen_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Actor_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"md") ) { md=inValue.Cast< ::box2D::collision::shapes::B2MassData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zero") ) { zero=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::box2D::dynamics::B2Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tint") ) { tint=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colY") ) { colY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colX") ) { colX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dead") ) { dead=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::com::stencyl::models::actor::ActorType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_mask") ) { _mask=inValue.Cast< ::com::stencyl::models::collision::Mask >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shape") ) { return set_shape(inValue); }
		if (HX_FIELD_EQ(inName,"dummy") ) { dummy=inValue.Cast< ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawY") ) { drawY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawX") ) { drawX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< ::com::stencyl::graphics::fonts::Label >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastY") ) { lastY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastX") ) { lastX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"realY") ) { realY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"realX") ) { realX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"solid") ) { solid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dying") ) { dying=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isHUD") ) { isHUD=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_moveY") ) { _moveY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_moveX") ) { _moveX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HITBOX") ) { HITBOX=inValue.Cast< ::com::stencyl::models::collision::Mask >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::com::stencyl::models::actor::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rSpeed") ) { rSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ySpeed") ) { ySpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xSpeed") ) { xSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"typeID") ) { typeID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"engine") ) { engine=inValue.Cast< ::com::stencyl::Engine >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bodyDef") ) { bodyDef=inValue.Cast< ::box2D::dynamics::B2BodyDef >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxMove") ) { maxMove=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minMove") ) { minMove=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originY") ) { originY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originX") ) { originX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layerID") ) { layerID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"groupID") ) { groupID=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"manifold") ) { manifold=inValue.Cast< ::box2D::collision::B2WorldManifold >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowAdd") ) { allowAdd=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contacts") ) { contacts=inValue.Cast< ::de::polygonal::ds::IntHashTable >(); return inValue; }
		if (HX_FIELD_EQ(inName,"registry") ) { registry=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shapeMap") ) { shapeMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tweenLoc") ) { tweenLoc=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isCamera") ) { isCamera=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isRegion") ) { isRegion=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"recycled") ) { recycled=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bodyScale") ) { bodyScale=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"behaviors") ) { behaviors=inValue.Cast< ::com::stencyl::behavior::BehaviorManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"snapOnSet") ) { snapOnSet=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"firstMove") ) { firstMove=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originMap") ) { originMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastScale") ) { lastScale=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastAngle") ) { lastAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"realAngle") ) { realAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"autoScale") ) { autoScale=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawActor") ) { drawActor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"destroyed") ) { destroyed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isTerrain") ) { isTerrain=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"collisions") ) { collisions=inValue.Cast< ::de::polygonal::ds::IntHashTable >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseState") ) { mouseState=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"smoothMove") ) { smoothMove=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawMatrix") ) { drawMatrix=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currOffset") ) { currOffset=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currOrigin") ) { currOrigin=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cacheWidth") ) { cacheWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tweenAngle") ) { tweenAngle=inValue.Cast< ::com::stencyl::models::actor::AngleHolder >(); return inValue; }
		if (HX_FIELD_EQ(inName,"realScaleY") ) { realScaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"realScaleX") ) { realScaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"collidable") ) { collidable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"createTime") ) { createTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultAnim") ) { defaultAnim=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cacheHeight") ) { cacheHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resetOrigin") ) { resetOrigin=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"physicsMode") ) { physicsMode=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"GROUP_OFFSET") ) { GROUP_OFFSET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastCollided") ) { lastCollided=inValue.Cast< ::com::stencyl::models::Actor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contactCount") ) { contactCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allListeners") ) { allListeners=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"updateMatrix") ) { updateMatrix=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transformObj") ) { transformObj=inValue.Cast< ::flash::geom::Transform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animationMap") ) { animationMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"moveYDistance") ) { moveYDistance=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moveXDistance") ) { moveXDistance=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animsBackedUp") ) { animsBackedUp=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currAnimation") ) { currAnimation=inValue.Cast< ::flash::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ignoreGravity") ) { ignoreGravity=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fixedRotation") ) { fixedRotation=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"regionContacts") ) { regionContacts=inValue.Cast< ::de::polygonal::ds::IntHashTable >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastSceneState") ) { lastSceneState=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moveMultiplier") ) { moveMultiplier=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transformPoint") ) { transformPoint=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alwaysSimulate") ) { alwaysSimulate=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"collisionsCount") ) { collisionsCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isOnScreenCache") ) { isOnScreenCache=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastScreenState") ) { lastScreenState=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transformMatrix") ) { transformMatrix=inValue.Cast< ::flash::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"killLeaveScreen") ) { killLeaveScreen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isTerrainRegion") ) { isTerrainRegion=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"simpleCollisions") ) { simpleCollisions=inValue.Cast< ::de::polygonal::ds::IntHashTable >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"handlesCollisions") ) { handlesCollisions=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"positionListeners") ) { positionListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currAnimationName") ) { currAnimationName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"activeAngleTweens") ) { activeAngleTweens=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"collisionListeners") ) { collisionListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseOverListeners") ) { mouseOverListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backupAnimationMap") ) { backupAnimationMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"whenKilledListeners") ) { whenKilledListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currAnimationAsAnim") ) { currAnimationAsAnim=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"continuousCollision") ) { continuousCollision=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"groupsToCollideWith") ) { groupsToCollideWith=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"whenDrawingListeners") ) { whenDrawingListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"whenUpdatedListeners") ) { whenUpdatedListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"whenCreatedListeners") ) { whenCreatedListeners=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"activePositionTweens") ) { activePositionTweens=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"positionListenerCount") ) { positionListenerCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allListenerReferences") ) { allListenerReferences=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collisionListenerCount") ) { collisionListenerCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Actor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("allowAdd"));
	outFields->push(HX_CSTRING("simpleCollisions"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_moveY"));
	outFields->push(HX_CSTRING("_moveX"));
	outFields->push(HX_CSTRING("_y"));
	outFields->push(HX_CSTRING("_x"));
	outFields->push(HX_CSTRING("_mask"));
	outFields->push(HX_CSTRING("HITBOX"));
	outFields->push(HX_CSTRING("shape"));
	outFields->push(HX_CSTRING("collisionsCount"));
	outFields->push(HX_CSTRING("contactCount"));
	outFields->push(HX_CSTRING("zero"));
	outFields->push(HX_CSTRING("dummy"));
	outFields->push(HX_CSTRING("collisions"));
	outFields->push(HX_CSTRING("regionContacts"));
	outFields->push(HX_CSTRING("contacts"));
	outFields->push(HX_CSTRING("handlesCollisions"));
	outFields->push(HX_CSTRING("bodyScale"));
	outFields->push(HX_CSTRING("md"));
	outFields->push(HX_CSTRING("bodyDef"));
	outFields->push(HX_CSTRING("body"));
	outFields->push(HX_CSTRING("isOnScreenCache"));
	outFields->push(HX_CSTRING("lastSceneState"));
	outFields->push(HX_CSTRING("lastScreenState"));
	outFields->push(HX_CSTRING("mouseState"));
	outFields->push(HX_CSTRING("collisionListenerCount"));
	outFields->push(HX_CSTRING("positionListenerCount"));
	outFields->push(HX_CSTRING("collisionListeners"));
	outFields->push(HX_CSTRING("positionListeners"));
	outFields->push(HX_CSTRING("mouseOverListeners"));
	outFields->push(HX_CSTRING("whenKilledListeners"));
	outFields->push(HX_CSTRING("whenDrawingListeners"));
	outFields->push(HX_CSTRING("whenUpdatedListeners"));
	outFields->push(HX_CSTRING("whenCreatedListeners"));
	outFields->push(HX_CSTRING("allListenerReferences"));
	outFields->push(HX_CSTRING("allListeners"));
	outFields->push(HX_CSTRING("registry"));
	outFields->push(HX_CSTRING("behaviors"));
	outFields->push(HX_CSTRING("maxMove"));
	outFields->push(HX_CSTRING("minMove"));
	outFields->push(HX_CSTRING("moveYDistance"));
	outFields->push(HX_CSTRING("moveXDistance"));
	outFields->push(HX_CSTRING("moveMultiplier"));
	outFields->push(HX_CSTRING("drawY"));
	outFields->push(HX_CSTRING("drawX"));
	outFields->push(HX_CSTRING("snapOnSet"));
	outFields->push(HX_CSTRING("firstMove"));
	outFields->push(HX_CSTRING("smoothMove"));
	outFields->push(HX_CSTRING("label"));
	outFields->push(HX_CSTRING("drawMatrix"));
	outFields->push(HX_CSTRING("updateMatrix"));
	outFields->push(HX_CSTRING("transformMatrix"));
	outFields->push(HX_CSTRING("transformPoint"));
	outFields->push(HX_CSTRING("transformObj"));
	outFields->push(HX_CSTRING("currOffset"));
	outFields->push(HX_CSTRING("currOrigin"));
	outFields->push(HX_CSTRING("defaultAnim"));
	outFields->push(HX_CSTRING("originMap"));
	outFields->push(HX_CSTRING("shapeMap"));
	outFields->push(HX_CSTRING("sprite"));
	outFields->push(HX_CSTRING("tint"));
	outFields->push(HX_CSTRING("animsBackedUp"));
	outFields->push(HX_CSTRING("backupAnimationMap"));
	outFields->push(HX_CSTRING("animationMap"));
	outFields->push(HX_CSTRING("currAnimationName"));
	outFields->push(HX_CSTRING("currAnimation"));
	outFields->push(HX_CSTRING("currAnimationAsAnim"));
	outFields->push(HX_CSTRING("cacheHeight"));
	outFields->push(HX_CSTRING("cacheWidth"));
	outFields->push(HX_CSTRING("activePositionTweens"));
	outFields->push(HX_CSTRING("activeAngleTweens"));
	outFields->push(HX_CSTRING("tweenAngle"));
	outFields->push(HX_CSTRING("tweenLoc"));
	outFields->push(HX_CSTRING("continuousCollision"));
	outFields->push(HX_CSTRING("rSpeed"));
	outFields->push(HX_CSTRING("ySpeed"));
	outFields->push(HX_CSTRING("xSpeed"));
	outFields->push(HX_CSTRING("colY"));
	outFields->push(HX_CSTRING("colX"));
	outFields->push(HX_CSTRING("lastScale"));
	outFields->push(HX_CSTRING("lastAngle"));
	outFields->push(HX_CSTRING("lastY"));
	outFields->push(HX_CSTRING("lastX"));
	outFields->push(HX_CSTRING("realScaleY"));
	outFields->push(HX_CSTRING("realScaleX"));
	outFields->push(HX_CSTRING("realAngle"));
	outFields->push(HX_CSTRING("realY"));
	outFields->push(HX_CSTRING("realX"));
	outFields->push(HX_CSTRING("originY"));
	outFields->push(HX_CSTRING("originX"));
	outFields->push(HX_CSTRING("resetOrigin"));
	outFields->push(HX_CSTRING("solid"));
	outFields->push(HX_CSTRING("collidable"));
	outFields->push(HX_CSTRING("ignoreGravity"));
	outFields->push(HX_CSTRING("fixedRotation"));
	outFields->push(HX_CSTRING("dying"));
	outFields->push(HX_CSTRING("dead"));
	outFields->push(HX_CSTRING("autoScale"));
	outFields->push(HX_CSTRING("physicsMode"));
	outFields->push(HX_CSTRING("killLeaveScreen"));
	outFields->push(HX_CSTRING("isCamera"));
	outFields->push(HX_CSTRING("alwaysSimulate"));
	outFields->push(HX_CSTRING("isHUD"));
	outFields->push(HX_CSTRING("drawActor"));
	outFields->push(HX_CSTRING("destroyed"));
	outFields->push(HX_CSTRING("isTerrain"));
	outFields->push(HX_CSTRING("isTerrainRegion"));
	outFields->push(HX_CSTRING("isRegion"));
	outFields->push(HX_CSTRING("paused"));
	outFields->push(HX_CSTRING("recycled"));
	outFields->push(HX_CSTRING("groupsToCollideWith"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("typeID"));
	outFields->push(HX_CSTRING("layerID"));
	outFields->push(HX_CSTRING("groupID"));
	outFields->push(HX_CSTRING("ID"));
	outFields->push(HX_CSTRING("createTime"));
	outFields->push(HX_CSTRING("engine"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("GROUP_OFFSET"),
	HX_CSTRING("lastCollided"),
	HX_CSTRING("createBox"),
	HX_CSTRING("manifold"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("allowAdd"),
	HX_CSTRING("simpleCollisions"),
	HX_CSTRING("_point"),
	HX_CSTRING("_moveY"),
	HX_CSTRING("_moveX"),
	HX_CSTRING("_y"),
	HX_CSTRING("_x"),
	HX_CSTRING("_mask"),
	HX_CSTRING("HITBOX"),
	HX_CSTRING("handleCollisionsSimple"),
	HX_CSTRING("moveCollideY"),
	HX_CSTRING("moveCollideX"),
	HX_CSTRING("moveActorTowards"),
	HX_CSTRING("moveActorTo"),
	HX_CSTRING("moveActorBy"),
	HX_CSTRING("resetReal"),
	HX_CSTRING("alreadyCollided"),
	HX_CSTRING("addCollision"),
	HX_CSTRING("clearCollisionList"),
	HX_CSTRING("collideTypesInto"),
	HX_CSTRING("collideInto"),
	HX_CSTRING("collideWith"),
	HX_CSTRING("collideTypes"),
	HX_CSTRING("collide"),
	HX_CSTRING("set_shape"),
	HX_CSTRING("get_shape"),
	HX_CSTRING("setLocation"),
	HX_CSTRING("toString"),
	HX_CSTRING("killSelfAfterLeavingScreen"),
	HX_CSTRING("getLastCollidedActor"),
	HX_CSTRING("isInScene"),
	HX_CSTRING("isOnScreen"),
	HX_CSTRING("isAlive"),
	HX_CSTRING("isDying"),
	HX_CSTRING("die"),
	HX_CSTRING("alwaysSimulates"),
	HX_CSTRING("makeSometimesSimulate"),
	HX_CSTRING("makeAlwaysSimulate"),
	HX_CSTRING("isAnchoredToScreen"),
	HX_CSTRING("unanchorFromScreen"),
	HX_CSTRING("anchorToScreen"),
	HX_CSTRING("removeAllListeners"),
	HX_CSTRING("registerListener"),
	HX_CSTRING("hasActorValue"),
	HX_CSTRING("getActorValue"),
	HX_CSTRING("setActorValue"),
	HX_CSTRING("say"),
	HX_CSTRING("shout"),
	HX_CSTRING("setValue"),
	HX_CSTRING("getValue"),
	HX_CSTRING("enableAllBehaviors"),
	HX_CSTRING("isBehaviorEnabled"),
	HX_CSTRING("disableBehavior"),
	HX_CSTRING("enableBehavior"),
	HX_CSTRING("hasBehavior"),
	HX_CSTRING("addBehavior"),
	HX_CSTRING("resetBlendMode"),
	HX_CSTRING("setBlendMode"),
	HX_CSTRING("clearFilters"),
	HX_CSTRING("setFilter"),
	HX_CSTRING("drawsImage"),
	HX_CSTRING("disableActorDrawing"),
	HX_CSTRING("enableActorDrawing"),
	HX_CSTRING("getCurrentImage"),
	HX_CSTRING("drawImage"),
	HX_CSTRING("onTweenPositionComplete"),
	HX_CSTRING("onTweenAngleComplete"),
	HX_CSTRING("moveBy"),
	HX_CSTRING("spinBy"),
	HX_CSTRING("moveTo"),
	HX_CSTRING("spinTo"),
	HX_CSTRING("growTo"),
	HX_CSTRING("fadeTo"),
	HX_CSTRING("cancelTweens"),
	HX_CSTRING("isMouseReleased"),
	HX_CSTRING("isMousePressed"),
	HX_CSTRING("isMouseDown"),
	HX_CSTRING("isMouseHover"),
	HX_CSTRING("isMouseOver"),
	HX_CSTRING("setAngularDamping"),
	HX_CSTRING("setLinearDamping"),
	HX_CSTRING("setAngularMass"),
	HX_CSTRING("setMass"),
	HX_CSTRING("setBounciness"),
	HX_CSTRING("setFriction"),
	HX_CSTRING("getAngularDamping"),
	HX_CSTRING("getLinearDamping"),
	HX_CSTRING("getAngularMass"),
	HX_CSTRING("getMass"),
	HX_CSTRING("getBounciness"),
	HX_CSTRING("getFriction"),
	HX_CSTRING("ignoresGravity"),
	HX_CSTRING("setIgnoreGravity"),
	HX_CSTRING("disableRotation"),
	HX_CSTRING("enableRotation"),
	HX_CSTRING("getBody"),
	HX_CSTRING("getPhysicsHeight"),
	HX_CSTRING("getPhysicsWidth"),
	HX_CSTRING("getHeight"),
	HX_CSTRING("getWidth"),
	HX_CSTRING("applyTorque"),
	HX_CSTRING("applyImpulseInDirection"),
	HX_CSTRING("applyImpulse"),
	HX_CSTRING("pushInDirection"),
	HX_CSTRING("push"),
	HX_CSTRING("changeAngularVelocity"),
	HX_CSTRING("setAngularVelocity"),
	HX_CSTRING("getAngularVelocity"),
	HX_CSTRING("rotate"),
	HX_CSTRING("setAngle"),
	HX_CSTRING("getAngleInDegrees"),
	HX_CSTRING("getAngle"),
	HX_CSTRING("accelerate"),
	HX_CSTRING("accelerateY"),
	HX_CSTRING("accelerateX"),
	HX_CSTRING("setVelocity"),
	HX_CSTRING("setYVelocity"),
	HX_CSTRING("setXVelocity"),
	HX_CSTRING("getYVelocity"),
	HX_CSTRING("getXVelocity"),
	HX_CSTRING("setOriginPoint"),
	HX_CSTRING("followWithOffset"),
	HX_CSTRING("follow"),
	HX_CSTRING("setY"),
	HX_CSTRING("setX"),
	HX_CSTRING("getScreenY"),
	HX_CSTRING("getScreenX"),
	HX_CSTRING("getYCenter"),
	HX_CSTRING("getXCenter"),
	HX_CSTRING("getY"),
	HX_CSTRING("getX"),
	HX_CSTRING("enableSmoothMotion"),
	HX_CSTRING("setZIndex"),
	HX_CSTRING("getZIndex"),
	HX_CSTRING("moveUp"),
	HX_CSTRING("moveDown"),
	HX_CSTRING("moveToTop"),
	HX_CSTRING("moveToBottom"),
	HX_CSTRING("sendBackward"),
	HX_CSTRING("sendToBack"),
	HX_CSTRING("bringForward"),
	HX_CSTRING("bringToFront"),
	HX_CSTRING("moveToLayer"),
	HX_CSTRING("getIsTerrainRegion"),
	HX_CSTRING("getIsRegion"),
	HX_CSTRING("getGroup"),
	HX_CSTRING("unpause"),
	HX_CSTRING("pause"),
	HX_CSTRING("isPaused"),
	HX_CSTRING("isPausable"),
	HX_CSTRING("getType"),
	HX_CSTRING("getLayerOrder"),
	HX_CSTRING("getLayerID"),
	HX_CSTRING("getGroupID"),
	HX_CSTRING("getName"),
	HX_CSTRING("getID"),
	HX_CSTRING("removeRegionContact"),
	HX_CSTRING("addRegionContact"),
	HX_CSTRING("removeContact"),
	HX_CSTRING("addContact"),
	HX_CSTRING("handleCollisions"),
	HX_CSTRING("collisionsCount"),
	HX_CSTRING("contactCount"),
	HX_CSTRING("checkScreenState"),
	HX_CSTRING("scaleBody"),
	HX_CSTRING("updateTweenProperties"),
	HX_CSTRING("updateDrawingMatrix"),
	HX_CSTRING("internalUpdate"),
	HX_CSTRING("innerUpdate"),
	HX_CSTRING("update"),
	HX_CSTRING("switchAnimation"),
	HX_CSTRING("getNumFrames"),
	HX_CSTRING("setCurrentFrame"),
	HX_CSTRING("getCurrentFrame"),
	HX_CSTRING("isAnimationPlaying"),
	HX_CSTRING("switchToDefaultAnimation"),
	HX_CSTRING("setAnimation"),
	HX_CSTRING("getAnimation"),
	HX_CSTRING("addAnimation"),
	HX_CSTRING("initBody"),
	HX_CSTRING("initFromBody"),
	HX_CSTRING("initScripts"),
	HX_CSTRING("addAnim"),
	HX_CSTRING("resetListeners"),
	HX_CSTRING("destroy"),
	HX_CSTRING("zero"),
	HX_CSTRING("dummy"),
	HX_CSTRING("collisions"),
	HX_CSTRING("regionContacts"),
	HX_CSTRING("contacts"),
	HX_CSTRING("handlesCollisions"),
	HX_CSTRING("bodyScale"),
	HX_CSTRING("md"),
	HX_CSTRING("bodyDef"),
	HX_CSTRING("body"),
	HX_CSTRING("isOnScreenCache"),
	HX_CSTRING("lastSceneState"),
	HX_CSTRING("lastScreenState"),
	HX_CSTRING("mouseState"),
	HX_CSTRING("collisionListenerCount"),
	HX_CSTRING("positionListenerCount"),
	HX_CSTRING("collisionListeners"),
	HX_CSTRING("positionListeners"),
	HX_CSTRING("mouseOverListeners"),
	HX_CSTRING("whenKilledListeners"),
	HX_CSTRING("whenDrawingListeners"),
	HX_CSTRING("whenUpdatedListeners"),
	HX_CSTRING("whenCreatedListeners"),
	HX_CSTRING("allListenerReferences"),
	HX_CSTRING("allListeners"),
	HX_CSTRING("registry"),
	HX_CSTRING("behaviors"),
	HX_CSTRING("maxMove"),
	HX_CSTRING("minMove"),
	HX_CSTRING("moveYDistance"),
	HX_CSTRING("moveXDistance"),
	HX_CSTRING("moveMultiplier"),
	HX_CSTRING("drawY"),
	HX_CSTRING("drawX"),
	HX_CSTRING("snapOnSet"),
	HX_CSTRING("firstMove"),
	HX_CSTRING("smoothMove"),
	HX_CSTRING("label"),
	HX_CSTRING("drawMatrix"),
	HX_CSTRING("updateMatrix"),
	HX_CSTRING("transformMatrix"),
	HX_CSTRING("transformPoint"),
	HX_CSTRING("transformObj"),
	HX_CSTRING("currOffset"),
	HX_CSTRING("currOrigin"),
	HX_CSTRING("defaultAnim"),
	HX_CSTRING("originMap"),
	HX_CSTRING("shapeMap"),
	HX_CSTRING("sprite"),
	HX_CSTRING("tint"),
	HX_CSTRING("animsBackedUp"),
	HX_CSTRING("backupAnimationMap"),
	HX_CSTRING("animationMap"),
	HX_CSTRING("currAnimationName"),
	HX_CSTRING("currAnimation"),
	HX_CSTRING("currAnimationAsAnim"),
	HX_CSTRING("cacheHeight"),
	HX_CSTRING("cacheWidth"),
	HX_CSTRING("activePositionTweens"),
	HX_CSTRING("activeAngleTweens"),
	HX_CSTRING("tweenAngle"),
	HX_CSTRING("tweenLoc"),
	HX_CSTRING("continuousCollision"),
	HX_CSTRING("rSpeed"),
	HX_CSTRING("ySpeed"),
	HX_CSTRING("xSpeed"),
	HX_CSTRING("colY"),
	HX_CSTRING("colX"),
	HX_CSTRING("lastScale"),
	HX_CSTRING("lastAngle"),
	HX_CSTRING("lastY"),
	HX_CSTRING("lastX"),
	HX_CSTRING("realScaleY"),
	HX_CSTRING("realScaleX"),
	HX_CSTRING("realAngle"),
	HX_CSTRING("realY"),
	HX_CSTRING("realX"),
	HX_CSTRING("originY"),
	HX_CSTRING("originX"),
	HX_CSTRING("resetOrigin"),
	HX_CSTRING("solid"),
	HX_CSTRING("collidable"),
	HX_CSTRING("ignoreGravity"),
	HX_CSTRING("fixedRotation"),
	HX_CSTRING("dying"),
	HX_CSTRING("dead"),
	HX_CSTRING("autoScale"),
	HX_CSTRING("physicsMode"),
	HX_CSTRING("killLeaveScreen"),
	HX_CSTRING("isCamera"),
	HX_CSTRING("alwaysSimulate"),
	HX_CSTRING("isHUD"),
	HX_CSTRING("drawActor"),
	HX_CSTRING("destroyed"),
	HX_CSTRING("isTerrain"),
	HX_CSTRING("isTerrainRegion"),
	HX_CSTRING("isRegion"),
	HX_CSTRING("paused"),
	HX_CSTRING("recycled"),
	HX_CSTRING("groupsToCollideWith"),
	HX_CSTRING("type"),
	HX_CSTRING("typeID"),
	HX_CSTRING("layerID"),
	HX_CSTRING("groupID"),
	HX_CSTRING("ID"),
	HX_CSTRING("createTime"),
	HX_CSTRING("engine"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Actor_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Actor_obj::GROUP_OFFSET,"GROUP_OFFSET");
	HX_MARK_MEMBER_NAME(Actor_obj::lastCollided,"lastCollided");
	HX_MARK_MEMBER_NAME(Actor_obj::manifold,"manifold");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Actor_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Actor_obj::GROUP_OFFSET,"GROUP_OFFSET");
	HX_VISIT_MEMBER_NAME(Actor_obj::lastCollided,"lastCollided");
	HX_VISIT_MEMBER_NAME(Actor_obj::manifold,"manifold");
};

Class Actor_obj::__mClass;

void Actor_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.Actor"), hx::TCanCast< Actor_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Actor_obj::__boot()
{
	GROUP_OFFSET= (int)1000000;
	manifold= ::box2D::collision::B2WorldManifold_obj::__new();
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
