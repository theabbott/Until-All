#ifndef INCLUDED_Universal
#define INCLUDED_Universal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS0(Universal)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,events,KeyboardEvent)


class HXCPP_CLASS_ATTRIBUTES  Universal_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef Universal_obj OBJ_;
		Universal_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Universal_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Universal_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Universal"); }

		virtual Void initScreen( hx::Null< bool >  isFullScreen);
		Dynamic initScreen_dyn();

		virtual Void initServices( );
		Dynamic initServices_dyn();

		virtual Void onKeyDown( ::flash::events::KeyboardEvent e);
		Dynamic onKeyDown_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void onAdded( ::flash::events::Event event);
		Dynamic onAdded_dyn();

		static Void main( );
		static Dynamic main_dyn();

};


#endif /* INCLUDED_Universal */ 
