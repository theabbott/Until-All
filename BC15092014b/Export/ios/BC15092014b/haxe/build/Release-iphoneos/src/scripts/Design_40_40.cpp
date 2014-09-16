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
#ifndef INCLUDED_scripts_Design_40_40
#include <scripts/Design_40_40.h>
#endif
namespace scripts{

Void Design_40_40_obj::__construct(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine)
{
HX_STACK_PUSH("Design_40_40::new","scripts/Design_40_40.hx",74);
{
	HX_STACK_LINE(75)
	super::__construct(actor,engine);
	HX_STACK_LINE(76)
	this->nameMap->set(HX_CSTRING("combonumber"),HX_CSTRING("_combonumber"));
	HX_STACK_LINE(77)
	this->_combonumber = 0.0;
	HX_STACK_LINE(78)
	this->nameMap->set(HX_CSTRING("opacity"),HX_CSTRING("_opacity"));
	HX_STACK_LINE(79)
	this->_opacity = 0.0;
	HX_STACK_LINE(80)
	this->nameMap->set(HX_CSTRING("Actor"),HX_CSTRING("actor"));
}
;
	return null();
}

Design_40_40_obj::~Design_40_40_obj() { }

Dynamic Design_40_40_obj::__CreateEmpty() { return  new Design_40_40_obj; }
hx::ObjectPtr< Design_40_40_obj > Design_40_40_obj::__new(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine)
{  hx::ObjectPtr< Design_40_40_obj > result = new Design_40_40_obj();
	result->__construct(dummy,actor,engine);
	return result;}

Dynamic Design_40_40_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Design_40_40_obj > result = new Design_40_40_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Design_40_40_obj::forwardMessage( ::String msg){
{
		HX_STACK_PUSH("Design_40_40::forwardMessage","scripts/Design_40_40.hx",118);
		HX_STACK_THIS(this);
		HX_STACK_ARG(msg,"msg");
	}
return null();
}


Void Design_40_40_obj::init( ){
{
		HX_STACK_PUSH("Design_40_40::init","scripts/Design_40_40.hx",85);
		HX_STACK_THIS(this);
		HX_STACK_LINE(84)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(88)
		this->actor->setCurrentFrame((int)0);
		HX_STACK_LINE(89)
		this->actor->setYVelocity((int)-3);
		HX_STACK_LINE(90)
		this->actor->set_alpha(1.);
		struct _Function_1_1{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_40_40.hx",91);
				{
					HX_STACK_LINE(91)
					return (  ((hx::TCast< Bool >::cast((int)100))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_40_40.hx",91);
				{
					HX_STACK_LINE(91)
					::haxe::Log_obj::trace((HX_CSTRING("100") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(91)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(91)
		this->_opacity = (  ((::Std_obj::is((int)100,hx::ClassOf< ::Float >()))) ? Float((int)100) : Float((  ((::Std_obj::is((int)100,hx::ClassOf< ::Int >()))) ? Float((int)100) : Float((  ((::Std_obj::is((int)100,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_1::Block()) : Float((  ((::Std_obj::is((int)100,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)100)) : Float(_Function_1_2::Block()) )) )) )) );
		HX_STACK_LINE(92)
		this->propertyChanged(HX_CSTRING("_opacity"),this->_opacity);
		HX_STACK_LINE(93)
		this->actor->setFilter(Dynamic( Array_obj<Dynamic>::__new().Add(this->createTintFilter((int)65535,1.))));
		HX_STACK_LINE(94)
		::haxe::Log_obj::trace((HX_CSTRING("") + (((HX_CSTRING("") + HX_CSTRING("ComboNumber")) + ((HX_CSTRING("") + this->_combonumber))))),hx::SourceInfo(HX_CSTRING("Design_40_40.hx"),94,HX_CSTRING("scripts.Design_40_40"),HX_CSTRING("init")));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_3,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_3","scripts/Design_40_40.hx",95);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(95)
				_g->__get((int)0).StaticCast< ::scripts::Design_40_40 >()->actor->set_alpha((Float((((_g->__get((int)0).StaticCast< ::scripts::Design_40_40 >()->actor->get_alpha() * (int)100) - (int)1))) / Float((int)100)));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(95)
		this->runPeriodically(10., Dynamic(new _Function_1_3(_g)),this->actor);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_4,Array< ::Dynamic >,_g)
		Void run(Float elapsedTime,Dynamic list){
			HX_STACK_PUSH("*::_Function_1_4","scripts/Design_40_40.hx",104);
			HX_STACK_ARG(elapsedTime,"elapsedTime");
			HX_STACK_ARG(list,"list");
			{
				HX_STACK_LINE(104)
				if ((_g->__get((int)0).StaticCast< ::scripts::Design_40_40 >()->wrapper->enabled)){
					HX_STACK_LINE(106)
					_g->__get((int)0).StaticCast< ::scripts::Design_40_40 >()->actor->setCurrentFrame(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_40_40 >()->_combonumber));
					HX_STACK_LINE(107)
					if ((((_g->__get((int)0).StaticCast< ::scripts::Design_40_40 >()->actor->get_alpha() * (int)100) == (int)0))){
						HX_STACK_LINE(108)
						_g->__get((int)0).StaticCast< ::scripts::Design_40_40 >()->recycleActor(_g->__get((int)0).StaticCast< ::scripts::Design_40_40 >()->actor);
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(104)
		this->addWhenUpdatedListener(null(), Dynamic(new _Function_1_4(_g)));
	}
return null();
}



Design_40_40_obj::Design_40_40_obj()
{
}

void Design_40_40_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Design_40_40);
	HX_MARK_MEMBER_NAME(_opacity,"_opacity");
	HX_MARK_MEMBER_NAME(_combonumber,"_combonumber");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Design_40_40_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_opacity,"_opacity");
	HX_VISIT_MEMBER_NAME(_combonumber,"_combonumber");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Design_40_40_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_opacity") ) { return _opacity; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_combonumber") ) { return _combonumber; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"forwardMessage") ) { return forwardMessage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Design_40_40_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_opacity") ) { _opacity=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_combonumber") ) { _combonumber=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Design_40_40_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_opacity"));
	outFields->push(HX_CSTRING("_combonumber"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("forwardMessage"),
	HX_CSTRING("init"),
	HX_CSTRING("_opacity"),
	HX_CSTRING("_combonumber"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Design_40_40_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Design_40_40_obj::__mClass,"__mClass");
};

Class Design_40_40_obj::__mClass;

void Design_40_40_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scripts.Design_40_40"), hx::TCanCast< Design_40_40_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Design_40_40_obj::__boot()
{
}

} // end namespace scripts
