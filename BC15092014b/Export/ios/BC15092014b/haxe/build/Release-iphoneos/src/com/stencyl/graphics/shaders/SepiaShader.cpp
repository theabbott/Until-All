#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_graphics_shaders_BasicShader
#include <com/stencyl/graphics/shaders/BasicShader.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_shaders_PostProcess
#include <com/stencyl/graphics/shaders/PostProcess.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_shaders_SepiaShader
#include <com/stencyl/graphics/shaders/SepiaShader.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_display_DirectRenderer
#include <openfl/display/DirectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLView
#include <openfl/display/OpenGLView.h>
#endif
namespace com{
namespace stencyl{
namespace graphics{
namespace shaders{

Void SepiaShader_obj::__construct()
{
HX_STACK_PUSH("SepiaShader::new","com/stencyl/graphics/shaders/SepiaShader.hx",6);
{
	HX_STACK_LINE(7)
	super::__construct();
	HX_STACK_LINE(9)
	::String script = HX_CSTRING("\n\t\t\t#ifdef GL_ES\n\t\t\t\tprecision mediump float;\n\t\t\t#endif\n\t\t\t\n\t\t\tvarying vec2 vTexCoord;\n\t\t\tuniform sampler2D uImage0;\n\t\t\t\n\t\t\tvoid main(void)\n\t\t\t{\n\t\t\t\tvec4 color = texture2D(uImage0, vTexCoord);\n\t\t\t\tgl_FragColor.r = dot(color, vec4(0.393,0.769,0.189,0));\n\t\t\t\tgl_FragColor.g = dot(color, vec4(0.349,0.686,0.168,0));\n\t\t\t\tgl_FragColor.b = dot(color, vec4(0.272,0.534,0.131,0));\n\t\t\t\tgl_FragColor.a = color.a;\n\t\t\t}\n\t\t");		HX_STACK_VAR(script,"script");
	HX_STACK_LINE(27)
	this->model = ::com::stencyl::graphics::shaders::PostProcess_obj::__new(script,true);
}
;
	return null();
}

SepiaShader_obj::~SepiaShader_obj() { }

Dynamic SepiaShader_obj::__CreateEmpty() { return  new SepiaShader_obj; }
hx::ObjectPtr< SepiaShader_obj > SepiaShader_obj::__new()
{  hx::ObjectPtr< SepiaShader_obj > result = new SepiaShader_obj();
	result->__construct();
	return result;}

Dynamic SepiaShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SepiaShader_obj > result = new SepiaShader_obj();
	result->__construct();
	return result;}


SepiaShader_obj::SepiaShader_obj()
{
}

void SepiaShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SepiaShader);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SepiaShader_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SepiaShader_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic SepiaShader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SepiaShader_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SepiaShader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SepiaShader_obj::__mClass,"__mClass");
};

Class SepiaShader_obj::__mClass;

void SepiaShader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.shaders.SepiaShader"), hx::TCanCast< SepiaShader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SepiaShader_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders
