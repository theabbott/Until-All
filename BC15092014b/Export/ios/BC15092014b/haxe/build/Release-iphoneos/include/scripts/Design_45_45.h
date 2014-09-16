#ifndef INCLUDED_scripts_Design_45_45
#define INCLUDED_scripts_Design_45_45

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/stencyl/behavior/ActorScript.h>
HX_DECLARE_CLASS2(com,stencyl,Engine)
HX_DECLARE_CLASS3(com,stencyl,behavior,ActorScript)
HX_DECLARE_CLASS3(com,stencyl,behavior,Script)
HX_DECLARE_CLASS3(com,stencyl,models,Actor)
HX_DECLARE_CLASS3(com,stencyl,models,Resource)
HX_DECLARE_CLASS4(com,stencyl,models,actor,ActorType)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS1(scripts,Design_45_45)
namespace scripts{


class HXCPP_CLASS_ATTRIBUTES  Design_45_45_obj : public ::com::stencyl::behavior::ActorScript_obj{
	public:
		typedef ::com::stencyl::behavior::ActorScript_obj super;
		typedef Design_45_45_obj OBJ_;
		Design_45_45_obj();
		Void __construct(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine);

	public:
		static hx::ObjectPtr< Design_45_45_obj > __new(int dummy,::com::stencyl::models::Actor actor,::com::stencyl::Engine engine);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Design_45_45_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Design_45_45"); }

		virtual Void forwardMessage( ::String msg);

		virtual Void init( );

		virtual Void _customBlock_EmitParticles( ::com::stencyl::models::actor::ActorType __Particle,Float __MinX,Float __MaxX,Float __MinY,Float __MaxY,Float __Angle,Float __Delay,Float __Force);
		Dynamic _customBlock_EmitParticles_dyn();

		virtual Void _customEvent_StartEmitting( );
		Dynamic _customEvent_StartEmitting_dyn();

		virtual Void _customEvent_StopEmitting( );
		Dynamic _customEvent_StopEmitting_dyn();

		::String _ParticleAnimation;
		Dynamic _ParticleList;
		bool _RandomParticles;
		Float _MinimumParticleForce;
		::String _ParticleName;
		bool _RandomSpeed;
		Float _MaximumParticleForce;
		Float _RandomAngle;
		Float _AngletoMove;
		::String _SpawnModes;
		Float _Radius;
		Float _ToPointYOffset;
		Float _ToPointXOffset;
		Float _ParticleForce;
		bool _HandleParticle;
		Float _ParticleDelay;
		bool _Activated;
		::String _MovementMode;
		Float _YMaximumOffset;
		Float _YMinimumOffset;
		Float _XMaximumOffset;
		Float _XMinimumOffset;
		::com::stencyl::models::actor::ActorType _ParticleType;
};

} // end namespace scripts

#endif /* INCLUDED_scripts_Design_45_45 */ 
