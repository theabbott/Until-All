#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_graphics_shaders_BasicShader
#include <com/stencyl/graphics/shaders/BasicShader.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_shaders_HueShader
#include <com/stencyl/graphics/shaders/HueShader.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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

Void HueShader_obj::__construct(hx::Null< Float >  __o_hue,hx::Null< bool >  __o_asDegrees)
{
HX_STACK_PUSH("HueShader::new","com/stencyl/graphics/shaders/HueShader.hx",6);
Float hue = __o_hue.Default(0);
bool asDegrees = __o_asDegrees.Default(true);
{
	HX_STACK_LINE(7)
	super::__construct();
	HX_STACK_LINE(9)
	if ((asDegrees)){
		HX_STACK_LINE(10)
		hue = ((Float(::Math_obj::PI) / Float((int)180)) * hue);
	}
	HX_STACK_LINE(14)
	::String script = HX_CSTRING("\n\t\t\tvarying vec2 vTexCoord;\n\t\t\tuniform sampler2D uImage0;\n\t\t\t\n\t\t\tuniform float hue;\n\t\t\tconst mat3 rgb2yiq = mat3(0.299, 0.587, 0.114, 0.595716, -0.274453, -0.321263, 0.211456, -0.522591, 0.311135);\n\t\t\tconst mat3 yiq2rgb = mat3(1.0, 0.9563, 0.6210, 1.0, -0.2721, -0.6474, 1.0, -1.1070, 1.7046);\n\n\t\t\tvoid main() \n\t\t\t{\n\t\t\t\tvec3 color = texture2D(uImage0, vTexCoord).rgb;\n\t\t\t\tvec3 yColor = rgb2yiq * color; \n\n\t\t\t\tfloat originalHue = atan(yColor.b, yColor.g);\n\t\t\t\tfloat finalHue = originalHue + hue;\n\t\t\t\tfloat chroma = sqrt(yColor.b * yColor.b + yColor.g * yColor.g);\n\t\t\t\t\n\t\t\t\tvec3 yFinalColor = vec3(yColor.r, chroma * cos(finalHue), chroma * sin(finalHue));\n\t\t\t\tgl_FragColor = vec4(yiq2rgb * yFinalColor, 1.0);\n\t\t\t}\n\t\t");		HX_STACK_VAR(script,"script");
	HX_STACK_LINE(36)
	this->model = ::com::stencyl::graphics::shaders::PostProcess_obj::__new(script,true);
	HX_STACK_LINE(38)
	this->setHue(hue,false);
}
;
	return null();
}

HueShader_obj::~HueShader_obj() { }

Dynamic HueShader_obj::__CreateEmpty() { return  new HueShader_obj; }
hx::ObjectPtr< HueShader_obj > HueShader_obj::__new(hx::Null< Float >  __o_hue,hx::Null< bool >  __o_asDegrees)
{  hx::ObjectPtr< HueShader_obj > result = new HueShader_obj();
	result->__construct(__o_hue,__o_asDegrees);
	return result;}

Dynamic HueShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HueShader_obj > result = new HueShader_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void HueShader_obj::setHue( Float amount,hx::Null< bool >  __o_asDegrees){
bool asDegrees = __o_asDegrees.Default(true);
	HX_STACK_PUSH("HueShader::setHue","com/stencyl/graphics/shaders/HueShader.hx",43);
	HX_STACK_THIS(this);
	HX_STACK_ARG(amount,"amount");
	HX_STACK_ARG(asDegrees,"asDegrees");
{
		HX_STACK_LINE(44)
		if ((asDegrees)){
			HX_STACK_LINE(45)
			amount = ((Float(::Math_obj::PI) / Float((int)180)) * amount);
		}
		HX_STACK_LINE(49)
		this->setProperty(HX_CSTRING("hue"),amount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HueShader_obj,setHue,(void))


HueShader_obj::HueShader_obj()
{
}

void HueShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HueShader);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HueShader_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic HueShader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"setHue") ) { return setHue_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HueShader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void HueShader_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setHue"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HueShader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HueShader_obj::__mClass,"__mClass");
};

Class HueShader_obj::__mClass;

void HueShader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.shaders.HueShader"), hx::TCanCast< HueShader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void HueShader_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders
