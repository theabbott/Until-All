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



class Design_5_5_beatgem extends ActorScript
{          	
	
public var _StartX:Float;

public var _StartY:Float;

public var _Swapping:Bool;

public var _Target:Region;

public var _AlreadySpawned:Array<Dynamic>;

public var _SoundType:Float;

public var _GemSound:Sound;

public var _NewX:Float;

public var _NewY:Float;

public var _SwappingUP:Bool;

public var _SwappingDown:Bool;

public var _SwappingLeft:Bool;

public var _SwappingRight:Bool;

public var _GemTypeNumber:Float;

public var _GemID:Float;

public var _Octave:Float;

public var _Colliding:Bool;

public var _ActorReveal:Float;

public var _RegionList:Array<Dynamic>;

public var _YIncrementer:Float;

public var _Xincrementer:Float;

public var _SelfSelector:Actor;

public var _UID:Array<Dynamic>;

public var _SpawnTypeID:Float;

public var _SpawnTypeActor:ActorType;

public var _type2:String;

public var _type1:String;

public var _type4:String;

public var _type6:String;

public var _type5:String;

public var _Metronome:Sound;

public var _BeaterCombo:Float;

public var _type3:String;

public var _Direction:Float;

public var _Type7:String;

public var _Type8:String;

public var _CanSwap:Bool;

public var _Gem:Actor;

public var _type10:String;

public var _type11:String;

public var _TypeNumber:Float;

public var _Type9:String;

public var _ColorMatch1:Float;

public var _ColorMatch2:Float;

public var _type12:String;

public var _GemType:Array<Dynamic>;

public var _ColorMatch6:Float;

public var _ColorMatch5:Float;

public var _ColorMatch4:Float;

public var _ColorMatch3:Float;

public var _Type16:String;

public var _Type15:String;

public var _Type14:String;

public var _Type13:String;

public var _RegionCreated:Bool;

public var _Degrees:Float;

public var _Type18:String;

public var _Type17:String;

public var _Taplist:Array<Dynamic>;

public var _GemSelector:Float;

public var _Tappable:Bool;

public var _GTempo:Float;

public var _tapping:Bool;

public var _TappingList:Array<Dynamic>;

public var _RestTap:Bool;
    
/* ========================= Custom Event ========================= */
public function _customEvent_Tappy():Void
{
        _tapping = true;
propertyChanged("_tapping", _tapping);
        setValueForScene("Scene Manager", "_TapmodeFlag", true);
        runPeriodically(1000 * (60 / getGameAttribute("GameTempo")), function(timeTask:TimedTask):Void {
                    setGameAttribute("OnBeat", false);
                    if(!(getGameAttribute("Tappings")))
{
                        sayToScene("Scene Manager", "_customEvent_" + "ResetTap");
                        actor.growTo(100/100, 100/100, ((60 / getGameAttribute("GameTempo")) / 2), Linear.easeNone);
                        timeTask.repeats = false;
return;
}


                    actor.growTo(100/100, 100/100, ((60 / getGameAttribute("GameTempo")) / 2), Linear.easeNone);
                    runLater(1000 * ((60 / getGameAttribute("GameTempo")) / 2), function(timeTask:TimedTask):Void {
                                setGameAttribute("OnBeat", true);
                                actor.growTo(120/100, 120/100, ((60 / getGameAttribute("GameTempo")) / 2), Linear.easeNone);
}, actor);
}, actor);
        if(!(getGameAttribute("TapMode")))
{
            setGameAttribute("TapMode", true);
}

}

    
/* ========================= Custom Event ========================= */
public function _customEvent_SwapUp():Void
{

        _Swapping = true;
propertyChanged("_Swapping", _Swapping);
        createBoxRegion(actor.getX(), (actor.getY() - getGameAttribute("Grid Spacing")), (actor.getWidth()), (actor.getHeight()));
        setGameAttribute("RegionCreated?", true);
        _Target = getLastCreatedRegion();
propertyChanged("_Target", _Target);
        runLater(1000 * 0.2, function(timeTask:TimedTask):Void {
                    for(actorInRegion in getActorsInRegion(getLastCreatedRegion()))
{
if(actorInRegion != null && !actorInRegion.dead){
                        if((actorInRegion.getType() == getActorType(0)))
{

                            _Swapping = true;
propertyChanged("_Swapping", _Swapping);
                            trace("" + ("" + _Swapping));
                            actor.moveBy(0, (getLastCreatedRegion().getY() - actor.getY()), ((60 / 140) / 2), Quad.easeInOut);
                            actorInRegion.moveBy(0, getGameAttribute("Grid Spacing"), ((60 / 140) / 2), Quad.easeInOut);
                            _NewX = asNumber(actorInRegion.getValue("beat gem", "_StartX"));
propertyChanged("_NewX", _NewX);
                            _NewY = asNumber(actorInRegion.getValue("beat gem", "_StartY"));
propertyChanged("_NewY", _NewY);
                            actorInRegion.setValue("beat gem", "_StartX", _StartX);
                            actorInRegion.setValue("beat gem", "_StartY", _StartY);
                            _SwappingUP = true;
propertyChanged("_SwappingUP", _SwappingUP);
                            _customEvent_UpdatePosition();
}

}
}

                    if(!(_SwappingUP))
{
                        for (region in engine.getRegions())
	{
		removeRegion (region.getID());
	}
                        setGameAttribute("RegionCreated?", false);

                        _Swapping = false;
propertyChanged("_Swapping", _Swapping);
                        trace("" + ("" + _Swapping));
                        _SwappingUP = false;
propertyChanged("_SwappingUP", _SwappingUP);

}

}, actor);
}

    
/* ========================= Custom Event ========================= */
public function _customEvent_SwapDown():Void
{
        _Swapping = true;
propertyChanged("_Swapping", _Swapping);
        createBoxRegion(actor.getX(), (actor.getY() + getGameAttribute("Grid Spacing")), (actor.getWidth()), (actor.getHeight()));
        setGameAttribute("RegionCreated?", true);
        _Target = getLastCreatedRegion();
propertyChanged("_Target", _Target);
        runLater(1000 * 0.2, function(timeTask:TimedTask):Void {
                    for(actorInRegion in getActorsInRegion(getLastCreatedRegion()))
{
if(actorInRegion != null && !actorInRegion.dead){
                        if(((actorInRegion.getType() == getActorType(0)) == true))
{
                            _Swapping = true;
propertyChanged("_Swapping", _Swapping);
                            trace("" + ("" + _Swapping));
                            actor.moveBy(0, (getLastCreatedRegion().getY() - actor.getY()), ((60 / 140) / 2), Quad.easeInOut);
                            actorInRegion.moveBy(0, -(getGameAttribute("Grid Spacing")), ((60 / 140) / 2), Quad.easeInOut);
                            _NewX = asNumber(actorInRegion.getValue("beat gem", "_StartX"));
propertyChanged("_NewX", _NewX);
                            _NewY = asNumber(actorInRegion.getValue("beat gem", "_StartY"));
propertyChanged("_NewY", _NewY);
                            actorInRegion.setValue("beat gem", "_StartX", _StartX);
                            actorInRegion.setValue("beat gem", "_StartY", _StartY);
                            _SwappingDown = true;
propertyChanged("_SwappingDown", _SwappingDown);
                            _customEvent_UpdatePosition();
}

}
}

                    if(!(_SwappingDown))
{
                        for (region in engine.getRegions())
	{
		removeRegion (region.getID());
	}
                        setGameAttribute("RegionCreated?", false);
                        _Swapping = false;
propertyChanged("_Swapping", _Swapping);
                        trace("" + ("" + _Swapping));
                        _SwappingDown = false;
propertyChanged("_SwappingDown", _SwappingDown);

}

}, actor);
}

    
/* ========================= Custom Event ========================= */
public function _customEvent_SwapLeft():Void
{
        _Swapping = true;
propertyChanged("_Swapping", _Swapping);
        createBoxRegion((actor.getX() - getGameAttribute("Grid Spacing")), actor.getY(), (actor.getWidth()), (actor.getHeight()));
        setGameAttribute("RegionCreated?", true);
        _Target = getLastCreatedRegion();
propertyChanged("_Target", _Target);
        runLater(1000 * 0.2, function(timeTask:TimedTask):Void {
                    for(actorInRegion in getActorsInRegion(getLastCreatedRegion()))
{
if(actorInRegion != null && !actorInRegion.dead){
                        if(((actorInRegion.getType() == getActorType(0)) == true))
{
                            _Swapping = true;
propertyChanged("_Swapping", _Swapping);
                            trace("" + ("" + _Swapping));
                            actor.moveBy((getLastCreatedRegion().getX() - actor.getX()), 0, ((60 / 140) / 2), Quad.easeInOut);
                            actorInRegion.moveBy(getGameAttribute("Grid Spacing"), 0, ((60 / 140) / 2), Quad.easeInOut);
                            _NewX = asNumber(actorInRegion.getValue("beat gem", "_StartX"));
propertyChanged("_NewX", _NewX);
                            _NewY = asNumber(actorInRegion.getValue("beat gem", "_StartY"));
propertyChanged("_NewY", _NewY);
                            actorInRegion.setValue("beat gem", "_StartX", _StartX);
                            actorInRegion.setValue("beat gem", "_StartY", _StartY);
                            _SwappingLeft = true;
propertyChanged("_SwappingLeft", _SwappingLeft);
                            _customEvent_UpdatePosition();
}

}
}

                    if(!(_SwappingLeft))
{
                        for (region in engine.getRegions())
	{
		removeRegion (region.getID());
	}
                        setGameAttribute("RegionCreated?", false);
                        _Swapping = false;
propertyChanged("_Swapping", _Swapping);
                        trace("" + ("" + _Swapping));
                        _SwappingLeft = false;
propertyChanged("_SwappingLeft", _SwappingLeft);

}

}, actor);
}

    
/* ========================= Custom Event ========================= */
public function _customEvent_SwapRight():Void
{
        _Swapping = true;
propertyChanged("_Swapping", _Swapping);
        createBoxRegion((actor.getX() + getGameAttribute("Grid Spacing")), actor.getY(), (actor.getWidth()), (actor.getHeight()));
        setGameAttribute("RegionCreated?", true);
        _Target = getLastCreatedRegion();
propertyChanged("_Target", _Target);
        runLater(1000 * 0.2, function(timeTask:TimedTask):Void {
                    for(actorInRegion in getActorsInRegion(getLastCreatedRegion()))
{
if(actorInRegion != null && !actorInRegion.dead){
                        if(((actorInRegion.getType() == getActorType(0)) == true))
{
                            _Swapping = true;
propertyChanged("_Swapping", _Swapping);
                            trace("" + ("" + _Swapping));
                            actor.moveBy((getLastCreatedRegion().getX() - actor.getX()), 0, ((60 / 140) / 2), Quad.easeInOut);
                            actorInRegion.moveBy(-(getGameAttribute("Grid Spacing")), 0, ((60 / 140) / 2), Quad.easeInOut);
                            _NewX = asNumber(actorInRegion.getValue("beat gem", "_StartX"));
propertyChanged("_NewX", _NewX);
                            _NewY = asNumber(actorInRegion.getValue("beat gem", "_StartY"));
propertyChanged("_NewY", _NewY);
                            actorInRegion.setValue("beat gem", "_StartX", _StartX);
                            actorInRegion.setValue("beat gem", "_StartY", _StartY);
                            _SwappingRight = true;
propertyChanged("_SwappingRight", _SwappingRight);
                            _customEvent_UpdatePosition();
}

}
}

                    if(!(_SwappingRight))
{
                        for (region in engine.getRegions())
	{
		removeRegion (region.getID());
	}
                        setGameAttribute("RegionCreated?", false);
                        _Swapping = false;
propertyChanged("_Swapping", _Swapping);
                        trace("" + ("" + _Swapping));
                        _SwappingRight = false;
propertyChanged("_SwappingRight", _SwappingRight);

}

}, actor);
}

    
/* ========================= Custom Event ========================= */
public function _customEvent_UpdatePosition():Void
{
        if((_SwappingUP == true))
{
            List2D.swap_entry(Std.int(_StartX), Std.int(_StartY), Std.int(_NewX), Std.int(_NewY), getValueForScene("Scene Manager", "_AlreadySpawned"));
            List2D.swap_entry(Std.int(_StartX), Std.int(_StartY), Std.int(_NewX), Std.int(_NewY), getValueForScene("Scene Manager", "_UID"));
            List2D.swap_entry(Std.int(_StartX), Std.int(_StartY), Std.int(_NewX), Std.int(_NewY), getValueForScene("Scene Manager", "_GemType"));
            List2D.swap_entry(Std.int(_StartX), Std.int(_StartY), Std.int(_NewX), Std.int(_NewY), getValueForScene("Scene Manager", "_SpecialListBomb"));
            if(_CanSwap)
{
                _customEvent_CanSwapUp();
                playSound(getSound(117));
}

            runLater(1000 * 0.2, function(timeTask:TimedTask):Void {
                        _SwappingUP = false;
propertyChanged("_SwappingUP", _SwappingUP);
                        _Swapping = false;
propertyChanged("_Swapping", _Swapping);
                        _CanSwap = true;
propertyChanged("_CanSwap", _CanSwap);
}, actor);
}

        else if((_SwappingDown == true))
{
            List2D.swap_entry(Std.int(_StartX), Std.int(_StartY), Std.int(_NewX), Std.int(_NewY), getValueForScene("Scene Manager", "_AlreadySpawned"));
            List2D.swap_entry(Std.int(_StartX), Std.int(_StartY), Std.int(_NewX), Std.int(_NewY), getValueForScene("Scene Manager", "_UID"));
            List2D.swap_entry(Std.int(_StartX), Std.int(_StartY), Std.int(_NewX), Std.int(_NewY), getValueForScene("Scene Manager", "_GemType"));
            List2D.swap_entry(Std.int(_StartX), Std.int(_StartY), Std.int(_NewX), Std.int(_NewY), getValueForScene("Scene Manager", "_SpecialListBomb"));
            if(_CanSwap)
{
                _customEvent_CanSwapDown();
                playSound(getSound(117));
}

            runLater(1000 * 0.2, function(timeTask:TimedTask):Void {
                        _SwappingDown = false;
propertyChanged("_SwappingDown", _SwappingDown);
                        _Swapping = false;
propertyChanged("_Swapping", _Swapping);
                        _CanSwap = true;
propertyChanged("_CanSwap", _CanSwap);
}, actor);
}

        if((_SwappingLeft == true))
{
            List2D.swap_entry(Std.int(_StartX), Std.int(_StartY), Std.int(_NewX), Std.int(_NewY), getValueForScene("Scene Manager", "_AlreadySpawned"));
            List2D.swap_entry(Std.int(_StartX), Std.int(_StartY), Std.int(_NewX), Std.int(_NewY), getValueForScene("Scene Manager", "_UID"));
            List2D.swap_entry(Std.int(_StartX), Std.int(_StartY), Std.int(_NewX), Std.int(_NewY), getValueForScene("Scene Manager", "_GemType"));
            List2D.swap_entry(Std.int(_StartX), Std.int(_StartY), Std.int(_NewX), Std.int(_NewY), getValueForScene("Scene Manager", "_SpecialListBomb"));
            if(_CanSwap)
{
                _customEvent_CanSwapLeft();
                playSound(getSound(117));
}

            runLater(1000 * 0.2, function(timeTask:TimedTask):Void {
                        _SwappingLeft = false;
propertyChanged("_SwappingLeft", _SwappingLeft);
                        _Swapping = false;
propertyChanged("_Swapping", _Swapping);
                        _CanSwap = true;
propertyChanged("_CanSwap", _CanSwap);
}, actor);
}

        else if((_SwappingRight == true))
{
            List2D.swap_entry(Std.int(_StartX), Std.int(_StartY), Std.int(_NewX), Std.int(_NewY), getValueForScene("Scene Manager", "_AlreadySpawned"));
            List2D.swap_entry(Std.int(_StartX), Std.int(_StartY), Std.int(_NewX), Std.int(_NewY), getValueForScene("Scene Manager", "_UID"));
            List2D.swap_entry(Std.int(_StartX), Std.int(_StartY), Std.int(_NewX), Std.int(_NewY), getValueForScene("Scene Manager", "_GemType"));
            List2D.swap_entry(Std.int(_StartX), Std.int(_StartY), Std.int(_NewX), Std.int(_NewY), getValueForScene("Scene Manager", "_SpecialListBomb"));
            if(_CanSwap)
{
                _customEvent_CanSwapRight();
                playSound(getSound(117));
}

            runLater(1000 * 0.2, function(timeTask:TimedTask):Void {
                        _SwappingRight = false;
propertyChanged("_SwappingRight", _SwappingRight);
                        _Swapping = false;
propertyChanged("_Swapping", _Swapping);
                        _CanSwap = true;
propertyChanged("_CanSwap", _CanSwap);
}, actor);
}

        else
{

}

        runLater(1000 * 0.21, function(timeTask:TimedTask):Void {
                    if((_Swapping == false))
{

                        runLater(1000 * 0.01, function(timeTask:TimedTask):Void {
                                    _StartX = asNumber(_NewX);
propertyChanged("_StartX", _StartX);
                                    _StartY = asNumber(_NewY);
propertyChanged("_StartY", _StartY);
                                    _NewX = asNumber(0);
propertyChanged("_NewX", _NewX);
                                    _NewY = asNumber(0);
propertyChanged("_NewY", _NewY);
                                    for (region in engine.getRegions())
	{
		removeRegion (region.getID());
	}
                                    if((getGameAttribute("RegionCreated?") == true))
{
                                        setGameAttribute("RegionCreated?", false);
}

                                    sayToScene("Scene Manager", "_customEvent_" + "CHECKGRID");
}, actor);
}

}, actor);
}

    
/* ========================= Custom Event ========================= */
public function _customEvent_CanSwapUp():Void
{
        runLater(1000 * 0.25, function(timeTask:TimedTask):Void {
                    if((getValueForScene("Scene Manager", "_NumberOfMatches") == 0))
{
                        trace("" + "non matchey");
                        _CanSwap = false;
propertyChanged("_CanSwap", _CanSwap);
                        _customEvent_SwapDown();
                        playSound(getSound(118));
}

                    else
{
                        trace("" + " matchey");
                        setGameAttribute("Moves Counter", (getGameAttribute("Moves Counter") + 1));
                        for(actorOfType in getActorsOfType(getActorType(125)))
{
if(actorOfType != null && !actorOfType.dead && !actorOfType.recycled){
                            actorOfType.setValue("WormHole", "_OGSize", (actorOfType.getValue("WormHole", "_OGSize") + 1));
}
}

                        return;
}

}, actor);
}

    
/* ========================= Custom Event ========================= */
public function _customEvent_CanSwapDown():Void
{
        runLater(1000 * 0.25, function(timeTask:TimedTask):Void {
                    if((getValueForScene("Scene Manager", "_NumberOfMatches") == 0))
{
                        trace("" + "non matchey");
                        _CanSwap = false;
propertyChanged("_CanSwap", _CanSwap);
                        _customEvent_SwapUp();
                        playSound(getSound(118));
}

                    else
{
                        trace("" + " matchey");
                        setGameAttribute("Moves Counter", (getGameAttribute("Moves Counter") + 1));
                        for(actorOfType in getActorsOfType(getActorType(125)))
{
if(actorOfType != null && !actorOfType.dead && !actorOfType.recycled){
                            actorOfType.setValue("WormHole", "_OGSize", (actorOfType.getValue("WormHole", "_OGSize") + 1));
}
}

                        return;
}

}, actor);
}

    
/* ========================= Custom Event ========================= */
public function _customEvent_CanSwapLeft():Void
{
        runLater(1000 * 0.25, function(timeTask:TimedTask):Void {
                    if((getValueForScene("Scene Manager", "_NumberOfMatches") == 0))
{
                        trace("" + "non matchey");
                        _CanSwap = false;
propertyChanged("_CanSwap", _CanSwap);
                        _customEvent_SwapRight();
                        playSound(getSound(118));
}

                    else
{
                        trace("" + " matchey");
                        setGameAttribute("Moves Counter", (getGameAttribute("Moves Counter") + 1));
                        for(actorOfType in getActorsOfType(getActorType(125)))
{
if(actorOfType != null && !actorOfType.dead && !actorOfType.recycled){
                            actorOfType.setValue("WormHole", "_OGSize", (actorOfType.getValue("WormHole", "_OGSize") + 1));
}
}

                        return;
}

}, actor);
}

    
/* ========================= Custom Event ========================= */
public function _customEvent_CanSwapRight():Void
{
        runLater(1000 * 0.25, function(timeTask:TimedTask):Void {
                    if((getValueForScene("Scene Manager", "_NumberOfMatches") == 0))
{
                        trace("" + "non matchey");
                        _CanSwap = false;
propertyChanged("_CanSwap", _CanSwap);
                        _customEvent_SwapLeft();
                        playSound(getSound(118));
}

                    else
{
                        trace("" + " matchey");
                        setGameAttribute("Moves Counter", (getGameAttribute("Moves Counter") + 1));
                        for(actorOfType in getActorsOfType(getActorType(125)))
{
if(actorOfType != null && !actorOfType.dead && !actorOfType.recycled){
                            actorOfType.setValue("WormHole", "_OGSize", (actorOfType.getValue("WormHole", "_OGSize") + 1));
}
}

                        return;
}

}, actor);
}


 
 	public function new(dummy:Int, actor:Actor, engine:Engine)
	{
		super(actor, engine);	
		nameMap.set("StartX", "_StartX");
_StartX = 0.0;
nameMap.set("StartY", "_StartY");
_StartY = 0.0;
nameMap.set("Swapping?", "_Swapping");
_Swapping = false;
nameMap.set("Target", "_Target");
nameMap.set("AlreadySpawned?", "_AlreadySpawned");
_AlreadySpawned = [];
nameMap.set("SoundType", "_SoundType");
_SoundType = 0.0;
nameMap.set("GemSound", "_GemSound");
nameMap.set("NewX", "_NewX");
_NewX = 0.0;
nameMap.set("NewY", "_NewY");
_NewY = 0.0;
nameMap.set("SwappingUP", "_SwappingUP");
_SwappingUP = false;
nameMap.set("SwappingDown", "_SwappingDown");
_SwappingDown = false;
nameMap.set("SwappingLeft", "_SwappingLeft");
_SwappingLeft = false;
nameMap.set("SwappingRight", "_SwappingRight");
_SwappingRight = false;
nameMap.set("GemTypeNumber", "_GemTypeNumber");
_GemTypeNumber = 0.0;
nameMap.set("Actor", "actor");
nameMap.set("GemID", "_GemID");
_GemID = 0.0;
nameMap.set("Octave", "_Octave");
_Octave = 0.0;
nameMap.set("Colliding?", "_Colliding");
_Colliding = false;
nameMap.set("ActorReveal", "_ActorReveal");
_ActorReveal = 0.0;
nameMap.set("RegionList", "_RegionList");
_RegionList = [];
nameMap.set("YIncrementer", "_YIncrementer");
_YIncrementer = 0.0;
nameMap.set("Xincrementer", "_Xincrementer");
_Xincrementer = 0.0;
nameMap.set("SelfSelector", "_SelfSelector");
nameMap.set("UID", "_UID");
_UID = [];
nameMap.set("SpawnType_ID", "_SpawnTypeID");
_SpawnTypeID = 0.0;
nameMap.set("SpawnTypeActor", "_SpawnTypeActor");
nameMap.set("type2", "_type2");
nameMap.set("type1", "_type1");
nameMap.set("type4", "_type4");
nameMap.set("type6", "_type6");
nameMap.set("type5", "_type5");
nameMap.set("Metronome", "_Metronome");
nameMap.set("BeaterCombo", "_BeaterCombo");
_BeaterCombo = 0.0;
nameMap.set("type3", "_type3");
nameMap.set("Direction", "_Direction");
_Direction = 0.0;
nameMap.set("Type7", "_Type7");
nameMap.set("Type8", "_Type8");
nameMap.set("CanSwap?", "_CanSwap");
_CanSwap = false;
nameMap.set("Gem", "_Gem");
nameMap.set("type10", "_type10");
nameMap.set("type11", "_type11");
nameMap.set("TypeNumber", "_TypeNumber");
_TypeNumber = 0.0;
nameMap.set("Type9", "_Type9");
nameMap.set("ColorMatch1", "_ColorMatch1");
_ColorMatch1 = 0.0;
nameMap.set("ColorMatch2", "_ColorMatch2");
_ColorMatch2 = 0.0;
nameMap.set("type12", "_type12");
nameMap.set("Gem_Type", "_GemType");
_GemType = [];
nameMap.set("ColorMatch6", "_ColorMatch6");
_ColorMatch6 = 0.0;
nameMap.set("ColorMatch5", "_ColorMatch5");
_ColorMatch5 = 0.0;
nameMap.set("ColorMatch4", "_ColorMatch4");
_ColorMatch4 = 0.0;
nameMap.set("ColorMatch3", "_ColorMatch3");
_ColorMatch3 = 0.0;
nameMap.set("Type16", "_Type16");
nameMap.set("Type15", "_Type15");
nameMap.set("Type14", "_Type14");
nameMap.set("Type13", "_Type13");
nameMap.set("RegionCreated?", "_RegionCreated");
_RegionCreated = false;
nameMap.set("Degrees", "_Degrees");
_Degrees = 0.0;
nameMap.set("Type18", "_Type18");
nameMap.set("Type17", "_Type17");
nameMap.set("Taplist", "_Taplist");
_Taplist = [];
nameMap.set("GemSelector", "_GemSelector");
_GemSelector = 0.0;
nameMap.set("Tappable?", "_Tappable");
_Tappable = false;
nameMap.set("GTempo", "_GTempo");
_GTempo = 0.0;
nameMap.set("tapping?", "_tapping");
_tapping = false;
nameMap.set("TappingList", "_TappingList");
_TappingList = [];
nameMap.set("RestTap", "_RestTap");
_RestTap = false;

	}
	
	override public function init()
	{
		    
/* ======================== When Creating ========================= */
        _GTempo = asNumber(getGameAttribute("fixedGT"));
propertyChanged("_GTempo", _GTempo);
        _Tappable = false;
propertyChanged("_Tappable", _Tappable);
        setGameAttribute("TapMode", false);
        _tapping = false;
propertyChanged("_tapping", _tapping);
        _Degrees = asNumber(0);
propertyChanged("_Degrees", _Degrees);
        _CanSwap = true;
propertyChanged("_CanSwap", _CanSwap);
        if(getGameAttribute("Started?"))
{
            actor.disableActorDrawing();
            getValueForScene("Scene Manager", "_DrawOrder").push(actor.ID);
}

        _RegionList = new Array<Dynamic>();
propertyChanged("_RegionList", _RegionList);
        _GemID = asNumber(getGameAttribute("GemID"));
propertyChanged("_GemID", _GemID);
        if(((getValueForScene("Scene Manager", "_SpecialSpawn") == true) && (getValueForScene("Scene Manager", "_CreateBombPiece") == true)))
{
            /* "Create A Bomb Piece" */
            setValueForScene("Scene Manager", "_CreateBombPiece", false);
            if((_GemID == 1))
{
                _GemID = asNumber(13);
propertyChanged("_GemID", _GemID);
}

            if((_GemID == 2))
{
                _GemID = asNumber(14);
propertyChanged("_GemID", _GemID);
}

            if((_GemID == 3))
{
                _GemID = asNumber(15);
propertyChanged("_GemID", _GemID);
}

            if((_GemID == 4))
{
                _GemID = asNumber(16);
propertyChanged("_GemID", _GemID);
}

            if((_GemID == 5))
{
                _GemID = asNumber(17);
propertyChanged("_GemID", _GemID);
}

            if((_GemID == 6))
{
                _GemID = asNumber(18);
propertyChanged("_GemID", _GemID);
}

            setValueForScene("Scene Manager", "_CreateBombPiece", false);
            trace("" + (("" + "CreateBombPiece?") + ("" + getValueForScene("Scene Manager", "_CreateBombPiece"))));
}

        else if((getValueForScene("Scene Manager", "_SpecialSpawn") == true))
{
            /* "Create a Special Piece" */
            if((_GemID == 1))
{
                _GemID = asNumber(7);
propertyChanged("_GemID", _GemID);
}

            if((_GemID == 2))
{
                _GemID = asNumber(8);
propertyChanged("_GemID", _GemID);
}

            if((_GemID == 3))
{
                _GemID = asNumber(9);
propertyChanged("_GemID", _GemID);
}

            if((_GemID == 4))
{
                _GemID = asNumber(12);
propertyChanged("_GemID", _GemID);
}

            if((_GemID == 5))
{
                _GemID = asNumber(10);
propertyChanged("_GemID", _GemID);
}

            if((_GemID == 6))
{
                _GemID = asNumber(11);
propertyChanged("_GemID", _GemID);
}

            setValueForScene("Scene Manager", "_SpecialSpawn", false);
}

        if((_GemID == 1))
{
            actor.setAnimation("" + _type1);
}

        if((_GemID == 2))
{
            actor.setAnimation("" + _type2);
}

        if((_GemID == 3))
{
            actor.setAnimation("" + _type3);
}

        if((_GemID == 4))
{
            actor.setAnimation("" + _type4);
}

        if((_GemID == 5))
{
            actor.setAnimation("" + _type5);
}

        if((_GemID == 6))
{
            actor.setAnimation("" + _type6);
}

        if((_GemID == 7))
{
            actor.setAnimation("" + _Type7);
}

        if((_GemID == 8))
{
            actor.setAnimation("" + _Type8);
}

        if((_GemID == 9))
{
            actor.setAnimation("" + _Type9);
}

        if((_GemID == 10))
{
            actor.setAnimation("" + _type10);
}

        if((_GemID == 11))
{
            actor.setAnimation("" + _type11);
}

        if((_GemID == 12))
{
            actor.setAnimation("" + _type12);
}

        if((_GemID == 13))
{
            actor.setAnimation("" + _Type13);
}

        if((_GemID == 14))
{
            actor.setAnimation("" + _Type14);
}

        if((_GemID == 15))
{
            actor.setAnimation("" + _Type15);
}

        if((_GemID == 16))
{
            actor.setAnimation("" + _Type16);
}

        if((_GemID == 17))
{
            actor.setAnimation("" + _Type17);
}

        if((_GemID == 18))
{
            actor.setAnimation("" + _Type18);
}

        _StartX = asNumber(getGameAttribute("spawnX"));
propertyChanged("_StartX", _StartX);
        _StartY = asNumber(getGameAttribute("spawnY"));
propertyChanged("_StartY", _StartY);
        _NewX = asNumber(0);
propertyChanged("_NewX", _NewX);
        _NewY = asNumber(0);
propertyChanged("_NewY", _NewY);
        _Swapping = false;
propertyChanged("_Swapping", _Swapping);
        setGameAttribute("Time Since Last Match", 4);
        List2D.set_entry(Std.int(_StartX), Std.int(_StartY), actor.ID, getValueForScene("Scene Manager", "_UID"));
        if(((_GemID >= 7) && (_GemID <= 12)))
{
            actor.setActorValue("Special_Type", 1);
            List2D.set_entry(Std.int(_StartX), Std.int(_StartY), 1, getValueForScene("Scene Manager", "_SpecialListBomb"));
}

        if((_GemID > 12))
{
            actor.setActorValue("Special_Type", 2);
            List2D.set_entry(Std.int(_StartX), Std.int(_StartY), 2, getValueForScene("Scene Manager", "_SpecialListBomb"));
}

        actor.setActorValue("Special_Type", 0);
        actor.setActorValue("StartX", _StartX);
        actor.setActorValue("StartY", _StartY);

        actor.makeAlwaysSimulate();
        makeActorNotPassThroughTerrain(actor);
        if((_StartX == 0))
{
            _Octave = asNumber(5);
propertyChanged("_Octave", _Octave);
}

        if((_StartX == 1))
{
            _Octave = asNumber(4);
propertyChanged("_Octave", _Octave);
}

        if((_StartX == 2))
{
            _Octave = asNumber(3);
propertyChanged("_Octave", _Octave);
}

        if((_StartX == 3))
{
            _Octave = asNumber(2);
propertyChanged("_Octave", _Octave);
}

        if((_StartX == 4))
{
            _Octave = asNumber(1);
propertyChanged("_Octave", _Octave);
}

        if((_StartX >= 5))
{
            _Octave = asNumber(5);
propertyChanged("_Octave", _Octave);
}

        _SoundType = asNumber(randomInt(Math.floor(1), Math.floor(5)));
propertyChanged("_SoundType", _SoundType);
        if((_Octave == 1))
{
            if((_SoundType == 1))
{
                _GemSound = getSound(5);
propertyChanged("_GemSound", _GemSound);
}

            if((_SoundType == 2))
{
                _GemSound = getSound(6);
propertyChanged("_GemSound", _GemSound);
}

            if((_SoundType == 3))
{
                _GemSound = getSound(7);
propertyChanged("_GemSound", _GemSound);
}

            if((_SoundType == 4))
{
                _GemSound = getSound(8);
propertyChanged("_GemSound", _GemSound);
}

            if((_SoundType == 5))
{
                _GemSound = getSound(9);
propertyChanged("_GemSound", _GemSound);
}

}

        if((_Octave == 2))
{
            if((_SoundType == 1))
{
                _GemSound = getSound(18);
propertyChanged("_GemSound", _GemSound);
}

            if((_SoundType == 2))
{
                _GemSound = getSound(19);
propertyChanged("_GemSound", _GemSound);
}

            if((_SoundType == 3))
{
                _GemSound = getSound(20);
propertyChanged("_GemSound", _GemSound);
}

            if((_SoundType == 4))
{
                _GemSound = getSound(21);
propertyChanged("_GemSound", _GemSound);
}

            if((_SoundType == 5))
{
                _GemSound = getSound(22);
propertyChanged("_GemSound", _GemSound);
}

}

        if((_Octave == 3))
{
            if((_SoundType == 1))
{
                _GemSound = getSound(23);
propertyChanged("_GemSound", _GemSound);
}

            if((_SoundType == 2))
{
                _GemSound = getSound(24);
propertyChanged("_GemSound", _GemSound);
}

            if((_SoundType == 3))
{
                _GemSound = getSound(25);
propertyChanged("_GemSound", _GemSound);
}

            if((_SoundType == 4))
{
                _GemSound = getSound(26);
propertyChanged("_GemSound", _GemSound);
}

            if((_SoundType == 5))
{
                _GemSound = getSound(27);
propertyChanged("_GemSound", _GemSound);
}

}

        if((_Octave == 4))
{
            if((_SoundType == 1))
{
                _GemSound = getSound(28);
propertyChanged("_GemSound", _GemSound);
}

            if((_SoundType == 2))
{
                _GemSound = getSound(29);
propertyChanged("_GemSound", _GemSound);
}

            if((_SoundType == 3))
{
                _GemSound = getSound(30);
propertyChanged("_GemSound", _GemSound);
}

            if((_SoundType == 4))
{
                _GemSound = getSound(31);
propertyChanged("_GemSound", _GemSound);
}

            if((_SoundType == 5))
{
                _GemSound = getSound(32);
propertyChanged("_GemSound", _GemSound);
}

}

        if((_Octave == 5))
{
            if((_SoundType == 1))
{
                _GemSound = getSound(90);
propertyChanged("_GemSound", _GemSound);
}

            if((_SoundType == 2))
{
                _GemSound = getSound(91);
propertyChanged("_GemSound", _GemSound);
}

            if((_SoundType == 3))
{
                _GemSound = getSound(92);
propertyChanged("_GemSound", _GemSound);
}

            if((_SoundType == 4))
{
                _GemSound = getSound(92);
propertyChanged("_GemSound", _GemSound);
}

            if((_SoundType == 5))
{
                _GemSound = getSound(93);
propertyChanged("_GemSound", _GemSound);
}

}

        _Colliding = false;
propertyChanged("_Colliding", _Colliding);
    
/* ======================== When Updating ========================= */
addWhenUpdatedListener(null, function(elapsedTime:Float, list:Array<Dynamic>):Void {
if(wrapper.enabled){
        if((!(_Swapping) || (!(getValueForScene("Scene Manager", "_CheckMatches")) || (!(getGameAttribute("RegionCreated?")) || !(getGameAttribute("TapMode"))))))
{
            if(((Input.swipedUp && actor.isMouseOver()) && !(getGameAttribute("intapmode"))))
{
                if(!((_Degrees == 180)))
{
                    if((_Degrees == 90))
{
                        actor.rotate(Utils.RAD * (90));
                        _Degrees = asNumber(180);
propertyChanged("_Degrees", _Degrees);
}

                    else if((_Degrees == 270))
{
                        actor.rotate(Utils.RAD * (270));
                        _Degrees = asNumber(180);
propertyChanged("_Degrees", _Degrees);
}

                    if((_Degrees == 0))
{
                        actor.rotate(Utils.RAD * (180));
                        _Degrees = asNumber(180);
propertyChanged("_Degrees", _Degrees);
}

}

                else if((_Degrees == 180))
{
                    _Degrees = asNumber(180);
propertyChanged("_Degrees", _Degrees);
}

                _customEvent_SwapUp();
}

            if(((Input.swipedDown && actor.isMouseOver()) && !(getGameAttribute("intapmode"))))
{
                if(!((_Degrees == 0)))
{
                    if((_Degrees == 90))
{
                        actor.rotate(Utils.RAD * (270));
                        _Degrees = asNumber(0);
propertyChanged("_Degrees", _Degrees);
}

                    else if((_Degrees == 180))
{
                        actor.rotate(Utils.RAD * (180));
                        _Degrees = asNumber(0);
propertyChanged("_Degrees", _Degrees);
}

                    if((_Degrees == 270))
{
                        actor.rotate(Utils.RAD * (90));
                        _Degrees = asNumber(0);
propertyChanged("_Degrees", _Degrees);
}

}

                else if((_Degrees == 0))
{
                    _Degrees = asNumber(0);
propertyChanged("_Degrees", _Degrees);
}

                _customEvent_SwapDown();
}

            if(((Input.swipedLeft && actor.isMouseOver()) && !(getGameAttribute("intapmode"))))
{
                if(!((_Degrees == 90)))
{
                    if((_Degrees == 0))
{
                        actor.rotate(Utils.RAD * (90));
                        _Degrees = asNumber(90);
propertyChanged("_Degrees", _Degrees);
}

                    else if((_Degrees == 180))
{
                        actor.rotate(Utils.RAD * (270));
                        _Degrees = asNumber(90);
propertyChanged("_Degrees", _Degrees);
}

                    if((_Degrees == 270))
{
                        actor.rotate(Utils.RAD * (180));
                        _Degrees = asNumber(90);
propertyChanged("_Degrees", _Degrees);
}

}

                else if((_Degrees == 90))
{
                    _Degrees = asNumber(90);
propertyChanged("_Degrees", _Degrees);
}

                _customEvent_SwapLeft();
}

            if(((Input.swipedRight && actor.isMouseOver()) && !(getGameAttribute("intapmode"))))
{
                if(!((_Degrees == 270)))
{
                    if((_Degrees == 90))
{
                        actor.rotate(Utils.RAD * (180));
                        _Degrees = asNumber(270);
propertyChanged("_Degrees", _Degrees);
}

                    else if((_Degrees == 180))
{
                        actor.rotate(Utils.RAD * (90));
                        _Degrees = asNumber(270);
propertyChanged("_Degrees", _Degrees);
}

                    if((_Degrees == 0))
{
                        actor.rotate(Utils.RAD * (270));
                        _Degrees = asNumber(0);
propertyChanged("_Degrees", _Degrees);
}

}

                else if((_Degrees == 270))
{
                    _Degrees = asNumber(270);
propertyChanged("_Degrees", _Degrees);
}

                _customEvent_SwapRight();
}

            if(getValueForScene("Scene Manager", "_CreateWorm"))
{
                if(((actor.isMousePressed() && !(_Tappable)) && !(getGameAttribute("TapMode"))))
{
                    setValueForScene("Scene Manager", "_GemID", _GemID);
                    sayToScene("Scene Manager", "_customEvent_" + "TapTime");
}


                if((_Tappable && !(_tapping)))
{
                    _customEvent_Tappy();
}

}

}

        if((_Swapping == true))
{
            setGameAttribute("Swapping?", true);
}

        if((_Swapping == false))
{
            setGameAttribute("Swapping?", false);
}

}
});
    
/* ========================= When Drawing ========================= */
addWhenDrawingListener(null, function(g:G, x:Float, y:Float, list:Array<Dynamic>):Void {
if(wrapper.enabled){



}
});
    
/* ======================== Specific Actor ======================== */
addWhenKilledListener(actor, function(list:Array<Dynamic>):Void {
if(wrapper.enabled){
        if((_GemID == 1))
{
            setGameAttribute("ColorMatch1", (getGameAttribute("ColorMatch1") - 1));
            getGameAttribute("ColorTargets")[Std.int(0)] = asNumber((getGameAttribute("ColorTargets")[Std.int(0)] - 1));
            if((getGameAttribute("ColorTargets")[Std.int(0)] <= 0))
{
                getGameAttribute("ColorTargets")[Std.int(0)] = "null";
}

}

        if((_GemID == 2))
{
            setGameAttribute("ColorMatch2", (getGameAttribute("ColorMatch2") - 1));
            getGameAttribute("ColorTargets")[Std.int(1)] = asNumber((getGameAttribute("ColorTargets")[Std.int(1)] - 1));
            if((getGameAttribute("ColorTargets")[Std.int(1)] <= 0))
{
                getGameAttribute("ColorTargets")[Std.int(1)] = "null";
}

}

        if((_GemID == 3))
{
            setGameAttribute("ColorMatch3", (getGameAttribute("ColorMatch3") - 1));
            getGameAttribute("ColorTargets")[Std.int(2)] = asNumber((getGameAttribute("ColorTargets")[Std.int(2)] - 1));
            if((getGameAttribute("ColorTargets")[Std.int(2)] <= 0))
{
                getGameAttribute("ColorTargets")[Std.int(2)] = "null";
}

}

        if((_GemID == 4))
{
            setGameAttribute("ColorMatch4", (getGameAttribute("ColorMatch4") - 1));
            getGameAttribute("ColorTargets")[Std.int(3)] = asNumber((getGameAttribute("ColorTargets")[Std.int(3)] - 1));
            if((getGameAttribute("ColorTargets")[Std.int(3)] <= 0))
{
                getGameAttribute("ColorTargets")[Std.int(3)] = "null";
}

}

        if((_GemID == 5))
{
            setGameAttribute("ColorMatch5", (getGameAttribute("ColorMatch5") - 1));
            getGameAttribute("ColorTargets")[Std.int(4)] = asNumber((getGameAttribute("ColorTargets")[Std.int(4)] - 1));
            if((getGameAttribute("ColorTargets")[Std.int(4)] <= 0))
{
                getGameAttribute("ColorTargets")[Std.int(4)] = "null";
}

}

        if((_GemID == 6))
{
            setGameAttribute("ColorMatch6", (getGameAttribute("ColorMatch6") - 1));
            getGameAttribute("ColorTargets")[Std.int(5)] = asNumber((getGameAttribute("ColorTargets")[Std.int(5)] - 1));
            if((getGameAttribute("ColorTargets")[Std.int(5)] <= 0))
{
                getGameAttribute("ColorTargets")[Std.int(5)] = "null";
}

}

        if((_GemID == 7))
{
            setGameAttribute("ColorMatch1", (getGameAttribute("ColorMatch1") - 1));
            getGameAttribute("ColorTargets")[Std.int(0)] = asNumber((getGameAttribute("ColorTargets")[Std.int(0)] - 1));
            if((getGameAttribute("ColorTargets")[Std.int(0)] <= 0))
{
                getGameAttribute("ColorTargets")[Std.int(0)] = "null";
}

}

        if((_GemID == 8))
{
            setGameAttribute("ColorMatch2", (getGameAttribute("ColorMatch2") - 1));
            getGameAttribute("ColorTargets")[Std.int(1)] = asNumber((getGameAttribute("ColorTargets")[Std.int(1)] - 1));
            if((getGameAttribute("ColorTargets")[Std.int(1)] <= 0))
{
                getGameAttribute("ColorTargets")[Std.int(1)] = "null";
}

}

        if((_GemID == 9))
{
            setGameAttribute("ColorMatch3", (getGameAttribute("ColorMatch3") - 1));
            getGameAttribute("ColorTargets")[Std.int(2)] = asNumber((getGameAttribute("ColorTargets")[Std.int(2)] - 1));
            if((getGameAttribute("ColorTargets")[Std.int(2)] <= 0))
{
                getGameAttribute("ColorTargets")[Std.int(2)] = "null";
}

}

        if((_GemID == 10))
{
            setGameAttribute("ColorMatch4", (getGameAttribute("ColorMatch4") - 1));
            getGameAttribute("ColorTargets")[Std.int(3)] = asNumber((getGameAttribute("ColorTargets")[Std.int(3)] - 1));
            if((getGameAttribute("ColorTargets")[Std.int(3)] <= 0))
{
                getGameAttribute("ColorTargets")[Std.int(3)] = "null";
}

}

        if((_GemID == 11))
{
            setGameAttribute("ColorMatch5", (getGameAttribute("ColorMatch5") - 1));
            getGameAttribute("ColorTargets")[Std.int(4)] = asNumber((getGameAttribute("ColorTargets")[Std.int(4)] - 1));
            if((getGameAttribute("ColorTargets")[Std.int(4)] <= 0))
{
                getGameAttribute("ColorTargets")[Std.int(4)] = "null";
}

}

        if((_GemID == 12))
{
            setGameAttribute("ColorMatch6", (getGameAttribute("ColorMatch6") - 1));
            getGameAttribute("ColorTargets")[Std.int(5)] = asNumber((getGameAttribute("ColorTargets")[Std.int(5)] - 1));
            if((getGameAttribute("ColorTargets")[Std.int(5)] <= 0))
{
                getGameAttribute("ColorTargets")[Std.int(5)] = "null";
}

}



}
});

	}	      	
	
	override public function forwardMessage(msg:String)
	{
		
	}
}