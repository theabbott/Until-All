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
#ifndef INCLUDED_com_stencyl_behavior_Behavior
#include <com/stencyl/behavior/Behavior.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_SceneScript
#include <com/stencyl/behavior/SceneScript.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Script
#include <com/stencyl/behavior/Script.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_TimedTask
#include <com/stencyl/behavior/TimedTask.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_G
#include <com/stencyl/graphics/G.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_fonts_BitmapFont
#include <com/stencyl/graphics/fonts/BitmapFont.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Font
#include <com/stencyl/models/Font.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Sound
#include <com/stencyl/models/Sound.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
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
#ifndef INCLUDED_scripts_Design_6_6_Metronome
#include <scripts/Design_6_6_Metronome.h>
#endif
namespace scripts{

Void Design_6_6_Metronome_obj::__construct(int dummy,::com::stencyl::Engine engine)
{
HX_STACK_PUSH("Design_6_6_Metronome::new","scripts/Design_6_6_Metronome.hx",104);
{
	HX_STACK_LINE(105)
	super::__construct(engine);
	HX_STACK_LINE(106)
	this->nameMap->set(HX_CSTRING("BeatCheck"),HX_CSTRING("_BeatCheck"));
	HX_STACK_LINE(107)
	this->_BeatCheck = 0.0;
	HX_STACK_LINE(108)
	this->nameMap->set(HX_CSTRING("BeatRemainder"),HX_CSTRING("_BeatRemainder"));
	HX_STACK_LINE(109)
	this->_BeatRemainder = 0.0;
	HX_STACK_LINE(110)
	this->nameMap->set(HX_CSTRING("Go"),HX_CSTRING("_Go"));
	HX_STACK_LINE(111)
	this->_Go = false;
	HX_STACK_LINE(112)
	this->nameMap->set(HX_CSTRING("SceneTempo"),HX_CSTRING("_SceneTempo"));
	HX_STACK_LINE(113)
	this->_SceneTempo = 0.0;
	HX_STACK_LINE(114)
	this->nameMap->set(HX_CSTRING("SceneTrack"),HX_CSTRING("_SceneTrack"));
	HX_STACK_LINE(115)
	this->nameMap->set(HX_CSTRING("SceneTimeSignature"),HX_CSTRING("_SceneTimeSignature"));
	HX_STACK_LINE(116)
	this->_SceneTimeSignature = 0.0;
	HX_STACK_LINE(117)
	this->nameMap->set(HX_CSTRING("MeasureNumber"),HX_CSTRING("_MeasureNumber"));
	HX_STACK_LINE(118)
	this->_MeasureNumber = 0.0;
	HX_STACK_LINE(119)
	this->nameMap->set(HX_CSTRING("TimeElapsed"),HX_CSTRING("_TimeElapsed"));
	HX_STACK_LINE(120)
	this->_TimeElapsed = 0.0;
	HX_STACK_LINE(121)
	this->nameMap->set(HX_CSTRING("TimeStart"),HX_CSTRING("_TimeStart"));
	HX_STACK_LINE(122)
	this->_TimeStart = 0.0;
	HX_STACK_LINE(123)
	this->nameMap->set(HX_CSTRING("CurrentTime"),HX_CSTRING("_CurrentTime"));
	HX_STACK_LINE(124)
	this->_CurrentTime = 0.0;
	HX_STACK_LINE(125)
	this->nameMap->set(HX_CSTRING("BeatPos"),HX_CSTRING("_BeatPos"));
	HX_STACK_LINE(126)
	this->_BeatPos = 0.0;
}
;
	return null();
}

Design_6_6_Metronome_obj::~Design_6_6_Metronome_obj() { }

Dynamic Design_6_6_Metronome_obj::__CreateEmpty() { return  new Design_6_6_Metronome_obj; }
hx::ObjectPtr< Design_6_6_Metronome_obj > Design_6_6_Metronome_obj::__new(int dummy,::com::stencyl::Engine engine)
{  hx::ObjectPtr< Design_6_6_Metronome_obj > result = new Design_6_6_Metronome_obj();
	result->__construct(dummy,engine);
	return result;}

Dynamic Design_6_6_Metronome_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Design_6_6_Metronome_obj > result = new Design_6_6_Metronome_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Design_6_6_Metronome_obj::forwardMessage( ::String msg){
{
		HX_STACK_PUSH("Design_6_6_Metronome::forwardMessage","scripts/Design_6_6_Metronome.hx",217);
		HX_STACK_THIS(this);
		HX_STACK_ARG(msg,"msg");
	}
return null();
}


Void Design_6_6_Metronome_obj::init( ){
{
		HX_STACK_PUSH("Design_6_6_Metronome::init","scripts/Design_6_6_Metronome.hx",131);
		HX_STACK_THIS(this);
		HX_STACK_LINE(130)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",134);
				{
					HX_STACK_LINE(134)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",134);
				{
					HX_STACK_LINE(134)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(134)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(134)
		this->_TimeElapsed = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_2::Block()) )) )) )) );
		HX_STACK_LINE(135)
		this->propertyChanged(HX_CSTRING("_TimeElapsed"),this->_TimeElapsed);
		struct _Function_1_3{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",136);
				{
					HX_STACK_LINE(136)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_4{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",136);
				{
					HX_STACK_LINE(136)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(136)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(136)
		this->_TimeStart = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_3::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_4::Block()) )) )) )) );
		HX_STACK_LINE(137)
		this->propertyChanged(HX_CSTRING("_TimeStart"),this->_TimeStart);
		HX_STACK_LINE(138)
		this->_SceneTrack = this->getSound((int)10);
		HX_STACK_LINE(139)
		this->propertyChanged(HX_CSTRING("_SceneTrack"),this->_SceneTrack);
		HX_STACK_LINE(140)
		this->setGameAttribute(HX_CSTRING("GameBeatPosition"),1.0);
		HX_STACK_LINE(141)
		this->setGameAttribute(HX_CSTRING("GameBeatsPerMeasure"),this->_SceneTimeSignature);
		struct _Function_1_5{
			inline static Float Block( ::scripts::Design_6_6_Metronome_obj *__this){
				HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",143);
				{
					HX_STACK_LINE(143)
					Dynamic o = __this->getGameAttribute(HX_CSTRING("GameTempo"));		HX_STACK_VAR(o,"o");
					struct _Function_2_1{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",143);
							{
								HX_STACK_LINE(143)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",143);
							{
								HX_STACK_LINE(143)
								::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(143)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(143)
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_2::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(143)
		this->_SceneTempo = _Function_1_5::Block(this);
		HX_STACK_LINE(144)
		this->propertyChanged(HX_CSTRING("_SceneTempo"),this->_SceneTempo);
		struct _Function_1_6{
			inline static Float Block( ::scripts::Design_6_6_Metronome_obj *__this){
				HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",145);
				{
					HX_STACK_LINE(145)
					Dynamic o = (Float((int)60) / Float(__this->getGameAttribute(HX_CSTRING("GameTempo"))));		HX_STACK_VAR(o,"o");
					struct _Function_2_1{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",145);
							{
								HX_STACK_LINE(145)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",145);
							{
								HX_STACK_LINE(145)
								::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(145)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(145)
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_2::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(145)
		this->_BeatCheck = _Function_1_6::Block(this);
		HX_STACK_LINE(146)
		this->propertyChanged(HX_CSTRING("_BeatCheck"),this->_BeatCheck);
		struct _Function_1_7{
			inline static Float Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",147);
				{
					HX_STACK_LINE(147)
					Dynamic o = (::flash::Lib_obj::getTimer() * 0.001);		HX_STACK_VAR(o,"o");
					struct _Function_2_1{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",147);
							{
								HX_STACK_LINE(147)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",147);
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
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_2::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(147)
		this->_TimeStart = _Function_1_7::Block();
		HX_STACK_LINE(148)
		this->propertyChanged(HX_CSTRING("_TimeStart"),this->_TimeStart);
		HX_STACK_LINE(149)
		this->_Go = false;
		HX_STACK_LINE(150)
		this->propertyChanged(HX_CSTRING("_Go"),this->_Go);
		HX_STACK_LINE(151)
		::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("Metronome Initialized")),hx::SourceInfo(HX_CSTRING("Design_6_6_Metronome.hx"),151,HX_CSTRING("scripts.Design_6_6_Metronome"),HX_CSTRING("init")));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_8,Array< ::Dynamic >,_g)
		Void run(Float elapsedTime,Dynamic list){
			HX_STACK_PUSH("*::_Function_1_8","scripts/Design_6_6_Metronome.hx",154);
			HX_STACK_ARG(elapsedTime,"elapsedTime");
			HX_STACK_ARG(list,"list");
			{
				HX_STACK_LINE(154)
				if ((_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->wrapper->enabled)){
					HX_STACK_LINE(156)
					_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->_CurrentTime = (::flash::Lib_obj::getTimer() * 0.001);
					struct _Function_3_1{
						inline static Float Block( Array< ::Dynamic > &_g){
							HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",157);
							{
								HX_STACK_LINE(157)
								Dynamic o = (_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->_CurrentTime - _g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->_TimeStart);		HX_STACK_VAR(o,"o");
								struct _Function_4_1{
									inline static int Block( Dynamic &o){
										HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",157);
										{
											HX_STACK_LINE(157)
											return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
										}
										return null();
									}
								};
								struct _Function_4_2{
									inline static int Block( Dynamic &o){
										HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",157);
										{
											HX_STACK_LINE(157)
											::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
											HX_STACK_LINE(157)
											return (int)0;
										}
										return null();
									}
								};
								HX_STACK_LINE(157)
								return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_4_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_4_2::Block(o)) )) )) )) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(157)
					_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->_TimeElapsed = _Function_3_1::Block(_g);
					HX_STACK_LINE(158)
					_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->propertyChanged(HX_CSTRING("_TimeElapsed"),_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->_TimeElapsed);
					HX_STACK_LINE(159)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->_TimeStart <= _g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->_CurrentTime))){
						struct _Function_4_1{
							inline static Float Block( Array< ::Dynamic > &_g){
								HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",161);
								{
									HX_STACK_LINE(161)
									Dynamic o = _g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->_CurrentTime;		HX_STACK_VAR(o,"o");
									struct _Function_5_1{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",161);
											{
												HX_STACK_LINE(161)
												return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_5_2{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",161);
											{
												HX_STACK_LINE(161)
												::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(161)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(161)
									return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_5_2::Block(o)) )) )) )) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(161)
						_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->_TimeStart = _Function_4_1::Block(_g);
						HX_STACK_LINE(162)
						_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->propertyChanged(HX_CSTRING("_TimeStart"),_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->_TimeStart);
					}
					HX_STACK_LINE(165)
					hx::AddEq(_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->_BeatCheck,_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->_TimeElapsed);
					HX_STACK_LINE(166)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->_BeatCheck >= (Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->getGameAttribute(HX_CSTRING("GameTempo"))))))){
						struct _Function_4_1{
							inline static Float Block( Array< ::Dynamic > &_g){
								HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",168);
								{
									HX_STACK_LINE(168)
									Dynamic o = (_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->_BeatCheck - (Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->getGameAttribute(HX_CSTRING("GameTempo")))));		HX_STACK_VAR(o,"o");
									struct _Function_5_1{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",168);
											{
												HX_STACK_LINE(168)
												return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_5_2{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",168);
											{
												HX_STACK_LINE(168)
												::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(168)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(168)
									return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_5_2::Block(o)) )) )) )) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(168)
						_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->_BeatCheck = _Function_4_1::Block(_g);
						HX_STACK_LINE(169)
						_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->propertyChanged(HX_CSTRING("_BeatCheck"),_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->_BeatCheck);
						struct _Function_4_2{
							inline static Float Block( Array< ::Dynamic > &_g){
								HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",170);
								{
									HX_STACK_LINE(170)
									Dynamic o = _g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->_BeatCheck;		HX_STACK_VAR(o,"o");
									struct _Function_5_1{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",170);
											{
												HX_STACK_LINE(170)
												return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_5_2{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",170);
											{
												HX_STACK_LINE(170)
												::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(170)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(170)
									return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_5_2::Block(o)) )) )) )) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(170)
						_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->_BeatRemainder = _Function_4_2::Block(_g);
						HX_STACK_LINE(171)
						_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->propertyChanged(HX_CSTRING("_BeatRemainder"),_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->_BeatRemainder);

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_3,Array< ::Dynamic >,_g)
						Void run(::com::stencyl::behavior::TimedTask timeTask){
							HX_STACK_PUSH("*::_Function_4_3","scripts/Design_6_6_Metronome.hx",172);
							HX_STACK_ARG(timeTask,"timeTask");
							{
								HX_STACK_LINE(172)
								_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->setGameAttribute(HX_CSTRING("GameBeatWindow"),false);
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						HX_STACK_LINE(172)
						_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->runLater(((int)1000 * ((Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->getGameAttribute(HX_CSTRING("GameTempo")))))), Dynamic(new _Function_4_3(_g)),null());

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_4,Array< ::Dynamic >,_g)
						Void run(::com::stencyl::behavior::TimedTask timeTask){
							HX_STACK_PUSH("*::_Function_4_4","scripts/Design_6_6_Metronome.hx",175);
							HX_STACK_ARG(timeTask,"timeTask");
							{
								HX_STACK_LINE(175)
								_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->setGameAttribute(HX_CSTRING("GameBeatWindow"),true);
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						HX_STACK_LINE(175)
						_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->runLater(((int)1000 * (((Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->getGameAttribute(HX_CSTRING("GameTempo")))) - (Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->getGameAttribute(HX_CSTRING("GameTempo"))))))), Dynamic(new _Function_4_4(_g)),null());
						HX_STACK_LINE(178)
						if (((_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->getGameAttribute(HX_CSTRING("GameBeatPosition")) > (_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->getGameAttribute(HX_CSTRING("GameBeatsPerMeasure")) - 1.0)))){
							HX_STACK_LINE(180)
							_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->setGameAttribute(HX_CSTRING("GameMeasureNumber"),(_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->getGameAttribute(HX_CSTRING("GameMeasureNumber")) + (int)1));
							HX_STACK_LINE(181)
							_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->setGameAttribute(HX_CSTRING("GameBeatPosition"),1.0);
							HX_STACK_LINE(182)
							if ((!(_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->_Go))){
								HX_STACK_LINE(183)
								_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->_customEvent_Go();
							}
						}
						else{
							HX_STACK_LINE(190)
							_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->setGameAttribute(HX_CSTRING("GameBeatPosition"),(_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->getGameAttribute(HX_CSTRING("GameBeatPosition")) + 1.0));
						}
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(154)
		this->addWhenUpdatedListener(null(), Dynamic(new _Function_1_8(_g)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_9,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::graphics::G g,Float x,Float y,Dynamic list){
			HX_STACK_PUSH("*::_Function_1_9","scripts/Design_6_6_Metronome.hx",200);
			HX_STACK_ARG(g,"g");
			HX_STACK_ARG(x,"x");
			HX_STACK_ARG(y,"y");
			HX_STACK_ARG(list,"list");
			{
				HX_STACK_LINE(200)
				if ((_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->wrapper->enabled)){
					HX_STACK_LINE(206)
					if (((g->font == null()))){
						HX_STACK_LINE(206)
						g->font = g->defaultFont;
					}
					HX_STACK_LINE(206)
					Float drawX;		HX_STACK_VAR(drawX,"drawX");
					HX_STACK_LINE(206)
					Float drawY;		HX_STACK_VAR(drawY,"drawY");
					HX_STACK_LINE(206)
					if ((g->drawActor)){
						HX_STACK_LINE(206)
						if (((bool((g->actor != null())) && bool(g->actor->isHUD)))){
							HX_STACK_LINE(206)
							drawX = (g->x + g->scaleX);
							HX_STACK_LINE(206)
							drawY = (g->y + ((int)400 * g->scaleY));
						}
						else{
							HX_STACK_LINE(206)
							drawX = ((g->x + g->scaleX) + ::com::stencyl::Engine_obj::cameraX);
							HX_STACK_LINE(206)
							drawY = ((g->y + ((int)400 * g->scaleY)) + ::com::stencyl::Engine_obj::cameraY);
						}
					}
					else{
						HX_STACK_LINE(206)
						drawX = (g->x + g->scaleX);
						HX_STACK_LINE(206)
						drawY = (g->y + ((int)400 * g->scaleY));
					}
					HX_STACK_LINE(206)
					g->drawData->splice((int)0,g->drawData->length);
					HX_STACK_LINE(206)
					g->font->font->render(g->drawData,(HX_CSTRING("") + (((HX_CSTRING("") + HX_CSTRING("BPM")) + ((HX_CSTRING("") + ((HX_CSTRING("") + ::Std_obj::string(_g->__get((int)0).StaticCast< ::scripts::Design_6_6_Metronome >()->getGameAttribute(HX_CSTRING("GameTempo")))))))))),(int)0,g->alpha,::Std_obj::_int(drawX),::Std_obj::_int(drawY),(int)0,g->font->fontScale,(int)0,false);
					HX_STACK_LINE(206)
					g->font->font->drawText(g->graphics,g->drawData,null(),null());
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC4((void))

		HX_STACK_LINE(200)
		this->addWhenDrawingListener(null(), Dynamic(new _Function_1_9(_g)));
	}
return null();
}


Void Design_6_6_Metronome_obj::_customEvent_Go( ){
{
		HX_STACK_PUSH("Design_6_6_Metronome::_customEvent_Go","scripts/Design_6_6_Metronome.hx",92);
		HX_STACK_THIS(this);
		HX_STACK_LINE(94)
		this->setGameAttribute(HX_CSTRING("GameMeasureNumber"),(int)1);
		struct _Function_1_1{
			inline static Float Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",95);
				{
					HX_STACK_LINE(95)
					Dynamic o = (::flash::Lib_obj::getTimer() * 0.001);		HX_STACK_VAR(o,"o");
					struct _Function_2_1{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",95);
							{
								HX_STACK_LINE(95)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_6_6_Metronome.hx",95);
							{
								HX_STACK_LINE(95)
								::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(95)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(95)
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_2::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(95)
		this->_TimeStart = _Function_1_1::Block();
		HX_STACK_LINE(96)
		this->propertyChanged(HX_CSTRING("_TimeStart"),this->_TimeStart);
		HX_STACK_LINE(97)
		this->_Go = true;
		HX_STACK_LINE(98)
		this->propertyChanged(HX_CSTRING("_Go"),this->_Go);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_6_6_Metronome_obj,_customEvent_Go,(void))


Design_6_6_Metronome_obj::Design_6_6_Metronome_obj()
{
}

void Design_6_6_Metronome_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Design_6_6_Metronome);
	HX_MARK_MEMBER_NAME(_BeatPos,"_BeatPos");
	HX_MARK_MEMBER_NAME(_CurrentTime,"_CurrentTime");
	HX_MARK_MEMBER_NAME(_TimeStart,"_TimeStart");
	HX_MARK_MEMBER_NAME(_TimeElapsed,"_TimeElapsed");
	HX_MARK_MEMBER_NAME(_MeasureNumber,"_MeasureNumber");
	HX_MARK_MEMBER_NAME(_SceneTimeSignature,"_SceneTimeSignature");
	HX_MARK_MEMBER_NAME(_SceneTrack,"_SceneTrack");
	HX_MARK_MEMBER_NAME(_SceneTempo,"_SceneTempo");
	HX_MARK_MEMBER_NAME(_Go,"_Go");
	HX_MARK_MEMBER_NAME(_BeatRemainder,"_BeatRemainder");
	HX_MARK_MEMBER_NAME(_BeatCheck,"_BeatCheck");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Design_6_6_Metronome_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_BeatPos,"_BeatPos");
	HX_VISIT_MEMBER_NAME(_CurrentTime,"_CurrentTime");
	HX_VISIT_MEMBER_NAME(_TimeStart,"_TimeStart");
	HX_VISIT_MEMBER_NAME(_TimeElapsed,"_TimeElapsed");
	HX_VISIT_MEMBER_NAME(_MeasureNumber,"_MeasureNumber");
	HX_VISIT_MEMBER_NAME(_SceneTimeSignature,"_SceneTimeSignature");
	HX_VISIT_MEMBER_NAME(_SceneTrack,"_SceneTrack");
	HX_VISIT_MEMBER_NAME(_SceneTempo,"_SceneTempo");
	HX_VISIT_MEMBER_NAME(_Go,"_Go");
	HX_VISIT_MEMBER_NAME(_BeatRemainder,"_BeatRemainder");
	HX_VISIT_MEMBER_NAME(_BeatCheck,"_BeatCheck");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Design_6_6_Metronome_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_Go") ) { return _Go; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_BeatPos") ) { return _BeatPos; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_TimeStart") ) { return _TimeStart; }
		if (HX_FIELD_EQ(inName,"_BeatCheck") ) { return _BeatCheck; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_SceneTrack") ) { return _SceneTrack; }
		if (HX_FIELD_EQ(inName,"_SceneTempo") ) { return _SceneTempo; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_CurrentTime") ) { return _CurrentTime; }
		if (HX_FIELD_EQ(inName,"_TimeElapsed") ) { return _TimeElapsed; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"forwardMessage") ) { return forwardMessage_dyn(); }
		if (HX_FIELD_EQ(inName,"_MeasureNumber") ) { return _MeasureNumber; }
		if (HX_FIELD_EQ(inName,"_BeatRemainder") ) { return _BeatRemainder; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_customEvent_Go") ) { return _customEvent_Go_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_SceneTimeSignature") ) { return _SceneTimeSignature; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Design_6_6_Metronome_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_Go") ) { _Go=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_BeatPos") ) { _BeatPos=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_TimeStart") ) { _TimeStart=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_BeatCheck") ) { _BeatCheck=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_SceneTrack") ) { _SceneTrack=inValue.Cast< ::com::stencyl::models::Sound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_SceneTempo") ) { _SceneTempo=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_CurrentTime") ) { _CurrentTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_TimeElapsed") ) { _TimeElapsed=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_MeasureNumber") ) { _MeasureNumber=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_BeatRemainder") ) { _BeatRemainder=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_SceneTimeSignature") ) { _SceneTimeSignature=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Design_6_6_Metronome_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_BeatPos"));
	outFields->push(HX_CSTRING("_CurrentTime"));
	outFields->push(HX_CSTRING("_TimeStart"));
	outFields->push(HX_CSTRING("_TimeElapsed"));
	outFields->push(HX_CSTRING("_MeasureNumber"));
	outFields->push(HX_CSTRING("_SceneTimeSignature"));
	outFields->push(HX_CSTRING("_SceneTrack"));
	outFields->push(HX_CSTRING("_SceneTempo"));
	outFields->push(HX_CSTRING("_Go"));
	outFields->push(HX_CSTRING("_BeatRemainder"));
	outFields->push(HX_CSTRING("_BeatCheck"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("forwardMessage"),
	HX_CSTRING("init"),
	HX_CSTRING("_customEvent_Go"),
	HX_CSTRING("_BeatPos"),
	HX_CSTRING("_CurrentTime"),
	HX_CSTRING("_TimeStart"),
	HX_CSTRING("_TimeElapsed"),
	HX_CSTRING("_MeasureNumber"),
	HX_CSTRING("_SceneTimeSignature"),
	HX_CSTRING("_SceneTrack"),
	HX_CSTRING("_SceneTempo"),
	HX_CSTRING("_Go"),
	HX_CSTRING("_BeatRemainder"),
	HX_CSTRING("_BeatCheck"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Design_6_6_Metronome_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Design_6_6_Metronome_obj::__mClass,"__mClass");
};

Class Design_6_6_Metronome_obj::__mClass;

void Design_6_6_Metronome_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scripts.Design_6_6_Metronome"), hx::TCanCast< Design_6_6_Metronome_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Design_6_6_Metronome_obj::__boot()
{
}

} // end namespace scripts
