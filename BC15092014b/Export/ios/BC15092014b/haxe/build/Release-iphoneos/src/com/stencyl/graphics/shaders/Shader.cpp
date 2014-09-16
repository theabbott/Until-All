#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_graphics_shaders_Shader
#include <com/stencyl/graphics/shaders/Shader.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_gl_GL
#include <openfl/gl/GL.h>
#endif
#ifndef INCLUDED_openfl_gl_GLObject
#include <openfl/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl_gl_GLProgram
#include <openfl/gl/GLProgram.h>
#endif
#ifndef INCLUDED_openfl_gl_GLShader
#include <openfl/gl/GLShader.h>
#endif
namespace com{
namespace stencyl{
namespace graphics{
namespace shaders{

Void Shader_obj::__construct(Dynamic sources)
{
HX_STACK_PUSH("Shader::new","com/stencyl/graphics/shaders/Shader.hx",45);
{
	HX_STACK_LINE(46)
	this->program = ::openfl::gl::GL_obj::createProgram();
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(48)
		while(((_g < sources->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(48)
			Dynamic source = sources->__GetItem(_g);		HX_STACK_VAR(source,"source");
			HX_STACK_LINE(48)
			++(_g);
			HX_STACK_LINE(50)
			::openfl::gl::GLShader shader = this->compile(source->__Field(HX_CSTRING("src"),true),(  ((source->__Field(HX_CSTRING("fragment"),true))) ? int((int)35632) : int((int)35633) ));		HX_STACK_VAR(shader,"shader");
			HX_STACK_LINE(51)
			if (((shader == null()))){
				HX_STACK_LINE(51)
				return null();
			}
			HX_STACK_LINE(52)
			::openfl::gl::GL_obj::attachShader(this->program,shader);
			HX_STACK_LINE(53)
			::openfl::gl::GL_obj::deleteShader(shader);
		}
	}
	HX_STACK_LINE(56)
	::openfl::gl::GL_obj::linkProgram(this->program);
	HX_STACK_LINE(58)
	if (((::openfl::gl::GL_obj::getProgramParameter(this->program,(int)35714) == (int)0))){
		HX_STACK_LINE(60)
		::haxe::Log_obj::trace(::openfl::gl::GL_obj::getProgramInfoLog(this->program),hx::SourceInfo(HX_CSTRING("Shader.hx"),60,HX_CSTRING("com.stencyl.graphics.shaders.Shader"),HX_CSTRING("new")));
		HX_STACK_LINE(61)
		::haxe::Log_obj::trace((HX_CSTRING("VALIDATE_STATUS: ") + ::openfl::gl::GL_obj::getProgramParameter(this->program,(int)35715)),hx::SourceInfo(HX_CSTRING("Shader.hx"),61,HX_CSTRING("com.stencyl.graphics.shaders.Shader"),HX_CSTRING("new")));
		HX_STACK_LINE(62)
		::haxe::Log_obj::trace((HX_CSTRING("ERROR: ") + ::openfl::gl::GL_obj::getError()),hx::SourceInfo(HX_CSTRING("Shader.hx"),62,HX_CSTRING("com.stencyl.graphics.shaders.Shader"),HX_CSTRING("new")));
		HX_STACK_LINE(63)
		return null();
	}
}
;
	return null();
}

Shader_obj::~Shader_obj() { }

Dynamic Shader_obj::__CreateEmpty() { return  new Shader_obj; }
hx::ObjectPtr< Shader_obj > Shader_obj::__new(Dynamic sources)
{  hx::ObjectPtr< Shader_obj > result = new Shader_obj();
	result->__construct(sources);
	return result;}

Dynamic Shader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shader_obj > result = new Shader_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Shader_obj::bind( ){
{
		HX_STACK_PUSH("Shader::bind","com/stencyl/graphics/shaders/Shader.hx",109);
		HX_STACK_THIS(this);
		HX_STACK_LINE(109)
		::openfl::gl::GL_obj::useProgram(this->program);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,bind,(void))

int Shader_obj::uniform( ::String u){
	HX_STACK_PUSH("Shader::uniform","com/stencyl/graphics/shaders/Shader.hx",101);
	HX_STACK_THIS(this);
	HX_STACK_ARG(u,"u");
	HX_STACK_LINE(101)
	return ::openfl::gl::GL_obj::getUniformLocation(this->program,u);
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,uniform,return )

int Shader_obj::attribute( ::String a){
	HX_STACK_PUSH("Shader::attribute","com/stencyl/graphics/shaders/Shader.hx",92);
	HX_STACK_THIS(this);
	HX_STACK_ARG(a,"a");
	HX_STACK_LINE(92)
	return ::openfl::gl::GL_obj::getAttribLocation(this->program,a);
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,attribute,return )

::openfl::gl::GLShader Shader_obj::compile( ::String source,int type){
	HX_STACK_PUSH("Shader::compile","com/stencyl/graphics/shaders/Shader.hx",73);
	HX_STACK_THIS(this);
	HX_STACK_ARG(source,"source");
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(74)
	::openfl::gl::GLShader shader = ::openfl::gl::GL_obj::createShader(type);		HX_STACK_VAR(shader,"shader");
	HX_STACK_LINE(75)
	::openfl::gl::GL_obj::shaderSource(shader,source);
	HX_STACK_LINE(76)
	::openfl::gl::GL_obj::compileShader(shader);
	HX_STACK_LINE(78)
	if (((::openfl::gl::GL_obj::getShaderParameter(shader,(int)35713) == (int)0))){
		HX_STACK_LINE(80)
		::haxe::Log_obj::trace(::openfl::gl::GL_obj::getShaderInfoLog(shader),hx::SourceInfo(HX_CSTRING("Shader.hx"),80,HX_CSTRING("com.stencyl.graphics.shaders.Shader"),HX_CSTRING("compile")));
		HX_STACK_LINE(81)
		return null();
	}
	HX_STACK_LINE(84)
	return shader;
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,compile,return )


Shader_obj::Shader_obj()
{
}

void Shader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shader);
	HX_MARK_MEMBER_NAME(program,"program");
	HX_MARK_END_CLASS();
}

void Shader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(program,"program");
}

Dynamic Shader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { return program; }
		if (HX_FIELD_EQ(inName,"uniform") ) { return uniform_dyn(); }
		if (HX_FIELD_EQ(inName,"compile") ) { return compile_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"attribute") ) { return attribute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Shader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { program=inValue.Cast< ::openfl::gl::GLProgram >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Shader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("program"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("program"),
	HX_CSTRING("bind"),
	HX_CSTRING("uniform"),
	HX_CSTRING("attribute"),
	HX_CSTRING("compile"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
};

Class Shader_obj::__mClass;

void Shader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.shaders.Shader"), hx::TCanCast< Shader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Shader_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders
