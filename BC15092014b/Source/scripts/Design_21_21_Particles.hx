package scripts;

import com.stencyl.graphics.G;

import com.stencyl.behavior.Script;
import com.stencyl.behavior.ActorScript;
import com.stencyl.behavior.SceneScript;
import com.stencyl.behavior.TimedTask;

import com.stencyl.models.Actor;
import com.stencyl.models.GameModel;
import com.stencyl.models.actor.Animation;
import com.stencyl.models.actor.ActorType;
import com.stencyl.models.actor.Collision;
import com.stencyl.models.actor.Group;
import com.stencyl.models.Scene;
import com.stencyl.models.Sound;
import com.stencyl.models.Region;
import com.stencyl.models.Font;

import com.stencyl.Engine;
import com.stencyl.Input;
import com.stencyl.Key;
import com.stencyl.utils.Utils;

import nme.ui.Mouse;
import nme.display.Graphics;
import nme.display.BlendMode;
import nme.display.BitmapData;
import nme.display.Bitmap;
import nme.events.Event;
import nme.events.KeyboardEvent;
import nme.events.TouchEvent;
import nme.net.URLLoader;

import box2D.dynamics.joints.B2Joint;

import motion.Actuate;
import motion.easing.Back;
import motion.easing.Cubic;
import motion.easing.Elastic;
import motion.easing.Expo;
import motion.easing.Linear;
import motion.easing.Quad;
import motion.easing.Quart;
import motion.easing.Quint;
import motion.easing.Sine;

import com.stencyl.graphics.shaders.BasicShader;
import com.stencyl.graphics.shaders.GrayscaleShader;
import com.stencyl.graphics.shaders.SepiaShader;
import com.stencyl.graphics.shaders.InvertShader;
import com.stencyl.graphics.shaders.GrainShader;
import com.stencyl.graphics.shaders.ExternalShader;
import com.stencyl.graphics.shaders.InlineShader;
import com.stencyl.graphics.shaders.BlurShader;
import com.stencyl.graphics.shaders.ScanlineShader;
import com.stencyl.graphics.shaders.CSBShader;
import com.stencyl.graphics.shaders.HueShader;
import com.stencyl.graphics.shaders.TintShader;
import com.stencyl.graphics.shaders.BloomShader;



class Design_21_21_Particles extends ActorScript
{          	
	
public var _ParticleType:ActorType;

public var _XMinimumOffset:Float;

public var _XMaximumOffset:Float;

public var _YMinimumOffset:Float;

public var _YMaximumOffset:Float;

public var _MovementMode:String;

public var _Activated:Bool;

public var _ParticleDelay:Float;

public var _HandleParticle:Bool;

public var _ParticleForce:Float;

public var _ToPointXOffset:Float;

public var _ToPointYOffset:Float;

public var _Radius:Float;

public var _SpawnModes:String;

public var _AngletoMove:Float;

public var _RandomAngle:Float;

public var _MaximumParticleForce:Float;

public var _RandomSpeed:Bool;

public var _ParticleName:String;

public var _MinimumParticleForce:Float;

public var _RandomParticles:Bool;

public var _ParticleList:Array<Dynamic>;

public var _ParticleAnimation:String;
    public function _customEvent_StopEmitting():Void
{
        _Activated = false;
propertyChanged("_Activated", _Activated);
}

    public function _customEvent_StartEmitting():Void
{
        _Activated = true;
propertyChanged("_Activated", _Activated);
}

    
/* ========================= Custom Block ========================= */


/* Params are:__Self __Particle __MinX __MaxX __MinY __MaxY __Angle __Delay __Force */
public function _customBlock_EmitParticles(__Particle:ActorType, __MinX:Float, __MaxX:Float, __MinY:Float, __MaxY:Float, __Angle:Float, __Delay:Float, __Force:Float):Void
{
var __Self:Actor = actor;
        __Self.setValue("Particles", "_ParticleType", __Particle);
        _XMinimumOffset = asNumber(__MinX);
propertyChanged("_XMinimumOffset", _XMinimumOffset);
        _XMaximumOffset = asNumber(__MaxX);
propertyChanged("_XMaximumOffset", _XMaximumOffset);
        _YMinimumOffset = asNumber(__MinY);
propertyChanged("_YMinimumOffset", _YMinimumOffset);
        _YMaximumOffset = asNumber(__MaxY);
propertyChanged("_YMaximumOffset", _YMaximumOffset);
        _SpawnModes = "Random";
propertyChanged("_SpawnModes", _SpawnModes);
        _MovementMode = "To Angle";
propertyChanged("_MovementMode", _MovementMode);
        _AngletoMove = asNumber(__Angle);
propertyChanged("_AngletoMove", _AngletoMove);
        _ParticleDelay = asNumber((60 / getGameAttribute("GameTempo")));
propertyChanged("_ParticleDelay", _ParticleDelay);
        _ParticleForce = asNumber(__Force);
propertyChanged("_ParticleForce", _ParticleForce);
        _customEvent_StartEmitting();
}

 
 	public function new(dummy:Int, actor:Actor, engine:Engine)
	{
		super(actor, engine);	
		nameMap.set("Particle Type", "_ParticleType");
nameMap.set("X Minimum Offset", "_XMinimumOffset");
_XMinimumOffset = 0.0;
nameMap.set("X Maximum Offset", "_XMaximumOffset");
_XMaximumOffset = 0.0;
nameMap.set("Y Minimum Offset", "_YMinimumOffset");
_YMinimumOffset = 0.0;
nameMap.set("Y Maximum Offset", "_YMaximumOffset");
_YMaximumOffset = 0.0;
nameMap.set("Movement Mode", "_MovementMode");
_MovementMode = "";
nameMap.set("Activated", "_Activated");
_Activated = true;
nameMap.set("Particle Delay", "_ParticleDelay");
_ParticleDelay = 0.0;
nameMap.set("Handle Particle", "_HandleParticle");
_HandleParticle = false;
nameMap.set("Particle Force", "_ParticleForce");
_ParticleForce = 0.0;
nameMap.set("To Point X Offset", "_ToPointXOffset");
_ToPointXOffset = 0.0;
nameMap.set("To Point Y Offset", "_ToPointYOffset");
_ToPointYOffset = 0.0;
nameMap.set("Actor", "actor");
nameMap.set("Radius", "_Radius");
_Radius = 0.0;
nameMap.set("Spawn Modes", "_SpawnModes");
_SpawnModes = "";
nameMap.set("Angle to Move", "_AngletoMove");
_AngletoMove = 0.0;
nameMap.set("Random Angle", "_RandomAngle");
_RandomAngle = 0.0;
nameMap.set("Maximum Particle Force", "_MaximumParticleForce");
_MaximumParticleForce = 0.0;
nameMap.set("Random Speed?", "_RandomSpeed");
_RandomSpeed = false;
nameMap.set("Particle Name", "_ParticleName");
_ParticleName = "";
nameMap.set("Minimum Particle Force", "_MinimumParticleForce");
_MinimumParticleForce = 0.0;
nameMap.set("Random Particles?", "_RandomParticles");
_RandomParticles = false;
nameMap.set("Particle List", "_ParticleList");
_ParticleList = [];
nameMap.set("Particle Animation", "_ParticleAnimation");
_ParticleAnimation = "";

	}
	
	override public function init()
	{
		    
/* ======================== When Updating ========================= */
addWhenUpdatedListener(null, function(elapsedTime:Float, list:Array<Dynamic>):Void {
if(wrapper.enabled){
        if(_Activated)
{
            if(!(_HandleParticle))
{
                _HandleParticle = true;
propertyChanged("_HandleParticle", _HandleParticle);
                /* "Spawn Modes" */
                if(_RandomParticles)
{
                    _ParticleName = ("" + _ParticleList[Std.int(randomInt(Math.floor(0), Math.floor((_ParticleList.length - 1))))]).split(",")[Std.int(0)];
propertyChanged("_ParticleName", _ParticleName);
                    _ParticleType = getActorTypeByName(_ParticleName);
                    _ParticleAnimation = ("" + _ParticleList[Std.int(randomInt(Math.floor(0), Math.floor((_ParticleList.length - 1))))]).split(",")[Std.int(1)];
propertyChanged("_ParticleAnimation", _ParticleAnimation);
}

                if((_SpawnModes == "Random"))
{
                    createRecycledActor(_ParticleType, (actor.getX() + randomInt(Math.floor(_XMinimumOffset), Math.floor(_XMaximumOffset))), (actor.getY() + randomInt(Math.floor(_YMinimumOffset), Math.floor(_YMaximumOffset))), Script.FRONT);
}

                if((_SpawnModes == "Perimeter"))
{
                    _RandomAngle = asNumber(randomInt(Math.floor(0), Math.floor(360)));
propertyChanged("_RandomAngle", _RandomAngle);
                    createRecycledActor(_ParticleType, (actor.getXCenter() + (_Radius * Math.cos(Utils.RAD * (_RandomAngle) * Utils.RAD))), (actor.getYCenter() + (_Radius * Math.sin(Utils.RAD * (_RandomAngle) * Utils.RAD))), Script.FRONT);
                    getLastCreatedActor().setX((getLastCreatedActor().getX() - (getLastCreatedActor().getWidth()/2)));
                    getLastCreatedActor().setY((getLastCreatedActor().getY() - (getLastCreatedActor().getHeight()/2)));
}

                getLastCreatedActor().setAnimation("" + ("" + _ParticleAnimation));
                /* "Movement Modes" */
                if(_RandomSpeed)
{
                    _ParticleForce = asNumber(randomInt(Math.floor(_MinimumParticleForce), Math.floor(_MaximumParticleForce)));
propertyChanged("_ParticleForce", _ParticleForce);
}

                else
{
                    _ParticleForce = asNumber(_MaximumParticleForce);
propertyChanged("_ParticleForce", _ParticleForce);
}

                if((_MovementMode == "To Angle"))
{
                    getLastCreatedActor().applyImpulseInDirection(_AngletoMove, _ParticleForce);
}

                if((_MovementMode == "Expand"))
{
                    getLastCreatedActor().applyImpulseInDirection(Utils.DEG * (Math.atan2((getLastCreatedActor().getYCenter() - actor.getYCenter()), (getLastCreatedActor().getXCenter() - actor.getXCenter()))), _ParticleForce);
}

                if((_MovementMode == "To Center"))
{
                    getLastCreatedActor().applyImpulseInDirection(Utils.DEG * (Math.atan2((actor.getYCenter() - getLastCreatedActor().getYCenter()), (actor.getXCenter() - getLastCreatedActor().getXCenter()))), _ParticleForce);
}

                if((_MovementMode == "To Point"))
{
                    getLastCreatedActor().applyImpulseInDirection(Utils.DEG * (Math.atan2(((actor.getY() + _ToPointYOffset) - getLastCreatedActor().getYCenter()), ((actor.getX() + _ToPointXOffset) - getLastCreatedActor().getXCenter()))), _ParticleForce);
}

                runLater(1000 * _ParticleDelay, function(timeTask:TimedTask):Void {
                            _HandleParticle = false;
propertyChanged("_HandleParticle", _HandleParticle);
}, actor);
}

}

}
});

	}	      	
	
	override public function forwardMessage(msg:String)
	{
		
	}
}