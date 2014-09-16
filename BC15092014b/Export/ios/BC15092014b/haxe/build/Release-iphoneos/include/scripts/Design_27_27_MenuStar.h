#ifndef INCLUDED_scripts_Design_27_27_MenuStar
#define INCLUDED_scripts_Design_27_27_MenuStar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/behavior/ActorScript.h>
HX_DECLARE_CLASS2(com,stencyl,Engine)
HX_DECLARE_CLASS3(com,stencyl,behavior,ActorScript)
HX_DECLARE_CLASS3(com,stencyl,behavior,Script)
HX_DECLARE_CLASS3(com,stencyl,models,Actor)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS1(scripts,Design_27_27_MenuStar)
namespace scripts{


class HXCPP_CLASS_ATTRIBUTES  Design_27_27_MenuStar_obj : public ::com::stencyl::behavior::ActorScript_obj{
	public:
		typedef ::com::stencyl::behavior::ActorScript_obj super;
		typedef Design_27_27_MenuStar_obj OBJ_;
		Design_27_27_MenuStar_obj();
		Void __construct(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine);

	public:
		static hx::ObjectPtr< Design_27_27_MenuStar_obj > __new(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Design_27_27_MenuStar_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Design_27_27_MenuStar"); }

		virtual Void forwardMessage( ::String msg);

		virtual Void init( );

		virtual Void _customEvent_GenerateLevel( );
		Dynamic _customEvent_GenerateLevel_dyn();

		Float _WinConditionMod;
		Dynamic _WinConditions;
		Float _LevelID;
};

} // end namespace scripts

#endif /* INCLUDED_scripts_Design_27_27_MenuStar */ 
