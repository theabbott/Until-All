#ifndef INCLUDED_com_stencyl_graphics_shaders_ScanlineShader
#define INCLUDED_com_stencyl_graphics_shaders_ScanlineShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/graphics/shaders/BasicShader.h>
HX_DECLARE_CLASS4(com,stencyl,graphics,shaders,BasicShader)
HX_DECLARE_CLASS4(com,stencyl,graphics,shaders,ScanlineShader)
namespace com{
namespace stencyl{
namespace graphics{
namespace shaders{


class HXCPP_CLASS_ATTRIBUTES  ScanlineShader_obj : public ::com::stencyl::graphics::shaders::BasicShader_obj{
	public:
		typedef ::com::stencyl::graphics::shaders::BasicShader_obj super;
		typedef ScanlineShader_obj OBJ_;
		ScanlineShader_obj();
		Void __construct(hx::Null< Float >  __o_scale);

	public:
		static hx::ObjectPtr< ScanlineShader_obj > __new(hx::Null< Float >  __o_scale);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ScanlineShader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ScanlineShader"); }

		virtual Void setScale( Float amount);
		Dynamic setScale_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders

#endif /* INCLUDED_com_stencyl_graphics_shaders_ScanlineShader */ 
