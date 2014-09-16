#ifndef INCLUDED_com_stencyl_graphics_shaders_TintShader
#define INCLUDED_com_stencyl_graphics_shaders_TintShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/graphics/shaders/BasicShader.h>
HX_DECLARE_CLASS4(com,stencyl,graphics,shaders,BasicShader)
HX_DECLARE_CLASS4(com,stencyl,graphics,shaders,TintShader)
namespace com{
namespace stencyl{
namespace graphics{
namespace shaders{


class HXCPP_CLASS_ATTRIBUTES  TintShader_obj : public ::com::stencyl::graphics::shaders::BasicShader_obj{
	public:
		typedef ::com::stencyl::graphics::shaders::BasicShader_obj super;
		typedef TintShader_obj OBJ_;
		TintShader_obj();
		Void __construct(int color,hx::Null< Float >  __o_amount);

	public:
		static hx::ObjectPtr< TintShader_obj > __new(int color,hx::Null< Float >  __o_amount);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TintShader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TintShader"); }

		virtual Void setColor( int color);
		Dynamic setColor_dyn();

		virtual Void setAmount( Float amount);
		Dynamic setAmount_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders

#endif /* INCLUDED_com_stencyl_graphics_shaders_TintShader */ 
