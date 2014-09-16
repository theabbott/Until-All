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



class Design_23_23_corpes extends ActorScript
{          	
	
public var _NumberOnScreen:Float;

public var _CoinDrop:Sound;

 
 	public function new(dummy:Int, actor:Actor, engine:Engine)
	{
		super(actor, engine);	
		nameMap.set("NumberOnScreen", "_NumberOnScreen");
_NumberOnScreen = 0.0;
nameMap.set("CoinDrop", "_CoinDrop");
nameMap.set("Actor", "actor");

	}
	
	override public function init()
	{
		    
/* ======================== When Creating ========================= */
        _NumberOnScreen += 1;
propertyChanged("_NumberOnScreen", _NumberOnScreen);
        if((_NumberOnScreen == 1))
{
            _CoinDrop = getSound(67);
propertyChanged("_CoinDrop", _CoinDrop);
}

        if((_NumberOnScreen == 2))
{
            _CoinDrop = getSound(68);
propertyChanged("_CoinDrop", _CoinDrop);
}

        if((_NumberOnScreen == 3))
{
            _CoinDrop = getSound(69);
propertyChanged("_CoinDrop", _CoinDrop);
}

        if((_NumberOnScreen == 4))
{
            _CoinDrop = getSound(70);
propertyChanged("_CoinDrop", _CoinDrop);
}

        if((_NumberOnScreen == 5))
{
            _CoinDrop = getSound(71);
propertyChanged("_CoinDrop", _CoinDrop);
}

        if((_NumberOnScreen == 6))
{
            _CoinDrop = getSound(72);
propertyChanged("_CoinDrop", _CoinDrop);
}

        if((_NumberOnScreen >= 7))
{
            _CoinDrop = getSound(73);
propertyChanged("_CoinDrop", _CoinDrop);
}

        playSound(_CoinDrop);
        actor.fadeTo(0, ((60 / getGameAttribute("GameTempo")) / 2), Linear.easeNone);
        runLater(1000 * ((60 / getGameAttribute("GameTempo")) / 4), function(timeTask:TimedTask):Void {
                    _NumberOnScreen -= 1;
propertyChanged("_NumberOnScreen", _NumberOnScreen);
                    recycleActor(actor);
}, actor);

	}	      	
	
	override public function forwardMessage(msg:String)
	{
		
	}
}