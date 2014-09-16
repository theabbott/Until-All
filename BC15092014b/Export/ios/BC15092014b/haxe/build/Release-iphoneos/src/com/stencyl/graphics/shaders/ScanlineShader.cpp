#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_graphics_shaders_BasicShader
#include <com/stencyl/graphics/shaders/BasicShader.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_shaders_PostProcess
#include <com/stencyl/graphics/shaders/PostProcess.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_shaders_ScanlineShader
#include <com/stencyl/graphics/shaders/ScanlineShader.h>
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

Void ScanlineShader_obj::__construct(hx::Null< Float >  __o_scale)
{
HX_STACK_PUSH("ScanlineShader::new","com/stencyl/graphics/shaders/ScanlineShader.hx",6);
Float scale = __o_scale.Default(1.0);
{
	HX_STACK_LINE(7)
	super::__construct();
	HX_STACK_LINE(9)
	::String script = HX_CSTRING("\n\t\t\t#ifdef GL_ES\n\t\t\t\tprecision mediump float;\n\t\t\t#endif\n\t\t\t\n\t\t\tvarying vec2 vTexCoord;\n\t\t\tuniform vec2 uResolution;\n\t\t\tuniform sampler2D uImage0;\n\t\t\t\n\t\t\tuniform float scale;\n\t\t\t\n\t\t\tvoid main()\n\t\t\t{\n\t\t\t\tif (mod(floor(vTexCoord.y * uResolution.y / scale), 2.0) == 0.0)\n\t\t\t\t\tgl_FragColor = vec4(0.0, 0.0, 0.0, 1.0);\n\t\t\t\telse\n\t\t\t\t\tgl_FragColor = texture2D(uImage0, vTexCoord);\n\t\t\t}\n\t\t");		HX_STACK_VAR(script,"script");
	HX_STACK_LINE(29)
	this->model = ::com::stencyl::graphics::shaders::PostProcess_obj::__new(script,true);
	HX_STACK_LINE(31)
	this->setScale(scale);
}
;
	return null();
}

ScanlineShader_obj::~ScanlineShader_obj() { }

Dynamic ScanlineShader_obj::__CreateEmpty() { return  new ScanlineShader_obj; }
hx::ObjectPtr< ScanlineShader_obj > ScanlineShader_obj::__new(hx::Null< Float >  __o_scale)
{  hx::ObjectPtr< ScanlineShader_obj > result = new ScanlineShader_obj();
	result->__construct(__o_scale);
	return result;}

Dynamic ScanlineShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScanlineShader_obj > result = new ScanlineShader_obj();
	result->__construct(inArgs[0]);
	return result;}

Void ScanlineShader_obj::setScale( Float amount){
{
		HX_STACK_PUSH("ScanlineShader::setScale","com/stencyl/graphics/shaders/ScanlineShader.hx",35);
		HX_STACK_THIS(this);
		HX_STACK_ARG(amount,"amount");
		HX_STACK_LINE(35)
		this->setProperty(HX_CSTRING("scale"),amount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ScanlineShader_obj,setScale,(void))


ScanlineShader_obj::ScanlineShader_obj()
{
}

void ScanlineShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScanlineShader);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScanlineShader_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ScanlineShader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"setScale") ) { return setScale_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScanlineShader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ScanlineShader_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setScale"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScanlineShader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScanlineShader_obj::__mClass,"__mClass");
};

Class ScanlineShader_obj::__mClass;

void ScanlineShader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.shaders.ScanlineShader"), hx::TCanCast< ScanlineShader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ScanlineShader_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders
