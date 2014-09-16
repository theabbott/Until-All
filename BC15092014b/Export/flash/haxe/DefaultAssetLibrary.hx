package;


import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.MovieClip;
import flash.text.Font;
import flash.media.Sound;
import flash.net.URLRequest;
import flash.utils.ByteArray;
import haxe.Unserializer;
import openfl.Assets;

#if (flash || js)
import flash.display.Loader;
import flash.events.Event;
import flash.net.URLLoader;
#end

#if ios
import openfl.utils.SystemPath;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public static var className (default, null) = new Map <String, Dynamic> ();
	public static var path (default, null) = new Map <String, String> ();
	public static var type (default, null) = new Map <String, AssetType> ();
	
	
	public function new () {
		
		super ();
		
		#if flash
		
		className.set ("assets/graphics/1x/background-100-0.png", __ASSET__assets_graphics_1x_background_100_0_png);
		type.set ("assets/graphics/1x/background-100-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/background-129-0.png", __ASSET__assets_graphics_1x_background_129_0_png);
		type.set ("assets/graphics/1x/background-129-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/background-99-0.png", __ASSET__assets_graphics_1x_background_99_0_png);
		type.set ("assets/graphics/1x/background-99-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/font-36.fnt", __ASSET__assets_graphics_1x_font_36_fnt);
		type.set ("assets/graphics/1x/font-36.fnt", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/graphics/1x/font-36.png", __ASSET__assets_graphics_1x_font_36_png);
		type.set ("assets/graphics/1x/font-36.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/font-54.fnt", __ASSET__assets_graphics_1x_font_54_fnt);
		type.set ("assets/graphics/1x/font-54.fnt", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/graphics/1x/font-54.png", __ASSET__assets_graphics_1x_font_54_png);
		type.set ("assets/graphics/1x/font-54.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/font-55.fnt", __ASSET__assets_graphics_1x_font_55_fnt);
		type.set ("assets/graphics/1x/font-55.fnt", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/graphics/1x/font-55.png", __ASSET__assets_graphics_1x_font_55_png);
		type.set ("assets/graphics/1x/font-55.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-1-0.png", __ASSET__assets_graphics_1x_sprite_1_0_png);
		type.set ("assets/graphics/1x/sprite-1-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-1-1.png", __ASSET__assets_graphics_1x_sprite_1_1_png);
		type.set ("assets/graphics/1x/sprite-1-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-1-10.png", __ASSET__assets_graphics_1x_sprite_1_10_png);
		type.set ("assets/graphics/1x/sprite-1-10.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-1-11.png", __ASSET__assets_graphics_1x_sprite_1_11_png);
		type.set ("assets/graphics/1x/sprite-1-11.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-1-12.png", __ASSET__assets_graphics_1x_sprite_1_12_png);
		type.set ("assets/graphics/1x/sprite-1-12.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-1-13.png", __ASSET__assets_graphics_1x_sprite_1_13_png);
		type.set ("assets/graphics/1x/sprite-1-13.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-1-14.png", __ASSET__assets_graphics_1x_sprite_1_14_png);
		type.set ("assets/graphics/1x/sprite-1-14.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-1-15.png", __ASSET__assets_graphics_1x_sprite_1_15_png);
		type.set ("assets/graphics/1x/sprite-1-15.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-1-16.png", __ASSET__assets_graphics_1x_sprite_1_16_png);
		type.set ("assets/graphics/1x/sprite-1-16.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-1-17.png", __ASSET__assets_graphics_1x_sprite_1_17_png);
		type.set ("assets/graphics/1x/sprite-1-17.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-1-2.png", __ASSET__assets_graphics_1x_sprite_1_2_png);
		type.set ("assets/graphics/1x/sprite-1-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-1-3.png", __ASSET__assets_graphics_1x_sprite_1_3_png);
		type.set ("assets/graphics/1x/sprite-1-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-1-4.png", __ASSET__assets_graphics_1x_sprite_1_4_png);
		type.set ("assets/graphics/1x/sprite-1-4.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-1-5.png", __ASSET__assets_graphics_1x_sprite_1_5_png);
		type.set ("assets/graphics/1x/sprite-1-5.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-1-6.png", __ASSET__assets_graphics_1x_sprite_1_6_png);
		type.set ("assets/graphics/1x/sprite-1-6.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-1-7.png", __ASSET__assets_graphics_1x_sprite_1_7_png);
		type.set ("assets/graphics/1x/sprite-1-7.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-1-8.png", __ASSET__assets_graphics_1x_sprite_1_8_png);
		type.set ("assets/graphics/1x/sprite-1-8.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-1-9.png", __ASSET__assets_graphics_1x_sprite_1_9_png);
		type.set ("assets/graphics/1x/sprite-1-9.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-102-0.png", __ASSET__assets_graphics_1x_sprite_102_0_png);
		type.set ("assets/graphics/1x/sprite-102-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-104-0.png", __ASSET__assets_graphics_1x_sprite_104_0_png);
		type.set ("assets/graphics/1x/sprite-104-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-106-0.png", __ASSET__assets_graphics_1x_sprite_106_0_png);
		type.set ("assets/graphics/1x/sprite-106-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-106-1.png", __ASSET__assets_graphics_1x_sprite_106_1_png);
		type.set ("assets/graphics/1x/sprite-106-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-120-0.png", __ASSET__assets_graphics_1x_sprite_120_0_png);
		type.set ("assets/graphics/1x/sprite-120-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-122-0.png", __ASSET__assets_graphics_1x_sprite_122_0_png);
		type.set ("assets/graphics/1x/sprite-122-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-126-0.png", __ASSET__assets_graphics_1x_sprite_126_0_png);
		type.set ("assets/graphics/1x/sprite-126-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-128-0.png", __ASSET__assets_graphics_1x_sprite_128_0_png);
		type.set ("assets/graphics/1x/sprite-128-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-131-0.png", __ASSET__assets_graphics_1x_sprite_131_0_png);
		type.set ("assets/graphics/1x/sprite-131-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-15-0.png", __ASSET__assets_graphics_1x_sprite_15_0_png);
		type.set ("assets/graphics/1x/sprite-15-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-3-0.png", __ASSET__assets_graphics_1x_sprite_3_0_png);
		type.set ("assets/graphics/1x/sprite-3-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-59-0.png", __ASSET__assets_graphics_1x_sprite_59_0_png);
		type.set ("assets/graphics/1x/sprite-59-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-59-1.png", __ASSET__assets_graphics_1x_sprite_59_1_png);
		type.set ("assets/graphics/1x/sprite-59-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-59-2.png", __ASSET__assets_graphics_1x_sprite_59_2_png);
		type.set ("assets/graphics/1x/sprite-59-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-59-3.png", __ASSET__assets_graphics_1x_sprite_59_3_png);
		type.set ("assets/graphics/1x/sprite-59-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-59-4.png", __ASSET__assets_graphics_1x_sprite_59_4_png);
		type.set ("assets/graphics/1x/sprite-59-4.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-59-5.png", __ASSET__assets_graphics_1x_sprite_59_5_png);
		type.set ("assets/graphics/1x/sprite-59-5.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-66-0.png", __ASSET__assets_graphics_1x_sprite_66_0_png);
		type.set ("assets/graphics/1x/sprite-66-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-86-0.png", __ASSET__assets_graphics_1x_sprite_86_0_png);
		type.set ("assets/graphics/1x/sprite-86-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-96-0.png", __ASSET__assets_graphics_1x_sprite_96_0_png);
		type.set ("assets/graphics/1x/sprite-96-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/1x/sprite-98-0.png", __ASSET__assets_graphics_1x_sprite_98_0_png);
		type.set ("assets/graphics/1x/sprite-98-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/default-font.fnt", __ASSET__assets_graphics_default_font_fnt);
		type.set ("assets/graphics/default-font.fnt", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/graphics/default-font.png", __ASSET__assets_graphics_default_font_png);
		type.set ("assets/graphics/default-font.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/preloader-badge.png", __ASSET__assets_graphics_preloader_badge_png);
		type.set ("assets/graphics/preloader-badge.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/preloader-bg.png", __ASSET__assets_graphics_preloader_bg_png);
		type.set ("assets/graphics/preloader-bg.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/preloader-bg@1.5x.png", __ASSET__assets_graphics_preloader_bg_1_5x_png);
		type.set ("assets/graphics/preloader-bg@1.5x.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/preloader-bg@2x.png", __ASSET__assets_graphics_preloader_bg_2x_png);
		type.set ("assets/graphics/preloader-bg@2x.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/preloader-bg@4x.png", __ASSET__assets_graphics_preloader_bg_4x_png);
		type.set ("assets/graphics/preloader-bg@4x.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/music/sound-10.mp3", __ASSET__assets_music_sound_10_mp3);
		type.set ("assets/music/sound-10.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
		className.set ("assets/sfx/sound-11.mp3", __ASSET__assets_sfx_sound_11_mp3);
		type.set ("assets/sfx/sound-11.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-117.mp3", __ASSET__assets_sfx_sound_117_mp3);
		type.set ("assets/sfx/sound-117.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-118.mp3", __ASSET__assets_sfx_sound_118_mp3);
		type.set ("assets/sfx/sound-118.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-123.mp3", __ASSET__assets_sfx_sound_123_mp3);
		type.set ("assets/sfx/sound-123.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-124.mp3", __ASSET__assets_sfx_sound_124_mp3);
		type.set ("assets/sfx/sound-124.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-18.mp3", __ASSET__assets_sfx_sound_18_mp3);
		type.set ("assets/sfx/sound-18.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-19.mp3", __ASSET__assets_sfx_sound_19_mp3);
		type.set ("assets/sfx/sound-19.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-20.mp3", __ASSET__assets_sfx_sound_20_mp3);
		type.set ("assets/sfx/sound-20.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-21.mp3", __ASSET__assets_sfx_sound_21_mp3);
		type.set ("assets/sfx/sound-21.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-22.mp3", __ASSET__assets_sfx_sound_22_mp3);
		type.set ("assets/sfx/sound-22.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-23.mp3", __ASSET__assets_sfx_sound_23_mp3);
		type.set ("assets/sfx/sound-23.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-24.mp3", __ASSET__assets_sfx_sound_24_mp3);
		type.set ("assets/sfx/sound-24.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-25.mp3", __ASSET__assets_sfx_sound_25_mp3);
		type.set ("assets/sfx/sound-25.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-26.mp3", __ASSET__assets_sfx_sound_26_mp3);
		type.set ("assets/sfx/sound-26.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-27.mp3", __ASSET__assets_sfx_sound_27_mp3);
		type.set ("assets/sfx/sound-27.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-28.mp3", __ASSET__assets_sfx_sound_28_mp3);
		type.set ("assets/sfx/sound-28.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-29.mp3", __ASSET__assets_sfx_sound_29_mp3);
		type.set ("assets/sfx/sound-29.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-30.mp3", __ASSET__assets_sfx_sound_30_mp3);
		type.set ("assets/sfx/sound-30.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-31.mp3", __ASSET__assets_sfx_sound_31_mp3);
		type.set ("assets/sfx/sound-31.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-32.mp3", __ASSET__assets_sfx_sound_32_mp3);
		type.set ("assets/sfx/sound-32.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-5.mp3", __ASSET__assets_sfx_sound_5_mp3);
		type.set ("assets/sfx/sound-5.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-56.mp3", __ASSET__assets_sfx_sound_56_mp3);
		type.set ("assets/sfx/sound-56.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-57.mp3", __ASSET__assets_sfx_sound_57_mp3);
		type.set ("assets/sfx/sound-57.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-6.mp3", __ASSET__assets_sfx_sound_6_mp3);
		type.set ("assets/sfx/sound-6.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-60.mp3", __ASSET__assets_sfx_sound_60_mp3);
		type.set ("assets/sfx/sound-60.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-61.mp3", __ASSET__assets_sfx_sound_61_mp3);
		type.set ("assets/sfx/sound-61.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-62.mp3", __ASSET__assets_sfx_sound_62_mp3);
		type.set ("assets/sfx/sound-62.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-63.mp3", __ASSET__assets_sfx_sound_63_mp3);
		type.set ("assets/sfx/sound-63.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-67.mp3", __ASSET__assets_sfx_sound_67_mp3);
		type.set ("assets/sfx/sound-67.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-68.mp3", __ASSET__assets_sfx_sound_68_mp3);
		type.set ("assets/sfx/sound-68.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-69.mp3", __ASSET__assets_sfx_sound_69_mp3);
		type.set ("assets/sfx/sound-69.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-7.mp3", __ASSET__assets_sfx_sound_7_mp3);
		type.set ("assets/sfx/sound-7.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-70.mp3", __ASSET__assets_sfx_sound_70_mp3);
		type.set ("assets/sfx/sound-70.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-71.mp3", __ASSET__assets_sfx_sound_71_mp3);
		type.set ("assets/sfx/sound-71.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-72.mp3", __ASSET__assets_sfx_sound_72_mp3);
		type.set ("assets/sfx/sound-72.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-73.mp3", __ASSET__assets_sfx_sound_73_mp3);
		type.set ("assets/sfx/sound-73.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-74.mp3", __ASSET__assets_sfx_sound_74_mp3);
		type.set ("assets/sfx/sound-74.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-75.mp3", __ASSET__assets_sfx_sound_75_mp3);
		type.set ("assets/sfx/sound-75.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-76.mp3", __ASSET__assets_sfx_sound_76_mp3);
		type.set ("assets/sfx/sound-76.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-77.mp3", __ASSET__assets_sfx_sound_77_mp3);
		type.set ("assets/sfx/sound-77.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-78.mp3", __ASSET__assets_sfx_sound_78_mp3);
		type.set ("assets/sfx/sound-78.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-79.mp3", __ASSET__assets_sfx_sound_79_mp3);
		type.set ("assets/sfx/sound-79.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-8.mp3", __ASSET__assets_sfx_sound_8_mp3);
		type.set ("assets/sfx/sound-8.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-80.mp3", __ASSET__assets_sfx_sound_80_mp3);
		type.set ("assets/sfx/sound-80.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-81.mp3", __ASSET__assets_sfx_sound_81_mp3);
		type.set ("assets/sfx/sound-81.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-82.mp3", __ASSET__assets_sfx_sound_82_mp3);
		type.set ("assets/sfx/sound-82.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-83.mp3", __ASSET__assets_sfx_sound_83_mp3);
		type.set ("assets/sfx/sound-83.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-84.mp3", __ASSET__assets_sfx_sound_84_mp3);
		type.set ("assets/sfx/sound-84.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-88.mp3", __ASSET__assets_sfx_sound_88_mp3);
		type.set ("assets/sfx/sound-88.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-89.mp3", __ASSET__assets_sfx_sound_89_mp3);
		type.set ("assets/sfx/sound-89.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-9.mp3", __ASSET__assets_sfx_sound_9_mp3);
		type.set ("assets/sfx/sound-9.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-90.mp3", __ASSET__assets_sfx_sound_90_mp3);
		type.set ("assets/sfx/sound-90.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-91.mp3", __ASSET__assets_sfx_sound_91_mp3);
		type.set ("assets/sfx/sound-91.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-92.mp3", __ASSET__assets_sfx_sound_92_mp3);
		type.set ("assets/sfx/sound-92.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-93.mp3", __ASSET__assets_sfx_sound_93_mp3);
		type.set ("assets/sfx/sound-93.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-94.mp3", __ASSET__assets_sfx_sound_94_mp3);
		type.set ("assets/sfx/sound-94.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/data/behaviors.xml", __ASSET__assets_data_behaviors_xml);
		type.set ("assets/data/behaviors.xml", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/data/game.xml", __ASSET__assets_data_game_xml);
		type.set ("assets/data/game.xml", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/data/resources.xml", __ASSET__assets_data_resources_xml);
		type.set ("assets/data/resources.xml", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/data/scene-1.scn", __ASSET__assets_data_scene_1_scn);
		type.set ("assets/data/scene-1.scn", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/data/scene-1.xml", __ASSET__assets_data_scene_1_xml);
		type.set ("assets/data/scene-1.xml", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/data/scene-2.scn", __ASSET__assets_data_scene_2_scn);
		type.set ("assets/data/scene-2.scn", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/data/scene-2.xml", __ASSET__assets_data_scene_2_xml);
		type.set ("assets/data/scene-2.xml", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/data/scene-3.scn", __ASSET__assets_data_scene_3_scn);
		type.set ("assets/data/scene-3.scn", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/data/scene-3.xml", __ASSET__assets_data_scene_3_xml);
		type.set ("assets/data/scene-3.xml", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/data/scenes.xml", __ASSET__assets_data_scenes_xml);
		type.set ("assets/data/scenes.xml", Reflect.field (AssetType, "text".toUpperCase ()));
		
		
		#elseif html5
		
		path.set ("assets/graphics/1x/background-100-0.png", "assets/graphics/1x/background-100-0.png");
		type.set ("assets/graphics/1x/background-100-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/background-129-0.png", "assets/graphics/1x/background-129-0.png");
		type.set ("assets/graphics/1x/background-129-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/background-99-0.png", "assets/graphics/1x/background-99-0.png");
		type.set ("assets/graphics/1x/background-99-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/font-36.fnt", "assets/graphics/1x/font-36.fnt");
		type.set ("assets/graphics/1x/font-36.fnt", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/graphics/1x/font-36.png", "assets/graphics/1x/font-36.png");
		type.set ("assets/graphics/1x/font-36.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/font-54.fnt", "assets/graphics/1x/font-54.fnt");
		type.set ("assets/graphics/1x/font-54.fnt", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/graphics/1x/font-54.png", "assets/graphics/1x/font-54.png");
		type.set ("assets/graphics/1x/font-54.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/font-55.fnt", "assets/graphics/1x/font-55.fnt");
		type.set ("assets/graphics/1x/font-55.fnt", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/graphics/1x/font-55.png", "assets/graphics/1x/font-55.png");
		type.set ("assets/graphics/1x/font-55.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-0.png", "assets/graphics/1x/sprite-1-0.png");
		type.set ("assets/graphics/1x/sprite-1-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-1.png", "assets/graphics/1x/sprite-1-1.png");
		type.set ("assets/graphics/1x/sprite-1-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-10.png", "assets/graphics/1x/sprite-1-10.png");
		type.set ("assets/graphics/1x/sprite-1-10.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-11.png", "assets/graphics/1x/sprite-1-11.png");
		type.set ("assets/graphics/1x/sprite-1-11.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-12.png", "assets/graphics/1x/sprite-1-12.png");
		type.set ("assets/graphics/1x/sprite-1-12.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-13.png", "assets/graphics/1x/sprite-1-13.png");
		type.set ("assets/graphics/1x/sprite-1-13.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-14.png", "assets/graphics/1x/sprite-1-14.png");
		type.set ("assets/graphics/1x/sprite-1-14.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-15.png", "assets/graphics/1x/sprite-1-15.png");
		type.set ("assets/graphics/1x/sprite-1-15.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-16.png", "assets/graphics/1x/sprite-1-16.png");
		type.set ("assets/graphics/1x/sprite-1-16.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-17.png", "assets/graphics/1x/sprite-1-17.png");
		type.set ("assets/graphics/1x/sprite-1-17.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-2.png", "assets/graphics/1x/sprite-1-2.png");
		type.set ("assets/graphics/1x/sprite-1-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-3.png", "assets/graphics/1x/sprite-1-3.png");
		type.set ("assets/graphics/1x/sprite-1-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-4.png", "assets/graphics/1x/sprite-1-4.png");
		type.set ("assets/graphics/1x/sprite-1-4.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-5.png", "assets/graphics/1x/sprite-1-5.png");
		type.set ("assets/graphics/1x/sprite-1-5.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-6.png", "assets/graphics/1x/sprite-1-6.png");
		type.set ("assets/graphics/1x/sprite-1-6.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-7.png", "assets/graphics/1x/sprite-1-7.png");
		type.set ("assets/graphics/1x/sprite-1-7.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-8.png", "assets/graphics/1x/sprite-1-8.png");
		type.set ("assets/graphics/1x/sprite-1-8.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-9.png", "assets/graphics/1x/sprite-1-9.png");
		type.set ("assets/graphics/1x/sprite-1-9.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-102-0.png", "assets/graphics/1x/sprite-102-0.png");
		type.set ("assets/graphics/1x/sprite-102-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-104-0.png", "assets/graphics/1x/sprite-104-0.png");
		type.set ("assets/graphics/1x/sprite-104-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-106-0.png", "assets/graphics/1x/sprite-106-0.png");
		type.set ("assets/graphics/1x/sprite-106-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-106-1.png", "assets/graphics/1x/sprite-106-1.png");
		type.set ("assets/graphics/1x/sprite-106-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-120-0.png", "assets/graphics/1x/sprite-120-0.png");
		type.set ("assets/graphics/1x/sprite-120-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-122-0.png", "assets/graphics/1x/sprite-122-0.png");
		type.set ("assets/graphics/1x/sprite-122-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-126-0.png", "assets/graphics/1x/sprite-126-0.png");
		type.set ("assets/graphics/1x/sprite-126-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-128-0.png", "assets/graphics/1x/sprite-128-0.png");
		type.set ("assets/graphics/1x/sprite-128-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-131-0.png", "assets/graphics/1x/sprite-131-0.png");
		type.set ("assets/graphics/1x/sprite-131-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-15-0.png", "assets/graphics/1x/sprite-15-0.png");
		type.set ("assets/graphics/1x/sprite-15-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-3-0.png", "assets/graphics/1x/sprite-3-0.png");
		type.set ("assets/graphics/1x/sprite-3-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-59-0.png", "assets/graphics/1x/sprite-59-0.png");
		type.set ("assets/graphics/1x/sprite-59-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-59-1.png", "assets/graphics/1x/sprite-59-1.png");
		type.set ("assets/graphics/1x/sprite-59-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-59-2.png", "assets/graphics/1x/sprite-59-2.png");
		type.set ("assets/graphics/1x/sprite-59-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-59-3.png", "assets/graphics/1x/sprite-59-3.png");
		type.set ("assets/graphics/1x/sprite-59-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-59-4.png", "assets/graphics/1x/sprite-59-4.png");
		type.set ("assets/graphics/1x/sprite-59-4.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-59-5.png", "assets/graphics/1x/sprite-59-5.png");
		type.set ("assets/graphics/1x/sprite-59-5.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-66-0.png", "assets/graphics/1x/sprite-66-0.png");
		type.set ("assets/graphics/1x/sprite-66-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-86-0.png", "assets/graphics/1x/sprite-86-0.png");
		type.set ("assets/graphics/1x/sprite-86-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-96-0.png", "assets/graphics/1x/sprite-96-0.png");
		type.set ("assets/graphics/1x/sprite-96-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-98-0.png", "assets/graphics/1x/sprite-98-0.png");
		type.set ("assets/graphics/1x/sprite-98-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/default-font.fnt", "assets/graphics/default-font.fnt");
		type.set ("assets/graphics/default-font.fnt", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/graphics/default-font.png", "assets/graphics/default-font.png");
		type.set ("assets/graphics/default-font.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/preloader-badge.png", "assets/graphics/preloader-badge.png");
		type.set ("assets/graphics/preloader-badge.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/preloader-bg.png", "assets/graphics/preloader-bg.png");
		type.set ("assets/graphics/preloader-bg.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/preloader-bg@1.5x.png", "assets/graphics/preloader-bg@1.5x.png");
		type.set ("assets/graphics/preloader-bg@1.5x.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/preloader-bg@2x.png", "assets/graphics/preloader-bg@2x.png");
		type.set ("assets/graphics/preloader-bg@2x.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/preloader-bg@4x.png", "assets/graphics/preloader-bg@4x.png");
		type.set ("assets/graphics/preloader-bg@4x.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/music/sound-10.mp3", "assets/music/sound-10.mp3");
		type.set ("assets/music/sound-10.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
		path.set ("assets/sfx/sound-11.mp3", "assets/sfx/sound-11.mp3");
		type.set ("assets/sfx/sound-11.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-117.mp3", "assets/sfx/sound-117.mp3");
		type.set ("assets/sfx/sound-117.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-118.mp3", "assets/sfx/sound-118.mp3");
		type.set ("assets/sfx/sound-118.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-123.mp3", "assets/sfx/sound-123.mp3");
		type.set ("assets/sfx/sound-123.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-124.mp3", "assets/sfx/sound-124.mp3");
		type.set ("assets/sfx/sound-124.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-18.mp3", "assets/sfx/sound-18.mp3");
		type.set ("assets/sfx/sound-18.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-19.mp3", "assets/sfx/sound-19.mp3");
		type.set ("assets/sfx/sound-19.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-20.mp3", "assets/sfx/sound-20.mp3");
		type.set ("assets/sfx/sound-20.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-21.mp3", "assets/sfx/sound-21.mp3");
		type.set ("assets/sfx/sound-21.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-22.mp3", "assets/sfx/sound-22.mp3");
		type.set ("assets/sfx/sound-22.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-23.mp3", "assets/sfx/sound-23.mp3");
		type.set ("assets/sfx/sound-23.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-24.mp3", "assets/sfx/sound-24.mp3");
		type.set ("assets/sfx/sound-24.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-25.mp3", "assets/sfx/sound-25.mp3");
		type.set ("assets/sfx/sound-25.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-26.mp3", "assets/sfx/sound-26.mp3");
		type.set ("assets/sfx/sound-26.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-27.mp3", "assets/sfx/sound-27.mp3");
		type.set ("assets/sfx/sound-27.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-28.mp3", "assets/sfx/sound-28.mp3");
		type.set ("assets/sfx/sound-28.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-29.mp3", "assets/sfx/sound-29.mp3");
		type.set ("assets/sfx/sound-29.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-30.mp3", "assets/sfx/sound-30.mp3");
		type.set ("assets/sfx/sound-30.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-31.mp3", "assets/sfx/sound-31.mp3");
		type.set ("assets/sfx/sound-31.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-32.mp3", "assets/sfx/sound-32.mp3");
		type.set ("assets/sfx/sound-32.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-5.mp3", "assets/sfx/sound-5.mp3");
		type.set ("assets/sfx/sound-5.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-56.mp3", "assets/sfx/sound-56.mp3");
		type.set ("assets/sfx/sound-56.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-57.mp3", "assets/sfx/sound-57.mp3");
		type.set ("assets/sfx/sound-57.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-6.mp3", "assets/sfx/sound-6.mp3");
		type.set ("assets/sfx/sound-6.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-60.mp3", "assets/sfx/sound-60.mp3");
		type.set ("assets/sfx/sound-60.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-61.mp3", "assets/sfx/sound-61.mp3");
		type.set ("assets/sfx/sound-61.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-62.mp3", "assets/sfx/sound-62.mp3");
		type.set ("assets/sfx/sound-62.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-63.mp3", "assets/sfx/sound-63.mp3");
		type.set ("assets/sfx/sound-63.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-67.mp3", "assets/sfx/sound-67.mp3");
		type.set ("assets/sfx/sound-67.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-68.mp3", "assets/sfx/sound-68.mp3");
		type.set ("assets/sfx/sound-68.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-69.mp3", "assets/sfx/sound-69.mp3");
		type.set ("assets/sfx/sound-69.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-7.mp3", "assets/sfx/sound-7.mp3");
		type.set ("assets/sfx/sound-7.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-70.mp3", "assets/sfx/sound-70.mp3");
		type.set ("assets/sfx/sound-70.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-71.mp3", "assets/sfx/sound-71.mp3");
		type.set ("assets/sfx/sound-71.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-72.mp3", "assets/sfx/sound-72.mp3");
		type.set ("assets/sfx/sound-72.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-73.mp3", "assets/sfx/sound-73.mp3");
		type.set ("assets/sfx/sound-73.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-74.mp3", "assets/sfx/sound-74.mp3");
		type.set ("assets/sfx/sound-74.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-75.mp3", "assets/sfx/sound-75.mp3");
		type.set ("assets/sfx/sound-75.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-76.mp3", "assets/sfx/sound-76.mp3");
		type.set ("assets/sfx/sound-76.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-77.mp3", "assets/sfx/sound-77.mp3");
		type.set ("assets/sfx/sound-77.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-78.mp3", "assets/sfx/sound-78.mp3");
		type.set ("assets/sfx/sound-78.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-79.mp3", "assets/sfx/sound-79.mp3");
		type.set ("assets/sfx/sound-79.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-8.mp3", "assets/sfx/sound-8.mp3");
		type.set ("assets/sfx/sound-8.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-80.mp3", "assets/sfx/sound-80.mp3");
		type.set ("assets/sfx/sound-80.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-81.mp3", "assets/sfx/sound-81.mp3");
		type.set ("assets/sfx/sound-81.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-82.mp3", "assets/sfx/sound-82.mp3");
		type.set ("assets/sfx/sound-82.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-83.mp3", "assets/sfx/sound-83.mp3");
		type.set ("assets/sfx/sound-83.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-84.mp3", "assets/sfx/sound-84.mp3");
		type.set ("assets/sfx/sound-84.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-88.mp3", "assets/sfx/sound-88.mp3");
		type.set ("assets/sfx/sound-88.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-89.mp3", "assets/sfx/sound-89.mp3");
		type.set ("assets/sfx/sound-89.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-9.mp3", "assets/sfx/sound-9.mp3");
		type.set ("assets/sfx/sound-9.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-90.mp3", "assets/sfx/sound-90.mp3");
		type.set ("assets/sfx/sound-90.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-91.mp3", "assets/sfx/sound-91.mp3");
		type.set ("assets/sfx/sound-91.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-92.mp3", "assets/sfx/sound-92.mp3");
		type.set ("assets/sfx/sound-92.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-93.mp3", "assets/sfx/sound-93.mp3");
		type.set ("assets/sfx/sound-93.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-94.mp3", "assets/sfx/sound-94.mp3");
		type.set ("assets/sfx/sound-94.mp3", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/data/behaviors.xml", "assets/data/behaviors.xml");
		type.set ("assets/data/behaviors.xml", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/data/game.xml", "assets/data/game.xml");
		type.set ("assets/data/game.xml", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/data/resources.xml", "assets/data/resources.xml");
		type.set ("assets/data/resources.xml", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/data/scene-1.scn", "assets/data/scene-1.scn");
		type.set ("assets/data/scene-1.scn", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/data/scene-1.xml", "assets/data/scene-1.xml");
		type.set ("assets/data/scene-1.xml", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/data/scene-2.scn", "assets/data/scene-2.scn");
		type.set ("assets/data/scene-2.scn", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/data/scene-2.xml", "assets/data/scene-2.xml");
		type.set ("assets/data/scene-2.xml", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/data/scene-3.scn", "assets/data/scene-3.scn");
		type.set ("assets/data/scene-3.scn", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/data/scene-3.xml", "assets/data/scene-3.xml");
		type.set ("assets/data/scene-3.xml", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/data/scenes.xml", "assets/data/scenes.xml");
		type.set ("assets/data/scenes.xml", Reflect.field (AssetType, "text".toUpperCase ()));
		
		
		#else
		
		try {
			
			var bytes = ByteArray.readFile ("manifest");
			bytes.position = 0;
			
			if (bytes.length > 0) {
				
				var data = bytes.readUTFBytes (bytes.length);
				
				if (data != null && data.length > 0) {
					
					var manifest:Array<AssetData> = Unserializer.run (data);
					
					for (asset in manifest) {
						
						path.set (asset.id, asset.path);
						type.set (asset.id, asset.type);
						
					}
					
				}
				
			}
			
		} catch (e:Dynamic) {
			
			trace ("Warning: Could not load asset manifest");
			
		}
		
		#end
		
	}
	
	
	public override function exists (id:String, type:AssetType):Bool {
		
		var assetType = DefaultAssetLibrary.type.get (id);
		
		#if pixi
		
		if (assetType == IMAGE) {
			
			return true;
			
		} else {
			
			return false;
			
		}
		
		#end
		
		if (assetType != null) {
			
			if (assetType == type || type == SOUND && (assetType == MUSIC || assetType == SOUND)) {
				
				return true;
				
			}
			
			#if flash
			
			if ((assetType == BINARY || assetType == TEXT) && type == BINARY) {
				
				return true;
				
			} else if (path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (type == BINARY || type == null) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getBitmapData (id:String):BitmapData {
		
		#if pixi
		
		return BitmapData.fromImage (path.get (id));
		
		#elseif flash
		
		return cast (Type.createInstance (className.get (id), []), BitmapData);
		
		#elseif js
		
		return cast (ApplicationMain.loaders.get (path.get (id)).contentLoaderInfo.content, Bitmap).bitmapData;
		
		#else
		
		return BitmapData.load (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if pixi
		
		return null;
		
		#elseif flash
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);
		
		#elseif js
		
		var bytes:ByteArray = null;
		var data = ApplicationMain.urlLoaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}

		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if pixi
		
		return null;
		
		#elseif (flash || js)
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		return new Font (path.get (id));
		
		#end
		
	}
	
	
	public override function getPath (id:String):String {
		
		#if ios
		
		return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		#else
		
		return path.get (id);
		
		#end
		
	}
	
	
	public override function getSound (id:String):Sound {
		
		#if pixi
		
		return null;
		
		#elseif flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif js
		
		return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return new Sound (new URLRequest (path.get (id)), null, type.get (id) == MUSIC);
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:AssetType):Bool {
		
		#if flash
		
		if (type != AssetType.MUSIC && type != AssetType.SOUND) {
			
			return className.exists (id);
			
		}
		
		#end
		
		return true;
		
	}
	
	
	public override function loadBitmapData (id:String, handler:BitmapData -> Void):Void {
		
		#if pixi
		
		handler (getBitmapData (id));
		
		#elseif (flash || js)
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBitmapData (id));
			
		}
		
		#else
		
		handler (getBitmapData (id));
		
		#end
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		#if pixi
		
		handler (getBytes (id));
		
		#elseif (flash || js)
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				handler (bytes);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBytes (id));
			
		}
		
		#else
		
		handler (getBytes (id));
		
		#end
		
	}
	
	
	public override function loadFont (id:String, handler:Font -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getFont (id));
			
		//}
		
		#else
		
		handler (getFont (id));
		
		#end
		
	}
	
	
	public override function loadSound (id:String, handler:Sound -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getSound (id));
			
		//}
		
		#else
		
		handler (getSound (id));
		
		#end
		
	}
	
	
}


#if pixi
#elseif flash

class __ASSET__assets_graphics_1x_background_100_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_background_129_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_background_99_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_font_36_fnt extends flash.utils.ByteArray { }
class __ASSET__assets_graphics_1x_font_36_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_font_54_fnt extends flash.utils.ByteArray { }
class __ASSET__assets_graphics_1x_font_54_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_font_55_fnt extends flash.utils.ByteArray { }
class __ASSET__assets_graphics_1x_font_55_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_1_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_1_1_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_1_10_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_1_11_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_1_12_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_1_13_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_1_14_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_1_15_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_1_16_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_1_17_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_1_2_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_1_3_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_1_4_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_1_5_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_1_6_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_1_7_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_1_8_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_1_9_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_102_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_104_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_106_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_106_1_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_120_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_122_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_126_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_128_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_131_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_15_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_3_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_59_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_59_1_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_59_2_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_59_3_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_59_4_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_59_5_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_66_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_86_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_96_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_sprite_98_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_default_font_fnt extends flash.utils.ByteArray { }
class __ASSET__assets_graphics_default_font_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_preloader_badge_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_preloader_bg_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_preloader_bg_1_5x_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_preloader_bg_2x_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_preloader_bg_4x_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_music_sound_10_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_11_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_117_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_118_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_123_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_124_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_18_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_19_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_20_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_21_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_22_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_23_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_24_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_25_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_26_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_27_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_28_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_29_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_30_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_31_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_32_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_5_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_56_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_57_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_6_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_60_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_61_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_62_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_63_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_67_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_68_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_69_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_7_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_70_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_71_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_72_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_73_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_74_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_75_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_76_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_77_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_78_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_79_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_8_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_80_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_81_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_82_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_83_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_84_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_88_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_89_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_9_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_90_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_91_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_92_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_93_mp3 extends flash.media.Sound { }
class __ASSET__assets_sfx_sound_94_mp3 extends flash.media.Sound { }
class __ASSET__assets_data_behaviors_xml extends flash.utils.ByteArray { }
class __ASSET__assets_data_game_xml extends flash.utils.ByteArray { }
class __ASSET__assets_data_resources_xml extends flash.utils.ByteArray { }
class __ASSET__assets_data_scene_1_scn extends flash.utils.ByteArray { }
class __ASSET__assets_data_scene_1_xml extends flash.utils.ByteArray { }
class __ASSET__assets_data_scene_2_scn extends flash.utils.ByteArray { }
class __ASSET__assets_data_scene_2_xml extends flash.utils.ByteArray { }
class __ASSET__assets_data_scene_3_scn extends flash.utils.ByteArray { }
class __ASSET__assets_data_scene_3_xml extends flash.utils.ByteArray { }
class __ASSET__assets_data_scenes_xml extends flash.utils.ByteArray { }


#elseif html5





























































































































#end