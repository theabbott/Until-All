#ifndef INCLUDED_scripts_SceneEvents_2
#define INCLUDED_scripts_SceneEvents_2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/behavior/SceneScript.h>
HX_DECLARE_CLASS2(com,stencyl,Engine)
HX_DECLARE_CLASS3(com,stencyl,behavior,SceneScript)
HX_DECLARE_CLASS3(com,stencyl,behavior,Script)
HX_DECLARE_CLASS1(scripts,SceneEvents_2)
namespace scripts{


class HXCPP_CLASS_ATTRIBUTES  SceneEvents_2_obj : public ::com::stencyl::behavior::SceneScript_obj{
	public:
		typedef ::com::stencyl::behavior::SceneScript_obj super;
		typedef SceneEvents_2_obj OBJ_;
		SceneEvents_2_obj();
		Void __construct(int dummy,::com::stencyl::Engine engine);

	public:
		static hx::ObjectPtr< SceneEvents_2_obj > __new(int dummy,::com::stencyl::Engine engine);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SceneEvents_2_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SceneEvents_2"); }

		virtual Void forwardMessage( ::String msg);

		virtual Void init( );

};

} // end namespace scripts

#endif /* INCLUDED_scripts_SceneEvents_2 */ 