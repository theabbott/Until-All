#include <hxcpp.h>

#ifndef INCLUDED_Ads
#include <Ads.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Universal
#include <Universal.h>
#endif
#ifndef INCLUDED_com_stencyl_AssetLoader
#include <com/stencyl/AssetLoader.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
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
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_display_StageAlign
#include <flash/display/StageAlign.h>
#endif
#ifndef INCLUDED_flash_display_StageDisplayState
#include <flash/display/StageDisplayState.h>
#endif
#ifndef INCLUDED_flash_display_StageScaleMode
#include <flash/display/StageScaleMode.h>
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
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_system_Capabilities
#include <flash/system/Capabilities.h>
#endif
#ifndef INCLUDED_flash_system_System
#include <flash/system/System.h>
#endif
#ifndef INCLUDED_flash_ui_Keyboard
#include <flash/ui/Keyboard.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_scripts_MyAssets
#include <scripts/MyAssets.h>
#endif

Void Universal_obj::__construct()
{
HX_STACK_PUSH("Universal::new","Universal.hx",17);
{
	HX_STACK_LINE(18)
	super::__construct();
	HX_STACK_LINE(31)
	this->addEventListener(::flash::events::Event_obj::ADDED_TO_STAGE,this->onAdded_dyn(),null(),null(),null());
}
;
	return null();
}

Universal_obj::~Universal_obj() { }

Dynamic Universal_obj::__CreateEmpty() { return  new Universal_obj; }
hx::ObjectPtr< Universal_obj > Universal_obj::__new()
{  hx::ObjectPtr< Universal_obj > result = new Universal_obj();
	result->__construct();
	return result;}

Dynamic Universal_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Universal_obj > result = new Universal_obj();
	result->__construct();
	return result;}

Void Universal_obj::initScreen( hx::Null< bool >  __o_isFullScreen){
bool isFullScreen = __o_isFullScreen.Default(false);
	HX_STACK_PUSH("Universal::initScreen","Universal.hx",96);
	HX_STACK_THIS(this);
	HX_STACK_ARG(isFullScreen,"isFullScreen");
{
		HX_STACK_LINE(97)
		::com::stencyl::Engine_obj::stage = ::flash::Lib_obj::get_current()->get_stage();
		HX_STACK_LINE(99)
		bool skipScaling = false;		HX_STACK_VAR(skipScaling,"skipScaling");
		HX_STACK_LINE(100)
		int stageWidth = this->get_stage()->get_stageWidth();		HX_STACK_VAR(stageWidth,"stageWidth");
		HX_STACK_LINE(101)
		int stageHeight = this->get_stage()->get_stageHeight();		HX_STACK_VAR(stageHeight,"stageHeight");
		HX_STACK_LINE(151)
		stageWidth = ::Std_obj::_int(::flash::system::Capabilities_obj::get_screenResolutionX());
		HX_STACK_LINE(152)
		stageHeight = ::Std_obj::_int(::flash::system::Capabilities_obj::get_screenResolutionY());
		HX_STACK_LINE(154)
		if (((bool((stageWidth < stageHeight)) && bool(::scripts::MyAssets_obj::landscape)))){
			HX_STACK_LINE(156)
			int temp = stageHeight;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(157)
			stageHeight = stageWidth;
			HX_STACK_LINE(158)
			stageWidth = temp;
		}
		HX_STACK_LINE(162)
		::haxe::Log_obj::trace((HX_CSTRING("Stage Width: ") + ::scripts::MyAssets_obj::stageWidth),hx::SourceInfo(HX_CSTRING("Universal.hx"),162,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
		HX_STACK_LINE(163)
		::haxe::Log_obj::trace((HX_CSTRING("Stage Height: ") + ::scripts::MyAssets_obj::stageHeight),hx::SourceInfo(HX_CSTRING("Universal.hx"),163,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
		HX_STACK_LINE(164)
		::haxe::Log_obj::trace((HX_CSTRING("Screen Width: ") + stageWidth),hx::SourceInfo(HX_CSTRING("Universal.hx"),164,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
		HX_STACK_LINE(165)
		::haxe::Log_obj::trace((HX_CSTRING("Screen Height: ") + stageHeight),hx::SourceInfo(HX_CSTRING("Universal.hx"),165,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
		HX_STACK_LINE(166)
		::haxe::Log_obj::trace((HX_CSTRING("Screen DPI: ") + ::flash::system::Capabilities_obj::get_screenDPI()),hx::SourceInfo(HX_CSTRING("Universal.hx"),166,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
		HX_STACK_LINE(172)
		Float theoreticalScale = (int)0;		HX_STACK_VAR(theoreticalScale,"theoreticalScale");
		HX_STACK_LINE(173)
		bool widescreen = false;		HX_STACK_VAR(widescreen,"widescreen");
		HX_STACK_LINE(175)
		if ((!(skipScaling))){
			HX_STACK_LINE(177)
			Float larger = ::Math_obj::max(stageWidth,stageHeight);		HX_STACK_VAR(larger,"larger");
			HX_STACK_LINE(178)
			Float smaller = ::Math_obj::min(stageWidth,stageHeight);		HX_STACK_VAR(smaller,"smaller");
			HX_STACK_LINE(179)
			Float aspectRatio = (Float(larger) / Float(smaller));		HX_STACK_VAR(aspectRatio,"aspectRatio");
			HX_STACK_LINE(180)
			widescreen = (aspectRatio > 1.5);
			HX_STACK_LINE(183)
			if ((widescreen)){
				HX_STACK_LINE(185)
				if ((::scripts::MyAssets_obj::scaleToFit1)){
					HX_STACK_LINE(187)
					::scripts::MyAssets_obj::scaleToFit1 = false;
					HX_STACK_LINE(188)
					::scripts::MyAssets_obj::scaleToFit2 = true;
				}
				else{
					HX_STACK_LINE(191)
					if ((::scripts::MyAssets_obj::scaleToFit2)){
						HX_STACK_LINE(193)
						::scripts::MyAssets_obj::scaleToFit1 = true;
						HX_STACK_LINE(194)
						::scripts::MyAssets_obj::scaleToFit2 = false;
					}
				}
				HX_STACK_LINE(197)
				::haxe::Log_obj::trace(HX_CSTRING("Widescreen (Aspect Ratio > 1.5)"),hx::SourceInfo(HX_CSTRING("Universal.hx"),197,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
			}
			HX_STACK_LINE(200)
			if (((bool((smaller == (int)320)) && bool((larger == (int)480))))){
				HX_STACK_LINE(201)
				::com::stencyl::Engine_obj::isStandardIOS = true;
			}
			else{
				HX_STACK_LINE(205)
				if (((bool((smaller == (int)640)) && bool((larger == (int)960))))){
					HX_STACK_LINE(206)
					::com::stencyl::Engine_obj::isStandardIOS = true;
				}
				else{
					HX_STACK_LINE(210)
					if (((bool((smaller == (int)640)) && bool((larger == (int)1136))))){
						HX_STACK_LINE(211)
						::com::stencyl::Engine_obj::isExtendedIOS = true;
					}
					else{
						HX_STACK_LINE(215)
						if (((bool((smaller == (int)768)) && bool((larger == (int)1024))))){
							HX_STACK_LINE(216)
							::com::stencyl::Engine_obj::isTabletIOS = true;
						}
						else{
							HX_STACK_LINE(220)
							if (((bool((smaller == (int)1536)) && bool((larger == (int)2048))))){
								HX_STACK_LINE(221)
								::com::stencyl::Engine_obj::isTabletIOS = true;
							}
						}
					}
				}
			}
			HX_STACK_LINE(226)
			int x1 = ::scripts::MyAssets_obj::stageWidth;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(227)
			int y1 = ::scripts::MyAssets_obj::stageHeight;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(231)
			if (((bool((x1 == (int)-1)) || bool((y1 == (int)-1))))){
				HX_STACK_LINE(233)
				x1 = (int)480;
				HX_STACK_LINE(234)
				y1 = (int)320;
			}
			else{
				HX_STACK_LINE(237)
				if ((!(::scripts::MyAssets_obj::landscape))){
					HX_STACK_LINE(239)
					int temp = x1;		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(240)
					x1 = y1;
					HX_STACK_LINE(241)
					y1 = temp;
				}
			}
			HX_STACK_LINE(244)
			Float x15 = (Float((x1 * (int)3)) / Float((int)2));		HX_STACK_VAR(x15,"x15");
			HX_STACK_LINE(245)
			Float y15 = (Float((y1 * (int)3)) / Float((int)2));		HX_STACK_VAR(y15,"y15");
			HX_STACK_LINE(247)
			int x2 = (x1 * (int)2);		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(248)
			int y2 = (y1 * (int)2);		HX_STACK_VAR(y2,"y2");
			HX_STACK_LINE(250)
			int x4 = (x2 * (int)2);		HX_STACK_VAR(x4,"x4");
			HX_STACK_LINE(251)
			int y4 = (y2 * (int)2);		HX_STACK_VAR(y4,"y4");
			HX_STACK_LINE(253)
			if (((bool((larger >= x4)) && bool((smaller >= y4))))){
				HX_STACK_LINE(254)
				theoreticalScale = (int)4;
			}
			else{
				HX_STACK_LINE(258)
				if (((bool((larger >= x2)) && bool((smaller >= y2))))){
					HX_STACK_LINE(259)
					theoreticalScale = (int)2;
				}
				else{
					HX_STACK_LINE(271)
					theoreticalScale = (int)1;
				}
			}
			HX_STACK_LINE(276)
			if (((bool((bool((larger >= x4)) && bool((smaller >= y4)))) && bool((::scripts::MyAssets_obj::maxScale >= (int)4))))){
				HX_STACK_LINE(278)
				::com::stencyl::Engine_obj::SCALE = (int)4;
				HX_STACK_LINE(279)
				::com::stencyl::Engine_obj::IMG_BASE = HX_CSTRING("4x");
			}
			else{
				HX_STACK_LINE(282)
				if (((bool((bool((larger >= x2)) && bool((smaller >= y2)))) && bool((::scripts::MyAssets_obj::maxScale >= (int)2))))){
					HX_STACK_LINE(284)
					::com::stencyl::Engine_obj::SCALE = (int)2;
					HX_STACK_LINE(285)
					::com::stencyl::Engine_obj::IMG_BASE = HX_CSTRING("2x");
				}
				else{
					HX_STACK_LINE(298)
					::com::stencyl::Engine_obj::SCALE = (int)1;
					HX_STACK_LINE(299)
					::com::stencyl::Engine_obj::IMG_BASE = HX_CSTRING("1x");
				}
			}
			HX_STACK_LINE(302)
			::haxe::Log_obj::trace((HX_CSTRING("Theoretical Scale: ") + theoreticalScale),hx::SourceInfo(HX_CSTRING("Universal.hx"),302,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
		}
		HX_STACK_LINE(314)
		::haxe::Log_obj::trace((HX_CSTRING("Max Scale: ") + ::scripts::MyAssets_obj::maxScale),hx::SourceInfo(HX_CSTRING("Universal.hx"),314,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
		HX_STACK_LINE(315)
		::haxe::Log_obj::trace((HX_CSTRING("Engine Scale: ") + ::com::stencyl::Engine_obj::IMG_BASE),hx::SourceInfo(HX_CSTRING("Universal.hx"),315,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
		HX_STACK_LINE(317)
		int originalWidth = ::scripts::MyAssets_obj::stageWidth;		HX_STACK_VAR(originalWidth,"originalWidth");
		HX_STACK_LINE(318)
		int originalHeight = ::scripts::MyAssets_obj::stageHeight;		HX_STACK_VAR(originalHeight,"originalHeight");
		HX_STACK_LINE(320)
		::scripts::MyAssets_obj::stageWidth = ::Std_obj::_int((::scripts::MyAssets_obj::stageWidth * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(321)
		::scripts::MyAssets_obj::stageHeight = ::Std_obj::_int((::scripts::MyAssets_obj::stageHeight * ::com::stencyl::Engine_obj::SCALE));
		HX_STACK_LINE(323)
		bool usingFullScreen = false;		HX_STACK_VAR(usingFullScreen,"usingFullScreen");
		HX_STACK_LINE(324)
		bool stretchToFit = false;		HX_STACK_VAR(stretchToFit,"stretchToFit");
		HX_STACK_LINE(328)
		if ((!(skipScaling))){
			HX_STACK_LINE(329)
			if ((::scripts::MyAssets_obj::stretchToFit)){
				HX_STACK_LINE(332)
				stretchToFit = true;
				HX_STACK_LINE(334)
				{
					HX_STACK_LINE(334)
					::Universal _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(334)
					_g->set_scaleX((_g->get_scaleX() * ((Float(stageWidth) / Float(::scripts::MyAssets_obj::stageWidth)))));
				}
				HX_STACK_LINE(335)
				{
					HX_STACK_LINE(335)
					::Universal _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(335)
					_g->set_scaleY((_g->get_scaleY() * ((Float(stageHeight) / Float(::scripts::MyAssets_obj::stageHeight)))));
				}
				HX_STACK_LINE(337)
				::haxe::Log_obj::trace(HX_CSTRING("Algorithm: Stretch to Fit"),hx::SourceInfo(HX_CSTRING("Universal.hx"),337,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
			}
		}
		HX_STACK_LINE(344)
		if ((!(skipScaling))){
			HX_STACK_LINE(345)
			if (((bool((originalWidth == (int)-1)) || bool((originalHeight == (int)-1))))){
				HX_STACK_LINE(349)
				if (((::scripts::MyAssets_obj::maxScale < theoreticalScale))){
					HX_STACK_LINE(351)
					this->set_scaleX(theoreticalScale);
					HX_STACK_LINE(352)
					this->set_scaleY(theoreticalScale);
					HX_STACK_LINE(353)
					stageWidth = ::Std_obj::_int((Float(stageWidth) / Float(theoreticalScale)));
					HX_STACK_LINE(354)
					stageHeight = ::Std_obj::_int((Float(stageHeight) / Float(theoreticalScale)));
				}
				HX_STACK_LINE(357)
				::scripts::MyAssets_obj::stageWidth = stageWidth;
				HX_STACK_LINE(358)
				::scripts::MyAssets_obj::stageHeight = stageHeight;
				HX_STACK_LINE(360)
				originalWidth = ::Std_obj::_int((Float(stageWidth) / Float(::com::stencyl::Engine_obj::SCALE)));
				HX_STACK_LINE(361)
				originalHeight = ::Std_obj::_int((Float(stageHeight) / Float(::com::stencyl::Engine_obj::SCALE)));
				HX_STACK_LINE(363)
				usingFullScreen = true;
				HX_STACK_LINE(365)
				::haxe::Log_obj::trace(HX_CSTRING("Algorithm: Full Screen"),hx::SourceInfo(HX_CSTRING("Universal.hx"),365,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
				HX_STACK_LINE(366)
				stageWidth = ::Std_obj::_int((Float(stageWidth) / Float(theoreticalScale)));
				HX_STACK_LINE(367)
				stageHeight = ::Std_obj::_int((Float(stageHeight) / Float(theoreticalScale)));
			}
		}
		HX_STACK_LINE(373)
		if ((!(skipScaling))){
			HX_STACK_LINE(374)
			if (((bool(!(usingFullScreen)) && bool(!(stretchToFit))))){
				HX_STACK_LINE(377)
				int screenW = ::Std_obj::_int(::flash::system::Capabilities_obj::get_screenResolutionX());		HX_STACK_VAR(screenW,"screenW");
				HX_STACK_LINE(378)
				int screenH = ::Std_obj::_int(::flash::system::Capabilities_obj::get_screenResolutionY());		HX_STACK_VAR(screenH,"screenH");
				HX_STACK_LINE(380)
				if (((bool((screenW < screenH)) && bool(::scripts::MyAssets_obj::landscape)))){
					HX_STACK_LINE(382)
					screenH = ::Std_obj::_int(::flash::system::Capabilities_obj::get_screenResolutionX());
					HX_STACK_LINE(383)
					screenW = ::Std_obj::_int(::flash::system::Capabilities_obj::get_screenResolutionY());
				}
				HX_STACK_LINE(386)
				bool screenLandscape = (::flash::Lib_obj::get_current()->get_stage()->get_width() > ::flash::Lib_obj::get_current()->get_stage()->get_height());		HX_STACK_VAR(screenLandscape,"screenLandscape");
				HX_STACK_LINE(388)
				::haxe::Log_obj::trace(screenW,hx::SourceInfo(HX_CSTRING("Universal.hx"),388,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
				HX_STACK_LINE(389)
				::haxe::Log_obj::trace(screenH,hx::SourceInfo(HX_CSTRING("Universal.hx"),389,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
				HX_STACK_LINE(390)
				::haxe::Log_obj::trace(screenLandscape,hx::SourceInfo(HX_CSTRING("Universal.hx"),390,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
				HX_STACK_LINE(392)
				if (((::scripts::MyAssets_obj::maxScale < (int)4))){
					HX_STACK_LINE(393)
					if ((::scripts::MyAssets_obj::scaleToFit1)){
						HX_STACK_LINE(397)
						if ((::scripts::MyAssets_obj::landscape)){
							HX_STACK_LINE(399)
							{
								HX_STACK_LINE(399)
								::Universal _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(399)
								_g->set_scaleX((_g->get_scaleX() * ((Float(stageWidth) / Float(::scripts::MyAssets_obj::stageWidth)))));
							}
							HX_STACK_LINE(400)
							this->set_scaleY(this->get_scaleX());
						}
						else{
							HX_STACK_LINE(405)
							this->set_scaleY((Float(stageHeight) / Float(::scripts::MyAssets_obj::stageHeight)));
							HX_STACK_LINE(406)
							this->set_scaleX(this->get_scaleY());
						}
						HX_STACK_LINE(409)
						if (((bool((bool(widescreen) || bool((bool(screenLandscape) && bool((screenW < screenH)))))) || bool((bool(!(screenLandscape)) && bool((screenW > screenH))))))){
							HX_STACK_LINE(410)
							::haxe::Log_obj::trace(HX_CSTRING("Algorithm: Scale to Fit (Fill)"),hx::SourceInfo(HX_CSTRING("Universal.hx"),411,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
						}
						else{
							HX_STACK_LINE(415)
							::haxe::Log_obj::trace(HX_CSTRING("Algorithm: Scale to Fit (Letterbox)"),hx::SourceInfo(HX_CSTRING("Universal.hx"),416,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
						}
					}
					else{
						HX_STACK_LINE(421)
						if ((::scripts::MyAssets_obj::scaleToFit2)){
							HX_STACK_LINE(423)
							if ((::scripts::MyAssets_obj::landscape)){
								HX_STACK_LINE(425)
								this->set_scaleY((Float(stageHeight) / Float(::scripts::MyAssets_obj::stageHeight)));
								HX_STACK_LINE(426)
								this->set_scaleX(this->get_scaleY());
							}
							else{
								HX_STACK_LINE(431)
								{
									HX_STACK_LINE(431)
									::Universal _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(431)
									_g->set_scaleX((_g->get_scaleX() * ((Float(stageWidth) / Float(::scripts::MyAssets_obj::stageWidth)))));
								}
								HX_STACK_LINE(432)
								this->set_scaleY(this->get_scaleX());
							}
							HX_STACK_LINE(435)
							if (((bool((bool(widescreen) || bool((bool(screenLandscape) && bool((screenW < screenH)))))) || bool((bool(!(screenLandscape)) && bool((screenW > screenH))))))){
								HX_STACK_LINE(436)
								::haxe::Log_obj::trace(HX_CSTRING("Algorithm: Scale to Fit (Letterbox)"),hx::SourceInfo(HX_CSTRING("Universal.hx"),437,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
							}
							else{
								HX_STACK_LINE(441)
								::haxe::Log_obj::trace(HX_CSTRING("Algorithm: Scale to Fit (Fill)"),hx::SourceInfo(HX_CSTRING("Universal.hx"),442,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
							}
						}
						else{
							HX_STACK_LINE(447)
							if ((::scripts::MyAssets_obj::scaleToFit3)){
								HX_STACK_LINE(449)
								if ((::scripts::MyAssets_obj::landscape)){
									HX_STACK_LINE(451)
									this->set_scaleY((Float(stageHeight) / Float(::scripts::MyAssets_obj::stageHeight)));
									HX_STACK_LINE(454)
									if ((((::flash::Lib_obj::get_current()->get_stage()->get_width() * this->get_scaleY()) > screenW))){
										HX_STACK_LINE(455)
										this->set_scaleY((Float(stageWidth) / Float(::scripts::MyAssets_obj::stageWidth)));
									}
									HX_STACK_LINE(459)
									this->set_scaleX(this->get_scaleY());
								}
								else{
									HX_STACK_LINE(464)
									this->set_scaleX((Float(stageWidth) / Float(::scripts::MyAssets_obj::stageWidth)));
									HX_STACK_LINE(467)
									if ((((::flash::Lib_obj::get_current()->get_stage()->get_height() * this->get_scaleX()) > screenH))){
										HX_STACK_LINE(468)
										this->set_scaleX((Float(stageHeight) / Float(::scripts::MyAssets_obj::stageHeight)));
									}
									HX_STACK_LINE(472)
									this->set_scaleY(this->get_scaleX());
								}
								HX_STACK_LINE(475)
								::haxe::Log_obj::trace(HX_CSTRING("Algorithm: Scale to Fit (Full Screen)"),hx::SourceInfo(HX_CSTRING("Universal.hx"),475,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
								HX_STACK_LINE(477)
								::scripts::MyAssets_obj::stageWidth = stageWidth;
								HX_STACK_LINE(478)
								::scripts::MyAssets_obj::stageHeight = stageHeight;
								HX_STACK_LINE(480)
								originalWidth = ::Std_obj::_int((Float(stageWidth) / Float(((::com::stencyl::Engine_obj::SCALE * this->get_scaleY())))));
								HX_STACK_LINE(481)
								originalHeight = ::Std_obj::_int((Float(stageHeight) / Float(((::com::stencyl::Engine_obj::SCALE * this->get_scaleX())))));
								HX_STACK_LINE(483)
								stageWidth = ::Std_obj::_int((Float(stageWidth) / Float(theoreticalScale)));
								HX_STACK_LINE(484)
								stageHeight = ::Std_obj::_int((Float(stageHeight) / Float(theoreticalScale)));
							}
							else{
								HX_STACK_LINE(490)
								if ((::scripts::MyAssets_obj::landscape)){
									HX_STACK_LINE(492)
									{
										HX_STACK_LINE(492)
										::Universal _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(492)
										_g->set_scaleX((_g->get_scaleX() * ::Std_obj::_int((Float(stageWidth) / Float(::scripts::MyAssets_obj::stageWidth)))));
									}
									HX_STACK_LINE(493)
									this->set_scaleY(this->get_scaleX());
								}
								else{
									HX_STACK_LINE(498)
									this->set_scaleY(::Std_obj::_int((Float(stageHeight) / Float(::scripts::MyAssets_obj::stageHeight))));
									HX_STACK_LINE(499)
									this->set_scaleX(this->get_scaleY());
								}
								HX_STACK_LINE(502)
								::haxe::Log_obj::trace(HX_CSTRING("Algorithm: No Scaling (Integer Scaling)"),hx::SourceInfo(HX_CSTRING("Universal.hx"),502,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
							}
						}
					}
				}
				else{
					HX_STACK_LINE(508)
					if ((::scripts::MyAssets_obj::scaleToFit1)){
						HX_STACK_LINE(512)
						if ((::scripts::MyAssets_obj::landscape)){
							HX_STACK_LINE(514)
							{
								HX_STACK_LINE(514)
								::Universal _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(514)
								_g->set_scaleX((_g->get_scaleX() * ((Float(stageWidth) / Float(::scripts::MyAssets_obj::stageWidth)))));
							}
							HX_STACK_LINE(515)
							this->set_scaleY(this->get_scaleX());
						}
						else{
							HX_STACK_LINE(520)
							this->set_scaleY((Float(stageHeight) / Float(::scripts::MyAssets_obj::stageHeight)));
							HX_STACK_LINE(521)
							this->set_scaleX(this->get_scaleY());
						}
						HX_STACK_LINE(524)
						if (((bool((bool(widescreen) || bool((bool(screenLandscape) && bool((screenW < screenH)))))) || bool((bool(!(screenLandscape)) && bool((screenW > screenH))))))){
							HX_STACK_LINE(525)
							::haxe::Log_obj::trace(HX_CSTRING("Algorithm: Scale to Fit (Fill)"),hx::SourceInfo(HX_CSTRING("Universal.hx"),526,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
						}
						else{
							HX_STACK_LINE(530)
							::haxe::Log_obj::trace(HX_CSTRING("Algorithm: Scale to Fit (Letterbox)"),hx::SourceInfo(HX_CSTRING("Universal.hx"),531,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
						}
					}
					else{
						HX_STACK_LINE(536)
						if ((::scripts::MyAssets_obj::scaleToFit2)){
							HX_STACK_LINE(538)
							if ((::scripts::MyAssets_obj::landscape)){
								HX_STACK_LINE(540)
								this->set_scaleY((Float(stageHeight) / Float(::scripts::MyAssets_obj::stageHeight)));
								HX_STACK_LINE(541)
								this->set_scaleX(this->get_scaleY());
							}
							else{
								HX_STACK_LINE(546)
								{
									HX_STACK_LINE(546)
									::Universal _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(546)
									_g->set_scaleX((_g->get_scaleX() * ((Float(stageWidth) / Float(::scripts::MyAssets_obj::stageWidth)))));
								}
								HX_STACK_LINE(547)
								this->set_scaleY(this->get_scaleX());
							}
							HX_STACK_LINE(550)
							if (((bool((bool(widescreen) || bool((bool(screenLandscape) && bool((screenW < screenH)))))) || bool((bool(!(screenLandscape)) && bool((screenW > screenH))))))){
								HX_STACK_LINE(551)
								::haxe::Log_obj::trace(HX_CSTRING("Algorithm: Scale to Fit (Letterbox)"),hx::SourceInfo(HX_CSTRING("Universal.hx"),552,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
							}
							else{
								HX_STACK_LINE(556)
								::haxe::Log_obj::trace(HX_CSTRING("Algorithm: Scale to Fit (Fill)"),hx::SourceInfo(HX_CSTRING("Universal.hx"),557,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
							}
						}
						else{
							HX_STACK_LINE(562)
							if ((::scripts::MyAssets_obj::scaleToFit3)){
								HX_STACK_LINE(564)
								if ((::scripts::MyAssets_obj::landscape)){
									HX_STACK_LINE(566)
									this->set_scaleY((Float(stageHeight) / Float(::scripts::MyAssets_obj::stageHeight)));
									HX_STACK_LINE(569)
									if ((((::flash::Lib_obj::get_current()->get_stage()->get_width() * this->get_scaleY()) > screenW))){
										HX_STACK_LINE(570)
										this->set_scaleY((Float(stageWidth) / Float(::scripts::MyAssets_obj::stageWidth)));
									}
									HX_STACK_LINE(574)
									this->set_scaleX(this->get_scaleY());
								}
								else{
									HX_STACK_LINE(579)
									this->set_scaleX((Float(stageWidth) / Float(::scripts::MyAssets_obj::stageWidth)));
									HX_STACK_LINE(582)
									if ((((::flash::Lib_obj::get_current()->get_stage()->get_height() * this->get_scaleX()) > screenH))){
										HX_STACK_LINE(583)
										this->set_scaleX((Float(stageHeight) / Float(::scripts::MyAssets_obj::stageHeight)));
									}
									HX_STACK_LINE(587)
									this->set_scaleY(this->get_scaleX());
								}
								HX_STACK_LINE(590)
								::haxe::Log_obj::trace(HX_CSTRING("Algorithm: Scale to Fit (Full Screen)"),hx::SourceInfo(HX_CSTRING("Universal.hx"),590,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
								HX_STACK_LINE(592)
								::scripts::MyAssets_obj::stageWidth = stageWidth;
								HX_STACK_LINE(593)
								::scripts::MyAssets_obj::stageHeight = stageHeight;
								HX_STACK_LINE(595)
								originalWidth = ::Std_obj::_int((Float(stageWidth) / Float(((::com::stencyl::Engine_obj::SCALE * this->get_scaleY())))));
								HX_STACK_LINE(596)
								originalHeight = ::Std_obj::_int((Float(stageHeight) / Float(((::com::stencyl::Engine_obj::SCALE * this->get_scaleX())))));
								HX_STACK_LINE(598)
								stageWidth = ::Std_obj::_int((Float(stageWidth) / Float(theoreticalScale)));
								HX_STACK_LINE(599)
								stageHeight = ::Std_obj::_int((Float(stageHeight) / Float(theoreticalScale)));
							}
							else{
								HX_STACK_LINE(606)
								if (((::scripts::MyAssets_obj::stageWidth > stageWidth))){
									HX_STACK_LINE(608)
									{
										HX_STACK_LINE(608)
										::Universal _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(608)
										_g->set_scaleX((_g->get_scaleX() * ((Float(stageWidth) / Float(::scripts::MyAssets_obj::stageWidth)))));
									}
									HX_STACK_LINE(609)
									this->set_scaleY(this->get_scaleX());
								}
								HX_STACK_LINE(613)
								if ((((::scripts::MyAssets_obj::stageHeight * this->get_scaleY()) > stageHeight))){
									HX_STACK_LINE(615)
									this->set_scaleY((Float(stageHeight) / Float(::scripts::MyAssets_obj::stageHeight)));
									HX_STACK_LINE(616)
									this->set_scaleX(this->get_scaleY());
								}
								HX_STACK_LINE(619)
								::haxe::Log_obj::trace(HX_CSTRING("Algorithm: No Scaling (Integer Scaling)"),hx::SourceInfo(HX_CSTRING("Universal.hx"),619,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
							}
						}
					}
				}
				HX_STACK_LINE(623)
				if ((::scripts::MyAssets_obj::scaleToFit3)){
				}
				else{
					HX_STACK_LINE(647)
					{
						HX_STACK_LINE(647)
						::Universal _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(647)
						_g->set_x((_g->get_x() + (Float(((stageWidth - (::scripts::MyAssets_obj::stageWidth * this->get_scaleX())))) / Float((int)2))));
					}
					HX_STACK_LINE(648)
					{
						HX_STACK_LINE(648)
						::Universal _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(648)
						_g->set_y((_g->get_y() + (Float(((stageHeight - (::scripts::MyAssets_obj::stageHeight * this->get_scaleY())))) / Float((int)2))));
					}
				}
			}
		}
		HX_STACK_LINE(656)
		if (((bool(!(usingFullScreen)) && bool(!(stretchToFit))))){
			HX_STACK_LINE(657)
			this->set_scrollRect(::flash::geom::Rectangle_obj::__new((int)0,(int)0,::scripts::MyAssets_obj::stageWidth,::scripts::MyAssets_obj::stageHeight));
		}
		HX_STACK_LINE(666)
		::scripts::MyAssets_obj::stageWidth = originalWidth;
		HX_STACK_LINE(667)
		::scripts::MyAssets_obj::stageHeight = originalHeight;
		HX_STACK_LINE(669)
		::haxe::Log_obj::trace((HX_CSTRING("Scale X: ") + this->get_scaleX()),hx::SourceInfo(HX_CSTRING("Universal.hx"),669,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
		HX_STACK_LINE(670)
		::haxe::Log_obj::trace((HX_CSTRING("Scale Y: ") + this->get_scaleY()),hx::SourceInfo(HX_CSTRING("Universal.hx"),670,HX_CSTRING("Universal"),HX_CSTRING("initScreen")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Universal_obj,initScreen,(void))

Void Universal_obj::initServices( ){
{
		HX_STACK_PUSH("Universal::initServices","Universal.hx",70);
		HX_STACK_THIS(this);
		HX_STACK_LINE(70)
		::Ads_obj::initialize(::scripts::MyAssets_obj::whirlID,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Universal_obj,initServices,(void))

Void Universal_obj::onKeyDown( ::flash::events::KeyboardEvent e){
{
		HX_STACK_PUSH("Universal::onKeyDown","Universal.hx",61);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(61)
		if (((e->keyCode == ::flash::ui::Keyboard_obj::ESCAPE))){
			HX_STACK_LINE(64)
			::flash::Lib_obj::get_current()->get_stage()->removeEventListener(::flash::events::KeyboardEvent_obj::KEY_DOWN,this->onKeyDown_dyn(),null());
			HX_STACK_LINE(65)
			::flash::system::System_obj::exit((int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Universal_obj,onKeyDown,(void))

Void Universal_obj::init( ){
{
		HX_STACK_PUSH("Universal::init","Universal.hx",40);
		HX_STACK_THIS(this);
		HX_STACK_LINE(41)
		this->initServices();
		HX_STACK_LINE(43)
		this->removeEventListener(::flash::events::Event_obj::ADDED_TO_STAGE,this->onAdded_dyn(),null());
		HX_STACK_LINE(45)
		if ((::scripts::MyAssets_obj::startInFullScreen)){
			HX_STACK_LINE(47)
			::flash::Lib_obj::get_current()->get_stage()->set_displayState(::flash::display::StageDisplayState_obj::FULL_SCREEN_INTERACTIVE);
			HX_STACK_LINE(48)
			this->initScreen(true);
			HX_STACK_LINE(49)
			::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::KeyboardEvent_obj::KEY_DOWN,this->onKeyDown_dyn(),false,(int)2,null());
		}
		else{
			HX_STACK_LINE(53)
			this->initScreen(null());
		}
		HX_STACK_LINE(57)
		::com::stencyl::Engine_obj::__new(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Universal_obj,init,(void))

Void Universal_obj::onAdded( ::flash::events::Event event){
{
		HX_STACK_PUSH("Universal::onAdded","Universal.hx",35);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(35)
		this->init();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Universal_obj,onAdded,(void))

Void Universal_obj::main( ){
{
		HX_STACK_PUSH("Universal::main","Universal.hx",674);
		HX_STACK_LINE(675)
		::flash::display::Stage stage = ::flash::Lib_obj::get_current()->get_stage();		HX_STACK_VAR(stage,"stage");
		HX_STACK_LINE(677)
		stage->set_align(::flash::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(678)
		stage->set_scaleMode(::flash::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(681)
		stage->set_opaqueBackground((int)0);
		HX_STACK_LINE(684)
		::flash::Lib_obj::get_current()->addChild(::Universal_obj::__new());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Universal_obj,main,(void))


Universal_obj::Universal_obj()
{
}

void Universal_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Universal);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Universal_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Universal_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onAdded") ) { return onAdded_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initScreen") ) { return initScreen_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initServices") ) { return initServices_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Universal_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Universal_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("initScreen"),
	HX_CSTRING("initServices"),
	HX_CSTRING("onKeyDown"),
	HX_CSTRING("init"),
	HX_CSTRING("onAdded"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Universal_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Universal_obj::__mClass,"__mClass");
};

Class Universal_obj::__mClass;

void Universal_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Universal"), hx::TCanCast< Universal_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Universal_obj::__boot()
{
}

