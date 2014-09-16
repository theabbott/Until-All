#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_AssetLoader
#include <com/stencyl/AssetLoader.h>
#endif
#ifndef INCLUDED_com_stencyl_Data
#include <com/stencyl/Data.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_Input
#include <com/stencyl/Input.h>
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
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flash_ui_Keyboard
#include <flash/ui/Keyboard.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_scripts_MyAssets
#include <scripts/MyAssets.h>
#endif
namespace scripts{

Void MyAssets_obj::__construct()
{
HX_STACK_PUSH("MyAssets::new","scripts/MyAssets.hx",49);
{
	HX_STACK_LINE(50)
	::com::stencyl::Input_obj::enable();
	HX_STACK_LINE(51)
	Array< ::Dynamic > label = Array_obj< ::Dynamic >::__new().Add(::flash::text::TextField_obj::__new());		HX_STACK_VAR(label,"label");
	HX_STACK_LINE(52)
	::flash::text::TextFormat fnt = ::flash::text::TextFormat_obj::__new(HX_CSTRING("Arial"),(int)12,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(fnt,"fnt");
	HX_STACK_LINE(53)
	fnt->color = (int)16777215;
	HX_STACK_LINE(54)
	label->__get((int)0).StaticCast< ::flash::text::TextField >()->set_defaultTextFormat(fnt);
	HX_STACK_LINE(55)
	label->__get((int)0).StaticCast< ::flash::text::TextField >()->set_text(HX_CSTRING("Stencyl - Trial Mode"));
	HX_STACK_LINE(56)
	label->__get((int)0).StaticCast< ::flash::text::TextField >()->set_background(true);
	HX_STACK_LINE(57)
	label->__get((int)0).StaticCast< ::flash::text::TextField >()->set_backgroundColor((int)3355443);
	HX_STACK_LINE(58)
	label->__get((int)0).StaticCast< ::flash::text::TextField >()->set_x((int)0);
	HX_STACK_LINE(59)
	label->__get((int)0).StaticCast< ::flash::text::TextField >()->set_y((int)0);
	HX_STACK_LINE(60)
	label->__get((int)0).StaticCast< ::flash::text::TextField >()->set_width((int)120);
	HX_STACK_LINE(61)
	label->__get((int)0).StaticCast< ::flash::text::TextField >()->set_height((int)20);

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,label)
	Void run(){
		HX_STACK_PUSH("*::_Function_1_1","scripts/MyAssets.hx",62);
		{
			HX_STACK_LINE(62)
			::com::stencyl::Engine_obj::engine->root->addChild(label->__get((int)0).StaticCast< ::flash::text::TextField >());
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_STACK_LINE(62)
	::motion::Actuate_obj::timer(0.1,null())->onComplete( Dynamic(new _Function_1_1(label)),null());
	HX_STACK_LINE(62)
	::com::stencyl::Input_obj::define(HX_CSTRING("up"),Array_obj< int >::__new().Add(::flash::ui::Keyboard_obj::UP));
	HX_STACK_LINE(63)
	::com::stencyl::Input_obj::define(HX_CSTRING("down"),Array_obj< int >::__new().Add(::flash::ui::Keyboard_obj::DOWN));
	HX_STACK_LINE(64)
	::com::stencyl::Input_obj::define(HX_CSTRING("left"),Array_obj< int >::__new().Add(::flash::ui::Keyboard_obj::LEFT));
	HX_STACK_LINE(65)
	::com::stencyl::Input_obj::define(HX_CSTRING("right"),Array_obj< int >::__new().Add(::flash::ui::Keyboard_obj::RIGHT));
	HX_STACK_LINE(66)
	::com::stencyl::Input_obj::define(HX_CSTRING("action1"),Array_obj< int >::__new().Add(::flash::ui::Keyboard_obj::Z));
	HX_STACK_LINE(67)
	::com::stencyl::Input_obj::define(HX_CSTRING("action2"),Array_obj< int >::__new().Add(::flash::ui::Keyboard_obj::X));
	HX_STACK_LINE(68)
	::com::stencyl::Input_obj::define(HX_CSTRING("enter"),Array_obj< int >::__new().Add(::flash::ui::Keyboard_obj::ENTER));
	HX_STACK_LINE(69)
	::com::stencyl::Input_obj::define(HX_CSTRING("w"),Array_obj< int >::__new().Add(::flash::ui::Keyboard_obj::W));
	HX_STACK_LINE(70)
	::com::stencyl::Input_obj::define(HX_CSTRING("a1"),Array_obj< int >::__new().Add(::flash::ui::Keyboard_obj::A));
	HX_STACK_LINE(71)
	::com::stencyl::Input_obj::define(HX_CSTRING("Key s"),Array_obj< int >::__new().Add(::flash::ui::Keyboard_obj::S));
	HX_STACK_LINE(72)
	::com::stencyl::Input_obj::define(HX_CSTRING("Key d"),Array_obj< int >::__new().Add(::flash::ui::Keyboard_obj::D));
}
;
	return null();
}

MyAssets_obj::~MyAssets_obj() { }

Dynamic MyAssets_obj::__CreateEmpty() { return  new MyAssets_obj; }
hx::ObjectPtr< MyAssets_obj > MyAssets_obj::__new()
{  hx::ObjectPtr< MyAssets_obj > result = new MyAssets_obj();
	result->__construct();
	return result;}

Dynamic MyAssets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MyAssets_obj > result = new MyAssets_obj();
	result->__construct();
	return result;}

hx::Object *MyAssets_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::stencyl::AssetLoader_obj)) return operator ::com::stencyl::AssetLoader_obj *();
	return super::__ToInterface(inType);
}

Void MyAssets_obj::loadScenes( ::haxe::ds::IntMap scenesXML){
{
		HX_STACK_PUSH("MyAssets::loadScenes","scripts/MyAssets.hx",177);
		HX_STACK_THIS(this);
		HX_STACK_ARG(scenesXML,"scenesXML");
		HX_STACK_LINE(178)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(179)
		Float increment = (Float(10.0) / Float(::Math_obj::max((int)1,(int)3)));		HX_STACK_VAR(increment,"increment");
		HX_STACK_LINE(181)
		scenesXML->set((int)1,HX_CSTRING("Level Select Screen"));
		HX_STACK_LINE(183)
		::com::stencyl::Data_obj::instance->updatePreloader(((int)90 + ::Std_obj::_int((increment * i))));
		HX_STACK_LINE(184)
		(i)++;
		HX_STACK_LINE(184)
		scenesXML->set((int)2,HX_CSTRING("1"));
		HX_STACK_LINE(186)
		::com::stencyl::Data_obj::instance->updatePreloader(((int)90 + ::Std_obj::_int((increment * i))));
		HX_STACK_LINE(187)
		(i)++;
		HX_STACK_LINE(187)
		scenesXML->set((int)3,HX_CSTRING("Titler"));
		HX_STACK_LINE(189)
		::com::stencyl::Data_obj::instance->updatePreloader(((int)90 + ::Std_obj::_int((increment * i))));
		HX_STACK_LINE(190)
		(i)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MyAssets_obj,loadScenes,(void))

Void MyAssets_obj::loadResources( ::haxe::ds::StringMap resourceMap){
{
		HX_STACK_PUSH("MyAssets::loadResources","scripts/MyAssets.hx",77);
		HX_STACK_THIS(this);
		HX_STACK_ARG(resourceMap,"resourceMap");
		HX_STACK_LINE(78)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(79)
		Float increment = (Float(50.0) / Float(::Math_obj::max((int)1,(int)106)));		HX_STACK_VAR(increment,"increment");
		HX_STACK_LINE(82)
		resourceMap->set(HX_CSTRING("1-0.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-1-0.png")),false));
		HX_STACK_LINE(83)
		resourceMap->set(HX_CSTRING("1-1.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-1-1.png")),false));
		HX_STACK_LINE(84)
		resourceMap->set(HX_CSTRING("1-2.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-1-2.png")),false));
		HX_STACK_LINE(85)
		resourceMap->set(HX_CSTRING("1-3.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-1-3.png")),false));
		HX_STACK_LINE(86)
		resourceMap->set(HX_CSTRING("1-4.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-1-4.png")),false));
		HX_STACK_LINE(87)
		resourceMap->set(HX_CSTRING("1-5.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-1-5.png")),false));
		HX_STACK_LINE(88)
		resourceMap->set(HX_CSTRING("1-6.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-1-6.png")),false));
		HX_STACK_LINE(89)
		resourceMap->set(HX_CSTRING("1-7.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-1-7.png")),false));
		HX_STACK_LINE(90)
		resourceMap->set(HX_CSTRING("1-8.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-1-8.png")),false));
		HX_STACK_LINE(91)
		resourceMap->set(HX_CSTRING("1-9.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-1-9.png")),false));
		HX_STACK_LINE(92)
		resourceMap->set(HX_CSTRING("1-10.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-1-10.png")),false));
		HX_STACK_LINE(93)
		resourceMap->set(HX_CSTRING("1-11.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-1-11.png")),false));
		HX_STACK_LINE(94)
		resourceMap->set(HX_CSTRING("1-12.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-1-12.png")),false));
		HX_STACK_LINE(95)
		resourceMap->set(HX_CSTRING("1-13.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-1-13.png")),false));
		HX_STACK_LINE(96)
		resourceMap->set(HX_CSTRING("1-14.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-1-14.png")),false));
		HX_STACK_LINE(97)
		resourceMap->set(HX_CSTRING("1-15.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-1-15.png")),false));
		HX_STACK_LINE(98)
		resourceMap->set(HX_CSTRING("1-17.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-1-17.png")),false));
		HX_STACK_LINE(99)
		resourceMap->set(HX_CSTRING("1-16.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-1-16.png")),false));
		HX_STACK_LINE(100)
		::com::stencyl::Data_obj::instance->updatePreloader(((int)15 + ::Std_obj::_int((increment * i))));
		HX_STACK_LINE(101)
		(i)++;
		HX_STACK_LINE(102)
		resourceMap->set(HX_CSTRING("3-0.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-3-0.png")),false));
		HX_STACK_LINE(103)
		::com::stencyl::Data_obj::instance->updatePreloader(((int)15 + ::Std_obj::_int((increment * i))));
		HX_STACK_LINE(104)
		(i)++;
		HX_STACK_LINE(105)
		resourceMap->set(HX_CSTRING("15-0.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-15-0.png")),false));
		HX_STACK_LINE(106)
		::com::stencyl::Data_obj::instance->updatePreloader(((int)15 + ::Std_obj::_int((increment * i))));
		HX_STACK_LINE(107)
		(i)++;
		HX_STACK_LINE(108)
		resourceMap->set(HX_CSTRING("36.fnt"),::openfl::Assets_obj::getText(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/font-36.fnt"))));
		HX_STACK_LINE(109)
		resourceMap->set(HX_CSTRING("36.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/font-36.png")),false));
		HX_STACK_LINE(110)
		::com::stencyl::Data_obj::instance->updatePreloader(((int)15 + ::Std_obj::_int((increment * i))));
		HX_STACK_LINE(111)
		(i)++;
		HX_STACK_LINE(112)
		resourceMap->set(HX_CSTRING("55.fnt"),::openfl::Assets_obj::getText(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/font-55.fnt"))));
		HX_STACK_LINE(113)
		resourceMap->set(HX_CSTRING("55.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/font-55.png")),false));
		HX_STACK_LINE(114)
		::com::stencyl::Data_obj::instance->updatePreloader(((int)15 + ::Std_obj::_int((increment * i))));
		HX_STACK_LINE(115)
		(i)++;
		HX_STACK_LINE(116)
		resourceMap->set(HX_CSTRING("54.fnt"),::openfl::Assets_obj::getText(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/font-54.fnt"))));
		HX_STACK_LINE(117)
		resourceMap->set(HX_CSTRING("54.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/font-54.png")),false));
		HX_STACK_LINE(118)
		::com::stencyl::Data_obj::instance->updatePreloader(((int)15 + ::Std_obj::_int((increment * i))));
		HX_STACK_LINE(119)
		(i)++;
		HX_STACK_LINE(120)
		resourceMap->set(HX_CSTRING("59-0.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-59-0.png")),false));
		HX_STACK_LINE(121)
		resourceMap->set(HX_CSTRING("59-1.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-59-1.png")),false));
		HX_STACK_LINE(122)
		resourceMap->set(HX_CSTRING("59-2.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-59-2.png")),false));
		HX_STACK_LINE(123)
		resourceMap->set(HX_CSTRING("59-3.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-59-3.png")),false));
		HX_STACK_LINE(124)
		resourceMap->set(HX_CSTRING("59-4.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-59-4.png")),false));
		HX_STACK_LINE(125)
		resourceMap->set(HX_CSTRING("59-5.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-59-5.png")),false));
		HX_STACK_LINE(126)
		::com::stencyl::Data_obj::instance->updatePreloader(((int)15 + ::Std_obj::_int((increment * i))));
		HX_STACK_LINE(127)
		(i)++;
		HX_STACK_LINE(128)
		resourceMap->set(HX_CSTRING("66-0.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-66-0.png")),false));
		HX_STACK_LINE(129)
		::com::stencyl::Data_obj::instance->updatePreloader(((int)15 + ::Std_obj::_int((increment * i))));
		HX_STACK_LINE(130)
		(i)++;
		HX_STACK_LINE(131)
		resourceMap->set(HX_CSTRING("86-0.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-86-0.png")),false));
		HX_STACK_LINE(132)
		::com::stencyl::Data_obj::instance->updatePreloader(((int)15 + ::Std_obj::_int((increment * i))));
		HX_STACK_LINE(133)
		(i)++;
		HX_STACK_LINE(134)
		resourceMap->set(HX_CSTRING("102-0.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-102-0.png")),false));
		HX_STACK_LINE(135)
		::com::stencyl::Data_obj::instance->updatePreloader(((int)15 + ::Std_obj::_int((increment * i))));
		HX_STACK_LINE(136)
		(i)++;
		HX_STACK_LINE(137)
		resourceMap->set(HX_CSTRING("100-0.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/background-100-0.png")),false));
		HX_STACK_LINE(138)
		::com::stencyl::Data_obj::instance->updatePreloader(((int)15 + ::Std_obj::_int((increment * i))));
		HX_STACK_LINE(139)
		(i)++;
		HX_STACK_LINE(140)
		resourceMap->set(HX_CSTRING("98-0.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-98-0.png")),false));
		HX_STACK_LINE(141)
		::com::stencyl::Data_obj::instance->updatePreloader(((int)15 + ::Std_obj::_int((increment * i))));
		HX_STACK_LINE(142)
		(i)++;
		HX_STACK_LINE(143)
		resourceMap->set(HX_CSTRING("99-0.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/background-99-0.png")),false));
		HX_STACK_LINE(144)
		::com::stencyl::Data_obj::instance->updatePreloader(((int)15 + ::Std_obj::_int((increment * i))));
		HX_STACK_LINE(145)
		(i)++;
		HX_STACK_LINE(146)
		resourceMap->set(HX_CSTRING("96-0.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-96-0.png")),false));
		HX_STACK_LINE(147)
		::com::stencyl::Data_obj::instance->updatePreloader(((int)15 + ::Std_obj::_int((increment * i))));
		HX_STACK_LINE(148)
		(i)++;
		HX_STACK_LINE(149)
		resourceMap->set(HX_CSTRING("106-0.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-106-0.png")),false));
		HX_STACK_LINE(150)
		resourceMap->set(HX_CSTRING("106-1.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-106-1.png")),false));
		HX_STACK_LINE(151)
		::com::stencyl::Data_obj::instance->updatePreloader(((int)15 + ::Std_obj::_int((increment * i))));
		HX_STACK_LINE(152)
		(i)++;
		HX_STACK_LINE(153)
		resourceMap->set(HX_CSTRING("104-0.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-104-0.png")),false));
		HX_STACK_LINE(154)
		::com::stencyl::Data_obj::instance->updatePreloader(((int)15 + ::Std_obj::_int((increment * i))));
		HX_STACK_LINE(155)
		(i)++;
		HX_STACK_LINE(156)
		resourceMap->set(HX_CSTRING("126-0.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-126-0.png")),false));
		HX_STACK_LINE(157)
		::com::stencyl::Data_obj::instance->updatePreloader(((int)15 + ::Std_obj::_int((increment * i))));
		HX_STACK_LINE(158)
		(i)++;
		HX_STACK_LINE(159)
		resourceMap->set(HX_CSTRING("122-0.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-122-0.png")),false));
		HX_STACK_LINE(160)
		::com::stencyl::Data_obj::instance->updatePreloader(((int)15 + ::Std_obj::_int((increment * i))));
		HX_STACK_LINE(161)
		(i)++;
		HX_STACK_LINE(162)
		resourceMap->set(HX_CSTRING("120-0.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-120-0.png")),false));
		HX_STACK_LINE(163)
		::com::stencyl::Data_obj::instance->updatePreloader(((int)15 + ::Std_obj::_int((increment * i))));
		HX_STACK_LINE(164)
		(i)++;
		HX_STACK_LINE(165)
		resourceMap->set(HX_CSTRING("129-0.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/background-129-0.png")),false));
		HX_STACK_LINE(166)
		::com::stencyl::Data_obj::instance->updatePreloader(((int)15 + ::Std_obj::_int((increment * i))));
		HX_STACK_LINE(167)
		(i)++;
		HX_STACK_LINE(168)
		resourceMap->set(HX_CSTRING("128-0.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-128-0.png")),false));
		HX_STACK_LINE(169)
		::com::stencyl::Data_obj::instance->updatePreloader(((int)15 + ::Std_obj::_int((increment * i))));
		HX_STACK_LINE(170)
		(i)++;
		HX_STACK_LINE(171)
		resourceMap->set(HX_CSTRING("131-0.png"),::openfl::Assets_obj::getBitmapData(((HX_CSTRING("assets/graphics/") + ::com::stencyl::Engine_obj::IMG_BASE) + HX_CSTRING("/sprite-131-0.png")),false));
		HX_STACK_LINE(172)
		::com::stencyl::Data_obj::instance->updatePreloader(((int)15 + ::Std_obj::_int((increment * i))));
		HX_STACK_LINE(173)
		(i)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MyAssets_obj,loadResources,(void))

bool MyAssets_obj::landscape;

bool MyAssets_obj::autorotate;

bool MyAssets_obj::stretchToFit;

bool MyAssets_obj::scaleToFit1;

bool MyAssets_obj::scaleToFit2;

bool MyAssets_obj::scaleToFit3;

int MyAssets_obj::stageWidth;

int MyAssets_obj::stageHeight;

int MyAssets_obj::initSceneID;

int MyAssets_obj::physicsMode;

Float MyAssets_obj::gameScale;

::String MyAssets_obj::gameImageBase;

bool MyAssets_obj::antialias;

bool MyAssets_obj::startInFullScreen;

int MyAssets_obj::scaleMode;

bool MyAssets_obj::adPositionBottom;

::String MyAssets_obj::whirlID;

::String MyAssets_obj::mochiID;

::String MyAssets_obj::cpmstarID;

::String MyAssets_obj::newgroundsID;

::String MyAssets_obj::newgroundsKey;

bool MyAssets_obj::releaseMode;

bool MyAssets_obj::showConsole;

bool MyAssets_obj::debugDraw;

bool MyAssets_obj::always1x;

Float MyAssets_obj::maxScale;

bool MyAssets_obj::disableBackButton;

::String MyAssets_obj::androidPublicKey;


MyAssets_obj::MyAssets_obj()
{
}

void MyAssets_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MyAssets);
	HX_MARK_END_CLASS();
}

void MyAssets_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic MyAssets_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"whirlID") ) { return whirlID; }
		if (HX_FIELD_EQ(inName,"mochiID") ) { return mochiID; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"always1x") ) { return always1x; }
		if (HX_FIELD_EQ(inName,"maxScale") ) { return maxScale; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"landscape") ) { return landscape; }
		if (HX_FIELD_EQ(inName,"gameScale") ) { return gameScale; }
		if (HX_FIELD_EQ(inName,"antialias") ) { return antialias; }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { return scaleMode; }
		if (HX_FIELD_EQ(inName,"cpmstarID") ) { return cpmstarID; }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autorotate") ) { return autorotate; }
		if (HX_FIELD_EQ(inName,"stageWidth") ) { return stageWidth; }
		if (HX_FIELD_EQ(inName,"loadScenes") ) { return loadScenes_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scaleToFit1") ) { return scaleToFit1; }
		if (HX_FIELD_EQ(inName,"scaleToFit2") ) { return scaleToFit2; }
		if (HX_FIELD_EQ(inName,"scaleToFit3") ) { return scaleToFit3; }
		if (HX_FIELD_EQ(inName,"stageHeight") ) { return stageHeight; }
		if (HX_FIELD_EQ(inName,"initSceneID") ) { return initSceneID; }
		if (HX_FIELD_EQ(inName,"physicsMode") ) { return physicsMode; }
		if (HX_FIELD_EQ(inName,"releaseMode") ) { return releaseMode; }
		if (HX_FIELD_EQ(inName,"showConsole") ) { return showConsole; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stretchToFit") ) { return stretchToFit; }
		if (HX_FIELD_EQ(inName,"newgroundsID") ) { return newgroundsID; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gameImageBase") ) { return gameImageBase; }
		if (HX_FIELD_EQ(inName,"newgroundsKey") ) { return newgroundsKey; }
		if (HX_FIELD_EQ(inName,"loadResources") ) { return loadResources_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"adPositionBottom") ) { return adPositionBottom; }
		if (HX_FIELD_EQ(inName,"androidPublicKey") ) { return androidPublicKey; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"startInFullScreen") ) { return startInFullScreen; }
		if (HX_FIELD_EQ(inName,"disableBackButton") ) { return disableBackButton; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MyAssets_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"whirlID") ) { whirlID=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mochiID") ) { mochiID=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"always1x") ) { always1x=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScale") ) { maxScale=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"landscape") ) { landscape=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gameScale") ) { gameScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"antialias") ) { antialias=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { scaleMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cpmstarID") ) { cpmstarID=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { debugDraw=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autorotate") ) { autorotate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageWidth") ) { stageWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scaleToFit1") ) { scaleToFit1=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleToFit2") ) { scaleToFit2=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleToFit3") ) { scaleToFit3=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageHeight") ) { stageHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initSceneID") ) { initSceneID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"physicsMode") ) { physicsMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"releaseMode") ) { releaseMode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"showConsole") ) { showConsole=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stretchToFit") ) { stretchToFit=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"newgroundsID") ) { newgroundsID=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gameImageBase") ) { gameImageBase=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"newgroundsKey") ) { newgroundsKey=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"adPositionBottom") ) { adPositionBottom=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"androidPublicKey") ) { androidPublicKey=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"startInFullScreen") ) { startInFullScreen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"disableBackButton") ) { disableBackButton=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MyAssets_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("landscape"),
	HX_CSTRING("autorotate"),
	HX_CSTRING("stretchToFit"),
	HX_CSTRING("scaleToFit1"),
	HX_CSTRING("scaleToFit2"),
	HX_CSTRING("scaleToFit3"),
	HX_CSTRING("stageWidth"),
	HX_CSTRING("stageHeight"),
	HX_CSTRING("initSceneID"),
	HX_CSTRING("physicsMode"),
	HX_CSTRING("gameScale"),
	HX_CSTRING("gameImageBase"),
	HX_CSTRING("antialias"),
	HX_CSTRING("startInFullScreen"),
	HX_CSTRING("scaleMode"),
	HX_CSTRING("adPositionBottom"),
	HX_CSTRING("whirlID"),
	HX_CSTRING("mochiID"),
	HX_CSTRING("cpmstarID"),
	HX_CSTRING("newgroundsID"),
	HX_CSTRING("newgroundsKey"),
	HX_CSTRING("releaseMode"),
	HX_CSTRING("showConsole"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("always1x"),
	HX_CSTRING("maxScale"),
	HX_CSTRING("disableBackButton"),
	HX_CSTRING("androidPublicKey"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("loadScenes"),
	HX_CSTRING("loadResources"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MyAssets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MyAssets_obj::landscape,"landscape");
	HX_MARK_MEMBER_NAME(MyAssets_obj::autorotate,"autorotate");
	HX_MARK_MEMBER_NAME(MyAssets_obj::stretchToFit,"stretchToFit");
	HX_MARK_MEMBER_NAME(MyAssets_obj::scaleToFit1,"scaleToFit1");
	HX_MARK_MEMBER_NAME(MyAssets_obj::scaleToFit2,"scaleToFit2");
	HX_MARK_MEMBER_NAME(MyAssets_obj::scaleToFit3,"scaleToFit3");
	HX_MARK_MEMBER_NAME(MyAssets_obj::stageWidth,"stageWidth");
	HX_MARK_MEMBER_NAME(MyAssets_obj::stageHeight,"stageHeight");
	HX_MARK_MEMBER_NAME(MyAssets_obj::initSceneID,"initSceneID");
	HX_MARK_MEMBER_NAME(MyAssets_obj::physicsMode,"physicsMode");
	HX_MARK_MEMBER_NAME(MyAssets_obj::gameScale,"gameScale");
	HX_MARK_MEMBER_NAME(MyAssets_obj::gameImageBase,"gameImageBase");
	HX_MARK_MEMBER_NAME(MyAssets_obj::antialias,"antialias");
	HX_MARK_MEMBER_NAME(MyAssets_obj::startInFullScreen,"startInFullScreen");
	HX_MARK_MEMBER_NAME(MyAssets_obj::scaleMode,"scaleMode");
	HX_MARK_MEMBER_NAME(MyAssets_obj::adPositionBottom,"adPositionBottom");
	HX_MARK_MEMBER_NAME(MyAssets_obj::whirlID,"whirlID");
	HX_MARK_MEMBER_NAME(MyAssets_obj::mochiID,"mochiID");
	HX_MARK_MEMBER_NAME(MyAssets_obj::cpmstarID,"cpmstarID");
	HX_MARK_MEMBER_NAME(MyAssets_obj::newgroundsID,"newgroundsID");
	HX_MARK_MEMBER_NAME(MyAssets_obj::newgroundsKey,"newgroundsKey");
	HX_MARK_MEMBER_NAME(MyAssets_obj::releaseMode,"releaseMode");
	HX_MARK_MEMBER_NAME(MyAssets_obj::showConsole,"showConsole");
	HX_MARK_MEMBER_NAME(MyAssets_obj::debugDraw,"debugDraw");
	HX_MARK_MEMBER_NAME(MyAssets_obj::always1x,"always1x");
	HX_MARK_MEMBER_NAME(MyAssets_obj::maxScale,"maxScale");
	HX_MARK_MEMBER_NAME(MyAssets_obj::disableBackButton,"disableBackButton");
	HX_MARK_MEMBER_NAME(MyAssets_obj::androidPublicKey,"androidPublicKey");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MyAssets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::landscape,"landscape");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::autorotate,"autorotate");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::stretchToFit,"stretchToFit");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::scaleToFit1,"scaleToFit1");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::scaleToFit2,"scaleToFit2");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::scaleToFit3,"scaleToFit3");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::stageWidth,"stageWidth");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::stageHeight,"stageHeight");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::initSceneID,"initSceneID");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::physicsMode,"physicsMode");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::gameScale,"gameScale");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::gameImageBase,"gameImageBase");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::antialias,"antialias");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::startInFullScreen,"startInFullScreen");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::scaleMode,"scaleMode");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::adPositionBottom,"adPositionBottom");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::whirlID,"whirlID");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::mochiID,"mochiID");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::cpmstarID,"cpmstarID");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::newgroundsID,"newgroundsID");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::newgroundsKey,"newgroundsKey");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::releaseMode,"releaseMode");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::showConsole,"showConsole");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::debugDraw,"debugDraw");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::always1x,"always1x");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::maxScale,"maxScale");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::disableBackButton,"disableBackButton");
	HX_VISIT_MEMBER_NAME(MyAssets_obj::androidPublicKey,"androidPublicKey");
};

Class MyAssets_obj::__mClass;

void MyAssets_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scripts.MyAssets"), hx::TCanCast< MyAssets_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MyAssets_obj::__boot()
{
	landscape= false;
	autorotate= true;
	stretchToFit= false;
	scaleToFit1= false;
	scaleToFit2= false;
	scaleToFit3= true;
	stageWidth= (int)320;
	stageHeight= (int)480;
	initSceneID= (int)3;
	physicsMode= (int)0;
	gameScale= (int)1;
	gameImageBase= HX_CSTRING("1x");
	antialias= true;
	startInFullScreen= false;
	scaleMode= (int)0;
	adPositionBottom= true;
	whirlID= HX_CSTRING("");
	mochiID= HX_CSTRING("");
	cpmstarID= HX_CSTRING("");
	newgroundsID= HX_CSTRING("");
	newgroundsKey= HX_CSTRING("");
	releaseMode= false;
	showConsole= false;
	debugDraw= false;
	always1x= false;
	maxScale= 4.0;
	disableBackButton= true;
	androidPublicKey= HX_CSTRING("");
}

} // end namespace scripts
