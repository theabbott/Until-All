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
#ifndef INCLUDED_com_stencyl_graphics_G
#include <com/stencyl/graphics/G.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_fonts_BitmapFont
#include <com/stencyl/graphics/fonts/BitmapFont.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_Transition
#include <com/stencyl/graphics/transitions/Transition.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Font
#include <com/stencyl/models/Font.h>
#endif
#ifndef INCLUDED_com_stencyl_models_GameModel
#include <com/stencyl/models/GameModel.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Scene
#include <com/stencyl/models/Scene.h>
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
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_motion_easing_Elastic
#include <motion/easing/Elastic.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_scripts_Design_27_27_MenuStar
#include <scripts/Design_27_27_MenuStar.h>
#endif
namespace scripts{

Void Design_27_27_MenuStar_obj::__construct(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine)
{
HX_STACK_PUSH("Design_27_27_MenuStar::new","scripts/Design_27_27_MenuStar.hx",127);
{
	HX_STACK_LINE(128)
	super::__construct(actor,engine);
	HX_STACK_LINE(129)
	this->nameMap->set(HX_CSTRING("LevelID"),HX_CSTRING("_LevelID"));
	HX_STACK_LINE(130)
	this->_LevelID = 0.0;
	HX_STACK_LINE(131)
	this->nameMap->set(HX_CSTRING("WinConditions"),HX_CSTRING("_WinConditions"));
	HX_STACK_LINE(132)
	this->_WinConditions = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(133)
	this->nameMap->set(HX_CSTRING("WinConditionMod"),HX_CSTRING("_WinConditionMod"));
	HX_STACK_LINE(134)
	this->_WinConditionMod = 0.0;
	HX_STACK_LINE(135)
	this->nameMap->set(HX_CSTRING("Actor"),HX_CSTRING("actor"));
}
;
	return null();
}

Design_27_27_MenuStar_obj::~Design_27_27_MenuStar_obj() { }

Dynamic Design_27_27_MenuStar_obj::__CreateEmpty() { return  new Design_27_27_MenuStar_obj; }
hx::ObjectPtr< Design_27_27_MenuStar_obj > Design_27_27_MenuStar_obj::__new(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine)
{  hx::ObjectPtr< Design_27_27_MenuStar_obj > result = new Design_27_27_MenuStar_obj();
	result->__construct(dummy,actor,engine);
	return result;}

Dynamic Design_27_27_MenuStar_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Design_27_27_MenuStar_obj > result = new Design_27_27_MenuStar_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Design_27_27_MenuStar_obj::forwardMessage( ::String msg){
{
		HX_STACK_PUSH("Design_27_27_MenuStar::forwardMessage","scripts/Design_27_27_MenuStar.hx",172);
		HX_STACK_THIS(this);
		HX_STACK_ARG(msg,"msg");
	}
return null();
}


Void Design_27_27_MenuStar_obj::init( ){
{
		HX_STACK_PUSH("Design_27_27_MenuStar::init","scripts/Design_27_27_MenuStar.hx",140);
		HX_STACK_THIS(this);
		HX_STACK_LINE(139)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static Float Block( ::scripts::Design_27_27_MenuStar_obj *__this){
				HX_STACK_PUSH("*::closure","scripts/Design_27_27_MenuStar.hx",143);
				{
					HX_STACK_LINE(143)
					Dynamic o = __this->getGameAttribute(HX_CSTRING("LevelID_Gen"));		HX_STACK_VAR(o,"o");
					struct _Function_2_1{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_27_27_MenuStar.hx",143);
							{
								HX_STACK_LINE(143)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_27_27_MenuStar.hx",143);
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
		this->_LevelID = _Function_1_1::Block(this);
		HX_STACK_LINE(144)
		this->propertyChanged(HX_CSTRING("_LevelID"),this->_LevelID);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_2","scripts/Design_27_27_MenuStar.hx",145);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(145)
				_g->__get((int)0).StaticCast< ::scripts::Design_27_27_MenuStar >()->actor->spinBy((int)360,(Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_27_27_MenuStar >()->getGameAttribute(HX_CSTRING("GameTempo")))),::motion::easing::Elastic_obj::get_easeInOut());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(145)
		this->runPeriodically(((int)1000 * ((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo")))))), Dynamic(new _Function_1_2(_g)),this->actor);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_3,Array< ::Dynamic >,_g)
		Void run(int mouseState,Dynamic list){
			HX_STACK_PUSH("*::_Function_1_3","scripts/Design_27_27_MenuStar.hx",150);
			HX_STACK_ARG(mouseState,"mouseState");
			HX_STACK_ARG(list,"list");
			{
				HX_STACK_LINE(150)
				if (((bool(_g->__get((int)0).StaticCast< ::scripts::Design_27_27_MenuStar >()->wrapper->enabled) && bool(((int)3 == mouseState))))){
					HX_STACK_LINE(151)
					_g->__get((int)0).StaticCast< ::scripts::Design_27_27_MenuStar >()->_customEvent_GenerateLevel();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(150)
		this->addMouseOverActorListener(this->actor, Dynamic(new _Function_1_3(_g)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_4,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::graphics::G g,Float x,Float y,Dynamic list){
			HX_STACK_PUSH("*::_Function_1_4","scripts/Design_27_27_MenuStar.hx",157);
			HX_STACK_ARG(g,"g");
			HX_STACK_ARG(x,"x");
			HX_STACK_ARG(y,"y");
			HX_STACK_ARG(list,"list");
			{
				HX_STACK_LINE(157)
				if ((_g->__get((int)0).StaticCast< ::scripts::Design_27_27_MenuStar >()->wrapper->enabled)){
					HX_STACK_LINE(159)
					{
						HX_STACK_LINE(159)
						::com::stencyl::models::Font newFont = _g->__get((int)0).StaticCast< ::scripts::Design_27_27_MenuStar >()->getFont((int)36);		HX_STACK_VAR(newFont,"newFont");
						HX_STACK_LINE(159)
						if (((bool((newFont != null())) && bool((newFont != g->font))))){
							HX_STACK_LINE(159)
							g->font = newFont;
						}
					}
					HX_STACK_LINE(160)
					if ((_g->__get((int)0).StaticCast< ::scripts::Design_27_27_MenuStar >()->actor->isMouseOver())){
						HX_STACK_LINE(162)
						{
							HX_STACK_LINE(162)
							g->drawActor = false;
							HX_STACK_LINE(162)
							g->actor = null();
							HX_STACK_LINE(162)
							g->x = (int)0;
							HX_STACK_LINE(162)
							g->y = (int)0;
						}
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							Float x1 = (Float(_g->__get((int)0).StaticCast< ::scripts::Design_27_27_MenuStar >()->getSceneWidth()) / Float((int)2));		HX_STACK_VAR(x1,"x1");
							Float y1 = (Float(_g->__get((int)0).StaticCast< ::scripts::Design_27_27_MenuStar >()->getSceneHeight()) / Float((int)2));		HX_STACK_VAR(y1,"y1");
							HX_STACK_LINE(163)
							if (((g->font == null()))){
								HX_STACK_LINE(163)
								g->font = g->defaultFont;
							}
							HX_STACK_LINE(163)
							Float drawX;		HX_STACK_VAR(drawX,"drawX");
							HX_STACK_LINE(163)
							Float drawY;		HX_STACK_VAR(drawY,"drawY");
							HX_STACK_LINE(163)
							if ((g->drawActor)){
								HX_STACK_LINE(163)
								if (((bool((g->actor != null())) && bool(g->actor->isHUD)))){
									HX_STACK_LINE(163)
									drawX = (g->x + (x1 * g->scaleX));
									HX_STACK_LINE(163)
									drawY = (g->y + (y1 * g->scaleY));
								}
								else{
									HX_STACK_LINE(163)
									drawX = ((g->x + (x1 * g->scaleX)) + ::com::stencyl::Engine_obj::cameraX);
									HX_STACK_LINE(163)
									drawY = ((g->y + (y1 * g->scaleY)) + ::com::stencyl::Engine_obj::cameraY);
								}
							}
							else{
								HX_STACK_LINE(163)
								drawX = (g->x + (x1 * g->scaleX));
								HX_STACK_LINE(163)
								drawY = (g->y + (y1 * g->scaleY));
							}
							HX_STACK_LINE(163)
							g->drawData->splice((int)0,g->drawData->length);
							HX_STACK_LINE(163)
							g->font->font->render(g->drawData,(HX_CSTRING("") + (((HX_CSTRING("") + HX_CSTRING("LEVEL: ")) + ((HX_CSTRING("") + _g->__get((int)0).StaticCast< ::scripts::Design_27_27_MenuStar >()->_LevelID))))),(int)0,g->alpha,::Std_obj::_int(drawX),::Std_obj::_int(drawY),(int)0,g->font->fontScale,(int)0,false);
							HX_STACK_LINE(163)
							g->font->font->drawText(g->graphics,g->drawData,null(),null());
						}
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC4((void))

		HX_STACK_LINE(157)
		this->addWhenDrawingListener(null(), Dynamic(new _Function_1_4(_g)));
	}
return null();
}


Void Design_27_27_MenuStar_obj::_customEvent_GenerateLevel( ){
{
		HX_STACK_PUSH("Design_27_27_MenuStar::_customEvent_GenerateLevel","scripts/Design_27_27_MenuStar.hx",76);
		HX_STACK_THIS(this);
		HX_STACK_LINE(77)
		this->disableBehaviorForScene(HX_CSTRING("Scene Manager"));
		HX_STACK_LINE(78)
		this->setGameAttribute(HX_CSTRING("ColorTargets"),Dynamic( Array_obj<Dynamic>::__new() ));
		struct _Function_1_1{
			inline static Float Block( ::scripts::Design_27_27_MenuStar_obj *__this){
				HX_STACK_PUSH("*::closure","scripts/Design_27_27_MenuStar.hx",79);
				{
					HX_STACK_LINE(79)
					Dynamic o = __this->randomInt(::Math_obj::floor((int)1),::Math_obj::floor((int)2));		HX_STACK_VAR(o,"o");
					struct _Function_2_1{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_27_27_MenuStar.hx",79);
							{
								HX_STACK_LINE(79)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_27_27_MenuStar.hx",79);
							{
								HX_STACK_LINE(79)
								::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(79)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(79)
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_2::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(79)
		this->_WinConditionMod = _Function_1_1::Block(this);
		HX_STACK_LINE(80)
		this->propertyChanged(HX_CSTRING("_WinConditionMod"),this->_WinConditionMod);
		HX_STACK_LINE(81)
		::haxe::Log_obj::trace((HX_CSTRING("") + this->_WinConditionMod),hx::SourceInfo(HX_CSTRING("Design_27_27_MenuStar.hx"),81,HX_CSTRING("scripts.Design_27_27_MenuStar"),HX_CSTRING("_customEvent_GenerateLevel")));
		HX_STACK_LINE(82)
		if (((this->_WinConditionMod == (int)1))){
			HX_STACK_LINE(84)
			this->setGameAttribute(HX_CSTRING("ColorMatchInMoves"),true);
			HX_STACK_LINE(85)
			this->setGameAttribute(HX_CSTRING("ScoreInMoves"),false);
		}
		else{
			HX_STACK_LINE(88)
			if (((this->_WinConditionMod == (int)2))){
				HX_STACK_LINE(90)
				this->setGameAttribute(HX_CSTRING("ColorMatchInMoves"),false);
				HX_STACK_LINE(91)
				this->setGameAttribute(HX_CSTRING("ScoreInMoves"),true);
			}
		}
		HX_STACK_LINE(94)
		this->setGameAttribute(HX_CSTRING("BeaterCombo"),(int)0);
		HX_STACK_LINE(95)
		this->setGameAttribute(HX_CSTRING("ColorMatch1"),this->randomInt(::Math_obj::floor((int)20),::Math_obj::floor((int)60)));
		HX_STACK_LINE(96)
		this->getGameAttribute(HX_CSTRING("ColorTargets"))->__Field(HX_CSTRING("insert"),true)((int)0,this->getGameAttribute(HX_CSTRING("ColorMatch1")));
		HX_STACK_LINE(97)
		this->setGameAttribute(HX_CSTRING("ColorMatch2"),this->randomInt(::Math_obj::floor((int)20),::Math_obj::floor((int)60)));
		HX_STACK_LINE(98)
		this->getGameAttribute(HX_CSTRING("ColorTargets"))->__Field(HX_CSTRING("insert"),true)((int)1,this->getGameAttribute(HX_CSTRING("ColorMatch2")));
		HX_STACK_LINE(99)
		this->setGameAttribute(HX_CSTRING("ColorMatch3"),this->randomInt(::Math_obj::floor((int)20),::Math_obj::floor((int)60)));
		HX_STACK_LINE(100)
		this->getGameAttribute(HX_CSTRING("ColorTargets"))->__Field(HX_CSTRING("insert"),true)((int)2,this->getGameAttribute(HX_CSTRING("ColorMatch3")));
		HX_STACK_LINE(101)
		this->setGameAttribute(HX_CSTRING("ColorMatch4"),this->randomInt(::Math_obj::floor((int)20),::Math_obj::floor((int)60)));
		HX_STACK_LINE(102)
		this->getGameAttribute(HX_CSTRING("ColorTargets"))->__Field(HX_CSTRING("insert"),true)((int)3,this->getGameAttribute(HX_CSTRING("ColorMatch4")));
		HX_STACK_LINE(103)
		this->setGameAttribute(HX_CSTRING("ColorMatch5"),this->randomInt(::Math_obj::floor((int)20),::Math_obj::floor((int)60)));
		HX_STACK_LINE(104)
		this->getGameAttribute(HX_CSTRING("ColorTargets"))->__Field(HX_CSTRING("insert"),true)((int)4,this->getGameAttribute(HX_CSTRING("ColorMatch5")));
		HX_STACK_LINE(105)
		this->setGameAttribute(HX_CSTRING("ColorMatch6"),this->randomInt(::Math_obj::floor((int)20),::Math_obj::floor((int)60)));
		HX_STACK_LINE(106)
		this->getGameAttribute(HX_CSTRING("ColorTargets"))->__Field(HX_CSTRING("insert"),true)((int)5,this->getGameAttribute(HX_CSTRING("ColorMatch6")));
		HX_STACK_LINE(107)
		this->setGameAttribute(HX_CSTRING("DIRECTION"),this->randomInt(::Math_obj::floor((int)1),::Math_obj::floor((int)4)));
		HX_STACK_LINE(108)
		this->setGameAttribute(HX_CSTRING("GameTempo"),this->randomInt(::Math_obj::floor((int)75),::Math_obj::floor((int)116)));
		HX_STACK_LINE(109)
		this->setGameAttribute(HX_CSTRING("Moves Counter"),(int)0);
		HX_STACK_LINE(110)
		this->setGameAttribute(HX_CSTRING("MovesTarget"),this->randomInt(::Math_obj::floor((int)30),::Math_obj::floor((int)80)));
		HX_STACK_LINE(111)
		this->setGameAttribute(HX_CSTRING("ScoreTarget"),this->randomInt(::Math_obj::floor((int)10000),::Math_obj::floor((int)50000)));
		HX_STACK_LINE(112)
		this->setGameAttribute(HX_CSTRING("GridX"),this->randomInt(::Math_obj::floor((int)4),::Math_obj::floor((int)7)));
		HX_STACK_LINE(113)
		this->setGameAttribute(HX_CSTRING("GridY"),this->randomInt(::Math_obj::floor((int)4),::Math_obj::floor((int)9)));
		HX_STACK_LINE(114)
		this->setGameAttribute(HX_CSTRING("Grid Spacing"),((int)50 - this->getGameAttribute(HX_CSTRING("GridX"))));
		HX_STACK_LINE(115)
		this->setGameAttribute(HX_CSTRING("spawnX"),(int)0);
		HX_STACK_LINE(116)
		this->setGameAttribute(HX_CSTRING("spawnY"),(int)0);
		HX_STACK_LINE(117)
		this->setGameAttribute(HX_CSTRING("Time Since Last Match"),(int)0);
		HX_STACK_LINE(118)
		this->setGameAttribute(HX_CSTRING("TypeNumber"),(int)0);
		HX_STACK_LINE(119)
		::haxe::Log_obj::trace((HX_CSTRING("") + ::Std_obj::string(this->getGameAttribute(HX_CSTRING("ColorTargets")))),hx::SourceInfo(HX_CSTRING("Design_27_27_MenuStar.hx"),119,HX_CSTRING("scripts.Design_27_27_MenuStar"),HX_CSTRING("_customEvent_GenerateLevel")));
		HX_STACK_LINE(120)
		this->enableBehaviorForScene(HX_CSTRING("Scene Manager"));
		HX_STACK_LINE(121)
		this->switchScene(::com::stencyl::models::GameModel_obj::get()->scenes->get((int)2)->__Field(HX_CSTRING("getID"),true)(),this->createFadeOut((int)1,null()),this->createFadeIn((int)1,null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_27_27_MenuStar_obj,_customEvent_GenerateLevel,(void))


Design_27_27_MenuStar_obj::Design_27_27_MenuStar_obj()
{
}

void Design_27_27_MenuStar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Design_27_27_MenuStar);
	HX_MARK_MEMBER_NAME(_WinConditionMod,"_WinConditionMod");
	HX_MARK_MEMBER_NAME(_WinConditions,"_WinConditions");
	HX_MARK_MEMBER_NAME(_LevelID,"_LevelID");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Design_27_27_MenuStar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_WinConditionMod,"_WinConditionMod");
	HX_VISIT_MEMBER_NAME(_WinConditions,"_WinConditions");
	HX_VISIT_MEMBER_NAME(_LevelID,"_LevelID");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Design_27_27_MenuStar_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_LevelID") ) { return _LevelID; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"forwardMessage") ) { return forwardMessage_dyn(); }
		if (HX_FIELD_EQ(inName,"_WinConditions") ) { return _WinConditions; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_WinConditionMod") ) { return _WinConditionMod; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_customEvent_GenerateLevel") ) { return _customEvent_GenerateLevel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Design_27_27_MenuStar_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_LevelID") ) { _LevelID=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_WinConditions") ) { _WinConditions=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_WinConditionMod") ) { _WinConditionMod=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Design_27_27_MenuStar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_WinConditionMod"));
	outFields->push(HX_CSTRING("_WinConditions"));
	outFields->push(HX_CSTRING("_LevelID"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("forwardMessage"),
	HX_CSTRING("init"),
	HX_CSTRING("_customEvent_GenerateLevel"),
	HX_CSTRING("_WinConditionMod"),
	HX_CSTRING("_WinConditions"),
	HX_CSTRING("_LevelID"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Design_27_27_MenuStar_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Design_27_27_MenuStar_obj::__mClass,"__mClass");
};

Class Design_27_27_MenuStar_obj::__mClass;

void Design_27_27_MenuStar_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scripts.Design_27_27_MenuStar"), hx::TCanCast< Design_27_27_MenuStar_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Design_27_27_MenuStar_obj::__boot()
{
}

} // end namespace scripts
