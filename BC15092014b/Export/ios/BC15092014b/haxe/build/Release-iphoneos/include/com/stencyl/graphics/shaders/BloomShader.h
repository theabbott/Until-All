#ifndef INCLUDED_com_stencyl_graphics_shaders_BloomShader
#define INCLUDED_com_stencyl_graphics_shaders_BloomShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/graphics/shaders/BasicShader.h>
HX_DECLARE_CLASS4(com,stencyl,graphics,shaders,BasicShader)
HX_DECLARE_CLASS4(com,stencyl,graphics,shaders,BloomShader)
namespace com{
namespace stencyl{
namespace graphics{
namespace shaders{


class HXCPP_CLASS_ATTRIBUTES  BloomShader_obj : public ::com::stencyl::graphics::shaders::BasicShader_obj{
	public:
		typedef ::com::stencyl::graphics::shaders::BasicShader_obj super;
		typedef BloomShader_obj OBJ_;
		BloomShader_obj();
		Void __construct(hx::Null< Float >  __o_currPixelWeight,hx::Null< Float >  __o_neighborPixelWeight,hx::Null< Float >  __o_sampleX,hx::Null< Float >  __o_sampleY,hx::Null< Float >  __o_lowThreshold,hx::Null< Float >  __o_mediumThreshold,hx::Null< Float >  __o_lowMultiplier,hx::Null< Float >  __o_mediumMultiplier,hx::Null< Float >  __o_highMultiplier);

	public:
		static hx::ObjectPtr< BloomShader_obj > __new(hx::Null< Float >  __o_currPixelWeight,hx::Null< Float >  __o_neighborPixelWeight,hx::Null< Float >  __o_sampleX,hx::Null< Float >  __o_sampleY,hx::Null< Float >  __o_lowThreshold,hx::Null< Float >  __o_mediumThreshold,hx::Null< Float >  __o_lowMultiplier,hx::Null< Float >  __o_mediumMultiplier,hx::Null< Float >  __o_highMultiplier);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BloomShader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BloomShader"); }

};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders

#endif /* INCLUDED_com_stencyl_graphics_shaders_BloomShader */ 
