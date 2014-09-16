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
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
#endif
#ifndef INCLUDED_scripts_Design_23_23_corpes
#include <scripts/Design_23_23_corpes.h>
#endif
namespace scripts{

Void Design_23_23_corpes_obj::__construct(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine)
{
HX_STACK_PUSH("Design_23_23_corpes::new","scripts/Design_23_23_corpes.hx",74);
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

Design_23_23_corpes_obj::~Design_23_23_corpes_obj() { }

Dynamic Design_23_23_corpes_obj::__CreateEmpty() { return  new Design_23_23_corpes_obj; }
hx::ObjectPtr< Design_23_23_corpes_obj > Design_23_23_corpes_obj::__new(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine)
{  hx::ObjectPtr< Design_23_23_corpes_obj > result = new Design_23_23_corpes_obj();
	result->__construct(dummy,actor,engine);
	return result;}

Dynamic Design_23_23_corpes_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Design_23_23_corpes_obj > result = new Design_23_23_corpes_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Design_23_23_corpes_obj::forwardMessage( ::String msg){
{
		HX_STACK_PUSH("Design_23_23_corpes::forwardMessage","scripts/Design_23_23_corpes.hx",142);
		HX_STACK_THIS(this);
		HX_STACK_ARG(msg,"msg");
	}
return null();
}


Void Design_23_23_corpes_obj::init( ){
{
		HX_STACK_PUSH("Design_23_23_corpes::init","scripts/Design_23_23_corpes.hx",84);
		HX_STACK_THIS(this);
		HX_STACK_LINE(83)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(87)
		hx::AddEq(this->_NumberOnScreen,(int)1);
		HX_STACK_LINE(88)
		this->propertyChanged(HX_CSTRING("_NumberOnScreen"),this->_NumberOnScreen);
		HX_STACK_LINE(89)
		if (((this->_NumberOnScreen == (int)1))){
			HX_STACK_LINE(91)
			this->_CoinDrop = this->getSound((int)67);
			HX_STACK_LINE(92)
			this->propertyChanged(HX_CSTRING("_CoinDrop"),this->_CoinDrop);
		}
		HX_STACK_LINE(95)
		if (((this->_NumberOnScreen == (int)2))){
			HX_STACK_LINE(97)
			this->_CoinDrop = this->getSound((int)68);
			HX_STACK_LINE(98)
			this->propertyChanged(HX_CSTRING("_CoinDrop"),this->_CoinDrop);
		}
		HX_STACK_LINE(101)
		if (((this->_NumberOnScreen == (int)3))){
			HX_STACK_LINE(103)
			this->_CoinDrop = this->getSound((int)69);
			HX_STACK_LINE(104)
			this->propertyChanged(HX_CSTRING("_CoinDrop"),this->_CoinDrop);
		}
		HX_STACK_LINE(107)
		if (((this->_NumberOnScreen == (int)4))){
			HX_STACK_LINE(109)
			this->_CoinDrop = this->getSound((int)70);
			HX_STACK_LINE(110)
			this->propertyChanged(HX_CSTRING("_CoinDrop"),this->_CoinDrop);
		}
		HX_STACK_LINE(113)
		if (((this->_NumberOnScreen == (int)5))){
			HX_STACK_LINE(115)
			this->_CoinDrop = this->getSound((int)71);
			HX_STACK_LINE(116)
			this->propertyChanged(HX_CSTRING("_CoinDrop"),this->_CoinDrop);
		}
		HX_STACK_LINE(119)
		if (((this->_NumberOnScreen == (int)6))){
			HX_STACK_LINE(121)
			this->_CoinDrop = this->getSound((int)72);
			HX_STACK_LINE(122)
			this->propertyChanged(HX_CSTRING("_CoinDrop"),this->_CoinDrop);
		}
		HX_STACK_LINE(125)
		if (((this->_NumberOnScreen >= (int)7))){
			HX_STACK_LINE(127)
			this->_CoinDrop = this->getSound((int)73);
			HX_STACK_LINE(128)
			this->propertyChanged(HX_CSTRING("_CoinDrop"),this->_CoinDrop);
		}
		HX_STACK_LINE(131)
		this->playSound(this->_CoinDrop);
		HX_STACK_LINE(132)
		this->actor->fadeTo((int)0,(Float((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)),::motion::easing::Linear_obj::get_easeNone());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_1","scripts/Design_23_23_corpes.hx",133);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(134)
				hx::SubEq(_g->__get((int)0).StaticCast< ::scripts::Design_23_23_corpes >()->_NumberOnScreen,(int)1);
				HX_STACK_LINE(135)
				_g->__get((int)0).StaticCast< ::scripts::Design_23_23_corpes >()->propertyChanged(HX_CSTRING("_NumberOnScreen"),_g->__get((int)0).StaticCast< ::scripts::Design_23_23_corpes >()->_NumberOnScreen);
				HX_STACK_LINE(136)
				_g->__get((int)0).StaticCast< ::scripts::Design_23_23_corpes >()->recycleActor(_g->__get((int)0).StaticCast< ::scripts::Design_23_23_corpes >()->actor);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(133)
		this->runLater(((int)1000 * ((Float((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)4)))), Dynamic(new _Function_1_1(_g)),this->actor);
	}
return null();
}



Design_23_23_corpes_obj::Design_23_23_corpes_obj()
{
}

void Design_23_23_corpes_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Design_23_23_corpes);
	HX_MARK_MEMBER_NAME(_CoinDrop,"_CoinDrop");
	HX_MARK_MEMBER_NAME(_NumberOnScreen,"_NumberOnScreen");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Design_23_23_corpes_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_CoinDrop,"_CoinDrop");
	HX_VISIT_MEMBER_NAME(_NumberOnScreen,"_NumberOnScreen");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Design_23_23_corpes_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic Design_23_23_corpes_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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

void Design_23_23_corpes_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(Design_23_23_corpes_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Design_23_23_corpes_obj::__mClass,"__mClass");
};

Class Design_23_23_corpes_obj::__mClass;

void Design_23_23_corpes_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scripts.Design_23_23_corpes"), hx::TCanCast< Design_23_23_corpes_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Design_23_23_corpes_obj::__boot()
{
}

} // end namespace scripts
