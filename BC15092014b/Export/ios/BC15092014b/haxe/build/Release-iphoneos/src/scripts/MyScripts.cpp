#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_AssetLoader
#include <com/stencyl/AssetLoader.h>
#endif
#ifndef INCLUDED_com_stencyl_behavior_Script
#include <com/stencyl/behavior/Script.h>
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
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_scripts_MyAssets
#include <scripts/MyAssets.h>
#endif
#ifndef INCLUDED_scripts_MyScripts
#include <scripts/MyScripts.h>
#endif
#ifndef INCLUDED_scripts_StencylPreloader
#include <scripts/StencylPreloader.h>
#endif
namespace scripts{

Void MyScripts_obj::__construct()
{
	return null();
}

MyScripts_obj::~MyScripts_obj() { }

Dynamic MyScripts_obj::__CreateEmpty() { return  new MyScripts_obj; }
hx::ObjectPtr< MyScripts_obj > MyScripts_obj::__new()
{  hx::ObjectPtr< MyScripts_obj > result = new MyScripts_obj();
	result->__construct();
	return result;}

Dynamic MyScripts_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MyScripts_obj > result = new MyScripts_obj();
	result->__construct();
	return result;}


MyScripts_obj::MyScripts_obj()
{
}

void MyScripts_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MyScripts);
	HX_MARK_MEMBER_NAME(stencylPreloader,"stencylPreloader");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_END_CLASS();
}

void MyScripts_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stencylPreloader,"stencylPreloader");
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(s,"s");
}

Dynamic MyScripts_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"stencylPreloader") ) { return stencylPreloader; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MyScripts_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< ::scripts::MyAssets >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< ::com::stencyl::behavior::Script >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"stencylPreloader") ) { stencylPreloader=inValue.Cast< ::scripts::StencylPreloader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MyScripts_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("stencylPreloader"));
	outFields->push(HX_CSTRING("a"));
	outFields->push(HX_CSTRING("s"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("stencylPreloader"),
	HX_CSTRING("a"),
	HX_CSTRING("s"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MyScripts_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MyScripts_obj::__mClass,"__mClass");
};

Class MyScripts_obj::__mClass;

void MyScripts_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scripts.MyScripts"), hx::TCanCast< MyScripts_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MyScripts_obj::__boot()
{
}

} // end namespace scripts
