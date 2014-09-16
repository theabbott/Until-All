#include <hxcpp.h>

#ifndef INCLUDED_de_polygonal_ds_IntIntHashTableKeyIterator
#include <de/polygonal/ds/IntIntHashTableKeyIterator.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Itr
#include <de/polygonal/ds/Itr.h>
#endif
namespace de{
namespace polygonal{
namespace ds{

Void IntIntHashTableKeyIterator_obj::__construct(Dynamic hash)
{
HX_STACK_PUSH("IntIntHashTableKeyIterator::new","de/polygonal/ds/IntIntHashTable.hx",1790);
{
	HX_STACK_LINE(1791)
	this->_f = hash;
	HX_STACK_LINE(1792)
	this->_data = this->_f->__Field(HX_CSTRING("_data"),true);
	HX_STACK_LINE(1793)
	this->_i = (int)0;
	HX_STACK_LINE(1794)
	this->_s = this->_f->__Field(HX_CSTRING("_capacity"),true);
	HX_STACK_LINE(1795)
	while(((bool((this->_i < this->_s)) && bool((this->_data->__get(((this->_i * (int)3) + (int)1)) == (int)-2147483647))))){
		HX_STACK_LINE(1795)
		(this->_i)++;
	}
}
;
	return null();
}

IntIntHashTableKeyIterator_obj::~IntIntHashTableKeyIterator_obj() { }

Dynamic IntIntHashTableKeyIterator_obj::__CreateEmpty() { return  new IntIntHashTableKeyIterator_obj; }
hx::ObjectPtr< IntIntHashTableKeyIterator_obj > IntIntHashTableKeyIterator_obj::__new(Dynamic hash)
{  hx::ObjectPtr< IntIntHashTableKeyIterator_obj > result = new IntIntHashTableKeyIterator_obj();
	result->__construct(hash);
	return result;}

Dynamic IntIntHashTableKeyIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IntIntHashTableKeyIterator_obj > result = new IntIntHashTableKeyIterator_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *IntIntHashTableKeyIterator_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::de::polygonal::ds::Itr_obj)) return operator ::de::polygonal::ds::Itr_obj *();
	return super::__ToInterface(inType);
}

int IntIntHashTableKeyIterator_obj::__getData( int i){
	HX_STACK_PUSH("IntIntHashTableKeyIterator::__getData","de/polygonal/ds/IntIntHashTable.hx",1830);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	HX_STACK_LINE(1830)
	return this->_data->__get(i);
}


HX_DEFINE_DYNAMIC_FUNC1(IntIntHashTableKeyIterator_obj,__getData,return )

Void IntIntHashTableKeyIterator_obj::_scan( ){
{
		HX_STACK_PUSH("IntIntHashTableKeyIterator::_scan","de/polygonal/ds/IntIntHashTable.hx",1825);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1825)
		while(((bool((this->_i < this->_s)) && bool((this->_data->__get(((this->_i * (int)3) + (int)1)) == (int)-2147483647))))){
			HX_STACK_LINE(1826)
			(this->_i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IntIntHashTableKeyIterator_obj,_scan,(void))

Void IntIntHashTableKeyIterator_obj::remove( ){
{
		HX_STACK_PUSH("IntIntHashTableKeyIterator::remove","de/polygonal/ds/IntIntHashTable.hx",1820);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1820)
		hx::Throw (HX_CSTRING("unsupported operation"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IntIntHashTableKeyIterator_obj,remove,(void))

Dynamic IntIntHashTableKeyIterator_obj::next( ){
	HX_STACK_PUSH("IntIntHashTableKeyIterator::next","de/polygonal/ds/IntIntHashTable.hx",1813);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1814)
	int key = this->_data->__get(((this->_i)++ * (int)3));		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(1815)
	while(((bool((this->_i < this->_s)) && bool((this->_data->__get(((this->_i * (int)3) + (int)1)) == (int)-2147483647))))){
		HX_STACK_LINE(1815)
		(this->_i)++;
	}
	HX_STACK_LINE(1816)
	return key;
}


HX_DEFINE_DYNAMIC_FUNC0(IntIntHashTableKeyIterator_obj,next,return )

bool IntIntHashTableKeyIterator_obj::hasNext( ){
	HX_STACK_PUSH("IntIntHashTableKeyIterator::hasNext","de/polygonal/ds/IntIntHashTable.hx",1808);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1808)
	return (this->_i < this->_s);
}


HX_DEFINE_DYNAMIC_FUNC0(IntIntHashTableKeyIterator_obj,hasNext,return )

::de::polygonal::ds::Itr IntIntHashTableKeyIterator_obj::reset( ){
	HX_STACK_PUSH("IntIntHashTableKeyIterator::reset","de/polygonal/ds/IntIntHashTable.hx",1799);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1800)
	this->_data = this->_f->__Field(HX_CSTRING("_data"),true);
	HX_STACK_LINE(1801)
	this->_i = (int)0;
	HX_STACK_LINE(1802)
	this->_s = this->_f->__Field(HX_CSTRING("_capacity"),true);
	HX_STACK_LINE(1803)
	while(((bool((this->_i < this->_s)) && bool((this->_data->__get(((this->_i * (int)3) + (int)1)) == (int)-2147483647))))){
		HX_STACK_LINE(1803)
		(this->_i)++;
	}
	HX_STACK_LINE(1804)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(IntIntHashTableKeyIterator_obj,reset,return )


IntIntHashTableKeyIterator_obj::IntIntHashTableKeyIterator_obj()
{
}

void IntIntHashTableKeyIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IntIntHashTableKeyIterator);
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_s,"_s");
	HX_MARK_MEMBER_NAME(_i,"_i");
	HX_MARK_MEMBER_NAME(_f,"_f");
	HX_MARK_END_CLASS();
}

void IntIntHashTableKeyIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_s,"_s");
	HX_VISIT_MEMBER_NAME(_i,"_i");
	HX_VISIT_MEMBER_NAME(_f,"_f");
}

Dynamic IntIntHashTableKeyIterator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_s") ) { return _s; }
		if (HX_FIELD_EQ(inName,"_i") ) { return _i; }
		if (HX_FIELD_EQ(inName,"_f") ) { return _f; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_scan") ) { return _scan_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__getData") ) { return __getData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IntIntHashTableKeyIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_s") ) { _s=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_i") ) { _i=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_f") ) { _f=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntIntHashTableKeyIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("_s"));
	outFields->push(HX_CSTRING("_i"));
	outFields->push(HX_CSTRING("_f"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("__getData"),
	HX_CSTRING("_scan"),
	HX_CSTRING("remove"),
	HX_CSTRING("next"),
	HX_CSTRING("hasNext"),
	HX_CSTRING("reset"),
	HX_CSTRING("_data"),
	HX_CSTRING("_s"),
	HX_CSTRING("_i"),
	HX_CSTRING("_f"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IntIntHashTableKeyIterator_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IntIntHashTableKeyIterator_obj::__mClass,"__mClass");
};

Class IntIntHashTableKeyIterator_obj::__mClass;

void IntIntHashTableKeyIterator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("de.polygonal.ds.IntIntHashTableKeyIterator"), hx::TCanCast< IntIntHashTableKeyIterator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IntIntHashTableKeyIterator_obj::__boot()
{
}

} // end namespace de
} // end namespace polygonal
} // end namespace ds