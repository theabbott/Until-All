#ifndef INCLUDED_com_stencyl_graphics_shaders_Shader
#define INCLUDED_com_stencyl_graphics_shaders_Shader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,stencyl,graphics,shaders,Shader)
HX_DECLARE_CLASS2(openfl,gl,GLObject)
HX_DECLARE_CLASS2(openfl,gl,GLProgram)
HX_DECLARE_CLASS2(openfl,gl,GLShader)
namespace com{
namespace stencyl{
namespace graphics{
namespace shaders{


class HXCPP_CLASS_ATTRIBUTES  Shader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Shader_obj OBJ_;
		Shader_obj();
		Void __construct(Dynamic sources);

	public:
		static hx::ObjectPtr< Shader_obj > __new(Dynamic sources);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Shader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Shader"); }

		::openfl::gl::GLProgram program;
		virtual Void bind( );
		Dynamic bind_dyn();

		virtual int uniform( ::String u);
		Dynamic uniform_dyn();

		virtual int attribute( ::String a);
		Dynamic attribute_dyn();

		virtual ::openfl::gl::GLShader compile( ::String source,int type);
		Dynamic compile_dyn();

};

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders

#endif /* INCLUDED_com_stencyl_graphics_shaders_Shader */ 
