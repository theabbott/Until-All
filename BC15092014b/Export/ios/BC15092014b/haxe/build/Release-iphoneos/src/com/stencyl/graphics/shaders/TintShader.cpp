#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_graphics_shaders_BasicShader
#include <com/stencyl/graphics/shaders/BasicShader.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_shaders_PostProcess
#include <com/stencyl/graphics/shaders/PostProcess.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_shaders_TintShader
#include <com/stencyl/graphics/shaders/TintShader.h>
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

Void TintShader_obj::__construct(int color,hx::Null< Float >  __o_amount)
{
HX_STACK_PUSH("TintShader::new","com/stencyl/graphics/shaders/TintShader.hx",8);
Float amount = __o_amount.Default(1.0);
{
	HX_STACK_LINE(9)
	super::__construct();
	HX_STACK_LINE(11)
	::String script = HX_CSTRING("\n\t\t\tvarying vec2 vTexCoord;\n\t\t\tuniform sampler2D uImage0;\n\t\t\tuniform float amount;\n\t\t\tuniform float red;\n\t\t\tuniform float green;\n\t\t\tuniform float blue;\n\n\t\t\tvoid main() \n\t\t\t{\n\t\t\t\tvec3 color = texture2D(uImage0, vTexCoord).rgb;\n\t\t\t\tvec3 endColor = mix(color, vec3(red, green, blue), amount);\n\t\t\t\tgl_FragColor = vec4(endColor.x, endColor.y, endColor.z, 1);\n\t\t\t}\n\t\t\t\n\t\t\tvec3 mix(vec3 a, vec3 b, float amount) \n\t\t\t{ \n\t\t\t\treturn vec3(a.x * (1.0 - amount) + b.x * amount, a.y * (1.0 - amount) + b.y * amount, a.z * (1.0 - amount) + b.z * amount); \n\t\t\t}\n\t\t");		HX_STACK_VAR(script,"script");
	HX_STACK_LINE(32)
	this->model = ::com::stencyl::graphics::shaders::PostProcess_obj::__new(script,true);
	HX_STACK_LINE(34)
	this->setColor(color);
	HX_STACK_LINE(35)
	this->setAmount(amount);
}
;
	return null();
}

TintShader_obj::~TintShader_obj() { }

Dynamic TintShader_obj::__CreateEmpty() { return  new TintShader_obj; }
hx::ObjectPtr< TintShader_obj > TintShader_obj::__new(int color,hx::Null< Float >  __o_amount)
{  hx::ObjectPtr< TintShader_obj > result = new TintShader_obj();
	result->__construct(color,__o_amount);
	return result;}

Dynamic TintShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TintShader_obj > result = new TintShader_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void TintShader_obj::setColor( int color){
{
		HX_STACK_PUSH("TintShader::setColor","com/stencyl/graphics/shaders/TintShader.hx",44);
		HX_STACK_THIS(this);
		HX_STACK_ARG(color,"color");
		HX_STACK_LINE(45)
		this->setProperty(HX_CSTRING("red"),(Float(((int((int(color) >> int((int)16))) & int((int)255)))) / Float(255.0)));
		HX_STACK_LINE(46)
		this->setProperty(HX_CSTRING("green"),(Float(((int((int(color) >> int((int)8))) & int((int)255)))) / Float(255.0)));
		HX_STACK_LINE(47)
		this->setProperty(HX_CSTRING("blue"),(Float(((int(color) & int((int)255)))) / Float(255.0)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TintShader_obj,setColor,(void))

Void TintShader_obj::setAmount( Float amount){
{
		HX_STACK_PUSH("TintShader::setAmount","com/stencyl/graphics/shaders/TintShader.hx",39);
		HX_STACK_THIS(this);
		HX_STACK_ARG(amount,"amount");
		HX_STACK_LINE(39)
		this->setProperty(HX_CSTRING("amount"),amount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TintShader_obj,setAmount,(void))


TintShader_obj::TintShader_obj()
{
}

void TintShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TintShader);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TintShader_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic TintShader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"setColor") ) { return setColor_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setAmount") ) { return setAmount_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TintShader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void TintShader_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setColor"),
	HX_CSTRING("setAmount"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TintShader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TintShader_obj::__mClass,"__mClass");
};

Class TintShader_obj::__mClass;

void TintShader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.shaders.TintShader"), hx::TCanCast< TintShader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TintShader_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders
