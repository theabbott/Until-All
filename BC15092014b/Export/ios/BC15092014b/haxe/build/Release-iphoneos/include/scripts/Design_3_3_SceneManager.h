#ifndef INCLUDED_scripts_Design_3_3_SceneManager
#define INCLUDED_scripts_Design_3_3_SceneManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/behavior/SceneScript.h>
HX_DECLARE_CLASS2(com,stencyl,Engine)
HX_DECLARE_CLASS3(com,stencyl,behavior,SceneScript)
HX_DECLARE_CLASS3(com,stencyl,behavior,Script)
HX_DECLARE_CLASS3(com,stencyl,models,Actor)
HX_DECLARE_CLASS3(com,stencyl,models,Region)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS3(com,stencyl,models,Sound)
HX_DECLARE_CLASS4(com,stencyl,models,actor,ActorType)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS1(scripts,Design_3_3_SceneManager)
namespace scripts{


class HXCPP_CLASS_ATTRIBUTES  Design_3_3_SceneManager_obj : public ::com::stencyl::behavior::SceneScript_obj{
	public:
		typedef ::com::stencyl::behavior::SceneScript_obj super;
		typedef Design_3_3_SceneManager_obj OBJ_;
		Design_3_3_SceneManager_obj();
		Void __construct(int dummy,::com::stencyl::Engine engine);

	public:
		static hx::ObjectPtr< Design_3_3_SceneManager_obj > __new(int dummy,::com::stencyl::Engine engine);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Design_3_3_SceneManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Design_3_3_SceneManager"); }

		virtual Void forwardMessage( ::String msg);

		virtual Void init( );

		virtual Void _customEvent_TapMode( );
		Dynamic _customEvent_TapMode_dyn();

		virtual Void _customEvent_ResetTap( );
		Dynamic _customEvent_ResetTap_dyn();

		virtual Void _customEvent_TapTime( );
		Dynamic _customEvent_TapTime_dyn();

		virtual Void _customEvent_Lose( );
		Dynamic _customEvent_Lose_dyn();

		virtual Void _customEvent_BeaterSpawn( );
		Dynamic _customEvent_BeaterSpawn_dyn();

		virtual Void _customEvent_EndingLevel( );
		Dynamic _customEvent_EndingLevel_dyn();

		virtual Void _customEvent_Win( );
		Dynamic _customEvent_Win_dyn();

		virtual Void _customEvent_CheckWinConditions( );
		Dynamic _customEvent_CheckWinConditions_dyn();

		virtual Void _customEvent_SpecialKill( );
		Dynamic _customEvent_SpecialKill_dyn();

		virtual Void _customEvent_Kill( );
		Dynamic _customEvent_Kill_dyn();

		virtual Void _customEvent_PreKill( );
		Dynamic _customEvent_PreKill_dyn();

		virtual Void _customEvent_Check( );
		Dynamic _customEvent_Check_dyn();

		virtual Void _customEvent_CHECKGRID( );
		Dynamic _customEvent_CHECKGRID_dyn();

		virtual Void _customEvent_Spawn( );
		Dynamic _customEvent_Spawn_dyn();

		virtual Void _customEvent_SpawnStart( );
		Dynamic _customEvent_SpawnStart_dyn();

		virtual Void _customEvent_WormHole( );
		Dynamic _customEvent_WormHole_dyn();

		virtual Void _customEvent_MusicManager( );
		Dynamic _customEvent_MusicManager_dyn();

		Float _resetY;
		Float _resetX;
		bool _ComboBrokenFlag;
		bool _StartTimer;
		Dynamic _TapKillList;
		Float _TapCombo;
		Float _cleaner;
		Dynamic _CleanUpTapMode;
		Dynamic _PreTapKillList;
		bool _TapOn;
		Dynamic _Taplist;
		Float _GemSelector;
		bool _CreateWorm;
		Dynamic _Ending;
		Dynamic _TapPrekill;
		Float _TapTime;
		Dynamic _TappingList;
		bool _TapmodeFlag;
		Float _AutoCombo;
		Float _Multiplefinder;
		Float _ActorDeathPosY;
		bool _PlayerInput;
		Float _combonumber;
		bool _EndLevel;
		bool _DisplayText;
		::com::stencyl::models::Actor _Cursor;
		bool _Win;
		Float _GameTempo;
		Float _SwingCounter;
		Float _Swing;
		Float _ActorDeathPos;
		Float _Combo;
		Float _ScreenOffesetY;
		bool _Lose;
		bool _BombKill;
		Float _BombYY;
		Float _BombXX;
		Float _BombY;
		bool _MusicManager;
		Float _BeaterRefillY;
		Float _BeaterRefillX;
		::com::stencyl::models::actor::ActorType _Coins;
		Float _GemID;
		Float _DoubleCombo;
		bool _CreateBombPiece;
		Float _BombX;
		Dynamic _SpecialListBomb;
		bool _SpecialKill;
		bool _MatchesFound;
		bool _SpecialSpawn;
		Dynamic _HintList;
		Float _IdleTime;
		Float _Direction;
		Dynamic _BeaterSpawn;
		Float _ExtraSearcher;
		Float _BeaterCombo;
		Dynamic _DrawOrder;
		Float _Delayer;
		Float _ScoreCounter;
		Float _Score;
		::com::stencyl::models::Sound _sda;
		::com::stencyl::models::Sound _GemSound;
		Float _RefillY;
		Float _RefillX;
		Float _ScreenOffset;
		Float _KillListMod;
		Dynamic _UIDCOPY;
		Float _ActorReveal;
		bool _Spawn;
		Float _XSearcher;
		Float _SpawnTypeID;
		::com::stencyl::models::actor::ActorType _SpawnTypeActor;
		Float _GemTypeNumber;
		Float _DestroyListModifier;
		Dynamic _KillList;
		Float _Searcher;
		Float _NumberOfMatches;
		bool _CheckMatches;
		bool _IsDestroying;
		bool _CanSpawn;
		bool _Swapping;
		::com::stencyl::models::Region _Target;
		Dynamic _AlreadySpawned;
		Dynamic _TileList;
		Dynamic _GemType;
		Dynamic _UID;
		Float _GridSpacing;
		Float _YIncrementer;
		Float _Xincrementer;
};

} // end namespace scripts

#endif /* INCLUDED_scripts_Design_3_3_SceneManager */ 
