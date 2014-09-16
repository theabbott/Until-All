#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_shaders_PostProcess
#include <com/stencyl/graphics/shaders/PostProcess.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_shaders_Shader
#include <com/stencyl/graphics/shaders/Shader.h>
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
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_system_Capabilities
#include <flash/system/Capabilities.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_DirectRenderer
#include <openfl/display/DirectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLView
#include <openfl/display/OpenGLView.h>
#endif
#ifndef INCLUDED_openfl_gl_GL
#include <openfl/gl/GL.h>
#endif
#ifndef INCLUDED_openfl_gl_GLBuffer
#include <openfl/gl/GLBuffer.h>
#endif
#ifndef INCLUDED_openfl_gl_GLFramebuffer
#include <openfl/gl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_openfl_gl_GLObject
#include <openfl/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl_gl_GLProgram
#include <openfl/gl/GLProgram.h>
#endif
#ifndef INCLUDED_openfl_gl_GLRenderbuffer
#include <openfl/gl/GLRenderbuffer.h>
#endif
#ifndef INCLUDED_openfl_gl_GLTexture
#include <openfl/gl/GLTexture.h>
#endif
#ifndef INCLUDED_openfl_utils_ArrayBufferView
#include <openfl/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl_utils_Float32Array
#include <openfl/utils/Float32Array.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace com{
namespace stencyl{
namespace graphics{
namespace shaders{

Void PostProcess_obj::__construct(::String fragmentShader,hx::Null< bool >  __o_literalText)
{
HX_STACK_PUSH("PostProcess::new","com/stencyl/graphics/shaders/PostProcess.hx",46);
bool literalText = __o_literalText.Default(false);
{
	HX_STACK_LINE(315)
	this->timeScale = (int)1;
	HX_STACK_LINE(314)
	this->time = (int)0;
	HX_STACK_LINE(311)
	this->defaultFramebuffer = null();
	HX_STACK_LINE(55)
	super::__construct();
	HX_STACK_LINE(56)
	this->uniforms = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(59)
	this->defaultFramebuffer = ::openfl::gl::GLFramebuffer_obj::__new(::openfl::gl::GL_obj::get_version(),(int)1);
	HX_STACK_LINE(63)
	this->framebuffer = ::openfl::gl::GL_obj::createFramebuffer();
	HX_STACK_LINE(64)
	this->rebuild();
	HX_STACK_LINE(80)
	this->buffer = ::openfl::gl::GL_obj::createBuffer();
	HX_STACK_LINE(81)
	::openfl::gl::GL_obj::bindBuffer((int)34962,this->buffer);
	HX_STACK_LINE(82)
	::openfl::gl::GL_obj::bufferData((int)34962,::openfl::utils::Float32Array_obj::__new(Array_obj< Float >::__new().Add(-1.0).Add(-1.0).Add((int)0).Add((int)0).Add(1.0).Add(-1.0).Add((int)1).Add((int)0).Add(-1.0).Add(1.0).Add((int)0).Add((int)1).Add(1.0).Add(-1.0).Add((int)1).Add((int)0).Add(1.0).Add(1.0).Add((int)1).Add((int)1).Add(-1.0).Add(1.0).Add((int)0).Add((int)1),null(),null()),(int)35044);
	HX_STACK_LINE(83)
	::openfl::gl::GL_obj::bindBuffer((int)34962,null());
	HX_STACK_LINE(85)
	if ((literalText)){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","com/stencyl/graphics/shaders/PostProcess.hx",88);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("src") , HX_CSTRING("\n#ifdef GL_ES\n\tprecision mediump float;\n#endif\n\nattribute vec4 aVertex;\n\nattribute vec2 aTexCoord;\nvarying vec2 vTexCoord;\n\nvoid main() {\n\tvTexCoord = aTexCoord;\n\tgl_Position = vec4(aVertex.x, aVertex.y, 0.0, 1.0);\n}"),false);
					__result->Add(HX_CSTRING("fragment") , false,false);
					return __result;
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static Dynamic Block( ::String &fragmentShader){
				HX_STACK_PUSH("*::closure","com/stencyl/graphics/shaders/PostProcess.hx",89);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("src") , fragmentShader,false);
					__result->Add(HX_CSTRING("fragment") , true,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(86)
		this->shader = ::com::stencyl::graphics::shaders::Shader_obj::__new(Dynamic( Array_obj<Dynamic>::__new().Add(_Function_2_1::Block()).Add(_Function_2_2::Block(fragmentShader))));
	}
	else{
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","com/stencyl/graphics/shaders/PostProcess.hx",96);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("src") , HX_CSTRING("\n#ifdef GL_ES\n\tprecision mediump float;\n#endif\n\nattribute vec4 aVertex;\n\nattribute vec2 aTexCoord;\nvarying vec2 vTexCoord;\n\nvoid main() {\n\tvTexCoord = aTexCoord;\n\tgl_Position = vec4(aVertex.x, aVertex.y, 0.0, 1.0);\n}"),false);
					__result->Add(HX_CSTRING("fragment") , false,false);
					return __result;
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static Dynamic Block( ::String &fragmentShader){
				HX_STACK_PUSH("*::closure","com/stencyl/graphics/shaders/PostProcess.hx",97);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("src") , ::openfl::Assets_obj::getText(fragmentShader),false);
					__result->Add(HX_CSTRING("fragment") , true,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(94)
		this->shader = ::com::stencyl::graphics::shaders::Shader_obj::__new(Dynamic( Array_obj<Dynamic>::__new().Add(_Function_2_1::Block()).Add(_Function_2_2::Block(fragmentShader))));
	}
	HX_STACK_LINE(102)
	this->imageUniform = ::openfl::gl::GL_obj::getUniformLocation(this->shader->program,HX_CSTRING("uImage0"));
	HX_STACK_LINE(103)
	this->timeUniform = ::openfl::gl::GL_obj::getUniformLocation(this->shader->program,HX_CSTRING("uTime"));
	HX_STACK_LINE(104)
	this->resolutionUniform = ::openfl::gl::GL_obj::getUniformLocation(this->shader->program,HX_CSTRING("uResolution"));
	HX_STACK_LINE(106)
	this->vertexSlot = ::openfl::gl::GL_obj::getAttribLocation(this->shader->program,HX_CSTRING("aVertex"));
	HX_STACK_LINE(107)
	this->texCoordSlot = ::openfl::gl::GL_obj::getAttribLocation(this->shader->program,HX_CSTRING("aTexCoord"));
}
;
	return null();
}

PostProcess_obj::~PostProcess_obj() { }

Dynamic PostProcess_obj::__CreateEmpty() { return  new PostProcess_obj; }
hx::ObjectPtr< PostProcess_obj > PostProcess_obj::__new(::String fragmentShader,hx::Null< bool >  __o_literalText)
{  hx::ObjectPtr< PostProcess_obj > result = new PostProcess_obj();
	result->__construct(fragmentShader,__o_literalText);
	return result;}

Dynamic PostProcess_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PostProcess_obj > result = new PostProcess_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

HX_BEGIN_DEFAULT_FUNC(__default_render,PostProcess_obj)
Void run(::flash::geom::Rectangle rect){
{
		HX_STACK_PUSH("PostProcess::render","com/stencyl/graphics/shaders/PostProcess.hx",238);
		HX_STACK_THIS(this);
		HX_STACK_ARG(rect,"rect");
		HX_STACK_LINE(239)
		hx::AddEq(__this->time,(::com::stencyl::Engine_obj::elapsedTime * __this->timeScale));
		HX_STACK_LINE(240)
		::openfl::gl::GL_obj::bindFramebuffer((int)36160,__this->renderTo);
		HX_STACK_LINE(254)
		::openfl::gl::GL_obj::viewport((int)0,(int)0,::Std_obj::_int(::flash::system::Capabilities_obj::get_screenResolutionX()),::Std_obj::_int(::flash::system::Capabilities_obj::get_screenResolutionY()));
		HX_STACK_LINE(258)
		::openfl::gl::GL_obj::clear((int)16640);
		HX_STACK_LINE(260)
		::openfl::gl::GL_obj::useProgram(__this->shader->program);
		HX_STACK_LINE(262)
		::openfl::gl::GL_obj::enableVertexAttribArray(__this->vertexSlot);
		HX_STACK_LINE(263)
		::openfl::gl::GL_obj::enableVertexAttribArray(__this->texCoordSlot);
		HX_STACK_LINE(265)
		::openfl::gl::GL_obj::activeTexture((int)33984);
		HX_STACK_LINE(266)
		::openfl::gl::GL_obj::bindTexture((int)3553,__this->texture);
		HX_STACK_LINE(267)
		::openfl::gl::GL_obj::enable((int)3553);
		HX_STACK_LINE(269)
		::openfl::gl::GL_obj::bindBuffer((int)34962,__this->buffer);
		HX_STACK_LINE(270)
		::openfl::gl::GL_obj::vertexAttribPointer(__this->vertexSlot,(int)2,(int)5126,false,(int)16,(int)0);
		HX_STACK_LINE(271)
		::openfl::gl::GL_obj::vertexAttribPointer(__this->texCoordSlot,(int)2,(int)5126,false,(int)16,(int)8);
		HX_STACK_LINE(273)
		::openfl::gl::GL_obj::uniform1i(__this->imageUniform,(int)0);
		HX_STACK_LINE(274)
		::openfl::gl::GL_obj::uniform1f(__this->timeUniform,__this->time);
		HX_STACK_LINE(275)
		::openfl::gl::GL_obj::uniform2f(__this->resolutionUniform,::Std_obj::_int(::flash::Lib_obj::get_current()->get_stage()->get_stageWidth()),::Std_obj::_int(::flash::Lib_obj::get_current()->get_stage()->get_stageHeight()));
		HX_STACK_LINE(278)
		Dynamic it = __this->uniforms->iterator();		HX_STACK_VAR(it,"it");
		HX_STACK_LINE(279)
		Dynamic u = it->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(u,"u");
		HX_STACK_LINE(280)
		while(((u != null()))){
			HX_STACK_LINE(282)
			::openfl::gl::GL_obj::uniform1f(u->__Field(HX_CSTRING("id"),true),u->__Field(HX_CSTRING("value"),true));
			HX_STACK_LINE(283)
			u = it->__Field(HX_CSTRING("next"),true)();
		}
		HX_STACK_LINE(286)
		::openfl::gl::GL_obj::drawArrays((int)4,(int)0,(int)6);
		HX_STACK_LINE(288)
		::openfl::gl::GL_obj::bindBuffer((int)34962,null());
		HX_STACK_LINE(289)
		::openfl::gl::GL_obj::disable((int)3553);
		HX_STACK_LINE(290)
		::openfl::gl::GL_obj::bindTexture((int)3553,null());
		HX_STACK_LINE(292)
		::openfl::gl::GL_obj::disableVertexAttribArray(__this->vertexSlot);
		HX_STACK_LINE(293)
		::openfl::gl::GL_obj::disableVertexAttribArray(__this->texCoordSlot);
		HX_STACK_LINE(295)
		::openfl::gl::GL_obj::useProgram(null());
		HX_STACK_LINE(298)
		if (((::openfl::gl::GL_obj::getError() == (int)1286))){
			HX_STACK_LINE(299)
			::haxe::Log_obj::trace(HX_CSTRING("INVALID_FRAMEBUFFER_OPERATION!!"),hx::SourceInfo(HX_CSTRING("PostProcess.hx"),300,HX_CSTRING("com.stencyl.graphics.shaders.PostProcess"),HX_CSTRING("render")));
		}
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

Void PostProcess_obj::capture( ){
{
		HX_STACK_PUSH("PostProcess::capture","com/stencyl/graphics/shaders/PostProcess.hx",226);
		HX_STACK_THIS(this);
		HX_STACK_LINE(227)
		::openfl::gl::GL_obj::bindFramebuffer((int)36160,this->framebuffer);
		HX_STACK_LINE(230)
		::openfl::gl::GL_obj::viewport((int)0,(int)0,::Std_obj::_int(::flash::Lib_obj::get_current()->get_stage()->get_stageWidth()),::Std_obj::_int(::flash::Lib_obj::get_current()->get_stage()->get_stageHeight()));
		HX_STACK_LINE(231)
		::openfl::gl::GL_obj::clear((int)16640);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PostProcess_obj,capture,(void))

Void PostProcess_obj::createTexture( int width,int height){
{
		HX_STACK_PUSH("PostProcess::createTexture","com/stencyl/graphics/shaders/PostProcess.hx",208);
		HX_STACK_THIS(this);
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(209)
		this->texture = ::openfl::gl::GL_obj::createTexture();
		HX_STACK_LINE(210)
		::openfl::gl::GL_obj::bindTexture((int)3553,this->texture);
		HX_STACK_LINE(211)
		::openfl::gl::GL_obj::texImage2D((int)3553,(int)0,(int)6407,width,height,(int)0,(int)6407,(int)5121,null());
		HX_STACK_LINE(213)
		::openfl::gl::GL_obj::texParameteri((int)3553,(int)10242,(int)33071);
		HX_STACK_LINE(214)
		::openfl::gl::GL_obj::texParameteri((int)3553,(int)10243,(int)33071);
		HX_STACK_LINE(215)
		::openfl::gl::GL_obj::texParameteri((int)3553,(int)10241,(int)9729);
		HX_STACK_LINE(216)
		::openfl::gl::GL_obj::texParameteri((int)3553,(int)10240,(int)9729);
		HX_STACK_LINE(219)
		::openfl::gl::GL_obj::framebufferTexture2D((int)36160,(int)36064,(int)3553,this->texture,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PostProcess_obj,createTexture,(void))

Void PostProcess_obj::createRenderbuffer( int width,int height){
{
		HX_STACK_PUSH("PostProcess::createRenderbuffer","com/stencyl/graphics/shaders/PostProcess.hx",196);
		HX_STACK_THIS(this);
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(198)
		this->renderbuffer = ::openfl::gl::GL_obj::createRenderbuffer();
		HX_STACK_LINE(199)
		::openfl::gl::GL_obj::bindRenderbuffer((int)36161,this->renderbuffer);
		HX_STACK_LINE(200)
		::openfl::gl::GL_obj::renderbufferStorage((int)36161,(int)33189,width,height);
		HX_STACK_LINE(203)
		::openfl::gl::GL_obj::framebufferRenderbuffer((int)36160,(int)36096,(int)36161,this->renderbuffer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PostProcess_obj,createRenderbuffer,(void))

Void PostProcess_obj::rebuild( ){
{
		HX_STACK_PUSH("PostProcess::rebuild","com/stencyl/graphics/shaders/PostProcess.hx",168);
		HX_STACK_THIS(this);
		HX_STACK_LINE(169)
		::openfl::gl::GL_obj::bindFramebuffer((int)36160,this->framebuffer);
		HX_STACK_LINE(171)
		if (((this->texture != null()))){
			HX_STACK_LINE(171)
			::openfl::gl::GL_obj::deleteTexture(this->texture);
		}
		HX_STACK_LINE(172)
		if (((this->renderbuffer != null()))){
			HX_STACK_LINE(172)
			::openfl::gl::GL_obj::deleteRenderbuffer(this->renderbuffer);
		}
		HX_STACK_LINE(187)
		{
			HX_STACK_LINE(187)
			this->texture = ::openfl::gl::GL_obj::createTexture();
			HX_STACK_LINE(187)
			::openfl::gl::GL_obj::bindTexture((int)3553,this->texture);
			HX_STACK_LINE(187)
			::openfl::gl::GL_obj::texImage2D((int)3553,(int)0,(int)6407,::Std_obj::_int(::flash::system::Capabilities_obj::get_screenResolutionX()),::Std_obj::_int(::flash::system::Capabilities_obj::get_screenResolutionY()),(int)0,(int)6407,(int)5121,null());
			HX_STACK_LINE(187)
			::openfl::gl::GL_obj::texParameteri((int)3553,(int)10242,(int)33071);
			HX_STACK_LINE(187)
			::openfl::gl::GL_obj::texParameteri((int)3553,(int)10243,(int)33071);
			HX_STACK_LINE(187)
			::openfl::gl::GL_obj::texParameteri((int)3553,(int)10241,(int)9729);
			HX_STACK_LINE(187)
			::openfl::gl::GL_obj::texParameteri((int)3553,(int)10240,(int)9729);
			HX_STACK_LINE(187)
			::openfl::gl::GL_obj::framebufferTexture2D((int)36160,(int)36064,(int)3553,this->texture,(int)0);
		}
		HX_STACK_LINE(188)
		{
			HX_STACK_LINE(188)
			this->renderbuffer = ::openfl::gl::GL_obj::createRenderbuffer();
			HX_STACK_LINE(188)
			::openfl::gl::GL_obj::bindRenderbuffer((int)36161,this->renderbuffer);
			HX_STACK_LINE(188)
			::openfl::gl::GL_obj::renderbufferStorage((int)36161,(int)33189,::Std_obj::_int(::flash::system::Capabilities_obj::get_screenResolutionX()),::Std_obj::_int(::flash::system::Capabilities_obj::get_screenResolutionY()));
			HX_STACK_LINE(188)
			::openfl::gl::GL_obj::framebufferRenderbuffer((int)36160,(int)36096,(int)36161,this->renderbuffer);
		}
		HX_STACK_LINE(191)
		::openfl::gl::GL_obj::bindFramebuffer((int)36160,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PostProcess_obj,rebuild,(void))

Void PostProcess_obj::enable( ::com::stencyl::graphics::shaders::PostProcess to){
{
		HX_STACK_PUSH("PostProcess::enable","com/stencyl/graphics/shaders/PostProcess.hx",155);
		HX_STACK_THIS(this);
		HX_STACK_ARG(to,"to");
		HX_STACK_LINE(156)
		int index = ::com::stencyl::Engine_obj::engine->root->get_numChildren();		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(158)
		if (((index < (int)0))){
			HX_STACK_LINE(158)
			index = (int)0;
		}
		HX_STACK_LINE(159)
		::com::stencyl::Engine_obj::engine->root->addChildAt(hx::ObjectPtr<OBJ_>(this),index);
		HX_STACK_LINE(161)
		this->set_to(to);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PostProcess_obj,enable,(void))

::com::stencyl::graphics::shaders::PostProcess PostProcess_obj::set_to( ::com::stencyl::graphics::shaders::PostProcess value){
	HX_STACK_PUSH("PostProcess::set_to","com/stencyl/graphics/shaders/PostProcess.hx",145);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(146)
	this->renderTo = (  (((value == null()))) ? ::openfl::gl::GLFramebuffer(this->defaultFramebuffer) : ::openfl::gl::GLFramebuffer(value->framebuffer) );
	HX_STACK_LINE(147)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(PostProcess_obj,set_to,return )

Void PostProcess_obj::tweenUniform( ::String name,Float targetValue,hx::Null< Float >  __o_duration,Dynamic easing){
Float duration = __o_duration.Default(1);
	HX_STACK_PUSH("PostProcess::tweenUniform","com/stencyl/graphics/shaders/PostProcess.hx",130);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(targetValue,"targetValue");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(easing,"easing");
{
		HX_STACK_LINE(130)
		if ((this->uniforms->exists(name))){
			HX_STACK_LINE(133)
			Dynamic uniform = this->uniforms->get(name);		HX_STACK_VAR(uniform,"uniform");
			struct _Function_2_1{
				inline static Dynamic Block( Float &targetValue){
					HX_STACK_PUSH("*::closure","com/stencyl/graphics/shaders/PostProcess.hx",134);
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("value") , targetValue,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(134)
			::motion::Actuate_obj::tween(uniform,duration,_Function_2_1::Block(targetValue),null(),null())->ease(easing);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(PostProcess_obj,tweenUniform,(void))

Void PostProcess_obj::setUniform( ::String uniform,Float value){
{
		HX_STACK_PUSH("PostProcess::setUniform","com/stencyl/graphics/shaders/PostProcess.hx",116);
		HX_STACK_THIS(this);
		HX_STACK_ARG(uniform,"uniform");
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(116)
		if ((this->uniforms->exists(uniform))){
			HX_STACK_LINE(119)
			Dynamic uniform1 = this->uniforms->get(uniform);		HX_STACK_VAR(uniform1,"uniform1");
			HX_STACK_LINE(120)
			uniform1->__FieldRef(HX_CSTRING("value")) = value;
		}
		else{
			HX_STACK_LINE(124)
			int id = ::openfl::gl::GL_obj::getUniformLocation(this->shader->program,uniform);		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(125)
			if (((id != (int)-1))){
				struct _Function_3_1{
					inline static Dynamic Block( Float &value,int &id){
						HX_STACK_PUSH("*::closure","com/stencyl/graphics/shaders/PostProcess.hx",125);
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("id") , id,false);
							__result->Add(HX_CSTRING("value") , value,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(125)
				this->uniforms->set(uniform,_Function_3_1::Block(value,id));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PostProcess_obj,setUniform,(void))

::String PostProcess_obj::vertexShader;

Array< Float > PostProcess_obj::get_vertices( ){
	HX_STACK_PUSH("PostProcess::get_vertices","com/stencyl/graphics/shaders/PostProcess.hx",342);
	HX_STACK_LINE(342)
	return Array_obj< Float >::__new().Add(-1.0).Add(-1.0).Add((int)0).Add((int)0).Add(1.0).Add(-1.0).Add((int)1).Add((int)0).Add(-1.0).Add(1.0).Add((int)0).Add((int)1).Add(1.0).Add(-1.0).Add((int)1).Add((int)0).Add(1.0).Add(1.0).Add((int)1).Add((int)1).Add(-1.0).Add(1.0).Add((int)0).Add((int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PostProcess_obj,get_vertices,return )


PostProcess_obj::PostProcess_obj()
{
	render = new __default_render(this);
}

void PostProcess_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PostProcess);
	HX_MARK_MEMBER_NAME(uniforms,"uniforms");
	HX_MARK_MEMBER_NAME(timeUniform,"timeUniform");
	HX_MARK_MEMBER_NAME(resolutionUniform,"resolutionUniform");
	HX_MARK_MEMBER_NAME(imageUniform,"imageUniform");
	HX_MARK_MEMBER_NAME(texCoordSlot,"texCoordSlot");
	HX_MARK_MEMBER_NAME(vertexSlot,"vertexSlot");
	HX_MARK_MEMBER_NAME(timeScale,"timeScale");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(defaultFramebuffer,"defaultFramebuffer");
	HX_MARK_MEMBER_NAME(renderTo,"renderTo");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(renderbuffer,"renderbuffer");
	HX_MARK_MEMBER_NAME(framebuffer,"framebuffer");
	HX_MARK_MEMBER_NAME(render,"render");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PostProcess_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(uniforms,"uniforms");
	HX_VISIT_MEMBER_NAME(timeUniform,"timeUniform");
	HX_VISIT_MEMBER_NAME(resolutionUniform,"resolutionUniform");
	HX_VISIT_MEMBER_NAME(imageUniform,"imageUniform");
	HX_VISIT_MEMBER_NAME(texCoordSlot,"texCoordSlot");
	HX_VISIT_MEMBER_NAME(vertexSlot,"vertexSlot");
	HX_VISIT_MEMBER_NAME(timeScale,"timeScale");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(defaultFramebuffer,"defaultFramebuffer");
	HX_VISIT_MEMBER_NAME(renderTo,"renderTo");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(renderbuffer,"renderbuffer");
	HX_VISIT_MEMBER_NAME(framebuffer,"framebuffer");
	HX_VISIT_MEMBER_NAME(render,"render");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic PostProcess_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		if (HX_FIELD_EQ(inName,"render") ) { return render; }
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		if (HX_FIELD_EQ(inName,"set_to") ) { return set_to_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		if (HX_FIELD_EQ(inName,"capture") ) { return capture_dyn(); }
		if (HX_FIELD_EQ(inName,"rebuild") ) { return rebuild_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { return get_vertices(); }
		if (HX_FIELD_EQ(inName,"uniforms") ) { return uniforms; }
		if (HX_FIELD_EQ(inName,"renderTo") ) { return renderTo; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timeScale") ) { return timeScale; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"vertexSlot") ) { return vertexSlot; }
		if (HX_FIELD_EQ(inName,"setUniform") ) { return setUniform_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"timeUniform") ) { return timeUniform; }
		if (HX_FIELD_EQ(inName,"framebuffer") ) { return framebuffer; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_vertices") ) { return get_vertices_dyn(); }
		if (HX_FIELD_EQ(inName,"imageUniform") ) { return imageUniform; }
		if (HX_FIELD_EQ(inName,"texCoordSlot") ) { return texCoordSlot; }
		if (HX_FIELD_EQ(inName,"renderbuffer") ) { return renderbuffer; }
		if (HX_FIELD_EQ(inName,"tweenUniform") ) { return tweenUniform_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createTexture") ) { return createTexture_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resolutionUniform") ) { return resolutionUniform; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"defaultFramebuffer") ) { return defaultFramebuffer; }
		if (HX_FIELD_EQ(inName,"createRenderbuffer") ) { return createRenderbuffer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PostProcess_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"to") ) { return set_to(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::openfl::gl::GLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast< ::com::stencyl::graphics::shaders::Shader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"render") ) { render=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::openfl::gl::GLTexture >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uniforms") ) { uniforms=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderTo") ) { renderTo=inValue.Cast< ::openfl::gl::GLFramebuffer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timeScale") ) { timeScale=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"vertexSlot") ) { vertexSlot=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"timeUniform") ) { timeUniform=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framebuffer") ) { framebuffer=inValue.Cast< ::openfl::gl::GLFramebuffer >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"imageUniform") ) { imageUniform=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texCoordSlot") ) { texCoordSlot=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderbuffer") ) { renderbuffer=inValue.Cast< ::openfl::gl::GLRenderbuffer >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resolutionUniform") ) { resolutionUniform=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"defaultFramebuffer") ) { defaultFramebuffer=inValue.Cast< ::openfl::gl::GLFramebuffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PostProcess_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("uniforms"));
	outFields->push(HX_CSTRING("timeUniform"));
	outFields->push(HX_CSTRING("resolutionUniform"));
	outFields->push(HX_CSTRING("imageUniform"));
	outFields->push(HX_CSTRING("texCoordSlot"));
	outFields->push(HX_CSTRING("vertexSlot"));
	outFields->push(HX_CSTRING("timeScale"));
	outFields->push(HX_CSTRING("time"));
	outFields->push(HX_CSTRING("defaultFramebuffer"));
	outFields->push(HX_CSTRING("renderTo"));
	outFields->push(HX_CSTRING("buffer"));
	outFields->push(HX_CSTRING("shader"));
	outFields->push(HX_CSTRING("texture"));
	outFields->push(HX_CSTRING("renderbuffer"));
	outFields->push(HX_CSTRING("framebuffer"));
	outFields->push(HX_CSTRING("to"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("vertexShader"),
	HX_CSTRING("get_vertices"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("uniforms"),
	HX_CSTRING("timeUniform"),
	HX_CSTRING("resolutionUniform"),
	HX_CSTRING("imageUniform"),
	HX_CSTRING("texCoordSlot"),
	HX_CSTRING("vertexSlot"),
	HX_CSTRING("timeScale"),
	HX_CSTRING("time"),
	HX_CSTRING("defaultFramebuffer"),
	HX_CSTRING("renderTo"),
	HX_CSTRING("buffer"),
	HX_CSTRING("shader"),
	HX_CSTRING("texture"),
	HX_CSTRING("renderbuffer"),
	HX_CSTRING("framebuffer"),
	HX_CSTRING("render"),
	HX_CSTRING("capture"),
	HX_CSTRING("createTexture"),
	HX_CSTRING("createRenderbuffer"),
	HX_CSTRING("rebuild"),
	HX_CSTRING("enable"),
	HX_CSTRING("set_to"),
	HX_CSTRING("tweenUniform"),
	HX_CSTRING("setUniform"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PostProcess_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PostProcess_obj::vertexShader,"vertexShader");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PostProcess_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PostProcess_obj::vertexShader,"vertexShader");
};

Class PostProcess_obj::__mClass;

void PostProcess_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.shaders.PostProcess"), hx::TCanCast< PostProcess_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PostProcess_obj::__boot()
{
	vertexShader= HX_CSTRING("\n#ifdef GL_ES\n\tprecision mediump float;\n#endif\n\nattribute vec4 aVertex;\n\nattribute vec2 aTexCoord;\nvarying vec2 vTexCoord;\n\nvoid main() {\n\tvTexCoord = aTexCoord;\n\tgl_Position = vec4(aVertex.x, aVertex.y, 0.0, 1.0);\n}");
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders
