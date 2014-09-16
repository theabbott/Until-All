#ifndef INCLUDED_scripts_Design_42_42_backgroundBounce
#define INCLUDED_scripts_Design_42_42_backgroundBounce

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
HX_DECLARE_CLASS1(scripts,Design_42_42_backgroundBounce)
namespace scripts{


class HXCPP_CLASS_ATTRIBUTES  Design_42_42_backgroundBounce_obj : public ::com::stencyl::behavior::ActorScript_obj{
	public:
		typedef ::com::stencyl::behavior::ActorScript_obj super;
		typedef Design_42_42_backgroundBounce_obj OBJ_;
		Design_42_42_backgroundBounce_obj();
		Void __construct(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine);

	public:
		static hx::ObjectPtr< Design_42_42_backgroundBounce_obj > __new(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Design_42_42_backgroundBounce_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Design_42_42_backgroundBounce"); }

		virtual Void forwardMessage( ::String msg);

		virtual Void init( );

};

} // end namespace scripts

#endif /* INCLUDED_scripts_Design_42_42_backgroundBounce */ 
