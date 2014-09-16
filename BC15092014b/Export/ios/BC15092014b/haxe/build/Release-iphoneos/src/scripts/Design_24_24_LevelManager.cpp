#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_SceneScript
#include <com/stencyl/behavior/SceneScript.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Script
#include <com/stencyl/behavior/Script.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
#endif
#ifndef INCLUDED_scripts_Design_24_24_LevelManager
#include <scripts/Design_24_24_LevelManager.h>
#endif
namespace scripts{

Void Design_24_24_LevelManager_obj::__construct(int dummy,::com::stencyl::Engine engine)
{
HX_STACK_PUSH("Design_24_24_LevelManager::new","scripts/Design_24_24_LevelManager.hx",70);
{
	HX_STACK_LINE(70)
	super::__construct(engine);
}
;
	return null();
}

Design_24_24_LevelManager_obj::~Design_24_24_LevelManager_obj() { }

Dynamic Design_24_24_LevelManager_obj::__CreateEmpty() { return  new Design_24_24_LevelManager_obj; }
hx::ObjectPtr< Design_24_24_LevelManager_obj > Design_24_24_LevelManager_obj::__new(int dummy,::com::stencyl::Engine engine)
{  hx::ObjectPtr< Design_24_24_LevelManager_obj > result = new Design_24_24_LevelManager_obj();
	result->__construct(dummy,engine);
	return result;}

Dynamic Design_24_24_LevelManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Design_24_24_LevelManager_obj > result = new Design_24_24_LevelManager_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Design_24_24_LevelManager_obj::forwardMessage( ::String msg){
{
		HX_STACK_PUSH("Design_24_24_LevelManager::forwardMessage","scripts/Design_24_24_LevelManager.hx",99);
		HX_STACK_THIS(this);
		HX_STACK_ARG(msg,"msg");
	}
return null();
}


Void Design_24_24_LevelManager_obj::init( ){
{
		HX_STACK_PUSH("Design_24_24_LevelManager::init","scripts/Design_24_24_LevelManager.hx",76);
		HX_STACK_THIS(this);
		HX_STACK_LINE(79)
		this->stopAllSounds();
		HX_STACK_LINE(80)
		this->setGameAttribute(HX_CSTRING("GameTempo"),this->randomInt(::Math_obj::floor((int)60),::Math_obj::floor((int)180)));
		HX_STACK_LINE(81)
		this->setGameAttribute(HX_CSTRING("LevelID_Gen"),(int)0);
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (int)20;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(82)
			while(((_g1 < _g))){
				HX_STACK_LINE(82)
				int index0 = (_g1)++;		HX_STACK_VAR(index0,"index0");
				HX_STACK_LINE(84)
				this->setGameAttribute(HX_CSTRING("LevelID_Gen"),(this->getGameAttribute(HX_CSTRING("LevelID_Gen")) + (int)1));
				HX_STACK_LINE(85)
				this->createRecycledActor(this->getActorType((int)85),this->randomInt(::Math_obj::floor((int)50),::Math_obj::floor(this->getSceneWidth())),this->randomInt(::Math_obj::floor((int)50),::Math_obj::floor(this->getSceneHeight())),::com::stencyl::behavior::Script_obj::FRONT);
				HX_STACK_LINE(86)
				this->getLastCreatedActor()->spinBy(this->randomInt(::Math_obj::floor((int)0),::Math_obj::floor((int)360)),(int)2,::motion::easing::Linear_obj::get_easeNone());
				HX_STACK_LINE(87)
				this->getLastCreatedActor()->growTo((Float(this->randomInt(::Math_obj::floor((int)60),::Math_obj::floor((int)100))) / Float((int)100)),(Float(this->randomInt(::Math_obj::floor((int)60),::Math_obj::floor((int)100))) / Float((int)100)),(int)2,::motion::easing::Linear_obj::get_easeNone());
			}
		}
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (int)32;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(90)
			while(((_g1 < _g))){
				HX_STACK_LINE(90)
				int index0 = (_g1)++;		HX_STACK_VAR(index0,"index0");
				HX_STACK_LINE(92)
				this->stopSoundOnChannel(::Std_obj::_int(index0));
			}
		}
	}
return null();
}



Design_24_24_LevelManager_obj::Design_24_24_LevelManager_obj()
{
}

void Design_24_24_LevelManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Design_24_24_LevelManager);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Design_24_24_LevelManager_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Design_24_24_LevelManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"forwardMessage") ) { return forwardMessage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Design_24_24_LevelManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Design_24_24_LevelManager_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("forwardMessage"),
	HX_CSTRING("init"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Design_24_24_LevelManager_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Design_24_24_LevelManager_obj::__mClass,"__mClass");
};

Class Design_24_24_LevelManager_obj::__mClass;

void Design_24_24_LevelManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scripts.Design_24_24_LevelManager"), hx::TCanCast< Design_24_24_LevelManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Design_24_24_LevelManager_obj::__boot()
{
}

} // end namespace scripts
