#ifndef INCLUDED_scripts_Design_5_5_beatgem
#define INCLUDED_scripts_Design_5_5_beatgem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/behavior/ActorScript.h>
HX_DECLARE_CLASS2(com,stencyl,Engine)
HX_DECLARE_CLASS3(com,stencyl,behavior,ActorScript)
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
HX_DECLARE_CLASS1(scripts,Design_5_5_beatgem)
namespace scripts{


class HXCPP_CLASS_ATTRIBUTES  Design_5_5_beatgem_obj : public ::com::stencyl::behavior::ActorScript_obj{
	public:
		typedef ::com::stencyl::behavior::ActorScript_obj super;
		typedef Design_5_5_beatgem_obj OBJ_;
		Design_5_5_beatgem_obj();
		Void __construct(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine);

	public:
		static hx::ObjectPtr< Design_5_5_beatgem_obj > __new(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Design_5_5_beatgem_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Design_5_5_beatgem"); }

		virtual Void forwardMessage( ::String msg);

		virtual Void init( );

		virtual Void _customEvent_CanSwapRight( );
		Dynamic _customEvent_CanSwapRight_dyn();

		virtual Void _customEvent_CanSwapLeft( );
		Dynamic _customEvent_CanSwapLeft_dyn();

		virtual Void _customEvent_CanSwapDown( );
		Dynamic _customEvent_CanSwapDown_dyn();

		virtual Void _customEvent_CanSwapUp( );
		Dynamic _customEvent_CanSwapUp_dyn();

		virtual Void _customEvent_UpdatePosition( );
		Dynamic _customEvent_UpdatePosition_dyn();

		virtual Void _customEvent_SwapRight( );
		Dynamic _customEvent_SwapRight_dyn();

		virtual Void _customEvent_SwapLeft( );
		Dynamic _customEvent_SwapLeft_dyn();

		virtual Void _customEvent_SwapDown( );
		Dynamic _customEvent_SwapDown_dyn();

		virtual Void _customEvent_SwapUp( );
		Dynamic _customEvent_SwapUp_dyn();

		virtual Void _customEvent_Tappy( );
		Dynamic _customEvent_Tappy_dyn();

		bool _RestTap;
		Dynamic _TappingList;
		bool _tapping;
		Float _GTempo;
		bool _Tappable;
		Float _GemSelector;
		Dynamic _Taplist;
		::String _Type17;
		::String _Type18;
		Float _Degrees;
		bool _RegionCreated;
		::String _Type13;
		::String _Type14;
		::String _Type15;
		::String _Type16;
		Float _ColorMatch3;
		Float _ColorMatch4;
		Float _ColorMatch5;
		Float _ColorMatch6;
		Dynamic _GemType;
		::String _type12;
		Float _ColorMatch2;
		Float _ColorMatch1;
		::String _Type9;
		Float _TypeNumber;
		::String _type11;
		::String _type10;
		::com::stencyl::models::Actor _Gem;
		bool _CanSwap;
		::String _Type8;
		::String _Type7;
		Float _Direction;
		::String _type3;
		Float _BeaterCombo;
		::com::stencyl::models::Sound _Metronome;
		::String _type5;
		::String _type6;
		::String _type4;
		::String _type1;
		::String _type2;
		::com::stencyl::models::actor::ActorType _SpawnTypeActor;
		Float _SpawnTypeID;
		Dynamic _UID;
		::com::stencyl::models::Actor _SelfSelector;
		Float _Xincrementer;
		Float _YIncrementer;
		Dynamic _RegionList;
		Float _ActorReveal;
		bool _Colliding;
		Float _Octave;
		Float _GemID;
		Float _GemTypeNumber;
		bool _SwappingRight;
		bool _SwappingLeft;
		bool _SwappingDown;
		bool _SwappingUP;
		Float _NewY;
		Float _NewX;
		::com::stencyl::models::Sound _GemSound;
		Float _SoundType;
		Dynamic _AlreadySpawned;
		::com::stencyl::models::Region _Target;
		bool _Swapping;
		Float _StartY;
		Float _StartX;
};

} // end namespace scripts

#endif /* INCLUDED_scripts_Design_5_5_beatgem */ 
