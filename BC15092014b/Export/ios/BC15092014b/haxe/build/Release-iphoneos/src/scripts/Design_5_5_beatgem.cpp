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
#ifndef INCLUDED_com_stencyl_Input
#include <com/stencyl/Input.h>
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
#ifndef INCLUDED_com_stencyl_graphics_G
#include <com/stencyl/graphics/G.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Region
#include <com/stencyl/models/Region.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Sound
#include <com/stencyl/models/Sound.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_ActorType
#include <com/stencyl/models/actor/ActorType.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Collection
#include <de/polygonal/ds/Collection.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Hashable
#include <de/polygonal/ds/Hashable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_IntHashTable
#include <de/polygonal/ds/IntHashTable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Itr
#include <de/polygonal/ds/Itr.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Map
#include <de/polygonal/ds/Map.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
#endif
#ifndef INCLUDED_motion_easing_Quad
#include <motion/easing/Quad.h>
#endif
#ifndef INCLUDED_scripts_Design_5_5_beatgem
#include <scripts/Design_5_5_beatgem.h>
#endif
namespace scripts{

Void Design_5_5_beatgem_obj::__construct(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine)
{
HX_STACK_PUSH("Design_5_5_beatgem::new","scripts/Design_5_5_beatgem.hx",696);
{
	HX_STACK_LINE(697)
	super::__construct(actor,engine);
	HX_STACK_LINE(698)
	this->nameMap->set(HX_CSTRING("StartX"),HX_CSTRING("_StartX"));
	HX_STACK_LINE(699)
	this->_StartX = 0.0;
	HX_STACK_LINE(700)
	this->nameMap->set(HX_CSTRING("StartY"),HX_CSTRING("_StartY"));
	HX_STACK_LINE(701)
	this->_StartY = 0.0;
	HX_STACK_LINE(702)
	this->nameMap->set(HX_CSTRING("Swapping?"),HX_CSTRING("_Swapping"));
	HX_STACK_LINE(703)
	this->_Swapping = false;
	HX_STACK_LINE(704)
	this->nameMap->set(HX_CSTRING("Target"),HX_CSTRING("_Target"));
	HX_STACK_LINE(705)
	this->nameMap->set(HX_CSTRING("AlreadySpawned?"),HX_CSTRING("_AlreadySpawned"));
	HX_STACK_LINE(706)
	this->_AlreadySpawned = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(707)
	this->nameMap->set(HX_CSTRING("SoundType"),HX_CSTRING("_SoundType"));
	HX_STACK_LINE(708)
	this->_SoundType = 0.0;
	HX_STACK_LINE(709)
	this->nameMap->set(HX_CSTRING("GemSound"),HX_CSTRING("_GemSound"));
	HX_STACK_LINE(710)
	this->nameMap->set(HX_CSTRING("NewX"),HX_CSTRING("_NewX"));
	HX_STACK_LINE(711)
	this->_NewX = 0.0;
	HX_STACK_LINE(712)
	this->nameMap->set(HX_CSTRING("NewY"),HX_CSTRING("_NewY"));
	HX_STACK_LINE(713)
	this->_NewY = 0.0;
	HX_STACK_LINE(714)
	this->nameMap->set(HX_CSTRING("SwappingUP"),HX_CSTRING("_SwappingUP"));
	HX_STACK_LINE(715)
	this->_SwappingUP = false;
	HX_STACK_LINE(716)
	this->nameMap->set(HX_CSTRING("SwappingDown"),HX_CSTRING("_SwappingDown"));
	HX_STACK_LINE(717)
	this->_SwappingDown = false;
	HX_STACK_LINE(718)
	this->nameMap->set(HX_CSTRING("SwappingLeft"),HX_CSTRING("_SwappingLeft"));
	HX_STACK_LINE(719)
	this->_SwappingLeft = false;
	HX_STACK_LINE(720)
	this->nameMap->set(HX_CSTRING("SwappingRight"),HX_CSTRING("_SwappingRight"));
	HX_STACK_LINE(721)
	this->_SwappingRight = false;
	HX_STACK_LINE(722)
	this->nameMap->set(HX_CSTRING("GemTypeNumber"),HX_CSTRING("_GemTypeNumber"));
	HX_STACK_LINE(723)
	this->_GemTypeNumber = 0.0;
	HX_STACK_LINE(724)
	this->nameMap->set(HX_CSTRING("Actor"),HX_CSTRING("actor"));
	HX_STACK_LINE(725)
	this->nameMap->set(HX_CSTRING("GemID"),HX_CSTRING("_GemID"));
	HX_STACK_LINE(726)
	this->_GemID = 0.0;
	HX_STACK_LINE(727)
	this->nameMap->set(HX_CSTRING("Octave"),HX_CSTRING("_Octave"));
	HX_STACK_LINE(728)
	this->_Octave = 0.0;
	HX_STACK_LINE(729)
	this->nameMap->set(HX_CSTRING("Colliding?"),HX_CSTRING("_Colliding"));
	HX_STACK_LINE(730)
	this->_Colliding = false;
	HX_STACK_LINE(731)
	this->nameMap->set(HX_CSTRING("ActorReveal"),HX_CSTRING("_ActorReveal"));
	HX_STACK_LINE(732)
	this->_ActorReveal = 0.0;
	HX_STACK_LINE(733)
	this->nameMap->set(HX_CSTRING("RegionList"),HX_CSTRING("_RegionList"));
	HX_STACK_LINE(734)
	this->_RegionList = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(735)
	this->nameMap->set(HX_CSTRING("YIncrementer"),HX_CSTRING("_YIncrementer"));
	HX_STACK_LINE(736)
	this->_YIncrementer = 0.0;
	HX_STACK_LINE(737)
	this->nameMap->set(HX_CSTRING("Xincrementer"),HX_CSTRING("_Xincrementer"));
	HX_STACK_LINE(738)
	this->_Xincrementer = 0.0;
	HX_STACK_LINE(739)
	this->nameMap->set(HX_CSTRING("SelfSelector"),HX_CSTRING("_SelfSelector"));
	HX_STACK_LINE(740)
	this->nameMap->set(HX_CSTRING("UID"),HX_CSTRING("_UID"));
	HX_STACK_LINE(741)
	this->_UID = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(742)
	this->nameMap->set(HX_CSTRING("SpawnType_ID"),HX_CSTRING("_SpawnTypeID"));
	HX_STACK_LINE(743)
	this->_SpawnTypeID = 0.0;
	HX_STACK_LINE(744)
	this->nameMap->set(HX_CSTRING("SpawnTypeActor"),HX_CSTRING("_SpawnTypeActor"));
	HX_STACK_LINE(745)
	this->nameMap->set(HX_CSTRING("type2"),HX_CSTRING("_type2"));
	HX_STACK_LINE(746)
	this->nameMap->set(HX_CSTRING("type1"),HX_CSTRING("_type1"));
	HX_STACK_LINE(747)
	this->nameMap->set(HX_CSTRING("type4"),HX_CSTRING("_type4"));
	HX_STACK_LINE(748)
	this->nameMap->set(HX_CSTRING("type6"),HX_CSTRING("_type6"));
	HX_STACK_LINE(749)
	this->nameMap->set(HX_CSTRING("type5"),HX_CSTRING("_type5"));
	HX_STACK_LINE(750)
	this->nameMap->set(HX_CSTRING("Metronome"),HX_CSTRING("_Metronome"));
	HX_STACK_LINE(751)
	this->nameMap->set(HX_CSTRING("BeaterCombo"),HX_CSTRING("_BeaterCombo"));
	HX_STACK_LINE(752)
	this->_BeaterCombo = 0.0;
	HX_STACK_LINE(753)
	this->nameMap->set(HX_CSTRING("type3"),HX_CSTRING("_type3"));
	HX_STACK_LINE(754)
	this->nameMap->set(HX_CSTRING("Direction"),HX_CSTRING("_Direction"));
	HX_STACK_LINE(755)
	this->_Direction = 0.0;
	HX_STACK_LINE(756)
	this->nameMap->set(HX_CSTRING("Type7"),HX_CSTRING("_Type7"));
	HX_STACK_LINE(757)
	this->nameMap->set(HX_CSTRING("Type8"),HX_CSTRING("_Type8"));
	HX_STACK_LINE(758)
	this->nameMap->set(HX_CSTRING("CanSwap?"),HX_CSTRING("_CanSwap"));
	HX_STACK_LINE(759)
	this->_CanSwap = false;
	HX_STACK_LINE(760)
	this->nameMap->set(HX_CSTRING("Gem"),HX_CSTRING("_Gem"));
	HX_STACK_LINE(761)
	this->nameMap->set(HX_CSTRING("type10"),HX_CSTRING("_type10"));
	HX_STACK_LINE(762)
	this->nameMap->set(HX_CSTRING("type11"),HX_CSTRING("_type11"));
	HX_STACK_LINE(763)
	this->nameMap->set(HX_CSTRING("TypeNumber"),HX_CSTRING("_TypeNumber"));
	HX_STACK_LINE(764)
	this->_TypeNumber = 0.0;
	HX_STACK_LINE(765)
	this->nameMap->set(HX_CSTRING("Type9"),HX_CSTRING("_Type9"));
	HX_STACK_LINE(766)
	this->nameMap->set(HX_CSTRING("ColorMatch1"),HX_CSTRING("_ColorMatch1"));
	HX_STACK_LINE(767)
	this->_ColorMatch1 = 0.0;
	HX_STACK_LINE(768)
	this->nameMap->set(HX_CSTRING("ColorMatch2"),HX_CSTRING("_ColorMatch2"));
	HX_STACK_LINE(769)
	this->_ColorMatch2 = 0.0;
	HX_STACK_LINE(770)
	this->nameMap->set(HX_CSTRING("type12"),HX_CSTRING("_type12"));
	HX_STACK_LINE(771)
	this->nameMap->set(HX_CSTRING("Gem_Type"),HX_CSTRING("_GemType"));
	HX_STACK_LINE(772)
	this->_GemType = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(773)
	this->nameMap->set(HX_CSTRING("ColorMatch6"),HX_CSTRING("_ColorMatch6"));
	HX_STACK_LINE(774)
	this->_ColorMatch6 = 0.0;
	HX_STACK_LINE(775)
	this->nameMap->set(HX_CSTRING("ColorMatch5"),HX_CSTRING("_ColorMatch5"));
	HX_STACK_LINE(776)
	this->_ColorMatch5 = 0.0;
	HX_STACK_LINE(777)
	this->nameMap->set(HX_CSTRING("ColorMatch4"),HX_CSTRING("_ColorMatch4"));
	HX_STACK_LINE(778)
	this->_ColorMatch4 = 0.0;
	HX_STACK_LINE(779)
	this->nameMap->set(HX_CSTRING("ColorMatch3"),HX_CSTRING("_ColorMatch3"));
	HX_STACK_LINE(780)
	this->_ColorMatch3 = 0.0;
	HX_STACK_LINE(781)
	this->nameMap->set(HX_CSTRING("Type16"),HX_CSTRING("_Type16"));
	HX_STACK_LINE(782)
	this->nameMap->set(HX_CSTRING("Type15"),HX_CSTRING("_Type15"));
	HX_STACK_LINE(783)
	this->nameMap->set(HX_CSTRING("Type14"),HX_CSTRING("_Type14"));
	HX_STACK_LINE(784)
	this->nameMap->set(HX_CSTRING("Type13"),HX_CSTRING("_Type13"));
	HX_STACK_LINE(785)
	this->nameMap->set(HX_CSTRING("RegionCreated?"),HX_CSTRING("_RegionCreated"));
	HX_STACK_LINE(786)
	this->_RegionCreated = false;
	HX_STACK_LINE(787)
	this->nameMap->set(HX_CSTRING("Degrees"),HX_CSTRING("_Degrees"));
	HX_STACK_LINE(788)
	this->_Degrees = 0.0;
	HX_STACK_LINE(789)
	this->nameMap->set(HX_CSTRING("Type18"),HX_CSTRING("_Type18"));
	HX_STACK_LINE(790)
	this->nameMap->set(HX_CSTRING("Type17"),HX_CSTRING("_Type17"));
	HX_STACK_LINE(791)
	this->nameMap->set(HX_CSTRING("Taplist"),HX_CSTRING("_Taplist"));
	HX_STACK_LINE(792)
	this->_Taplist = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(793)
	this->nameMap->set(HX_CSTRING("GemSelector"),HX_CSTRING("_GemSelector"));
	HX_STACK_LINE(794)
	this->_GemSelector = 0.0;
	HX_STACK_LINE(795)
	this->nameMap->set(HX_CSTRING("Tappable?"),HX_CSTRING("_Tappable"));
	HX_STACK_LINE(796)
	this->_Tappable = false;
	HX_STACK_LINE(797)
	this->nameMap->set(HX_CSTRING("GTempo"),HX_CSTRING("_GTempo"));
	HX_STACK_LINE(798)
	this->_GTempo = 0.0;
	HX_STACK_LINE(799)
	this->nameMap->set(HX_CSTRING("tapping?"),HX_CSTRING("_tapping"));
	HX_STACK_LINE(800)
	this->_tapping = false;
	HX_STACK_LINE(801)
	this->nameMap->set(HX_CSTRING("TappingList"),HX_CSTRING("_TappingList"));
	HX_STACK_LINE(802)
	this->_TappingList = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(803)
	this->nameMap->set(HX_CSTRING("RestTap"),HX_CSTRING("_RestTap"));
	HX_STACK_LINE(804)
	this->_RestTap = false;
}
;
	return null();
}

Design_5_5_beatgem_obj::~Design_5_5_beatgem_obj() { }

Dynamic Design_5_5_beatgem_obj::__CreateEmpty() { return  new Design_5_5_beatgem_obj; }
hx::ObjectPtr< Design_5_5_beatgem_obj > Design_5_5_beatgem_obj::__new(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine)
{  hx::ObjectPtr< Design_5_5_beatgem_obj > result = new Design_5_5_beatgem_obj();
	result->__construct(dummy,actor,engine);
	return result;}

Dynamic Design_5_5_beatgem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Design_5_5_beatgem_obj > result = new Design_5_5_beatgem_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Design_5_5_beatgem_obj::forwardMessage( ::String msg){
{
		HX_STACK_PUSH("Design_5_5_beatgem::forwardMessage","scripts/Design_5_5_beatgem.hx",1582);
		HX_STACK_THIS(this);
		HX_STACK_ARG(msg,"msg");
	}
return null();
}


Void Design_5_5_beatgem_obj::init( ){
{
		HX_STACK_PUSH("Design_5_5_beatgem::init","scripts/Design_5_5_beatgem.hx",809);
		HX_STACK_THIS(this);
		HX_STACK_LINE(808)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static Float Block( ::scripts::Design_5_5_beatgem_obj *__this){
				HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",812);
				{
					HX_STACK_LINE(812)
					Dynamic o = __this->getGameAttribute(HX_CSTRING("fixedGT"));		HX_STACK_VAR(o,"o");
					struct _Function_2_1{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",812);
							{
								HX_STACK_LINE(812)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",812);
							{
								HX_STACK_LINE(812)
								::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(812)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(812)
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_2::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(812)
		this->_GTempo = _Function_1_1::Block(this);
		HX_STACK_LINE(813)
		this->propertyChanged(HX_CSTRING("_GTempo"),this->_GTempo);
		HX_STACK_LINE(814)
		this->_Tappable = false;
		HX_STACK_LINE(815)
		this->propertyChanged(HX_CSTRING("_Tappable"),this->_Tappable);
		HX_STACK_LINE(816)
		this->setGameAttribute(HX_CSTRING("TapMode"),false);
		HX_STACK_LINE(817)
		this->_tapping = false;
		HX_STACK_LINE(818)
		this->propertyChanged(HX_CSTRING("_tapping"),this->_tapping);
		struct _Function_1_2{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",819);
				{
					HX_STACK_LINE(819)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_3{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",819);
				{
					HX_STACK_LINE(819)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(819)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(819)
		this->_Degrees = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_2::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_3::Block()) )) )) )) );
		HX_STACK_LINE(820)
		this->propertyChanged(HX_CSTRING("_Degrees"),this->_Degrees);
		HX_STACK_LINE(821)
		this->_CanSwap = true;
		HX_STACK_LINE(822)
		this->propertyChanged(HX_CSTRING("_CanSwap"),this->_CanSwap);
		HX_STACK_LINE(823)
		if ((this->getGameAttribute(HX_CSTRING("Started?")))){
			HX_STACK_LINE(825)
			this->actor->disableActorDrawing();
			HX_STACK_LINE(826)
			this->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_DrawOrder"))->__Field(HX_CSTRING("push"),true)(this->actor->ID);
		}
		HX_STACK_LINE(829)
		this->_RegionList = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(830)
		this->propertyChanged(HX_CSTRING("_RegionList"),this->_RegionList);
		struct _Function_1_4{
			inline static Float Block( ::scripts::Design_5_5_beatgem_obj *__this){
				HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",831);
				{
					HX_STACK_LINE(831)
					Dynamic o = __this->getGameAttribute(HX_CSTRING("GemID"));		HX_STACK_VAR(o,"o");
					struct _Function_2_1{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",831);
							{
								HX_STACK_LINE(831)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",831);
							{
								HX_STACK_LINE(831)
								::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(831)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(831)
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_2::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(831)
		this->_GemID = _Function_1_4::Block(this);
		HX_STACK_LINE(832)
		this->propertyChanged(HX_CSTRING("_GemID"),this->_GemID);
		HX_STACK_LINE(833)
		if (((bool((this->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_SpecialSpawn")) == true)) && bool((this->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_CreateBombPiece")) == true))))){
			HX_STACK_LINE(836)
			this->setValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_CreateBombPiece"),false);
			HX_STACK_LINE(837)
			if (((this->_GemID == (int)1))){
				struct _Function_3_1{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",839);
						{
							HX_STACK_LINE(839)
							return (  ((hx::TCast< Bool >::cast((int)13))) ? int((int)1) : int((int)0) );
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",839);
						{
							HX_STACK_LINE(839)
							::haxe::Log_obj::trace((HX_CSTRING("13") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
							HX_STACK_LINE(839)
							return (int)0;
						}
						return null();
					}
				};
				HX_STACK_LINE(839)
				this->_GemID = (  ((::Std_obj::is((int)13,hx::ClassOf< ::Float >()))) ? Float((int)13) : Float((  ((::Std_obj::is((int)13,hx::ClassOf< ::Int >()))) ? Float((int)13) : Float((  ((::Std_obj::is((int)13,hx::ClassOf< ::Bool >()))) ? Float(_Function_3_1::Block()) : Float((  ((::Std_obj::is((int)13,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)13)) : Float(_Function_3_2::Block()) )) )) )) );
				HX_STACK_LINE(840)
				this->propertyChanged(HX_CSTRING("_GemID"),this->_GemID);
			}
			HX_STACK_LINE(843)
			if (((this->_GemID == (int)2))){
				struct _Function_3_1{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",845);
						{
							HX_STACK_LINE(845)
							return (  ((hx::TCast< Bool >::cast((int)14))) ? int((int)1) : int((int)0) );
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",845);
						{
							HX_STACK_LINE(845)
							::haxe::Log_obj::trace((HX_CSTRING("14") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
							HX_STACK_LINE(845)
							return (int)0;
						}
						return null();
					}
				};
				HX_STACK_LINE(845)
				this->_GemID = (  ((::Std_obj::is((int)14,hx::ClassOf< ::Float >()))) ? Float((int)14) : Float((  ((::Std_obj::is((int)14,hx::ClassOf< ::Int >()))) ? Float((int)14) : Float((  ((::Std_obj::is((int)14,hx::ClassOf< ::Bool >()))) ? Float(_Function_3_1::Block()) : Float((  ((::Std_obj::is((int)14,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)14)) : Float(_Function_3_2::Block()) )) )) )) );
				HX_STACK_LINE(846)
				this->propertyChanged(HX_CSTRING("_GemID"),this->_GemID);
			}
			HX_STACK_LINE(849)
			if (((this->_GemID == (int)3))){
				struct _Function_3_1{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",851);
						{
							HX_STACK_LINE(851)
							return (  ((hx::TCast< Bool >::cast((int)15))) ? int((int)1) : int((int)0) );
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",851);
						{
							HX_STACK_LINE(851)
							::haxe::Log_obj::trace((HX_CSTRING("15") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
							HX_STACK_LINE(851)
							return (int)0;
						}
						return null();
					}
				};
				HX_STACK_LINE(851)
				this->_GemID = (  ((::Std_obj::is((int)15,hx::ClassOf< ::Float >()))) ? Float((int)15) : Float((  ((::Std_obj::is((int)15,hx::ClassOf< ::Int >()))) ? Float((int)15) : Float((  ((::Std_obj::is((int)15,hx::ClassOf< ::Bool >()))) ? Float(_Function_3_1::Block()) : Float((  ((::Std_obj::is((int)15,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)15)) : Float(_Function_3_2::Block()) )) )) )) );
				HX_STACK_LINE(852)
				this->propertyChanged(HX_CSTRING("_GemID"),this->_GemID);
			}
			HX_STACK_LINE(855)
			if (((this->_GemID == (int)4))){
				struct _Function_3_1{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",857);
						{
							HX_STACK_LINE(857)
							return (  ((hx::TCast< Bool >::cast((int)16))) ? int((int)1) : int((int)0) );
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",857);
						{
							HX_STACK_LINE(857)
							::haxe::Log_obj::trace((HX_CSTRING("16") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
							HX_STACK_LINE(857)
							return (int)0;
						}
						return null();
					}
				};
				HX_STACK_LINE(857)
				this->_GemID = (  ((::Std_obj::is((int)16,hx::ClassOf< ::Float >()))) ? Float((int)16) : Float((  ((::Std_obj::is((int)16,hx::ClassOf< ::Int >()))) ? Float((int)16) : Float((  ((::Std_obj::is((int)16,hx::ClassOf< ::Bool >()))) ? Float(_Function_3_1::Block()) : Float((  ((::Std_obj::is((int)16,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)16)) : Float(_Function_3_2::Block()) )) )) )) );
				HX_STACK_LINE(858)
				this->propertyChanged(HX_CSTRING("_GemID"),this->_GemID);
			}
			HX_STACK_LINE(861)
			if (((this->_GemID == (int)5))){
				struct _Function_3_1{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",863);
						{
							HX_STACK_LINE(863)
							return (  ((hx::TCast< Bool >::cast((int)17))) ? int((int)1) : int((int)0) );
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",863);
						{
							HX_STACK_LINE(863)
							::haxe::Log_obj::trace((HX_CSTRING("17") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
							HX_STACK_LINE(863)
							return (int)0;
						}
						return null();
					}
				};
				HX_STACK_LINE(863)
				this->_GemID = (  ((::Std_obj::is((int)17,hx::ClassOf< ::Float >()))) ? Float((int)17) : Float((  ((::Std_obj::is((int)17,hx::ClassOf< ::Int >()))) ? Float((int)17) : Float((  ((::Std_obj::is((int)17,hx::ClassOf< ::Bool >()))) ? Float(_Function_3_1::Block()) : Float((  ((::Std_obj::is((int)17,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)17)) : Float(_Function_3_2::Block()) )) )) )) );
				HX_STACK_LINE(864)
				this->propertyChanged(HX_CSTRING("_GemID"),this->_GemID);
			}
			HX_STACK_LINE(867)
			if (((this->_GemID == (int)6))){
				struct _Function_3_1{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",869);
						{
							HX_STACK_LINE(869)
							return (  ((hx::TCast< Bool >::cast((int)18))) ? int((int)1) : int((int)0) );
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",869);
						{
							HX_STACK_LINE(869)
							::haxe::Log_obj::trace((HX_CSTRING("18") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
							HX_STACK_LINE(869)
							return (int)0;
						}
						return null();
					}
				};
				HX_STACK_LINE(869)
				this->_GemID = (  ((::Std_obj::is((int)18,hx::ClassOf< ::Float >()))) ? Float((int)18) : Float((  ((::Std_obj::is((int)18,hx::ClassOf< ::Int >()))) ? Float((int)18) : Float((  ((::Std_obj::is((int)18,hx::ClassOf< ::Bool >()))) ? Float(_Function_3_1::Block()) : Float((  ((::Std_obj::is((int)18,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)18)) : Float(_Function_3_2::Block()) )) )) )) );
				HX_STACK_LINE(870)
				this->propertyChanged(HX_CSTRING("_GemID"),this->_GemID);
			}
			HX_STACK_LINE(873)
			this->setValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_CreateBombPiece"),false);
			HX_STACK_LINE(874)
			::haxe::Log_obj::trace((HX_CSTRING("") + (((HX_CSTRING("") + HX_CSTRING("CreateBombPiece?")) + ((HX_CSTRING("") + ::Std_obj::string(this->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_CreateBombPiece")))))))),hx::SourceInfo(HX_CSTRING("Design_5_5_beatgem.hx"),874,HX_CSTRING("scripts.Design_5_5_beatgem"),HX_CSTRING("init")));
		}
		else{
			HX_STACK_LINE(877)
			if (((this->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_SpecialSpawn")) == true))){
				HX_STACK_LINE(880)
				if (((this->_GemID == (int)1))){
					struct _Function_4_1{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",882);
							{
								HX_STACK_LINE(882)
								return (  ((hx::TCast< Bool >::cast((int)7))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",882);
							{
								HX_STACK_LINE(882)
								::haxe::Log_obj::trace((HX_CSTRING("7") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(882)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(882)
					this->_GemID = (  ((::Std_obj::is((int)7,hx::ClassOf< ::Float >()))) ? Float((int)7) : Float((  ((::Std_obj::is((int)7,hx::ClassOf< ::Int >()))) ? Float((int)7) : Float((  ((::Std_obj::is((int)7,hx::ClassOf< ::Bool >()))) ? Float(_Function_4_1::Block()) : Float((  ((::Std_obj::is((int)7,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)7)) : Float(_Function_4_2::Block()) )) )) )) );
					HX_STACK_LINE(883)
					this->propertyChanged(HX_CSTRING("_GemID"),this->_GemID);
				}
				HX_STACK_LINE(886)
				if (((this->_GemID == (int)2))){
					struct _Function_4_1{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",888);
							{
								HX_STACK_LINE(888)
								return (  ((hx::TCast< Bool >::cast((int)8))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",888);
							{
								HX_STACK_LINE(888)
								::haxe::Log_obj::trace((HX_CSTRING("8") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(888)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(888)
					this->_GemID = (  ((::Std_obj::is((int)8,hx::ClassOf< ::Float >()))) ? Float((int)8) : Float((  ((::Std_obj::is((int)8,hx::ClassOf< ::Int >()))) ? Float((int)8) : Float((  ((::Std_obj::is((int)8,hx::ClassOf< ::Bool >()))) ? Float(_Function_4_1::Block()) : Float((  ((::Std_obj::is((int)8,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)8)) : Float(_Function_4_2::Block()) )) )) )) );
					HX_STACK_LINE(889)
					this->propertyChanged(HX_CSTRING("_GemID"),this->_GemID);
				}
				HX_STACK_LINE(892)
				if (((this->_GemID == (int)3))){
					struct _Function_4_1{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",894);
							{
								HX_STACK_LINE(894)
								return (  ((hx::TCast< Bool >::cast((int)9))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",894);
							{
								HX_STACK_LINE(894)
								::haxe::Log_obj::trace((HX_CSTRING("9") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(894)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(894)
					this->_GemID = (  ((::Std_obj::is((int)9,hx::ClassOf< ::Float >()))) ? Float((int)9) : Float((  ((::Std_obj::is((int)9,hx::ClassOf< ::Int >()))) ? Float((int)9) : Float((  ((::Std_obj::is((int)9,hx::ClassOf< ::Bool >()))) ? Float(_Function_4_1::Block()) : Float((  ((::Std_obj::is((int)9,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)9)) : Float(_Function_4_2::Block()) )) )) )) );
					HX_STACK_LINE(895)
					this->propertyChanged(HX_CSTRING("_GemID"),this->_GemID);
				}
				HX_STACK_LINE(898)
				if (((this->_GemID == (int)4))){
					struct _Function_4_1{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",900);
							{
								HX_STACK_LINE(900)
								return (  ((hx::TCast< Bool >::cast((int)12))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",900);
							{
								HX_STACK_LINE(900)
								::haxe::Log_obj::trace((HX_CSTRING("12") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(900)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(900)
					this->_GemID = (  ((::Std_obj::is((int)12,hx::ClassOf< ::Float >()))) ? Float((int)12) : Float((  ((::Std_obj::is((int)12,hx::ClassOf< ::Int >()))) ? Float((int)12) : Float((  ((::Std_obj::is((int)12,hx::ClassOf< ::Bool >()))) ? Float(_Function_4_1::Block()) : Float((  ((::Std_obj::is((int)12,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)12)) : Float(_Function_4_2::Block()) )) )) )) );
					HX_STACK_LINE(901)
					this->propertyChanged(HX_CSTRING("_GemID"),this->_GemID);
				}
				HX_STACK_LINE(904)
				if (((this->_GemID == (int)5))){
					struct _Function_4_1{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",906);
							{
								HX_STACK_LINE(906)
								return (  ((hx::TCast< Bool >::cast((int)10))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",906);
							{
								HX_STACK_LINE(906)
								::haxe::Log_obj::trace((HX_CSTRING("10") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(906)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(906)
					this->_GemID = (  ((::Std_obj::is((int)10,hx::ClassOf< ::Float >()))) ? Float((int)10) : Float((  ((::Std_obj::is((int)10,hx::ClassOf< ::Int >()))) ? Float((int)10) : Float((  ((::Std_obj::is((int)10,hx::ClassOf< ::Bool >()))) ? Float(_Function_4_1::Block()) : Float((  ((::Std_obj::is((int)10,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)10)) : Float(_Function_4_2::Block()) )) )) )) );
					HX_STACK_LINE(907)
					this->propertyChanged(HX_CSTRING("_GemID"),this->_GemID);
				}
				HX_STACK_LINE(910)
				if (((this->_GemID == (int)6))){
					struct _Function_4_1{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",912);
							{
								HX_STACK_LINE(912)
								return (  ((hx::TCast< Bool >::cast((int)11))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",912);
							{
								HX_STACK_LINE(912)
								::haxe::Log_obj::trace((HX_CSTRING("11") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(912)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(912)
					this->_GemID = (  ((::Std_obj::is((int)11,hx::ClassOf< ::Float >()))) ? Float((int)11) : Float((  ((::Std_obj::is((int)11,hx::ClassOf< ::Int >()))) ? Float((int)11) : Float((  ((::Std_obj::is((int)11,hx::ClassOf< ::Bool >()))) ? Float(_Function_4_1::Block()) : Float((  ((::Std_obj::is((int)11,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)11)) : Float(_Function_4_2::Block()) )) )) )) );
					HX_STACK_LINE(913)
					this->propertyChanged(HX_CSTRING("_GemID"),this->_GemID);
				}
				HX_STACK_LINE(916)
				this->setValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_SpecialSpawn"),false);
			}
		}
		HX_STACK_LINE(919)
		if (((this->_GemID == (int)1))){
			HX_STACK_LINE(920)
			this->actor->setAnimation((HX_CSTRING("") + this->_type1));
		}
		HX_STACK_LINE(924)
		if (((this->_GemID == (int)2))){
			HX_STACK_LINE(925)
			this->actor->setAnimation((HX_CSTRING("") + this->_type2));
		}
		HX_STACK_LINE(929)
		if (((this->_GemID == (int)3))){
			HX_STACK_LINE(930)
			this->actor->setAnimation((HX_CSTRING("") + this->_type3));
		}
		HX_STACK_LINE(934)
		if (((this->_GemID == (int)4))){
			HX_STACK_LINE(935)
			this->actor->setAnimation((HX_CSTRING("") + this->_type4));
		}
		HX_STACK_LINE(939)
		if (((this->_GemID == (int)5))){
			HX_STACK_LINE(940)
			this->actor->setAnimation((HX_CSTRING("") + this->_type5));
		}
		HX_STACK_LINE(944)
		if (((this->_GemID == (int)6))){
			HX_STACK_LINE(945)
			this->actor->setAnimation((HX_CSTRING("") + this->_type6));
		}
		HX_STACK_LINE(949)
		if (((this->_GemID == (int)7))){
			HX_STACK_LINE(950)
			this->actor->setAnimation((HX_CSTRING("") + this->_Type7));
		}
		HX_STACK_LINE(954)
		if (((this->_GemID == (int)8))){
			HX_STACK_LINE(955)
			this->actor->setAnimation((HX_CSTRING("") + this->_Type8));
		}
		HX_STACK_LINE(959)
		if (((this->_GemID == (int)9))){
			HX_STACK_LINE(960)
			this->actor->setAnimation((HX_CSTRING("") + this->_Type9));
		}
		HX_STACK_LINE(964)
		if (((this->_GemID == (int)10))){
			HX_STACK_LINE(965)
			this->actor->setAnimation((HX_CSTRING("") + this->_type10));
		}
		HX_STACK_LINE(969)
		if (((this->_GemID == (int)11))){
			HX_STACK_LINE(970)
			this->actor->setAnimation((HX_CSTRING("") + this->_type11));
		}
		HX_STACK_LINE(974)
		if (((this->_GemID == (int)12))){
			HX_STACK_LINE(975)
			this->actor->setAnimation((HX_CSTRING("") + this->_type12));
		}
		HX_STACK_LINE(979)
		if (((this->_GemID == (int)13))){
			HX_STACK_LINE(980)
			this->actor->setAnimation((HX_CSTRING("") + this->_Type13));
		}
		HX_STACK_LINE(984)
		if (((this->_GemID == (int)14))){
			HX_STACK_LINE(985)
			this->actor->setAnimation((HX_CSTRING("") + this->_Type14));
		}
		HX_STACK_LINE(989)
		if (((this->_GemID == (int)15))){
			HX_STACK_LINE(990)
			this->actor->setAnimation((HX_CSTRING("") + this->_Type15));
		}
		HX_STACK_LINE(994)
		if (((this->_GemID == (int)16))){
			HX_STACK_LINE(995)
			this->actor->setAnimation((HX_CSTRING("") + this->_Type16));
		}
		HX_STACK_LINE(999)
		if (((this->_GemID == (int)17))){
			HX_STACK_LINE(1000)
			this->actor->setAnimation((HX_CSTRING("") + this->_Type17));
		}
		HX_STACK_LINE(1004)
		if (((this->_GemID == (int)18))){
			HX_STACK_LINE(1005)
			this->actor->setAnimation((HX_CSTRING("") + this->_Type18));
		}
		struct _Function_1_5{
			inline static Float Block( ::scripts::Design_5_5_beatgem_obj *__this){
				HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1009);
				{
					HX_STACK_LINE(1009)
					Dynamic o = __this->getGameAttribute(HX_CSTRING("spawnX"));		HX_STACK_VAR(o,"o");
					struct _Function_2_1{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1009);
							{
								HX_STACK_LINE(1009)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1009);
							{
								HX_STACK_LINE(1009)
								::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(1009)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(1009)
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_2::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(1009)
		this->_StartX = _Function_1_5::Block(this);
		HX_STACK_LINE(1010)
		this->propertyChanged(HX_CSTRING("_StartX"),this->_StartX);
		struct _Function_1_6{
			inline static Float Block( ::scripts::Design_5_5_beatgem_obj *__this){
				HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1011);
				{
					HX_STACK_LINE(1011)
					Dynamic o = __this->getGameAttribute(HX_CSTRING("spawnY"));		HX_STACK_VAR(o,"o");
					struct _Function_2_1{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1011);
							{
								HX_STACK_LINE(1011)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1011);
							{
								HX_STACK_LINE(1011)
								::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(1011)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(1011)
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_2::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(1011)
		this->_StartY = _Function_1_6::Block(this);
		HX_STACK_LINE(1012)
		this->propertyChanged(HX_CSTRING("_StartY"),this->_StartY);
		struct _Function_1_7{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1013);
				{
					HX_STACK_LINE(1013)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_8{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1013);
				{
					HX_STACK_LINE(1013)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(1013)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(1013)
		this->_NewX = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_7::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_8::Block()) )) )) )) );
		HX_STACK_LINE(1014)
		this->propertyChanged(HX_CSTRING("_NewX"),this->_NewX);
		struct _Function_1_9{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1015);
				{
					HX_STACK_LINE(1015)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_10{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1015);
				{
					HX_STACK_LINE(1015)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(1015)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(1015)
		this->_NewY = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_9::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_10::Block()) )) )) )) );
		HX_STACK_LINE(1016)
		this->propertyChanged(HX_CSTRING("_NewY"),this->_NewY);
		HX_STACK_LINE(1017)
		this->_Swapping = false;
		HX_STACK_LINE(1018)
		this->propertyChanged(HX_CSTRING("_Swapping"),this->_Swapping);
		HX_STACK_LINE(1019)
		this->setGameAttribute(HX_CSTRING("Time Since Last Match"),(int)4);
		HX_STACK_LINE(1020)
		::List2D_obj::set_entry(::Std_obj::_int(this->_StartX),::Std_obj::_int(this->_StartY),this->actor->ID,this->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_UID")));
		HX_STACK_LINE(1021)
		if (((bool((this->_GemID >= (int)7)) && bool((this->_GemID <= (int)12))))){
			HX_STACK_LINE(1023)
			this->actor->setActorValue(HX_CSTRING("Special_Type"),(int)1);
			HX_STACK_LINE(1024)
			::List2D_obj::set_entry(::Std_obj::_int(this->_StartX),::Std_obj::_int(this->_StartY),(int)1,this->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_SpecialListBomb")));
		}
		HX_STACK_LINE(1027)
		if (((this->_GemID > (int)12))){
			HX_STACK_LINE(1029)
			this->actor->setActorValue(HX_CSTRING("Special_Type"),(int)2);
			HX_STACK_LINE(1030)
			::List2D_obj::set_entry(::Std_obj::_int(this->_StartX),::Std_obj::_int(this->_StartY),(int)2,this->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_SpecialListBomb")));
		}
		HX_STACK_LINE(1033)
		this->actor->setActorValue(HX_CSTRING("Special_Type"),(int)0);
		HX_STACK_LINE(1034)
		this->actor->setActorValue(HX_CSTRING("StartX"),this->_StartX);
		HX_STACK_LINE(1035)
		this->actor->setActorValue(HX_CSTRING("StartY"),this->_StartY);
		HX_STACK_LINE(1037)
		this->actor->makeAlwaysSimulate(null());
		HX_STACK_LINE(1038)
		this->makeActorNotPassThroughTerrain(this->actor);
		HX_STACK_LINE(1039)
		if (((this->_StartX == (int)0))){
			struct _Function_2_1{
				inline static int Block( ){
					HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1041);
					{
						HX_STACK_LINE(1041)
						return (  ((hx::TCast< Bool >::cast((int)5))) ? int((int)1) : int((int)0) );
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static int Block( ){
					HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1041);
					{
						HX_STACK_LINE(1041)
						::haxe::Log_obj::trace((HX_CSTRING("5") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
						HX_STACK_LINE(1041)
						return (int)0;
					}
					return null();
				}
			};
			HX_STACK_LINE(1041)
			this->_Octave = (  ((::Std_obj::is((int)5,hx::ClassOf< ::Float >()))) ? Float((int)5) : Float((  ((::Std_obj::is((int)5,hx::ClassOf< ::Int >()))) ? Float((int)5) : Float((  ((::Std_obj::is((int)5,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block()) : Float((  ((::Std_obj::is((int)5,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)5)) : Float(_Function_2_2::Block()) )) )) )) );
			HX_STACK_LINE(1042)
			this->propertyChanged(HX_CSTRING("_Octave"),this->_Octave);
		}
		HX_STACK_LINE(1045)
		if (((this->_StartX == (int)1))){
			struct _Function_2_1{
				inline static int Block( ){
					HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1047);
					{
						HX_STACK_LINE(1047)
						return (  ((hx::TCast< Bool >::cast((int)4))) ? int((int)1) : int((int)0) );
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static int Block( ){
					HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1047);
					{
						HX_STACK_LINE(1047)
						::haxe::Log_obj::trace((HX_CSTRING("4") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
						HX_STACK_LINE(1047)
						return (int)0;
					}
					return null();
				}
			};
			HX_STACK_LINE(1047)
			this->_Octave = (  ((::Std_obj::is((int)4,hx::ClassOf< ::Float >()))) ? Float((int)4) : Float((  ((::Std_obj::is((int)4,hx::ClassOf< ::Int >()))) ? Float((int)4) : Float((  ((::Std_obj::is((int)4,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block()) : Float((  ((::Std_obj::is((int)4,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)4)) : Float(_Function_2_2::Block()) )) )) )) );
			HX_STACK_LINE(1048)
			this->propertyChanged(HX_CSTRING("_Octave"),this->_Octave);
		}
		HX_STACK_LINE(1051)
		if (((this->_StartX == (int)2))){
			struct _Function_2_1{
				inline static int Block( ){
					HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1053);
					{
						HX_STACK_LINE(1053)
						return (  ((hx::TCast< Bool >::cast((int)3))) ? int((int)1) : int((int)0) );
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static int Block( ){
					HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1053);
					{
						HX_STACK_LINE(1053)
						::haxe::Log_obj::trace((HX_CSTRING("3") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
						HX_STACK_LINE(1053)
						return (int)0;
					}
					return null();
				}
			};
			HX_STACK_LINE(1053)
			this->_Octave = (  ((::Std_obj::is((int)3,hx::ClassOf< ::Float >()))) ? Float((int)3) : Float((  ((::Std_obj::is((int)3,hx::ClassOf< ::Int >()))) ? Float((int)3) : Float((  ((::Std_obj::is((int)3,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block()) : Float((  ((::Std_obj::is((int)3,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)3)) : Float(_Function_2_2::Block()) )) )) )) );
			HX_STACK_LINE(1054)
			this->propertyChanged(HX_CSTRING("_Octave"),this->_Octave);
		}
		HX_STACK_LINE(1057)
		if (((this->_StartX == (int)3))){
			struct _Function_2_1{
				inline static int Block( ){
					HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1059);
					{
						HX_STACK_LINE(1059)
						return (  ((hx::TCast< Bool >::cast((int)2))) ? int((int)1) : int((int)0) );
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static int Block( ){
					HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1059);
					{
						HX_STACK_LINE(1059)
						::haxe::Log_obj::trace((HX_CSTRING("2") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
						HX_STACK_LINE(1059)
						return (int)0;
					}
					return null();
				}
			};
			HX_STACK_LINE(1059)
			this->_Octave = (  ((::Std_obj::is((int)2,hx::ClassOf< ::Float >()))) ? Float((int)2) : Float((  ((::Std_obj::is((int)2,hx::ClassOf< ::Int >()))) ? Float((int)2) : Float((  ((::Std_obj::is((int)2,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block()) : Float((  ((::Std_obj::is((int)2,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)2)) : Float(_Function_2_2::Block()) )) )) )) );
			HX_STACK_LINE(1060)
			this->propertyChanged(HX_CSTRING("_Octave"),this->_Octave);
		}
		HX_STACK_LINE(1063)
		if (((this->_StartX == (int)4))){
			struct _Function_2_1{
				inline static int Block( ){
					HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1065);
					{
						HX_STACK_LINE(1065)
						return (  ((hx::TCast< Bool >::cast((int)1))) ? int((int)1) : int((int)0) );
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static int Block( ){
					HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1065);
					{
						HX_STACK_LINE(1065)
						::haxe::Log_obj::trace((HX_CSTRING("1") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
						HX_STACK_LINE(1065)
						return (int)0;
					}
					return null();
				}
			};
			HX_STACK_LINE(1065)
			this->_Octave = (  ((::Std_obj::is((int)1,hx::ClassOf< ::Float >()))) ? Float((int)1) : Float((  ((::Std_obj::is((int)1,hx::ClassOf< ::Int >()))) ? Float((int)1) : Float((  ((::Std_obj::is((int)1,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block()) : Float((  ((::Std_obj::is((int)1,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)1)) : Float(_Function_2_2::Block()) )) )) )) );
			HX_STACK_LINE(1066)
			this->propertyChanged(HX_CSTRING("_Octave"),this->_Octave);
		}
		HX_STACK_LINE(1069)
		if (((this->_StartX >= (int)5))){
			struct _Function_2_1{
				inline static int Block( ){
					HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1071);
					{
						HX_STACK_LINE(1071)
						return (  ((hx::TCast< Bool >::cast((int)5))) ? int((int)1) : int((int)0) );
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static int Block( ){
					HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1071);
					{
						HX_STACK_LINE(1071)
						::haxe::Log_obj::trace((HX_CSTRING("5") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
						HX_STACK_LINE(1071)
						return (int)0;
					}
					return null();
				}
			};
			HX_STACK_LINE(1071)
			this->_Octave = (  ((::Std_obj::is((int)5,hx::ClassOf< ::Float >()))) ? Float((int)5) : Float((  ((::Std_obj::is((int)5,hx::ClassOf< ::Int >()))) ? Float((int)5) : Float((  ((::Std_obj::is((int)5,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block()) : Float((  ((::Std_obj::is((int)5,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)5)) : Float(_Function_2_2::Block()) )) )) )) );
			HX_STACK_LINE(1072)
			this->propertyChanged(HX_CSTRING("_Octave"),this->_Octave);
		}
		struct _Function_1_11{
			inline static Float Block( ::scripts::Design_5_5_beatgem_obj *__this){
				HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1075);
				{
					HX_STACK_LINE(1075)
					Dynamic o = __this->randomInt(::Math_obj::floor((int)1),::Math_obj::floor((int)5));		HX_STACK_VAR(o,"o");
					struct _Function_2_1{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1075);
							{
								HX_STACK_LINE(1075)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1075);
							{
								HX_STACK_LINE(1075)
								::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(1075)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(1075)
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_2::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(1075)
		this->_SoundType = _Function_1_11::Block(this);
		HX_STACK_LINE(1076)
		this->propertyChanged(HX_CSTRING("_SoundType"),this->_SoundType);
		HX_STACK_LINE(1077)
		if (((this->_Octave == (int)1))){
			HX_STACK_LINE(1079)
			if (((this->_SoundType == (int)1))){
				HX_STACK_LINE(1081)
				this->_GemSound = this->getSound((int)5);
				HX_STACK_LINE(1082)
				this->propertyChanged(HX_CSTRING("_GemSound"),this->_GemSound);
			}
			HX_STACK_LINE(1085)
			if (((this->_SoundType == (int)2))){
				HX_STACK_LINE(1087)
				this->_GemSound = this->getSound((int)6);
				HX_STACK_LINE(1088)
				this->propertyChanged(HX_CSTRING("_GemSound"),this->_GemSound);
			}
			HX_STACK_LINE(1091)
			if (((this->_SoundType == (int)3))){
				HX_STACK_LINE(1093)
				this->_GemSound = this->getSound((int)7);
				HX_STACK_LINE(1094)
				this->propertyChanged(HX_CSTRING("_GemSound"),this->_GemSound);
			}
			HX_STACK_LINE(1097)
			if (((this->_SoundType == (int)4))){
				HX_STACK_LINE(1099)
				this->_GemSound = this->getSound((int)8);
				HX_STACK_LINE(1100)
				this->propertyChanged(HX_CSTRING("_GemSound"),this->_GemSound);
			}
			HX_STACK_LINE(1103)
			if (((this->_SoundType == (int)5))){
				HX_STACK_LINE(1105)
				this->_GemSound = this->getSound((int)9);
				HX_STACK_LINE(1106)
				this->propertyChanged(HX_CSTRING("_GemSound"),this->_GemSound);
			}
		}
		HX_STACK_LINE(1111)
		if (((this->_Octave == (int)2))){
			HX_STACK_LINE(1113)
			if (((this->_SoundType == (int)1))){
				HX_STACK_LINE(1115)
				this->_GemSound = this->getSound((int)18);
				HX_STACK_LINE(1116)
				this->propertyChanged(HX_CSTRING("_GemSound"),this->_GemSound);
			}
			HX_STACK_LINE(1119)
			if (((this->_SoundType == (int)2))){
				HX_STACK_LINE(1121)
				this->_GemSound = this->getSound((int)19);
				HX_STACK_LINE(1122)
				this->propertyChanged(HX_CSTRING("_GemSound"),this->_GemSound);
			}
			HX_STACK_LINE(1125)
			if (((this->_SoundType == (int)3))){
				HX_STACK_LINE(1127)
				this->_GemSound = this->getSound((int)20);
				HX_STACK_LINE(1128)
				this->propertyChanged(HX_CSTRING("_GemSound"),this->_GemSound);
			}
			HX_STACK_LINE(1131)
			if (((this->_SoundType == (int)4))){
				HX_STACK_LINE(1133)
				this->_GemSound = this->getSound((int)21);
				HX_STACK_LINE(1134)
				this->propertyChanged(HX_CSTRING("_GemSound"),this->_GemSound);
			}
			HX_STACK_LINE(1137)
			if (((this->_SoundType == (int)5))){
				HX_STACK_LINE(1139)
				this->_GemSound = this->getSound((int)22);
				HX_STACK_LINE(1140)
				this->propertyChanged(HX_CSTRING("_GemSound"),this->_GemSound);
			}
		}
		HX_STACK_LINE(1145)
		if (((this->_Octave == (int)3))){
			HX_STACK_LINE(1147)
			if (((this->_SoundType == (int)1))){
				HX_STACK_LINE(1149)
				this->_GemSound = this->getSound((int)23);
				HX_STACK_LINE(1150)
				this->propertyChanged(HX_CSTRING("_GemSound"),this->_GemSound);
			}
			HX_STACK_LINE(1153)
			if (((this->_SoundType == (int)2))){
				HX_STACK_LINE(1155)
				this->_GemSound = this->getSound((int)24);
				HX_STACK_LINE(1156)
				this->propertyChanged(HX_CSTRING("_GemSound"),this->_GemSound);
			}
			HX_STACK_LINE(1159)
			if (((this->_SoundType == (int)3))){
				HX_STACK_LINE(1161)
				this->_GemSound = this->getSound((int)25);
				HX_STACK_LINE(1162)
				this->propertyChanged(HX_CSTRING("_GemSound"),this->_GemSound);
			}
			HX_STACK_LINE(1165)
			if (((this->_SoundType == (int)4))){
				HX_STACK_LINE(1167)
				this->_GemSound = this->getSound((int)26);
				HX_STACK_LINE(1168)
				this->propertyChanged(HX_CSTRING("_GemSound"),this->_GemSound);
			}
			HX_STACK_LINE(1171)
			if (((this->_SoundType == (int)5))){
				HX_STACK_LINE(1173)
				this->_GemSound = this->getSound((int)27);
				HX_STACK_LINE(1174)
				this->propertyChanged(HX_CSTRING("_GemSound"),this->_GemSound);
			}
		}
		HX_STACK_LINE(1179)
		if (((this->_Octave == (int)4))){
			HX_STACK_LINE(1181)
			if (((this->_SoundType == (int)1))){
				HX_STACK_LINE(1183)
				this->_GemSound = this->getSound((int)28);
				HX_STACK_LINE(1184)
				this->propertyChanged(HX_CSTRING("_GemSound"),this->_GemSound);
			}
			HX_STACK_LINE(1187)
			if (((this->_SoundType == (int)2))){
				HX_STACK_LINE(1189)
				this->_GemSound = this->getSound((int)29);
				HX_STACK_LINE(1190)
				this->propertyChanged(HX_CSTRING("_GemSound"),this->_GemSound);
			}
			HX_STACK_LINE(1193)
			if (((this->_SoundType == (int)3))){
				HX_STACK_LINE(1195)
				this->_GemSound = this->getSound((int)30);
				HX_STACK_LINE(1196)
				this->propertyChanged(HX_CSTRING("_GemSound"),this->_GemSound);
			}
			HX_STACK_LINE(1199)
			if (((this->_SoundType == (int)4))){
				HX_STACK_LINE(1201)
				this->_GemSound = this->getSound((int)31);
				HX_STACK_LINE(1202)
				this->propertyChanged(HX_CSTRING("_GemSound"),this->_GemSound);
			}
			HX_STACK_LINE(1205)
			if (((this->_SoundType == (int)5))){
				HX_STACK_LINE(1207)
				this->_GemSound = this->getSound((int)32);
				HX_STACK_LINE(1208)
				this->propertyChanged(HX_CSTRING("_GemSound"),this->_GemSound);
			}
		}
		HX_STACK_LINE(1213)
		if (((this->_Octave == (int)5))){
			HX_STACK_LINE(1215)
			if (((this->_SoundType == (int)1))){
				HX_STACK_LINE(1217)
				this->_GemSound = this->getSound((int)90);
				HX_STACK_LINE(1218)
				this->propertyChanged(HX_CSTRING("_GemSound"),this->_GemSound);
			}
			HX_STACK_LINE(1221)
			if (((this->_SoundType == (int)2))){
				HX_STACK_LINE(1223)
				this->_GemSound = this->getSound((int)91);
				HX_STACK_LINE(1224)
				this->propertyChanged(HX_CSTRING("_GemSound"),this->_GemSound);
			}
			HX_STACK_LINE(1227)
			if (((this->_SoundType == (int)3))){
				HX_STACK_LINE(1229)
				this->_GemSound = this->getSound((int)92);
				HX_STACK_LINE(1230)
				this->propertyChanged(HX_CSTRING("_GemSound"),this->_GemSound);
			}
			HX_STACK_LINE(1233)
			if (((this->_SoundType == (int)4))){
				HX_STACK_LINE(1235)
				this->_GemSound = this->getSound((int)92);
				HX_STACK_LINE(1236)
				this->propertyChanged(HX_CSTRING("_GemSound"),this->_GemSound);
			}
			HX_STACK_LINE(1239)
			if (((this->_SoundType == (int)5))){
				HX_STACK_LINE(1241)
				this->_GemSound = this->getSound((int)93);
				HX_STACK_LINE(1242)
				this->propertyChanged(HX_CSTRING("_GemSound"),this->_GemSound);
			}
		}
		HX_STACK_LINE(1247)
		this->_Colliding = false;
		HX_STACK_LINE(1248)
		this->propertyChanged(HX_CSTRING("_Colliding"),this->_Colliding);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_12,Array< ::Dynamic >,_g)
		Void run(Float elapsedTime,Dynamic list){
			HX_STACK_PUSH("*::_Function_1_12","scripts/Design_5_5_beatgem.hx",1251);
			HX_STACK_ARG(elapsedTime,"elapsedTime");
			HX_STACK_ARG(list,"list");
			{
				HX_STACK_LINE(1251)
				if ((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->wrapper->enabled)){
					HX_STACK_LINE(1253)
					if (((bool(!(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping)) || bool(((bool(!(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_CheckMatches")))) || bool(((bool(!(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("RegionCreated?")))) || bool(!(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("TapMode"))))))))))))){
						HX_STACK_LINE(1255)
						if (((bool((bool(::com::stencyl::Input_obj::swipedUp) && bool(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->isMouseOver()))) && bool(!(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("intapmode"))))))){
							HX_STACK_LINE(1257)
							if ((!(((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees == (int)180))))){
								HX_STACK_LINE(1259)
								if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees == (int)90))){
									HX_STACK_LINE(1261)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->rotate(((Float(3.1415926535897) / Float((int)180)) * (int)90),null());
									struct _Function_7_1{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1262);
											{
												HX_STACK_LINE(1262)
												return (  ((hx::TCast< Bool >::cast((int)180))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_7_2{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1262);
											{
												HX_STACK_LINE(1262)
												::haxe::Log_obj::trace((HX_CSTRING("180") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1262)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1262)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees = (  ((::Std_obj::is((int)180,hx::ClassOf< ::Float >()))) ? Float((int)180) : Float((  ((::Std_obj::is((int)180,hx::ClassOf< ::Int >()))) ? Float((int)180) : Float((  ((::Std_obj::is((int)180,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block()) : Float((  ((::Std_obj::is((int)180,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)180)) : Float(_Function_7_2::Block()) )) )) )) );
									HX_STACK_LINE(1263)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Degrees"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees);
								}
								else{
									HX_STACK_LINE(1266)
									if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees == (int)270))){
										HX_STACK_LINE(1268)
										_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->rotate(((Float(3.1415926535897) / Float((int)180)) * (int)270),null());
										struct _Function_8_1{
											inline static int Block( ){
												HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1269);
												{
													HX_STACK_LINE(1269)
													return (  ((hx::TCast< Bool >::cast((int)180))) ? int((int)1) : int((int)0) );
												}
												return null();
											}
										};
										struct _Function_8_2{
											inline static int Block( ){
												HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1269);
												{
													HX_STACK_LINE(1269)
													::haxe::Log_obj::trace((HX_CSTRING("180") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
													HX_STACK_LINE(1269)
													return (int)0;
												}
												return null();
											}
										};
										HX_STACK_LINE(1269)
										_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees = (  ((::Std_obj::is((int)180,hx::ClassOf< ::Float >()))) ? Float((int)180) : Float((  ((::Std_obj::is((int)180,hx::ClassOf< ::Int >()))) ? Float((int)180) : Float((  ((::Std_obj::is((int)180,hx::ClassOf< ::Bool >()))) ? Float(_Function_8_1::Block()) : Float((  ((::Std_obj::is((int)180,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)180)) : Float(_Function_8_2::Block()) )) )) )) );
										HX_STACK_LINE(1270)
										_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Degrees"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees);
									}
								}
								HX_STACK_LINE(1273)
								if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees == (int)0))){
									HX_STACK_LINE(1275)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->rotate(((Float(3.1415926535897) / Float((int)180)) * (int)180),null());
									struct _Function_7_1{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1276);
											{
												HX_STACK_LINE(1276)
												return (  ((hx::TCast< Bool >::cast((int)180))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_7_2{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1276);
											{
												HX_STACK_LINE(1276)
												::haxe::Log_obj::trace((HX_CSTRING("180") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1276)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1276)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees = (  ((::Std_obj::is((int)180,hx::ClassOf< ::Float >()))) ? Float((int)180) : Float((  ((::Std_obj::is((int)180,hx::ClassOf< ::Int >()))) ? Float((int)180) : Float((  ((::Std_obj::is((int)180,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block()) : Float((  ((::Std_obj::is((int)180,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)180)) : Float(_Function_7_2::Block()) )) )) )) );
									HX_STACK_LINE(1277)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Degrees"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees);
								}
							}
							else{
								HX_STACK_LINE(1282)
								if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees == (int)180))){
									struct _Function_7_1{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1284);
											{
												HX_STACK_LINE(1284)
												return (  ((hx::TCast< Bool >::cast((int)180))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_7_2{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1284);
											{
												HX_STACK_LINE(1284)
												::haxe::Log_obj::trace((HX_CSTRING("180") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1284)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1284)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees = (  ((::Std_obj::is((int)180,hx::ClassOf< ::Float >()))) ? Float((int)180) : Float((  ((::Std_obj::is((int)180,hx::ClassOf< ::Int >()))) ? Float((int)180) : Float((  ((::Std_obj::is((int)180,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block()) : Float((  ((::Std_obj::is((int)180,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)180)) : Float(_Function_7_2::Block()) )) )) )) );
									HX_STACK_LINE(1285)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Degrees"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees);
								}
							}
							HX_STACK_LINE(1288)
							_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_customEvent_SwapUp();
						}
						HX_STACK_LINE(1291)
						if (((bool((bool(::com::stencyl::Input_obj::swipedDown) && bool(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->isMouseOver()))) && bool(!(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("intapmode"))))))){
							HX_STACK_LINE(1293)
							if ((!(((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees == (int)0))))){
								HX_STACK_LINE(1295)
								if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees == (int)90))){
									HX_STACK_LINE(1297)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->rotate(((Float(3.1415926535897) / Float((int)180)) * (int)270),null());
									struct _Function_7_1{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1298);
											{
												HX_STACK_LINE(1298)
												return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_7_2{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1298);
											{
												HX_STACK_LINE(1298)
												::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1298)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1298)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_7_2::Block()) )) )) )) );
									HX_STACK_LINE(1299)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Degrees"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees);
								}
								else{
									HX_STACK_LINE(1302)
									if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees == (int)180))){
										HX_STACK_LINE(1304)
										_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->rotate(((Float(3.1415926535897) / Float((int)180)) * (int)180),null());
										struct _Function_8_1{
											inline static int Block( ){
												HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1305);
												{
													HX_STACK_LINE(1305)
													return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
												}
												return null();
											}
										};
										struct _Function_8_2{
											inline static int Block( ){
												HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1305);
												{
													HX_STACK_LINE(1305)
													::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
													HX_STACK_LINE(1305)
													return (int)0;
												}
												return null();
											}
										};
										HX_STACK_LINE(1305)
										_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_8_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_8_2::Block()) )) )) )) );
										HX_STACK_LINE(1306)
										_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Degrees"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees);
									}
								}
								HX_STACK_LINE(1309)
								if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees == (int)270))){
									HX_STACK_LINE(1311)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->rotate(((Float(3.1415926535897) / Float((int)180)) * (int)90),null());
									struct _Function_7_1{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1312);
											{
												HX_STACK_LINE(1312)
												return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_7_2{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1312);
											{
												HX_STACK_LINE(1312)
												::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1312)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1312)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_7_2::Block()) )) )) )) );
									HX_STACK_LINE(1313)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Degrees"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees);
								}
							}
							else{
								HX_STACK_LINE(1318)
								if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees == (int)0))){
									struct _Function_7_1{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1320);
											{
												HX_STACK_LINE(1320)
												return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_7_2{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1320);
											{
												HX_STACK_LINE(1320)
												::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1320)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1320)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_7_2::Block()) )) )) )) );
									HX_STACK_LINE(1321)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Degrees"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees);
								}
							}
							HX_STACK_LINE(1324)
							_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_customEvent_SwapDown();
						}
						HX_STACK_LINE(1327)
						if (((bool((bool(::com::stencyl::Input_obj::swipedLeft) && bool(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->isMouseOver()))) && bool(!(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("intapmode"))))))){
							HX_STACK_LINE(1329)
							if ((!(((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees == (int)90))))){
								HX_STACK_LINE(1331)
								if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees == (int)0))){
									HX_STACK_LINE(1333)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->rotate(((Float(3.1415926535897) / Float((int)180)) * (int)90),null());
									struct _Function_7_1{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1334);
											{
												HX_STACK_LINE(1334)
												return (  ((hx::TCast< Bool >::cast((int)90))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_7_2{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1334);
											{
												HX_STACK_LINE(1334)
												::haxe::Log_obj::trace((HX_CSTRING("90") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1334)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1334)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees = (  ((::Std_obj::is((int)90,hx::ClassOf< ::Float >()))) ? Float((int)90) : Float((  ((::Std_obj::is((int)90,hx::ClassOf< ::Int >()))) ? Float((int)90) : Float((  ((::Std_obj::is((int)90,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block()) : Float((  ((::Std_obj::is((int)90,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)90)) : Float(_Function_7_2::Block()) )) )) )) );
									HX_STACK_LINE(1335)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Degrees"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees);
								}
								else{
									HX_STACK_LINE(1338)
									if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees == (int)180))){
										HX_STACK_LINE(1340)
										_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->rotate(((Float(3.1415926535897) / Float((int)180)) * (int)270),null());
										struct _Function_8_1{
											inline static int Block( ){
												HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1341);
												{
													HX_STACK_LINE(1341)
													return (  ((hx::TCast< Bool >::cast((int)90))) ? int((int)1) : int((int)0) );
												}
												return null();
											}
										};
										struct _Function_8_2{
											inline static int Block( ){
												HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1341);
												{
													HX_STACK_LINE(1341)
													::haxe::Log_obj::trace((HX_CSTRING("90") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
													HX_STACK_LINE(1341)
													return (int)0;
												}
												return null();
											}
										};
										HX_STACK_LINE(1341)
										_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees = (  ((::Std_obj::is((int)90,hx::ClassOf< ::Float >()))) ? Float((int)90) : Float((  ((::Std_obj::is((int)90,hx::ClassOf< ::Int >()))) ? Float((int)90) : Float((  ((::Std_obj::is((int)90,hx::ClassOf< ::Bool >()))) ? Float(_Function_8_1::Block()) : Float((  ((::Std_obj::is((int)90,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)90)) : Float(_Function_8_2::Block()) )) )) )) );
										HX_STACK_LINE(1342)
										_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Degrees"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees);
									}
								}
								HX_STACK_LINE(1345)
								if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees == (int)270))){
									HX_STACK_LINE(1347)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->rotate(((Float(3.1415926535897) / Float((int)180)) * (int)180),null());
									struct _Function_7_1{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1348);
											{
												HX_STACK_LINE(1348)
												return (  ((hx::TCast< Bool >::cast((int)90))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_7_2{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1348);
											{
												HX_STACK_LINE(1348)
												::haxe::Log_obj::trace((HX_CSTRING("90") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1348)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1348)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees = (  ((::Std_obj::is((int)90,hx::ClassOf< ::Float >()))) ? Float((int)90) : Float((  ((::Std_obj::is((int)90,hx::ClassOf< ::Int >()))) ? Float((int)90) : Float((  ((::Std_obj::is((int)90,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block()) : Float((  ((::Std_obj::is((int)90,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)90)) : Float(_Function_7_2::Block()) )) )) )) );
									HX_STACK_LINE(1349)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Degrees"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees);
								}
							}
							else{
								HX_STACK_LINE(1354)
								if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees == (int)90))){
									struct _Function_7_1{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1356);
											{
												HX_STACK_LINE(1356)
												return (  ((hx::TCast< Bool >::cast((int)90))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_7_2{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1356);
											{
												HX_STACK_LINE(1356)
												::haxe::Log_obj::trace((HX_CSTRING("90") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1356)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1356)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees = (  ((::Std_obj::is((int)90,hx::ClassOf< ::Float >()))) ? Float((int)90) : Float((  ((::Std_obj::is((int)90,hx::ClassOf< ::Int >()))) ? Float((int)90) : Float((  ((::Std_obj::is((int)90,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block()) : Float((  ((::Std_obj::is((int)90,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)90)) : Float(_Function_7_2::Block()) )) )) )) );
									HX_STACK_LINE(1357)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Degrees"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees);
								}
							}
							HX_STACK_LINE(1360)
							_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_customEvent_SwapLeft();
						}
						HX_STACK_LINE(1363)
						if (((bool((bool(::com::stencyl::Input_obj::swipedRight) && bool(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->isMouseOver()))) && bool(!(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("intapmode"))))))){
							HX_STACK_LINE(1365)
							if ((!(((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees == (int)270))))){
								HX_STACK_LINE(1367)
								if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees == (int)90))){
									HX_STACK_LINE(1369)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->rotate(((Float(3.1415926535897) / Float((int)180)) * (int)180),null());
									struct _Function_7_1{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1370);
											{
												HX_STACK_LINE(1370)
												return (  ((hx::TCast< Bool >::cast((int)270))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_7_2{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1370);
											{
												HX_STACK_LINE(1370)
												::haxe::Log_obj::trace((HX_CSTRING("270") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1370)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1370)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees = (  ((::Std_obj::is((int)270,hx::ClassOf< ::Float >()))) ? Float((int)270) : Float((  ((::Std_obj::is((int)270,hx::ClassOf< ::Int >()))) ? Float((int)270) : Float((  ((::Std_obj::is((int)270,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block()) : Float((  ((::Std_obj::is((int)270,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)270)) : Float(_Function_7_2::Block()) )) )) )) );
									HX_STACK_LINE(1371)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Degrees"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees);
								}
								else{
									HX_STACK_LINE(1374)
									if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees == (int)180))){
										HX_STACK_LINE(1376)
										_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->rotate(((Float(3.1415926535897) / Float((int)180)) * (int)90),null());
										struct _Function_8_1{
											inline static int Block( ){
												HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1377);
												{
													HX_STACK_LINE(1377)
													return (  ((hx::TCast< Bool >::cast((int)270))) ? int((int)1) : int((int)0) );
												}
												return null();
											}
										};
										struct _Function_8_2{
											inline static int Block( ){
												HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1377);
												{
													HX_STACK_LINE(1377)
													::haxe::Log_obj::trace((HX_CSTRING("270") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
													HX_STACK_LINE(1377)
													return (int)0;
												}
												return null();
											}
										};
										HX_STACK_LINE(1377)
										_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees = (  ((::Std_obj::is((int)270,hx::ClassOf< ::Float >()))) ? Float((int)270) : Float((  ((::Std_obj::is((int)270,hx::ClassOf< ::Int >()))) ? Float((int)270) : Float((  ((::Std_obj::is((int)270,hx::ClassOf< ::Bool >()))) ? Float(_Function_8_1::Block()) : Float((  ((::Std_obj::is((int)270,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)270)) : Float(_Function_8_2::Block()) )) )) )) );
										HX_STACK_LINE(1378)
										_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Degrees"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees);
									}
								}
								HX_STACK_LINE(1381)
								if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees == (int)0))){
									HX_STACK_LINE(1383)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->rotate(((Float(3.1415926535897) / Float((int)180)) * (int)270),null());
									struct _Function_7_1{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1384);
											{
												HX_STACK_LINE(1384)
												return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_7_2{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1384);
											{
												HX_STACK_LINE(1384)
												::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1384)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1384)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_7_2::Block()) )) )) )) );
									HX_STACK_LINE(1385)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Degrees"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees);
								}
							}
							else{
								HX_STACK_LINE(1390)
								if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees == (int)270))){
									struct _Function_7_1{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1392);
											{
												HX_STACK_LINE(1392)
												return (  ((hx::TCast< Bool >::cast((int)270))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_7_2{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1392);
											{
												HX_STACK_LINE(1392)
												::haxe::Log_obj::trace((HX_CSTRING("270") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1392)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1392)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees = (  ((::Std_obj::is((int)270,hx::ClassOf< ::Float >()))) ? Float((int)270) : Float((  ((::Std_obj::is((int)270,hx::ClassOf< ::Int >()))) ? Float((int)270) : Float((  ((::Std_obj::is((int)270,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block()) : Float((  ((::Std_obj::is((int)270,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)270)) : Float(_Function_7_2::Block()) )) )) )) );
									HX_STACK_LINE(1393)
									_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Degrees"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Degrees);
								}
							}
							HX_STACK_LINE(1396)
							_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_customEvent_SwapRight();
						}
						HX_STACK_LINE(1399)
						if ((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_CreateWorm")))){
							HX_STACK_LINE(1401)
							if (((bool((bool(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->isMousePressed()) && bool(!(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Tappable)))) && bool(!(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("TapMode"))))))){
								HX_STACK_LINE(1403)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->setValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_GemID"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_GemID);
								HX_STACK_LINE(1404)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->sayToScene(HX_CSTRING("Scene Manager"),(HX_CSTRING("_customEvent_") + HX_CSTRING("TapTime")),null());
							}
							HX_STACK_LINE(1408)
							if (((bool(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Tappable) && bool(!(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_tapping))))){
								HX_STACK_LINE(1409)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_customEvent_Tappy();
							}
						}
					}
					HX_STACK_LINE(1417)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping == true))){
						HX_STACK_LINE(1418)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->setGameAttribute(HX_CSTRING("Swapping?"),true);
					}
					HX_STACK_LINE(1422)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping == false))){
						HX_STACK_LINE(1423)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->setGameAttribute(HX_CSTRING("Swapping?"),false);
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(1251)
		this->addWhenUpdatedListener(null(), Dynamic(new _Function_1_12(_g)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_13,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::graphics::G g,Float x,Float y,Dynamic list){
			HX_STACK_PUSH("*::_Function_1_13","scripts/Design_5_5_beatgem.hx",1431);
			HX_STACK_ARG(g,"g");
			HX_STACK_ARG(x,"x");
			HX_STACK_ARG(y,"y");
			HX_STACK_ARG(list,"list");
			{
				HX_STACK_LINE(1431)
				if ((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->wrapper->enabled)){
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC4((void))

		HX_STACK_LINE(1431)
		this->addWhenDrawingListener(null(), Dynamic(new _Function_1_13(_g)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_14,Array< ::Dynamic >,_g)
		Void run(Dynamic list){
			HX_STACK_PUSH("*::_Function_1_14","scripts/Design_5_5_beatgem.hx",1440);
			HX_STACK_ARG(list,"list");
			{
				HX_STACK_LINE(1440)
				if ((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->wrapper->enabled)){
					HX_STACK_LINE(1442)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_GemID == (int)1))){
						HX_STACK_LINE(1444)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->setGameAttribute(HX_CSTRING("ColorMatch1"),(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorMatch1")) - (int)1));
						struct _Function_4_1{
							inline static Float Block( Array< ::Dynamic > &_g){
								HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1445);
								{
									HX_STACK_LINE(1445)
									Dynamic o = (_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))->__GetItem((int)0) - (int)1);		HX_STACK_VAR(o,"o");
									struct _Function_5_1{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1445);
											{
												HX_STACK_LINE(1445)
												return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_5_2{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1445);
											{
												HX_STACK_LINE(1445)
												::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1445)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1445)
									return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_5_2::Block(o)) )) )) )) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1445)
						hx::IndexRef((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))).mPtr,(int)0) = _Function_4_1::Block(_g);
						HX_STACK_LINE(1446)
						if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))->__GetItem((int)0) <= (int)0))){
							HX_STACK_LINE(1447)
							hx::IndexRef((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))).mPtr,(int)0) = HX_CSTRING("null");
						}
					}
					HX_STACK_LINE(1453)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_GemID == (int)2))){
						HX_STACK_LINE(1455)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->setGameAttribute(HX_CSTRING("ColorMatch2"),(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorMatch2")) - (int)1));
						struct _Function_4_1{
							inline static Float Block( Array< ::Dynamic > &_g){
								HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1456);
								{
									HX_STACK_LINE(1456)
									Dynamic o = (_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))->__GetItem((int)1) - (int)1);		HX_STACK_VAR(o,"o");
									struct _Function_5_1{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1456);
											{
												HX_STACK_LINE(1456)
												return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_5_2{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1456);
											{
												HX_STACK_LINE(1456)
												::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1456)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1456)
									return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_5_2::Block(o)) )) )) )) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1456)
						hx::IndexRef((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))).mPtr,(int)1) = _Function_4_1::Block(_g);
						HX_STACK_LINE(1457)
						if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))->__GetItem((int)1) <= (int)0))){
							HX_STACK_LINE(1458)
							hx::IndexRef((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))).mPtr,(int)1) = HX_CSTRING("null");
						}
					}
					HX_STACK_LINE(1464)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_GemID == (int)3))){
						HX_STACK_LINE(1466)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->setGameAttribute(HX_CSTRING("ColorMatch3"),(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorMatch3")) - (int)1));
						struct _Function_4_1{
							inline static Float Block( Array< ::Dynamic > &_g){
								HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1467);
								{
									HX_STACK_LINE(1467)
									Dynamic o = (_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))->__GetItem((int)2) - (int)1);		HX_STACK_VAR(o,"o");
									struct _Function_5_1{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1467);
											{
												HX_STACK_LINE(1467)
												return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_5_2{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1467);
											{
												HX_STACK_LINE(1467)
												::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1467)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1467)
									return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_5_2::Block(o)) )) )) )) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1467)
						hx::IndexRef((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))).mPtr,(int)2) = _Function_4_1::Block(_g);
						HX_STACK_LINE(1468)
						if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))->__GetItem((int)2) <= (int)0))){
							HX_STACK_LINE(1469)
							hx::IndexRef((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))).mPtr,(int)2) = HX_CSTRING("null");
						}
					}
					HX_STACK_LINE(1475)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_GemID == (int)4))){
						HX_STACK_LINE(1477)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->setGameAttribute(HX_CSTRING("ColorMatch4"),(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorMatch4")) - (int)1));
						struct _Function_4_1{
							inline static Float Block( Array< ::Dynamic > &_g){
								HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1478);
								{
									HX_STACK_LINE(1478)
									Dynamic o = (_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))->__GetItem((int)3) - (int)1);		HX_STACK_VAR(o,"o");
									struct _Function_5_1{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1478);
											{
												HX_STACK_LINE(1478)
												return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_5_2{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1478);
											{
												HX_STACK_LINE(1478)
												::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1478)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1478)
									return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_5_2::Block(o)) )) )) )) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1478)
						hx::IndexRef((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))).mPtr,(int)3) = _Function_4_1::Block(_g);
						HX_STACK_LINE(1479)
						if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))->__GetItem((int)3) <= (int)0))){
							HX_STACK_LINE(1480)
							hx::IndexRef((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))).mPtr,(int)3) = HX_CSTRING("null");
						}
					}
					HX_STACK_LINE(1486)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_GemID == (int)5))){
						HX_STACK_LINE(1488)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->setGameAttribute(HX_CSTRING("ColorMatch5"),(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorMatch5")) - (int)1));
						struct _Function_4_1{
							inline static Float Block( Array< ::Dynamic > &_g){
								HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1489);
								{
									HX_STACK_LINE(1489)
									Dynamic o = (_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))->__GetItem((int)4) - (int)1);		HX_STACK_VAR(o,"o");
									struct _Function_5_1{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1489);
											{
												HX_STACK_LINE(1489)
												return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_5_2{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1489);
											{
												HX_STACK_LINE(1489)
												::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1489)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1489)
									return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_5_2::Block(o)) )) )) )) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1489)
						hx::IndexRef((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))).mPtr,(int)4) = _Function_4_1::Block(_g);
						HX_STACK_LINE(1490)
						if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))->__GetItem((int)4) <= (int)0))){
							HX_STACK_LINE(1491)
							hx::IndexRef((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))).mPtr,(int)4) = HX_CSTRING("null");
						}
					}
					HX_STACK_LINE(1497)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_GemID == (int)6))){
						HX_STACK_LINE(1499)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->setGameAttribute(HX_CSTRING("ColorMatch6"),(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorMatch6")) - (int)1));
						struct _Function_4_1{
							inline static Float Block( Array< ::Dynamic > &_g){
								HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1500);
								{
									HX_STACK_LINE(1500)
									Dynamic o = (_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))->__GetItem((int)5) - (int)1);		HX_STACK_VAR(o,"o");
									struct _Function_5_1{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1500);
											{
												HX_STACK_LINE(1500)
												return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_5_2{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1500);
											{
												HX_STACK_LINE(1500)
												::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1500)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1500)
									return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_5_2::Block(o)) )) )) )) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1500)
						hx::IndexRef((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))).mPtr,(int)5) = _Function_4_1::Block(_g);
						HX_STACK_LINE(1501)
						if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))->__GetItem((int)5) <= (int)0))){
							HX_STACK_LINE(1502)
							hx::IndexRef((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))).mPtr,(int)5) = HX_CSTRING("null");
						}
					}
					HX_STACK_LINE(1508)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_GemID == (int)7))){
						HX_STACK_LINE(1510)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->setGameAttribute(HX_CSTRING("ColorMatch1"),(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorMatch1")) - (int)1));
						struct _Function_4_1{
							inline static Float Block( Array< ::Dynamic > &_g){
								HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1511);
								{
									HX_STACK_LINE(1511)
									Dynamic o = (_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))->__GetItem((int)0) - (int)1);		HX_STACK_VAR(o,"o");
									struct _Function_5_1{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1511);
											{
												HX_STACK_LINE(1511)
												return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_5_2{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1511);
											{
												HX_STACK_LINE(1511)
												::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1511)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1511)
									return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_5_2::Block(o)) )) )) )) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1511)
						hx::IndexRef((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))).mPtr,(int)0) = _Function_4_1::Block(_g);
						HX_STACK_LINE(1512)
						if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))->__GetItem((int)0) <= (int)0))){
							HX_STACK_LINE(1513)
							hx::IndexRef((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))).mPtr,(int)0) = HX_CSTRING("null");
						}
					}
					HX_STACK_LINE(1519)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_GemID == (int)8))){
						HX_STACK_LINE(1521)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->setGameAttribute(HX_CSTRING("ColorMatch2"),(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorMatch2")) - (int)1));
						struct _Function_4_1{
							inline static Float Block( Array< ::Dynamic > &_g){
								HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1522);
								{
									HX_STACK_LINE(1522)
									Dynamic o = (_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))->__GetItem((int)1) - (int)1);		HX_STACK_VAR(o,"o");
									struct _Function_5_1{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1522);
											{
												HX_STACK_LINE(1522)
												return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_5_2{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1522);
											{
												HX_STACK_LINE(1522)
												::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1522)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1522)
									return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_5_2::Block(o)) )) )) )) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1522)
						hx::IndexRef((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))).mPtr,(int)1) = _Function_4_1::Block(_g);
						HX_STACK_LINE(1523)
						if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))->__GetItem((int)1) <= (int)0))){
							HX_STACK_LINE(1524)
							hx::IndexRef((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))).mPtr,(int)1) = HX_CSTRING("null");
						}
					}
					HX_STACK_LINE(1530)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_GemID == (int)9))){
						HX_STACK_LINE(1532)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->setGameAttribute(HX_CSTRING("ColorMatch3"),(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorMatch3")) - (int)1));
						struct _Function_4_1{
							inline static Float Block( Array< ::Dynamic > &_g){
								HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1533);
								{
									HX_STACK_LINE(1533)
									Dynamic o = (_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))->__GetItem((int)2) - (int)1);		HX_STACK_VAR(o,"o");
									struct _Function_5_1{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1533);
											{
												HX_STACK_LINE(1533)
												return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_5_2{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1533);
											{
												HX_STACK_LINE(1533)
												::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1533)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1533)
									return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_5_2::Block(o)) )) )) )) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1533)
						hx::IndexRef((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))).mPtr,(int)2) = _Function_4_1::Block(_g);
						HX_STACK_LINE(1534)
						if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))->__GetItem((int)2) <= (int)0))){
							HX_STACK_LINE(1535)
							hx::IndexRef((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))).mPtr,(int)2) = HX_CSTRING("null");
						}
					}
					HX_STACK_LINE(1541)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_GemID == (int)10))){
						HX_STACK_LINE(1543)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->setGameAttribute(HX_CSTRING("ColorMatch4"),(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorMatch4")) - (int)1));
						struct _Function_4_1{
							inline static Float Block( Array< ::Dynamic > &_g){
								HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1544);
								{
									HX_STACK_LINE(1544)
									Dynamic o = (_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))->__GetItem((int)3) - (int)1);		HX_STACK_VAR(o,"o");
									struct _Function_5_1{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1544);
											{
												HX_STACK_LINE(1544)
												return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_5_2{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1544);
											{
												HX_STACK_LINE(1544)
												::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1544)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1544)
									return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_5_2::Block(o)) )) )) )) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1544)
						hx::IndexRef((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))).mPtr,(int)3) = _Function_4_1::Block(_g);
						HX_STACK_LINE(1545)
						if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))->__GetItem((int)3) <= (int)0))){
							HX_STACK_LINE(1546)
							hx::IndexRef((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))).mPtr,(int)3) = HX_CSTRING("null");
						}
					}
					HX_STACK_LINE(1552)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_GemID == (int)11))){
						HX_STACK_LINE(1554)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->setGameAttribute(HX_CSTRING("ColorMatch5"),(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorMatch5")) - (int)1));
						struct _Function_4_1{
							inline static Float Block( Array< ::Dynamic > &_g){
								HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1555);
								{
									HX_STACK_LINE(1555)
									Dynamic o = (_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))->__GetItem((int)4) - (int)1);		HX_STACK_VAR(o,"o");
									struct _Function_5_1{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1555);
											{
												HX_STACK_LINE(1555)
												return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_5_2{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1555);
											{
												HX_STACK_LINE(1555)
												::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1555)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1555)
									return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_5_2::Block(o)) )) )) )) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1555)
						hx::IndexRef((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))).mPtr,(int)4) = _Function_4_1::Block(_g);
						HX_STACK_LINE(1556)
						if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))->__GetItem((int)4) <= (int)0))){
							HX_STACK_LINE(1557)
							hx::IndexRef((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))).mPtr,(int)4) = HX_CSTRING("null");
						}
					}
					HX_STACK_LINE(1563)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_GemID == (int)12))){
						HX_STACK_LINE(1565)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->setGameAttribute(HX_CSTRING("ColorMatch6"),(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorMatch6")) - (int)1));
						struct _Function_4_1{
							inline static Float Block( Array< ::Dynamic > &_g){
								HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1566);
								{
									HX_STACK_LINE(1566)
									Dynamic o = (_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))->__GetItem((int)5) - (int)1);		HX_STACK_VAR(o,"o");
									struct _Function_5_1{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1566);
											{
												HX_STACK_LINE(1566)
												return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_5_2{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",1566);
											{
												HX_STACK_LINE(1566)
												::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1566)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1566)
									return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_5_2::Block(o)) )) )) )) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1566)
						hx::IndexRef((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))).mPtr,(int)5) = _Function_4_1::Block(_g);
						HX_STACK_LINE(1567)
						if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))->__GetItem((int)5) <= (int)0))){
							HX_STACK_LINE(1568)
							hx::IndexRef((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("ColorTargets"))).mPtr,(int)5) = HX_CSTRING("null");
						}
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1440)
		this->addWhenKilledListener(this->actor, Dynamic(new _Function_1_14(_g)));
	}
return null();
}


Void Design_5_5_beatgem_obj::_customEvent_CanSwapRight( ){
{
		HX_STACK_PUSH("Design_5_5_beatgem::_customEvent_CanSwapRight","scripts/Design_5_5_beatgem.hx",665);
		HX_STACK_THIS(this);
		HX_STACK_LINE(664)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_1","scripts/Design_5_5_beatgem.hx",666);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(666)
				if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_NumberOfMatches")) == (int)0))){
					HX_STACK_LINE(669)
					::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("non matchey")),hx::SourceInfo(HX_CSTRING("Design_5_5_beatgem.hx"),669,HX_CSTRING("scripts.Design_5_5_beatgem"),HX_CSTRING("_customEvent_CanSwapRight")));
					HX_STACK_LINE(670)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_CanSwap = false;
					HX_STACK_LINE(671)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_CanSwap"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_CanSwap);
					HX_STACK_LINE(672)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_customEvent_SwapLeft();
					HX_STACK_LINE(673)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->playSound(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getSound((int)118));
				}
				else{
					HX_STACK_LINE(678)
					::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING(" matchey")),hx::SourceInfo(HX_CSTRING("Design_5_5_beatgem.hx"),678,HX_CSTRING("scripts.Design_5_5_beatgem"),HX_CSTRING("_customEvent_CanSwapRight")));
					HX_STACK_LINE(679)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->setGameAttribute(HX_CSTRING("Moves Counter"),(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("Moves Counter")) + (int)1));
					HX_STACK_LINE(680)
					{
						HX_STACK_LINE(680)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						Array< ::Dynamic > _g2 = _g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getActorsOfType(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getActorType((int)125));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(680)
						while(((_g1 < _g2->length))){
							HX_STACK_LINE(680)
							::com::stencyl::models::Actor actorOfType = _g2->__get(_g1).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actorOfType,"actorOfType");
							HX_STACK_LINE(680)
							++(_g1);
							HX_STACK_LINE(682)
							if (((bool((bool((actorOfType != null())) && bool(!(actorOfType->dead)))) && bool(!(actorOfType->recycled))))){
								HX_STACK_LINE(682)
								actorOfType->setValue(HX_CSTRING("WormHole"),HX_CSTRING("_OGSize"),(actorOfType->getValue(HX_CSTRING("WormHole"),HX_CSTRING("_OGSize")) + (int)1));
							}
						}
					}
					HX_STACK_LINE(687)
					return null();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(666)
		this->runLater(250., Dynamic(new _Function_1_1(_g)),this->actor);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_5_5_beatgem_obj,_customEvent_CanSwapRight,(void))

Void Design_5_5_beatgem_obj::_customEvent_CanSwapLeft( ){
{
		HX_STACK_PUSH("Design_5_5_beatgem::_customEvent_CanSwapLeft","scripts/Design_5_5_beatgem.hx",634);
		HX_STACK_THIS(this);
		HX_STACK_LINE(633)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_1","scripts/Design_5_5_beatgem.hx",635);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(635)
				if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_NumberOfMatches")) == (int)0))){
					HX_STACK_LINE(638)
					::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("non matchey")),hx::SourceInfo(HX_CSTRING("Design_5_5_beatgem.hx"),638,HX_CSTRING("scripts.Design_5_5_beatgem"),HX_CSTRING("_customEvent_CanSwapLeft")));
					HX_STACK_LINE(639)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_CanSwap = false;
					HX_STACK_LINE(640)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_CanSwap"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_CanSwap);
					HX_STACK_LINE(641)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_customEvent_SwapRight();
					HX_STACK_LINE(642)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->playSound(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getSound((int)118));
				}
				else{
					HX_STACK_LINE(647)
					::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING(" matchey")),hx::SourceInfo(HX_CSTRING("Design_5_5_beatgem.hx"),647,HX_CSTRING("scripts.Design_5_5_beatgem"),HX_CSTRING("_customEvent_CanSwapLeft")));
					HX_STACK_LINE(648)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->setGameAttribute(HX_CSTRING("Moves Counter"),(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("Moves Counter")) + (int)1));
					HX_STACK_LINE(649)
					{
						HX_STACK_LINE(649)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						Array< ::Dynamic > _g2 = _g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getActorsOfType(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getActorType((int)125));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(649)
						while(((_g1 < _g2->length))){
							HX_STACK_LINE(649)
							::com::stencyl::models::Actor actorOfType = _g2->__get(_g1).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actorOfType,"actorOfType");
							HX_STACK_LINE(649)
							++(_g1);
							HX_STACK_LINE(651)
							if (((bool((bool((actorOfType != null())) && bool(!(actorOfType->dead)))) && bool(!(actorOfType->recycled))))){
								HX_STACK_LINE(651)
								actorOfType->setValue(HX_CSTRING("WormHole"),HX_CSTRING("_OGSize"),(actorOfType->getValue(HX_CSTRING("WormHole"),HX_CSTRING("_OGSize")) + (int)1));
							}
						}
					}
					HX_STACK_LINE(656)
					return null();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(635)
		this->runLater(250., Dynamic(new _Function_1_1(_g)),this->actor);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_5_5_beatgem_obj,_customEvent_CanSwapLeft,(void))

Void Design_5_5_beatgem_obj::_customEvent_CanSwapDown( ){
{
		HX_STACK_PUSH("Design_5_5_beatgem::_customEvent_CanSwapDown","scripts/Design_5_5_beatgem.hx",603);
		HX_STACK_THIS(this);
		HX_STACK_LINE(602)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_1","scripts/Design_5_5_beatgem.hx",604);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(604)
				if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_NumberOfMatches")) == (int)0))){
					HX_STACK_LINE(607)
					::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("non matchey")),hx::SourceInfo(HX_CSTRING("Design_5_5_beatgem.hx"),607,HX_CSTRING("scripts.Design_5_5_beatgem"),HX_CSTRING("_customEvent_CanSwapDown")));
					HX_STACK_LINE(608)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_CanSwap = false;
					HX_STACK_LINE(609)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_CanSwap"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_CanSwap);
					HX_STACK_LINE(610)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_customEvent_SwapUp();
					HX_STACK_LINE(611)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->playSound(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getSound((int)118));
				}
				else{
					HX_STACK_LINE(616)
					::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING(" matchey")),hx::SourceInfo(HX_CSTRING("Design_5_5_beatgem.hx"),616,HX_CSTRING("scripts.Design_5_5_beatgem"),HX_CSTRING("_customEvent_CanSwapDown")));
					HX_STACK_LINE(617)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->setGameAttribute(HX_CSTRING("Moves Counter"),(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("Moves Counter")) + (int)1));
					HX_STACK_LINE(618)
					{
						HX_STACK_LINE(618)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						Array< ::Dynamic > _g2 = _g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getActorsOfType(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getActorType((int)125));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(618)
						while(((_g1 < _g2->length))){
							HX_STACK_LINE(618)
							::com::stencyl::models::Actor actorOfType = _g2->__get(_g1).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actorOfType,"actorOfType");
							HX_STACK_LINE(618)
							++(_g1);
							HX_STACK_LINE(620)
							if (((bool((bool((actorOfType != null())) && bool(!(actorOfType->dead)))) && bool(!(actorOfType->recycled))))){
								HX_STACK_LINE(620)
								actorOfType->setValue(HX_CSTRING("WormHole"),HX_CSTRING("_OGSize"),(actorOfType->getValue(HX_CSTRING("WormHole"),HX_CSTRING("_OGSize")) + (int)1));
							}
						}
					}
					HX_STACK_LINE(625)
					return null();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(604)
		this->runLater(250., Dynamic(new _Function_1_1(_g)),this->actor);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_5_5_beatgem_obj,_customEvent_CanSwapDown,(void))

Void Design_5_5_beatgem_obj::_customEvent_CanSwapUp( ){
{
		HX_STACK_PUSH("Design_5_5_beatgem::_customEvent_CanSwapUp","scripts/Design_5_5_beatgem.hx",572);
		HX_STACK_THIS(this);
		HX_STACK_LINE(571)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_1","scripts/Design_5_5_beatgem.hx",573);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(573)
				if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_NumberOfMatches")) == (int)0))){
					HX_STACK_LINE(576)
					::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("non matchey")),hx::SourceInfo(HX_CSTRING("Design_5_5_beatgem.hx"),576,HX_CSTRING("scripts.Design_5_5_beatgem"),HX_CSTRING("_customEvent_CanSwapUp")));
					HX_STACK_LINE(577)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_CanSwap = false;
					HX_STACK_LINE(578)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_CanSwap"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_CanSwap);
					HX_STACK_LINE(579)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_customEvent_SwapDown();
					HX_STACK_LINE(580)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->playSound(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getSound((int)118));
				}
				else{
					HX_STACK_LINE(585)
					::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING(" matchey")),hx::SourceInfo(HX_CSTRING("Design_5_5_beatgem.hx"),585,HX_CSTRING("scripts.Design_5_5_beatgem"),HX_CSTRING("_customEvent_CanSwapUp")));
					HX_STACK_LINE(586)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->setGameAttribute(HX_CSTRING("Moves Counter"),(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("Moves Counter")) + (int)1));
					HX_STACK_LINE(587)
					{
						HX_STACK_LINE(587)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						Array< ::Dynamic > _g2 = _g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getActorsOfType(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getActorType((int)125));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(587)
						while(((_g1 < _g2->length))){
							HX_STACK_LINE(587)
							::com::stencyl::models::Actor actorOfType = _g2->__get(_g1).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actorOfType,"actorOfType");
							HX_STACK_LINE(587)
							++(_g1);
							HX_STACK_LINE(589)
							if (((bool((bool((actorOfType != null())) && bool(!(actorOfType->dead)))) && bool(!(actorOfType->recycled))))){
								HX_STACK_LINE(589)
								actorOfType->setValue(HX_CSTRING("WormHole"),HX_CSTRING("_OGSize"),(actorOfType->getValue(HX_CSTRING("WormHole"),HX_CSTRING("_OGSize")) + (int)1));
							}
						}
					}
					HX_STACK_LINE(594)
					return null();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(573)
		this->runLater(250., Dynamic(new _Function_1_1(_g)),this->actor);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_5_5_beatgem_obj,_customEvent_CanSwapUp,(void))

Void Design_5_5_beatgem_obj::_customEvent_UpdatePosition( ){
{
		HX_STACK_PUSH("Design_5_5_beatgem::_customEvent_UpdatePosition","scripts/Design_5_5_beatgem.hx",446);
		HX_STACK_THIS(this);
		HX_STACK_LINE(445)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(447)
		if (((this->_SwappingUP == true))){
			HX_STACK_LINE(449)
			::List2D_obj::swap_entry(::Std_obj::_int(this->_StartX),::Std_obj::_int(this->_StartY),::Std_obj::_int(this->_NewX),::Std_obj::_int(this->_NewY),this->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_AlreadySpawned")));
			HX_STACK_LINE(450)
			::List2D_obj::swap_entry(::Std_obj::_int(this->_StartX),::Std_obj::_int(this->_StartY),::Std_obj::_int(this->_NewX),::Std_obj::_int(this->_NewY),this->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_UID")));
			HX_STACK_LINE(451)
			::List2D_obj::swap_entry(::Std_obj::_int(this->_StartX),::Std_obj::_int(this->_StartY),::Std_obj::_int(this->_NewX),::Std_obj::_int(this->_NewY),this->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_GemType")));
			HX_STACK_LINE(452)
			::List2D_obj::swap_entry(::Std_obj::_int(this->_StartX),::Std_obj::_int(this->_StartY),::Std_obj::_int(this->_NewX),::Std_obj::_int(this->_NewY),this->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_SpecialListBomb")));
			HX_STACK_LINE(453)
			if ((this->_CanSwap)){
				HX_STACK_LINE(455)
				this->_customEvent_CanSwapUp();
				HX_STACK_LINE(456)
				this->playSound(this->getSound((int)117));
			}

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g)
			Void run(::com::stencyl::behavior::TimedTask timeTask){
				HX_STACK_PUSH("*::_Function_2_1","scripts/Design_5_5_beatgem.hx",459);
				HX_STACK_ARG(timeTask,"timeTask");
				{
					HX_STACK_LINE(460)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingUP = false;
					HX_STACK_LINE(461)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_SwappingUP"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingUP);
					HX_STACK_LINE(462)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping = false;
					HX_STACK_LINE(463)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Swapping"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping);
					HX_STACK_LINE(464)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_CanSwap = true;
					HX_STACK_LINE(465)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_CanSwap"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_CanSwap);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(459)
			this->runLater(200., Dynamic(new _Function_2_1(_g)),this->actor);
		}
		else{
			HX_STACK_LINE(469)
			if (((this->_SwappingDown == true))){
				HX_STACK_LINE(471)
				::List2D_obj::swap_entry(::Std_obj::_int(this->_StartX),::Std_obj::_int(this->_StartY),::Std_obj::_int(this->_NewX),::Std_obj::_int(this->_NewY),this->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_AlreadySpawned")));
				HX_STACK_LINE(472)
				::List2D_obj::swap_entry(::Std_obj::_int(this->_StartX),::Std_obj::_int(this->_StartY),::Std_obj::_int(this->_NewX),::Std_obj::_int(this->_NewY),this->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_UID")));
				HX_STACK_LINE(473)
				::List2D_obj::swap_entry(::Std_obj::_int(this->_StartX),::Std_obj::_int(this->_StartY),::Std_obj::_int(this->_NewX),::Std_obj::_int(this->_NewY),this->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_GemType")));
				HX_STACK_LINE(474)
				::List2D_obj::swap_entry(::Std_obj::_int(this->_StartX),::Std_obj::_int(this->_StartY),::Std_obj::_int(this->_NewX),::Std_obj::_int(this->_NewY),this->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_SpecialListBomb")));
				HX_STACK_LINE(475)
				if ((this->_CanSwap)){
					HX_STACK_LINE(477)
					this->_customEvent_CanSwapDown();
					HX_STACK_LINE(478)
					this->playSound(this->getSound((int)117));
				}

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_g)
				Void run(::com::stencyl::behavior::TimedTask timeTask){
					HX_STACK_PUSH("*::_Function_3_1","scripts/Design_5_5_beatgem.hx",481);
					HX_STACK_ARG(timeTask,"timeTask");
					{
						HX_STACK_LINE(482)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingDown = false;
						HX_STACK_LINE(483)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_SwappingDown"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingDown);
						HX_STACK_LINE(484)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping = false;
						HX_STACK_LINE(485)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Swapping"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping);
						HX_STACK_LINE(486)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_CanSwap = true;
						HX_STACK_LINE(487)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_CanSwap"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_CanSwap);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(481)
				this->runLater(200., Dynamic(new _Function_3_1(_g)),this->actor);
			}
		}
		HX_STACK_LINE(491)
		if (((this->_SwappingLeft == true))){
			HX_STACK_LINE(493)
			::List2D_obj::swap_entry(::Std_obj::_int(this->_StartX),::Std_obj::_int(this->_StartY),::Std_obj::_int(this->_NewX),::Std_obj::_int(this->_NewY),this->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_AlreadySpawned")));
			HX_STACK_LINE(494)
			::List2D_obj::swap_entry(::Std_obj::_int(this->_StartX),::Std_obj::_int(this->_StartY),::Std_obj::_int(this->_NewX),::Std_obj::_int(this->_NewY),this->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_UID")));
			HX_STACK_LINE(495)
			::List2D_obj::swap_entry(::Std_obj::_int(this->_StartX),::Std_obj::_int(this->_StartY),::Std_obj::_int(this->_NewX),::Std_obj::_int(this->_NewY),this->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_GemType")));
			HX_STACK_LINE(496)
			::List2D_obj::swap_entry(::Std_obj::_int(this->_StartX),::Std_obj::_int(this->_StartY),::Std_obj::_int(this->_NewX),::Std_obj::_int(this->_NewY),this->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_SpecialListBomb")));
			HX_STACK_LINE(497)
			if ((this->_CanSwap)){
				HX_STACK_LINE(499)
				this->_customEvent_CanSwapLeft();
				HX_STACK_LINE(500)
				this->playSound(this->getSound((int)117));
			}

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g)
			Void run(::com::stencyl::behavior::TimedTask timeTask){
				HX_STACK_PUSH("*::_Function_2_1","scripts/Design_5_5_beatgem.hx",503);
				HX_STACK_ARG(timeTask,"timeTask");
				{
					HX_STACK_LINE(504)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingLeft = false;
					HX_STACK_LINE(505)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_SwappingLeft"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingLeft);
					HX_STACK_LINE(506)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping = false;
					HX_STACK_LINE(507)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Swapping"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping);
					HX_STACK_LINE(508)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_CanSwap = true;
					HX_STACK_LINE(509)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_CanSwap"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_CanSwap);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(503)
			this->runLater(200., Dynamic(new _Function_2_1(_g)),this->actor);
		}
		else{
			HX_STACK_LINE(513)
			if (((this->_SwappingRight == true))){
				HX_STACK_LINE(515)
				::List2D_obj::swap_entry(::Std_obj::_int(this->_StartX),::Std_obj::_int(this->_StartY),::Std_obj::_int(this->_NewX),::Std_obj::_int(this->_NewY),this->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_AlreadySpawned")));
				HX_STACK_LINE(516)
				::List2D_obj::swap_entry(::Std_obj::_int(this->_StartX),::Std_obj::_int(this->_StartY),::Std_obj::_int(this->_NewX),::Std_obj::_int(this->_NewY),this->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_UID")));
				HX_STACK_LINE(517)
				::List2D_obj::swap_entry(::Std_obj::_int(this->_StartX),::Std_obj::_int(this->_StartY),::Std_obj::_int(this->_NewX),::Std_obj::_int(this->_NewY),this->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_GemType")));
				HX_STACK_LINE(518)
				::List2D_obj::swap_entry(::Std_obj::_int(this->_StartX),::Std_obj::_int(this->_StartY),::Std_obj::_int(this->_NewX),::Std_obj::_int(this->_NewY),this->getValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_SpecialListBomb")));
				HX_STACK_LINE(519)
				if ((this->_CanSwap)){
					HX_STACK_LINE(521)
					this->_customEvent_CanSwapRight();
					HX_STACK_LINE(522)
					this->playSound(this->getSound((int)117));
				}

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_g)
				Void run(::com::stencyl::behavior::TimedTask timeTask){
					HX_STACK_PUSH("*::_Function_3_1","scripts/Design_5_5_beatgem.hx",525);
					HX_STACK_ARG(timeTask,"timeTask");
					{
						HX_STACK_LINE(526)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingRight = false;
						HX_STACK_LINE(527)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_SwappingRight"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingRight);
						HX_STACK_LINE(528)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping = false;
						HX_STACK_LINE(529)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Swapping"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping);
						HX_STACK_LINE(530)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_CanSwap = true;
						HX_STACK_LINE(531)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_CanSwap"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_CanSwap);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(525)
				this->runLater(200., Dynamic(new _Function_3_1(_g)),this->actor);
			}
			else{
			}
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_1","scripts/Design_5_5_beatgem.hx",540);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(540)
				if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping == false))){

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_g)
					Void run(::com::stencyl::behavior::TimedTask timeTask1){
						HX_STACK_PUSH("*::_Function_3_1","scripts/Design_5_5_beatgem.hx",544);
						HX_STACK_ARG(timeTask1,"timeTask1");
						{
							struct _Function_4_1{
								inline static Float Block( Array< ::Dynamic > &_g){
									HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",545);
									{
										HX_STACK_LINE(545)
										Dynamic o = _g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_NewX;		HX_STACK_VAR(o,"o");
										struct _Function_5_1{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",545);
												{
													HX_STACK_LINE(545)
													return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
												}
												return null();
											}
										};
										struct _Function_5_2{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",545);
												{
													HX_STACK_LINE(545)
													::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
													HX_STACK_LINE(545)
													return (int)0;
												}
												return null();
											}
										};
										HX_STACK_LINE(545)
										return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_5_2::Block(o)) )) )) )) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(545)
							_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_StartX = _Function_4_1::Block(_g);
							HX_STACK_LINE(546)
							_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_StartX"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_StartX);
							struct _Function_4_2{
								inline static Float Block( Array< ::Dynamic > &_g){
									HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",547);
									{
										HX_STACK_LINE(547)
										Dynamic o = _g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_NewY;		HX_STACK_VAR(o,"o");
										struct _Function_5_1{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",547);
												{
													HX_STACK_LINE(547)
													return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
												}
												return null();
											}
										};
										struct _Function_5_2{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",547);
												{
													HX_STACK_LINE(547)
													::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
													HX_STACK_LINE(547)
													return (int)0;
												}
												return null();
											}
										};
										HX_STACK_LINE(547)
										return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_5_2::Block(o)) )) )) )) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(547)
							_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_StartY = _Function_4_2::Block(_g);
							HX_STACK_LINE(548)
							_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_StartY"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_StartY);
							struct _Function_4_3{
								inline static int Block( ){
									HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",549);
									{
										HX_STACK_LINE(549)
										return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
									}
									return null();
								}
							};
							struct _Function_4_4{
								inline static int Block( ){
									HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",549);
									{
										HX_STACK_LINE(549)
										::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
										HX_STACK_LINE(549)
										return (int)0;
									}
									return null();
								}
							};
							HX_STACK_LINE(549)
							_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_NewX = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_4_3::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_4_4::Block()) )) )) )) );
							HX_STACK_LINE(550)
							_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_NewX"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_NewX);
							struct _Function_4_5{
								inline static int Block( ){
									HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",551);
									{
										HX_STACK_LINE(551)
										return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
									}
									return null();
								}
							};
							struct _Function_4_6{
								inline static int Block( ){
									HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",551);
									{
										HX_STACK_LINE(551)
										::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
										HX_STACK_LINE(551)
										return (int)0;
									}
									return null();
								}
							};
							HX_STACK_LINE(551)
							_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_NewY = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_4_5::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_4_6::Block()) )) )) )) );
							HX_STACK_LINE(552)
							_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_NewY"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_NewY);
							HX_STACK_LINE(553)
							for(::cpp::FastIterator_obj< ::com::stencyl::models::Region > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Region >(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->engine->getRegions()->iterator());  __it->hasNext(); ){
								::com::stencyl::models::Region region = __it->next();
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->removeRegion(region->getID());
							}
							HX_STACK_LINE(557)
							if (((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("RegionCreated?")) == true))){
								HX_STACK_LINE(558)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->setGameAttribute(HX_CSTRING("RegionCreated?"),false);
							}
							HX_STACK_LINE(562)
							_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->sayToScene(HX_CSTRING("Scene Manager"),(HX_CSTRING("_customEvent_") + HX_CSTRING("CHECKGRID")),null());
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(542)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->runLater(10., Dynamic(new _Function_3_1(_g)),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(540)
		this->runLater(210., Dynamic(new _Function_1_1(_g)),this->actor);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_5_5_beatgem_obj,_customEvent_UpdatePosition,(void))

Void Design_5_5_beatgem_obj::_customEvent_SwapRight( ){
{
		HX_STACK_PUSH("Design_5_5_beatgem::_customEvent_SwapRight","scripts/Design_5_5_beatgem.hx",393);
		HX_STACK_THIS(this);
		HX_STACK_LINE(392)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(394)
		this->_Swapping = true;
		HX_STACK_LINE(395)
		this->propertyChanged(HX_CSTRING("_Swapping"),this->_Swapping);
		HX_STACK_LINE(396)
		this->createBoxRegion((this->actor->getX(null()) + this->getGameAttribute(HX_CSTRING("Grid Spacing"))),this->actor->getY(null()),this->actor->getWidth(),this->actor->getHeight());
		HX_STACK_LINE(397)
		this->setGameAttribute(HX_CSTRING("RegionCreated?"),true);
		HX_STACK_LINE(398)
		this->_Target = this->getLastCreatedRegion();
		HX_STACK_LINE(399)
		this->propertyChanged(HX_CSTRING("_Target"),this->_Target);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_1","scripts/Design_5_5_beatgem.hx",400);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(401)
				{
					HX_STACK_LINE(401)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					Array< ::Dynamic > _g2 = _g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getActorsInRegion(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getLastCreatedRegion());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(401)
					while(((_g1 < _g2->length))){
						HX_STACK_LINE(401)
						::com::stencyl::models::Actor actorInRegion = _g2->__get(_g1).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actorInRegion,"actorInRegion");
						HX_STACK_LINE(401)
						++(_g1);
						HX_STACK_LINE(403)
						if (((bool((actorInRegion != null())) && bool(!(actorInRegion->dead))))){
							HX_STACK_LINE(403)
							if ((((actorInRegion->getType() == _g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getActorType((int)0)) == true))){
								HX_STACK_LINE(406)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping = true;
								HX_STACK_LINE(407)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Swapping"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping);
								HX_STACK_LINE(408)
								::haxe::Log_obj::trace((HX_CSTRING("") + ((HX_CSTRING("") + ::Std_obj::string(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping)))),hx::SourceInfo(HX_CSTRING("Design_5_5_beatgem.hx"),408,HX_CSTRING("scripts.Design_5_5_beatgem"),HX_CSTRING("_customEvent_SwapRight")));
								HX_STACK_LINE(409)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->moveBy((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getLastCreatedRegion()->getX(null()) - _g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->getX(null())),(int)0,(Float((Float((int)60) / Float((int)140))) / Float((int)2)),::motion::easing::Quad_obj::get_easeInOut());
								HX_STACK_LINE(410)
								actorInRegion->moveBy(-(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("Grid Spacing"))),(int)0,(Float((Float((int)60) / Float((int)140))) / Float((int)2)),::motion::easing::Quad_obj::get_easeInOut());
								struct _Function_6_1{
									inline static Float Block( ::com::stencyl::models::Actor &actorInRegion){
										HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",411);
										{
											HX_STACK_LINE(411)
											Dynamic o = actorInRegion->getValue(HX_CSTRING("beat gem"),HX_CSTRING("_StartX"));		HX_STACK_VAR(o,"o");
											struct _Function_7_1{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",411);
													{
														HX_STACK_LINE(411)
														return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
													}
													return null();
												}
											};
											struct _Function_7_2{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",411);
													{
														HX_STACK_LINE(411)
														::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
														HX_STACK_LINE(411)
														return (int)0;
													}
													return null();
												}
											};
											HX_STACK_LINE(411)
											return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_7_2::Block(o)) )) )) )) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(411)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_NewX = _Function_6_1::Block(actorInRegion);
								HX_STACK_LINE(412)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_NewX"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_NewX);
								struct _Function_6_2{
									inline static Float Block( ::com::stencyl::models::Actor &actorInRegion){
										HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",413);
										{
											HX_STACK_LINE(413)
											Dynamic o = actorInRegion->getValue(HX_CSTRING("beat gem"),HX_CSTRING("_StartY"));		HX_STACK_VAR(o,"o");
											struct _Function_7_1{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",413);
													{
														HX_STACK_LINE(413)
														return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
													}
													return null();
												}
											};
											struct _Function_7_2{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",413);
													{
														HX_STACK_LINE(413)
														::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
														HX_STACK_LINE(413)
														return (int)0;
													}
													return null();
												}
											};
											HX_STACK_LINE(413)
											return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_7_2::Block(o)) )) )) )) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(413)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_NewY = _Function_6_2::Block(actorInRegion);
								HX_STACK_LINE(414)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_NewY"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_NewY);
								HX_STACK_LINE(415)
								actorInRegion->setValue(HX_CSTRING("beat gem"),HX_CSTRING("_StartX"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_StartX);
								HX_STACK_LINE(416)
								actorInRegion->setValue(HX_CSTRING("beat gem"),HX_CSTRING("_StartY"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_StartY);
								HX_STACK_LINE(417)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingRight = true;
								HX_STACK_LINE(418)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_SwappingRight"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingRight);
								HX_STACK_LINE(419)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_customEvent_UpdatePosition();
							}
						}
					}
				}
				HX_STACK_LINE(425)
				if ((!(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingRight))){
					HX_STACK_LINE(427)
					for(::cpp::FastIterator_obj< ::com::stencyl::models::Region > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Region >(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->engine->getRegions()->iterator());  __it->hasNext(); ){
						::com::stencyl::models::Region region = __it->next();
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->removeRegion(region->getID());
					}
					HX_STACK_LINE(431)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->setGameAttribute(HX_CSTRING("RegionCreated?"),false);
					HX_STACK_LINE(432)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping = false;
					HX_STACK_LINE(433)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Swapping"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping);
					HX_STACK_LINE(434)
					::haxe::Log_obj::trace((HX_CSTRING("") + ((HX_CSTRING("") + ::Std_obj::string(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping)))),hx::SourceInfo(HX_CSTRING("Design_5_5_beatgem.hx"),434,HX_CSTRING("scripts.Design_5_5_beatgem"),HX_CSTRING("_customEvent_SwapRight")));
					HX_STACK_LINE(435)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingRight = false;
					HX_STACK_LINE(436)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_SwappingRight"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingRight);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(400)
		this->runLater(200., Dynamic(new _Function_1_1(_g)),this->actor);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_5_5_beatgem_obj,_customEvent_SwapRight,(void))

Void Design_5_5_beatgem_obj::_customEvent_SwapLeft( ){
{
		HX_STACK_PUSH("Design_5_5_beatgem::_customEvent_SwapLeft","scripts/Design_5_5_beatgem.hx",340);
		HX_STACK_THIS(this);
		HX_STACK_LINE(339)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(341)
		this->_Swapping = true;
		HX_STACK_LINE(342)
		this->propertyChanged(HX_CSTRING("_Swapping"),this->_Swapping);
		HX_STACK_LINE(343)
		this->createBoxRegion((this->actor->getX(null()) - this->getGameAttribute(HX_CSTRING("Grid Spacing"))),this->actor->getY(null()),this->actor->getWidth(),this->actor->getHeight());
		HX_STACK_LINE(344)
		this->setGameAttribute(HX_CSTRING("RegionCreated?"),true);
		HX_STACK_LINE(345)
		this->_Target = this->getLastCreatedRegion();
		HX_STACK_LINE(346)
		this->propertyChanged(HX_CSTRING("_Target"),this->_Target);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_1","scripts/Design_5_5_beatgem.hx",347);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(348)
				{
					HX_STACK_LINE(348)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					Array< ::Dynamic > _g2 = _g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getActorsInRegion(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getLastCreatedRegion());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(348)
					while(((_g1 < _g2->length))){
						HX_STACK_LINE(348)
						::com::stencyl::models::Actor actorInRegion = _g2->__get(_g1).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actorInRegion,"actorInRegion");
						HX_STACK_LINE(348)
						++(_g1);
						HX_STACK_LINE(350)
						if (((bool((actorInRegion != null())) && bool(!(actorInRegion->dead))))){
							HX_STACK_LINE(350)
							if ((((actorInRegion->getType() == _g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getActorType((int)0)) == true))){
								HX_STACK_LINE(353)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping = true;
								HX_STACK_LINE(354)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Swapping"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping);
								HX_STACK_LINE(355)
								::haxe::Log_obj::trace((HX_CSTRING("") + ((HX_CSTRING("") + ::Std_obj::string(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping)))),hx::SourceInfo(HX_CSTRING("Design_5_5_beatgem.hx"),355,HX_CSTRING("scripts.Design_5_5_beatgem"),HX_CSTRING("_customEvent_SwapLeft")));
								HX_STACK_LINE(356)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->moveBy((_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getLastCreatedRegion()->getX(null()) - _g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->getX(null())),(int)0,(Float((Float((int)60) / Float((int)140))) / Float((int)2)),::motion::easing::Quad_obj::get_easeInOut());
								HX_STACK_LINE(357)
								actorInRegion->moveBy(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("Grid Spacing")),(int)0,(Float((Float((int)60) / Float((int)140))) / Float((int)2)),::motion::easing::Quad_obj::get_easeInOut());
								struct _Function_6_1{
									inline static Float Block( ::com::stencyl::models::Actor &actorInRegion){
										HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",358);
										{
											HX_STACK_LINE(358)
											Dynamic o = actorInRegion->getValue(HX_CSTRING("beat gem"),HX_CSTRING("_StartX"));		HX_STACK_VAR(o,"o");
											struct _Function_7_1{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",358);
													{
														HX_STACK_LINE(358)
														return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
													}
													return null();
												}
											};
											struct _Function_7_2{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",358);
													{
														HX_STACK_LINE(358)
														::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
														HX_STACK_LINE(358)
														return (int)0;
													}
													return null();
												}
											};
											HX_STACK_LINE(358)
											return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_7_2::Block(o)) )) )) )) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(358)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_NewX = _Function_6_1::Block(actorInRegion);
								HX_STACK_LINE(359)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_NewX"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_NewX);
								struct _Function_6_2{
									inline static Float Block( ::com::stencyl::models::Actor &actorInRegion){
										HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",360);
										{
											HX_STACK_LINE(360)
											Dynamic o = actorInRegion->getValue(HX_CSTRING("beat gem"),HX_CSTRING("_StartY"));		HX_STACK_VAR(o,"o");
											struct _Function_7_1{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",360);
													{
														HX_STACK_LINE(360)
														return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
													}
													return null();
												}
											};
											struct _Function_7_2{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",360);
													{
														HX_STACK_LINE(360)
														::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
														HX_STACK_LINE(360)
														return (int)0;
													}
													return null();
												}
											};
											HX_STACK_LINE(360)
											return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_7_2::Block(o)) )) )) )) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(360)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_NewY = _Function_6_2::Block(actorInRegion);
								HX_STACK_LINE(361)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_NewY"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_NewY);
								HX_STACK_LINE(362)
								actorInRegion->setValue(HX_CSTRING("beat gem"),HX_CSTRING("_StartX"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_StartX);
								HX_STACK_LINE(363)
								actorInRegion->setValue(HX_CSTRING("beat gem"),HX_CSTRING("_StartY"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_StartY);
								HX_STACK_LINE(364)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingLeft = true;
								HX_STACK_LINE(365)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_SwappingLeft"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingLeft);
								HX_STACK_LINE(366)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_customEvent_UpdatePosition();
							}
						}
					}
				}
				HX_STACK_LINE(372)
				if ((!(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingLeft))){
					HX_STACK_LINE(374)
					for(::cpp::FastIterator_obj< ::com::stencyl::models::Region > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Region >(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->engine->getRegions()->iterator());  __it->hasNext(); ){
						::com::stencyl::models::Region region = __it->next();
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->removeRegion(region->getID());
					}
					HX_STACK_LINE(378)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->setGameAttribute(HX_CSTRING("RegionCreated?"),false);
					HX_STACK_LINE(379)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping = false;
					HX_STACK_LINE(380)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Swapping"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping);
					HX_STACK_LINE(381)
					::haxe::Log_obj::trace((HX_CSTRING("") + ((HX_CSTRING("") + ::Std_obj::string(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping)))),hx::SourceInfo(HX_CSTRING("Design_5_5_beatgem.hx"),381,HX_CSTRING("scripts.Design_5_5_beatgem"),HX_CSTRING("_customEvent_SwapLeft")));
					HX_STACK_LINE(382)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingLeft = false;
					HX_STACK_LINE(383)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_SwappingLeft"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingLeft);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(347)
		this->runLater(200., Dynamic(new _Function_1_1(_g)),this->actor);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_5_5_beatgem_obj,_customEvent_SwapLeft,(void))

Void Design_5_5_beatgem_obj::_customEvent_SwapDown( ){
{
		HX_STACK_PUSH("Design_5_5_beatgem::_customEvent_SwapDown","scripts/Design_5_5_beatgem.hx",287);
		HX_STACK_THIS(this);
		HX_STACK_LINE(286)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(288)
		this->_Swapping = true;
		HX_STACK_LINE(289)
		this->propertyChanged(HX_CSTRING("_Swapping"),this->_Swapping);
		HX_STACK_LINE(290)
		this->createBoxRegion(this->actor->getX(null()),(this->actor->getY(null()) + this->getGameAttribute(HX_CSTRING("Grid Spacing"))),this->actor->getWidth(),this->actor->getHeight());
		HX_STACK_LINE(291)
		this->setGameAttribute(HX_CSTRING("RegionCreated?"),true);
		HX_STACK_LINE(292)
		this->_Target = this->getLastCreatedRegion();
		HX_STACK_LINE(293)
		this->propertyChanged(HX_CSTRING("_Target"),this->_Target);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_1","scripts/Design_5_5_beatgem.hx",294);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(295)
				{
					HX_STACK_LINE(295)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					Array< ::Dynamic > _g2 = _g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getActorsInRegion(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getLastCreatedRegion());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(295)
					while(((_g1 < _g2->length))){
						HX_STACK_LINE(295)
						::com::stencyl::models::Actor actorInRegion = _g2->__get(_g1).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actorInRegion,"actorInRegion");
						HX_STACK_LINE(295)
						++(_g1);
						HX_STACK_LINE(297)
						if (((bool((actorInRegion != null())) && bool(!(actorInRegion->dead))))){
							HX_STACK_LINE(297)
							if ((((actorInRegion->getType() == _g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getActorType((int)0)) == true))){
								HX_STACK_LINE(300)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping = true;
								HX_STACK_LINE(301)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Swapping"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping);
								HX_STACK_LINE(302)
								::haxe::Log_obj::trace((HX_CSTRING("") + ((HX_CSTRING("") + ::Std_obj::string(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping)))),hx::SourceInfo(HX_CSTRING("Design_5_5_beatgem.hx"),302,HX_CSTRING("scripts.Design_5_5_beatgem"),HX_CSTRING("_customEvent_SwapDown")));
								HX_STACK_LINE(303)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->moveBy((int)0,(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getLastCreatedRegion()->getY(null()) - _g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->getY(null())),(Float((Float((int)60) / Float((int)140))) / Float((int)2)),::motion::easing::Quad_obj::get_easeInOut());
								HX_STACK_LINE(304)
								actorInRegion->moveBy((int)0,-(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("Grid Spacing"))),(Float((Float((int)60) / Float((int)140))) / Float((int)2)),::motion::easing::Quad_obj::get_easeInOut());
								struct _Function_6_1{
									inline static Float Block( ::com::stencyl::models::Actor &actorInRegion){
										HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",305);
										{
											HX_STACK_LINE(305)
											Dynamic o = actorInRegion->getValue(HX_CSTRING("beat gem"),HX_CSTRING("_StartX"));		HX_STACK_VAR(o,"o");
											struct _Function_7_1{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",305);
													{
														HX_STACK_LINE(305)
														return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
													}
													return null();
												}
											};
											struct _Function_7_2{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",305);
													{
														HX_STACK_LINE(305)
														::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
														HX_STACK_LINE(305)
														return (int)0;
													}
													return null();
												}
											};
											HX_STACK_LINE(305)
											return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_7_2::Block(o)) )) )) )) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(305)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_NewX = _Function_6_1::Block(actorInRegion);
								HX_STACK_LINE(306)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_NewX"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_NewX);
								struct _Function_6_2{
									inline static Float Block( ::com::stencyl::models::Actor &actorInRegion){
										HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",307);
										{
											HX_STACK_LINE(307)
											Dynamic o = actorInRegion->getValue(HX_CSTRING("beat gem"),HX_CSTRING("_StartY"));		HX_STACK_VAR(o,"o");
											struct _Function_7_1{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",307);
													{
														HX_STACK_LINE(307)
														return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
													}
													return null();
												}
											};
											struct _Function_7_2{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",307);
													{
														HX_STACK_LINE(307)
														::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
														HX_STACK_LINE(307)
														return (int)0;
													}
													return null();
												}
											};
											HX_STACK_LINE(307)
											return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_7_2::Block(o)) )) )) )) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(307)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_NewY = _Function_6_2::Block(actorInRegion);
								HX_STACK_LINE(308)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_NewY"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_NewY);
								HX_STACK_LINE(309)
								actorInRegion->setValue(HX_CSTRING("beat gem"),HX_CSTRING("_StartX"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_StartX);
								HX_STACK_LINE(310)
								actorInRegion->setValue(HX_CSTRING("beat gem"),HX_CSTRING("_StartY"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_StartY);
								HX_STACK_LINE(311)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingDown = true;
								HX_STACK_LINE(312)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_SwappingDown"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingDown);
								HX_STACK_LINE(313)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_customEvent_UpdatePosition();
							}
						}
					}
				}
				HX_STACK_LINE(319)
				if ((!(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingDown))){
					HX_STACK_LINE(321)
					for(::cpp::FastIterator_obj< ::com::stencyl::models::Region > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Region >(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->engine->getRegions()->iterator());  __it->hasNext(); ){
						::com::stencyl::models::Region region = __it->next();
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->removeRegion(region->getID());
					}
					HX_STACK_LINE(325)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->setGameAttribute(HX_CSTRING("RegionCreated?"),false);
					HX_STACK_LINE(326)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping = false;
					HX_STACK_LINE(327)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Swapping"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping);
					HX_STACK_LINE(328)
					::haxe::Log_obj::trace((HX_CSTRING("") + ((HX_CSTRING("") + ::Std_obj::string(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping)))),hx::SourceInfo(HX_CSTRING("Design_5_5_beatgem.hx"),328,HX_CSTRING("scripts.Design_5_5_beatgem"),HX_CSTRING("_customEvent_SwapDown")));
					HX_STACK_LINE(329)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingDown = false;
					HX_STACK_LINE(330)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_SwappingDown"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingDown);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(294)
		this->runLater(200., Dynamic(new _Function_1_1(_g)),this->actor);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_5_5_beatgem_obj,_customEvent_SwapDown,(void))

Void Design_5_5_beatgem_obj::_customEvent_SwapUp( ){
{
		HX_STACK_PUSH("Design_5_5_beatgem::_customEvent_SwapUp","scripts/Design_5_5_beatgem.hx",231);
		HX_STACK_THIS(this);
		HX_STACK_LINE(230)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(233)
		this->_Swapping = true;
		HX_STACK_LINE(234)
		this->propertyChanged(HX_CSTRING("_Swapping"),this->_Swapping);
		HX_STACK_LINE(235)
		this->createBoxRegion(this->actor->getX(null()),(this->actor->getY(null()) - this->getGameAttribute(HX_CSTRING("Grid Spacing"))),this->actor->getWidth(),this->actor->getHeight());
		HX_STACK_LINE(236)
		this->setGameAttribute(HX_CSTRING("RegionCreated?"),true);
		HX_STACK_LINE(237)
		this->_Target = this->getLastCreatedRegion();
		HX_STACK_LINE(238)
		this->propertyChanged(HX_CSTRING("_Target"),this->_Target);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_1","scripts/Design_5_5_beatgem.hx",239);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(240)
				{
					HX_STACK_LINE(240)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					Array< ::Dynamic > _g2 = _g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getActorsInRegion(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getLastCreatedRegion());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(240)
					while(((_g1 < _g2->length))){
						HX_STACK_LINE(240)
						::com::stencyl::models::Actor actorInRegion = _g2->__get(_g1).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actorInRegion,"actorInRegion");
						HX_STACK_LINE(240)
						++(_g1);
						HX_STACK_LINE(242)
						if (((bool((actorInRegion != null())) && bool(!(actorInRegion->dead))))){
							HX_STACK_LINE(242)
							if (((actorInRegion->getType() == _g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getActorType((int)0)))){
								HX_STACK_LINE(246)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping = true;
								HX_STACK_LINE(247)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Swapping"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping);
								HX_STACK_LINE(248)
								::haxe::Log_obj::trace((HX_CSTRING("") + ((HX_CSTRING("") + ::Std_obj::string(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping)))),hx::SourceInfo(HX_CSTRING("Design_5_5_beatgem.hx"),248,HX_CSTRING("scripts.Design_5_5_beatgem"),HX_CSTRING("_customEvent_SwapUp")));
								HX_STACK_LINE(249)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->moveBy((int)0,(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getLastCreatedRegion()->getY(null()) - _g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->getY(null())),(Float((Float((int)60) / Float((int)140))) / Float((int)2)),::motion::easing::Quad_obj::get_easeInOut());
								HX_STACK_LINE(250)
								actorInRegion->moveBy((int)0,_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("Grid Spacing")),(Float((Float((int)60) / Float((int)140))) / Float((int)2)),::motion::easing::Quad_obj::get_easeInOut());
								struct _Function_6_1{
									inline static Float Block( ::com::stencyl::models::Actor &actorInRegion){
										HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",251);
										{
											HX_STACK_LINE(251)
											Dynamic o = actorInRegion->getValue(HX_CSTRING("beat gem"),HX_CSTRING("_StartX"));		HX_STACK_VAR(o,"o");
											struct _Function_7_1{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",251);
													{
														HX_STACK_LINE(251)
														return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
													}
													return null();
												}
											};
											struct _Function_7_2{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",251);
													{
														HX_STACK_LINE(251)
														::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
														HX_STACK_LINE(251)
														return (int)0;
													}
													return null();
												}
											};
											HX_STACK_LINE(251)
											return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_7_2::Block(o)) )) )) )) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(251)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_NewX = _Function_6_1::Block(actorInRegion);
								HX_STACK_LINE(252)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_NewX"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_NewX);
								struct _Function_6_2{
									inline static Float Block( ::com::stencyl::models::Actor &actorInRegion){
										HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",253);
										{
											HX_STACK_LINE(253)
											Dynamic o = actorInRegion->getValue(HX_CSTRING("beat gem"),HX_CSTRING("_StartY"));		HX_STACK_VAR(o,"o");
											struct _Function_7_1{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",253);
													{
														HX_STACK_LINE(253)
														return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
													}
													return null();
												}
											};
											struct _Function_7_2{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_5_5_beatgem.hx",253);
													{
														HX_STACK_LINE(253)
														::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
														HX_STACK_LINE(253)
														return (int)0;
													}
													return null();
												}
											};
											HX_STACK_LINE(253)
											return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_7_2::Block(o)) )) )) )) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(253)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_NewY = _Function_6_2::Block(actorInRegion);
								HX_STACK_LINE(254)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_NewY"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_NewY);
								HX_STACK_LINE(255)
								actorInRegion->setValue(HX_CSTRING("beat gem"),HX_CSTRING("_StartX"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_StartX);
								HX_STACK_LINE(256)
								actorInRegion->setValue(HX_CSTRING("beat gem"),HX_CSTRING("_StartY"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_StartY);
								HX_STACK_LINE(257)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingUP = true;
								HX_STACK_LINE(258)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_SwappingUP"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingUP);
								HX_STACK_LINE(259)
								_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_customEvent_UpdatePosition();
							}
						}
					}
				}
				HX_STACK_LINE(265)
				if ((!(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingUP))){
					HX_STACK_LINE(267)
					for(::cpp::FastIterator_obj< ::com::stencyl::models::Region > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Region >(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->engine->getRegions()->iterator());  __it->hasNext(); ){
						::com::stencyl::models::Region region = __it->next();
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->removeRegion(region->getID());
					}
					HX_STACK_LINE(271)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->setGameAttribute(HX_CSTRING("RegionCreated?"),false);
					HX_STACK_LINE(273)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping = false;
					HX_STACK_LINE(274)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_Swapping"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping);
					HX_STACK_LINE(275)
					::haxe::Log_obj::trace((HX_CSTRING("") + ((HX_CSTRING("") + ::Std_obj::string(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_Swapping)))),hx::SourceInfo(HX_CSTRING("Design_5_5_beatgem.hx"),275,HX_CSTRING("scripts.Design_5_5_beatgem"),HX_CSTRING("_customEvent_SwapUp")));
					HX_STACK_LINE(276)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingUP = false;
					HX_STACK_LINE(277)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->propertyChanged(HX_CSTRING("_SwappingUP"),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->_SwappingUP);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(239)
		this->runLater(200., Dynamic(new _Function_1_1(_g)),this->actor);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_5_5_beatgem_obj,_customEvent_SwapUp,(void))

Void Design_5_5_beatgem_obj::_customEvent_Tappy( ){
{
		HX_STACK_PUSH("Design_5_5_beatgem::_customEvent_Tappy","scripts/Design_5_5_beatgem.hx",200);
		HX_STACK_THIS(this);
		HX_STACK_LINE(199)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(201)
		this->_tapping = true;
		HX_STACK_LINE(202)
		this->propertyChanged(HX_CSTRING("_tapping"),this->_tapping);
		HX_STACK_LINE(203)
		this->setValueForScene(HX_CSTRING("Scene Manager"),HX_CSTRING("_TapmodeFlag"),true);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_1","scripts/Design_5_5_beatgem.hx",204);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(205)
				_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->setGameAttribute(HX_CSTRING("OnBeat"),false);
				HX_STACK_LINE(206)
				if ((!(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("Tappings"))))){
					HX_STACK_LINE(208)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->sayToScene(HX_CSTRING("Scene Manager"),(HX_CSTRING("_customEvent_") + HX_CSTRING("ResetTap")),null());
					HX_STACK_LINE(209)
					_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->growTo(1.,1.,(Float((Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)),::motion::easing::Linear_obj::get_easeNone());
					HX_STACK_LINE(210)
					timeTask->repeats = false;
					HX_STACK_LINE(211)
					return null();
				}
				HX_STACK_LINE(215)
				_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->growTo(1.,1.,(Float((Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)),::motion::easing::Linear_obj::get_easeNone());

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g)
				Void run(::com::stencyl::behavior::TimedTask timeTask1){
					HX_STACK_PUSH("*::_Function_2_1","scripts/Design_5_5_beatgem.hx",216);
					HX_STACK_ARG(timeTask1,"timeTask1");
					{
						HX_STACK_LINE(217)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->setGameAttribute(HX_CSTRING("OnBeat"),true);
						HX_STACK_LINE(218)
						_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor->growTo(1.2,1.2,(Float((Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)),::motion::easing::Linear_obj::get_easeNone());
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(216)
				_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->runLater(((int)1000 * ((Float((Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)))), Dynamic(new _Function_2_1(_g)),_g->__get((int)0).StaticCast< ::scripts::Design_5_5_beatgem >()->actor);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(204)
		this->runPeriodically(((int)1000 * ((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo")))))), Dynamic(new _Function_1_1(_g)),this->actor);
		HX_STACK_LINE(221)
		if ((!(this->getGameAttribute(HX_CSTRING("TapMode"))))){
			HX_STACK_LINE(222)
			this->setGameAttribute(HX_CSTRING("TapMode"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_5_5_beatgem_obj,_customEvent_Tappy,(void))


Design_5_5_beatgem_obj::Design_5_5_beatgem_obj()
{
}

void Design_5_5_beatgem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Design_5_5_beatgem);
	HX_MARK_MEMBER_NAME(_RestTap,"_RestTap");
	HX_MARK_MEMBER_NAME(_TappingList,"_TappingList");
	HX_MARK_MEMBER_NAME(_tapping,"_tapping");
	HX_MARK_MEMBER_NAME(_GTempo,"_GTempo");
	HX_MARK_MEMBER_NAME(_Tappable,"_Tappable");
	HX_MARK_MEMBER_NAME(_GemSelector,"_GemSelector");
	HX_MARK_MEMBER_NAME(_Taplist,"_Taplist");
	HX_MARK_MEMBER_NAME(_Type17,"_Type17");
	HX_MARK_MEMBER_NAME(_Type18,"_Type18");
	HX_MARK_MEMBER_NAME(_Degrees,"_Degrees");
	HX_MARK_MEMBER_NAME(_RegionCreated,"_RegionCreated");
	HX_MARK_MEMBER_NAME(_Type13,"_Type13");
	HX_MARK_MEMBER_NAME(_Type14,"_Type14");
	HX_MARK_MEMBER_NAME(_Type15,"_Type15");
	HX_MARK_MEMBER_NAME(_Type16,"_Type16");
	HX_MARK_MEMBER_NAME(_ColorMatch3,"_ColorMatch3");
	HX_MARK_MEMBER_NAME(_ColorMatch4,"_ColorMatch4");
	HX_MARK_MEMBER_NAME(_ColorMatch5,"_ColorMatch5");
	HX_MARK_MEMBER_NAME(_ColorMatch6,"_ColorMatch6");
	HX_MARK_MEMBER_NAME(_GemType,"_GemType");
	HX_MARK_MEMBER_NAME(_type12,"_type12");
	HX_MARK_MEMBER_NAME(_ColorMatch2,"_ColorMatch2");
	HX_MARK_MEMBER_NAME(_ColorMatch1,"_ColorMatch1");
	HX_MARK_MEMBER_NAME(_Type9,"_Type9");
	HX_MARK_MEMBER_NAME(_TypeNumber,"_TypeNumber");
	HX_MARK_MEMBER_NAME(_type11,"_type11");
	HX_MARK_MEMBER_NAME(_type10,"_type10");
	HX_MARK_MEMBER_NAME(_Gem,"_Gem");
	HX_MARK_MEMBER_NAME(_CanSwap,"_CanSwap");
	HX_MARK_MEMBER_NAME(_Type8,"_Type8");
	HX_MARK_MEMBER_NAME(_Type7,"_Type7");
	HX_MARK_MEMBER_NAME(_Direction,"_Direction");
	HX_MARK_MEMBER_NAME(_type3,"_type3");
	HX_MARK_MEMBER_NAME(_BeaterCombo,"_BeaterCombo");
	HX_MARK_MEMBER_NAME(_Metronome,"_Metronome");
	HX_MARK_MEMBER_NAME(_type5,"_type5");
	HX_MARK_MEMBER_NAME(_type6,"_type6");
	HX_MARK_MEMBER_NAME(_type4,"_type4");
	HX_MARK_MEMBER_NAME(_type1,"_type1");
	HX_MARK_MEMBER_NAME(_type2,"_type2");
	HX_MARK_MEMBER_NAME(_SpawnTypeActor,"_SpawnTypeActor");
	HX_MARK_MEMBER_NAME(_SpawnTypeID,"_SpawnTypeID");
	HX_MARK_MEMBER_NAME(_UID,"_UID");
	HX_MARK_MEMBER_NAME(_SelfSelector,"_SelfSelector");
	HX_MARK_MEMBER_NAME(_Xincrementer,"_Xincrementer");
	HX_MARK_MEMBER_NAME(_YIncrementer,"_YIncrementer");
	HX_MARK_MEMBER_NAME(_RegionList,"_RegionList");
	HX_MARK_MEMBER_NAME(_ActorReveal,"_ActorReveal");
	HX_MARK_MEMBER_NAME(_Colliding,"_Colliding");
	HX_MARK_MEMBER_NAME(_Octave,"_Octave");
	HX_MARK_MEMBER_NAME(_GemID,"_GemID");
	HX_MARK_MEMBER_NAME(_GemTypeNumber,"_GemTypeNumber");
	HX_MARK_MEMBER_NAME(_SwappingRight,"_SwappingRight");
	HX_MARK_MEMBER_NAME(_SwappingLeft,"_SwappingLeft");
	HX_MARK_MEMBER_NAME(_SwappingDown,"_SwappingDown");
	HX_MARK_MEMBER_NAME(_SwappingUP,"_SwappingUP");
	HX_MARK_MEMBER_NAME(_NewY,"_NewY");
	HX_MARK_MEMBER_NAME(_NewX,"_NewX");
	HX_MARK_MEMBER_NAME(_GemSound,"_GemSound");
	HX_MARK_MEMBER_NAME(_SoundType,"_SoundType");
	HX_MARK_MEMBER_NAME(_AlreadySpawned,"_AlreadySpawned");
	HX_MARK_MEMBER_NAME(_Target,"_Target");
	HX_MARK_MEMBER_NAME(_Swapping,"_Swapping");
	HX_MARK_MEMBER_NAME(_StartY,"_StartY");
	HX_MARK_MEMBER_NAME(_StartX,"_StartX");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Design_5_5_beatgem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_RestTap,"_RestTap");
	HX_VISIT_MEMBER_NAME(_TappingList,"_TappingList");
	HX_VISIT_MEMBER_NAME(_tapping,"_tapping");
	HX_VISIT_MEMBER_NAME(_GTempo,"_GTempo");
	HX_VISIT_MEMBER_NAME(_Tappable,"_Tappable");
	HX_VISIT_MEMBER_NAME(_GemSelector,"_GemSelector");
	HX_VISIT_MEMBER_NAME(_Taplist,"_Taplist");
	HX_VISIT_MEMBER_NAME(_Type17,"_Type17");
	HX_VISIT_MEMBER_NAME(_Type18,"_Type18");
	HX_VISIT_MEMBER_NAME(_Degrees,"_Degrees");
	HX_VISIT_MEMBER_NAME(_RegionCreated,"_RegionCreated");
	HX_VISIT_MEMBER_NAME(_Type13,"_Type13");
	HX_VISIT_MEMBER_NAME(_Type14,"_Type14");
	HX_VISIT_MEMBER_NAME(_Type15,"_Type15");
	HX_VISIT_MEMBER_NAME(_Type16,"_Type16");
	HX_VISIT_MEMBER_NAME(_ColorMatch3,"_ColorMatch3");
	HX_VISIT_MEMBER_NAME(_ColorMatch4,"_ColorMatch4");
	HX_VISIT_MEMBER_NAME(_ColorMatch5,"_ColorMatch5");
	HX_VISIT_MEMBER_NAME(_ColorMatch6,"_ColorMatch6");
	HX_VISIT_MEMBER_NAME(_GemType,"_GemType");
	HX_VISIT_MEMBER_NAME(_type12,"_type12");
	HX_VISIT_MEMBER_NAME(_ColorMatch2,"_ColorMatch2");
	HX_VISIT_MEMBER_NAME(_ColorMatch1,"_ColorMatch1");
	HX_VISIT_MEMBER_NAME(_Type9,"_Type9");
	HX_VISIT_MEMBER_NAME(_TypeNumber,"_TypeNumber");
	HX_VISIT_MEMBER_NAME(_type11,"_type11");
	HX_VISIT_MEMBER_NAME(_type10,"_type10");
	HX_VISIT_MEMBER_NAME(_Gem,"_Gem");
	HX_VISIT_MEMBER_NAME(_CanSwap,"_CanSwap");
	HX_VISIT_MEMBER_NAME(_Type8,"_Type8");
	HX_VISIT_MEMBER_NAME(_Type7,"_Type7");
	HX_VISIT_MEMBER_NAME(_Direction,"_Direction");
	HX_VISIT_MEMBER_NAME(_type3,"_type3");
	HX_VISIT_MEMBER_NAME(_BeaterCombo,"_BeaterCombo");
	HX_VISIT_MEMBER_NAME(_Metronome,"_Metronome");
	HX_VISIT_MEMBER_NAME(_type5,"_type5");
	HX_VISIT_MEMBER_NAME(_type6,"_type6");
	HX_VISIT_MEMBER_NAME(_type4,"_type4");
	HX_VISIT_MEMBER_NAME(_type1,"_type1");
	HX_VISIT_MEMBER_NAME(_type2,"_type2");
	HX_VISIT_MEMBER_NAME(_SpawnTypeActor,"_SpawnTypeActor");
	HX_VISIT_MEMBER_NAME(_SpawnTypeID,"_SpawnTypeID");
	HX_VISIT_MEMBER_NAME(_UID,"_UID");
	HX_VISIT_MEMBER_NAME(_SelfSelector,"_SelfSelector");
	HX_VISIT_MEMBER_NAME(_Xincrementer,"_Xincrementer");
	HX_VISIT_MEMBER_NAME(_YIncrementer,"_YIncrementer");
	HX_VISIT_MEMBER_NAME(_RegionList,"_RegionList");
	HX_VISIT_MEMBER_NAME(_ActorReveal,"_ActorReveal");
	HX_VISIT_MEMBER_NAME(_Colliding,"_Colliding");
	HX_VISIT_MEMBER_NAME(_Octave,"_Octave");
	HX_VISIT_MEMBER_NAME(_GemID,"_GemID");
	HX_VISIT_MEMBER_NAME(_GemTypeNumber,"_GemTypeNumber");
	HX_VISIT_MEMBER_NAME(_SwappingRight,"_SwappingRight");
	HX_VISIT_MEMBER_NAME(_SwappingLeft,"_SwappingLeft");
	HX_VISIT_MEMBER_NAME(_SwappingDown,"_SwappingDown");
	HX_VISIT_MEMBER_NAME(_SwappingUP,"_SwappingUP");
	HX_VISIT_MEMBER_NAME(_NewY,"_NewY");
	HX_VISIT_MEMBER_NAME(_NewX,"_NewX");
	HX_VISIT_MEMBER_NAME(_GemSound,"_GemSound");
	HX_VISIT_MEMBER_NAME(_SoundType,"_SoundType");
	HX_VISIT_MEMBER_NAME(_AlreadySpawned,"_AlreadySpawned");
	HX_VISIT_MEMBER_NAME(_Target,"_Target");
	HX_VISIT_MEMBER_NAME(_Swapping,"_Swapping");
	HX_VISIT_MEMBER_NAME(_StartY,"_StartY");
	HX_VISIT_MEMBER_NAME(_StartX,"_StartX");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Design_5_5_beatgem_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"_Gem") ) { return _Gem; }
		if (HX_FIELD_EQ(inName,"_UID") ) { return _UID; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_NewY") ) { return _NewY; }
		if (HX_FIELD_EQ(inName,"_NewX") ) { return _NewX; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_Type9") ) { return _Type9; }
		if (HX_FIELD_EQ(inName,"_Type8") ) { return _Type8; }
		if (HX_FIELD_EQ(inName,"_Type7") ) { return _Type7; }
		if (HX_FIELD_EQ(inName,"_type3") ) { return _type3; }
		if (HX_FIELD_EQ(inName,"_type5") ) { return _type5; }
		if (HX_FIELD_EQ(inName,"_type6") ) { return _type6; }
		if (HX_FIELD_EQ(inName,"_type4") ) { return _type4; }
		if (HX_FIELD_EQ(inName,"_type1") ) { return _type1; }
		if (HX_FIELD_EQ(inName,"_type2") ) { return _type2; }
		if (HX_FIELD_EQ(inName,"_GemID") ) { return _GemID; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_GTempo") ) { return _GTempo; }
		if (HX_FIELD_EQ(inName,"_Type17") ) { return _Type17; }
		if (HX_FIELD_EQ(inName,"_Type18") ) { return _Type18; }
		if (HX_FIELD_EQ(inName,"_Type13") ) { return _Type13; }
		if (HX_FIELD_EQ(inName,"_Type14") ) { return _Type14; }
		if (HX_FIELD_EQ(inName,"_Type15") ) { return _Type15; }
		if (HX_FIELD_EQ(inName,"_Type16") ) { return _Type16; }
		if (HX_FIELD_EQ(inName,"_type12") ) { return _type12; }
		if (HX_FIELD_EQ(inName,"_type11") ) { return _type11; }
		if (HX_FIELD_EQ(inName,"_type10") ) { return _type10; }
		if (HX_FIELD_EQ(inName,"_Octave") ) { return _Octave; }
		if (HX_FIELD_EQ(inName,"_Target") ) { return _Target; }
		if (HX_FIELD_EQ(inName,"_StartY") ) { return _StartY; }
		if (HX_FIELD_EQ(inName,"_StartX") ) { return _StartX; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_RestTap") ) { return _RestTap; }
		if (HX_FIELD_EQ(inName,"_tapping") ) { return _tapping; }
		if (HX_FIELD_EQ(inName,"_Taplist") ) { return _Taplist; }
		if (HX_FIELD_EQ(inName,"_Degrees") ) { return _Degrees; }
		if (HX_FIELD_EQ(inName,"_GemType") ) { return _GemType; }
		if (HX_FIELD_EQ(inName,"_CanSwap") ) { return _CanSwap; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_Tappable") ) { return _Tappable; }
		if (HX_FIELD_EQ(inName,"_GemSound") ) { return _GemSound; }
		if (HX_FIELD_EQ(inName,"_Swapping") ) { return _Swapping; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_Direction") ) { return _Direction; }
		if (HX_FIELD_EQ(inName,"_Metronome") ) { return _Metronome; }
		if (HX_FIELD_EQ(inName,"_Colliding") ) { return _Colliding; }
		if (HX_FIELD_EQ(inName,"_SoundType") ) { return _SoundType; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_TypeNumber") ) { return _TypeNumber; }
		if (HX_FIELD_EQ(inName,"_RegionList") ) { return _RegionList; }
		if (HX_FIELD_EQ(inName,"_SwappingUP") ) { return _SwappingUP; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_TappingList") ) { return _TappingList; }
		if (HX_FIELD_EQ(inName,"_GemSelector") ) { return _GemSelector; }
		if (HX_FIELD_EQ(inName,"_ColorMatch3") ) { return _ColorMatch3; }
		if (HX_FIELD_EQ(inName,"_ColorMatch4") ) { return _ColorMatch4; }
		if (HX_FIELD_EQ(inName,"_ColorMatch5") ) { return _ColorMatch5; }
		if (HX_FIELD_EQ(inName,"_ColorMatch6") ) { return _ColorMatch6; }
		if (HX_FIELD_EQ(inName,"_ColorMatch2") ) { return _ColorMatch2; }
		if (HX_FIELD_EQ(inName,"_ColorMatch1") ) { return _ColorMatch1; }
		if (HX_FIELD_EQ(inName,"_BeaterCombo") ) { return _BeaterCombo; }
		if (HX_FIELD_EQ(inName,"_SpawnTypeID") ) { return _SpawnTypeID; }
		if (HX_FIELD_EQ(inName,"_ActorReveal") ) { return _ActorReveal; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_SelfSelector") ) { return _SelfSelector; }
		if (HX_FIELD_EQ(inName,"_Xincrementer") ) { return _Xincrementer; }
		if (HX_FIELD_EQ(inName,"_YIncrementer") ) { return _YIncrementer; }
		if (HX_FIELD_EQ(inName,"_SwappingLeft") ) { return _SwappingLeft; }
		if (HX_FIELD_EQ(inName,"_SwappingDown") ) { return _SwappingDown; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"forwardMessage") ) { return forwardMessage_dyn(); }
		if (HX_FIELD_EQ(inName,"_RegionCreated") ) { return _RegionCreated; }
		if (HX_FIELD_EQ(inName,"_GemTypeNumber") ) { return _GemTypeNumber; }
		if (HX_FIELD_EQ(inName,"_SwappingRight") ) { return _SwappingRight; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_SpawnTypeActor") ) { return _SpawnTypeActor; }
		if (HX_FIELD_EQ(inName,"_AlreadySpawned") ) { return _AlreadySpawned; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_customEvent_Tappy") ) { return _customEvent_Tappy_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_customEvent_SwapUp") ) { return _customEvent_SwapUp_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_customEvent_SwapLeft") ) { return _customEvent_SwapLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"_customEvent_SwapDown") ) { return _customEvent_SwapDown_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_customEvent_CanSwapUp") ) { return _customEvent_CanSwapUp_dyn(); }
		if (HX_FIELD_EQ(inName,"_customEvent_SwapRight") ) { return _customEvent_SwapRight_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_customEvent_CanSwapLeft") ) { return _customEvent_CanSwapLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"_customEvent_CanSwapDown") ) { return _customEvent_CanSwapDown_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_customEvent_CanSwapRight") ) { return _customEvent_CanSwapRight_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_customEvent_UpdatePosition") ) { return _customEvent_UpdatePosition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Design_5_5_beatgem_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_Gem") ) { _Gem=inValue.Cast< ::com::stencyl::models::Actor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_UID") ) { _UID=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_NewY") ) { _NewY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_NewX") ) { _NewX=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_Type9") ) { _Type9=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Type8") ) { _Type8=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Type7") ) { _Type7=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_type3") ) { _type3=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_type5") ) { _type5=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_type6") ) { _type6=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_type4") ) { _type4=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_type1") ) { _type1=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_type2") ) { _type2=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_GemID") ) { _GemID=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_GTempo") ) { _GTempo=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Type17") ) { _Type17=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Type18") ) { _Type18=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Type13") ) { _Type13=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Type14") ) { _Type14=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Type15") ) { _Type15=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Type16") ) { _Type16=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_type12") ) { _type12=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_type11") ) { _type11=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_type10") ) { _type10=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Octave") ) { _Octave=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Target") ) { _Target=inValue.Cast< ::com::stencyl::models::Region >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_StartY") ) { _StartY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_StartX") ) { _StartX=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_RestTap") ) { _RestTap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tapping") ) { _tapping=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Taplist") ) { _Taplist=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Degrees") ) { _Degrees=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_GemType") ) { _GemType=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_CanSwap") ) { _CanSwap=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_Tappable") ) { _Tappable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_GemSound") ) { _GemSound=inValue.Cast< ::com::stencyl::models::Sound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Swapping") ) { _Swapping=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_Direction") ) { _Direction=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Metronome") ) { _Metronome=inValue.Cast< ::com::stencyl::models::Sound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Colliding") ) { _Colliding=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_SoundType") ) { _SoundType=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_TypeNumber") ) { _TypeNumber=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_RegionList") ) { _RegionList=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_SwappingUP") ) { _SwappingUP=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_TappingList") ) { _TappingList=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_GemSelector") ) { _GemSelector=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ColorMatch3") ) { _ColorMatch3=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ColorMatch4") ) { _ColorMatch4=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ColorMatch5") ) { _ColorMatch5=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ColorMatch6") ) { _ColorMatch6=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ColorMatch2") ) { _ColorMatch2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ColorMatch1") ) { _ColorMatch1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_BeaterCombo") ) { _BeaterCombo=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_SpawnTypeID") ) { _SpawnTypeID=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ActorReveal") ) { _ActorReveal=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_SelfSelector") ) { _SelfSelector=inValue.Cast< ::com::stencyl::models::Actor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Xincrementer") ) { _Xincrementer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_YIncrementer") ) { _YIncrementer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_SwappingLeft") ) { _SwappingLeft=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_SwappingDown") ) { _SwappingDown=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_RegionCreated") ) { _RegionCreated=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_GemTypeNumber") ) { _GemTypeNumber=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_SwappingRight") ) { _SwappingRight=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_SpawnTypeActor") ) { _SpawnTypeActor=inValue.Cast< ::com::stencyl::models::actor::ActorType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_AlreadySpawned") ) { _AlreadySpawned=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Design_5_5_beatgem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_RestTap"));
	outFields->push(HX_CSTRING("_TappingList"));
	outFields->push(HX_CSTRING("_tapping"));
	outFields->push(HX_CSTRING("_GTempo"));
	outFields->push(HX_CSTRING("_Tappable"));
	outFields->push(HX_CSTRING("_GemSelector"));
	outFields->push(HX_CSTRING("_Taplist"));
	outFields->push(HX_CSTRING("_Type17"));
	outFields->push(HX_CSTRING("_Type18"));
	outFields->push(HX_CSTRING("_Degrees"));
	outFields->push(HX_CSTRING("_RegionCreated"));
	outFields->push(HX_CSTRING("_Type13"));
	outFields->push(HX_CSTRING("_Type14"));
	outFields->push(HX_CSTRING("_Type15"));
	outFields->push(HX_CSTRING("_Type16"));
	outFields->push(HX_CSTRING("_ColorMatch3"));
	outFields->push(HX_CSTRING("_ColorMatch4"));
	outFields->push(HX_CSTRING("_ColorMatch5"));
	outFields->push(HX_CSTRING("_ColorMatch6"));
	outFields->push(HX_CSTRING("_GemType"));
	outFields->push(HX_CSTRING("_type12"));
	outFields->push(HX_CSTRING("_ColorMatch2"));
	outFields->push(HX_CSTRING("_ColorMatch1"));
	outFields->push(HX_CSTRING("_Type9"));
	outFields->push(HX_CSTRING("_TypeNumber"));
	outFields->push(HX_CSTRING("_type11"));
	outFields->push(HX_CSTRING("_type10"));
	outFields->push(HX_CSTRING("_Gem"));
	outFields->push(HX_CSTRING("_CanSwap"));
	outFields->push(HX_CSTRING("_Type8"));
	outFields->push(HX_CSTRING("_Type7"));
	outFields->push(HX_CSTRING("_Direction"));
	outFields->push(HX_CSTRING("_type3"));
	outFields->push(HX_CSTRING("_BeaterCombo"));
	outFields->push(HX_CSTRING("_Metronome"));
	outFields->push(HX_CSTRING("_type5"));
	outFields->push(HX_CSTRING("_type6"));
	outFields->push(HX_CSTRING("_type4"));
	outFields->push(HX_CSTRING("_type1"));
	outFields->push(HX_CSTRING("_type2"));
	outFields->push(HX_CSTRING("_SpawnTypeActor"));
	outFields->push(HX_CSTRING("_SpawnTypeID"));
	outFields->push(HX_CSTRING("_UID"));
	outFields->push(HX_CSTRING("_SelfSelector"));
	outFields->push(HX_CSTRING("_Xincrementer"));
	outFields->push(HX_CSTRING("_YIncrementer"));
	outFields->push(HX_CSTRING("_RegionList"));
	outFields->push(HX_CSTRING("_ActorReveal"));
	outFields->push(HX_CSTRING("_Colliding"));
	outFields->push(HX_CSTRING("_Octave"));
	outFields->push(HX_CSTRING("_GemID"));
	outFields->push(HX_CSTRING("_GemTypeNumber"));
	outFields->push(HX_CSTRING("_SwappingRight"));
	outFields->push(HX_CSTRING("_SwappingLeft"));
	outFields->push(HX_CSTRING("_SwappingDown"));
	outFields->push(HX_CSTRING("_SwappingUP"));
	outFields->push(HX_CSTRING("_NewY"));
	outFields->push(HX_CSTRING("_NewX"));
	outFields->push(HX_CSTRING("_GemSound"));
	outFields->push(HX_CSTRING("_SoundType"));
	outFields->push(HX_CSTRING("_AlreadySpawned"));
	outFields->push(HX_CSTRING("_Target"));
	outFields->push(HX_CSTRING("_Swapping"));
	outFields->push(HX_CSTRING("_StartY"));
	outFields->push(HX_CSTRING("_StartX"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("forwardMessage"),
	HX_CSTRING("init"),
	HX_CSTRING("_customEvent_CanSwapRight"),
	HX_CSTRING("_customEvent_CanSwapLeft"),
	HX_CSTRING("_customEvent_CanSwapDown"),
	HX_CSTRING("_customEvent_CanSwapUp"),
	HX_CSTRING("_customEvent_UpdatePosition"),
	HX_CSTRING("_customEvent_SwapRight"),
	HX_CSTRING("_customEvent_SwapLeft"),
	HX_CSTRING("_customEvent_SwapDown"),
	HX_CSTRING("_customEvent_SwapUp"),
	HX_CSTRING("_customEvent_Tappy"),
	HX_CSTRING("_RestTap"),
	HX_CSTRING("_TappingList"),
	HX_CSTRING("_tapping"),
	HX_CSTRING("_GTempo"),
	HX_CSTRING("_Tappable"),
	HX_CSTRING("_GemSelector"),
	HX_CSTRING("_Taplist"),
	HX_CSTRING("_Type17"),
	HX_CSTRING("_Type18"),
	HX_CSTRING("_Degrees"),
	HX_CSTRING("_RegionCreated"),
	HX_CSTRING("_Type13"),
	HX_CSTRING("_Type14"),
	HX_CSTRING("_Type15"),
	HX_CSTRING("_Type16"),
	HX_CSTRING("_ColorMatch3"),
	HX_CSTRING("_ColorMatch4"),
	HX_CSTRING("_ColorMatch5"),
	HX_CSTRING("_ColorMatch6"),
	HX_CSTRING("_GemType"),
	HX_CSTRING("_type12"),
	HX_CSTRING("_ColorMatch2"),
	HX_CSTRING("_ColorMatch1"),
	HX_CSTRING("_Type9"),
	HX_CSTRING("_TypeNumber"),
	HX_CSTRING("_type11"),
	HX_CSTRING("_type10"),
	HX_CSTRING("_Gem"),
	HX_CSTRING("_CanSwap"),
	HX_CSTRING("_Type8"),
	HX_CSTRING("_Type7"),
	HX_CSTRING("_Direction"),
	HX_CSTRING("_type3"),
	HX_CSTRING("_BeaterCombo"),
	HX_CSTRING("_Metronome"),
	HX_CSTRING("_type5"),
	HX_CSTRING("_type6"),
	HX_CSTRING("_type4"),
	HX_CSTRING("_type1"),
	HX_CSTRING("_type2"),
	HX_CSTRING("_SpawnTypeActor"),
	HX_CSTRING("_SpawnTypeID"),
	HX_CSTRING("_UID"),
	HX_CSTRING("_SelfSelector"),
	HX_CSTRING("_Xincrementer"),
	HX_CSTRING("_YIncrementer"),
	HX_CSTRING("_RegionList"),
	HX_CSTRING("_ActorReveal"),
	HX_CSTRING("_Colliding"),
	HX_CSTRING("_Octave"),
	HX_CSTRING("_GemID"),
	HX_CSTRING("_GemTypeNumber"),
	HX_CSTRING("_SwappingRight"),
	HX_CSTRING("_SwappingLeft"),
	HX_CSTRING("_SwappingDown"),
	HX_CSTRING("_SwappingUP"),
	HX_CSTRING("_NewY"),
	HX_CSTRING("_NewX"),
	HX_CSTRING("_GemSound"),
	HX_CSTRING("_SoundType"),
	HX_CSTRING("_AlreadySpawned"),
	HX_CSTRING("_Target"),
	HX_CSTRING("_Swapping"),
	HX_CSTRING("_StartY"),
	HX_CSTRING("_StartX"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Design_5_5_beatgem_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Design_5_5_beatgem_obj::__mClass,"__mClass");
};

Class Design_5_5_beatgem_obj::__mClass;

void Design_5_5_beatgem_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scripts.Design_5_5_beatgem"), hx::TCanCast< Design_5_5_beatgem_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Design_5_5_beatgem_obj::__boot()
{
}

} // end namespace scripts
