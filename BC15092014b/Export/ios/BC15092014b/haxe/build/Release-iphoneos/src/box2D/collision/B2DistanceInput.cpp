#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_B2DistanceInput
#include <box2D/collision/B2DistanceInput.h>
#endif
#ifndef INCLUDED_box2D_collision_B2DistanceProxy
#include <box2D/collision/B2DistanceProxy.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Transform
#include <box2D/common/math/B2Transform.h>
#endif
namespace box2D{
namespace collision{

Void B2DistanceInput_obj::__construct()
{
HX_STACK_PUSH("B2DistanceInput::new","box2D/collision/B2DistanceInput.hx",29);
{
}
;
	return null();
}

B2DistanceInput_obj::~B2DistanceInput_obj() { }

Dynamic B2DistanceInput_obj::__CreateEmpty() { return  new B2DistanceInput_obj; }
hx::ObjectPtr< B2DistanceInput_obj > B2DistanceInput_obj::__new()
{  hx::ObjectPtr< B2DistanceInput_obj > result = new B2DistanceInput_obj();
	result->__construct();
	return result;}

Dynamic B2DistanceInput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< B2DistanceInput_obj > result = new B2DistanceInput_obj();
	result->__construct();
	return result;}


B2DistanceInput_obj::B2DistanceInput_obj()
{
}

void B2DistanceInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2DistanceInput);
	HX_MARK_MEMBER_NAME(useRadii,"useRadii");
	HX_MARK_MEMBER_NAME(transformB,"transformB");
	HX_MARK_MEMBER_NAME(transformA,"transformA");
	HX_MARK_MEMBER_NAME(proxyB,"proxyB");
	HX_MARK_MEMBER_NAME(proxyA,"proxyA");
	HX_MARK_END_CLASS();
}

void B2DistanceInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(useRadii,"useRadii");
	HX_VISIT_MEMBER_NAME(transformB,"transformB");
	HX_VISIT_MEMBER_NAME(transformA,"transformA");
	HX_VISIT_MEMBER_NAME(proxyB,"proxyB");
	HX_VISIT_MEMBER_NAME(proxyA,"proxyA");
}

Dynamic B2DistanceInput_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"proxyB") ) { return proxyB; }
		if (HX_FIELD_EQ(inName,"proxyA") ) { return proxyA; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"useRadii") ) { return useRadii; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"transformB") ) { return transformB; }
		if (HX_FIELD_EQ(inName,"transformA") ) { return transformA; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic B2DistanceInput_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"proxyB") ) { proxyB=inValue.Cast< ::box2D::collision::B2DistanceProxy >(); return inValue; }
		if (HX_FIELD_EQ(inName,"proxyA") ) { proxyA=inValue.Cast< ::box2D::collision::B2DistanceProxy >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"useRadii") ) { useRadii=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"transformB") ) { transformB=inValue.Cast< ::box2D::common::math::B2Transform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transformA") ) { transformA=inValue.Cast< ::box2D::common::math::B2Transform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2DistanceInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("useRadii"));
	outFields->push(HX_CSTRING("transformB"));
	outFields->push(HX_CSTRING("transformA"));
	outFields->push(HX_CSTRING("proxyB"));
	outFields->push(HX_CSTRING("proxyA"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("useRadii"),
	HX_CSTRING("transformB"),
	HX_CSTRING("transformA"),
	HX_CSTRING("proxyB"),
	HX_CSTRING("proxyA"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2DistanceInput_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2DistanceInput_obj::__mClass,"__mClass");
};

Class B2DistanceInput_obj::__mClass;

void B2DistanceInput_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("box2D.collision.B2DistanceInput"), hx::TCanCast< B2DistanceInput_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void B2DistanceInput_obj::__boot()
{
}

} // end namespace box2D
} // end namespace collision
