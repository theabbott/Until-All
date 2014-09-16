#ifndef INCLUDED_scripts_Design_33_33
#define INCLUDED_scripts_Design_33_33

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/behavior/SceneScript.h>
HX_DECLARE_CLASS2(com,stencyl,Engine)
HX_DECLARE_CLASS3(com,stencyl,behavior,SceneScript)
HX_DECLARE_CLASS3(com,stencyl,behavior,Script)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS3(com,stencyl,models,Sound)
HX_DECLARE_CLASS1(scripts,Design_33_33)
namespace scripts{


class HXCPP_CLASS_ATTRIBUTES  Design_33_33_obj : public ::com::stencyl::behavior::SceneScript_obj{
	public:
		typedef ::com::stencyl::behavior::SceneScript_obj super;
		typedef Design_33_33_obj OBJ_;
		Design_33_33_obj();
		Void __construct(int dummy,::com::stencyl::Engine engine);

	public:
		static hx::ObjectPtr< Design_33_33_obj > __new(int dummy,::com::stencyl::Engine engine);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Design_33_33_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Design_33_33"); }

		virtual Void forwardMessage( ::String msg);

		virtual Void init( );

		virtual Void _customEvent_Go( );
		Dynamic _customEvent_Go_dyn();

		Float _BeatPos;
		Float _CurrentTime;
		Float _TimeStart;
		Float _TimeElapsed;
		Float _MeasureNumber;
		Float _SceneTimeSignature;
		::com::stencyl::models::Sound _SceneTrack;
		Float _SceneTempo;
		bool _Go;
		Float _BeatRemainder;
		Float _BeatCheck;
};

} // end namespace scripts

#endif /* INCLUDED_scripts_Design_33_33 */ 
