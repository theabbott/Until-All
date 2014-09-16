#ifndef INCLUDED_scripts_Design_20_20
#define INCLUDED_scripts_Design_20_20

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/behavior/ActorScript.h>
HX_DECLARE_CLASS2(com,stencyl,Engine)
HX_DECLARE_CLASS3(com,stencyl,behavior,ActorScript)
HX_DECLARE_CLASS3(com,stencyl,behavior,Script)
HX_DECLARE_CLASS3(com,stencyl,models,Actor)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS3(com,stencyl,models,Sound)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS1(scripts,Design_20_20)
namespace scripts{


class HXCPP_CLASS_ATTRIBUTES  Design_20_20_obj : public ::com::stencyl::behavior::ActorScript_obj{
	public:
		typedef ::com::stencyl::behavior::ActorScript_obj super;
		typedef Design_20_20_obj OBJ_;
		Design_20_20_obj();
		Void __construct(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine);

	public:
		static hx::ObjectPtr< Design_20_20_obj > __new(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Design_20_20_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Design_20_20"); }

		virtual Void forwardMessage( ::String msg);

		virtual Void init( );

		virtual Void _customEvent_Collide( );
		Dynamic _customEvent_Collide_dyn();

		virtual Void _customEvent_Reset( );
		Dynamic _customEvent_Reset_dyn();

		Float _SoundManager;
		Float _ListY;
		Float _ActorNumber;
		bool _Visible;
		Float _ListX;
		Float _StartY;
		Float _Position;
		Float _Direction;
		Float _StartX;
		Float _GemID;
		bool _Bouncing;
		::com::stencyl::models::Sound _GemSound;
		Float _OpacitiyMod;
		Float _BeaterCombos;
		Float _Searcher;
		Float _Xincrementer;
		::String _6;
		::String _5;
		::String _4;
		::String _3;
		::String _2;
		::String _1;
		Float _TypeNumber;
		bool _Colliding;
		::com::stencyl::models::Sound _Metronome;
		Float _BeatPos;
};

} // end namespace scripts

#endif /* INCLUDED_scripts_Design_20_20 */ 
