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



class Design_27_27_MenuStar extends ActorScript
{          	
	
public var _LevelID:Float;

public var _WinConditions:Array<Dynamic>;

public var _WinConditionMod:Float;
    
/* ========================= Custom Event ========================= */
public function _customEvent_GenerateLevel():Void
{
        disableBehaviorForScene("Scene Manager");
        setGameAttribute("ColorTargets", new Array<Dynamic>());
        _WinConditionMod = asNumber(randomInt(Math.floor(1), Math.floor(2)));
propertyChanged("_WinConditionMod", _WinConditionMod);
        trace("" + _WinConditionMod);
        if((_WinConditionMod == 1))
{
            setGameAttribute("ColorMatchInMoves", true);
            setGameAttribute("ScoreInMoves", false);
}

        else if((_WinConditionMod == 2))
{
            setGameAttribute("ColorMatchInMoves", false);
            setGameAttribute("ScoreInMoves", true);
}

        setGameAttribute("BeaterCombo", 0);
        setGameAttribute("ColorMatch1", randomInt(Math.floor(20), Math.floor(60)));
        getGameAttribute("ColorTargets").insert(Std.int(0), getGameAttribute("ColorMatch1"));
        setGameAttribute("ColorMatch2", randomInt(Math.floor(20), Math.floor(60)));
        getGameAttribute("ColorTargets").insert(Std.int(1), getGameAttribute("ColorMatch2"));
        setGameAttribute("ColorMatch3", randomInt(Math.floor(20), Math.floor(60)));
        getGameAttribute("ColorTargets").insert(Std.int(2), getGameAttribute("ColorMatch3"));
        setGameAttribute("ColorMatch4", randomInt(Math.floor(20), Math.floor(60)));
        getGameAttribute("ColorTargets").insert(Std.int(3), getGameAttribute("ColorMatch4"));
        setGameAttribute("ColorMatch5", randomInt(Math.floor(20), Math.floor(60)));
        getGameAttribute("ColorTargets").insert(Std.int(4), getGameAttribute("ColorMatch5"));
        setGameAttribute("ColorMatch6", randomInt(Math.floor(20), Math.floor(60)));
        getGameAttribute("ColorTargets").insert(Std.int(5), getGameAttribute("ColorMatch6"));
        setGameAttribute("DIRECTION", randomInt(Math.floor(1), Math.floor(4)));
        setGameAttribute("GameTempo", randomInt(Math.floor(75), Math.floor(116)));
        setGameAttribute("Moves Counter", 0);
        setGameAttribute("MovesTarget", randomInt(Math.floor(30), Math.floor(80)));
        setGameAttribute("ScoreTarget", randomInt(Math.floor(10000), Math.floor(50000)));
        setGameAttribute("GridX", randomInt(Math.floor(4), Math.floor(7)));
        setGameAttribute("GridY", randomInt(Math.floor(4), Math.floor(9)));
        setGameAttribute("Grid Spacing", (50 - getGameAttribute("GridX")));
        setGameAttribute("spawnX", 0);
        setGameAttribute("spawnY", 0);
        setGameAttribute("Time Since Last Match", 0);
        setGameAttribute("TypeNumber", 0);
        trace("" + getGameAttribute("ColorTargets"));
        enableBehaviorForScene("Scene Manager");
        switchScene(GameModel.get().scenes.get(2).getID(), createFadeOut((1)),createFadeIn((1)));
}


 
 	public function new(dummy:Int, actor:Actor, engine:Engine)
	{
		super(actor, engine);	
		nameMap.set("LevelID", "_LevelID");
_LevelID = 0.0;
nameMap.set("WinConditions", "_WinConditions");
_WinConditions = [];
nameMap.set("WinConditionMod", "_WinConditionMod");
_WinConditionMod = 0.0;
nameMap.set("Actor", "actor");

	}
	
	override public function init()
	{
		    
/* ======================== When Creating ========================= */
        _LevelID = asNumber(getGameAttribute("LevelID_Gen"));
propertyChanged("_LevelID", _LevelID);
        runPeriodically(1000 * (60 / getGameAttribute("GameTempo")), function(timeTask:TimedTask):Void {
                    actor.spinBy(360, (60 / getGameAttribute("GameTempo")), Elastic.easeInOut);
}, actor);
    
/* =========================== On Actor =========================== */
addMouseOverActorListener(actor, function(mouseState:Int, list:Array<Dynamic>):Void {
if(wrapper.enabled && 3 == mouseState){
        _customEvent_GenerateLevel();
}
});
    
/* ========================= When Drawing ========================= */
addWhenDrawingListener(null, function(g:G, x:Float, y:Float, list:Array<Dynamic>):Void {
if(wrapper.enabled){
        g.setFont(getFont(36));
        if(actor.isMouseOver())
{
            g.translateToScreen();
            g.drawString("" + (("" + "LEVEL: ") + ("" + _LevelID)), (getSceneWidth() / 2), (getSceneHeight() / 2));
}

}
});

	}	      	
	
	override public function forwardMessage(msg:String)
	{
		
	}
}