#ifndef INCLUDED_com_stencyl_graphics_shaders_CSBShader
#define INCLUDED_com_stencyl_graphics_shaders_CSBShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/graphics/shaders/BasicShader.h>
HX_DECLARE_CLASS4(com,stencyl,graphics,shaders,BasicShader)
HX_DECLARE_CLASS4(com,stencyl,graphics,shaders,CSBShader)
namespace com{
namespace stencyl{
namespace graphics{
namespace shaders{


class HXCPP_CLASS_ATTRIBUTES  CSBShader_obj : public ::com::stencyl::graphics::shaders::BasicShader_obj{
	public:
		typedef ::com::stencyl::graphics::shaders::BasicShader_obj super;
		typedef CSBShader_obj OBJ_;
		CSBShader_obj();
		Void __construct(hx::Null< Float >  __o_contrast,hx::Null< Float >  __o_brightness,hx::Null< Float >  __o_saturation);

	public:
		static hx::ObjectPtr< CSBShader_obj > __new(hx::Null< Float >  __o_contrast,hx::Null< Float >  __o_brightness,hx::Null< Float >  __o_saturation);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CSBShader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CSBShader"); }

		virtual Void setSaturation( Float amount);
		Dynamic setSaturation_dyn();

		virtual Void setBrightness( Float amount);
		Dynamic setBrightness_dyn();

		virtual Void setContrast( Float amount);
		Dynamic setContrast_dyn();

		static ::com::stencyl::graphics::shaders::CSBShader create( ::String type,hx::Null< Float >  amount);
		static Dynamic create_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders

#endif /* INCLUDED_com_stencyl_graphics_shaders_CSBShader */ 
