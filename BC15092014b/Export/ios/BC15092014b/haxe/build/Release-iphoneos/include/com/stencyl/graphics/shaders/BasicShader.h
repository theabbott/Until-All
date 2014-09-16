#ifndef INCLUDED_com_stencyl_graphics_shaders_BasicShader
#define INCLUDED_com_stencyl_graphics_shaders_BasicShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,stencyl,graphics,shaders,BasicShader)
HX_DECLARE_CLASS4(com,stencyl,graphics,shaders,PostProcess)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,display,DirectRenderer)
HX_DECLARE_CLASS2(openfl,display,OpenGLView)
namespace com{
namespace stencyl{
namespace graphics{
namespace shaders{


class HXCPP_CLASS_ATTRIBUTES  BasicShader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BasicShader_obj OBJ_;
		BasicShader_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< BasicShader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BasicShader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BasicShader"); }

		virtual ::com::stencyl::graphics::shaders::BasicShader combine( ::com::stencyl::graphics::shaders::BasicShader shader);
		Dynamic combine_dyn();

		virtual Void setTimeScale( Float amount);
		Dynamic setTimeScale_dyn();

		virtual Void disable( );
		Dynamic disable_dyn();

		virtual Void enable( );
		Dynamic enable_dyn();

		virtual Void tweenProperty( ::String name,Float targetValue,hx::Null< Float >  duration,Dynamic easing);
		Dynamic tweenProperty_dyn();

		virtual Void setProperty( ::String name,Float value);
		Dynamic setProperty_dyn();

		::com::stencyl::graphics::shaders::PostProcess model;
};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders

#endif /* INCLUDED_com_stencyl_graphics_shaders_BasicShader */ 
