#ifndef INCLUDED_com_stencyl_graphics_shaders_GrayscaleShader
#define INCLUDED_com_stencyl_graphics_shaders_GrayscaleShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/graphics/shaders/BasicShader.h>
HX_DECLARE_CLASS4(com,stencyl,graphics,shaders,BasicShader)
HX_DECLARE_CLASS4(com,stencyl,graphics,shaders,GrayscaleShader)
namespace com{
namespace stencyl{
namespace graphics{
namespace shaders{


class HXCPP_CLASS_ATTRIBUTES  GrayscaleShader_obj : public ::com::stencyl::graphics::shaders::BasicShader_obj{
	public:
		typedef ::com::stencyl::graphics::shaders::BasicShader_obj super;
		typedef GrayscaleShader_obj OBJ_;
		GrayscaleShader_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< GrayscaleShader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GrayscaleShader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GrayscaleShader"); }

};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders

#endif /* INCLUDED_com_stencyl_graphics_shaders_GrayscaleShader */ 
