#ifndef INCLUDED_com_stencyl_graphics_shaders_HueShader
#define INCLUDED_com_stencyl_graphics_shaders_HueShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/graphics/shaders/BasicShader.h>
HX_DECLARE_CLASS4(com,stencyl,graphics,shaders,BasicShader)
HX_DECLARE_CLASS4(com,stencyl,graphics,shaders,HueShader)
namespace com{
namespace stencyl{
namespace graphics{
namespace shaders{


class HXCPP_CLASS_ATTRIBUTES  HueShader_obj : public ::com::stencyl::graphics::shaders::BasicShader_obj{
	public:
		typedef ::com::stencyl::graphics::shaders::BasicShader_obj super;
		typedef HueShader_obj OBJ_;
		HueShader_obj();
		Void __construct(hx::Null< Float >  __o_hue,hx::Null< bool >  __o_asDegrees);

	public:
		static hx::ObjectPtr< HueShader_obj > __new(hx::Null< Float >  __o_hue,hx::Null< bool >  __o_asDegrees);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~HueShader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("HueShader"); }

		virtual Void setHue( Float amount,hx::Null< bool >  asDegrees);
		Dynamic setHue_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders

#endif /* INCLUDED_com_stencyl_graphics_shaders_HueShader */ 
