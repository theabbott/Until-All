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



class Design_44_44_WormHole extends ActorScript
{          	
	
public var _OGSize:Float;

public var _Xpos:Float;

public var _YPos:Float;

public var _opacity:Float;

 
 	public function new(dummy:Int, actor:Actor, engine:Engine)
	{
		super(actor, engine);	
		nameMap.set("OGSize", "_OGSize");
_OGSize = 0.0;
nameMap.set("Xpos", "_Xpos");
_Xpos = 0.0;
nameMap.set("YPos", "_YPos");
_YPos = 0.0;
nameMap.set("opacity", "_opacity");
_opacity = 0.0;
nameMap.set("Actor", "actor");

	}
	
	override public function init()
	{
		    
/* ======================== When Creating ========================= */
        _opacity = asNumber(100);
propertyChanged("_opacity", _opacity);
        actor.sendToBack();
        actor.alpha = 30 / 100;
        _Xpos = asNumber(actor.getX());
propertyChanged("_Xpos", _Xpos);
        _YPos = asNumber(actor.getY());
propertyChanged("_YPos", _YPos);
        _OGSize = asNumber(10);
propertyChanged("_OGSize", _OGSize);
        actor.disableActorDrawing();
        actor.setFilter([createTintFilter(Utils.getColorRGB(0,255,51), 100/100)]);
        actor.growTo(10/100, 10/100, 0.01, Linear.easeNone);
        actor.enableActorDrawing();
        runPeriodically(1000 * (60 / getGameAttribute("GameTempo")), function(timeTask:TimedTask):Void {
                    if(!(getValueForScene("Scene Manager", "_EndLevel")))
{
                        if((getValueForScene("Metronome", "_Go") == true))
{
                            actor.growTo((_OGSize + 10)/100, (_OGSize + 10)/100, ((60 / getGameAttribute("GameTempo")) / 2), Linear.easeNone);
                            runLater(1000 * ((60 / getGameAttribute("GameTempo")) / 2), function(timeTask:TimedTask):Void {
                                        actor.growTo((_OGSize - 10)/100, (_OGSize - 10)/100, ((60 / getGameAttribute("GameTempo")) / 2), Linear.easeNone);
}, actor);
}

                        actor.spinBy((_OGSize + 12.5), (60 / getGameAttribute("GameTempo")), Linear.easeNone);

}

}, actor);

	}	      	
	
	override public function forwardMessage(msg:String)
	{
		
	}
}