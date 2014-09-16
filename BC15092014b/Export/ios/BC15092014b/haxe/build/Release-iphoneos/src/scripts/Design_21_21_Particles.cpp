#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_ActorScript
#include <com/stencyl/behavior/ActorScript.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Behavior
#include <com/stencyl/behavior/Behavior.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Script
#include <com/stencyl/behavior/Script.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_TimedTask
#include <com/stencyl/behavior/TimedTask.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_ActorType
#include <com/stencyl/models/actor/ActorType.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_scripts_Design_21_21_Particles
#include <scripts/Design_21_21_Particles.h>
#endif
namespace scripts{

Void Design_21_21_Particles_obj::__construct(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine)
{
HX_STACK_PUSH("Design_21_21_Particles::new","scripts/Design_21_21_Particles.hx",157);
{
	HX_STACK_LINE(158)
	super::__construct(actor,engine);
	HX_STACK_LINE(159)
	this->nameMap->set(HX_CSTRING("Particle Type"),HX_CSTRING("_ParticleType"));
	HX_STACK_LINE(160)
	this->nameMap->set(HX_CSTRING("X Minimum Offset"),HX_CSTRING("_XMinimumOffset"));
	HX_STACK_LINE(161)
	this->_XMinimumOffset = 0.0;
	HX_STACK_LINE(162)
	this->nameMap->set(HX_CSTRING("X Maximum Offset"),HX_CSTRING("_XMaximumOffset"));
	HX_STACK_LINE(163)
	this->_XMaximumOffset = 0.0;
	HX_STACK_LINE(164)
	this->nameMap->set(HX_CSTRING("Y Minimum Offset"),HX_CSTRING("_YMinimumOffset"));
	HX_STACK_LINE(165)
	this->_YMinimumOffset = 0.0;
	HX_STACK_LINE(166)
	this->nameMap->set(HX_CSTRING("Y Maximum Offset"),HX_CSTRING("_YMaximumOffset"));
	HX_STACK_LINE(167)
	this->_YMaximumOffset = 0.0;
	HX_STACK_LINE(168)
	this->nameMap->set(HX_CSTRING("Movement Mode"),HX_CSTRING("_MovementMode"));
	HX_STACK_LINE(169)
	this->_MovementMode = HX_CSTRING("");
	HX_STACK_LINE(170)
	this->nameMap->set(HX_CSTRING("Activated"),HX_CSTRING("_Activated"));
	HX_STACK_LINE(171)
	this->_Activated = true;
	HX_STACK_LINE(172)
	this->nameMap->set(HX_CSTRING("Particle Delay"),HX_CSTRING("_ParticleDelay"));
	HX_STACK_LINE(173)
	this->_ParticleDelay = 0.0;
	HX_STACK_LINE(174)
	this->nameMap->set(HX_CSTRING("Handle Particle"),HX_CSTRING("_HandleParticle"));
	HX_STACK_LINE(175)
	this->_HandleParticle = false;
	HX_STACK_LINE(176)
	this->nameMap->set(HX_CSTRING("Particle Force"),HX_CSTRING("_ParticleForce"));
	HX_STACK_LINE(177)
	this->_ParticleForce = 0.0;
	HX_STACK_LINE(178)
	this->nameMap->set(HX_CSTRING("To Point X Offset"),HX_CSTRING("_ToPointXOffset"));
	HX_STACK_LINE(179)
	this->_ToPointXOffset = 0.0;
	HX_STACK_LINE(180)
	this->nameMap->set(HX_CSTRING("To Point Y Offset"),HX_CSTRING("_ToPointYOffset"));
	HX_STACK_LINE(181)
	this->_ToPointYOffset = 0.0;
	HX_STACK_LINE(182)
	this->nameMap->set(HX_CSTRING("Actor"),HX_CSTRING("actor"));
	HX_STACK_LINE(183)
	this->nameMap->set(HX_CSTRING("Radius"),HX_CSTRING("_Radius"));
	HX_STACK_LINE(184)
	this->_Radius = 0.0;
	HX_STACK_LINE(185)
	this->nameMap->set(HX_CSTRING("Spawn Modes"),HX_CSTRING("_SpawnModes"));
	HX_STACK_LINE(186)
	this->_SpawnModes = HX_CSTRING("");
	HX_STACK_LINE(187)
	this->nameMap->set(HX_CSTRING("Angle to Move"),HX_CSTRING("_AngletoMove"));
	HX_STACK_LINE(188)
	this->_AngletoMove = 0.0;
	HX_STACK_LINE(189)
	this->nameMap->set(HX_CSTRING("Random Angle"),HX_CSTRING("_RandomAngle"));
	HX_STACK_LINE(190)
	this->_RandomAngle = 0.0;
	HX_STACK_LINE(191)
	this->nameMap->set(HX_CSTRING("Maximum Particle Force"),HX_CSTRING("_MaximumParticleForce"));
	HX_STACK_LINE(192)
	this->_MaximumParticleForce = 0.0;
	HX_STACK_LINE(193)
	this->nameMap->set(HX_CSTRING("Random Speed?"),HX_CSTRING("_RandomSpeed"));
	HX_STACK_LINE(194)
	this->_RandomSpeed = false;
	HX_STACK_LINE(195)
	this->nameMap->set(HX_CSTRING("Particle Name"),HX_CSTRING("_ParticleName"));
	HX_STACK_LINE(196)
	this->_ParticleName = HX_CSTRING("");
	HX_STACK_LINE(197)
	this->nameMap->set(HX_CSTRING("Minimum Particle Force"),HX_CSTRING("_MinimumParticleForce"));
	HX_STACK_LINE(198)
	this->_MinimumParticleForce = 0.0;
	HX_STACK_LINE(199)
	this->nameMap->set(HX_CSTRING("Random Particles?"),HX_CSTRING("_RandomParticles"));
	HX_STACK_LINE(200)
	this->_RandomParticles = false;
	HX_STACK_LINE(201)
	this->nameMap->set(HX_CSTRING("Particle List"),HX_CSTRING("_ParticleList"));
	HX_STACK_LINE(202)
	this->_ParticleList = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(203)
	this->nameMap->set(HX_CSTRING("Particle Animation"),HX_CSTRING("_ParticleAnimation"));
	HX_STACK_LINE(204)
	this->_ParticleAnimation = HX_CSTRING("");
}
;
	return null();
}

Design_21_21_Particles_obj::~Design_21_21_Particles_obj() { }

Dynamic Design_21_21_Particles_obj::__CreateEmpty() { return  new Design_21_21_Particles_obj; }
hx::ObjectPtr< Design_21_21_Particles_obj > Design_21_21_Particles_obj::__new(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine)
{  hx::ObjectPtr< Design_21_21_Particles_obj > result = new Design_21_21_Particles_obj();
	result->__construct(dummy,actor,engine);
	return result;}

Dynamic Design_21_21_Particles_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Design_21_21_Particles_obj > result = new Design_21_21_Particles_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Design_21_21_Particles_obj::forwardMessage( ::String msg){
{
		HX_STACK_PUSH("Design_21_21_Particles::forwardMessage","scripts/Design_21_21_Particles.hx",292);
		HX_STACK_THIS(this);
		HX_STACK_ARG(msg,"msg");
	}
return null();
}


Void Design_21_21_Particles_obj::init( ){
{
		HX_STACK_PUSH("Design_21_21_Particles::init","scripts/Design_21_21_Particles.hx",209);
		HX_STACK_THIS(this);
		HX_STACK_LINE(208)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		Void run(Float elapsedTime,Dynamic list){
			HX_STACK_PUSH("*::_Function_1_1","scripts/Design_21_21_Particles.hx",212);
			HX_STACK_ARG(elapsedTime,"elapsedTime");
			HX_STACK_ARG(list,"list");
			{
				HX_STACK_LINE(212)
				if ((_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->wrapper->enabled)){
					HX_STACK_LINE(213)
					if ((_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_Activated)){
						HX_STACK_LINE(215)
						if ((!(_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_HandleParticle))){
							HX_STACK_LINE(218)
							_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_HandleParticle = true;
							HX_STACK_LINE(219)
							_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->propertyChanged(HX_CSTRING("_HandleParticle"),_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_HandleParticle);
							HX_STACK_LINE(221)
							if ((_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_RandomParticles)){
								HX_STACK_LINE(223)
								_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_ParticleName = ((HX_CSTRING("") + _g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_ParticleList->__GetItem(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->randomInt(::Math_obj::floor((int)0),::Math_obj::floor((_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_ParticleList->__Field(HX_CSTRING("length"),true) - (int)1))))))).split(HX_CSTRING(","))->__get((int)0);
								HX_STACK_LINE(224)
								_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->propertyChanged(HX_CSTRING("_ParticleName"),_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_ParticleName);
								HX_STACK_LINE(225)
								_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_ParticleType = _g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->getActorTypeByName(_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_ParticleName);
								HX_STACK_LINE(226)
								_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_ParticleAnimation = ((HX_CSTRING("") + _g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_ParticleList->__GetItem(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->randomInt(::Math_obj::floor((int)0),::Math_obj::floor((_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_ParticleList->__Field(HX_CSTRING("length"),true) - (int)1))))))).split(HX_CSTRING(","))->__get((int)1);
								HX_STACK_LINE(227)
								_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->propertyChanged(HX_CSTRING("_ParticleAnimation"),_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_ParticleAnimation);
							}
							HX_STACK_LINE(230)
							if (((_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_SpawnModes == HX_CSTRING("Random")))){
								HX_STACK_LINE(231)
								_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->createRecycledActor(_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_ParticleType,(_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->actor->getX(null()) + _g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->randomInt(::Math_obj::floor(_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_XMinimumOffset),::Math_obj::floor(_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_XMaximumOffset))),(_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->actor->getY(null()) + _g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->randomInt(::Math_obj::floor(_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_YMinimumOffset),::Math_obj::floor(_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_YMaximumOffset))),::com::stencyl::behavior::Script_obj::FRONT);
							}
							HX_STACK_LINE(235)
							if (((_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_SpawnModes == HX_CSTRING("Perimeter")))){
								struct _Function_6_1{
									inline static Float Block( Array< ::Dynamic > &_g){
										HX_STACK_PUSH("*::closure","scripts/Design_21_21_Particles.hx",237);
										{
											HX_STACK_LINE(237)
											Dynamic o = _g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->randomInt(::Math_obj::floor((int)0),::Math_obj::floor((int)360));		HX_STACK_VAR(o,"o");
											struct _Function_7_1{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_21_21_Particles.hx",237);
													{
														HX_STACK_LINE(237)
														return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
													}
													return null();
												}
											};
											struct _Function_7_2{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_21_21_Particles.hx",237);
													{
														HX_STACK_LINE(237)
														::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
														HX_STACK_LINE(237)
														return (int)0;
													}
													return null();
												}
											};
											HX_STACK_LINE(237)
											return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_7_2::Block(o)) )) )) )) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(237)
								_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_RandomAngle = _Function_6_1::Block(_g);
								HX_STACK_LINE(238)
								_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->propertyChanged(HX_CSTRING("_RandomAngle"),_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_RandomAngle);
								HX_STACK_LINE(239)
								_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->createRecycledActor(_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_ParticleType,(_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->actor->getXCenter() + (_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_Radius * ::Math_obj::cos((((Float(3.1415926535897) / Float((int)180)) * _g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_RandomAngle) * ((Float(3.1415926535897) / Float((int)180))))))),(_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->actor->getYCenter() + (_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_Radius * ::Math_obj::sin((((Float(3.1415926535897) / Float((int)180)) * _g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_RandomAngle) * ((Float(3.1415926535897) / Float((int)180))))))),::com::stencyl::behavior::Script_obj::FRONT);
								HX_STACK_LINE(240)
								_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->getLastCreatedActor()->setX((_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->getLastCreatedActor()->getX(null()) - (Float(_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->getLastCreatedActor()->getWidth()) / Float((int)2))),null(),null());
								HX_STACK_LINE(241)
								_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->getLastCreatedActor()->setY((_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->getLastCreatedActor()->getY(null()) - (Float(_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->getLastCreatedActor()->getHeight()) / Float((int)2))),null(),null());
							}
							HX_STACK_LINE(244)
							_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->getLastCreatedActor()->setAnimation((HX_CSTRING("") + ((HX_CSTRING("") + _g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_ParticleAnimation))));
							HX_STACK_LINE(246)
							if ((_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_RandomSpeed)){
								struct _Function_6_1{
									inline static Float Block( Array< ::Dynamic > &_g){
										HX_STACK_PUSH("*::closure","scripts/Design_21_21_Particles.hx",248);
										{
											HX_STACK_LINE(248)
											Dynamic o = _g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->randomInt(::Math_obj::floor(_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_MinimumParticleForce),::Math_obj::floor(_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_MaximumParticleForce));		HX_STACK_VAR(o,"o");
											struct _Function_7_1{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_21_21_Particles.hx",248);
													{
														HX_STACK_LINE(248)
														return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
													}
													return null();
												}
											};
											struct _Function_7_2{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_21_21_Particles.hx",248);
													{
														HX_STACK_LINE(248)
														::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
														HX_STACK_LINE(248)
														return (int)0;
													}
													return null();
												}
											};
											HX_STACK_LINE(248)
											return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_7_2::Block(o)) )) )) )) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(248)
								_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_ParticleForce = _Function_6_1::Block(_g);
								HX_STACK_LINE(249)
								_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->propertyChanged(HX_CSTRING("_ParticleForce"),_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_ParticleForce);
							}
							else{
								struct _Function_6_1{
									inline static Float Block( Array< ::Dynamic > &_g){
										HX_STACK_PUSH("*::closure","scripts/Design_21_21_Particles.hx",254);
										{
											HX_STACK_LINE(254)
											Dynamic o = _g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_MaximumParticleForce;		HX_STACK_VAR(o,"o");
											struct _Function_7_1{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_21_21_Particles.hx",254);
													{
														HX_STACK_LINE(254)
														return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
													}
													return null();
												}
											};
											struct _Function_7_2{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_21_21_Particles.hx",254);
													{
														HX_STACK_LINE(254)
														::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
														HX_STACK_LINE(254)
														return (int)0;
													}
													return null();
												}
											};
											HX_STACK_LINE(254)
											return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_7_2::Block(o)) )) )) )) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(254)
								_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_ParticleForce = _Function_6_1::Block(_g);
								HX_STACK_LINE(255)
								_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->propertyChanged(HX_CSTRING("_ParticleForce"),_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_ParticleForce);
							}
							HX_STACK_LINE(258)
							if (((_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_MovementMode == HX_CSTRING("To Angle")))){
								HX_STACK_LINE(259)
								_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->getLastCreatedActor()->applyImpulseInDirection(_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_AngletoMove,_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_ParticleForce);
							}
							HX_STACK_LINE(263)
							if (((_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_MovementMode == HX_CSTRING("Expand")))){
								HX_STACK_LINE(264)
								_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->getLastCreatedActor()->applyImpulseInDirection(((Float((int)180) / Float(3.1415926535897)) * ::Math_obj::atan2((_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->getLastCreatedActor()->getYCenter() - _g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->actor->getYCenter()),(_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->getLastCreatedActor()->getXCenter() - _g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->actor->getXCenter()))),_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_ParticleForce);
							}
							HX_STACK_LINE(268)
							if (((_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_MovementMode == HX_CSTRING("To Center")))){
								HX_STACK_LINE(269)
								_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->getLastCreatedActor()->applyImpulseInDirection(((Float((int)180) / Float(3.1415926535897)) * ::Math_obj::atan2((_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->actor->getYCenter() - _g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->getLastCreatedActor()->getYCenter()),(_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->actor->getXCenter() - _g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->getLastCreatedActor()->getXCenter()))),_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_ParticleForce);
							}
							HX_STACK_LINE(273)
							if (((_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_MovementMode == HX_CSTRING("To Point")))){
								HX_STACK_LINE(274)
								_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->getLastCreatedActor()->applyImpulseInDirection(((Float((int)180) / Float(3.1415926535897)) * ::Math_obj::atan2(((_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->actor->getY(null()) + _g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_ToPointYOffset) - _g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->getLastCreatedActor()->getYCenter()),((_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->actor->getX(null()) + _g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_ToPointXOffset) - _g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->getLastCreatedActor()->getXCenter()))),_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_ParticleForce);
							}

							HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_5_1,Array< ::Dynamic >,_g)
							Void run(::com::stencyl::behavior::TimedTask timeTask){
								HX_STACK_PUSH("*::_Function_5_1","scripts/Design_21_21_Particles.hx",278);
								HX_STACK_ARG(timeTask,"timeTask");
								{
									HX_STACK_LINE(279)
									_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_HandleParticle = false;
									HX_STACK_LINE(280)
									_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->propertyChanged(HX_CSTRING("_HandleParticle"),_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_HandleParticle);
								}
								return null();
							}
							HX_END_LOCAL_FUNC1((void))

							HX_STACK_LINE(278)
							_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->runLater(((int)1000 * _g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->_ParticleDelay), Dynamic(new _Function_5_1(_g)),_g->__get((int)0).StaticCast< ::scripts::Design_21_21_Particles >()->actor);
						}
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(212)
		this->addWhenUpdatedListener(null(), Dynamic(new _Function_1_1(_g)));
	}
return null();
}


Void Design_21_21_Particles_obj::_customBlock_EmitParticles( ::com::stencyl::models::actor::ActorType __Particle,Float __MinX,Float __MaxX,Float __MinY,Float __MaxY,Float __Angle,Float __Delay,Float __Force){
{
		HX_STACK_PUSH("Design_21_21_Particles::_customBlock_EmitParticles","scripts/Design_21_21_Particles.hx",131);
		HX_STACK_THIS(this);
		HX_STACK_ARG(__Particle,"__Particle");
		HX_STACK_ARG(__MinX,"__MinX");
		HX_STACK_ARG(__MaxX,"__MaxX");
		HX_STACK_ARG(__MinY,"__MinY");
		HX_STACK_ARG(__MaxY,"__MaxY");
		HX_STACK_ARG(__Angle,"__Angle");
		HX_STACK_ARG(__Delay,"__Delay");
		HX_STACK_ARG(__Force,"__Force");
		HX_STACK_LINE(132)
		::com::stencyl::models::Actor __Self = this->actor;		HX_STACK_VAR(__Self,"__Self");
		HX_STACK_LINE(133)
		__Self->setValue(HX_CSTRING("Particles"),HX_CSTRING("_ParticleType"),__Particle);
		struct _Function_1_1{
			inline static int Block( Float &__MinX){
				HX_STACK_PUSH("*::closure","scripts/Design_21_21_Particles.hx",134);
				{
					HX_STACK_LINE(134)
					return (  ((hx::TCast< Bool >::cast(__MinX))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static int Block( Float &__MinX){
				HX_STACK_PUSH("*::closure","scripts/Design_21_21_Particles.hx",134);
				{
					HX_STACK_LINE(134)
					::haxe::Log_obj::trace((::Std_obj::string(__MinX) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(134)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(134)
		this->_XMinimumOffset = (  (((__MinX == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(__MinX,hx::ClassOf< ::Float >()))) ? Float(__MinX) : Float((  ((::Std_obj::is(__MinX,hx::ClassOf< ::Int >()))) ? Float(__MinX) : Float((  ((::Std_obj::is(__MinX,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_1::Block(__MinX)) : Float((  ((::Std_obj::is(__MinX,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(__MinX)) : Float(_Function_1_2::Block(__MinX)) )) )) )) )) );
		HX_STACK_LINE(135)
		this->propertyChanged(HX_CSTRING("_XMinimumOffset"),this->_XMinimumOffset);
		struct _Function_1_3{
			inline static int Block( Float &__MaxX){
				HX_STACK_PUSH("*::closure","scripts/Design_21_21_Particles.hx",136);
				{
					HX_STACK_LINE(136)
					return (  ((hx::TCast< Bool >::cast(__MaxX))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_4{
			inline static int Block( Float &__MaxX){
				HX_STACK_PUSH("*::closure","scripts/Design_21_21_Particles.hx",136);
				{
					HX_STACK_LINE(136)
					::haxe::Log_obj::trace((::Std_obj::string(__MaxX) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(136)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(136)
		this->_XMaximumOffset = (  (((__MaxX == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(__MaxX,hx::ClassOf< ::Float >()))) ? Float(__MaxX) : Float((  ((::Std_obj::is(__MaxX,hx::ClassOf< ::Int >()))) ? Float(__MaxX) : Float((  ((::Std_obj::is(__MaxX,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_3::Block(__MaxX)) : Float((  ((::Std_obj::is(__MaxX,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(__MaxX)) : Float(_Function_1_4::Block(__MaxX)) )) )) )) )) );
		HX_STACK_LINE(137)
		this->propertyChanged(HX_CSTRING("_XMaximumOffset"),this->_XMaximumOffset);
		struct _Function_1_5{
			inline static int Block( Float &__MinY){
				HX_STACK_PUSH("*::closure","scripts/Design_21_21_Particles.hx",138);
				{
					HX_STACK_LINE(138)
					return (  ((hx::TCast< Bool >::cast(__MinY))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_6{
			inline static int Block( Float &__MinY){
				HX_STACK_PUSH("*::closure","scripts/Design_21_21_Particles.hx",138);
				{
					HX_STACK_LINE(138)
					::haxe::Log_obj::trace((::Std_obj::string(__MinY) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(138)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(138)
		this->_YMinimumOffset = (  (((__MinY == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(__MinY,hx::ClassOf< ::Float >()))) ? Float(__MinY) : Float((  ((::Std_obj::is(__MinY,hx::ClassOf< ::Int >()))) ? Float(__MinY) : Float((  ((::Std_obj::is(__MinY,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_5::Block(__MinY)) : Float((  ((::Std_obj::is(__MinY,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(__MinY)) : Float(_Function_1_6::Block(__MinY)) )) )) )) )) );
		HX_STACK_LINE(139)
		this->propertyChanged(HX_CSTRING("_YMinimumOffset"),this->_YMinimumOffset);
		struct _Function_1_7{
			inline static int Block( Float &__MaxY){
				HX_STACK_PUSH("*::closure","scripts/Design_21_21_Particles.hx",140);
				{
					HX_STACK_LINE(140)
					return (  ((hx::TCast< Bool >::cast(__MaxY))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_8{
			inline static int Block( Float &__MaxY){
				HX_STACK_PUSH("*::closure","scripts/Design_21_21_Particles.hx",140);
				{
					HX_STACK_LINE(140)
					::haxe::Log_obj::trace((::Std_obj::string(__MaxY) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(140)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(140)
		this->_YMaximumOffset = (  (((__MaxY == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(__MaxY,hx::ClassOf< ::Float >()))) ? Float(__MaxY) : Float((  ((::Std_obj::is(__MaxY,hx::ClassOf< ::Int >()))) ? Float(__MaxY) : Float((  ((::Std_obj::is(__MaxY,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_7::Block(__MaxY)) : Float((  ((::Std_obj::is(__MaxY,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(__MaxY)) : Float(_Function_1_8::Block(__MaxY)) )) )) )) )) );
		HX_STACK_LINE(141)
		this->propertyChanged(HX_CSTRING("_YMaximumOffset"),this->_YMaximumOffset);
		HX_STACK_LINE(142)
		this->_SpawnModes = HX_CSTRING("Random");
		HX_STACK_LINE(143)
		this->propertyChanged(HX_CSTRING("_SpawnModes"),this->_SpawnModes);
		HX_STACK_LINE(144)
		this->_MovementMode = HX_CSTRING("To Angle");
		HX_STACK_LINE(145)
		this->propertyChanged(HX_CSTRING("_MovementMode"),this->_MovementMode);
		struct _Function_1_9{
			inline static int Block( Float &__Angle){
				HX_STACK_PUSH("*::closure","scripts/Design_21_21_Particles.hx",146);
				{
					HX_STACK_LINE(146)
					return (  ((hx::TCast< Bool >::cast(__Angle))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_10{
			inline static int Block( Float &__Angle){
				HX_STACK_PUSH("*::closure","scripts/Design_21_21_Particles.hx",146);
				{
					HX_STACK_LINE(146)
					::haxe::Log_obj::trace((::Std_obj::string(__Angle) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(146)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(146)
		this->_AngletoMove = (  (((__Angle == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(__Angle,hx::ClassOf< ::Float >()))) ? Float(__Angle) : Float((  ((::Std_obj::is(__Angle,hx::ClassOf< ::Int >()))) ? Float(__Angle) : Float((  ((::Std_obj::is(__Angle,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_9::Block(__Angle)) : Float((  ((::Std_obj::is(__Angle,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(__Angle)) : Float(_Function_1_10::Block(__Angle)) )) )) )) )) );
		HX_STACK_LINE(147)
		this->propertyChanged(HX_CSTRING("_AngletoMove"),this->_AngletoMove);
		struct _Function_1_11{
			inline static Float Block( ::scripts::Design_21_21_Particles_obj *__this){
				HX_STACK_PUSH("*::closure","scripts/Design_21_21_Particles.hx",148);
				{
					HX_STACK_LINE(148)
					Dynamic o = (Float((int)60) / Float(__this->getGameAttribute(HX_CSTRING("GameTempo"))));		HX_STACK_VAR(o,"o");
					struct _Function_2_1{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_21_21_Particles.hx",148);
							{
								HX_STACK_LINE(148)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_21_21_Particles.hx",148);
							{
								HX_STACK_LINE(148)
								::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(148)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(148)
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_2::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(148)
		this->_ParticleDelay = _Function_1_11::Block(this);
		HX_STACK_LINE(149)
		this->propertyChanged(HX_CSTRING("_ParticleDelay"),this->_ParticleDelay);
		struct _Function_1_12{
			inline static int Block( Float &__Force){
				HX_STACK_PUSH("*::closure","scripts/Design_21_21_Particles.hx",150);
				{
					HX_STACK_LINE(150)
					return (  ((hx::TCast< Bool >::cast(__Force))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_13{
			inline static int Block( Float &__Force){
				HX_STACK_PUSH("*::closure","scripts/Design_21_21_Particles.hx",150);
				{
					HX_STACK_LINE(150)
					::haxe::Log_obj::trace((::Std_obj::string(__Force) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(150)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(150)
		this->_ParticleForce = (  (((__Force == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(__Force,hx::ClassOf< ::Float >()))) ? Float(__Force) : Float((  ((::Std_obj::is(__Force,hx::ClassOf< ::Int >()))) ? Float(__Force) : Float((  ((::Std_obj::is(__Force,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_12::Block(__Force)) : Float((  ((::Std_obj::is(__Force,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(__Force)) : Float(_Function_1_13::Block(__Force)) )) )) )) )) );
		HX_STACK_LINE(151)
		this->propertyChanged(HX_CSTRING("_ParticleForce"),this->_ParticleForce);
		HX_STACK_LINE(152)
		this->_customEvent_StartEmitting();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Design_21_21_Particles_obj,_customBlock_EmitParticles,(void))

Void Design_21_21_Particles_obj::_customEvent_StartEmitting( ){
{
		HX_STACK_PUSH("Design_21_21_Particles::_customEvent_StartEmitting","scripts/Design_21_21_Particles.hx",120);
		HX_STACK_THIS(this);
		HX_STACK_LINE(121)
		this->_Activated = true;
		HX_STACK_LINE(122)
		this->propertyChanged(HX_CSTRING("_Activated"),this->_Activated);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_21_21_Particles_obj,_customEvent_StartEmitting,(void))

Void Design_21_21_Particles_obj::_customEvent_StopEmitting( ){
{
		HX_STACK_PUSH("Design_21_21_Particles::_customEvent_StopEmitting","scripts/Design_21_21_Particles.hx",114);
		HX_STACK_THIS(this);
		HX_STACK_LINE(115)
		this->_Activated = false;
		HX_STACK_LINE(116)
		this->propertyChanged(HX_CSTRING("_Activated"),this->_Activated);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_21_21_Particles_obj,_customEvent_StopEmitting,(void))


Design_21_21_Particles_obj::Design_21_21_Particles_obj()
{
}

void Design_21_21_Particles_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Design_21_21_Particles);
	HX_MARK_MEMBER_NAME(_ParticleAnimation,"_ParticleAnimation");
	HX_MARK_MEMBER_NAME(_ParticleList,"_ParticleList");
	HX_MARK_MEMBER_NAME(_RandomParticles,"_RandomParticles");
	HX_MARK_MEMBER_NAME(_MinimumParticleForce,"_MinimumParticleForce");
	HX_MARK_MEMBER_NAME(_ParticleName,"_ParticleName");
	HX_MARK_MEMBER_NAME(_RandomSpeed,"_RandomSpeed");
	HX_MARK_MEMBER_NAME(_MaximumParticleForce,"_MaximumParticleForce");
	HX_MARK_MEMBER_NAME(_RandomAngle,"_RandomAngle");
	HX_MARK_MEMBER_NAME(_AngletoMove,"_AngletoMove");
	HX_MARK_MEMBER_NAME(_SpawnModes,"_SpawnModes");
	HX_MARK_MEMBER_NAME(_Radius,"_Radius");
	HX_MARK_MEMBER_NAME(_ToPointYOffset,"_ToPointYOffset");
	HX_MARK_MEMBER_NAME(_ToPointXOffset,"_ToPointXOffset");
	HX_MARK_MEMBER_NAME(_ParticleForce,"_ParticleForce");
	HX_MARK_MEMBER_NAME(_HandleParticle,"_HandleParticle");
	HX_MARK_MEMBER_NAME(_ParticleDelay,"_ParticleDelay");
	HX_MARK_MEMBER_NAME(_Activated,"_Activated");
	HX_MARK_MEMBER_NAME(_MovementMode,"_MovementMode");
	HX_MARK_MEMBER_NAME(_YMaximumOffset,"_YMaximumOffset");
	HX_MARK_MEMBER_NAME(_YMinimumOffset,"_YMinimumOffset");
	HX_MARK_MEMBER_NAME(_XMaximumOffset,"_XMaximumOffset");
	HX_MARK_MEMBER_NAME(_XMinimumOffset,"_XMinimumOffset");
	HX_MARK_MEMBER_NAME(_ParticleType,"_ParticleType");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Design_21_21_Particles_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ParticleAnimation,"_ParticleAnimation");
	HX_VISIT_MEMBER_NAME(_ParticleList,"_ParticleList");
	HX_VISIT_MEMBER_NAME(_RandomParticles,"_RandomParticles");
	HX_VISIT_MEMBER_NAME(_MinimumParticleForce,"_MinimumParticleForce");
	HX_VISIT_MEMBER_NAME(_ParticleName,"_ParticleName");
	HX_VISIT_MEMBER_NAME(_RandomSpeed,"_RandomSpeed");
	HX_VISIT_MEMBER_NAME(_MaximumParticleForce,"_MaximumParticleForce");
	HX_VISIT_MEMBER_NAME(_RandomAngle,"_RandomAngle");
	HX_VISIT_MEMBER_NAME(_AngletoMove,"_AngletoMove");
	HX_VISIT_MEMBER_NAME(_SpawnModes,"_SpawnModes");
	HX_VISIT_MEMBER_NAME(_Radius,"_Radius");
	HX_VISIT_MEMBER_NAME(_ToPointYOffset,"_ToPointYOffset");
	HX_VISIT_MEMBER_NAME(_ToPointXOffset,"_ToPointXOffset");
	HX_VISIT_MEMBER_NAME(_ParticleForce,"_ParticleForce");
	HX_VISIT_MEMBER_NAME(_HandleParticle,"_HandleParticle");
	HX_VISIT_MEMBER_NAME(_ParticleDelay,"_ParticleDelay");
	HX_VISIT_MEMBER_NAME(_Activated,"_Activated");
	HX_VISIT_MEMBER_NAME(_MovementMode,"_MovementMode");
	HX_VISIT_MEMBER_NAME(_YMaximumOffset,"_YMaximumOffset");
	HX_VISIT_MEMBER_NAME(_YMinimumOffset,"_YMinimumOffset");
	HX_VISIT_MEMBER_NAME(_XMaximumOffset,"_XMaximumOffset");
	HX_VISIT_MEMBER_NAME(_XMinimumOffset,"_XMinimumOffset");
	HX_VISIT_MEMBER_NAME(_ParticleType,"_ParticleType");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Design_21_21_Particles_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_Radius") ) { return _Radius; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_Activated") ) { return _Activated; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_SpawnModes") ) { return _SpawnModes; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_RandomSpeed") ) { return _RandomSpeed; }
		if (HX_FIELD_EQ(inName,"_RandomAngle") ) { return _RandomAngle; }
		if (HX_FIELD_EQ(inName,"_AngletoMove") ) { return _AngletoMove; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_ParticleList") ) { return _ParticleList; }
		if (HX_FIELD_EQ(inName,"_ParticleName") ) { return _ParticleName; }
		if (HX_FIELD_EQ(inName,"_MovementMode") ) { return _MovementMode; }
		if (HX_FIELD_EQ(inName,"_ParticleType") ) { return _ParticleType; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"forwardMessage") ) { return forwardMessage_dyn(); }
		if (HX_FIELD_EQ(inName,"_ParticleForce") ) { return _ParticleForce; }
		if (HX_FIELD_EQ(inName,"_ParticleDelay") ) { return _ParticleDelay; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_ToPointYOffset") ) { return _ToPointYOffset; }
		if (HX_FIELD_EQ(inName,"_ToPointXOffset") ) { return _ToPointXOffset; }
		if (HX_FIELD_EQ(inName,"_HandleParticle") ) { return _HandleParticle; }
		if (HX_FIELD_EQ(inName,"_YMaximumOffset") ) { return _YMaximumOffset; }
		if (HX_FIELD_EQ(inName,"_YMinimumOffset") ) { return _YMinimumOffset; }
		if (HX_FIELD_EQ(inName,"_XMaximumOffset") ) { return _XMaximumOffset; }
		if (HX_FIELD_EQ(inName,"_XMinimumOffset") ) { return _XMinimumOffset; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_RandomParticles") ) { return _RandomParticles; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_ParticleAnimation") ) { return _ParticleAnimation; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_MinimumParticleForce") ) { return _MinimumParticleForce; }
		if (HX_FIELD_EQ(inName,"_MaximumParticleForce") ) { return _MaximumParticleForce; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_customEvent_StopEmitting") ) { return _customEvent_StopEmitting_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_customBlock_EmitParticles") ) { return _customBlock_EmitParticles_dyn(); }
		if (HX_FIELD_EQ(inName,"_customEvent_StartEmitting") ) { return _customEvent_StartEmitting_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Design_21_21_Particles_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_Radius") ) { _Radius=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_Activated") ) { _Activated=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_SpawnModes") ) { _SpawnModes=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_RandomSpeed") ) { _RandomSpeed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_RandomAngle") ) { _RandomAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_AngletoMove") ) { _AngletoMove=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_ParticleList") ) { _ParticleList=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ParticleName") ) { _ParticleName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_MovementMode") ) { _MovementMode=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ParticleType") ) { _ParticleType=inValue.Cast< ::com::stencyl::models::actor::ActorType >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_ParticleForce") ) { _ParticleForce=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ParticleDelay") ) { _ParticleDelay=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_ToPointYOffset") ) { _ToPointYOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ToPointXOffset") ) { _ToPointXOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_HandleParticle") ) { _HandleParticle=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_YMaximumOffset") ) { _YMaximumOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_YMinimumOffset") ) { _YMinimumOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_XMaximumOffset") ) { _XMaximumOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_XMinimumOffset") ) { _XMinimumOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_RandomParticles") ) { _RandomParticles=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_ParticleAnimation") ) { _ParticleAnimation=inValue.Cast< ::String >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_MinimumParticleForce") ) { _MinimumParticleForce=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_MaximumParticleForce") ) { _MaximumParticleForce=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Design_21_21_Particles_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_ParticleAnimation"));
	outFields->push(HX_CSTRING("_ParticleList"));
	outFields->push(HX_CSTRING("_RandomParticles"));
	outFields->push(HX_CSTRING("_MinimumParticleForce"));
	outFields->push(HX_CSTRING("_ParticleName"));
	outFields->push(HX_CSTRING("_RandomSpeed"));
	outFields->push(HX_CSTRING("_MaximumParticleForce"));
	outFields->push(HX_CSTRING("_RandomAngle"));
	outFields->push(HX_CSTRING("_AngletoMove"));
	outFields->push(HX_CSTRING("_SpawnModes"));
	outFields->push(HX_CSTRING("_Radius"));
	outFields->push(HX_CSTRING("_ToPointYOffset"));
	outFields->push(HX_CSTRING("_ToPointXOffset"));
	outFields->push(HX_CSTRING("_ParticleForce"));
	outFields->push(HX_CSTRING("_HandleParticle"));
	outFields->push(HX_CSTRING("_ParticleDelay"));
	outFields->push(HX_CSTRING("_Activated"));
	outFields->push(HX_CSTRING("_MovementMode"));
	outFields->push(HX_CSTRING("_YMaximumOffset"));
	outFields->push(HX_CSTRING("_YMinimumOffset"));
	outFields->push(HX_CSTRING("_XMaximumOffset"));
	outFields->push(HX_CSTRING("_XMinimumOffset"));
	outFields->push(HX_CSTRING("_ParticleType"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("forwardMessage"),
	HX_CSTRING("init"),
	HX_CSTRING("_customBlock_EmitParticles"),
	HX_CSTRING("_customEvent_StartEmitting"),
	HX_CSTRING("_customEvent_StopEmitting"),
	HX_CSTRING("_ParticleAnimation"),
	HX_CSTRING("_ParticleList"),
	HX_CSTRING("_RandomParticles"),
	HX_CSTRING("_MinimumParticleForce"),
	HX_CSTRING("_ParticleName"),
	HX_CSTRING("_RandomSpeed"),
	HX_CSTRING("_MaximumParticleForce"),
	HX_CSTRING("_RandomAngle"),
	HX_CSTRING("_AngletoMove"),
	HX_CSTRING("_SpawnModes"),
	HX_CSTRING("_Radius"),
	HX_CSTRING("_ToPointYOffset"),
	HX_CSTRING("_ToPointXOffset"),
	HX_CSTRING("_ParticleForce"),
	HX_CSTRING("_HandleParticle"),
	HX_CSTRING("_ParticleDelay"),
	HX_CSTRING("_Activated"),
	HX_CSTRING("_MovementMode"),
	HX_CSTRING("_YMaximumOffset"),
	HX_CSTRING("_YMinimumOffset"),
	HX_CSTRING("_XMaximumOffset"),
	HX_CSTRING("_XMinimumOffset"),
	HX_CSTRING("_ParticleType"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Design_21_21_Particles_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Design_21_21_Particles_obj::__mClass,"__mClass");
};

Class Design_21_21_Particles_obj::__mClass;

void Design_21_21_Particles_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scripts.Design_21_21_Particles"), hx::TCanCast< Design_21_21_Particles_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Design_21_21_Particles_obj::__boot()
{
}

} // end namespace scripts
