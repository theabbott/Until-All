#ifndef INCLUDED_com_stencyl_graphics_shaders_GrainShader
#define INCLUDED_com_stencyl_graphics_shaders_GrainShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/graphics/shaders/BasicShader.h>
HX_DECLARE_CLASS4(com,stencyl,graphics,shaders,BasicShader)
HX_DECLARE_CLASS4(com,stencyl,graphics,shaders,GrainShader)
namespace com{
namespace stencyl{
namespace graphics{
namespace shaders{


class HXCPP_CLASS_ATTRIBUTES  GrainShader_obj : public ::com::stencyl::graphics::shaders::BasicShader_obj{
	public:
		typedef ::com::stencyl::graphics::shaders::BasicShader_obj super;
		typedef GrainShader_obj OBJ_;
		GrainShader_obj();
		Void __construct(hx::Null< Float >  __o_grainAmount,hx::Null< bool >  __o_enableColors,hx::Null< Float >  __o_colorAmount,hx::Null< Float >  __o_grainSize,hx::Null< Float >  __o_luminance);

	public:
		static hx::ObjectPtr< GrainShader_obj > __new(hx::Null< Float >  __o_grainAmount,hx::Null< bool >  __o_enableColors,hx::Null< Float >  __o_colorAmount,hx::Null< Float >  __o_grainSize,hx::Null< Float >  __o_luminance);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GrainShader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GrainShader"); }

		virtual Void setLuminance( Float amount);
		Dynamic setLuminance_dyn();

		virtual Void setGrainSize( Float amount);
		Dynamic setGrainSize_dyn();

		virtual Void setColorAmount( Float amount);
		Dynamic setColorAmount_dyn();

		virtual Void setGrainAmount( Float amount);
		Dynamic setGrainAmount_dyn();

		virtual Void disableColor( );
		Dynamic disableColor_dyn();

		virtual Void enableColor( );
		Dynamic enableColor_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders

#endif /* INCLUDED_com_stencyl_graphics_shaders_GrainShader */ 
