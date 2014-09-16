#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_graphics_shaders_BasicShader
#include <com/stencyl/graphics/shaders/BasicShader.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_shaders_GrainShader
#include <com/stencyl/graphics/shaders/GrainShader.h>
#endif
#ifndef INCLUDED_com_stencyl_graphics_shaders_PostProcess
#include <com/stencyl/graphics/shaders/PostProcess.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
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

Void GrainShader_obj::__construct(hx::Null< Float >  __o_grainAmount,hx::Null< bool >  __o_enableColors,hx::Null< Float >  __o_colorAmount,hx::Null< Float >  __o_grainSize,hx::Null< Float >  __o_luminance)
{
HX_STACK_PUSH("GrainShader::new","com/stencyl/graphics/shaders/GrainShader.hx",6);
Float grainAmount = __o_grainAmount.Default(0.05);
bool enableColors = __o_enableColors.Default(false);
Float colorAmount = __o_colorAmount.Default(0.6);
Float grainSize = __o_grainSize.Default(1.6);
Float luminance = __o_luminance.Default(1.0);
{
	HX_STACK_LINE(7)
	super::__construct();
	HX_STACK_LINE(9)
	::String script = HX_CSTRING("\n\t\t\t/*\n\t\t\t\tFilm Grain post-process shader v1.1\n\t\t\t\tMartins Upitis (martinsh) devlog-martinsh.blogspot.com\n\t\t\t*/\n\t\t\t\n\t\t\tuniform sampler2D uImage0; //rendered scene sampler\n\t\t\tuniform vec2 uResolution; //scene sampler resolution\n\t\t\tuniform float uTime;\n\t\t\t\n\t\t\tvarying vec2 vTexCoord;\n\t\t\t\n\t\t\tconst float permTexUnit = 1.0/256.0;        // Perm texture texel-size\n\t\t\tconst float permTexUnitHalf = 0.5/256.0;    // Half perm texture texel-size\n\t\t\t\n\t\t\tfloat width = uResolution.x;\n\t\t\tfloat height = uResolution.y;\n\t\t\t\n\t\t\tuniform float grainamount; //grain amount\n\t\t\tuniform float colored; //colored noise?\n\t\t\tuniform float coloramount;\n\t\t\tuniform float grainsize; //grain particle size (1.5 - 2.5)\n\t\t\tuniform float lumamount; //\n\t\t\t\n\t\t\t//a random texture generator, but you can also use a pre-computed perturbation texture\n\t\t\tvec4 rnm(in vec2 tc)\n\t\t\t{\n\t\t\t\tfloat noise =  sin(dot(tc + vec2(uTime,uTime),vec2(12.9898,78.233))) * 43758.5453;\n\t\t\t\n\t\t\t\tfloat noiseR =  fract(noise)*2.0-1.0;\n\t\t\t\tfloat noiseG =  fract(noise*1.2154)*2.0-1.0;\n\t\t\t\tfloat noiseB =  fract(noise*1.3453)*2.0-1.0;\n\t\t\t\tfloat noiseA =  fract(noise*1.3647)*2.0-1.0;\n\t\t\t\n\t\t\t\treturn vec4(noiseR,noiseG,noiseB,noiseA);\n\t\t\t}\n\t\t\t\n\t\t\tfloat fade(in float t) {\n\t\t\t\treturn t*t*t*(t*(t*6.0-15.0)+10.0);\n\t\t\t}\n\t\t\t\n\t\t\tfloat pnoise3D(in vec3 p)\n\t\t\t{\n\t\t\t\tvec3 pi = permTexUnit*floor(p)+permTexUnitHalf; // Integer part, scaled so +1 moves permTexUnit texel\n\t\t\t\t// and offset 1/2 texel to sample texel centers\n\t\t\t\tvec3 pf = fract(p);     // Fractional part for interpolation\n\t\t\t\n\t\t\t\t// Noise contributions from (x=0, y=0), z=0 and z=1\n\t\t\t\tfloat perm00 = rnm(pi.xy).a ;\n\t\t\t\tvec3  grad000 = rnm(vec2(perm00, pi.z)).rgb * 4.0 - 1.0;\n\t\t\t\tfloat n000 = dot(grad000, pf);\n\t\t\t\tvec3  grad001 = rnm(vec2(perm00, pi.z + permTexUnit)).rgb * 4.0 - 1.0;\n\t\t\t\tfloat n001 = dot(grad001, pf - vec3(0.0, 0.0, 1.0));\n\t\t\t\n\t\t\t\t// Noise contributions from (x=0, y=1), z=0 and z=1\n\t\t\t\tfloat perm01 = rnm(pi.xy + vec2(0.0, permTexUnit)).a ;\n\t\t\t\tvec3  grad010 = rnm(vec2(perm01, pi.z)).rgb * 4.0 - 1.0;\n\t\t\t\tfloat n010 = dot(grad010, pf - vec3(0.0, 1.0, 0.0));\n\t\t\t\tvec3  grad011 = rnm(vec2(perm01, pi.z + permTexUnit)).rgb * 4.0 - 1.0;\n\t\t\t\tfloat n011 = dot(grad011, pf - vec3(0.0, 1.0, 1.0));\n\t\t\t\n\t\t\t\t// Noise contributions from (x=1, y=0), z=0 and z=1\n\t\t\t\tfloat perm10 = rnm(pi.xy + vec2(permTexUnit, 0.0)).a ;\n\t\t\t\tvec3  grad100 = rnm(vec2(perm10, pi.z)).rgb * 4.0 - 1.0;\n\t\t\t\tfloat n100 = dot(grad100, pf - vec3(1.0, 0.0, 0.0));\n\t\t\t\tvec3  grad101 = rnm(vec2(perm10, pi.z + permTexUnit)).rgb * 4.0 - 1.0;\n\t\t\t\tfloat n101 = dot(grad101, pf - vec3(1.0, 0.0, 1.0));\n\t\t\t\n\t\t\t\t// Noise contributions from (x=1, y=1), z=0 and z=1\n\t\t\t\tfloat perm11 = rnm(pi.xy + vec2(permTexUnit, permTexUnit)).a ;\n\t\t\t\tvec3  grad110 = rnm(vec2(perm11, pi.z)).rgb * 4.0 - 1.0;\n\t\t\t\tfloat n110 = dot(grad110, pf - vec3(1.0, 1.0, 0.0));\n\t\t\t\tvec3  grad111 = rnm(vec2(perm11, pi.z + permTexUnit)).rgb * 4.0 - 1.0;\n\t\t\t\tfloat n111 = dot(grad111, pf - vec3(1.0, 1.0, 1.0));\n\t\t\t\n\t\t\t\t// Blend contributions along x\n\t\t\t\tvec4 n_x = mix(vec4(n000, n001, n010, n011), vec4(n100, n101, n110, n111), fade(pf.x));\n\t\t\t\n\t\t\t\t// Blend contributions along y\n\t\t\t\tvec2 n_xy = mix(n_x.xy, n_x.zw, fade(pf.y));\n\t\t\t\n\t\t\t\t// Blend contributions along z\n\t\t\t\tfloat n_xyz = mix(n_xy.x, n_xy.y, fade(pf.z));\n\t\t\t\n\t\t\t\t// We're done, return the final noise value.\n\t\t\t\treturn n_xyz;\n\t\t\t}\n\t\t\t\n\t\t\t//2d coordinate orientation thing\n\t\t\tvec2 coordRot(in vec2 tc, in float angle)\n\t\t\t{\n\t\t\t\tfloat aspect = width/height;\n\t\t\t\tfloat rotX = ((tc.x*2.0-1.0)*aspect*cos(angle)) - ((tc.y*2.0-1.0)*sin(angle));\n\t\t\t\tfloat rotY = ((tc.y*2.0-1.0)*cos(angle)) + ((tc.x*2.0-1.0)*aspect*sin(angle));\n\t\t\t\trotX = ((rotX/aspect)*0.5+0.5);\n\t\t\t\trotY = rotY*0.5+0.5;\n\t\t\t\treturn vec2(rotX,rotY);\n\t\t\t}\n\t\t\t\n\t\t\tvoid main()\n\t\t\t{\n\t\t\t\tvec2 texCoord = vTexCoord.st;\n\t\t\t\n\t\t\t\tvec3 rotOffset = vec3(1.425,3.892,5.835); //rotation offset values\n\t\t\t\tvec2 rotCoordsR = coordRot(texCoord, uTime + rotOffset.x);\n\t\t\t\tvec3 noise = vec3(pnoise3D(vec3(rotCoordsR*vec2(width/grainsize,height/grainsize),0.0)));\n\t\t\t\n\t\t\t\tif (colored == 1.0)\n\t\t\t\t{\n\t\t\t\t\tvec2 rotCoordsG = coordRot(texCoord, uTime + rotOffset.y);\n\t\t\t\t\tvec2 rotCoordsB = coordRot(texCoord, uTime + rotOffset.z);\n\t\t\t\t\tnoise.g = mix(noise.r,pnoise3D(vec3(rotCoordsG*vec2(width/grainsize,height/grainsize),1.0)),coloramount);\n\t\t\t\t\tnoise.b = mix(noise.r,pnoise3D(vec3(rotCoordsB*vec2(width/grainsize,height/grainsize),2.0)),coloramount);\n\t\t\t\t}\n\t\t\t\n\t\t\t\tvec3 col = texture2D(uImage0, texCoord).rgb;\n\t\t\t\n\t\t\t\t//noisiness response curve based on scene luminance\n\t\t\t\tvec3 lumcoeff = vec3(0.299,0.587,0.114);\n\t\t\t\tfloat luminance = mix(0.0,dot(col, lumcoeff),lumamount);\n\t\t\t\tfloat lum = smoothstep(0.2,0.0,luminance);\n\t\t\t\tlum += luminance;\n\t\t\t\n\t\t\t\n\t\t\t\tnoise = mix(noise,vec3(0.0),pow(lum,4.0));\n\t\t\t\tcol = col+noise*grainamount;\n\t\t\t\n\t\t\t\tgl_FragColor =  vec4(col,1.0);\n\t\t\t}\n\t\t");		HX_STACK_VAR(script,"script");
	HX_STACK_LINE(140)
	this->model = ::com::stencyl::graphics::shaders::PostProcess_obj::__new(script,true);
	HX_STACK_LINE(142)
	this->setGrainAmount(grainAmount);
	HX_STACK_LINE(143)
	this->setColorAmount(colorAmount);
	HX_STACK_LINE(144)
	this->setGrainSize(grainSize);
	HX_STACK_LINE(145)
	this->setLuminance(luminance);
	HX_STACK_LINE(147)
	if ((enableColors)){
		HX_STACK_LINE(148)
		this->enableColor();
	}
	else{
		HX_STACK_LINE(153)
		this->disableColor();
	}
}
;
	return null();
}

GrainShader_obj::~GrainShader_obj() { }

Dynamic GrainShader_obj::__CreateEmpty() { return  new GrainShader_obj; }
hx::ObjectPtr< GrainShader_obj > GrainShader_obj::__new(hx::Null< Float >  __o_grainAmount,hx::Null< bool >  __o_enableColors,hx::Null< Float >  __o_colorAmount,hx::Null< Float >  __o_grainSize,hx::Null< Float >  __o_luminance)
{  hx::ObjectPtr< GrainShader_obj > result = new GrainShader_obj();
	result->__construct(__o_grainAmount,__o_enableColors,__o_colorAmount,__o_grainSize,__o_luminance);
	return result;}

Dynamic GrainShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GrainShader_obj > result = new GrainShader_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void GrainShader_obj::setLuminance( Float amount){
{
		HX_STACK_PUSH("GrainShader::setLuminance","com/stencyl/graphics/shaders/GrainShader.hx",184);
		HX_STACK_THIS(this);
		HX_STACK_ARG(amount,"amount");
		HX_STACK_LINE(184)
		this->setProperty(HX_CSTRING("lumamount"),amount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GrainShader_obj,setLuminance,(void))

Void GrainShader_obj::setGrainSize( Float amount){
{
		HX_STACK_PUSH("GrainShader::setGrainSize","com/stencyl/graphics/shaders/GrainShader.hx",179);
		HX_STACK_THIS(this);
		HX_STACK_ARG(amount,"amount");
		HX_STACK_LINE(179)
		this->setProperty(HX_CSTRING("grainsize"),amount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GrainShader_obj,setGrainSize,(void))

Void GrainShader_obj::setColorAmount( Float amount){
{
		HX_STACK_PUSH("GrainShader::setColorAmount","com/stencyl/graphics/shaders/GrainShader.hx",174);
		HX_STACK_THIS(this);
		HX_STACK_ARG(amount,"amount");
		HX_STACK_LINE(174)
		this->setProperty(HX_CSTRING("coloramount"),amount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GrainShader_obj,setColorAmount,(void))

Void GrainShader_obj::setGrainAmount( Float amount){
{
		HX_STACK_PUSH("GrainShader::setGrainAmount","com/stencyl/graphics/shaders/GrainShader.hx",169);
		HX_STACK_THIS(this);
		HX_STACK_ARG(amount,"amount");
		HX_STACK_LINE(169)
		this->setProperty(HX_CSTRING("grainamount"),amount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GrainShader_obj,setGrainAmount,(void))

Void GrainShader_obj::disableColor( ){
{
		HX_STACK_PUSH("GrainShader::disableColor","com/stencyl/graphics/shaders/GrainShader.hx",164);
		HX_STACK_THIS(this);
		HX_STACK_LINE(164)
		this->setProperty(HX_CSTRING("colored"),(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GrainShader_obj,disableColor,(void))

Void GrainShader_obj::enableColor( ){
{
		HX_STACK_PUSH("GrainShader::enableColor","com/stencyl/graphics/shaders/GrainShader.hx",159);
		HX_STACK_THIS(this);
		HX_STACK_LINE(159)
		this->setProperty(HX_CSTRING("colored"),1.0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GrainShader_obj,enableColor,(void))


GrainShader_obj::GrainShader_obj()
{
}

void GrainShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GrainShader);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GrainShader_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic GrainShader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"enableColor") ) { return enableColor_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setLuminance") ) { return setLuminance_dyn(); }
		if (HX_FIELD_EQ(inName,"setGrainSize") ) { return setGrainSize_dyn(); }
		if (HX_FIELD_EQ(inName,"disableColor") ) { return disableColor_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setColorAmount") ) { return setColorAmount_dyn(); }
		if (HX_FIELD_EQ(inName,"setGrainAmount") ) { return setGrainAmount_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GrainShader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GrainShader_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setLuminance"),
	HX_CSTRING("setGrainSize"),
	HX_CSTRING("setColorAmount"),
	HX_CSTRING("setGrainAmount"),
	HX_CSTRING("disableColor"),
	HX_CSTRING("enableColor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GrainShader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GrainShader_obj::__mClass,"__mClass");
};

Class GrainShader_obj::__mClass;

void GrainShader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.graphics.shaders.GrainShader"), hx::TCanCast< GrainShader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void GrainShader_obj::__boot()
{
}

} // end namespace com
} // end namespace stencyl
} // end namespace graphics
} // end namespace shaders
