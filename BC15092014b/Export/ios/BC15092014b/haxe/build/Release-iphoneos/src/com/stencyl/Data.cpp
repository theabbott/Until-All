#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_com_stencyl_AssetLoader
#include <com/stencyl/AssetLoader.h>
#endif
#ifndef INCLUDED_com_stencyl_Data
#include <com/stencyl/Data.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Behavior
#include <com/stencyl/behavior/Behavior.h>
#endif
#ifndef INCLUDED_com_stencyl_io_AbstractReader
#include <com/stencyl/io/AbstractReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_ActorTypeReader
#include <com/stencyl/io/ActorTypeReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_BackgroundReader
#include <com/stencyl/io/BackgroundReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_BehaviorReader
#include <com/stencyl/io/BehaviorReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_FontReader
#include <com/stencyl/io/FontReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_SoundReader
#include <com/stencyl/io/SoundReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_SpriteReader
#include <com/stencyl/io/SpriteReader.h>
#endif
#ifndef INCLUDED_com_stencyl_io_TilesetReader
#include <com/stencyl/io/TilesetReader.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Atlas
#include <com/stencyl/models/Atlas.h>
#endif
#ifndef INCLUDED_com_stencyl_models_GameModel
#include <com/stencyl/models/GameModel.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_ActorType
#include <com/stencyl/models/actor/ActorType.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
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
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
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
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace com{
namespace stencyl{

Void Data_obj::__construct()
{
HX_STACK_PUSH("Data::new","com/stencyl/Data.hx",96);
{
	HX_STACK_LINE(96)
	if (((::openfl::Assets_obj::getText(HX_CSTRING("assets/data/game.xml")) == HX_CSTRING("")))){
		HX_STACK_LINE(98)
		hx::Throw (HX_CSTRING("Data.hx - Could not load game. Check your logs for a possible cause (likely a bad MP3 file)."));
	}
}
;
	return null();
}

Data_obj::~Data_obj() { }

Dynamic Data_obj::__CreateEmpty() { return  new Data_obj; }
hx::ObjectPtr< Data_obj > Data_obj::__new()
{  hx::ObjectPtr< Data_obj > result = new Data_obj();
	result->__construct();
	return result;}

Dynamic Data_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Data_obj > result = new Data_obj();
	result->__construct();
	return result;}

Void Data_obj::unloadAtlas( int atlasID){
{
		HX_STACK_PUSH("Data::unloadAtlas","com/stencyl/Data.hx",321);
		HX_STACK_THIS(this);
		HX_STACK_ARG(atlasID,"atlasID");
		HX_STACK_LINE(323)
		::haxe::Log_obj::trace((HX_CSTRING("Unload Atlas: ") + atlasID),hx::SourceInfo(HX_CSTRING("Data.hx"),323,HX_CSTRING("com.stencyl.Data"),HX_CSTRING("unloadAtlas")));
		HX_STACK_LINE(325)
		::com::stencyl::models::Atlas atlas = ::com::stencyl::models::GameModel_obj::get()->atlases->get(atlasID);		HX_STACK_VAR(atlas,"atlas");
		HX_STACK_LINE(327)
		if (((bool((atlas != null())) && bool(atlas->active)))){
			HX_STACK_LINE(329)
			atlas->active = false;
			HX_STACK_LINE(331)
			{
				HX_STACK_LINE(331)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< int > _g1 = atlas->members;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(331)
				while(((_g < _g1->length))){
					HX_STACK_LINE(331)
					int resourceID = _g1->__get(_g);		HX_STACK_VAR(resourceID,"resourceID");
					HX_STACK_LINE(331)
					++(_g);
					HX_STACK_LINE(333)
					::com::stencyl::models::Resource resource = this->resources->get(resourceID);		HX_STACK_VAR(resource,"resource");
					HX_STACK_LINE(335)
					if (((resource != null()))){
						HX_STACK_LINE(336)
						resource->unloadGraphics();
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Data_obj,unloadAtlas,(void))

Void Data_obj::loadAtlas( int atlasID){
{
		HX_STACK_PUSH("Data::loadAtlas","com/stencyl/Data.hx",299);
		HX_STACK_THIS(this);
		HX_STACK_ARG(atlasID,"atlasID");
		HX_STACK_LINE(300)
		::haxe::Log_obj::trace((HX_CSTRING("Load Atlas: ") + atlasID),hx::SourceInfo(HX_CSTRING("Data.hx"),300,HX_CSTRING("com.stencyl.Data"),HX_CSTRING("loadAtlas")));
		HX_STACK_LINE(302)
		::com::stencyl::models::Atlas atlas = ::com::stencyl::models::GameModel_obj::get()->atlases->get(atlasID);		HX_STACK_VAR(atlas,"atlas");
		HX_STACK_LINE(304)
		if (((bool((atlas != null())) && bool(!(atlas->active))))){
			HX_STACK_LINE(306)
			atlas->active = true;
			HX_STACK_LINE(308)
			{
				HX_STACK_LINE(308)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< int > _g1 = atlas->members;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(308)
				while(((_g < _g1->length))){
					HX_STACK_LINE(308)
					int resourceID = _g1->__get(_g);		HX_STACK_VAR(resourceID,"resourceID");
					HX_STACK_LINE(308)
					++(_g);
					HX_STACK_LINE(310)
					::com::stencyl::models::Resource resource = this->resources->get(resourceID);		HX_STACK_VAR(resource,"resource");
					HX_STACK_LINE(312)
					if (((resource != null()))){
						HX_STACK_LINE(313)
						resource->loadGraphics();
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Data_obj,loadAtlas,(void))

Dynamic Data_obj::getGraphicAsset( ::String url,::String diskURL){
	HX_STACK_PUSH("Data::getGraphicAsset","com/stencyl/Data.hx",289);
	HX_STACK_THIS(this);
	HX_STACK_ARG(url,"url");
	HX_STACK_ARG(diskURL,"diskURL");
	HX_STACK_LINE(290)
	if (((this->resourceAssets->get(url) == null()))){
		HX_STACK_LINE(291)
		this->resourceAssets->set(url,::openfl::Assets_obj::getBitmapData(diskURL,false));
	}
	HX_STACK_LINE(295)
	return this->resourceAssets->get(url);
}


HX_DEFINE_DYNAMIC_FUNC2(Data_obj,getGraphicAsset,return )

Array< ::Dynamic > Data_obj::getAllActorTypes( ){
	HX_STACK_PUSH("Data::getAllActorTypes","com/stencyl/Data.hx",274);
	HX_STACK_THIS(this);
	HX_STACK_LINE(275)
	Array< ::Dynamic > a = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(a,"a");
	struct _Function_1_1{
		inline static Dynamic Block( ::com::stencyl::Data_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/Data.hx",277);
			{
				HX_STACK_LINE(277)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->resources);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Data.hx",277);
					{
						HX_STACK_LINE(277)
						return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(277)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(277)
	for(::cpp::FastIterator_obj< ::com::stencyl::models::Resource > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Resource >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		::com::stencyl::models::Resource r = __it->next();
		if ((::Std_obj::is(r,hx::ClassOf< ::com::stencyl::models::actor::ActorType >()))){
			HX_STACK_LINE(280)
			a->push(hx::TCast< com::stencyl::models::actor::ActorType >::cast(r));
		}
;
	}
	HX_STACK_LINE(285)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC0(Data_obj,getAllActorTypes,return )

Dynamic Data_obj::getResourcesOfType( Dynamic type){
	HX_STACK_PUSH("Data::getResourcesOfType","com/stencyl/Data.hx",259);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(260)
	Dynamic a = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(a,"a");
	struct _Function_1_1{
		inline static Dynamic Block( ::com::stencyl::Data_obj *__this){
			HX_STACK_PUSH("*::closure","com/stencyl/Data.hx",262);
			{
				HX_STACK_LINE(262)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->resources);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","com/stencyl/Data.hx",262);
					{
						HX_STACK_LINE(262)
						return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(262)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(262)
	for(::cpp::FastIterator_obj< ::com::stencyl::models::Resource > *__it = ::cpp::CreateFastIterator< ::com::stencyl::models::Resource >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		::com::stencyl::models::Resource r = __it->next();
		if ((::Std_obj::is(r,type))){
			HX_STACK_LINE(265)
			a->__Field(HX_CSTRING("push"),true)(r);
		}
;
	}
	HX_STACK_LINE(270)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC1(Data_obj,getResourcesOfType,return )

::com::stencyl::models::Resource Data_obj::readResource( int ID,int atlasID,::String type,::String name,::haxe::xml::Fast xml){
	HX_STACK_PUSH("Data::readResource","com/stencyl/Data.hx",246);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ID,"ID");
	HX_STACK_ARG(atlasID,"atlasID");
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(xml,"xml");
	HX_STACK_LINE(247)
	{
		HX_STACK_LINE(247)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->readers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(247)
		while(((_g < _g1->length))){
			HX_STACK_LINE(247)
			::com::stencyl::io::AbstractReader reader = _g1->__get(_g).StaticCast< ::com::stencyl::io::AbstractReader >();		HX_STACK_VAR(reader,"reader");
			HX_STACK_LINE(247)
			++(_g);
			HX_STACK_LINE(249)
			if ((reader->accepts(type))){
				HX_STACK_LINE(250)
				return reader->read(ID,atlasID,type,name,xml);
			}
		}
	}
	HX_STACK_LINE(255)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Data_obj,readResource,return )

Void Data_obj::readResourceXML( ::haxe::xml::Fast list){
{
		HX_STACK_PUSH("Data::readResourceXML","com/stencyl/Data.hx",207);
		HX_STACK_THIS(this);
		HX_STACK_ARG(list,"list");
		HX_STACK_LINE(208)
		this->resources = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(211)
		int numParts = (int)0;		HX_STACK_VAR(numParts,"numParts");
		HX_STACK_LINE(213)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(list->get_elements());  __it->hasNext(); ){
			::haxe::xml::Fast e = __it->next();
			(numParts)++;
		}
		HX_STACK_LINE(218)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(219)
		Float increment = (Float(10.0) / Float(numParts));		HX_STACK_VAR(increment,"increment");
		HX_STACK_LINE(222)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(list->get_elements());  __it->hasNext(); ){
			::haxe::xml::Fast e = __it->next();
			{
				HX_STACK_LINE(227)
				this->updatePreloader(((int)65 + ::Std_obj::_int((increment * i))));
				HX_STACK_LINE(230)
				int atlasID = (int)0;		HX_STACK_VAR(atlasID,"atlasID");
				HX_STACK_LINE(232)
				if ((e->has->resolve(HX_CSTRING("atlasID")))){
					HX_STACK_LINE(233)
					atlasID = ::Std_obj::parseInt(e->att->resolve(HX_CSTRING("atlasID")));
				}
				HX_STACK_LINE(237)
				this->resources->set(::Std_obj::parseInt(e->att->resolve(HX_CSTRING("id"))),this->readResource(::Std_obj::parseInt(e->att->resolve(HX_CSTRING("id"))),atlasID,e->get_name(),e->att->resolve(HX_CSTRING("name")),e));
				HX_STACK_LINE(240)
				(i)++;
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Data_obj,readResourceXML,(void))

Void Data_obj::loadResources( ){
{
		HX_STACK_PUSH("Data::loadResources","com/stencyl/Data.hx",199);
		HX_STACK_THIS(this);
		HX_STACK_LINE(200)
		this->resourceAssets = ::haxe::ds::StringMap_obj::__new();
		HX_STACK_LINE(201)
		this->loader->loadResources(this->resourceAssets);
		HX_STACK_LINE(202)
		this->updatePreloader((int)65);
		HX_STACK_LINE(203)
		this->readResourceXML(this->resourceListXML);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Data_obj,loadResources,(void))

Void Data_obj::loadBehaviors( ){
{
		HX_STACK_PUSH("Data::loadBehaviors","com/stencyl/Data.hx",167);
		HX_STACK_THIS(this);
		HX_STACK_LINE(168)
		this->behaviors = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(171)
		int numParts = (int)0;		HX_STACK_VAR(numParts,"numParts");
		HX_STACK_LINE(173)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(this->behaviorListXML->get_elements());  __it->hasNext(); ){
			::haxe::xml::Fast e = __it->next();
			(numParts)++;
		}
		HX_STACK_LINE(178)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(179)
		Float increment = (Float(10.0) / Float(numParts));		HX_STACK_VAR(increment,"increment");
		HX_STACK_LINE(182)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(this->behaviorListXML->get_elements());  __it->hasNext(); ){
			::haxe::xml::Fast e = __it->next();
			{
				HX_STACK_LINE(187)
				this->updatePreloader(((int)5 + ::Std_obj::_int((increment * i))));
				HX_STACK_LINE(190)
				this->behaviors->set(::Std_obj::parseInt(e->att->resolve(HX_CSTRING("id"))),::com::stencyl::io::BehaviorReader_obj::readBehavior(e));
				HX_STACK_LINE(193)
				(i)++;
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Data_obj,loadBehaviors,(void))

Void Data_obj::loadReaders( ){
{
		HX_STACK_PUSH("Data::loadReaders","com/stencyl/Data.hx",156);
		HX_STACK_THIS(this);
		HX_STACK_LINE(157)
		this->readers = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(158)
		this->readers->push(::com::stencyl::io::BackgroundReader_obj::__new());
		HX_STACK_LINE(159)
		this->readers->push(::com::stencyl::io::SoundReader_obj::__new());
		HX_STACK_LINE(160)
		this->readers->push(::com::stencyl::io::TilesetReader_obj::__new());
		HX_STACK_LINE(161)
		this->readers->push(::com::stencyl::io::ActorTypeReader_obj::__new());
		HX_STACK_LINE(162)
		this->readers->push(::com::stencyl::io::SpriteReader_obj::__new());
		HX_STACK_LINE(163)
		this->readers->push(::com::stencyl::io::FontReader_obj::__new());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Data_obj,loadReaders,(void))

Void Data_obj::loadAll( ){
{
		HX_STACK_PUSH("Data::loadAll","com/stencyl/Data.hx",116);
		HX_STACK_THIS(this);
		HX_STACK_LINE(118)
		if (((this->preloader != null()))){
			HX_STACK_LINE(119)
			::flash::Lib_obj::get_current()->addChild(this->preloader);
		}
		HX_STACK_LINE(122)
		this->updatePreloader((int)0);
		HX_STACK_LINE(125)
		this->gameXML = ::haxe::xml::Fast_obj::__new(::Xml_obj::parse(::openfl::Assets_obj::getText(HX_CSTRING("assets/data/game.xml")))->firstElement());
		HX_STACK_LINE(126)
		this->resourceListXML = ::haxe::xml::Fast_obj::__new(::Xml_obj::parse(::openfl::Assets_obj::getText(HX_CSTRING("assets/data/resources.xml")))->firstElement());
		HX_STACK_LINE(127)
		this->sceneListXML = ::haxe::xml::Fast_obj::__new(::Xml_obj::parse(::openfl::Assets_obj::getText(HX_CSTRING("assets/data/scenes.xml")))->firstElement());
		HX_STACK_LINE(128)
		this->behaviorListXML = ::haxe::xml::Fast_obj::__new(::Xml_obj::parse(::openfl::Assets_obj::getText(HX_CSTRING("assets/data/behaviors.xml")))->firstElement());
		HX_STACK_LINE(130)
		this->updatePreloader((int)5);
		HX_STACK_LINE(132)
		this->loadReaders();
		HX_STACK_LINE(133)
		this->loadBehaviors();
		HX_STACK_LINE(135)
		this->updatePreloader((int)15);
		HX_STACK_LINE(137)
		this->loadResources();
		HX_STACK_LINE(139)
		this->updatePreloader((int)90);
		HX_STACK_LINE(141)
		this->scenesXML = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(143)
		this->loader->loadScenes(this->scenesXML);
		HX_STACK_LINE(145)
		this->updatePreloader((int)100);
		HX_STACK_LINE(148)
		::flash::Lib_obj::get_current()->removeChild(::com::stencyl::Data_obj::instance->preloader);
		HX_STACK_LINE(151)
		this->resourceListXML = null();
		HX_STACK_LINE(152)
		this->behaviorListXML = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Data_obj,loadAll,(void))

Void Data_obj::updatePreloader( int pct){
{
		HX_STACK_PUSH("Data::updatePreloader","com/stencyl/Data.hx",104);
		HX_STACK_THIS(this);
		HX_STACK_ARG(pct,"pct");
		HX_STACK_LINE(104)
		if (((this->preloader != null()))){
			HX_STACK_LINE(109)
			::Reflect_obj::callMethod(this->preloader,::Reflect_obj::field(this->preloader,HX_CSTRING("onUpdate")),Dynamic( Array_obj<Dynamic>::__new().Add(pct).Add((int)100)));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Data_obj,updatePreloader,(void))

::com::stencyl::Data Data_obj::instance;

::com::stencyl::AssetLoader Data_obj::theLoader;

::com::stencyl::Data Data_obj::get( ){
	HX_STACK_PUSH("Data::get","com/stencyl/Data.hx",37);
	HX_STACK_LINE(38)
	if (((::com::stencyl::Data_obj::instance == null()))){
		HX_STACK_LINE(40)
		::com::stencyl::Data_obj::instance = ::com::stencyl::Data_obj::__new();
		HX_STACK_LINE(41)
		::com::stencyl::Data_obj::instance->loader = ::com::stencyl::Data_obj::theLoader = ::Type_obj::createInstance(::Type_obj::resolveClass(HX_CSTRING("scripts.MyAssets")),Dynamic( Array_obj<Dynamic>::__new()));
		HX_STACK_LINE(44)
		::com::stencyl::Data_obj::instance->preloader = ::Type_obj::createInstance(::Type_obj::resolveClass(HX_CSTRING("scripts.StencylPreloader")),Dynamic( Array_obj<Dynamic>::__new()));
		HX_STACK_LINE(47)
		::com::stencyl::Data_obj::instance->loadAll();
	}
	HX_STACK_LINE(50)
	return ::com::stencyl::Data_obj::instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Data_obj,get,return )


Data_obj::Data_obj()
{
}

void Data_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Data);
	HX_MARK_MEMBER_NAME(behaviors,"behaviors");
	HX_MARK_MEMBER_NAME(resourceAssets,"resourceAssets");
	HX_MARK_MEMBER_NAME(resources,"resources");
	HX_MARK_MEMBER_NAME(scenesXML,"scenesXML");
	HX_MARK_MEMBER_NAME(behaviorListXML,"behaviorListXML");
	HX_MARK_MEMBER_NAME(sceneListXML,"sceneListXML");
	HX_MARK_MEMBER_NAME(resourceListXML,"resourceListXML");
	HX_MARK_MEMBER_NAME(gameXML,"gameXML");
	HX_MARK_MEMBER_NAME(readers,"readers");
	HX_MARK_MEMBER_NAME(preloader,"preloader");
	HX_MARK_MEMBER_NAME(loader,"loader");
	HX_MARK_END_CLASS();
}

void Data_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(behaviors,"behaviors");
	HX_VISIT_MEMBER_NAME(resourceAssets,"resourceAssets");
	HX_VISIT_MEMBER_NAME(resources,"resources");
	HX_VISIT_MEMBER_NAME(scenesXML,"scenesXML");
	HX_VISIT_MEMBER_NAME(behaviorListXML,"behaviorListXML");
	HX_VISIT_MEMBER_NAME(sceneListXML,"sceneListXML");
	HX_VISIT_MEMBER_NAME(resourceListXML,"resourceListXML");
	HX_VISIT_MEMBER_NAME(gameXML,"gameXML");
	HX_VISIT_MEMBER_NAME(readers,"readers");
	HX_VISIT_MEMBER_NAME(preloader,"preloader");
	HX_VISIT_MEMBER_NAME(loader,"loader");
}

Dynamic Data_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loader") ) { return loader; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"loadAll") ) { return loadAll_dyn(); }
		if (HX_FIELD_EQ(inName,"gameXML") ) { return gameXML; }
		if (HX_FIELD_EQ(inName,"readers") ) { return readers; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return instance; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"theLoader") ) { return theLoader; }
		if (HX_FIELD_EQ(inName,"loadAtlas") ) { return loadAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"behaviors") ) { return behaviors; }
		if (HX_FIELD_EQ(inName,"resources") ) { return resources; }
		if (HX_FIELD_EQ(inName,"scenesXML") ) { return scenesXML; }
		if (HX_FIELD_EQ(inName,"preloader") ) { return preloader; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"unloadAtlas") ) { return unloadAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"loadReaders") ) { return loadReaders_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readResource") ) { return readResource_dyn(); }
		if (HX_FIELD_EQ(inName,"sceneListXML") ) { return sceneListXML; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadResources") ) { return loadResources_dyn(); }
		if (HX_FIELD_EQ(inName,"loadBehaviors") ) { return loadBehaviors_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resourceAssets") ) { return resourceAssets; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getGraphicAsset") ) { return getGraphicAsset_dyn(); }
		if (HX_FIELD_EQ(inName,"readResourceXML") ) { return readResourceXML_dyn(); }
		if (HX_FIELD_EQ(inName,"updatePreloader") ) { return updatePreloader_dyn(); }
		if (HX_FIELD_EQ(inName,"behaviorListXML") ) { return behaviorListXML; }
		if (HX_FIELD_EQ(inName,"resourceListXML") ) { return resourceListXML; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getAllActorTypes") ) { return getAllActorTypes_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getResourcesOfType") ) { return getResourcesOfType_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Data_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"loader") ) { loader=inValue.Cast< ::com::stencyl::AssetLoader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gameXML") ) { gameXML=inValue.Cast< ::haxe::xml::Fast >(); return inValue; }
		if (HX_FIELD_EQ(inName,"readers") ) { readers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::com::stencyl::Data >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"theLoader") ) { theLoader=inValue.Cast< ::com::stencyl::AssetLoader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"behaviors") ) { behaviors=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resources") ) { resources=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scenesXML") ) { scenesXML=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"preloader") ) { preloader=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sceneListXML") ) { sceneListXML=inValue.Cast< ::haxe::xml::Fast >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resourceAssets") ) { resourceAssets=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"behaviorListXML") ) { behaviorListXML=inValue.Cast< ::haxe::xml::Fast >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resourceListXML") ) { resourceListXML=inValue.Cast< ::haxe::xml::Fast >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Data_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("behaviors"));
	outFields->push(HX_CSTRING("resourceAssets"));
	outFields->push(HX_CSTRING("resources"));
	outFields->push(HX_CSTRING("scenesXML"));
	outFields->push(HX_CSTRING("behaviorListXML"));
	outFields->push(HX_CSTRING("sceneListXML"));
	outFields->push(HX_CSTRING("resourceListXML"));
	outFields->push(HX_CSTRING("gameXML"));
	outFields->push(HX_CSTRING("readers"));
	outFields->push(HX_CSTRING("preloader"));
	outFields->push(HX_CSTRING("loader"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("instance"),
	HX_CSTRING("theLoader"),
	HX_CSTRING("get"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("unloadAtlas"),
	HX_CSTRING("loadAtlas"),
	HX_CSTRING("getGraphicAsset"),
	HX_CSTRING("getAllActorTypes"),
	HX_CSTRING("getResourcesOfType"),
	HX_CSTRING("readResource"),
	HX_CSTRING("readResourceXML"),
	HX_CSTRING("loadResources"),
	HX_CSTRING("loadBehaviors"),
	HX_CSTRING("loadReaders"),
	HX_CSTRING("loadAll"),
	HX_CSTRING("updatePreloader"),
	HX_CSTRING("behaviors"),
	HX_CSTRING("resourceAssets"),
	HX_CSTRING("resources"),
	HX_CSTRING("scenesXML"),
	HX_CSTRING("behaviorListXML"),
	HX_CSTRING("sceneListXML"),
	HX_CSTRING("resourceListXML"),
	HX_CSTRING("gameXML"),
	HX_CSTRING("readers"),
	HX_CSTRING("preloader"),
	HX_CSTRING("loader"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Data_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Data_obj::instance,"instance");
	HX_MARK_MEMBER_NAME(Data_obj::theLoader,"theLoader");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Data_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Data_obj::instance,"instance");
	HX_VISIT_MEMBER_NAME(Data_obj::theLoader,"theLoader");
};

Class Data_obj::__mClass;

void Data_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.Data"), hx::TCanCast< Data_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Data_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
