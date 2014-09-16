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



class Design_9_9_BeatLineManager extends SceneScript
{          	
	
public var _AlreadySpawned:Array<Dynamic>;

public var _BeatLineX:Float;

public var _BeatLineY:Float;

public var _YIncrementer:Float;

public var _GridSpacing:Float;

public var _BeatPos:Float;

public var _SpawnTypeID:Float;

public var _SpawnTypeActor:ActorType;

public var _RefillX:Float;

public var _RefillY:Float;

public var _GemType:Array<Dynamic>;

public var _BP:Array<Dynamic>;

public var _SpecialSpawn:Bool;
    
/* ========================= Custom Event ========================= */
public function _customEvent_BeaterSpawn():Void
{
        trace("" + "BEATSPAWN");
        _RefillX = asNumber(0);
propertyChanged("_RefillX", _RefillX);
        for(index0 in 0...Std.int(getGameAttribute("GridX")))
{
            _RefillY = asNumber(0);
propertyChanged("_RefillY", _RefillY);
            for(index1 in 0...Std.int(getGameAttribute("GridY")))
{
                if((!List2D.check_entry(Std.int(_RefillX), Std.int(_RefillY), getGameAttribute("BPS")) == false))
{
                    trace("" + "CREATEBEATSPAWN");
                    createRecycledActor(getActorType(58), (((_RefillX * _GridSpacing) + _GridSpacing) + (getScreenWidth() / getGameAttribute("GridX"))), (((_RefillY * _GridSpacing) + _GridSpacing) + 0), Script.FRONT);
                    List2D.set_entry(Std.int(_RefillX), Std.int(_RefillY), null, getGameAttribute("BPS"));
}

                _RefillY += 1;
propertyChanged("_RefillY", _RefillY);
}

            _RefillX += 1;
propertyChanged("_RefillX", _RefillX);
}

}


 
 	public function new(dummy:Int, engine:Engine)
	{
		super(engine);
		nameMap.set("AlreadySpawned?", "_AlreadySpawned");
_AlreadySpawned = [];
nameMap.set("BeatLineX", "_BeatLineX");
_BeatLineX = 0.0;
nameMap.set("BeatLineY", "_BeatLineY");
_BeatLineY = 0.0;
nameMap.set("YIncrementer", "_YIncrementer");
_YIncrementer = 0.0;
nameMap.set("Grid Spacing", "_GridSpacing");
_GridSpacing = 0.0;
nameMap.set("BeatPos", "_BeatPos");
_BeatPos = 0.0;
nameMap.set("SpawnType_ID", "_SpawnTypeID");
_SpawnTypeID = 0.0;
nameMap.set("SpawnTypeActor", "_SpawnTypeActor");
nameMap.set("RefillX", "_RefillX");
_RefillX = 0.0;
nameMap.set("RefillY", "_RefillY");
_RefillY = 0.0;
nameMap.set("Gem_Type", "_GemType");
_GemType = [];
nameMap.set("BP", "_BP");
_BP = [];
nameMap.set("SpecialSpawn?", "_SpecialSpawn");
_SpecialSpawn = false;

	}
	
	override public function init()
	{
		    
/* ======================== When Creating ========================= */
        _GridSpacing = asNumber(getGameAttribute("Grid Spacing"));
propertyChanged("_GridSpacing", _GridSpacing);

	}	      	
	
	override public function forwardMessage(msg:String)
	{
		
	}
}