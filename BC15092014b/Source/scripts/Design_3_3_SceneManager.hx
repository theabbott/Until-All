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



class Design_3_3_SceneManager extends SceneScript
{          	
	
public var _Xincrementer:Float;

public var _YIncrementer:Float;

public var _GridSpacing:Float;

public var _UID:Array<Dynamic>;

public var _GemType:Array<Dynamic>;

public var _TileList:Array<Dynamic>;

public var _AlreadySpawned:Array<Dynamic>;

public var _Target:Region;

public var _Swapping:Bool;

public var _CanSpawn:Bool;

public var _IsDestroying:Bool;

public var _CheckMatches:Bool;

public var _NumberOfMatches:Float;

public var _Searcher:Float;

public var _KillList:Array<Dynamic>;

public var _DestroyListModifier:Float;

public var _GemTypeNumber:Float;

public var _SpawnTypeActor:ActorType;

public var _SpawnTypeID:Float;

public var _XSearcher:Float;

public var _Spawn:Bool;

public var _ActorReveal:Float;

public var _UIDCOPY:Array<Dynamic>;

public var _KillListMod:Float;

public var _ScreenOffset:Float;

public var _RefillX:Float;

public var _RefillY:Float;

public var _GemSound:Sound;

public var _sda:Sound;

public var _Score:Float;

public var _ScoreCounter:Float;

public var _Delayer:Float;

public var _DrawOrder:Array<Dynamic>;

public var _BeaterCombo:Float;

public var _ExtraSearcher:Float;

public var _BeaterSpawn:Array<Dynamic>;

public var _Direction:Float;

public var _IdleTime:Float;

public var _HintList:Array<Dynamic>;

public var _SpecialSpawn:Bool;

public var _MatchesFound:Bool;

public var _SpecialKill:Bool;

public var _SpecialListBomb:Array<Dynamic>;

public var _BombX:Float;

public var _CreateBombPiece:Bool;

public var _DoubleCombo:Float;

public var _GemID:Float;

public var _Coins:ActorType;

public var _BeaterRefillX:Float;

public var _BeaterRefillY:Float;

public var _MusicManager:Bool;

public var _BombY:Float;

public var _BombXX:Float;

public var _BombYY:Float;

public var _BombKill:Bool;

public var _Lose:Bool;

public var _ScreenOffesetY:Float;

public var _Combo:Float;

public var _ActorDeathPos:Float;

public var _Swing:Float;

public var _SwingCounter:Float;

public var _GameTempo:Float;

public var _Win:Bool;

public var _Cursor:Actor;

public var _DisplayText:Bool;

public var _EndLevel:Bool;

public var _combonumber:Float;

public var _PlayerInput:Bool;

public var _ActorDeathPosY:Float;

public var _Multiplefinder:Float;

public var _AutoCombo:Float;

public var _TapmodeFlag:Bool;

public var _TappingList:Array<Dynamic>;

public var _TapTime:Float;

public var _TapPrekill:Array<Dynamic>;

public var _Ending:Array<Dynamic>;

public var _CreateWorm:Bool;

public var _GemSelector:Float;

public var _Taplist:Array<Dynamic>;

public var _TapOn:Bool;

public var _PreTapKillList:Array<Dynamic>;

public var _CleanUpTapMode:Array<Dynamic>;

public var _cleaner:Float;

public var _TapCombo:Float;

public var _TapKillList:Array<Dynamic>;

public var _StartTimer:Bool;

public var _ComboBrokenFlag:Bool;

public var _resetX:Float;

public var _resetY:Float;
    
/* ========================= Custom Event ========================= */
public function _customEvent_MusicManager():Void
{
        _Swing = asNumber(0.25);
propertyChanged("_Swing", _Swing);

        runPeriodically(1000 * (60 / getGameAttribute("GameTempo")), function(timeTask:TimedTask):Void {
                    if((_MusicManager == true))
{
                        if(((getGameAttribute("GameBeatPosition") == 2) || (getGameAttribute("GameBeatPosition") == 4)))
{

                            runLater(1000 * ((60 / getGameAttribute("GameTempo")) / _Swing), function(timeTask:TimedTask):Void {
                                        playSound(getSound(79));
}, null);
}

                        if(((getGameAttribute("GameBeatPosition") == 1) || (getGameAttribute("GameBeatPosition") == 3)))
{
                            playSound(getSound(79));

}

}

                    else
{
                        trace("" + "Cancelled Kick");
                        timeTask.repeats = false;
return;
}

}, null);
        runPeriodically(1000 * (60 / getGameAttribute("GameTempo")), function(timeTask:TimedTask):Void {
                    if((getGameAttribute("GameBeatPosition") == 2))
{

                        runLater(1000 * ((60 / getGameAttribute("GameTempo")) / _Swing), function(timeTask:TimedTask):Void {
                                    playSound(getSound(81));
}, null);
}

                    if(((getGameAttribute("GameBeatPosition") == 1) || (getGameAttribute("GameBeatPosition") == 3)))
{


}

                    if(!(_MusicManager))
{

                        timeTask.repeats = false;
return;
}

}, null);
        runPeriodically(1000 * ((60 / getGameAttribute("GameTempo")) * randomInt(Math.floor(5), Math.floor(10))), function(timeTask:TimedTask):Void {
                    playSound(getSound(57));
                    if(!(_MusicManager))
{

                        timeTask.repeats = false;
return;
}

}, null);
        runPeriodically(1000 * ((60 / getGameAttribute("GameTempo")) * randomInt(Math.floor(1), Math.floor(5))), function(timeTask:TimedTask):Void {
                    playSound(getSound(81));
                    if(!(_MusicManager))
{
                        trace("" + "Cancelled Kick");
                        timeTask.repeats = false;
return;
}

}, null);
        runPeriodically(1000 * (randomInt(Math.floor(1), Math.floor(12)) * (60 / getGameAttribute("GameTempo"))), function(timeTask:TimedTask):Void {
                    playSound(getSound(80));
                    if(!(_MusicManager))
{
                        trace("" + "Cancelled Kick");
                        timeTask.repeats = false;
return;
}

}, null);
        runPeriodically(1000 * (60 / getGameAttribute("GameTempo")), function(timeTask:TimedTask):Void {
                    if((getGameAttribute("GameBeatPosition") == 1))
{
                        playSound(getSound(84));
}

                    if(!(_MusicManager))
{
                        trace("" + "Cancelled Kick");
                        timeTask.repeats = false;
return;
}

}, null);
        runPeriodically(1000 * (60 / getGameAttribute("GameTempo")), function(timeTask:TimedTask):Void {
                    if((getGameAttribute("GameBeatPosition") == 2))
{
                        playSound(getSound(82));
}

                    if(!(_MusicManager))
{
                        trace("" + "Cancelled Kick");
                        timeTask.repeats = false;
return;
}

}, null);
        runPeriodically(1000 * ((60 / getGameAttribute("GameTempo")) * _Swing), function(timeTask:TimedTask):Void {
                    if((getGameAttribute("GameBeatPosition") == randomInt(Math.floor(1), Math.floor(4))))
{
                        if((getGameAttribute("GameBeatPosition") == 3))
{
                            playSound(getSound(83));
}

                        if(!(_MusicManager))
{
                            trace("" + "Cancelled Kick");
                            timeTask.repeats = false;
return;
}

}

}, null);
        runPeriodically(1000 * ((60 / getGameAttribute("GameTempo")) / 2), function(timeTask:TimedTask):Void {
                    if((getGameAttribute("GameBeatPosition") == randomInt(Math.floor(1), Math.floor(4))))
{
                        playSound(getSound(88));
                        if(!(_MusicManager))
{
                            trace("" + "Cancelled Kick");
                            timeTask.repeats = false;
return;
}

}

}, null);
        runPeriodically(1000 * ((60 / getGameAttribute("GameTempo")) / 2), function(timeTask:TimedTask):Void {
                    playSound(getSound(89));
                    if(!(_MusicManager))
{
                        trace("" + "Cancelled Kick");
                        timeTask.repeats = false;
return;
}

}, null);
}

    
/* ========================= Custom Event ========================= */
public function _customEvent_WormHole():Void
{
        createRecycledActor(getActorType(125), 180, 21, Script.BACK);
        createRecycledActor(getActorType(130), (getSceneWidth() / 2), 64, Script.FRONT);
        getLastCreatedActor().setValue("WormShouts", "_combonumber", 0);
}

    
/* ========================= Custom Event ========================= */
public function _customEvent_SpawnStart():Void
{
        Utils.clear(_DrawOrder);
        for(index0 in 0...Std.int((getGameAttribute("GridX") * getGameAttribute("GridY"))))
{
            _Xincrementer = asNumber(0);
propertyChanged("_Xincrementer", _Xincrementer);
            for(index1 in 0...Std.int(getGameAttribute("GridX")))
{
                _YIncrementer = asNumber(0);
propertyChanged("_YIncrementer", _YIncrementer);
                for(index2 in 0...Std.int(getGameAttribute("GridY")))
{
                    setGameAttribute("spawnX", _Xincrementer);
                    setGameAttribute("spawnY", _YIncrementer);
                    _SpawnTypeID = asNumber(randomInt(Math.floor(1), Math.floor(6)));
propertyChanged("_SpawnTypeID", _SpawnTypeID);
                    if((_SpawnTypeID == 1))
{
                        _SpawnTypeActor = getActorType(0);
propertyChanged("_SpawnTypeActor", _SpawnTypeActor);
}

                    if((_SpawnTypeID == 2))
{
                        _SpawnTypeActor = getActorType(0);
propertyChanged("_SpawnTypeActor", _SpawnTypeActor);
}

                    if((_SpawnTypeID == 3))
{
                        _SpawnTypeActor = getActorType(0);
propertyChanged("_SpawnTypeActor", _SpawnTypeActor);
}

                    if((_SpawnTypeID == 4))
{
                        _SpawnTypeActor = getActorType(0);
propertyChanged("_SpawnTypeActor", _SpawnTypeActor);
}

                    if((_SpawnTypeID == 5))
{
                        _SpawnTypeActor = getActorType(0);
propertyChanged("_SpawnTypeActor", _SpawnTypeActor);
}

                    if((_SpawnTypeID == 6))
{
                        _SpawnTypeActor = getActorType(0);
propertyChanged("_SpawnTypeActor", _SpawnTypeActor);
}

                    setGameAttribute("GemID", _SpawnTypeID);
                    if(!((List2D.get_entry(Std.int(getGameAttribute("spawnX")), Std.int(getGameAttribute("spawnY")), _AlreadySpawned) == ("" + "FULL"))))
{
                        createRecycledActor(_SpawnTypeActor, (((_ScreenOffset + (getGameAttribute("spawnX") * _GridSpacing)) - _ScreenOffset) + ((_GridSpacing / 2) - 10)), (((_ScreenOffesetY + (getGameAttribute("spawnY") * _GridSpacing)) - _ScreenOffesetY) + (_GridSpacing * 2)), Script.FRONT);
                        getLastCreatedActor().disableActorDrawing();
                        List2D.set_entry(Std.int(getGameAttribute("spawnX")), Std.int(getGameAttribute("spawnY")), ("" + "FULL"), _AlreadySpawned);
                        List2D.set_entry(Std.int(getGameAttribute("spawnX")), Std.int(getGameAttribute("spawnY")), _SpawnTypeID, _GemType);

}

                    else if((List2D.get_entry(Std.int(getGameAttribute("spawnX")), Std.int(getGameAttribute("spawnY")), _AlreadySpawned) == ("" + "FULL")))
{
                        continue;
}


                    setGameAttribute("TileX", _Xincrementer);
                    setGameAttribute("TileY", _YIncrementer);
                    _YIncrementer += 1;
propertyChanged("_YIncrementer", _YIncrementer);
}

                _Xincrementer += 1;
propertyChanged("_Xincrementer", _Xincrementer);
                if((_Xincrementer == getGameAttribute("GridX")))
{
                    setGameAttribute("GridBoundX", ((_ScreenOffset - _ScreenOffset) + ((_GridSpacing / 2) - 10)));
                    setGameAttribute("GridXPosition", (((_ScreenOffset + (getGameAttribute("spawnX") * _GridSpacing)) - _ScreenOffset) + ((_GridSpacing / 2) - 10)));
}

                if((_YIncrementer == getGameAttribute("GridY")))
{
                    setGameAttribute("GridBoundY", ((_ScreenOffesetY - _ScreenOffesetY) + (_GridSpacing * 2)));
                    setGameAttribute("GridYPosition", (((_ScreenOffesetY + (getGameAttribute("spawnY") * _GridSpacing)) - _ScreenOffesetY) + (_GridSpacing * 2)));
}

}

}

        _UIDCOPY = new Array<Dynamic>();
propertyChanged("_UIDCOPY", _UIDCOPY);
        _UIDCOPY = _UID.copy();
propertyChanged("_UIDCOPY", _UIDCOPY);
        _ActorReveal = asNumber(0);
propertyChanged("_ActorReveal", _ActorReveal);
        _Xincrementer = asNumber(0);
propertyChanged("_Xincrementer", _Xincrementer);
        _YIncrementer = asNumber(0);
propertyChanged("_YIncrementer", _YIncrementer);
        if(!((_Xincrementer == getGameAttribute("GridX"))))
{
            trace("" + "Delay");
            _YIncrementer = asNumber(0);
propertyChanged("_YIncrementer", _YIncrementer);
            runPeriodically(1000 * 0.06, function(timeTask:TimedTask):Void {
                        if(!((_YIncrementer == getGameAttribute("GridY"))))
{
                            _ActorReveal = asNumber(asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int(_YIncrementer), _UID)));
propertyChanged("_ActorReveal", _ActorReveal);
                            getActor(Std.int(_ActorReveal)).enableActorDrawing();

                            _YIncrementer += 1;
propertyChanged("_YIncrementer", _YIncrementer);
                            playSound(_sda);
}

                        else
{
                            _Xincrementer += 1;
propertyChanged("_Xincrementer", _Xincrementer);
                            _YIncrementer = asNumber(0);
propertyChanged("_YIncrementer", _YIncrementer);
}

                        if((_Xincrementer == getGameAttribute("GridX")))
{

                            setGameAttribute("Started?", true);
                            _customEvent_CHECKGRID();
                            timeTask.repeats = false;
return;
}

}, null);
}

}

    
/* ========================= Custom Event ========================= */
public function _customEvent_Spawn():Void
{
        trace("" + "Back to Spawn");
        Utils.clear(_DrawOrder);

        if((!(_CheckMatches) && !(getGameAttribute("Swapping?"))))
{
            if((_CanSpawn == true))
{
                _CanSpawn = false;
propertyChanged("_CanSpawn", _CanSpawn);
                runLater(1000 * 0.02, function(timeTask:TimedTask):Void {
                            _RefillX = asNumber(0);
propertyChanged("_RefillX", _RefillX);
                            for(index0 in 0...Std.int(getGameAttribute("GridX")))
{
                                _RefillY = asNumber(0);
propertyChanged("_RefillY", _RefillY);
                                for(index1 in 0...Std.int(getGameAttribute("GridY")))
{
                                    setGameAttribute("spawnX", _RefillX);
                                    setGameAttribute("spawnY", _RefillY);
                                    if((!List2D.check_entry(Std.int(_RefillX), Std.int(_RefillY), _AlreadySpawned) == true))
{

                                        if(_SpecialSpawn)
{
                                            if((_SpecialSpawn && _CreateBombPiece))
{
                                                _SpawnTypeID = asNumber(getGameAttribute("TypeNumber"));
propertyChanged("_SpawnTypeID", _SpawnTypeID);
                                                if((_SpawnTypeID == getGameAttribute("TypeNumber")))
{
                                                    _SpawnTypeActor = getActorType(0);
propertyChanged("_SpawnTypeActor", _SpawnTypeActor);
}

}

                                            else
{
                                                _SpawnTypeID = asNumber(getGameAttribute("TypeNumber"));
propertyChanged("_SpawnTypeID", _SpawnTypeID);
                                                if((_SpawnTypeID == getGameAttribute("TypeNumber")))
{
                                                    _SpawnTypeActor = getActorType(0);
propertyChanged("_SpawnTypeActor", _SpawnTypeActor);
}

}

}

                                        if(!(_SpecialSpawn))
{
                                            _SpawnTypeID = asNumber(randomInt(Math.floor(1), Math.floor(6)));
propertyChanged("_SpawnTypeID", _SpawnTypeID);
                                            if((_SpawnTypeID == 1))
{
                                                _SpawnTypeActor = getActorType(0);
propertyChanged("_SpawnTypeActor", _SpawnTypeActor);
}

                                            if((_SpawnTypeID == 2))
{
                                                _SpawnTypeActor = getActorType(0);
propertyChanged("_SpawnTypeActor", _SpawnTypeActor);
}

                                            if((_SpawnTypeID == 3))
{
                                                _SpawnTypeActor = getActorType(0);
propertyChanged("_SpawnTypeActor", _SpawnTypeActor);
}

                                            if((_SpawnTypeID == 4))
{
                                                _SpawnTypeActor = getActorType(0);
propertyChanged("_SpawnTypeActor", _SpawnTypeActor);
}

                                            if((_SpawnTypeID == 5))
{
                                                _SpawnTypeActor = getActorType(0);
propertyChanged("_SpawnTypeActor", _SpawnTypeActor);
}

                                            if((_SpawnTypeID == 6))
{
                                                _SpawnTypeActor = getActorType(0);
propertyChanged("_SpawnTypeActor", _SpawnTypeActor);
}

}

                                        setGameAttribute("GemID", _SpawnTypeID);
                                        _Delayer += 1;
propertyChanged("_Delayer", _Delayer);
                                        createRecycledActor(_SpawnTypeActor, (((_ScreenOffset + (_RefillX * _GridSpacing)) - _ScreenOffset) + ((_GridSpacing / 2) - 10)), (((_ScreenOffesetY + (_RefillY * _GridSpacing)) - _ScreenOffesetY) + (_GridSpacing * 2)), Script.FRONT);
                                        _SpecialSpawn = false;
propertyChanged("_SpecialSpawn", _SpecialSpawn);
                                        List2D.set_entry(Std.int(_RefillX), Std.int(_RefillY), ("" + "FULL"), _AlreadySpawned);
                                        List2D.set_entry(Std.int(_RefillX), Std.int(_RefillY), _SpawnTypeID, _GemType);

}


                                    _RefillY += 1;
propertyChanged("_RefillY", _RefillY);
}

                                _RefillX += 1;
propertyChanged("_RefillX", _RefillX);
}

                            runPeriodically(1000 * ((60 / getGameAttribute("GameTempo")) / 8), function(timeTask:TimedTask):Void {

                                        trace("" + _DrawOrder);
                                        if((_DrawOrder.length == 0))
{
                                            timeTask.repeats = false;
return;
}

                                        else if(!((_DrawOrder.length == 0)))
{
                                            _ActorReveal = asNumber(asNumber(_DrawOrder[Std.int(0)]));
propertyChanged("_ActorReveal", _ActorReveal);
                                            _DrawOrder.splice(Std.int(0), 1);
                                            playSound(getActor(Std.int(_ActorReveal)).getValue("beat gem", "_GemSound"));
                                            getActor(Std.int(_ActorReveal)).enableActorDrawing();
}

}, null);
}, null);
}

            else
{

}

}

        _RefillY = asNumber(0);
propertyChanged("_RefillY", _RefillY);
        for(actorOfType in getActorsOfType(getActorType(0)))
{
if(actorOfType != null && !actorOfType.dead && !actorOfType.recycled){
            _RefillY += 1;
propertyChanged("_RefillY", _RefillY);
            if((_RefillY > (getGameAttribute("GridX") * getGameAttribute("GridY"))))
{
                trace("" + "Grid FuckUp!");
                if(!(Utils.contains(_UID, actorOfType)))
{
                    recycleActor(actorOfType);
}

}

}
}

        runLater(1000 * 0.3, function(timeTask:TimedTask):Void {
                    setGameAttribute("GameTempo", (getGameAttribute("GameTempo") + 1));
                    _customEvent_CHECKGRID();
}, null);
}

    
/* ========================= Custom Event ========================= */
public function _customEvent_CHECKGRID():Void
{
        if(_IsDestroying)
{
            return;
}

        if((!(_IsDestroying) && !(getGameAttribute("Swapping?"))))
{
            _CanSpawn = true;
propertyChanged("_CanSpawn", _CanSpawn);
            _customEvent_Check();
}

}

    
/* ========================= Custom Event ========================= */
public function _customEvent_Check():Void
{
        _CheckMatches = true;
propertyChanged("_CheckMatches", _CheckMatches);
        trace("" + "CHECKING");
        _NumberOfMatches = asNumber(0);
propertyChanged("_NumberOfMatches", _NumberOfMatches);

        _GemTypeNumber = asNumber(0);
propertyChanged("_GemTypeNumber", _GemTypeNumber);
        _Xincrementer = asNumber(0);
propertyChanged("_Xincrementer", _Xincrementer);
        _Searcher = asNumber(0);
propertyChanged("_Searcher", _Searcher);
        _XSearcher = asNumber(0);
propertyChanged("_XSearcher", _XSearcher);
        _YIncrementer = asNumber(0);
propertyChanged("_YIncrementer", _YIncrementer);
        _DoubleCombo = asNumber(0);
propertyChanged("_DoubleCombo", _DoubleCombo);
        while(!((_GemTypeNumber == 6)))
{
            _GemTypeNumber += 1;
propertyChanged("_GemTypeNumber", _GemTypeNumber);
            _Searcher = asNumber(0);
propertyChanged("_Searcher", _Searcher);
            _Xincrementer = asNumber(0);
propertyChanged("_Xincrementer", _Xincrementer);
            for(index0 in 0...Std.int(getGameAttribute("GridX")))
{
                _Searcher = asNumber(0);
propertyChanged("_Searcher", _Searcher);
                for(index1 in 0...Std.int((getGameAttribute("GridY") - 2)))
{

                    if((((asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int((_Searcher + 0)), _GemType)) == _GemTypeNumber) && (asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int((_Searcher + 1)), _GemType)) == _GemTypeNumber)) && (asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int((_Searcher + 2)), _GemType)) == _GemTypeNumber)))
{
                        trace("" + "MATCH UP FOUND!");
                        _MatchesFound = true;
propertyChanged("_MatchesFound", _MatchesFound);
                        /* "Check the two nearest blocks to the above" */
                        _NumberOfMatches += 1;
propertyChanged("_NumberOfMatches", _NumberOfMatches);
                        _ExtraSearcher = asNumber(0);
propertyChanged("_ExtraSearcher", _ExtraSearcher);
                        while(!((_ExtraSearcher == getGameAttribute("GridY"))))
{
                            if((asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int(((_Searcher + 3) + _ExtraSearcher)), _GemType)) == asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int(((_Searcher + 2) + 0)), _GemType))))
{
                                trace("" + "ExtraUpFound");
                                getGameAttribute("KillList").insert(Std.int((_ExtraSearcher + 3)), asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int(((_Searcher + 3) + _ExtraSearcher)), _UID)));
                                List2D.set_entry(Std.int(_Xincrementer), Std.int(((_Searcher + 3) + _ExtraSearcher)), null, _UID);
                                List2D.set_entry(Std.int(_Xincrementer), Std.int(((_Searcher + 3) + _ExtraSearcher)), null, _GemType);
                                List2D.set_entry(Std.int(_Xincrementer), Std.int(((_Searcher + 3) + _ExtraSearcher)), null, _AlreadySpawned);
                                _NumberOfMatches += 1;
propertyChanged("_NumberOfMatches", _NumberOfMatches);
                                _ExtraSearcher += 1;
propertyChanged("_ExtraSearcher", _ExtraSearcher);
}

                            else
{
                                break;
}

}

                        _ExtraSearcher = asNumber(0);
propertyChanged("_ExtraSearcher", _ExtraSearcher);
                        if(((asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int(_Searcher), _SpecialListBomb)) == 1) || ((asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int((_Searcher + 1)), _SpecialListBomb)) == 1) || (asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int((_Searcher + 2)), _SpecialListBomb)) == 1))))
{
                            _SpecialKill = true;
propertyChanged("_SpecialKill", _SpecialKill);
                            /* "add the whole Column to kill list " */
                            _Searcher = asNumber(0);
propertyChanged("_Searcher", _Searcher);
                            for(index2 in 0...Std.int(getGameAttribute("GridY")))
{
                                getGameAttribute("KillList").insert(Std.int(_Searcher), asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int(_Searcher), _UID)));
                                if((asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int(_Searcher), _SpecialListBomb)) == 1))
{
                                    trace("" + "DoubleBomb Up Found");
                                    _DoubleCombo += 1;
propertyChanged("_DoubleCombo", _DoubleCombo);
}

                                if((_DoubleCombo >= 2))
{
                                    /* "add the whole row from second bomb" */
                                    _DoubleCombo = asNumber(0);
propertyChanged("_DoubleCombo", _DoubleCombo);
                                    _CreateBombPiece = true;
propertyChanged("_CreateBombPiece", _CreateBombPiece);
                                    _YIncrementer = asNumber(0);
propertyChanged("_YIncrementer", _YIncrementer);
                                    _XSearcher = asNumber(_Xincrementer);
propertyChanged("_XSearcher", _XSearcher);
                                    for(index3 in 0...Std.int(getGameAttribute("GridX")))
{
                                        if(!(Utils.contains(getGameAttribute("KillList"), List2D.get_entry(Std.int(_XSearcher), Std.int(_YIncrementer), _UID))))
{
                                            getGameAttribute("KillList").insert(Std.int(_XSearcher), asNumber(List2D.get_entry(Std.int(_XSearcher), Std.int(_YIncrementer), _UID)));
}

                                        List2D.set_entry(Std.int(_XSearcher), Std.int(_YIncrementer), null, _UID);
                                        List2D.set_entry(Std.int(_XSearcher), Std.int(_YIncrementer), null, _GemType);
                                        List2D.set_entry(Std.int(_XSearcher), Std.int(_YIncrementer), null, _AlreadySpawned);
                                        List2D.set_entry(Std.int(_XSearcher), Std.int(_YIncrementer), null, _SpecialListBomb);
                                        _XSearcher += 1;
propertyChanged("_XSearcher", _XSearcher);
}

}


                                List2D.set_entry(Std.int(_Xincrementer), Std.int(_Searcher), null, _UID);
                                List2D.set_entry(Std.int(_Xincrementer), Std.int(_Searcher), null, _GemType);
                                List2D.set_entry(Std.int(_Xincrementer), Std.int(_Searcher), null, _AlreadySpawned);
                                List2D.set_entry(Std.int(_Xincrementer), Std.int(_Searcher), null, _SpecialListBomb);
                                _Searcher += 1;
propertyChanged("_Searcher", _Searcher);
}

                            _customEvent_PreKill();
                            return;
}

                        else if(((asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int((_Searcher + 0)), _SpecialListBomb)) == 2) || ((asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int((_Searcher + 1)), _SpecialListBomb)) == 2) || (asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int((_Searcher + 2)), _SpecialListBomb)) == 2))))
{
                            trace("" + "BOMB UP FOUND");

                            _BombKill = true;
propertyChanged("_BombKill", _BombKill);
                            _BombXX = asNumber(_Xincrementer);
propertyChanged("_BombXX", _BombXX);
                            _BombYY = asNumber(_Searcher);
propertyChanged("_BombYY", _BombYY);
                            _BombX = asNumber(_Xincrementer);
propertyChanged("_BombX", _BombX);
                            _BombY = asNumber(_Searcher);
propertyChanged("_BombY", _BombY);
                            /* "Add Column Up bomb" */
                            for(index2 in 0...Std.int(3))
{
                                for(index3 in 0...Std.int(3))
{
                                    if((_BombYY < (getGameAttribute("GridY") - 1)))
{
                                        if(!(Utils.contains(getGameAttribute("KillList"), List2D.get_entry(Std.int(_BombX), Std.int(_BombY), _UID))))
{
                                            getGameAttribute("KillList").insert(Std.int(_Searcher), asNumber(List2D.get_entry(Std.int(_BombX), Std.int(_BombY), _UID)));
                                            List2D.set_entry(Std.int(_BombX), Std.int(_BombY), null, _UID);
                                            List2D.set_entry(Std.int(_BombX), Std.int(_BombY), null, _GemType);
                                            List2D.set_entry(Std.int(_BombX), Std.int(_BombY), null, _AlreadySpawned);
                                            List2D.set_entry(Std.int(_BombX), Std.int(_BombY), null, _SpecialListBomb);
}

                                        _BombY += 1;
propertyChanged("_BombY", _BombY);
}

                                    else if(((_BombYY == getGameAttribute("GridY")) || (_BombYY == (getGameAttribute("GridY") - 1))))
{
                                        /* "If bomb piece is at end of grid Y " */
                                        if(!(Utils.contains(getGameAttribute("KillList"), List2D.get_entry(Std.int(_BombX), Std.int(_BombY), _UID))))
{
                                            getGameAttribute("KillList").insert(Std.int(_Searcher), asNumber(List2D.get_entry(Std.int(_BombX), Std.int(_BombY), _UID)));
                                            List2D.set_entry(Std.int(_BombX), Std.int(_BombY), null, _UID);
                                            List2D.set_entry(Std.int(_BombX), Std.int(_BombY), null, _GemType);
                                            List2D.set_entry(Std.int(_BombX), Std.int(_BombY), null, _AlreadySpawned);
                                            List2D.set_entry(Std.int(_BombX), Std.int(_BombY), null, _SpecialListBomb);
}

                                        _BombY -= 1;
propertyChanged("_BombY", _BombY);
}

}

                                if((_BombXX < getGameAttribute("GridY")))
{
                                    _BombX += 1;
propertyChanged("_BombX", _BombX);
}

                                else if(((_BombXX == getGameAttribute("GridY")) || (_BombXX == (getGameAttribute("GridY") - 1))))
{
                                    _BombX -= 1;
propertyChanged("_BombX", _BombX);
}

                                _BombY = asNumber(_BombYY);
propertyChanged("_BombY", _BombY);
}

                            _customEvent_PreKill();
                            return;
}

                        setGameAttribute("TypeNumber", asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int((_Searcher + 0)), _GemType)));
                        List2D.set_entry(Std.int(_Xincrementer), Std.int((_Searcher + 0)), 9, getGameAttribute("BPS"));
                        getGameAttribute("KillList").insert(Std.int((index1 + 0)), asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int((_Searcher + 0)), _UID)));
                        getGameAttribute("KillList").insert(Std.int((index1 + 1)), asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int((_Searcher + 1)), _UID)));
                        getGameAttribute("KillList").insert(Std.int((index1 + 2)), asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int((_Searcher + 2)), _UID)));



                        List2D.set_entry(Std.int(_Xincrementer), Std.int((_Searcher + 0)), null, _UID);
                        List2D.set_entry(Std.int(_Xincrementer), Std.int((_Searcher + 1)), null, _UID);
                        List2D.set_entry(Std.int(_Xincrementer), Std.int((_Searcher + 2)), null, _UID);
                        List2D.set_entry(Std.int(_Xincrementer), Std.int((_Searcher + 0)), null, _GemType);
                        List2D.set_entry(Std.int(_Xincrementer), Std.int((_Searcher + 1)), null, _GemType);
                        List2D.set_entry(Std.int(_Xincrementer), Std.int((_Searcher + 2)), null, _GemType);
                        List2D.set_entry(Std.int(_Xincrementer), Std.int((_Searcher + 0)), null, _AlreadySpawned);
                        List2D.set_entry(Std.int(_Xincrementer), Std.int((_Searcher + 1)), null, _AlreadySpawned);
                        List2D.set_entry(Std.int(_Xincrementer), Std.int((_Searcher + 2)), null, _AlreadySpawned);
}

                    _Searcher += 1;
propertyChanged("_Searcher", _Searcher);
}

                _Xincrementer += 1;
propertyChanged("_Xincrementer", _Xincrementer);
}

            _Searcher = asNumber(0);
propertyChanged("_Searcher", _Searcher);
            for(index0 in 0...Std.int(getGameAttribute("GridY")))
{
                _Xincrementer = asNumber(0);
propertyChanged("_Xincrementer", _Xincrementer);
                for(index1 in 0...Std.int((getGameAttribute("GridX") - 2)))
{

                    if((((asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int(_Searcher), _GemType)) == _GemTypeNumber) && (asNumber(List2D.get_entry(Std.int((_Xincrementer + 1)), Std.int(_Searcher), _GemType)) == _GemTypeNumber)) && (asNumber(List2D.get_entry(Std.int((_Xincrementer + 2)), Std.int(_Searcher), _GemType)) == _GemTypeNumber)))
{
                        trace("" + "MATCH ACROSS  FOUND!");
                        _MatchesFound = true;
propertyChanged("_MatchesFound", _MatchesFound);
                        /* "Check the two nearest blocks to the right." */
                        _NumberOfMatches += 1;
propertyChanged("_NumberOfMatches", _NumberOfMatches);
                        _ExtraSearcher = asNumber(0);
propertyChanged("_ExtraSearcher", _ExtraSearcher);
                        while(!((_ExtraSearcher == getGameAttribute("GridX"))))
{
                            if((asNumber(List2D.get_entry(Std.int(((_Xincrementer + 3) + _ExtraSearcher)), Std.int(_Searcher), _GemType)) == asNumber(List2D.get_entry(Std.int((_Xincrementer + 2)), Std.int(_Searcher), _GemType))))
{
                                trace("" + "ExtraACrossFound");
                                getGameAttribute("KillList").insert(Std.int((_ExtraSearcher + 3)), asNumber(List2D.get_entry(Std.int(((_Xincrementer + 3) + _ExtraSearcher)), Std.int(_Searcher), _UID)));
                                List2D.set_entry(Std.int(((_Xincrementer + 3) + _ExtraSearcher)), Std.int(_Searcher), null, _UID);
                                List2D.set_entry(Std.int(((_Xincrementer + 3) + _ExtraSearcher)), Std.int(_Searcher), null, _GemType);
                                List2D.set_entry(Std.int(((_Xincrementer + 3) + _ExtraSearcher)), Std.int(_Searcher), null, _AlreadySpawned);
                                _NumberOfMatches += 1;
propertyChanged("_NumberOfMatches", _NumberOfMatches);
                                _ExtraSearcher += 1;
propertyChanged("_ExtraSearcher", _ExtraSearcher);
}

                            else
{
                                break;
}

}

                        if(((asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int(_Searcher), _SpecialListBomb)) == 1) || ((asNumber(List2D.get_entry(Std.int((_Xincrementer + 1)), Std.int(_Searcher), _SpecialListBomb)) == 1) || (asNumber(List2D.get_entry(Std.int((_Xincrementer + 2)), Std.int(_Searcher), _SpecialListBomb)) == 1))))
{
                            _SpecialKill = true;
propertyChanged("_SpecialKill", _SpecialKill);
                            /* "add the whole row  to kill list " */
                            _Xincrementer = asNumber(0);
propertyChanged("_Xincrementer", _Xincrementer);
                            for(index2 in 0...Std.int(getGameAttribute("GridX")))
{
                                getGameAttribute("KillList").insert(Std.int(_Xincrementer), asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int(_Searcher), _UID)));
                                if((asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int(_Searcher), _SpecialListBomb)) == 1))
{
                                    trace("" + "Double Special  ACross  FOund!");
                                    _DoubleCombo += 1;
propertyChanged("_DoubleCombo", _DoubleCombo);
}

                                if((_DoubleCombo >= 2))
{
                                    /* "add the whole Column at bomb  to kill list " */
                                    _DoubleCombo = asNumber(0);
propertyChanged("_DoubleCombo", _DoubleCombo);
                                    _CreateBombPiece = true;
propertyChanged("_CreateBombPiece", _CreateBombPiece);
                                    _XSearcher = asNumber(0);
propertyChanged("_XSearcher", _XSearcher);
                                    _YIncrementer = asNumber(_Searcher);
propertyChanged("_YIncrementer", _YIncrementer);
                                    for(index3 in 0...Std.int(getGameAttribute("GridY")))
{
                                        if(!(Utils.contains(getGameAttribute("KillList"), List2D.get_entry(Std.int(_XSearcher), Std.int(_YIncrementer), _UID))))
{
                                            getGameAttribute("KillList").insert(Std.int(_YIncrementer), (asNumber(List2D.get_entry(Std.int(_XSearcher), Std.int(_YIncrementer), _UID)) + 0));
}

                                        List2D.set_entry(Std.int(_XSearcher), Std.int(_YIncrementer), null, _UID);
                                        List2D.set_entry(Std.int(_XSearcher), Std.int(_YIncrementer), null, _GemType);
                                        List2D.set_entry(Std.int(_XSearcher), Std.int(_YIncrementer), null, _AlreadySpawned);
                                        List2D.set_entry(Std.int(_XSearcher), Std.int(_YIncrementer), null, _SpecialListBomb);
                                        _YIncrementer += 1;
propertyChanged("_YIncrementer", _YIncrementer);
}

}


                                List2D.set_entry(Std.int(_Xincrementer), Std.int(_Searcher), null, _UID);
                                List2D.set_entry(Std.int(_Xincrementer), Std.int(_Searcher), null, _GemType);
                                List2D.set_entry(Std.int(_Xincrementer), Std.int(_Searcher), null, _AlreadySpawned);
                                List2D.set_entry(Std.int(_Xincrementer), Std.int(_Searcher), null, _SpecialListBomb);
                                _Xincrementer += 1;
propertyChanged("_Xincrementer", _Xincrementer);
}

                            _customEvent_PreKill();
                            return;
}

                        else if(((asNumber(List2D.get_entry(Std.int((_Xincrementer + 0)), Std.int(_Searcher), _SpecialListBomb)) == 2) || ((asNumber(List2D.get_entry(Std.int((_Xincrementer + 1)), Std.int(_Searcher), _SpecialListBomb)) == 2) || (asNumber(List2D.get_entry(Std.int((_Xincrementer + 2)), Std.int(_Searcher), _SpecialListBomb)) == 2))))
{
                            trace("" + "BOMB FOUND ACROSS");
                            _BombKill = true;
propertyChanged("_BombKill", _BombKill);

                            _BombXX = asNumber(_Xincrementer);
propertyChanged("_BombXX", _BombXX);
                            _BombYY = asNumber(_Searcher);
propertyChanged("_BombYY", _BombYY);
                            _BombX = asNumber(_Xincrementer);
propertyChanged("_BombX", _BombX);
                            _BombY = asNumber(_Searcher);
propertyChanged("_BombY", _BombY);
                            /* "Add Column/row underneath bomb" */
                            for(index2 in 0...Std.int(3))
{
                                for(index3 in 0...Std.int(3))
{
                                    if((_BombXX < getGameAttribute("GridX")))
{
                                        if(!(Utils.contains(getGameAttribute("KillList"), List2D.get_entry(Std.int(_BombX), Std.int(_BombY), _UID))))
{
                                            getGameAttribute("KillList").insert(Std.int(_Searcher), asNumber(List2D.get_entry(Std.int(_BombX), Std.int(_BombY), _UID)));
                                            List2D.set_entry(Std.int(_BombX), Std.int(_BombY), 9, getGameAttribute("BPS"));
                                            List2D.set_entry(Std.int(_BombX), Std.int(_BombY), null, _UID);
                                            List2D.set_entry(Std.int(_BombX), Std.int(_BombY), null, _GemType);
                                            List2D.set_entry(Std.int(_BombX), Std.int(_BombY), null, _AlreadySpawned);
                                            List2D.set_entry(Std.int(_BombX), Std.int(_BombY), null, _SpecialListBomb);
}

                                        _BombX += 1;
propertyChanged("_BombX", _BombX);
}

                                    else if(((_BombXX == getGameAttribute("GridX")) || (_BombXX == (getGameAttribute("GridX") - 1))))
{
                                        if(!(Utils.contains(getGameAttribute("KillList"), List2D.get_entry(Std.int(_BombX), Std.int(_BombY), _UID))))
{
                                            /* "If bomb piece is at end of grid X " */
                                            getGameAttribute("KillList").insert(Std.int(_Searcher), asNumber(List2D.get_entry(Std.int(_BombX), Std.int(_BombY), _UID)));
                                            List2D.set_entry(Std.int(_BombX), Std.int(_BombY), 9, getGameAttribute("BPS"));
                                            List2D.set_entry(Std.int(_BombX), Std.int(_BombY), null, _UID);
                                            List2D.set_entry(Std.int(_BombX), Std.int(_BombY), null, _GemType);
                                            List2D.set_entry(Std.int(_BombX), Std.int(_BombY), null, _AlreadySpawned);
                                            List2D.set_entry(Std.int(_BombX), Std.int(_BombY), null, _SpecialListBomb);
}

                                        _BombX -= 1;
propertyChanged("_BombX", _BombX);
}

}

                                if((_BombXX < getGameAttribute("GridX")))
{
                                    _BombY += 1;
propertyChanged("_BombY", _BombY);
}

                                else if(((_BombXX == getGameAttribute("GridX")) || (_BombXX == (getGameAttribute("GridX") - 1))))
{
                                    _BombY -= 1;
propertyChanged("_BombY", _BombY);
}

                                _BombX = asNumber(_BombXX);
propertyChanged("_BombX", _BombX);
}

                            _customEvent_PreKill();
                            return;
}

                        setGameAttribute("TypeNumber", asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int(_Searcher), _GemType)));
                        List2D.set_entry(Std.int(_Xincrementer), Std.int(_Searcher), 9, getGameAttribute("BPS"));
                        getGameAttribute("KillList").insert(Std.int((index1 + 0)), asNumber(List2D.get_entry(Std.int((_Xincrementer + 0)), Std.int(_Searcher), _UID)));
                        getGameAttribute("KillList").insert(Std.int((index1 + 1)), asNumber(List2D.get_entry(Std.int((_Xincrementer + 1)), Std.int(_Searcher), _UID)));
                        getGameAttribute("KillList").insert(Std.int((index1 + 2)), asNumber(List2D.get_entry(Std.int((_Xincrementer + 2)), Std.int(_Searcher), _UID)));



                        List2D.set_entry(Std.int((_Xincrementer + 0)), Std.int(_Searcher), null, _UID);
                        List2D.set_entry(Std.int((_Xincrementer + 1)), Std.int(_Searcher), null, _UID);
                        List2D.set_entry(Std.int((_Xincrementer + 2)), Std.int(_Searcher), null, _UID);
                        List2D.set_entry(Std.int((_Xincrementer + 0)), Std.int(_Searcher), null, _GemType);
                        List2D.set_entry(Std.int((_Xincrementer + 1)), Std.int(_Searcher), null, _GemType);
                        List2D.set_entry(Std.int((_Xincrementer + 2)), Std.int(_Searcher), null, _GemType);
                        List2D.set_entry(Std.int((_Xincrementer + 0)), Std.int(_Searcher), null, _AlreadySpawned);
                        List2D.set_entry(Std.int((_Xincrementer + 1)), Std.int(_Searcher), null, _AlreadySpawned);
                        List2D.set_entry(Std.int((_Xincrementer + 2)), Std.int(_Searcher), null, _AlreadySpawned);
}

                    _Xincrementer += 1;
propertyChanged("_Xincrementer", _Xincrementer);
}

                _Searcher += 1;
propertyChanged("_Searcher", _Searcher);
}

}

        _customEvent_PreKill();
}

    
/* ========================= Custom Event ========================= */
public function _customEvent_PreKill():Void
{
        if((!(_IsDestroying) && (_NumberOfMatches >= 1)))
{
            if(getGameAttribute("TapMode"))
{
                _customEvent_Kill();
                _customEvent_ResetTap();
}

            if((_SpecialKill == true))
{
                _customEvent_SpecialKill();
}

            else if(!(getGameAttribute("TapMode")))
{
                _customEvent_Kill();
}

}

        else if((!(_IsDestroying) && (_NumberOfMatches <= 0)))
{
            _CheckMatches = false;
propertyChanged("_CheckMatches", _CheckMatches);
            _customEvent_CheckWinConditions();
            _Combo = asNumber(0);
propertyChanged("_Combo", _Combo);
            _AutoCombo = asNumber(0);
propertyChanged("_AutoCombo", _AutoCombo);


            return;
}

}

    
/* ========================= Custom Event ========================= */
public function _customEvent_Kill():Void
{
        while(!(!(Utils.contains(getGameAttribute("KillList"), 0))))
{
            if(Utils.contains(getGameAttribute("KillList"), 0))
{
                getGameAttribute("KillList").remove(0);
}

}

        _AutoCombo += Math.round((getGameAttribute("KillList").length / 3));
propertyChanged("_AutoCombo", _AutoCombo);
        _KillListMod = asNumber(0);
propertyChanged("_KillListMod", _KillListMod);
        _DestroyListModifier += 1;
propertyChanged("_DestroyListModifier", _DestroyListModifier);
        _IsDestroying = true;
propertyChanged("_IsDestroying", _IsDestroying);
        _CanSpawn = false;
propertyChanged("_CanSpawn", _CanSpawn);
        trace("" + "DESTROYING");
        _Multiplefinder = asNumber(0);
propertyChanged("_Multiplefinder", _Multiplefinder);
        for(index0 in 0...Std.int(getGameAttribute("KillList").length))
{
            if((index0 == 0))
{
                _ActorDeathPos = asNumber(getActor((getGameAttribute("KillList"))[index0]).getX());
propertyChanged("_ActorDeathPos", _ActorDeathPos);
                _Combo = asNumber(_AutoCombo);
propertyChanged("_Combo", _Combo);
                _ActorDeathPosY = asNumber(getActor((getGameAttribute("KillList"))[index0]).getY());
propertyChanged("_ActorDeathPosY", _ActorDeathPosY);
                createRecycledActor(getActorType(105), _ActorDeathPos, _ActorDeathPosY, Script.FRONT);
}

            else if(((index0 == (_Multiplefinder + 3)) && (Math.round((getGameAttribute("KillList").length / 3)) >= Math.round(1.5))))
{
                for(index1 in 0...Std.int(Math.round((getGameAttribute("KillList").length / 3))))
{
                    _Multiplefinder = asNumber((index1 + 3));
propertyChanged("_Multiplefinder", _Multiplefinder);
                    _Combo = asNumber(index1);
propertyChanged("_Combo", _Combo);
                    _ActorDeathPos = asNumber(getActor((getGameAttribute("KillList"))[index0]).getX());
propertyChanged("_ActorDeathPos", _ActorDeathPos);
                    _ActorDeathPosY = asNumber(getActor((getGameAttribute("KillList"))[index0]).getY());
propertyChanged("_ActorDeathPosY", _ActorDeathPosY);
                    createRecycledActor(getActorType(105), _ActorDeathPos, _ActorDeathPosY, Script.FRONT);
}

}



            runLater(1000 * ((60 / getGameAttribute("GameTempo")) / 2), function(timeTask:TimedTask):Void {
                        trace("" + "EMITTING PARTICLES");
                        getActor((getGameAttribute("KillList"))[index0]).say("Particles", "_customEvent_" + "StartEmitting");

                        getActor((getGameAttribute("KillList"))[index0]).setFilter([createGrayscaleFilter()]);

                        playSoundOnChannel(getSound(11), Std.int(3));
                        runLater(1000 * ((60 / getGameAttribute("GameTempo")) / 2), function(timeTask:TimedTask):Void {
                                    trace("" + "KILLING ACTOR");
                                    recycleActor(getActor((getGameAttribute("KillList"))[0]));
                                    trace("" + "KILLED ACTOR");
                                    getGameAttribute("KillList").splice(Std.int(0), 1);
                                    _Score += (_NumberOfMatches * 250);
propertyChanged("_Score", _Score);
                                    _KillListMod += index0;
propertyChanged("_KillListMod", _KillListMod);
}, null);
}, null);
            _DestroyListModifier -= 1;
propertyChanged("_DestroyListModifier", _DestroyListModifier);
}


        if((_NumberOfMatches >= 2))
{
            trace("" + "SpeciaSpawn");
            _SpecialSpawn = true;
propertyChanged("_SpecialSpawn", _SpecialSpawn);
}

        if((_NumberOfMatches == 1))
{
            playSoundOnChannel(getSound(60), Std.int(4));
}

        else if((_NumberOfMatches == 2))
{
            playSoundOnChannel(getSound(60), Std.int(5));
            runLater(1000 * ((60 / getGameAttribute("GameTempo")) / 2), function(timeTask:TimedTask):Void {
                        playSoundOnChannel(getSound(60), Std.int(6));
}, null);
}

        else if((_NumberOfMatches == 3))
{
            playSoundOnChannel(getSound(60), Std.int(4));
            runLater(1000 * ((60 / getGameAttribute("GameTempo")) / 2), function(timeTask:TimedTask):Void {
                        playSoundOnChannel(getSound(60), Std.int(5));
                        runLater(1000 * ((60 / getGameAttribute("GameTempo")) / 2), function(timeTask:TimedTask):Void {
                                    playSoundOnChannel(getSound(60), Std.int(6));
}, null);
}, null);
}


        _Multiplefinder = asNumber(0);
propertyChanged("_Multiplefinder", _Multiplefinder);
        _NumberOfMatches = asNumber(1);
propertyChanged("_NumberOfMatches", _NumberOfMatches);
        runLater(1000 * 1.2, function(timeTask:TimedTask):Void {
                    trace("" + "RESETTING BOOLS");
                    _PlayerInput = false;
propertyChanged("_PlayerInput", _PlayerInput);
                    _BombKill = false;
propertyChanged("_BombKill", _BombKill);
                    _MatchesFound = false;
propertyChanged("_MatchesFound", _MatchesFound);
                    _CanSpawn = true;
propertyChanged("_CanSpawn", _CanSpawn);
                    _IsDestroying = false;
propertyChanged("_IsDestroying", _IsDestroying);
                    _CheckMatches = false;
propertyChanged("_CheckMatches", _CheckMatches);
                    _customEvent_BeaterSpawn();
                    _customEvent_Spawn();
}, null);
}

    
/* ========================= Custom Event ========================= */
public function _customEvent_SpecialKill():Void
{
        while(!(!(Utils.contains(getGameAttribute("KillList"), 0))))
{
            if(Utils.contains(getGameAttribute("KillList"), 0))
{
                getGameAttribute("KillList").remove(0);
}

}

        _AutoCombo += Math.round((getGameAttribute("KillList").length / 3));
propertyChanged("_AutoCombo", _AutoCombo);
        _Multiplefinder = asNumber(0);
propertyChanged("_Multiplefinder", _Multiplefinder);
        _KillListMod = asNumber(0);
propertyChanged("_KillListMod", _KillListMod);
        _DestroyListModifier += 1;
propertyChanged("_DestroyListModifier", _DestroyListModifier);
        _IsDestroying = true;
propertyChanged("_IsDestroying", _IsDestroying);
        _CanSpawn = false;
propertyChanged("_CanSpawn", _CanSpawn);

        trace("" + "SPECIALDESTROYING");
        for(index0 in 0...Std.int(getGameAttribute("KillList").length))
{
            trace("" + "AT THE KILL LIST");
            trace("" + getGameAttribute("KillList"));
            if((index0 == 0))
{
                _ActorDeathPos = asNumber(getActor((getGameAttribute("KillList"))[index0]).getX());
propertyChanged("_ActorDeathPos", _ActorDeathPos);
                _Combo = asNumber(_AutoCombo);
propertyChanged("_Combo", _Combo);
                _ActorDeathPosY = asNumber(getActor((getGameAttribute("KillList"))[index0]).getY());
propertyChanged("_ActorDeathPosY", _ActorDeathPosY);
                createRecycledActor(getActorType(105), _ActorDeathPos, _ActorDeathPosY, Script.FRONT);
}

            else if(((index0 == (_Multiplefinder + 3)) && (Math.round((getGameAttribute("KillList").length / 3)) >= Math.round(1.5))))
{
                for(index1 in 0...Std.int(Math.round((getGameAttribute("KillList").length / 3))))
{
                    _Multiplefinder = asNumber((index1 + 3));
propertyChanged("_Multiplefinder", _Multiplefinder);
                    _Combo = asNumber(index1);
propertyChanged("_Combo", _Combo);
                    _ActorDeathPos = asNumber(getActor((getGameAttribute("KillList"))[index0]).getX());
propertyChanged("_ActorDeathPos", _ActorDeathPos);
                    _ActorDeathPosY = asNumber(getActor((getGameAttribute("KillList"))[index0]).getY());
propertyChanged("_ActorDeathPosY", _ActorDeathPosY);
                    createRecycledActor(getActorType(105), _ActorDeathPos, _ActorDeathPosY, Script.FRONT);
}

}

            runLater(1000 * ((60 / getGameAttribute("GameTempo")) / 2), function(timeTask:TimedTask):Void {
                        getActor((getGameAttribute("KillList"))[index0]).say("Particles", "_customEvent_" + "StartEmitting");

                        getActor((getGameAttribute("KillList"))[index0]).setFilter([createGrayscaleFilter()]);

                        trace("" + getGameAttribute("KillList"));
                        trace("" + "APPLIED EFFECTS");

                        playSoundOnChannel(getSound(74), Std.int(4));
                        runLater(1000 * ((60 / getGameAttribute("GameTempo")) / 2), function(timeTask:TimedTask):Void {
                                    playSoundOnChannel(getSound(75), Std.int(5));
                                    runLater(1000 * ((60 / getGameAttribute("GameTempo")) / 2), function(timeTask:TimedTask):Void {
                                                playSoundOnChannel(getSound(76), Std.int(6));
                                                runLater(1000 * ((60 / getGameAttribute("GameTempo")) / 2), function(timeTask:TimedTask):Void {
                                                            playSoundOnChannel(getSound(77), Std.int(7));
                                                            runLater(1000 * ((60 / getGameAttribute("GameTempo")) / 2), function(timeTask:TimedTask):Void {
                                                                        playSoundOnChannel(getSound(78), Std.int(8));
}, null);
}, null);
}, null);
}, null);
                        if((_BombKill == true))
{
                            playSound(getSound(63));
                            startShakingScreen(1 / 100, (60 / getGameAttribute("GameTempo")));
}

                        playSoundOnChannel(getSound(11), Std.int(19));
                        runLater(1000 * ((60 / getGameAttribute("GameTempo")) / 2), function(timeTask:TimedTask):Void {
                                    trace("" + "KILLING ACTOR");
                                    recycleActor(getActor((getGameAttribute("KillList"))[0]));
                                    trace("" + "KILLED ACTOR");
                                    getGameAttribute("KillList").splice(Std.int(0), 1);
                                    _Score += (_NumberOfMatches * 250);
propertyChanged("_Score", _Score);
                                    _KillListMod += index0;
propertyChanged("_KillListMod", _KillListMod);
                                    if((_KillListMod >= (getGameAttribute("GridX") + getGameAttribute("GridY"))))
{
                                        _CreateBombPiece = true;
propertyChanged("_CreateBombPiece", _CreateBombPiece);
                                        _KillListMod = asNumber(0);
propertyChanged("_KillListMod", _KillListMod);
}

}, null);
}, null);
            _DestroyListModifier -= 1;
propertyChanged("_DestroyListModifier", _DestroyListModifier);
}

        if((_NumberOfMatches >= 2))
{
            trace("" + "SpeciaSpawn");
            _SpecialSpawn = true;
propertyChanged("_SpecialSpawn", _SpecialSpawn);
}

        _NumberOfMatches = asNumber(1);
propertyChanged("_NumberOfMatches", _NumberOfMatches);
        _Multiplefinder = asNumber(0);
propertyChanged("_Multiplefinder", _Multiplefinder);

        _SpecialKill = false;
propertyChanged("_SpecialKill", _SpecialKill);
        _BombKill = false;
propertyChanged("_BombKill", _BombKill);
        _Swing = asNumber(((_Swing * getGameAttribute("Moves Counter")) * (60 / getGameAttribute("GameTempo"))));
propertyChanged("_Swing", _Swing);
        _customEvent_BeaterSpawn();
        runLater(1000 * 1.2, function(timeTask:TimedTask):Void {
                    _MatchesFound = false;
propertyChanged("_MatchesFound", _MatchesFound);
                    _CanSpawn = true;
propertyChanged("_CanSpawn", _CanSpawn);
                    _IsDestroying = false;
propertyChanged("_IsDestroying", _IsDestroying);
                    _CheckMatches = false;
propertyChanged("_CheckMatches", _CheckMatches);
                    _DoubleCombo = asNumber(0);
propertyChanged("_DoubleCombo", _DoubleCombo);
                    _customEvent_Spawn();

}, null);
}

    
/* ========================= Custom Event ========================= */
public function _customEvent_CheckWinConditions():Void
{
        if(getGameAttribute("ScoreInMoves"))
{
            if(((_Score >= getGameAttribute("ScoreTarget")) && (getGameAttribute("Moves Counter") <= getGameAttribute("MovesTarget"))))
{
                _customEvent_Win();
}

            else if(((getGameAttribute("Moves Counter") >= getGameAttribute("MovesTarget")) && (_Score < getGameAttribute("ScoreTarget"))))
{
                _customEvent_Lose();
}

}

        if(getGameAttribute("ColorMatchInMoves"))
{
            if(((getGameAttribute("ColorTargets").length == 0) && (getGameAttribute("Moves Counter") <= getGameAttribute("MovesTarget"))))
{
                _customEvent_Win();
}

            if((!((getGameAttribute("ColorTargets").length == 0)) && (getGameAttribute("Moves Counter") >= getGameAttribute("MovesTarget"))))
{
                _customEvent_Lose();
}

}

}

    
/* ========================= Custom Event ========================= */
public function _customEvent_Win():Void
{
        createRecycledActor(getActorType(95), 0, (getSceneHeight() / 2), Script.FRONT);
        _Win = true;
propertyChanged("_Win", _Win);
        _customEvent_EndingLevel();
}

    
/* ========================= Custom Event ========================= */
public function _customEvent_EndingLevel():Void
{
        _Xincrementer = asNumber(0);
propertyChanged("_Xincrementer", _Xincrementer);
        for(index0 in 0...Std.int(getGameAttribute("GridX")))
{
            _YIncrementer = asNumber(0);
propertyChanged("_YIncrementer", _YIncrementer);
            for(index1 in 0...Std.int(getGameAttribute("GridY")))
{
                _Ending.insert(Std.int(0), asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int(_YIncrementer), _UID.copy())));
                _YIncrementer += 1;
propertyChanged("_YIncrementer", _YIncrementer);
}

            _Xincrementer += 1;
propertyChanged("_Xincrementer", _Xincrementer);
}

        trace("" + _Ending);
        for(index0 in 0...Std.int(asNumber(_Ending.length)))
{
            runLater(1000 * ((60 / getGameAttribute("GameTempo")) / 2), function(timeTask:TimedTask):Void {
                        getActor((_Ending)[0]).moveBy(160, 240, 2, Linear.easeNone);

                        getActor((_Ending)[0]).spinBy(360, 2, Linear.easeNone);
                        getActor((_Ending)[0]).growTo(0/100, 0/100, 2, Linear.easeNone);
                        _Ending.splice(Std.int(0), 1);
}, null);
}

        startShakingScreen(1 / 100, ((60 / getGameAttribute("GameTempo")) / 2));
}

    
/* ========================= Custom Event ========================= */
public function _customEvent_BeaterSpawn():Void
{


        if((getGameAttribute("BeaterCombo") <= ((getGameAttribute("GridX") * getGameAttribute("GridY")) / 2)))
{
            _BeaterRefillX = asNumber(0);
propertyChanged("_BeaterRefillX", _BeaterRefillX);
            for(index0 in 0...Std.int(getGameAttribute("GridX")))
{
                _BeaterRefillY = asNumber(0);
propertyChanged("_BeaterRefillY", _BeaterRefillY);
                for(index1 in 0...Std.int(getGameAttribute("GridY")))
{
                    if((!List2D.check_entry(Std.int(_BeaterRefillX), Std.int(_BeaterRefillY), getGameAttribute("BPS")) == false))
{

                        createRecycledActor(getActorType(58), (((_ScreenOffset + (_BeaterRefillX * _GridSpacing)) - _ScreenOffset) + ((_GridSpacing / 2) - 10)), (((_ScreenOffesetY + (_BeaterRefillY * _GridSpacing)) - _ScreenOffesetY) + (_GridSpacing * 2)), Script.FRONT);
                        List2D.set_entry(Std.int(_BeaterRefillX), Std.int(_BeaterRefillY), null, getGameAttribute("BPS"));
}

                    _BeaterRefillY += 1;
propertyChanged("_BeaterRefillY", _BeaterRefillY);
}

                _BeaterRefillX += 1;
propertyChanged("_BeaterRefillX", _BeaterRefillX);
}

}

        else
{

}

}

    
/* ========================= Custom Event ========================= */
public function _customEvent_Lose():Void
{
        createRecycledActor(getActorType(97), 0, (getSceneHeight() / 2), Script.FRONT);
        _Lose = true;
propertyChanged("_Lose", _Lose);
        _customEvent_EndingLevel();
}

    
/* ========================= Custom Event ========================= */
public function _customEvent_TapTime():Void
{
        Utils.clear(_Taplist);
        _Xincrementer = asNumber(0);
propertyChanged("_Xincrementer", _Xincrementer);
        for(index0 in 0...Std.int(getGameAttribute("GridX")))
{
            _YIncrementer = asNumber(0);
propertyChanged("_YIncrementer", _YIncrementer);
            for(index1 in 0...Std.int(getGameAttribute("GridY")))
{
                if((asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int(_YIncrementer), _GemType)) == _GemID))
{
                    _Taplist.insert(Std.int(0), asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int(_YIncrementer), _UID)));
                    _TappingList.insert(Std.int(0), asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int(_YIncrementer), _UID)));

}

                _YIncrementer += 1;
propertyChanged("_YIncrementer", _YIncrementer);
}

            _Xincrementer += 1;
propertyChanged("_Xincrementer", _Xincrementer);
}

        for(index0 in 0...Std.int(_Taplist.length))
{
            getActor(_Taplist[0]).setValue("beat gem", "_Tappable", true);
            _Taplist.splice(Std.int(0), 1);
}

}

    
/* ========================= Custom Event ========================= */
public function _customEvent_ResetTap():Void
{
        for(index0 in 0...Std.int(_TapPrekill.length))
{
            getActor(_TapPrekill[index0]).clearFilters();
            getActor(_TapPrekill[index0]).setValue("beat gem", "_tapping", false);
            getActor(_TapPrekill[index0]).setValue("beat gem", "_Tappable", false);
            setGameAttribute("TapMode", false);
            _TapOn = false;
propertyChanged("_TapOn", _TapOn);
            _TapmodeFlag = false;
propertyChanged("_TapmodeFlag", _TapmodeFlag);
            setGameAttribute("Tappings", false);
}

        setGameAttribute("intapmode", false);
        Utils.clear(_TapPrekill);
}

    
/* ========================= Custom Event ========================= */
public function _customEvent_TapMode():Void
{
        setGameAttribute("intapmode", true);
        _resetX = asNumber(0);
propertyChanged("_resetX", _resetX);
        for(index0 in 0...Std.int(getGameAttribute("GridX")))
{
            _resetY = asNumber(0);
propertyChanged("_resetY", _resetY);
            for(index1 in 0...Std.int(getGameAttribute("GridY")))
{
                List2D.set_entry(Std.int(_resetX), Std.int(_resetY), null, _PreTapKillList);
                List2D.set_entry(Std.int(_resetX), Std.int(_resetY), null, _CleanUpTapMode);
                _resetY += 1;
propertyChanged("_resetY", _resetY);
}

            _resetX += 1;
propertyChanged("_resetX", _resetX);
}


        _StartTimer = false;
propertyChanged("_StartTimer", _StartTimer);
        _TapOn = true;
propertyChanged("_TapOn", _TapOn);
        if(!(_StartTimer))
{
            _StartTimer = true;
propertyChanged("_StartTimer", _StartTimer);
}

        _ComboBrokenFlag = false;
propertyChanged("_ComboBrokenFlag", _ComboBrokenFlag);
        setGameAttribute("Tappings", true);
        _TapmodeFlag = false;
propertyChanged("_TapmodeFlag", _TapmodeFlag);
        _TapCombo = asNumber(0);
propertyChanged("_TapCombo", _TapCombo);
        _Xincrementer = asNumber(0);
propertyChanged("_Xincrementer", _Xincrementer);
        for(index0 in 0...Std.int(getGameAttribute("GridX")))
{
            _YIncrementer = asNumber(0);
propertyChanged("_YIncrementer", _YIncrementer);
            for(index1 in 0...Std.int(getGameAttribute("GridY")))
{
                if((asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int(_YIncrementer), _GemType)) == _GemID))
{
                    _TapPrekill.insert(Std.int(0), asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int(_YIncrementer), _UID)));
                    List2D.set_entry(Std.int(_Xincrementer), Std.int(_YIncrementer), asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int(_YIncrementer), _UID)), _CleanUpTapMode);
}

                _YIncrementer += 1;
propertyChanged("_YIncrementer", _YIncrementer);
}

            _Xincrementer += 1;
propertyChanged("_Xincrementer", _Xincrementer);
}

        trace("" + "Tapmode Enabled");
        trace("" + _TapPrekill.length);
        trace("" + _CleanUpTapMode);
        runPeriodically(1000 * 0.01, function(timeTask:TimedTask):Void {

                    for(index0 in 0...Std.int(asNumber(_TapPrekill.length)))
{
                        if(((getActor(_TapPrekill[index0]).isMousePressed() && getGameAttribute("OnBeat")) && !((Input.swipedUp || (Input.swipedDown || (Input.swipedLeft || Input.swipedRight))))))
{
                            _TapTime = asNumber(0);
propertyChanged("_TapTime", _TapTime);
                            trace("" + "Success!");
                            _TapKillList.insert(Std.int(0), _TapPrekill[Std.int(index0)]);
                            getActor(_TapPrekill[index0]).setFilter([createGrayscaleFilter()]);
                            _cleaner = asNumber(_TapPrekill[Std.int(index0)]);
propertyChanged("_cleaner", _cleaner);
                            if((!(_CanSpawn) || (!(_IsDestroying) || !(_CheckMatches))))
{
                                _Xincrementer = asNumber(0);
propertyChanged("_Xincrementer", _Xincrementer);
                                for(index1 in 0...Std.int(getGameAttribute("GridX")))
{
                                    _YIncrementer = asNumber(0);
propertyChanged("_YIncrementer", _YIncrementer);
                                    for(index2 in 0...Std.int(getGameAttribute("GridY")))
{
                                        if((_cleaner == asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int(_YIncrementer), _CleanUpTapMode))))
{
                                            getGameAttribute("KillList").insert(Std.int(0), asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int(_YIncrementer), _CleanUpTapMode)));
                                            List2D.set_entry(Std.int(_Xincrementer), Std.int(_YIncrementer), asNumber(List2D.get_entry(Std.int(_Xincrementer), Std.int(_YIncrementer), _CleanUpTapMode)), _PreTapKillList);
}

                                        _YIncrementer += 1;
propertyChanged("_YIncrementer", _YIncrementer);
}

                                    _Xincrementer += 1;
propertyChanged("_Xincrementer", _Xincrementer);
}

                                if(!(_StartTimer))
{
                                    _StartTimer = true;
propertyChanged("_StartTimer", _StartTimer);
}

                                _TapCombo += 1;
propertyChanged("_TapCombo", _TapCombo);
                                _NumberOfMatches += 1;
propertyChanged("_NumberOfMatches", _NumberOfMatches);
                                break;
}

}

                        else if(((getActor(_TapPrekill[index0]).isMousePressed() && !(getGameAttribute("OnBeat"))) && !((Input.swipedUp || (Input.swipedDown || (Input.swipedLeft || Input.swipedRight))))))
{
                            _ComboBrokenFlag = true;
propertyChanged("_ComboBrokenFlag", _ComboBrokenFlag);
                            break;
}

}

                    if(_ComboBrokenFlag)
{
                        trace("" + _PreTapKillList);
                        if(((_TapCombo >= 3) && (_TapCombo < _TapPrekill.length)))
{
                            trace("" + "Prekilling3");
                            _Xincrementer = asNumber(0);
propertyChanged("_Xincrementer", _Xincrementer);
                            for(index0 in 0...Std.int(getGameAttribute("GridX")))
{
                                _YIncrementer = asNumber(0);
propertyChanged("_YIncrementer", _YIncrementer);
                                for(index1 in 0...Std.int(getGameAttribute("GridY")))
{
                                    if((!(!List2D.check_entry(Std.int(_Xincrementer), Std.int(_YIncrementer), _PreTapKillList)) && !(!List2D.check_entry(Std.int(_Xincrementer), Std.int(_YIncrementer), _AlreadySpawned))))
{
                                        trace("" + "Loop at Pretap Kill List Not empty");
                                        List2D.set_entry(Std.int(_Xincrementer), Std.int(_YIncrementer), null, _UID);
                                        List2D.set_entry(Std.int(_Xincrementer), Std.int(_YIncrementer), null, _GemType);
                                        List2D.set_entry(Std.int(_Xincrementer), Std.int(_YIncrementer), null, _AlreadySpawned);
                                        List2D.set_entry(Std.int(_Xincrementer), Std.int(_YIncrementer), null, _SpecialListBomb);
                                        List2D.set_entry(Std.int(_Xincrementer), Std.int(_YIncrementer), 9, getGameAttribute("BPS"));
}


                                    _YIncrementer += 1;
propertyChanged("_YIncrementer", _YIncrementer);
}

                                _Xincrementer += 1;
propertyChanged("_Xincrementer", _Xincrementer);
}

                            trace("" + "Loop at Pretap Kill List must be empty");
                            runLater(1000 * 0.3, function(timeTask:TimedTask):Void {
                                        _customEvent_PreKill();
}, null);


                            Utils.clear(_TapKillList);
                            timeTask.repeats = false;
return;
}

                        else
{
                            for(index0 in 0...Std.int(_TapPrekill.length))
{
                                getActor(_TapPrekill[index0]).clearFilters();
}

                            Utils.clear(_TapKillList);

                            Utils.clear(getGameAttribute("KillList"));
                            _customEvent_ResetTap();
                            timeTask.repeats = false;
return;
}

}

                    if((_TapCombo >= _TapPrekill.length))
{
                        trace("" + "PrekillingFullCombo");
                        _Xincrementer = asNumber(0);
propertyChanged("_Xincrementer", _Xincrementer);
                        for(index0 in 0...Std.int(getGameAttribute("GridX")))
{
                            _YIncrementer = asNumber(0);
propertyChanged("_YIncrementer", _YIncrementer);
                            for(index1 in 0...Std.int(getGameAttribute("GridY")))
{

                                if((!(!List2D.check_entry(Std.int(_Xincrementer), Std.int(_YIncrementer), _PreTapKillList)) && !(!List2D.check_entry(Std.int(_Xincrementer), Std.int(_YIncrementer), _AlreadySpawned))))
{
                                    trace("" + "Loop at Pretap Kill List Not empty");
                                    List2D.set_entry(Std.int(_Xincrementer), Std.int(_YIncrementer), null, _UID);
                                    List2D.set_entry(Std.int(_Xincrementer), Std.int(_YIncrementer), null, _GemType);
                                    List2D.set_entry(Std.int(_Xincrementer), Std.int(_YIncrementer), null, _AlreadySpawned);
                                    List2D.set_entry(Std.int(_Xincrementer), Std.int(_YIncrementer), null, _SpecialListBomb);
                                    List2D.set_entry(Std.int(_Xincrementer), Std.int(_YIncrementer), 9, getGameAttribute("BPS"));
}

                                _YIncrementer += 1;
propertyChanged("_YIncrementer", _YIncrementer);
}

                            _Xincrementer += 1;
propertyChanged("_Xincrementer", _Xincrementer);
}

                        runLater(1000 * 0.3, function(timeTask:TimedTask):Void {
                                    _customEvent_PreKill();
}, null);

                        Utils.clear(_TapKillList);

                        timeTask.repeats = false;
return;
}

}, null);
}


 
 	public function new(dummy:Int, engine:Engine)
	{
		super(engine);
		nameMap.set("Xincrementer", "_Xincrementer");
_Xincrementer = 0.0;
nameMap.set("YIncrementer", "_YIncrementer");
_YIncrementer = 0.0;
nameMap.set("Grid Spacing", "_GridSpacing");
_GridSpacing = 0.0;
nameMap.set("UID", "_UID");
_UID = [];
nameMap.set("Gem_Type", "_GemType");
_GemType = [];
nameMap.set("TileList", "_TileList");
_TileList = [];
nameMap.set("AlreadySpawned?", "_AlreadySpawned");
_AlreadySpawned = [];
nameMap.set("Target", "_Target");
nameMap.set("Swapping?", "_Swapping");
_Swapping = false;
nameMap.set("Can Spawn?", "_CanSpawn");
_CanSpawn = false;
nameMap.set("Is Destroying?", "_IsDestroying");
_IsDestroying = false;
nameMap.set("Check Matches", "_CheckMatches");
_CheckMatches = false;
nameMap.set("Number Of Matches?", "_NumberOfMatches");
_NumberOfMatches = 0.0;
nameMap.set("Searcher", "_Searcher");
_Searcher = 0.0;
nameMap.set("KillList", "_KillList");
_KillList = [];
nameMap.set("DestroyListModifier", "_DestroyListModifier");
_DestroyListModifier = 0.0;
nameMap.set("GemTypeNumber", "_GemTypeNumber");
_GemTypeNumber = 0.0;
nameMap.set("SpawnTypeActor", "_SpawnTypeActor");
nameMap.set("SpawnType_ID", "_SpawnTypeID");
_SpawnTypeID = 0.0;
nameMap.set("XSearcher", "_XSearcher");
_XSearcher = 0.0;
nameMap.set("Spawn?", "_Spawn");
_Spawn = false;
nameMap.set("ActorReveal", "_ActorReveal");
_ActorReveal = 0.0;
nameMap.set("UIDCOPY", "_UIDCOPY");
_UIDCOPY = [];
nameMap.set("KillListMod", "_KillListMod");
_KillListMod = 0.0;
nameMap.set("ScreenOffset", "_ScreenOffset");
_ScreenOffset = 0.0;
nameMap.set("RefillX", "_RefillX");
_RefillX = 0.0;
nameMap.set("RefillY", "_RefillY");
_RefillY = 0.0;
nameMap.set("GemSound", "_GemSound");
nameMap.set("sda", "_sda");
nameMap.set("Score", "_Score");
_Score = 0.0;
nameMap.set("ScoreCounter", "_ScoreCounter");
_ScoreCounter = 0.0;
nameMap.set("Delayer", "_Delayer");
_Delayer = 0.0;
nameMap.set("DrawOrder", "_DrawOrder");
_DrawOrder = [];
nameMap.set("BeaterCombo", "_BeaterCombo");
_BeaterCombo = 0.0;
nameMap.set("ExtraSearcher", "_ExtraSearcher");
_ExtraSearcher = 0.0;
nameMap.set("BeaterSpawn", "_BeaterSpawn");
_BeaterSpawn = [];
nameMap.set("Direction", "_Direction");
_Direction = 0.0;
nameMap.set("IdleTime", "_IdleTime");
_IdleTime = 0.0;
nameMap.set("HintList", "_HintList");
_HintList = [];
nameMap.set("SpecialSpawn?", "_SpecialSpawn");
_SpecialSpawn = false;
nameMap.set("MatchesFound?", "_MatchesFound");
_MatchesFound = false;
nameMap.set("SpecialKill?", "_SpecialKill");
_SpecialKill = false;
nameMap.set("SpecialListBomb", "_SpecialListBomb");
_SpecialListBomb = [];
nameMap.set("BombX", "_BombX");
_BombX = 0.0;
nameMap.set("Create Bomb Piece?", "_CreateBombPiece");
_CreateBombPiece = false;
nameMap.set("DoubleCombo", "_DoubleCombo");
_DoubleCombo = 0.0;
nameMap.set("GemID", "_GemID");
_GemID = 0.0;
nameMap.set("Coins", "_Coins");
nameMap.set("BeaterRefillX", "_BeaterRefillX");
_BeaterRefillX = 0.0;
nameMap.set("BeaterRefillY", "_BeaterRefillY");
_BeaterRefillY = 0.0;
nameMap.set("MusicManager", "_MusicManager");
_MusicManager = false;
nameMap.set("BombY", "_BombY");
_BombY = 0.0;
nameMap.set("BombXX", "_BombXX");
_BombXX = 0.0;
nameMap.set("BombYY", "_BombYY");
_BombYY = 0.0;
nameMap.set("BombKill?", "_BombKill");
_BombKill = false;
nameMap.set("Lose?", "_Lose");
_Lose = false;
nameMap.set("ScreenOffesetY", "_ScreenOffesetY");
_ScreenOffesetY = 0.0;
nameMap.set("Combo", "_Combo");
_Combo = 0.0;
nameMap.set("ActorDeathPos", "_ActorDeathPos");
_ActorDeathPos = 0.0;
nameMap.set("Swing", "_Swing");
_Swing = 0.0;
nameMap.set("SwingCounter", "_SwingCounter");
_SwingCounter = 0.0;
nameMap.set("GameTempo", "_GameTempo");
_GameTempo = 0.0;
nameMap.set("Win?", "_Win");
_Win = false;
nameMap.set("Cursor", "_Cursor");
nameMap.set("DisplayText?", "_DisplayText");
_DisplayText = false;
nameMap.set("EndLevel?", "_EndLevel");
_EndLevel = false;
nameMap.set("combonumber", "_combonumber");
_combonumber = 0.0;
nameMap.set("PlayerInput?", "_PlayerInput");
_PlayerInput = false;
nameMap.set("ActorDeathPosY", "_ActorDeathPosY");
_ActorDeathPosY = 0.0;
nameMap.set("Multiplefinder", "_Multiplefinder");
_Multiplefinder = 0.0;
nameMap.set("AutoCombo", "_AutoCombo");
_AutoCombo = 0.0;
nameMap.set("TapmodeFlag", "_TapmodeFlag");
_TapmodeFlag = false;
nameMap.set("TappingList", "_TappingList");
_TappingList = [];
nameMap.set("TapTime", "_TapTime");
_TapTime = 0.0;
nameMap.set("TapPrekill", "_TapPrekill");
_TapPrekill = [];
nameMap.set("Ending", "_Ending");
_Ending = [];
nameMap.set("CreateWorm", "_CreateWorm");
_CreateWorm = false;
nameMap.set("GemSelector", "_GemSelector");
_GemSelector = 0.0;
nameMap.set("Taplist", "_Taplist");
_Taplist = [];
nameMap.set("TapOn", "_TapOn");
_TapOn = false;
nameMap.set("PreTapKillList", "_PreTapKillList");
_PreTapKillList = [];
nameMap.set("CleanUpTapMode", "_CleanUpTapMode");
_CleanUpTapMode = [];
nameMap.set("cleaner", "_cleaner");
_cleaner = 0.0;
nameMap.set("TapCombo", "_TapCombo");
_TapCombo = 0.0;
nameMap.set("TapKillList", "_TapKillList");
_TapKillList = [];
nameMap.set("StartTimer", "_StartTimer");
_StartTimer = false;
nameMap.set("ComboBrokenFlag", "_ComboBrokenFlag");
_ComboBrokenFlag = false;
nameMap.set("resetX", "_resetX");
_resetX = 0.0;
nameMap.set("resetY", "_resetY");
_resetY = 0.0;

	}
	
	override public function init()
	{
		    
/* ======================== When Creating ========================= */
        _TapOn = false;
propertyChanged("_TapOn", _TapOn);
        _TapmodeFlag = false;
propertyChanged("_TapmodeFlag", _TapmodeFlag);
        setGameAttribute("Tappings", false);
        _CreateWorm = false;
propertyChanged("_CreateWorm", _CreateWorm);
        _NumberOfMatches = asNumber(0);
propertyChanged("_NumberOfMatches", _NumberOfMatches);
        setGameAttribute("fixedGT", getGameAttribute("GameTempo"));
        setOffscreenTolerance(64, 64, 64, 64);
        _AutoCombo = asNumber(0);
propertyChanged("_AutoCombo", _AutoCombo);
        _PlayerInput = false;
propertyChanged("_PlayerInput", _PlayerInput);
        _DisplayText = false;
propertyChanged("_DisplayText", _DisplayText);
        Utils.clear(_DrawOrder);
        _Coins = getActorType(65);
propertyChanged("_Coins", _Coins);
        setGameAttribute("KillList", new Array<Dynamic>());
        setGameAttribute("HintList", new Array<Dynamic>());
        setGameAttribute("BPS", new Array<Dynamic>());
        _TapPrekill = new Array<Dynamic>();
propertyChanged("_TapPrekill", _TapPrekill);
        _SpecialListBomb = new Array<Dynamic>();
propertyChanged("_SpecialListBomb", _SpecialListBomb);
        _DrawOrder = new Array<Dynamic>();
propertyChanged("_DrawOrder", _DrawOrder);
        _KillList = new Array<Dynamic>();
propertyChanged("_KillList", _KillList);
        _TileList = new Array<Dynamic>();
propertyChanged("_TileList", _TileList);
        _UIDCOPY = new Array<Dynamic>();
propertyChanged("_UIDCOPY", _UIDCOPY);
        _AlreadySpawned = new Array<Dynamic>();
propertyChanged("_AlreadySpawned", _AlreadySpawned);
        _GemType = new Array<Dynamic>();
propertyChanged("_GemType", _GemType);
        _TileList = new Array<Dynamic>();
propertyChanged("_TileList", _TileList);
        _UID = new Array<Dynamic>();
propertyChanged("_UID", _UID);


        _ScreenOffset = asNumber((getSceneWidth() / 2));
propertyChanged("_ScreenOffset", _ScreenOffset);
        _ScreenOffesetY = asNumber((getSceneHeight() / 2));
propertyChanged("_ScreenOffesetY", _ScreenOffesetY);
        _CreateBombPiece = false;
propertyChanged("_CreateBombPiece", _CreateBombPiece);
        _Direction = asNumber(1);
propertyChanged("_Direction", _Direction);
        _DoubleCombo = asNumber(0);
propertyChanged("_DoubleCombo", _DoubleCombo);
        _GridSpacing = asNumber(getGameAttribute("Grid Spacing"));
propertyChanged("_GridSpacing", _GridSpacing);
        setGameAttribute("Grid Spacing", getGameAttribute("Grid Spacing"));
        _Xincrementer = asNumber(0);
propertyChanged("_Xincrementer", _Xincrementer);
        setGameAttribute("RegionCreated?", false);
        _YIncrementer = asNumber(0);
propertyChanged("_YIncrementer", _YIncrementer);

        _GameTempo = asNumber(getGameAttribute("GameTempo"));
propertyChanged("_GameTempo", _GameTempo);




        trace("" + "ListsCreated New");
        _CanSpawn = true;
propertyChanged("_CanSpawn", _CanSpawn);
        _IsDestroying = false;
propertyChanged("_IsDestroying", _IsDestroying);
        _CheckMatches = false;
propertyChanged("_CheckMatches", _CheckMatches);
        _CleanUpTapMode = List2D.new_2D(Std.int(getGameAttribute("GridY")), Std.int(getGameAttribute("GridX")));
propertyChanged("_CleanUpTapMode", _CleanUpTapMode);
        _PreTapKillList = List2D.new_2D(Std.int(getGameAttribute("GridY")), Std.int(getGameAttribute("GridX")));
propertyChanged("_PreTapKillList", _PreTapKillList);
        _SpecialListBomb = List2D.new_2D(Std.int(getGameAttribute("GridY")), Std.int(getGameAttribute("GridX")));
propertyChanged("_SpecialListBomb", _SpecialListBomb);
        setGameAttribute("BPS", List2D.new_2D(Std.int(getGameAttribute("GridY")), Std.int(getGameAttribute("GridX"))));
        _TileList = List2D.new_2D(Std.int(getGameAttribute("GridY")), Std.int(getGameAttribute("GridX")));
propertyChanged("_TileList", _TileList);
        _GemType = List2D.new_2D(Std.int(getGameAttribute("GridY")), Std.int(getGameAttribute("GridX")));
propertyChanged("_GemType", _GemType);
        _UID = List2D.new_2D(Std.int(getGameAttribute("GridY")), Std.int(getGameAttribute("GridX")));
propertyChanged("_UID", _UID);
        _AlreadySpawned = List2D.new_2D(Std.int(getGameAttribute("GridY")), Std.int(getGameAttribute("GridX")));
propertyChanged("_AlreadySpawned", _AlreadySpawned);
        _sda = getSound(56);
propertyChanged("_sda", _sda);
        _Xincrementer = asNumber(0);
propertyChanged("_Xincrementer", _Xincrementer);
        _YIncrementer = asNumber(0);
propertyChanged("_YIncrementer", _YIncrementer);
        _RefillX = asNumber(0);
propertyChanged("_RefillX", _RefillX);
        _RefillY = asNumber(0);
propertyChanged("_RefillY", _RefillY);
        _customEvent_SpawnStart();
        runLater(1000 * 5, function(timeTask:TimedTask):Void {
                    runPeriodically(1000 * 1, function(timeTask:TimedTask):Void {
                                _IdleTime += 1;
propertyChanged("_IdleTime", _IdleTime);
}, null);
}, null);
        runPeriodically(1000 * 1, function(timeTask:TimedTask):Void {
                    if((getGameAttribute("SoundManager") >= 1))
{
                        setGameAttribute("SoundManager", (getGameAttribute("SoundManager") - 1));
}

}, null);
    
/* ========================= When Drawing ========================= */
addWhenDrawingListener(null, function(g:G, x:Float, y:Float, list:Array<Dynamic>):Void {
if(wrapper.enabled){
        g.setFont(getFont(36));




        g.drawString("" + _ScoreCounter, (getScreenWidth() / 2), (3 / getSceneHeight()/getTileHeight()));
        g.drawString("" + (("" + "Moves") + ("" + getGameAttribute("Moves Counter"))), ((getGameAttribute("Grid Spacing") * 1) - 25), 64);
        g.drawString("" + (("" + "Black") + ("" + getGameAttribute("ColorMatch1"))), ((getGameAttribute("Grid Spacing") * 1) - 25), 22);
        g.drawString("" + (("" + "Red:") + ("" + getGameAttribute("ColorMatch2"))), ((getGameAttribute("Grid Spacing") * 2.2) - 25), 22);
        g.drawString("" + (("" + "Blue:") + ("" + getGameAttribute("ColorMatch3"))), ((getGameAttribute("Grid Spacing") * 3.3) - 25), 22);
        g.drawString("" + (("" + "Purple:") + ("" + getGameAttribute("ColorMatch4"))), ((getGameAttribute("Grid Spacing") * 1) - 25), 42);
        g.drawString("" + (("" + "Ruby:") + ("" + getGameAttribute("ColorMatch5"))), ((getGameAttribute("Grid Spacing") * 2.6) - 25), 42);
        g.drawString("" + (("" + "Yellow:") + ("" + getGameAttribute("ColorMatch6"))), ((getGameAttribute("Grid Spacing") * 4) - 25), 42);



        if(!((_ScoreCounter == _Score)))
{
            runPeriodically(1000 * 0.1, function(timeTask:TimedTask):Void {
                        if(!((_ScoreCounter == _Score)))
{
                            _ScoreCounter += 1;
propertyChanged("_ScoreCounter", _ScoreCounter);
}

                        else if((_ScoreCounter == _Score))
{
                            return;
}

}, null);
}

        if((_DisplayText == true))
{
            g.alpha = (100/100);
            g.drawString("" + (("" + "ScoreTarget:") + ("" + getGameAttribute("ScoreTarget"))), 32, 420);
            g.drawString("" + (("" + "MovesTarget:") + ("" + getGameAttribute("MovesTarget"))), 32, 440);
            g.drawString("" + (("" + "GoScore:") + ("" + ("" + getGameAttribute("ScoreInMoves")))), 32, 460);
            g.drawString("" + (("" + "GoMoves:") + ("" + ("" + getGameAttribute("ColorMatchInMoves")))), 32, 480);
}

        else if(!(_DisplayText))
{
            g.alpha = (0/100);
}

}
});
    
/* ======================== When Updating ========================= */
addWhenUpdatedListener(null, function(elapsedTime:Float, list:Array<Dynamic>):Void {
if(wrapper.enabled){
        setGameAttribute("DIRECTION", _Direction);
        if(isKeyPressed("Key s"))
{
            trace("" + _GemType);
            _customEvent_Win();
}

        if((getGameAttribute("TapMode") && _TapmodeFlag))
{
            if((!(_TapOn) && (!(_Win) || !(_Lose))))
{
                _customEvent_TapMode();
                trace("" + "Triggering Tapmode from always");
}

            else
{

}

}



        if(isKeyPressed("enter"))
{
            stopAllSounds();
            setValueForScene("corpes", "_NumberOnScreen", 0);
            setGameAttribute("Moves Counter", 0);
            setGameAttribute("ColorMatch1", 0);
            setGameAttribute("ColorMatch2", 0);
            setGameAttribute("ColorMatch3", 0);
            setGameAttribute("ColorMatch4", 0);
            setGameAttribute("ColorMatch5", 0);
            setGameAttribute("ColorMatch6", 0);
            Utils.clear(_AlreadySpawned);
            Utils.clear(_KillList);
            Utils.clear(_UID);
            Utils.clear(_GemType);
            Utils.clear(_DrawOrder);
            Utils.clear(_BeaterSpawn);
            Utils.clear(_HintList);
            Utils.clear(_TileList);
            Utils.clear(_UIDCOPY);
            Utils.clear(getGameAttribute("BPS"));
            Utils.clear(getGameAttribute("HintList"));
            Utils.clear(getGameAttribute("KillList"));
            Utils.clear(_SpecialListBomb);
            setGameAttribute("RegionCreated?", false);
            disableBehaviorForScene("Metronome");
            reloadCurrentScene(createFadeOut((1)),createFadeIn((1)));
}

        for(actorOfType in getActorsOfType(getActorType(2)))
{
if(actorOfType != null && !actorOfType.dead && !actorOfType.recycled){
            if(actorOfType.isMousePressed())
{





                stopAllSounds();
                setValueForScene("corpes", "_NumberOnScreen", 0);
                setGameAttribute("Moves Counter", 0);
                setGameAttribute("ColorMatch1", 0);
                setGameAttribute("ColorMatch2", 0);
                setGameAttribute("ColorMatch3", 0);
                setGameAttribute("ColorMatch4", 0);
                setGameAttribute("ColorMatch5", 0);
                setGameAttribute("ColorMatch6", 0);
                setGameAttribute("RegionCreated?", false);
                Utils.clear(_AlreadySpawned);
                Utils.clear(_KillList);
                Utils.clear(_UID);
                Utils.clear(_GemType);
                Utils.clear(_DrawOrder);
                Utils.clear(_BeaterSpawn);
                Utils.clear(_HintList);
                Utils.clear(_TileList);
                Utils.clear(_UIDCOPY);
                Utils.clear(getGameAttribute("BPS"));
                Utils.clear(getGameAttribute("HintList"));
                Utils.clear(getGameAttribute("KillList"));
                Utils.clear(_SpecialListBomb);
                _MusicManager = false;
propertyChanged("_MusicManager", _MusicManager);
                setGameAttribute("SoundManager", 0);
                disableBehaviorForScene("Metronome");
                switchScene(GameModel.get().scenes.get(3).getID(), createFadeOut((1)),createFadeIn((1)));

}

}
}

        if((isKeyPressed("action2") && !((getGameAttribute("Swapping?") == true))))
{
            _customEvent_Check();
}

        if((_BeaterCombo == 0))
{
            _BeaterCombo = asNumber(1);
propertyChanged("_BeaterCombo", _BeaterCombo);
}

        if((getGameAttribute("BeaterCombo") >= 5))
{
            setGameAttribute("BeaterCombo", 1);
}

        if((getGameAttribute("BeaterCombo") == 0))
{
            setGameAttribute("BeaterCombo", 1);
}


        if((_IdleTime >= 5))
{
            runPeriodically(1000 * (60 / _GameTempo), function(timeTask:TimedTask):Void {
                        if((getGameAttribute("GameTempo") > _GameTempo))
{
                            setGameAttribute("GameTempo", (getGameAttribute("GameTempo") - 1));
}

                        else
{
                            timeTask.repeats = false;
return;
}


}, null);
            _IdleTime = asNumber(0);
propertyChanged("_IdleTime", _IdleTime);
}

        if(((getGameAttribute("SoundManager") >= 5) && !(_MusicManager)))
{
            _MusicManager = true;
propertyChanged("_MusicManager", _MusicManager);
            _customEvent_MusicManager();
            trace("" + "triggeringMM");
}

        if((_Win || _Lose))
{
            _EndLevel = true;
propertyChanged("_EndLevel", _EndLevel);
            runLater(1000 * 3, function(timeTask:TimedTask):Void {
                        if(isMousePressed())
{
                            _Win = false;
propertyChanged("_Win", _Win);
                            _Lose = false;
propertyChanged("_Lose", _Lose);
                            setValueForScene("Metronome", "_TimeStart", 0);
                            setValueForScene("Metronome", "_CurrentTime", 0);
                            setValueForScene("Metronome", "_BeatCheck", 0);
                            setValueForScene("Metronome", "_TimeElapsed", 0);
                            




                            stopAllSounds();
                            setValueForScene("corpes", "_NumberOnScreen", 0);
                            setGameAttribute("Moves Counter", 0);
                            setGameAttribute("ColorMatch1", 0);
                            setGameAttribute("ColorMatch2", 0);
                            setGameAttribute("ColorMatch3", 0);
                            setGameAttribute("ColorMatch4", 0);
                            setGameAttribute("ColorMatch5", 0);
                            setGameAttribute("ColorMatch6", 0);
                            setGameAttribute("RegionCreated?", false);
                            Utils.clear(_AlreadySpawned);
                            Utils.clear(_KillList);
                            Utils.clear(_UID);
                            Utils.clear(_GemType);
                            Utils.clear(_DrawOrder);
                            Utils.clear(_BeaterSpawn);
                            Utils.clear(_HintList);
                            Utils.clear(_TileList);
                            Utils.clear(_UIDCOPY);
                            Utils.clear(getGameAttribute("BPS"));
                            Utils.clear(getGameAttribute("HintList"));
                            Utils.clear(getGameAttribute("KillList"));
                            Utils.clear(_SpecialListBomb);
                            _MusicManager = false;
propertyChanged("_MusicManager", _MusicManager);
                            _EndLevel = false;
propertyChanged("_EndLevel", _EndLevel);
                            setGameAttribute("SoundManager", 0);
                            disableBehaviorForScene("Metronome");
                            clearImage(captureScreenshot());
                            if(isMousePressed())
{
                                _Win = false;
propertyChanged("_Win", _Win);
                                _Lose = false;
propertyChanged("_Lose", _Lose);
                                setValueForScene("Metronome", "_TimeStart", 0);
                                setValueForScene("Metronome", "_CurrentTime", 0);
                                setValueForScene("Metronome", "_BeatCheck", 0);
                                setValueForScene("Metronome", "_TimeElapsed", 0);
                                




                                stopAllSounds();
                                setValueForScene("corpes", "_NumberOnScreen", 0);
                                setGameAttribute("Moves Counter", 0);
                                setGameAttribute("ColorMatch1", 0);
                                setGameAttribute("ColorMatch2", 0);
                                setGameAttribute("ColorMatch3", 0);
                                setGameAttribute("ColorMatch4", 0);
                                setGameAttribute("ColorMatch5", 0);
                                setGameAttribute("ColorMatch6", 0);
                                setGameAttribute("RegionCreated?", false);
                                Utils.clear(_AlreadySpawned);
                                Utils.clear(_KillList);
                                Utils.clear(_UID);
                                Utils.clear(_GemType);
                                Utils.clear(_DrawOrder);
                                Utils.clear(_BeaterSpawn);
                                Utils.clear(_HintList);
                                Utils.clear(_TileList);
                                Utils.clear(_UIDCOPY);
                                Utils.clear(getGameAttribute("BPS"));
                                Utils.clear(getGameAttribute("HintList"));
                                Utils.clear(getGameAttribute("KillList"));
                                Utils.clear(_SpecialListBomb);
                                _MusicManager = false;
propertyChanged("_MusicManager", _MusicManager);
                                setGameAttribute("SoundManager", 0);
                                disableBehaviorForScene("Metronome");
                                switchScene(GameModel.get().scenes.get(1).getID(), createFadeOut((1)),createFadeIn((1)));
}

                            switchScene(GameModel.get().scenes.get(1).getID(), createFadeOut((1)),createFadeIn((1)));
}

}, null);
}

        if(_Cursor.isMousePressed())
{
            if(!(_DisplayText))
{
                _DisplayText = true;
propertyChanged("_DisplayText", _DisplayText);
}

            else
{
                _DisplayText = false;
propertyChanged("_DisplayText", _DisplayText);
}

}

        if(((getGameAttribute("Moves Counter") >= 1) && (!(_CreateWorm) && _MusicManager)))
{
            _CreateWorm = true;
propertyChanged("_CreateWorm", _CreateWorm);
            _customEvent_WormHole();
}

}
});
    
/* ======================== Actor of Type ========================= */
addWhenTypeGroupKilledListener(getActorType(58), function(eventActor:Actor, list:Array<Dynamic>):Void {
if(wrapper.enabled){
        setGameAttribute("BeaterCombo", (getGameAttribute("BeaterCombo") - 1));
}
});
    
/* ======================== Actor of Type ========================= */
addWhenTypeGroupKilledListener(getActorType(105), function(eventActor:Actor, list:Array<Dynamic>):Void {
if(wrapper.enabled){
        if((eventActor.getValue("CombotxtLife", "_combonumber") == 1))
{
            createRecycledActor(getActorType(119), (getSceneWidth() / 2), 64, Script.FRONT);
            getLastCreatedActor().setValue("ComboShoutss", "_combonumber", 0);
}

        if((eventActor.getValue("CombotxtLife", "_combonumber") == 2))
{
            runLater(1000 * (60 / getGameAttribute("GameTempo")), function(timeTask:TimedTask):Void {
                        createRecycledActor(getActorType(119), (getSceneWidth() / 2), 64, Script.FRONT);
                        getLastCreatedActor().setValue("ComboShoutss", "_combonumber", 1);

}, null);
}

        if((eventActor.getValue("CombotxtLife", "_combonumber") == 3))
{
            runLater(1000 * ((60 / getGameAttribute("GameTempo")) * 2), function(timeTask:TimedTask):Void {
                        createRecycledActor(getActorType(119), (getSceneWidth() / 2), 64, Script.FRONT);
                        getLastCreatedActor().setValue("ComboShoutss", "_combonumber", 2);

}, null);
}

        if((eventActor.getValue("CombotxtLife", "_combonumber") == 4))
{
            runLater(1000 * ((60 / getGameAttribute("GameTempo")) * 3), function(timeTask:TimedTask):Void {
                        createRecycledActor(getActorType(119), (getSceneWidth() / 2), 64, Script.FRONT);
                        getLastCreatedActor().setValue("ComboShoutss", "_combonumber", 3);

}, null);
}

        if((eventActor.getValue("CombotxtLife", "_combonumber") >= 7))
{
            runLater(1000 * ((60 / getGameAttribute("GameTempo")) * 4), function(timeTask:TimedTask):Void {
                        createRecycledActor(getActorType(119), (getSceneWidth() / 2), 64, Script.FRONT);
                        getLastCreatedActor().setValue("ComboShoutss", "_combonumber", 3);
}, null);
}


}
});
    
/* ============================ Swipe ============================= */
addSwipeListener(function(list:Array<Dynamic>):Void {
if(wrapper.enabled && Input.swipedUp){
        setScrollSpeedForBackground(0, -1);
        _Direction = asNumber(1);
propertyChanged("_Direction", _Direction);
        setGameAttribute("DIRECTION", _Direction);
        return;
}
});
    
/* ============================ Swipe ============================= */
addSwipeListener(function(list:Array<Dynamic>):Void {
if(wrapper.enabled && Input.swipedDown){
        setScrollSpeedForBackground(0, 1);
        _Direction = asNumber(2);
propertyChanged("_Direction", _Direction);
        setGameAttribute("DIRECTION", _Direction);
        return;
}
});
    
/* ============================ Swipe ============================= */
addSwipeListener(function(list:Array<Dynamic>):Void {
if(wrapper.enabled && Input.swipedLeft){
        setScrollSpeedForBackground(-1, 0);
        _Direction = asNumber(3);
propertyChanged("_Direction", _Direction);
        setGameAttribute("DIRECTION", _Direction);
        return;
}
});
    
/* ============================ Swipe ============================= */
addSwipeListener(function(list:Array<Dynamic>):Void {
if(wrapper.enabled && Input.swipedRight){
        setScrollSpeedForBackground(1, 0);
        _Direction = asNumber(4);
propertyChanged("_Direction", _Direction);
        setGameAttribute("DIRECTION", _Direction);
        return;
}
});
    
/* =========================== Boolean ============================ */
addPropertyChangeListener("_StartTimer", null, function(property:Dynamic, list:Array<Dynamic>):Void {
if(wrapper.enabled && cast(property, Bool) == true){
        _TapTime = asNumber(0);
propertyChanged("_TapTime", _TapTime);
        _ComboBrokenFlag = false;
propertyChanged("_ComboBrokenFlag", _ComboBrokenFlag);
        runPeriodically(1000 * 0.1, function(timeTask:TimedTask):Void {
                    if((_TapTime >= 3))
{
                        _ComboBrokenFlag = true;
propertyChanged("_ComboBrokenFlag", _ComboBrokenFlag);
                        trace("" + "ComboBrokenTimeUp");
                        setGameAttribute("intapmode", false);
                        timeTask.repeats = false;
return;
}

                    if(_Swapping)
{
                        _ComboBrokenFlag = true;
propertyChanged("_ComboBrokenFlag", _ComboBrokenFlag);
                        setGameAttribute("intapmode", false);
                        trace("" + "ComboBrokenSwappingNow");
                        timeTask.repeats = false;
return;
}

                    _TapTime = asNumber((_TapTime + 0.1));
propertyChanged("_TapTime", _TapTime);
}, null);
}
});

	}	      	
	
	override public function forwardMessage(msg:String)
	{
		
	}
}