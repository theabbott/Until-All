#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_com_stencyl_graphics_transitions_Transition
#include <com/stencyl/graphics/transitions/Transition.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
#endif
#ifndef INCLUDED_com_stencyl_models_GameModel
#include <com/stencyl/models/GameModel.h>
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
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
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
#ifndef INCLUDED_scripts_Design_32_32_CursorBounce
#include <scripts/Design_32_32_CursorBounce.h>
#endif
namespace scripts{

Void Design_32_32_CursorBounce_obj::__construct(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine)
{
HX_STACK_PUSH("Design_32_32_CursorBounce::new","scripts/Design_32_32_CursorBounce.hx",70);
{
	HX_STACK_LINE(71)
	super::__construct(actor,engine);
	HX_STACK_LINE(72)
	this->nameMap->set(HX_CSTRING("Actor"),HX_CSTRING("actor"));
}
;
	return null();
}

Design_32_32_CursorBounce_obj::~Design_32_32_CursorBounce_obj() { }

Dynamic Design_32_32_CursorBounce_obj::__CreateEmpty() { return  new Design_32_32_CursorBounce_obj; }
hx::ObjectPtr< Design_32_32_CursorBounce_obj > Design_32_32_CursorBounce_obj::__new(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine)
{  hx::ObjectPtr< Design_32_32_CursorBounce_obj > result = new Design_32_32_CursorBounce_obj();
	result->__construct(dummy,actor,engine);
	return result;}

Dynamic Design_32_32_CursorBounce_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Design_32_32_CursorBounce_obj > result = new Design_32_32_CursorBounce_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Design_32_32_CursorBounce_obj::forwardMessage( ::String msg){
{
		HX_STACK_PUSH("Design_32_32_CursorBounce::forwardMessage","scripts/Design_32_32_CursorBounce.hx",108);
		HX_STACK_THIS(this);
		HX_STACK_ARG(msg,"msg");
	}
return null();
}


Void Design_32_32_CursorBounce_obj::init( ){
{
		HX_STACK_PUSH("Design_32_32_CursorBounce::init","scripts/Design_32_32_CursorBounce.hx",77);
		HX_STACK_THIS(this);
		HX_STACK_LINE(76)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_1","scripts/Design_32_32_CursorBounce.hx",80);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(80)
				if (((_g->__get((int)0).StaticCast< ::scripts::Design_32_32_CursorBounce >()->getValueForScene(HX_CSTRING("MenuMetronome"),HX_CSTRING("_Go")) == true))){
					HX_STACK_LINE(83)
					_g->__get((int)0).StaticCast< ::scripts::Design_32_32_CursorBounce >()->actor->setFilter(Dynamic( Array_obj<Dynamic>::__new().Add(_g->__get((int)0).StaticCast< ::scripts::Design_32_32_CursorBounce >()->createTintFilter((int)16777215,1.))));
					HX_STACK_LINE(84)
					_g->__get((int)0).StaticCast< ::scripts::Design_32_32_CursorBounce >()->actor->growTo(1.2,1.2,(Float((Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_32_32_CursorBounce >()->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)),::motion::easing::Linear_obj::get_easeNone());

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_g)
					Void run(::com::stencyl::behavior::TimedTask timeTask1){
						HX_STACK_PUSH("*::_Function_3_1","scripts/Design_32_32_CursorBounce.hx",85);
						HX_STACK_ARG(timeTask1,"timeTask1");
						{
							HX_STACK_LINE(86)
							_g->__get((int)0).StaticCast< ::scripts::Design_32_32_CursorBounce >()->actor->clearFilters();
							HX_STACK_LINE(87)
							_g->__get((int)0).StaticCast< ::scripts::Design_32_32_CursorBounce >()->actor->growTo(1.,1.,(Float((Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_32_32_CursorBounce >()->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)),::motion::easing::Linear_obj::get_easeNone());
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(85)
					_g->__get((int)0).StaticCast< ::scripts::Design_32_32_CursorBounce >()->runLater(((int)1000 * ((Float((Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_32_32_CursorBounce >()->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)))), Dynamic(new _Function_3_1(_g)),_g->__get((int)0).StaticCast< ::scripts::Design_32_32_CursorBounce >()->actor);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(80)
		this->runPeriodically(((int)1000 * ((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo")))))), Dynamic(new _Function_1_1(_g)),this->actor);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,Array< ::Dynamic >,_g)
		Void run(Float elapsedTime,Dynamic list){
			HX_STACK_PUSH("*::_Function_1_2","scripts/Design_32_32_CursorBounce.hx",94);
			HX_STACK_ARG(elapsedTime,"elapsedTime");
			HX_STACK_ARG(list,"list");
			{
				HX_STACK_LINE(94)
				if ((_g->__get((int)0).StaticCast< ::scripts::Design_32_32_CursorBounce >()->wrapper->enabled)){
					HX_STACK_LINE(95)
					if ((_g->__get((int)0).StaticCast< ::scripts::Design_32_32_CursorBounce >()->actor->isMousePressed())){
						HX_STACK_LINE(98)
						_g->__get((int)0).StaticCast< ::scripts::Design_32_32_CursorBounce >()->switchScene(::com::stencyl::models::GameModel_obj::get()->scenes->get((int)1)->__Field(HX_CSTRING("getID"),true)(),_g->__get((int)0).StaticCast< ::scripts::Design_32_32_CursorBounce >()->createFadeOut((int)1,null()),_g->__get((int)0).StaticCast< ::scripts::Design_32_32_CursorBounce >()->createFadeIn((int)1,null()));
						HX_STACK_LINE(99)
						_g->__get((int)0).StaticCast< ::scripts::Design_32_32_CursorBounce >()->disableBehaviorForScene(HX_CSTRING("MenuMetronome"));
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(94)
		this->addWhenUpdatedListener(null(), Dynamic(new _Function_1_2(_g)));
	}
return null();
}



Design_32_32_CursorBounce_obj::Design_32_32_CursorBounce_obj()
{
}

void Design_32_32_CursorBounce_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Design_32_32_CursorBounce);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Design_32_32_CursorBounce_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Design_32_32_CursorBounce_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic Design_32_32_CursorBounce_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Design_32_32_CursorBounce_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(Design_32_32_CursorBounce_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Design_32_32_CursorBounce_obj::__mClass,"__mClass");
};

Class Design_32_32_CursorBounce_obj::__mClass;

void Design_32_32_CursorBounce_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scripts.Design_32_32_CursorBounce"), hx::TCanCast< Design_32_32_CursorBounce_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Design_32_32_CursorBounce_obj::__boot()
{
}

} // end namespace scripts
