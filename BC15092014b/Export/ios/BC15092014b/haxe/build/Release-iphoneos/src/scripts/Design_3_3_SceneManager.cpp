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
#ifndef INCLUDED_com_stencyl_behavior_Behavior
#include <com/stencyl/behavior/Behavior.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_SceneScript
#include <com/stencyl/behavior/SceneScript.h>
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
#ifndef INCLUDED_com_stencyl_graphics_fonts_BitmapFont
#include <com/stencyl/graphics/fonts/BitmapFont.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_transitions_Transition
#include <com/stencyl/graphics/transitions/Transition.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Font
#include <com/stencyl/models/Font.h>
#endif
#ifndef INCLUDED_com_stencyl_models_GameModel
#include <com/stencyl/models/GameModel.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Region
#include <com/stencyl/models/Region.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Scene
#include <com/stencyl/models/Scene.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Sound
#include <com/stencyl/models/Sound.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_ActorType
#include <com/stencyl/models/actor/ActorType.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_Utils
#include <com/stencyl/utils/Utils.h>
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
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
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
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
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
#ifndef INCLUDED_scripts_Design_3_3_SceneManager
#include <scripts/Design_3_3_SceneManager.h>
#endif
namespace scripts{

Void Design_3_3_SceneManager_obj::__construct(int dummy,::com::stencyl::Engine engine)
{
HX_STACK_PUSH("Design_3_3_SceneManager::new","scripts/Design_3_3_SceneManager.hx",1922);
{
	HX_STACK_LINE(1923)
	super::__construct(engine);
	HX_STACK_LINE(1924)
	this->nameMap->set(HX_CSTRING("Xincrementer"),HX_CSTRING("_Xincrementer"));
	HX_STACK_LINE(1925)
	this->_Xincrementer = 0.0;
	HX_STACK_LINE(1926)
	this->nameMap->set(HX_CSTRING("YIncrementer"),HX_CSTRING("_YIncrementer"));
	HX_STACK_LINE(1927)
	this->_YIncrementer = 0.0;
	HX_STACK_LINE(1928)
	this->nameMap->set(HX_CSTRING("Grid Spacing"),HX_CSTRING("_GridSpacing"));
	HX_STACK_LINE(1929)
	this->_GridSpacing = 0.0;
	HX_STACK_LINE(1930)
	this->nameMap->set(HX_CSTRING("UID"),HX_CSTRING("_UID"));
	HX_STACK_LINE(1931)
	this->_UID = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(1932)
	this->nameMap->set(HX_CSTRING("Gem_Type"),HX_CSTRING("_GemType"));
	HX_STACK_LINE(1933)
	this->_GemType = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(1934)
	this->nameMap->set(HX_CSTRING("TileList"),HX_CSTRING("_TileList"));
	HX_STACK_LINE(1935)
	this->_TileList = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(1936)
	this->nameMap->set(HX_CSTRING("AlreadySpawned?"),HX_CSTRING("_AlreadySpawned"));
	HX_STACK_LINE(1937)
	this->_AlreadySpawned = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(1938)
	this->nameMap->set(HX_CSTRING("Target"),HX_CSTRING("_Target"));
	HX_STACK_LINE(1939)
	this->nameMap->set(HX_CSTRING("Swapping?"),HX_CSTRING("_Swapping"));
	HX_STACK_LINE(1940)
	this->_Swapping = false;
	HX_STACK_LINE(1941)
	this->nameMap->set(HX_CSTRING("Can Spawn?"),HX_CSTRING("_CanSpawn"));
	HX_STACK_LINE(1942)
	this->_CanSpawn = false;
	HX_STACK_LINE(1943)
	this->nameMap->set(HX_CSTRING("Is Destroying?"),HX_CSTRING("_IsDestroying"));
	HX_STACK_LINE(1944)
	this->_IsDestroying = false;
	HX_STACK_LINE(1945)
	this->nameMap->set(HX_CSTRING("Check Matches"),HX_CSTRING("_CheckMatches"));
	HX_STACK_LINE(1946)
	this->_CheckMatches = false;
	HX_STACK_LINE(1947)
	this->nameMap->set(HX_CSTRING("Number Of Matches?"),HX_CSTRING("_NumberOfMatches"));
	HX_STACK_LINE(1948)
	this->_NumberOfMatches = 0.0;
	HX_STACK_LINE(1949)
	this->nameMap->set(HX_CSTRING("Searcher"),HX_CSTRING("_Searcher"));
	HX_STACK_LINE(1950)
	this->_Searcher = 0.0;
	HX_STACK_LINE(1951)
	this->nameMap->set(HX_CSTRING("KillList"),HX_CSTRING("_KillList"));
	HX_STACK_LINE(1952)
	this->_KillList = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(1953)
	this->nameMap->set(HX_CSTRING("DestroyListModifier"),HX_CSTRING("_DestroyListModifier"));
	HX_STACK_LINE(1954)
	this->_DestroyListModifier = 0.0;
	HX_STACK_LINE(1955)
	this->nameMap->set(HX_CSTRING("GemTypeNumber"),HX_CSTRING("_GemTypeNumber"));
	HX_STACK_LINE(1956)
	this->_GemTypeNumber = 0.0;
	HX_STACK_LINE(1957)
	this->nameMap->set(HX_CSTRING("SpawnTypeActor"),HX_CSTRING("_SpawnTypeActor"));
	HX_STACK_LINE(1958)
	this->nameMap->set(HX_CSTRING("SpawnType_ID"),HX_CSTRING("_SpawnTypeID"));
	HX_STACK_LINE(1959)
	this->_SpawnTypeID = 0.0;
	HX_STACK_LINE(1960)
	this->nameMap->set(HX_CSTRING("XSearcher"),HX_CSTRING("_XSearcher"));
	HX_STACK_LINE(1961)
	this->_XSearcher = 0.0;
	HX_STACK_LINE(1962)
	this->nameMap->set(HX_CSTRING("Spawn?"),HX_CSTRING("_Spawn"));
	HX_STACK_LINE(1963)
	this->_Spawn = false;
	HX_STACK_LINE(1964)
	this->nameMap->set(HX_CSTRING("ActorReveal"),HX_CSTRING("_ActorReveal"));
	HX_STACK_LINE(1965)
	this->_ActorReveal = 0.0;
	HX_STACK_LINE(1966)
	this->nameMap->set(HX_CSTRING("UIDCOPY"),HX_CSTRING("_UIDCOPY"));
	HX_STACK_LINE(1967)
	this->_UIDCOPY = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(1968)
	this->nameMap->set(HX_CSTRING("KillListMod"),HX_CSTRING("_KillListMod"));
	HX_STACK_LINE(1969)
	this->_KillListMod = 0.0;
	HX_STACK_LINE(1970)
	this->nameMap->set(HX_CSTRING("ScreenOffset"),HX_CSTRING("_ScreenOffset"));
	HX_STACK_LINE(1971)
	this->_ScreenOffset = 0.0;
	HX_STACK_LINE(1972)
	this->nameMap->set(HX_CSTRING("RefillX"),HX_CSTRING("_RefillX"));
	HX_STACK_LINE(1973)
	this->_RefillX = 0.0;
	HX_STACK_LINE(1974)
	this->nameMap->set(HX_CSTRING("RefillY"),HX_CSTRING("_RefillY"));
	HX_STACK_LINE(1975)
	this->_RefillY = 0.0;
	HX_STACK_LINE(1976)
	this->nameMap->set(HX_CSTRING("GemSound"),HX_CSTRING("_GemSound"));
	HX_STACK_LINE(1977)
	this->nameMap->set(HX_CSTRING("sda"),HX_CSTRING("_sda"));
	HX_STACK_LINE(1978)
	this->nameMap->set(HX_CSTRING("Score"),HX_CSTRING("_Score"));
	HX_STACK_LINE(1979)
	this->_Score = 0.0;
	HX_STACK_LINE(1980)
	this->nameMap->set(HX_CSTRING("ScoreCounter"),HX_CSTRING("_ScoreCounter"));
	HX_STACK_LINE(1981)
	this->_ScoreCounter = 0.0;
	HX_STACK_LINE(1982)
	this->nameMap->set(HX_CSTRING("Delayer"),HX_CSTRING("_Delayer"));
	HX_STACK_LINE(1983)
	this->_Delayer = 0.0;
	HX_STACK_LINE(1984)
	this->nameMap->set(HX_CSTRING("DrawOrder"),HX_CSTRING("_DrawOrder"));
	HX_STACK_LINE(1985)
	this->_DrawOrder = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(1986)
	this->nameMap->set(HX_CSTRING("BeaterCombo"),HX_CSTRING("_BeaterCombo"));
	HX_STACK_LINE(1987)
	this->_BeaterCombo = 0.0;
	HX_STACK_LINE(1988)
	this->nameMap->set(HX_CSTRING("ExtraSearcher"),HX_CSTRING("_ExtraSearcher"));
	HX_STACK_LINE(1989)
	this->_ExtraSearcher = 0.0;
	HX_STACK_LINE(1990)
	this->nameMap->set(HX_CSTRING("BeaterSpawn"),HX_CSTRING("_BeaterSpawn"));
	HX_STACK_LINE(1991)
	this->_BeaterSpawn = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(1992)
	this->nameMap->set(HX_CSTRING("Direction"),HX_CSTRING("_Direction"));
	HX_STACK_LINE(1993)
	this->_Direction = 0.0;
	HX_STACK_LINE(1994)
	this->nameMap->set(HX_CSTRING("IdleTime"),HX_CSTRING("_IdleTime"));
	HX_STACK_LINE(1995)
	this->_IdleTime = 0.0;
	HX_STACK_LINE(1996)
	this->nameMap->set(HX_CSTRING("HintList"),HX_CSTRING("_HintList"));
	HX_STACK_LINE(1997)
	this->_HintList = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(1998)
	this->nameMap->set(HX_CSTRING("SpecialSpawn?"),HX_CSTRING("_SpecialSpawn"));
	HX_STACK_LINE(1999)
	this->_SpecialSpawn = false;
	HX_STACK_LINE(2000)
	this->nameMap->set(HX_CSTRING("MatchesFound?"),HX_CSTRING("_MatchesFound"));
	HX_STACK_LINE(2001)
	this->_MatchesFound = false;
	HX_STACK_LINE(2002)
	this->nameMap->set(HX_CSTRING("SpecialKill?"),HX_CSTRING("_SpecialKill"));
	HX_STACK_LINE(2003)
	this->_SpecialKill = false;
	HX_STACK_LINE(2004)
	this->nameMap->set(HX_CSTRING("SpecialListBomb"),HX_CSTRING("_SpecialListBomb"));
	HX_STACK_LINE(2005)
	this->_SpecialListBomb = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(2006)
	this->nameMap->set(HX_CSTRING("BombX"),HX_CSTRING("_BombX"));
	HX_STACK_LINE(2007)
	this->_BombX = 0.0;
	HX_STACK_LINE(2008)
	this->nameMap->set(HX_CSTRING("Create Bomb Piece?"),HX_CSTRING("_CreateBombPiece"));
	HX_STACK_LINE(2009)
	this->_CreateBombPiece = false;
	HX_STACK_LINE(2010)
	this->nameMap->set(HX_CSTRING("DoubleCombo"),HX_CSTRING("_DoubleCombo"));
	HX_STACK_LINE(2011)
	this->_DoubleCombo = 0.0;
	HX_STACK_LINE(2012)
	this->nameMap->set(HX_CSTRING("GemID"),HX_CSTRING("_GemID"));
	HX_STACK_LINE(2013)
	this->_GemID = 0.0;
	HX_STACK_LINE(2014)
	this->nameMap->set(HX_CSTRING("Coins"),HX_CSTRING("_Coins"));
	HX_STACK_LINE(2015)
	this->nameMap->set(HX_CSTRING("BeaterRefillX"),HX_CSTRING("_BeaterRefillX"));
	HX_STACK_LINE(2016)
	this->_BeaterRefillX = 0.0;
	HX_STACK_LINE(2017)
	this->nameMap->set(HX_CSTRING("BeaterRefillY"),HX_CSTRING("_BeaterRefillY"));
	HX_STACK_LINE(2018)
	this->_BeaterRefillY = 0.0;
	HX_STACK_LINE(2019)
	this->nameMap->set(HX_CSTRING("MusicManager"),HX_CSTRING("_MusicManager"));
	HX_STACK_LINE(2020)
	this->_MusicManager = false;
	HX_STACK_LINE(2021)
	this->nameMap->set(HX_CSTRING("BombY"),HX_CSTRING("_BombY"));
	HX_STACK_LINE(2022)
	this->_BombY = 0.0;
	HX_STACK_LINE(2023)
	this->nameMap->set(HX_CSTRING("BombXX"),HX_CSTRING("_BombXX"));
	HX_STACK_LINE(2024)
	this->_BombXX = 0.0;
	HX_STACK_LINE(2025)
	this->nameMap->set(HX_CSTRING("BombYY"),HX_CSTRING("_BombYY"));
	HX_STACK_LINE(2026)
	this->_BombYY = 0.0;
	HX_STACK_LINE(2027)
	this->nameMap->set(HX_CSTRING("BombKill?"),HX_CSTRING("_BombKill"));
	HX_STACK_LINE(2028)
	this->_BombKill = false;
	HX_STACK_LINE(2029)
	this->nameMap->set(HX_CSTRING("Lose?"),HX_CSTRING("_Lose"));
	HX_STACK_LINE(2030)
	this->_Lose = false;
	HX_STACK_LINE(2031)
	this->nameMap->set(HX_CSTRING("ScreenOffesetY"),HX_CSTRING("_ScreenOffesetY"));
	HX_STACK_LINE(2032)
	this->_ScreenOffesetY = 0.0;
	HX_STACK_LINE(2033)
	this->nameMap->set(HX_CSTRING("Combo"),HX_CSTRING("_Combo"));
	HX_STACK_LINE(2034)
	this->_Combo = 0.0;
	HX_STACK_LINE(2035)
	this->nameMap->set(HX_CSTRING("ActorDeathPos"),HX_CSTRING("_ActorDeathPos"));
	HX_STACK_LINE(2036)
	this->_ActorDeathPos = 0.0;
	HX_STACK_LINE(2037)
	this->nameMap->set(HX_CSTRING("Swing"),HX_CSTRING("_Swing"));
	HX_STACK_LINE(2038)
	this->_Swing = 0.0;
	HX_STACK_LINE(2039)
	this->nameMap->set(HX_CSTRING("SwingCounter"),HX_CSTRING("_SwingCounter"));
	HX_STACK_LINE(2040)
	this->_SwingCounter = 0.0;
	HX_STACK_LINE(2041)
	this->nameMap->set(HX_CSTRING("GameTempo"),HX_CSTRING("_GameTempo"));
	HX_STACK_LINE(2042)
	this->_GameTempo = 0.0;
	HX_STACK_LINE(2043)
	this->nameMap->set(HX_CSTRING("Win?"),HX_CSTRING("_Win"));
	HX_STACK_LINE(2044)
	this->_Win = false;
	HX_STACK_LINE(2045)
	this->nameMap->set(HX_CSTRING("Cursor"),HX_CSTRING("_Cursor"));
	HX_STACK_LINE(2046)
	this->nameMap->set(HX_CSTRING("DisplayText?"),HX_CSTRING("_DisplayText"));
	HX_STACK_LINE(2047)
	this->_DisplayText = false;
	HX_STACK_LINE(2048)
	this->nameMap->set(HX_CSTRING("EndLevel?"),HX_CSTRING("_EndLevel"));
	HX_STACK_LINE(2049)
	this->_EndLevel = false;
	HX_STACK_LINE(2050)
	this->nameMap->set(HX_CSTRING("combonumber"),HX_CSTRING("_combonumber"));
	HX_STACK_LINE(2051)
	this->_combonumber = 0.0;
	HX_STACK_LINE(2052)
	this->nameMap->set(HX_CSTRING("PlayerInput?"),HX_CSTRING("_PlayerInput"));
	HX_STACK_LINE(2053)
	this->_PlayerInput = false;
	HX_STACK_LINE(2054)
	this->nameMap->set(HX_CSTRING("ActorDeathPosY"),HX_CSTRING("_ActorDeathPosY"));
	HX_STACK_LINE(2055)
	this->_ActorDeathPosY = 0.0;
	HX_STACK_LINE(2056)
	this->nameMap->set(HX_CSTRING("Multiplefinder"),HX_CSTRING("_Multiplefinder"));
	HX_STACK_LINE(2057)
	this->_Multiplefinder = 0.0;
	HX_STACK_LINE(2058)
	this->nameMap->set(HX_CSTRING("AutoCombo"),HX_CSTRING("_AutoCombo"));
	HX_STACK_LINE(2059)
	this->_AutoCombo = 0.0;
	HX_STACK_LINE(2060)
	this->nameMap->set(HX_CSTRING("TapmodeFlag"),HX_CSTRING("_TapmodeFlag"));
	HX_STACK_LINE(2061)
	this->_TapmodeFlag = false;
	HX_STACK_LINE(2062)
	this->nameMap->set(HX_CSTRING("TappingList"),HX_CSTRING("_TappingList"));
	HX_STACK_LINE(2063)
	this->_TappingList = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(2064)
	this->nameMap->set(HX_CSTRING("TapTime"),HX_CSTRING("_TapTime"));
	HX_STACK_LINE(2065)
	this->_TapTime = 0.0;
	HX_STACK_LINE(2066)
	this->nameMap->set(HX_CSTRING("TapPrekill"),HX_CSTRING("_TapPrekill"));
	HX_STACK_LINE(2067)
	this->_TapPrekill = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(2068)
	this->nameMap->set(HX_CSTRING("Ending"),HX_CSTRING("_Ending"));
	HX_STACK_LINE(2069)
	this->_Ending = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(2070)
	this->nameMap->set(HX_CSTRING("CreateWorm"),HX_CSTRING("_CreateWorm"));
	HX_STACK_LINE(2071)
	this->_CreateWorm = false;
	HX_STACK_LINE(2072)
	this->nameMap->set(HX_CSTRING("GemSelector"),HX_CSTRING("_GemSelector"));
	HX_STACK_LINE(2073)
	this->_GemSelector = 0.0;
	HX_STACK_LINE(2074)
	this->nameMap->set(HX_CSTRING("Taplist"),HX_CSTRING("_Taplist"));
	HX_STACK_LINE(2075)
	this->_Taplist = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(2076)
	this->nameMap->set(HX_CSTRING("TapOn"),HX_CSTRING("_TapOn"));
	HX_STACK_LINE(2077)
	this->_TapOn = false;
	HX_STACK_LINE(2078)
	this->nameMap->set(HX_CSTRING("PreTapKillList"),HX_CSTRING("_PreTapKillList"));
	HX_STACK_LINE(2079)
	this->_PreTapKillList = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(2080)
	this->nameMap->set(HX_CSTRING("CleanUpTapMode"),HX_CSTRING("_CleanUpTapMode"));
	HX_STACK_LINE(2081)
	this->_CleanUpTapMode = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(2082)
	this->nameMap->set(HX_CSTRING("cleaner"),HX_CSTRING("_cleaner"));
	HX_STACK_LINE(2083)
	this->_cleaner = 0.0;
	HX_STACK_LINE(2084)
	this->nameMap->set(HX_CSTRING("TapCombo"),HX_CSTRING("_TapCombo"));
	HX_STACK_LINE(2085)
	this->_TapCombo = 0.0;
	HX_STACK_LINE(2086)
	this->nameMap->set(HX_CSTRING("TapKillList"),HX_CSTRING("_TapKillList"));
	HX_STACK_LINE(2087)
	this->_TapKillList = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(2088)
	this->nameMap->set(HX_CSTRING("StartTimer"),HX_CSTRING("_StartTimer"));
	HX_STACK_LINE(2089)
	this->_StartTimer = false;
	HX_STACK_LINE(2090)
	this->nameMap->set(HX_CSTRING("ComboBrokenFlag"),HX_CSTRING("_ComboBrokenFlag"));
	HX_STACK_LINE(2091)
	this->_ComboBrokenFlag = false;
	HX_STACK_LINE(2092)
	this->nameMap->set(HX_CSTRING("resetX"),HX_CSTRING("_resetX"));
	HX_STACK_LINE(2093)
	this->_resetX = 0.0;
	HX_STACK_LINE(2094)
	this->nameMap->set(HX_CSTRING("resetY"),HX_CSTRING("_resetY"));
	HX_STACK_LINE(2095)
	this->_resetY = 0.0;
}
;
	return null();
}

Design_3_3_SceneManager_obj::~Design_3_3_SceneManager_obj() { }

Dynamic Design_3_3_SceneManager_obj::__CreateEmpty() { return  new Design_3_3_SceneManager_obj; }
hx::ObjectPtr< Design_3_3_SceneManager_obj > Design_3_3_SceneManager_obj::__new(int dummy,::com::stencyl::Engine engine)
{  hx::ObjectPtr< Design_3_3_SceneManager_obj > result = new Design_3_3_SceneManager_obj();
	result->__construct(dummy,engine);
	return result;}

Dynamic Design_3_3_SceneManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Design_3_3_SceneManager_obj > result = new Design_3_3_SceneManager_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Design_3_3_SceneManager_obj::forwardMessage( ::String msg){
{
		HX_STACK_PUSH("Design_3_3_SceneManager::forwardMessage","scripts/Design_3_3_SceneManager.hx",2686);
		HX_STACK_THIS(this);
		HX_STACK_ARG(msg,"msg");
	}
return null();
}


Void Design_3_3_SceneManager_obj::init( ){
{
		HX_STACK_PUSH("Design_3_3_SceneManager::init","scripts/Design_3_3_SceneManager.hx",2100);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2099)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2103)
		this->_TapOn = false;
		HX_STACK_LINE(2104)
		this->propertyChanged(HX_CSTRING("_TapOn"),this->_TapOn);
		HX_STACK_LINE(2105)
		this->_TapmodeFlag = false;
		HX_STACK_LINE(2106)
		this->propertyChanged(HX_CSTRING("_TapmodeFlag"),this->_TapmodeFlag);
		HX_STACK_LINE(2107)
		this->setGameAttribute(HX_CSTRING("Tappings"),false);
		HX_STACK_LINE(2108)
		this->_CreateWorm = false;
		HX_STACK_LINE(2109)
		this->propertyChanged(HX_CSTRING("_CreateWorm"),this->_CreateWorm);
		struct _Function_1_1{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2110);
				{
					HX_STACK_LINE(2110)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2110);
				{
					HX_STACK_LINE(2110)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(2110)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(2110)
		this->_NumberOfMatches = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_2::Block()) )) )) )) );
		HX_STACK_LINE(2111)
		this->propertyChanged(HX_CSTRING("_NumberOfMatches"),this->_NumberOfMatches);
		HX_STACK_LINE(2112)
		this->setGameAttribute(HX_CSTRING("fixedGT"),this->getGameAttribute(HX_CSTRING("GameTempo")));
		HX_STACK_LINE(2113)
		this->setOffscreenTolerance((int)64,(int)64,(int)64,(int)64);
		struct _Function_1_3{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2114);
				{
					HX_STACK_LINE(2114)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_4{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2114);
				{
					HX_STACK_LINE(2114)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(2114)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(2114)
		this->_AutoCombo = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_3::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_4::Block()) )) )) )) );
		HX_STACK_LINE(2115)
		this->propertyChanged(HX_CSTRING("_AutoCombo"),this->_AutoCombo);
		HX_STACK_LINE(2116)
		this->_PlayerInput = false;
		HX_STACK_LINE(2117)
		this->propertyChanged(HX_CSTRING("_PlayerInput"),this->_PlayerInput);
		HX_STACK_LINE(2118)
		this->_DisplayText = false;
		HX_STACK_LINE(2119)
		this->propertyChanged(HX_CSTRING("_DisplayText"),this->_DisplayText);
		HX_STACK_LINE(2120)
		{
			HX_STACK_LINE(2120)
			Dynamic arr = this->_DrawOrder;		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(2120)
			arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(2121)
		this->_Coins = this->getActorType((int)65);
		HX_STACK_LINE(2122)
		this->propertyChanged(HX_CSTRING("_Coins"),this->_Coins);
		HX_STACK_LINE(2123)
		this->setGameAttribute(HX_CSTRING("KillList"),Dynamic( Array_obj<Dynamic>::__new() ));
		HX_STACK_LINE(2124)
		this->setGameAttribute(HX_CSTRING("HintList"),Dynamic( Array_obj<Dynamic>::__new() ));
		HX_STACK_LINE(2125)
		this->setGameAttribute(HX_CSTRING("BPS"),Dynamic( Array_obj<Dynamic>::__new() ));
		HX_STACK_LINE(2126)
		this->_TapPrekill = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(2127)
		this->propertyChanged(HX_CSTRING("_TapPrekill"),this->_TapPrekill);
		HX_STACK_LINE(2128)
		this->_SpecialListBomb = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(2129)
		this->propertyChanged(HX_CSTRING("_SpecialListBomb"),this->_SpecialListBomb);
		HX_STACK_LINE(2130)
		this->_DrawOrder = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(2131)
		this->propertyChanged(HX_CSTRING("_DrawOrder"),this->_DrawOrder);
		HX_STACK_LINE(2132)
		this->_KillList = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(2133)
		this->propertyChanged(HX_CSTRING("_KillList"),this->_KillList);
		HX_STACK_LINE(2134)
		this->_TileList = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(2135)
		this->propertyChanged(HX_CSTRING("_TileList"),this->_TileList);
		HX_STACK_LINE(2136)
		this->_UIDCOPY = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(2137)
		this->propertyChanged(HX_CSTRING("_UIDCOPY"),this->_UIDCOPY);
		HX_STACK_LINE(2138)
		this->_AlreadySpawned = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(2139)
		this->propertyChanged(HX_CSTRING("_AlreadySpawned"),this->_AlreadySpawned);
		HX_STACK_LINE(2140)
		this->_GemType = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(2141)
		this->propertyChanged(HX_CSTRING("_GemType"),this->_GemType);
		HX_STACK_LINE(2142)
		this->_TileList = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(2143)
		this->propertyChanged(HX_CSTRING("_TileList"),this->_TileList);
		HX_STACK_LINE(2144)
		this->_UID = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(2145)
		this->propertyChanged(HX_CSTRING("_UID"),this->_UID);
		struct _Function_1_5{
			inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2148);
				{
					HX_STACK_LINE(2148)
					Dynamic o = (Float(__this->getSceneWidth()) / Float((int)2));		HX_STACK_VAR(o,"o");
					struct _Function_2_1{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2148);
							{
								HX_STACK_LINE(2148)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2148);
							{
								HX_STACK_LINE(2148)
								::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(2148)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(2148)
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_2::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(2148)
		this->_ScreenOffset = _Function_1_5::Block(this);
		HX_STACK_LINE(2149)
		this->propertyChanged(HX_CSTRING("_ScreenOffset"),this->_ScreenOffset);
		struct _Function_1_6{
			inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2150);
				{
					HX_STACK_LINE(2150)
					Dynamic o = (Float(__this->getSceneHeight()) / Float((int)2));		HX_STACK_VAR(o,"o");
					struct _Function_2_1{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2150);
							{
								HX_STACK_LINE(2150)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2150);
							{
								HX_STACK_LINE(2150)
								::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(2150)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(2150)
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_2::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(2150)
		this->_ScreenOffesetY = _Function_1_6::Block(this);
		HX_STACK_LINE(2151)
		this->propertyChanged(HX_CSTRING("_ScreenOffesetY"),this->_ScreenOffesetY);
		HX_STACK_LINE(2152)
		this->_CreateBombPiece = false;
		HX_STACK_LINE(2153)
		this->propertyChanged(HX_CSTRING("_CreateBombPiece"),this->_CreateBombPiece);
		struct _Function_1_7{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2154);
				{
					HX_STACK_LINE(2154)
					return (  ((hx::TCast< Bool >::cast((int)1))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_8{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2154);
				{
					HX_STACK_LINE(2154)
					::haxe::Log_obj::trace((HX_CSTRING("1") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(2154)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(2154)
		this->_Direction = (  ((::Std_obj::is((int)1,hx::ClassOf< ::Float >()))) ? Float((int)1) : Float((  ((::Std_obj::is((int)1,hx::ClassOf< ::Int >()))) ? Float((int)1) : Float((  ((::Std_obj::is((int)1,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_7::Block()) : Float((  ((::Std_obj::is((int)1,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)1)) : Float(_Function_1_8::Block()) )) )) )) );
		HX_STACK_LINE(2155)
		this->propertyChanged(HX_CSTRING("_Direction"),this->_Direction);
		struct _Function_1_9{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2156);
				{
					HX_STACK_LINE(2156)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_10{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2156);
				{
					HX_STACK_LINE(2156)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(2156)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(2156)
		this->_DoubleCombo = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_9::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_10::Block()) )) )) )) );
		HX_STACK_LINE(2157)
		this->propertyChanged(HX_CSTRING("_DoubleCombo"),this->_DoubleCombo);
		struct _Function_1_11{
			inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2158);
				{
					HX_STACK_LINE(2158)
					Dynamic o = __this->getGameAttribute(HX_CSTRING("Grid Spacing"));		HX_STACK_VAR(o,"o");
					struct _Function_2_1{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2158);
							{
								HX_STACK_LINE(2158)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2158);
							{
								HX_STACK_LINE(2158)
								::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(2158)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(2158)
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_2::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(2158)
		this->_GridSpacing = _Function_1_11::Block(this);
		HX_STACK_LINE(2159)
		this->propertyChanged(HX_CSTRING("_GridSpacing"),this->_GridSpacing);
		HX_STACK_LINE(2160)
		this->setGameAttribute(HX_CSTRING("Grid Spacing"),this->getGameAttribute(HX_CSTRING("Grid Spacing")));
		struct _Function_1_12{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2161);
				{
					HX_STACK_LINE(2161)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_13{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2161);
				{
					HX_STACK_LINE(2161)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(2161)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(2161)
		this->_Xincrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_12::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_13::Block()) )) )) )) );
		HX_STACK_LINE(2162)
		this->propertyChanged(HX_CSTRING("_Xincrementer"),this->_Xincrementer);
		HX_STACK_LINE(2163)
		this->setGameAttribute(HX_CSTRING("RegionCreated?"),false);
		struct _Function_1_14{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2164);
				{
					HX_STACK_LINE(2164)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_15{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2164);
				{
					HX_STACK_LINE(2164)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(2164)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(2164)
		this->_YIncrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_14::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_15::Block()) )) )) )) );
		HX_STACK_LINE(2165)
		this->propertyChanged(HX_CSTRING("_YIncrementer"),this->_YIncrementer);
		struct _Function_1_16{
			inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2167);
				{
					HX_STACK_LINE(2167)
					Dynamic o = __this->getGameAttribute(HX_CSTRING("GameTempo"));		HX_STACK_VAR(o,"o");
					struct _Function_2_1{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2167);
							{
								HX_STACK_LINE(2167)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2167);
							{
								HX_STACK_LINE(2167)
								::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(2167)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(2167)
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_2::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(2167)
		this->_GameTempo = _Function_1_16::Block(this);
		HX_STACK_LINE(2168)
		this->propertyChanged(HX_CSTRING("_GameTempo"),this->_GameTempo);
		HX_STACK_LINE(2173)
		::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("ListsCreated New")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),2173,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("init")));
		HX_STACK_LINE(2174)
		this->_CanSpawn = true;
		HX_STACK_LINE(2175)
		this->propertyChanged(HX_CSTRING("_CanSpawn"),this->_CanSpawn);
		HX_STACK_LINE(2176)
		this->_IsDestroying = false;
		HX_STACK_LINE(2177)
		this->propertyChanged(HX_CSTRING("_IsDestroying"),this->_IsDestroying);
		HX_STACK_LINE(2178)
		this->_CheckMatches = false;
		HX_STACK_LINE(2179)
		this->propertyChanged(HX_CSTRING("_CheckMatches"),this->_CheckMatches);
		HX_STACK_LINE(2180)
		this->_CleanUpTapMode = ::List2D_obj::new_2D(::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridY"))),::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridX"))));
		HX_STACK_LINE(2181)
		this->propertyChanged(HX_CSTRING("_CleanUpTapMode"),this->_CleanUpTapMode);
		HX_STACK_LINE(2182)
		this->_PreTapKillList = ::List2D_obj::new_2D(::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridY"))),::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridX"))));
		HX_STACK_LINE(2183)
		this->propertyChanged(HX_CSTRING("_PreTapKillList"),this->_PreTapKillList);
		HX_STACK_LINE(2184)
		this->_SpecialListBomb = ::List2D_obj::new_2D(::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridY"))),::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridX"))));
		HX_STACK_LINE(2185)
		this->propertyChanged(HX_CSTRING("_SpecialListBomb"),this->_SpecialListBomb);
		HX_STACK_LINE(2186)
		this->setGameAttribute(HX_CSTRING("BPS"),::List2D_obj::new_2D(::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridY"))),::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridX")))));
		HX_STACK_LINE(2187)
		this->_TileList = ::List2D_obj::new_2D(::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridY"))),::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridX"))));
		HX_STACK_LINE(2188)
		this->propertyChanged(HX_CSTRING("_TileList"),this->_TileList);
		HX_STACK_LINE(2189)
		this->_GemType = ::List2D_obj::new_2D(::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridY"))),::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridX"))));
		HX_STACK_LINE(2190)
		this->propertyChanged(HX_CSTRING("_GemType"),this->_GemType);
		HX_STACK_LINE(2191)
		this->_UID = ::List2D_obj::new_2D(::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridY"))),::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridX"))));
		HX_STACK_LINE(2192)
		this->propertyChanged(HX_CSTRING("_UID"),this->_UID);
		HX_STACK_LINE(2193)
		this->_AlreadySpawned = ::List2D_obj::new_2D(::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridY"))),::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridX"))));
		HX_STACK_LINE(2194)
		this->propertyChanged(HX_CSTRING("_AlreadySpawned"),this->_AlreadySpawned);
		HX_STACK_LINE(2195)
		this->_sda = this->getSound((int)56);
		HX_STACK_LINE(2196)
		this->propertyChanged(HX_CSTRING("_sda"),this->_sda);
		struct _Function_1_17{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2197);
				{
					HX_STACK_LINE(2197)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_18{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2197);
				{
					HX_STACK_LINE(2197)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(2197)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(2197)
		this->_Xincrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_17::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_18::Block()) )) )) )) );
		HX_STACK_LINE(2198)
		this->propertyChanged(HX_CSTRING("_Xincrementer"),this->_Xincrementer);
		struct _Function_1_19{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2199);
				{
					HX_STACK_LINE(2199)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_20{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2199);
				{
					HX_STACK_LINE(2199)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(2199)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(2199)
		this->_YIncrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_19::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_20::Block()) )) )) )) );
		HX_STACK_LINE(2200)
		this->propertyChanged(HX_CSTRING("_YIncrementer"),this->_YIncrementer);
		struct _Function_1_21{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2201);
				{
					HX_STACK_LINE(2201)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_22{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2201);
				{
					HX_STACK_LINE(2201)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(2201)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(2201)
		this->_RefillX = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_21::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_22::Block()) )) )) )) );
		HX_STACK_LINE(2202)
		this->propertyChanged(HX_CSTRING("_RefillX"),this->_RefillX);
		struct _Function_1_23{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2203);
				{
					HX_STACK_LINE(2203)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_24{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2203);
				{
					HX_STACK_LINE(2203)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(2203)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(2203)
		this->_RefillY = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_23::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_24::Block()) )) )) )) );
		HX_STACK_LINE(2204)
		this->propertyChanged(HX_CSTRING("_RefillY"),this->_RefillY);
		HX_STACK_LINE(2205)
		this->_customEvent_SpawnStart();

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_25,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_25","scripts/Design_3_3_SceneManager.hx",2206);
			HX_STACK_ARG(timeTask,"timeTask");
			{

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g)
				Void run(::com::stencyl::behavior::TimedTask timeTask1){
					HX_STACK_PUSH("*::_Function_2_1","scripts/Design_3_3_SceneManager.hx",2207);
					HX_STACK_ARG(timeTask1,"timeTask1");
					{
						HX_STACK_LINE(2208)
						hx::AddEq(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_IdleTime,(int)1);
						HX_STACK_LINE(2209)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_IdleTime"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_IdleTime);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(2206)
				_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->runPeriodically((int)1000, Dynamic(new _Function_2_1(_g)),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(2206)
		this->runLater((int)5000, Dynamic(new _Function_1_25(_g)),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_26,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_26","scripts/Design_3_3_SceneManager.hx",2212);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(2212)
				if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("SoundManager")) >= (int)1))){
					HX_STACK_LINE(2214)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("SoundManager"),(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("SoundManager")) - (int)1));
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(2212)
		this->runPeriodically((int)1000, Dynamic(new _Function_1_26(_g)),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_27,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::graphics::G g,Float x,Float y,Dynamic list){
			HX_STACK_PUSH("*::_Function_1_27","scripts/Design_3_3_SceneManager.hx",2221);
			HX_STACK_ARG(g,"g");
			HX_STACK_ARG(x,"x");
			HX_STACK_ARG(y,"y");
			HX_STACK_ARG(list,"list");
			{
				HX_STACK_LINE(2221)
				if ((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->wrapper->enabled)){
					HX_STACK_LINE(2223)
					{
						HX_STACK_LINE(2223)
						::com::stencyl::models::Font newFont = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getFont((int)36);		HX_STACK_VAR(newFont,"newFont");
						HX_STACK_LINE(2223)
						if (((bool((newFont != null())) && bool((newFont != g->font))))){
							HX_STACK_LINE(2223)
							g->font = newFont;
						}
					}
					HX_STACK_LINE(2228)
					{
						HX_STACK_LINE(2228)
						Float x1 = (Float(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getScreenWidth()) / Float((int)2));		HX_STACK_VAR(x1,"x1");
						Float y1 = (Float((Float((int)3) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSceneHeight()))) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getTileHeight()));		HX_STACK_VAR(y1,"y1");
						HX_STACK_LINE(2228)
						if (((g->font == null()))){
							HX_STACK_LINE(2228)
							g->font = g->defaultFont;
						}
						HX_STACK_LINE(2228)
						Float drawX;		HX_STACK_VAR(drawX,"drawX");
						HX_STACK_LINE(2228)
						Float drawY;		HX_STACK_VAR(drawY,"drawY");
						HX_STACK_LINE(2228)
						if ((g->drawActor)){
							HX_STACK_LINE(2228)
							if (((bool((g->actor != null())) && bool(g->actor->isHUD)))){
								HX_STACK_LINE(2228)
								drawX = (g->x + (x1 * g->scaleX));
								HX_STACK_LINE(2228)
								drawY = (g->y + (y1 * g->scaleY));
							}
							else{
								HX_STACK_LINE(2228)
								drawX = ((g->x + (x1 * g->scaleX)) + ::com::stencyl::Engine_obj::cameraX);
								HX_STACK_LINE(2228)
								drawY = ((g->y + (y1 * g->scaleY)) + ::com::stencyl::Engine_obj::cameraY);
							}
						}
						else{
							HX_STACK_LINE(2228)
							drawX = (g->x + (x1 * g->scaleX));
							HX_STACK_LINE(2228)
							drawY = (g->y + (y1 * g->scaleY));
						}
						HX_STACK_LINE(2228)
						g->drawData->splice((int)0,g->drawData->length);
						HX_STACK_LINE(2228)
						g->font->font->render(g->drawData,(HX_CSTRING("") + _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_ScoreCounter),(int)0,g->alpha,::Std_obj::_int(drawX),::Std_obj::_int(drawY),(int)0,g->font->fontScale,(int)0,false);
						HX_STACK_LINE(2228)
						g->font->font->drawText(g->graphics,g->drawData,null(),null());
					}
					HX_STACK_LINE(2229)
					{
						HX_STACK_LINE(2229)
						Float x1 = (_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("Grid Spacing")) - (int)25);		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(2229)
						if (((g->font == null()))){
							HX_STACK_LINE(2229)
							g->font = g->defaultFont;
						}
						HX_STACK_LINE(2229)
						Float drawX;		HX_STACK_VAR(drawX,"drawX");
						HX_STACK_LINE(2229)
						Float drawY;		HX_STACK_VAR(drawY,"drawY");
						HX_STACK_LINE(2229)
						if ((g->drawActor)){
							HX_STACK_LINE(2229)
							if (((bool((g->actor != null())) && bool(g->actor->isHUD)))){
								HX_STACK_LINE(2229)
								drawX = (g->x + (x1 * g->scaleX));
								HX_STACK_LINE(2229)
								drawY = (g->y + ((int)64 * g->scaleY));
							}
							else{
								HX_STACK_LINE(2229)
								drawX = ((g->x + (x1 * g->scaleX)) + ::com::stencyl::Engine_obj::cameraX);
								HX_STACK_LINE(2229)
								drawY = ((g->y + ((int)64 * g->scaleY)) + ::com::stencyl::Engine_obj::cameraY);
							}
						}
						else{
							HX_STACK_LINE(2229)
							drawX = (g->x + (x1 * g->scaleX));
							HX_STACK_LINE(2229)
							drawY = (g->y + ((int)64 * g->scaleY));
						}
						HX_STACK_LINE(2229)
						g->drawData->splice((int)0,g->drawData->length);
						HX_STACK_LINE(2229)
						g->font->font->render(g->drawData,(HX_CSTRING("") + (((HX_CSTRING("") + HX_CSTRING("Moves")) + ((HX_CSTRING("") + ::Std_obj::string(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("Moves Counter")))))))),(int)0,g->alpha,::Std_obj::_int(drawX),::Std_obj::_int(drawY),(int)0,g->font->fontScale,(int)0,false);
						HX_STACK_LINE(2229)
						g->font->font->drawText(g->graphics,g->drawData,null(),null());
					}
					HX_STACK_LINE(2230)
					{
						HX_STACK_LINE(2230)
						Float x1 = (_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("Grid Spacing")) - (int)25);		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(2230)
						if (((g->font == null()))){
							HX_STACK_LINE(2230)
							g->font = g->defaultFont;
						}
						HX_STACK_LINE(2230)
						Float drawX;		HX_STACK_VAR(drawX,"drawX");
						HX_STACK_LINE(2230)
						Float drawY;		HX_STACK_VAR(drawY,"drawY");
						HX_STACK_LINE(2230)
						if ((g->drawActor)){
							HX_STACK_LINE(2230)
							if (((bool((g->actor != null())) && bool(g->actor->isHUD)))){
								HX_STACK_LINE(2230)
								drawX = (g->x + (x1 * g->scaleX));
								HX_STACK_LINE(2230)
								drawY = (g->y + ((int)22 * g->scaleY));
							}
							else{
								HX_STACK_LINE(2230)
								drawX = ((g->x + (x1 * g->scaleX)) + ::com::stencyl::Engine_obj::cameraX);
								HX_STACK_LINE(2230)
								drawY = ((g->y + ((int)22 * g->scaleY)) + ::com::stencyl::Engine_obj::cameraY);
							}
						}
						else{
							HX_STACK_LINE(2230)
							drawX = (g->x + (x1 * g->scaleX));
							HX_STACK_LINE(2230)
							drawY = (g->y + ((int)22 * g->scaleY));
						}
						HX_STACK_LINE(2230)
						g->drawData->splice((int)0,g->drawData->length);
						HX_STACK_LINE(2230)
						g->font->font->render(g->drawData,(HX_CSTRING("") + (((HX_CSTRING("") + HX_CSTRING("Black")) + ((HX_CSTRING("") + ::Std_obj::string(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("ColorMatch1")))))))),(int)0,g->alpha,::Std_obj::_int(drawX),::Std_obj::_int(drawY),(int)0,g->font->fontScale,(int)0,false);
						HX_STACK_LINE(2230)
						g->font->font->drawText(g->graphics,g->drawData,null(),null());
					}
					HX_STACK_LINE(2231)
					{
						HX_STACK_LINE(2231)
						Float x1 = ((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("Grid Spacing")) * 2.2) - (int)25);		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(2231)
						if (((g->font == null()))){
							HX_STACK_LINE(2231)
							g->font = g->defaultFont;
						}
						HX_STACK_LINE(2231)
						Float drawX;		HX_STACK_VAR(drawX,"drawX");
						HX_STACK_LINE(2231)
						Float drawY;		HX_STACK_VAR(drawY,"drawY");
						HX_STACK_LINE(2231)
						if ((g->drawActor)){
							HX_STACK_LINE(2231)
							if (((bool((g->actor != null())) && bool(g->actor->isHUD)))){
								HX_STACK_LINE(2231)
								drawX = (g->x + (x1 * g->scaleX));
								HX_STACK_LINE(2231)
								drawY = (g->y + ((int)22 * g->scaleY));
							}
							else{
								HX_STACK_LINE(2231)
								drawX = ((g->x + (x1 * g->scaleX)) + ::com::stencyl::Engine_obj::cameraX);
								HX_STACK_LINE(2231)
								drawY = ((g->y + ((int)22 * g->scaleY)) + ::com::stencyl::Engine_obj::cameraY);
							}
						}
						else{
							HX_STACK_LINE(2231)
							drawX = (g->x + (x1 * g->scaleX));
							HX_STACK_LINE(2231)
							drawY = (g->y + ((int)22 * g->scaleY));
						}
						HX_STACK_LINE(2231)
						g->drawData->splice((int)0,g->drawData->length);
						HX_STACK_LINE(2231)
						g->font->font->render(g->drawData,(HX_CSTRING("") + (((HX_CSTRING("") + HX_CSTRING("Red:")) + ((HX_CSTRING("") + ::Std_obj::string(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("ColorMatch2")))))))),(int)0,g->alpha,::Std_obj::_int(drawX),::Std_obj::_int(drawY),(int)0,g->font->fontScale,(int)0,false);
						HX_STACK_LINE(2231)
						g->font->font->drawText(g->graphics,g->drawData,null(),null());
					}
					HX_STACK_LINE(2232)
					{
						HX_STACK_LINE(2232)
						Float x1 = ((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("Grid Spacing")) * 3.3) - (int)25);		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(2232)
						if (((g->font == null()))){
							HX_STACK_LINE(2232)
							g->font = g->defaultFont;
						}
						HX_STACK_LINE(2232)
						Float drawX;		HX_STACK_VAR(drawX,"drawX");
						HX_STACK_LINE(2232)
						Float drawY;		HX_STACK_VAR(drawY,"drawY");
						HX_STACK_LINE(2232)
						if ((g->drawActor)){
							HX_STACK_LINE(2232)
							if (((bool((g->actor != null())) && bool(g->actor->isHUD)))){
								HX_STACK_LINE(2232)
								drawX = (g->x + (x1 * g->scaleX));
								HX_STACK_LINE(2232)
								drawY = (g->y + ((int)22 * g->scaleY));
							}
							else{
								HX_STACK_LINE(2232)
								drawX = ((g->x + (x1 * g->scaleX)) + ::com::stencyl::Engine_obj::cameraX);
								HX_STACK_LINE(2232)
								drawY = ((g->y + ((int)22 * g->scaleY)) + ::com::stencyl::Engine_obj::cameraY);
							}
						}
						else{
							HX_STACK_LINE(2232)
							drawX = (g->x + (x1 * g->scaleX));
							HX_STACK_LINE(2232)
							drawY = (g->y + ((int)22 * g->scaleY));
						}
						HX_STACK_LINE(2232)
						g->drawData->splice((int)0,g->drawData->length);
						HX_STACK_LINE(2232)
						g->font->font->render(g->drawData,(HX_CSTRING("") + (((HX_CSTRING("") + HX_CSTRING("Blue:")) + ((HX_CSTRING("") + ::Std_obj::string(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("ColorMatch3")))))))),(int)0,g->alpha,::Std_obj::_int(drawX),::Std_obj::_int(drawY),(int)0,g->font->fontScale,(int)0,false);
						HX_STACK_LINE(2232)
						g->font->font->drawText(g->graphics,g->drawData,null(),null());
					}
					HX_STACK_LINE(2233)
					{
						HX_STACK_LINE(2233)
						Float x1 = (_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("Grid Spacing")) - (int)25);		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(2233)
						if (((g->font == null()))){
							HX_STACK_LINE(2233)
							g->font = g->defaultFont;
						}
						HX_STACK_LINE(2233)
						Float drawX;		HX_STACK_VAR(drawX,"drawX");
						HX_STACK_LINE(2233)
						Float drawY;		HX_STACK_VAR(drawY,"drawY");
						HX_STACK_LINE(2233)
						if ((g->drawActor)){
							HX_STACK_LINE(2233)
							if (((bool((g->actor != null())) && bool(g->actor->isHUD)))){
								HX_STACK_LINE(2233)
								drawX = (g->x + (x1 * g->scaleX));
								HX_STACK_LINE(2233)
								drawY = (g->y + ((int)42 * g->scaleY));
							}
							else{
								HX_STACK_LINE(2233)
								drawX = ((g->x + (x1 * g->scaleX)) + ::com::stencyl::Engine_obj::cameraX);
								HX_STACK_LINE(2233)
								drawY = ((g->y + ((int)42 * g->scaleY)) + ::com::stencyl::Engine_obj::cameraY);
							}
						}
						else{
							HX_STACK_LINE(2233)
							drawX = (g->x + (x1 * g->scaleX));
							HX_STACK_LINE(2233)
							drawY = (g->y + ((int)42 * g->scaleY));
						}
						HX_STACK_LINE(2233)
						g->drawData->splice((int)0,g->drawData->length);
						HX_STACK_LINE(2233)
						g->font->font->render(g->drawData,(HX_CSTRING("") + (((HX_CSTRING("") + HX_CSTRING("Purple:")) + ((HX_CSTRING("") + ::Std_obj::string(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("ColorMatch4")))))))),(int)0,g->alpha,::Std_obj::_int(drawX),::Std_obj::_int(drawY),(int)0,g->font->fontScale,(int)0,false);
						HX_STACK_LINE(2233)
						g->font->font->drawText(g->graphics,g->drawData,null(),null());
					}
					HX_STACK_LINE(2234)
					{
						HX_STACK_LINE(2234)
						Float x1 = ((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("Grid Spacing")) * 2.6) - (int)25);		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(2234)
						if (((g->font == null()))){
							HX_STACK_LINE(2234)
							g->font = g->defaultFont;
						}
						HX_STACK_LINE(2234)
						Float drawX;		HX_STACK_VAR(drawX,"drawX");
						HX_STACK_LINE(2234)
						Float drawY;		HX_STACK_VAR(drawY,"drawY");
						HX_STACK_LINE(2234)
						if ((g->drawActor)){
							HX_STACK_LINE(2234)
							if (((bool((g->actor != null())) && bool(g->actor->isHUD)))){
								HX_STACK_LINE(2234)
								drawX = (g->x + (x1 * g->scaleX));
								HX_STACK_LINE(2234)
								drawY = (g->y + ((int)42 * g->scaleY));
							}
							else{
								HX_STACK_LINE(2234)
								drawX = ((g->x + (x1 * g->scaleX)) + ::com::stencyl::Engine_obj::cameraX);
								HX_STACK_LINE(2234)
								drawY = ((g->y + ((int)42 * g->scaleY)) + ::com::stencyl::Engine_obj::cameraY);
							}
						}
						else{
							HX_STACK_LINE(2234)
							drawX = (g->x + (x1 * g->scaleX));
							HX_STACK_LINE(2234)
							drawY = (g->y + ((int)42 * g->scaleY));
						}
						HX_STACK_LINE(2234)
						g->drawData->splice((int)0,g->drawData->length);
						HX_STACK_LINE(2234)
						g->font->font->render(g->drawData,(HX_CSTRING("") + (((HX_CSTRING("") + HX_CSTRING("Ruby:")) + ((HX_CSTRING("") + ::Std_obj::string(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("ColorMatch5")))))))),(int)0,g->alpha,::Std_obj::_int(drawX),::Std_obj::_int(drawY),(int)0,g->font->fontScale,(int)0,false);
						HX_STACK_LINE(2234)
						g->font->font->drawText(g->graphics,g->drawData,null(),null());
					}
					HX_STACK_LINE(2235)
					{
						HX_STACK_LINE(2235)
						Float x1 = ((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("Grid Spacing")) * (int)4) - (int)25);		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(2235)
						if (((g->font == null()))){
							HX_STACK_LINE(2235)
							g->font = g->defaultFont;
						}
						HX_STACK_LINE(2235)
						Float drawX;		HX_STACK_VAR(drawX,"drawX");
						HX_STACK_LINE(2235)
						Float drawY;		HX_STACK_VAR(drawY,"drawY");
						HX_STACK_LINE(2235)
						if ((g->drawActor)){
							HX_STACK_LINE(2235)
							if (((bool((g->actor != null())) && bool(g->actor->isHUD)))){
								HX_STACK_LINE(2235)
								drawX = (g->x + (x1 * g->scaleX));
								HX_STACK_LINE(2235)
								drawY = (g->y + ((int)42 * g->scaleY));
							}
							else{
								HX_STACK_LINE(2235)
								drawX = ((g->x + (x1 * g->scaleX)) + ::com::stencyl::Engine_obj::cameraX);
								HX_STACK_LINE(2235)
								drawY = ((g->y + ((int)42 * g->scaleY)) + ::com::stencyl::Engine_obj::cameraY);
							}
						}
						else{
							HX_STACK_LINE(2235)
							drawX = (g->x + (x1 * g->scaleX));
							HX_STACK_LINE(2235)
							drawY = (g->y + ((int)42 * g->scaleY));
						}
						HX_STACK_LINE(2235)
						g->drawData->splice((int)0,g->drawData->length);
						HX_STACK_LINE(2235)
						g->font->font->render(g->drawData,(HX_CSTRING("") + (((HX_CSTRING("") + HX_CSTRING("Yellow:")) + ((HX_CSTRING("") + ::Std_obj::string(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("ColorMatch6")))))))),(int)0,g->alpha,::Std_obj::_int(drawX),::Std_obj::_int(drawY),(int)0,g->font->fontScale,(int)0,false);
						HX_STACK_LINE(2235)
						g->font->font->drawText(g->graphics,g->drawData,null(),null());
					}
					HX_STACK_LINE(2239)
					if ((!(((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_ScoreCounter == _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Score))))){

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_g)
						Void run(::com::stencyl::behavior::TimedTask timeTask){
							HX_STACK_PUSH("*::_Function_4_1","scripts/Design_3_3_SceneManager.hx",2241);
							HX_STACK_ARG(timeTask,"timeTask");
							{
								HX_STACK_LINE(2241)
								if ((!(((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_ScoreCounter == _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Score))))){
									HX_STACK_LINE(2244)
									hx::AddEq(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_ScoreCounter,(int)1);
									HX_STACK_LINE(2245)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_ScoreCounter"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_ScoreCounter);
								}
								else{
									HX_STACK_LINE(2248)
									if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_ScoreCounter == _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Score))){
										HX_STACK_LINE(2249)
										return null();
									}
								}
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						HX_STACK_LINE(2240)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->runPeriodically(100., Dynamic(new _Function_4_1(_g)),null());
					}
					HX_STACK_LINE(2256)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_DisplayText == true))){
						HX_STACK_LINE(2258)
						g->alpha = 1.;
						HX_STACK_LINE(2259)
						{
							HX_STACK_LINE(2259)
							if (((g->font == null()))){
								HX_STACK_LINE(2259)
								g->font = g->defaultFont;
							}
							HX_STACK_LINE(2259)
							Float drawX;		HX_STACK_VAR(drawX,"drawX");
							HX_STACK_LINE(2259)
							Float drawY;		HX_STACK_VAR(drawY,"drawY");
							HX_STACK_LINE(2259)
							if ((g->drawActor)){
								HX_STACK_LINE(2259)
								if (((bool((g->actor != null())) && bool(g->actor->isHUD)))){
									HX_STACK_LINE(2259)
									drawX = (g->x + ((int)32 * g->scaleX));
									HX_STACK_LINE(2259)
									drawY = (g->y + ((int)420 * g->scaleY));
								}
								else{
									HX_STACK_LINE(2259)
									drawX = ((g->x + ((int)32 * g->scaleX)) + ::com::stencyl::Engine_obj::cameraX);
									HX_STACK_LINE(2259)
									drawY = ((g->y + ((int)420 * g->scaleY)) + ::com::stencyl::Engine_obj::cameraY);
								}
							}
							else{
								HX_STACK_LINE(2259)
								drawX = (g->x + ((int)32 * g->scaleX));
								HX_STACK_LINE(2259)
								drawY = (g->y + ((int)420 * g->scaleY));
							}
							HX_STACK_LINE(2259)
							g->drawData->splice((int)0,g->drawData->length);
							HX_STACK_LINE(2259)
							g->font->font->render(g->drawData,(HX_CSTRING("") + (((HX_CSTRING("") + HX_CSTRING("ScoreTarget:")) + ((HX_CSTRING("") + ::Std_obj::string(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("ScoreTarget")))))))),(int)0,g->alpha,::Std_obj::_int(drawX),::Std_obj::_int(drawY),(int)0,g->font->fontScale,(int)0,false);
							HX_STACK_LINE(2259)
							g->font->font->drawText(g->graphics,g->drawData,null(),null());
						}
						HX_STACK_LINE(2260)
						{
							HX_STACK_LINE(2260)
							if (((g->font == null()))){
								HX_STACK_LINE(2260)
								g->font = g->defaultFont;
							}
							HX_STACK_LINE(2260)
							Float drawX;		HX_STACK_VAR(drawX,"drawX");
							HX_STACK_LINE(2260)
							Float drawY;		HX_STACK_VAR(drawY,"drawY");
							HX_STACK_LINE(2260)
							if ((g->drawActor)){
								HX_STACK_LINE(2260)
								if (((bool((g->actor != null())) && bool(g->actor->isHUD)))){
									HX_STACK_LINE(2260)
									drawX = (g->x + ((int)32 * g->scaleX));
									HX_STACK_LINE(2260)
									drawY = (g->y + ((int)440 * g->scaleY));
								}
								else{
									HX_STACK_LINE(2260)
									drawX = ((g->x + ((int)32 * g->scaleX)) + ::com::stencyl::Engine_obj::cameraX);
									HX_STACK_LINE(2260)
									drawY = ((g->y + ((int)440 * g->scaleY)) + ::com::stencyl::Engine_obj::cameraY);
								}
							}
							else{
								HX_STACK_LINE(2260)
								drawX = (g->x + ((int)32 * g->scaleX));
								HX_STACK_LINE(2260)
								drawY = (g->y + ((int)440 * g->scaleY));
							}
							HX_STACK_LINE(2260)
							g->drawData->splice((int)0,g->drawData->length);
							HX_STACK_LINE(2260)
							g->font->font->render(g->drawData,(HX_CSTRING("") + (((HX_CSTRING("") + HX_CSTRING("MovesTarget:")) + ((HX_CSTRING("") + ::Std_obj::string(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("MovesTarget")))))))),(int)0,g->alpha,::Std_obj::_int(drawX),::Std_obj::_int(drawY),(int)0,g->font->fontScale,(int)0,false);
							HX_STACK_LINE(2260)
							g->font->font->drawText(g->graphics,g->drawData,null(),null());
						}
						HX_STACK_LINE(2261)
						{
							HX_STACK_LINE(2261)
							if (((g->font == null()))){
								HX_STACK_LINE(2261)
								g->font = g->defaultFont;
							}
							HX_STACK_LINE(2261)
							Float drawX;		HX_STACK_VAR(drawX,"drawX");
							HX_STACK_LINE(2261)
							Float drawY;		HX_STACK_VAR(drawY,"drawY");
							HX_STACK_LINE(2261)
							if ((g->drawActor)){
								HX_STACK_LINE(2261)
								if (((bool((g->actor != null())) && bool(g->actor->isHUD)))){
									HX_STACK_LINE(2261)
									drawX = (g->x + ((int)32 * g->scaleX));
									HX_STACK_LINE(2261)
									drawY = (g->y + ((int)460 * g->scaleY));
								}
								else{
									HX_STACK_LINE(2261)
									drawX = ((g->x + ((int)32 * g->scaleX)) + ::com::stencyl::Engine_obj::cameraX);
									HX_STACK_LINE(2261)
									drawY = ((g->y + ((int)460 * g->scaleY)) + ::com::stencyl::Engine_obj::cameraY);
								}
							}
							else{
								HX_STACK_LINE(2261)
								drawX = (g->x + ((int)32 * g->scaleX));
								HX_STACK_LINE(2261)
								drawY = (g->y + ((int)460 * g->scaleY));
							}
							HX_STACK_LINE(2261)
							g->drawData->splice((int)0,g->drawData->length);
							HX_STACK_LINE(2261)
							g->font->font->render(g->drawData,(HX_CSTRING("") + (((HX_CSTRING("") + HX_CSTRING("GoScore:")) + ((HX_CSTRING("") + ((HX_CSTRING("") + ::Std_obj::string(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("ScoreInMoves")))))))))),(int)0,g->alpha,::Std_obj::_int(drawX),::Std_obj::_int(drawY),(int)0,g->font->fontScale,(int)0,false);
							HX_STACK_LINE(2261)
							g->font->font->drawText(g->graphics,g->drawData,null(),null());
						}
						HX_STACK_LINE(2262)
						{
							HX_STACK_LINE(2262)
							if (((g->font == null()))){
								HX_STACK_LINE(2262)
								g->font = g->defaultFont;
							}
							HX_STACK_LINE(2262)
							Float drawX;		HX_STACK_VAR(drawX,"drawX");
							HX_STACK_LINE(2262)
							Float drawY;		HX_STACK_VAR(drawY,"drawY");
							HX_STACK_LINE(2262)
							if ((g->drawActor)){
								HX_STACK_LINE(2262)
								if (((bool((g->actor != null())) && bool(g->actor->isHUD)))){
									HX_STACK_LINE(2262)
									drawX = (g->x + ((int)32 * g->scaleX));
									HX_STACK_LINE(2262)
									drawY = (g->y + ((int)480 * g->scaleY));
								}
								else{
									HX_STACK_LINE(2262)
									drawX = ((g->x + ((int)32 * g->scaleX)) + ::com::stencyl::Engine_obj::cameraX);
									HX_STACK_LINE(2262)
									drawY = ((g->y + ((int)480 * g->scaleY)) + ::com::stencyl::Engine_obj::cameraY);
								}
							}
							else{
								HX_STACK_LINE(2262)
								drawX = (g->x + ((int)32 * g->scaleX));
								HX_STACK_LINE(2262)
								drawY = (g->y + ((int)480 * g->scaleY));
							}
							HX_STACK_LINE(2262)
							g->drawData->splice((int)0,g->drawData->length);
							HX_STACK_LINE(2262)
							g->font->font->render(g->drawData,(HX_CSTRING("") + (((HX_CSTRING("") + HX_CSTRING("GoMoves:")) + ((HX_CSTRING("") + ((HX_CSTRING("") + ::Std_obj::string(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("ColorMatchInMoves")))))))))),(int)0,g->alpha,::Std_obj::_int(drawX),::Std_obj::_int(drawY),(int)0,g->font->fontScale,(int)0,false);
							HX_STACK_LINE(2262)
							g->font->font->drawText(g->graphics,g->drawData,null(),null());
						}
					}
					else{
						HX_STACK_LINE(2265)
						if ((!(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_DisplayText))){
							HX_STACK_LINE(2266)
							g->alpha = 0.;
						}
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC4((void))

		HX_STACK_LINE(2221)
		this->addWhenDrawingListener(null(), Dynamic(new _Function_1_27(_g)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_28,Array< ::Dynamic >,_g)
		Void run(Float elapsedTime,Dynamic list){
			HX_STACK_PUSH("*::_Function_1_28","scripts/Design_3_3_SceneManager.hx",2274);
			HX_STACK_ARG(elapsedTime,"elapsedTime");
			HX_STACK_ARG(list,"list");
			{
				HX_STACK_LINE(2274)
				if ((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->wrapper->enabled)){
					HX_STACK_LINE(2276)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("DIRECTION"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Direction);
					HX_STACK_LINE(2277)
					if ((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->isKeyPressed(HX_CSTRING("Key s")))){
						HX_STACK_LINE(2279)
						::haxe::Log_obj::trace((HX_CSTRING("") + ::Std_obj::string(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_GemType)),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),2279,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("init")));
						HX_STACK_LINE(2280)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_customEvent_Win();
					}
					HX_STACK_LINE(2283)
					if (((bool(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("TapMode"))) && bool(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapmodeFlag)))){
						HX_STACK_LINE(2284)
						if (((bool(!(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapOn)) && bool(((bool(!(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Win)) || bool(!(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Lose)))))))){
							HX_STACK_LINE(2287)
							_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_customEvent_TapMode();
							HX_STACK_LINE(2288)
							::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("Triggering Tapmode from always")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),2288,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("init")));
						}
						else{
						}
					}
					HX_STACK_LINE(2300)
					if ((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->isKeyPressed(HX_CSTRING("enter")))){
						HX_STACK_LINE(2302)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->stopAllSounds();
						HX_STACK_LINE(2303)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setValueForScene(HX_CSTRING("corpes"),HX_CSTRING("_NumberOnScreen"),(int)0);
						HX_STACK_LINE(2304)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("Moves Counter"),(int)0);
						HX_STACK_LINE(2305)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("ColorMatch1"),(int)0);
						HX_STACK_LINE(2306)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("ColorMatch2"),(int)0);
						HX_STACK_LINE(2307)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("ColorMatch3"),(int)0);
						HX_STACK_LINE(2308)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("ColorMatch4"),(int)0);
						HX_STACK_LINE(2309)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("ColorMatch5"),(int)0);
						HX_STACK_LINE(2310)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("ColorMatch6"),(int)0);
						HX_STACK_LINE(2311)
						{
							HX_STACK_LINE(2311)
							Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_AlreadySpawned;		HX_STACK_VAR(arr,"arr");
							HX_STACK_LINE(2311)
							arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
						}
						HX_STACK_LINE(2312)
						{
							HX_STACK_LINE(2312)
							Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_KillList;		HX_STACK_VAR(arr,"arr");
							HX_STACK_LINE(2312)
							arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
						}
						HX_STACK_LINE(2313)
						{
							HX_STACK_LINE(2313)
							Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_UID;		HX_STACK_VAR(arr,"arr");
							HX_STACK_LINE(2313)
							arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
						}
						HX_STACK_LINE(2314)
						{
							HX_STACK_LINE(2314)
							Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_GemType;		HX_STACK_VAR(arr,"arr");
							HX_STACK_LINE(2314)
							arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
						}
						HX_STACK_LINE(2315)
						{
							HX_STACK_LINE(2315)
							Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_DrawOrder;		HX_STACK_VAR(arr,"arr");
							HX_STACK_LINE(2315)
							arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
						}
						HX_STACK_LINE(2316)
						{
							HX_STACK_LINE(2316)
							Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_BeaterSpawn;		HX_STACK_VAR(arr,"arr");
							HX_STACK_LINE(2316)
							arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
						}
						HX_STACK_LINE(2317)
						{
							HX_STACK_LINE(2317)
							Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_HintList;		HX_STACK_VAR(arr,"arr");
							HX_STACK_LINE(2317)
							arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
						}
						HX_STACK_LINE(2318)
						{
							HX_STACK_LINE(2318)
							Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TileList;		HX_STACK_VAR(arr,"arr");
							HX_STACK_LINE(2318)
							arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
						}
						HX_STACK_LINE(2319)
						{
							HX_STACK_LINE(2319)
							Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_UIDCOPY;		HX_STACK_VAR(arr,"arr");
							HX_STACK_LINE(2319)
							arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
						}
						HX_STACK_LINE(2320)
						{
							HX_STACK_LINE(2320)
							Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("BPS"));		HX_STACK_VAR(arr,"arr");
							HX_STACK_LINE(2320)
							arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
						}
						HX_STACK_LINE(2321)
						{
							HX_STACK_LINE(2321)
							Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("HintList"));		HX_STACK_VAR(arr,"arr");
							HX_STACK_LINE(2321)
							arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
						}
						HX_STACK_LINE(2322)
						{
							HX_STACK_LINE(2322)
							Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("KillList"));		HX_STACK_VAR(arr,"arr");
							HX_STACK_LINE(2322)
							arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
						}
						HX_STACK_LINE(2323)
						{
							HX_STACK_LINE(2323)
							Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpecialListBomb;		HX_STACK_VAR(arr,"arr");
							HX_STACK_LINE(2323)
							arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
						}
						HX_STACK_LINE(2324)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("RegionCreated?"),false);
						HX_STACK_LINE(2325)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->disableBehaviorForScene(HX_CSTRING("Metronome"));
						HX_STACK_LINE(2326)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->reloadCurrentScene(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->createFadeOut((int)1,null()),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->createFadeIn((int)1,null()));
					}
					HX_STACK_LINE(2329)
					{
						HX_STACK_LINE(2329)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						Array< ::Dynamic > _g2 = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActorsOfType(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActorType((int)2));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(2329)
						while(((_g1 < _g2->length))){
							HX_STACK_LINE(2329)
							::com::stencyl::models::Actor actorOfType = _g2->__get(_g1).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actorOfType,"actorOfType");
							HX_STACK_LINE(2329)
							++(_g1);
							HX_STACK_LINE(2331)
							if (((bool((bool((actorOfType != null())) && bool(!(actorOfType->dead)))) && bool(!(actorOfType->recycled))))){
								HX_STACK_LINE(2331)
								if ((actorOfType->isMousePressed())){
									HX_STACK_LINE(2339)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->stopAllSounds();
									HX_STACK_LINE(2340)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setValueForScene(HX_CSTRING("corpes"),HX_CSTRING("_NumberOnScreen"),(int)0);
									HX_STACK_LINE(2341)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("Moves Counter"),(int)0);
									HX_STACK_LINE(2342)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("ColorMatch1"),(int)0);
									HX_STACK_LINE(2343)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("ColorMatch2"),(int)0);
									HX_STACK_LINE(2344)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("ColorMatch3"),(int)0);
									HX_STACK_LINE(2345)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("ColorMatch4"),(int)0);
									HX_STACK_LINE(2346)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("ColorMatch5"),(int)0);
									HX_STACK_LINE(2347)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("ColorMatch6"),(int)0);
									HX_STACK_LINE(2348)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("RegionCreated?"),false);
									HX_STACK_LINE(2349)
									{
										HX_STACK_LINE(2349)
										Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_AlreadySpawned;		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(2349)
										arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
									}
									HX_STACK_LINE(2350)
									{
										HX_STACK_LINE(2350)
										Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_KillList;		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(2350)
										arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
									}
									HX_STACK_LINE(2351)
									{
										HX_STACK_LINE(2351)
										Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_UID;		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(2351)
										arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
									}
									HX_STACK_LINE(2352)
									{
										HX_STACK_LINE(2352)
										Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_GemType;		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(2352)
										arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
									}
									HX_STACK_LINE(2353)
									{
										HX_STACK_LINE(2353)
										Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_DrawOrder;		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(2353)
										arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
									}
									HX_STACK_LINE(2354)
									{
										HX_STACK_LINE(2354)
										Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_BeaterSpawn;		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(2354)
										arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
									}
									HX_STACK_LINE(2355)
									{
										HX_STACK_LINE(2355)
										Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_HintList;		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(2355)
										arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
									}
									HX_STACK_LINE(2356)
									{
										HX_STACK_LINE(2356)
										Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TileList;		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(2356)
										arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
									}
									HX_STACK_LINE(2357)
									{
										HX_STACK_LINE(2357)
										Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_UIDCOPY;		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(2357)
										arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
									}
									HX_STACK_LINE(2358)
									{
										HX_STACK_LINE(2358)
										Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("BPS"));		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(2358)
										arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
									}
									HX_STACK_LINE(2359)
									{
										HX_STACK_LINE(2359)
										Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("HintList"));		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(2359)
										arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
									}
									HX_STACK_LINE(2360)
									{
										HX_STACK_LINE(2360)
										Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("KillList"));		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(2360)
										arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
									}
									HX_STACK_LINE(2361)
									{
										HX_STACK_LINE(2361)
										Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpecialListBomb;		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(2361)
										arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
									}
									HX_STACK_LINE(2362)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_MusicManager = false;
									HX_STACK_LINE(2363)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_MusicManager"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_MusicManager);
									HX_STACK_LINE(2364)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("SoundManager"),(int)0);
									HX_STACK_LINE(2365)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->disableBehaviorForScene(HX_CSTRING("Metronome"));
									HX_STACK_LINE(2366)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->switchScene(::com::stencyl::models::GameModel_obj::get()->scenes->get((int)3)->__Field(HX_CSTRING("getID"),true)(),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->createFadeOut((int)1,null()),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->createFadeIn((int)1,null()));
								}
							}
						}
					}
					HX_STACK_LINE(2373)
					if (((bool(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->isKeyPressed(HX_CSTRING("action2"))) && bool(!(((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("Swapping?")) == true))))))){
						HX_STACK_LINE(2374)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_customEvent_Check();
					}
					HX_STACK_LINE(2378)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_BeaterCombo == (int)0))){
						struct _Function_4_1{
							inline static int Block( ){
								HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2380);
								{
									HX_STACK_LINE(2380)
									return (  ((hx::TCast< Bool >::cast((int)1))) ? int((int)1) : int((int)0) );
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static int Block( ){
								HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2380);
								{
									HX_STACK_LINE(2380)
									::haxe::Log_obj::trace((HX_CSTRING("1") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
									HX_STACK_LINE(2380)
									return (int)0;
								}
								return null();
							}
						};
						HX_STACK_LINE(2380)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_BeaterCombo = (  ((::Std_obj::is((int)1,hx::ClassOf< ::Float >()))) ? Float((int)1) : Float((  ((::Std_obj::is((int)1,hx::ClassOf< ::Int >()))) ? Float((int)1) : Float((  ((::Std_obj::is((int)1,hx::ClassOf< ::Bool >()))) ? Float(_Function_4_1::Block()) : Float((  ((::Std_obj::is((int)1,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)1)) : Float(_Function_4_2::Block()) )) )) )) );
						HX_STACK_LINE(2381)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_BeaterCombo"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_BeaterCombo);
					}
					HX_STACK_LINE(2384)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("BeaterCombo")) >= (int)5))){
						HX_STACK_LINE(2385)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("BeaterCombo"),(int)1);
					}
					HX_STACK_LINE(2389)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("BeaterCombo")) == (int)0))){
						HX_STACK_LINE(2390)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("BeaterCombo"),(int)1);
					}
					HX_STACK_LINE(2395)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_IdleTime >= (int)5))){

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_g)
						Void run(::com::stencyl::behavior::TimedTask timeTask){
							HX_STACK_PUSH("*::_Function_4_1","scripts/Design_3_3_SceneManager.hx",2397);
							HX_STACK_ARG(timeTask,"timeTask");
							{
								HX_STACK_LINE(2397)
								if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameTempo")) > _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_GameTempo))){
									HX_STACK_LINE(2399)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("GameTempo"),(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameTempo")) - (int)1));
								}
								else{
									HX_STACK_LINE(2405)
									timeTask->repeats = false;
									HX_STACK_LINE(2406)
									return null();
								}
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						HX_STACK_LINE(2397)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->runPeriodically(((int)1000 * ((Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_GameTempo)))), Dynamic(new _Function_4_1(_g)),null());
						struct _Function_4_2{
							inline static int Block( ){
								HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2411);
								{
									HX_STACK_LINE(2411)
									return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
								}
								return null();
							}
						};
						struct _Function_4_3{
							inline static int Block( ){
								HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2411);
								{
									HX_STACK_LINE(2411)
									::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
									HX_STACK_LINE(2411)
									return (int)0;
								}
								return null();
							}
						};
						HX_STACK_LINE(2411)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_IdleTime = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_4_2::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_4_3::Block()) )) )) )) );
						HX_STACK_LINE(2412)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_IdleTime"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_IdleTime);
					}
					HX_STACK_LINE(2415)
					if (((bool((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("SoundManager")) >= (int)5)) && bool(!(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_MusicManager))))){
						HX_STACK_LINE(2417)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_MusicManager = true;
						HX_STACK_LINE(2418)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_MusicManager"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_MusicManager);
						HX_STACK_LINE(2419)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_customEvent_MusicManager();
						HX_STACK_LINE(2420)
						::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("triggeringMM")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),2420,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("init")));
					}
					HX_STACK_LINE(2423)
					if (((bool(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Win) || bool(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Lose)))){
						HX_STACK_LINE(2425)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_EndLevel = true;
						HX_STACK_LINE(2426)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_EndLevel"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_EndLevel);

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_g)
						Void run(::com::stencyl::behavior::TimedTask timeTask){
							HX_STACK_PUSH("*::_Function_4_1","scripts/Design_3_3_SceneManager.hx",2427);
							HX_STACK_ARG(timeTask,"timeTask");
							{
								HX_STACK_LINE(2427)
								if ((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->isMousePressed())){
									HX_STACK_LINE(2430)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Win = false;
									HX_STACK_LINE(2431)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_Win"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Win);
									HX_STACK_LINE(2432)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Lose = false;
									HX_STACK_LINE(2433)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_Lose"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Lose);
									HX_STACK_LINE(2434)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setValueForScene(HX_CSTRING("Metronome"),HX_CSTRING("_TimeStart"),(int)0);
									HX_STACK_LINE(2435)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setValueForScene(HX_CSTRING("Metronome"),HX_CSTRING("_CurrentTime"),(int)0);
									HX_STACK_LINE(2436)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setValueForScene(HX_CSTRING("Metronome"),HX_CSTRING("_BeatCheck"),(int)0);
									HX_STACK_LINE(2437)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setValueForScene(HX_CSTRING("Metronome"),HX_CSTRING("_TimeElapsed"),(int)0);
									HX_STACK_LINE(2443)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->stopAllSounds();
									HX_STACK_LINE(2444)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setValueForScene(HX_CSTRING("corpes"),HX_CSTRING("_NumberOnScreen"),(int)0);
									HX_STACK_LINE(2445)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("Moves Counter"),(int)0);
									HX_STACK_LINE(2446)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("ColorMatch1"),(int)0);
									HX_STACK_LINE(2447)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("ColorMatch2"),(int)0);
									HX_STACK_LINE(2448)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("ColorMatch3"),(int)0);
									HX_STACK_LINE(2449)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("ColorMatch4"),(int)0);
									HX_STACK_LINE(2450)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("ColorMatch5"),(int)0);
									HX_STACK_LINE(2451)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("ColorMatch6"),(int)0);
									HX_STACK_LINE(2452)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("RegionCreated?"),false);
									HX_STACK_LINE(2453)
									{
										HX_STACK_LINE(2453)
										Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_AlreadySpawned;		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(2453)
										arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
									}
									HX_STACK_LINE(2454)
									{
										HX_STACK_LINE(2454)
										Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_KillList;		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(2454)
										arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
									}
									HX_STACK_LINE(2455)
									{
										HX_STACK_LINE(2455)
										Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_UID;		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(2455)
										arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
									}
									HX_STACK_LINE(2456)
									{
										HX_STACK_LINE(2456)
										Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_GemType;		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(2456)
										arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
									}
									HX_STACK_LINE(2457)
									{
										HX_STACK_LINE(2457)
										Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_DrawOrder;		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(2457)
										arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
									}
									HX_STACK_LINE(2458)
									{
										HX_STACK_LINE(2458)
										Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_BeaterSpawn;		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(2458)
										arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
									}
									HX_STACK_LINE(2459)
									{
										HX_STACK_LINE(2459)
										Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_HintList;		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(2459)
										arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
									}
									HX_STACK_LINE(2460)
									{
										HX_STACK_LINE(2460)
										Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TileList;		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(2460)
										arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
									}
									HX_STACK_LINE(2461)
									{
										HX_STACK_LINE(2461)
										Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_UIDCOPY;		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(2461)
										arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
									}
									HX_STACK_LINE(2462)
									{
										HX_STACK_LINE(2462)
										Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("BPS"));		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(2462)
										arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
									}
									HX_STACK_LINE(2463)
									{
										HX_STACK_LINE(2463)
										Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("HintList"));		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(2463)
										arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
									}
									HX_STACK_LINE(2464)
									{
										HX_STACK_LINE(2464)
										Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("KillList"));		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(2464)
										arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
									}
									HX_STACK_LINE(2465)
									{
										HX_STACK_LINE(2465)
										Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpecialListBomb;		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(2465)
										arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
									}
									HX_STACK_LINE(2466)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_MusicManager = false;
									HX_STACK_LINE(2467)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_MusicManager"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_MusicManager);
									HX_STACK_LINE(2468)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_EndLevel = false;
									HX_STACK_LINE(2469)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_EndLevel"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_EndLevel);
									HX_STACK_LINE(2470)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("SoundManager"),(int)0);
									HX_STACK_LINE(2471)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->disableBehaviorForScene(HX_CSTRING("Metronome"));
									HX_STACK_LINE(2472)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->clearImage(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->captureScreenshot());
									HX_STACK_LINE(2473)
									if ((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->isMousePressed())){
										HX_STACK_LINE(2475)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Win = false;
										HX_STACK_LINE(2476)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_Win"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Win);
										HX_STACK_LINE(2477)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Lose = false;
										HX_STACK_LINE(2478)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_Lose"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Lose);
										HX_STACK_LINE(2479)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setValueForScene(HX_CSTRING("Metronome"),HX_CSTRING("_TimeStart"),(int)0);
										HX_STACK_LINE(2480)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setValueForScene(HX_CSTRING("Metronome"),HX_CSTRING("_CurrentTime"),(int)0);
										HX_STACK_LINE(2481)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setValueForScene(HX_CSTRING("Metronome"),HX_CSTRING("_BeatCheck"),(int)0);
										HX_STACK_LINE(2482)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setValueForScene(HX_CSTRING("Metronome"),HX_CSTRING("_TimeElapsed"),(int)0);
										HX_STACK_LINE(2488)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->stopAllSounds();
										HX_STACK_LINE(2489)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setValueForScene(HX_CSTRING("corpes"),HX_CSTRING("_NumberOnScreen"),(int)0);
										HX_STACK_LINE(2490)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("Moves Counter"),(int)0);
										HX_STACK_LINE(2491)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("ColorMatch1"),(int)0);
										HX_STACK_LINE(2492)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("ColorMatch2"),(int)0);
										HX_STACK_LINE(2493)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("ColorMatch3"),(int)0);
										HX_STACK_LINE(2494)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("ColorMatch4"),(int)0);
										HX_STACK_LINE(2495)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("ColorMatch5"),(int)0);
										HX_STACK_LINE(2496)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("ColorMatch6"),(int)0);
										HX_STACK_LINE(2497)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("RegionCreated?"),false);
										HX_STACK_LINE(2498)
										{
											HX_STACK_LINE(2498)
											Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_AlreadySpawned;		HX_STACK_VAR(arr,"arr");
											HX_STACK_LINE(2498)
											arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
										}
										HX_STACK_LINE(2499)
										{
											HX_STACK_LINE(2499)
											Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_KillList;		HX_STACK_VAR(arr,"arr");
											HX_STACK_LINE(2499)
											arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
										}
										HX_STACK_LINE(2500)
										{
											HX_STACK_LINE(2500)
											Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_UID;		HX_STACK_VAR(arr,"arr");
											HX_STACK_LINE(2500)
											arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
										}
										HX_STACK_LINE(2501)
										{
											HX_STACK_LINE(2501)
											Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_GemType;		HX_STACK_VAR(arr,"arr");
											HX_STACK_LINE(2501)
											arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
										}
										HX_STACK_LINE(2502)
										{
											HX_STACK_LINE(2502)
											Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_DrawOrder;		HX_STACK_VAR(arr,"arr");
											HX_STACK_LINE(2502)
											arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
										}
										HX_STACK_LINE(2503)
										{
											HX_STACK_LINE(2503)
											Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_BeaterSpawn;		HX_STACK_VAR(arr,"arr");
											HX_STACK_LINE(2503)
											arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
										}
										HX_STACK_LINE(2504)
										{
											HX_STACK_LINE(2504)
											Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_HintList;		HX_STACK_VAR(arr,"arr");
											HX_STACK_LINE(2504)
											arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
										}
										HX_STACK_LINE(2505)
										{
											HX_STACK_LINE(2505)
											Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TileList;		HX_STACK_VAR(arr,"arr");
											HX_STACK_LINE(2505)
											arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
										}
										HX_STACK_LINE(2506)
										{
											HX_STACK_LINE(2506)
											Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_UIDCOPY;		HX_STACK_VAR(arr,"arr");
											HX_STACK_LINE(2506)
											arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
										}
										HX_STACK_LINE(2507)
										{
											HX_STACK_LINE(2507)
											Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("BPS"));		HX_STACK_VAR(arr,"arr");
											HX_STACK_LINE(2507)
											arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
										}
										HX_STACK_LINE(2508)
										{
											HX_STACK_LINE(2508)
											Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("HintList"));		HX_STACK_VAR(arr,"arr");
											HX_STACK_LINE(2508)
											arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
										}
										HX_STACK_LINE(2509)
										{
											HX_STACK_LINE(2509)
											Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("KillList"));		HX_STACK_VAR(arr,"arr");
											HX_STACK_LINE(2509)
											arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
										}
										HX_STACK_LINE(2510)
										{
											HX_STACK_LINE(2510)
											Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpecialListBomb;		HX_STACK_VAR(arr,"arr");
											HX_STACK_LINE(2510)
											arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
										}
										HX_STACK_LINE(2511)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_MusicManager = false;
										HX_STACK_LINE(2512)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_MusicManager"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_MusicManager);
										HX_STACK_LINE(2513)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("SoundManager"),(int)0);
										HX_STACK_LINE(2514)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->disableBehaviorForScene(HX_CSTRING("Metronome"));
										HX_STACK_LINE(2515)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->switchScene(::com::stencyl::models::GameModel_obj::get()->scenes->get((int)1)->__Field(HX_CSTRING("getID"),true)(),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->createFadeOut((int)1,null()),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->createFadeIn((int)1,null()));
									}
									HX_STACK_LINE(2518)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->switchScene(::com::stencyl::models::GameModel_obj::get()->scenes->get((int)1)->__Field(HX_CSTRING("getID"),true)(),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->createFadeOut((int)1,null()),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->createFadeIn((int)1,null()));
								}
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						HX_STACK_LINE(2427)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->runLater((int)3000, Dynamic(new _Function_4_1(_g)),null());
					}
					HX_STACK_LINE(2524)
					if ((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Cursor->isMousePressed())){
						HX_STACK_LINE(2525)
						if ((!(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_DisplayText))){
							HX_STACK_LINE(2528)
							_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_DisplayText = true;
							HX_STACK_LINE(2529)
							_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_DisplayText"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_DisplayText);
						}
						else{
							HX_STACK_LINE(2534)
							_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_DisplayText = false;
							HX_STACK_LINE(2535)
							_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_DisplayText"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_DisplayText);
						}
					}
					HX_STACK_LINE(2540)
					if (((bool((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("Moves Counter")) >= (int)1)) && bool(((bool(!(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_CreateWorm)) && bool(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_MusicManager))))))){
						HX_STACK_LINE(2542)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_CreateWorm = true;
						HX_STACK_LINE(2543)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_CreateWorm"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_CreateWorm);
						HX_STACK_LINE(2544)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_customEvent_WormHole();
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(2274)
		this->addWhenUpdatedListener(null(), Dynamic(new _Function_1_28(_g)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_29,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::models::Actor eventActor,Dynamic list){
			HX_STACK_PUSH("*::_Function_1_29","scripts/Design_3_3_SceneManager.hx",2551);
			HX_STACK_ARG(eventActor,"eventActor");
			HX_STACK_ARG(list,"list");
			{
				HX_STACK_LINE(2551)
				if ((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->wrapper->enabled)){
					HX_STACK_LINE(2552)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("BeaterCombo"),(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("BeaterCombo")) - (int)1));
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(2551)
		this->addWhenTypeGroupKilledListener(this->getActorType((int)58), Dynamic(new _Function_1_29(_g)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_30,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::models::Actor eventActor,Dynamic list){
			HX_STACK_PUSH("*::_Function_1_30","scripts/Design_3_3_SceneManager.hx",2558);
			HX_STACK_ARG(eventActor,"eventActor");
			HX_STACK_ARG(list,"list");
			{
				HX_STACK_LINE(2558)
				if ((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->wrapper->enabled)){
					HX_STACK_LINE(2560)
					if (((eventActor->getValue(HX_CSTRING("CombotxtLife"),HX_CSTRING("_combonumber")) == (int)1))){
						HX_STACK_LINE(2562)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->createRecycledActor(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActorType((int)119),(Float(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSceneWidth()) / Float((int)2)),(int)64,::com::stencyl::behavior::Script_obj::FRONT);
						HX_STACK_LINE(2563)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getLastCreatedActor()->setValue(HX_CSTRING("ComboShoutss"),HX_CSTRING("_combonumber"),(int)0);
					}
					HX_STACK_LINE(2566)
					if (((eventActor->getValue(HX_CSTRING("CombotxtLife"),HX_CSTRING("_combonumber")) == (int)2))){

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_g)
						Void run(::com::stencyl::behavior::TimedTask timeTask){
							HX_STACK_PUSH("*::_Function_4_1","scripts/Design_3_3_SceneManager.hx",2568);
							HX_STACK_ARG(timeTask,"timeTask");
							{
								HX_STACK_LINE(2569)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->createRecycledActor(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActorType((int)119),(Float(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSceneWidth()) / Float((int)2)),(int)64,::com::stencyl::behavior::Script_obj::FRONT);
								HX_STACK_LINE(2570)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getLastCreatedActor()->setValue(HX_CSTRING("ComboShoutss"),HX_CSTRING("_combonumber"),(int)1);
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						HX_STACK_LINE(2567)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->runLater(((int)1000 * ((Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameTempo")))))), Dynamic(new _Function_4_1(_g)),null());
					}
					HX_STACK_LINE(2575)
					if (((eventActor->getValue(HX_CSTRING("CombotxtLife"),HX_CSTRING("_combonumber")) == (int)3))){

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_g)
						Void run(::com::stencyl::behavior::TimedTask timeTask){
							HX_STACK_PUSH("*::_Function_4_1","scripts/Design_3_3_SceneManager.hx",2577);
							HX_STACK_ARG(timeTask,"timeTask");
							{
								HX_STACK_LINE(2578)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->createRecycledActor(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActorType((int)119),(Float(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSceneWidth()) / Float((int)2)),(int)64,::com::stencyl::behavior::Script_obj::FRONT);
								HX_STACK_LINE(2579)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getLastCreatedActor()->setValue(HX_CSTRING("ComboShoutss"),HX_CSTRING("_combonumber"),(int)2);
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						HX_STACK_LINE(2576)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->runLater(((int)1000 * (((Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameTempo")))) * (int)2))), Dynamic(new _Function_4_1(_g)),null());
					}
					HX_STACK_LINE(2584)
					if (((eventActor->getValue(HX_CSTRING("CombotxtLife"),HX_CSTRING("_combonumber")) == (int)4))){

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_g)
						Void run(::com::stencyl::behavior::TimedTask timeTask){
							HX_STACK_PUSH("*::_Function_4_1","scripts/Design_3_3_SceneManager.hx",2586);
							HX_STACK_ARG(timeTask,"timeTask");
							{
								HX_STACK_LINE(2587)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->createRecycledActor(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActorType((int)119),(Float(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSceneWidth()) / Float((int)2)),(int)64,::com::stencyl::behavior::Script_obj::FRONT);
								HX_STACK_LINE(2588)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getLastCreatedActor()->setValue(HX_CSTRING("ComboShoutss"),HX_CSTRING("_combonumber"),(int)3);
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						HX_STACK_LINE(2585)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->runLater(((int)1000 * (((Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameTempo")))) * (int)3))), Dynamic(new _Function_4_1(_g)),null());
					}
					HX_STACK_LINE(2593)
					if (((eventActor->getValue(HX_CSTRING("CombotxtLife"),HX_CSTRING("_combonumber")) >= (int)7))){

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_g)
						Void run(::com::stencyl::behavior::TimedTask timeTask){
							HX_STACK_PUSH("*::_Function_4_1","scripts/Design_3_3_SceneManager.hx",2595);
							HX_STACK_ARG(timeTask,"timeTask");
							{
								HX_STACK_LINE(2596)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->createRecycledActor(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActorType((int)119),(Float(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSceneWidth()) / Float((int)2)),(int)64,::com::stencyl::behavior::Script_obj::FRONT);
								HX_STACK_LINE(2597)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getLastCreatedActor()->setValue(HX_CSTRING("ComboShoutss"),HX_CSTRING("_combonumber"),(int)3);
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						HX_STACK_LINE(2594)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->runLater(((int)1000 * (((Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameTempo")))) * (int)4))), Dynamic(new _Function_4_1(_g)),null());
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(2558)
		this->addWhenTypeGroupKilledListener(this->getActorType((int)105), Dynamic(new _Function_1_30(_g)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_31,Array< ::Dynamic >,_g)
		Void run(Dynamic list){
			HX_STACK_PUSH("*::_Function_1_31","scripts/Design_3_3_SceneManager.hx",2606);
			HX_STACK_ARG(list,"list");
			{
				HX_STACK_LINE(2606)
				if (((bool(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->wrapper->enabled) && bool(::com::stencyl::Input_obj::swipedUp)))){
					HX_STACK_LINE(2608)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setScrollSpeedForBackground((int)0,(int)-1,null());
					struct _Function_3_1{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2609);
							{
								HX_STACK_LINE(2609)
								return (  ((hx::TCast< Bool >::cast((int)1))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2609);
							{
								HX_STACK_LINE(2609)
								::haxe::Log_obj::trace((HX_CSTRING("1") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(2609)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(2609)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Direction = (  ((::Std_obj::is((int)1,hx::ClassOf< ::Float >()))) ? Float((int)1) : Float((  ((::Std_obj::is((int)1,hx::ClassOf< ::Int >()))) ? Float((int)1) : Float((  ((::Std_obj::is((int)1,hx::ClassOf< ::Bool >()))) ? Float(_Function_3_1::Block()) : Float((  ((::Std_obj::is((int)1,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)1)) : Float(_Function_3_2::Block()) )) )) )) );
					HX_STACK_LINE(2610)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_Direction"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Direction);
					HX_STACK_LINE(2611)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("DIRECTION"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Direction);
					HX_STACK_LINE(2612)
					return null();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(2606)
		this->addSwipeListener( Dynamic(new _Function_1_31(_g)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_32,Array< ::Dynamic >,_g)
		Void run(Dynamic list){
			HX_STACK_PUSH("*::_Function_1_32","scripts/Design_3_3_SceneManager.hx",2617);
			HX_STACK_ARG(list,"list");
			{
				HX_STACK_LINE(2617)
				if (((bool(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->wrapper->enabled) && bool(::com::stencyl::Input_obj::swipedDown)))){
					HX_STACK_LINE(2619)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setScrollSpeedForBackground((int)0,(int)1,null());
					struct _Function_3_1{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2620);
							{
								HX_STACK_LINE(2620)
								return (  ((hx::TCast< Bool >::cast((int)2))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2620);
							{
								HX_STACK_LINE(2620)
								::haxe::Log_obj::trace((HX_CSTRING("2") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(2620)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(2620)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Direction = (  ((::Std_obj::is((int)2,hx::ClassOf< ::Float >()))) ? Float((int)2) : Float((  ((::Std_obj::is((int)2,hx::ClassOf< ::Int >()))) ? Float((int)2) : Float((  ((::Std_obj::is((int)2,hx::ClassOf< ::Bool >()))) ? Float(_Function_3_1::Block()) : Float((  ((::Std_obj::is((int)2,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)2)) : Float(_Function_3_2::Block()) )) )) )) );
					HX_STACK_LINE(2621)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_Direction"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Direction);
					HX_STACK_LINE(2622)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("DIRECTION"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Direction);
					HX_STACK_LINE(2623)
					return null();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(2617)
		this->addSwipeListener( Dynamic(new _Function_1_32(_g)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_33,Array< ::Dynamic >,_g)
		Void run(Dynamic list){
			HX_STACK_PUSH("*::_Function_1_33","scripts/Design_3_3_SceneManager.hx",2628);
			HX_STACK_ARG(list,"list");
			{
				HX_STACK_LINE(2628)
				if (((bool(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->wrapper->enabled) && bool(::com::stencyl::Input_obj::swipedLeft)))){
					HX_STACK_LINE(2630)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setScrollSpeedForBackground((int)-1,(int)0,null());
					struct _Function_3_1{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2631);
							{
								HX_STACK_LINE(2631)
								return (  ((hx::TCast< Bool >::cast((int)3))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2631);
							{
								HX_STACK_LINE(2631)
								::haxe::Log_obj::trace((HX_CSTRING("3") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(2631)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(2631)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Direction = (  ((::Std_obj::is((int)3,hx::ClassOf< ::Float >()))) ? Float((int)3) : Float((  ((::Std_obj::is((int)3,hx::ClassOf< ::Int >()))) ? Float((int)3) : Float((  ((::Std_obj::is((int)3,hx::ClassOf< ::Bool >()))) ? Float(_Function_3_1::Block()) : Float((  ((::Std_obj::is((int)3,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)3)) : Float(_Function_3_2::Block()) )) )) )) );
					HX_STACK_LINE(2632)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_Direction"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Direction);
					HX_STACK_LINE(2633)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("DIRECTION"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Direction);
					HX_STACK_LINE(2634)
					return null();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(2628)
		this->addSwipeListener( Dynamic(new _Function_1_33(_g)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_34,Array< ::Dynamic >,_g)
		Void run(Dynamic list){
			HX_STACK_PUSH("*::_Function_1_34","scripts/Design_3_3_SceneManager.hx",2639);
			HX_STACK_ARG(list,"list");
			{
				HX_STACK_LINE(2639)
				if (((bool(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->wrapper->enabled) && bool(::com::stencyl::Input_obj::swipedRight)))){
					HX_STACK_LINE(2641)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setScrollSpeedForBackground((int)1,(int)0,null());
					struct _Function_3_1{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2642);
							{
								HX_STACK_LINE(2642)
								return (  ((hx::TCast< Bool >::cast((int)4))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2642);
							{
								HX_STACK_LINE(2642)
								::haxe::Log_obj::trace((HX_CSTRING("4") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(2642)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(2642)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Direction = (  ((::Std_obj::is((int)4,hx::ClassOf< ::Float >()))) ? Float((int)4) : Float((  ((::Std_obj::is((int)4,hx::ClassOf< ::Int >()))) ? Float((int)4) : Float((  ((::Std_obj::is((int)4,hx::ClassOf< ::Bool >()))) ? Float(_Function_3_1::Block()) : Float((  ((::Std_obj::is((int)4,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)4)) : Float(_Function_3_2::Block()) )) )) )) );
					HX_STACK_LINE(2643)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_Direction"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Direction);
					HX_STACK_LINE(2644)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("DIRECTION"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Direction);
					HX_STACK_LINE(2645)
					return null();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(2639)
		this->addSwipeListener( Dynamic(new _Function_1_34(_g)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_35,Array< ::Dynamic >,_g)
		Void run(Dynamic property,Dynamic list){
			HX_STACK_PUSH("*::_Function_1_35","scripts/Design_3_3_SceneManager.hx",2650);
			HX_STACK_ARG(property,"property");
			HX_STACK_ARG(list,"list");
			{
				HX_STACK_LINE(2650)
				if (((bool(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->wrapper->enabled) && bool((hx::TCast< Bool >::cast(property) == true))))){
					struct _Function_3_1{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2652);
							{
								HX_STACK_LINE(2652)
								return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2652);
							{
								HX_STACK_LINE(2652)
								::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(2652)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(2652)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapTime = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_3_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_3_2::Block()) )) )) )) );
					HX_STACK_LINE(2653)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_TapTime"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapTime);
					HX_STACK_LINE(2654)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_ComboBrokenFlag = false;
					HX_STACK_LINE(2655)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_ComboBrokenFlag"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_ComboBrokenFlag);

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_3,Array< ::Dynamic >,_g)
					Void run(::com::stencyl::behavior::TimedTask timeTask){
						HX_STACK_PUSH("*::_Function_3_3","scripts/Design_3_3_SceneManager.hx",2656);
						HX_STACK_ARG(timeTask,"timeTask");
						{
							HX_STACK_LINE(2657)
							if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapTime >= (int)3))){
								HX_STACK_LINE(2659)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_ComboBrokenFlag = true;
								HX_STACK_LINE(2660)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_ComboBrokenFlag"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_ComboBrokenFlag);
								HX_STACK_LINE(2661)
								::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("ComboBrokenTimeUp")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),2661,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("init")));
								HX_STACK_LINE(2662)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("intapmode"),false);
								HX_STACK_LINE(2663)
								timeTask->repeats = false;
								HX_STACK_LINE(2664)
								return null();
							}
							HX_STACK_LINE(2667)
							if ((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Swapping)){
								HX_STACK_LINE(2669)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_ComboBrokenFlag = true;
								HX_STACK_LINE(2670)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_ComboBrokenFlag"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_ComboBrokenFlag);
								HX_STACK_LINE(2671)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("intapmode"),false);
								HX_STACK_LINE(2672)
								::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("ComboBrokenSwappingNow")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),2672,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("init")));
								HX_STACK_LINE(2673)
								timeTask->repeats = false;
								HX_STACK_LINE(2674)
								return null();
							}
							struct _Function_4_1{
								inline static Float Block( Array< ::Dynamic > &_g){
									HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2677);
									{
										HX_STACK_LINE(2677)
										Dynamic o = (_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapTime + 0.1);		HX_STACK_VAR(o,"o");
										struct _Function_5_1{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2677);
												{
													HX_STACK_LINE(2677)
													return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
												}
												return null();
											}
										};
										struct _Function_5_2{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",2677);
												{
													HX_STACK_LINE(2677)
													::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
													HX_STACK_LINE(2677)
													return (int)0;
												}
												return null();
											}
										};
										HX_STACK_LINE(2677)
										return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_5_2::Block(o)) )) )) )) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(2677)
							_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapTime = _Function_4_1::Block(_g);
							HX_STACK_LINE(2678)
							_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_TapTime"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapTime);
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(2656)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->runPeriodically(100., Dynamic(new _Function_3_3(_g)),null());
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(2650)
		this->addPropertyChangeListener(HX_CSTRING("_StartTimer"),null(), Dynamic(new _Function_1_35(_g)));
	}
return null();
}


Void Design_3_3_SceneManager_obj::_customEvent_TapMode( ){
{
		HX_STACK_PUSH("Design_3_3_SceneManager::_customEvent_TapMode","scripts/Design_3_3_SceneManager.hx",1691);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1690)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1692)
		this->setGameAttribute(HX_CSTRING("intapmode"),true);
		struct _Function_1_1{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1693);
				{
					HX_STACK_LINE(1693)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1693);
				{
					HX_STACK_LINE(1693)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(1693)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(1693)
		this->_resetX = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_2::Block()) )) )) )) );
		HX_STACK_LINE(1694)
		this->propertyChanged(HX_CSTRING("_resetX"),this->_resetX);
		HX_STACK_LINE(1695)
		{
			HX_STACK_LINE(1695)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g2 = ::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridX")));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1695)
			while(((_g1 < _g2))){
				HX_STACK_LINE(1695)
				int index0 = (_g1)++;		HX_STACK_VAR(index0,"index0");
				struct _Function_3_1{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1697);
						{
							HX_STACK_LINE(1697)
							return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1697);
						{
							HX_STACK_LINE(1697)
							::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
							HX_STACK_LINE(1697)
							return (int)0;
						}
						return null();
					}
				};
				HX_STACK_LINE(1697)
				this->_resetY = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_3_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_3_2::Block()) )) )) )) );
				HX_STACK_LINE(1698)
				this->propertyChanged(HX_CSTRING("_resetY"),this->_resetY);
				HX_STACK_LINE(1699)
				{
					HX_STACK_LINE(1699)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g21 = ::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridY")));		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(1699)
					while(((_g3 < _g21))){
						HX_STACK_LINE(1699)
						int index1 = (_g3)++;		HX_STACK_VAR(index1,"index1");
						HX_STACK_LINE(1701)
						::List2D_obj::set_entry(::Std_obj::_int(this->_resetX),::Std_obj::_int(this->_resetY),null(),this->_PreTapKillList);
						HX_STACK_LINE(1702)
						::List2D_obj::set_entry(::Std_obj::_int(this->_resetX),::Std_obj::_int(this->_resetY),null(),this->_CleanUpTapMode);
						HX_STACK_LINE(1703)
						hx::AddEq(this->_resetY,(int)1);
						HX_STACK_LINE(1704)
						this->propertyChanged(HX_CSTRING("_resetY"),this->_resetY);
					}
				}
				HX_STACK_LINE(1707)
				hx::AddEq(this->_resetX,(int)1);
				HX_STACK_LINE(1708)
				this->propertyChanged(HX_CSTRING("_resetX"),this->_resetX);
			}
		}
		HX_STACK_LINE(1712)
		this->_StartTimer = false;
		HX_STACK_LINE(1713)
		this->propertyChanged(HX_CSTRING("_StartTimer"),this->_StartTimer);
		HX_STACK_LINE(1714)
		this->_TapOn = true;
		HX_STACK_LINE(1715)
		this->propertyChanged(HX_CSTRING("_TapOn"),this->_TapOn);
		HX_STACK_LINE(1716)
		if ((!(this->_StartTimer))){
			HX_STACK_LINE(1718)
			this->_StartTimer = true;
			HX_STACK_LINE(1719)
			this->propertyChanged(HX_CSTRING("_StartTimer"),this->_StartTimer);
		}
		HX_STACK_LINE(1722)
		this->_ComboBrokenFlag = false;
		HX_STACK_LINE(1723)
		this->propertyChanged(HX_CSTRING("_ComboBrokenFlag"),this->_ComboBrokenFlag);
		HX_STACK_LINE(1724)
		this->setGameAttribute(HX_CSTRING("Tappings"),true);
		HX_STACK_LINE(1725)
		this->_TapmodeFlag = false;
		HX_STACK_LINE(1726)
		this->propertyChanged(HX_CSTRING("_TapmodeFlag"),this->_TapmodeFlag);
		struct _Function_1_3{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1727);
				{
					HX_STACK_LINE(1727)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_4{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1727);
				{
					HX_STACK_LINE(1727)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(1727)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(1727)
		this->_TapCombo = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_3::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_4::Block()) )) )) )) );
		HX_STACK_LINE(1728)
		this->propertyChanged(HX_CSTRING("_TapCombo"),this->_TapCombo);
		struct _Function_1_5{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1729);
				{
					HX_STACK_LINE(1729)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_6{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1729);
				{
					HX_STACK_LINE(1729)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(1729)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(1729)
		this->_Xincrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_5::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_6::Block()) )) )) )) );
		HX_STACK_LINE(1730)
		this->propertyChanged(HX_CSTRING("_Xincrementer"),this->_Xincrementer);
		HX_STACK_LINE(1731)
		{
			HX_STACK_LINE(1731)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g2 = ::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridX")));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1731)
			while(((_g1 < _g2))){
				HX_STACK_LINE(1731)
				int index0 = (_g1)++;		HX_STACK_VAR(index0,"index0");
				struct _Function_3_1{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1733);
						{
							HX_STACK_LINE(1733)
							return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1733);
						{
							HX_STACK_LINE(1733)
							::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
							HX_STACK_LINE(1733)
							return (int)0;
						}
						return null();
					}
				};
				HX_STACK_LINE(1733)
				this->_YIncrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_3_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_3_2::Block()) )) )) )) );
				HX_STACK_LINE(1734)
				this->propertyChanged(HX_CSTRING("_YIncrementer"),this->_YIncrementer);
				HX_STACK_LINE(1735)
				{
					HX_STACK_LINE(1735)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g21 = ::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridY")));		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(1735)
					while(((_g3 < _g21))){
						HX_STACK_LINE(1735)
						int index1 = (_g3)++;		HX_STACK_VAR(index1,"index1");
						struct _Function_5_1{
							inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
								HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1737);
								{
									HX_STACK_LINE(1737)
									Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int(__this->_YIncrementer),__this->_GemType);		HX_STACK_VAR(o,"o");
									struct _Function_6_1{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1737);
											{
												HX_STACK_LINE(1737)
												return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_6_2{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1737);
											{
												HX_STACK_LINE(1737)
												::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1737)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1737)
									return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_6_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_6_2::Block(o)) )) )) )) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1737)
						if (((_Function_5_1::Block(this) == this->_GemID))){
							struct _Function_6_1{
								inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
									HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1739);
									{
										HX_STACK_LINE(1739)
										Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int(__this->_YIncrementer),__this->_UID);		HX_STACK_VAR(o,"o");
										struct _Function_7_1{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1739);
												{
													HX_STACK_LINE(1739)
													return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
												}
												return null();
											}
										};
										struct _Function_7_2{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1739);
												{
													HX_STACK_LINE(1739)
													::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
													HX_STACK_LINE(1739)
													return (int)0;
												}
												return null();
											}
										};
										HX_STACK_LINE(1739)
										return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_7_2::Block(o)) )) )) )) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(1739)
							this->_TapPrekill->__Field(HX_CSTRING("insert"),true)((int)0,_Function_6_1::Block(this));
							struct _Function_6_2{
								inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
									HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1740);
									{
										HX_STACK_LINE(1740)
										Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int(__this->_YIncrementer),__this->_UID);		HX_STACK_VAR(o,"o");
										struct _Function_7_1{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1740);
												{
													HX_STACK_LINE(1740)
													return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
												}
												return null();
											}
										};
										struct _Function_7_2{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1740);
												{
													HX_STACK_LINE(1740)
													::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
													HX_STACK_LINE(1740)
													return (int)0;
												}
												return null();
											}
										};
										HX_STACK_LINE(1740)
										return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_7_2::Block(o)) )) )) )) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(1740)
							::List2D_obj::set_entry(::Std_obj::_int(this->_Xincrementer),::Std_obj::_int(this->_YIncrementer),_Function_6_2::Block(this),this->_CleanUpTapMode);
						}
						HX_STACK_LINE(1743)
						hx::AddEq(this->_YIncrementer,(int)1);
						HX_STACK_LINE(1744)
						this->propertyChanged(HX_CSTRING("_YIncrementer"),this->_YIncrementer);
					}
				}
				HX_STACK_LINE(1747)
				hx::AddEq(this->_Xincrementer,(int)1);
				HX_STACK_LINE(1748)
				this->propertyChanged(HX_CSTRING("_Xincrementer"),this->_Xincrementer);
			}
		}
		HX_STACK_LINE(1751)
		::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("Tapmode Enabled")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),1751,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_TapMode")));
		HX_STACK_LINE(1752)
		::haxe::Log_obj::trace((HX_CSTRING("") + this->_TapPrekill->__Field(HX_CSTRING("length"),true)),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),1752,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_TapMode")));
		HX_STACK_LINE(1753)
		::haxe::Log_obj::trace((HX_CSTRING("") + ::Std_obj::string(this->_CleanUpTapMode)),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),1753,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_TapMode")));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_7,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_7","scripts/Design_3_3_SceneManager.hx",1754);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(1756)
				{
					struct _Function_3_1{
						inline static Float Block( Array< ::Dynamic > &_g){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1756);
							{
								HX_STACK_LINE(1756)
								Dynamic o = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapPrekill->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(o,"o");
								struct _Function_4_1{
									inline static int Block( Dynamic &o){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1756);
										{
											HX_STACK_LINE(1756)
											return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
										}
										return null();
									}
								};
								struct _Function_4_2{
									inline static int Block( Dynamic &o){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1756);
										{
											HX_STACK_LINE(1756)
											::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
											HX_STACK_LINE(1756)
											return (int)0;
										}
										return null();
									}
								};
								HX_STACK_LINE(1756)
								return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_4_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_4_2::Block(o)) )) )) )) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1756)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					int _g1 = ::Std_obj::_int(_Function_3_1::Block(_g));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1756)
					while(((_g2 < _g1))){
						HX_STACK_LINE(1756)
						int index0 = (_g2)++;		HX_STACK_VAR(index0,"index0");
						HX_STACK_LINE(1758)
						if (((bool((bool(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActor(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapPrekill->__GetItem(index0))->isMousePressed()) && bool(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("OnBeat"))))) && bool(!(((bool(::com::stencyl::Input_obj::swipedUp) || bool(((bool(::com::stencyl::Input_obj::swipedDown) || bool(((bool(::com::stencyl::Input_obj::swipedLeft) || bool(::com::stencyl::Input_obj::swipedRight)))))))))))))){
							struct _Function_5_1{
								inline static int Block( ){
									HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1760);
									{
										HX_STACK_LINE(1760)
										return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
									}
									return null();
								}
							};
							struct _Function_5_2{
								inline static int Block( ){
									HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1760);
									{
										HX_STACK_LINE(1760)
										::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
										HX_STACK_LINE(1760)
										return (int)0;
									}
									return null();
								}
							};
							HX_STACK_LINE(1760)
							_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapTime = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_5_2::Block()) )) )) )) );
							HX_STACK_LINE(1761)
							_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_TapTime"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapTime);
							HX_STACK_LINE(1762)
							::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("Success!")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),1762,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_TapMode")));
							HX_STACK_LINE(1763)
							_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapKillList->__Field(HX_CSTRING("insert"),true)((int)0,_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapPrekill->__GetItem(::Std_obj::_int(index0)));
							HX_STACK_LINE(1764)
							_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActor(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapPrekill->__GetItem(index0))->setFilter(Dynamic( Array_obj<Dynamic>::__new().Add(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->createGrayscaleFilter())));
							struct _Function_5_3{
								inline static Float Block( Array< ::Dynamic > &_g,int &index0){
									HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1765);
									{
										HX_STACK_LINE(1765)
										Dynamic o = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapPrekill->__GetItem(::Std_obj::_int(index0));		HX_STACK_VAR(o,"o");
										struct _Function_6_1{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1765);
												{
													HX_STACK_LINE(1765)
													return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
												}
												return null();
											}
										};
										struct _Function_6_2{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1765);
												{
													HX_STACK_LINE(1765)
													::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
													HX_STACK_LINE(1765)
													return (int)0;
												}
												return null();
											}
										};
										HX_STACK_LINE(1765)
										return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_6_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_6_2::Block(o)) )) )) )) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(1765)
							_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_cleaner = _Function_5_3::Block(_g,index0);
							HX_STACK_LINE(1766)
							_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_cleaner"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_cleaner);
							HX_STACK_LINE(1767)
							if (((bool(!(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_CanSpawn)) || bool(((bool(!(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_IsDestroying)) || bool(!(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_CheckMatches)))))))){
								struct _Function_6_1{
									inline static int Block( ){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1769);
										{
											HX_STACK_LINE(1769)
											return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
										}
										return null();
									}
								};
								struct _Function_6_2{
									inline static int Block( ){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1769);
										{
											HX_STACK_LINE(1769)
											::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
											HX_STACK_LINE(1769)
											return (int)0;
										}
										return null();
									}
								};
								HX_STACK_LINE(1769)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_6_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_6_2::Block()) )) )) )) );
								HX_STACK_LINE(1770)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_Xincrementer"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer);
								HX_STACK_LINE(1771)
								{
									HX_STACK_LINE(1771)
									int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
									int _g3 = ::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GridX")));		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(1771)
									while(((_g4 < _g3))){
										HX_STACK_LINE(1771)
										int index1 = (_g4)++;		HX_STACK_VAR(index1,"index1");
										struct _Function_8_1{
											inline static int Block( ){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1773);
												{
													HX_STACK_LINE(1773)
													return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
												}
												return null();
											}
										};
										struct _Function_8_2{
											inline static int Block( ){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1773);
												{
													HX_STACK_LINE(1773)
													::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
													HX_STACK_LINE(1773)
													return (int)0;
												}
												return null();
											}
										};
										HX_STACK_LINE(1773)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_8_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_8_2::Block()) )) )) )) );
										HX_STACK_LINE(1774)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_YIncrementer"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer);
										HX_STACK_LINE(1775)
										{
											HX_STACK_LINE(1775)
											int _g6 = (int)0;		HX_STACK_VAR(_g6,"_g6");
											int _g5 = ::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GridY")));		HX_STACK_VAR(_g5,"_g5");
											HX_STACK_LINE(1775)
											while(((_g6 < _g5))){
												HX_STACK_LINE(1775)
												int index2 = (_g6)++;		HX_STACK_VAR(index2,"index2");
												struct _Function_10_1{
													inline static Float Block( Array< ::Dynamic > &_g){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1777);
														{
															HX_STACK_LINE(1777)
															Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer),::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_CleanUpTapMode);		HX_STACK_VAR(o,"o");
															struct _Function_11_1{
																inline static int Block( Dynamic &o){
																	HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1777);
																	{
																		HX_STACK_LINE(1777)
																		return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
																	}
																	return null();
																}
															};
															struct _Function_11_2{
																inline static int Block( Dynamic &o){
																	HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1777);
																	{
																		HX_STACK_LINE(1777)
																		::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																		HX_STACK_LINE(1777)
																		return (int)0;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1777)
															return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_11_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_11_2::Block(o)) )) )) )) )) );
														}
														return null();
													}
												};
												HX_STACK_LINE(1777)
												if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_cleaner == _Function_10_1::Block(_g)))){
													struct _Function_11_1{
														inline static Float Block( Array< ::Dynamic > &_g){
															HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1779);
															{
																HX_STACK_LINE(1779)
																Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer),::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_CleanUpTapMode);		HX_STACK_VAR(o,"o");
																struct _Function_12_1{
																	inline static int Block( Dynamic &o){
																		HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1779);
																		{
																			HX_STACK_LINE(1779)
																			return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
																		}
																		return null();
																	}
																};
																struct _Function_12_2{
																	inline static int Block( Dynamic &o){
																		HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1779);
																		{
																			HX_STACK_LINE(1779)
																			::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																			HX_STACK_LINE(1779)
																			return (int)0;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1779)
																return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_12_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_12_2::Block(o)) )) )) )) )) );
															}
															return null();
														}
													};
													HX_STACK_LINE(1779)
													_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("insert"),true)((int)0,_Function_11_1::Block(_g));
													struct _Function_11_2{
														inline static Float Block( Array< ::Dynamic > &_g){
															HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1780);
															{
																HX_STACK_LINE(1780)
																Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer),::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_CleanUpTapMode);		HX_STACK_VAR(o,"o");
																struct _Function_12_1{
																	inline static int Block( Dynamic &o){
																		HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1780);
																		{
																			HX_STACK_LINE(1780)
																			return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
																		}
																		return null();
																	}
																};
																struct _Function_12_2{
																	inline static int Block( Dynamic &o){
																		HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1780);
																		{
																			HX_STACK_LINE(1780)
																			::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																			HX_STACK_LINE(1780)
																			return (int)0;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1780)
																return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_12_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_12_2::Block(o)) )) )) )) )) );
															}
															return null();
														}
													};
													HX_STACK_LINE(1780)
													::List2D_obj::set_entry(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer),::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer),_Function_11_2::Block(_g),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_PreTapKillList);
												}
												HX_STACK_LINE(1783)
												hx::AddEq(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer,(int)1);
												HX_STACK_LINE(1784)
												_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_YIncrementer"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer);
											}
										}
										HX_STACK_LINE(1787)
										hx::AddEq(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer,(int)1);
										HX_STACK_LINE(1788)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_Xincrementer"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer);
									}
								}
								HX_STACK_LINE(1791)
								if ((!(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_StartTimer))){
									HX_STACK_LINE(1793)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_StartTimer = true;
									HX_STACK_LINE(1794)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_StartTimer"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_StartTimer);
								}
								HX_STACK_LINE(1797)
								hx::AddEq(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapCombo,(int)1);
								HX_STACK_LINE(1798)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_TapCombo"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapCombo);
								HX_STACK_LINE(1799)
								hx::AddEq(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_NumberOfMatches,(int)1);
								HX_STACK_LINE(1800)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_NumberOfMatches"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_NumberOfMatches);
								HX_STACK_LINE(1801)
								break;
							}
						}
						else{
							HX_STACK_LINE(1806)
							if (((bool((bool(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActor(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapPrekill->__GetItem(index0))->isMousePressed()) && bool(!(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("OnBeat")))))) && bool(!(((bool(::com::stencyl::Input_obj::swipedUp) || bool(((bool(::com::stencyl::Input_obj::swipedDown) || bool(((bool(::com::stencyl::Input_obj::swipedLeft) || bool(::com::stencyl::Input_obj::swipedRight)))))))))))))){
								HX_STACK_LINE(1808)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_ComboBrokenFlag = true;
								HX_STACK_LINE(1809)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_ComboBrokenFlag"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_ComboBrokenFlag);
								HX_STACK_LINE(1810)
								break;
							}
						}
					}
				}
				HX_STACK_LINE(1815)
				if ((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_ComboBrokenFlag)){
					HX_STACK_LINE(1817)
					::haxe::Log_obj::trace((HX_CSTRING("") + ::Std_obj::string(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_PreTapKillList)),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),1817,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_TapMode")));
					HX_STACK_LINE(1818)
					if (((bool((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapCombo >= (int)3)) && bool((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapCombo < _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapPrekill->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(1820)
						::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("Prekilling3")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),1820,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_TapMode")));
						struct _Function_4_1{
							inline static int Block( ){
								HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1821);
								{
									HX_STACK_LINE(1821)
									return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static int Block( ){
								HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1821);
								{
									HX_STACK_LINE(1821)
									::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
									HX_STACK_LINE(1821)
									return (int)0;
								}
								return null();
							}
						};
						HX_STACK_LINE(1821)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_4_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_4_2::Block()) )) )) )) );
						HX_STACK_LINE(1822)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_Xincrementer"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer);
						HX_STACK_LINE(1823)
						{
							HX_STACK_LINE(1823)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							int _g1 = ::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GridX")));		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(1823)
							while(((_g2 < _g1))){
								HX_STACK_LINE(1823)
								int index0 = (_g2)++;		HX_STACK_VAR(index0,"index0");
								struct _Function_6_1{
									inline static int Block( ){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1825);
										{
											HX_STACK_LINE(1825)
											return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
										}
										return null();
									}
								};
								struct _Function_6_2{
									inline static int Block( ){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1825);
										{
											HX_STACK_LINE(1825)
											::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
											HX_STACK_LINE(1825)
											return (int)0;
										}
										return null();
									}
								};
								HX_STACK_LINE(1825)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_6_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_6_2::Block()) )) )) )) );
								HX_STACK_LINE(1826)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_YIncrementer"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer);
								HX_STACK_LINE(1827)
								{
									HX_STACK_LINE(1827)
									int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
									int _g3 = ::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GridY")));		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(1827)
									while(((_g4 < _g3))){
										HX_STACK_LINE(1827)
										int index1 = (_g4)++;		HX_STACK_VAR(index1,"index1");
										HX_STACK_LINE(1829)
										if (((bool(!(!(::List2D_obj::check_entry(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer),::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_PreTapKillList)))) && bool(!(!(::List2D_obj::check_entry(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer),::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_AlreadySpawned))))))){
											HX_STACK_LINE(1831)
											::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("Loop at Pretap Kill List Not empty")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),1831,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_TapMode")));
											HX_STACK_LINE(1832)
											::List2D_obj::set_entry(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer),::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer),null(),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_UID);
											HX_STACK_LINE(1833)
											::List2D_obj::set_entry(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer),::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer),null(),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_GemType);
											HX_STACK_LINE(1834)
											::List2D_obj::set_entry(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer),::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer),null(),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_AlreadySpawned);
											HX_STACK_LINE(1835)
											::List2D_obj::set_entry(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer),::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer),null(),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpecialListBomb);
											HX_STACK_LINE(1836)
											::List2D_obj::set_entry(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer),::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer),(int)9,_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("BPS")));
										}
										HX_STACK_LINE(1840)
										hx::AddEq(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer,(int)1);
										HX_STACK_LINE(1841)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_YIncrementer"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer);
									}
								}
								HX_STACK_LINE(1844)
								hx::AddEq(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer,(int)1);
								HX_STACK_LINE(1845)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_Xincrementer"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer);
							}
						}
						HX_STACK_LINE(1848)
						::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("Loop at Pretap Kill List must be empty")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),1848,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_TapMode")));

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_3,Array< ::Dynamic >,_g)
						Void run(::com::stencyl::behavior::TimedTask timeTask1){
							HX_STACK_PUSH("*::_Function_4_3","scripts/Design_3_3_SceneManager.hx",1849);
							HX_STACK_ARG(timeTask1,"timeTask1");
							{
								HX_STACK_LINE(1849)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_customEvent_PreKill();
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						HX_STACK_LINE(1849)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->runLater(300., Dynamic(new _Function_4_3(_g)),null());
						HX_STACK_LINE(1854)
						{
							HX_STACK_LINE(1854)
							Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapKillList;		HX_STACK_VAR(arr,"arr");
							HX_STACK_LINE(1854)
							arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
						}
						HX_STACK_LINE(1855)
						timeTask->repeats = false;
						HX_STACK_LINE(1856)
						return null();
					}
					else{
						HX_STACK_LINE(1861)
						{
							HX_STACK_LINE(1861)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							int _g1 = ::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapPrekill->__Field(HX_CSTRING("length"),true));		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(1861)
							while(((_g2 < _g1))){
								HX_STACK_LINE(1861)
								int index0 = (_g2)++;		HX_STACK_VAR(index0,"index0");
								HX_STACK_LINE(1863)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActor(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapPrekill->__GetItem(index0))->clearFilters();
							}
						}
						HX_STACK_LINE(1866)
						{
							HX_STACK_LINE(1866)
							Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapKillList;		HX_STACK_VAR(arr,"arr");
							HX_STACK_LINE(1866)
							arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
						}
						HX_STACK_LINE(1868)
						{
							HX_STACK_LINE(1868)
							Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("KillList"));		HX_STACK_VAR(arr,"arr");
							HX_STACK_LINE(1868)
							arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
						}
						HX_STACK_LINE(1869)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_customEvent_ResetTap();
						HX_STACK_LINE(1870)
						timeTask->repeats = false;
						HX_STACK_LINE(1871)
						return null();
					}
				}
				HX_STACK_LINE(1876)
				if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapCombo >= _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapPrekill->__Field(HX_CSTRING("length"),true)))){
					HX_STACK_LINE(1878)
					::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("PrekillingFullCombo")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),1878,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_TapMode")));
					struct _Function_3_1{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1879);
							{
								HX_STACK_LINE(1879)
								return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1879);
							{
								HX_STACK_LINE(1879)
								::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(1879)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(1879)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_3_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_3_2::Block()) )) )) )) );
					HX_STACK_LINE(1880)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_Xincrementer"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer);
					HX_STACK_LINE(1881)
					{
						HX_STACK_LINE(1881)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						int _g1 = ::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GridX")));		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1881)
						while(((_g2 < _g1))){
							HX_STACK_LINE(1881)
							int index0 = (_g2)++;		HX_STACK_VAR(index0,"index0");
							struct _Function_5_1{
								inline static int Block( ){
									HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1883);
									{
										HX_STACK_LINE(1883)
										return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
									}
									return null();
								}
							};
							struct _Function_5_2{
								inline static int Block( ){
									HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1883);
									{
										HX_STACK_LINE(1883)
										::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
										HX_STACK_LINE(1883)
										return (int)0;
									}
									return null();
								}
							};
							HX_STACK_LINE(1883)
							_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_5_2::Block()) )) )) )) );
							HX_STACK_LINE(1884)
							_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_YIncrementer"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer);
							HX_STACK_LINE(1885)
							{
								HX_STACK_LINE(1885)
								int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
								int _g3 = ::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GridY")));		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(1885)
								while(((_g4 < _g3))){
									HX_STACK_LINE(1885)
									int index1 = (_g4)++;		HX_STACK_VAR(index1,"index1");
									HX_STACK_LINE(1888)
									if (((bool(!(!(::List2D_obj::check_entry(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer),::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_PreTapKillList)))) && bool(!(!(::List2D_obj::check_entry(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer),::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_AlreadySpawned))))))){
										HX_STACK_LINE(1890)
										::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("Loop at Pretap Kill List Not empty")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),1890,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_TapMode")));
										HX_STACK_LINE(1891)
										::List2D_obj::set_entry(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer),::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer),null(),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_UID);
										HX_STACK_LINE(1892)
										::List2D_obj::set_entry(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer),::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer),null(),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_GemType);
										HX_STACK_LINE(1893)
										::List2D_obj::set_entry(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer),::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer),null(),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_AlreadySpawned);
										HX_STACK_LINE(1894)
										::List2D_obj::set_entry(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer),::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer),null(),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpecialListBomb);
										HX_STACK_LINE(1895)
										::List2D_obj::set_entry(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer),::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer),(int)9,_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("BPS")));
									}
									HX_STACK_LINE(1898)
									hx::AddEq(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer,(int)1);
									HX_STACK_LINE(1899)
									_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_YIncrementer"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer);
								}
							}
							HX_STACK_LINE(1902)
							hx::AddEq(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer,(int)1);
							HX_STACK_LINE(1903)
							_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_Xincrementer"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer);
						}
					}

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_3,Array< ::Dynamic >,_g)
					Void run(::com::stencyl::behavior::TimedTask timeTask1){
						HX_STACK_PUSH("*::_Function_3_3","scripts/Design_3_3_SceneManager.hx",1906);
						HX_STACK_ARG(timeTask1,"timeTask1");
						{
							HX_STACK_LINE(1906)
							_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_customEvent_PreKill();
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(1906)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->runLater(300., Dynamic(new _Function_3_3(_g)),null());
					HX_STACK_LINE(1910)
					{
						HX_STACK_LINE(1910)
						Dynamic arr = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_TapKillList;		HX_STACK_VAR(arr,"arr");
						HX_STACK_LINE(1910)
						arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
					}
					HX_STACK_LINE(1912)
					timeTask->repeats = false;
					HX_STACK_LINE(1913)
					return null();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1754)
		this->runPeriodically(10., Dynamic(new _Function_1_7(_g)),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_3_3_SceneManager_obj,_customEvent_TapMode,(void))

Void Design_3_3_SceneManager_obj::_customEvent_ResetTap( ){
{
		HX_STACK_PUSH("Design_3_3_SceneManager::_customEvent_ResetTap","scripts/Design_3_3_SceneManager.hx",1670);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1671)
		{
			HX_STACK_LINE(1671)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::Std_obj::_int(this->_TapPrekill->__Field(HX_CSTRING("length"),true));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1671)
			while(((_g1 < _g))){
				HX_STACK_LINE(1671)
				int index0 = (_g1)++;		HX_STACK_VAR(index0,"index0");
				HX_STACK_LINE(1673)
				this->getActor(this->_TapPrekill->__GetItem(index0))->clearFilters();
				HX_STACK_LINE(1674)
				this->getActor(this->_TapPrekill->__GetItem(index0))->setValue(HX_CSTRING("beat gem"),HX_CSTRING("_tapping"),false);
				HX_STACK_LINE(1675)
				this->getActor(this->_TapPrekill->__GetItem(index0))->setValue(HX_CSTRING("beat gem"),HX_CSTRING("_Tappable"),false);
				HX_STACK_LINE(1676)
				this->setGameAttribute(HX_CSTRING("TapMode"),false);
				HX_STACK_LINE(1677)
				this->_TapOn = false;
				HX_STACK_LINE(1678)
				this->propertyChanged(HX_CSTRING("_TapOn"),this->_TapOn);
				HX_STACK_LINE(1679)
				this->_TapmodeFlag = false;
				HX_STACK_LINE(1680)
				this->propertyChanged(HX_CSTRING("_TapmodeFlag"),this->_TapmodeFlag);
				HX_STACK_LINE(1681)
				this->setGameAttribute(HX_CSTRING("Tappings"),false);
			}
		}
		HX_STACK_LINE(1684)
		this->setGameAttribute(HX_CSTRING("intapmode"),false);
		HX_STACK_LINE(1685)
		{
			HX_STACK_LINE(1685)
			Dynamic arr = this->_TapPrekill;		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(1685)
			arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_3_3_SceneManager_obj,_customEvent_ResetTap,(void))

Void Design_3_3_SceneManager_obj::_customEvent_TapTime( ){
{
		HX_STACK_PUSH("Design_3_3_SceneManager::_customEvent_TapTime","scripts/Design_3_3_SceneManager.hx",1634);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1635)
		{
			HX_STACK_LINE(1635)
			Dynamic arr = this->_Taplist;		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(1635)
			arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
		}
		struct _Function_1_1{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1636);
				{
					HX_STACK_LINE(1636)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1636);
				{
					HX_STACK_LINE(1636)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(1636)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(1636)
		this->_Xincrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_2::Block()) )) )) )) );
		HX_STACK_LINE(1637)
		this->propertyChanged(HX_CSTRING("_Xincrementer"),this->_Xincrementer);
		HX_STACK_LINE(1638)
		{
			HX_STACK_LINE(1638)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridX")));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1638)
			while(((_g1 < _g))){
				HX_STACK_LINE(1638)
				int index0 = (_g1)++;		HX_STACK_VAR(index0,"index0");
				struct _Function_3_1{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1640);
						{
							HX_STACK_LINE(1640)
							return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1640);
						{
							HX_STACK_LINE(1640)
							::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
							HX_STACK_LINE(1640)
							return (int)0;
						}
						return null();
					}
				};
				HX_STACK_LINE(1640)
				this->_YIncrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_3_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_3_2::Block()) )) )) )) );
				HX_STACK_LINE(1641)
				this->propertyChanged(HX_CSTRING("_YIncrementer"),this->_YIncrementer);
				HX_STACK_LINE(1642)
				{
					HX_STACK_LINE(1642)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = ::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridY")));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1642)
					while(((_g3 < _g2))){
						HX_STACK_LINE(1642)
						int index1 = (_g3)++;		HX_STACK_VAR(index1,"index1");
						struct _Function_5_1{
							inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
								HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1644);
								{
									HX_STACK_LINE(1644)
									Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int(__this->_YIncrementer),__this->_GemType);		HX_STACK_VAR(o,"o");
									struct _Function_6_1{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1644);
											{
												HX_STACK_LINE(1644)
												return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_6_2{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1644);
											{
												HX_STACK_LINE(1644)
												::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1644)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1644)
									return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_6_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_6_2::Block(o)) )) )) )) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1644)
						if (((_Function_5_1::Block(this) == this->_GemID))){
							struct _Function_6_1{
								inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
									HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1646);
									{
										HX_STACK_LINE(1646)
										Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int(__this->_YIncrementer),__this->_UID);		HX_STACK_VAR(o,"o");
										struct _Function_7_1{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1646);
												{
													HX_STACK_LINE(1646)
													return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
												}
												return null();
											}
										};
										struct _Function_7_2{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1646);
												{
													HX_STACK_LINE(1646)
													::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
													HX_STACK_LINE(1646)
													return (int)0;
												}
												return null();
											}
										};
										HX_STACK_LINE(1646)
										return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_7_2::Block(o)) )) )) )) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(1646)
							this->_Taplist->__Field(HX_CSTRING("insert"),true)((int)0,_Function_6_1::Block(this));
							struct _Function_6_2{
								inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
									HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1647);
									{
										HX_STACK_LINE(1647)
										Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int(__this->_YIncrementer),__this->_UID);		HX_STACK_VAR(o,"o");
										struct _Function_7_1{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1647);
												{
													HX_STACK_LINE(1647)
													return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
												}
												return null();
											}
										};
										struct _Function_7_2{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1647);
												{
													HX_STACK_LINE(1647)
													::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
													HX_STACK_LINE(1647)
													return (int)0;
												}
												return null();
											}
										};
										HX_STACK_LINE(1647)
										return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_7_2::Block(o)) )) )) )) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(1647)
							this->_TappingList->__Field(HX_CSTRING("insert"),true)((int)0,_Function_6_2::Block(this));
						}
						HX_STACK_LINE(1651)
						hx::AddEq(this->_YIncrementer,(int)1);
						HX_STACK_LINE(1652)
						this->propertyChanged(HX_CSTRING("_YIncrementer"),this->_YIncrementer);
					}
				}
				HX_STACK_LINE(1655)
				hx::AddEq(this->_Xincrementer,(int)1);
				HX_STACK_LINE(1656)
				this->propertyChanged(HX_CSTRING("_Xincrementer"),this->_Xincrementer);
			}
		}
		HX_STACK_LINE(1659)
		{
			HX_STACK_LINE(1659)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::Std_obj::_int(this->_Taplist->__Field(HX_CSTRING("length"),true));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1659)
			while(((_g1 < _g))){
				HX_STACK_LINE(1659)
				int index0 = (_g1)++;		HX_STACK_VAR(index0,"index0");
				HX_STACK_LINE(1661)
				this->getActor(this->_Taplist->__GetItem((int)0))->setValue(HX_CSTRING("beat gem"),HX_CSTRING("_Tappable"),true);
				HX_STACK_LINE(1662)
				this->_Taplist->__Field(HX_CSTRING("splice"),true)((int)0,(int)1);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_3_3_SceneManager_obj,_customEvent_TapTime,(void))

Void Design_3_3_SceneManager_obj::_customEvent_Lose( ){
{
		HX_STACK_PUSH("Design_3_3_SceneManager::_customEvent_Lose","scripts/Design_3_3_SceneManager.hx",1624);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1625)
		this->createRecycledActor(this->getActorType((int)97),(int)0,(Float(this->getSceneHeight()) / Float((int)2)),::com::stencyl::behavior::Script_obj::FRONT);
		HX_STACK_LINE(1626)
		this->_Lose = true;
		HX_STACK_LINE(1627)
		this->propertyChanged(HX_CSTRING("_Lose"),this->_Lose);
		HX_STACK_LINE(1628)
		this->_customEvent_EndingLevel();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_3_3_SceneManager_obj,_customEvent_Lose,(void))

Void Design_3_3_SceneManager_obj::_customEvent_BeaterSpawn( ){
{
		HX_STACK_PUSH("Design_3_3_SceneManager::_customEvent_BeaterSpawn","scripts/Design_3_3_SceneManager.hx",1584);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1584)
		if (((this->getGameAttribute(HX_CSTRING("BeaterCombo")) <= (Float((this->getGameAttribute(HX_CSTRING("GridX")) * this->getGameAttribute(HX_CSTRING("GridY")))) / Float((int)2))))){
			struct _Function_2_1{
				inline static int Block( ){
					HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1589);
					{
						HX_STACK_LINE(1589)
						return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static int Block( ){
					HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1589);
					{
						HX_STACK_LINE(1589)
						::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
						HX_STACK_LINE(1589)
						return (int)0;
					}
					return null();
				}
			};
			HX_STACK_LINE(1589)
			this->_BeaterRefillX = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_2_2::Block()) )) )) )) );
			HX_STACK_LINE(1590)
			this->propertyChanged(HX_CSTRING("_BeaterRefillX"),this->_BeaterRefillX);
			HX_STACK_LINE(1591)
			{
				HX_STACK_LINE(1591)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = ::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridX")));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1591)
				while(((_g1 < _g))){
					HX_STACK_LINE(1591)
					int index0 = (_g1)++;		HX_STACK_VAR(index0,"index0");
					struct _Function_4_1{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1593);
							{
								HX_STACK_LINE(1593)
								return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1593);
							{
								HX_STACK_LINE(1593)
								::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(1593)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(1593)
					this->_BeaterRefillY = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_4_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_4_2::Block()) )) )) )) );
					HX_STACK_LINE(1594)
					this->propertyChanged(HX_CSTRING("_BeaterRefillY"),this->_BeaterRefillY);
					HX_STACK_LINE(1595)
					{
						HX_STACK_LINE(1595)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						int _g2 = ::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridY")));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1595)
						while(((_g3 < _g2))){
							HX_STACK_LINE(1595)
							int index1 = (_g3)++;		HX_STACK_VAR(index1,"index1");
							HX_STACK_LINE(1597)
							if (((!(::List2D_obj::check_entry(::Std_obj::_int(this->_BeaterRefillX),::Std_obj::_int(this->_BeaterRefillY),this->getGameAttribute(HX_CSTRING("BPS")))) == false))){
								HX_STACK_LINE(1600)
								this->createRecycledActor(this->getActorType((int)58),(((this->_ScreenOffset + (this->_BeaterRefillX * this->_GridSpacing)) - this->_ScreenOffset) + (((Float(this->_GridSpacing) / Float((int)2)) - (int)10))),(((this->_ScreenOffesetY + (this->_BeaterRefillY * this->_GridSpacing)) - this->_ScreenOffesetY) + (this->_GridSpacing * (int)2)),::com::stencyl::behavior::Script_obj::FRONT);
								HX_STACK_LINE(1601)
								::List2D_obj::set_entry(::Std_obj::_int(this->_BeaterRefillX),::Std_obj::_int(this->_BeaterRefillY),null(),this->getGameAttribute(HX_CSTRING("BPS")));
							}
							HX_STACK_LINE(1604)
							hx::AddEq(this->_BeaterRefillY,(int)1);
							HX_STACK_LINE(1605)
							this->propertyChanged(HX_CSTRING("_BeaterRefillY"),this->_BeaterRefillY);
						}
					}
					HX_STACK_LINE(1608)
					hx::AddEq(this->_BeaterRefillX,(int)1);
					HX_STACK_LINE(1609)
					this->propertyChanged(HX_CSTRING("_BeaterRefillX"),this->_BeaterRefillX);
				}
			}
		}
		else{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_3_3_SceneManager_obj,_customEvent_BeaterSpawn,(void))

Void Design_3_3_SceneManager_obj::_customEvent_EndingLevel( ){
{
		HX_STACK_PUSH("Design_3_3_SceneManager::_customEvent_EndingLevel","scripts/Design_3_3_SceneManager.hx",1548);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1547)
		Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g2,"_g2");
		struct _Function_1_1{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1549);
				{
					HX_STACK_LINE(1549)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1549);
				{
					HX_STACK_LINE(1549)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(1549)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(1549)
		this->_Xincrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_2::Block()) )) )) )) );
		HX_STACK_LINE(1550)
		this->propertyChanged(HX_CSTRING("_Xincrementer"),this->_Xincrementer);
		HX_STACK_LINE(1551)
		{
			HX_STACK_LINE(1551)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridX")));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1551)
			while(((_g1 < _g))){
				HX_STACK_LINE(1551)
				int index0 = (_g1)++;		HX_STACK_VAR(index0,"index0");
				struct _Function_3_1{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1553);
						{
							HX_STACK_LINE(1553)
							return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1553);
						{
							HX_STACK_LINE(1553)
							::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
							HX_STACK_LINE(1553)
							return (int)0;
						}
						return null();
					}
				};
				HX_STACK_LINE(1553)
				this->_YIncrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_3_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_3_2::Block()) )) )) )) );
				HX_STACK_LINE(1554)
				this->propertyChanged(HX_CSTRING("_YIncrementer"),this->_YIncrementer);
				HX_STACK_LINE(1555)
				{
					HX_STACK_LINE(1555)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g21 = ::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridY")));		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(1555)
					while(((_g3 < _g21))){
						HX_STACK_LINE(1555)
						int index1 = (_g3)++;		HX_STACK_VAR(index1,"index1");
						struct _Function_5_1{
							inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
								HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1557);
								{
									HX_STACK_LINE(1557)
									Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int(__this->_YIncrementer),__this->_UID->__Field(HX_CSTRING("copy"),true)());		HX_STACK_VAR(o,"o");
									struct _Function_6_1{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1557);
											{
												HX_STACK_LINE(1557)
												return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_6_2{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1557);
											{
												HX_STACK_LINE(1557)
												::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1557)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1557)
									return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_6_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_6_2::Block(o)) )) )) )) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1557)
						this->_Ending->__Field(HX_CSTRING("insert"),true)((int)0,_Function_5_1::Block(this));
						HX_STACK_LINE(1558)
						hx::AddEq(this->_YIncrementer,(int)1);
						HX_STACK_LINE(1559)
						this->propertyChanged(HX_CSTRING("_YIncrementer"),this->_YIncrementer);
					}
				}
				HX_STACK_LINE(1562)
				hx::AddEq(this->_Xincrementer,(int)1);
				HX_STACK_LINE(1563)
				this->propertyChanged(HX_CSTRING("_Xincrementer"),this->_Xincrementer);
			}
		}
		HX_STACK_LINE(1566)
		::haxe::Log_obj::trace((HX_CSTRING("") + ::Std_obj::string(this->_Ending)),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),1566,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_EndingLevel")));
		HX_STACK_LINE(1567)
		{
			struct _Function_2_1{
				inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
					HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1567);
					{
						HX_STACK_LINE(1567)
						Dynamic o = __this->_Ending->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(o,"o");
						struct _Function_3_1{
							inline static int Block( Dynamic &o){
								HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1567);
								{
									HX_STACK_LINE(1567)
									return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static int Block( Dynamic &o){
								HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1567);
								{
									HX_STACK_LINE(1567)
									::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
									HX_STACK_LINE(1567)
									return (int)0;
								}
								return null();
							}
						};
						HX_STACK_LINE(1567)
						return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_3_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_3_2::Block(o)) )) )) )) )) );
					}
					return null();
				}
			};
			HX_STACK_LINE(1567)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::Std_obj::_int(_Function_2_1::Block(this));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1567)
			while(((_g1 < _g))){
				HX_STACK_LINE(1567)
				int index0 = (_g1)++;		HX_STACK_VAR(index0,"index0");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_g2)
				Void run(::com::stencyl::behavior::TimedTask timeTask){
					HX_STACK_PUSH("*::_Function_3_1","scripts/Design_3_3_SceneManager.hx",1569);
					HX_STACK_ARG(timeTask,"timeTask");
					{
						HX_STACK_LINE(1570)
						_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActor(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Ending->__GetItem((int)0))->moveBy((int)160,(int)240,(int)2,::motion::easing::Linear_obj::get_easeNone());
						HX_STACK_LINE(1572)
						_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActor(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Ending->__GetItem((int)0))->spinBy((int)360,(int)2,::motion::easing::Linear_obj::get_easeNone());
						HX_STACK_LINE(1573)
						_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActor(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Ending->__GetItem((int)0))->growTo(0.,0.,(int)2,::motion::easing::Linear_obj::get_easeNone());
						HX_STACK_LINE(1574)
						_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Ending->__Field(HX_CSTRING("splice"),true)((int)0,(int)1);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(1569)
				this->runLater(((int)1000 * ((Float((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)))), Dynamic(new _Function_3_1(_g2)),null());
			}
		}
		HX_STACK_LINE(1578)
		this->startShakingScreen(0.01,(Float((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_3_3_SceneManager_obj,_customEvent_EndingLevel,(void))

Void Design_3_3_SceneManager_obj::_customEvent_Win( ){
{
		HX_STACK_PUSH("Design_3_3_SceneManager::_customEvent_Win","scripts/Design_3_3_SceneManager.hx",1538);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1539)
		this->createRecycledActor(this->getActorType((int)95),(int)0,(Float(this->getSceneHeight()) / Float((int)2)),::com::stencyl::behavior::Script_obj::FRONT);
		HX_STACK_LINE(1540)
		this->_Win = true;
		HX_STACK_LINE(1541)
		this->propertyChanged(HX_CSTRING("_Win"),this->_Win);
		HX_STACK_LINE(1542)
		this->_customEvent_EndingLevel();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_3_3_SceneManager_obj,_customEvent_Win,(void))

Void Design_3_3_SceneManager_obj::_customEvent_CheckWinConditions( ){
{
		HX_STACK_PUSH("Design_3_3_SceneManager::_customEvent_CheckWinConditions","scripts/Design_3_3_SceneManager.hx",1504);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1505)
		if ((this->getGameAttribute(HX_CSTRING("ScoreInMoves")))){
			HX_STACK_LINE(1506)
			if (((bool((this->_Score >= this->getGameAttribute(HX_CSTRING("ScoreTarget")))) && bool((this->getGameAttribute(HX_CSTRING("Moves Counter")) <= this->getGameAttribute(HX_CSTRING("MovesTarget"))))))){
				HX_STACK_LINE(1508)
				this->_customEvent_Win();
			}
			else{
				HX_STACK_LINE(1512)
				if (((bool((this->getGameAttribute(HX_CSTRING("Moves Counter")) >= this->getGameAttribute(HX_CSTRING("MovesTarget")))) && bool((this->_Score < this->getGameAttribute(HX_CSTRING("ScoreTarget"))))))){
					HX_STACK_LINE(1513)
					this->_customEvent_Lose();
				}
			}
		}
		HX_STACK_LINE(1519)
		if ((this->getGameAttribute(HX_CSTRING("ColorMatchInMoves")))){
			HX_STACK_LINE(1521)
			if (((bool((this->getGameAttribute(HX_CSTRING("ColorTargets"))->__Field(HX_CSTRING("length"),true) == (int)0)) && bool((this->getGameAttribute(HX_CSTRING("Moves Counter")) <= this->getGameAttribute(HX_CSTRING("MovesTarget"))))))){
				HX_STACK_LINE(1522)
				this->_customEvent_Win();
			}
			HX_STACK_LINE(1526)
			if (((bool(!(((this->getGameAttribute(HX_CSTRING("ColorTargets"))->__Field(HX_CSTRING("length"),true) == (int)0)))) && bool((this->getGameAttribute(HX_CSTRING("Moves Counter")) >= this->getGameAttribute(HX_CSTRING("MovesTarget"))))))){
				HX_STACK_LINE(1527)
				this->_customEvent_Lose();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_3_3_SceneManager_obj,_customEvent_CheckWinConditions,(void))

Void Design_3_3_SceneManager_obj::_customEvent_SpecialKill( ){
{
		HX_STACK_PUSH("Design_3_3_SceneManager::_customEvent_SpecialKill","scripts/Design_3_3_SceneManager.hx",1359);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1358)
		Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1360)
		while((!(!(::com::stencyl::utils::Utils_obj::contains(this->getGameAttribute(HX_CSTRING("KillList")),(int)0))))){
			HX_STACK_LINE(1361)
			if ((::com::stencyl::utils::Utils_obj::contains(this->getGameAttribute(HX_CSTRING("KillList")),(int)0))){
				HX_STACK_LINE(1363)
				this->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("remove"),true)((int)0);
			}
		}
		HX_STACK_LINE(1369)
		hx::AddEq(this->_AutoCombo,::Math_obj::round((Float(this->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("length"),true)) / Float((int)3))));
		HX_STACK_LINE(1370)
		this->propertyChanged(HX_CSTRING("_AutoCombo"),this->_AutoCombo);
		struct _Function_1_1{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1371);
				{
					HX_STACK_LINE(1371)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1371);
				{
					HX_STACK_LINE(1371)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(1371)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(1371)
		this->_Multiplefinder = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_2::Block()) )) )) )) );
		HX_STACK_LINE(1372)
		this->propertyChanged(HX_CSTRING("_Multiplefinder"),this->_Multiplefinder);
		struct _Function_1_3{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1373);
				{
					HX_STACK_LINE(1373)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_4{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1373);
				{
					HX_STACK_LINE(1373)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(1373)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(1373)
		this->_KillListMod = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_3::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_4::Block()) )) )) )) );
		HX_STACK_LINE(1374)
		this->propertyChanged(HX_CSTRING("_KillListMod"),this->_KillListMod);
		HX_STACK_LINE(1375)
		hx::AddEq(this->_DestroyListModifier,(int)1);
		HX_STACK_LINE(1376)
		this->propertyChanged(HX_CSTRING("_DestroyListModifier"),this->_DestroyListModifier);
		HX_STACK_LINE(1377)
		this->_IsDestroying = true;
		HX_STACK_LINE(1378)
		this->propertyChanged(HX_CSTRING("_IsDestroying"),this->_IsDestroying);
		HX_STACK_LINE(1379)
		this->_CanSpawn = false;
		HX_STACK_LINE(1380)
		this->propertyChanged(HX_CSTRING("_CanSpawn"),this->_CanSpawn);
		HX_STACK_LINE(1382)
		::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("SPECIALDESTROYING")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),1382,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_SpecialKill")));
		HX_STACK_LINE(1383)
		{
			HX_STACK_LINE(1383)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::Std_obj::_int(this->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("length"),true));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1383)
			while(((_g1 < _g))){
				HX_STACK_LINE(1383)
				Array< int > index0 = Array_obj< int >::__new().Add((_g1)++);		HX_STACK_VAR(index0,"index0");
				HX_STACK_LINE(1385)
				::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("AT THE KILL LIST")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),1385,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_SpecialKill")));
				HX_STACK_LINE(1386)
				::haxe::Log_obj::trace((HX_CSTRING("") + ::Std_obj::string(this->getGameAttribute(HX_CSTRING("KillList")))),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),1386,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_SpecialKill")));
				HX_STACK_LINE(1387)
				if (((index0->__get((int)0) == (int)0))){
					struct _Function_4_1{
						inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this,Array< int > &index0){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1389);
							{
								HX_STACK_LINE(1389)
								Dynamic o = __this->getActor(__this->getGameAttribute(HX_CSTRING("KillList"))->__GetItem(index0->__get((int)0)))->getX(null());		HX_STACK_VAR(o,"o");
								struct _Function_5_1{
									inline static int Block( Dynamic &o){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1389);
										{
											HX_STACK_LINE(1389)
											return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
										}
										return null();
									}
								};
								struct _Function_5_2{
									inline static int Block( Dynamic &o){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1389);
										{
											HX_STACK_LINE(1389)
											::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
											HX_STACK_LINE(1389)
											return (int)0;
										}
										return null();
									}
								};
								HX_STACK_LINE(1389)
								return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_5_2::Block(o)) )) )) )) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1389)
					this->_ActorDeathPos = _Function_4_1::Block(this,index0);
					HX_STACK_LINE(1390)
					this->propertyChanged(HX_CSTRING("_ActorDeathPos"),this->_ActorDeathPos);
					struct _Function_4_2{
						inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1391);
							{
								HX_STACK_LINE(1391)
								Dynamic o = __this->_AutoCombo;		HX_STACK_VAR(o,"o");
								struct _Function_5_1{
									inline static int Block( Dynamic &o){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1391);
										{
											HX_STACK_LINE(1391)
											return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
										}
										return null();
									}
								};
								struct _Function_5_2{
									inline static int Block( Dynamic &o){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1391);
										{
											HX_STACK_LINE(1391)
											::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
											HX_STACK_LINE(1391)
											return (int)0;
										}
										return null();
									}
								};
								HX_STACK_LINE(1391)
								return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_5_2::Block(o)) )) )) )) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1391)
					this->_Combo = _Function_4_2::Block(this);
					HX_STACK_LINE(1392)
					this->propertyChanged(HX_CSTRING("_Combo"),this->_Combo);
					struct _Function_4_3{
						inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this,Array< int > &index0){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1393);
							{
								HX_STACK_LINE(1393)
								Dynamic o = __this->getActor(__this->getGameAttribute(HX_CSTRING("KillList"))->__GetItem(index0->__get((int)0)))->getY(null());		HX_STACK_VAR(o,"o");
								struct _Function_5_1{
									inline static int Block( Dynamic &o){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1393);
										{
											HX_STACK_LINE(1393)
											return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
										}
										return null();
									}
								};
								struct _Function_5_2{
									inline static int Block( Dynamic &o){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1393);
										{
											HX_STACK_LINE(1393)
											::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
											HX_STACK_LINE(1393)
											return (int)0;
										}
										return null();
									}
								};
								HX_STACK_LINE(1393)
								return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_5_2::Block(o)) )) )) )) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1393)
					this->_ActorDeathPosY = _Function_4_3::Block(this,index0);
					HX_STACK_LINE(1394)
					this->propertyChanged(HX_CSTRING("_ActorDeathPosY"),this->_ActorDeathPosY);
					HX_STACK_LINE(1395)
					this->createRecycledActor(this->getActorType((int)105),this->_ActorDeathPos,this->_ActorDeathPosY,::com::stencyl::behavior::Script_obj::FRONT);
				}
				else{
					HX_STACK_LINE(1398)
					if (((bool((index0->__get((int)0) == (this->_Multiplefinder + (int)3))) && bool((::Math_obj::round((Float(this->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("length"),true)) / Float((int)3))) >= ::Math_obj::round(1.5)))))){
						HX_STACK_LINE(1400)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						int _g21 = ::Std_obj::_int(::Math_obj::round((Float(this->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("length"),true)) / Float((int)3))));		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(1400)
						while(((_g3 < _g21))){
							HX_STACK_LINE(1400)
							int index1 = (_g3)++;		HX_STACK_VAR(index1,"index1");
							struct _Function_6_1{
								inline static Float Block( int &index1){
									HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1402);
									{
										HX_STACK_LINE(1402)
										Dynamic o = (index1 + (int)3);		HX_STACK_VAR(o,"o");
										struct _Function_7_1{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1402);
												{
													HX_STACK_LINE(1402)
													return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
												}
												return null();
											}
										};
										struct _Function_7_2{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1402);
												{
													HX_STACK_LINE(1402)
													::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
													HX_STACK_LINE(1402)
													return (int)0;
												}
												return null();
											}
										};
										HX_STACK_LINE(1402)
										return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_7_2::Block(o)) )) )) )) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(1402)
							this->_Multiplefinder = _Function_6_1::Block(index1);
							HX_STACK_LINE(1403)
							this->propertyChanged(HX_CSTRING("_Multiplefinder"),this->_Multiplefinder);
							struct _Function_6_2{
								inline static int Block( int &index1){
									HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1404);
									{
										HX_STACK_LINE(1404)
										return (  ((hx::TCast< Bool >::cast(index1))) ? int((int)1) : int((int)0) );
									}
									return null();
								}
							};
							struct _Function_6_3{
								inline static int Block( int &index1){
									HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1404);
									{
										HX_STACK_LINE(1404)
										::haxe::Log_obj::trace((::Std_obj::string(index1) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
										HX_STACK_LINE(1404)
										return (int)0;
									}
									return null();
								}
							};
							HX_STACK_LINE(1404)
							this->_Combo = (  (((index1 == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(index1,hx::ClassOf< ::Float >()))) ? Float(index1) : Float((  ((::Std_obj::is(index1,hx::ClassOf< ::Int >()))) ? Float(index1) : Float((  ((::Std_obj::is(index1,hx::ClassOf< ::Bool >()))) ? Float(_Function_6_2::Block(index1)) : Float((  ((::Std_obj::is(index1,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(index1)) : Float(_Function_6_3::Block(index1)) )) )) )) )) );
							HX_STACK_LINE(1405)
							this->propertyChanged(HX_CSTRING("_Combo"),this->_Combo);
							struct _Function_6_4{
								inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this,Array< int > &index0){
									HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1406);
									{
										HX_STACK_LINE(1406)
										Dynamic o = __this->getActor(__this->getGameAttribute(HX_CSTRING("KillList"))->__GetItem(index0->__get((int)0)))->getX(null());		HX_STACK_VAR(o,"o");
										struct _Function_7_1{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1406);
												{
													HX_STACK_LINE(1406)
													return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
												}
												return null();
											}
										};
										struct _Function_7_2{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1406);
												{
													HX_STACK_LINE(1406)
													::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
													HX_STACK_LINE(1406)
													return (int)0;
												}
												return null();
											}
										};
										HX_STACK_LINE(1406)
										return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_7_2::Block(o)) )) )) )) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(1406)
							this->_ActorDeathPos = _Function_6_4::Block(this,index0);
							HX_STACK_LINE(1407)
							this->propertyChanged(HX_CSTRING("_ActorDeathPos"),this->_ActorDeathPos);
							struct _Function_6_5{
								inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this,Array< int > &index0){
									HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1408);
									{
										HX_STACK_LINE(1408)
										Dynamic o = __this->getActor(__this->getGameAttribute(HX_CSTRING("KillList"))->__GetItem(index0->__get((int)0)))->getY(null());		HX_STACK_VAR(o,"o");
										struct _Function_7_1{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1408);
												{
													HX_STACK_LINE(1408)
													return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
												}
												return null();
											}
										};
										struct _Function_7_2{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1408);
												{
													HX_STACK_LINE(1408)
													::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
													HX_STACK_LINE(1408)
													return (int)0;
												}
												return null();
											}
										};
										HX_STACK_LINE(1408)
										return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_7_2::Block(o)) )) )) )) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(1408)
							this->_ActorDeathPosY = _Function_6_5::Block(this,index0);
							HX_STACK_LINE(1409)
							this->propertyChanged(HX_CSTRING("_ActorDeathPosY"),this->_ActorDeathPosY);
							HX_STACK_LINE(1410)
							this->createRecycledActor(this->getActorType((int)105),this->_ActorDeathPos,this->_ActorDeathPosY,::com::stencyl::behavior::Script_obj::FRONT);
						}
					}
				}

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Array< int >,index0,Array< ::Dynamic >,_g2)
				Void run(::com::stencyl::behavior::TimedTask timeTask){
					HX_STACK_PUSH("*::_Function_3_1","scripts/Design_3_3_SceneManager.hx",1415);
					HX_STACK_ARG(timeTask,"timeTask");
					{
						HX_STACK_LINE(1416)
						_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActor(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("KillList"))->__GetItem(index0->__get((int)0)))->say(HX_CSTRING("Particles"),(HX_CSTRING("_customEvent_") + HX_CSTRING("StartEmitting")),null());
						HX_STACK_LINE(1418)
						_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActor(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("KillList"))->__GetItem(index0->__get((int)0)))->setFilter(Dynamic( Array_obj<Dynamic>::__new().Add(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->createGrayscaleFilter())));
						HX_STACK_LINE(1420)
						::haxe::Log_obj::trace((HX_CSTRING("") + ::Std_obj::string(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("KillList")))),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),1420,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_SpecialKill")));
						HX_STACK_LINE(1421)
						::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("APPLIED EFFECTS")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),1421,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_SpecialKill")));
						HX_STACK_LINE(1423)
						_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->playSoundOnChannel(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSound((int)74),(int)4);

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_g2)
						Void run(::com::stencyl::behavior::TimedTask timeTask1){
							HX_STACK_PUSH("*::_Function_4_1","scripts/Design_3_3_SceneManager.hx",1424);
							HX_STACK_ARG(timeTask1,"timeTask1");
							{
								HX_STACK_LINE(1425)
								_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->playSoundOnChannel(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSound((int)75),(int)5);

								HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_5_1,Array< ::Dynamic >,_g2)
								Void run(::com::stencyl::behavior::TimedTask timeTask2){
									HX_STACK_PUSH("*::_Function_5_1","scripts/Design_3_3_SceneManager.hx",1426);
									HX_STACK_ARG(timeTask2,"timeTask2");
									{
										HX_STACK_LINE(1427)
										_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->playSoundOnChannel(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSound((int)76),(int)6);

										HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_6_1,Array< ::Dynamic >,_g2)
										Void run(::com::stencyl::behavior::TimedTask timeTask3){
											HX_STACK_PUSH("*::_Function_6_1","scripts/Design_3_3_SceneManager.hx",1428);
											HX_STACK_ARG(timeTask3,"timeTask3");
											{
												HX_STACK_LINE(1429)
												_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->playSoundOnChannel(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSound((int)77),(int)7);

												HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_7_1,Array< ::Dynamic >,_g2)
												Void run(::com::stencyl::behavior::TimedTask timeTask4){
													HX_STACK_PUSH("*::_Function_7_1","scripts/Design_3_3_SceneManager.hx",1430);
													HX_STACK_ARG(timeTask4,"timeTask4");
													{
														HX_STACK_LINE(1430)
														_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->playSoundOnChannel(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSound((int)78),(int)8);
													}
													return null();
												}
												HX_END_LOCAL_FUNC1((void))

												HX_STACK_LINE(1430)
												_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->runLater(((int)1000 * ((Float((Float((int)60) / Float(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)))), Dynamic(new _Function_7_1(_g2)),null());
											}
											return null();
										}
										HX_END_LOCAL_FUNC1((void))

										HX_STACK_LINE(1428)
										_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->runLater(((int)1000 * ((Float((Float((int)60) / Float(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)))), Dynamic(new _Function_6_1(_g2)),null());
									}
									return null();
								}
								HX_END_LOCAL_FUNC1((void))

								HX_STACK_LINE(1426)
								_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->runLater(((int)1000 * ((Float((Float((int)60) / Float(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)))), Dynamic(new _Function_5_1(_g2)),null());
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						HX_STACK_LINE(1424)
						_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->runLater(((int)1000 * ((Float((Float((int)60) / Float(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)))), Dynamic(new _Function_4_1(_g2)),null());
						HX_STACK_LINE(1436)
						if (((_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_BombKill == true))){
							HX_STACK_LINE(1438)
							_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->playSound(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSound((int)63));
							HX_STACK_LINE(1439)
							_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->startShakingScreen(0.01,(Float((int)60) / Float(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameTempo")))));
						}
						HX_STACK_LINE(1442)
						_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->playSoundOnChannel(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSound((int)11),(int)19);

						HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_2,Array< int >,index0,Array< ::Dynamic >,_g2)
						Void run(::com::stencyl::behavior::TimedTask timeTask1){
							HX_STACK_PUSH("*::_Function_4_2","scripts/Design_3_3_SceneManager.hx",1443);
							HX_STACK_ARG(timeTask1,"timeTask1");
							{
								HX_STACK_LINE(1444)
								::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("KILLING ACTOR")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),1444,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_SpecialKill")));
								HX_STACK_LINE(1445)
								_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->recycleActor(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActor(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("KillList"))->__GetItem((int)0)));
								HX_STACK_LINE(1446)
								::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("KILLED ACTOR")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),1446,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_SpecialKill")));
								HX_STACK_LINE(1447)
								_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("splice"),true)((int)0,(int)1);
								HX_STACK_LINE(1448)
								hx::AddEq(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Score,(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_NumberOfMatches * (int)250));
								HX_STACK_LINE(1449)
								_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_Score"),_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Score);
								HX_STACK_LINE(1450)
								hx::AddEq(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_KillListMod,index0->__get((int)0));
								HX_STACK_LINE(1451)
								_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_KillListMod"),_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_KillListMod);
								HX_STACK_LINE(1452)
								if (((_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_KillListMod >= (_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GridX")) + _g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GridY")))))){
									HX_STACK_LINE(1454)
									_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_CreateBombPiece = true;
									HX_STACK_LINE(1455)
									_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_CreateBombPiece"),_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_CreateBombPiece);
									struct _Function_6_1{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1456);
											{
												HX_STACK_LINE(1456)
												return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_6_2{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1456);
											{
												HX_STACK_LINE(1456)
												::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1456)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1456)
									_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_KillListMod = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_6_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_6_2::Block()) )) )) )) );
									HX_STACK_LINE(1457)
									_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_KillListMod"),_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_KillListMod);
								}
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						HX_STACK_LINE(1443)
						_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->runLater(((int)1000 * ((Float((Float((int)60) / Float(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)))), Dynamic(new _Function_4_2(index0,_g2)),null());
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(1415)
				this->runLater(((int)1000 * ((Float((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)))), Dynamic(new _Function_3_1(index0,_g2)),null());
				HX_STACK_LINE(1462)
				hx::SubEq(this->_DestroyListModifier,(int)1);
				HX_STACK_LINE(1463)
				this->propertyChanged(HX_CSTRING("_DestroyListModifier"),this->_DestroyListModifier);
			}
		}
		HX_STACK_LINE(1466)
		if (((this->_NumberOfMatches >= (int)2))){
			HX_STACK_LINE(1468)
			::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("SpeciaSpawn")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),1468,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_SpecialKill")));
			HX_STACK_LINE(1469)
			this->_SpecialSpawn = true;
			HX_STACK_LINE(1470)
			this->propertyChanged(HX_CSTRING("_SpecialSpawn"),this->_SpecialSpawn);
		}
		struct _Function_1_5{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1473);
				{
					HX_STACK_LINE(1473)
					return (  ((hx::TCast< Bool >::cast((int)1))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_6{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1473);
				{
					HX_STACK_LINE(1473)
					::haxe::Log_obj::trace((HX_CSTRING("1") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(1473)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(1473)
		this->_NumberOfMatches = (  ((::Std_obj::is((int)1,hx::ClassOf< ::Float >()))) ? Float((int)1) : Float((  ((::Std_obj::is((int)1,hx::ClassOf< ::Int >()))) ? Float((int)1) : Float((  ((::Std_obj::is((int)1,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_5::Block()) : Float((  ((::Std_obj::is((int)1,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)1)) : Float(_Function_1_6::Block()) )) )) )) );
		HX_STACK_LINE(1474)
		this->propertyChanged(HX_CSTRING("_NumberOfMatches"),this->_NumberOfMatches);
		struct _Function_1_7{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1475);
				{
					HX_STACK_LINE(1475)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_8{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1475);
				{
					HX_STACK_LINE(1475)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(1475)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(1475)
		this->_Multiplefinder = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_7::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_8::Block()) )) )) )) );
		HX_STACK_LINE(1476)
		this->propertyChanged(HX_CSTRING("_Multiplefinder"),this->_Multiplefinder);
		HX_STACK_LINE(1478)
		this->_SpecialKill = false;
		HX_STACK_LINE(1479)
		this->propertyChanged(HX_CSTRING("_SpecialKill"),this->_SpecialKill);
		HX_STACK_LINE(1480)
		this->_BombKill = false;
		HX_STACK_LINE(1481)
		this->propertyChanged(HX_CSTRING("_BombKill"),this->_BombKill);
		struct _Function_1_9{
			inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1482);
				{
					HX_STACK_LINE(1482)
					Dynamic o = ((__this->_Swing * __this->getGameAttribute(HX_CSTRING("Moves Counter"))) * ((Float((int)60) / Float(__this->getGameAttribute(HX_CSTRING("GameTempo"))))));		HX_STACK_VAR(o,"o");
					struct _Function_2_1{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1482);
							{
								HX_STACK_LINE(1482)
								return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static int Block( Dynamic &o){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1482);
							{
								HX_STACK_LINE(1482)
								::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(1482)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(1482)
					return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_2_2::Block(o)) )) )) )) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(1482)
		this->_Swing = _Function_1_9::Block(this);
		HX_STACK_LINE(1483)
		this->propertyChanged(HX_CSTRING("_Swing"),this->_Swing);
		HX_STACK_LINE(1484)
		this->_customEvent_BeaterSpawn();

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_10,Array< ::Dynamic >,_g2)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_10","scripts/Design_3_3_SceneManager.hx",1485);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(1486)
				_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_MatchesFound = false;
				HX_STACK_LINE(1487)
				_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_MatchesFound"),_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_MatchesFound);
				HX_STACK_LINE(1488)
				_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_CanSpawn = true;
				HX_STACK_LINE(1489)
				_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_CanSpawn"),_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_CanSpawn);
				HX_STACK_LINE(1490)
				_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_IsDestroying = false;
				HX_STACK_LINE(1491)
				_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_IsDestroying"),_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_IsDestroying);
				HX_STACK_LINE(1492)
				_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_CheckMatches = false;
				HX_STACK_LINE(1493)
				_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_CheckMatches"),_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_CheckMatches);
				struct _Function_2_1{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1494);
						{
							HX_STACK_LINE(1494)
							return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1494);
						{
							HX_STACK_LINE(1494)
							::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
							HX_STACK_LINE(1494)
							return (int)0;
						}
						return null();
					}
				};
				HX_STACK_LINE(1494)
				_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_DoubleCombo = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_2_2::Block()) )) )) )) );
				HX_STACK_LINE(1495)
				_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_DoubleCombo"),_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_DoubleCombo);
				HX_STACK_LINE(1496)
				_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_customEvent_Spawn();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1485)
		this->runLater(1200., Dynamic(new _Function_1_10(_g2)),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_3_3_SceneManager_obj,_customEvent_SpecialKill,(void))

Void Design_3_3_SceneManager_obj::_customEvent_Kill( ){
{
		HX_STACK_PUSH("Design_3_3_SceneManager::_customEvent_Kill","scripts/Design_3_3_SceneManager.hx",1223);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1222)
		Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1224)
		while((!(!(::com::stencyl::utils::Utils_obj::contains(this->getGameAttribute(HX_CSTRING("KillList")),(int)0))))){
			HX_STACK_LINE(1225)
			if ((::com::stencyl::utils::Utils_obj::contains(this->getGameAttribute(HX_CSTRING("KillList")),(int)0))){
				HX_STACK_LINE(1227)
				this->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("remove"),true)((int)0);
			}
		}
		HX_STACK_LINE(1233)
		hx::AddEq(this->_AutoCombo,::Math_obj::round((Float(this->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("length"),true)) / Float((int)3))));
		HX_STACK_LINE(1234)
		this->propertyChanged(HX_CSTRING("_AutoCombo"),this->_AutoCombo);
		struct _Function_1_1{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1235);
				{
					HX_STACK_LINE(1235)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1235);
				{
					HX_STACK_LINE(1235)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(1235)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(1235)
		this->_KillListMod = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_2::Block()) )) )) )) );
		HX_STACK_LINE(1236)
		this->propertyChanged(HX_CSTRING("_KillListMod"),this->_KillListMod);
		HX_STACK_LINE(1237)
		hx::AddEq(this->_DestroyListModifier,(int)1);
		HX_STACK_LINE(1238)
		this->propertyChanged(HX_CSTRING("_DestroyListModifier"),this->_DestroyListModifier);
		HX_STACK_LINE(1239)
		this->_IsDestroying = true;
		HX_STACK_LINE(1240)
		this->propertyChanged(HX_CSTRING("_IsDestroying"),this->_IsDestroying);
		HX_STACK_LINE(1241)
		this->_CanSpawn = false;
		HX_STACK_LINE(1242)
		this->propertyChanged(HX_CSTRING("_CanSpawn"),this->_CanSpawn);
		HX_STACK_LINE(1243)
		::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("DESTROYING")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),1243,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_Kill")));
		struct _Function_1_3{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1244);
				{
					HX_STACK_LINE(1244)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_4{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1244);
				{
					HX_STACK_LINE(1244)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(1244)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(1244)
		this->_Multiplefinder = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_3::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_4::Block()) )) )) )) );
		HX_STACK_LINE(1245)
		this->propertyChanged(HX_CSTRING("_Multiplefinder"),this->_Multiplefinder);
		HX_STACK_LINE(1246)
		{
			HX_STACK_LINE(1246)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::Std_obj::_int(this->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("length"),true));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1246)
			while(((_g1 < _g))){
				HX_STACK_LINE(1246)
				Array< int > index0 = Array_obj< int >::__new().Add((_g1)++);		HX_STACK_VAR(index0,"index0");
				HX_STACK_LINE(1248)
				if (((index0->__get((int)0) == (int)0))){
					struct _Function_4_1{
						inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this,Array< int > &index0){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1250);
							{
								HX_STACK_LINE(1250)
								Dynamic o = __this->getActor(__this->getGameAttribute(HX_CSTRING("KillList"))->__GetItem(index0->__get((int)0)))->getX(null());		HX_STACK_VAR(o,"o");
								struct _Function_5_1{
									inline static int Block( Dynamic &o){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1250);
										{
											HX_STACK_LINE(1250)
											return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
										}
										return null();
									}
								};
								struct _Function_5_2{
									inline static int Block( Dynamic &o){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1250);
										{
											HX_STACK_LINE(1250)
											::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
											HX_STACK_LINE(1250)
											return (int)0;
										}
										return null();
									}
								};
								HX_STACK_LINE(1250)
								return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_5_2::Block(o)) )) )) )) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1250)
					this->_ActorDeathPos = _Function_4_1::Block(this,index0);
					HX_STACK_LINE(1251)
					this->propertyChanged(HX_CSTRING("_ActorDeathPos"),this->_ActorDeathPos);
					struct _Function_4_2{
						inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1252);
							{
								HX_STACK_LINE(1252)
								Dynamic o = __this->_AutoCombo;		HX_STACK_VAR(o,"o");
								struct _Function_5_1{
									inline static int Block( Dynamic &o){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1252);
										{
											HX_STACK_LINE(1252)
											return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
										}
										return null();
									}
								};
								struct _Function_5_2{
									inline static int Block( Dynamic &o){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1252);
										{
											HX_STACK_LINE(1252)
											::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
											HX_STACK_LINE(1252)
											return (int)0;
										}
										return null();
									}
								};
								HX_STACK_LINE(1252)
								return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_5_2::Block(o)) )) )) )) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1252)
					this->_Combo = _Function_4_2::Block(this);
					HX_STACK_LINE(1253)
					this->propertyChanged(HX_CSTRING("_Combo"),this->_Combo);
					struct _Function_4_3{
						inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this,Array< int > &index0){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1254);
							{
								HX_STACK_LINE(1254)
								Dynamic o = __this->getActor(__this->getGameAttribute(HX_CSTRING("KillList"))->__GetItem(index0->__get((int)0)))->getY(null());		HX_STACK_VAR(o,"o");
								struct _Function_5_1{
									inline static int Block( Dynamic &o){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1254);
										{
											HX_STACK_LINE(1254)
											return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
										}
										return null();
									}
								};
								struct _Function_5_2{
									inline static int Block( Dynamic &o){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1254);
										{
											HX_STACK_LINE(1254)
											::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
											HX_STACK_LINE(1254)
											return (int)0;
										}
										return null();
									}
								};
								HX_STACK_LINE(1254)
								return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_5_2::Block(o)) )) )) )) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1254)
					this->_ActorDeathPosY = _Function_4_3::Block(this,index0);
					HX_STACK_LINE(1255)
					this->propertyChanged(HX_CSTRING("_ActorDeathPosY"),this->_ActorDeathPosY);
					HX_STACK_LINE(1256)
					this->createRecycledActor(this->getActorType((int)105),this->_ActorDeathPos,this->_ActorDeathPosY,::com::stencyl::behavior::Script_obj::FRONT);
				}
				else{
					HX_STACK_LINE(1259)
					if (((bool((index0->__get((int)0) == (this->_Multiplefinder + (int)3))) && bool((::Math_obj::round((Float(this->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("length"),true)) / Float((int)3))) >= ::Math_obj::round(1.5)))))){
						HX_STACK_LINE(1261)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						int _g21 = ::Std_obj::_int(::Math_obj::round((Float(this->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("length"),true)) / Float((int)3))));		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(1261)
						while(((_g3 < _g21))){
							HX_STACK_LINE(1261)
							int index1 = (_g3)++;		HX_STACK_VAR(index1,"index1");
							struct _Function_6_1{
								inline static Float Block( int &index1){
									HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1263);
									{
										HX_STACK_LINE(1263)
										Dynamic o = (index1 + (int)3);		HX_STACK_VAR(o,"o");
										struct _Function_7_1{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1263);
												{
													HX_STACK_LINE(1263)
													return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
												}
												return null();
											}
										};
										struct _Function_7_2{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1263);
												{
													HX_STACK_LINE(1263)
													::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
													HX_STACK_LINE(1263)
													return (int)0;
												}
												return null();
											}
										};
										HX_STACK_LINE(1263)
										return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_7_2::Block(o)) )) )) )) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(1263)
							this->_Multiplefinder = _Function_6_1::Block(index1);
							HX_STACK_LINE(1264)
							this->propertyChanged(HX_CSTRING("_Multiplefinder"),this->_Multiplefinder);
							struct _Function_6_2{
								inline static int Block( int &index1){
									HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1265);
									{
										HX_STACK_LINE(1265)
										return (  ((hx::TCast< Bool >::cast(index1))) ? int((int)1) : int((int)0) );
									}
									return null();
								}
							};
							struct _Function_6_3{
								inline static int Block( int &index1){
									HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1265);
									{
										HX_STACK_LINE(1265)
										::haxe::Log_obj::trace((::Std_obj::string(index1) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
										HX_STACK_LINE(1265)
										return (int)0;
									}
									return null();
								}
							};
							HX_STACK_LINE(1265)
							this->_Combo = (  (((index1 == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(index1,hx::ClassOf< ::Float >()))) ? Float(index1) : Float((  ((::Std_obj::is(index1,hx::ClassOf< ::Int >()))) ? Float(index1) : Float((  ((::Std_obj::is(index1,hx::ClassOf< ::Bool >()))) ? Float(_Function_6_2::Block(index1)) : Float((  ((::Std_obj::is(index1,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(index1)) : Float(_Function_6_3::Block(index1)) )) )) )) )) );
							HX_STACK_LINE(1266)
							this->propertyChanged(HX_CSTRING("_Combo"),this->_Combo);
							struct _Function_6_4{
								inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this,Array< int > &index0){
									HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1267);
									{
										HX_STACK_LINE(1267)
										Dynamic o = __this->getActor(__this->getGameAttribute(HX_CSTRING("KillList"))->__GetItem(index0->__get((int)0)))->getX(null());		HX_STACK_VAR(o,"o");
										struct _Function_7_1{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1267);
												{
													HX_STACK_LINE(1267)
													return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
												}
												return null();
											}
										};
										struct _Function_7_2{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1267);
												{
													HX_STACK_LINE(1267)
													::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
													HX_STACK_LINE(1267)
													return (int)0;
												}
												return null();
											}
										};
										HX_STACK_LINE(1267)
										return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_7_2::Block(o)) )) )) )) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(1267)
							this->_ActorDeathPos = _Function_6_4::Block(this,index0);
							HX_STACK_LINE(1268)
							this->propertyChanged(HX_CSTRING("_ActorDeathPos"),this->_ActorDeathPos);
							struct _Function_6_5{
								inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this,Array< int > &index0){
									HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1269);
									{
										HX_STACK_LINE(1269)
										Dynamic o = __this->getActor(__this->getGameAttribute(HX_CSTRING("KillList"))->__GetItem(index0->__get((int)0)))->getY(null());		HX_STACK_VAR(o,"o");
										struct _Function_7_1{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1269);
												{
													HX_STACK_LINE(1269)
													return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
												}
												return null();
											}
										};
										struct _Function_7_2{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1269);
												{
													HX_STACK_LINE(1269)
													::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
													HX_STACK_LINE(1269)
													return (int)0;
												}
												return null();
											}
										};
										HX_STACK_LINE(1269)
										return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_7_2::Block(o)) )) )) )) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(1269)
							this->_ActorDeathPosY = _Function_6_5::Block(this,index0);
							HX_STACK_LINE(1270)
							this->propertyChanged(HX_CSTRING("_ActorDeathPosY"),this->_ActorDeathPosY);
							HX_STACK_LINE(1271)
							this->createRecycledActor(this->getActorType((int)105),this->_ActorDeathPos,this->_ActorDeathPosY,::com::stencyl::behavior::Script_obj::FRONT);
						}
					}
				}

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Array< int >,index0,Array< ::Dynamic >,_g2)
				Void run(::com::stencyl::behavior::TimedTask timeTask){
					HX_STACK_PUSH("*::_Function_3_1","scripts/Design_3_3_SceneManager.hx",1278);
					HX_STACK_ARG(timeTask,"timeTask");
					{
						HX_STACK_LINE(1279)
						::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("EMITTING PARTICLES")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),1279,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_Kill")));
						HX_STACK_LINE(1280)
						_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActor(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("KillList"))->__GetItem(index0->__get((int)0)))->say(HX_CSTRING("Particles"),(HX_CSTRING("_customEvent_") + HX_CSTRING("StartEmitting")),null());
						HX_STACK_LINE(1282)
						_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActor(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("KillList"))->__GetItem(index0->__get((int)0)))->setFilter(Dynamic( Array_obj<Dynamic>::__new().Add(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->createGrayscaleFilter())));
						HX_STACK_LINE(1284)
						_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->playSoundOnChannel(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSound((int)11),(int)3);

						HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Array< int >,index0,Array< ::Dynamic >,_g2)
						Void run(::com::stencyl::behavior::TimedTask timeTask1){
							HX_STACK_PUSH("*::_Function_4_1","scripts/Design_3_3_SceneManager.hx",1285);
							HX_STACK_ARG(timeTask1,"timeTask1");
							{
								HX_STACK_LINE(1286)
								::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("KILLING ACTOR")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),1286,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_Kill")));
								HX_STACK_LINE(1287)
								_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->recycleActor(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActor(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("KillList"))->__GetItem((int)0)));
								HX_STACK_LINE(1288)
								::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("KILLED ACTOR")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),1288,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_Kill")));
								HX_STACK_LINE(1289)
								_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("splice"),true)((int)0,(int)1);
								HX_STACK_LINE(1290)
								hx::AddEq(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Score,(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_NumberOfMatches * (int)250));
								HX_STACK_LINE(1291)
								_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_Score"),_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Score);
								HX_STACK_LINE(1292)
								hx::AddEq(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_KillListMod,index0->__get((int)0));
								HX_STACK_LINE(1293)
								_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_KillListMod"),_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_KillListMod);
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						HX_STACK_LINE(1285)
						_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->runLater(((int)1000 * ((Float((Float((int)60) / Float(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)))), Dynamic(new _Function_4_1(index0,_g2)),null());
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(1278)
				this->runLater(((int)1000 * ((Float((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)))), Dynamic(new _Function_3_1(index0,_g2)),null());
				HX_STACK_LINE(1296)
				hx::SubEq(this->_DestroyListModifier,(int)1);
				HX_STACK_LINE(1297)
				this->propertyChanged(HX_CSTRING("_DestroyListModifier"),this->_DestroyListModifier);
			}
		}
		HX_STACK_LINE(1301)
		if (((this->_NumberOfMatches >= (int)2))){
			HX_STACK_LINE(1303)
			::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("SpeciaSpawn")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),1303,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_Kill")));
			HX_STACK_LINE(1304)
			this->_SpecialSpawn = true;
			HX_STACK_LINE(1305)
			this->propertyChanged(HX_CSTRING("_SpecialSpawn"),this->_SpecialSpawn);
		}
		HX_STACK_LINE(1308)
		if (((this->_NumberOfMatches == (int)1))){
			HX_STACK_LINE(1309)
			this->playSoundOnChannel(this->getSound((int)60),(int)4);
		}
		else{
			HX_STACK_LINE(1313)
			if (((this->_NumberOfMatches == (int)2))){
				HX_STACK_LINE(1315)
				this->playSoundOnChannel(this->getSound((int)60),(int)5);

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_g2)
				Void run(::com::stencyl::behavior::TimedTask timeTask){
					HX_STACK_PUSH("*::_Function_3_1","scripts/Design_3_3_SceneManager.hx",1316);
					HX_STACK_ARG(timeTask,"timeTask");
					{
						HX_STACK_LINE(1316)
						_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->playSoundOnChannel(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSound((int)60),(int)6);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(1316)
				this->runLater(((int)1000 * ((Float((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)))), Dynamic(new _Function_3_1(_g2)),null());
			}
			else{
				HX_STACK_LINE(1321)
				if (((this->_NumberOfMatches == (int)3))){
					HX_STACK_LINE(1323)
					this->playSoundOnChannel(this->getSound((int)60),(int)4);

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_g2)
					Void run(::com::stencyl::behavior::TimedTask timeTask){
						HX_STACK_PUSH("*::_Function_4_1","scripts/Design_3_3_SceneManager.hx",1324);
						HX_STACK_ARG(timeTask,"timeTask");
						{
							HX_STACK_LINE(1325)
							_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->playSoundOnChannel(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSound((int)60),(int)5);

							HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_5_1,Array< ::Dynamic >,_g2)
							Void run(::com::stencyl::behavior::TimedTask timeTask1){
								HX_STACK_PUSH("*::_Function_5_1","scripts/Design_3_3_SceneManager.hx",1326);
								HX_STACK_ARG(timeTask1,"timeTask1");
								{
									HX_STACK_LINE(1326)
									_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->playSoundOnChannel(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSound((int)60),(int)6);
								}
								return null();
							}
							HX_END_LOCAL_FUNC1((void))

							HX_STACK_LINE(1326)
							_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->runLater(((int)1000 * ((Float((Float((int)60) / Float(_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)))), Dynamic(new _Function_5_1(_g2)),null());
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(1324)
					this->runLater(((int)1000 * ((Float((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)))), Dynamic(new _Function_4_1(_g2)),null());
				}
			}
		}
		struct _Function_1_5{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1333);
				{
					HX_STACK_LINE(1333)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_6{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1333);
				{
					HX_STACK_LINE(1333)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(1333)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(1333)
		this->_Multiplefinder = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_5::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_6::Block()) )) )) )) );
		HX_STACK_LINE(1334)
		this->propertyChanged(HX_CSTRING("_Multiplefinder"),this->_Multiplefinder);
		struct _Function_1_7{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1335);
				{
					HX_STACK_LINE(1335)
					return (  ((hx::TCast< Bool >::cast((int)1))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_8{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1335);
				{
					HX_STACK_LINE(1335)
					::haxe::Log_obj::trace((HX_CSTRING("1") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(1335)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(1335)
		this->_NumberOfMatches = (  ((::Std_obj::is((int)1,hx::ClassOf< ::Float >()))) ? Float((int)1) : Float((  ((::Std_obj::is((int)1,hx::ClassOf< ::Int >()))) ? Float((int)1) : Float((  ((::Std_obj::is((int)1,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_7::Block()) : Float((  ((::Std_obj::is((int)1,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)1)) : Float(_Function_1_8::Block()) )) )) )) );
		HX_STACK_LINE(1336)
		this->propertyChanged(HX_CSTRING("_NumberOfMatches"),this->_NumberOfMatches);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_9,Array< ::Dynamic >,_g2)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_9","scripts/Design_3_3_SceneManager.hx",1337);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(1338)
				::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("RESETTING BOOLS")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),1338,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_Kill")));
				HX_STACK_LINE(1339)
				_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_PlayerInput = false;
				HX_STACK_LINE(1340)
				_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_PlayerInput"),_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_PlayerInput);
				HX_STACK_LINE(1341)
				_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_BombKill = false;
				HX_STACK_LINE(1342)
				_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_BombKill"),_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_BombKill);
				HX_STACK_LINE(1343)
				_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_MatchesFound = false;
				HX_STACK_LINE(1344)
				_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_MatchesFound"),_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_MatchesFound);
				HX_STACK_LINE(1345)
				_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_CanSpawn = true;
				HX_STACK_LINE(1346)
				_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_CanSpawn"),_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_CanSpawn);
				HX_STACK_LINE(1347)
				_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_IsDestroying = false;
				HX_STACK_LINE(1348)
				_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_IsDestroying"),_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_IsDestroying);
				HX_STACK_LINE(1349)
				_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_CheckMatches = false;
				HX_STACK_LINE(1350)
				_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_CheckMatches"),_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_CheckMatches);
				HX_STACK_LINE(1351)
				_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_customEvent_BeaterSpawn();
				HX_STACK_LINE(1352)
				_g2->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_customEvent_Spawn();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1337)
		this->runLater(1200., Dynamic(new _Function_1_9(_g2)),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_3_3_SceneManager_obj,_customEvent_Kill,(void))

Void Design_3_3_SceneManager_obj::_customEvent_PreKill( ){
{
		HX_STACK_PUSH("Design_3_3_SceneManager::_customEvent_PreKill","scripts/Design_3_3_SceneManager.hx",1183);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1183)
		if (((bool(!(this->_IsDestroying)) && bool((this->_NumberOfMatches >= (int)1))))){
			HX_STACK_LINE(1186)
			if ((this->getGameAttribute(HX_CSTRING("TapMode")))){
				HX_STACK_LINE(1188)
				this->_customEvent_Kill();
				HX_STACK_LINE(1189)
				this->_customEvent_ResetTap();
			}
			HX_STACK_LINE(1192)
			if (((this->_SpecialKill == true))){
				HX_STACK_LINE(1193)
				this->_customEvent_SpecialKill();
			}
			else{
				HX_STACK_LINE(1197)
				if ((!(this->getGameAttribute(HX_CSTRING("TapMode"))))){
					HX_STACK_LINE(1198)
					this->_customEvent_Kill();
				}
			}
		}
		else{
			HX_STACK_LINE(1204)
			if (((bool(!(this->_IsDestroying)) && bool((this->_NumberOfMatches <= (int)0))))){
				HX_STACK_LINE(1206)
				this->_CheckMatches = false;
				HX_STACK_LINE(1207)
				this->propertyChanged(HX_CSTRING("_CheckMatches"),this->_CheckMatches);
				HX_STACK_LINE(1208)
				this->_customEvent_CheckWinConditions();
				struct _Function_3_1{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1209);
						{
							HX_STACK_LINE(1209)
							return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1209);
						{
							HX_STACK_LINE(1209)
							::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
							HX_STACK_LINE(1209)
							return (int)0;
						}
						return null();
					}
				};
				HX_STACK_LINE(1209)
				this->_Combo = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_3_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_3_2::Block()) )) )) )) );
				HX_STACK_LINE(1210)
				this->propertyChanged(HX_CSTRING("_Combo"),this->_Combo);
				struct _Function_3_3{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1211);
						{
							HX_STACK_LINE(1211)
							return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
						}
						return null();
					}
				};
				struct _Function_3_4{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1211);
						{
							HX_STACK_LINE(1211)
							::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
							HX_STACK_LINE(1211)
							return (int)0;
						}
						return null();
					}
				};
				HX_STACK_LINE(1211)
				this->_AutoCombo = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_3_3::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_3_4::Block()) )) )) )) );
				HX_STACK_LINE(1212)
				this->propertyChanged(HX_CSTRING("_AutoCombo"),this->_AutoCombo);
				HX_STACK_LINE(1215)
				return null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_3_3_SceneManager_obj,_customEvent_PreKill,(void))

Void Design_3_3_SceneManager_obj::_customEvent_Check( ){
{
		HX_STACK_PUSH("Design_3_3_SceneManager::_customEvent_Check","scripts/Design_3_3_SceneManager.hx",750);
		HX_STACK_THIS(this);
		HX_STACK_LINE(751)
		this->_CheckMatches = true;
		HX_STACK_LINE(752)
		this->propertyChanged(HX_CSTRING("_CheckMatches"),this->_CheckMatches);
		HX_STACK_LINE(753)
		::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("CHECKING")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),753,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_Check")));
		struct _Function_1_1{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",754);
				{
					HX_STACK_LINE(754)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",754);
				{
					HX_STACK_LINE(754)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(754)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(754)
		this->_NumberOfMatches = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_2::Block()) )) )) )) );
		HX_STACK_LINE(755)
		this->propertyChanged(HX_CSTRING("_NumberOfMatches"),this->_NumberOfMatches);
		struct _Function_1_3{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",757);
				{
					HX_STACK_LINE(757)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_4{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",757);
				{
					HX_STACK_LINE(757)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(757)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(757)
		this->_GemTypeNumber = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_3::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_4::Block()) )) )) )) );
		HX_STACK_LINE(758)
		this->propertyChanged(HX_CSTRING("_GemTypeNumber"),this->_GemTypeNumber);
		struct _Function_1_5{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",759);
				{
					HX_STACK_LINE(759)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_6{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",759);
				{
					HX_STACK_LINE(759)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(759)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(759)
		this->_Xincrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_5::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_6::Block()) )) )) )) );
		HX_STACK_LINE(760)
		this->propertyChanged(HX_CSTRING("_Xincrementer"),this->_Xincrementer);
		struct _Function_1_7{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",761);
				{
					HX_STACK_LINE(761)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_8{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",761);
				{
					HX_STACK_LINE(761)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(761)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(761)
		this->_Searcher = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_7::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_8::Block()) )) )) )) );
		HX_STACK_LINE(762)
		this->propertyChanged(HX_CSTRING("_Searcher"),this->_Searcher);
		struct _Function_1_9{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",763);
				{
					HX_STACK_LINE(763)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_10{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",763);
				{
					HX_STACK_LINE(763)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(763)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(763)
		this->_XSearcher = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_9::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_10::Block()) )) )) )) );
		HX_STACK_LINE(764)
		this->propertyChanged(HX_CSTRING("_XSearcher"),this->_XSearcher);
		struct _Function_1_11{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",765);
				{
					HX_STACK_LINE(765)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_12{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",765);
				{
					HX_STACK_LINE(765)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(765)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(765)
		this->_YIncrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_11::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_12::Block()) )) )) )) );
		HX_STACK_LINE(766)
		this->propertyChanged(HX_CSTRING("_YIncrementer"),this->_YIncrementer);
		struct _Function_1_13{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",767);
				{
					HX_STACK_LINE(767)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_14{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",767);
				{
					HX_STACK_LINE(767)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(767)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(767)
		this->_DoubleCombo = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_13::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_14::Block()) )) )) )) );
		HX_STACK_LINE(768)
		this->propertyChanged(HX_CSTRING("_DoubleCombo"),this->_DoubleCombo);
		HX_STACK_LINE(769)
		while((!(((this->_GemTypeNumber == (int)6))))){
			HX_STACK_LINE(771)
			hx::AddEq(this->_GemTypeNumber,(int)1);
			HX_STACK_LINE(772)
			this->propertyChanged(HX_CSTRING("_GemTypeNumber"),this->_GemTypeNumber);
			struct _Function_2_1{
				inline static int Block( ){
					HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",773);
					{
						HX_STACK_LINE(773)
						return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static int Block( ){
					HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",773);
					{
						HX_STACK_LINE(773)
						::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
						HX_STACK_LINE(773)
						return (int)0;
					}
					return null();
				}
			};
			HX_STACK_LINE(773)
			this->_Searcher = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_2_2::Block()) )) )) )) );
			HX_STACK_LINE(774)
			this->propertyChanged(HX_CSTRING("_Searcher"),this->_Searcher);
			struct _Function_2_3{
				inline static int Block( ){
					HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",775);
					{
						HX_STACK_LINE(775)
						return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static int Block( ){
					HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",775);
					{
						HX_STACK_LINE(775)
						::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
						HX_STACK_LINE(775)
						return (int)0;
					}
					return null();
				}
			};
			HX_STACK_LINE(775)
			this->_Xincrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_3::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_2_4::Block()) )) )) )) );
			HX_STACK_LINE(776)
			this->propertyChanged(HX_CSTRING("_Xincrementer"),this->_Xincrementer);
			HX_STACK_LINE(777)
			{
				HX_STACK_LINE(777)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = ::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridX")));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(777)
				while(((_g1 < _g))){
					HX_STACK_LINE(777)
					int index0 = (_g1)++;		HX_STACK_VAR(index0,"index0");
					struct _Function_4_1{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",779);
							{
								HX_STACK_LINE(779)
								return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",779);
							{
								HX_STACK_LINE(779)
								::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(779)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(779)
					this->_Searcher = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_4_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_4_2::Block()) )) )) )) );
					HX_STACK_LINE(780)
					this->propertyChanged(HX_CSTRING("_Searcher"),this->_Searcher);
					HX_STACK_LINE(781)
					{
						HX_STACK_LINE(781)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						int _g2 = ::Std_obj::_int((this->getGameAttribute(HX_CSTRING("GridY")) - (int)2));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(781)
						while(((_g3 < _g2))){
							HX_STACK_LINE(781)
							int index1 = (_g3)++;		HX_STACK_VAR(index1,"index1");
							struct _Function_6_1{
								inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
									HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",784);
									{
										HX_STACK_LINE(784)
										Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int(__this->_Searcher),__this->_GemType);		HX_STACK_VAR(o,"o");
										struct _Function_7_1{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",784);
												{
													HX_STACK_LINE(784)
													return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
												}
												return null();
											}
										};
										struct _Function_7_2{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",784);
												{
													HX_STACK_LINE(784)
													::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
													HX_STACK_LINE(784)
													return (int)0;
												}
												return null();
											}
										};
										HX_STACK_LINE(784)
										return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_7_2::Block(o)) )) )) )) )) );
									}
									return null();
								}
							};
							struct _Function_6_2{
								inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
									HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",784);
									{
										HX_STACK_LINE(784)
										Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int((__this->_Searcher + (int)1)),__this->_GemType);		HX_STACK_VAR(o,"o");
										struct _Function_7_1{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",784);
												{
													HX_STACK_LINE(784)
													return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
												}
												return null();
											}
										};
										struct _Function_7_2{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",784);
												{
													HX_STACK_LINE(784)
													::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
													HX_STACK_LINE(784)
													return (int)0;
												}
												return null();
											}
										};
										HX_STACK_LINE(784)
										return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_7_2::Block(o)) )) )) )) )) );
									}
									return null();
								}
							};
							struct _Function_6_3{
								inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
									HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",784);
									{
										HX_STACK_LINE(784)
										Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int((__this->_Searcher + (int)2)),__this->_GemType);		HX_STACK_VAR(o,"o");
										struct _Function_7_1{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",784);
												{
													HX_STACK_LINE(784)
													return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
												}
												return null();
											}
										};
										struct _Function_7_2{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",784);
												{
													HX_STACK_LINE(784)
													::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
													HX_STACK_LINE(784)
													return (int)0;
												}
												return null();
											}
										};
										HX_STACK_LINE(784)
										return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_7_2::Block(o)) )) )) )) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(784)
							if (((bool((bool((_Function_6_1::Block(this) == this->_GemTypeNumber)) && bool((_Function_6_2::Block(this) == this->_GemTypeNumber)))) && bool((_Function_6_3::Block(this) == this->_GemTypeNumber))))){
								HX_STACK_LINE(786)
								::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("MATCH UP FOUND!")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),786,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_Check")));
								HX_STACK_LINE(787)
								this->_MatchesFound = true;
								HX_STACK_LINE(788)
								this->propertyChanged(HX_CSTRING("_MatchesFound"),this->_MatchesFound);
								HX_STACK_LINE(790)
								hx::AddEq(this->_NumberOfMatches,(int)1);
								HX_STACK_LINE(791)
								this->propertyChanged(HX_CSTRING("_NumberOfMatches"),this->_NumberOfMatches);
								struct _Function_7_1{
									inline static int Block( ){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",792);
										{
											HX_STACK_LINE(792)
											return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
										}
										return null();
									}
								};
								struct _Function_7_2{
									inline static int Block( ){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",792);
										{
											HX_STACK_LINE(792)
											::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
											HX_STACK_LINE(792)
											return (int)0;
										}
										return null();
									}
								};
								HX_STACK_LINE(792)
								this->_ExtraSearcher = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_7_2::Block()) )) )) )) );
								HX_STACK_LINE(793)
								this->propertyChanged(HX_CSTRING("_ExtraSearcher"),this->_ExtraSearcher);
								HX_STACK_LINE(794)
								while((!(((this->_ExtraSearcher == this->getGameAttribute(HX_CSTRING("GridY"))))))){
									struct _Function_8_1{
										inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
											HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",796);
											{
												HX_STACK_LINE(796)
												Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int(((__this->_Searcher + (int)3) + __this->_ExtraSearcher)),__this->_GemType);		HX_STACK_VAR(o,"o");
												struct _Function_9_1{
													inline static int Block( Dynamic &o){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",796);
														{
															HX_STACK_LINE(796)
															return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
														}
														return null();
													}
												};
												struct _Function_9_2{
													inline static int Block( Dynamic &o){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",796);
														{
															HX_STACK_LINE(796)
															::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
															HX_STACK_LINE(796)
															return (int)0;
														}
														return null();
													}
												};
												HX_STACK_LINE(796)
												return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_9_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_9_2::Block(o)) )) )) )) )) );
											}
											return null();
										}
									};
									struct _Function_8_2{
										inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
											HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",796);
											{
												HX_STACK_LINE(796)
												Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int((__this->_Searcher + (int)2)),__this->_GemType);		HX_STACK_VAR(o,"o");
												struct _Function_9_1{
													inline static int Block( Dynamic &o){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",796);
														{
															HX_STACK_LINE(796)
															return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
														}
														return null();
													}
												};
												struct _Function_9_2{
													inline static int Block( Dynamic &o){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",796);
														{
															HX_STACK_LINE(796)
															::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
															HX_STACK_LINE(796)
															return (int)0;
														}
														return null();
													}
												};
												HX_STACK_LINE(796)
												return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_9_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_9_2::Block(o)) )) )) )) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(795)
									if (((_Function_8_1::Block(this) == _Function_8_2::Block(this)))){
										HX_STACK_LINE(798)
										::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("ExtraUpFound")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),798,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_Check")));
										struct _Function_9_1{
											inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",799);
												{
													HX_STACK_LINE(799)
													Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int(((__this->_Searcher + (int)3) + __this->_ExtraSearcher)),__this->_UID);		HX_STACK_VAR(o,"o");
													struct _Function_10_1{
														inline static int Block( Dynamic &o){
															HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",799);
															{
																HX_STACK_LINE(799)
																return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
															}
															return null();
														}
													};
													struct _Function_10_2{
														inline static int Block( Dynamic &o){
															HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",799);
															{
																HX_STACK_LINE(799)
																::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																HX_STACK_LINE(799)
																return (int)0;
															}
															return null();
														}
													};
													HX_STACK_LINE(799)
													return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_10_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_10_2::Block(o)) )) )) )) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(799)
										this->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("insert"),true)(::Std_obj::_int((this->_ExtraSearcher + (int)3)),_Function_9_1::Block(this));
										HX_STACK_LINE(800)
										::List2D_obj::set_entry(::Std_obj::_int(this->_Xincrementer),::Std_obj::_int(((this->_Searcher + (int)3) + this->_ExtraSearcher)),null(),this->_UID);
										HX_STACK_LINE(801)
										::List2D_obj::set_entry(::Std_obj::_int(this->_Xincrementer),::Std_obj::_int(((this->_Searcher + (int)3) + this->_ExtraSearcher)),null(),this->_GemType);
										HX_STACK_LINE(802)
										::List2D_obj::set_entry(::Std_obj::_int(this->_Xincrementer),::Std_obj::_int(((this->_Searcher + (int)3) + this->_ExtraSearcher)),null(),this->_AlreadySpawned);
										HX_STACK_LINE(803)
										hx::AddEq(this->_NumberOfMatches,(int)1);
										HX_STACK_LINE(804)
										this->propertyChanged(HX_CSTRING("_NumberOfMatches"),this->_NumberOfMatches);
										HX_STACK_LINE(805)
										hx::AddEq(this->_ExtraSearcher,(int)1);
										HX_STACK_LINE(806)
										this->propertyChanged(HX_CSTRING("_ExtraSearcher"),this->_ExtraSearcher);
									}
									else{
										HX_STACK_LINE(810)
										break;
									}
								}
								struct _Function_7_3{
									inline static int Block( ){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",816);
										{
											HX_STACK_LINE(816)
											return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
										}
										return null();
									}
								};
								struct _Function_7_4{
									inline static int Block( ){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",816);
										{
											HX_STACK_LINE(816)
											::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
											HX_STACK_LINE(816)
											return (int)0;
										}
										return null();
									}
								};
								HX_STACK_LINE(816)
								this->_ExtraSearcher = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_3::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_7_4::Block()) )) )) )) );
								HX_STACK_LINE(817)
								this->propertyChanged(HX_CSTRING("_ExtraSearcher"),this->_ExtraSearcher);
								struct _Function_7_5{
									inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",818);
										{
											HX_STACK_LINE(818)
											Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int(__this->_Searcher),__this->_SpecialListBomb);		HX_STACK_VAR(o,"o");
											struct _Function_8_1{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",818);
													{
														HX_STACK_LINE(818)
														return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",818);
													{
														HX_STACK_LINE(818)
														::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
														HX_STACK_LINE(818)
														return (int)0;
													}
													return null();
												}
											};
											HX_STACK_LINE(818)
											return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_8_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_8_2::Block(o)) )) )) )) )) );
										}
										return null();
									}
								};
								struct _Function_7_6{
									inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",818);
										{
											HX_STACK_LINE(818)
											Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int((__this->_Searcher + (int)1)),__this->_SpecialListBomb);		HX_STACK_VAR(o,"o");
											struct _Function_8_1{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",818);
													{
														HX_STACK_LINE(818)
														return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",818);
													{
														HX_STACK_LINE(818)
														::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
														HX_STACK_LINE(818)
														return (int)0;
													}
													return null();
												}
											};
											HX_STACK_LINE(818)
											return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_8_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_8_2::Block(o)) )) )) )) )) );
										}
										return null();
									}
								};
								struct _Function_7_7{
									inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",818);
										{
											HX_STACK_LINE(818)
											Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int((__this->_Searcher + (int)2)),__this->_SpecialListBomb);		HX_STACK_VAR(o,"o");
											struct _Function_8_1{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",818);
													{
														HX_STACK_LINE(818)
														return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",818);
													{
														HX_STACK_LINE(818)
														::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
														HX_STACK_LINE(818)
														return (int)0;
													}
													return null();
												}
											};
											HX_STACK_LINE(818)
											return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_8_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_8_2::Block(o)) )) )) )) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(818)
								if (((bool((_Function_7_5::Block(this) == (int)1)) || bool(((bool((_Function_7_6::Block(this) == (int)1)) || bool((_Function_7_7::Block(this) == (int)1)))))))){
									HX_STACK_LINE(820)
									this->_SpecialKill = true;
									HX_STACK_LINE(821)
									this->propertyChanged(HX_CSTRING("_SpecialKill"),this->_SpecialKill);
									struct _Function_8_1{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",823);
											{
												HX_STACK_LINE(823)
												return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_8_2{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",823);
											{
												HX_STACK_LINE(823)
												::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(823)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(823)
									this->_Searcher = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_8_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_8_2::Block()) )) )) )) );
									HX_STACK_LINE(824)
									this->propertyChanged(HX_CSTRING("_Searcher"),this->_Searcher);
									HX_STACK_LINE(825)
									{
										HX_STACK_LINE(825)
										int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
										int _g4 = ::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridY")));		HX_STACK_VAR(_g4,"_g4");
										HX_STACK_LINE(825)
										while(((_g5 < _g4))){
											HX_STACK_LINE(825)
											int index2 = (_g5)++;		HX_STACK_VAR(index2,"index2");
											struct _Function_10_1{
												inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",827);
													{
														HX_STACK_LINE(827)
														Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int(__this->_Searcher),__this->_UID);		HX_STACK_VAR(o,"o");
														struct _Function_11_1{
															inline static int Block( Dynamic &o){
																HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",827);
																{
																	HX_STACK_LINE(827)
																	return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
																}
																return null();
															}
														};
														struct _Function_11_2{
															inline static int Block( Dynamic &o){
																HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",827);
																{
																	HX_STACK_LINE(827)
																	::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																	HX_STACK_LINE(827)
																	return (int)0;
																}
																return null();
															}
														};
														HX_STACK_LINE(827)
														return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_11_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_11_2::Block(o)) )) )) )) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(827)
											this->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("insert"),true)(::Std_obj::_int(this->_Searcher),_Function_10_1::Block(this));
											struct _Function_10_2{
												inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",828);
													{
														HX_STACK_LINE(828)
														Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int(__this->_Searcher),__this->_SpecialListBomb);		HX_STACK_VAR(o,"o");
														struct _Function_11_1{
															inline static int Block( Dynamic &o){
																HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",828);
																{
																	HX_STACK_LINE(828)
																	return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
																}
																return null();
															}
														};
														struct _Function_11_2{
															inline static int Block( Dynamic &o){
																HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",828);
																{
																	HX_STACK_LINE(828)
																	::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																	HX_STACK_LINE(828)
																	return (int)0;
																}
																return null();
															}
														};
														HX_STACK_LINE(828)
														return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_11_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_11_2::Block(o)) )) )) )) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(828)
											if (((_Function_10_2::Block(this) == (int)1))){
												HX_STACK_LINE(830)
												::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("DoubleBomb Up Found")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),830,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_Check")));
												HX_STACK_LINE(831)
												hx::AddEq(this->_DoubleCombo,(int)1);
												HX_STACK_LINE(832)
												this->propertyChanged(HX_CSTRING("_DoubleCombo"),this->_DoubleCombo);
											}
											HX_STACK_LINE(835)
											if (((this->_DoubleCombo >= (int)2))){
												struct _Function_11_1{
													inline static int Block( ){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",838);
														{
															HX_STACK_LINE(838)
															return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
														}
														return null();
													}
												};
												struct _Function_11_2{
													inline static int Block( ){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",838);
														{
															HX_STACK_LINE(838)
															::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
															HX_STACK_LINE(838)
															return (int)0;
														}
														return null();
													}
												};
												HX_STACK_LINE(838)
												this->_DoubleCombo = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_11_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_11_2::Block()) )) )) )) );
												HX_STACK_LINE(839)
												this->propertyChanged(HX_CSTRING("_DoubleCombo"),this->_DoubleCombo);
												HX_STACK_LINE(840)
												this->_CreateBombPiece = true;
												HX_STACK_LINE(841)
												this->propertyChanged(HX_CSTRING("_CreateBombPiece"),this->_CreateBombPiece);
												struct _Function_11_3{
													inline static int Block( ){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",842);
														{
															HX_STACK_LINE(842)
															return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
														}
														return null();
													}
												};
												struct _Function_11_4{
													inline static int Block( ){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",842);
														{
															HX_STACK_LINE(842)
															::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
															HX_STACK_LINE(842)
															return (int)0;
														}
														return null();
													}
												};
												HX_STACK_LINE(842)
												this->_YIncrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_11_3::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_11_4::Block()) )) )) )) );
												HX_STACK_LINE(843)
												this->propertyChanged(HX_CSTRING("_YIncrementer"),this->_YIncrementer);
												struct _Function_11_5{
													inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",844);
														{
															HX_STACK_LINE(844)
															Dynamic o = __this->_Xincrementer;		HX_STACK_VAR(o,"o");
															struct _Function_12_1{
																inline static int Block( Dynamic &o){
																	HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",844);
																	{
																		HX_STACK_LINE(844)
																		return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
																	}
																	return null();
																}
															};
															struct _Function_12_2{
																inline static int Block( Dynamic &o){
																	HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",844);
																	{
																		HX_STACK_LINE(844)
																		::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																		HX_STACK_LINE(844)
																		return (int)0;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(844)
															return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_12_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_12_2::Block(o)) )) )) )) )) );
														}
														return null();
													}
												};
												HX_STACK_LINE(844)
												this->_XSearcher = _Function_11_5::Block(this);
												HX_STACK_LINE(845)
												this->propertyChanged(HX_CSTRING("_XSearcher"),this->_XSearcher);
												HX_STACK_LINE(846)
												{
													HX_STACK_LINE(846)
													int _g7 = (int)0;		HX_STACK_VAR(_g7,"_g7");
													int _g6 = ::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridX")));		HX_STACK_VAR(_g6,"_g6");
													HX_STACK_LINE(846)
													while(((_g7 < _g6))){
														HX_STACK_LINE(846)
														int index3 = (_g7)++;		HX_STACK_VAR(index3,"index3");
														HX_STACK_LINE(848)
														if ((!(::com::stencyl::utils::Utils_obj::contains(this->getGameAttribute(HX_CSTRING("KillList")),::List2D_obj::get_entry(::Std_obj::_int(this->_XSearcher),::Std_obj::_int(this->_YIncrementer),this->_UID))))){
															struct _Function_14_1{
																inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
																	HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",850);
																	{
																		HX_STACK_LINE(850)
																		Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_XSearcher),::Std_obj::_int(__this->_YIncrementer),__this->_UID);		HX_STACK_VAR(o,"o");
																		struct _Function_15_1{
																			inline static int Block( Dynamic &o){
																				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",850);
																				{
																					HX_STACK_LINE(850)
																					return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
																				}
																				return null();
																			}
																		};
																		struct _Function_15_2{
																			inline static int Block( Dynamic &o){
																				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",850);
																				{
																					HX_STACK_LINE(850)
																					::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																					HX_STACK_LINE(850)
																					return (int)0;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(850)
																		return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_15_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_15_2::Block(o)) )) )) )) )) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(849)
															this->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("insert"),true)(::Std_obj::_int(this->_XSearcher),_Function_14_1::Block(this));
														}
														HX_STACK_LINE(853)
														::List2D_obj::set_entry(::Std_obj::_int(this->_XSearcher),::Std_obj::_int(this->_YIncrementer),null(),this->_UID);
														HX_STACK_LINE(854)
														::List2D_obj::set_entry(::Std_obj::_int(this->_XSearcher),::Std_obj::_int(this->_YIncrementer),null(),this->_GemType);
														HX_STACK_LINE(855)
														::List2D_obj::set_entry(::Std_obj::_int(this->_XSearcher),::Std_obj::_int(this->_YIncrementer),null(),this->_AlreadySpawned);
														HX_STACK_LINE(856)
														::List2D_obj::set_entry(::Std_obj::_int(this->_XSearcher),::Std_obj::_int(this->_YIncrementer),null(),this->_SpecialListBomb);
														HX_STACK_LINE(857)
														hx::AddEq(this->_XSearcher,(int)1);
														HX_STACK_LINE(858)
														this->propertyChanged(HX_CSTRING("_XSearcher"),this->_XSearcher);
													}
												}
											}
											HX_STACK_LINE(864)
											::List2D_obj::set_entry(::Std_obj::_int(this->_Xincrementer),::Std_obj::_int(this->_Searcher),null(),this->_UID);
											HX_STACK_LINE(865)
											::List2D_obj::set_entry(::Std_obj::_int(this->_Xincrementer),::Std_obj::_int(this->_Searcher),null(),this->_GemType);
											HX_STACK_LINE(866)
											::List2D_obj::set_entry(::Std_obj::_int(this->_Xincrementer),::Std_obj::_int(this->_Searcher),null(),this->_AlreadySpawned);
											HX_STACK_LINE(867)
											::List2D_obj::set_entry(::Std_obj::_int(this->_Xincrementer),::Std_obj::_int(this->_Searcher),null(),this->_SpecialListBomb);
											HX_STACK_LINE(868)
											hx::AddEq(this->_Searcher,(int)1);
											HX_STACK_LINE(869)
											this->propertyChanged(HX_CSTRING("_Searcher"),this->_Searcher);
										}
									}
									HX_STACK_LINE(872)
									this->_customEvent_PreKill();
									HX_STACK_LINE(873)
									return null();
								}
								else{
									struct _Function_8_1{
										inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
											HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",876);
											{
												HX_STACK_LINE(876)
												Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int(__this->_Searcher),__this->_SpecialListBomb);		HX_STACK_VAR(o,"o");
												struct _Function_9_1{
													inline static int Block( Dynamic &o){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",876);
														{
															HX_STACK_LINE(876)
															return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
														}
														return null();
													}
												};
												struct _Function_9_2{
													inline static int Block( Dynamic &o){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",876);
														{
															HX_STACK_LINE(876)
															::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
															HX_STACK_LINE(876)
															return (int)0;
														}
														return null();
													}
												};
												HX_STACK_LINE(876)
												return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_9_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_9_2::Block(o)) )) )) )) )) );
											}
											return null();
										}
									};
									struct _Function_8_2{
										inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
											HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",876);
											{
												HX_STACK_LINE(876)
												Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int((__this->_Searcher + (int)1)),__this->_SpecialListBomb);		HX_STACK_VAR(o,"o");
												struct _Function_9_1{
													inline static int Block( Dynamic &o){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",876);
														{
															HX_STACK_LINE(876)
															return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
														}
														return null();
													}
												};
												struct _Function_9_2{
													inline static int Block( Dynamic &o){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",876);
														{
															HX_STACK_LINE(876)
															::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
															HX_STACK_LINE(876)
															return (int)0;
														}
														return null();
													}
												};
												HX_STACK_LINE(876)
												return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_9_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_9_2::Block(o)) )) )) )) )) );
											}
											return null();
										}
									};
									struct _Function_8_3{
										inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
											HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",876);
											{
												HX_STACK_LINE(876)
												Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int((__this->_Searcher + (int)2)),__this->_SpecialListBomb);		HX_STACK_VAR(o,"o");
												struct _Function_9_1{
													inline static int Block( Dynamic &o){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",876);
														{
															HX_STACK_LINE(876)
															return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
														}
														return null();
													}
												};
												struct _Function_9_2{
													inline static int Block( Dynamic &o){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",876);
														{
															HX_STACK_LINE(876)
															::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
															HX_STACK_LINE(876)
															return (int)0;
														}
														return null();
													}
												};
												HX_STACK_LINE(876)
												return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_9_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_9_2::Block(o)) )) )) )) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(876)
									if (((bool((_Function_8_1::Block(this) == (int)2)) || bool(((bool((_Function_8_2::Block(this) == (int)2)) || bool((_Function_8_3::Block(this) == (int)2)))))))){
										HX_STACK_LINE(878)
										::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("BOMB UP FOUND")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),878,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_Check")));
										HX_STACK_LINE(880)
										this->_BombKill = true;
										HX_STACK_LINE(881)
										this->propertyChanged(HX_CSTRING("_BombKill"),this->_BombKill);
										struct _Function_9_1{
											inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",882);
												{
													HX_STACK_LINE(882)
													Dynamic o = __this->_Xincrementer;		HX_STACK_VAR(o,"o");
													struct _Function_10_1{
														inline static int Block( Dynamic &o){
															HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",882);
															{
																HX_STACK_LINE(882)
																return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
															}
															return null();
														}
													};
													struct _Function_10_2{
														inline static int Block( Dynamic &o){
															HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",882);
															{
																HX_STACK_LINE(882)
																::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																HX_STACK_LINE(882)
																return (int)0;
															}
															return null();
														}
													};
													HX_STACK_LINE(882)
													return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_10_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_10_2::Block(o)) )) )) )) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(882)
										this->_BombXX = _Function_9_1::Block(this);
										HX_STACK_LINE(883)
										this->propertyChanged(HX_CSTRING("_BombXX"),this->_BombXX);
										struct _Function_9_2{
											inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",884);
												{
													HX_STACK_LINE(884)
													Dynamic o = __this->_Searcher;		HX_STACK_VAR(o,"o");
													struct _Function_10_1{
														inline static int Block( Dynamic &o){
															HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",884);
															{
																HX_STACK_LINE(884)
																return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
															}
															return null();
														}
													};
													struct _Function_10_2{
														inline static int Block( Dynamic &o){
															HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",884);
															{
																HX_STACK_LINE(884)
																::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																HX_STACK_LINE(884)
																return (int)0;
															}
															return null();
														}
													};
													HX_STACK_LINE(884)
													return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_10_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_10_2::Block(o)) )) )) )) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(884)
										this->_BombYY = _Function_9_2::Block(this);
										HX_STACK_LINE(885)
										this->propertyChanged(HX_CSTRING("_BombYY"),this->_BombYY);
										struct _Function_9_3{
											inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",886);
												{
													HX_STACK_LINE(886)
													Dynamic o = __this->_Xincrementer;		HX_STACK_VAR(o,"o");
													struct _Function_10_1{
														inline static int Block( Dynamic &o){
															HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",886);
															{
																HX_STACK_LINE(886)
																return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
															}
															return null();
														}
													};
													struct _Function_10_2{
														inline static int Block( Dynamic &o){
															HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",886);
															{
																HX_STACK_LINE(886)
																::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																HX_STACK_LINE(886)
																return (int)0;
															}
															return null();
														}
													};
													HX_STACK_LINE(886)
													return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_10_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_10_2::Block(o)) )) )) )) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(886)
										this->_BombX = _Function_9_3::Block(this);
										HX_STACK_LINE(887)
										this->propertyChanged(HX_CSTRING("_BombX"),this->_BombX);
										struct _Function_9_4{
											inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",888);
												{
													HX_STACK_LINE(888)
													Dynamic o = __this->_Searcher;		HX_STACK_VAR(o,"o");
													struct _Function_10_1{
														inline static int Block( Dynamic &o){
															HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",888);
															{
																HX_STACK_LINE(888)
																return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
															}
															return null();
														}
													};
													struct _Function_10_2{
														inline static int Block( Dynamic &o){
															HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",888);
															{
																HX_STACK_LINE(888)
																::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																HX_STACK_LINE(888)
																return (int)0;
															}
															return null();
														}
													};
													HX_STACK_LINE(888)
													return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_10_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_10_2::Block(o)) )) )) )) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(888)
										this->_BombY = _Function_9_4::Block(this);
										HX_STACK_LINE(889)
										this->propertyChanged(HX_CSTRING("_BombY"),this->_BombY);
										HX_STACK_LINE(891)
										{
											HX_STACK_LINE(891)
											int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
											int _g4 = (int)3;		HX_STACK_VAR(_g4,"_g4");
											HX_STACK_LINE(891)
											while(((_g5 < _g4))){
												HX_STACK_LINE(891)
												int index2 = (_g5)++;		HX_STACK_VAR(index2,"index2");
												HX_STACK_LINE(893)
												{
													HX_STACK_LINE(893)
													int _g7 = (int)0;		HX_STACK_VAR(_g7,"_g7");
													int _g6 = (int)3;		HX_STACK_VAR(_g6,"_g6");
													HX_STACK_LINE(893)
													while(((_g7 < _g6))){
														HX_STACK_LINE(893)
														int index3 = (_g7)++;		HX_STACK_VAR(index3,"index3");
														HX_STACK_LINE(895)
														if (((this->_BombYY < (this->getGameAttribute(HX_CSTRING("GridY")) - (int)1)))){
															HX_STACK_LINE(897)
															if ((!(::com::stencyl::utils::Utils_obj::contains(this->getGameAttribute(HX_CSTRING("KillList")),::List2D_obj::get_entry(::Std_obj::_int(this->_BombX),::Std_obj::_int(this->_BombY),this->_UID))))){
																struct _Function_15_1{
																	inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
																		HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",899);
																		{
																			HX_STACK_LINE(899)
																			Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_BombX),::Std_obj::_int(__this->_BombY),__this->_UID);		HX_STACK_VAR(o,"o");
																			struct _Function_16_1{
																				inline static int Block( Dynamic &o){
																					HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",899);
																					{
																						HX_STACK_LINE(899)
																						return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
																					}
																					return null();
																				}
																			};
																			struct _Function_16_2{
																				inline static int Block( Dynamic &o){
																					HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",899);
																					{
																						HX_STACK_LINE(899)
																						::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																						HX_STACK_LINE(899)
																						return (int)0;
																					}
																					return null();
																				}
																			};
																			HX_STACK_LINE(899)
																			return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_16_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_16_2::Block(o)) )) )) )) )) );
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(899)
																this->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("insert"),true)(::Std_obj::_int(this->_Searcher),_Function_15_1::Block(this));
																HX_STACK_LINE(900)
																::List2D_obj::set_entry(::Std_obj::_int(this->_BombX),::Std_obj::_int(this->_BombY),null(),this->_UID);
																HX_STACK_LINE(901)
																::List2D_obj::set_entry(::Std_obj::_int(this->_BombX),::Std_obj::_int(this->_BombY),null(),this->_GemType);
																HX_STACK_LINE(902)
																::List2D_obj::set_entry(::Std_obj::_int(this->_BombX),::Std_obj::_int(this->_BombY),null(),this->_AlreadySpawned);
																HX_STACK_LINE(903)
																::List2D_obj::set_entry(::Std_obj::_int(this->_BombX),::Std_obj::_int(this->_BombY),null(),this->_SpecialListBomb);
															}
															HX_STACK_LINE(906)
															hx::AddEq(this->_BombY,(int)1);
															HX_STACK_LINE(907)
															this->propertyChanged(HX_CSTRING("_BombY"),this->_BombY);
														}
														else{
															HX_STACK_LINE(910)
															if (((bool((this->_BombYY == this->getGameAttribute(HX_CSTRING("GridY")))) || bool((this->_BombYY == (this->getGameAttribute(HX_CSTRING("GridY")) - (int)1)))))){
																HX_STACK_LINE(913)
																if ((!(::com::stencyl::utils::Utils_obj::contains(this->getGameAttribute(HX_CSTRING("KillList")),::List2D_obj::get_entry(::Std_obj::_int(this->_BombX),::Std_obj::_int(this->_BombY),this->_UID))))){
																	struct _Function_16_1{
																		inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
																			HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",915);
																			{
																				HX_STACK_LINE(915)
																				Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_BombX),::Std_obj::_int(__this->_BombY),__this->_UID);		HX_STACK_VAR(o,"o");
																				struct _Function_17_1{
																					inline static int Block( Dynamic &o){
																						HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",915);
																						{
																							HX_STACK_LINE(915)
																							return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
																						}
																						return null();
																					}
																				};
																				struct _Function_17_2{
																					inline static int Block( Dynamic &o){
																						HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",915);
																						{
																							HX_STACK_LINE(915)
																							::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																							HX_STACK_LINE(915)
																							return (int)0;
																						}
																						return null();
																					}
																				};
																				HX_STACK_LINE(915)
																				return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_17_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_17_2::Block(o)) )) )) )) )) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(915)
																	this->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("insert"),true)(::Std_obj::_int(this->_Searcher),_Function_16_1::Block(this));
																	HX_STACK_LINE(916)
																	::List2D_obj::set_entry(::Std_obj::_int(this->_BombX),::Std_obj::_int(this->_BombY),null(),this->_UID);
																	HX_STACK_LINE(917)
																	::List2D_obj::set_entry(::Std_obj::_int(this->_BombX),::Std_obj::_int(this->_BombY),null(),this->_GemType);
																	HX_STACK_LINE(918)
																	::List2D_obj::set_entry(::Std_obj::_int(this->_BombX),::Std_obj::_int(this->_BombY),null(),this->_AlreadySpawned);
																	HX_STACK_LINE(919)
																	::List2D_obj::set_entry(::Std_obj::_int(this->_BombX),::Std_obj::_int(this->_BombY),null(),this->_SpecialListBomb);
																}
																HX_STACK_LINE(922)
																hx::SubEq(this->_BombY,(int)1);
																HX_STACK_LINE(923)
																this->propertyChanged(HX_CSTRING("_BombY"),this->_BombY);
															}
														}
													}
												}
												HX_STACK_LINE(928)
												if (((this->_BombXX < this->getGameAttribute(HX_CSTRING("GridY"))))){
													HX_STACK_LINE(930)
													hx::AddEq(this->_BombX,(int)1);
													HX_STACK_LINE(931)
													this->propertyChanged(HX_CSTRING("_BombX"),this->_BombX);
												}
												else{
													HX_STACK_LINE(934)
													if (((bool((this->_BombXX == this->getGameAttribute(HX_CSTRING("GridY")))) || bool((this->_BombXX == (this->getGameAttribute(HX_CSTRING("GridY")) - (int)1)))))){
														HX_STACK_LINE(936)
														hx::SubEq(this->_BombX,(int)1);
														HX_STACK_LINE(937)
														this->propertyChanged(HX_CSTRING("_BombX"),this->_BombX);
													}
												}
												struct _Function_11_1{
													inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",940);
														{
															HX_STACK_LINE(940)
															Dynamic o = __this->_BombYY;		HX_STACK_VAR(o,"o");
															struct _Function_12_1{
																inline static int Block( Dynamic &o){
																	HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",940);
																	{
																		HX_STACK_LINE(940)
																		return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
																	}
																	return null();
																}
															};
															struct _Function_12_2{
																inline static int Block( Dynamic &o){
																	HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",940);
																	{
																		HX_STACK_LINE(940)
																		::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																		HX_STACK_LINE(940)
																		return (int)0;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(940)
															return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_12_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_12_2::Block(o)) )) )) )) )) );
														}
														return null();
													}
												};
												HX_STACK_LINE(940)
												this->_BombY = _Function_11_1::Block(this);
												HX_STACK_LINE(941)
												this->propertyChanged(HX_CSTRING("_BombY"),this->_BombY);
											}
										}
										HX_STACK_LINE(944)
										this->_customEvent_PreKill();
										HX_STACK_LINE(945)
										return null();
									}
								}
								struct _Function_7_8{
									inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",948);
										{
											HX_STACK_LINE(948)
											Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int(__this->_Searcher),__this->_GemType);		HX_STACK_VAR(o,"o");
											struct _Function_8_1{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",948);
													{
														HX_STACK_LINE(948)
														return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",948);
													{
														HX_STACK_LINE(948)
														::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
														HX_STACK_LINE(948)
														return (int)0;
													}
													return null();
												}
											};
											HX_STACK_LINE(948)
											return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_8_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_8_2::Block(o)) )) )) )) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(948)
								this->setGameAttribute(HX_CSTRING("TypeNumber"),_Function_7_8::Block(this));
								HX_STACK_LINE(949)
								::List2D_obj::set_entry(::Std_obj::_int(this->_Xincrementer),::Std_obj::_int(this->_Searcher),(int)9,this->getGameAttribute(HX_CSTRING("BPS")));
								struct _Function_7_9{
									inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",950);
										{
											HX_STACK_LINE(950)
											Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int(__this->_Searcher),__this->_UID);		HX_STACK_VAR(o,"o");
											struct _Function_8_1{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",950);
													{
														HX_STACK_LINE(950)
														return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",950);
													{
														HX_STACK_LINE(950)
														::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
														HX_STACK_LINE(950)
														return (int)0;
													}
													return null();
												}
											};
											HX_STACK_LINE(950)
											return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_8_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_8_2::Block(o)) )) )) )) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(950)
								this->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("insert"),true)(::Std_obj::_int(index1),_Function_7_9::Block(this));
								struct _Function_7_10{
									inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",951);
										{
											HX_STACK_LINE(951)
											Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int((__this->_Searcher + (int)1)),__this->_UID);		HX_STACK_VAR(o,"o");
											struct _Function_8_1{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",951);
													{
														HX_STACK_LINE(951)
														return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",951);
													{
														HX_STACK_LINE(951)
														::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
														HX_STACK_LINE(951)
														return (int)0;
													}
													return null();
												}
											};
											HX_STACK_LINE(951)
											return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_8_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_8_2::Block(o)) )) )) )) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(951)
								this->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("insert"),true)(::Std_obj::_int((index1 + (int)1)),_Function_7_10::Block(this));
								struct _Function_7_11{
									inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",952);
										{
											HX_STACK_LINE(952)
											Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int((__this->_Searcher + (int)2)),__this->_UID);		HX_STACK_VAR(o,"o");
											struct _Function_8_1{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",952);
													{
														HX_STACK_LINE(952)
														return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",952);
													{
														HX_STACK_LINE(952)
														::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
														HX_STACK_LINE(952)
														return (int)0;
													}
													return null();
												}
											};
											HX_STACK_LINE(952)
											return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_8_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_8_2::Block(o)) )) )) )) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(952)
								this->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("insert"),true)(::Std_obj::_int((index1 + (int)2)),_Function_7_11::Block(this));
								HX_STACK_LINE(956)
								::List2D_obj::set_entry(::Std_obj::_int(this->_Xincrementer),::Std_obj::_int(this->_Searcher),null(),this->_UID);
								HX_STACK_LINE(957)
								::List2D_obj::set_entry(::Std_obj::_int(this->_Xincrementer),::Std_obj::_int((this->_Searcher + (int)1)),null(),this->_UID);
								HX_STACK_LINE(958)
								::List2D_obj::set_entry(::Std_obj::_int(this->_Xincrementer),::Std_obj::_int((this->_Searcher + (int)2)),null(),this->_UID);
								HX_STACK_LINE(959)
								::List2D_obj::set_entry(::Std_obj::_int(this->_Xincrementer),::Std_obj::_int(this->_Searcher),null(),this->_GemType);
								HX_STACK_LINE(960)
								::List2D_obj::set_entry(::Std_obj::_int(this->_Xincrementer),::Std_obj::_int((this->_Searcher + (int)1)),null(),this->_GemType);
								HX_STACK_LINE(961)
								::List2D_obj::set_entry(::Std_obj::_int(this->_Xincrementer),::Std_obj::_int((this->_Searcher + (int)2)),null(),this->_GemType);
								HX_STACK_LINE(962)
								::List2D_obj::set_entry(::Std_obj::_int(this->_Xincrementer),::Std_obj::_int(this->_Searcher),null(),this->_AlreadySpawned);
								HX_STACK_LINE(963)
								::List2D_obj::set_entry(::Std_obj::_int(this->_Xincrementer),::Std_obj::_int((this->_Searcher + (int)1)),null(),this->_AlreadySpawned);
								HX_STACK_LINE(964)
								::List2D_obj::set_entry(::Std_obj::_int(this->_Xincrementer),::Std_obj::_int((this->_Searcher + (int)2)),null(),this->_AlreadySpawned);
							}
							HX_STACK_LINE(967)
							hx::AddEq(this->_Searcher,(int)1);
							HX_STACK_LINE(968)
							this->propertyChanged(HX_CSTRING("_Searcher"),this->_Searcher);
						}
					}
					HX_STACK_LINE(971)
					hx::AddEq(this->_Xincrementer,(int)1);
					HX_STACK_LINE(972)
					this->propertyChanged(HX_CSTRING("_Xincrementer"),this->_Xincrementer);
				}
			}
			struct _Function_2_5{
				inline static int Block( ){
					HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",975);
					{
						HX_STACK_LINE(975)
						return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
					}
					return null();
				}
			};
			struct _Function_2_6{
				inline static int Block( ){
					HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",975);
					{
						HX_STACK_LINE(975)
						::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
						HX_STACK_LINE(975)
						return (int)0;
					}
					return null();
				}
			};
			HX_STACK_LINE(975)
			this->_Searcher = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_5::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_2_6::Block()) )) )) )) );
			HX_STACK_LINE(976)
			this->propertyChanged(HX_CSTRING("_Searcher"),this->_Searcher);
			HX_STACK_LINE(977)
			{
				HX_STACK_LINE(977)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = ::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridY")));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(977)
				while(((_g1 < _g))){
					HX_STACK_LINE(977)
					int index0 = (_g1)++;		HX_STACK_VAR(index0,"index0");
					struct _Function_4_1{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",979);
							{
								HX_STACK_LINE(979)
								return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static int Block( ){
							HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",979);
							{
								HX_STACK_LINE(979)
								::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
								HX_STACK_LINE(979)
								return (int)0;
							}
							return null();
						}
					};
					HX_STACK_LINE(979)
					this->_Xincrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_4_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_4_2::Block()) )) )) )) );
					HX_STACK_LINE(980)
					this->propertyChanged(HX_CSTRING("_Xincrementer"),this->_Xincrementer);
					HX_STACK_LINE(981)
					{
						HX_STACK_LINE(981)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						int _g2 = ::Std_obj::_int((this->getGameAttribute(HX_CSTRING("GridX")) - (int)2));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(981)
						while(((_g3 < _g2))){
							HX_STACK_LINE(981)
							int index1 = (_g3)++;		HX_STACK_VAR(index1,"index1");
							struct _Function_6_1{
								inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
									HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",984);
									{
										HX_STACK_LINE(984)
										Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int(__this->_Searcher),__this->_GemType);		HX_STACK_VAR(o,"o");
										struct _Function_7_1{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",984);
												{
													HX_STACK_LINE(984)
													return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
												}
												return null();
											}
										};
										struct _Function_7_2{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",984);
												{
													HX_STACK_LINE(984)
													::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
													HX_STACK_LINE(984)
													return (int)0;
												}
												return null();
											}
										};
										HX_STACK_LINE(984)
										return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_7_2::Block(o)) )) )) )) )) );
									}
									return null();
								}
							};
							struct _Function_6_2{
								inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
									HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",984);
									{
										HX_STACK_LINE(984)
										Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int((__this->_Xincrementer + (int)1)),::Std_obj::_int(__this->_Searcher),__this->_GemType);		HX_STACK_VAR(o,"o");
										struct _Function_7_1{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",984);
												{
													HX_STACK_LINE(984)
													return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
												}
												return null();
											}
										};
										struct _Function_7_2{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",984);
												{
													HX_STACK_LINE(984)
													::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
													HX_STACK_LINE(984)
													return (int)0;
												}
												return null();
											}
										};
										HX_STACK_LINE(984)
										return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_7_2::Block(o)) )) )) )) )) );
									}
									return null();
								}
							};
							struct _Function_6_3{
								inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
									HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",984);
									{
										HX_STACK_LINE(984)
										Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int((__this->_Xincrementer + (int)2)),::Std_obj::_int(__this->_Searcher),__this->_GemType);		HX_STACK_VAR(o,"o");
										struct _Function_7_1{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",984);
												{
													HX_STACK_LINE(984)
													return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
												}
												return null();
											}
										};
										struct _Function_7_2{
											inline static int Block( Dynamic &o){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",984);
												{
													HX_STACK_LINE(984)
													::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
													HX_STACK_LINE(984)
													return (int)0;
												}
												return null();
											}
										};
										HX_STACK_LINE(984)
										return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_7_2::Block(o)) )) )) )) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(984)
							if (((bool((bool((_Function_6_1::Block(this) == this->_GemTypeNumber)) && bool((_Function_6_2::Block(this) == this->_GemTypeNumber)))) && bool((_Function_6_3::Block(this) == this->_GemTypeNumber))))){
								HX_STACK_LINE(986)
								::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("MATCH ACROSS  FOUND!")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),986,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_Check")));
								HX_STACK_LINE(987)
								this->_MatchesFound = true;
								HX_STACK_LINE(988)
								this->propertyChanged(HX_CSTRING("_MatchesFound"),this->_MatchesFound);
								HX_STACK_LINE(990)
								hx::AddEq(this->_NumberOfMatches,(int)1);
								HX_STACK_LINE(991)
								this->propertyChanged(HX_CSTRING("_NumberOfMatches"),this->_NumberOfMatches);
								struct _Function_7_1{
									inline static int Block( ){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",992);
										{
											HX_STACK_LINE(992)
											return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
										}
										return null();
									}
								};
								struct _Function_7_2{
									inline static int Block( ){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",992);
										{
											HX_STACK_LINE(992)
											::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
											HX_STACK_LINE(992)
											return (int)0;
										}
										return null();
									}
								};
								HX_STACK_LINE(992)
								this->_ExtraSearcher = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_7_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_7_2::Block()) )) )) )) );
								HX_STACK_LINE(993)
								this->propertyChanged(HX_CSTRING("_ExtraSearcher"),this->_ExtraSearcher);
								HX_STACK_LINE(994)
								while((!(((this->_ExtraSearcher == this->getGameAttribute(HX_CSTRING("GridX"))))))){
									struct _Function_8_1{
										inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
											HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",996);
											{
												HX_STACK_LINE(996)
												Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(((__this->_Xincrementer + (int)3) + __this->_ExtraSearcher)),::Std_obj::_int(__this->_Searcher),__this->_GemType);		HX_STACK_VAR(o,"o");
												struct _Function_9_1{
													inline static int Block( Dynamic &o){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",996);
														{
															HX_STACK_LINE(996)
															return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
														}
														return null();
													}
												};
												struct _Function_9_2{
													inline static int Block( Dynamic &o){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",996);
														{
															HX_STACK_LINE(996)
															::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
															HX_STACK_LINE(996)
															return (int)0;
														}
														return null();
													}
												};
												HX_STACK_LINE(996)
												return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_9_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_9_2::Block(o)) )) )) )) )) );
											}
											return null();
										}
									};
									struct _Function_8_2{
										inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
											HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",996);
											{
												HX_STACK_LINE(996)
												Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int((__this->_Xincrementer + (int)2)),::Std_obj::_int(__this->_Searcher),__this->_GemType);		HX_STACK_VAR(o,"o");
												struct _Function_9_1{
													inline static int Block( Dynamic &o){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",996);
														{
															HX_STACK_LINE(996)
															return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
														}
														return null();
													}
												};
												struct _Function_9_2{
													inline static int Block( Dynamic &o){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",996);
														{
															HX_STACK_LINE(996)
															::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
															HX_STACK_LINE(996)
															return (int)0;
														}
														return null();
													}
												};
												HX_STACK_LINE(996)
												return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_9_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_9_2::Block(o)) )) )) )) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(995)
									if (((_Function_8_1::Block(this) == _Function_8_2::Block(this)))){
										HX_STACK_LINE(998)
										::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("ExtraACrossFound")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),998,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_Check")));
										struct _Function_9_1{
											inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",999);
												{
													HX_STACK_LINE(999)
													Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(((__this->_Xincrementer + (int)3) + __this->_ExtraSearcher)),::Std_obj::_int(__this->_Searcher),__this->_UID);		HX_STACK_VAR(o,"o");
													struct _Function_10_1{
														inline static int Block( Dynamic &o){
															HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",999);
															{
																HX_STACK_LINE(999)
																return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
															}
															return null();
														}
													};
													struct _Function_10_2{
														inline static int Block( Dynamic &o){
															HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",999);
															{
																HX_STACK_LINE(999)
																::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																HX_STACK_LINE(999)
																return (int)0;
															}
															return null();
														}
													};
													HX_STACK_LINE(999)
													return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_10_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_10_2::Block(o)) )) )) )) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(999)
										this->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("insert"),true)(::Std_obj::_int((this->_ExtraSearcher + (int)3)),_Function_9_1::Block(this));
										HX_STACK_LINE(1000)
										::List2D_obj::set_entry(::Std_obj::_int(((this->_Xincrementer + (int)3) + this->_ExtraSearcher)),::Std_obj::_int(this->_Searcher),null(),this->_UID);
										HX_STACK_LINE(1001)
										::List2D_obj::set_entry(::Std_obj::_int(((this->_Xincrementer + (int)3) + this->_ExtraSearcher)),::Std_obj::_int(this->_Searcher),null(),this->_GemType);
										HX_STACK_LINE(1002)
										::List2D_obj::set_entry(::Std_obj::_int(((this->_Xincrementer + (int)3) + this->_ExtraSearcher)),::Std_obj::_int(this->_Searcher),null(),this->_AlreadySpawned);
										HX_STACK_LINE(1003)
										hx::AddEq(this->_NumberOfMatches,(int)1);
										HX_STACK_LINE(1004)
										this->propertyChanged(HX_CSTRING("_NumberOfMatches"),this->_NumberOfMatches);
										HX_STACK_LINE(1005)
										hx::AddEq(this->_ExtraSearcher,(int)1);
										HX_STACK_LINE(1006)
										this->propertyChanged(HX_CSTRING("_ExtraSearcher"),this->_ExtraSearcher);
									}
									else{
										HX_STACK_LINE(1010)
										break;
									}
								}
								struct _Function_7_3{
									inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1016);
										{
											HX_STACK_LINE(1016)
											Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int(__this->_Searcher),__this->_SpecialListBomb);		HX_STACK_VAR(o,"o");
											struct _Function_8_1{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1016);
													{
														HX_STACK_LINE(1016)
														return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1016);
													{
														HX_STACK_LINE(1016)
														::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
														HX_STACK_LINE(1016)
														return (int)0;
													}
													return null();
												}
											};
											HX_STACK_LINE(1016)
											return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_8_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_8_2::Block(o)) )) )) )) )) );
										}
										return null();
									}
								};
								struct _Function_7_4{
									inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1016);
										{
											HX_STACK_LINE(1016)
											Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int((__this->_Xincrementer + (int)1)),::Std_obj::_int(__this->_Searcher),__this->_SpecialListBomb);		HX_STACK_VAR(o,"o");
											struct _Function_8_1{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1016);
													{
														HX_STACK_LINE(1016)
														return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1016);
													{
														HX_STACK_LINE(1016)
														::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
														HX_STACK_LINE(1016)
														return (int)0;
													}
													return null();
												}
											};
											HX_STACK_LINE(1016)
											return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_8_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_8_2::Block(o)) )) )) )) )) );
										}
										return null();
									}
								};
								struct _Function_7_5{
									inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1016);
										{
											HX_STACK_LINE(1016)
											Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int((__this->_Xincrementer + (int)2)),::Std_obj::_int(__this->_Searcher),__this->_SpecialListBomb);		HX_STACK_VAR(o,"o");
											struct _Function_8_1{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1016);
													{
														HX_STACK_LINE(1016)
														return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1016);
													{
														HX_STACK_LINE(1016)
														::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
														HX_STACK_LINE(1016)
														return (int)0;
													}
													return null();
												}
											};
											HX_STACK_LINE(1016)
											return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_8_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_8_2::Block(o)) )) )) )) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1016)
								if (((bool((_Function_7_3::Block(this) == (int)1)) || bool(((bool((_Function_7_4::Block(this) == (int)1)) || bool((_Function_7_5::Block(this) == (int)1)))))))){
									HX_STACK_LINE(1018)
									this->_SpecialKill = true;
									HX_STACK_LINE(1019)
									this->propertyChanged(HX_CSTRING("_SpecialKill"),this->_SpecialKill);
									struct _Function_8_1{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1021);
											{
												HX_STACK_LINE(1021)
												return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_8_2{
										inline static int Block( ){
											HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1021);
											{
												HX_STACK_LINE(1021)
												::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(1021)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(1021)
									this->_Xincrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_8_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_8_2::Block()) )) )) )) );
									HX_STACK_LINE(1022)
									this->propertyChanged(HX_CSTRING("_Xincrementer"),this->_Xincrementer);
									HX_STACK_LINE(1023)
									{
										HX_STACK_LINE(1023)
										int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
										int _g4 = ::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridX")));		HX_STACK_VAR(_g4,"_g4");
										HX_STACK_LINE(1023)
										while(((_g5 < _g4))){
											HX_STACK_LINE(1023)
											int index2 = (_g5)++;		HX_STACK_VAR(index2,"index2");
											struct _Function_10_1{
												inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1025);
													{
														HX_STACK_LINE(1025)
														Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int(__this->_Searcher),__this->_UID);		HX_STACK_VAR(o,"o");
														struct _Function_11_1{
															inline static int Block( Dynamic &o){
																HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1025);
																{
																	HX_STACK_LINE(1025)
																	return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
																}
																return null();
															}
														};
														struct _Function_11_2{
															inline static int Block( Dynamic &o){
																HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1025);
																{
																	HX_STACK_LINE(1025)
																	::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																	HX_STACK_LINE(1025)
																	return (int)0;
																}
																return null();
															}
														};
														HX_STACK_LINE(1025)
														return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_11_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_11_2::Block(o)) )) )) )) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(1025)
											this->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("insert"),true)(::Std_obj::_int(this->_Xincrementer),_Function_10_1::Block(this));
											struct _Function_10_2{
												inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1026);
													{
														HX_STACK_LINE(1026)
														Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int(__this->_Searcher),__this->_SpecialListBomb);		HX_STACK_VAR(o,"o");
														struct _Function_11_1{
															inline static int Block( Dynamic &o){
																HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1026);
																{
																	HX_STACK_LINE(1026)
																	return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
																}
																return null();
															}
														};
														struct _Function_11_2{
															inline static int Block( Dynamic &o){
																HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1026);
																{
																	HX_STACK_LINE(1026)
																	::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																	HX_STACK_LINE(1026)
																	return (int)0;
																}
																return null();
															}
														};
														HX_STACK_LINE(1026)
														return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_11_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_11_2::Block(o)) )) )) )) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(1026)
											if (((_Function_10_2::Block(this) == (int)1))){
												HX_STACK_LINE(1028)
												::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("Double Special  ACross  FOund!")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),1028,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_Check")));
												HX_STACK_LINE(1029)
												hx::AddEq(this->_DoubleCombo,(int)1);
												HX_STACK_LINE(1030)
												this->propertyChanged(HX_CSTRING("_DoubleCombo"),this->_DoubleCombo);
											}
											HX_STACK_LINE(1033)
											if (((this->_DoubleCombo >= (int)2))){
												struct _Function_11_1{
													inline static int Block( ){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1036);
														{
															HX_STACK_LINE(1036)
															return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
														}
														return null();
													}
												};
												struct _Function_11_2{
													inline static int Block( ){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1036);
														{
															HX_STACK_LINE(1036)
															::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
															HX_STACK_LINE(1036)
															return (int)0;
														}
														return null();
													}
												};
												HX_STACK_LINE(1036)
												this->_DoubleCombo = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_11_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_11_2::Block()) )) )) )) );
												HX_STACK_LINE(1037)
												this->propertyChanged(HX_CSTRING("_DoubleCombo"),this->_DoubleCombo);
												HX_STACK_LINE(1038)
												this->_CreateBombPiece = true;
												HX_STACK_LINE(1039)
												this->propertyChanged(HX_CSTRING("_CreateBombPiece"),this->_CreateBombPiece);
												struct _Function_11_3{
													inline static int Block( ){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1040);
														{
															HX_STACK_LINE(1040)
															return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
														}
														return null();
													}
												};
												struct _Function_11_4{
													inline static int Block( ){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1040);
														{
															HX_STACK_LINE(1040)
															::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
															HX_STACK_LINE(1040)
															return (int)0;
														}
														return null();
													}
												};
												HX_STACK_LINE(1040)
												this->_XSearcher = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_11_3::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_11_4::Block()) )) )) )) );
												HX_STACK_LINE(1041)
												this->propertyChanged(HX_CSTRING("_XSearcher"),this->_XSearcher);
												struct _Function_11_5{
													inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1042);
														{
															HX_STACK_LINE(1042)
															Dynamic o = __this->_Searcher;		HX_STACK_VAR(o,"o");
															struct _Function_12_1{
																inline static int Block( Dynamic &o){
																	HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1042);
																	{
																		HX_STACK_LINE(1042)
																		return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
																	}
																	return null();
																}
															};
															struct _Function_12_2{
																inline static int Block( Dynamic &o){
																	HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1042);
																	{
																		HX_STACK_LINE(1042)
																		::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																		HX_STACK_LINE(1042)
																		return (int)0;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1042)
															return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_12_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_12_2::Block(o)) )) )) )) )) );
														}
														return null();
													}
												};
												HX_STACK_LINE(1042)
												this->_YIncrementer = _Function_11_5::Block(this);
												HX_STACK_LINE(1043)
												this->propertyChanged(HX_CSTRING("_YIncrementer"),this->_YIncrementer);
												HX_STACK_LINE(1044)
												{
													HX_STACK_LINE(1044)
													int _g7 = (int)0;		HX_STACK_VAR(_g7,"_g7");
													int _g6 = ::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridY")));		HX_STACK_VAR(_g6,"_g6");
													HX_STACK_LINE(1044)
													while(((_g7 < _g6))){
														HX_STACK_LINE(1044)
														int index3 = (_g7)++;		HX_STACK_VAR(index3,"index3");
														HX_STACK_LINE(1046)
														if ((!(::com::stencyl::utils::Utils_obj::contains(this->getGameAttribute(HX_CSTRING("KillList")),::List2D_obj::get_entry(::Std_obj::_int(this->_XSearcher),::Std_obj::_int(this->_YIncrementer),this->_UID))))){
															struct _Function_14_1{
																inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
																	HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1048);
																	{
																		HX_STACK_LINE(1048)
																		Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_XSearcher),::Std_obj::_int(__this->_YIncrementer),__this->_UID);		HX_STACK_VAR(o,"o");
																		struct _Function_15_1{
																			inline static int Block( Dynamic &o){
																				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1048);
																				{
																					HX_STACK_LINE(1048)
																					return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
																				}
																				return null();
																			}
																		};
																		struct _Function_15_2{
																			inline static int Block( Dynamic &o){
																				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1048);
																				{
																					HX_STACK_LINE(1048)
																					::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																					HX_STACK_LINE(1048)
																					return (int)0;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1048)
																		return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_15_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_15_2::Block(o)) )) )) )) )) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1047)
															this->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("insert"),true)(::Std_obj::_int(this->_YIncrementer),_Function_14_1::Block(this));
														}
														HX_STACK_LINE(1051)
														::List2D_obj::set_entry(::Std_obj::_int(this->_XSearcher),::Std_obj::_int(this->_YIncrementer),null(),this->_UID);
														HX_STACK_LINE(1052)
														::List2D_obj::set_entry(::Std_obj::_int(this->_XSearcher),::Std_obj::_int(this->_YIncrementer),null(),this->_GemType);
														HX_STACK_LINE(1053)
														::List2D_obj::set_entry(::Std_obj::_int(this->_XSearcher),::Std_obj::_int(this->_YIncrementer),null(),this->_AlreadySpawned);
														HX_STACK_LINE(1054)
														::List2D_obj::set_entry(::Std_obj::_int(this->_XSearcher),::Std_obj::_int(this->_YIncrementer),null(),this->_SpecialListBomb);
														HX_STACK_LINE(1055)
														hx::AddEq(this->_YIncrementer,(int)1);
														HX_STACK_LINE(1056)
														this->propertyChanged(HX_CSTRING("_YIncrementer"),this->_YIncrementer);
													}
												}
											}
											HX_STACK_LINE(1062)
											::List2D_obj::set_entry(::Std_obj::_int(this->_Xincrementer),::Std_obj::_int(this->_Searcher),null(),this->_UID);
											HX_STACK_LINE(1063)
											::List2D_obj::set_entry(::Std_obj::_int(this->_Xincrementer),::Std_obj::_int(this->_Searcher),null(),this->_GemType);
											HX_STACK_LINE(1064)
											::List2D_obj::set_entry(::Std_obj::_int(this->_Xincrementer),::Std_obj::_int(this->_Searcher),null(),this->_AlreadySpawned);
											HX_STACK_LINE(1065)
											::List2D_obj::set_entry(::Std_obj::_int(this->_Xincrementer),::Std_obj::_int(this->_Searcher),null(),this->_SpecialListBomb);
											HX_STACK_LINE(1066)
											hx::AddEq(this->_Xincrementer,(int)1);
											HX_STACK_LINE(1067)
											this->propertyChanged(HX_CSTRING("_Xincrementer"),this->_Xincrementer);
										}
									}
									HX_STACK_LINE(1070)
									this->_customEvent_PreKill();
									HX_STACK_LINE(1071)
									return null();
								}
								else{
									struct _Function_8_1{
										inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
											HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1074);
											{
												HX_STACK_LINE(1074)
												Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int(__this->_Searcher),__this->_SpecialListBomb);		HX_STACK_VAR(o,"o");
												struct _Function_9_1{
													inline static int Block( Dynamic &o){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1074);
														{
															HX_STACK_LINE(1074)
															return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
														}
														return null();
													}
												};
												struct _Function_9_2{
													inline static int Block( Dynamic &o){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1074);
														{
															HX_STACK_LINE(1074)
															::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
															HX_STACK_LINE(1074)
															return (int)0;
														}
														return null();
													}
												};
												HX_STACK_LINE(1074)
												return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_9_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_9_2::Block(o)) )) )) )) )) );
											}
											return null();
										}
									};
									struct _Function_8_2{
										inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
											HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1074);
											{
												HX_STACK_LINE(1074)
												Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int((__this->_Xincrementer + (int)1)),::Std_obj::_int(__this->_Searcher),__this->_SpecialListBomb);		HX_STACK_VAR(o,"o");
												struct _Function_9_1{
													inline static int Block( Dynamic &o){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1074);
														{
															HX_STACK_LINE(1074)
															return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
														}
														return null();
													}
												};
												struct _Function_9_2{
													inline static int Block( Dynamic &o){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1074);
														{
															HX_STACK_LINE(1074)
															::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
															HX_STACK_LINE(1074)
															return (int)0;
														}
														return null();
													}
												};
												HX_STACK_LINE(1074)
												return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_9_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_9_2::Block(o)) )) )) )) )) );
											}
											return null();
										}
									};
									struct _Function_8_3{
										inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
											HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1074);
											{
												HX_STACK_LINE(1074)
												Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int((__this->_Xincrementer + (int)2)),::Std_obj::_int(__this->_Searcher),__this->_SpecialListBomb);		HX_STACK_VAR(o,"o");
												struct _Function_9_1{
													inline static int Block( Dynamic &o){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1074);
														{
															HX_STACK_LINE(1074)
															return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
														}
														return null();
													}
												};
												struct _Function_9_2{
													inline static int Block( Dynamic &o){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1074);
														{
															HX_STACK_LINE(1074)
															::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
															HX_STACK_LINE(1074)
															return (int)0;
														}
														return null();
													}
												};
												HX_STACK_LINE(1074)
												return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_9_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_9_2::Block(o)) )) )) )) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(1074)
									if (((bool((_Function_8_1::Block(this) == (int)2)) || bool(((bool((_Function_8_2::Block(this) == (int)2)) || bool((_Function_8_3::Block(this) == (int)2)))))))){
										HX_STACK_LINE(1076)
										::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("BOMB FOUND ACROSS")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),1076,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_Check")));
										HX_STACK_LINE(1077)
										this->_BombKill = true;
										HX_STACK_LINE(1078)
										this->propertyChanged(HX_CSTRING("_BombKill"),this->_BombKill);
										struct _Function_9_1{
											inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1080);
												{
													HX_STACK_LINE(1080)
													Dynamic o = __this->_Xincrementer;		HX_STACK_VAR(o,"o");
													struct _Function_10_1{
														inline static int Block( Dynamic &o){
															HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1080);
															{
																HX_STACK_LINE(1080)
																return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
															}
															return null();
														}
													};
													struct _Function_10_2{
														inline static int Block( Dynamic &o){
															HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1080);
															{
																HX_STACK_LINE(1080)
																::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																HX_STACK_LINE(1080)
																return (int)0;
															}
															return null();
														}
													};
													HX_STACK_LINE(1080)
													return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_10_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_10_2::Block(o)) )) )) )) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(1080)
										this->_BombXX = _Function_9_1::Block(this);
										HX_STACK_LINE(1081)
										this->propertyChanged(HX_CSTRING("_BombXX"),this->_BombXX);
										struct _Function_9_2{
											inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1082);
												{
													HX_STACK_LINE(1082)
													Dynamic o = __this->_Searcher;		HX_STACK_VAR(o,"o");
													struct _Function_10_1{
														inline static int Block( Dynamic &o){
															HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1082);
															{
																HX_STACK_LINE(1082)
																return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
															}
															return null();
														}
													};
													struct _Function_10_2{
														inline static int Block( Dynamic &o){
															HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1082);
															{
																HX_STACK_LINE(1082)
																::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																HX_STACK_LINE(1082)
																return (int)0;
															}
															return null();
														}
													};
													HX_STACK_LINE(1082)
													return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_10_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_10_2::Block(o)) )) )) )) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(1082)
										this->_BombYY = _Function_9_2::Block(this);
										HX_STACK_LINE(1083)
										this->propertyChanged(HX_CSTRING("_BombYY"),this->_BombYY);
										struct _Function_9_3{
											inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1084);
												{
													HX_STACK_LINE(1084)
													Dynamic o = __this->_Xincrementer;		HX_STACK_VAR(o,"o");
													struct _Function_10_1{
														inline static int Block( Dynamic &o){
															HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1084);
															{
																HX_STACK_LINE(1084)
																return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
															}
															return null();
														}
													};
													struct _Function_10_2{
														inline static int Block( Dynamic &o){
															HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1084);
															{
																HX_STACK_LINE(1084)
																::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																HX_STACK_LINE(1084)
																return (int)0;
															}
															return null();
														}
													};
													HX_STACK_LINE(1084)
													return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_10_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_10_2::Block(o)) )) )) )) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(1084)
										this->_BombX = _Function_9_3::Block(this);
										HX_STACK_LINE(1085)
										this->propertyChanged(HX_CSTRING("_BombX"),this->_BombX);
										struct _Function_9_4{
											inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1086);
												{
													HX_STACK_LINE(1086)
													Dynamic o = __this->_Searcher;		HX_STACK_VAR(o,"o");
													struct _Function_10_1{
														inline static int Block( Dynamic &o){
															HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1086);
															{
																HX_STACK_LINE(1086)
																return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
															}
															return null();
														}
													};
													struct _Function_10_2{
														inline static int Block( Dynamic &o){
															HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1086);
															{
																HX_STACK_LINE(1086)
																::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																HX_STACK_LINE(1086)
																return (int)0;
															}
															return null();
														}
													};
													HX_STACK_LINE(1086)
													return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_10_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_10_2::Block(o)) )) )) )) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(1086)
										this->_BombY = _Function_9_4::Block(this);
										HX_STACK_LINE(1087)
										this->propertyChanged(HX_CSTRING("_BombY"),this->_BombY);
										HX_STACK_LINE(1089)
										{
											HX_STACK_LINE(1089)
											int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
											int _g4 = (int)3;		HX_STACK_VAR(_g4,"_g4");
											HX_STACK_LINE(1089)
											while(((_g5 < _g4))){
												HX_STACK_LINE(1089)
												int index2 = (_g5)++;		HX_STACK_VAR(index2,"index2");
												HX_STACK_LINE(1091)
												{
													HX_STACK_LINE(1091)
													int _g7 = (int)0;		HX_STACK_VAR(_g7,"_g7");
													int _g6 = (int)3;		HX_STACK_VAR(_g6,"_g6");
													HX_STACK_LINE(1091)
													while(((_g7 < _g6))){
														HX_STACK_LINE(1091)
														int index3 = (_g7)++;		HX_STACK_VAR(index3,"index3");
														HX_STACK_LINE(1093)
														if (((this->_BombXX < this->getGameAttribute(HX_CSTRING("GridX"))))){
															HX_STACK_LINE(1095)
															if ((!(::com::stencyl::utils::Utils_obj::contains(this->getGameAttribute(HX_CSTRING("KillList")),::List2D_obj::get_entry(::Std_obj::_int(this->_BombX),::Std_obj::_int(this->_BombY),this->_UID))))){
																struct _Function_15_1{
																	inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
																		HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1097);
																		{
																			HX_STACK_LINE(1097)
																			Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_BombX),::Std_obj::_int(__this->_BombY),__this->_UID);		HX_STACK_VAR(o,"o");
																			struct _Function_16_1{
																				inline static int Block( Dynamic &o){
																					HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1097);
																					{
																						HX_STACK_LINE(1097)
																						return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
																					}
																					return null();
																				}
																			};
																			struct _Function_16_2{
																				inline static int Block( Dynamic &o){
																					HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1097);
																					{
																						HX_STACK_LINE(1097)
																						::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																						HX_STACK_LINE(1097)
																						return (int)0;
																					}
																					return null();
																				}
																			};
																			HX_STACK_LINE(1097)
																			return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_16_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_16_2::Block(o)) )) )) )) )) );
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1097)
																this->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("insert"),true)(::Std_obj::_int(this->_Searcher),_Function_15_1::Block(this));
																HX_STACK_LINE(1098)
																::List2D_obj::set_entry(::Std_obj::_int(this->_BombX),::Std_obj::_int(this->_BombY),(int)9,this->getGameAttribute(HX_CSTRING("BPS")));
																HX_STACK_LINE(1099)
																::List2D_obj::set_entry(::Std_obj::_int(this->_BombX),::Std_obj::_int(this->_BombY),null(),this->_UID);
																HX_STACK_LINE(1100)
																::List2D_obj::set_entry(::Std_obj::_int(this->_BombX),::Std_obj::_int(this->_BombY),null(),this->_GemType);
																HX_STACK_LINE(1101)
																::List2D_obj::set_entry(::Std_obj::_int(this->_BombX),::Std_obj::_int(this->_BombY),null(),this->_AlreadySpawned);
																HX_STACK_LINE(1102)
																::List2D_obj::set_entry(::Std_obj::_int(this->_BombX),::Std_obj::_int(this->_BombY),null(),this->_SpecialListBomb);
															}
															HX_STACK_LINE(1105)
															hx::AddEq(this->_BombX,(int)1);
															HX_STACK_LINE(1106)
															this->propertyChanged(HX_CSTRING("_BombX"),this->_BombX);
														}
														else{
															HX_STACK_LINE(1109)
															if (((bool((this->_BombXX == this->getGameAttribute(HX_CSTRING("GridX")))) || bool((this->_BombXX == (this->getGameAttribute(HX_CSTRING("GridX")) - (int)1)))))){
																HX_STACK_LINE(1111)
																if ((!(::com::stencyl::utils::Utils_obj::contains(this->getGameAttribute(HX_CSTRING("KillList")),::List2D_obj::get_entry(::Std_obj::_int(this->_BombX),::Std_obj::_int(this->_BombY),this->_UID))))){
																	struct _Function_16_1{
																		inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
																			HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1114);
																			{
																				HX_STACK_LINE(1114)
																				Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_BombX),::Std_obj::_int(__this->_BombY),__this->_UID);		HX_STACK_VAR(o,"o");
																				struct _Function_17_1{
																					inline static int Block( Dynamic &o){
																						HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1114);
																						{
																							HX_STACK_LINE(1114)
																							return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
																						}
																						return null();
																					}
																				};
																				struct _Function_17_2{
																					inline static int Block( Dynamic &o){
																						HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1114);
																						{
																							HX_STACK_LINE(1114)
																							::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																							HX_STACK_LINE(1114)
																							return (int)0;
																						}
																						return null();
																					}
																				};
																				HX_STACK_LINE(1114)
																				return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_17_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_17_2::Block(o)) )) )) )) )) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1114)
																	this->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("insert"),true)(::Std_obj::_int(this->_Searcher),_Function_16_1::Block(this));
																	HX_STACK_LINE(1115)
																	::List2D_obj::set_entry(::Std_obj::_int(this->_BombX),::Std_obj::_int(this->_BombY),(int)9,this->getGameAttribute(HX_CSTRING("BPS")));
																	HX_STACK_LINE(1116)
																	::List2D_obj::set_entry(::Std_obj::_int(this->_BombX),::Std_obj::_int(this->_BombY),null(),this->_UID);
																	HX_STACK_LINE(1117)
																	::List2D_obj::set_entry(::Std_obj::_int(this->_BombX),::Std_obj::_int(this->_BombY),null(),this->_GemType);
																	HX_STACK_LINE(1118)
																	::List2D_obj::set_entry(::Std_obj::_int(this->_BombX),::Std_obj::_int(this->_BombY),null(),this->_AlreadySpawned);
																	HX_STACK_LINE(1119)
																	::List2D_obj::set_entry(::Std_obj::_int(this->_BombX),::Std_obj::_int(this->_BombY),null(),this->_SpecialListBomb);
																}
																HX_STACK_LINE(1122)
																hx::SubEq(this->_BombX,(int)1);
																HX_STACK_LINE(1123)
																this->propertyChanged(HX_CSTRING("_BombX"),this->_BombX);
															}
														}
													}
												}
												HX_STACK_LINE(1128)
												if (((this->_BombXX < this->getGameAttribute(HX_CSTRING("GridX"))))){
													HX_STACK_LINE(1130)
													hx::AddEq(this->_BombY,(int)1);
													HX_STACK_LINE(1131)
													this->propertyChanged(HX_CSTRING("_BombY"),this->_BombY);
												}
												else{
													HX_STACK_LINE(1134)
													if (((bool((this->_BombXX == this->getGameAttribute(HX_CSTRING("GridX")))) || bool((this->_BombXX == (this->getGameAttribute(HX_CSTRING("GridX")) - (int)1)))))){
														HX_STACK_LINE(1136)
														hx::SubEq(this->_BombY,(int)1);
														HX_STACK_LINE(1137)
														this->propertyChanged(HX_CSTRING("_BombY"),this->_BombY);
													}
												}
												struct _Function_11_1{
													inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1140);
														{
															HX_STACK_LINE(1140)
															Dynamic o = __this->_BombXX;		HX_STACK_VAR(o,"o");
															struct _Function_12_1{
																inline static int Block( Dynamic &o){
																	HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1140);
																	{
																		HX_STACK_LINE(1140)
																		return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
																	}
																	return null();
																}
															};
															struct _Function_12_2{
																inline static int Block( Dynamic &o){
																	HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1140);
																	{
																		HX_STACK_LINE(1140)
																		::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																		HX_STACK_LINE(1140)
																		return (int)0;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1140)
															return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_12_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_12_2::Block(o)) )) )) )) )) );
														}
														return null();
													}
												};
												HX_STACK_LINE(1140)
												this->_BombX = _Function_11_1::Block(this);
												HX_STACK_LINE(1141)
												this->propertyChanged(HX_CSTRING("_BombX"),this->_BombX);
											}
										}
										HX_STACK_LINE(1144)
										this->_customEvent_PreKill();
										HX_STACK_LINE(1145)
										return null();
									}
								}
								struct _Function_7_6{
									inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1148);
										{
											HX_STACK_LINE(1148)
											Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int(__this->_Searcher),__this->_GemType);		HX_STACK_VAR(o,"o");
											struct _Function_8_1{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1148);
													{
														HX_STACK_LINE(1148)
														return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1148);
													{
														HX_STACK_LINE(1148)
														::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
														HX_STACK_LINE(1148)
														return (int)0;
													}
													return null();
												}
											};
											HX_STACK_LINE(1148)
											return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_8_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_8_2::Block(o)) )) )) )) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1148)
								this->setGameAttribute(HX_CSTRING("TypeNumber"),_Function_7_6::Block(this));
								HX_STACK_LINE(1149)
								::List2D_obj::set_entry(::Std_obj::_int(this->_Xincrementer),::Std_obj::_int(this->_Searcher),(int)9,this->getGameAttribute(HX_CSTRING("BPS")));
								struct _Function_7_7{
									inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1150);
										{
											HX_STACK_LINE(1150)
											Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(__this->_Xincrementer),::Std_obj::_int(__this->_Searcher),__this->_UID);		HX_STACK_VAR(o,"o");
											struct _Function_8_1{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1150);
													{
														HX_STACK_LINE(1150)
														return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1150);
													{
														HX_STACK_LINE(1150)
														::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
														HX_STACK_LINE(1150)
														return (int)0;
													}
													return null();
												}
											};
											HX_STACK_LINE(1150)
											return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_8_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_8_2::Block(o)) )) )) )) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1150)
								this->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("insert"),true)(::Std_obj::_int(index1),_Function_7_7::Block(this));
								struct _Function_7_8{
									inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1151);
										{
											HX_STACK_LINE(1151)
											Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int((__this->_Xincrementer + (int)1)),::Std_obj::_int(__this->_Searcher),__this->_UID);		HX_STACK_VAR(o,"o");
											struct _Function_8_1{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1151);
													{
														HX_STACK_LINE(1151)
														return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1151);
													{
														HX_STACK_LINE(1151)
														::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
														HX_STACK_LINE(1151)
														return (int)0;
													}
													return null();
												}
											};
											HX_STACK_LINE(1151)
											return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_8_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_8_2::Block(o)) )) )) )) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1151)
								this->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("insert"),true)(::Std_obj::_int((index1 + (int)1)),_Function_7_8::Block(this));
								struct _Function_7_9{
									inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1152);
										{
											HX_STACK_LINE(1152)
											Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int((__this->_Xincrementer + (int)2)),::Std_obj::_int(__this->_Searcher),__this->_UID);		HX_STACK_VAR(o,"o");
											struct _Function_8_1{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1152);
													{
														HX_STACK_LINE(1152)
														return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",1152);
													{
														HX_STACK_LINE(1152)
														::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
														HX_STACK_LINE(1152)
														return (int)0;
													}
													return null();
												}
											};
											HX_STACK_LINE(1152)
											return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_8_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_8_2::Block(o)) )) )) )) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1152)
								this->getGameAttribute(HX_CSTRING("KillList"))->__Field(HX_CSTRING("insert"),true)(::Std_obj::_int((index1 + (int)2)),_Function_7_9::Block(this));
								HX_STACK_LINE(1156)
								::List2D_obj::set_entry(::Std_obj::_int(this->_Xincrementer),::Std_obj::_int(this->_Searcher),null(),this->_UID);
								HX_STACK_LINE(1157)
								::List2D_obj::set_entry(::Std_obj::_int((this->_Xincrementer + (int)1)),::Std_obj::_int(this->_Searcher),null(),this->_UID);
								HX_STACK_LINE(1158)
								::List2D_obj::set_entry(::Std_obj::_int((this->_Xincrementer + (int)2)),::Std_obj::_int(this->_Searcher),null(),this->_UID);
								HX_STACK_LINE(1159)
								::List2D_obj::set_entry(::Std_obj::_int(this->_Xincrementer),::Std_obj::_int(this->_Searcher),null(),this->_GemType);
								HX_STACK_LINE(1160)
								::List2D_obj::set_entry(::Std_obj::_int((this->_Xincrementer + (int)1)),::Std_obj::_int(this->_Searcher),null(),this->_GemType);
								HX_STACK_LINE(1161)
								::List2D_obj::set_entry(::Std_obj::_int((this->_Xincrementer + (int)2)),::Std_obj::_int(this->_Searcher),null(),this->_GemType);
								HX_STACK_LINE(1162)
								::List2D_obj::set_entry(::Std_obj::_int(this->_Xincrementer),::Std_obj::_int(this->_Searcher),null(),this->_AlreadySpawned);
								HX_STACK_LINE(1163)
								::List2D_obj::set_entry(::Std_obj::_int((this->_Xincrementer + (int)1)),::Std_obj::_int(this->_Searcher),null(),this->_AlreadySpawned);
								HX_STACK_LINE(1164)
								::List2D_obj::set_entry(::Std_obj::_int((this->_Xincrementer + (int)2)),::Std_obj::_int(this->_Searcher),null(),this->_AlreadySpawned);
							}
							HX_STACK_LINE(1167)
							hx::AddEq(this->_Xincrementer,(int)1);
							HX_STACK_LINE(1168)
							this->propertyChanged(HX_CSTRING("_Xincrementer"),this->_Xincrementer);
						}
					}
					HX_STACK_LINE(1171)
					hx::AddEq(this->_Searcher,(int)1);
					HX_STACK_LINE(1172)
					this->propertyChanged(HX_CSTRING("_Searcher"),this->_Searcher);
				}
			}
		}
		HX_STACK_LINE(1177)
		this->_customEvent_PreKill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_3_3_SceneManager_obj,_customEvent_Check,(void))

Void Design_3_3_SceneManager_obj::_customEvent_CHECKGRID( ){
{
		HX_STACK_PUSH("Design_3_3_SceneManager::_customEvent_CHECKGRID","scripts/Design_3_3_SceneManager.hx",732);
		HX_STACK_THIS(this);
		HX_STACK_LINE(733)
		if ((this->_IsDestroying)){
			HX_STACK_LINE(734)
			return null();
		}
		HX_STACK_LINE(738)
		if (((bool(!(this->_IsDestroying)) && bool(!(this->getGameAttribute(HX_CSTRING("Swapping?"))))))){
			HX_STACK_LINE(740)
			this->_CanSpawn = true;
			HX_STACK_LINE(741)
			this->propertyChanged(HX_CSTRING("_CanSpawn"),this->_CanSpawn);
			HX_STACK_LINE(742)
			this->_customEvent_Check();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_3_3_SceneManager_obj,_customEvent_CHECKGRID,(void))

Void Design_3_3_SceneManager_obj::_customEvent_Spawn( ){
{
		HX_STACK_PUSH("Design_3_3_SceneManager::_customEvent_Spawn","scripts/Design_3_3_SceneManager.hx",560);
		HX_STACK_THIS(this);
		HX_STACK_LINE(559)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(561)
		::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("Back to Spawn")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),561,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_Spawn")));
		HX_STACK_LINE(562)
		{
			HX_STACK_LINE(562)
			Dynamic arr = this->_DrawOrder;		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(562)
			arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(564)
		if (((bool(!(this->_CheckMatches)) && bool(!(this->getGameAttribute(HX_CSTRING("Swapping?"))))))){
			HX_STACK_LINE(565)
			if (((this->_CanSpawn == true))){
				HX_STACK_LINE(568)
				this->_CanSpawn = false;
				HX_STACK_LINE(569)
				this->propertyChanged(HX_CSTRING("_CanSpawn"),this->_CanSpawn);

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_g)
				Void run(::com::stencyl::behavior::TimedTask timeTask){
					HX_STACK_PUSH("*::_Function_3_1","scripts/Design_3_3_SceneManager.hx",570);
					HX_STACK_ARG(timeTask,"timeTask");
					{
						struct _Function_4_1{
							inline static int Block( ){
								HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",571);
								{
									HX_STACK_LINE(571)
									return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static int Block( ){
								HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",571);
								{
									HX_STACK_LINE(571)
									::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
									HX_STACK_LINE(571)
									return (int)0;
								}
								return null();
							}
						};
						HX_STACK_LINE(571)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_RefillX = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_4_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_4_2::Block()) )) )) )) );
						HX_STACK_LINE(572)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_RefillX"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_RefillX);
						HX_STACK_LINE(573)
						{
							HX_STACK_LINE(573)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							int _g1 = ::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GridX")));		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(573)
							while(((_g2 < _g1))){
								HX_STACK_LINE(573)
								int index0 = (_g2)++;		HX_STACK_VAR(index0,"index0");
								struct _Function_6_1{
									inline static int Block( ){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",575);
										{
											HX_STACK_LINE(575)
											return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
										}
										return null();
									}
								};
								struct _Function_6_2{
									inline static int Block( ){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",575);
										{
											HX_STACK_LINE(575)
											::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
											HX_STACK_LINE(575)
											return (int)0;
										}
										return null();
									}
								};
								HX_STACK_LINE(575)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_RefillY = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_6_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_6_2::Block()) )) )) )) );
								HX_STACK_LINE(576)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_RefillY"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_RefillY);
								HX_STACK_LINE(577)
								{
									HX_STACK_LINE(577)
									int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
									int _g3 = ::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GridY")));		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(577)
									while(((_g4 < _g3))){
										HX_STACK_LINE(577)
										int index1 = (_g4)++;		HX_STACK_VAR(index1,"index1");
										HX_STACK_LINE(579)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("spawnX"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_RefillX);
										HX_STACK_LINE(580)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("spawnY"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_RefillY);
										HX_STACK_LINE(581)
										if (((!(::List2D_obj::check_entry(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_RefillX),::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_RefillY),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_AlreadySpawned)) == true))){
											HX_STACK_LINE(584)
											if ((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpecialSpawn)){
												HX_STACK_LINE(585)
												if (((bool(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpecialSpawn) && bool(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_CreateBombPiece)))){
													struct _Function_11_1{
														inline static Float Block( Array< ::Dynamic > &_g){
															HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",588);
															{
																HX_STACK_LINE(588)
																Dynamic o = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("TypeNumber"));		HX_STACK_VAR(o,"o");
																struct _Function_12_1{
																	inline static int Block( Dynamic &o){
																		HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",588);
																		{
																			HX_STACK_LINE(588)
																			return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
																		}
																		return null();
																	}
																};
																struct _Function_12_2{
																	inline static int Block( Dynamic &o){
																		HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",588);
																		{
																			HX_STACK_LINE(588)
																			::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																			HX_STACK_LINE(588)
																			return (int)0;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(588)
																return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_12_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_12_2::Block(o)) )) )) )) )) );
															}
															return null();
														}
													};
													HX_STACK_LINE(588)
													_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeID = _Function_11_1::Block(_g);
													HX_STACK_LINE(589)
													_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_SpawnTypeID"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeID);
													HX_STACK_LINE(590)
													if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeID == _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("TypeNumber"))))){
														HX_STACK_LINE(592)
														_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeActor = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActorType((int)0);
														HX_STACK_LINE(593)
														_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_SpawnTypeActor"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeActor);
													}
												}
												else{
													struct _Function_11_1{
														inline static Float Block( Array< ::Dynamic > &_g){
															HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",600);
															{
																HX_STACK_LINE(600)
																Dynamic o = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("TypeNumber"));		HX_STACK_VAR(o,"o");
																struct _Function_12_1{
																	inline static int Block( Dynamic &o){
																		HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",600);
																		{
																			HX_STACK_LINE(600)
																			return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
																		}
																		return null();
																	}
																};
																struct _Function_12_2{
																	inline static int Block( Dynamic &o){
																		HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",600);
																		{
																			HX_STACK_LINE(600)
																			::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																			HX_STACK_LINE(600)
																			return (int)0;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(600)
																return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_12_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_12_2::Block(o)) )) )) )) )) );
															}
															return null();
														}
													};
													HX_STACK_LINE(600)
													_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeID = _Function_11_1::Block(_g);
													HX_STACK_LINE(601)
													_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_SpawnTypeID"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeID);
													HX_STACK_LINE(602)
													if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeID == _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("TypeNumber"))))){
														HX_STACK_LINE(604)
														_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeActor = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActorType((int)0);
														HX_STACK_LINE(605)
														_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_SpawnTypeActor"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeActor);
													}
												}
											}
											HX_STACK_LINE(612)
											if ((!(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpecialSpawn))){
												struct _Function_10_1{
													inline static Float Block( Array< ::Dynamic > &_g){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",614);
														{
															HX_STACK_LINE(614)
															Dynamic o = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->randomInt(::Math_obj::floor((int)1),::Math_obj::floor((int)6));		HX_STACK_VAR(o,"o");
															struct _Function_11_1{
																inline static int Block( Dynamic &o){
																	HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",614);
																	{
																		HX_STACK_LINE(614)
																		return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
																	}
																	return null();
																}
															};
															struct _Function_11_2{
																inline static int Block( Dynamic &o){
																	HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",614);
																	{
																		HX_STACK_LINE(614)
																		::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																		HX_STACK_LINE(614)
																		return (int)0;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(614)
															return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_11_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_11_2::Block(o)) )) )) )) )) );
														}
														return null();
													}
												};
												HX_STACK_LINE(614)
												_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeID = _Function_10_1::Block(_g);
												HX_STACK_LINE(615)
												_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_SpawnTypeID"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeID);
												HX_STACK_LINE(616)
												if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeID == (int)1))){
													HX_STACK_LINE(618)
													_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeActor = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActorType((int)0);
													HX_STACK_LINE(619)
													_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_SpawnTypeActor"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeActor);
												}
												HX_STACK_LINE(622)
												if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeID == (int)2))){
													HX_STACK_LINE(624)
													_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeActor = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActorType((int)0);
													HX_STACK_LINE(625)
													_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_SpawnTypeActor"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeActor);
												}
												HX_STACK_LINE(628)
												if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeID == (int)3))){
													HX_STACK_LINE(630)
													_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeActor = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActorType((int)0);
													HX_STACK_LINE(631)
													_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_SpawnTypeActor"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeActor);
												}
												HX_STACK_LINE(634)
												if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeID == (int)4))){
													HX_STACK_LINE(636)
													_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeActor = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActorType((int)0);
													HX_STACK_LINE(637)
													_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_SpawnTypeActor"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeActor);
												}
												HX_STACK_LINE(640)
												if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeID == (int)5))){
													HX_STACK_LINE(642)
													_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeActor = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActorType((int)0);
													HX_STACK_LINE(643)
													_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_SpawnTypeActor"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeActor);
												}
												HX_STACK_LINE(646)
												if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeID == (int)6))){
													HX_STACK_LINE(648)
													_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeActor = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActorType((int)0);
													HX_STACK_LINE(649)
													_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_SpawnTypeActor"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeActor);
												}
											}
											HX_STACK_LINE(654)
											_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("GemID"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeID);
											HX_STACK_LINE(655)
											hx::AddEq(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Delayer,(int)1);
											HX_STACK_LINE(656)
											_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_Delayer"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Delayer);
											HX_STACK_LINE(657)
											_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->createRecycledActor(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeActor,(((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_ScreenOffset + (_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_RefillX * _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_GridSpacing)) - _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_ScreenOffset) + (((Float(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_GridSpacing) / Float((int)2)) - (int)10))),(((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_ScreenOffesetY + (_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_RefillY * _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_GridSpacing)) - _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_ScreenOffesetY) + (_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_GridSpacing * (int)2)),::com::stencyl::behavior::Script_obj::FRONT);
											HX_STACK_LINE(658)
											_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpecialSpawn = false;
											HX_STACK_LINE(659)
											_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_SpecialSpawn"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpecialSpawn);
											HX_STACK_LINE(660)
											::List2D_obj::set_entry(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_RefillX),::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_RefillY),(HX_CSTRING("") + HX_CSTRING("FULL")),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_AlreadySpawned);
											HX_STACK_LINE(661)
											::List2D_obj::set_entry(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_RefillX),::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_RefillY),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_SpawnTypeID,_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_GemType);
										}
										HX_STACK_LINE(666)
										hx::AddEq(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_RefillY,(int)1);
										HX_STACK_LINE(667)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_RefillY"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_RefillY);
									}
								}
								HX_STACK_LINE(670)
								hx::AddEq(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_RefillX,(int)1);
								HX_STACK_LINE(671)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_RefillX"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_RefillX);
							}
						}

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_3,Array< ::Dynamic >,_g)
						Void run(::com::stencyl::behavior::TimedTask timeTask1){
							HX_STACK_PUSH("*::_Function_4_3","scripts/Design_3_3_SceneManager.hx",674);
							HX_STACK_ARG(timeTask1,"timeTask1");
							{
								HX_STACK_LINE(676)
								::haxe::Log_obj::trace((HX_CSTRING("") + ::Std_obj::string(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_DrawOrder)),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),676,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_Spawn")));
								HX_STACK_LINE(677)
								if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_DrawOrder->__Field(HX_CSTRING("length"),true) == (int)0))){
									HX_STACK_LINE(679)
									timeTask1->repeats = false;
									HX_STACK_LINE(680)
									return null();
								}
								else{
									HX_STACK_LINE(683)
									if ((!(((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_DrawOrder->__Field(HX_CSTRING("length"),true) == (int)0))))){
										struct _Function_7_1{
											inline static Float Block( Array< ::Dynamic > &_g){
												HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",685);
												{
													struct _Function_8_1{
														inline static Float Block( Array< ::Dynamic > &_g){
															HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",685);
															{
																HX_STACK_LINE(685)
																Dynamic o = _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_DrawOrder->__GetItem((int)0);		HX_STACK_VAR(o,"o");
																struct _Function_9_1{
																	inline static int Block( Dynamic &o){
																		HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",685);
																		{
																			HX_STACK_LINE(685)
																			return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
																		}
																		return null();
																	}
																};
																struct _Function_9_2{
																	inline static int Block( Dynamic &o){
																		HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",685);
																		{
																			HX_STACK_LINE(685)
																			::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																			HX_STACK_LINE(685)
																			return (int)0;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(685)
																return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_9_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_9_2::Block(o)) )) )) )) )) );
															}
															return null();
														}
													};
													HX_STACK_LINE(685)
													Dynamic o = _Function_8_1::Block(_g);		HX_STACK_VAR(o,"o");
													struct _Function_8_2{
														inline static int Block( Dynamic &o){
															HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",685);
															{
																HX_STACK_LINE(685)
																return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
															}
															return null();
														}
													};
													struct _Function_8_3{
														inline static int Block( Dynamic &o){
															HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",685);
															{
																HX_STACK_LINE(685)
																::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
																HX_STACK_LINE(685)
																return (int)0;
															}
															return null();
														}
													};
													HX_STACK_LINE(685)
													return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_8_2::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_8_3::Block(o)) )) )) )) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(685)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_ActorReveal = _Function_7_1::Block(_g);
										HX_STACK_LINE(686)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_ActorReveal"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_ActorReveal);
										HX_STACK_LINE(687)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_DrawOrder->__Field(HX_CSTRING("splice"),true)((int)0,(int)1);
										HX_STACK_LINE(688)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->playSound(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActor(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_ActorReveal))->getValue(HX_CSTRING("beat gem"),HX_CSTRING("_GemSound")));
										HX_STACK_LINE(689)
										_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActor(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_ActorReveal))->enableActorDrawing();
									}
								}
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						HX_STACK_LINE(674)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->runPeriodically(((int)1000 * ((Float((Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)8)))), Dynamic(new _Function_4_3(_g)),null());
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(570)
				this->runLater(20., Dynamic(new _Function_3_1(_g)),null());
			}
			else{
			}
		}
		struct _Function_1_1{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",703);
				{
					HX_STACK_LINE(703)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",703);
				{
					HX_STACK_LINE(703)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(703)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(703)
		this->_RefillY = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_2::Block()) )) )) )) );
		HX_STACK_LINE(704)
		this->propertyChanged(HX_CSTRING("_RefillY"),this->_RefillY);
		HX_STACK_LINE(705)
		{
			HX_STACK_LINE(705)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			Array< ::Dynamic > _g11 = this->getActorsOfType(this->getActorType((int)0));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(705)
			while(((_g1 < _g11->length))){
				HX_STACK_LINE(705)
				::com::stencyl::models::Actor actorOfType = _g11->__get(_g1).StaticCast< ::com::stencyl::models::Actor >();		HX_STACK_VAR(actorOfType,"actorOfType");
				HX_STACK_LINE(705)
				++(_g1);
				HX_STACK_LINE(707)
				if (((bool((bool((actorOfType != null())) && bool(!(actorOfType->dead)))) && bool(!(actorOfType->recycled))))){
					HX_STACK_LINE(708)
					hx::AddEq(this->_RefillY,(int)1);
					HX_STACK_LINE(709)
					this->propertyChanged(HX_CSTRING("_RefillY"),this->_RefillY);
					HX_STACK_LINE(710)
					if (((this->_RefillY > (this->getGameAttribute(HX_CSTRING("GridX")) * this->getGameAttribute(HX_CSTRING("GridY")))))){
						HX_STACK_LINE(712)
						::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("Grid FuckUp!")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),712,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_Spawn")));
						HX_STACK_LINE(713)
						if ((!(::com::stencyl::utils::Utils_obj::contains(this->_UID,actorOfType)))){
							HX_STACK_LINE(714)
							this->recycleActor(actorOfType);
						}
					}
				}
			}
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_3,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_3","scripts/Design_3_3_SceneManager.hx",723);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(724)
				_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("GameTempo"),(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameTempo")) + (int)1));
				HX_STACK_LINE(725)
				_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_customEvent_CHECKGRID();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(723)
		this->runLater(300., Dynamic(new _Function_1_3(_g)),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_3_3_SceneManager_obj,_customEvent_Spawn,(void))

Void Design_3_3_SceneManager_obj::_customEvent_SpawnStart( ){
{
		HX_STACK_PUSH("Design_3_3_SceneManager::_customEvent_SpawnStart","scripts/Design_3_3_SceneManager.hx",416);
		HX_STACK_THIS(this);
		HX_STACK_LINE(415)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(417)
		{
			HX_STACK_LINE(417)
			Dynamic arr = this->_DrawOrder;		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(417)
			arr->__Field(HX_CSTRING("splice"),true)((int)0,arr->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(418)
		{
			HX_STACK_LINE(418)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g2 = ::Std_obj::_int((this->getGameAttribute(HX_CSTRING("GridX")) * this->getGameAttribute(HX_CSTRING("GridY"))));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(418)
			while(((_g1 < _g2))){
				HX_STACK_LINE(418)
				int index0 = (_g1)++;		HX_STACK_VAR(index0,"index0");
				struct _Function_3_1{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",420);
						{
							HX_STACK_LINE(420)
							return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static int Block( ){
						HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",420);
						{
							HX_STACK_LINE(420)
							::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
							HX_STACK_LINE(420)
							return (int)0;
						}
						return null();
					}
				};
				HX_STACK_LINE(420)
				this->_Xincrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_3_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_3_2::Block()) )) )) )) );
				HX_STACK_LINE(421)
				this->propertyChanged(HX_CSTRING("_Xincrementer"),this->_Xincrementer);
				HX_STACK_LINE(422)
				{
					HX_STACK_LINE(422)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g21 = ::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridX")));		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(422)
					while(((_g3 < _g21))){
						HX_STACK_LINE(422)
						int index1 = (_g3)++;		HX_STACK_VAR(index1,"index1");
						struct _Function_5_1{
							inline static int Block( ){
								HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",424);
								{
									HX_STACK_LINE(424)
									return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
								}
								return null();
							}
						};
						struct _Function_5_2{
							inline static int Block( ){
								HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",424);
								{
									HX_STACK_LINE(424)
									::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
									HX_STACK_LINE(424)
									return (int)0;
								}
								return null();
							}
						};
						HX_STACK_LINE(424)
						this->_YIncrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_5_2::Block()) )) )) )) );
						HX_STACK_LINE(425)
						this->propertyChanged(HX_CSTRING("_YIncrementer"),this->_YIncrementer);
						HX_STACK_LINE(426)
						{
							HX_STACK_LINE(426)
							int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
							int _g4 = ::Std_obj::_int(this->getGameAttribute(HX_CSTRING("GridY")));		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(426)
							while(((_g5 < _g4))){
								HX_STACK_LINE(426)
								int index2 = (_g5)++;		HX_STACK_VAR(index2,"index2");
								HX_STACK_LINE(428)
								this->setGameAttribute(HX_CSTRING("spawnX"),this->_Xincrementer);
								HX_STACK_LINE(429)
								this->setGameAttribute(HX_CSTRING("spawnY"),this->_YIncrementer);
								struct _Function_7_1{
									inline static Float Block( ::scripts::Design_3_3_SceneManager_obj *__this){
										HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",430);
										{
											HX_STACK_LINE(430)
											Dynamic o = __this->randomInt(::Math_obj::floor((int)1),::Math_obj::floor((int)6));		HX_STACK_VAR(o,"o");
											struct _Function_8_1{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",430);
													{
														HX_STACK_LINE(430)
														return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static int Block( Dynamic &o){
													HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",430);
													{
														HX_STACK_LINE(430)
														::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
														HX_STACK_LINE(430)
														return (int)0;
													}
													return null();
												}
											};
											HX_STACK_LINE(430)
											return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_8_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_8_2::Block(o)) )) )) )) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(430)
								this->_SpawnTypeID = _Function_7_1::Block(this);
								HX_STACK_LINE(431)
								this->propertyChanged(HX_CSTRING("_SpawnTypeID"),this->_SpawnTypeID);
								HX_STACK_LINE(432)
								if (((this->_SpawnTypeID == (int)1))){
									HX_STACK_LINE(434)
									this->_SpawnTypeActor = this->getActorType((int)0);
									HX_STACK_LINE(435)
									this->propertyChanged(HX_CSTRING("_SpawnTypeActor"),this->_SpawnTypeActor);
								}
								HX_STACK_LINE(438)
								if (((this->_SpawnTypeID == (int)2))){
									HX_STACK_LINE(440)
									this->_SpawnTypeActor = this->getActorType((int)0);
									HX_STACK_LINE(441)
									this->propertyChanged(HX_CSTRING("_SpawnTypeActor"),this->_SpawnTypeActor);
								}
								HX_STACK_LINE(444)
								if (((this->_SpawnTypeID == (int)3))){
									HX_STACK_LINE(446)
									this->_SpawnTypeActor = this->getActorType((int)0);
									HX_STACK_LINE(447)
									this->propertyChanged(HX_CSTRING("_SpawnTypeActor"),this->_SpawnTypeActor);
								}
								HX_STACK_LINE(450)
								if (((this->_SpawnTypeID == (int)4))){
									HX_STACK_LINE(452)
									this->_SpawnTypeActor = this->getActorType((int)0);
									HX_STACK_LINE(453)
									this->propertyChanged(HX_CSTRING("_SpawnTypeActor"),this->_SpawnTypeActor);
								}
								HX_STACK_LINE(456)
								if (((this->_SpawnTypeID == (int)5))){
									HX_STACK_LINE(458)
									this->_SpawnTypeActor = this->getActorType((int)0);
									HX_STACK_LINE(459)
									this->propertyChanged(HX_CSTRING("_SpawnTypeActor"),this->_SpawnTypeActor);
								}
								HX_STACK_LINE(462)
								if (((this->_SpawnTypeID == (int)6))){
									HX_STACK_LINE(464)
									this->_SpawnTypeActor = this->getActorType((int)0);
									HX_STACK_LINE(465)
									this->propertyChanged(HX_CSTRING("_SpawnTypeActor"),this->_SpawnTypeActor);
								}
								HX_STACK_LINE(468)
								this->setGameAttribute(HX_CSTRING("GemID"),this->_SpawnTypeID);
								HX_STACK_LINE(469)
								if ((!(((::List2D_obj::get_entry(::Std_obj::_int(this->getGameAttribute(HX_CSTRING("spawnX"))),::Std_obj::_int(this->getGameAttribute(HX_CSTRING("spawnY"))),this->_AlreadySpawned) == (HX_CSTRING("") + HX_CSTRING("FULL"))))))){
									HX_STACK_LINE(471)
									this->createRecycledActor(this->_SpawnTypeActor,(((this->_ScreenOffset + (this->getGameAttribute(HX_CSTRING("spawnX")) * this->_GridSpacing)) - this->_ScreenOffset) + (((Float(this->_GridSpacing) / Float((int)2)) - (int)10))),(((this->_ScreenOffesetY + (this->getGameAttribute(HX_CSTRING("spawnY")) * this->_GridSpacing)) - this->_ScreenOffesetY) + (this->_GridSpacing * (int)2)),::com::stencyl::behavior::Script_obj::FRONT);
									HX_STACK_LINE(472)
									this->getLastCreatedActor()->disableActorDrawing();
									HX_STACK_LINE(473)
									::List2D_obj::set_entry(::Std_obj::_int(this->getGameAttribute(HX_CSTRING("spawnX"))),::Std_obj::_int(this->getGameAttribute(HX_CSTRING("spawnY"))),(HX_CSTRING("") + HX_CSTRING("FULL")),this->_AlreadySpawned);
									HX_STACK_LINE(474)
									::List2D_obj::set_entry(::Std_obj::_int(this->getGameAttribute(HX_CSTRING("spawnX"))),::Std_obj::_int(this->getGameAttribute(HX_CSTRING("spawnY"))),this->_SpawnTypeID,this->_GemType);
								}
								else{
									HX_STACK_LINE(478)
									if (((::List2D_obj::get_entry(::Std_obj::_int(this->getGameAttribute(HX_CSTRING("spawnX"))),::Std_obj::_int(this->getGameAttribute(HX_CSTRING("spawnY"))),this->_AlreadySpawned) == (HX_CSTRING("") + HX_CSTRING("FULL"))))){
										HX_STACK_LINE(479)
										continue;
									}
								}
								HX_STACK_LINE(484)
								this->setGameAttribute(HX_CSTRING("TileX"),this->_Xincrementer);
								HX_STACK_LINE(485)
								this->setGameAttribute(HX_CSTRING("TileY"),this->_YIncrementer);
								HX_STACK_LINE(486)
								hx::AddEq(this->_YIncrementer,(int)1);
								HX_STACK_LINE(487)
								this->propertyChanged(HX_CSTRING("_YIncrementer"),this->_YIncrementer);
							}
						}
						HX_STACK_LINE(490)
						hx::AddEq(this->_Xincrementer,(int)1);
						HX_STACK_LINE(491)
						this->propertyChanged(HX_CSTRING("_Xincrementer"),this->_Xincrementer);
						HX_STACK_LINE(492)
						if (((this->_Xincrementer == this->getGameAttribute(HX_CSTRING("GridX"))))){
							HX_STACK_LINE(494)
							this->setGameAttribute(HX_CSTRING("GridBoundX"),((this->_ScreenOffset - this->_ScreenOffset) + (((Float(this->_GridSpacing) / Float((int)2)) - (int)10))));
							HX_STACK_LINE(495)
							this->setGameAttribute(HX_CSTRING("GridXPosition"),(((this->_ScreenOffset + (this->getGameAttribute(HX_CSTRING("spawnX")) * this->_GridSpacing)) - this->_ScreenOffset) + (((Float(this->_GridSpacing) / Float((int)2)) - (int)10))));
						}
						HX_STACK_LINE(498)
						if (((this->_YIncrementer == this->getGameAttribute(HX_CSTRING("GridY"))))){
							HX_STACK_LINE(500)
							this->setGameAttribute(HX_CSTRING("GridBoundY"),((this->_ScreenOffesetY - this->_ScreenOffesetY) + (this->_GridSpacing * (int)2)));
							HX_STACK_LINE(501)
							this->setGameAttribute(HX_CSTRING("GridYPosition"),(((this->_ScreenOffesetY + (this->getGameAttribute(HX_CSTRING("spawnY")) * this->_GridSpacing)) - this->_ScreenOffesetY) + (this->_GridSpacing * (int)2)));
						}
					}
				}
			}
		}
		HX_STACK_LINE(508)
		this->_UIDCOPY = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(509)
		this->propertyChanged(HX_CSTRING("_UIDCOPY"),this->_UIDCOPY);
		HX_STACK_LINE(510)
		this->_UIDCOPY = this->_UID->__Field(HX_CSTRING("copy"),true)();
		HX_STACK_LINE(511)
		this->propertyChanged(HX_CSTRING("_UIDCOPY"),this->_UIDCOPY);
		struct _Function_1_1{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",512);
				{
					HX_STACK_LINE(512)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",512);
				{
					HX_STACK_LINE(512)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(512)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(512)
		this->_ActorReveal = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_2::Block()) )) )) )) );
		HX_STACK_LINE(513)
		this->propertyChanged(HX_CSTRING("_ActorReveal"),this->_ActorReveal);
		struct _Function_1_3{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",514);
				{
					HX_STACK_LINE(514)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_4{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",514);
				{
					HX_STACK_LINE(514)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(514)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(514)
		this->_Xincrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_3::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_4::Block()) )) )) )) );
		HX_STACK_LINE(515)
		this->propertyChanged(HX_CSTRING("_Xincrementer"),this->_Xincrementer);
		struct _Function_1_5{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",516);
				{
					HX_STACK_LINE(516)
					return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_6{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",516);
				{
					HX_STACK_LINE(516)
					::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(516)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(516)
		this->_YIncrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_5::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_1_6::Block()) )) )) )) );
		HX_STACK_LINE(517)
		this->propertyChanged(HX_CSTRING("_YIncrementer"),this->_YIncrementer);
		HX_STACK_LINE(518)
		if ((!(((this->_Xincrementer == this->getGameAttribute(HX_CSTRING("GridX"))))))){
			HX_STACK_LINE(520)
			::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("Delay")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),520,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_SpawnStart")));
			struct _Function_2_1{
				inline static int Block( ){
					HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",521);
					{
						HX_STACK_LINE(521)
						return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static int Block( ){
					HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",521);
					{
						HX_STACK_LINE(521)
						::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
						HX_STACK_LINE(521)
						return (int)0;
					}
					return null();
				}
			};
			HX_STACK_LINE(521)
			this->_YIncrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_2_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_2_2::Block()) )) )) )) );
			HX_STACK_LINE(522)
			this->propertyChanged(HX_CSTRING("_YIncrementer"),this->_YIncrementer);

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_3,Array< ::Dynamic >,_g)
			Void run(::com::stencyl::behavior::TimedTask timeTask){
				HX_STACK_PUSH("*::_Function_2_3","scripts/Design_3_3_SceneManager.hx",523);
				HX_STACK_ARG(timeTask,"timeTask");
				{
					HX_STACK_LINE(524)
					if ((!(((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer == _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GridY"))))))){
						struct _Function_4_1{
							inline static Float Block( Array< ::Dynamic > &_g){
								HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",526);
								{
									struct _Function_5_1{
										inline static Float Block( Array< ::Dynamic > &_g){
											HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",526);
											{
												HX_STACK_LINE(526)
												Dynamic o = ::List2D_obj::get_entry(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer),::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_UID);		HX_STACK_VAR(o,"o");
												struct _Function_6_1{
													inline static int Block( Dynamic &o){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",526);
														{
															HX_STACK_LINE(526)
															return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
														}
														return null();
													}
												};
												struct _Function_6_2{
													inline static int Block( Dynamic &o){
														HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",526);
														{
															HX_STACK_LINE(526)
															::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
															HX_STACK_LINE(526)
															return (int)0;
														}
														return null();
													}
												};
												HX_STACK_LINE(526)
												return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_6_1::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_6_2::Block(o)) )) )) )) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(526)
									Dynamic o = _Function_5_1::Block(_g);		HX_STACK_VAR(o,"o");
									struct _Function_5_2{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",526);
											{
												HX_STACK_LINE(526)
												return (  ((hx::TCast< Bool >::cast(o))) ? int((int)1) : int((int)0) );
											}
											return null();
										}
									};
									struct _Function_5_3{
										inline static int Block( Dynamic &o){
											HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",526);
											{
												HX_STACK_LINE(526)
												::haxe::Log_obj::trace((::Std_obj::string(o) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
												HX_STACK_LINE(526)
												return (int)0;
											}
											return null();
										}
									};
									HX_STACK_LINE(526)
									return (  (((o == null()))) ? Float((int)0) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Float >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Int >()))) ? Float(o) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::Bool >()))) ? Float(_Function_5_2::Block(o)) : Float((  ((::Std_obj::is(o,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(o)) : Float(_Function_5_3::Block(o)) )) )) )) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(526)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_ActorReveal = _Function_4_1::Block(_g);
						HX_STACK_LINE(527)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_ActorReveal"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_ActorReveal);
						HX_STACK_LINE(528)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getActor(::Std_obj::_int(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_ActorReveal))->enableActorDrawing();
						HX_STACK_LINE(530)
						hx::AddEq(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer,(int)1);
						HX_STACK_LINE(531)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_YIncrementer"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer);
						HX_STACK_LINE(532)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->playSound(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_sda);
					}
					else{
						HX_STACK_LINE(537)
						hx::AddEq(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer,(int)1);
						HX_STACK_LINE(538)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_Xincrementer"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer);
						struct _Function_4_1{
							inline static int Block( ){
								HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",539);
								{
									HX_STACK_LINE(539)
									return (  ((hx::TCast< Bool >::cast((int)0))) ? int((int)1) : int((int)0) );
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static int Block( ){
								HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",539);
								{
									HX_STACK_LINE(539)
									::haxe::Log_obj::trace((HX_CSTRING("0") + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
									HX_STACK_LINE(539)
									return (int)0;
								}
								return null();
							}
						};
						HX_STACK_LINE(539)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer = (  ((::Std_obj::is((int)0,hx::ClassOf< ::Float >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Int >()))) ? Float((int)0) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::Bool >()))) ? Float(_Function_4_1::Block()) : Float((  ((::Std_obj::is((int)0,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat((int)0)) : Float(_Function_4_2::Block()) )) )) )) );
						HX_STACK_LINE(540)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->propertyChanged(HX_CSTRING("_YIncrementer"),_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_YIncrementer);
					}
					HX_STACK_LINE(543)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Xincrementer == _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GridX"))))){
						HX_STACK_LINE(546)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->setGameAttribute(HX_CSTRING("Started?"),true);
						HX_STACK_LINE(547)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_customEvent_CHECKGRID();
						HX_STACK_LINE(548)
						timeTask->repeats = false;
						HX_STACK_LINE(549)
						return null();
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(523)
			this->runPeriodically(60., Dynamic(new _Function_2_3(_g)),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_3_3_SceneManager_obj,_customEvent_SpawnStart,(void))

Void Design_3_3_SceneManager_obj::_customEvent_WormHole( ){
{
		HX_STACK_PUSH("Design_3_3_SceneManager::_customEvent_WormHole","scripts/Design_3_3_SceneManager.hx",407);
		HX_STACK_THIS(this);
		HX_STACK_LINE(408)
		this->createRecycledActor(this->getActorType((int)125),(int)180,(int)21,::com::stencyl::behavior::Script_obj::BACK);
		HX_STACK_LINE(409)
		this->createRecycledActor(this->getActorType((int)130),(Float(this->getSceneWidth()) / Float((int)2)),(int)64,::com::stencyl::behavior::Script_obj::FRONT);
		HX_STACK_LINE(410)
		this->getLastCreatedActor()->setValue(HX_CSTRING("WormShouts"),HX_CSTRING("_combonumber"),(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_3_3_SceneManager_obj,_customEvent_WormHole,(void))

Void Design_3_3_SceneManager_obj::_customEvent_MusicManager( ){
{
		HX_STACK_PUSH("Design_3_3_SceneManager::_customEvent_MusicManager","scripts/Design_3_3_SceneManager.hx",248);
		HX_STACK_THIS(this);
		HX_STACK_LINE(247)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",249);
				{
					HX_STACK_LINE(249)
					return (  ((hx::TCast< Bool >::cast(0.25))) ? int((int)1) : int((int)0) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static int Block( ){
				HX_STACK_PUSH("*::closure","scripts/Design_3_3_SceneManager.hx",249);
				{
					HX_STACK_LINE(249)
					::haxe::Log_obj::trace((::Std_obj::string(0.25) + HX_CSTRING(" is not a number!")),hx::SourceInfo(HX_CSTRING("Script.hx"),224,HX_CSTRING("com.stencyl.behavior.Script"),HX_CSTRING("asNumber")));
					HX_STACK_LINE(249)
					return (int)0;
				}
				return null();
			}
		};
		HX_STACK_LINE(249)
		this->_Swing = (  ((::Std_obj::is(0.25,hx::ClassOf< ::Float >()))) ? Float(0.25) : Float((  ((::Std_obj::is(0.25,hx::ClassOf< ::Int >()))) ? Float(0.25) : Float((  ((::Std_obj::is(0.25,hx::ClassOf< ::Bool >()))) ? Float(_Function_1_1::Block()) : Float((  ((::Std_obj::is(0.25,hx::ClassOf< ::String >()))) ? Float(::Std_obj::parseFloat(0.25)) : Float(_Function_1_2::Block()) )) )) )) );
		HX_STACK_LINE(250)
		this->propertyChanged(HX_CSTRING("_Swing"),this->_Swing);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_3,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_3","scripts/Design_3_3_SceneManager.hx",252);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(252)
				if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_MusicManager == true))){
					HX_STACK_LINE(255)
					if (((bool((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameBeatPosition")) == (int)2)) || bool((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameBeatPosition")) == (int)4))))){

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,_g)
						Void run(::com::stencyl::behavior::TimedTask timeTask1){
							HX_STACK_PUSH("*::_Function_4_1","scripts/Design_3_3_SceneManager.hx",258);
							HX_STACK_ARG(timeTask1,"timeTask1");
							{
								HX_STACK_LINE(258)
								_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->playSound(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSound((int)79));
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						HX_STACK_LINE(256)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->runLater(((int)1000 * ((Float((Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Swing)))), Dynamic(new _Function_4_1(_g)),null());
					}
					HX_STACK_LINE(263)
					if (((bool((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameBeatPosition")) == (int)1)) || bool((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameBeatPosition")) == (int)3))))){
						HX_STACK_LINE(264)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->playSound(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSound((int)79));
					}
				}
				else{
					HX_STACK_LINE(273)
					::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("Cancelled Kick")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),273,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_MusicManager")));
					HX_STACK_LINE(274)
					timeTask->repeats = false;
					HX_STACK_LINE(275)
					return null();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(252)
		this->runPeriodically(((int)1000 * ((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo")))))), Dynamic(new _Function_1_3(_g)),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_4,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_4","scripts/Design_3_3_SceneManager.hx",279);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(280)
				if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameBeatPosition")) == (int)2))){

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_g)
					Void run(::com::stencyl::behavior::TimedTask timeTask1){
						HX_STACK_PUSH("*::_Function_3_1","scripts/Design_3_3_SceneManager.hx",283);
						HX_STACK_ARG(timeTask1,"timeTask1");
						{
							HX_STACK_LINE(283)
							_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->playSound(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSound((int)81));
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(281)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->runLater(((int)1000 * ((Float((Float((int)60) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_Swing)))), Dynamic(new _Function_3_1(_g)),null());
				}
				HX_STACK_LINE(288)
				if (((bool((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameBeatPosition")) == (int)1)) || bool((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameBeatPosition")) == (int)3))))){
				}
				HX_STACK_LINE(294)
				if ((!(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_MusicManager))){
					HX_STACK_LINE(297)
					timeTask->repeats = false;
					HX_STACK_LINE(298)
					return null();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(279)
		this->runPeriodically(((int)1000 * ((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo")))))), Dynamic(new _Function_1_4(_g)),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_5,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_5","scripts/Design_3_3_SceneManager.hx",302);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(303)
				_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->playSound(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSound((int)57));
				HX_STACK_LINE(304)
				if ((!(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_MusicManager))){
					HX_STACK_LINE(307)
					timeTask->repeats = false;
					HX_STACK_LINE(308)
					return null();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(302)
		this->runPeriodically(((int)1000 * (((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo")))) * this->randomInt(::Math_obj::floor((int)5),::Math_obj::floor((int)10))))), Dynamic(new _Function_1_5(_g)),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_6,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_6","scripts/Design_3_3_SceneManager.hx",312);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(313)
				_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->playSound(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSound((int)81));
				HX_STACK_LINE(314)
				if ((!(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_MusicManager))){
					HX_STACK_LINE(316)
					::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("Cancelled Kick")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),316,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_MusicManager")));
					HX_STACK_LINE(317)
					timeTask->repeats = false;
					HX_STACK_LINE(318)
					return null();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(312)
		this->runPeriodically(((int)1000 * (((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo")))) * this->randomInt(::Math_obj::floor((int)1),::Math_obj::floor((int)5))))), Dynamic(new _Function_1_6(_g)),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_7,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_7","scripts/Design_3_3_SceneManager.hx",322);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(323)
				_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->playSound(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSound((int)80));
				HX_STACK_LINE(324)
				if ((!(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_MusicManager))){
					HX_STACK_LINE(326)
					::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("Cancelled Kick")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),326,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_MusicManager")));
					HX_STACK_LINE(327)
					timeTask->repeats = false;
					HX_STACK_LINE(328)
					return null();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(322)
		this->runPeriodically(((int)1000 * ((this->randomInt(::Math_obj::floor((int)1),::Math_obj::floor((int)12)) * ((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo")))))))), Dynamic(new _Function_1_7(_g)),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_8,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_8","scripts/Design_3_3_SceneManager.hx",332);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(333)
				if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameBeatPosition")) == (int)1))){
					HX_STACK_LINE(334)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->playSound(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSound((int)84));
				}
				HX_STACK_LINE(338)
				if ((!(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_MusicManager))){
					HX_STACK_LINE(340)
					::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("Cancelled Kick")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),340,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_MusicManager")));
					HX_STACK_LINE(341)
					timeTask->repeats = false;
					HX_STACK_LINE(342)
					return null();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(332)
		this->runPeriodically(((int)1000 * ((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo")))))), Dynamic(new _Function_1_8(_g)),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_9,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_9","scripts/Design_3_3_SceneManager.hx",346);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(347)
				if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameBeatPosition")) == (int)2))){
					HX_STACK_LINE(348)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->playSound(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSound((int)82));
				}
				HX_STACK_LINE(352)
				if ((!(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_MusicManager))){
					HX_STACK_LINE(354)
					::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("Cancelled Kick")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),354,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_MusicManager")));
					HX_STACK_LINE(355)
					timeTask->repeats = false;
					HX_STACK_LINE(356)
					return null();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(346)
		this->runPeriodically(((int)1000 * ((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo")))))), Dynamic(new _Function_1_9(_g)),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_10,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_10","scripts/Design_3_3_SceneManager.hx",360);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(360)
				if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameBeatPosition")) == _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->randomInt(::Math_obj::floor((int)1),::Math_obj::floor((int)4))))){
					HX_STACK_LINE(363)
					if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameBeatPosition")) == (int)3))){
						HX_STACK_LINE(364)
						_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->playSound(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSound((int)83));
					}
					HX_STACK_LINE(368)
					if ((!(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_MusicManager))){
						HX_STACK_LINE(370)
						::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("Cancelled Kick")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),370,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_MusicManager")));
						HX_STACK_LINE(371)
						timeTask->repeats = false;
						HX_STACK_LINE(372)
						return null();
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(360)
		this->runPeriodically(((int)1000 * (((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo")))) * this->_Swing))), Dynamic(new _Function_1_10(_g)),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_11,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_11","scripts/Design_3_3_SceneManager.hx",378);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(378)
				if (((_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getGameAttribute(HX_CSTRING("GameBeatPosition")) == _g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->randomInt(::Math_obj::floor((int)1),::Math_obj::floor((int)4))))){
					HX_STACK_LINE(381)
					_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->playSound(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSound((int)88));
					HX_STACK_LINE(382)
					if ((!(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_MusicManager))){
						HX_STACK_LINE(384)
						::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("Cancelled Kick")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),384,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_MusicManager")));
						HX_STACK_LINE(385)
						timeTask->repeats = false;
						HX_STACK_LINE(386)
						return null();
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(378)
		this->runPeriodically(((int)1000 * ((Float((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)))), Dynamic(new _Function_1_11(_g)),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_12,Array< ::Dynamic >,_g)
		Void run(::com::stencyl::behavior::TimedTask timeTask){
			HX_STACK_PUSH("*::_Function_1_12","scripts/Design_3_3_SceneManager.hx",392);
			HX_STACK_ARG(timeTask,"timeTask");
			{
				HX_STACK_LINE(393)
				_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->playSound(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->getSound((int)89));
				HX_STACK_LINE(394)
				if ((!(_g->__get((int)0).StaticCast< ::scripts::Design_3_3_SceneManager >()->_MusicManager))){
					HX_STACK_LINE(396)
					::haxe::Log_obj::trace((HX_CSTRING("") + HX_CSTRING("Cancelled Kick")),hx::SourceInfo(HX_CSTRING("Design_3_3_SceneManager.hx"),396,HX_CSTRING("scripts.Design_3_3_SceneManager"),HX_CSTRING("_customEvent_MusicManager")));
					HX_STACK_LINE(397)
					timeTask->repeats = false;
					HX_STACK_LINE(398)
					return null();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(392)
		this->runPeriodically(((int)1000 * ((Float((Float((int)60) / Float(this->getGameAttribute(HX_CSTRING("GameTempo"))))) / Float((int)2)))), Dynamic(new _Function_1_12(_g)),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Design_3_3_SceneManager_obj,_customEvent_MusicManager,(void))


Design_3_3_SceneManager_obj::Design_3_3_SceneManager_obj()
{
}

void Design_3_3_SceneManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Design_3_3_SceneManager);
	HX_MARK_MEMBER_NAME(_resetY,"_resetY");
	HX_MARK_MEMBER_NAME(_resetX,"_resetX");
	HX_MARK_MEMBER_NAME(_ComboBrokenFlag,"_ComboBrokenFlag");
	HX_MARK_MEMBER_NAME(_StartTimer,"_StartTimer");
	HX_MARK_MEMBER_NAME(_TapKillList,"_TapKillList");
	HX_MARK_MEMBER_NAME(_TapCombo,"_TapCombo");
	HX_MARK_MEMBER_NAME(_cleaner,"_cleaner");
	HX_MARK_MEMBER_NAME(_CleanUpTapMode,"_CleanUpTapMode");
	HX_MARK_MEMBER_NAME(_PreTapKillList,"_PreTapKillList");
	HX_MARK_MEMBER_NAME(_TapOn,"_TapOn");
	HX_MARK_MEMBER_NAME(_Taplist,"_Taplist");
	HX_MARK_MEMBER_NAME(_GemSelector,"_GemSelector");
	HX_MARK_MEMBER_NAME(_CreateWorm,"_CreateWorm");
	HX_MARK_MEMBER_NAME(_Ending,"_Ending");
	HX_MARK_MEMBER_NAME(_TapPrekill,"_TapPrekill");
	HX_MARK_MEMBER_NAME(_TapTime,"_TapTime");
	HX_MARK_MEMBER_NAME(_TappingList,"_TappingList");
	HX_MARK_MEMBER_NAME(_TapmodeFlag,"_TapmodeFlag");
	HX_MARK_MEMBER_NAME(_AutoCombo,"_AutoCombo");
	HX_MARK_MEMBER_NAME(_Multiplefinder,"_Multiplefinder");
	HX_MARK_MEMBER_NAME(_ActorDeathPosY,"_ActorDeathPosY");
	HX_MARK_MEMBER_NAME(_PlayerInput,"_PlayerInput");
	HX_MARK_MEMBER_NAME(_combonumber,"_combonumber");
	HX_MARK_MEMBER_NAME(_EndLevel,"_EndLevel");
	HX_MARK_MEMBER_NAME(_DisplayText,"_DisplayText");
	HX_MARK_MEMBER_NAME(_Cursor,"_Cursor");
	HX_MARK_MEMBER_NAME(_Win,"_Win");
	HX_MARK_MEMBER_NAME(_GameTempo,"_GameTempo");
	HX_MARK_MEMBER_NAME(_SwingCounter,"_SwingCounter");
	HX_MARK_MEMBER_NAME(_Swing,"_Swing");
	HX_MARK_MEMBER_NAME(_ActorDeathPos,"_ActorDeathPos");
	HX_MARK_MEMBER_NAME(_Combo,"_Combo");
	HX_MARK_MEMBER_NAME(_ScreenOffesetY,"_ScreenOffesetY");
	HX_MARK_MEMBER_NAME(_Lose,"_Lose");
	HX_MARK_MEMBER_NAME(_BombKill,"_BombKill");
	HX_MARK_MEMBER_NAME(_BombYY,"_BombYY");
	HX_MARK_MEMBER_NAME(_BombXX,"_BombXX");
	HX_MARK_MEMBER_NAME(_BombY,"_BombY");
	HX_MARK_MEMBER_NAME(_MusicManager,"_MusicManager");
	HX_MARK_MEMBER_NAME(_BeaterRefillY,"_BeaterRefillY");
	HX_MARK_MEMBER_NAME(_BeaterRefillX,"_BeaterRefillX");
	HX_MARK_MEMBER_NAME(_Coins,"_Coins");
	HX_MARK_MEMBER_NAME(_GemID,"_GemID");
	HX_MARK_MEMBER_NAME(_DoubleCombo,"_DoubleCombo");
	HX_MARK_MEMBER_NAME(_CreateBombPiece,"_CreateBombPiece");
	HX_MARK_MEMBER_NAME(_BombX,"_BombX");
	HX_MARK_MEMBER_NAME(_SpecialListBomb,"_SpecialListBomb");
	HX_MARK_MEMBER_NAME(_SpecialKill,"_SpecialKill");
	HX_MARK_MEMBER_NAME(_MatchesFound,"_MatchesFound");
	HX_MARK_MEMBER_NAME(_SpecialSpawn,"_SpecialSpawn");
	HX_MARK_MEMBER_NAME(_HintList,"_HintList");
	HX_MARK_MEMBER_NAME(_IdleTime,"_IdleTime");
	HX_MARK_MEMBER_NAME(_Direction,"_Direction");
	HX_MARK_MEMBER_NAME(_BeaterSpawn,"_BeaterSpawn");
	HX_MARK_MEMBER_NAME(_ExtraSearcher,"_ExtraSearcher");
	HX_MARK_MEMBER_NAME(_BeaterCombo,"_BeaterCombo");
	HX_MARK_MEMBER_NAME(_DrawOrder,"_DrawOrder");
	HX_MARK_MEMBER_NAME(_Delayer,"_Delayer");
	HX_MARK_MEMBER_NAME(_ScoreCounter,"_ScoreCounter");
	HX_MARK_MEMBER_NAME(_Score,"_Score");
	HX_MARK_MEMBER_NAME(_sda,"_sda");
	HX_MARK_MEMBER_NAME(_GemSound,"_GemSound");
	HX_MARK_MEMBER_NAME(_RefillY,"_RefillY");
	HX_MARK_MEMBER_NAME(_RefillX,"_RefillX");
	HX_MARK_MEMBER_NAME(_ScreenOffset,"_ScreenOffset");
	HX_MARK_MEMBER_NAME(_KillListMod,"_KillListMod");
	HX_MARK_MEMBER_NAME(_UIDCOPY,"_UIDCOPY");
	HX_MARK_MEMBER_NAME(_ActorReveal,"_ActorReveal");
	HX_MARK_MEMBER_NAME(_Spawn,"_Spawn");
	HX_MARK_MEMBER_NAME(_XSearcher,"_XSearcher");
	HX_MARK_MEMBER_NAME(_SpawnTypeID,"_SpawnTypeID");
	HX_MARK_MEMBER_NAME(_SpawnTypeActor,"_SpawnTypeActor");
	HX_MARK_MEMBER_NAME(_GemTypeNumber,"_GemTypeNumber");
	HX_MARK_MEMBER_NAME(_DestroyListModifier,"_DestroyListModifier");
	HX_MARK_MEMBER_NAME(_KillList,"_KillList");
	HX_MARK_MEMBER_NAME(_Searcher,"_Searcher");
	HX_MARK_MEMBER_NAME(_NumberOfMatches,"_NumberOfMatches");
	HX_MARK_MEMBER_NAME(_CheckMatches,"_CheckMatches");
	HX_MARK_MEMBER_NAME(_IsDestroying,"_IsDestroying");
	HX_MARK_MEMBER_NAME(_CanSpawn,"_CanSpawn");
	HX_MARK_MEMBER_NAME(_Swapping,"_Swapping");
	HX_MARK_MEMBER_NAME(_Target,"_Target");
	HX_MARK_MEMBER_NAME(_AlreadySpawned,"_AlreadySpawned");
	HX_MARK_MEMBER_NAME(_TileList,"_TileList");
	HX_MARK_MEMBER_NAME(_GemType,"_GemType");
	HX_MARK_MEMBER_NAME(_UID,"_UID");
	HX_MARK_MEMBER_NAME(_GridSpacing,"_GridSpacing");
	HX_MARK_MEMBER_NAME(_YIncrementer,"_YIncrementer");
	HX_MARK_MEMBER_NAME(_Xincrementer,"_Xincrementer");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Design_3_3_SceneManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_resetY,"_resetY");
	HX_VISIT_MEMBER_NAME(_resetX,"_resetX");
	HX_VISIT_MEMBER_NAME(_ComboBrokenFlag,"_ComboBrokenFlag");
	HX_VISIT_MEMBER_NAME(_StartTimer,"_StartTimer");
	HX_VISIT_MEMBER_NAME(_TapKillList,"_TapKillList");
	HX_VISIT_MEMBER_NAME(_TapCombo,"_TapCombo");
	HX_VISIT_MEMBER_NAME(_cleaner,"_cleaner");
	HX_VISIT_MEMBER_NAME(_CleanUpTapMode,"_CleanUpTapMode");
	HX_VISIT_MEMBER_NAME(_PreTapKillList,"_PreTapKillList");
	HX_VISIT_MEMBER_NAME(_TapOn,"_TapOn");
	HX_VISIT_MEMBER_NAME(_Taplist,"_Taplist");
	HX_VISIT_MEMBER_NAME(_GemSelector,"_GemSelector");
	HX_VISIT_MEMBER_NAME(_CreateWorm,"_CreateWorm");
	HX_VISIT_MEMBER_NAME(_Ending,"_Ending");
	HX_VISIT_MEMBER_NAME(_TapPrekill,"_TapPrekill");
	HX_VISIT_MEMBER_NAME(_TapTime,"_TapTime");
	HX_VISIT_MEMBER_NAME(_TappingList,"_TappingList");
	HX_VISIT_MEMBER_NAME(_TapmodeFlag,"_TapmodeFlag");
	HX_VISIT_MEMBER_NAME(_AutoCombo,"_AutoCombo");
	HX_VISIT_MEMBER_NAME(_Multiplefinder,"_Multiplefinder");
	HX_VISIT_MEMBER_NAME(_ActorDeathPosY,"_ActorDeathPosY");
	HX_VISIT_MEMBER_NAME(_PlayerInput,"_PlayerInput");
	HX_VISIT_MEMBER_NAME(_combonumber,"_combonumber");
	HX_VISIT_MEMBER_NAME(_EndLevel,"_EndLevel");
	HX_VISIT_MEMBER_NAME(_DisplayText,"_DisplayText");
	HX_VISIT_MEMBER_NAME(_Cursor,"_Cursor");
	HX_VISIT_MEMBER_NAME(_Win,"_Win");
	HX_VISIT_MEMBER_NAME(_GameTempo,"_GameTempo");
	HX_VISIT_MEMBER_NAME(_SwingCounter,"_SwingCounter");
	HX_VISIT_MEMBER_NAME(_Swing,"_Swing");
	HX_VISIT_MEMBER_NAME(_ActorDeathPos,"_ActorDeathPos");
	HX_VISIT_MEMBER_NAME(_Combo,"_Combo");
	HX_VISIT_MEMBER_NAME(_ScreenOffesetY,"_ScreenOffesetY");
	HX_VISIT_MEMBER_NAME(_Lose,"_Lose");
	HX_VISIT_MEMBER_NAME(_BombKill,"_BombKill");
	HX_VISIT_MEMBER_NAME(_BombYY,"_BombYY");
	HX_VISIT_MEMBER_NAME(_BombXX,"_BombXX");
	HX_VISIT_MEMBER_NAME(_BombY,"_BombY");
	HX_VISIT_MEMBER_NAME(_MusicManager,"_MusicManager");
	HX_VISIT_MEMBER_NAME(_BeaterRefillY,"_BeaterRefillY");
	HX_VISIT_MEMBER_NAME(_BeaterRefillX,"_BeaterRefillX");
	HX_VISIT_MEMBER_NAME(_Coins,"_Coins");
	HX_VISIT_MEMBER_NAME(_GemID,"_GemID");
	HX_VISIT_MEMBER_NAME(_DoubleCombo,"_DoubleCombo");
	HX_VISIT_MEMBER_NAME(_CreateBombPiece,"_CreateBombPiece");
	HX_VISIT_MEMBER_NAME(_BombX,"_BombX");
	HX_VISIT_MEMBER_NAME(_SpecialListBomb,"_SpecialListBomb");
	HX_VISIT_MEMBER_NAME(_SpecialKill,"_SpecialKill");
	HX_VISIT_MEMBER_NAME(_MatchesFound,"_MatchesFound");
	HX_VISIT_MEMBER_NAME(_SpecialSpawn,"_SpecialSpawn");
	HX_VISIT_MEMBER_NAME(_HintList,"_HintList");
	HX_VISIT_MEMBER_NAME(_IdleTime,"_IdleTime");
	HX_VISIT_MEMBER_NAME(_Direction,"_Direction");
	HX_VISIT_MEMBER_NAME(_BeaterSpawn,"_BeaterSpawn");
	HX_VISIT_MEMBER_NAME(_ExtraSearcher,"_ExtraSearcher");
	HX_VISIT_MEMBER_NAME(_BeaterCombo,"_BeaterCombo");
	HX_VISIT_MEMBER_NAME(_DrawOrder,"_DrawOrder");
	HX_VISIT_MEMBER_NAME(_Delayer,"_Delayer");
	HX_VISIT_MEMBER_NAME(_ScoreCounter,"_ScoreCounter");
	HX_VISIT_MEMBER_NAME(_Score,"_Score");
	HX_VISIT_MEMBER_NAME(_sda,"_sda");
	HX_VISIT_MEMBER_NAME(_GemSound,"_GemSound");
	HX_VISIT_MEMBER_NAME(_RefillY,"_RefillY");
	HX_VISIT_MEMBER_NAME(_RefillX,"_RefillX");
	HX_VISIT_MEMBER_NAME(_ScreenOffset,"_ScreenOffset");
	HX_VISIT_MEMBER_NAME(_KillListMod,"_KillListMod");
	HX_VISIT_MEMBER_NAME(_UIDCOPY,"_UIDCOPY");
	HX_VISIT_MEMBER_NAME(_ActorReveal,"_ActorReveal");
	HX_VISIT_MEMBER_NAME(_Spawn,"_Spawn");
	HX_VISIT_MEMBER_NAME(_XSearcher,"_XSearcher");
	HX_VISIT_MEMBER_NAME(_SpawnTypeID,"_SpawnTypeID");
	HX_VISIT_MEMBER_NAME(_SpawnTypeActor,"_SpawnTypeActor");
	HX_VISIT_MEMBER_NAME(_GemTypeNumber,"_GemTypeNumber");
	HX_VISIT_MEMBER_NAME(_DestroyListModifier,"_DestroyListModifier");
	HX_VISIT_MEMBER_NAME(_KillList,"_KillList");
	HX_VISIT_MEMBER_NAME(_Searcher,"_Searcher");
	HX_VISIT_MEMBER_NAME(_NumberOfMatches,"_NumberOfMatches");
	HX_VISIT_MEMBER_NAME(_CheckMatches,"_CheckMatches");
	HX_VISIT_MEMBER_NAME(_IsDestroying,"_IsDestroying");
	HX_VISIT_MEMBER_NAME(_CanSpawn,"_CanSpawn");
	HX_VISIT_MEMBER_NAME(_Swapping,"_Swapping");
	HX_VISIT_MEMBER_NAME(_Target,"_Target");
	HX_VISIT_MEMBER_NAME(_AlreadySpawned,"_AlreadySpawned");
	HX_VISIT_MEMBER_NAME(_TileList,"_TileList");
	HX_VISIT_MEMBER_NAME(_GemType,"_GemType");
	HX_VISIT_MEMBER_NAME(_UID,"_UID");
	HX_VISIT_MEMBER_NAME(_GridSpacing,"_GridSpacing");
	HX_VISIT_MEMBER_NAME(_YIncrementer,"_YIncrementer");
	HX_VISIT_MEMBER_NAME(_Xincrementer,"_Xincrementer");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Design_3_3_SceneManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"_Win") ) { return _Win; }
		if (HX_FIELD_EQ(inName,"_sda") ) { return _sda; }
		if (HX_FIELD_EQ(inName,"_UID") ) { return _UID; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_Lose") ) { return _Lose; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_TapOn") ) { return _TapOn; }
		if (HX_FIELD_EQ(inName,"_Swing") ) { return _Swing; }
		if (HX_FIELD_EQ(inName,"_Combo") ) { return _Combo; }
		if (HX_FIELD_EQ(inName,"_BombY") ) { return _BombY; }
		if (HX_FIELD_EQ(inName,"_Coins") ) { return _Coins; }
		if (HX_FIELD_EQ(inName,"_GemID") ) { return _GemID; }
		if (HX_FIELD_EQ(inName,"_BombX") ) { return _BombX; }
		if (HX_FIELD_EQ(inName,"_Score") ) { return _Score; }
		if (HX_FIELD_EQ(inName,"_Spawn") ) { return _Spawn; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_resetY") ) { return _resetY; }
		if (HX_FIELD_EQ(inName,"_resetX") ) { return _resetX; }
		if (HX_FIELD_EQ(inName,"_Ending") ) { return _Ending; }
		if (HX_FIELD_EQ(inName,"_Cursor") ) { return _Cursor; }
		if (HX_FIELD_EQ(inName,"_BombYY") ) { return _BombYY; }
		if (HX_FIELD_EQ(inName,"_BombXX") ) { return _BombXX; }
		if (HX_FIELD_EQ(inName,"_Target") ) { return _Target; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_cleaner") ) { return _cleaner; }
		if (HX_FIELD_EQ(inName,"_Taplist") ) { return _Taplist; }
		if (HX_FIELD_EQ(inName,"_TapTime") ) { return _TapTime; }
		if (HX_FIELD_EQ(inName,"_Delayer") ) { return _Delayer; }
		if (HX_FIELD_EQ(inName,"_RefillY") ) { return _RefillY; }
		if (HX_FIELD_EQ(inName,"_RefillX") ) { return _RefillX; }
		if (HX_FIELD_EQ(inName,"_UIDCOPY") ) { return _UIDCOPY; }
		if (HX_FIELD_EQ(inName,"_GemType") ) { return _GemType; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_TapCombo") ) { return _TapCombo; }
		if (HX_FIELD_EQ(inName,"_EndLevel") ) { return _EndLevel; }
		if (HX_FIELD_EQ(inName,"_BombKill") ) { return _BombKill; }
		if (HX_FIELD_EQ(inName,"_HintList") ) { return _HintList; }
		if (HX_FIELD_EQ(inName,"_IdleTime") ) { return _IdleTime; }
		if (HX_FIELD_EQ(inName,"_GemSound") ) { return _GemSound; }
		if (HX_FIELD_EQ(inName,"_KillList") ) { return _KillList; }
		if (HX_FIELD_EQ(inName,"_Searcher") ) { return _Searcher; }
		if (HX_FIELD_EQ(inName,"_CanSpawn") ) { return _CanSpawn; }
		if (HX_FIELD_EQ(inName,"_Swapping") ) { return _Swapping; }
		if (HX_FIELD_EQ(inName,"_TileList") ) { return _TileList; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_AutoCombo") ) { return _AutoCombo; }
		if (HX_FIELD_EQ(inName,"_GameTempo") ) { return _GameTempo; }
		if (HX_FIELD_EQ(inName,"_Direction") ) { return _Direction; }
		if (HX_FIELD_EQ(inName,"_DrawOrder") ) { return _DrawOrder; }
		if (HX_FIELD_EQ(inName,"_XSearcher") ) { return _XSearcher; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_StartTimer") ) { return _StartTimer; }
		if (HX_FIELD_EQ(inName,"_CreateWorm") ) { return _CreateWorm; }
		if (HX_FIELD_EQ(inName,"_TapPrekill") ) { return _TapPrekill; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_TapKillList") ) { return _TapKillList; }
		if (HX_FIELD_EQ(inName,"_GemSelector") ) { return _GemSelector; }
		if (HX_FIELD_EQ(inName,"_TappingList") ) { return _TappingList; }
		if (HX_FIELD_EQ(inName,"_TapmodeFlag") ) { return _TapmodeFlag; }
		if (HX_FIELD_EQ(inName,"_PlayerInput") ) { return _PlayerInput; }
		if (HX_FIELD_EQ(inName,"_combonumber") ) { return _combonumber; }
		if (HX_FIELD_EQ(inName,"_DisplayText") ) { return _DisplayText; }
		if (HX_FIELD_EQ(inName,"_DoubleCombo") ) { return _DoubleCombo; }
		if (HX_FIELD_EQ(inName,"_SpecialKill") ) { return _SpecialKill; }
		if (HX_FIELD_EQ(inName,"_BeaterSpawn") ) { return _BeaterSpawn; }
		if (HX_FIELD_EQ(inName,"_BeaterCombo") ) { return _BeaterCombo; }
		if (HX_FIELD_EQ(inName,"_KillListMod") ) { return _KillListMod; }
		if (HX_FIELD_EQ(inName,"_ActorReveal") ) { return _ActorReveal; }
		if (HX_FIELD_EQ(inName,"_SpawnTypeID") ) { return _SpawnTypeID; }
		if (HX_FIELD_EQ(inName,"_GridSpacing") ) { return _GridSpacing; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_SwingCounter") ) { return _SwingCounter; }
		if (HX_FIELD_EQ(inName,"_MusicManager") ) { return _MusicManager; }
		if (HX_FIELD_EQ(inName,"_MatchesFound") ) { return _MatchesFound; }
		if (HX_FIELD_EQ(inName,"_SpecialSpawn") ) { return _SpecialSpawn; }
		if (HX_FIELD_EQ(inName,"_ScoreCounter") ) { return _ScoreCounter; }
		if (HX_FIELD_EQ(inName,"_ScreenOffset") ) { return _ScreenOffset; }
		if (HX_FIELD_EQ(inName,"_CheckMatches") ) { return _CheckMatches; }
		if (HX_FIELD_EQ(inName,"_IsDestroying") ) { return _IsDestroying; }
		if (HX_FIELD_EQ(inName,"_YIncrementer") ) { return _YIncrementer; }
		if (HX_FIELD_EQ(inName,"_Xincrementer") ) { return _Xincrementer; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"forwardMessage") ) { return forwardMessage_dyn(); }
		if (HX_FIELD_EQ(inName,"_ActorDeathPos") ) { return _ActorDeathPos; }
		if (HX_FIELD_EQ(inName,"_BeaterRefillY") ) { return _BeaterRefillY; }
		if (HX_FIELD_EQ(inName,"_BeaterRefillX") ) { return _BeaterRefillX; }
		if (HX_FIELD_EQ(inName,"_ExtraSearcher") ) { return _ExtraSearcher; }
		if (HX_FIELD_EQ(inName,"_GemTypeNumber") ) { return _GemTypeNumber; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_CleanUpTapMode") ) { return _CleanUpTapMode; }
		if (HX_FIELD_EQ(inName,"_PreTapKillList") ) { return _PreTapKillList; }
		if (HX_FIELD_EQ(inName,"_Multiplefinder") ) { return _Multiplefinder; }
		if (HX_FIELD_EQ(inName,"_ActorDeathPosY") ) { return _ActorDeathPosY; }
		if (HX_FIELD_EQ(inName,"_ScreenOffesetY") ) { return _ScreenOffesetY; }
		if (HX_FIELD_EQ(inName,"_SpawnTypeActor") ) { return _SpawnTypeActor; }
		if (HX_FIELD_EQ(inName,"_AlreadySpawned") ) { return _AlreadySpawned; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_customEvent_Win") ) { return _customEvent_Win_dyn(); }
		if (HX_FIELD_EQ(inName,"_ComboBrokenFlag") ) { return _ComboBrokenFlag; }
		if (HX_FIELD_EQ(inName,"_CreateBombPiece") ) { return _CreateBombPiece; }
		if (HX_FIELD_EQ(inName,"_SpecialListBomb") ) { return _SpecialListBomb; }
		if (HX_FIELD_EQ(inName,"_NumberOfMatches") ) { return _NumberOfMatches; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_customEvent_Lose") ) { return _customEvent_Lose_dyn(); }
		if (HX_FIELD_EQ(inName,"_customEvent_Kill") ) { return _customEvent_Kill_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_customEvent_Check") ) { return _customEvent_Check_dyn(); }
		if (HX_FIELD_EQ(inName,"_customEvent_Spawn") ) { return _customEvent_Spawn_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_customEvent_TapMode") ) { return _customEvent_TapMode_dyn(); }
		if (HX_FIELD_EQ(inName,"_customEvent_TapTime") ) { return _customEvent_TapTime_dyn(); }
		if (HX_FIELD_EQ(inName,"_customEvent_PreKill") ) { return _customEvent_PreKill_dyn(); }
		if (HX_FIELD_EQ(inName,"_DestroyListModifier") ) { return _DestroyListModifier; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_customEvent_ResetTap") ) { return _customEvent_ResetTap_dyn(); }
		if (HX_FIELD_EQ(inName,"_customEvent_WormHole") ) { return _customEvent_WormHole_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_customEvent_CHECKGRID") ) { return _customEvent_CHECKGRID_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_customEvent_SpawnStart") ) { return _customEvent_SpawnStart_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_customEvent_BeaterSpawn") ) { return _customEvent_BeaterSpawn_dyn(); }
		if (HX_FIELD_EQ(inName,"_customEvent_EndingLevel") ) { return _customEvent_EndingLevel_dyn(); }
		if (HX_FIELD_EQ(inName,"_customEvent_SpecialKill") ) { return _customEvent_SpecialKill_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_customEvent_MusicManager") ) { return _customEvent_MusicManager_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"_customEvent_CheckWinConditions") ) { return _customEvent_CheckWinConditions_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Design_3_3_SceneManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_Win") ) { _Win=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sda") ) { _sda=inValue.Cast< ::com::stencyl::models::Sound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_UID") ) { _UID=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_Lose") ) { _Lose=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_TapOn") ) { _TapOn=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Swing") ) { _Swing=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Combo") ) { _Combo=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_BombY") ) { _BombY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Coins") ) { _Coins=inValue.Cast< ::com::stencyl::models::actor::ActorType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_GemID") ) { _GemID=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_BombX") ) { _BombX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Score") ) { _Score=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Spawn") ) { _Spawn=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_resetY") ) { _resetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_resetX") ) { _resetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Ending") ) { _Ending=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Cursor") ) { _Cursor=inValue.Cast< ::com::stencyl::models::Actor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_BombYY") ) { _BombYY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_BombXX") ) { _BombXX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Target") ) { _Target=inValue.Cast< ::com::stencyl::models::Region >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_cleaner") ) { _cleaner=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Taplist") ) { _Taplist=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_TapTime") ) { _TapTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Delayer") ) { _Delayer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_RefillY") ) { _RefillY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_RefillX") ) { _RefillX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_UIDCOPY") ) { _UIDCOPY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_GemType") ) { _GemType=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_TapCombo") ) { _TapCombo=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_EndLevel") ) { _EndLevel=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_BombKill") ) { _BombKill=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_HintList") ) { _HintList=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_IdleTime") ) { _IdleTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_GemSound") ) { _GemSound=inValue.Cast< ::com::stencyl::models::Sound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_KillList") ) { _KillList=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Searcher") ) { _Searcher=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_CanSpawn") ) { _CanSpawn=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Swapping") ) { _Swapping=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_TileList") ) { _TileList=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_AutoCombo") ) { _AutoCombo=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_GameTempo") ) { _GameTempo=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Direction") ) { _Direction=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_DrawOrder") ) { _DrawOrder=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_XSearcher") ) { _XSearcher=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_StartTimer") ) { _StartTimer=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_CreateWorm") ) { _CreateWorm=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_TapPrekill") ) { _TapPrekill=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_TapKillList") ) { _TapKillList=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_GemSelector") ) { _GemSelector=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_TappingList") ) { _TappingList=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_TapmodeFlag") ) { _TapmodeFlag=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_PlayerInput") ) { _PlayerInput=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_combonumber") ) { _combonumber=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_DisplayText") ) { _DisplayText=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_DoubleCombo") ) { _DoubleCombo=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_SpecialKill") ) { _SpecialKill=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_BeaterSpawn") ) { _BeaterSpawn=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_BeaterCombo") ) { _BeaterCombo=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_KillListMod") ) { _KillListMod=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ActorReveal") ) { _ActorReveal=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_SpawnTypeID") ) { _SpawnTypeID=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_GridSpacing") ) { _GridSpacing=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_SwingCounter") ) { _SwingCounter=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_MusicManager") ) { _MusicManager=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_MatchesFound") ) { _MatchesFound=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_SpecialSpawn") ) { _SpecialSpawn=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ScoreCounter") ) { _ScoreCounter=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ScreenOffset") ) { _ScreenOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_CheckMatches") ) { _CheckMatches=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_IsDestroying") ) { _IsDestroying=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_YIncrementer") ) { _YIncrementer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Xincrementer") ) { _Xincrementer=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_ActorDeathPos") ) { _ActorDeathPos=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_BeaterRefillY") ) { _BeaterRefillY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_BeaterRefillX") ) { _BeaterRefillX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ExtraSearcher") ) { _ExtraSearcher=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_GemTypeNumber") ) { _GemTypeNumber=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_CleanUpTapMode") ) { _CleanUpTapMode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_PreTapKillList") ) { _PreTapKillList=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Multiplefinder") ) { _Multiplefinder=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ActorDeathPosY") ) { _ActorDeathPosY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ScreenOffesetY") ) { _ScreenOffesetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_SpawnTypeActor") ) { _SpawnTypeActor=inValue.Cast< ::com::stencyl::models::actor::ActorType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_AlreadySpawned") ) { _AlreadySpawned=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_ComboBrokenFlag") ) { _ComboBrokenFlag=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_CreateBombPiece") ) { _CreateBombPiece=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_SpecialListBomb") ) { _SpecialListBomb=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_NumberOfMatches") ) { _NumberOfMatches=inValue.Cast< Float >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_DestroyListModifier") ) { _DestroyListModifier=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Design_3_3_SceneManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_resetY"));
	outFields->push(HX_CSTRING("_resetX"));
	outFields->push(HX_CSTRING("_ComboBrokenFlag"));
	outFields->push(HX_CSTRING("_StartTimer"));
	outFields->push(HX_CSTRING("_TapKillList"));
	outFields->push(HX_CSTRING("_TapCombo"));
	outFields->push(HX_CSTRING("_cleaner"));
	outFields->push(HX_CSTRING("_CleanUpTapMode"));
	outFields->push(HX_CSTRING("_PreTapKillList"));
	outFields->push(HX_CSTRING("_TapOn"));
	outFields->push(HX_CSTRING("_Taplist"));
	outFields->push(HX_CSTRING("_GemSelector"));
	outFields->push(HX_CSTRING("_CreateWorm"));
	outFields->push(HX_CSTRING("_Ending"));
	outFields->push(HX_CSTRING("_TapPrekill"));
	outFields->push(HX_CSTRING("_TapTime"));
	outFields->push(HX_CSTRING("_TappingList"));
	outFields->push(HX_CSTRING("_TapmodeFlag"));
	outFields->push(HX_CSTRING("_AutoCombo"));
	outFields->push(HX_CSTRING("_Multiplefinder"));
	outFields->push(HX_CSTRING("_ActorDeathPosY"));
	outFields->push(HX_CSTRING("_PlayerInput"));
	outFields->push(HX_CSTRING("_combonumber"));
	outFields->push(HX_CSTRING("_EndLevel"));
	outFields->push(HX_CSTRING("_DisplayText"));
	outFields->push(HX_CSTRING("_Cursor"));
	outFields->push(HX_CSTRING("_Win"));
	outFields->push(HX_CSTRING("_GameTempo"));
	outFields->push(HX_CSTRING("_SwingCounter"));
	outFields->push(HX_CSTRING("_Swing"));
	outFields->push(HX_CSTRING("_ActorDeathPos"));
	outFields->push(HX_CSTRING("_Combo"));
	outFields->push(HX_CSTRING("_ScreenOffesetY"));
	outFields->push(HX_CSTRING("_Lose"));
	outFields->push(HX_CSTRING("_BombKill"));
	outFields->push(HX_CSTRING("_BombYY"));
	outFields->push(HX_CSTRING("_BombXX"));
	outFields->push(HX_CSTRING("_BombY"));
	outFields->push(HX_CSTRING("_MusicManager"));
	outFields->push(HX_CSTRING("_BeaterRefillY"));
	outFields->push(HX_CSTRING("_BeaterRefillX"));
	outFields->push(HX_CSTRING("_Coins"));
	outFields->push(HX_CSTRING("_GemID"));
	outFields->push(HX_CSTRING("_DoubleCombo"));
	outFields->push(HX_CSTRING("_CreateBombPiece"));
	outFields->push(HX_CSTRING("_BombX"));
	outFields->push(HX_CSTRING("_SpecialListBomb"));
	outFields->push(HX_CSTRING("_SpecialKill"));
	outFields->push(HX_CSTRING("_MatchesFound"));
	outFields->push(HX_CSTRING("_SpecialSpawn"));
	outFields->push(HX_CSTRING("_HintList"));
	outFields->push(HX_CSTRING("_IdleTime"));
	outFields->push(HX_CSTRING("_Direction"));
	outFields->push(HX_CSTRING("_BeaterSpawn"));
	outFields->push(HX_CSTRING("_ExtraSearcher"));
	outFields->push(HX_CSTRING("_BeaterCombo"));
	outFields->push(HX_CSTRING("_DrawOrder"));
	outFields->push(HX_CSTRING("_Delayer"));
	outFields->push(HX_CSTRING("_ScoreCounter"));
	outFields->push(HX_CSTRING("_Score"));
	outFields->push(HX_CSTRING("_sda"));
	outFields->push(HX_CSTRING("_GemSound"));
	outFields->push(HX_CSTRING("_RefillY"));
	outFields->push(HX_CSTRING("_RefillX"));
	outFields->push(HX_CSTRING("_ScreenOffset"));
	outFields->push(HX_CSTRING("_KillListMod"));
	outFields->push(HX_CSTRING("_UIDCOPY"));
	outFields->push(HX_CSTRING("_ActorReveal"));
	outFields->push(HX_CSTRING("_Spawn"));
	outFields->push(HX_CSTRING("_XSearcher"));
	outFields->push(HX_CSTRING("_SpawnTypeID"));
	outFields->push(HX_CSTRING("_SpawnTypeActor"));
	outFields->push(HX_CSTRING("_GemTypeNumber"));
	outFields->push(HX_CSTRING("_DestroyListModifier"));
	outFields->push(HX_CSTRING("_KillList"));
	outFields->push(HX_CSTRING("_Searcher"));
	outFields->push(HX_CSTRING("_NumberOfMatches"));
	outFields->push(HX_CSTRING("_CheckMatches"));
	outFields->push(HX_CSTRING("_IsDestroying"));
	outFields->push(HX_CSTRING("_CanSpawn"));
	outFields->push(HX_CSTRING("_Swapping"));
	outFields->push(HX_CSTRING("_Target"));
	outFields->push(HX_CSTRING("_AlreadySpawned"));
	outFields->push(HX_CSTRING("_TileList"));
	outFields->push(HX_CSTRING("_GemType"));
	outFields->push(HX_CSTRING("_UID"));
	outFields->push(HX_CSTRING("_GridSpacing"));
	outFields->push(HX_CSTRING("_YIncrementer"));
	outFields->push(HX_CSTRING("_Xincrementer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("forwardMessage"),
	HX_CSTRING("init"),
	HX_CSTRING("_customEvent_TapMode"),
	HX_CSTRING("_customEvent_ResetTap"),
	HX_CSTRING("_customEvent_TapTime"),
	HX_CSTRING("_customEvent_Lose"),
	HX_CSTRING("_customEvent_BeaterSpawn"),
	HX_CSTRING("_customEvent_EndingLevel"),
	HX_CSTRING("_customEvent_Win"),
	HX_CSTRING("_customEvent_CheckWinConditions"),
	HX_CSTRING("_customEvent_SpecialKill"),
	HX_CSTRING("_customEvent_Kill"),
	HX_CSTRING("_customEvent_PreKill"),
	HX_CSTRING("_customEvent_Check"),
	HX_CSTRING("_customEvent_CHECKGRID"),
	HX_CSTRING("_customEvent_Spawn"),
	HX_CSTRING("_customEvent_SpawnStart"),
	HX_CSTRING("_customEvent_WormHole"),
	HX_CSTRING("_customEvent_MusicManager"),
	HX_CSTRING("_resetY"),
	HX_CSTRING("_resetX"),
	HX_CSTRING("_ComboBrokenFlag"),
	HX_CSTRING("_StartTimer"),
	HX_CSTRING("_TapKillList"),
	HX_CSTRING("_TapCombo"),
	HX_CSTRING("_cleaner"),
	HX_CSTRING("_CleanUpTapMode"),
	HX_CSTRING("_PreTapKillList"),
	HX_CSTRING("_TapOn"),
	HX_CSTRING("_Taplist"),
	HX_CSTRING("_GemSelector"),
	HX_CSTRING("_CreateWorm"),
	HX_CSTRING("_Ending"),
	HX_CSTRING("_TapPrekill"),
	HX_CSTRING("_TapTime"),
	HX_CSTRING("_TappingList"),
	HX_CSTRING("_TapmodeFlag"),
	HX_CSTRING("_AutoCombo"),
	HX_CSTRING("_Multiplefinder"),
	HX_CSTRING("_ActorDeathPosY"),
	HX_CSTRING("_PlayerInput"),
	HX_CSTRING("_combonumber"),
	HX_CSTRING("_EndLevel"),
	HX_CSTRING("_DisplayText"),
	HX_CSTRING("_Cursor"),
	HX_CSTRING("_Win"),
	HX_CSTRING("_GameTempo"),
	HX_CSTRING("_SwingCounter"),
	HX_CSTRING("_Swing"),
	HX_CSTRING("_ActorDeathPos"),
	HX_CSTRING("_Combo"),
	HX_CSTRING("_ScreenOffesetY"),
	HX_CSTRING("_Lose"),
	HX_CSTRING("_BombKill"),
	HX_CSTRING("_BombYY"),
	HX_CSTRING("_BombXX"),
	HX_CSTRING("_BombY"),
	HX_CSTRING("_MusicManager"),
	HX_CSTRING("_BeaterRefillY"),
	HX_CSTRING("_BeaterRefillX"),
	HX_CSTRING("_Coins"),
	HX_CSTRING("_GemID"),
	HX_CSTRING("_DoubleCombo"),
	HX_CSTRING("_CreateBombPiece"),
	HX_CSTRING("_BombX"),
	HX_CSTRING("_SpecialListBomb"),
	HX_CSTRING("_SpecialKill"),
	HX_CSTRING("_MatchesFound"),
	HX_CSTRING("_SpecialSpawn"),
	HX_CSTRING("_HintList"),
	HX_CSTRING("_IdleTime"),
	HX_CSTRING("_Direction"),
	HX_CSTRING("_BeaterSpawn"),
	HX_CSTRING("_ExtraSearcher"),
	HX_CSTRING("_BeaterCombo"),
	HX_CSTRING("_DrawOrder"),
	HX_CSTRING("_Delayer"),
	HX_CSTRING("_ScoreCounter"),
	HX_CSTRING("_Score"),
	HX_CSTRING("_sda"),
	HX_CSTRING("_GemSound"),
	HX_CSTRING("_RefillY"),
	HX_CSTRING("_RefillX"),
	HX_CSTRING("_ScreenOffset"),
	HX_CSTRING("_KillListMod"),
	HX_CSTRING("_UIDCOPY"),
	HX_CSTRING("_ActorReveal"),
	HX_CSTRING("_Spawn"),
	HX_CSTRING("_XSearcher"),
	HX_CSTRING("_SpawnTypeID"),
	HX_CSTRING("_SpawnTypeActor"),
	HX_CSTRING("_GemTypeNumber"),
	HX_CSTRING("_DestroyListModifier"),
	HX_CSTRING("_KillList"),
	HX_CSTRING("_Searcher"),
	HX_CSTRING("_NumberOfMatches"),
	HX_CSTRING("_CheckMatches"),
	HX_CSTRING("_IsDestroying"),
	HX_CSTRING("_CanSpawn"),
	HX_CSTRING("_Swapping"),
	HX_CSTRING("_Target"),
	HX_CSTRING("_AlreadySpawned"),
	HX_CSTRING("_TileList"),
	HX_CSTRING("_GemType"),
	HX_CSTRING("_UID"),
	HX_CSTRING("_GridSpacing"),
	HX_CSTRING("_YIncrementer"),
	HX_CSTRING("_Xincrementer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Design_3_3_SceneManager_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Design_3_3_SceneManager_obj::__mClass,"__mClass");
};

Class Design_3_3_SceneManager_obj::__mClass;

void Design_3_3_SceneManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scripts.Design_3_3_SceneManager"), hx::TCanCast< Design_3_3_SceneManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Design_3_3_SceneManager_obj::__boot()
{
}

} // end namespace scripts
