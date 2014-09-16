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



class Design_6_6_Metronome extends SceneScript
{          	
	
public var _BeatCheck:Float;

public var _BeatRemainder:Float;

public var _Go:Bool;

public var _SceneTempo:Float;

public var _SceneTrack:Sound;

public var _SceneTimeSignature:Float;

public var _MeasureNumber:Float;

public var _TimeElapsed:Float;

public var _TimeStart:Float;

public var _CurrentTime:Float;

public var _BeatPos:Float;
    
/* ========================= Custom Event ========================= */
public function _customEvent_Go():Void
{

        setGameAttribute("GameMeasureNumber", 1);
        _TimeStart = asNumber(nme.Lib.getTimer()*0.001);
propertyChanged("_TimeStart", _TimeStart);
        _Go = true;
propertyChanged("_Go", _Go);
}


 
 	public function new(dummy:Int, engine:Engine)
	{
		super(engine);
		nameMap.set("BeatCheck", "_BeatCheck");
_BeatCheck = 0.0;
nameMap.set("BeatRemainder", "_BeatRemainder");
_BeatRemainder = 0.0;
nameMap.set("Go", "_Go");
_Go = false;
nameMap.set("SceneTempo", "_SceneTempo");
_SceneTempo = 0.0;
nameMap.set("SceneTrack", "_SceneTrack");
nameMap.set("SceneTimeSignature", "_SceneTimeSignature");
_SceneTimeSignature = 0.0;
nameMap.set("MeasureNumber", "_MeasureNumber");
_MeasureNumber = 0.0;
nameMap.set("TimeElapsed", "_TimeElapsed");
_TimeElapsed = 0.0;
nameMap.set("TimeStart", "_TimeStart");
_TimeStart = 0.0;
nameMap.set("CurrentTime", "_CurrentTime");
_CurrentTime = 0.0;
nameMap.set("BeatPos", "_BeatPos");
_BeatPos = 0.0;

	}
	
	override public function init()
	{
		    
/* ======================== When Creating ========================= */
        _TimeElapsed = asNumber(0);
propertyChanged("_TimeElapsed", _TimeElapsed);
        _TimeStart = asNumber(0);
propertyChanged("_TimeStart", _TimeStart);
        _SceneTrack = getSound(10);
propertyChanged("_SceneTrack", _SceneTrack);
        setGameAttribute("GameBeatPosition", 1.0);
        setGameAttribute("GameBeatsPerMeasure", _SceneTimeSignature);

        _SceneTempo = asNumber(getGameAttribute("GameTempo"));
propertyChanged("_SceneTempo", _SceneTempo);
        _BeatCheck = asNumber((60 / getGameAttribute("GameTempo")));
propertyChanged("_BeatCheck", _BeatCheck);
        _TimeStart = asNumber(nme.Lib.getTimer()*0.001);
propertyChanged("_TimeStart", _TimeStart);
        _Go = false;
propertyChanged("_Go", _Go);
        trace("" + "Metronome Initialized");
    
/* ======================== When Updating ========================= */
addWhenUpdatedListener(null, function(elapsedTime:Float, list:Array<Dynamic>):Void {
if(wrapper.enabled){
        _CurrentTime= nme.Lib.getTimer()*0.001;
        _TimeElapsed = asNumber((_CurrentTime - _TimeStart));
propertyChanged("_TimeElapsed", _TimeElapsed);
        if((_TimeStart <= _CurrentTime))
{
            _TimeStart = asNumber(_CurrentTime);
propertyChanged("_TimeStart", _TimeStart);
}

        _BeatCheck += _TimeElapsed;
        if((_BeatCheck >= (60 / getGameAttribute("GameTempo"))))
{
            _BeatCheck = asNumber((_BeatCheck - (60 / getGameAttribute("GameTempo"))));
propertyChanged("_BeatCheck", _BeatCheck);
            _BeatRemainder = asNumber(_BeatCheck);
propertyChanged("_BeatRemainder", _BeatRemainder);
            runLater(1000 * (60 / getGameAttribute("GameTempo")), function(timeTask:TimedTask):Void {
                        setGameAttribute("GameBeatWindow", false);
}, null);
            runLater(1000 * ((60 / getGameAttribute("GameTempo")) - (60 / getGameAttribute("GameTempo"))), function(timeTask:TimedTask):Void {
                        setGameAttribute("GameBeatWindow", true);
}, null);
            if((getGameAttribute("GameBeatPosition") > (getGameAttribute("GameBeatsPerMeasure") - 1.0)))
{
                setGameAttribute("GameMeasureNumber", (getGameAttribute("GameMeasureNumber") + 1));
                setGameAttribute("GameBeatPosition", 1.0);
                if(!(_Go))
{
                    _customEvent_Go();
}

}

            else
{
                setGameAttribute("GameBeatPosition", (getGameAttribute("GameBeatPosition") + 1.0));
}

}

}
});
    
/* ========================= When Drawing ========================= */
addWhenDrawingListener(null, function(g:G, x:Float, y:Float, list:Array<Dynamic>):Void {
if(wrapper.enabled){




        g.drawString("" + (("" + "BPM") + ("" + ("" + getGameAttribute("GameTempo")))), 1, 400);




}
});

	}	      	
	
	override public function forwardMessage(msg:String)
	{
		
	}
}