#ifndef INCLUDED_openfl_display_DirectRenderer
#define INCLUDED_openfl_display_DirectRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/DisplayObject.h>
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,display,DirectRenderer)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  DirectRenderer_obj : public ::flash::display::DisplayObject_obj{
	public:
		typedef ::flash::display::DisplayObject_obj super;
		typedef DirectRenderer_obj OBJ_;
		DirectRenderer_obj();
		Void __construct(::String __o_type);

	public:
		static hx::ObjectPtr< DirectRenderer_obj > __new(::String __o_type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DirectRenderer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DirectRenderer"); }

		virtual Void __onRender( Dynamic rect);
		Dynamic __onRender_dyn();

		Dynamic render;
		inline Dynamic &render_dyn() {return render; }

		static Dynamic nme_direct_renderer_create;
		static Dynamic &nme_direct_renderer_create_dyn() { return nme_direct_renderer_create;}
		static Dynamic nme_direct_renderer_set;
		static Dynamic &nme_direct_renderer_set_dyn() { return nme_direct_renderer_set;}
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_DirectRenderer */ 
