#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_List2D
#include <List2D.h>
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
#ifndef INCLUDED_com_stencyl_models_Sound
#include <com/stencyl/models/Sound.h>
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
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
#endif
#ifndef INCLUDED_scripts_Design_20_20
#include <scripts/Design_20_20.h>
#endif
namespace scripts{

Void Design_20_20_obj::__construct(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine)
{
HX_STACK_PUSH("Design_20_20::new","scripts/Design_20_20.hx",173);
{
	HX_STACK_LINE(174)
	super::__construct(actor,engine);
	HX_STACK_LINE(175)
	this->nameMap->set(HX_CSTRING("BeatPos"),HX_CSTRING("_BeatPos"));
	HX_STACK_LINE(176)
	this->_BeatPos = 0.0;
	HX_STACK_LINE(177)
	this->nameMap->set(HX_CSTRING("Metronome"),HX_CSTRING("_Metronome"));
	HX_STACK_LINE(178)
	this->nameMap->set(HX_CSTRING("Colliding?"),HX_CSTRING("_Colliding"));
	HX_STACK_LINE(179)
	this->_Colliding = false;
	HX_STACK_LINE(180)
	this->nameMap->set(HX_CSTRING("TypeNumber"),HX_CSTRING("_TypeNumber"));
	HX_STACK_LINE(181)
	this->_TypeNumber = 0.0;
	HX_STACK_LINE(182)
	this->nameMap->set(HX_CSTRING("1"),HX_CSTRING("_1"));
	HX_STACK_LINE(183)
	this->nameMap->set(HX_CSTRING("2"),HX_CSTRING("_2"));
	HX_STACK_LINE(184)
	this->nameMap->set(HX_CSTRING("3"),HX_CSTRING("_3"));
	HX_STACK_LINE(185)
	this->nameMap->set(HX_CSTRING("4"),HX_CSTRING("_4"));
	HX_STACK_LINE(186)
	this->nameMap->set(HX_CSTRING("5"),HX_CSTRING("_5"));
	HX_STACK_LINE(187)
	this->nameMap->set(HX_CSTRING("6"),HX_CSTRING("_6"));
	HX_STACK_LINE(188)
	this->nameMap->set(HX_CSTRING("Xincrementer"),HX_CSTRING("_Xincrementer"));
	HX_STACK_LINE(189)
	this->_Xincrementer = 0.0;
	HX_STACK_LINE(190)
	this->nameMap->set(HX_CSTRING("Searcher"),HX_CSTRING("_Searcher"));
	HX_STACK_LINE(191)
	this->_Searcher = 0.0;
	HX_STACK_LINE(192)
	this->nameMap->set(HX_CSTRING("BeaterCombos"),HX_CSTRING("_BeaterCombos"));
	HX_STACK_LINE(193)
	this->_BeaterCombos = 0.0;
	HX_STACK_LINE(194)
	this->nameMap->set(HX_CSTRING("OpacitiyMod"),HX_CSTRING("_OpacitiyMod"));
	HX_STACK_LINE(195)
	this->_OpacitiyMod = 0.0;
	HX_STACK_LINE(196)
	this->nameMap->set(HX_CSTRING("Actor"),HX_CSTRING("actor"));
	HX_STACK_LINE(197)
	this->nameMap->set(HX_CSTRING("GemSound"),HX_CSTRING("_GemSound"));
	HX_STACK_LINE(198)
	this->nameMap->set(HX_CSTRING("Bouncing?"),HX_CSTRING("_Bouncing"));
	HX_STACK_LINE(199)
	this->_Bouncing = false;
	HX_STACK_LINE(200)
	this->nameMap->set(HX_CSTRING("GemID"),HX_CSTRING("_GemID"));
	HX_STACK_LINE(201)
	this->_GemID = 0.0;
	HX_STACK_LINE(202)
	this->nameMap->set(HX_CSTRING("StartX"),HX_CSTRING("_StartX"));
	HX_STACK_LINE(203)
	this->_StartX = 0.0;
	HX_STACK_LINE(204)
	this->nameMap->set(HX_CSTRING("Direction"),HX_CSTRING("_Direction"));
	HX_STACK_LINE(205)
	this->_Direction = 0.0;
	HX_STACK_LINE(206)
	this->nameMap->set(HX_CSTRING("Position"),HX_CSTRING("_Position"));
	HX_STACK_LINE(207)
	this->_Position = 0.0;
	HX_STACK_LINE(208)
	this->nameMap->set(HX_CSTRING("StartY"),HX_CSTRING("_StartY"));
	HX_STACK_LINE(209)
	this->_StartY = 0.0;
	HX_STACK_LINE(210)
	this->nameMap->set(HX_CSTRING("ListX"),HX_CSTRING("_ListX"));
	HX_STACK_LINE(211)
	this->_ListX = 0.0;
	HX_STACK_LINE(212)
	this->nameMap->set(HX_CSTRING("Visible"),HX_CSTRING("_Visible"));
	HX_STACK_LINE(213)
	this->_Visible = false;
	HX_STACK_LINE(214)
	this->nameMap->set(HX_CSTRING("ActorNumber"),HX_CSTRING("_ActorNumber"));
	HX_STACK_LINE(215)
	this->_ActorNumber = 0.0;
	HX_STACK_LINE(216)
	this->nameMap->set(HX_CSTRING("ListY"),HX_CSTRING("_ListY"));
	HX_STACK_LINE(217)
	this->_ListY = 0.0;
	HX_STACK_LINE(218)
	this->nameMap->set(HX_CSTRING("SoundManager"),HX_CSTRING("_SoundManager"));
	HX_STACK_LINE(219)
	this->_SoundManager = 0.0;
}
;
	return null();
}

Design_20_20_obj::~Design_20_20_obj() { }

Dynamic Design_20_20_obj::__CreateEmpty() { return  new Design_20_20_obj; }
hx::ObjectPtr< Design_20_20_obj > Design_20_20_obj::__new(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine)
{  hx::ObjectPtr< Design_20_20_obj > result = new Design_20_20_obj();
	result->__construct(dummy,actor,engine);
	return result;}

Dynamic Design_20_20_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Design_20_20_obj > result = new Design_20_20_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Design_20_20_obj::forwardMessage( ::String msg){
{
		HX_STACK_PUSH("Design_20_20::forwardMessage","scripts/Design_20_20.hx",375);
		HX_STACK_THIS(this);
		HX_STACK_ARG(msg,"msg");
	}
return null();
}


Void Design_20_20_obj::init( ){
{
		HX_STACK_PUSH("Design_20_20::init","scripts/Design_20_20.hx",224);
		HX_STACK_THIS(this);
		HX_STACK_LINE(223)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(227)
		this->_Bouncing = false;
		HX_STACK_LINE(228)
		this->propertyChanged(HX_CSTRING("_Bouncing"),this->_Bouncing);
		HX_STACK_LINE(229)
		this->actor->setActorValue(HX_CSTRING("StartX"),this->actor->getX(null()));
		HX_STACK_LINE(230)
		this->actor->setActorValue(HX_CSTRING("StartY"),this->actor->getY(null()));
		struct _Function_1_1{
			inline static Float Block( ::scripts::Design_20_20_obj *__this){
				HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",231);
				{
					HX_STACK_LINE(231)
					Dynamic o = __this->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_BeaterRefillX"));		HX_STACK_VAR(o,"o");
					struct _Function_2_1{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",231);
							{
								HX_STACK_LINE(231)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",231);
							{
								HX_STACK_LINE(231)
								::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(231)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(231)
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_2::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(231)
		this->actor->setActorValue(HX_CSTRING("ListX"),_Function_1_1::Block(this));
		struct _Function_1_2{
			inline static Float Block( ::scripts::Design_20_20_obj *__this){
				HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",232);
				{
					HX_STACK_LINE(232)
					Dynamic o = __this->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_BeaterRefillY"));		HX_STACK_VAR(o,"o");
					struct _Function_2_1{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",232);
							{
								HX_STACK_LINE(232)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",232);
							{
								HX_STACK_LINE(232)
								::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(232)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(232)
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_2::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(232)
		this->actor->setActorValue(HX_CSTRING("ListY"),_Function_1_2::Block(this));
		struct _Function_1_3{
			inline static Float Block( ::scripts::Design_20_20_obj *__this){
				HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",233);
				{
					struct _Function_2_1{
						inline static Float Block( ::scripts::Design_20_20_obj *__this){
							HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",233);
							{
								HX_STACK_LINE(233)
								Dynamic o = __this->actor->getActorValue(HX_CSTRING("ListX"));		HX_STACK_VAR(o,"o");
								struct _Function_3_1{
									inline static int Block( Dynamic &o){
										HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",233);
										{
											HX_STACK_LINE(233)
											return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
										}
										return null();
									}
								};
								struct _Function_3_2{
									inline static int Block( Dynamic &o){
										HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",233);
										{
											HX_STACK_LINE(233)
											::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
											HX_STACK_LINE(233)
											return (int)0;
										}
										return null();
									}
								};
								HX_STACK_LINE(233)
								return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_3_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_3_2::Block(o)) )) )) )) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(233)
					Dynamic o = _Function_2_1::Block(__this);		HX_STACK_VAR(o,"o");
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",233);
							{
								HX_STACK_LINE(233)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_3{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",233);
							{
								HX_STACK_LINE(233)
								::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(233)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(233)
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_2::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_3::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(233)
		this->_ListX = _Function_1_3::Block(this);
		HX_STACK_LINE(234)
		this->propertyChanged(HX_CSTRING("_ListX"),this->_ListX);
		struct _Function_1_4{
			inline static Float Block( ::scripts::Design_20_20_obj *__this){
				HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",235);
				{
					struct _Function_2_1{
						inline static Float Block( ::scripts::Design_20_20_obj *__this){
							HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",235);
							{
								HX_STACK_LINE(235)
								Dynamic o = __this->actor->getActorValue(HX_CSTRING("ListY"));		HX_STACK_VAR(o,"o");
								struct _Function_3_1{
									inline static int Block( Dynamic &o){
										HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",235);
										{
											HX_STACK_LINE(235)
											return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
										}
										return null();
									}
								};
								struct _Function_3_2{
									inline static int Block( Dynamic &o){
										HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",235);
										{
											HX_STACK_LINE(235)
											::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
											HX_STACK_LINE(235)
											return (int)0;
										}
										return null();
									}
								};
								HX_STACK_LINE(235)
								return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_3_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_3_2::Block(o)) )) )) )) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(235)
					Dynamic o = _Function_2_1::Block(__this);		HX_STACK_VAR(o,"o");
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",235);
							{
								HX_STACK_LINE(235)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_3{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",235);
							{
								HX_STACK_LINE(235)
								::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(235)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(235)
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_2::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_3::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(235)
		this->_ListY = _Function_1_4::Block(this);
		HX_STACK_LINE(236)
		this->propertyChanged(HX_CSTRING("_ListY"),this->_ListY);
		HX_STACK_LINE(237)
		this->setGameAttribute(HX_CSTRING("BeaterCombo"),(this->getGameAttribute(HX_CSTRING("BeaterCombo")) + (int)1));
		struct _Function_1_5{
			inline static Float Block( ::scripts::Design_20_20_obj *__this){
				HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",238);
				{
					HX_STACK_LINE(238)
					Dynamic o = __this->getGameAttribute(HX_CSTRING("DIRECTION"));		HX_STACK_VAR(o,"o");
					struct _Function_2_1{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",238);
							{
								HX_STACK_LINE(238)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",238);
							{
								HX_STACK_LINE(238)
								::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(238)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(238)
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_2::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(238)
		this->_Direction = _Function_1_5::Block(this);
		HX_STACK_LINE(239)
		this->propertyChanged(HX_CSTRING("_Direction"),this->_Direction);
		struct _Function_1_6{
			inline static Float Block( ::scripts::Design_20_20_obj *__this){
				HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",240);
				{
					HX_STACK_LINE(240)
					Dynamic o = (Float(__this->getGameAttribute(HX_CSTRING("BeaterCombo"))) / Float((int)4));		HX_STACK_VAR(o,"o");
					struct _Function_2_1{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",240);
							{
								HX_STACK_LINE(240)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",240);
							{
								HX_STACK_LINE(240)
								::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(240)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(240)
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_2::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(240)
		this->_BeaterCombos = _Function_1_6::Block(this);
		HX_STACK_LINE(241)
		this->propertyChanged(HX_CSTRING("_BeaterCombos"),this->_BeaterCombos);
		struct _Function_1_7{
			inline static Float Block( ::scripts::Design_20_20_obj *__this){
				HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",242);
				{
					HX_STACK_LINE(242)
					Dynamic o = __this->getGameAttribute(HX_CSTRING("TypeNumber"));		HX_STACK_VAR(o,"o");
					struct _Function_2_1{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",242);
							{
								HX_STACK_LINE(242)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",242);
							{
								HX_STACK_LINE(242)
								::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(242)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(242)
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_2::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(242)
		this->_TypeNumber = _Function_1_7::Block(this);
		HX_STACK_LINE(243)
		this->propertyChanged(HX_CSTRING("_TypeNumber"),this->_TypeNumber);
		struct _Function_1_8{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",244);
				{
					HX_STACK_LINE(244)
					return (  ((hx::TCast< Bool >::cast((int)100))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_9{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",244);
				{
					HX_STACK_LINE(244)
					::haxe::Log_obj::trace((HX_CSTRING("100") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(244)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(244)
		this->_OpacitiyMod = (  ((::Std_obj::is((int)100,hx::ClassOf< ::Float >()))) ? Float((int)100) : Float((  ((::Std_obj::is((int)100,hx::ClassOf< ::Int >()))) ? Float((int)100) : Float((  ((::Std_obj::is((int)100,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_8::Block()) : Float((  ((::Std_obj::is((int)100,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)100)) : Float(_Function_1_9::Block()) )) )) )) );
		HX_STACK_LINE(245)
		this->propertyChanged(HX_CSTRING("_OpacitiyMod"),this->_OpacitiyMod);
		HX_STACK_LINE(246)
		::haxe::Log_obj::trace((HX_CSTRING("") + this->_TypeNumber),hx::SourceInfo(HX_CSTRING("Design_20_20.hx"),246,HX_CSTRING("scripts.Design_20_20"),HX_CSTRING("init")));
		HX_STACK_LINE(247)
		if (((this->_TypeNumber == (int)1))){
			HX_STACK_LINE(248)
			this->actor->setAnimation((HX_CSTRING("") + this->_1));
		}
		HX_STACK_LINE(252)
		if (((this->_TypeNumber == (int)2))){
			HX_STACK_LINE(253)
			this->actor->setAnimation((HX_CSTRING("") + this->_2));
		}
		HX_STACK_LINE(257)
		if (((this->_TypeNumber == (int)3))){
			HX_STACK_LINE(258)
			this->actor->setAnimation((HX_CSTRING("") + this->_3));
		}
		HX_STACK_LINE(262)
		if (((this->_TypeNumber == (int)4))){
			HX_STACK_LINE(263)
			this->actor->setAnimation((HX_CSTRING("") + this->_4));
		}
		HX_STACK_LINE(267)
		if (((this->_TypeNumber == (int)5))){
			HX_STACK_LINE(268)
			this->actor->setAnimation((HX_CSTRING("") + this->_5));
		}
		HX_STACK_LINE(272)
		if (((this->_TypeNumber == (int)6))){
			HX_STACK_LINE(273)
			this->actor->setAnimation((HX_CSTRING("") + this->_6));
		}
		HX_STACK_LINE(277)
		if ((!(this->_Bouncing))){

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g)
			Void run(::com::stencyl::behavior::TimedTask timeTask){
				HX_STACK_PUSH("*::_Function_2_1","scripts/Design_20_20.hx",279);
				HX_STACK_ARG(timeTask,"timeTask");
				{
					HX_STACK_LINE(283)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->getGameAttribute(HX_CSTRING("DIRECTION")) == (int)4))){
						HX_STACK_LINE(285)
						_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->actor->setX((_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->actor->getX(null()) + _g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->getGameAttribute(HX_CSTRING("Grid Spacing"))),null(),null());
						HX_STACK_LINE(286)
						hx::AddEq(_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_ListX,(int)1);
						HX_STACK_LINE(287)
						_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->propertyChanged(HX_CSTRING("_ListX"),_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_ListX);
					}
					HX_STACK_LINE(290)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->getGameAttribute(HX_CSTRING("DIRECTION")) == (int)3))){
						HX_STACK_LINE(292)
						_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->actor->setX((_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->actor->getX(null()) - _g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->getGameAttribute(HX_CSTRING("Grid Spacing"))),null(),null());
						HX_STACK_LINE(293)
						if (((_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_ListX > (int)0))){
							HX_STACK_LINE(295)
							hx::SubEq(_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_ListX,(int)1);
							HX_STACK_LINE(296)
							_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->propertyChanged(HX_CSTRING("_ListX"),_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_ListX);
						}
					}
					HX_STACK_LINE(301)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->getGameAttribute(HX_CSTRING("DIRECTION")) == (int)2))){
						HX_STACK_LINE(303)
						_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->actor->setY((_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->actor->getY(null()) + _g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->getGameAttribute(HX_CSTRING("Grid Spacing"))),null(),null());
						HX_STACK_LINE(304)
						hx::AddEq(_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_ListY,(int)1);
						HX_STACK_LINE(305)
						_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->propertyChanged(HX_CSTRING("_ListY"),_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_ListY);
					}
					HX_STACK_LINE(308)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->getGameAttribute(HX_CSTRING("DIRECTION")) == (int)1))){
						HX_STACK_LINE(310)
						_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->actor->setY((_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->actor->getY(null()) - _g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->getGameAttribute(HX_CSTRING("Grid Spacing"))),null(),null());
						HX_STACK_LINE(311)
						hx::SubEq(_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_ListY,(int)1);
						HX_STACK_LINE(312)
						_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->propertyChanged(HX_CSTRING("_ListY"),_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_ListY);
					}
					HX_STACK_LINE(315)
					_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_Visible = true;
					HX_STACK_LINE(316)
					_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->propertyChanged(HX_CSTRING("_Visible"),_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_Visible);
					HX_STACK_LINE(317)
					_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->actor->enableActorDrawing();
					struct _Function_3_1{
						inline static Float Block( Array< ::Dynamic > &_g){
							HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",318);
							{
								HX_STACK_LINE(318)
								Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_ListX),::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_ListY),_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_GemType")));		HX_STACK_VAR(o,"o");
								struct _Function_4_1{
									inline static int Block( Dynamic &o){
										HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",318);
										{
											HX_STACK_LINE(318)
											return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
										}
										return null();
									}
								};
								struct _Function_4_2{
									inline static int Block( Dynamic &o){
										HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",318);
										{
											HX_STACK_LINE(318)
											::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
											HX_STACK_LINE(318)
											return (int)0;
										}
										return null();
									}
								};
								HX_STACK_LINE(318)
								return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_4_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_4_2::Block(o)) )) )) )) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(318)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_TypeNumber == _Function_3_1::Block(_g)))){
						HX_STACK_LINE(319)
						_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_customEvent_Collide();
					}

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_2,Array< ::Dynamic >,_g)
					Void run(::com::stencyl::behavior::TimedTask timeTask1){
						HX_STACK_PUSH("*::_Function_3_2","scripts/Design_20_20.hx",323);
						HX_STACK_ARG(timeTask1,"timeTask1");
						{
							HX_STACK_LINE(324)
							_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_Visible = false;
							HX_STACK_LINE(325)
							_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->propertyChanged(HX_CSTRING("_Visible"),_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_Visible);
							HX_STACK_LINE(326)
							_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->actor->disableActorDrawing();
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(323)
					_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->runLater(((int)1000 * ((Float((Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)))), Dynamic(new _Function_3_2(_g)),_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->actor);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(278)
			this->runPeriodically(((int)1000 * ((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo")))))), Dynamic(new _Function_2_1(_g)),this->actor);
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_10,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_10","scripts/Design_20_20.hx",331);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(331)
				if (((bool((_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_OpacitiyMod <= (int)100)) || bool((_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_OpacitiyMod >= (int)0))))){
					HX_STACK_LINE(334)
					hx::SubEq(_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_OpacitiyMod,(int)10);
					HX_STACK_LINE(335)
					_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->propertyChanged(HX_CSTRING("_OpacitiyMod"),_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_OpacitiyMod);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(331)
		this->runPeriodically(((int)1000 * (((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo")))) * (int)2))), Dynamic(new _Function_1_10(_g)),this->actor);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_11,Array< ::Dynamic >,_g)
		Void run(Float elapsedTime,Dynamic list){
			HX_STACK_PUSH("*::_Function_1_11","scripts/Design_20_20.hx",341);
			HX_STACK_ARG(elapsedTime,"elapsedTime");
			HX_STACK_ARG(list,"list");
			{
				HX_STACK_LINE(341)
				if ((_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->wrapper->enabled)){
					HX_STACK_LINE(343)
					if (((bool(((bool((_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->actor->getX(null()) > _g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->getGameAttribute(HX_CSTRING("GridXPosition")))) || bool((_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->actor->getY(null()) > _g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->getGameAttribute(HX_CSTRING("GridYPosition"))))))) && bool(!(_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_Bouncing))))){
						HX_STACK_LINE(345)
						_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->actor->disableActorDrawing();
						HX_STACK_LINE(346)
						_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_Bouncing = true;
						HX_STACK_LINE(347)
						_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->propertyChanged(HX_CSTRING("_Bouncing"),_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_Bouncing);
						HX_STACK_LINE(349)
						_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_customEvent_Reset();
					}
					HX_STACK_LINE(352)
					if (((bool(((bool((_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->actor->getX(null()) < _g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->getGameAttribute(HX_CSTRING("GridBoundX")))) || bool((_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->actor->getY(null()) < _g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->getGameAttribute(HX_CSTRING("GridBoundY"))))))) && bool(!(_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_Bouncing))))){
						HX_STACK_LINE(354)
						_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->actor->disableActorDrawing();
						HX_STACK_LINE(355)
						_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_Bouncing = true;
						HX_STACK_LINE(356)
						_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->propertyChanged(HX_CSTRING("_Bouncing"),_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_Bouncing);
						HX_STACK_LINE(358)
						_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_customEvent_Reset();
					}
					HX_STACK_LINE(361)
					_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->actor->fadeTo((Float(_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_OpacitiyMod) / Float((int)100)),(Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->getGameAttribute(HX_CSTRING("GameTempo")))),::motion::easing::Linear_obj::get_easeNone());
					HX_STACK_LINE(364)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_OpacitiyMod == (int)0))){
						HX_STACK_LINE(365)
						_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->recycleActor(_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->actor);
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(341)
		this->addWhenUpdatedListener(null(), Dynamic(new _Function_1_11(_g)));
	}
return null();
}


Void Design_20_20_obj::_customEvent_Collide( ){
{
		HX_STACK_PUSH("Design_20_20::_customEvent_Collide","scripts/Design_20_20.hx",139);
		HX_STACK_THIS(this);
		HX_STACK_LINE(138)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(140)
		if ((!(this->_Colliding))){
			HX_STACK_LINE(142)
			this->actor->setFilter(Dynamic( Array_obj<Dynamic>::__new().Add(this->createTintFilter((int)16777215,1.))));
			HX_STACK_LINE(143)
			this->_Colliding = true;
			HX_STACK_LINE(144)
			this->propertyChanged(HX_CSTRING("_Colliding"),this->_Colliding);
			struct _Function_2_1{
				inline static int Block( ){
					HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",145);
					{
						HX_STACK_LINE(145)
						return (  ((hx::TCast< Bool >::cast((int)100))) ? int((int)1) : int((int)0) );
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static int Block( ){
					HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",145);
					{
						HX_STACK_LINE(145)
						::haxe::Log_obj::trace((HX_CSTRING("100") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
						HX_STACK_LINE(145)
						return (int)0;
					}
					return null();
				}
			};
			HX_STACK_LINE(145)
			this->_OpacitiyMod = (  ((::Std_obj::is((int)100,hx::ClassOf< ::Float >()))) ? Float((int)100) : Float((  ((::Std_obj::is((int)100,hx::ClassOf< ::Int >()))) ? Float((int)100) : Float((  ((::Std_obj::is((int)100,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block()) : Float((  ((::Std_obj::is((int)100,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)100)) : Float(_Function_2_2::Block()) )) )) )) );
			HX_STACK_LINE(146)
			this->propertyChanged(HX_CSTRING("_OpacitiyMod"),this->_OpacitiyMod);
			struct _Function_2_3{
				inline static Float Block( ::scripts::Design_20_20_obj *__this){
					HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",147);
					{
						struct _Function_3_1{
							inline static Float Block( ::scripts::Design_20_20_obj *__this){
								HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",147);
								{
									HX_STACK_LINE(147)
									Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_ListX),::Std_obj::_int(__this->_ListY),__this->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_UID")));		HX_STACK_VAR(o,"o");
									struct _Function_4_1{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",147);
											{
												HX_STACK_LINE(147)
												return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_4_2{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",147);
											{
												HX_STACK_LINE(147)
												::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(147)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(147)
									return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_4_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_4_2::Block(o)) )) )) )) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(147)
						Dynamic o = _Function_3_1::Block(__this);		HX_STACK_VAR(o,"o");
						struct _Function_3_2{
							inline static int Block( Dynamic &o){
								HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",147);
								{
									HX_STACK_LINE(147)
									return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
								}
								return null();
							}
						};
						struct _Function_3_3{
							inline static int Block( Dynamic &o){
								HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",147);
								{
									HX_STACK_LINE(147)
									::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
									HX_STACK_LINE(147)
									return (int)0;
								}
								return null();
							}
						};
						HX_STACK_LINE(147)
						return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_3_2::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_3_3::Block(o)) )) )) )) )) );
					}
					return null();
				}
			};
			HX_STACK_LINE(147)
			this->_ActorNumber = _Function_2_3::Block(this);
			HX_STACK_LINE(148)
			this->propertyChanged(HX_CSTRING("_ActorNumber"),this->_ActorNumber);
			HX_STACK_LINE(149)
			this->playSound(this->getActor(::Std_obj::_int(this->_ActorNumber))->getValue(HX_CSTRING("beat gem"),HX_CSTRING("_GemSound")));
			HX_STACK_LINE(150)
			this->getActor(::Std_obj::_int(this->_ActorNumber))->spinBy((int)360,(Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo")))),::motion::easing::Linear_obj::get_easeNone());
			HX_STACK_LINE(151)
			hx::AddEq(this->_SoundManager,(int)1);
			HX_STACK_LINE(152)
			this->propertyChanged(HX_CSTRING("_SoundManager"),this->_SoundManager);
			HX_STACK_LINE(153)
			this->setGameAttribute(HX_CSTRING("SoundManager"),this->_SoundManager);
			HX_STACK_LINE(154)
			{
				HX_STACK_LINE(154)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				Array< ::Dynamic > _g11 = this->getActorsOfType(this->getActorType((int)125));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(154)
				while(((_g1 < _g11->length))){
					HX_STACK_LINE(154)
					::com::stencyl::models::Actor actorOfType = _g11->__get(_g1).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actorOfType,"actorOfType");
					HX_STACK_LINE(154)
					++(_g1);
					HX_STACK_LINE(156)
					if (((bool((bool((actorOfType != null())) && bool(!(actorOfType->dead)))) && bool(!(actorOfType->recycled))))){
						HX_STACK_LINE(156)
						actorOfType->setValue(HX_CSTRING("WormHole"),HX_CSTRING("_OGSize"),(actorOfType->getValue(HX_CSTRING("WormHole"),HX_CSTRING("_OGSize")) + (int)1));
					}
				}
			}

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_4,Array< ::Dynamic >,_g)
			Void run(::com::stencyl::behavior::TimedTask timeTask){
				HX_STACK_PUSH("*::_Function_2_4","scripts/Design_20_20.hx",161);
				HX_STACK_ARG(timeTask,"timeTask");
				{
					HX_STACK_LINE(162)
					_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_Colliding = false;
					HX_STACK_LINE(163)
					_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->propertyChanged(HX_CSTRING("_Colliding"),_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_Colliding);
					HX_STACK_LINE(164)
					_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->actor->clearFilters();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(161)
			this->runLater(((int)1000 * ((Float((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)))), Dynamic(new _Function_2_4(_g)),this->actor);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_20_20_obj,_customEvent_Collide,(void))

Void Design_20_20_obj::_customEvent_Reset( ){
{
		HX_STACK_PUSH("Design_20_20::_customEvent_Reset","scripts/Design_20_20.hx",122);
		HX_STACK_THIS(this);
		HX_STACK_LINE(121)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(123)
		this->actor->setX(this->actor->getActorValue(HX_CSTRING("StartX")),null(),null());
		HX_STACK_LINE(124)
		this->actor->setY(this->actor->getActorValue(HX_CSTRING("StartY")),null(),null());
		struct _Function_1_1{
			inline static Float Block( ::scripts::Design_20_20_obj *__this){
				HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",125);
				{
					struct _Function_2_1{
						inline static Float Block( ::scripts::Design_20_20_obj *__this){
							HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",125);
							{
								HX_STACK_LINE(125)
								Dynamic o = __this->actor->getActorValue(HX_CSTRING("ListX"));		HX_STACK_VAR(o,"o");
								struct _Function_3_1{
									inline static int Block( Dynamic &o){
										HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",125);
										{
											HX_STACK_LINE(125)
											return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
										}
										return null();
									}
								};
								struct _Function_3_2{
									inline static int Block( Dynamic &o){
										HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",125);
										{
											HX_STACK_LINE(125)
											::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
											HX_STACK_LINE(125)
											return (int)0;
										}
										return null();
									}
								};
								HX_STACK_LINE(125)
								return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_3_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_3_2::Block(o)) )) )) )) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(125)
					Dynamic o = _Function_2_1::Block(__this);		HX_STACK_VAR(o,"o");
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",125);
							{
								HX_STACK_LINE(125)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_3{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",125);
							{
								HX_STACK_LINE(125)
								::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(125)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(125)
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_2::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_3::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(125)
		this->_ListX = _Function_1_1::Block(this);
		HX_STACK_LINE(126)
		this->propertyChanged(HX_CSTRING("_ListX"),this->_ListX);
		struct _Function_1_2{
			inline static Float Block( ::scripts::Design_20_20_obj *__this){
				HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",127);
				{
					struct _Function_2_1{
						inline static Float Block( ::scripts::Design_20_20_obj *__this){
							HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",127);
							{
								HX_STACK_LINE(127)
								Dynamic o = __this->actor->getActorValue(HX_CSTRING("ListY"));		HX_STACK_VAR(o,"o");
								struct _Function_3_1{
									inline static int Block( Dynamic &o){
										HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",127);
										{
											HX_STACK_LINE(127)
											return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
										}
										return null();
									}
								};
								struct _Function_3_2{
									inline static int Block( Dynamic &o){
										HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",127);
										{
											HX_STACK_LINE(127)
											::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
											HX_STACK_LINE(127)
											return (int)0;
										}
										return null();
									}
								};
								HX_STACK_LINE(127)
								return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_3_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_3_2::Block(o)) )) )) )) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(127)
					Dynamic o = _Function_2_1::Block(__this);		HX_STACK_VAR(o,"o");
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",127);
							{
								HX_STACK_LINE(127)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_3{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_20_20.hx",127);
							{
								HX_STACK_LINE(127)
								::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(127)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(127)
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_2::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_3::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(127)
		this->_ListY = _Function_1_2::Block(this);
		HX_STACK_LINE(128)
		this->propertyChanged(HX_CSTRING("_ListY"),this->_ListY);
		HX_STACK_LINE(129)
		this->actor->enableActorDrawing();

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_3,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_3","scripts/Design_20_20.hx",130);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(131)
				_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_Bouncing = false;
				HX_STACK_LINE(132)
				_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->propertyChanged(HX_CSTRING("_Bouncing"),_g->__get((int)0).StaticCast< ::scripts::Design_20_20 >()->_Bouncing);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(130)
		this->runLater(((int)1000 * ((Float((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)))), Dynamic(new _Function_1_3(_g)),this->actor);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_20_20_obj,_customEvent_Reset,(void))


Design_20_20_obj::Design_20_20_obj()
{
}

void Design_20_20_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Design_20_20);
	HX_MARK_MEMBER_NAME(_SoundManager,"_SoundManager");
	HX_MARK_MEMBER_NAME(_ListY,"_ListY");
	HX_MARK_MEMBER_NAME(_ActorNumber,"_ActorNumber");
	HX_MARK_MEMBER_NAME(_Visible,"_Visible");
	HX_MARK_MEMBER_NAME(_ListX,"_ListX");
	HX_MARK_MEMBER_NAME(_StartY,"_StartY");
	HX_MARK_MEMBER_NAME(_Position,"_Position");
	HX_MARK_MEMBER_NAME(_Direction,"_Direction");
	HX_MARK_MEMBER_NAME(_StartX,"_StartX");
	HX_MARK_MEMBER_NAME(_GemID,"_GemID");
	HX_MARK_MEMBER_NAME(_Bouncing,"_Bouncing");
	HX_MARK_MEMBER_NAME(_GemSound,"_GemSound");
	HX_MARK_MEMBER_NAME(_OpacitiyMod,"_OpacitiyMod");
	HX_MARK_MEMBER_NAME(_BeaterCombos,"_BeaterCombos");
	HX_MARK_MEMBER_NAME(_Searcher,"_Searcher");
	HX_MARK_MEMBER_NAME(_Xincrementer,"_Xincrementer");
	HX_MARK_MEMBER_NAME(_6,"_6");
	HX_MARK_MEMBER_NAME(_5,"_5");
	HX_MARK_MEMBER_NAME(_4,"_4");
	HX_MARK_MEMBER_NAME(_3,"_3");
	HX_MARK_MEMBER_NAME(_2,"_2");
	HX_MARK_MEMBER_NAME(_1,"_1");
	HX_MARK_MEMBER_NAME(_TypeNumber,"_TypeNumber");
	HX_MARK_MEMBER_NAME(_Colliding,"_Colliding");
	HX_MARK_MEMBER_NAME(_Metronome,"_Metronome");
	HX_MARK_MEMBER_NAME(_BeatPos,"_BeatPos");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Design_20_20_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_SoundManager,"_SoundManager");
	HX_VISIT_MEMBER_NAME(_ListY,"_ListY");
	HX_VISIT_MEMBER_NAME(_ActorNumber,"_ActorNumber");
	HX_VISIT_MEMBER_NAME(_Visible,"_Visible");
	HX_VISIT_MEMBER_NAME(_ListX,"_ListX");
	HX_VISIT_MEMBER_NAME(_StartY,"_StartY");
	HX_VISIT_MEMBER_NAME(_Position,"_Position");
	HX_VISIT_MEMBER_NAME(_Direction,"_Direction");
	HX_VISIT_MEMBER_NAME(_StartX,"_StartX");
	HX_VISIT_MEMBER_NAME(_GemID,"_GemID");
	HX_VISIT_MEMBER_NAME(_Bouncing,"_Bouncing");
	HX_VISIT_MEMBER_NAME(_GemSound,"_GemSound");
	HX_VISIT_MEMBER_NAME(_OpacitiyMod,"_OpacitiyMod");
	HX_VISIT_MEMBER_NAME(_BeaterCombos,"_BeaterCombos");
	HX_VISIT_MEMBER_NAME(_Searcher,"_Searcher");
	HX_VISIT_MEMBER_NAME(_Xincrementer,"_Xincrementer");
	HX_VISIT_MEMBER_NAME(_6,"_6");
	HX_VISIT_MEMBER_NAME(_5,"_5");
	HX_VISIT_MEMBER_NAME(_4,"_4");
	HX_VISIT_MEMBER_NAME(_3,"_3");
	HX_VISIT_MEMBER_NAME(_2,"_2");
	HX_VISIT_MEMBER_NAME(_1,"_1");
	HX_VISIT_MEMBER_NAME(_TypeNumber,"_TypeNumber");
	HX_VISIT_MEMBER_NAME(_Colliding,"_Colliding");
	HX_VISIT_MEMBER_NAME(_Metronome,"_Metronome");
	HX_VISIT_MEMBER_NAME(_BeatPos,"_BeatPos");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Design_20_20_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_6") ) { return _6; }
		if (HX_FIELD_EQ(inName,"_5") ) { return _5; }
		if (HX_FIELD_EQ(inName,"_4") ) { return _4; }
		if (HX_FIELD_EQ(inName,"_3") ) { return _3; }
		if (HX_FIELD_EQ(inName,"_2") ) { return _2; }
		if (HX_FIELD_EQ(inName,"_1") ) { return _1; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_ListY") ) { return _ListY; }
		if (HX_FIELD_EQ(inName,"_ListX") ) { return _ListX; }
		if (HX_FIELD_EQ(inName,"_GemID") ) { return _GemID; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_StartY") ) { return _StartY; }
		if (HX_FIELD_EQ(inName,"_StartX") ) { return _StartX; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_Visible") ) { return _Visible; }
		if (HX_FIELD_EQ(inName,"_BeatPos") ) { return _BeatPos; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_Position") ) { return _Position; }
		if (HX_FIELD_EQ(inName,"_Bouncing") ) { return _Bouncing; }
		if (HX_FIELD_EQ(inName,"_GemSound") ) { return _GemSound; }
		if (HX_FIELD_EQ(inName,"_Searcher") ) { return _Searcher; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_Direction") ) { return _Direction; }
		if (HX_FIELD_EQ(inName,"_Colliding") ) { return _Colliding; }
		if (HX_FIELD_EQ(inName,"_Metronome") ) { return _Metronome; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_TypeNumber") ) { return _TypeNumber; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_ActorNumber") ) { return _ActorNumber; }
		if (HX_FIELD_EQ(inName,"_OpacitiyMod") ) { return _OpacitiyMod; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_SoundManager") ) { return _SoundManager; }
		if (HX_FIELD_EQ(inName,"_BeaterCombos") ) { return _BeaterCombos; }
		if (HX_FIELD_EQ(inName,"_Xincrementer") ) { return _Xincrementer; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"forwardMessage") ) { return forwardMessage_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_customEvent_Reset") ) { return _customEvent_Reset_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_customEvent_Collide") ) { return _customEvent_Collide_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Design_20_20_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_6") ) { _6=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_5") ) { _5=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_4") ) { _4=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_3") ) { _3=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_2") ) { _2=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_1") ) { _1=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_ListY") ) { _ListY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ListX") ) { _ListX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_GemID") ) { _GemID=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_StartY") ) { _StartY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_StartX") ) { _StartX=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_Visible") ) { _Visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_BeatPos") ) { _BeatPos=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_Position") ) { _Position=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Bouncing") ) { _Bouncing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_GemSound") ) { _GemSound=inValue.Cast< ::com::stencyl::models::Sound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Searcher") ) { _Searcher=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_Direction") ) { _Direction=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Colliding") ) { _Colliding=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Metronome") ) { _Metronome=inValue.Cast< ::com::stencyl::models::Sound >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_TypeNumber") ) { _TypeNumber=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_ActorNumber") ) { _ActorNumber=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_OpacitiyMod") ) { _OpacitiyMod=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_SoundManager") ) { _SoundManager=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_BeaterCombos") ) { _BeaterCombos=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Xincrementer") ) { _Xincrementer=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Design_20_20_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_SoundManager"));
	outFields->push(HX_CSTRING("_ListY"));
	outFields->push(HX_CSTRING("_ActorNumber"));
	outFields->push(HX_CSTRING("_Visible"));
	outFields->push(HX_CSTRING("_ListX"));
	outFields->push(HX_CSTRING("_StartY"));
	outFields->push(HX_CSTRING("_Position"));
	outFields->push(HX_CSTRING("_Direction"));
	outFields->push(HX_CSTRING("_StartX"));
	outFields->push(HX_CSTRING("_GemID"));
	outFields->push(HX_CSTRING("_Bouncing"));
	outFields->push(HX_CSTRING("_GemSound"));
	outFields->push(HX_CSTRING("_OpacitiyMod"));
	outFields->push(HX_CSTRING("_BeaterCombos"));
	outFields->push(HX_CSTRING("_Searcher"));
	outFields->push(HX_CSTRING("_Xincrementer"));
	outFields->push(HX_CSTRING("_6"));
	outFields->push(HX_CSTRING("_5"));
	outFields->push(HX_CSTRING("_4"));
	outFields->push(HX_CSTRING("_3"));
	outFields->push(HX_CSTRING("_2"));
	outFields->push(HX_CSTRING("_1"));
	outFields->push(HX_CSTRING("_TypeNumber"));
	outFields->push(HX_CSTRING("_Colliding"));
	outFields->push(HX_CSTRING("_Metronome"));
	outFields->push(HX_CSTRING("_BeatPos"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("forwardMessage"),
	HX_CSTRING("init"),
	HX_CSTRING("_customEvent_Collide"),
	HX_CSTRING("_customEvent_Reset"),
	HX_CSTRING("_SoundManager"),
	HX_CSTRING("_ListY"),
	HX_CSTRING("_ActorNumber"),
	HX_CSTRING("_Visible"),
	HX_CSTRING("_ListX"),
	HX_CSTRING("_StartY"),
	HX_CSTRING("_Position"),
	HX_CSTRING("_Direction"),
	HX_CSTRING("_StartX"),
	HX_CSTRING("_GemID"),
	HX_CSTRING("_Bouncing"),
	HX_CSTRING("_GemSound"),
	HX_CSTRING("_OpacitiyMod"),
	HX_CSTRING("_BeaterCombos"),
	HX_CSTRING("_Searcher"),
	HX_CSTRING("_Xincrementer"),
	HX_CSTRING("_6"),
	HX_CSTRING("_5"),
	HX_CSTRING("_4"),
	HX_CSTRING("_3"),
	HX_CSTRING("_2"),
	HX_CSTRING("_1"),
	HX_CSTRING("_TypeNumber"),
	HX_CSTRING("_Colliding"),
	HX_CSTRING("_Metronome"),
	HX_CSTRING("_BeatPos"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Design_20_20_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Design_20_20_obj::__mClass,"__mClass");
};

Class Design_20_20_obj::__mClass;

void Design_20_20_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scripts.Design_20_20"), hx::TCanCast< Design_20_20_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Design_20_20_obj::__boot()
{
}

} // end namespace scripts
