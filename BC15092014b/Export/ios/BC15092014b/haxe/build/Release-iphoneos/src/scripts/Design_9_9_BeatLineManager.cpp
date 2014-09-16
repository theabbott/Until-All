#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_List2D
#include <List2D.h>
#endif
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_scripts_Design_9_9_BeatLineManager
#include <scripts/Design_9_9_BeatLineManager.h>
#endif
namespace scripts{

Void Design_9_9_BeatLineManager_obj::__construct(int dummy,::com::stencyl::Engine engine)
{
HX_STACK_PUSH("Design_9_9_BeatLineManager::new","scripts/Design_9_9_BeatLineManager.hx",126);
{
	HX_STACK_LINE(127)
	super::__construct(engine);
	HX_STACK_LINE(128)
	this->nameMap->set(HX_CSTRING("AlreadySpawned?"),HX_CSTRING("_AlreadySpawned"));
	HX_STACK_LINE(129)
	this->_AlreadySpawned = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(130)
	this->nameMap->set(HX_CSTRING("BeatLineX"),HX_CSTRING("_BeatLineX"));
	HX_STACK_LINE(131)
	this->_BeatLineX = 0.0;
	HX_STACK_LINE(132)
	this->nameMap->set(HX_CSTRING("BeatLineY"),HX_CSTRING("_BeatLineY"));
	HX_STACK_LINE(133)
	this->_BeatLineY = 0.0;
	HX_STACK_LINE(134)
	this->nameMap->set(HX_CSTRING("YIncrementer"),HX_CSTRING("_YIncrementer"));
	HX_STACK_LINE(135)
	this->_YIncrementer = 0.0;
	HX_STACK_LINE(136)
	this->nameMap->set(HX_CSTRING("Grid Spacing"),HX_CSTRING("_GridSpacing"));
	HX_STACK_LINE(137)
	this->_GridSpacing = 0.0;
	HX_STACK_LINE(138)
	this->nameMap->set(HX_CSTRING("BeatPos"),HX_CSTRING("_BeatPos"));
	HX_STACK_LINE(139)
	this->_BeatPos = 0.0;
	HX_STACK_LINE(140)
	this->nameMap->set(HX_CSTRING("SpawnType_ID"),HX_CSTRING("_SpawnTypeID"));
	HX_STACK_LINE(141)
	this->_SpawnTypeID = 0.0;
	HX_STACK_LINE(142)
	this->nameMap->set(HX_CSTRING("SpawnTypeActor"),HX_CSTRING("_SpawnTypeActor"));
	HX_STACK_LINE(143)
	this->nameMap->set(HX_CSTRING("RefillX"),HX_CSTRING("_RefillX"));
	HX_STACK_LINE(144)
	this->_RefillX = 0.0;
	HX_STACK_LINE(145)
	this->nameMap->set(HX_CSTRING("RefillY"),HX_CSTRING("_RefillY"));
	HX_STACK_LINE(146)
	this->_RefillY = 0.0;
	HX_STACK_LINE(147)
	this->nameMap->set(HX_CSTRING("Gem_Type"),HX_CSTRING("_GemType"));
	HX_STACK_LINE(148)
	this->_GemType = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(149)
	this->nameMap->set(HX_CSTRING("BP"),HX_CSTRING("_BP"));
	HX_STACK_LINE(150)
	this->_BP = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(151)
	this->nameMap->set(HX_CSTRING("SpecialSpawn?"),HX_CSTRING("_SpecialSpawn"));
	HX_STACK_LINE(152)
	this->_SpecialSpawn = false;
}
;
	return null();
}

Design_9_9_BeatLineManager_obj::~Design_9_9_BeatLineManager_obj() { }

Dynamic Design_9_9_BeatLineManager_obj::__CreateEmpty() { return  new Design_9_9_BeatLineManager_obj; }
hx::ObjectPtr< Design_9_9_BeatLineManager_obj > Design_9_9_BeatLineManager_obj::__new(int dummy,::com::stencyl::Engine engine)
{  hx::ObjectPtr< Design_9_9_BeatLineManager_obj > result = new Design_9_9_BeatLineManager_obj();
	result->__construct(dummy,engine);
	return result;}

Dynamic Design_9_9_BeatLineManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Design_9_9_BeatLineManager_obj > result = new Design_9_9_BeatLineManager_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Design_9_9_BeatLineManager_obj::forwardMessage( ::String msg){
{
		HX_STACK_PUSH("Design_9_9_BeatLineManager::forwardMessage","scripts/Design_9_9_BeatLineManager.hx",166);
		HX_STACK_THIS(this);
		HX_STACK_ARG(msg,"msg");
	}
return null();
}


Void Design_9_9_BeatLineManager_obj::init( ){
{
		HX_STACK_PUSH("Design_9_9_BeatLineManager::init","scripts/Design_9_9_BeatLineManager.hx",157);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Float Block( ::scripts::Design_9_9_BeatLineManager_obj *__this){
				HX_STACK_PUSH("*::closure","scripts/Design_9_9_BeatLineManager.hx",160);
				{
					HX_STACK_LINE(160)
					Dynamic o = __this->getGameAttribute(HX_CSTRING("Grid Spacing"));		HX_STACK_VAR(o,"o");
					struct _Function_2_1{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_9_9_BeatLineManager.hx",160);
							{
								HX_STACK_LINE(160)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_9_9_BeatLineManager.hx",160);
							{
								HX_STACK_LINE(160)
								::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(160)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(160)
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_2::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(160)
		this->_GridSpacing = _Function_1_1::Block(this);
		HX_STACK_LINE(161)
		this->propertyChanged(HX_CSTRING("_GridSpacing"),this->_GridSpacing);
	}
return null();
}


Void Design_9_9_BeatLineManager_obj::_customEvent_BeaterSpawn( ){
{
		HX_STACK_PUSH("Design_9_9_BeatLineManager::_customEvent_BeaterSpawn","scripts/Design_9_9_BeatLineManager.hx",96);
		HX_STACK_THIS(this);
		HX_STACK_LINE(97)
		::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("BEATSPAWN")),hx::SourceInfo(HX_CSTRING("Design_9_9_BeatLineManager.hx"),97,HX_CSTRING("scripts.Design_9_9_BeatLineManager"),HX_CSTRING("_customEvent_BeaterSpawn")));
		struct _Function_1_1{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_9_9_BeatLineManager.hx",98);
				{
					HX_STACK_LINE(98)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_9_9_BeatLineManager.hx",98);
				{
					HX_STACK_LINE(98)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(98)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(98)
		this->_RefillX = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_2::Block()) )) )) )) );
		HX_STACK_LINE(99)
		this->propertyChanged(HX_CSTRING("_RefillX"),this->_RefillX);
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridX")));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(100)
			while(((_g1 < _g))){
				HX_STACK_LINE(100)
				int index0 = (_g1)++;		HX_STACK_VAR(index0,"index0");
				struct _Function_3_1{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_9_9_BeatLineManager.hx",102);
						{
							HX_STACK_LINE(102)
							return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_9_9_BeatLineManager.hx",102);
						{
							HX_STACK_LINE(102)
							::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
							HX_STACK_LINE(102)
							return (int)0;
						}
						return null();
					}
				};
				HX_STACK_LINE(102)
				this->_RefillY = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_3_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_3_2::Block()) )) )) )) );
				HX_STACK_LINE(103)
				this->propertyChanged(HX_CSTRING("_RefillY"),this->_RefillY);
				HX_STACK_LINE(104)
				{
					HX_STACK_LINE(104)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = ::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridY")));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(104)
					while(((_g3 < _g2))){
						HX_STACK_LINE(104)
						int index1 = (_g3)++;		HX_STACK_VAR(index1,"index1");
						HX_STACK_LINE(106)
						if (((!(::List2D_obj::check_entry(::Std_obj::_int(this->_RefillX),::Std_obj::_int(this->_RefillY),this->getGameAttribute(HX_CSTRING("BPS")))) == false))){
							HX_STACK_LINE(108)
							::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("CREATEBEATSPAWN")),hx::SourceInfo(HX_CSTRING("Design_9_9_BeatLineManager.hx"),108,HX_CSTRING("scripts.Design_9_9_BeatLineManager"),HX_CSTRING("_customEvent_BeaterSpawn")));
							HX_STACK_LINE(109)
							this->createRecycledActor(this->getActorType((int)58),(((this->_RefillX * this->_GridSpacing) + this->_GridSpacing) + (Float(this->getScreenWidth()) / Float(this->getGameAttribute(HX_CSTRING("GridX"))))),((this->_RefillY * this->_GridSpacing) + this->_GridSpacing),::com::stencyl::behavior::Script_obj::FRONT);
							HX_STACK_LINE(110)
							::List2D_obj::set_entry(::Std_obj::_int(this->_RefillX),::Std_obj::_int(this->_RefillY),null(),this->getGameAttribute(HX_CSTRING("BPS")));
						}
						HX_STACK_LINE(113)
						hx::AddEq(this->_RefillY,(int)1);
						HX_STACK_LINE(114)
						this->propertyChanged(HX_CSTRING("_RefillY"),this->_RefillY);
					}
				}
				HX_STACK_LINE(117)
				hx::AddEq(this->_RefillX,(int)1);
				HX_STACK_LINE(118)
				this->propertyChanged(HX_CSTRING("_RefillX"),this->_RefillX);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_9_9_BeatLineManager_obj,_customEvent_BeaterSpawn,(void))


Design_9_9_BeatLineManager_obj::Design_9_9_BeatLineManager_obj()
{
}

void Design_9_9_BeatLineManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Design_9_9_BeatLineManager);
	HX_MARK_MEMBER_NAME(_SpecialSpawn,"_SpecialSpawn");
	HX_MARK_MEMBER_NAME(_BP,"_BP");
	HX_MARK_MEMBER_NAME(_GemType,"_GemType");
	HX_MARK_MEMBER_NAME(_RefillY,"_RefillY");
	HX_MARK_MEMBER_NAME(_RefillX,"_RefillX");
	HX_MARK_MEMBER_NAME(_SpawnTypeActor,"_SpawnTypeActor");
	HX_MARK_MEMBER_NAME(_SpawnTypeID,"_SpawnTypeID");
	HX_MARK_MEMBER_NAME(_BeatPos,"_BeatPos");
	HX_MARK_MEMBER_NAME(_GridSpacing,"_GridSpacing");
	HX_MARK_MEMBER_NAME(_YIncrementer,"_YIncrementer");
	HX_MARK_MEMBER_NAME(_BeatLineY,"_BeatLineY");
	HX_MARK_MEMBER_NAME(_BeatLineX,"_BeatLineX");
	HX_MARK_MEMBER_NAME(_AlreadySpawned,"_AlreadySpawned");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Design_9_9_BeatLineManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_SpecialSpawn,"_SpecialSpawn");
	HX_VISIT_MEMBER_NAME(_BP,"_BP");
	HX_VISIT_MEMBER_NAME(_GemType,"_GemType");
	HX_VISIT_MEMBER_NAME(_RefillY,"_RefillY");
	HX_VISIT_MEMBER_NAME(_RefillX,"_RefillX");
	HX_VISIT_MEMBER_NAME(_SpawnTypeActor,"_SpawnTypeActor");
	HX_VISIT_MEMBER_NAME(_SpawnTypeID,"_SpawnTypeID");
	HX_VISIT_MEMBER_NAME(_BeatPos,"_BeatPos");
	HX_VISIT_MEMBER_NAME(_GridSpacing,"_GridSpacing");
	HX_VISIT_MEMBER_NAME(_YIncrementer,"_YIncrementer");
	HX_VISIT_MEMBER_NAME(_BeatLineY,"_BeatLineY");
	HX_VISIT_MEMBER_NAME(_BeatLineX,"_BeatLineX");
	HX_VISIT_MEMBER_NAME(_AlreadySpawned,"_AlreadySpawned");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Design_9_9_BeatLineManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_BP") ) { return _BP; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_GemType") ) { return _GemType; }
		if (HX_FIELD_EQ(inName,"_RefillY") ) { return _RefillY; }
		if (HX_FIELD_EQ(inName,"_RefillX") ) { return _RefillX; }
		if (HX_FIELD_EQ(inName,"_BeatPos") ) { return _BeatPos; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_BeatLineY") ) { return _BeatLineY; }
		if (HX_FIELD_EQ(inName,"_BeatLineX") ) { return _BeatLineX; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_SpawnTypeID") ) { return _SpawnTypeID; }
		if (HX_FIELD_EQ(inName,"_GridSpacing") ) { return _GridSpacing; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_SpecialSpawn") ) { return _SpecialSpawn; }
		if (HX_FIELD_EQ(inName,"_YIncrementer") ) { return _YIncrementer; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"forwardMessage") ) { return forwardMessage_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_SpawnTypeActor") ) { return _SpawnTypeActor; }
		if (HX_FIELD_EQ(inName,"_AlreadySpawned") ) { return _AlreadySpawned; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_customEvent_BeaterSpawn") ) { return _customEvent_BeaterSpawn_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Design_9_9_BeatLineManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_BP") ) { _BP=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_GemType") ) { _GemType=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_RefillY") ) { _RefillY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_RefillX") ) { _RefillX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_BeatPos") ) { _BeatPos=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_BeatLineY") ) { _BeatLineY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_BeatLineX") ) { _BeatLineX=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_SpawnTypeID") ) { _SpawnTypeID=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_GridSpacing") ) { _GridSpacing=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_SpecialSpawn") ) { _SpecialSpawn=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_YIncrementer") ) { _YIncrementer=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_SpawnTypeActor") ) { _SpawnTypeActor=inValue.Cast< ::com::stencyl::models::actor::ActorType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_AlreadySpawned") ) { _AlreadySpawned=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Design_9_9_BeatLineManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_SpecialSpawn"));
	outFields->push(HX_CSTRING("_BP"));
	outFields->push(HX_CSTRING("_GemType"));
	outFields->push(HX_CSTRING("_RefillY"));
	outFields->push(HX_CSTRING("_RefillX"));
	outFields->push(HX_CSTRING("_SpawnTypeActor"));
	outFields->push(HX_CSTRING("_SpawnTypeID"));
	outFields->push(HX_CSTRING("_BeatPos"));
	outFields->push(HX_CSTRING("_GridSpacing"));
	outFields->push(HX_CSTRING("_YIncrementer"));
	outFields->push(HX_CSTRING("_BeatLineY"));
	outFields->push(HX_CSTRING("_BeatLineX"));
	outFields->push(HX_CSTRING("_AlreadySpawned"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("forwardMessage"),
	HX_CSTRING("init"),
	HX_CSTRING("_customEvent_BeaterSpawn"),
	HX_CSTRING("_SpecialSpawn"),
	HX_CSTRING("_BP"),
	HX_CSTRING("_GemType"),
	HX_CSTRING("_RefillY"),
	HX_CSTRING("_RefillX"),
	HX_CSTRING("_SpawnTypeActor"),
	HX_CSTRING("_SpawnTypeID"),
	HX_CSTRING("_BeatPos"),
	HX_CSTRING("_GridSpacing"),
	HX_CSTRING("_YIncrementer"),
	HX_CSTRING("_BeatLineY"),
	HX_CSTRING("_BeatLineX"),
	HX_CSTRING("_AlreadySpawned"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Design_9_9_BeatLineManager_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Design_9_9_BeatLineManager_obj::__mClass,"__mClass");
};

Class Design_9_9_BeatLineManager_obj::__mClass;

void Design_9_9_BeatLineManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scripts.Design_9_9_BeatLineManager"), hx::TCanCast< Design_9_9_BeatLineManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Design_9_9_BeatLineManager_obj::__boot()
{
}

} // end namespace scripts
