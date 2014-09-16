#include <hxcpp.h>

#ifndef INCLUDED_List2D
#include <List2D.h>
#endif

Void List2D_obj::__construct()
{
	return null();
}

List2D_obj::~List2D_obj() { }

Dynamic List2D_obj::__CreateEmpty() { return  new List2D_obj; }
hx::ObjectPtr< List2D_obj > List2D_obj::__new()
{  hx::ObjectPtr< List2D_obj > result = new List2D_obj();
	result->__construct();
	return result;}

Dynamic List2D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< List2D_obj > result = new List2D_obj();
	result->__construct();
	return result;}

Dynamic List2D_obj::new_2D( int r_amount,int c_amount){
	HX_STACK_PUSH("List2D::new_2D","List2D.hx",6);
	HX_STACK_ARG(r_amount,"r_amount");
	HX_STACK_ARG(c_amount,"c_amount");
	HX_STACK_LINE(8)
	if (((r_amount <= (int)0))){
		HX_STACK_LINE(9)
		r_amount = (int)1;
	}
	HX_STACK_LINE(12)
	if (((c_amount <= (int)0))){
		HX_STACK_LINE(13)
		c_amount = (int)1;
	}
	HX_STACK_LINE(17)
	Dynamic list;		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(18)
	Dynamic list_column;		HX_STACK_VAR(list_column,"list_column");
	struct _Function_1_1{
		inline static Dynamic Block( int &r_amount){
			HX_STACK_PUSH("*::closure","List2D.hx",20);
			{
				HX_STACK_LINE(20)
				Dynamic _g = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(20)
				{
					HX_STACK_LINE(20)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(20)
					while(((_g1 < r_amount))){
						HX_STACK_LINE(20)
						int x = (_g1)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(20)
						_g->__Field(HX_CSTRING("push"),true)(null());
					}
				}
				HX_STACK_LINE(20)
				return _g;
			}
			return null();
		}
	};
	HX_STACK_LINE(20)
	list_column = _Function_1_1::Block(r_amount);
	struct _Function_1_2{
		inline static Dynamic Block( Dynamic &list_column,int &c_amount){
			HX_STACK_PUSH("*::closure","List2D.hx",21);
			{
				HX_STACK_LINE(21)
				Dynamic _g1 = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(21)
				{
					HX_STACK_LINE(21)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(21)
					while(((_g2 < c_amount))){
						HX_STACK_LINE(21)
						int x = (_g2)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(21)
						_g1->__Field(HX_CSTRING("push"),true)(list_column->__Field(HX_CSTRING("copy"),true)());
					}
				}
				HX_STACK_LINE(21)
				return _g1;
			}
			return null();
		}
	};
	HX_STACK_LINE(21)
	list = _Function_1_2::Block(list_column,c_amount);
	HX_STACK_LINE(23)
	return list;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(List2D_obj,new_2D,return )

Dynamic List2D_obj::check_row_count( Dynamic list){
	HX_STACK_PUSH("List2D::check_row_count","List2D.hx",29);
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(29)
	return list->__GetItem((int)0)->__Field(HX_CSTRING("length"),true);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(List2D_obj,check_row_count,return )

int List2D_obj::check_col_count( Dynamic list){
	HX_STACK_PUSH("List2D::check_col_count","List2D.hx",34);
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(34)
	return list->__Field(HX_CSTRING("length"),true);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(List2D_obj,check_col_count,return )

int List2D_obj::check_dimensions( ::String spec,Dynamic list){
	HX_STACK_PUSH("List2D::check_dimensions","List2D.hx",38);
	HX_STACK_ARG(spec,"spec");
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(38)
	if (((spec == HX_CSTRING("columns")))){
		HX_STACK_LINE(41)
		return list->__Field(HX_CSTRING("length"),true);
	}
	else{
		HX_STACK_LINE(45)
		return list->__GetItem((int)0)->__Field(HX_CSTRING("length"),true);
	}
	HX_STACK_LINE(38)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(List2D_obj,check_dimensions,return )

bool List2D_obj::check_row_index( int num,Dynamic list){
	HX_STACK_PUSH("List2D::check_row_index","List2D.hx",53);
	HX_STACK_ARG(num,"num");
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(55)
	int col_check = list->__GetItem((int)0)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(col_check,"col_check");
	HX_STACK_LINE(56)
	return (num < col_check);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(List2D_obj,check_row_index,return )

bool List2D_obj::check_col_index( int num,Dynamic list){
	HX_STACK_PUSH("List2D::check_col_index","List2D.hx",59);
	HX_STACK_ARG(num,"num");
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(59)
	return (num < list->__Field(HX_CSTRING("length"),true));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(List2D_obj,check_col_index,return )

::String List2D_obj::get_entry( int x,int y,Dynamic list){
	HX_STACK_PUSH("List2D::get_entry","List2D.hx",66);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(68)
	if (((bool(!(::List2D_obj::check_col_index(x,list))) || bool(!(::List2D_obj::check_row_index(y,list)))))){
		HX_STACK_LINE(69)
		return null();
	}
	HX_STACK_LINE(73)
	return list->__GetItem(x)->__GetItem(y);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(List2D_obj,get_entry,return )

bool List2D_obj::check_entry( int x,int y,Dynamic list){
	HX_STACK_PUSH("List2D::check_entry","List2D.hx",79);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(81)
	if (((bool(!(::List2D_obj::check_col_index(x,list))) || bool(!(::List2D_obj::check_row_index(y,list)))))){
		HX_STACK_LINE(82)
		return false;
	}
	HX_STACK_LINE(86)
	return (list->__GetItem(x)->__GetItem(y) != null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(List2D_obj,check_entry,return )

Void List2D_obj::set_entry( int x,int y,Dynamic entry,Dynamic list){
{
		HX_STACK_PUSH("List2D::set_entry","List2D.hx",92);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(entry,"entry");
		HX_STACK_ARG(list,"list");
		HX_STACK_LINE(94)
		if (((bool(!(::List2D_obj::check_col_index(x,list))) || bool(!(::List2D_obj::check_row_index(y,list)))))){
			HX_STACK_LINE(95)
			return null();
		}
		HX_STACK_LINE(99)
		hx::IndexRef((list->__GetItem(x)).mPtr,y) = entry;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(List2D_obj,set_entry,(void))

Dynamic List2D_obj::copy_2D( Dynamic list){
	HX_STACK_PUSH("List2D::copy_2D","List2D.hx",105);
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(106)
	Dynamic copy_list;		HX_STACK_VAR(copy_list,"copy_list");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &list){
			HX_STACK_PUSH("*::closure","List2D.hx",108);
			{
				HX_STACK_LINE(108)
				Dynamic _g = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(108)
				{
					HX_STACK_LINE(108)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					int _g1 = list->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(108)
					while(((_g2 < _g1))){
						HX_STACK_LINE(108)
						int x = (_g2)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(108)
						_g->__Field(HX_CSTRING("push"),true)(list->__GetItem(x)->__Field(HX_CSTRING("copy"),true)());
					}
				}
				HX_STACK_LINE(108)
				return _g;
			}
			return null();
		}
	};
	HX_STACK_LINE(108)
	copy_list = _Function_1_1::Block(list);
	HX_STACK_LINE(110)
	return copy_list;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(List2D_obj,copy_2D,return )

Dynamic List2D_obj::copy_row_or_col( ::String spec,int num,Dynamic list){
	HX_STACK_PUSH("List2D::copy_row_or_col","List2D.hx",113);
	HX_STACK_ARG(spec,"spec");
	HX_STACK_ARG(num,"num");
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(113)
	if (((spec == HX_CSTRING("column")))){
		HX_STACK_LINE(116)
		if ((!(::List2D_obj::check_col_index(num,list)))){
			HX_STACK_LINE(117)
			return null();
		}
		HX_STACK_LINE(120)
		return list->__GetItem(num)->__Field(HX_CSTRING("copy"),true)();
	}
	else{
		HX_STACK_LINE(124)
		if ((!(::List2D_obj::check_row_index(num,list)))){
			HX_STACK_LINE(125)
			return null();
		}
		struct _Function_2_1{
			inline static Dynamic Block( int &num,Dynamic &list){
				HX_STACK_PUSH("*::closure","List2D.hx",128);
				{
					HX_STACK_LINE(128)
					Dynamic _g = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(128)
					{
						HX_STACK_LINE(128)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						int _g1 = list->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(128)
						while(((_g2 < _g1))){
							HX_STACK_LINE(128)
							int x = (_g2)++;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(128)
							_g->__Field(HX_CSTRING("push"),true)(list->__GetItem(x)->__GetItem(num));
						}
					}
					HX_STACK_LINE(128)
					return _g;
				}
				return null();
			}
		};
		HX_STACK_LINE(128)
		return _Function_2_1::Block(num,list);
	}
	HX_STACK_LINE(113)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(List2D_obj,copy_row_or_col,return )

Void List2D_obj::swap_row_or_col( ::String spec,int num_1,int num_2,Dynamic list){
{
		HX_STACK_PUSH("List2D::swap_row_or_col","List2D.hx",135);
		HX_STACK_ARG(spec,"spec");
		HX_STACK_ARG(num_1,"num_1");
		HX_STACK_ARG(num_2,"num_2");
		HX_STACK_ARG(list,"list");
		HX_STACK_LINE(135)
		if (((spec == HX_CSTRING("column")))){
			HX_STACK_LINE(139)
			if (((bool(!(::List2D_obj::check_col_index(num_1,list))) || bool(!(::List2D_obj::check_col_index(num_2,list)))))){
				HX_STACK_LINE(140)
				return null();
			}
			HX_STACK_LINE(144)
			Dynamic swap_list;		HX_STACK_VAR(swap_list,"swap_list");
			HX_STACK_LINE(146)
			swap_list = list->__GetItem(num_1)->__Field(HX_CSTRING("copy"),true)();
			HX_STACK_LINE(147)
			hx::IndexRef((list).mPtr,num_1) = list->__GetItem(num_2);
			HX_STACK_LINE(148)
			hx::IndexRef((list).mPtr,num_2) = swap_list->__Field(HX_CSTRING("copy"),true)();
		}
		else{
			HX_STACK_LINE(153)
			if (((bool(!(::List2D_obj::check_row_index(num_1,list))) || bool(!(::List2D_obj::check_row_index(num_2,list)))))){
				HX_STACK_LINE(154)
				return null();
			}
			HX_STACK_LINE(158)
			{
				HX_STACK_LINE(158)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = list->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(158)
				while(((_g1 < _g))){
					HX_STACK_LINE(158)
					int x = (_g1)++;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(160)
					Dynamic swap_entry;		HX_STACK_VAR(swap_entry,"swap_entry");
					HX_STACK_LINE(162)
					swap_entry = list->__GetItem(x)->__GetItem(num_1);
					HX_STACK_LINE(163)
					hx::IndexRef((list->__GetItem(x)).mPtr,num_1) = list->__GetItem(x)->__GetItem(num_2);
					HX_STACK_LINE(164)
					hx::IndexRef((list->__GetItem(x)).mPtr,num_2) = swap_entry;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(List2D_obj,swap_row_or_col,(void))

Void List2D_obj::swap_entry( int x1,int y1,int x2,int y2,Dynamic list){
{
		HX_STACK_PUSH("List2D::swap_entry","List2D.hx",169);
		HX_STACK_ARG(x1,"x1");
		HX_STACK_ARG(y1,"y1");
		HX_STACK_ARG(x2,"x2");
		HX_STACK_ARG(y2,"y2");
		HX_STACK_ARG(list,"list");
		HX_STACK_LINE(170)
		if (((bool((bool((bool(!(::List2D_obj::check_row_index(x1,list))) || bool(!(::List2D_obj::check_row_index(y1,list))))) || bool(!(::List2D_obj::check_row_index(x2,list))))) || bool(!(::List2D_obj::check_row_index(y2,list)))))){
			HX_STACK_LINE(171)
			return null();
		}
		HX_STACK_LINE(175)
		Dynamic swap_entry;		HX_STACK_VAR(swap_entry,"swap_entry");
		HX_STACK_LINE(177)
		swap_entry = list->__GetItem(x1)->__GetItem(y1);
		HX_STACK_LINE(178)
		hx::IndexRef((list->__GetItem(x1)).mPtr,y1) = list->__GetItem(x2)->__GetItem(y2);
		HX_STACK_LINE(179)
		hx::IndexRef((list->__GetItem(x2)).mPtr,y2) = swap_entry;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(List2D_obj,swap_entry,(void))

int List2D_obj::population_2D( Dynamic list){
	HX_STACK_PUSH("List2D::population_2D","List2D.hx",185);
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(186)
	int count = (int)0;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(188)
	{
		HX_STACK_LINE(188)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = list->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(188)
		while(((_g1 < _g))){
			HX_STACK_LINE(188)
			int col = (_g1)++;		HX_STACK_VAR(col,"col");
			HX_STACK_LINE(190)
			{
				HX_STACK_LINE(190)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				int _g2 = list->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(190)
				while(((_g3 < _g2))){
					HX_STACK_LINE(190)
					int row = (_g3)++;		HX_STACK_VAR(row,"row");
					HX_STACK_LINE(192)
					if (((list->__GetItem(col)->__GetItem(row) != null()))){
						HX_STACK_LINE(193)
						(count)++;
					}
				}
			}
		}
	}
	HX_STACK_LINE(199)
	return count;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(List2D_obj,population_2D,return )

int List2D_obj::population_row_or_col( ::String spec,int num,Dynamic list){
	HX_STACK_PUSH("List2D::population_row_or_col","List2D.hx",202);
	HX_STACK_ARG(spec,"spec");
	HX_STACK_ARG(num,"num");
	HX_STACK_ARG(list,"list");
	HX_STACK_LINE(203)
	int count = (int)0;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(204)
	Dynamic count_list = ::List2D_obj::copy_row_or_col(spec,num,list);		HX_STACK_VAR(count_list,"count_list");
	HX_STACK_LINE(206)
	if (((count_list == null()))){
		HX_STACK_LINE(207)
		return (int)-1;
	}
	HX_STACK_LINE(211)
	{
		HX_STACK_LINE(211)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = count_list->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(211)
		while(((_g1 < _g))){
			HX_STACK_LINE(211)
			int entry = (_g1)++;		HX_STACK_VAR(entry,"entry");
			HX_STACK_LINE(213)
			if (((count_list->__GetItem(entry) != null()))){
				HX_STACK_LINE(214)
				(count)++;
			}
		}
	}
	HX_STACK_LINE(219)
	return count;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(List2D_obj,population_row_or_col,return )


List2D_obj::List2D_obj()
{
}

void List2D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(List2D);
	HX_MARK_END_CLASS();
}

void List2D_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic List2D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"new_2D") ) { return new_2D_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"copy_2D") ) { return copy_2D_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_entry") ) { return get_entry_dyn(); }
		if (HX_FIELD_EQ(inName,"set_entry") ) { return set_entry_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"swap_entry") ) { return swap_entry_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"check_entry") ) { return check_entry_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"population_2D") ) { return population_2D_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"check_row_count") ) { return check_row_count_dyn(); }
		if (HX_FIELD_EQ(inName,"check_col_count") ) { return check_col_count_dyn(); }
		if (HX_FIELD_EQ(inName,"check_row_index") ) { return check_row_index_dyn(); }
		if (HX_FIELD_EQ(inName,"check_col_index") ) { return check_col_index_dyn(); }
		if (HX_FIELD_EQ(inName,"copy_row_or_col") ) { return copy_row_or_col_dyn(); }
		if (HX_FIELD_EQ(inName,"swap_row_or_col") ) { return swap_row_or_col_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"check_dimensions") ) { return check_dimensions_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"population_row_or_col") ) { return population_row_or_col_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic List2D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void List2D_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("new_2D"),
	HX_CSTRING("check_row_count"),
	HX_CSTRING("check_col_count"),
	HX_CSTRING("check_dimensions"),
	HX_CSTRING("check_row_index"),
	HX_CSTRING("check_col_index"),
	HX_CSTRING("get_entry"),
	HX_CSTRING("check_entry"),
	HX_CSTRING("set_entry"),
	HX_CSTRING("copy_2D"),
	HX_CSTRING("copy_row_or_col"),
	HX_CSTRING("swap_row_or_col"),
	HX_CSTRING("swap_entry"),
	HX_CSTRING("population_2D"),
	HX_CSTRING("population_row_or_col"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(List2D_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(List2D_obj::__mClass,"__mClass");
};

Class List2D_obj::__mClass;

void List2D_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("List2D"), hx::TCanCast< List2D_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void List2D_obj::__boot()
{
}

