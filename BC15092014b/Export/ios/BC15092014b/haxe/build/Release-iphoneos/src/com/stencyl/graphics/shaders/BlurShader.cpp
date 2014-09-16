#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_graphics_shaders_BasicShader
#include <com/stencyl/graphics/shaders/BasicShader.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_shaders_BlurShader
#include <com/stencyl/graphics/shaders/BlurShader.h>
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

Void BlurShader_obj::__construct(hx::Null< Float >  __o_radius,hx::Null< Float >  __o_dirX,hx::Null< Float >  __o_dirY)
{
HX_STACK_PUSH("BlurShader::new","com/stencyl/graphics/shaders/BlurShader.hx",6);
Float radius = __o_radius.Default(2.0);
Float dirX = __o_dirX.Default(1.0);
Float dirY = __o_dirY.Default(1.0);
{
	HX_STACK_LINE(7)
	super::__construct();
	HX_STACK_LINE(9)
	::String script = HX_CSTRING("\n\t\t\t//in attributes from our vertex shader\n\t\t\tvarying vec2 vTexCoord;\n\t\t\t\n\t\t\t//declare uniforms\n\t\t\tuniform sampler2D uImage0;\n\t\t\tuniform vec2 uResolution;\n\t\t\t\n\t\t\tuniform float radius;\n\t\t\tuniform float dirx;\n\t\t\tuniform float diry;\n\t\t\t\n\t\t\tvoid main()\n\t\t\t{\n\t\t\t\t//this will be our RGBA sum\n\t\t\t\tvec4 sum = vec4(0.0);\n\t\t\t\n\t\t\t\t//our original texcoord for this fragment\n\t\t\t\tvec2 tc = vTexCoord;\n\t\t\t\n\t\t\t\t//the amount to blur, i.e. how far off center to sample from\n\t\t\t\t//1.0 -> blur by one pixel\n\t\t\t\t//2.0 -> blur by two pixels, etc.\n\t\t\t\tfloat blur = radius / uResolution.x;\n\t\t\t\n\t\t\t\t//the direction of our blur\n\t\t\t\t//(1.0, 0.0) -> x-axis blur\n\t\t\t\t//(0.0, 1.0) -> y-axis blur\n\t\t\t\tfloat hstep = dirx;\n\t\t\t\tfloat vstep = diry;\n\t\t\t\n\t\t\t\t//apply blurring, using a 9-tap filter with predefined gaussian weights\n\t\t\t\n\t\t\t\tsum += texture2D(uImage0, vec2(tc.x - 4.0*blur*hstep, tc.y - 4.0*blur*vstep)) * 0.0162162162;\n\t\t\t\tsum += texture2D(uImage0, vec2(tc.x - 3.0*blur*hstep, tc.y - 3.0*blur*vstep)) * 0.0540540541;\n\t\t\t\tsum += texture2D(uImage0, vec2(tc.x - 2.0*blur*hstep, tc.y - 2.0*blur*vstep)) * 0.1216216216;\n\t\t\t\tsum += texture2D(uImage0, vec2(tc.x - 1.0*blur*hstep, tc.y - 1.0*blur*vstep)) * 0.1945945946;\n\t\t\t\n\t\t\t\tsum += texture2D(uImage0, vec2(tc.x, tc.y)) * 0.2270270270;\n\t\t\t\n\t\t\t\tsum += texture2D(uImage0, vec2(tc.x + 1.0*blur*hstep, tc.y + 1.0*blur*vstep)) * 0.1945945946;\n\t\t\t\tsum += texture2D(uImage0, vec2(tc.x + 2.0*blur*hstep, tc.y + 2.0*blur*vstep)) * 0.1216216216;\n\t\t\t\tsum += texture2D(uImage0, vec2(tc.x + 3.0*blur*hstep, tc.y + 3.0*blur*vstep)) * 0.0540540541;\n\t\t\t\tsum += texture2D(uImage0, vec2(tc.x + 4.0*blur*hstep, tc.y + 4.0*blur*vstep)) * 0.0162162162;\n\t\t\t\n\t\t\t\t//discard alpha for our simple demo, multiply by vertex color and return\n\t\t\t\tgl_FragColor = vec4(sum.rgb, 1.0);\n\t\t\t}\n\t\t");		HX_STACK_VAR(script,"script");
	HX_STACK_LINE(59)
	this->model = ::com::stencyl::graphics::shaders::PostProcess_obj::__new(script,true);
	HX_STACK_LINE(61)
	this->setRadius(radius);
	HX_STACK_LINE(62)
	this->setDirectionX(dirX);
	HX_STACK_LINE(63)
	this->setDirectionY(dirY);
}
;
	return null();
}

BlurShader_obj::~BlurShader_obj() { }

Dynamic BlurShader_obj::__CreateEmpty() { return  new BlurShader_obj; }
hx::ObjectPtr< BlurShader_obj > BlurShader_obj::__new(hx::Null< Float >  __o_radius,hx::Null< Float >  __o_dirX,hx::Null< Float >  __o_dirY)
{  hx::ObjectPtr< BlurShader_obj > result = new BlurShader_obj();
	result->__construct(__o_radius,__o_dirX,__o_dirY);
	return result;}

Dynamic BlurShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BlurShader_obj > result = new BlurShader_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void BlurShader_obj::setDirectionY( Float amount){
{
		HX_STACK_PUSH("BlurShader::setDirectionY","com/stencyl/graphics/shaders/BlurShader.hx",77);
		HX_STACK_THIS(this);
		HX_STACK_ARG(amount,"amount");
		HX_STACK_LINE(77)
		this->setProperty(HX_CSTRING("diry"),amount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BlurShader_obj,setDirectionY,(void))

Void BlurShader_obj::setDirectionX( Float amount){
{
		HX_STACK_PUSH("BlurShader::setDirectionX","com/stencyl/graphics/shaders/BlurShader.hx",72);
		HX_STACK_THIS(this);
		HX_STACK_ARG(amount,"amount");
		HX_STACK_LINE(72)
		this->setProperty(HX_CSTRING("dirx"),amount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BlurShader_obj,setDirectionX,(void))

Void BlurShader_obj::setRadius( Float amount){
{
		HX_STACK_PUSH("BlurShader::setRadius","com/stencyl/graphics/shaders/BlurShader.hx",67);
		HX_STACK_THIS(this);
		HX_STACK_ARG(amount,"amount");
		HX_STACK_LINE(67)
		this->setProperty(HX_CSTRING("radius"),amount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BlurShader_obj,setRadius,(void))


BlurShader_obj::BlurShader_obj()
{
}

void BlurShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BlurShader);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BlurShader_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BlurShader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"setRadius") ) { return setRadius_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setDirectionY") ) { return setDirectionY_dyn(); }
		if (HX_FIELD_EQ(inName,"setDirectionX") ) { return setDirectionX_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BlurShader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BlurShader_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setDirectionY"),
	HX_CSTRING("setDirectionX"),
	HX_CSTRING("setRadius"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlurShader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlurShader_obj::__mClass,"__mClass");
};

Class BlurShader_obj::__mClass;

void BlurShader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.shaders.BlurShader"), hx::TCanCast< BlurShader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BlurShader_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders
