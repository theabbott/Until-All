#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_graphics_shaders_BasicShader
#include <com/stencyl/graphics/shaders/BasicShader.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_shaders_InvertShader
#include <com/stencyl/graphics/shaders/InvertShader.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_shaders_PostProcess
#include <com/stencyl/graphics/shaders/PostProcess.h>
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

Void InvertShader_obj::__construct()
{
HX_STACK_PUSH("InvertShader::new","com/stencyl/graphics/shaders/InvertShader.hx",6);
{
	HX_STACK_LINE(7)
	super::__construct();
	HX_STACK_LINE(9)
	::String script = HX_CSTRING("\n\t\t\t#ifdef GL_ES\n\t\t\t\tprecision mediump float;\n\t\t\t#endif\n\t\t\t\n\t\t\tvarying vec2 vTexCoord;\n\t\t\tuniform sampler2D uImage0;\n\t\t\t\n\t\t\tvoid main(void)\n\t\t\t{\n\t\t\t\tvec4 color = texture2D(uImage0, vTexCoord);\n\t\t\t\tgl_FragColor = vec4(vec3(1.0, 1.0, 1.0) - color.rgb, color.a);\n\t\t\t}\n\t\t");		HX_STACK_VAR(script,"script");
	HX_STACK_LINE(24)
	this->model = ::com::stencyl::graphics::shaders::PostProcess_obj::__new(script,true);
}
;
	return null();
}

InvertShader_obj::~InvertShader_obj() { }

Dynamic InvertShader_obj::__CreateEmpty() { return  new InvertShader_obj; }
hx::ObjectPtr< InvertShader_obj > InvertShader_obj::__new()
{  hx::ObjectPtr< InvertShader_obj > result = new InvertShader_obj();
	result->__construct();
	return result;}

Dynamic InvertShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InvertShader_obj > result = new InvertShader_obj();
	result->__construct();
	return result;}


InvertShader_obj::InvertShader_obj()
{
}

void InvertShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InvertShader);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void InvertShader_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic InvertShader_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic InvertShader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void InvertShader_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InvertShader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InvertShader_obj::__mClass,"__mClass");
};

Class InvertShader_obj::__mClass;

void InvertShader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.shaders.InvertShader"), hx::TCanCast< InvertShader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void InvertShader_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders
