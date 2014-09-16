#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_AssetLoader
#include <com/stencyl/AssetLoader.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_Utils
#include <com/stencyl/utils/Utils.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_net_URLRequest
#include <flash/net/URLRequest.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_scripts_MyAssets
#include <scripts/MyAssets.h>
#endif
#ifndef INCLUDED_scripts_StencylPreloader
#include <scripts/StencylPreloader.h>
#endif
namespace scripts{

Void StencylPreloader_obj::__construct()
{
HX_STACK_PUSH("StencylPreloader::new","scripts/StencylPreloader.hx",34);
{
	HX_STACK_LINE(35)
	super::__construct();
	HX_STACK_LINE(38)
	this->set_x(::com::stencyl::Engine_obj::engine->root->get_x());
	HX_STACK_LINE(39)
	this->set_y(::com::stencyl::Engine_obj::engine->root->get_y());
	HX_STACK_LINE(42)
	this->locked = false;
	HX_STACK_LINE(43)
	this->adFinished = true;
	HX_STACK_LINE(44)
	this->started = false;
	HX_STACK_LINE(46)
	Float gameScale = ::com::stencyl::Engine_obj::SCALE;		HX_STACK_VAR(gameScale,"gameScale");
	HX_STACK_LINE(49)
	bool siteLock = false;		HX_STACK_VAR(siteLock,"siteLock");
	HX_STACK_LINE(50)
	::String lockURL = HX_CSTRING("");		HX_STACK_VAR(lockURL,"lockURL");
	HX_STACK_LINE(51)
	::String url = HX_CSTRING("");		HX_STACK_VAR(url,"url");
	HX_STACK_LINE(54)
	int showSplash = (int)1;		HX_STACK_VAR(showSplash,"showSplash");
	HX_STACK_LINE(55)
	int backgroundColor = (int)-15592942;		HX_STACK_VAR(backgroundColor,"backgroundColor");
	HX_STACK_LINE(57)
	this->background = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(58)
	this->background->get_graphics()->beginFill(backgroundColor,(int)1);
	HX_STACK_LINE(59)
	this->background->get_graphics()->drawRect((int)0,(int)0,this->getWidth(),this->getHeight());
	HX_STACK_LINE(60)
	this->addChild(this->background);
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(66)
		::flash::display::BitmapData preloaderBG = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("assets/graphics/preloader-bg.png"),null());		HX_STACK_VAR(preloaderBG,"preloaderBG");
		HX_STACK_LINE(67)
		::flash::display::Bitmap bmp = ::flash::display::Bitmap_obj::__new(preloaderBG,null(),null());		HX_STACK_VAR(bmp,"bmp");
		HX_STACK_LINE(68)
		bmp->set_scaleX((Float(this->getWidth()) / Float(preloaderBG->get_width())));
		HX_STACK_LINE(69)
		bmp->set_scaleY((Float(this->getHeight()) / Float(preloaderBG->get_height())));
		HX_STACK_LINE(70)
		this->addChild(bmp);
	}
	HX_STACK_LINE(116)
	int barBorderColor = (int)-12303292;		HX_STACK_VAR(barBorderColor,"barBorderColor");
	HX_STACK_LINE(117)
	int barBackgroundColor = (int)-12303292;		HX_STACK_VAR(barBackgroundColor,"barBackgroundColor");
	HX_STACK_LINE(118)
	int barColor = (int)-7829368;		HX_STACK_VAR(barColor,"barColor");
	HX_STACK_LINE(120)
	Float borderThickness = (gameScale * (int)2);		HX_STACK_VAR(borderThickness,"borderThickness");
	HX_STACK_LINE(121)
	this->barWidth = ::Std_obj::_int((gameScale * (int)120));
	HX_STACK_LINE(122)
	this->barHeight = ::Std_obj::_int((gameScale * (int)8));
	HX_STACK_LINE(124)
	Float offsetX = (gameScale * (int)0);		HX_STACK_VAR(offsetX,"offsetX");
	HX_STACK_LINE(125)
	Float offsetY = (gameScale * (int)0);		HX_STACK_VAR(offsetY,"offsetY");
	HX_STACK_LINE(127)
	Float barX = ((Float(this->getWidth()) / Float((int)2)) - (Float(this->barWidth) / Float((int)2)));		HX_STACK_VAR(barX,"barX");
	HX_STACK_LINE(128)
	Float barY = ((Float(this->getHeight()) / Float((int)2)) - (Float(this->barHeight) / Float((int)2)));		HX_STACK_VAR(barY,"barY");
	HX_STACK_LINE(130)
	this->barBorder = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(131)
	this->barBorder->get_graphics()->beginFill(barBorderColor,(int)1);
	HX_STACK_LINE(132)
	this->barBorder->get_graphics()->drawRect(-(borderThickness),-(borderThickness),(this->barWidth + (borderThickness * (int)2)),(this->barHeight + (borderThickness * (int)2)));
	HX_STACK_LINE(133)
	this->barBorder->set_x((barX + offsetX));
	HX_STACK_LINE(134)
	this->barBorder->set_y((barY + offsetY));
	HX_STACK_LINE(135)
	this->addChild(this->barBorder);
	HX_STACK_LINE(137)
	this->barBackground = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(138)
	this->barBackground->get_graphics()->beginFill(barBackgroundColor,(int)1);
	HX_STACK_LINE(139)
	this->barBackground->get_graphics()->drawRect((int)0,(int)0,this->barWidth,this->barHeight);
	HX_STACK_LINE(140)
	this->barBackground->set_x((barX + offsetX));
	HX_STACK_LINE(141)
	this->barBackground->set_y((barY + offsetY));
	HX_STACK_LINE(142)
	this->barBackground->set_scaleX((int)1);
	HX_STACK_LINE(143)
	this->addChild(this->barBackground);
	HX_STACK_LINE(145)
	this->bar = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(146)
	this->bar->get_graphics()->beginFill(barColor,(int)1);
	HX_STACK_LINE(147)
	this->bar->get_graphics()->drawRect((int)0,(int)0,this->barWidth,this->barHeight);
	HX_STACK_LINE(150)
	::flash::geom::Rectangle r = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,(int)0,this->barHeight);		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(151)
	this->bar->set_scrollRect(r);
	HX_STACK_LINE(153)
	this->bar->set_x((barX + offsetX));
	HX_STACK_LINE(154)
	this->bar->set_y((barY + offsetY));
	HX_STACK_LINE(155)
	this->addChild(this->bar);
	HX_STACK_LINE(171)
	if (((this->getURL() != HX_CSTRING("")))){
		HX_STACK_LINE(172)
		this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDown_dyn(),false,(int)2,null());
	}
	HX_STACK_LINE(229)
	this->addEventListener(::flash::events::Event_obj::ENTER_FRAME,this->onEnterFrame_dyn(),null(),null(),null());
}
;
	return null();
}

StencylPreloader_obj::~StencylPreloader_obj() { }

Dynamic StencylPreloader_obj::__CreateEmpty() { return  new StencylPreloader_obj; }
hx::ObjectPtr< StencylPreloader_obj > StencylPreloader_obj::__new()
{  hx::ObjectPtr< StencylPreloader_obj > result = new StencylPreloader_obj();
	result->__construct();
	return result;}

Dynamic StencylPreloader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StencylPreloader_obj > result = new StencylPreloader_obj();
	result->__construct();
	return result;}

Void StencylPreloader_obj::onEnterFrame( ::flash::events::Event event){
{
		HX_STACK_PUSH("StencylPreloader::onEnterFrame","scripts/StencylPreloader.hx",340);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(340)
		if ((!(this->started))){
			HX_STACK_LINE(342)
			this->started = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StencylPreloader_obj,onEnterFrame,(void))

Void StencylPreloader_obj::onUpdate( int bytesLoaded,int bytesTotal){
{
		HX_STACK_PUSH("StencylPreloader::onUpdate","scripts/StencylPreloader.hx",321);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bytesLoaded,"bytesLoaded");
		HX_STACK_ARG(bytesTotal,"bytesTotal");
		HX_STACK_LINE(322)
		Float percentLoaded = (Float(bytesLoaded) / Float(bytesTotal));		HX_STACK_VAR(percentLoaded,"percentLoaded");
		HX_STACK_LINE(324)
		if (((percentLoaded > (int)1))){
			HX_STACK_LINE(325)
			(percentLoaded == (int)1);
		}
		HX_STACK_LINE(329)
		if (((this->bar != null()))){
			HX_STACK_LINE(334)
			::flash::geom::Rectangle r = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,(this->barWidth * percentLoaded),this->barHeight);		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(335)
			this->bar->set_scrollRect(r);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StencylPreloader_obj,onUpdate,(void))

Void StencylPreloader_obj::onLoaded( ){
{
		HX_STACK_PUSH("StencylPreloader::onLoaded","scripts/StencylPreloader.hx",306);
		HX_STACK_THIS(this);
		HX_STACK_LINE(306)
		if ((this->adFinished)){
			HX_STACK_LINE(308)
			this->dispatchEvent(::flash::events::Event_obj::__new(::flash::events::Event_obj::COMPLETE,null(),null()));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StencylPreloader_obj,onLoaded,(void))

Void StencylPreloader_obj::onInit( ){
{
		HX_STACK_PUSH("StencylPreloader::onInit","scripts/StencylPreloader.hx",302);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StencylPreloader_obj,onInit,(void))

Float StencylPreloader_obj::getHeight( ){
	HX_STACK_PUSH("StencylPreloader::getHeight","scripts/StencylPreloader.hx",297);
	HX_STACK_THIS(this);
	HX_STACK_LINE(297)
	return ::Std_obj::_int((::scripts::MyAssets_obj::stageHeight * ::com::stencyl::Engine_obj::SCALE));
}


HX_DEFINE_DYNAMIC_FUNC0(StencylPreloader_obj,getHeight,return )

Float StencylPreloader_obj::getWidth( ){
	HX_STACK_PUSH("StencylPreloader::getWidth","scripts/StencylPreloader.hx",292);
	HX_STACK_THIS(this);
	HX_STACK_LINE(292)
	return ::Std_obj::_int((::scripts::MyAssets_obj::stageWidth * ::com::stencyl::Engine_obj::SCALE));
}


HX_DEFINE_DYNAMIC_FUNC0(StencylPreloader_obj,getWidth,return )

int StencylPreloader_obj::getBackgroundColor( ){
	HX_STACK_PUSH("StencylPreloader::getBackgroundColor","scripts/StencylPreloader.hx",287);
	HX_STACK_THIS(this);
	HX_STACK_LINE(287)
	return (int)3368601;
}


HX_DEFINE_DYNAMIC_FUNC0(StencylPreloader_obj,getBackgroundColor,return )

Void StencylPreloader_obj::onMouseDown( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("StencylPreloader::onMouseDown","scripts/StencylPreloader.hx",281);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(282)
		this->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDown_dyn(),null());
		HX_STACK_LINE(283)
		::flash::Lib_obj::getURL(::flash::net::URLRequest_obj::__new(this->getURL()),HX_CSTRING("_blank"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StencylPreloader_obj,onMouseDown,(void))

Void StencylPreloader_obj::goToLockURL( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("StencylPreloader::goToLockURL","scripts/StencylPreloader.hx",276);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(276)
		::flash::Lib_obj::getURL(::flash::net::URLRequest_obj::__new(this->getLockURL()),HX_CSTRING("_parent"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StencylPreloader_obj,goToLockURL,(void))

::String StencylPreloader_obj::getURL( ){
	HX_STACK_PUSH("StencylPreloader::getURL","scripts/StencylPreloader.hx",271);
	HX_STACK_THIS(this);
	HX_STACK_LINE(271)
	return HX_CSTRING("");
}


HX_DEFINE_DYNAMIC_FUNC0(StencylPreloader_obj,getURL,return )

Void StencylPreloader_obj::showLockScreen( ::String realURL){
{
		HX_STACK_PUSH("StencylPreloader::showLockScreen","scripts/StencylPreloader.hx",243);
		HX_STACK_THIS(this);
		HX_STACK_ARG(realURL,"realURL");
		HX_STACK_LINE(245)
		this->locked = true;
		HX_STACK_LINE(247)
		::com::stencyl::utils::Utils_obj::removeAllChildren(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(249)
		::flash::display::Bitmap tmp = ::flash::display::Bitmap_obj::__new(::flash::display::BitmapData_obj::__new(::Std_obj::_int(this->getWidth()),::Std_obj::_int(this->getHeight()),false,(int)5658198,null()),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(250)
		this->addChild(tmp);
		HX_STACK_LINE(252)
		::flash::text::TextField txt = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(txt,"txt");
		HX_STACK_LINE(253)
		txt->set_width((this->getWidth() - (int)16));
		HX_STACK_LINE(254)
		txt->set_height((this->getHeight() - (int)16));
		HX_STACK_LINE(255)
		txt->set_x((int)8);
		HX_STACK_LINE(256)
		txt->set_y((int)8);
		HX_STACK_LINE(257)
		txt->set_textColor((int)16777215);
		HX_STACK_LINE(258)
		txt->set_multiline(true);
		HX_STACK_LINE(259)
		txt->set_wordWrap(true);
		HX_STACK_LINE(261)
		::String lockText = ((HX_CSTRING("Hi there!  It looks like somebody copied this game without my permission. Just click anywhere, or copy-paste this URL into your browser.\n\n") + realURL) + HX_CSTRING("\n\nThanks, and have fun!"));		HX_STACK_VAR(lockText,"lockText");
		HX_STACK_LINE(262)
		txt->set_text(lockText);
		HX_STACK_LINE(263)
		this->addChild(txt);
		HX_STACK_LINE(265)
		this->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDown_dyn(),null());
		HX_STACK_LINE(266)
		txt->addEventListener(::flash::events::MouseEvent_obj::CLICK,this->goToLockURL_dyn(),null(),null(),null());
		HX_STACK_LINE(267)
		tmp->addEventListener(::flash::events::MouseEvent_obj::CLICK,this->goToLockURL_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StencylPreloader_obj,showLockScreen,(void))

bool StencylPreloader_obj::isSiteLocked( ){
	HX_STACK_PUSH("StencylPreloader::isSiteLocked","scripts/StencylPreloader.hx",238);
	HX_STACK_THIS(this);
	HX_STACK_LINE(238)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(StencylPreloader_obj,isSiteLocked,return )

::String StencylPreloader_obj::getLockURL( ){
	HX_STACK_PUSH("StencylPreloader::getLockURL","scripts/StencylPreloader.hx",233);
	HX_STACK_THIS(this);
	HX_STACK_LINE(233)
	return HX_CSTRING("");
}


HX_DEFINE_DYNAMIC_FUNC0(StencylPreloader_obj,getLockURL,return )


StencylPreloader_obj::StencylPreloader_obj()
{
}

void StencylPreloader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StencylPreloader);
	HX_MARK_MEMBER_NAME(locked,"locked");
	HX_MARK_MEMBER_NAME(adFinished,"adFinished");
	HX_MARK_MEMBER_NAME(started,"started");
	HX_MARK_MEMBER_NAME(barHeight,"barHeight");
	HX_MARK_MEMBER_NAME(barWidth,"barWidth");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(barBackground,"barBackground");
	HX_MARK_MEMBER_NAME(bar,"bar");
	HX_MARK_MEMBER_NAME(barBorder,"barBorder");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StencylPreloader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(locked,"locked");
	HX_VISIT_MEMBER_NAME(adFinished,"adFinished");
	HX_VISIT_MEMBER_NAME(started,"started");
	HX_VISIT_MEMBER_NAME(barHeight,"barHeight");
	HX_VISIT_MEMBER_NAME(barWidth,"barWidth");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(barBackground,"barBackground");
	HX_VISIT_MEMBER_NAME(bar,"bar");
	HX_VISIT_MEMBER_NAME(barBorder,"barBorder");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic StencylPreloader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bar") ) { return bar; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onInit") ) { return onInit_dyn(); }
		if (HX_FIELD_EQ(inName,"getURL") ) { return getURL_dyn(); }
		if (HX_FIELD_EQ(inName,"locked") ) { return locked; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { return started; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"onLoaded") ) { return onLoaded_dyn(); }
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"barWidth") ) { return barWidth; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"barHeight") ) { return barHeight; }
		if (HX_FIELD_EQ(inName,"barBorder") ) { return barBorder; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getLockURL") ) { return getLockURL_dyn(); }
		if (HX_FIELD_EQ(inName,"adFinished") ) { return adFinished; }
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"goToLockURL") ) { return goToLockURL_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return onEnterFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"isSiteLocked") ) { return isSiteLocked_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"barBackground") ) { return barBackground; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"showLockScreen") ) { return showLockScreen_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getBackgroundColor") ) { return getBackgroundColor_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StencylPreloader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bar") ) { bar=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"locked") ) { locked=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { started=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"barWidth") ) { barWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"barHeight") ) { barHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"barBorder") ) { barBorder=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"adFinished") ) { adFinished=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"barBackground") ) { barBackground=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StencylPreloader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("locked"));
	outFields->push(HX_CSTRING("adFinished"));
	outFields->push(HX_CSTRING("started"));
	outFields->push(HX_CSTRING("barHeight"));
	outFields->push(HX_CSTRING("barWidth"));
	outFields->push(HX_CSTRING("background"));
	outFields->push(HX_CSTRING("barBackground"));
	outFields->push(HX_CSTRING("bar"));
	outFields->push(HX_CSTRING("barBorder"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onEnterFrame"),
	HX_CSTRING("onUpdate"),
	HX_CSTRING("onLoaded"),
	HX_CSTRING("onInit"),
	HX_CSTRING("getHeight"),
	HX_CSTRING("getWidth"),
	HX_CSTRING("getBackgroundColor"),
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("goToLockURL"),
	HX_CSTRING("getURL"),
	HX_CSTRING("showLockScreen"),
	HX_CSTRING("isSiteLocked"),
	HX_CSTRING("getLockURL"),
	HX_CSTRING("locked"),
	HX_CSTRING("adFinished"),
	HX_CSTRING("started"),
	HX_CSTRING("barHeight"),
	HX_CSTRING("barWidth"),
	HX_CSTRING("background"),
	HX_CSTRING("barBackground"),
	HX_CSTRING("bar"),
	HX_CSTRING("barBorder"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StencylPreloader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StencylPreloader_obj::__mClass,"__mClass");
};

Class StencylPreloader_obj::__mClass;

void StencylPreloader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scripts.StencylPreloader"), hx::TCanCast< StencylPreloader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void StencylPreloader_obj::__boot()
{
}

} // end namespace scripts
