#ifndef INCLUDED_scripts_Design_9_9_BeatLineManager
#define INCLUDED_scripts_Design_9_9_BeatLineManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/behavior/SceneScript.h>
HX_DECLARE_CLASS2(com,stencyl,Engine)
HX_DECLARE_CLASS3(com,stencyl,behavior,SceneScript)
HX_DECLARE_CLASS3(com,stencyl,behavior,Script)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS4(com,stencyl,models,actor,ActorType)
HX_DECLARE_CLASS1(scripts,Design_9_9_BeatLineManager)
namespace scripts{


class HXCPP_CLASS_ATTRIBUTES  Design_9_9_BeatLineManager_obj : public ::com::stencyl::behavior::SceneScript_obj{
	public:
		typedef ::com::stencyl::behavior::SceneScript_obj super;
		typedef Design_9_9_BeatLineManager_obj OBJ_;
		Design_9_9_BeatLineManager_obj();
		Void __construct(int dummy,::com::stencyl::Engine engine);

	public:
		static hx::ObjectPtr< Design_9_9_BeatLineManager_obj > __new(int dummy,::com::stencyl::Engine engine);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Design_9_9_BeatLineManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Design_9_9_BeatLineManager"); }

		virtual Void forwardMessage( ::String msg);

		virtual Void init( );

		virtual Void _customEvent_BeaterSpawn( );
		Dynamic _customEvent_BeaterSpawn_dyn();

		bool _SpecialSpawn;
		Dynamic _BP;
		Dynamic _GemType;
		Float _RefillY;
		Float _RefillX;
		::com::stencyl::models::actor::ActorType _SpawnTypeActor;
		Float _SpawnTypeID;
		Float _BeatPos;
		Float _GridSpacing;
		Float _YIncrementer;
		Float _BeatLineY;
		Float _BeatLineX;
		Dynamic _AlreadySpawned;
};

} // end namespace scripts

#endif /* INCLUDED_scripts_Design_9_9_BeatLineManager */ 
