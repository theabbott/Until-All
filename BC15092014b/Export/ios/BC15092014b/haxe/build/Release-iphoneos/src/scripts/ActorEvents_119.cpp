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
#ifndef INCLUDED_scripts_ActorEvents_119
#include <scripts/ActorEvents_119.h>
#endif
namespace scripts{

Void ActorEvents_119_obj::__construct(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine)
{
HX_STACK_PUSH("ActorEvents_119::new","scripts/ActorEvents_119.hx",70);
{
	HX_STACK_LINE(70)
	super::__construct(actor,engine);
}
;
	return null();
}

ActorEvents_119_obj::~ActorEvents_119_obj() { }

Dynamic ActorEvents_119_obj::__CreateEmpty() { return  new ActorEvents_119_obj; }
hx::ObjectPtr< ActorEvents_119_obj > ActorEvents_119_obj::__new(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine)
{  hx::ObjectPtr< ActorEvents_119_obj > result = new ActorEvents_119_obj();
	result->__construct(dummy,actor,engine);
	return result;}

Dynamic ActorEvents_119_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ActorEvents_119_obj > result = new ActorEvents_119_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void ActorEvents_119_obj::forwardMessage( ::String msg){
{
		HX_STACK_PUSH("ActorEvents_119::forwardMessage","scripts/ActorEvents_119.hx",81);
		HX_STACK_THIS(this);
		HX_STACK_ARG(msg,"msg");
	}
return null();
}


Void ActorEvents_119_obj::init( ){
{
		HX_STACK_PUSH("ActorEvents_119::init","scripts/ActorEvents_119.hx",76);
		HX_STACK_THIS(this);
	}
return null();
}



ActorEvents_119_obj::ActorEvents_119_obj()
{
}

void ActorEvents_119_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ActorEvents_119);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ActorEvents_119_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ActorEvents_119_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ActorEvents_119_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ActorEvents_119_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ActorEvents_119_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ActorEvents_119_obj::__mClass,"__mClass");
};

Class ActorEvents_119_obj::__mClass;

void ActorEvents_119_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scripts.ActorEvents_119"), hx::TCanCast< ActorEvents_119_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ActorEvents_119_obj::__boot()
{
}

} // end namespace scripts
