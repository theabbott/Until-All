#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_graphics_shaders_BasicShader
#include <com/stencyl/graphics/shaders/BasicShader.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_shaders_InlineShader
#include <com/stencyl/graphics/shaders/InlineShader.h>
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

Void InlineShader_obj::__construct(::String script)
{
HX_STACK_PUSH("InlineShader::new","com/stencyl/graphics/shaders/InlineShader.hx",6);
{
	HX_STACK_LINE(7)
	super::__construct();
	HX_STACK_LINE(8)
	this->model = ::com::stencyl::graphics::shaders::PostProcess_obj::__new(script,true);
}
;
	return null();
}

InlineShader_obj::~InlineShader_obj() { }

Dynamic InlineShader_obj::__CreateEmpty() { return  new InlineShader_obj; }
hx::ObjectPtr< InlineShader_obj > InlineShader_obj::__new(::String script)
{  hx::ObjectPtr< InlineShader_obj > result = new InlineShader_obj();
	result->__construct(script);
	return result;}

Dynamic InlineShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InlineShader_obj > result = new InlineShader_obj();
	result->__construct(inArgs[0]);
	return result;}


InlineShader_obj::InlineShader_obj()
{
}

void InlineShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InlineShader);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void InlineShader_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic InlineShader_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic InlineShader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void InlineShader_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InlineShader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InlineShader_obj::__mClass,"__mClass");
};

Class InlineShader_obj::__mClass;

void InlineShader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.shaders.InlineShader"), hx::TCanCast< InlineShader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void InlineShader_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders
