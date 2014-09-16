#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_graphics_shaders_BasicShader
#include <com/stencyl/graphics/shaders/BasicShader.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_shaders_ExternalShader
#include <com/stencyl/graphics/shaders/ExternalShader.h>
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

Void ExternalShader_obj::__construct(::String scriptPath)
{
HX_STACK_PUSH("ExternalShader::new","com/stencyl/graphics/shaders/ExternalShader.hx",6);
{
	HX_STACK_LINE(7)
	super::__construct();
	HX_STACK_LINE(8)
	scriptPath = (HX_CSTRING("assets/data/") + scriptPath);
	HX_STACK_LINE(9)
	this->model = ::com::stencyl::graphics::shaders::PostProcess_obj::__new(scriptPath,null());
}
;
	return null();
}

ExternalShader_obj::~ExternalShader_obj() { }

Dynamic ExternalShader_obj::__CreateEmpty() { return  new ExternalShader_obj; }
hx::ObjectPtr< ExternalShader_obj > ExternalShader_obj::__new(::String scriptPath)
{  hx::ObjectPtr< ExternalShader_obj > result = new ExternalShader_obj();
	result->__construct(scriptPath);
	return result;}

Dynamic ExternalShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ExternalShader_obj > result = new ExternalShader_obj();
	result->__construct(inArgs[0]);
	return result;}


ExternalShader_obj::ExternalShader_obj()
{
}

void ExternalShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ExternalShader);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ExternalShader_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ExternalShader_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic ExternalShader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ExternalShader_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExternalShader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExternalShader_obj::__mClass,"__mClass");
};

Class ExternalShader_obj::__mClass;

void ExternalShader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.shaders.ExternalShader"), hx::TCanCast< ExternalShader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ExternalShader_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders
