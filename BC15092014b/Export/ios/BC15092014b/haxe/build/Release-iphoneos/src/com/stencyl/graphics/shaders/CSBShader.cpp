#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_graphics_shaders_BasicShader
#include <com/stencyl/graphics/shaders/BasicShader.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_shaders_CSBShader
#include <com/stencyl/graphics/shaders/CSBShader.h>
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

Void CSBShader_obj::__construct(hx::Null< Float >  __o_contrast,hx::Null< Float >  __o_brightness,hx::Null< Float >  __o_saturation)
{
HX_STACK_PUSH("CSBShader::new","com/stencyl/graphics/shaders/CSBShader.hx",22);
Float contrast = __o_contrast.Default(1.0);
Float brightness = __o_brightness.Default(1.0);
Float saturation = __o_saturation.Default(1.0);
{
	HX_STACK_LINE(23)
	super::__construct();
	HX_STACK_LINE(25)
	::String script = HX_CSTRING("\n\t\t\tvarying vec2 vTexCoord;\n\t\t\tuniform sampler2D uImage0;\n\t\t\tuniform float contrast;\n\t\t\tuniform float brightness;\n\t\t\tuniform float saturation;\n\n\t\t\tvoid main() \n\t\t\t{\n\t\t\t\tvec3 color = texture2D(uImage0, vTexCoord).rgb;\n\t\t\t\tconst vec3 luminanceCoefficient = vec3(0.2125, 0.7154, 0.0721);\n\t\t\t\tvec3 avgLuminance = vec3(0.5, 0.5, 0.5);\n\t\t\n\t\t\t\tvec3 brtColor = vec3(color.x * brightness, color.y * brightness, color.z * brightness);\n\t\t\t\tvec3 intensity = vec3(dot(brtColor, luminanceCoefficient));\n\t\t\t\tvec3 satColor = mix(intensity, brtColor, saturation);\n\t\t\t\tvec3 conColor = mix(avgLuminance, satColor, contrast);\n\t\t\n\t\t\t\tgl_FragColor = vec4(conColor, 1);\n\t\t\t}\n\t\t\t\n\t\t\tvec3 mix(vec3 a, vec3 b, float amount) \n\t\t\t{ \n\t\t\t\treturn vec3(a.x * (1.0 - amount) + b.x * amount, a.y * (1.0 - amount) + b.y * amount, a.z * (1.0 - amount) + b.z * amount); \n\t\t\t}\n\t\t");		HX_STACK_VAR(script,"script");
	HX_STACK_LINE(52)
	this->model = ::com::stencyl::graphics::shaders::PostProcess_obj::__new(script,true);
	HX_STACK_LINE(54)
	this->setContrast(contrast);
	HX_STACK_LINE(55)
	this->setBrightness(brightness);
	HX_STACK_LINE(56)
	this->setSaturation(saturation);
}
;
	return null();
}

CSBShader_obj::~CSBShader_obj() { }

Dynamic CSBShader_obj::__CreateEmpty() { return  new CSBShader_obj; }
hx::ObjectPtr< CSBShader_obj > CSBShader_obj::__new(hx::Null< Float >  __o_contrast,hx::Null< Float >  __o_brightness,hx::Null< Float >  __o_saturation)
{  hx::ObjectPtr< CSBShader_obj > result = new CSBShader_obj();
	result->__construct(__o_contrast,__o_brightness,__o_saturation);
	return result;}

Dynamic CSBShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CSBShader_obj > result = new CSBShader_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void CSBShader_obj::setSaturation( Float amount){
{
		HX_STACK_PUSH("CSBShader::setSaturation","com/stencyl/graphics/shaders/CSBShader.hx",70);
		HX_STACK_THIS(this);
		HX_STACK_ARG(amount,"amount");
		HX_STACK_LINE(70)
		this->setProperty(HX_CSTRING("saturation"),amount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CSBShader_obj,setSaturation,(void))

Void CSBShader_obj::setBrightness( Float amount){
{
		HX_STACK_PUSH("CSBShader::setBrightness","com/stencyl/graphics/shaders/CSBShader.hx",65);
		HX_STACK_THIS(this);
		HX_STACK_ARG(amount,"amount");
		HX_STACK_LINE(65)
		this->setProperty(HX_CSTRING("brightness"),amount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CSBShader_obj,setBrightness,(void))

Void CSBShader_obj::setContrast( Float amount){
{
		HX_STACK_PUSH("CSBShader::setContrast","com/stencyl/graphics/shaders/CSBShader.hx",60);
		HX_STACK_THIS(this);
		HX_STACK_ARG(amount,"amount");
		HX_STACK_LINE(60)
		this->setProperty(HX_CSTRING("contrast"),amount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CSBShader_obj,setContrast,(void))

::com::stencyl::graphics::shaders::CSBShader CSBShader_obj::create( ::String __o_type,hx::Null< Float >  __o_amount){
::String type = __o_type.Default(HX_CSTRING("contrast"));
Float amount = __o_amount.Default(1.0);
	HX_STACK_PUSH("CSBShader::create","com/stencyl/graphics/shaders/CSBShader.hx",7);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(amount,"amount");
{
		HX_STACK_LINE(8)
		if (((type == HX_CSTRING("contrast")))){
			HX_STACK_LINE(9)
			return ::com::stencyl::graphics::shaders::CSBShader_obj::__new(amount,1.0,1.0);
		}
		else{
			HX_STACK_LINE(13)
			if (((type == HX_CSTRING("saturation")))){
				HX_STACK_LINE(14)
				return ::com::stencyl::graphics::shaders::CSBShader_obj::__new(1.0,1.0,amount);
			}
		}
		HX_STACK_LINE(18)
		return ::com::stencyl::graphics::shaders::CSBShader_obj::__new(1.0,amount,1.0);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CSBShader_obj,create,return )


CSBShader_obj::CSBShader_obj()
{
}

void CSBShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CSBShader);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CSBShader_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic CSBShader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setContrast") ) { return setContrast_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setSaturation") ) { return setSaturation_dyn(); }
		if (HX_FIELD_EQ(inName,"setBrightness") ) { return setBrightness_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CSBShader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CSBShader_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setSaturation"),
	HX_CSTRING("setBrightness"),
	HX_CSTRING("setContrast"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CSBShader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CSBShader_obj::__mClass,"__mClass");
};

Class CSBShader_obj::__mClass;

void CSBShader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.shaders.CSBShader"), hx::TCanCast< CSBShader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CSBShader_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders
