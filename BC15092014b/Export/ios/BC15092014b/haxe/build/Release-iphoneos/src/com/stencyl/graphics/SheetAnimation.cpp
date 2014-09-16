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
#ifndef INCLUDED_com_stencyl_graphics_AbstractAnimation
#include <com/stencyl/graphics/AbstractAnimation.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_G
#include <com/stencyl/graphics/G.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_SheetAnimation
#include <com/stencyl/graphics/SheetAnimation.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Animation
#include <com/stencyl/models/actor/Animation.h>
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
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_scripts_MyAssets
#include <scripts/MyAssets.h>
#endif
namespace com{
namespace stencyl{
namespace graphics{

Void SheetAnimation_obj::__construct(::openfl::display::Tilesheet tilesheet,Array< int > durations,int width,int height,bool looping,::com::stencyl::models::actor::Animation model)
{
HX_STACK_PUSH("SheetAnimation::new","com/stencyl/graphics/SheetAnimation.hx",13);
{
	HX_STACK_LINE(19)
	this->blendName = HX_CSTRING("NORMAL");
	HX_STACK_LINE(15)
	this->tint = false;
	HX_STACK_LINE(49)
	super::__construct();
	HX_STACK_LINE(51)
	this->model = model;
	HX_STACK_LINE(53)
	this->set_x(((Float(-(width)) / Float((int)2)) * ::com::stencyl::Engine_obj::SCALE));
	HX_STACK_LINE(54)
	this->set_y(((Float(-(height)) / Float((int)2)) * ::com::stencyl::Engine_obj::SCALE));
	HX_STACK_LINE(56)
	this->timer = (int)0;
	HX_STACK_LINE(57)
	this->frameIndex = (int)0;
	HX_STACK_LINE(58)
	this->frameWidth = width;
	HX_STACK_LINE(59)
	this->frameHeight = height;
	HX_STACK_LINE(60)
	this->looping = looping;
	HX_STACK_LINE(62)
	this->tilesheet = tilesheet;
	HX_STACK_LINE(64)
	this->durations = durations;
	HX_STACK_LINE(66)
	this->numFrames = durations->length;
	HX_STACK_LINE(68)
	this->data = Array_obj< Float >::__new().Add(0.0).Add(0.0).Add((int)0);
	HX_STACK_LINE(70)
	{
		HX_STACK_LINE(70)
		this->data[(int)0] = (int)0;
		HX_STACK_LINE(70)
		this->data[(int)1] = (int)0;
		HX_STACK_LINE(70)
		this->data[(int)2] = this->frameIndex;
		HX_STACK_LINE(70)
		if ((this->tint)){
			HX_STACK_LINE(70)
			this->data[(int)3] = this->redValue;
			HX_STACK_LINE(70)
			this->data[(int)4] = this->greenValue;
			HX_STACK_LINE(70)
			this->data[(int)5] = this->blueValue;
			HX_STACK_LINE(70)
			this->get_graphics()->clear();
			HX_STACK_LINE(70)
			this->tilesheet->drawTiles(this->get_graphics(),this->data,::scripts::MyAssets_obj::antialias,(int)4);
		}
		else{
			HX_STACK_LINE(70)
			this->data[(int)3] = (int)1;
			HX_STACK_LINE(70)
			this->data[(int)4] = (int)1;
			HX_STACK_LINE(70)
			this->data[(int)5] = (int)1;
			HX_STACK_LINE(70)
			this->get_graphics()->clear();
			HX_STACK_LINE(70)
			if (((this->blendName == HX_CSTRING("ADD")))){
				HX_STACK_LINE(70)
				this->tilesheet->drawTiles(this->get_graphics(),this->data,::scripts::MyAssets_obj::antialias,(int)65540);
			}
			else{
				HX_STACK_LINE(70)
				if (((this->blendName == HX_CSTRING("MULTIPLY")))){
					HX_STACK_LINE(70)
					this->tilesheet->drawTiles(this->get_graphics(),this->data,::scripts::MyAssets_obj::antialias,(int)131076);
				}
				else{
					HX_STACK_LINE(70)
					if (((this->blendName == HX_CSTRING("SCREEN")))){
						HX_STACK_LINE(70)
						this->tilesheet->drawTiles(this->get_graphics(),this->data,::scripts::MyAssets_obj::antialias,(int)262148);
					}
					else{
						HX_STACK_LINE(70)
						this->tilesheet->drawTiles(this->get_graphics(),this->data,::scripts::MyAssets_obj::antialias,(int)4);
					}
				}
			}
		}
		HX_STACK_LINE(70)
		this->needsUpdate = false;
	}
}
;
	return null();
}

SheetAnimation_obj::~SheetAnimation_obj() { }

Dynamic SheetAnimation_obj::__CreateEmpty() { return  new SheetAnimation_obj; }
hx::ObjectPtr< SheetAnimation_obj > SheetAnimation_obj::__new(::openfl::display::Tilesheet tilesheet,Array< int > durations,int width,int height,bool looping,::com::stencyl::models::actor::Animation model)
{  hx::ObjectPtr< SheetAnimation_obj > result = new SheetAnimation_obj();
	result->__construct(tilesheet,durations,width,height,looping,model);
	return result;}

Dynamic SheetAnimation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SheetAnimation_obj > result = new SheetAnimation_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

hx::Object *SheetAnimation_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::com::stencyl::graphics::AbstractAnimation_obj)) return operator ::com::stencyl::graphics::AbstractAnimation_obj *();
	return super::__ToInterface(inType);
}

::flash::display::BitmapData SheetAnimation_obj::getCurrentImage( ){
	HX_STACK_PUSH("SheetAnimation::getCurrentImage","com/stencyl/graphics/SheetAnimation.hx",248);
	HX_STACK_THIS(this);
	HX_STACK_LINE(252)
	::flash::display::BitmapData img = ::flash::display::BitmapData_obj::__new(::Std_obj::_int(this->get_width()),::Std_obj::_int(this->get_height()),true,(int)16777215,null());		HX_STACK_VAR(img,"img");
	HX_STACK_LINE(253)
	img->copyPixels(this->tilesheet->__bitmap,::flash::geom::Rectangle_obj::__new((hx::Mod(this->frameIndex,this->framesAcross) * this->get_width()),(::Math_obj::floor((Float(this->frameIndex) / Float(this->framesAcross))) * this->get_height()),::Std_obj::_int(this->get_width()),::Std_obj::_int(this->get_height())),::flash::geom::Point_obj::__new((int)0,(int)0),null(),null(),false);
	HX_STACK_LINE(254)
	return img;
}


HX_DEFINE_DYNAMIC_FUNC0(SheetAnimation_obj,getCurrentImage,return )

Void SheetAnimation_obj::setFrameDurations( int time){
{
		HX_STACK_PUSH("SheetAnimation::setFrameDurations","com/stencyl/graphics/SheetAnimation.hx",237);
		HX_STACK_THIS(this);
		HX_STACK_ARG(time,"time");
		HX_STACK_LINE(237)
		if (((this->durations != null()))){
			HX_STACK_LINE(240)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->durations->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(240)
			while(((_g1 < _g))){
				HX_STACK_LINE(240)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(242)
				this->durations[i] = time;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SheetAnimation_obj,setFrameDurations,(void))

Array< int > SheetAnimation_obj::getFrameDurations( ){
	HX_STACK_PUSH("SheetAnimation::getFrameDurations","com/stencyl/graphics/SheetAnimation.hx",232);
	HX_STACK_THIS(this);
	HX_STACK_LINE(232)
	return this->durations;
}


HX_DEFINE_DYNAMIC_FUNC0(SheetAnimation_obj,getFrameDurations,return )

Void SheetAnimation_obj::draw( ::com::stencyl::graphics::G g,Float x,Float y,Float angle,Float alpha){
{
		HX_STACK_PUSH("SheetAnimation::draw","com/stencyl/graphics/SheetAnimation.hx",219);
		HX_STACK_THIS(this);
		HX_STACK_ARG(g,"g");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(angle,"angle");
		HX_STACK_ARG(alpha,"alpha");
		HX_STACK_LINE(221)
		this->data[(int)0] = x;
		HX_STACK_LINE(222)
		this->data[(int)1] = y;
		HX_STACK_LINE(223)
		this->data[(int)2] = this->frameIndex;
		HX_STACK_LINE(224)
		this->data[(int)3] = angle;
		HX_STACK_LINE(225)
		this->data[(int)4] = alpha;
		HX_STACK_LINE(227)
		this->tilesheet->drawTiles(g->graphics,this->data,::scripts::MyAssets_obj::antialias,(int)10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(SheetAnimation_obj,draw,(void))

Void SheetAnimation_obj::updateBitmap( ){
{
		HX_STACK_PUSH("SheetAnimation::updateBitmap","com/stencyl/graphics/SheetAnimation.hx",169);
		HX_STACK_THIS(this);
		HX_STACK_LINE(171)
		this->data[(int)0] = (int)0;
		HX_STACK_LINE(172)
		this->data[(int)1] = (int)0;
		HX_STACK_LINE(173)
		this->data[(int)2] = this->frameIndex;
		HX_STACK_LINE(175)
		if ((this->tint)){
			HX_STACK_LINE(177)
			this->data[(int)3] = this->redValue;
			HX_STACK_LINE(178)
			this->data[(int)4] = this->greenValue;
			HX_STACK_LINE(179)
			this->data[(int)5] = this->blueValue;
			HX_STACK_LINE(181)
			this->get_graphics()->clear();
			HX_STACK_LINE(182)
			this->tilesheet->drawTiles(this->get_graphics(),this->data,::scripts::MyAssets_obj::antialias,(int)4);
		}
		else{
			HX_STACK_LINE(186)
			this->data[(int)3] = (int)1;
			HX_STACK_LINE(187)
			this->data[(int)4] = (int)1;
			HX_STACK_LINE(188)
			this->data[(int)5] = (int)1;
			HX_STACK_LINE(190)
			this->get_graphics()->clear();
			HX_STACK_LINE(195)
			if (((this->blendName == HX_CSTRING("ADD")))){
				HX_STACK_LINE(196)
				this->tilesheet->drawTiles(this->get_graphics(),this->data,::scripts::MyAssets_obj::antialias,(int)65540);
			}
			else{
				HX_STACK_LINE(199)
				if (((this->blendName == HX_CSTRING("MULTIPLY")))){
					HX_STACK_LINE(200)
					this->tilesheet->drawTiles(this->get_graphics(),this->data,::scripts::MyAssets_obj::antialias,(int)131076);
				}
				else{
					HX_STACK_LINE(203)
					if (((this->blendName == HX_CSTRING("SCREEN")))){
						HX_STACK_LINE(204)
						this->tilesheet->drawTiles(this->get_graphics(),this->data,::scripts::MyAssets_obj::antialias,(int)262148);
					}
					else{
						HX_STACK_LINE(208)
						this->tilesheet->drawTiles(this->get_graphics(),this->data,::scripts::MyAssets_obj::antialias,(int)4);
					}
				}
			}
		}
		HX_STACK_LINE(214)
		this->needsUpdate = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SheetAnimation_obj,updateBitmap,(void))

Void SheetAnimation_obj::reset( ){
{
		HX_STACK_PUSH("SheetAnimation::reset","com/stencyl/graphics/SheetAnimation.hx",161);
		HX_STACK_THIS(this);
		HX_STACK_LINE(162)
		this->timer = (int)0;
		HX_STACK_LINE(163)
		this->frameIndex = (int)0;
		HX_STACK_LINE(164)
		this->finished = false;
		HX_STACK_LINE(165)
		this->needsUpdate = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SheetAnimation_obj,reset,(void))

bool SheetAnimation_obj::needsBitmapUpdate( ){
	HX_STACK_PUSH("SheetAnimation::needsBitmapUpdate","com/stencyl/graphics/SheetAnimation.hx",156);
	HX_STACK_THIS(this);
	HX_STACK_LINE(156)
	return this->needsUpdate;
}


HX_DEFINE_DYNAMIC_FUNC0(SheetAnimation_obj,needsBitmapUpdate,return )

bool SheetAnimation_obj::isFinished( ){
	HX_STACK_PUSH("SheetAnimation::isFinished","com/stencyl/graphics/SheetAnimation.hx",151);
	HX_STACK_THIS(this);
	HX_STACK_LINE(151)
	return this->finished;
}


HX_DEFINE_DYNAMIC_FUNC0(SheetAnimation_obj,isFinished,return )

Void SheetAnimation_obj::setFrame( int frame){
{
		HX_STACK_PUSH("SheetAnimation::setFrame","com/stencyl/graphics/SheetAnimation.hx",133);
		HX_STACK_THIS(this);
		HX_STACK_ARG(frame,"frame");
		HX_STACK_LINE(134)
		if (((bool((frame < (int)0)) || bool((frame >= this->numFrames))))){
			HX_STACK_LINE(135)
			frame = (int)0;
		}
		HX_STACK_LINE(139)
		this->frameIndex = frame;
		HX_STACK_LINE(140)
		this->needsUpdate = true;
		HX_STACK_LINE(141)
		this->finished = false;
		HX_STACK_LINE(144)
		if (((this->model != null()))){
			HX_STACK_LINE(145)
			this->model->sharedFrameIndex = frame;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SheetAnimation_obj,setFrame,(void))

int SheetAnimation_obj::getNumFrames( ){
	HX_STACK_PUSH("SheetAnimation::getNumFrames","com/stencyl/graphics/SheetAnimation.hx",128);
	HX_STACK_THIS(this);
	HX_STACK_LINE(128)
	return this->numFrames;
}


HX_DEFINE_DYNAMIC_FUNC0(SheetAnimation_obj,getNumFrames,return )

int SheetAnimation_obj::getCurrentFrame( ){
	HX_STACK_PUSH("SheetAnimation::getCurrentFrame","com/stencyl/graphics/SheetAnimation.hx",123);
	HX_STACK_THIS(this);
	HX_STACK_LINE(123)
	return this->frameIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(SheetAnimation_obj,getCurrentFrame,return )

Void SheetAnimation_obj::update( Float elapsedTime){
{
		HX_STACK_PUSH("SheetAnimation::update","com/stencyl/graphics/SheetAnimation.hx",74);
		HX_STACK_THIS(this);
		HX_STACK_ARG(elapsedTime,"elapsedTime");
		HX_STACK_LINE(76)
		if (((bool((this->model == null())) || bool(!(this->looping))))){
			HX_STACK_LINE(78)
			hx::AddEq(this->timer,elapsedTime);
			HX_STACK_LINE(80)
			if (((bool((this->numFrames > (int)0)) && bool((this->timer > this->durations->__get(this->frameIndex)))))){
				HX_STACK_LINE(82)
				int old = this->frameIndex;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(84)
				hx::SubEq(this->timer,this->durations->__get(this->frameIndex));
				HX_STACK_LINE(86)
				(this->frameIndex)++;
				HX_STACK_LINE(88)
				if (((this->frameIndex >= this->numFrames))){
					HX_STACK_LINE(89)
					if ((this->looping)){
						HX_STACK_LINE(91)
						this->frameIndex = (int)0;
					}
					else{
						HX_STACK_LINE(97)
						this->finished = true;
						HX_STACK_LINE(98)
						(this->frameIndex)--;
					}
				}
				HX_STACK_LINE(102)
				if (((old != this->frameIndex))){
					HX_STACK_LINE(103)
					this->needsUpdate = true;
				}
			}
			HX_STACK_LINE(108)
			return null();
		}
		HX_STACK_LINE(111)
		int old = this->frameIndex;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(113)
		this->timer = this->model->sharedTimer;
		HX_STACK_LINE(114)
		this->frameIndex = this->model->sharedFrameIndex;
		HX_STACK_LINE(116)
		if (((old != this->frameIndex))){
			HX_STACK_LINE(117)
			this->needsUpdate = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SheetAnimation_obj,update,(void))


SheetAnimation_obj::SheetAnimation_obj()
{
}

void SheetAnimation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SheetAnimation);
	HX_MARK_MEMBER_NAME(model,"model");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(numFrames,"numFrames");
	HX_MARK_MEMBER_NAME(durations,"durations");
	HX_MARK_MEMBER_NAME(tilesheet,"tilesheet");
	HX_MARK_MEMBER_NAME(frameHeight,"frameHeight");
	HX_MARK_MEMBER_NAME(frameWidth,"frameWidth");
	HX_MARK_MEMBER_NAME(framesAcross,"framesAcross");
	HX_MARK_MEMBER_NAME(needsUpdate,"needsUpdate");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(looping,"looping");
	HX_MARK_MEMBER_NAME(frameIndex,"frameIndex");
	HX_MARK_MEMBER_NAME(blendName,"blendName");
	HX_MARK_MEMBER_NAME(blueValue,"blueValue");
	HX_MARK_MEMBER_NAME(greenValue,"greenValue");
	HX_MARK_MEMBER_NAME(redValue,"redValue");
	HX_MARK_MEMBER_NAME(tint,"tint");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SheetAnimation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(model,"model");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(numFrames,"numFrames");
	HX_VISIT_MEMBER_NAME(durations,"durations");
	HX_VISIT_MEMBER_NAME(tilesheet,"tilesheet");
	HX_VISIT_MEMBER_NAME(frameHeight,"frameHeight");
	HX_VISIT_MEMBER_NAME(frameWidth,"frameWidth");
	HX_VISIT_MEMBER_NAME(framesAcross,"framesAcross");
	HX_VISIT_MEMBER_NAME(needsUpdate,"needsUpdate");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(looping,"looping");
	HX_VISIT_MEMBER_NAME(frameIndex,"frameIndex");
	HX_VISIT_MEMBER_NAME(blendName,"blendName");
	HX_VISIT_MEMBER_NAME(blueValue,"blueValue");
	HX_VISIT_MEMBER_NAME(greenValue,"greenValue");
	HX_VISIT_MEMBER_NAME(redValue,"redValue");
	HX_VISIT_MEMBER_NAME(tint,"tint");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SheetAnimation_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"tint") ) { return tint; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"model") ) { return model; }
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"looping") ) { return looping; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setFrame") ) { return setFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"finished") ) { return finished; }
		if (HX_FIELD_EQ(inName,"redValue") ) { return redValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"numFrames") ) { return numFrames; }
		if (HX_FIELD_EQ(inName,"durations") ) { return durations; }
		if (HX_FIELD_EQ(inName,"tilesheet") ) { return tilesheet; }
		if (HX_FIELD_EQ(inName,"blendName") ) { return blendName; }
		if (HX_FIELD_EQ(inName,"blueValue") ) { return blueValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isFinished") ) { return isFinished_dyn(); }
		if (HX_FIELD_EQ(inName,"frameWidth") ) { return frameWidth; }
		if (HX_FIELD_EQ(inName,"frameIndex") ) { return frameIndex; }
		if (HX_FIELD_EQ(inName,"greenValue") ) { return greenValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"frameHeight") ) { return frameHeight; }
		if (HX_FIELD_EQ(inName,"needsUpdate") ) { return needsUpdate; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateBitmap") ) { return updateBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"getNumFrames") ) { return getNumFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"framesAcross") ) { return framesAcross; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getCurrentImage") ) { return getCurrentImage_dyn(); }
		if (HX_FIELD_EQ(inName,"getCurrentFrame") ) { return getCurrentFrame_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setFrameDurations") ) { return setFrameDurations_dyn(); }
		if (HX_FIELD_EQ(inName,"getFrameDurations") ) { return getFrameDurations_dyn(); }
		if (HX_FIELD_EQ(inName,"needsBitmapUpdate") ) { return needsBitmapUpdate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SheetAnimation_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tint") ) { tint=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { model=inValue.Cast< ::com::stencyl::models::actor::Animation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"looping") ) { looping=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"redValue") ) { redValue=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"numFrames") ) { numFrames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"durations") ) { durations=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tilesheet") ) { tilesheet=inValue.Cast< ::openfl::display::Tilesheet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendName") ) { blendName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blueValue") ) { blueValue=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameWidth") ) { frameWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameIndex") ) { frameIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenValue") ) { greenValue=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"frameHeight") ) { frameHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"needsUpdate") ) { needsUpdate=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"framesAcross") ) { framesAcross=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SheetAnimation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("model"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("numFrames"));
	outFields->push(HX_CSTRING("durations"));
	outFields->push(HX_CSTRING("tilesheet"));
	outFields->push(HX_CSTRING("frameHeight"));
	outFields->push(HX_CSTRING("frameWidth"));
	outFields->push(HX_CSTRING("framesAcross"));
	outFields->push(HX_CSTRING("needsUpdate"));
	outFields->push(HX_CSTRING("finished"));
	outFields->push(HX_CSTRING("timer"));
	outFields->push(HX_CSTRING("looping"));
	outFields->push(HX_CSTRING("frameIndex"));
	outFields->push(HX_CSTRING("blendName"));
	outFields->push(HX_CSTRING("blueValue"));
	outFields->push(HX_CSTRING("greenValue"));
	outFields->push(HX_CSTRING("redValue"));
	outFields->push(HX_CSTRING("tint"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getCurrentImage"),
	HX_CSTRING("setFrameDurations"),
	HX_CSTRING("getFrameDurations"),
	HX_CSTRING("draw"),
	HX_CSTRING("updateBitmap"),
	HX_CSTRING("reset"),
	HX_CSTRING("needsBitmapUpdate"),
	HX_CSTRING("isFinished"),
	HX_CSTRING("setFrame"),
	HX_CSTRING("getNumFrames"),
	HX_CSTRING("getCurrentFrame"),
	HX_CSTRING("update"),
	HX_CSTRING("model"),
	HX_CSTRING("data"),
	HX_CSTRING("numFrames"),
	HX_CSTRING("durations"),
	HX_CSTRING("tilesheet"),
	HX_CSTRING("frameHeight"),
	HX_CSTRING("frameWidth"),
	HX_CSTRING("framesAcross"),
	HX_CSTRING("needsUpdate"),
	HX_CSTRING("finished"),
	HX_CSTRING("timer"),
	HX_CSTRING("looping"),
	HX_CSTRING("frameIndex"),
	HX_CSTRING("blendName"),
	HX_CSTRING("blueValue"),
	HX_CSTRING("greenValue"),
	HX_CSTRING("redValue"),
	HX_CSTRING("tint"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SheetAnimation_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SheetAnimation_obj::__mClass,"__mClass");
};

Class SheetAnimation_obj::__mClass;

void SheetAnimation_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.SheetAnimation"), hx::TCanCast< SheetAnimation_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SheetAnimation_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
