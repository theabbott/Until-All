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



class Design_24_24_LevelManager extends SceneScript
{          	
	
 
 	public function new(dummy:Int, engine:Engine)
	{
		super(engine);
		
	}
	
	override public function init()
	{
		    
/* ======================== When Creating ========================= */
        stopAllSounds();
        setGameAttribute("GameTempo", randomInt(Math.floor(60), Math.floor(180)));
        setGameAttribute("LevelID_Gen", 0);
        for(index0 in 0...Std.int(20))
{
            setGameAttribute("LevelID_Gen", (getGameAttribute("LevelID_Gen") + 1));
            createRecycledActor(getActorType(85), randomInt(Math.floor(50), Math.floor(getSceneWidth())), randomInt(Math.floor(50), Math.floor(getSceneHeight())), Script.FRONT);
            getLastCreatedActor().spinBy(randomInt(Math.floor(0), Math.floor(360)), 2, Linear.easeNone);
            getLastCreatedActor().growTo(randomInt(Math.floor(60), Math.floor(100))/100, randomInt(Math.floor(60), Math.floor(100))/100, 2, Linear.easeNone);
}

        for(index0 in 0...Std.int(32))
{
            stopSoundOnChannel(Std.int(index0));
}


	}	      	
	
	override public function forwardMessage(msg:String)
	{
		
	}
}