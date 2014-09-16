#ifndef INCLUDED_List2D
#define INCLUDED_List2D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List2D)


class HXCPP_CLASS_ATTRIBUTES  List2D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef List2D_obj OBJ_;
		List2D_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< List2D_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~List2D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("List2D"); }

		static Dynamic new_2D( int r_amount,int c_amount);
		static Dynamic new_2D_dyn();

		static Dynamic check_row_count( Dynamic list);
		static Dynamic check_row_count_dyn();

		static int check_col_count( Dynamic list);
		static Dynamic check_col_count_dyn();

		static int check_dimensions( ::String spec,Dynamic list);
		static Dynamic check_dimensions_dyn();

		static bool check_row_index( int num,Dynamic list);
		static Dynamic check_row_index_dyn();

		static bool check_col_index( int num,Dynamic list);
		static Dynamic check_col_index_dyn();

		static ::String get_entry( int x,int y,Dynamic list);
		static Dynamic get_entry_dyn();

		static bool check_entry( int x,int y,Dynamic list);
		static Dynamic check_entry_dyn();

		static Void set_entry( int x,int y,Dynamic entry,Dynamic list);
		static Dynamic set_entry_dyn();

		static Dynamic copy_2D( Dynamic list);
		static Dynamic copy_2D_dyn();

		static Dynamic copy_row_or_col( ::String spec,int num,Dynamic list);
		static Dynamic copy_row_or_col_dyn();

		static Void swap_row_or_col( ::String spec,int num_1,int num_2,Dynamic list);
		static Dynamic swap_row_or_col_dyn();

		static Void swap_entry( int x1,int y1,int x2,int y2,Dynamic list);
		static Dynamic swap_entry_dyn();

		static int population_2D( Dynamic list);
		static Dynamic population_2D_dyn();

		static int population_row_or_col( ::String spec,int num,Dynamic list);
		static Dynamic population_row_or_col_dyn();

};


#endif /* INCLUDED_List2D */ 
