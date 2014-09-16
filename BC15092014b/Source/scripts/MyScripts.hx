package scripts;

import com.stencyl.behavior.Script;
import scripts.ActorEvents_0;
import scripts.ActorEvents_2;
import scripts.Design_3_3_SceneManager;
import scripts.Design_5_5_beatgem;
import scripts.Design_6_6_Metronome;
import scripts.Design_9_9_BeatLineManager;
import scripts.ActorEvents_14;
import scripts.ActorEvents_58;
import scripts.Design_21_21_Particles;
import scripts.Design_20_20;
import scripts.Design_23_23_corpes;
import scripts.ActorEvents_65;
import scripts.SceneEvents_1;
import scripts.Design_24_24_LevelManager;
import scripts.Design_27_27_MenuStar;
import scripts.ActorEvents_85;
import scripts.ActorEvents_97;
import scripts.ActorEvents_95;
import scripts.ActorEvents_101;
import scripts.SceneEvents_2;
import scripts.SceneEvents_3;
import scripts.ActorEvents_103;
import scripts.Design_32_32_CursorBounce;
import scripts.Design_33_33;
import scripts.Design_38_38_CombotxtLife;
import scripts.ActorEvents_119;
import scripts.Design_36_36_MainMenuMoveCursor;
import scripts.ActorEvents_105;
import scripts.Design_42_42_backgroundBounce;
import scripts.ActorEvents_125;
import scripts.Design_40_40;
import scripts.ActorEvents_121;
import scripts.ActorEvents_127;
import scripts.Design_47_47;
import scripts.Design_44_44_WormHole;
import scripts.Design_45_45;
import scripts.Design_49_49;
import scripts.ActorEvents_130;


//Force all classes to compile since they aren't statically used.
class MyScripts
{
	var s:Script;
	var a:MyAssets;
	
	#if(mobile && !air)
	var stencylPreloader:scripts.StencylPreloader;
	#end
}