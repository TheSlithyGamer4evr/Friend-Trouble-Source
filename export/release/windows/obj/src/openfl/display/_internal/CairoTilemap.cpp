#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CairoRenderer
#include <openfl/display/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_ITileContainer
#include <openfl/display/ITileContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Tile
#include <openfl/display/Tile.h>
#endif
#ifndef INCLUDED_openfl_display_TileContainer
#include <openfl/display/TileContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Tilemap
#include <openfl/display/Tilemap.h>
#endif
#ifndef INCLUDED_openfl_display_Tileset
#include <openfl/display/Tileset.h>
#endif
#ifndef INCLUDED_openfl_display__Tileset_TileData
#include <openfl/display/_Tileset/TileData.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoDisplayObject
#include <openfl/display/_internal/CairoDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoTilemap
#include <openfl/display/_internal/CairoTilemap.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_577544eec98749ac_34_render,"openfl.display._internal.CairoTilemap","render",0xf93a64c2,"openfl.display._internal.CairoTilemap.render","openfl/display/_internal/CairoTilemap.hx",34,0xe2e59a59)
HX_LOCAL_STACK_FRAME(_hx_pos_577544eec98749ac_62_renderTileContainer,"openfl.display._internal.CairoTilemap","renderTileContainer",0xfd9a4e11,"openfl.display._internal.CairoTilemap.renderTileContainer","openfl/display/_internal/CairoTilemap.hx",62,0xe2e59a59)
HX_LOCAL_STACK_FRAME(_hx_pos_577544eec98749ac_173_renderDrawable,"openfl.display._internal.CairoTilemap","renderDrawable",0x2eda9e80,"openfl.display._internal.CairoTilemap.renderDrawable","openfl/display/_internal/CairoTilemap.hx",173,0xe2e59a59)
HX_LOCAL_STACK_FRAME(_hx_pos_577544eec98749ac_191_renderDrawableMask,"openfl.display._internal.CairoTilemap","renderDrawableMask",0xd9fb4b8c,"openfl.display._internal.CairoTilemap.renderDrawableMask","openfl/display/_internal/CairoTilemap.hx",191,0xe2e59a59)
HX_LOCAL_STACK_FRAME(_hx_pos_577544eec98749ac_31_boot,"openfl.display._internal.CairoTilemap","boot",0x78ed0a9e,"openfl.display._internal.CairoTilemap.boot","openfl/display/_internal/CairoTilemap.hx",31,0xe2e59a59)
namespace openfl{
namespace display{
namespace _internal{

void CairoTilemap_obj::__construct() { }

Dynamic CairoTilemap_obj::__CreateEmpty() { return new CairoTilemap_obj; }

void *CairoTilemap_obj::_hx_vtable = 0;

Dynamic CairoTilemap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CairoTilemap_obj > _hx_result = new CairoTilemap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoTilemap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x60242ad0;
}

void CairoTilemap_obj::render( ::openfl::display::Tilemap tilemap, ::openfl::display::CairoRenderer renderer){
            	HX_GC_STACKFRAME(&_hx_pos_577544eec98749ac_34_render)
HXLINE(  35)		bool _hx_tmp;
HXDLIN(  35)		if (tilemap->_hx___renderable) {
HXLINE(  35)			_hx_tmp = (tilemap->_hx___group->_hx___tiles->length == 0);
            		}
            		else {
HXLINE(  35)			_hx_tmp = true;
            		}
HXDLIN(  35)		if (_hx_tmp) {
HXLINE(  35)			return;
            		}
HXLINE(  37)		Float alpha = renderer->_hx___getAlpha(tilemap->_hx___worldAlpha);
HXLINE(  38)		if ((alpha <= 0)) {
HXLINE(  38)			return;
            		}
HXLINE(  40)		renderer->_hx___setBlendMode(tilemap->_hx___worldBlendMode);
HXLINE(  41)		renderer->_hx___pushMaskObject(tilemap,null());
HXLINE(  43)		 ::openfl::geom::Rectangle rect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE(  44)		rect->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(tilemap->_hx___width) ),( (Float)(tilemap->_hx___height) ));
HXLINE(  45)		renderer->_hx___pushMaskRect(rect,tilemap->_hx___renderTransform);
HXLINE(  47)		 ::openfl::display::TileContainer tilemap1 = tilemap->_hx___group;
HXDLIN(  47)		 ::openfl::geom::Matrix tilemap2 = tilemap->_hx___renderTransform;
HXDLIN(  47)		 ::openfl::display::Tileset tilemap3 = tilemap->_hx___tileset;
HXDLIN(  47)		bool _hx_tmp1;
HXDLIN(  47)		if (renderer->_hx___allowSmoothing) {
HXLINE(  47)			_hx_tmp1 = tilemap->smoothing;
            		}
            		else {
HXLINE(  47)			_hx_tmp1 = false;
            		}
HXLINE(  48)		bool tilemap4 = tilemap->tileAlphaEnabled;
HXDLIN(  48)		bool tilemap5 = tilemap->tileBlendModeEnabled;
HXDLIN(  48)		 ::Dynamic tilemap6 = tilemap->_hx___worldBlendMode;
HXLINE(  47)		::openfl::display::_internal::CairoTilemap_obj::renderTileContainer(tilemap1,renderer,tilemap2,tilemap3,_hx_tmp1,tilemap4,alpha,tilemap5,tilemap6,null(),null(),null(),rect, ::lime::math::Matrix3_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null()));
HXLINE(  51)		renderer->_hx___popMaskRect();
HXLINE(  52)		renderer->_hx___popMaskObject(tilemap,null());
HXLINE(  54)		::openfl::geom::Rectangle_obj::_hx___pool->release(rect);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTilemap_obj,render,(void))

void CairoTilemap_obj::renderTileContainer( ::openfl::display::TileContainer group, ::openfl::display::CairoRenderer renderer, ::openfl::geom::Matrix parentTransform, ::openfl::display::Tileset defaultTileset,bool smooth,bool alphaEnabled,Float worldAlpha,bool blendModeEnabled, ::Dynamic defaultBlendMode, ::openfl::display::BitmapData cacheBitmapData, ::Dynamic surface, ::Dynamic pattern, ::openfl::geom::Rectangle rect, ::lime::math::Matrix3 matrix){
            	HX_STACKFRAME(&_hx_pos_577544eec98749ac_62_renderTileContainer)
HXLINE(  64)		 ::lime::graphics::cairo::Cairo cairo = renderer->cairo;
HXLINE(  66)		 ::openfl::geom::Matrix tileTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE(  68)		::Array< ::Dynamic> tiles = group->_hx___tiles;
HXLINE(  70)		 ::Dynamic tile;
HXDLIN(  70)		 ::openfl::display::Tileset tileset;
HXDLIN(  70)		Float alpha;
HXDLIN(  70)		bool visible;
HXDLIN(  70)		 ::Dynamic blendMode = null();
HXDLIN(  70)		int id;
HXDLIN(  70)		 ::openfl::display::_Tileset::TileData tileData;
HXDLIN(  70)		 ::openfl::geom::Rectangle tileRect;
HXDLIN(  70)		 ::openfl::display::BitmapData bitmapData;
HXLINE(  80)		{
HXLINE(  80)			int _g = 0;
HXDLIN(  80)			while((_g < tiles->length)){
HXLINE(  80)				 ::openfl::display::Tile tile = tiles->__get(_g).StaticCast<  ::openfl::display::Tile >();
HXDLIN(  80)				_g = (_g + 1);
HXLINE(  82)				Float _hx_tmp = -(tile->get_originX());
HXDLIN(  82)				tileTransform->setTo(( (Float)(1) ),( (Float)(0) ),( (Float)(0) ),( (Float)(1) ),_hx_tmp,-(tile->get_originY()));
HXLINE(  83)				tileTransform->concat(tile->get_matrix());
HXLINE(  84)				tileTransform->concat(parentTransform);
HXLINE(  86)				if (::hx::IsNotNull( tile->get_tileset() )) {
HXLINE(  86)					tileset = tile->get_tileset();
            				}
            				else {
HXLINE(  86)					tileset = defaultTileset;
            				}
HXLINE(  88)				alpha = (tile->get_alpha() * worldAlpha);
HXLINE(  89)				visible = tile->get_visible();
HXLINE(  90)				bool _hx_tmp1;
HXDLIN(  90)				if (visible) {
HXLINE(  90)					_hx_tmp1 = (alpha <= 0);
            				}
            				else {
HXLINE(  90)					_hx_tmp1 = true;
            				}
HXDLIN(  90)				if (_hx_tmp1) {
HXLINE(  90)					continue;
            				}
HXLINE(  92)				if (!(alphaEnabled)) {
HXLINE(  92)					alpha = ( (Float)(1) );
            				}
HXLINE(  94)				if (blendModeEnabled) {
HXLINE(  96)					if (::hx::IsNotNull( tile->_hx___blendMode )) {
HXLINE(  96)						blendMode = tile->_hx___blendMode;
            					}
            					else {
HXLINE(  96)						blendMode = defaultBlendMode;
            					}
            				}
HXLINE(  99)				if ((tile->__length > 0)) {
HXLINE( 101)					::openfl::display::_internal::CairoTilemap_obj::renderTileContainer(( ( ::openfl::display::TileContainer)(tile) ),renderer,tileTransform,tileset,smooth,alphaEnabled,alpha,blendModeEnabled,blendMode,cacheBitmapData,surface,pattern,rect,matrix);
            				}
            				else {
HXLINE( 106)					if (::hx::IsNull( tileset )) {
HXLINE( 106)						continue;
            					}
HXLINE( 108)					id = tile->get_id();
HXLINE( 110)					if ((id == -1)) {
HXLINE( 112)						tileRect = tile->_hx___rect;
HXLINE( 113)						bool _hx_tmp;
HXDLIN( 113)						bool _hx_tmp1;
HXDLIN( 113)						if (::hx::IsNotNull( tileRect )) {
HXLINE( 113)							_hx_tmp1 = (tileRect->width <= 0);
            						}
            						else {
HXLINE( 113)							_hx_tmp1 = true;
            						}
HXDLIN( 113)						if (!(_hx_tmp1)) {
HXLINE( 113)							_hx_tmp = (tileRect->height <= 0);
            						}
            						else {
HXLINE( 113)							_hx_tmp = true;
            						}
HXDLIN( 113)						if (_hx_tmp) {
HXLINE( 113)							continue;
            						}
            					}
            					else {
HXLINE( 117)						tileData = tileset->_hx___data->__get(id).StaticCast<  ::openfl::display::_Tileset::TileData >();
HXLINE( 118)						if (::hx::IsNull( tileData )) {
HXLINE( 118)							continue;
            						}
HXLINE( 120)						rect->setTo(( (Float)(tileData->x) ),( (Float)(tileData->y) ),( (Float)(tileData->width) ),( (Float)(tileData->height) ));
HXLINE( 121)						tileRect = rect;
            					}
HXLINE( 124)					bitmapData = tileset->_hx___bitmapData;
HXLINE( 125)					if (::hx::IsNull( bitmapData )) {
HXLINE( 125)						continue;
            					}
HXLINE( 127)					if (::hx::IsInstanceNotEq( bitmapData,cacheBitmapData )) {
HXLINE( 129)						surface = bitmapData->getSurface();
HXLINE( 130)						pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXLINE( 131)						int _hx_tmp;
HXDLIN( 131)						if (smooth) {
HXLINE( 131)							_hx_tmp = 1;
            						}
            						else {
HXLINE( 131)							_hx_tmp = 3;
            						}
HXDLIN( 131)						::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp);
HXLINE( 133)						cairo->set_source(pattern);
HXLINE( 134)						cacheBitmapData = bitmapData;
            					}
HXLINE( 137)					if (blendModeEnabled) {
HXLINE( 139)						renderer->_hx___setBlendMode(blendMode);
            					}
HXLINE( 142)					renderer->applyMatrix(tileTransform,cairo);
HXLINE( 144)					matrix->tx = tileRect->x;
HXLINE( 145)					matrix->ty = tileRect->y;
HXLINE( 146)					::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(pattern,matrix);
HXLINE( 147)					cairo->set_source(pattern);
HXLINE( 149)					cairo->save();
HXLINE( 151)					cairo->newPath();
HXLINE( 152)					cairo->rectangle(( (Float)(0) ),( (Float)(0) ),tileRect->width,tileRect->height);
HXLINE( 153)					cairo->clip();
HXLINE( 155)					if ((alpha == 1)) {
HXLINE( 157)						cairo->paint();
            					}
            					else {
HXLINE( 161)						cairo->paintWithAlpha(alpha);
            					}
HXLINE( 164)					cairo->restore();
            				}
            			}
            		}
HXLINE( 168)		::openfl::geom::Matrix_obj::_hx___pool->release(tileTransform);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC14(CairoTilemap_obj,renderTileContainer,(void))

void CairoTilemap_obj::renderDrawable( ::openfl::display::Tilemap tilemap, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_577544eec98749ac_173_renderDrawable)
HXLINE( 175)		renderer->_hx___updateCacheBitmap(tilemap,false);
HXLINE( 177)		bool _hx_tmp;
HXDLIN( 177)		if (::hx::IsNotNull( tilemap->_hx___cacheBitmap )) {
HXLINE( 177)			_hx_tmp = !(tilemap->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE( 177)			_hx_tmp = false;
            		}
HXDLIN( 177)		if (_hx_tmp) {
HXLINE( 179)			 ::openfl::display::Bitmap bitmap = tilemap->_hx___cacheBitmap;
HXDLIN( 179)			if (bitmap->_hx___renderable) {
HXLINE( 179)				Float alpha = renderer->_hx___getAlpha(bitmap->_hx___worldAlpha);
HXDLIN( 179)				bool _hx_tmp;
HXDLIN( 179)				bool _hx_tmp1;
HXDLIN( 179)				if ((alpha > 0)) {
HXLINE( 179)					_hx_tmp1 = ::hx::IsNotNull( bitmap->_hx___bitmapData );
            				}
            				else {
HXLINE( 179)					_hx_tmp1 = false;
            				}
HXDLIN( 179)				if (_hx_tmp1) {
HXLINE( 179)					_hx_tmp = bitmap->_hx___bitmapData->_hx___isValid;
            				}
            				else {
HXLINE( 179)					_hx_tmp = false;
            				}
HXDLIN( 179)				if (_hx_tmp) {
HXLINE( 179)					 ::lime::graphics::cairo::Cairo cairo = renderer->cairo;
HXDLIN( 179)					renderer->_hx___setBlendMode(bitmap->_hx___worldBlendMode);
HXDLIN( 179)					renderer->_hx___pushMaskObject(bitmap,null());
HXDLIN( 179)					renderer->applyMatrix(bitmap->_hx___renderTransform,cairo);
HXDLIN( 179)					 ::Dynamic surface = bitmap->_hx___bitmapData->getSurface();
HXDLIN( 179)					if (::hx::IsNotNull( surface )) {
HXLINE( 179)						 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXDLIN( 179)						int _hx_tmp;
HXDLIN( 179)						bool _hx_tmp1;
HXDLIN( 179)						if (renderer->_hx___allowSmoothing) {
HXLINE( 179)							_hx_tmp1 = bitmap->smoothing;
            						}
            						else {
HXLINE( 179)							_hx_tmp1 = false;
            						}
HXDLIN( 179)						if (_hx_tmp1) {
HXLINE( 179)							_hx_tmp = 1;
            						}
            						else {
HXLINE( 179)							_hx_tmp = 3;
            						}
HXDLIN( 179)						::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp);
HXDLIN( 179)						cairo->set_source(pattern);
HXDLIN( 179)						if ((alpha == 1)) {
HXLINE( 179)							cairo->paint();
            						}
            						else {
HXLINE( 179)							cairo->paintWithAlpha(alpha);
            						}
            					}
HXDLIN( 179)					renderer->_hx___popMaskObject(bitmap,null());
HXDLIN( 179)					renderer->_hx___setBlendMode(10);
            				}
            			}
            		}
            		else {
HXLINE( 183)			::openfl::display::_internal::CairoDisplayObject_obj::render(tilemap,renderer);
HXLINE( 184)			::openfl::display::_internal::CairoTilemap_obj::render(tilemap,renderer);
            		}
HXLINE( 187)		renderer->_hx___renderEvent(tilemap);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTilemap_obj,renderDrawable,(void))

void CairoTilemap_obj::renderDrawableMask( ::openfl::display::Tilemap tilemap, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_577544eec98749ac_191_renderDrawableMask)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTilemap_obj,renderDrawableMask,(void))


CairoTilemap_obj::CairoTilemap_obj()
{
}

bool CairoTilemap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"renderDrawableMask") ) { outValue = renderDrawableMask_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"renderTileContainer") ) { outValue = renderTileContainer_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CairoTilemap_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CairoTilemap_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CairoTilemap_obj::__mClass;

static ::String CairoTilemap_obj_sStaticFields[] = {
	HX_("render",56,6b,29,05),
	HX_("renderTileContainer",fd,ba,73,84),
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	::String(null())
};

void CairoTilemap_obj::__register()
{
	CairoTilemap_obj _hx_dummy;
	CairoTilemap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.CairoTilemap",82,71,c8,9d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoTilemap_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CairoTilemap_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CairoTilemap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoTilemap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoTilemap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CairoTilemap_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_577544eec98749ac_31_boot)
HXDLIN(  31)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20)))))
            			->setFixed(1,HX_("statics",05,3c,65,36), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("renderTileContainer",fd,ba,73,84), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c))))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal