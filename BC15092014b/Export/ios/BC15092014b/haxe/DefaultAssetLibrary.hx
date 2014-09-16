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
		className.set ("assets/graphics/2x/background-100-0.png", __ASSET__assets_graphics_2x_background_100_0_png);
		type.set ("assets/graphics/2x/background-100-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/background-129-0.png", __ASSET__assets_graphics_2x_background_129_0_png);
		type.set ("assets/graphics/2x/background-129-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/background-99-0.png", __ASSET__assets_graphics_2x_background_99_0_png);
		type.set ("assets/graphics/2x/background-99-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/font-36.fnt", __ASSET__assets_graphics_2x_font_36_fnt);
		type.set ("assets/graphics/2x/font-36.fnt", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/graphics/2x/font-36.png", __ASSET__assets_graphics_2x_font_36_png);
		type.set ("assets/graphics/2x/font-36.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/font-54.fnt", __ASSET__assets_graphics_2x_font_54_fnt);
		type.set ("assets/graphics/2x/font-54.fnt", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/graphics/2x/font-54.png", __ASSET__assets_graphics_2x_font_54_png);
		type.set ("assets/graphics/2x/font-54.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/font-55.fnt", __ASSET__assets_graphics_2x_font_55_fnt);
		type.set ("assets/graphics/2x/font-55.fnt", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/graphics/2x/font-55.png", __ASSET__assets_graphics_2x_font_55_png);
		type.set ("assets/graphics/2x/font-55.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-1-0.png", __ASSET__assets_graphics_2x_sprite_1_0_png);
		type.set ("assets/graphics/2x/sprite-1-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-1-1.png", __ASSET__assets_graphics_2x_sprite_1_1_png);
		type.set ("assets/graphics/2x/sprite-1-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-1-10.png", __ASSET__assets_graphics_2x_sprite_1_10_png);
		type.set ("assets/graphics/2x/sprite-1-10.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-1-11.png", __ASSET__assets_graphics_2x_sprite_1_11_png);
		type.set ("assets/graphics/2x/sprite-1-11.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-1-12.png", __ASSET__assets_graphics_2x_sprite_1_12_png);
		type.set ("assets/graphics/2x/sprite-1-12.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-1-13.png", __ASSET__assets_graphics_2x_sprite_1_13_png);
		type.set ("assets/graphics/2x/sprite-1-13.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-1-14.png", __ASSET__assets_graphics_2x_sprite_1_14_png);
		type.set ("assets/graphics/2x/sprite-1-14.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-1-15.png", __ASSET__assets_graphics_2x_sprite_1_15_png);
		type.set ("assets/graphics/2x/sprite-1-15.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-1-16.png", __ASSET__assets_graphics_2x_sprite_1_16_png);
		type.set ("assets/graphics/2x/sprite-1-16.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-1-17.png", __ASSET__assets_graphics_2x_sprite_1_17_png);
		type.set ("assets/graphics/2x/sprite-1-17.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-1-2.png", __ASSET__assets_graphics_2x_sprite_1_2_png);
		type.set ("assets/graphics/2x/sprite-1-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-1-3.png", __ASSET__assets_graphics_2x_sprite_1_3_png);
		type.set ("assets/graphics/2x/sprite-1-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-1-4.png", __ASSET__assets_graphics_2x_sprite_1_4_png);
		type.set ("assets/graphics/2x/sprite-1-4.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-1-5.png", __ASSET__assets_graphics_2x_sprite_1_5_png);
		type.set ("assets/graphics/2x/sprite-1-5.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-1-6.png", __ASSET__assets_graphics_2x_sprite_1_6_png);
		type.set ("assets/graphics/2x/sprite-1-6.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-1-7.png", __ASSET__assets_graphics_2x_sprite_1_7_png);
		type.set ("assets/graphics/2x/sprite-1-7.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-1-8.png", __ASSET__assets_graphics_2x_sprite_1_8_png);
		type.set ("assets/graphics/2x/sprite-1-8.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-1-9.png", __ASSET__assets_graphics_2x_sprite_1_9_png);
		type.set ("assets/graphics/2x/sprite-1-9.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-102-0.png", __ASSET__assets_graphics_2x_sprite_102_0_png);
		type.set ("assets/graphics/2x/sprite-102-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-104-0.png", __ASSET__assets_graphics_2x_sprite_104_0_png);
		type.set ("assets/graphics/2x/sprite-104-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-106-0.png", __ASSET__assets_graphics_2x_sprite_106_0_png);
		type.set ("assets/graphics/2x/sprite-106-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-106-1.png", __ASSET__assets_graphics_2x_sprite_106_1_png);
		type.set ("assets/graphics/2x/sprite-106-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-120-0.png", __ASSET__assets_graphics_2x_sprite_120_0_png);
		type.set ("assets/graphics/2x/sprite-120-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-122-0.png", __ASSET__assets_graphics_2x_sprite_122_0_png);
		type.set ("assets/graphics/2x/sprite-122-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-126-0.png", __ASSET__assets_graphics_2x_sprite_126_0_png);
		type.set ("assets/graphics/2x/sprite-126-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-128-0.png", __ASSET__assets_graphics_2x_sprite_128_0_png);
		type.set ("assets/graphics/2x/sprite-128-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-131-0.png", __ASSET__assets_graphics_2x_sprite_131_0_png);
		type.set ("assets/graphics/2x/sprite-131-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-15-0.png", __ASSET__assets_graphics_2x_sprite_15_0_png);
		type.set ("assets/graphics/2x/sprite-15-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-3-0.png", __ASSET__assets_graphics_2x_sprite_3_0_png);
		type.set ("assets/graphics/2x/sprite-3-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-59-0.png", __ASSET__assets_graphics_2x_sprite_59_0_png);
		type.set ("assets/graphics/2x/sprite-59-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-59-1.png", __ASSET__assets_graphics_2x_sprite_59_1_png);
		type.set ("assets/graphics/2x/sprite-59-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-59-2.png", __ASSET__assets_graphics_2x_sprite_59_2_png);
		type.set ("assets/graphics/2x/sprite-59-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-59-3.png", __ASSET__assets_graphics_2x_sprite_59_3_png);
		type.set ("assets/graphics/2x/sprite-59-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-59-4.png", __ASSET__assets_graphics_2x_sprite_59_4_png);
		type.set ("assets/graphics/2x/sprite-59-4.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-59-5.png", __ASSET__assets_graphics_2x_sprite_59_5_png);
		type.set ("assets/graphics/2x/sprite-59-5.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-66-0.png", __ASSET__assets_graphics_2x_sprite_66_0_png);
		type.set ("assets/graphics/2x/sprite-66-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-86-0.png", __ASSET__assets_graphics_2x_sprite_86_0_png);
		type.set ("assets/graphics/2x/sprite-86-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-96-0.png", __ASSET__assets_graphics_2x_sprite_96_0_png);
		type.set ("assets/graphics/2x/sprite-96-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/2x/sprite-98-0.png", __ASSET__assets_graphics_2x_sprite_98_0_png);
		type.set ("assets/graphics/2x/sprite-98-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/background-100-0.png", __ASSET__assets_graphics_4x_background_100_0_png);
		type.set ("assets/graphics/4x/background-100-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/background-129-0.png", __ASSET__assets_graphics_4x_background_129_0_png);
		type.set ("assets/graphics/4x/background-129-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/background-99-0.png", __ASSET__assets_graphics_4x_background_99_0_png);
		type.set ("assets/graphics/4x/background-99-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/font-36.fnt", __ASSET__assets_graphics_4x_font_36_fnt);
		type.set ("assets/graphics/4x/font-36.fnt", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/graphics/4x/font-36.png", __ASSET__assets_graphics_4x_font_36_png);
		type.set ("assets/graphics/4x/font-36.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/font-54.fnt", __ASSET__assets_graphics_4x_font_54_fnt);
		type.set ("assets/graphics/4x/font-54.fnt", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/graphics/4x/font-54.png", __ASSET__assets_graphics_4x_font_54_png);
		type.set ("assets/graphics/4x/font-54.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/font-55.fnt", __ASSET__assets_graphics_4x_font_55_fnt);
		type.set ("assets/graphics/4x/font-55.fnt", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/graphics/4x/font-55.png", __ASSET__assets_graphics_4x_font_55_png);
		type.set ("assets/graphics/4x/font-55.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-1-0.png", __ASSET__assets_graphics_4x_sprite_1_0_png);
		type.set ("assets/graphics/4x/sprite-1-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-1-1.png", __ASSET__assets_graphics_4x_sprite_1_1_png);
		type.set ("assets/graphics/4x/sprite-1-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-1-10.png", __ASSET__assets_graphics_4x_sprite_1_10_png);
		type.set ("assets/graphics/4x/sprite-1-10.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-1-11.png", __ASSET__assets_graphics_4x_sprite_1_11_png);
		type.set ("assets/graphics/4x/sprite-1-11.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-1-12.png", __ASSET__assets_graphics_4x_sprite_1_12_png);
		type.set ("assets/graphics/4x/sprite-1-12.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-1-13.png", __ASSET__assets_graphics_4x_sprite_1_13_png);
		type.set ("assets/graphics/4x/sprite-1-13.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-1-14.png", __ASSET__assets_graphics_4x_sprite_1_14_png);
		type.set ("assets/graphics/4x/sprite-1-14.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-1-15.png", __ASSET__assets_graphics_4x_sprite_1_15_png);
		type.set ("assets/graphics/4x/sprite-1-15.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-1-16.png", __ASSET__assets_graphics_4x_sprite_1_16_png);
		type.set ("assets/graphics/4x/sprite-1-16.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-1-17.png", __ASSET__assets_graphics_4x_sprite_1_17_png);
		type.set ("assets/graphics/4x/sprite-1-17.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-1-2.png", __ASSET__assets_graphics_4x_sprite_1_2_png);
		type.set ("assets/graphics/4x/sprite-1-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-1-3.png", __ASSET__assets_graphics_4x_sprite_1_3_png);
		type.set ("assets/graphics/4x/sprite-1-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-1-4.png", __ASSET__assets_graphics_4x_sprite_1_4_png);
		type.set ("assets/graphics/4x/sprite-1-4.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-1-5.png", __ASSET__assets_graphics_4x_sprite_1_5_png);
		type.set ("assets/graphics/4x/sprite-1-5.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-1-6.png", __ASSET__assets_graphics_4x_sprite_1_6_png);
		type.set ("assets/graphics/4x/sprite-1-6.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-1-7.png", __ASSET__assets_graphics_4x_sprite_1_7_png);
		type.set ("assets/graphics/4x/sprite-1-7.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-1-8.png", __ASSET__assets_graphics_4x_sprite_1_8_png);
		type.set ("assets/graphics/4x/sprite-1-8.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-1-9.png", __ASSET__assets_graphics_4x_sprite_1_9_png);
		type.set ("assets/graphics/4x/sprite-1-9.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-102-0.png", __ASSET__assets_graphics_4x_sprite_102_0_png);
		type.set ("assets/graphics/4x/sprite-102-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-104-0.png", __ASSET__assets_graphics_4x_sprite_104_0_png);
		type.set ("assets/graphics/4x/sprite-104-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-106-0.png", __ASSET__assets_graphics_4x_sprite_106_0_png);
		type.set ("assets/graphics/4x/sprite-106-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-106-1.png", __ASSET__assets_graphics_4x_sprite_106_1_png);
		type.set ("assets/graphics/4x/sprite-106-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-120-0.png", __ASSET__assets_graphics_4x_sprite_120_0_png);
		type.set ("assets/graphics/4x/sprite-120-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-122-0.png", __ASSET__assets_graphics_4x_sprite_122_0_png);
		type.set ("assets/graphics/4x/sprite-122-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-126-0.png", __ASSET__assets_graphics_4x_sprite_126_0_png);
		type.set ("assets/graphics/4x/sprite-126-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-128-0.png", __ASSET__assets_graphics_4x_sprite_128_0_png);
		type.set ("assets/graphics/4x/sprite-128-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-131-0.png", __ASSET__assets_graphics_4x_sprite_131_0_png);
		type.set ("assets/graphics/4x/sprite-131-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-15-0.png", __ASSET__assets_graphics_4x_sprite_15_0_png);
		type.set ("assets/graphics/4x/sprite-15-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-3-0.png", __ASSET__assets_graphics_4x_sprite_3_0_png);
		type.set ("assets/graphics/4x/sprite-3-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-59-0.png", __ASSET__assets_graphics_4x_sprite_59_0_png);
		type.set ("assets/graphics/4x/sprite-59-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-59-1.png", __ASSET__assets_graphics_4x_sprite_59_1_png);
		type.set ("assets/graphics/4x/sprite-59-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-59-2.png", __ASSET__assets_graphics_4x_sprite_59_2_png);
		type.set ("assets/graphics/4x/sprite-59-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-59-3.png", __ASSET__assets_graphics_4x_sprite_59_3_png);
		type.set ("assets/graphics/4x/sprite-59-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-59-4.png", __ASSET__assets_graphics_4x_sprite_59_4_png);
		type.set ("assets/graphics/4x/sprite-59-4.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-59-5.png", __ASSET__assets_graphics_4x_sprite_59_5_png);
		type.set ("assets/graphics/4x/sprite-59-5.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-66-0.png", __ASSET__assets_graphics_4x_sprite_66_0_png);
		type.set ("assets/graphics/4x/sprite-66-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-86-0.png", __ASSET__assets_graphics_4x_sprite_86_0_png);
		type.set ("assets/graphics/4x/sprite-86-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-96-0.png", __ASSET__assets_graphics_4x_sprite_96_0_png);
		type.set ("assets/graphics/4x/sprite-96-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/4x/sprite-98-0.png", __ASSET__assets_graphics_4x_sprite_98_0_png);
		type.set ("assets/graphics/4x/sprite-98-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/default-font.fnt", __ASSET__assets_graphics_default_font_fnt);
		type.set ("assets/graphics/default-font.fnt", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/graphics/default-font.png", __ASSET__assets_graphics_default_font_png);
		type.set ("assets/graphics/default-font.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/inner-joystick.png", __ASSET__assets_graphics_inner_joystick_png);
		type.set ("assets/graphics/inner-joystick.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/inner-joystick@1.5x.png", __ASSET__assets_graphics_inner_joystick_1_5x_png);
		type.set ("assets/graphics/inner-joystick@1.5x.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/inner-joystick@2x.png", __ASSET__assets_graphics_inner_joystick_2x_png);
		type.set ("assets/graphics/inner-joystick@2x.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/inner-joystick@4x.png", __ASSET__assets_graphics_inner_joystick_4x_png);
		type.set ("assets/graphics/inner-joystick@4x.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/outer-joystick.png", __ASSET__assets_graphics_outer_joystick_png);
		type.set ("assets/graphics/outer-joystick.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/outer-joystick@1.5x.png", __ASSET__assets_graphics_outer_joystick_1_5x_png);
		type.set ("assets/graphics/outer-joystick@1.5x.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/outer-joystick@2x.png", __ASSET__assets_graphics_outer_joystick_2x_png);
		type.set ("assets/graphics/outer-joystick@2x.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/graphics/outer-joystick@4x.png", __ASSET__assets_graphics_outer_joystick_4x_png);
		type.set ("assets/graphics/outer-joystick@4x.png", Reflect.field (AssetType, "image".toUpperCase ()));
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
		className.set ("assets/music/sound-10.ogg", __ASSET__assets_music_sound_10_ogg);
		type.set ("assets/music/sound-10.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
		className.set ("assets/sfx/sound-11.ogg", __ASSET__assets_sfx_sound_11_ogg);
		type.set ("assets/sfx/sound-11.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-117.ogg", __ASSET__assets_sfx_sound_117_ogg);
		type.set ("assets/sfx/sound-117.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-118.ogg", __ASSET__assets_sfx_sound_118_ogg);
		type.set ("assets/sfx/sound-118.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-123.ogg", __ASSET__assets_sfx_sound_123_ogg);
		type.set ("assets/sfx/sound-123.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-124.ogg", __ASSET__assets_sfx_sound_124_ogg);
		type.set ("assets/sfx/sound-124.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-18.ogg", __ASSET__assets_sfx_sound_18_ogg);
		type.set ("assets/sfx/sound-18.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-19.ogg", __ASSET__assets_sfx_sound_19_ogg);
		type.set ("assets/sfx/sound-19.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-20.ogg", __ASSET__assets_sfx_sound_20_ogg);
		type.set ("assets/sfx/sound-20.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-21.ogg", __ASSET__assets_sfx_sound_21_ogg);
		type.set ("assets/sfx/sound-21.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-22.ogg", __ASSET__assets_sfx_sound_22_ogg);
		type.set ("assets/sfx/sound-22.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-23.ogg", __ASSET__assets_sfx_sound_23_ogg);
		type.set ("assets/sfx/sound-23.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-24.ogg", __ASSET__assets_sfx_sound_24_ogg);
		type.set ("assets/sfx/sound-24.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-25.ogg", __ASSET__assets_sfx_sound_25_ogg);
		type.set ("assets/sfx/sound-25.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-26.ogg", __ASSET__assets_sfx_sound_26_ogg);
		type.set ("assets/sfx/sound-26.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-27.ogg", __ASSET__assets_sfx_sound_27_ogg);
		type.set ("assets/sfx/sound-27.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-28.ogg", __ASSET__assets_sfx_sound_28_ogg);
		type.set ("assets/sfx/sound-28.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-29.ogg", __ASSET__assets_sfx_sound_29_ogg);
		type.set ("assets/sfx/sound-29.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-30.ogg", __ASSET__assets_sfx_sound_30_ogg);
		type.set ("assets/sfx/sound-30.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-31.ogg", __ASSET__assets_sfx_sound_31_ogg);
		type.set ("assets/sfx/sound-31.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-32.ogg", __ASSET__assets_sfx_sound_32_ogg);
		type.set ("assets/sfx/sound-32.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-5.ogg", __ASSET__assets_sfx_sound_5_ogg);
		type.set ("assets/sfx/sound-5.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-56.ogg", __ASSET__assets_sfx_sound_56_ogg);
		type.set ("assets/sfx/sound-56.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-57.ogg", __ASSET__assets_sfx_sound_57_ogg);
		type.set ("assets/sfx/sound-57.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-6.ogg", __ASSET__assets_sfx_sound_6_ogg);
		type.set ("assets/sfx/sound-6.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-60.ogg", __ASSET__assets_sfx_sound_60_ogg);
		type.set ("assets/sfx/sound-60.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-61.ogg", __ASSET__assets_sfx_sound_61_ogg);
		type.set ("assets/sfx/sound-61.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-62.ogg", __ASSET__assets_sfx_sound_62_ogg);
		type.set ("assets/sfx/sound-62.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-63.ogg", __ASSET__assets_sfx_sound_63_ogg);
		type.set ("assets/sfx/sound-63.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-67.ogg", __ASSET__assets_sfx_sound_67_ogg);
		type.set ("assets/sfx/sound-67.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-68.ogg", __ASSET__assets_sfx_sound_68_ogg);
		type.set ("assets/sfx/sound-68.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-69.ogg", __ASSET__assets_sfx_sound_69_ogg);
		type.set ("assets/sfx/sound-69.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-7.ogg", __ASSET__assets_sfx_sound_7_ogg);
		type.set ("assets/sfx/sound-7.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-70.ogg", __ASSET__assets_sfx_sound_70_ogg);
		type.set ("assets/sfx/sound-70.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-71.ogg", __ASSET__assets_sfx_sound_71_ogg);
		type.set ("assets/sfx/sound-71.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-72.ogg", __ASSET__assets_sfx_sound_72_ogg);
		type.set ("assets/sfx/sound-72.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-73.ogg", __ASSET__assets_sfx_sound_73_ogg);
		type.set ("assets/sfx/sound-73.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-74.ogg", __ASSET__assets_sfx_sound_74_ogg);
		type.set ("assets/sfx/sound-74.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-75.ogg", __ASSET__assets_sfx_sound_75_ogg);
		type.set ("assets/sfx/sound-75.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-76.ogg", __ASSET__assets_sfx_sound_76_ogg);
		type.set ("assets/sfx/sound-76.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-77.ogg", __ASSET__assets_sfx_sound_77_ogg);
		type.set ("assets/sfx/sound-77.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-78.ogg", __ASSET__assets_sfx_sound_78_ogg);
		type.set ("assets/sfx/sound-78.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-79.ogg", __ASSET__assets_sfx_sound_79_ogg);
		type.set ("assets/sfx/sound-79.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-8.ogg", __ASSET__assets_sfx_sound_8_ogg);
		type.set ("assets/sfx/sound-8.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-80.ogg", __ASSET__assets_sfx_sound_80_ogg);
		type.set ("assets/sfx/sound-80.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-81.ogg", __ASSET__assets_sfx_sound_81_ogg);
		type.set ("assets/sfx/sound-81.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-82.ogg", __ASSET__assets_sfx_sound_82_ogg);
		type.set ("assets/sfx/sound-82.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-83.ogg", __ASSET__assets_sfx_sound_83_ogg);
		type.set ("assets/sfx/sound-83.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-84.ogg", __ASSET__assets_sfx_sound_84_ogg);
		type.set ("assets/sfx/sound-84.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-88.ogg", __ASSET__assets_sfx_sound_88_ogg);
		type.set ("assets/sfx/sound-88.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-89.ogg", __ASSET__assets_sfx_sound_89_ogg);
		type.set ("assets/sfx/sound-89.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-9.ogg", __ASSET__assets_sfx_sound_9_ogg);
		type.set ("assets/sfx/sound-9.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-90.ogg", __ASSET__assets_sfx_sound_90_ogg);
		type.set ("assets/sfx/sound-90.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-91.ogg", __ASSET__assets_sfx_sound_91_ogg);
		type.set ("assets/sfx/sound-91.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-92.ogg", __ASSET__assets_sfx_sound_92_ogg);
		type.set ("assets/sfx/sound-92.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-93.ogg", __ASSET__assets_sfx_sound_93_ogg);
		type.set ("assets/sfx/sound-93.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sfx/sound-94.ogg", __ASSET__assets_sfx_sound_94_ogg);
		type.set ("assets/sfx/sound-94.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
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
		className.set ("__manifest__", __ASSET__manifest);
		type.set ("__manifest__", Reflect.field (AssetType, "text".toUpperCase ()));
		
		
		#elseif html5
		
		path.set ("assets/graphics/1x/background-100-0.png", "assets_graphics_1x_background_100_0_png");
		type.set ("assets/graphics/1x/background-100-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/background-129-0.png", "assets_graphics_1x_background_129_0_png");
		type.set ("assets/graphics/1x/background-129-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/background-99-0.png", "assets_graphics_1x_background_99_0_png");
		type.set ("assets/graphics/1x/background-99-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/font-36.fnt", "assets_graphics_1x_font_36_fnt");
		type.set ("assets/graphics/1x/font-36.fnt", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/graphics/1x/font-36.png", "assets_graphics_1x_font_36_png");
		type.set ("assets/graphics/1x/font-36.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/font-54.fnt", "assets_graphics_1x_font_54_fnt");
		type.set ("assets/graphics/1x/font-54.fnt", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/graphics/1x/font-54.png", "assets_graphics_1x_font_54_png");
		type.set ("assets/graphics/1x/font-54.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/font-55.fnt", "assets_graphics_1x_font_55_fnt");
		type.set ("assets/graphics/1x/font-55.fnt", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/graphics/1x/font-55.png", "assets_graphics_1x_font_55_png");
		type.set ("assets/graphics/1x/font-55.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-0.png", "assets_graphics_1x_sprite_1_0_png");
		type.set ("assets/graphics/1x/sprite-1-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-1.png", "assets_graphics_1x_sprite_1_1_png");
		type.set ("assets/graphics/1x/sprite-1-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-10.png", "assets_graphics_1x_sprite_1_10_png");
		type.set ("assets/graphics/1x/sprite-1-10.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-11.png", "assets_graphics_1x_sprite_1_11_png");
		type.set ("assets/graphics/1x/sprite-1-11.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-12.png", "assets_graphics_1x_sprite_1_12_png");
		type.set ("assets/graphics/1x/sprite-1-12.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-13.png", "assets_graphics_1x_sprite_1_13_png");
		type.set ("assets/graphics/1x/sprite-1-13.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-14.png", "assets_graphics_1x_sprite_1_14_png");
		type.set ("assets/graphics/1x/sprite-1-14.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-15.png", "assets_graphics_1x_sprite_1_15_png");
		type.set ("assets/graphics/1x/sprite-1-15.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-16.png", "assets_graphics_1x_sprite_1_16_png");
		type.set ("assets/graphics/1x/sprite-1-16.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-17.png", "assets_graphics_1x_sprite_1_17_png");
		type.set ("assets/graphics/1x/sprite-1-17.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-2.png", "assets_graphics_1x_sprite_1_2_png");
		type.set ("assets/graphics/1x/sprite-1-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-3.png", "assets_graphics_1x_sprite_1_3_png");
		type.set ("assets/graphics/1x/sprite-1-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-4.png", "assets_graphics_1x_sprite_1_4_png");
		type.set ("assets/graphics/1x/sprite-1-4.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-5.png", "assets_graphics_1x_sprite_1_5_png");
		type.set ("assets/graphics/1x/sprite-1-5.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-6.png", "assets_graphics_1x_sprite_1_6_png");
		type.set ("assets/graphics/1x/sprite-1-6.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-7.png", "assets_graphics_1x_sprite_1_7_png");
		type.set ("assets/graphics/1x/sprite-1-7.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-8.png", "assets_graphics_1x_sprite_1_8_png");
		type.set ("assets/graphics/1x/sprite-1-8.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-1-9.png", "assets_graphics_1x_sprite_1_9_png");
		type.set ("assets/graphics/1x/sprite-1-9.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-102-0.png", "assets_graphics_1x_sprite_102_0_png");
		type.set ("assets/graphics/1x/sprite-102-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-104-0.png", "assets_graphics_1x_sprite_104_0_png");
		type.set ("assets/graphics/1x/sprite-104-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-106-0.png", "assets_graphics_1x_sprite_106_0_png");
		type.set ("assets/graphics/1x/sprite-106-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-106-1.png", "assets_graphics_1x_sprite_106_1_png");
		type.set ("assets/graphics/1x/sprite-106-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-120-0.png", "assets_graphics_1x_sprite_120_0_png");
		type.set ("assets/graphics/1x/sprite-120-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-122-0.png", "assets_graphics_1x_sprite_122_0_png");
		type.set ("assets/graphics/1x/sprite-122-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-126-0.png", "assets_graphics_1x_sprite_126_0_png");
		type.set ("assets/graphics/1x/sprite-126-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-128-0.png", "assets_graphics_1x_sprite_128_0_png");
		type.set ("assets/graphics/1x/sprite-128-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-131-0.png", "assets_graphics_1x_sprite_131_0_png");
		type.set ("assets/graphics/1x/sprite-131-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-15-0.png", "assets_graphics_1x_sprite_15_0_png");
		type.set ("assets/graphics/1x/sprite-15-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-3-0.png", "assets_graphics_1x_sprite_3_0_png");
		type.set ("assets/graphics/1x/sprite-3-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-59-0.png", "assets_graphics_1x_sprite_59_0_png");
		type.set ("assets/graphics/1x/sprite-59-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-59-1.png", "assets_graphics_1x_sprite_59_1_png");
		type.set ("assets/graphics/1x/sprite-59-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-59-2.png", "assets_graphics_1x_sprite_59_2_png");
		type.set ("assets/graphics/1x/sprite-59-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-59-3.png", "assets_graphics_1x_sprite_59_3_png");
		type.set ("assets/graphics/1x/sprite-59-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-59-4.png", "assets_graphics_1x_sprite_59_4_png");
		type.set ("assets/graphics/1x/sprite-59-4.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-59-5.png", "assets_graphics_1x_sprite_59_5_png");
		type.set ("assets/graphics/1x/sprite-59-5.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-66-0.png", "assets_graphics_1x_sprite_66_0_png");
		type.set ("assets/graphics/1x/sprite-66-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-86-0.png", "assets_graphics_1x_sprite_86_0_png");
		type.set ("assets/graphics/1x/sprite-86-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-96-0.png", "assets_graphics_1x_sprite_96_0_png");
		type.set ("assets/graphics/1x/sprite-96-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/1x/sprite-98-0.png", "assets_graphics_1x_sprite_98_0_png");
		type.set ("assets/graphics/1x/sprite-98-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/background-100-0.png", "assets_graphics_2x_background_100_0_png");
		type.set ("assets/graphics/2x/background-100-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/background-129-0.png", "assets_graphics_2x_background_129_0_png");
		type.set ("assets/graphics/2x/background-129-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/background-99-0.png", "assets_graphics_2x_background_99_0_png");
		type.set ("assets/graphics/2x/background-99-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/font-36.fnt", "assets_graphics_2x_font_36_fnt");
		type.set ("assets/graphics/2x/font-36.fnt", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/graphics/2x/font-36.png", "assets_graphics_2x_font_36_png");
		type.set ("assets/graphics/2x/font-36.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/font-54.fnt", "assets_graphics_2x_font_54_fnt");
		type.set ("assets/graphics/2x/font-54.fnt", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/graphics/2x/font-54.png", "assets_graphics_2x_font_54_png");
		type.set ("assets/graphics/2x/font-54.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/font-55.fnt", "assets_graphics_2x_font_55_fnt");
		type.set ("assets/graphics/2x/font-55.fnt", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/graphics/2x/font-55.png", "assets_graphics_2x_font_55_png");
		type.set ("assets/graphics/2x/font-55.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-1-0.png", "assets_graphics_2x_sprite_1_0_png");
		type.set ("assets/graphics/2x/sprite-1-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-1-1.png", "assets_graphics_2x_sprite_1_1_png");
		type.set ("assets/graphics/2x/sprite-1-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-1-10.png", "assets_graphics_2x_sprite_1_10_png");
		type.set ("assets/graphics/2x/sprite-1-10.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-1-11.png", "assets_graphics_2x_sprite_1_11_png");
		type.set ("assets/graphics/2x/sprite-1-11.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-1-12.png", "assets_graphics_2x_sprite_1_12_png");
		type.set ("assets/graphics/2x/sprite-1-12.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-1-13.png", "assets_graphics_2x_sprite_1_13_png");
		type.set ("assets/graphics/2x/sprite-1-13.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-1-14.png", "assets_graphics_2x_sprite_1_14_png");
		type.set ("assets/graphics/2x/sprite-1-14.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-1-15.png", "assets_graphics_2x_sprite_1_15_png");
		type.set ("assets/graphics/2x/sprite-1-15.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-1-16.png", "assets_graphics_2x_sprite_1_16_png");
		type.set ("assets/graphics/2x/sprite-1-16.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-1-17.png", "assets_graphics_2x_sprite_1_17_png");
		type.set ("assets/graphics/2x/sprite-1-17.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-1-2.png", "assets_graphics_2x_sprite_1_2_png");
		type.set ("assets/graphics/2x/sprite-1-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-1-3.png", "assets_graphics_2x_sprite_1_3_png");
		type.set ("assets/graphics/2x/sprite-1-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-1-4.png", "assets_graphics_2x_sprite_1_4_png");
		type.set ("assets/graphics/2x/sprite-1-4.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-1-5.png", "assets_graphics_2x_sprite_1_5_png");
		type.set ("assets/graphics/2x/sprite-1-5.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-1-6.png", "assets_graphics_2x_sprite_1_6_png");
		type.set ("assets/graphics/2x/sprite-1-6.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-1-7.png", "assets_graphics_2x_sprite_1_7_png");
		type.set ("assets/graphics/2x/sprite-1-7.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-1-8.png", "assets_graphics_2x_sprite_1_8_png");
		type.set ("assets/graphics/2x/sprite-1-8.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-1-9.png", "assets_graphics_2x_sprite_1_9_png");
		type.set ("assets/graphics/2x/sprite-1-9.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-102-0.png", "assets_graphics_2x_sprite_102_0_png");
		type.set ("assets/graphics/2x/sprite-102-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-104-0.png", "assets_graphics_2x_sprite_104_0_png");
		type.set ("assets/graphics/2x/sprite-104-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-106-0.png", "assets_graphics_2x_sprite_106_0_png");
		type.set ("assets/graphics/2x/sprite-106-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-106-1.png", "assets_graphics_2x_sprite_106_1_png");
		type.set ("assets/graphics/2x/sprite-106-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-120-0.png", "assets_graphics_2x_sprite_120_0_png");
		type.set ("assets/graphics/2x/sprite-120-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-122-0.png", "assets_graphics_2x_sprite_122_0_png");
		type.set ("assets/graphics/2x/sprite-122-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-126-0.png", "assets_graphics_2x_sprite_126_0_png");
		type.set ("assets/graphics/2x/sprite-126-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-128-0.png", "assets_graphics_2x_sprite_128_0_png");
		type.set ("assets/graphics/2x/sprite-128-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-131-0.png", "assets_graphics_2x_sprite_131_0_png");
		type.set ("assets/graphics/2x/sprite-131-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-15-0.png", "assets_graphics_2x_sprite_15_0_png");
		type.set ("assets/graphics/2x/sprite-15-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-3-0.png", "assets_graphics_2x_sprite_3_0_png");
		type.set ("assets/graphics/2x/sprite-3-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-59-0.png", "assets_graphics_2x_sprite_59_0_png");
		type.set ("assets/graphics/2x/sprite-59-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-59-1.png", "assets_graphics_2x_sprite_59_1_png");
		type.set ("assets/graphics/2x/sprite-59-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-59-2.png", "assets_graphics_2x_sprite_59_2_png");
		type.set ("assets/graphics/2x/sprite-59-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-59-3.png", "assets_graphics_2x_sprite_59_3_png");
		type.set ("assets/graphics/2x/sprite-59-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-59-4.png", "assets_graphics_2x_sprite_59_4_png");
		type.set ("assets/graphics/2x/sprite-59-4.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-59-5.png", "assets_graphics_2x_sprite_59_5_png");
		type.set ("assets/graphics/2x/sprite-59-5.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-66-0.png", "assets_graphics_2x_sprite_66_0_png");
		type.set ("assets/graphics/2x/sprite-66-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-86-0.png", "assets_graphics_2x_sprite_86_0_png");
		type.set ("assets/graphics/2x/sprite-86-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-96-0.png", "assets_graphics_2x_sprite_96_0_png");
		type.set ("assets/graphics/2x/sprite-96-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/2x/sprite-98-0.png", "assets_graphics_2x_sprite_98_0_png");
		type.set ("assets/graphics/2x/sprite-98-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/background-100-0.png", "assets_graphics_4x_background_100_0_png");
		type.set ("assets/graphics/4x/background-100-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/background-129-0.png", "assets_graphics_4x_background_129_0_png");
		type.set ("assets/graphics/4x/background-129-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/background-99-0.png", "assets_graphics_4x_background_99_0_png");
		type.set ("assets/graphics/4x/background-99-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/font-36.fnt", "assets_graphics_4x_font_36_fnt");
		type.set ("assets/graphics/4x/font-36.fnt", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/graphics/4x/font-36.png", "assets_graphics_4x_font_36_png");
		type.set ("assets/graphics/4x/font-36.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/font-54.fnt", "assets_graphics_4x_font_54_fnt");
		type.set ("assets/graphics/4x/font-54.fnt", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/graphics/4x/font-54.png", "assets_graphics_4x_font_54_png");
		type.set ("assets/graphics/4x/font-54.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/font-55.fnt", "assets_graphics_4x_font_55_fnt");
		type.set ("assets/graphics/4x/font-55.fnt", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/graphics/4x/font-55.png", "assets_graphics_4x_font_55_png");
		type.set ("assets/graphics/4x/font-55.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-1-0.png", "assets_graphics_4x_sprite_1_0_png");
		type.set ("assets/graphics/4x/sprite-1-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-1-1.png", "assets_graphics_4x_sprite_1_1_png");
		type.set ("assets/graphics/4x/sprite-1-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-1-10.png", "assets_graphics_4x_sprite_1_10_png");
		type.set ("assets/graphics/4x/sprite-1-10.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-1-11.png", "assets_graphics_4x_sprite_1_11_png");
		type.set ("assets/graphics/4x/sprite-1-11.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-1-12.png", "assets_graphics_4x_sprite_1_12_png");
		type.set ("assets/graphics/4x/sprite-1-12.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-1-13.png", "assets_graphics_4x_sprite_1_13_png");
		type.set ("assets/graphics/4x/sprite-1-13.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-1-14.png", "assets_graphics_4x_sprite_1_14_png");
		type.set ("assets/graphics/4x/sprite-1-14.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-1-15.png", "assets_graphics_4x_sprite_1_15_png");
		type.set ("assets/graphics/4x/sprite-1-15.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-1-16.png", "assets_graphics_4x_sprite_1_16_png");
		type.set ("assets/graphics/4x/sprite-1-16.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-1-17.png", "assets_graphics_4x_sprite_1_17_png");
		type.set ("assets/graphics/4x/sprite-1-17.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-1-2.png", "assets_graphics_4x_sprite_1_2_png");
		type.set ("assets/graphics/4x/sprite-1-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-1-3.png", "assets_graphics_4x_sprite_1_3_png");
		type.set ("assets/graphics/4x/sprite-1-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-1-4.png", "assets_graphics_4x_sprite_1_4_png");
		type.set ("assets/graphics/4x/sprite-1-4.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-1-5.png", "assets_graphics_4x_sprite_1_5_png");
		type.set ("assets/graphics/4x/sprite-1-5.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-1-6.png", "assets_graphics_4x_sprite_1_6_png");
		type.set ("assets/graphics/4x/sprite-1-6.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-1-7.png", "assets_graphics_4x_sprite_1_7_png");
		type.set ("assets/graphics/4x/sprite-1-7.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-1-8.png", "assets_graphics_4x_sprite_1_8_png");
		type.set ("assets/graphics/4x/sprite-1-8.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-1-9.png", "assets_graphics_4x_sprite_1_9_png");
		type.set ("assets/graphics/4x/sprite-1-9.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-102-0.png", "assets_graphics_4x_sprite_102_0_png");
		type.set ("assets/graphics/4x/sprite-102-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-104-0.png", "assets_graphics_4x_sprite_104_0_png");
		type.set ("assets/graphics/4x/sprite-104-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-106-0.png", "assets_graphics_4x_sprite_106_0_png");
		type.set ("assets/graphics/4x/sprite-106-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-106-1.png", "assets_graphics_4x_sprite_106_1_png");
		type.set ("assets/graphics/4x/sprite-106-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-120-0.png", "assets_graphics_4x_sprite_120_0_png");
		type.set ("assets/graphics/4x/sprite-120-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-122-0.png", "assets_graphics_4x_sprite_122_0_png");
		type.set ("assets/graphics/4x/sprite-122-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-126-0.png", "assets_graphics_4x_sprite_126_0_png");
		type.set ("assets/graphics/4x/sprite-126-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-128-0.png", "assets_graphics_4x_sprite_128_0_png");
		type.set ("assets/graphics/4x/sprite-128-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-131-0.png", "assets_graphics_4x_sprite_131_0_png");
		type.set ("assets/graphics/4x/sprite-131-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-15-0.png", "assets_graphics_4x_sprite_15_0_png");
		type.set ("assets/graphics/4x/sprite-15-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-3-0.png", "assets_graphics_4x_sprite_3_0_png");
		type.set ("assets/graphics/4x/sprite-3-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-59-0.png", "assets_graphics_4x_sprite_59_0_png");
		type.set ("assets/graphics/4x/sprite-59-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-59-1.png", "assets_graphics_4x_sprite_59_1_png");
		type.set ("assets/graphics/4x/sprite-59-1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-59-2.png", "assets_graphics_4x_sprite_59_2_png");
		type.set ("assets/graphics/4x/sprite-59-2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-59-3.png", "assets_graphics_4x_sprite_59_3_png");
		type.set ("assets/graphics/4x/sprite-59-3.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-59-4.png", "assets_graphics_4x_sprite_59_4_png");
		type.set ("assets/graphics/4x/sprite-59-4.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-59-5.png", "assets_graphics_4x_sprite_59_5_png");
		type.set ("assets/graphics/4x/sprite-59-5.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-66-0.png", "assets_graphics_4x_sprite_66_0_png");
		type.set ("assets/graphics/4x/sprite-66-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-86-0.png", "assets_graphics_4x_sprite_86_0_png");
		type.set ("assets/graphics/4x/sprite-86-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-96-0.png", "assets_graphics_4x_sprite_96_0_png");
		type.set ("assets/graphics/4x/sprite-96-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/4x/sprite-98-0.png", "assets_graphics_4x_sprite_98_0_png");
		type.set ("assets/graphics/4x/sprite-98-0.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/default-font.fnt", "assets_graphics_default_font_fnt");
		type.set ("assets/graphics/default-font.fnt", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/graphics/default-font.png", "assets_graphics_default_font_png");
		type.set ("assets/graphics/default-font.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/inner-joystick.png", "assets_graphics_inner_joystick_png");
		type.set ("assets/graphics/inner-joystick.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/inner-joystick@1.5x.png", "assets_graphics_inner_joystick_1_5x_png");
		type.set ("assets/graphics/inner-joystick@1.5x.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/inner-joystick@2x.png", "assets_graphics_inner_joystick_2x_png");
		type.set ("assets/graphics/inner-joystick@2x.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/inner-joystick@4x.png", "assets_graphics_inner_joystick_4x_png");
		type.set ("assets/graphics/inner-joystick@4x.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/outer-joystick.png", "assets_graphics_outer_joystick_png");
		type.set ("assets/graphics/outer-joystick.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/outer-joystick@1.5x.png", "assets_graphics_outer_joystick_1_5x_png");
		type.set ("assets/graphics/outer-joystick@1.5x.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/outer-joystick@2x.png", "assets_graphics_outer_joystick_2x_png");
		type.set ("assets/graphics/outer-joystick@2x.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/outer-joystick@4x.png", "assets_graphics_outer_joystick_4x_png");
		type.set ("assets/graphics/outer-joystick@4x.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/preloader-badge.png", "assets_graphics_preloader_badge_png");
		type.set ("assets/graphics/preloader-badge.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/preloader-bg.png", "assets_graphics_preloader_bg_png");
		type.set ("assets/graphics/preloader-bg.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/preloader-bg@1.5x.png", "assets_graphics_preloader_bg_1_5x_png");
		type.set ("assets/graphics/preloader-bg@1.5x.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/preloader-bg@2x.png", "assets_graphics_preloader_bg_2x_png");
		type.set ("assets/graphics/preloader-bg@2x.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/graphics/preloader-bg@4x.png", "assets_graphics_preloader_bg_4x_png");
		type.set ("assets/graphics/preloader-bg@4x.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/music/sound-10.ogg", "assets_music_sound_10_ogg");
		type.set ("assets/music/sound-10.ogg", Reflect.field (AssetType, "music".toUpperCase ()));
		path.set ("assets/sfx/sound-11.ogg", "assets_sfx_sound_11_ogg");
		type.set ("assets/sfx/sound-11.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-117.ogg", "assets_sfx_sound_117_ogg");
		type.set ("assets/sfx/sound-117.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-118.ogg", "assets_sfx_sound_118_ogg");
		type.set ("assets/sfx/sound-118.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-123.ogg", "assets_sfx_sound_123_ogg");
		type.set ("assets/sfx/sound-123.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-124.ogg", "assets_sfx_sound_124_ogg");
		type.set ("assets/sfx/sound-124.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-18.ogg", "assets_sfx_sound_18_ogg");
		type.set ("assets/sfx/sound-18.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-19.ogg", "assets_sfx_sound_19_ogg");
		type.set ("assets/sfx/sound-19.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-20.ogg", "assets_sfx_sound_20_ogg");
		type.set ("assets/sfx/sound-20.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-21.ogg", "assets_sfx_sound_21_ogg");
		type.set ("assets/sfx/sound-21.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-22.ogg", "assets_sfx_sound_22_ogg");
		type.set ("assets/sfx/sound-22.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-23.ogg", "assets_sfx_sound_23_ogg");
		type.set ("assets/sfx/sound-23.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-24.ogg", "assets_sfx_sound_24_ogg");
		type.set ("assets/sfx/sound-24.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-25.ogg", "assets_sfx_sound_25_ogg");
		type.set ("assets/sfx/sound-25.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-26.ogg", "assets_sfx_sound_26_ogg");
		type.set ("assets/sfx/sound-26.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-27.ogg", "assets_sfx_sound_27_ogg");
		type.set ("assets/sfx/sound-27.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-28.ogg", "assets_sfx_sound_28_ogg");
		type.set ("assets/sfx/sound-28.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-29.ogg", "assets_sfx_sound_29_ogg");
		type.set ("assets/sfx/sound-29.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-30.ogg", "assets_sfx_sound_30_ogg");
		type.set ("assets/sfx/sound-30.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-31.ogg", "assets_sfx_sound_31_ogg");
		type.set ("assets/sfx/sound-31.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-32.ogg", "assets_sfx_sound_32_ogg");
		type.set ("assets/sfx/sound-32.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-5.ogg", "assets_sfx_sound_5_ogg");
		type.set ("assets/sfx/sound-5.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-56.ogg", "assets_sfx_sound_56_ogg");
		type.set ("assets/sfx/sound-56.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-57.ogg", "assets_sfx_sound_57_ogg");
		type.set ("assets/sfx/sound-57.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-6.ogg", "assets_sfx_sound_6_ogg");
		type.set ("assets/sfx/sound-6.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-60.ogg", "assets_sfx_sound_60_ogg");
		type.set ("assets/sfx/sound-60.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-61.ogg", "assets_sfx_sound_61_ogg");
		type.set ("assets/sfx/sound-61.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-62.ogg", "assets_sfx_sound_62_ogg");
		type.set ("assets/sfx/sound-62.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-63.ogg", "assets_sfx_sound_63_ogg");
		type.set ("assets/sfx/sound-63.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-67.ogg", "assets_sfx_sound_67_ogg");
		type.set ("assets/sfx/sound-67.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-68.ogg", "assets_sfx_sound_68_ogg");
		type.set ("assets/sfx/sound-68.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-69.ogg", "assets_sfx_sound_69_ogg");
		type.set ("assets/sfx/sound-69.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-7.ogg", "assets_sfx_sound_7_ogg");
		type.set ("assets/sfx/sound-7.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-70.ogg", "assets_sfx_sound_70_ogg");
		type.set ("assets/sfx/sound-70.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-71.ogg", "assets_sfx_sound_71_ogg");
		type.set ("assets/sfx/sound-71.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-72.ogg", "assets_sfx_sound_72_ogg");
		type.set ("assets/sfx/sound-72.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-73.ogg", "assets_sfx_sound_73_ogg");
		type.set ("assets/sfx/sound-73.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-74.ogg", "assets_sfx_sound_74_ogg");
		type.set ("assets/sfx/sound-74.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-75.ogg", "assets_sfx_sound_75_ogg");
		type.set ("assets/sfx/sound-75.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-76.ogg", "assets_sfx_sound_76_ogg");
		type.set ("assets/sfx/sound-76.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-77.ogg", "assets_sfx_sound_77_ogg");
		type.set ("assets/sfx/sound-77.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-78.ogg", "assets_sfx_sound_78_ogg");
		type.set ("assets/sfx/sound-78.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-79.ogg", "assets_sfx_sound_79_ogg");
		type.set ("assets/sfx/sound-79.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-8.ogg", "assets_sfx_sound_8_ogg");
		type.set ("assets/sfx/sound-8.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-80.ogg", "assets_sfx_sound_80_ogg");
		type.set ("assets/sfx/sound-80.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-81.ogg", "assets_sfx_sound_81_ogg");
		type.set ("assets/sfx/sound-81.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-82.ogg", "assets_sfx_sound_82_ogg");
		type.set ("assets/sfx/sound-82.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-83.ogg", "assets_sfx_sound_83_ogg");
		type.set ("assets/sfx/sound-83.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-84.ogg", "assets_sfx_sound_84_ogg");
		type.set ("assets/sfx/sound-84.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-88.ogg", "assets_sfx_sound_88_ogg");
		type.set ("assets/sfx/sound-88.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-89.ogg", "assets_sfx_sound_89_ogg");
		type.set ("assets/sfx/sound-89.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-9.ogg", "assets_sfx_sound_9_ogg");
		type.set ("assets/sfx/sound-9.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-90.ogg", "assets_sfx_sound_90_ogg");
		type.set ("assets/sfx/sound-90.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-91.ogg", "assets_sfx_sound_91_ogg");
		type.set ("assets/sfx/sound-91.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-92.ogg", "assets_sfx_sound_92_ogg");
		type.set ("assets/sfx/sound-92.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-93.ogg", "assets_sfx_sound_93_ogg");
		type.set ("assets/sfx/sound-93.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/sfx/sound-94.ogg", "assets_sfx_sound_94_ogg");
		type.set ("assets/sfx/sound-94.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("assets/data/behaviors.xml", "assets_data_behaviors_xml");
		type.set ("assets/data/behaviors.xml", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/data/game.xml", "assets_data_game_xml");
		type.set ("assets/data/game.xml", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/data/resources.xml", "assets_data_resources_xml");
		type.set ("assets/data/resources.xml", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/data/scene-1.scn", "assets_data_scene_1_scn");
		type.set ("assets/data/scene-1.scn", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/data/scene-1.xml", "assets_data_scene_1_xml");
		type.set ("assets/data/scene-1.xml", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/data/scene-2.scn", "assets_data_scene_2_scn");
		type.set ("assets/data/scene-2.scn", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/data/scene-2.xml", "assets_data_scene_2_xml");
		type.set ("assets/data/scene-2.xml", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/data/scene-3.scn", "assets_data_scene_3_scn");
		type.set ("assets/data/scene-3.scn", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/data/scene-3.xml", "assets_data_scene_3_xml");
		type.set ("assets/data/scene-3.xml", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/data/scenes.xml", "assets_data_scenes_xml");
		type.set ("assets/data/scenes.xml", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("__manifest__", "manifest");
		type.set ("__manifest__", Reflect.field (AssetType, "text".toUpperCase ()));
		
		
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
class __ASSET__assets_graphics_1x_font_36_fnt extends null { }
class __ASSET__assets_graphics_1x_font_36_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_font_54_fnt extends null { }
class __ASSET__assets_graphics_1x_font_54_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_1x_font_55_fnt extends null { }
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
class __ASSET__assets_graphics_2x_background_100_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_background_129_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_background_99_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_font_36_fnt extends null { }
class __ASSET__assets_graphics_2x_font_36_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_font_54_fnt extends null { }
class __ASSET__assets_graphics_2x_font_54_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_font_55_fnt extends null { }
class __ASSET__assets_graphics_2x_font_55_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_1_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_1_1_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_1_10_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_1_11_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_1_12_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_1_13_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_1_14_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_1_15_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_1_16_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_1_17_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_1_2_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_1_3_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_1_4_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_1_5_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_1_6_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_1_7_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_1_8_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_1_9_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_102_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_104_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_106_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_106_1_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_120_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_122_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_126_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_128_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_131_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_15_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_3_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_59_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_59_1_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_59_2_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_59_3_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_59_4_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_59_5_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_66_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_86_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_96_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_2x_sprite_98_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_background_100_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_background_129_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_background_99_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_font_36_fnt extends null { }
class __ASSET__assets_graphics_4x_font_36_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_font_54_fnt extends null { }
class __ASSET__assets_graphics_4x_font_54_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_font_55_fnt extends null { }
class __ASSET__assets_graphics_4x_font_55_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_1_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_1_1_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_1_10_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_1_11_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_1_12_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_1_13_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_1_14_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_1_15_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_1_16_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_1_17_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_1_2_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_1_3_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_1_4_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_1_5_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_1_6_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_1_7_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_1_8_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_1_9_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_102_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_104_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_106_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_106_1_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_120_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_122_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_126_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_128_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_131_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_15_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_3_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_59_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_59_1_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_59_2_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_59_3_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_59_4_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_59_5_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_66_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_86_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_96_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_4x_sprite_98_0_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_default_font_fnt extends null { }
class __ASSET__assets_graphics_default_font_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_inner_joystick_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_inner_joystick_1_5x_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_inner_joystick_2x_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_inner_joystick_4x_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_outer_joystick_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_outer_joystick_1_5x_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_outer_joystick_2x_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_outer_joystick_4x_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_preloader_badge_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_preloader_bg_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_preloader_bg_1_5x_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_preloader_bg_2x_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_graphics_preloader_bg_4x_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_music_sound_10_ogg extends null { }
class __ASSET__assets_sfx_sound_11_ogg extends null { }
class __ASSET__assets_sfx_sound_117_ogg extends null { }
class __ASSET__assets_sfx_sound_118_ogg extends null { }
class __ASSET__assets_sfx_sound_123_ogg extends null { }
class __ASSET__assets_sfx_sound_124_ogg extends null { }
class __ASSET__assets_sfx_sound_18_ogg extends null { }
class __ASSET__assets_sfx_sound_19_ogg extends null { }
class __ASSET__assets_sfx_sound_20_ogg extends null { }
class __ASSET__assets_sfx_sound_21_ogg extends null { }
class __ASSET__assets_sfx_sound_22_ogg extends null { }
class __ASSET__assets_sfx_sound_23_ogg extends null { }
class __ASSET__assets_sfx_sound_24_ogg extends null { }
class __ASSET__assets_sfx_sound_25_ogg extends null { }
class __ASSET__assets_sfx_sound_26_ogg extends null { }
class __ASSET__assets_sfx_sound_27_ogg extends null { }
class __ASSET__assets_sfx_sound_28_ogg extends null { }
class __ASSET__assets_sfx_sound_29_ogg extends null { }
class __ASSET__assets_sfx_sound_30_ogg extends null { }
class __ASSET__assets_sfx_sound_31_ogg extends null { }
class __ASSET__assets_sfx_sound_32_ogg extends null { }
class __ASSET__assets_sfx_sound_5_ogg extends null { }
class __ASSET__assets_sfx_sound_56_ogg extends null { }
class __ASSET__assets_sfx_sound_57_ogg extends null { }
class __ASSET__assets_sfx_sound_6_ogg extends null { }
class __ASSET__assets_sfx_sound_60_ogg extends null { }
class __ASSET__assets_sfx_sound_61_ogg extends null { }
class __ASSET__assets_sfx_sound_62_ogg extends null { }
class __ASSET__assets_sfx_sound_63_ogg extends null { }
class __ASSET__assets_sfx_sound_67_ogg extends null { }
class __ASSET__assets_sfx_sound_68_ogg extends null { }
class __ASSET__assets_sfx_sound_69_ogg extends null { }
class __ASSET__assets_sfx_sound_7_ogg extends null { }
class __ASSET__assets_sfx_sound_70_ogg extends null { }
class __ASSET__assets_sfx_sound_71_ogg extends null { }
class __ASSET__assets_sfx_sound_72_ogg extends null { }
class __ASSET__assets_sfx_sound_73_ogg extends null { }
class __ASSET__assets_sfx_sound_74_ogg extends null { }
class __ASSET__assets_sfx_sound_75_ogg extends null { }
class __ASSET__assets_sfx_sound_76_ogg extends null { }
class __ASSET__assets_sfx_sound_77_ogg extends null { }
class __ASSET__assets_sfx_sound_78_ogg extends null { }
class __ASSET__assets_sfx_sound_79_ogg extends null { }
class __ASSET__assets_sfx_sound_8_ogg extends null { }
class __ASSET__assets_sfx_sound_80_ogg extends null { }
class __ASSET__assets_sfx_sound_81_ogg extends null { }
class __ASSET__assets_sfx_sound_82_ogg extends null { }
class __ASSET__assets_sfx_sound_83_ogg extends null { }
class __ASSET__assets_sfx_sound_84_ogg extends null { }
class __ASSET__assets_sfx_sound_88_ogg extends null { }
class __ASSET__assets_sfx_sound_89_ogg extends null { }
class __ASSET__assets_sfx_sound_9_ogg extends null { }
class __ASSET__assets_sfx_sound_90_ogg extends null { }
class __ASSET__assets_sfx_sound_91_ogg extends null { }
class __ASSET__assets_sfx_sound_92_ogg extends null { }
class __ASSET__assets_sfx_sound_93_ogg extends null { }
class __ASSET__assets_sfx_sound_94_ogg extends null { }
class __ASSET__assets_data_behaviors_xml extends null { }
class __ASSET__assets_data_game_xml extends null { }
class __ASSET__assets_data_resources_xml extends null { }
class __ASSET__assets_data_scene_1_scn extends null { }
class __ASSET__assets_data_scene_1_xml extends null { }
class __ASSET__assets_data_scene_2_scn extends null { }
class __ASSET__assets_data_scene_2_xml extends null { }
class __ASSET__assets_data_scene_3_scn extends null { }
class __ASSET__assets_data_scene_3_xml extends null { }
class __ASSET__assets_data_scenes_xml extends null { }
class __ASSET__manifest extends null { }


#elseif html5






































































































































































































































#end