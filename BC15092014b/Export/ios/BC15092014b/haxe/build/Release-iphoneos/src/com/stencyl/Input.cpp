#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_RoxGestureAgent
#include <RoxGestureAgent.h>
#endif
#ifndef INCLUDED_RoxGestureEvent
#include <RoxGestureEvent.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_Input
#include <com/stencyl/Input.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_Utils
#include <com/stencyl/utils/Utils.h>
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
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
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
#ifndef INCLUDED_flash_events_KeyboardEvent
#include <flash/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_events_TouchEvent
#include <flash/events/TouchEvent.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_sensors_Accelerometer
#include <flash/sensors/Accelerometer.h>
#endif
#ifndef INCLUDED_flash_ui_Multitouch
#include <flash/ui/Multitouch.h>
#endif
#ifndef INCLUDED_flash_ui_MultitouchInputMode
#include <flash/ui/MultitouchInputMode.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_ui_Accelerometer
#include <openfl/ui/Accelerometer.h>
#endif
namespace com{
namespace stencyl{

Void Input_obj::__construct()
{
	return null();
}

Input_obj::~Input_obj() { }

Dynamic Input_obj::__CreateEmpty() { return  new Input_obj; }
hx::ObjectPtr< Input_obj > Input_obj::__new()
{  hx::ObjectPtr< Input_obj > result = new Input_obj();
	result->__construct();
	return result;}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Input_obj > result = new Input_obj();
	result->__construct();
	return result;}

::String Input_obj::keyString;

::flash::events::KeyboardEvent Input_obj::lastEvent;

int Input_obj::lastKey;

Float Input_obj::mouseX;

Float Input_obj::mouseY;

bool Input_obj::mouseDown;

bool Input_obj::mouseUp;

bool Input_obj::mousePressed;

bool Input_obj::mouseReleased;

bool Input_obj::mouseWheel;

bool Input_obj::rightMouseDown;

bool Input_obj::rightMouseUp;

bool Input_obj::rightMousePressed;

bool Input_obj::rightMouseReleased;

bool Input_obj::middleMouseDown;

bool Input_obj::middleMouseUp;

bool Input_obj::middleMousePressed;

bool Input_obj::middleMouseReleased;

int Input_obj::mouseWheelDelta;

Float Input_obj::accelX;

Float Input_obj::accelY;

Float Input_obj::accelZ;

bool Input_obj::multiTouchEnabled;

::haxe::ds::StringMap Input_obj::multiTouchPoints;

int Input_obj::numTouches;

int Input_obj::swipeDirection;

bool Input_obj::swipedUp;

bool Input_obj::swipedDown;

bool Input_obj::swipedLeft;

bool Input_obj::swipedRight;

::haxe::ds::StringMap Input_obj::getControlMap( ){
	HX_STACK_PUSH("Input::getControlMap","com/stencyl/Input.hx",69);
	HX_STACK_LINE(69)
	return ::com::stencyl::Input_obj::_control;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,getControlMap,return )

Void Input_obj::define( ::String name,Array< int > keys){
{
		HX_STACK_PUSH("Input::define","com/stencyl/Input.hx",79);
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(keys,"keys");
		HX_STACK_LINE(79)
		::com::stencyl::Input_obj::_control->set(name,keys);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Input_obj,define,(void))

bool Input_obj::check( Dynamic input){
	HX_STACK_PUSH("Input::check","com/stencyl/Input.hx",89);
	HX_STACK_ARG(input,"input");
	HX_STACK_LINE(90)
	if ((::Std_obj::is(input,hx::ClassOf< ::String >()))){
		struct _Function_2_1{
			inline static Array< int > Block( Dynamic &input){
				HX_STACK_PUSH("*::closure","com/stencyl/Input.hx",92);
				{
					HX_STACK_LINE(92)
					::String key = input;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(92)
					return ::com::stencyl::Input_obj::_control->get(key);
				}
				return null();
			}
		};
		HX_STACK_LINE(92)
		Array< int > v = _Function_2_1::Block(input);		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(94)
		if (((v == null()))){
			HX_STACK_LINE(95)
			return false;
		}
		HX_STACK_LINE(100)
		int i = v->length;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(102)
		while((((i)-- > (int)0))){
			HX_STACK_LINE(104)
			if (((v->__get(i) < (int)0))){
				HX_STACK_LINE(106)
				if (((::com::stencyl::Input_obj::_keyNum > (int)0))){
					HX_STACK_LINE(107)
					return true;
				}
				HX_STACK_LINE(111)
				continue;
			}
			HX_STACK_LINE(114)
			if ((::com::stencyl::Input_obj::_key->__get(v->__get(i)))){
				HX_STACK_LINE(115)
				return true;
			}
		}
		HX_STACK_LINE(120)
		return false;
	}
	HX_STACK_LINE(123)
	return (  (((input < (int)0))) ? bool((::com::stencyl::Input_obj::_keyNum > (int)0)) : bool(::com::stencyl::Input_obj::_key->__get(input)) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,check,return )

bool Input_obj::pressed( Dynamic input){
	HX_STACK_PUSH("Input::pressed","com/stencyl/Input.hx",132);
	HX_STACK_ARG(input,"input");
	HX_STACK_LINE(133)
	if ((::Std_obj::is(input,hx::ClassOf< ::String >()))){
		struct _Function_2_1{
			inline static Array< int > Block( Dynamic &input){
				HX_STACK_PUSH("*::closure","com/stencyl/Input.hx",135);
				{
					HX_STACK_LINE(135)
					::String key = input;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(135)
					return ::com::stencyl::Input_obj::_control->get(key);
				}
				return null();
			}
		};
		HX_STACK_LINE(135)
		Array< int > v = _Function_2_1::Block(input);		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(137)
		if (((v == null()))){
			HX_STACK_LINE(138)
			return false;
		}
		HX_STACK_LINE(143)
		int i = v->length;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(145)
		while((((i)-- > (int)0))){
			HX_STACK_LINE(146)
			if (((  (((v->__get(i) < (int)0))) ? bool((::com::stencyl::Input_obj::_pressNum != (int)0)) : bool((::com::stencyl::Input_obj::indexOf(::com::stencyl::Input_obj::_press,v->__get(i)) >= (int)0)) ))){
				HX_STACK_LINE(148)
				return true;
			}
		}
		HX_STACK_LINE(153)
		return false;
	}
	HX_STACK_LINE(156)
	return (  (((input < (int)0))) ? bool((::com::stencyl::Input_obj::_pressNum != (int)0)) : bool((::com::stencyl::Input_obj::indexOf(::com::stencyl::Input_obj::_press,input) >= (int)0)) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,pressed,return )

bool Input_obj::released( Dynamic input){
	HX_STACK_PUSH("Input::released","com/stencyl/Input.hx",165);
	HX_STACK_ARG(input,"input");
	HX_STACK_LINE(166)
	if ((::Std_obj::is(input,hx::ClassOf< ::String >()))){
		struct _Function_2_1{
			inline static Array< int > Block( Dynamic &input){
				HX_STACK_PUSH("*::closure","com/stencyl/Input.hx",168);
				{
					HX_STACK_LINE(168)
					::String key = input;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(168)
					return ::com::stencyl::Input_obj::_control->get(key);
				}
				return null();
			}
		};
		HX_STACK_LINE(168)
		Array< int > v = _Function_2_1::Block(input);		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(170)
		if (((v == null()))){
			HX_STACK_LINE(171)
			return false;
		}
		HX_STACK_LINE(176)
		int i = v->length;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(178)
		while((((i)-- > (int)0))){
			HX_STACK_LINE(179)
			if (((  (((v->__get(i) < (int)0))) ? bool((::com::stencyl::Input_obj::_releaseNum != (int)0)) : bool((::com::stencyl::Input_obj::indexOf(::com::stencyl::Input_obj::_release,v->__get(i)) >= (int)0)) ))){
				HX_STACK_LINE(181)
				return true;
			}
		}
		HX_STACK_LINE(186)
		return false;
	}
	HX_STACK_LINE(189)
	return (  (((input < (int)0))) ? bool((::com::stencyl::Input_obj::_releaseNum != (int)0)) : bool((::com::stencyl::Input_obj::indexOf(::com::stencyl::Input_obj::_release,input) >= (int)0)) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,released,return )

int Input_obj::indexOf( Array< int > a,int v){
	HX_STACK_PUSH("Input::indexOf","com/stencyl/Input.hx",199);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(200)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(202)
	{
		HX_STACK_LINE(202)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(202)
		while(((_g < a->length))){
			HX_STACK_LINE(202)
			int v2 = a->__get(_g);		HX_STACK_VAR(v2,"v2");
			HX_STACK_LINE(202)
			++(_g);
			HX_STACK_LINE(204)
			if (((v == v2))){
				HX_STACK_LINE(205)
				return i;
			}
			HX_STACK_LINE(209)
			(i)++;
		}
	}
	HX_STACK_LINE(212)
	return (int)-1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Input_obj,indexOf,return )

Void Input_obj::enableSwipeDetection( ){
{
		HX_STACK_PUSH("Input::enableSwipeDetection","com/stencyl/Input.hx",216);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,enableSwipeDetection,(void))

Void Input_obj::disableSwipeDetection( ){
{
		HX_STACK_PUSH("Input::disableSwipeDetection","com/stencyl/Input.hx",224);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,disableSwipeDetection,(void))

Void Input_obj::enable( ){
{
		HX_STACK_PUSH("Input::enable","com/stencyl/Input.hx",232);
		HX_STACK_LINE(232)
		if (((bool(!(::com::stencyl::Input_obj::_enabled)) && bool((::com::stencyl::Engine_obj::stage != null()))))){
			HX_STACK_LINE(235)
			::com::stencyl::Engine_obj::stage->addEventListener(::flash::events::KeyboardEvent_obj::KEY_DOWN,::com::stencyl::Input_obj::onKeyDown_dyn(),false,(int)2,null());
			HX_STACK_LINE(236)
			::com::stencyl::Engine_obj::stage->addEventListener(::flash::events::KeyboardEvent_obj::KEY_UP,::com::stencyl::Input_obj::onKeyUp_dyn(),false,(int)2,null());
			HX_STACK_LINE(237)
			::com::stencyl::Engine_obj::stage->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,::com::stencyl::Input_obj::onMouseDown_dyn(),false,(int)2,null());
			HX_STACK_LINE(238)
			::com::stencyl::Engine_obj::stage->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,::com::stencyl::Input_obj::onMouseUp_dyn(),false,(int)2,null());
			HX_STACK_LINE(239)
			::com::stencyl::Engine_obj::stage->addEventListener(::flash::events::MouseEvent_obj::MOUSE_WHEEL,::com::stencyl::Input_obj::onMouseWheel_dyn(),false,(int)2,null());
			HX_STACK_LINE(277)
			::com::stencyl::Input_obj::multiTouchEnabled = ::flash::ui::Multitouch_obj::get_supportsTouchEvents();
			HX_STACK_LINE(279)
			if ((::com::stencyl::Input_obj::multiTouchEnabled)){
				HX_STACK_LINE(281)
				::com::stencyl::Input_obj::multiTouchPoints = ::haxe::ds::StringMap_obj::__new();
				HX_STACK_LINE(282)
				::flash::ui::Multitouch_obj::set_inputMode(::flash::ui::MultitouchInputMode_obj::TOUCH_POINT);
				HX_STACK_LINE(283)
				::com::stencyl::Engine_obj::stage->addEventListener(::flash::events::TouchEvent_obj::TOUCH_BEGIN,::com::stencyl::Input_obj::onTouchBegin_dyn(),null(),null(),null());
				HX_STACK_LINE(284)
				::com::stencyl::Engine_obj::stage->addEventListener(::flash::events::TouchEvent_obj::TOUCH_MOVE,::com::stencyl::Input_obj::onTouchMove_dyn(),null(),null(),null());
				HX_STACK_LINE(285)
				::com::stencyl::Engine_obj::stage->addEventListener(::flash::events::TouchEvent_obj::TOUCH_END,::com::stencyl::Input_obj::onTouchEnd_dyn(),null(),null(),null());
			}
			HX_STACK_LINE(289)
			::RoxGestureAgent roxAgent = ::RoxGestureAgent_obj::__new(::com::stencyl::Engine_obj::engine->root,(int)2);		HX_STACK_VAR(roxAgent,"roxAgent");
			HX_STACK_LINE(290)
			::com::stencyl::Engine_obj::engine->root->addEventListener(HX_CSTRING("rox_gesture_swipe"),::com::stencyl::Input_obj::onSwipe_dyn(),null(),null(),null());
			HX_STACK_LINE(292)
			::com::stencyl::Input_obj::swipeDirection = (int)-1;
			HX_STACK_LINE(293)
			::com::stencyl::Input_obj::swipedLeft = false;
			HX_STACK_LINE(294)
			::com::stencyl::Input_obj::swipedRight = false;
			HX_STACK_LINE(295)
			::com::stencyl::Input_obj::swipedUp = false;
			HX_STACK_LINE(296)
			::com::stencyl::Input_obj::swipedDown = false;
			HX_STACK_LINE(298)
			::com::stencyl::Input_obj::mouseX = (int)0;
			HX_STACK_LINE(299)
			::com::stencyl::Input_obj::mouseY = (int)0;
			HX_STACK_LINE(300)
			::com::stencyl::Input_obj::accelX = (int)0;
			HX_STACK_LINE(301)
			::com::stencyl::Input_obj::accelY = (int)0;
			HX_STACK_LINE(302)
			::com::stencyl::Input_obj::accelZ = (int)0;
			HX_STACK_LINE(303)
			::com::stencyl::Input_obj::numTouches = (int)0;
			HX_STACK_LINE(304)
			::com::stencyl::Input_obj::_enabled = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,enable,(void))

Void Input_obj::onSwipe( ::RoxGestureEvent e){
{
		HX_STACK_PUSH("Input::onSwipe","com/stencyl/Input.hx",309);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(310)
		::flash::geom::Point pt = hx::TCast< flash::geom::Point >::cast(e->extra);		HX_STACK_VAR(pt,"pt");
		HX_STACK_LINE(312)
		if (((::Math_obj::abs(pt->x) <= ::Math_obj::abs(pt->y)))){
			HX_STACK_LINE(313)
			if (((pt->y <= (int)0))){
				HX_STACK_LINE(316)
				::com::stencyl::Input_obj::swipeDirection = (int)2;
			}
			else{
				HX_STACK_LINE(322)
				::com::stencyl::Input_obj::swipeDirection = (int)3;
			}
		}
		else{
			HX_STACK_LINE(327)
			if (((::Math_obj::abs(pt->x) > ::Math_obj::abs(pt->y)))){
				HX_STACK_LINE(328)
				if (((pt->x <= (int)0))){
					HX_STACK_LINE(331)
					::com::stencyl::Input_obj::swipeDirection = (int)0;
				}
				else{
					HX_STACK_LINE(337)
					::com::stencyl::Input_obj::swipeDirection = (int)1;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onSwipe,(void))

Void Input_obj::update( ){
{
		HX_STACK_PUSH("Input::update","com/stencyl/Input.hx",344);
		HX_STACK_LINE(345)
		::com::stencyl::Input_obj::swipedLeft = false;
		HX_STACK_LINE(346)
		::com::stencyl::Input_obj::swipedRight = false;
		HX_STACK_LINE(347)
		::com::stencyl::Input_obj::swipedUp = false;
		HX_STACK_LINE(348)
		::com::stencyl::Input_obj::swipedDown = false;
		HX_STACK_LINE(350)
		if (((::com::stencyl::Input_obj::swipeDirection > (int)-1))){
			HX_STACK_LINE(352)
			{
				HX_STACK_LINE(352)
				Dynamic _g = hx::ClassOf< ::com::stencyl::Input >();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(352)
				switch( (int)(_g->__Field(HX_CSTRING("swipeDirection"),true))){
					case (int)0: {
						HX_STACK_LINE(354)
						::com::stencyl::Input_obj::swipedLeft = true;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(356)
						::com::stencyl::Input_obj::swipedRight = true;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(358)
						::com::stencyl::Input_obj::swipedUp = true;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(360)
						::com::stencyl::Input_obj::swipedDown = true;
					}
					;break;
				}
			}
			HX_STACK_LINE(364)
			if (((::com::stencyl::Engine_obj::engine->whenSwipedListeners != null()))){
				HX_STACK_LINE(366)
				Dynamic listeners = ::com::stencyl::Engine_obj::engine->whenSwipedListeners;		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(366)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(366)
				while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
					HX_STACK_LINE(366)
					try{
						HX_STACK_LINE(366)
						Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(366)
						f(listeners).Cast< Void >();
						HX_STACK_LINE(366)
						if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
							HX_STACK_LINE(366)
							(r)--;
						}
					}
					catch(Dynamic __e){
						if (__e.IsClass< ::String >() ){
							HX_STACK_BEGIN_CATCH
							::String e = __e;{
								HX_STACK_LINE(366)
								::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4003,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners")));
							}
						}
						else throw(__e);
					}
					HX_STACK_LINE(366)
					(r)++;
				}
			}
			HX_STACK_LINE(369)
			::com::stencyl::Input_obj::swipeDirection = (int)-1;
		}
		HX_STACK_LINE(373)
		if ((::flash::sensors::Accelerometer_obj::get_isSupported())){
			HX_STACK_LINE(375)
			Dynamic data = ::openfl::ui::Accelerometer_obj::get();		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(377)
			::com::stencyl::Input_obj::accelX = data->__Field(HX_CSTRING("x"),true);
			HX_STACK_LINE(378)
			::com::stencyl::Input_obj::accelY = data->__Field(HX_CSTRING("y"),true);
			HX_STACK_LINE(379)
			::com::stencyl::Input_obj::accelZ = data->__Field(HX_CSTRING("z"),true);
		}
		HX_STACK_LINE(384)
		::com::stencyl::Input_obj::mouseX = (Float(((::com::stencyl::Engine_obj::stage->get_mouseX() - ::com::stencyl::Engine_obj::screenOffsetX))) / Float(::com::stencyl::Engine_obj::screenScaleX));
		HX_STACK_LINE(385)
		::com::stencyl::Input_obj::mouseY = (Float(((::com::stencyl::Engine_obj::stage->get_mouseY() - ::com::stencyl::Engine_obj::screenOffsetY))) / Float(::com::stencyl::Engine_obj::screenScaleY));
		HX_STACK_LINE(387)
		while((((::com::stencyl::Input_obj::_pressNum)-- > (int)-1))){
			HX_STACK_LINE(387)
			::com::stencyl::Input_obj::_press[::com::stencyl::Input_obj::_pressNum] = (int)-1;
		}
		HX_STACK_LINE(388)
		::com::stencyl::Input_obj::_pressNum = (int)0;
		HX_STACK_LINE(389)
		while((((::com::stencyl::Input_obj::_releaseNum)-- > (int)-1))){
			HX_STACK_LINE(389)
			::com::stencyl::Input_obj::_release[::com::stencyl::Input_obj::_releaseNum] = (int)-1;
		}
		HX_STACK_LINE(390)
		::com::stencyl::Input_obj::_releaseNum = (int)0;
		HX_STACK_LINE(392)
		if ((::com::stencyl::Input_obj::mousePressed)){
			HX_STACK_LINE(393)
			::com::stencyl::Input_obj::mousePressed = false;
		}
		HX_STACK_LINE(397)
		if ((::com::stencyl::Input_obj::mouseReleased)){
			HX_STACK_LINE(398)
			::com::stencyl::Input_obj::mouseReleased = false;
		}
		HX_STACK_LINE(402)
		if ((::com::stencyl::Input_obj::rightMousePressed)){
			HX_STACK_LINE(403)
			::com::stencyl::Input_obj::rightMousePressed = false;
		}
		HX_STACK_LINE(407)
		if ((::com::stencyl::Input_obj::rightMouseReleased)){
			HX_STACK_LINE(408)
			::com::stencyl::Input_obj::rightMouseReleased = false;
		}
		HX_STACK_LINE(412)
		if ((::com::stencyl::Input_obj::middleMousePressed)){
			HX_STACK_LINE(413)
			::com::stencyl::Input_obj::middleMousePressed = false;
		}
		HX_STACK_LINE(417)
		if ((::com::stencyl::Input_obj::middleMouseReleased)){
			HX_STACK_LINE(418)
			::com::stencyl::Input_obj::middleMouseReleased = false;
		}
		HX_STACK_LINE(422)
		::com::stencyl::Input_obj::mouseWheelDelta = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,update,(void))

Void Input_obj::simulateKeyPress( ::String key){
{
		HX_STACK_PUSH("Input::simulateKeyPress","com/stencyl/Input.hx",426);
		HX_STACK_ARG(key,"key");
		HX_STACK_LINE(427)
		int v = ::com::stencyl::Input_obj::_control->get(key)->__GetItem((int)0);		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(429)
		::com::stencyl::Input_obj::onKeyDown(::flash::events::KeyboardEvent_obj::__new(::flash::events::KeyboardEvent_obj::KEY_DOWN,true,true,v,v,null(),null(),null(),null(),null(),null()));
		HX_STACK_LINE(434)
		Dynamic listeners = ::com::stencyl::Engine_obj::engine->whenKeyPressedListeners->get(key);		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(436)
		if (((listeners != null()))){
			HX_STACK_LINE(438)
			Dynamic listeners1 = listeners;		HX_STACK_VAR(listeners1,"listeners1");
			HX_STACK_LINE(438)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(438)
			while(((r < listeners1->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(438)
				try{
					HX_STACK_LINE(438)
					Dynamic f = listeners1->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(438)
					f(true,false,listeners1).Cast< Void >();
					HX_STACK_LINE(438)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners1,f) == (int)-1))){
						HX_STACK_LINE(438)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(438)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4057,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners3")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(438)
				(r)++;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,simulateKeyPress,(void))

Void Input_obj::simulateKeyRelease( ::String key){
{
		HX_STACK_PUSH("Input::simulateKeyRelease","com/stencyl/Input.hx",443);
		HX_STACK_ARG(key,"key");
		HX_STACK_LINE(444)
		int v = ::com::stencyl::Input_obj::_control->get(key)->__GetItem((int)0);		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(446)
		::com::stencyl::Input_obj::onKeyUp(::flash::events::KeyboardEvent_obj::__new(::flash::events::KeyboardEvent_obj::KEY_UP,true,true,v,v,null(),null(),null(),null(),null(),null()));
		HX_STACK_LINE(451)
		Dynamic listeners = ::com::stencyl::Engine_obj::engine->whenKeyPressedListeners->get(key);		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(453)
		if (((listeners != null()))){
			HX_STACK_LINE(455)
			Dynamic listeners1 = listeners;		HX_STACK_VAR(listeners1,"listeners1");
			HX_STACK_LINE(455)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(455)
			while(((r < listeners1->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(455)
				try{
					HX_STACK_LINE(455)
					Dynamic f = listeners1->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(455)
					f(false,true,listeners1).Cast< Void >();
					HX_STACK_LINE(455)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners1,f) == (int)-1))){
						HX_STACK_LINE(455)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(455)
							::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Engine.hx"),4057,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners3")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(455)
				(r)++;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,simulateKeyRelease,(void))

Void Input_obj::onKeyDown( ::flash::events::KeyboardEvent e){
{
		HX_STACK_PUSH("Input::onKeyDown","com/stencyl/Input.hx",460);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(461)
		int code = ::com::stencyl::Input_obj::lastKey = e->keyCode;		HX_STACK_VAR(code,"code");
		HX_STACK_LINE(463)
		if (((code == (int)8))){
			HX_STACK_LINE(464)
			::com::stencyl::Input_obj::keyString = ::com::stencyl::Input_obj::keyString.substr((int)0,(::com::stencyl::Input_obj::keyString.length - (int)1));
		}
		else{
			HX_STACK_LINE(468)
			if (((bool((bool((bool((code > (int)47)) && bool((code < (int)58)))) || bool((bool((code > (int)64)) && bool((code < (int)91)))))) || bool((code == (int)32))))){
				HX_STACK_LINE(470)
				if (((::com::stencyl::Input_obj::keyString.length > (int)100))){
					HX_STACK_LINE(470)
					::com::stencyl::Input_obj::keyString = ::com::stencyl::Input_obj::keyString.substr((int)1,null());
				}
				HX_STACK_LINE(471)
				::String _char = ::String::fromCharCode(code);		HX_STACK_VAR(_char,"char");
				HX_STACK_LINE(476)
				hx::AddEq(::com::stencyl::Input_obj::keyString,_char);
			}
		}
		HX_STACK_LINE(479)
		if ((!(::com::stencyl::Input_obj::_key->__get(code)))){
			HX_STACK_LINE(481)
			::com::stencyl::Input_obj::_key[code] = true;
			HX_STACK_LINE(482)
			(::com::stencyl::Input_obj::_keyNum)++;
			HX_STACK_LINE(483)
			::com::stencyl::Input_obj::_press[(::com::stencyl::Input_obj::_pressNum)++] = code;
		}
		HX_STACK_LINE(486)
		{
			HX_STACK_LINE(486)
			Dynamic listeners = ::com::stencyl::Engine_obj::engine->whenAnyKeyPressedListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(486)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(486)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(486)
				try{
					HX_STACK_LINE(486)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(486)
					f(e,listeners).Cast< Void >();
					HX_STACK_LINE(486)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(486)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e1 = __e;{
							HX_STACK_LINE(486)
							::haxe::Log_obj::trace(e1,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(486)
				(r)++;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onKeyDown,(void))

Void Input_obj::onKeyUp( ::flash::events::KeyboardEvent e){
{
		HX_STACK_PUSH("Input::onKeyUp","com/stencyl/Input.hx",490);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(491)
		int code = e->keyCode;		HX_STACK_VAR(code,"code");
		HX_STACK_LINE(493)
		if ((::com::stencyl::Input_obj::_key->__get(code))){
			HX_STACK_LINE(495)
			::com::stencyl::Input_obj::_key[code] = false;
			HX_STACK_LINE(496)
			(::com::stencyl::Input_obj::_keyNum)--;
			HX_STACK_LINE(497)
			::com::stencyl::Input_obj::_release[(::com::stencyl::Input_obj::_releaseNum)++] = code;
		}
		HX_STACK_LINE(500)
		{
			HX_STACK_LINE(500)
			Dynamic listeners = ::com::stencyl::Engine_obj::engine->whenAnyKeyReleasedListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(500)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(500)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(500)
				try{
					HX_STACK_LINE(500)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(500)
					f(e,listeners).Cast< Void >();
					HX_STACK_LINE(500)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(500)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e1 = __e;{
							HX_STACK_LINE(500)
							::haxe::Log_obj::trace(e1,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(500)
				(r)++;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onKeyUp,(void))

Void Input_obj::onMouseDown( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("Input::onMouseDown","com/stencyl/Input.hx",504);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(508)
		::com::stencyl::Input_obj::mouseX = (Float(((::com::stencyl::Engine_obj::stage->get_mouseX() - ::com::stencyl::Engine_obj::screenOffsetX))) / Float(::com::stencyl::Engine_obj::screenScaleX));
		HX_STACK_LINE(509)
		::com::stencyl::Input_obj::mouseY = (Float(((::com::stencyl::Engine_obj::stage->get_mouseY() - ::com::stencyl::Engine_obj::screenOffsetY))) / Float(::com::stencyl::Engine_obj::screenScaleY));
		HX_STACK_LINE(512)
		if ((!(::com::stencyl::Input_obj::mouseDown))){
			HX_STACK_LINE(514)
			::com::stencyl::Input_obj::mouseDown = true;
			HX_STACK_LINE(515)
			::com::stencyl::Input_obj::mouseUp = false;
			HX_STACK_LINE(516)
			::com::stencyl::Input_obj::mousePressed = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onMouseDown,(void))

Void Input_obj::onMouseUp( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("Input::onMouseUp","com/stencyl/Input.hx",521);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(525)
		::com::stencyl::Input_obj::mouseX = (Float(((::com::stencyl::Engine_obj::stage->get_mouseX() - ::com::stencyl::Engine_obj::screenOffsetX))) / Float(::com::stencyl::Engine_obj::screenScaleX));
		HX_STACK_LINE(526)
		::com::stencyl::Input_obj::mouseY = (Float(((::com::stencyl::Engine_obj::stage->get_mouseY() - ::com::stencyl::Engine_obj::screenOffsetY))) / Float(::com::stencyl::Engine_obj::screenScaleY));
		HX_STACK_LINE(529)
		::com::stencyl::Input_obj::mouseDown = false;
		HX_STACK_LINE(530)
		::com::stencyl::Input_obj::mouseUp = true;
		HX_STACK_LINE(531)
		::com::stencyl::Input_obj::mouseReleased = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onMouseUp,(void))

Void Input_obj::onRightMouseDown( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("Input::onRightMouseDown","com/stencyl/Input.hx",535);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(535)
		if ((!(::com::stencyl::Input_obj::rightMouseDown))){
			HX_STACK_LINE(538)
			::com::stencyl::Input_obj::rightMouseDown = true;
			HX_STACK_LINE(539)
			::com::stencyl::Input_obj::rightMouseUp = false;
			HX_STACK_LINE(540)
			::com::stencyl::Input_obj::rightMousePressed = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onRightMouseDown,(void))

Void Input_obj::onRightMouseUp( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("Input::onRightMouseUp","com/stencyl/Input.hx",545);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(546)
		::com::stencyl::Input_obj::rightMouseDown = false;
		HX_STACK_LINE(547)
		::com::stencyl::Input_obj::rightMouseUp = true;
		HX_STACK_LINE(548)
		::com::stencyl::Input_obj::rightMouseReleased = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onRightMouseUp,(void))

Void Input_obj::onMiddleMouseDown( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("Input::onMiddleMouseDown","com/stencyl/Input.hx",552);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(552)
		if ((!(::com::stencyl::Input_obj::middleMouseDown))){
			HX_STACK_LINE(555)
			::com::stencyl::Input_obj::middleMouseDown = true;
			HX_STACK_LINE(556)
			::com::stencyl::Input_obj::middleMouseUp = false;
			HX_STACK_LINE(557)
			::com::stencyl::Input_obj::middleMousePressed = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onMiddleMouseDown,(void))

Void Input_obj::onMiddleMouseUp( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("Input::onMiddleMouseUp","com/stencyl/Input.hx",562);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(563)
		::com::stencyl::Input_obj::middleMouseDown = false;
		HX_STACK_LINE(564)
		::com::stencyl::Input_obj::middleMouseUp = true;
		HX_STACK_LINE(565)
		::com::stencyl::Input_obj::middleMouseReleased = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onMiddleMouseUp,(void))

Void Input_obj::onMouseWheel( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("Input::onMouseWheel","com/stencyl/Input.hx",569);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(570)
		::com::stencyl::Input_obj::mouseWheel = true;
		HX_STACK_LINE(571)
		::com::stencyl::Input_obj::mouseWheelDelta = e->delta;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onMouseWheel,(void))

Void Input_obj::onTouchBegin( ::flash::events::TouchEvent e){
{
		HX_STACK_PUSH("Input::onTouchBegin","com/stencyl/Input.hx",576);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(577)
		{
			HX_STACK_LINE(577)
			Dynamic listeners = ::com::stencyl::Engine_obj::engine->whenMTStartListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(577)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(577)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(577)
				try{
					HX_STACK_LINE(577)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(577)
					f(e,listeners).Cast< Void >();
					HX_STACK_LINE(577)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(577)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e1 = __e;{
							HX_STACK_LINE(577)
							::haxe::Log_obj::trace(e1,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(577)
				(r)++;
			}
		}
		HX_STACK_LINE(579)
		::com::stencyl::Input_obj::multiTouchPoints->set(::Std_obj::string(e->touchPointID),e);
		HX_STACK_LINE(580)
		(::com::stencyl::Input_obj::numTouches)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onTouchBegin,(void))

Void Input_obj::onTouchMove( ::flash::events::TouchEvent e){
{
		HX_STACK_PUSH("Input::onTouchMove","com/stencyl/Input.hx",584);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(585)
		{
			HX_STACK_LINE(585)
			Dynamic listeners = ::com::stencyl::Engine_obj::engine->whenMTDragListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(585)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(585)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(585)
				try{
					HX_STACK_LINE(585)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(585)
					f(e,listeners).Cast< Void >();
					HX_STACK_LINE(585)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(585)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e1 = __e;{
							HX_STACK_LINE(585)
							::haxe::Log_obj::trace(e1,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(585)
				(r)++;
			}
		}
		HX_STACK_LINE(587)
		::com::stencyl::Input_obj::multiTouchPoints->set(::Std_obj::string(e->touchPointID),e);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onTouchMove,(void))

Void Input_obj::onTouchEnd( ::flash::events::TouchEvent e){
{
		HX_STACK_PUSH("Input::onTouchEnd","com/stencyl/Input.hx",591);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(592)
		{
			HX_STACK_LINE(592)
			Dynamic listeners = ::com::stencyl::Engine_obj::engine->whenMTEndListeners;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(592)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(592)
			while(((r < listeners->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(592)
				try{
					HX_STACK_LINE(592)
					Dynamic f = listeners->__GetItem(r);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(592)
					f(e,listeners).Cast< Void >();
					HX_STACK_LINE(592)
					if (((::com::stencyl::utils::Utils_obj::indexOf(listeners,f) == (int)-1))){
						HX_STACK_LINE(592)
						(r)--;
					}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e1 = __e;{
							HX_STACK_LINE(592)
							::haxe::Log_obj::trace(e1,hx::SourceInfo(HX_CSTRING("Engine.hx"),4030,HX_CSTRING("com.stencyl.Engine"),HX_CSTRING("invokeListeners2")));
						}
					}
					else throw(__e);
				}
				HX_STACK_LINE(592)
				(r)++;
			}
		}
		HX_STACK_LINE(594)
		::com::stencyl::Input_obj::multiTouchPoints->remove(::Std_obj::string(e->touchPointID));
		HX_STACK_LINE(595)
		(::com::stencyl::Input_obj::numTouches)--;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onTouchEnd,(void))

int Input_obj::kKeyStringMax;

bool Input_obj::_enabled;

Array< bool > Input_obj::_key;

int Input_obj::_keyNum;

Array< int > Input_obj::_press;

int Input_obj::_pressNum;

Array< int > Input_obj::_release;

int Input_obj::_releaseNum;

::haxe::ds::StringMap Input_obj::_control;


Input_obj::Input_obj()
{
}

void Input_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Input);
	HX_MARK_END_CLASS();
}

void Input_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Input_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_key") ) { return _key; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { return check_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mouseX") ) { return mouseX; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return mouseY; }
		if (HX_FIELD_EQ(inName,"accelX") ) { return accelX; }
		if (HX_FIELD_EQ(inName,"accelY") ) { return accelY; }
		if (HX_FIELD_EQ(inName,"accelZ") ) { return accelZ; }
		if (HX_FIELD_EQ(inName,"define") ) { return define_dyn(); }
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_press") ) { return _press; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lastKey") ) { return lastKey; }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp; }
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"indexOf") ) { return indexOf_dyn(); }
		if (HX_FIELD_EQ(inName,"onSwipe") ) { return onSwipe_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		if (HX_FIELD_EQ(inName,"_keyNum") ) { return _keyNum; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"swipedUp") ) { return swipedUp; }
		if (HX_FIELD_EQ(inName,"released") ) { return released_dyn(); }
		if (HX_FIELD_EQ(inName,"_enabled") ) { return _enabled; }
		if (HX_FIELD_EQ(inName,"_release") ) { return _release; }
		if (HX_FIELD_EQ(inName,"_control") ) { return _control; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"keyString") ) { return keyString; }
		if (HX_FIELD_EQ(inName,"lastEvent") ) { return lastEvent; }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown; }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"_pressNum") ) { return _pressNum; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mouseWheel") ) { return mouseWheel; }
		if (HX_FIELD_EQ(inName,"numTouches") ) { return numTouches; }
		if (HX_FIELD_EQ(inName,"swipedDown") ) { return swipedDown; }
		if (HX_FIELD_EQ(inName,"swipedLeft") ) { return swipedLeft; }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"swipedRight") ) { return swipedRight; }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove_dyn(); }
		if (HX_FIELD_EQ(inName,"_releaseNum") ) { return _releaseNum; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mousePressed") ) { return mousePressed; }
		if (HX_FIELD_EQ(inName,"rightMouseUp") ) { return rightMouseUp; }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchBegin") ) { return onTouchBegin_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseReleased") ) { return mouseReleased; }
		if (HX_FIELD_EQ(inName,"middleMouseUp") ) { return middleMouseUp; }
		if (HX_FIELD_EQ(inName,"getControlMap") ) { return getControlMap_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rightMouseDown") ) { return rightMouseDown; }
		if (HX_FIELD_EQ(inName,"swipeDirection") ) { return swipeDirection; }
		if (HX_FIELD_EQ(inName,"onRightMouseUp") ) { return onRightMouseUp_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"middleMouseDown") ) { return middleMouseDown; }
		if (HX_FIELD_EQ(inName,"mouseWheelDelta") ) { return mouseWheelDelta; }
		if (HX_FIELD_EQ(inName,"onMiddleMouseUp") ) { return onMiddleMouseUp_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"multiTouchPoints") ) { return multiTouchPoints; }
		if (HX_FIELD_EQ(inName,"simulateKeyPress") ) { return simulateKeyPress_dyn(); }
		if (HX_FIELD_EQ(inName,"onRightMouseDown") ) { return onRightMouseDown_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"rightMousePressed") ) { return rightMousePressed; }
		if (HX_FIELD_EQ(inName,"multiTouchEnabled") ) { return multiTouchEnabled; }
		if (HX_FIELD_EQ(inName,"onMiddleMouseDown") ) { return onMiddleMouseDown_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"rightMouseReleased") ) { return rightMouseReleased; }
		if (HX_FIELD_EQ(inName,"middleMousePressed") ) { return middleMousePressed; }
		if (HX_FIELD_EQ(inName,"simulateKeyRelease") ) { return simulateKeyRelease_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"middleMouseReleased") ) { return middleMouseReleased; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"enableSwipeDetection") ) { return enableSwipeDetection_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"disableSwipeDetection") ) { return disableSwipeDetection_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Input_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_key") ) { _key=inValue.Cast< Array< bool > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"accelX") ) { accelX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"accelY") ) { accelY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"accelZ") ) { accelZ=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_press") ) { _press=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lastKey") ) { lastKey=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { mouseUp=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keyNum") ) { _keyNum=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"swipedUp") ) { swipedUp=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_enabled") ) { _enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_release") ) { _release=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_control") ) { _control=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"keyString") ) { keyString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastEvent") ) { lastEvent=inValue.Cast< ::flash::events::KeyboardEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { mouseDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pressNum") ) { _pressNum=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mouseWheel") ) { mouseWheel=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numTouches") ) { numTouches=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"swipedDown") ) { swipedDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"swipedLeft") ) { swipedLeft=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"swipedRight") ) { swipedRight=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_releaseNum") ) { _releaseNum=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mousePressed") ) { mousePressed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightMouseUp") ) { rightMouseUp=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseReleased") ) { mouseReleased=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"middleMouseUp") ) { middleMouseUp=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rightMouseDown") ) { rightMouseDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"swipeDirection") ) { swipeDirection=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"middleMouseDown") ) { middleMouseDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseWheelDelta") ) { mouseWheelDelta=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"multiTouchPoints") ) { multiTouchPoints=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"rightMousePressed") ) { rightMousePressed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"multiTouchEnabled") ) { multiTouchEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"rightMouseReleased") ) { rightMouseReleased=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"middleMousePressed") ) { middleMousePressed=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"middleMouseReleased") ) { middleMouseReleased=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Input_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("keyString"),
	HX_CSTRING("lastEvent"),
	HX_CSTRING("lastKey"),
	HX_CSTRING("mouseX"),
	HX_CSTRING("mouseY"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("mousePressed"),
	HX_CSTRING("mouseReleased"),
	HX_CSTRING("mouseWheel"),
	HX_CSTRING("rightMouseDown"),
	HX_CSTRING("rightMouseUp"),
	HX_CSTRING("rightMousePressed"),
	HX_CSTRING("rightMouseReleased"),
	HX_CSTRING("middleMouseDown"),
	HX_CSTRING("middleMouseUp"),
	HX_CSTRING("middleMousePressed"),
	HX_CSTRING("middleMouseReleased"),
	HX_CSTRING("mouseWheelDelta"),
	HX_CSTRING("accelX"),
	HX_CSTRING("accelY"),
	HX_CSTRING("accelZ"),
	HX_CSTRING("multiTouchEnabled"),
	HX_CSTRING("multiTouchPoints"),
	HX_CSTRING("numTouches"),
	HX_CSTRING("swipeDirection"),
	HX_CSTRING("swipedUp"),
	HX_CSTRING("swipedDown"),
	HX_CSTRING("swipedLeft"),
	HX_CSTRING("swipedRight"),
	HX_CSTRING("getControlMap"),
	HX_CSTRING("define"),
	HX_CSTRING("check"),
	HX_CSTRING("pressed"),
	HX_CSTRING("released"),
	HX_CSTRING("indexOf"),
	HX_CSTRING("enableSwipeDetection"),
	HX_CSTRING("disableSwipeDetection"),
	HX_CSTRING("enable"),
	HX_CSTRING("onSwipe"),
	HX_CSTRING("update"),
	HX_CSTRING("simulateKeyPress"),
	HX_CSTRING("simulateKeyRelease"),
	HX_CSTRING("onKeyDown"),
	HX_CSTRING("onKeyUp"),
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("onRightMouseDown"),
	HX_CSTRING("onRightMouseUp"),
	HX_CSTRING("onMiddleMouseDown"),
	HX_CSTRING("onMiddleMouseUp"),
	HX_CSTRING("onMouseWheel"),
	HX_CSTRING("onTouchBegin"),
	HX_CSTRING("onTouchMove"),
	HX_CSTRING("onTouchEnd"),
	HX_CSTRING("kKeyStringMax"),
	HX_CSTRING("_enabled"),
	HX_CSTRING("_key"),
	HX_CSTRING("_keyNum"),
	HX_CSTRING("_press"),
	HX_CSTRING("_pressNum"),
	HX_CSTRING("_release"),
	HX_CSTRING("_releaseNum"),
	HX_CSTRING("_control"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Input_obj::keyString,"keyString");
	HX_MARK_MEMBER_NAME(Input_obj::lastEvent,"lastEvent");
	HX_MARK_MEMBER_NAME(Input_obj::lastKey,"lastKey");
	HX_MARK_MEMBER_NAME(Input_obj::mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(Input_obj::mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(Input_obj::mouseDown,"mouseDown");
	HX_MARK_MEMBER_NAME(Input_obj::mouseUp,"mouseUp");
	HX_MARK_MEMBER_NAME(Input_obj::mousePressed,"mousePressed");
	HX_MARK_MEMBER_NAME(Input_obj::mouseReleased,"mouseReleased");
	HX_MARK_MEMBER_NAME(Input_obj::mouseWheel,"mouseWheel");
	HX_MARK_MEMBER_NAME(Input_obj::rightMouseDown,"rightMouseDown");
	HX_MARK_MEMBER_NAME(Input_obj::rightMouseUp,"rightMouseUp");
	HX_MARK_MEMBER_NAME(Input_obj::rightMousePressed,"rightMousePressed");
	HX_MARK_MEMBER_NAME(Input_obj::rightMouseReleased,"rightMouseReleased");
	HX_MARK_MEMBER_NAME(Input_obj::middleMouseDown,"middleMouseDown");
	HX_MARK_MEMBER_NAME(Input_obj::middleMouseUp,"middleMouseUp");
	HX_MARK_MEMBER_NAME(Input_obj::middleMousePressed,"middleMousePressed");
	HX_MARK_MEMBER_NAME(Input_obj::middleMouseReleased,"middleMouseReleased");
	HX_MARK_MEMBER_NAME(Input_obj::mouseWheelDelta,"mouseWheelDelta");
	HX_MARK_MEMBER_NAME(Input_obj::accelX,"accelX");
	HX_MARK_MEMBER_NAME(Input_obj::accelY,"accelY");
	HX_MARK_MEMBER_NAME(Input_obj::accelZ,"accelZ");
	HX_MARK_MEMBER_NAME(Input_obj::multiTouchEnabled,"multiTouchEnabled");
	HX_MARK_MEMBER_NAME(Input_obj::multiTouchPoints,"multiTouchPoints");
	HX_MARK_MEMBER_NAME(Input_obj::numTouches,"numTouches");
	HX_MARK_MEMBER_NAME(Input_obj::swipeDirection,"swipeDirection");
	HX_MARK_MEMBER_NAME(Input_obj::swipedUp,"swipedUp");
	HX_MARK_MEMBER_NAME(Input_obj::swipedDown,"swipedDown");
	HX_MARK_MEMBER_NAME(Input_obj::swipedLeft,"swipedLeft");
	HX_MARK_MEMBER_NAME(Input_obj::swipedRight,"swipedRight");
	HX_MARK_MEMBER_NAME(Input_obj::kKeyStringMax,"kKeyStringMax");
	HX_MARK_MEMBER_NAME(Input_obj::_enabled,"_enabled");
	HX_MARK_MEMBER_NAME(Input_obj::_key,"_key");
	HX_MARK_MEMBER_NAME(Input_obj::_keyNum,"_keyNum");
	HX_MARK_MEMBER_NAME(Input_obj::_press,"_press");
	HX_MARK_MEMBER_NAME(Input_obj::_pressNum,"_pressNum");
	HX_MARK_MEMBER_NAME(Input_obj::_release,"_release");
	HX_MARK_MEMBER_NAME(Input_obj::_releaseNum,"_releaseNum");
	HX_MARK_MEMBER_NAME(Input_obj::_control,"_control");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Input_obj::keyString,"keyString");
	HX_VISIT_MEMBER_NAME(Input_obj::lastEvent,"lastEvent");
	HX_VISIT_MEMBER_NAME(Input_obj::lastKey,"lastKey");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseX,"mouseX");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseY,"mouseY");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseDown,"mouseDown");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseUp,"mouseUp");
	HX_VISIT_MEMBER_NAME(Input_obj::mousePressed,"mousePressed");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseReleased,"mouseReleased");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseWheel,"mouseWheel");
	HX_VISIT_MEMBER_NAME(Input_obj::rightMouseDown,"rightMouseDown");
	HX_VISIT_MEMBER_NAME(Input_obj::rightMouseUp,"rightMouseUp");
	HX_VISIT_MEMBER_NAME(Input_obj::rightMousePressed,"rightMousePressed");
	HX_VISIT_MEMBER_NAME(Input_obj::rightMouseReleased,"rightMouseReleased");
	HX_VISIT_MEMBER_NAME(Input_obj::middleMouseDown,"middleMouseDown");
	HX_VISIT_MEMBER_NAME(Input_obj::middleMouseUp,"middleMouseUp");
	HX_VISIT_MEMBER_NAME(Input_obj::middleMousePressed,"middleMousePressed");
	HX_VISIT_MEMBER_NAME(Input_obj::middleMouseReleased,"middleMouseReleased");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseWheelDelta,"mouseWheelDelta");
	HX_VISIT_MEMBER_NAME(Input_obj::accelX,"accelX");
	HX_VISIT_MEMBER_NAME(Input_obj::accelY,"accelY");
	HX_VISIT_MEMBER_NAME(Input_obj::accelZ,"accelZ");
	HX_VISIT_MEMBER_NAME(Input_obj::multiTouchEnabled,"multiTouchEnabled");
	HX_VISIT_MEMBER_NAME(Input_obj::multiTouchPoints,"multiTouchPoints");
	HX_VISIT_MEMBER_NAME(Input_obj::numTouches,"numTouches");
	HX_VISIT_MEMBER_NAME(Input_obj::swipeDirection,"swipeDirection");
	HX_VISIT_MEMBER_NAME(Input_obj::swipedUp,"swipedUp");
	HX_VISIT_MEMBER_NAME(Input_obj::swipedDown,"swipedDown");
	HX_VISIT_MEMBER_NAME(Input_obj::swipedLeft,"swipedLeft");
	HX_VISIT_MEMBER_NAME(Input_obj::swipedRight,"swipedRight");
	HX_VISIT_MEMBER_NAME(Input_obj::kKeyStringMax,"kKeyStringMax");
	HX_VISIT_MEMBER_NAME(Input_obj::_enabled,"_enabled");
	HX_VISIT_MEMBER_NAME(Input_obj::_key,"_key");
	HX_VISIT_MEMBER_NAME(Input_obj::_keyNum,"_keyNum");
	HX_VISIT_MEMBER_NAME(Input_obj::_press,"_press");
	HX_VISIT_MEMBER_NAME(Input_obj::_pressNum,"_pressNum");
	HX_VISIT_MEMBER_NAME(Input_obj::_release,"_release");
	HX_VISIT_MEMBER_NAME(Input_obj::_releaseNum,"_releaseNum");
	HX_VISIT_MEMBER_NAME(Input_obj::_control,"_control");
};

Class Input_obj::__mClass;

void Input_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.Input"), hx::TCanCast< Input_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Input_obj::__boot()
{
	keyString= HX_CSTRING("");
	mouseX= (int)0;
	mouseY= (int)0;
	mouseWheelDelta= (int)0;
	kKeyStringMax= (int)100;
	_enabled= false;
	_key= Array_obj< bool >::__new();
	_keyNum= (int)0;
	_press= Array_obj< int >::__new();
	_pressNum= (int)0;
	_release= Array_obj< int >::__new();
	_releaseNum= (int)0;
	_control= ::haxe::ds::StringMap_obj::__new();
}

} // end namespace com
} // end namespace stencyl
