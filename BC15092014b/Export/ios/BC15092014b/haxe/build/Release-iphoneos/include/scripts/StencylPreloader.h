#ifndef INCLUDED_scripts_StencylPreloader
#define INCLUDED_scripts_StencylPreloader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS1(scripts,StencylPreloader)
namespace scripts{


class HXCPP_CLASS_ATTRIBUTES  StencylPreloader_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef StencylPreloader_obj OBJ_;
		StencylPreloader_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< StencylPreloader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~StencylPreloader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("StencylPreloader"); }

		virtual Void onEnterFrame( ::flash::events::Event event);
		Dynamic onEnterFrame_dyn();

		virtual Void onUpdate( int bytesLoaded,int bytesTotal);
		Dynamic onUpdate_dyn();

		virtual Void onLoaded( );
		Dynamic onLoaded_dyn();

		virtual Void onInit( );
		Dynamic onInit_dyn();

		virtual Float getHeight( );
		Dynamic getHeight_dyn();

		virtual Float getWidth( );
		Dynamic getWidth_dyn();

		virtual int getBackgroundColor( );
		Dynamic getBackgroundColor_dyn();

		virtual Void onMouseDown( ::flash::events::MouseEvent e);
		Dynamic onMouseDown_dyn();

		virtual Void goToLockURL( ::flash::events::MouseEvent e);
		Dynamic goToLockURL_dyn();

		virtual ::String getURL( );
		Dynamic getURL_dyn();

		virtual Void showLockScreen( ::String realURL);
		Dynamic showLockScreen_dyn();

		virtual bool isSiteLocked( );
		Dynamic isSiteLocked_dyn();

		virtual ::String getLockURL( );
		Dynamic getLockURL_dyn();

		bool locked;
		bool adFinished;
		bool started;
		int barHeight;
		int barWidth;
		::flash::display::Sprite background;
		::flash::display::Sprite barBackground;
		::flash::display::Sprite bar;
		::flash::display::Sprite barBorder;
};

} // end namespace scripts

#endif /* INCLUDED_scripts_StencylPreloader */ 
