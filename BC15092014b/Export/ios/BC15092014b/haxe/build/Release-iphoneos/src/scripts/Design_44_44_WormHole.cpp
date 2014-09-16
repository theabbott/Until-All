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
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
#endif
#ifndef INCLUDED_scripts_Design_44_44_WormHole
#include <scripts/Design_44_44_WormHole.h>
#endif
namespace scripts{

Void Design_44_44_WormHole_obj::__construct(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine)
{
HX_STACK_PUSH("Design_44_44_WormHole::new","scripts/Design_44_44_WormHole.hx",78);
{
	HX_STACK_LINE(79)
	super::__construct(actor,engine);
	HX_STACK_LINE(80)
	this->nameMap->set(HX_CSTRING("OGSize"),HX_CSTRING("_OGSize"));
	HX_STACK_LINE(81)
	this->_OGSize = 0.0;
	HX_STACK_LINE(82)
	this->nameMap->set(HX_CSTRING("Xpos"),HX_CSTRING("_Xpos"));
	HX_STACK_LINE(83)
	this->_Xpos = 0.0;
	HX_STACK_LINE(84)
	this->nameMap->set(HX_CSTRING("YPos"),HX_CSTRING("_YPos"));
	HX_STACK_LINE(85)
	this->_YPos = 0.0;
	HX_STACK_LINE(86)
	this->nameMap->set(HX_CSTRING("opacity"),HX_CSTRING("_opacity"));
	HX_STACK_LINE(87)
	this->_opacity = 0.0;
	HX_STACK_LINE(88)
	this->nameMap->set(HX_CSTRING("Actor"),HX_CSTRING("actor"));
}
;
	return null();
}

Design_44_44_WormHole_obj::~Design_44_44_WormHole_obj() { }

Dynamic Design_44_44_WormHole_obj::__CreateEmpty() { return  new Design_44_44_WormHole_obj; }
hx::ObjectPtr< Design_44_44_WormHole_obj > Design_44_44_WormHole_obj::__new(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine)
{  hx::ObjectPtr< Design_44_44_WormHole_obj > result = new Design_44_44_WormHole_obj();
	result->__construct(dummy,actor,engine);
	return result;}

Dynamic Design_44_44_WormHole_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Design_44_44_WormHole_obj > result = new Design_44_44_WormHole_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Design_44_44_WormHole_obj::forwardMessage( ::String msg){
{
		HX_STACK_PUSH("Design_44_44_WormHole::forwardMessage","scripts/Design_44_44_WormHole.hx",130);
		HX_STACK_THIS(this);
		HX_STACK_ARG(msg,"msg");
	}
return null();
}


Void Design_44_44_WormHole_obj::init( ){
{
		HX_STACK_PUSH("Design_44_44_WormHole::init","scripts/Design_44_44_WormHole.hx",93);
		HX_STACK_THIS(this);
		HX_STACK_LINE(92)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_44_44_WormHole.hx",96);
				{
					HX_STACK_LINE(96)
					return (  ((hx::TCast< Bool >::cast((int)100))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_44_44_WormHole.hx",96);
				{
					HX_STACK_LINE(96)
					::haxe::Log_obj::trace((HX_CSTRING("100") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(96)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(96)
		this->_opacity = (  ((::Std_obj::is((int)100,hx::ClassOf< ::Float >()))) ? Float((int)100) : Float((  ((::Std_obj::is((int)100,hx::ClassOf< ::Int >()))) ? Float((int)100) : Float((  ((::Std_obj::is((int)100,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_1::Block()) : Float((  ((::Std_obj::is((int)100,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)100)) : Float(_Function_1_2::Block()) )) )) )) );
		HX_STACK_LINE(97)
		this->propertyChanged(HX_CSTRING("_opacity"),this->_opacity);
		HX_STACK_LINE(98)
		this->actor->sendToBack();
		HX_STACK_LINE(99)
		this->actor->set_alpha(0.3);
		struct _Function_1_3{
			inline static Float Block( ::scripts::Design_44_44_WormHole_obj *__this){
				HX_STACK_PUSH("*::closure","scripts/Design_44_44_WormHole.hx",100);
				{
					HX_STACK_LINE(100)
					Dynamic o = __this->actor->getX(null());		HX_STACK_VAR(o,"o");
					struct _Function_2_1{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_44_44_WormHole.hx",100);
							{
								HX_STACK_LINE(100)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_44_44_WormHole.hx",100);
							{
								HX_STACK_LINE(100)
								::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(100)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(100)
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_2::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(100)
		this->_Xpos = _Function_1_3::Block(this);
		HX_STACK_LINE(101)
		this->propertyChanged(HX_CSTRING("_Xpos"),this->_Xpos);
		struct _Function_1_4{
			inline static Float Block( ::scripts::Design_44_44_WormHole_obj *__this){
				HX_STACK_PUSH("*::closure","scripts/Design_44_44_WormHole.hx",102);
				{
					HX_STACK_LINE(102)
					Dynamic o = __this->actor->getY(null());		HX_STACK_VAR(o,"o");
					struct _Function_2_1{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_44_44_WormHole.hx",102);
							{
								HX_STACK_LINE(102)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_44_44_WormHole.hx",102);
							{
								HX_STACK_LINE(102)
								::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(102)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(102)
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_2::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(102)
		this->_YPos = _Function_1_4::Block(this);
		HX_STACK_LINE(103)
		this->propertyChanged(HX_CSTRING("_YPos"),this->_YPos);
		struct _Function_1_5{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_44_44_WormHole.hx",104);
				{
					HX_STACK_LINE(104)
					return (  ((hx::TCast< Bool >::cast((int)10))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_6{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_44_44_WormHole.hx",104);
				{
					HX_STACK_LINE(104)
					::haxe::Log_obj::trace((HX_CSTRING("10") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(104)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(104)
		this->_OGSize = (  ((::Std_obj::is((int)10,hx::ClassOf< ::Float >()))) ? Float((int)10) : Float((  ((::Std_obj::is((int)10,hx::ClassOf< ::Int >()))) ? Float((int)10) : Float((  ((::Std_obj::is((int)10,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_5::Block()) : Float((  ((::Std_obj::is((int)10,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)10)) : Float(_Function_1_6::Block()) )) )) )) );
		HX_STACK_LINE(105)
		this->propertyChanged(HX_CSTRING("_OGSize"),this->_OGSize);
		HX_STACK_LINE(106)
		this->actor->disableActorDrawing();
		HX_STACK_LINE(107)
		this->actor->setFilter(Dynamic( Array_obj<Dynamic>::__new().Add(this->createTintFilter((int)65331,1.))));
		HX_STACK_LINE(108)
		this->actor->growTo(0.1,0.1,0.01,::motion::easing::Linear_obj::get_easeNone());
		HX_STACK_LINE(109)
		this->actor->enableActorDrawing();

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_7,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_7","scripts/Design_44_44_WormHole.hx",110);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(110)
				if ((!(_g->__get((int)0).StaticCast< ::scripts::Design_44_44_WormHole >()->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_EndLevel"))))){
					HX_STACK_LINE(113)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_44_44_WormHole >()->getValueForScene(HX_CSTRING("Metronome"),HX_CSTRING("_Go")) == true))){
						HX_STACK_LINE(115)
						_g->__get((int)0).StaticCast< ::scripts::Design_44_44_WormHole >()->actor->growTo((Float(((_g->__get((int)0).StaticCast< ::scripts::Design_44_44_WormHole >()->_OGSize + (int)10))) / Float((int)100)),(Float(((_g->__get((int)0).StaticCast< ::scripts::Design_44_44_WormHole >()->_OGSize + (int)10))) / Float((int)100)),(Float((Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_44_44_WormHole >()->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)),::motion::easing::Linear_obj::get_easeNone());

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_g)
						Void run(::com::stencyl::behavior::TimedTask timeTask1){
							HX_STACK_PUSH("*::_Function_4_1","scripts/Design_44_44_WormHole.hx",116);
							HX_STACK_ARG(timeTask1,"timeTask1");
							{
								HX_STACK_LINE(116)
								_g->__get((int)0).StaticCast< ::scripts::Design_44_44_WormHole >()->actor->growTo((Float(((_g->__get((int)0).StaticCast< ::scripts::Design_44_44_WormHole >()->_OGSize - (int)10))) / Float((int)100)),(Float(((_g->__get((int)0).StaticCast< ::scripts::Design_44_44_WormHole >()->_OGSize - (int)10))) / Float((int)100)),(Float((Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_44_44_WormHole >()->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)),::motion::easing::Linear_obj::get_easeNone());
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						HX_STACK_LINE(116)
						_g->__get((int)0).StaticCast< ::scripts::Design_44_44_WormHole >()->runLater(((int)1000 * ((Float((Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_44_44_WormHole >()->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)))), Dynamic(new _Function_4_1(_g)),_g->__get((int)0).StaticCast< ::scripts::Design_44_44_WormHole >()->actor);
					}
					HX_STACK_LINE(121)
					_g->__get((int)0).StaticCast< ::scripts::Design_44_44_WormHole >()->actor->spinBy((_g->__get((int)0).StaticCast< ::scripts::Design_44_44_WormHole >()->_OGSize + 12.5),(Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_44_44_WormHole >()->getGameAttribute(HX_CSTRING("GameTempo")))),::motion::easing::Linear_obj::get_easeNone());
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(110)
		this->runPeriodically(((int)1000 * ((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo")))))), Dynamic(new _Function_1_7(_g)),this->actor);
	}
return null();
}



Design_44_44_WormHole_obj::Design_44_44_WormHole_obj()
{
}

void Design_44_44_WormHole_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Design_44_44_WormHole);
	HX_MARK_MEMBER_NAME(_opacity,"_opacity");
	HX_MARK_MEMBER_NAME(_YPos,"_YPos");
	HX_MARK_MEMBER_NAME(_Xpos,"_Xpos");
	HX_MARK_MEMBER_NAME(_OGSize,"_OGSize");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Design_44_44_WormHole_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_opacity,"_opacity");
	HX_VISIT_MEMBER_NAME(_YPos,"_YPos");
	HX_VISIT_MEMBER_NAME(_Xpos,"_Xpos");
	HX_VISIT_MEMBER_NAME(_OGSize,"_OGSize");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Design_44_44_WormHole_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_YPos") ) { return _YPos; }
		if (HX_FIELD_EQ(inName,"_Xpos") ) { return _Xpos; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_OGSize") ) { return _OGSize; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_opacity") ) { return _opacity; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"forwardMessage") ) { return forwardMessage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Design_44_44_WormHole_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_YPos") ) { _YPos=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Xpos") ) { _Xpos=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_OGSize") ) { _OGSize=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_opacity") ) { _opacity=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Design_44_44_WormHole_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_opacity"));
	outFields->push(HX_CSTRING("_YPos"));
	outFields->push(HX_CSTRING("_Xpos"));
	outFields->push(HX_CSTRING("_OGSize"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("forwardMessage"),
	HX_CSTRING("init"),
	HX_CSTRING("_opacity"),
	HX_CSTRING("_YPos"),
	HX_CSTRING("_Xpos"),
	HX_CSTRING("_OGSize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Design_44_44_WormHole_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Design_44_44_WormHole_obj::__mClass,"__mClass");
};

Class Design_44_44_WormHole_obj::__mClass;

void Design_44_44_WormHole_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scripts.Design_44_44_WormHole"), hx::TCanCast< Design_44_44_WormHole_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Design_44_44_WormHole_obj::__boot()
{
}

} // end namespace scripts
