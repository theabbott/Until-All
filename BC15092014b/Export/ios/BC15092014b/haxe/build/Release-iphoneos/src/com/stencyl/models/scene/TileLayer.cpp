#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2BodyDef
#include <box2D/dynamics/B2BodyDef.h>
#endif
#ifndef INCLUDED_com_stencyl_AssetLoader
#include <com/stencyl/AssetLoader.h>
#endif
#ifndef INCLUDED_com_stencyl_Engine
#include <com/stencyl/Engine.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
#endif
#ifndef INCLUDED_com_stencyl_models_GameModel
#include <com/stencyl/models/GameModel.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Resource
#include <com/stencyl/models/Resource.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Scene
#include <com/stencyl/models/Scene.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_ActorType
#include <com/stencyl/models/actor/ActorType.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Group
#include <com/stencyl/models/actor/Group.h>
#endif
#ifndef INCLUDED_com_stencyl_models_actor_Sprite
#include <com/stencyl/models/actor/Sprite.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_Grid
#include <com/stencyl/models/collision/Grid.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_Hitbox
#include <com/stencyl/models/collision/Hitbox.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_Mask
#include <com/stencyl/models/collision/Mask.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_Tile
#include <com/stencyl/models/scene/Tile.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_TileLayer
#include <com/stencyl/models/scene/TileLayer.h>
#endif
#ifndef INCLUDED_com_stencyl_models_scene_Tileset
#include <com/stencyl/models/scene/Tileset.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_Utils
#include <com/stencyl/utils/Utils.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_scripts_MyAssets
#include <scripts/MyAssets.h>
#endif
namespace com{
namespace stencyl{
namespace models{
namespace scene{

Void TileLayer_obj::__construct(int layerID,int zOrder,::com::stencyl::models::Scene scene,int numCols,int numRows)
{
HX_STACK_PUSH("TileLayer::new","com/stencyl/models/scene/TileLayer.hx",20);
{
	HX_STACK_LINE(32)
	this->blendName = HX_CSTRING("NORMAL");
	HX_STACK_LINE(44)
	super::__construct();
	HX_STACK_LINE(46)
	this->layerID = layerID;
	HX_STACK_LINE(47)
	this->zOrder = zOrder;
	HX_STACK_LINE(49)
	this->scene = scene;
	HX_STACK_LINE(50)
	this->numRows = numRows;
	HX_STACK_LINE(51)
	this->numCols = numCols;
	HX_STACK_LINE(52)
	this->noTiles = false;
	HX_STACK_LINE(54)
	this->rows = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(56)
	{
		HX_STACK_LINE(56)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(56)
		while(((_g < numRows))){
			HX_STACK_LINE(56)
			int row = (_g)++;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(58)
			this->rows[row] = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(60)
			{
				HX_STACK_LINE(60)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(60)
				while(((_g1 < numCols))){
					HX_STACK_LINE(60)
					int col = (_g1)++;		HX_STACK_VAR(col,"col");
					HX_STACK_LINE(62)
					this->rows->__get(row).StaticCast< Array< ::Dynamic > >()[col] = null();
				}
			}
		}
	}
	HX_STACK_LINE(66)
	this->flashPoint = ::flash::geom::Point_obj::__new(null(),null());
}
;
	return null();
}

TileLayer_obj::~TileLayer_obj() { }

Dynamic TileLayer_obj::__CreateEmpty() { return  new TileLayer_obj; }
hx::ObjectPtr< TileLayer_obj > TileLayer_obj::__new(int layerID,int zOrder,::com::stencyl::models::Scene scene,int numCols,int numRows)
{  hx::ObjectPtr< TileLayer_obj > result = new TileLayer_obj();
	result->__construct(layerID,zOrder,scene,numCols,numRows);
	return result;}

Dynamic TileLayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileLayer_obj > result = new TileLayer_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void TileLayer_obj::draw( int viewX,int viewY,hx::Null< Float >  __o_scrollFactor){
Float scrollFactor = __o_scrollFactor.Default(1);
	HX_STACK_PUSH("TileLayer::draw","com/stencyl/models/scene/TileLayer.hx",197);
	HX_STACK_THIS(this);
	HX_STACK_ARG(viewX,"viewX");
	HX_STACK_ARG(viewY,"viewY");
	HX_STACK_ARG(scrollFactor,"scrollFactor");
{
		HX_STACK_LINE(198)
		if ((this->noTiles)){
			HX_STACK_LINE(199)
			return null();
		}
		HX_STACK_LINE(204)
		this->get_graphics()->clear();
		HX_STACK_LINE(216)
		viewX = ::Math_obj::floor(::Math_obj::abs(viewX));
		HX_STACK_LINE(217)
		viewY = ::Math_obj::floor(::Math_obj::abs(viewY));
		HX_STACK_LINE(219)
		int width = this->numCols;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(220)
		int height = this->numRows;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(222)
		int tw = this->scene->tileWidth;		HX_STACK_VAR(tw,"tw");
		HX_STACK_LINE(223)
		int th = this->scene->tileHeight;		HX_STACK_VAR(th,"th");
		HX_STACK_LINE(225)
		int startX = ::Std_obj::_int((Float((Float(viewX) / Float(::com::stencyl::Engine_obj::SCALE))) / Float(tw)));		HX_STACK_VAR(startX,"startX");
		HX_STACK_LINE(226)
		int startY = ::Std_obj::_int((Float((Float(viewY) / Float(::com::stencyl::Engine_obj::SCALE))) / Float(th)));		HX_STACK_VAR(startY,"startY");
		HX_STACK_LINE(227)
		int endX = (((int)2 + startX) + ::Std_obj::_int((Float(::com::stencyl::Engine_obj::screenWidth) / Float(tw))));		HX_STACK_VAR(endX,"endX");
		HX_STACK_LINE(228)
		int endY = (((int)2 + startY) + ::Std_obj::_int((Float(::com::stencyl::Engine_obj::screenHeight) / Float(th))));		HX_STACK_VAR(endY,"endY");
		HX_STACK_LINE(230)
		endX = ::Std_obj::_int(::Math_obj::min(endX,width));
		HX_STACK_LINE(231)
		endY = ::Std_obj::_int(::Math_obj::min(endY,height));
		HX_STACK_LINE(233)
		int px = (int)0;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(234)
		int py = (int)0;		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(236)
		int y = startY;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(238)
		while(((y < endY))){
			HX_STACK_LINE(240)
			int x = startX;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(242)
			while(((x < endX))){
				HX_STACK_LINE(244)
				::com::stencyl::models::scene::Tile t = this->getTileAt(y,x);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(246)
				if (((t == null()))){
					HX_STACK_LINE(248)
					(x)++;
					HX_STACK_LINE(249)
					hx::AddEq(px,tw);
					HX_STACK_LINE(250)
					continue;
				}
				HX_STACK_LINE(253)
				if (((bool((::com::stencyl::models::scene::TileLayer_obj::cacheSource->get(((t->parent->ID * (int)1000000) + t->tileID)) == null())) || bool(t->updateSource)))){
					HX_STACK_LINE(254)
					if (((t->pixels == null()))){
						HX_STACK_LINE(256)
						::com::stencyl::models::scene::TileLayer_obj::cacheSource->set(((t->parent->ID * (int)1000000) + t->tileID),t->parent->getImageSourceForTile(t->tileID,tw,th));
					}
					else{
						HX_STACK_LINE(262)
						::com::stencyl::models::scene::TileLayer_obj::cacheSource->set(((t->parent->ID * (int)1000000) + t->tileID),t->getSource(tw,th));
						HX_STACK_LINE(263)
						t->updateSource = false;
					}
				}
				HX_STACK_LINE(267)
				::flash::geom::Rectangle source = ::com::stencyl::models::scene::TileLayer_obj::cacheSource->get(((t->parent->ID * (int)1000000) + t->tileID));		HX_STACK_VAR(source,"source");
				HX_STACK_LINE(269)
				if (((source == null()))){
					HX_STACK_LINE(271)
					(x)++;
					HX_STACK_LINE(272)
					hx::AddEq(px,tw);
					HX_STACK_LINE(273)
					continue;
				}
				else{
					HX_STACK_LINE(279)
					if (((t->pixels == null()))){
						HX_STACK_LINE(280)
						this->pixels = t->parent->pixels;
					}
					else{
						HX_STACK_LINE(285)
						this->pixels = t->pixels;
					}
					HX_STACK_LINE(289)
					if (((source != null()))){
						HX_STACK_LINE(302)
						this->flashPoint->x = ((x * tw) * ::com::stencyl::Engine_obj::SCALE);
						HX_STACK_LINE(303)
						this->flashPoint->y = ((y * th) * ::com::stencyl::Engine_obj::SCALE);
						HX_STACK_LINE(305)
						t->parent->data[(int)0] = this->flashPoint->x;
						HX_STACK_LINE(306)
						t->parent->data[(int)1] = this->flashPoint->y;
						HX_STACK_LINE(308)
						if (((t->data == null()))){
							HX_STACK_LINE(310)
							t->parent->data[(int)2] = t->parent->sheetMap->get(t->tileID);
							HX_STACK_LINE(312)
							if (((t->parent->tilesheet != null()))){
								HX_STACK_LINE(313)
								if (((this->blendName == HX_CSTRING("ADD")))){
									HX_STACK_LINE(315)
									t->parent->tilesheet->drawTiles(this->get_graphics(),t->parent->data,::scripts::MyAssets_obj::antialias,(int)65536);
								}
								else{
									HX_STACK_LINE(318)
									if (((this->blendName == HX_CSTRING("MULTIPLY")))){
										HX_STACK_LINE(319)
										t->parent->tilesheet->drawTiles(this->get_graphics(),t->parent->data,::scripts::MyAssets_obj::antialias,(int)131072);
									}
									else{
										HX_STACK_LINE(322)
										if (((this->blendName == HX_CSTRING("SCREEN")))){
											HX_STACK_LINE(323)
											t->parent->tilesheet->drawTiles(this->get_graphics(),t->parent->data,::scripts::MyAssets_obj::antialias,(int)262144);
										}
										else{
											HX_STACK_LINE(327)
											t->parent->tilesheet->drawTiles(this->get_graphics(),t->parent->data,::scripts::MyAssets_obj::antialias,(int)0);
										}
									}
								}
							}
						}
						else{
							HX_STACK_LINE(335)
							t->parent->data[(int)2] = t->currFrame;
							HX_STACK_LINE(337)
							if (((this->blendName == HX_CSTRING("ADD")))){
								HX_STACK_LINE(338)
								t->data->drawTiles(this->get_graphics(),t->parent->data,::scripts::MyAssets_obj::antialias,(int)65536);
							}
							else{
								HX_STACK_LINE(341)
								if (((this->blendName == HX_CSTRING("MULTIPLY")))){
									HX_STACK_LINE(342)
									t->data->drawTiles(this->get_graphics(),t->parent->data,::scripts::MyAssets_obj::antialias,(int)131072);
								}
								else{
									HX_STACK_LINE(345)
									if (((this->blendName == HX_CSTRING("SCREEN")))){
										HX_STACK_LINE(346)
										t->data->drawTiles(this->get_graphics(),t->parent->data,::scripts::MyAssets_obj::antialias,(int)262144);
									}
									else{
										HX_STACK_LINE(350)
										t->data->drawTiles(this->get_graphics(),t->parent->data,::scripts::MyAssets_obj::antialias,(int)0);
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(358)
				(x)++;
				HX_STACK_LINE(359)
				hx::AddEq(px,tw);
			}
			HX_STACK_LINE(362)
			px = (int)0;
			HX_STACK_LINE(363)
			hx::AddEq(py,th);
			HX_STACK_LINE(365)
			(y)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TileLayer_obj,draw,(void))

::com::stencyl::models::scene::Tile TileLayer_obj::getTileAt( int row,int col){
	HX_STACK_PUSH("TileLayer::getTileAt","com/stencyl/models/scene/TileLayer.hx",185);
	HX_STACK_THIS(this);
	HX_STACK_ARG(row,"row");
	HX_STACK_ARG(col,"col");
	HX_STACK_LINE(186)
	if (((bool((bool((bool((col < (int)0)) || bool((row < (int)0)))) || bool((col >= this->numCols)))) || bool((row >= this->numRows))))){
		HX_STACK_LINE(187)
		return null();
	}
	HX_STACK_LINE(191)
	return this->rows->__get(row).StaticCast< Array< ::Dynamic > >()->__get(col).StaticCast< ::com::stencyl::models::scene::Tile >();
}


HX_DEFINE_DYNAMIC_FUNC2(TileLayer_obj,getTileAt,return )

Void TileLayer_obj::setTileAt( int row,int col,::com::stencyl::models::scene::Tile tile){
{
		HX_STACK_PUSH("TileLayer::setTileAt","com/stencyl/models/scene/TileLayer.hx",175);
		HX_STACK_THIS(this);
		HX_STACK_ARG(row,"row");
		HX_STACK_ARG(col,"col");
		HX_STACK_ARG(tile,"tile");
		HX_STACK_LINE(176)
		if (((bool((bool((bool((col < (int)0)) || bool((row < (int)0)))) || bool((col >= this->numCols)))) || bool((row >= this->numRows))))){
			HX_STACK_LINE(177)
			return null();
		}
		HX_STACK_LINE(181)
		this->rows->__get(row).StaticCast< Array< ::Dynamic > >()[col] = tile;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TileLayer_obj,setTileAt,(void))

Void TileLayer_obj::mountGrid( ){
{
		HX_STACK_PUSH("TileLayer::mountGrid","com/stencyl/models/scene/TileLayer.hx",137);
		HX_STACK_THIS(this);
		HX_STACK_LINE(138)
		if (((this->grid == null()))){
			HX_STACK_LINE(139)
			return null();
		}
		HX_STACK_LINE(143)
		::com::stencyl::models::Actor a = ::com::stencyl::models::Actor_obj::__new(::com::stencyl::Engine_obj::engine,::com::stencyl::utils::Utils_obj::INTEGER_MAX,::com::stencyl::models::GameModel_obj::TERRAIN_ID,(int)0,(int)0,::com::stencyl::Engine_obj::engine->getTopLayer(),this->grid->get_width(),this->grid->get_height(),null(),::haxe::ds::StringMap_obj::__new(),null(),null(),false,true,false,false,this->grid,(int)-1,::com::stencyl::Engine_obj::NO_PHYSICS,null(),null());		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(166)
		a->set_name(HX_CSTRING("Terrain"));
		HX_STACK_LINE(167)
		a->typeID = (int)-1;
		HX_STACK_LINE(168)
		a->set_visible(false);
		HX_STACK_LINE(169)
		a->ignoreGravity = true;
		HX_STACK_LINE(171)
		::com::stencyl::Engine_obj::engine->getGroup(::com::stencyl::models::GameModel_obj::TERRAIN_ID,null())->addChild(a);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileLayer_obj,mountGrid,(void))

Void TileLayer_obj::setPosition( Float x,Float y,hx::Null< Float >  __o_scrollFactor){
Float scrollFactor = __o_scrollFactor.Default(1);
	HX_STACK_PUSH("TileLayer::setPosition","com/stencyl/models/scene/TileLayer.hx",114);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(scrollFactor,"scrollFactor");
{
		HX_STACK_LINE(130)
		this->set_x((x * scrollFactor));
		HX_STACK_LINE(131)
		this->set_y((y * scrollFactor));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TileLayer_obj,setPosition,(void))

Void TileLayer_obj::clearBitmap( ){
{
		HX_STACK_PUSH("TileLayer::clearBitmap","com/stencyl/models/scene/TileLayer.hx",96);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileLayer_obj,clearBitmap,(void))

Void TileLayer_obj::reset( ){
{
		HX_STACK_PUSH("TileLayer::reset","com/stencyl/models/scene/TileLayer.hx",70);
		HX_STACK_THIS(this);
		HX_STACK_LINE(70)
		this->set_alpha((int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileLayer_obj,reset,(void))

::haxe::ds::IntMap TileLayer_obj::cacheSource;


TileLayer_obj::TileLayer_obj()
{
}

void TileLayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileLayer);
	HX_MARK_MEMBER_NAME(noTiles,"noTiles");
	HX_MARK_MEMBER_NAME(flashPoint,"flashPoint");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(blendName,"blendName");
	HX_MARK_MEMBER_NAME(numCols,"numCols");
	HX_MARK_MEMBER_NAME(numRows,"numRows");
	HX_MARK_MEMBER_NAME(scene,"scene");
	HX_MARK_MEMBER_NAME(grid,"grid");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(zOrder,"zOrder");
	HX_MARK_MEMBER_NAME(layerID,"layerID");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TileLayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(noTiles,"noTiles");
	HX_VISIT_MEMBER_NAME(flashPoint,"flashPoint");
	HX_VISIT_MEMBER_NAME(pixels,"pixels");
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(blendName,"blendName");
	HX_VISIT_MEMBER_NAME(numCols,"numCols");
	HX_VISIT_MEMBER_NAME(numRows,"numRows");
	HX_VISIT_MEMBER_NAME(scene,"scene");
	HX_VISIT_MEMBER_NAME(grid,"grid");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(zOrder,"zOrder");
	HX_VISIT_MEMBER_NAME(layerID,"layerID");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic TileLayer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"grid") ) { return grid; }
		if (HX_FIELD_EQ(inName,"rows") ) { return rows; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"scene") ) { return scene; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { return pixels; }
		if (HX_FIELD_EQ(inName,"zOrder") ) { return zOrder; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"noTiles") ) { return noTiles; }
		if (HX_FIELD_EQ(inName,"numCols") ) { return numCols; }
		if (HX_FIELD_EQ(inName,"numRows") ) { return numRows; }
		if (HX_FIELD_EQ(inName,"layerID") ) { return layerID; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getTileAt") ) { return getTileAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setTileAt") ) { return setTileAt_dyn(); }
		if (HX_FIELD_EQ(inName,"mountGrid") ) { return mountGrid_dyn(); }
		if (HX_FIELD_EQ(inName,"blendName") ) { return blendName; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flashPoint") ) { return flashPoint; }
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cacheSource") ) { return cacheSource; }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"clearBitmap") ) { return clearBitmap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileLayer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"grid") ) { grid=inValue.Cast< ::com::stencyl::models::collision::Grid >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { scene=inValue.Cast< ::com::stencyl::models::Scene >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { pixels=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zOrder") ) { zOrder=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"noTiles") ) { noTiles=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numCols") ) { numCols=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numRows") ) { numRows=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layerID") ) { layerID=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendName") ) { blendName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flashPoint") ) { flashPoint=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bitmapData") ) { bitmapData=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cacheSource") ) { cacheSource=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileLayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("noTiles"));
	outFields->push(HX_CSTRING("flashPoint"));
	outFields->push(HX_CSTRING("pixels"));
	outFields->push(HX_CSTRING("bitmapData"));
	outFields->push(HX_CSTRING("blendName"));
	outFields->push(HX_CSTRING("numCols"));
	outFields->push(HX_CSTRING("numRows"));
	outFields->push(HX_CSTRING("scene"));
	outFields->push(HX_CSTRING("grid"));
	outFields->push(HX_CSTRING("rows"));
	outFields->push(HX_CSTRING("zOrder"));
	outFields->push(HX_CSTRING("layerID"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("cacheSource"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("draw"),
	HX_CSTRING("getTileAt"),
	HX_CSTRING("setTileAt"),
	HX_CSTRING("mountGrid"),
	HX_CSTRING("setPosition"),
	HX_CSTRING("clearBitmap"),
	HX_CSTRING("reset"),
	HX_CSTRING("noTiles"),
	HX_CSTRING("flashPoint"),
	HX_CSTRING("pixels"),
	HX_CSTRING("bitmapData"),
	HX_CSTRING("blendName"),
	HX_CSTRING("numCols"),
	HX_CSTRING("numRows"),
	HX_CSTRING("scene"),
	HX_CSTRING("grid"),
	HX_CSTRING("rows"),
	HX_CSTRING("zOrder"),
	HX_CSTRING("layerID"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileLayer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TileLayer_obj::cacheSource,"cacheSource");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileLayer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TileLayer_obj::cacheSource,"cacheSource");
};

Class TileLayer_obj::__mClass;

void TileLayer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.stencyl.models.scene.TileLayer"), hx::TCanCast< TileLayer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TileLayer_obj::__boot()
{
	cacheSource= ::haxe::ds::IntMap_obj::__new();
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace scene
