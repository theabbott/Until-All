#ifndef INCLUDED_com_stencyl_graphics_shaders_BlurShader
#define INCLUDED_com_stencyl_graphics_shaders_BlurShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/graphics/shaders/BasicShader.h>
HX_DECLARE_CLASS4(com,stencyl,graphics,shaders,BasicShader)
HX_DECLARE_CLASS4(com,stencyl,graphics,shaders,BlurShader)
namespace com{
namespace stencyl{
namespace graphics{
namespace shaders{


class HXCPP_CLASS_ATTRIBUTES  BlurShader_obj : public ::com::stencyl::graphics::shaders::BasicShader_obj{
	public:
		typedef ::com::stencyl::graphics::shaders::BasicShader_obj super;
		typedef BlurShader_obj OBJ_;
		BlurShader_obj();
		Void __construct(hx::Null< Float >  __o_radius,hx::Null< Float >  __o_dirX,hx::Null< Float >  __o_dirY);

	public:
		static hx::ObjectPtr< BlurShader_obj > __new(hx::Null< Float >  __o_radius,hx::Null< Float >  __o_dirX,hx::Null< Float >  __o_dirY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BlurShader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BlurShader"); }

		virtual Void setDirectionY( Float amount);
		Dynamic setDirectionY_dyn();

		virtual Void setDirectionX( Float amount);
		Dynamic setDirectionX_dyn();

		virtual Void setRadius( Float amount);
		Dynamic setRadius_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders

#endif /* INCLUDED_com_stencyl_graphics_shaders_BlurShader */ 
