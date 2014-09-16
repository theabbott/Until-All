#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_SceneScript
#include <com/stencyl/behavior/SceneScript.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Script
#include <com/stencyl/behavior/Script.h>
#endif
#ifndef INCLUDED_scripts_SceneEvents_3
#include <scripts/SceneEvents_3.h>
#endif
namespace scripts{

Void SceneEvents_3_obj::__construct(int dummy,::com::stencyl::Engine engine)
{
HX_STACK_PUSH("SceneEvents_3::new","scripts/SceneEvents_3.hx",70);
{
	HX_STACK_LINE(70)
	super::__construct(engine);
}
;
	return null();
}

SceneEvents_3_obj::~SceneEvents_3_obj() { }

Dynamic SceneEvents_3_obj::__CreateEmpty() { return  new SceneEvents_3_obj; }
hx::ObjectPtr< SceneEvents_3_obj > SceneEvents_3_obj::__new(int dummy,::com::stencyl::Engine engine)
{  hx::ObjectPtr< SceneEvents_3_obj > result = new SceneEvents_3_obj();
	result->__construct(dummy,engine);
	return result;}

Dynamic SceneEvents_3_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SceneEvents_3_obj > result = new SceneEvents_3_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void SceneEvents_3_obj::forwardMessage( ::String msg){
{
		HX_STACK_PUSH("SceneEvents_3::forwardMessage","scripts/SceneEvents_3.hx",81);
		HX_STACK_THIS(this);
		HX_STACK_ARG(msg,"msg");
	}
return null();
}


Void SceneEvents_3_obj::init( ){
{
		HX_STACK_PUSH("SceneEvents_3::init","scripts/SceneEvents_3.hx",76);
		HX_STACK_THIS(this);
	}
return null();
}



SceneEvents_3_obj::SceneEvents_3_obj()
{
}

void SceneEvents_3_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SceneEvents_3);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SceneEvents_3_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SceneEvents_3_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"forwardMessage") ) { return forwardMessage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SceneEvents_3_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SceneEvents_3_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("forwardMessage"),
	HX_CSTRING("init"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SceneEvents_3_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SceneEvents_3_obj::__mClass,"__mClass");
};

Class SceneEvents_3_obj::__mClass;

void SceneEvents_3_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scripts.SceneEvents_3"), hx::TCanCast< SceneEvents_3_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SceneEvents_3_obj::__boot()
{
}

} // end namespace scripts
