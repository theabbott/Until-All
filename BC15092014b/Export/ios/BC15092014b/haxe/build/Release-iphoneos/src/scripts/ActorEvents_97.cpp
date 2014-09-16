#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_ActorScript
#include <com/stencyl/behavior/ActorScript.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Script
#include <com/stencyl/behavior/Script.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
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
#ifndef INCLUDED_scripts_ActorEvents_97
#include <scripts/ActorEvents_97.h>
#endif
namespace scripts{

Void ActorEvents_97_obj::__construct(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine)
{
HX_STACK_PUSH("ActorEvents_97::new","scripts/ActorEvents_97.hx",70);
{
	HX_STACK_LINE(70)
	super::__construct(actor,engine);
}
;
	return null();
}

ActorEvents_97_obj::~ActorEvents_97_obj() { }

Dynamic ActorEvents_97_obj::__CreateEmpty() { return  new ActorEvents_97_obj; }
hx::ObjectPtr< ActorEvents_97_obj > ActorEvents_97_obj::__new(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine)
{  hx::ObjectPtr< ActorEvents_97_obj > result = new ActorEvents_97_obj();
	result->__construct(dummy,actor,engine);
	return result;}

Dynamic ActorEvents_97_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ActorEvents_97_obj > result = new ActorEvents_97_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void ActorEvents_97_obj::forwardMessage( ::String msg){
{
		HX_STACK_PUSH("ActorEvents_97::forwardMessage","scripts/ActorEvents_97.hx",81);
		HX_STACK_THIS(this);
		HX_STACK_ARG(msg,"msg");
	}
return null();
}


Void ActorEvents_97_obj::init( ){
{
		HX_STACK_PUSH("ActorEvents_97::init","scripts/ActorEvents_97.hx",76);
		HX_STACK_THIS(this);
	}
return null();
}



ActorEvents_97_obj::ActorEvents_97_obj()
{
}

void ActorEvents_97_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ActorEvents_97);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ActorEvents_97_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ActorEvents_97_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ActorEvents_97_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ActorEvents_97_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ActorEvents_97_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ActorEvents_97_obj::__mClass,"__mClass");
};

Class ActorEvents_97_obj::__mClass;

void ActorEvents_97_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scripts.ActorEvents_97"), hx::TCanCast< ActorEvents_97_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ActorEvents_97_obj::__boot()
{
}

} // end namespace scripts
