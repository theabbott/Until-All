#ifndef INCLUDED_com_stencyl_graphics_shaders_PostProcess
#define INCLUDED_com_stencyl_graphics_shaders_PostProcess

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/OpenGLView.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS4(com,stencyl,graphics,shaders,PostProcess)
HX_DECLARE_CLASS4(com,stencyl,graphics,shaders,Shader)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,display,DirectRenderer)
HX_DECLARE_CLASS2(openfl,display,OpenGLView)
HX_DECLARE_CLASS2(openfl,gl,GLBuffer)
HX_DECLARE_CLASS2(openfl,gl,GLFramebuffer)
HX_DECLARE_CLASS2(openfl,gl,GLObject)
HX_DECLARE_CLASS2(openfl,gl,GLRenderbuffer)
HX_DECLARE_CLASS2(openfl,gl,GLTexture)
namespace com{
namespace stencyl{
namespace graphics{
namespace shaders{


class HXCPP_CLASS_ATTRIBUTES  PostProcess_obj : public ::openfl::display::OpenGLView_obj{
	public:
		typedef ::openfl::display::OpenGLView_obj super;
		typedef PostProcess_obj OBJ_;
		PostProcess_obj();
		Void __construct(::String fragmentShader,hx::Null< bool >  __o_literalText);

	public:
		static hx::ObjectPtr< PostProcess_obj > __new(::String fragmentShader,hx::Null< bool >  __o_literalText);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PostProcess_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PostProcess"); }

		::haxe::ds::StringMap uniforms;
		int timeUniform;
		int resolutionUniform;
		int imageUniform;
		int texCoordSlot;
		int vertexSlot;
		Float timeScale;
		Float time;
		::openfl::gl::GLFramebuffer defaultFramebuffer;
		::openfl::gl::GLFramebuffer renderTo;
		::openfl::gl::GLBuffer buffer;
		::com::stencyl::graphics::shaders::Shader shader;
		::openfl::gl::GLTexture texture;
		::openfl::gl::GLRenderbuffer renderbuffer;
		::openfl::gl::GLFramebuffer framebuffer;
		
		virtual Void capture( );
		Dynamic capture_dyn();

		virtual Void createTexture( int width,int height);
		Dynamic createTexture_dyn();

		virtual Void createRenderbuffer( int width,int height);
		Dynamic createRenderbuffer_dyn();

		virtual Void rebuild( );
		Dynamic rebuild_dyn();

		virtual Void enable( ::com::stencyl::graphics::shaders::PostProcess to);
		Dynamic enable_dyn();

		virtual ::com::stencyl::graphics::shaders::PostProcess set_to( ::com::stencyl::graphics::shaders::PostProcess value);
		Dynamic set_to_dyn();

		virtual Void tweenUniform( ::String name,Float targetValue,hx::Null< Float >  duration,Dynamic easing);
		Dynamic tweenUniform_dyn();

		virtual Void setUniform( ::String uniform,Float value);
		Dynamic setUniform_dyn();

		static ::String vertexShader;
		static Array< Float > get_vertices( );
		static Dynamic get_vertices_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders

#endif /* INCLUDED_com_stencyl_graphics_shaders_PostProcess */ 
