#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_crypto_BaseCode
#include <haxe/crypto/BaseCode.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
namespace haxe{
namespace crypto{

Void BaseCode_obj::__construct(::haxe::io::Bytes base)
{
HX_STACK_PUSH("BaseCode::new","haxe/crypto/BaseCode.hx",33);
{
	HX_STACK_LINE(34)
	int len = base->length;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(35)
	int nbits = (int)1;		HX_STACK_VAR(nbits,"nbits");
	HX_STACK_LINE(36)
	while(((len > (int((int)1) << int(nbits))))){
		HX_STACK_LINE(37)
		(nbits)++;
	}
	HX_STACK_LINE(38)
	if (((bool((nbits > (int)8)) || bool((len != (int((int)1) << int(nbits))))))){
		HX_STACK_LINE(39)
		hx::Throw (HX_CSTRING("BaseCode : base length must be a power of two."));
	}
	HX_STACK_LINE(40)
	this->base = base;
	HX_STACK_LINE(41)
	this->nbits = nbits;
}
;
	return null();
}

BaseCode_obj::~BaseCode_obj() { }

Dynamic BaseCode_obj::__CreateEmpty() { return  new BaseCode_obj; }
hx::ObjectPtr< BaseCode_obj > BaseCode_obj::__new(::haxe::io::Bytes base)
{  hx::ObjectPtr< BaseCode_obj > result = new BaseCode_obj();
	result->__construct(base);
	return result;}

Dynamic BaseCode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BaseCode_obj > result = new BaseCode_obj();
	result->__construct(inArgs[0]);
	return result;}

::haxe::io::Bytes BaseCode_obj::decodeBytes( ::haxe::io::Bytes b){
	HX_STACK_PUSH("BaseCode::decodeBytes","haxe/crypto/BaseCode.hx",81);
	HX_STACK_THIS(this);
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(85)
	int nbits = this->nbits;		HX_STACK_VAR(nbits,"nbits");
	HX_STACK_LINE(86)
	::haxe::io::Bytes base = this->base;		HX_STACK_VAR(base,"base");
	HX_STACK_LINE(87)
	if (((this->tbl == null()))){
		HX_STACK_LINE(87)
		this->initTable();
	}
	HX_STACK_LINE(88)
	Array< int > tbl = this->tbl;		HX_STACK_VAR(tbl,"tbl");
	HX_STACK_LINE(89)
	int size = (int((b->length * nbits)) >> int((int)3));		HX_STACK_VAR(size,"size");
	HX_STACK_LINE(90)
	::haxe::io::Bytes out = ::haxe::io::Bytes_obj::alloc(size);		HX_STACK_VAR(out,"out");
	HX_STACK_LINE(91)
	int buf = (int)0;		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(92)
	int curbits = (int)0;		HX_STACK_VAR(curbits,"curbits");
	HX_STACK_LINE(93)
	int pin = (int)0;		HX_STACK_VAR(pin,"pin");
	HX_STACK_LINE(94)
	int pout = (int)0;		HX_STACK_VAR(pout,"pout");
	HX_STACK_LINE(95)
	while(((pout < size))){
		HX_STACK_LINE(96)
		while(((curbits < (int)8))){
			HX_STACK_LINE(97)
			hx::AddEq(curbits,nbits);
			HX_STACK_LINE(98)
			hx::ShlEq(buf,nbits);
			HX_STACK_LINE(99)
			int i = tbl->__get(b->b->__get((pin)++));		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(100)
			if (((i == (int)-1))){
				HX_STACK_LINE(101)
				hx::Throw (HX_CSTRING("BaseCode : invalid encoded char"));
			}
			HX_STACK_LINE(102)
			hx::OrEq(buf,i);
		}
		HX_STACK_LINE(104)
		hx::SubEq(curbits,(int)8);
		HX_STACK_LINE(105)
		out->b[(pout)++] = (int((int(buf) >> int(curbits))) & int((int)255));
	}
	HX_STACK_LINE(107)
	return out;
}


HX_DEFINE_DYNAMIC_FUNC1(BaseCode_obj,decodeBytes,return )

Void BaseCode_obj::initTable( ){
{
		HX_STACK_PUSH("BaseCode::initTable","haxe/crypto/BaseCode.hx",72);
		HX_STACK_THIS(this);
		HX_STACK_LINE(73)
		Array< int > tbl = Array_obj< int >::__new();		HX_STACK_VAR(tbl,"tbl");
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(74)
			while(((_g < (int)256))){
				HX_STACK_LINE(74)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(75)
				tbl[i] = (int)-1;
			}
		}
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->base->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(76)
			while(((_g1 < _g))){
				HX_STACK_LINE(76)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(77)
				tbl[this->base->b->__get(i)] = i;
			}
		}
		HX_STACK_LINE(78)
		this->tbl = tbl;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseCode_obj,initTable,(void))

::haxe::io::Bytes BaseCode_obj::encodeBytes( ::haxe::io::Bytes b){
	HX_STACK_PUSH("BaseCode::encodeBytes","haxe/crypto/BaseCode.hx",44);
	HX_STACK_THIS(this);
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(48)
	int nbits = this->nbits;		HX_STACK_VAR(nbits,"nbits");
	HX_STACK_LINE(49)
	::haxe::io::Bytes base = this->base;		HX_STACK_VAR(base,"base");
	HX_STACK_LINE(50)
	int size = ::Std_obj::_int((Float((b->length * (int)8)) / Float(nbits)));		HX_STACK_VAR(size,"size");
	HX_STACK_LINE(51)
	::haxe::io::Bytes out = ::haxe::io::Bytes_obj::alloc((size + ((  (((hx::Mod((b->length * (int)8),nbits) == (int)0))) ? int((int)0) : int((int)1) ))));		HX_STACK_VAR(out,"out");
	HX_STACK_LINE(52)
	int buf = (int)0;		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(53)
	int curbits = (int)0;		HX_STACK_VAR(curbits,"curbits");
	HX_STACK_LINE(54)
	int mask = (((int((int)1) << int(nbits))) - (int)1);		HX_STACK_VAR(mask,"mask");
	HX_STACK_LINE(55)
	int pin = (int)0;		HX_STACK_VAR(pin,"pin");
	HX_STACK_LINE(56)
	int pout = (int)0;		HX_STACK_VAR(pout,"pout");
	HX_STACK_LINE(57)
	while(((pout < size))){
		HX_STACK_LINE(58)
		while(((curbits < nbits))){
			HX_STACK_LINE(59)
			hx::AddEq(curbits,(int)8);
			HX_STACK_LINE(60)
			hx::ShlEq(buf,(int)8);
			HX_STACK_LINE(61)
			hx::OrEq(buf,b->b->__get((pin)++));
		}
		HX_STACK_LINE(63)
		hx::SubEq(curbits,nbits);
		HX_STACK_LINE(64)
		out->b[(pout)++] = base->b->__get((int((int(buf) >> int(curbits))) & int(mask)));
	}
	HX_STACK_LINE(66)
	if (((curbits > (int)0))){
		HX_STACK_LINE(67)
		out->b[(pout)++] = base->b->__get((int((int(buf) << int((nbits - curbits)))) & int(mask)));
	}
	HX_STACK_LINE(68)
	return out;
}


HX_DEFINE_DYNAMIC_FUNC1(BaseCode_obj,encodeBytes,return )


BaseCode_obj::BaseCode_obj()
{
}

void BaseCode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseCode);
	HX_MARK_MEMBER_NAME(tbl,"tbl");
	HX_MARK_MEMBER_NAME(nbits,"nbits");
	HX_MARK_MEMBER_NAME(base,"base");
	HX_MARK_END_CLASS();
}

void BaseCode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tbl,"tbl");
	HX_VISIT_MEMBER_NAME(nbits,"nbits");
	HX_VISIT_MEMBER_NAME(base,"base");
}

Dynamic BaseCode_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tbl") ) { return tbl; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"base") ) { return base; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nbits") ) { return nbits; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"initTable") ) { return initTable_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"decodeBytes") ) { return decodeBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"encodeBytes") ) { return encodeBytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BaseCode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tbl") ) { tbl=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"base") ) { base=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nbits") ) { nbits=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseCode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tbl"));
	outFields->push(HX_CSTRING("nbits"));
	outFields->push(HX_CSTRING("base"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("decodeBytes"),
	HX_CSTRING("initTable"),
	HX_CSTRING("encodeBytes"),
	HX_CSTRING("tbl"),
	HX_CSTRING("nbits"),
	HX_CSTRING("base"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BaseCode_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BaseCode_obj::__mClass,"__mClass");
};

Class BaseCode_obj::__mClass;

void BaseCode_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.crypto.BaseCode"), hx::TCanCast< BaseCode_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BaseCode_obj::__boot()
{
}

} // end namespace haxe
} // end namespace crypto
