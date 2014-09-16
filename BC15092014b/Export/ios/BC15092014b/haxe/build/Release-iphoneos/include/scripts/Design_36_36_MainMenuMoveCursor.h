#ifndef INCLUDED_scripts_Design_36_36_MainMenuMoveCursor
#define INCLUDED_scripts_Design_36_36_MainMenuMoveCursor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/behavior/SceneScript.h>
HX_DECLARE_CLASS2(com,stencyl,Engine)
HX_DECLARE_CLASS3(com,stencyl,behavior,SceneScript)
HX_DECLARE_CLASS3(com,stencyl,behavior,Script)
HX_DECLARE_CLASS3(com,stencyl,models,Actor)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS1(scripts,Design_36_36_MainMenuMoveCursor)
namespace scripts{


class HXCPP_CLASS_ATTRIBUTES  Design_36_36_MainMenuMoveCursor_obj : public ::com::stencyl::behavior::SceneScript_obj{
	public:
		typedef ::com::stencyl::behavior::SceneScript_obj super;
		typedef Design_36_36_MainMenuMoveCursor_obj OBJ_;
		Design_36_36_MainMenuMoveCursor_obj();
		Void __construct(int dummy,::com::stencyl::Engine engine);

	public:
		static hx::ObjectPtr< Design_36_36_MainMenuMoveCursor_obj > __new(int dummy,::com::stencyl::Engine engine);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Design_36_36_MainMenuMoveCursor_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Design_36_36_MainMenuMoveCursor"); }

		virtual Void forwardMessage( ::String msg);

		virtual Void init( );

		::com::stencyl::models::Actor _Glyph;
		::com::stencyl::models::Actor _Cursor;
};

} // end namespace scripts

#endif /* INCLUDED_scripts_Design_36_36_MainMenuMoveCursor */ 
