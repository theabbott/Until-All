#ifndef INCLUDED_com_stencyl_graphics_shaders_ExternalShader
#define INCLUDED_com_stencyl_graphics_shaders_ExternalShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/graphics/shaders/BasicShader.h>
HX_DECLARE_CLASS4(com,stencyl,graphics,shaders,BasicShader)
HX_DECLARE_CLASS4(com,stencyl,graphics,shaders,ExternalShader)
namespace com{
namespace stencyl{
namespace graphics{
namespace shaders{


class HXCPP_CLASS_ATTRIBUTES  ExternalShader_obj : public ::com::stencyl::graphics::shaders::BasicShader_obj{
	public:
		typedef ::com::stencyl::graphics::shaders::BasicShader_obj super;
		typedef ExternalShader_obj OBJ_;
		ExternalShader_obj();
		Void __construct(::String scriptPath);

	public:
		static hx::ObjectPtr< ExternalShader_obj > __new(::String scriptPath);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ExternalShader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ExternalShader"); }

};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders

#endif /* INCLUDED_com_stencyl_graphics_shaders_ExternalShader */ 
