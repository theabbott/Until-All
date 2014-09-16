package scripts;

import haxe.xml.Fast;
import nme.Assets;
import com.stencyl.AssetLoader;
import com.stencyl.Input;
import com.stencyl.Key;
import com.stencyl.Engine;

class MyAssets implements AssetLoader
{
	//Game
	public static var landscape:Bool = false;
	public static var autorotate:Bool = true;
	public static var stretchToFit:Bool = false;
	public static var scaleToFit1:Bool = false;
	public static var scaleToFit2:Bool = false;
	public static var scaleToFit3:Bool = true;
	public static var stageWidth:Int = 320;
	public static var stageHeight:Int = 480;
	public static var initSceneID:Int = 3;
	public static var physicsMode:Int = 0;
	public static var gameScale:Float = 1;
	public static var gameImageBase:String = "1x";
	public static var antialias:Bool = true;
	public static var startInFullScreen = false;
	public static var scaleMode:Int = 0;

	//APIs
	public static var adPositionBottom:Bool = true;
	public static var whirlID:String = "";
	public static var mochiID:String = "";
	public static var cpmstarID:String = "";
	public static var newgroundsID:String = "";
	public static var newgroundsKey:String = "";
	
	//Other
	public static var releaseMode:Bool = false;
	public static var showConsole:Bool = false;
	public static var debugDraw:Bool = false;
	public static var always1x:Bool = false;
	public static var maxScale:Float = 4.0;
	public static var disableBackButton:Bool = true;
	
	//Keys
	public static var androidPublicKey:String = "";

	public function new()
	{
		Input.enable();
		var label:flash.text.TextField = new flash.text.TextField();
var fnt:flash.text.TextFormat = new flash.text.TextFormat("Arial", 12);
fnt.color = 0xFFFFFF;
label.defaultTextFormat = fnt;
label.text = "Stencyl - Trial Mode";
label.background = true;
label.backgroundColor = 0x333333;
label.x = 0;
label.y = 0;
label.width = 120;
label.height = 20;
motion.Actuate.timer(0.1).onComplete(function() {Engine.engine.root.addChild(label);});Input.define("up", [nme.ui.Keyboard.UP]);
		Input.define("down", [nme.ui.Keyboard.DOWN]);
		Input.define("left", [nme.ui.Keyboard.LEFT]);
		Input.define("right", [nme.ui.Keyboard.RIGHT]);
		Input.define("action1", [nme.ui.Keyboard.Z]);
		Input.define("action2", [nme.ui.Keyboard.X]);
		Input.define("enter", [nme.ui.Keyboard.ENTER]);
		Input.define("w", [nme.ui.Keyboard.W]);
		Input.define("a1", [nme.ui.Keyboard.A]);
		Input.define("Key s", [nme.ui.Keyboard.S]);
		Input.define("Key d", [nme.ui.Keyboard.D]);
		
	}
	
	public function loadResources(resourceMap:Map<String,Dynamic>):Void
	{
		var i = 0;
		var increment = 50.0 / Math.max(1, 106);
		
		
		resourceMap.set("1-0.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-1-0.png", false));
		resourceMap.set("1-1.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-1-1.png", false));
		resourceMap.set("1-2.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-1-2.png", false));
		resourceMap.set("1-3.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-1-3.png", false));
		resourceMap.set("1-4.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-1-4.png", false));
		resourceMap.set("1-5.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-1-5.png", false));
		resourceMap.set("1-6.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-1-6.png", false));
		resourceMap.set("1-7.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-1-7.png", false));
		resourceMap.set("1-8.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-1-8.png", false));
		resourceMap.set("1-9.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-1-9.png", false));
		resourceMap.set("1-10.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-1-10.png", false));
		resourceMap.set("1-11.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-1-11.png", false));
		resourceMap.set("1-12.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-1-12.png", false));
		resourceMap.set("1-13.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-1-13.png", false));
		resourceMap.set("1-14.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-1-14.png", false));
		resourceMap.set("1-15.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-1-15.png", false));
		resourceMap.set("1-17.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-1-17.png", false));
		resourceMap.set("1-16.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-1-16.png", false));
com.stencyl.Data.instance.updatePreloader(15 + Std.int(increment * i));
i++;
		resourceMap.set("3-0.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-3-0.png", false));
com.stencyl.Data.instance.updatePreloader(15 + Std.int(increment * i));
i++;
		resourceMap.set("15-0.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-15-0.png", false));
com.stencyl.Data.instance.updatePreloader(15 + Std.int(increment * i));
i++;
		resourceMap.set("36.fnt", Assets.getText("assets/graphics/" + Engine.IMG_BASE + "/font-36.fnt"));
		resourceMap.set("36.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/font-36.png", false));
com.stencyl.Data.instance.updatePreloader(15 + Std.int(increment * i));
i++;
		resourceMap.set("55.fnt", Assets.getText("assets/graphics/" + Engine.IMG_BASE + "/font-55.fnt"));
		resourceMap.set("55.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/font-55.png", false));
com.stencyl.Data.instance.updatePreloader(15 + Std.int(increment * i));
i++;
		resourceMap.set("54.fnt", Assets.getText("assets/graphics/" + Engine.IMG_BASE + "/font-54.fnt"));
		resourceMap.set("54.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/font-54.png", false));
com.stencyl.Data.instance.updatePreloader(15 + Std.int(increment * i));
i++;
		resourceMap.set("59-0.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-59-0.png", false));
		resourceMap.set("59-1.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-59-1.png", false));
		resourceMap.set("59-2.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-59-2.png", false));
		resourceMap.set("59-3.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-59-3.png", false));
		resourceMap.set("59-4.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-59-4.png", false));
		resourceMap.set("59-5.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-59-5.png", false));
com.stencyl.Data.instance.updatePreloader(15 + Std.int(increment * i));
i++;
		resourceMap.set("66-0.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-66-0.png", false));
com.stencyl.Data.instance.updatePreloader(15 + Std.int(increment * i));
i++;
		resourceMap.set("86-0.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-86-0.png", false));
com.stencyl.Data.instance.updatePreloader(15 + Std.int(increment * i));
i++;
		resourceMap.set("102-0.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-102-0.png", false));
com.stencyl.Data.instance.updatePreloader(15 + Std.int(increment * i));
i++;
		resourceMap.set("100-0.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/background-100-0.png", false));
com.stencyl.Data.instance.updatePreloader(15 + Std.int(increment * i));
i++;
		resourceMap.set("98-0.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-98-0.png", false));
com.stencyl.Data.instance.updatePreloader(15 + Std.int(increment * i));
i++;
		resourceMap.set("99-0.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/background-99-0.png", false));
com.stencyl.Data.instance.updatePreloader(15 + Std.int(increment * i));
i++;
		resourceMap.set("96-0.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-96-0.png", false));
com.stencyl.Data.instance.updatePreloader(15 + Std.int(increment * i));
i++;
		resourceMap.set("106-0.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-106-0.png", false));
		resourceMap.set("106-1.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-106-1.png", false));
com.stencyl.Data.instance.updatePreloader(15 + Std.int(increment * i));
i++;
		resourceMap.set("104-0.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-104-0.png", false));
com.stencyl.Data.instance.updatePreloader(15 + Std.int(increment * i));
i++;
		resourceMap.set("126-0.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-126-0.png", false));
com.stencyl.Data.instance.updatePreloader(15 + Std.int(increment * i));
i++;
		resourceMap.set("122-0.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-122-0.png", false));
com.stencyl.Data.instance.updatePreloader(15 + Std.int(increment * i));
i++;
		resourceMap.set("120-0.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-120-0.png", false));
com.stencyl.Data.instance.updatePreloader(15 + Std.int(increment * i));
i++;
		resourceMap.set("129-0.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/background-129-0.png", false));
com.stencyl.Data.instance.updatePreloader(15 + Std.int(increment * i));
i++;
		resourceMap.set("128-0.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-128-0.png", false));
com.stencyl.Data.instance.updatePreloader(15 + Std.int(increment * i));
i++;
		resourceMap.set("131-0.png", Assets.getBitmapData("assets/graphics/" + Engine.IMG_BASE + "/sprite-131-0.png", false));
com.stencyl.Data.instance.updatePreloader(15 + Std.int(increment * i));
i++;
	}
	
	public function loadScenes(scenesXML:Map<Int,String>):Void
	{
		var i = 0;
		var increment = 10.0 / Math.max(1, 3);
		
		scenesXML.set(1, "Level Select Screen");

com.stencyl.Data.instance.updatePreloader(90 + Std.int(increment * i));
i++;scenesXML.set(2, "1");

com.stencyl.Data.instance.updatePreloader(90 + Std.int(increment * i));
i++;scenesXML.set(3, "Titler");

com.stencyl.Data.instance.updatePreloader(90 + Std.int(increment * i));
i++;
	}
}