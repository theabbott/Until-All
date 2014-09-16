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



class Design_38_38_CombotxtLife extends ActorScript
{          	
	
public var _combonumber:Float;

public var _opacity:Float;

 
 	public function new(dummy:Int, actor:Actor, engine:Engine)
	{
		super(actor, engine);	
		nameMap.set("combonumber", "_combonumber");
_combonumber = 0.0;
nameMap.set("opacity", "_opacity");
_opacity = 0.0;
nameMap.set("Actor", "actor");

	}
	
	override public function init()
	{
		    
/* ======================== When Creating ========================= */
        actor.setCurrentFrame(Std.int(0));
        actor.setYVelocity(-10);
        actor.alpha = 100 / 100;
        _opacity = asNumber(100);
propertyChanged("_opacity", _opacity);
        actor.setFilter([createTintFilter(Utils.getColorRGB(0,255,255), 100/100)]);
        _combonumber = asNumber((getValueForScene("Scene Manager", "_Combo") - 1));
propertyChanged("_combonumber", _combonumber);
        trace("" + (("" + "ComboNumber") + ("" + _combonumber)));
        runPeriodically(1000 * 0.01, function(timeTask:TimedTask):Void {
                    actor.alpha = ((actor.alpha * 100) - 1) / 100;
}, actor);
        if((_combonumber == 1))
{
            playSound(getSound(67));
}

        if((_combonumber == 2))
{
            playSound(getSound(68));
}

        if((_combonumber == 3))
{
            playSound(getSound(69));
}

        if((_combonumber == 4))
{
            playSound(getSound(70));
}

        if((_combonumber == 5))
{
            playSound(getSound(71));
}

        if((_combonumber == 6))
{
            playSound(getSound(72));
}

        if((_combonumber >= 7))
{
            playSound(getSound(73));
}

    
/* ======================== When Updating ========================= */
addWhenUpdatedListener(null, function(elapsedTime:Float, list:Array<Dynamic>):Void {
if(wrapper.enabled){
        actor.setCurrentFrame(Std.int(_combonumber));
        if(((actor.alpha * 100) <= 0))
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