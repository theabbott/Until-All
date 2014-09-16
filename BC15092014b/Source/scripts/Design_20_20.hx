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



class Design_20_20 extends ActorScript
{          	
	
public var _BeatPos:Float;

public var _Metronome:Sound;

public var _Colliding:Bool;

public var _TypeNumber:Float;

public var _1:String;

public var _2:String;

public var _3:String;

public var _4:String;

public var _5:String;

public var _6:String;

public var _Xincrementer:Float;

public var _Searcher:Float;

public var _BeaterCombos:Float;

public var _OpacitiyMod:Float;

public var _GemSound:Sound;

public var _Bouncing:Bool;

public var _GemID:Float;

public var _StartX:Float;

public var _Direction:Float;

public var _Position:Float;

public var _StartY:Float;

public var _ListX:Float;

public var _Visible:Bool;

public var _ActorNumber:Float;

public var _ListY:Float;

public var _SoundManager:Float;
    
/* ========================= Custom Event ========================= */
public function _customEvent_Reset():Void
{
        actor.setX(actor.getActorValue("StartX"));
        actor.setY(actor.getActorValue("StartY"));
        _ListX = asNumber(asNumber(actor.getActorValue("ListX")));
propertyChanged("_ListX", _ListX);
        _ListY = asNumber(asNumber(actor.getActorValue("ListY")));
propertyChanged("_ListY", _ListY);
        actor.enableActorDrawing();
        runLater(1000 * ((60 / getGameAttribute("GameTempo")) / 2), function(timeTask:TimedTask):Void {
                    _Bouncing = false;
propertyChanged("_Bouncing", _Bouncing);
}, actor);
}

    
/* ========================= Custom Event ========================= */
public function _customEvent_Collide():Void
{
        if(!(_Colliding))
{
            actor.setFilter([createTintFilter(Utils.getColorRGB(255,255,255), 100/100)]);
            _Colliding = true;
propertyChanged("_Colliding", _Colliding);
            _OpacitiyMod = asNumber(100);
propertyChanged("_OpacitiyMod", _OpacitiyMod);
            _ActorNumber = asNumber(asNumber(List2D.get_entry(Std.int(_ListX), Std.int(_ListY), getValueForScene("Scene Manager", "_UID"))));
propertyChanged("_ActorNumber", _ActorNumber);
            playSound(getActor(Std.int(_ActorNumber)).getValue("beat gem", "_GemSound"));
            getActor(Std.int(_ActorNumber)).spinBy(360, (60 / getGameAttribute("GameTempo")), Linear.easeNone);
            _SoundManager += 1;
propertyChanged("_SoundManager", _SoundManager);
            setGameAttribute("SoundManager", _SoundManager);
            for(actorOfType in getActorsOfType(getActorType(125)))
{
if(actorOfType != null && !actorOfType.dead && !actorOfType.recycled){
                actorOfType.setValue("WormHole", "_OGSize", (actorOfType.getValue("WormHole", "_OGSize") + 1));
}
}

            runLater(1000 * ((60 / getGameAttribute("GameTempo")) / 2), function(timeTask:TimedTask):Void {
                        _Colliding = false;
propertyChanged("_Colliding", _Colliding);
                        actor.clearFilters();
}, actor);
}

}


 
 	public function new(dummy:Int, actor:Actor, engine:Engine)
	{
		super(actor, engine);	
		nameMap.set("BeatPos", "_BeatPos");
_BeatPos = 0.0;
nameMap.set("Metronome", "_Metronome");
nameMap.set("Colliding?", "_Colliding");
_Colliding = false;
nameMap.set("TypeNumber", "_TypeNumber");
_TypeNumber = 0.0;
nameMap.set("1", "_1");
nameMap.set("2", "_2");
nameMap.set("3", "_3");
nameMap.set("4", "_4");
nameMap.set("5", "_5");
nameMap.set("6", "_6");
nameMap.set("Xincrementer", "_Xincrementer");
_Xincrementer = 0.0;
nameMap.set("Searcher", "_Searcher");
_Searcher = 0.0;
nameMap.set("BeaterCombos", "_BeaterCombos");
_BeaterCombos = 0.0;
nameMap.set("OpacitiyMod", "_OpacitiyMod");
_OpacitiyMod = 0.0;
nameMap.set("Actor", "actor");
nameMap.set("GemSound", "_GemSound");
nameMap.set("Bouncing?", "_Bouncing");
_Bouncing = false;
nameMap.set("GemID", "_GemID");
_GemID = 0.0;
nameMap.set("StartX", "_StartX");
_StartX = 0.0;
nameMap.set("Direction", "_Direction");
_Direction = 0.0;
nameMap.set("Position", "_Position");
_Position = 0.0;
nameMap.set("StartY", "_StartY");
_StartY = 0.0;
nameMap.set("ListX", "_ListX");
_ListX = 0.0;
nameMap.set("Visible", "_Visible");
_Visible = false;
nameMap.set("ActorNumber", "_ActorNumber");
_ActorNumber = 0.0;
nameMap.set("ListY", "_ListY");
_ListY = 0.0;
nameMap.set("SoundManager", "_SoundManager");
_SoundManager = 0.0;

	}
	
	override public function init()
	{
		    
/* ======================== When Creating ========================= */
        _Bouncing = false;
propertyChanged("_Bouncing", _Bouncing);
        actor.setActorValue("StartX", actor.getX());
        actor.setActorValue("StartY", actor.getY());
        actor.setActorValue("ListX", asNumber(getValueForScene("Scene Manager", "_BeaterRefillX")));
        actor.setActorValue("ListY", asNumber(getValueForScene("Scene Manager", "_BeaterRefillY")));
        _ListX = asNumber(asNumber(actor.getActorValue("ListX")));
propertyChanged("_ListX", _ListX);
        _ListY = asNumber(asNumber(actor.getActorValue("ListY")));
propertyChanged("_ListY", _ListY);
        setGameAttribute("BeaterCombo", (getGameAttribute("BeaterCombo") + 1));
        _Direction = asNumber(getGameAttribute("DIRECTION"));
propertyChanged("_Direction", _Direction);
        _BeaterCombos = asNumber((getGameAttribute("BeaterCombo") / 4));
propertyChanged("_BeaterCombos", _BeaterCombos);
        _TypeNumber = asNumber(getGameAttribute("TypeNumber"));
propertyChanged("_TypeNumber", _TypeNumber);
        _OpacitiyMod = asNumber(100);
propertyChanged("_OpacitiyMod", _OpacitiyMod);
        trace("" + _TypeNumber);
        if((_TypeNumber == 1))
{
            actor.setAnimation("" + _1);
}

        if((_TypeNumber == 2))
{
            actor.setAnimation("" + _2);
}

        if((_TypeNumber == 3))
{
            actor.setAnimation("" + _3);
}

        if((_TypeNumber == 4))
{
            actor.setAnimation("" + _4);
}

        if((_TypeNumber == 5))
{
            actor.setAnimation("" + _5);
}

        if((_TypeNumber == 6))
{
            actor.setAnimation("" + _6);
}

        if(!(_Bouncing))
{
            runPeriodically(1000 * (60 / getGameAttribute("GameTempo")), function(timeTask:TimedTask):Void {



                        if((getGameAttribute("DIRECTION") == 4))
{
                            actor.setX((actor.getX() + getGameAttribute("Grid Spacing")));
                            _ListX += 1;
propertyChanged("_ListX", _ListX);
}

                        if((getGameAttribute("DIRECTION") == 3))
{
                            actor.setX((actor.getX() - getGameAttribute("Grid Spacing")));
                            if((_ListX > 0))
{
                                _ListX -= 1;
propertyChanged("_ListX", _ListX);
}

}

                        if((getGameAttribute("DIRECTION") == 2))
{
                            actor.setY((actor.getY() + getGameAttribute("Grid Spacing")));
                            _ListY += 1;
propertyChanged("_ListY", _ListY);
}

                        if((getGameAttribute("DIRECTION") == 1))
{
                            actor.setY((actor.getY() - getGameAttribute("Grid Spacing")));
                            _ListY -= 1;
propertyChanged("_ListY", _ListY);
}

                        _Visible = true;
propertyChanged("_Visible", _Visible);
                        actor.enableActorDrawing();
                        if((_TypeNumber == asNumber(List2D.get_entry(Std.int(_ListX), Std.int(_ListY), getValueForScene("Scene Manager", "_GemType")))))
{
                            _customEvent_Collide();
}

                        runLater(1000 * ((60 / getGameAttribute("GameTempo")) / 2), function(timeTask:TimedTask):Void {
                                    _Visible = false;
propertyChanged("_Visible", _Visible);
                                    actor.disableActorDrawing();
}, actor);
}, actor);
}

        runPeriodically(1000 * ((60 / getGameAttribute("GameTempo")) * 2), function(timeTask:TimedTask):Void {
                    if(((_OpacitiyMod <= 100) || (_OpacitiyMod >= 0)))
{
                        _OpacitiyMod -= 10;
propertyChanged("_OpacitiyMod", _OpacitiyMod);
}

}, actor);
    
/* ======================== When Updating ========================= */
addWhenUpdatedListener(null, function(elapsedTime:Float, list:Array<Dynamic>):Void {
if(wrapper.enabled){
        if((((actor.getX() > getGameAttribute("GridXPosition")) || (actor.getY() > getGameAttribute("GridYPosition"))) && !(_Bouncing)))
{
            actor.disableActorDrawing();
            _Bouncing = true;
propertyChanged("_Bouncing", _Bouncing);

            _customEvent_Reset();
}

        if((((actor.getX() < getGameAttribute("GridBoundX")) || (actor.getY() < getGameAttribute("GridBoundY"))) && !(_Bouncing)))
{
            actor.disableActorDrawing();
            _Bouncing = true;
propertyChanged("_Bouncing", _Bouncing);

            _customEvent_Reset();
}

        actor.fadeTo(_OpacitiyMod / 100, (60 / getGameAttribute("GameTempo")), Linear.easeNone);


        if((_OpacitiyMod == 0))
{
            recycleActor(actor);
}

}
});

	}	      	
	
	override public function forwardMessage(msg:String)
	{
		
	}
}