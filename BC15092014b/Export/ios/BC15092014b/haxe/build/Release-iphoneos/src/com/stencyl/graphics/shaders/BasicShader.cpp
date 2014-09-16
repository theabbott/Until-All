#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_shaders_BasicShader
#include <com/stencyl/graphics/shaders/BasicShader.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_shaders_PostProcess
#include <com/stencyl/graphics/shaders/PostProcess.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
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

Void BasicShader_obj::__construct()
{
HX_STACK_PUSH("BasicShader::new","com/stencyl/graphics/shaders/BasicShader.hx",10);
{
}
;
	return null();
}

BasicShader_obj::~BasicShader_obj() { }

Dynamic BasicShader_obj::__CreateEmpty() { return  new BasicShader_obj; }
hx::ObjectPtr< BasicShader_obj > BasicShader_obj::__new()
{  hx::ObjectPtr< BasicShader_obj > result = new BasicShader_obj();
	result->__construct();
	return result;}

Dynamic BasicShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BasicShader_obj > result = new BasicShader_obj();
	result->__construct();
	return result;}

::com::stencyl::graphics::shaders::BasicShader BasicShader_obj::combine( ::com::stencyl::graphics::shaders::BasicShader shader){
	HX_STACK_PUSH("BasicShader::combine","com/stencyl/graphics/shaders/BasicShader.hx",51);
	HX_STACK_THIS(this);
	HX_STACK_ARG(shader,"shader");
	HX_STACK_LINE(52)
	::com::stencyl::Engine_obj::engine->addShader(this->model,null());
	HX_STACK_LINE(53)
	this->model->set_to(shader->model);
	HX_STACK_LINE(54)
	return shader;
}


HX_DEFINE_DYNAMIC_FUNC1(BasicShader_obj,combine,return )

Void BasicShader_obj::setTimeScale( Float amount){
{
		HX_STACK_PUSH("BasicShader::setTimeScale","com/stencyl/graphics/shaders/BasicShader.hx",45);
		HX_STACK_THIS(this);
		HX_STACK_ARG(amount,"amount");
		HX_STACK_LINE(45)
		this->model->timeScale = amount;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BasicShader_obj,setTimeScale,(void))

Void BasicShader_obj::disable( ){
{
		HX_STACK_PUSH("BasicShader::disable","com/stencyl/graphics/shaders/BasicShader.hx",38);
		HX_STACK_THIS(this);
		HX_STACK_LINE(39)
		::com::stencyl::Engine_obj::engine->clearShaders();
		HX_STACK_LINE(40)
		this->model->get_parent()->removeChild(this->model);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BasicShader_obj,disable,(void))

Void BasicShader_obj::enable( ){
{
		HX_STACK_PUSH("BasicShader::enable","com/stencyl/graphics/shaders/BasicShader.hx",24);
		HX_STACK_THIS(this);
		HX_STACK_LINE(24)
		::com::stencyl::Engine_obj::engine->addShader(this->model,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BasicShader_obj,enable,(void))

Void BasicShader_obj::tweenProperty( ::String name,Float targetValue,hx::Null< Float >  __o_duration,Dynamic easing){
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("BasicShader::tweenProperty","com/stencyl/graphics/shaders/BasicShader.hx",19);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(targetValue,"targetValue");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		HX_STACK_LINE(19)
		this->model->tweenUniform(name,targetValue,duration,easing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(BasicShader_obj,tweenProperty,(void))

Void BasicShader_obj::setProperty( ::String name,Float value){
{
		HX_STACK_PUSH("BasicShader::setProperty","com/stencyl/graphics/shaders/BasicShader.hx",14);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(14)
		this->model->setUniform(name,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BasicShader_obj,setProperty,(void))


BasicShader_obj::BasicShader_obj()
{
}

void BasicShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BasicShader);
	HX_MARK_MEMBER_NAME(model,"model");
	HX_MARK_END_CLASS();
}

void BasicShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(model,"model");
}

Dynamic BasicShader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { return model; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"combine") ) { return combine_dyn(); }
		if (HX_FIELD_EQ(inName,"disable") ) { return disable_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setProperty") ) { return setProperty_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setTimeScale") ) { return setTimeScale_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tweenProperty") ) { return tweenProperty_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BasicShader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { model=inValue.Cast< ::com::stencyl::graphics::shaders::PostProcess >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BasicShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("model"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("combine"),
	HX_CSTRING("setTimeScale"),
	HX_CSTRING("disable"),
	HX_CSTRING("enable"),
	HX_CSTRING("tweenProperty"),
	HX_CSTRING("setProperty"),
	HX_CSTRING("model"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BasicShader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BasicShader_obj::__mClass,"__mClass");
};

Class BasicShader_obj::__mClass;

void BasicShader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.shaders.BasicShader"), hx::TCanCast< BasicShader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BasicShader_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders
