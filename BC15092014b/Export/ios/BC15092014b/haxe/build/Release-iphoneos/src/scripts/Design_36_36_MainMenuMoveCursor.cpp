#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_com_stencyl_behavior_SceneScript
#include <com/stencyl/behavior/SceneScript.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
#endif
#ifndef INCLUDED_scripts_Design_36_36_MainMenuMoveCursor
#include <scripts/Design_36_36_MainMenuMoveCursor.h>
#endif
namespace scripts{

Void Design_36_36_MainMenuMoveCursor_obj::__construct(int dummy,::com::stencyl::Engine engine)
{
HX_STACK_PUSH("Design_36_36_MainMenuMoveCursor::new","scripts/Design_36_36_MainMenuMoveCursor.hx",74);
{
	HX_STACK_LINE(75)
	super::__construct(engine);
	HX_STACK_LINE(76)
	this->nameMap->set(HX_CSTRING("Cursor"),HX_CSTRING("_Cursor"));
	HX_STACK_LINE(77)
	this->nameMap->set(HX_CSTRING("Glyph"),HX_CSTRING("_Glyph"));
}
;
	return null();
}

Design_36_36_MainMenuMoveCursor_obj::~Design_36_36_MainMenuMoveCursor_obj() { }

Dynamic Design_36_36_MainMenuMoveCursor_obj::__CreateEmpty() { return  new Design_36_36_MainMenuMoveCursor_obj; }
hx::ObjectPtr< Design_36_36_MainMenuMoveCursor_obj > Design_36_36_MainMenuMoveCursor_obj::__new(int dummy,::com::stencyl::Engine engine)
{  hx::ObjectPtr< Design_36_36_MainMenuMoveCursor_obj > result = new Design_36_36_MainMenuMoveCursor_obj();
	result->__construct(dummy,engine);
	return result;}

Dynamic Design_36_36_MainMenuMoveCursor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Design_36_36_MainMenuMoveCursor_obj > result = new Design_36_36_MainMenuMoveCursor_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Design_36_36_MainMenuMoveCursor_obj::forwardMessage( ::String msg){
{
		HX_STACK_PUSH("Design_36_36_MainMenuMoveCursor::forwardMessage","scripts/Design_36_36_MainMenuMoveCursor.hx",108);
		HX_STACK_THIS(this);
		HX_STACK_ARG(msg,"msg");
	}
return null();
}


Void Design_36_36_MainMenuMoveCursor_obj::init( ){
{
		HX_STACK_PUSH("Design_36_36_MainMenuMoveCursor::init","scripts/Design_36_36_MainMenuMoveCursor.hx",82);
		HX_STACK_THIS(this);
		HX_STACK_LINE(81)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(85)
		this->enableBehaviorForScene(HX_CSTRING("MenuMetronome"));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		Void run(Float elapsedTime,Dynamic list){
			HX_STACK_PUSH("*::_Function_1_1","scripts/Design_36_36_MainMenuMoveCursor.hx",88);
			HX_STACK_ARG(elapsedTime,"elapsedTime");
			HX_STACK_ARG(list,"list");
			{
				HX_STACK_LINE(88)
				if ((_g->__get((int)0).StaticCast< ::scripts::Design_36_36_MainMenuMoveCursor >()->wrapper->enabled)){
					HX_STACK_LINE(90)
					if ((::com::stencyl::Input_obj::swipedUp)){
						HX_STACK_LINE(91)
						_g->__get((int)0).StaticCast< ::scripts::Design_36_36_MainMenuMoveCursor >()->_Glyph->spinBy(22.5,(Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_36_36_MainMenuMoveCursor >()->getGameAttribute(HX_CSTRING("GameTempo")))),::motion::easing::Linear_obj::get_easeNone());
					}
					HX_STACK_LINE(96)
					if ((::com::stencyl::Input_obj::swipedDown)){
						HX_STACK_LINE(97)
						_g->__get((int)0).StaticCast< ::scripts::Design_36_36_MainMenuMoveCursor >()->_Glyph->spinBy(22.5,(Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_36_36_MainMenuMoveCursor >()->getGameAttribute(HX_CSTRING("GameTempo")))),::motion::easing::Linear_obj::get_easeNone());
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(88)
		this->addWhenUpdatedListener(null(), Dynamic(new _Function_1_1(_g)));
	}
return null();
}



Design_36_36_MainMenuMoveCursor_obj::Design_36_36_MainMenuMoveCursor_obj()
{
}

void Design_36_36_MainMenuMoveCursor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Design_36_36_MainMenuMoveCursor);
	HX_MARK_MEMBER_NAME(_Glyph,"_Glyph");
	HX_MARK_MEMBER_NAME(_Cursor,"_Cursor");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Design_36_36_MainMenuMoveCursor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_Glyph,"_Glyph");
	HX_VISIT_MEMBER_NAME(_Cursor,"_Cursor");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Design_36_36_MainMenuMoveCursor_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_Glyph") ) { return _Glyph; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_Cursor") ) { return _Cursor; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"forwardMessage") ) { return forwardMessage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Design_36_36_MainMenuMoveCursor_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_Glyph") ) { _Glyph=inValue.Cast< ::com::stencyl::models::Actor >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_Cursor") ) { _Cursor=inValue.Cast< ::com::stencyl::models::Actor >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Design_36_36_MainMenuMoveCursor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_Glyph"));
	outFields->push(HX_CSTRING("_Cursor"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("forwardMessage"),
	HX_CSTRING("init"),
	HX_CSTRING("_Glyph"),
	HX_CSTRING("_Cursor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Design_36_36_MainMenuMoveCursor_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Design_36_36_MainMenuMoveCursor_obj::__mClass,"__mClass");
};

Class Design_36_36_MainMenuMoveCursor_obj::__mClass;

void Design_36_36_MainMenuMoveCursor_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scripts.Design_36_36_MainMenuMoveCursor"), hx::TCanCast< Design_36_36_MainMenuMoveCursor_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Design_36_36_MainMenuMoveCursor_obj::__boot()
{
}

} // end namespace scripts
