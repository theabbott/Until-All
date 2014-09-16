#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_graphics_shaders_BasicShader
#include <com/stencyl/graphics/shaders/BasicShader.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_shaders_BloomShader
#include <com/stencyl/graphics/shaders/BloomShader.h>
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

Void BloomShader_obj::__construct(hx::Null< Float >  __o_currPixelWeight,hx::Null< Float >  __o_neighborPixelWeight,hx::Null< Float >  __o_sampleX,hx::Null< Float >  __o_sampleY,hx::Null< Float >  __o_lowThreshold,hx::Null< Float >  __o_mediumThreshold,hx::Null< Float >  __o_lowMultiplier,hx::Null< Float >  __o_mediumMultiplier,hx::Null< Float >  __o_highMultiplier)
{
HX_STACK_PUSH("BloomShader::new","com/stencyl/graphics/shaders/BloomShader.hx",18);
Float currPixelWeight = __o_currPixelWeight.Default(0.25);
Float neighborPixelWeight = __o_neighborPixelWeight.Default(0.004);
Float sampleX = __o_sampleX.Default(4);
Float sampleY = __o_sampleY.Default(3);
Float lowThreshold = __o_lowThreshold.Default(0.4);
Float mediumThreshold = __o_mediumThreshold.Default(0.6);
Float lowMultiplier = __o_lowMultiplier.Default(0.012);
Float mediumMultiplier = __o_mediumMultiplier.Default(0.009);
Float highMultiplier = __o_highMultiplier.Default(0.0075);
{
	HX_STACK_LINE(19)
	super::__construct();
	HX_STACK_LINE(72)
	::String script = HX_CSTRING("\n\t\t\tvarying vec2 vTexCoord;\n\t\t\tuniform vec2 uResolution;\n\t\t\tuniform sampler2D uImage0;\n\t\t\t\n\t\t\tuniform float currPixelWeight;\n\t\t\tuniform float neighborPixelWeight;\n\t\t\tuniform float lowThreshold;\n\t\t\tuniform float mediumThreshold;\n\t\t\tuniform float lowMultiplier;\n\t\t\tuniform float mediumMultiplier;\n\t\t\tuniform float highMultiplier;\n\n\t\t\tvoid main(void)\n\t\t\t{\n\t\t\t\tvec4 sum = vec4(0.0);\n\t\t\t\tvec2 q1 = vTexCoord;\n\t\t\t\tvec4 oricol = texture2D(uImage0, vec2(q1.x, q1.y));\n\t\t\t\tvec3 col;\n\t\t\t\t\n\t\t\t\tfor(int i = -3; i < 3; i++) \n\t\t\t\t{\n\t\t\t\t\tfor(int j = -3; j < 3; j++) \n\t\t\t\t\t{\n\t\t\t\t\t\tsum += texture2D(uImage0, vec2(j, i) * neighborPixelWeight + vec2(q1.x, q1.y)) * currPixelWeight;\n\t\t\t\t\t}\n\t\t\t   \t}\n\t\t\t \n\t\t\t  \tif(oricol.r < lowThreshold) \n\t\t\t  \t{\n\t\t\t\t\tgl_FragColor = sum * sum * lowMultiplier + oricol;\n\t\t\t  \t} \n\t\t\t  \n\t\t\t  \telse \n\t\t\t  \t{\n\t\t\t\t\tif(oricol.r < mediumThreshold) \n\t\t\t\t\t{\n\t\t\t\t\t\tgl_FragColor = sum * sum * mediumMultiplier + oricol;\n\t\t\t\t   \t} \n\t\t\t\t   \t\n\t\t\t\t   \telse \n\t\t\t\t   \t{\n\t\t\t\t\t\tgl_FragColor = sum * sum * highMultiplier + oricol;\n\t\t\t\t   \t}\n\t\t\t   }\n\t\t\t}\n\t\t");		HX_STACK_VAR(script,"script");
	HX_STACK_LINE(121)
	this->model = ::com::stencyl::graphics::shaders::PostProcess_obj::__new(script,true);
	HX_STACK_LINE(123)
	this->setProperty(HX_CSTRING("currPixelWeight"),currPixelWeight);
	HX_STACK_LINE(124)
	this->setProperty(HX_CSTRING("neighborPixelWeight"),neighborPixelWeight);
	HX_STACK_LINE(125)
	this->setProperty(HX_CSTRING("sampleX"),sampleX);
	HX_STACK_LINE(126)
	this->setProperty(HX_CSTRING("sampleY"),sampleY);
	HX_STACK_LINE(127)
	this->setProperty(HX_CSTRING("lowThreshold"),lowThreshold);
	HX_STACK_LINE(128)
	this->setProperty(HX_CSTRING("mediumThreshold"),mediumThreshold);
	HX_STACK_LINE(129)
	this->setProperty(HX_CSTRING("lowMultiplier"),lowMultiplier);
	HX_STACK_LINE(130)
	this->setProperty(HX_CSTRING("mediumMultiplier"),mediumMultiplier);
	HX_STACK_LINE(131)
	this->setProperty(HX_CSTRING("highMultiplier"),highMultiplier);
}
;
	return null();
}

BloomShader_obj::~BloomShader_obj() { }

Dynamic BloomShader_obj::__CreateEmpty() { return  new BloomShader_obj; }
hx::ObjectPtr< BloomShader_obj > BloomShader_obj::__new(hx::Null< Float >  __o_currPixelWeight,hx::Null< Float >  __o_neighborPixelWeight,hx::Null< Float >  __o_sampleX,hx::Null< Float >  __o_sampleY,hx::Null< Float >  __o_lowThreshold,hx::Null< Float >  __o_mediumThreshold,hx::Null< Float >  __o_lowMultiplier,hx::Null< Float >  __o_mediumMultiplier,hx::Null< Float >  __o_highMultiplier)
{  hx::ObjectPtr< BloomShader_obj > result = new BloomShader_obj();
	result->__construct(__o_currPixelWeight,__o_neighborPixelWeight,__o_sampleX,__o_sampleY,__o_lowThreshold,__o_mediumThreshold,__o_lowMultiplier,__o_mediumMultiplier,__o_highMultiplier);
	return result;}

Dynamic BloomShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BloomShader_obj > result = new BloomShader_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return result;}


BloomShader_obj::BloomShader_obj()
{
}

void BloomShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BloomShader);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BloomShader_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BloomShader_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic BloomShader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BloomShader_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BloomShader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BloomShader_obj::__mClass,"__mClass");
};

Class BloomShader_obj::__mClass;

void BloomShader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.shaders.BloomShader"), hx::TCanCast< BloomShader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BloomShader_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders
