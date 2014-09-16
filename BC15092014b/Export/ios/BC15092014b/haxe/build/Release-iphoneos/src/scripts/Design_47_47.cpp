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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
#endif
#ifndef INCLUDED_scripts_Design_47_47
#include <scripts/Design_47_47.h>
#endif
namespace scripts{

Void Design_47_47_obj::__construct(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine)
{
HX_STACK_PUSH("Design_47_47::new","scripts/Design_47_47.hx",74);
{
	HX_STACK_LINE(75)
	super::__construct(actor,engine);
	HX_STACK_LINE(76)
	this->nameMap->set(HX_CSTRING("NumberOnScreen"),HX_CSTRING("_NumberOnScreen"));
	HX_STACK_LINE(77)
	this->_NumberOnScreen = 0.0;
	HX_STACK_LINE(78)
	this->nameMap->set(HX_CSTRING("CoinDrop"),HX_CSTRING("_CoinDrop"));
	HX_STACK_LINE(79)
	this->nameMap->set(HX_CSTRING("Actor"),HX_CSTRING("actor"));
}
;
	return null();
}

Design_47_47_obj::~Design_47_47_obj() { }

Dynamic Design_47_47_obj::__CreateEmpty() { return  new Design_47_47_obj; }
hx::ObjectPtr< Design_47_47_obj > Design_47_47_obj::__new(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine)
{  hx::ObjectPtr< Design_47_47_obj > result = new Design_47_47_obj();
	result->__construct(dummy,actor,engine);
	return result;}

Dynamic Design_47_47_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Design_47_47_obj > result = new Design_47_47_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Design_47_47_obj::forwardMessage( ::String msg){
{
		HX_STACK_PUSH("Design_47_47::forwardMessage","scripts/Design_47_47.hx",138);
		HX_STACK_THIS(this);
		HX_STACK_ARG(msg,"msg");
	}
return null();
}


Void Design_47_47_obj::init( ){
{
		HX_STACK_PUSH("Design_47_47::init","scripts/Design_47_47.hx",84);
		HX_STACK_THIS(this);
		HX_STACK_LINE(83)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(87)
		if (((this->_NumberOnScreen == (int)1))){
			HX_STACK_LINE(89)
			this->_CoinDrop = this->getSound((int)67);
			HX_STACK_LINE(90)
			this->propertyChanged(HX_CSTRING("_CoinDrop"),this->_CoinDrop);
		}
		HX_STACK_LINE(93)
		if (((this->_NumberOnScreen == (int)2))){
			HX_STACK_LINE(95)
			this->_CoinDrop = this->getSound((int)68);
			HX_STACK_LINE(96)
			this->propertyChanged(HX_CSTRING("_CoinDrop"),this->_CoinDrop);
		}
		HX_STACK_LINE(99)
		if (((this->_NumberOnScreen == (int)3))){
			HX_STACK_LINE(101)
			this->_CoinDrop = this->getSound((int)69);
			HX_STACK_LINE(102)
			this->propertyChanged(HX_CSTRING("_CoinDrop"),this->_CoinDrop);
		}
		HX_STACK_LINE(105)
		if (((this->_NumberOnScreen == (int)4))){
			HX_STACK_LINE(107)
			this->_CoinDrop = this->getSound((int)70);
			HX_STACK_LINE(108)
			this->propertyChanged(HX_CSTRING("_CoinDrop"),this->_CoinDrop);
		}
		HX_STACK_LINE(111)
		if (((this->_NumberOnScreen == (int)5))){
			HX_STACK_LINE(113)
			this->_CoinDrop = this->getSound((int)71);
			HX_STACK_LINE(114)
			this->propertyChanged(HX_CSTRING("_CoinDrop"),this->_CoinDrop);
		}
		HX_STACK_LINE(117)
		if (((this->_NumberOnScreen == (int)6))){
			HX_STACK_LINE(119)
			this->_CoinDrop = this->getSound((int)72);
			HX_STACK_LINE(120)
			this->propertyChanged(HX_CSTRING("_CoinDrop"),this->_CoinDrop);
		}
		HX_STACK_LINE(123)
		if (((this->_NumberOnScreen >= (int)7))){
			HX_STACK_LINE(125)
			this->_CoinDrop = this->getSound((int)73);
			HX_STACK_LINE(126)
			this->propertyChanged(HX_CSTRING("_CoinDrop"),this->_CoinDrop);
		}
		HX_STACK_LINE(129)
		this->actor->fadeTo((int)0,(Float((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)),::motion::easing::Linear_obj::get_easeNone());
		HX_STACK_LINE(130)
		this->actor->spinBy(this->randomInt(::Math_obj::floor((int)30),::Math_obj::floor((int)360)),(Float((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)),::motion::easing::Linear_obj::get_easeNone());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_1","scripts/Design_47_47.hx",131);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(131)
				_g->__get((int)0).StaticCast< ::scripts::Design_47_47 >()->recycleActor(_g->__get((int)0).StaticCast< ::scripts::Design_47_47 >()->actor);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(131)
		this->runLater(((int)1000 * ((Float((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)4)))), Dynamic(new _Function_1_1(_g)),this->actor);
	}
return null();
}



Design_47_47_obj::Design_47_47_obj()
{
}

void Design_47_47_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Design_47_47);
	HX_MARK_MEMBER_NAME(_CoinDrop,"_CoinDrop");
	HX_MARK_MEMBER_NAME(_NumberOnScreen,"_NumberOnScreen");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Design_47_47_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_CoinDrop,"_CoinDrop");
	HX_VISIT_MEMBER_NAME(_NumberOnScreen,"_NumberOnScreen");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Design_47_47_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_CoinDrop") ) { return _CoinDrop; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"forwardMessage") ) { return forwardMessage_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_NumberOnScreen") ) { return _NumberOnScreen; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Design_47_47_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_CoinDrop") ) { _CoinDrop=inValue.Cast< ::com::stencyl::models::Sound >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_NumberOnScreen") ) { _NumberOnScreen=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Design_47_47_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_CoinDrop"));
	outFields->push(HX_CSTRING("_NumberOnScreen"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("forwardMessage"),
	HX_CSTRING("init"),
	HX_CSTRING("_CoinDrop"),
	HX_CSTRING("_NumberOnScreen"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Design_47_47_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Design_47_47_obj::__mClass,"__mClass");
};

Class Design_47_47_obj::__mClass;

void Design_47_47_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scripts.Design_47_47"), hx::TCanCast< Design_47_47_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Design_47_47_obj::__boot()
{
}

} // end namespace scripts
