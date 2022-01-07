#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_math_FlxAngle
#include <flixel/math/FlxAngle.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Tooltip
#include <flixel/system/debug/Tooltip.h>
#endif
#ifndef INCLUDED_flixel_system_debug_TooltipOverlay
#include <flixel/system/debug/TooltipOverlay.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_Interaction
#include <flixel/system/debug/interaction/Interaction.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Tool
#include <flixel/system/debug/interaction/tools/Tool.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Transform
#include <flixel/system/debug/interaction/tools/Transform.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools__Transform_GraphicTransformCursorDefault
#include <flixel/system/debug/interaction/tools/_Transform/GraphicTransformCursorDefault.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools__Transform_GraphicTransformCursorRotate
#include <flixel/system/debug/interaction/tools/_Transform/GraphicTransformCursorRotate.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools__Transform_GraphicTransformCursorScaleX
#include <flixel/system/debug/interaction/tools/_Transform/GraphicTransformCursorScaleX.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools__Transform_GraphicTransformCursorScaleXY
#include <flixel/system/debug/interaction/tools/_Transform/GraphicTransformCursorScaleXY.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools__Transform_GraphicTransformCursorScaleY
#include <flixel/system/debug/interaction/tools/_Transform/GraphicTransformCursorScaleY.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools__Transform_GraphicTransformTool
#include <flixel/system/debug/interaction/tools/_Transform/GraphicTransformTool.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_32e1ba20177d3a98_41_new,"flixel.system.debug.interaction.tools.Transform","new",0xc0c1ec87,"flixel.system.debug.interaction.tools.Transform.new","flixel/system/debug/interaction/tools/Transform.hx",41,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_91_init,"flixel.system.debug.interaction.tools.Transform","init",0xe5a5c109,"flixel.system.debug.interaction.tools.Transform.init","flixel/system/debug/interaction/tools/Transform.hx",91,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_71_init,"flixel.system.debug.interaction.tools.Transform","init",0xe5a5c109,"flixel.system.debug.interaction.tools.Transform.init","flixel/system/debug/interaction/tools/Transform.hx",71,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_97_updateTargetArea,"flixel.system.debug.interaction.tools.Transform","updateTargetArea",0x94e90e60,"flixel.system.debug.interaction.tools.Transform.updateTargetArea","flixel/system/debug/interaction/tools/Transform.hx",97,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_114_startAction,"flixel.system.debug.interaction.tools.Transform","startAction",0xf6ddb4df,"flixel.system.debug.interaction.tools.Transform.startAction","flixel/system/debug/interaction/tools/Transform.hx",114,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_129_stopAction,"flixel.system.debug.interaction.tools.Transform","stopAction",0xc4725411,"flixel.system.debug.interaction.tools.Transform.stopAction","flixel/system/debug/interaction/tools/Transform.hx",129,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_137_getCursorNameByMarker,"flixel.system.debug.interaction.tools.Transform","getCursorNameByMarker",0x60e5246f,"flixel.system.debug.interaction.tools.Transform.getCursorNameByMarker","flixel/system/debug/interaction/tools/Transform.hx",137,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_148_handleInteractionsWithMarkersUI,"flixel.system.debug.interaction.tools.Transform","handleInteractionsWithMarkersUI",0xc12877e5,"flixel.system.debug.interaction.tools.Transform.handleInteractionsWithMarkersUI","flixel/system/debug/interaction/tools/Transform.hx",148,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_176_formatFloat,"flixel.system.debug.interaction.tools.Transform","formatFloat",0x24613a0c,"flixel.system.debug.interaction.tools.Transform.formatFloat","flixel/system/debug/interaction/tools/Transform.hx",176,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_182_showTooltip,"flixel.system.debug.interaction.tools.Transform","showTooltip",0xafd964ad,"flixel.system.debug.interaction.tools.Transform.showTooltip","flixel/system/debug/interaction/tools/Transform.hx",182,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_192_updateScaleActionDirection,"flixel.system.debug.interaction.tools.Transform","updateScaleActionDirection",0xc6e419a1,"flixel.system.debug.interaction.tools.Transform.updateScaleActionDirection","flixel/system/debug/interaction/tools/Transform.hx",192,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_201_updateScaleAction,"flixel.system.debug.interaction.tools.Transform","updateScaleAction",0x037020be,"flixel.system.debug.interaction.tools.Transform.updateScaleAction","flixel/system/debug/interaction/tools/Transform.hx",201,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_221_updateRotateAction,"flixel.system.debug.interaction.tools.Transform","updateRotateAction",0xd4c98fd3,"flixel.system.debug.interaction.tools.Transform.updateRotateAction","flixel/system/debug/interaction/tools/Transform.hx",221,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_227_updateAction,"flixel.system.debug.interaction.tools.Transform","updateAction",0x48508998,"flixel.system.debug.interaction.tools.Transform.updateAction","flixel/system/debug/interaction/tools/Transform.hx",227,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_238_updateMarkersPosition,"flixel.system.debug.interaction.tools.Transform","updateMarkersPosition",0x02147120,"flixel.system.debug.interaction.tools.Transform.updateMarkersPosition","flixel/system/debug/interaction/tools/Transform.hx",238,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_254_updateMarkersRotation,"flixel.system.debug.interaction.tools.Transform","updateMarkersRotation",0x3fa00db5,"flixel.system.debug.interaction.tools.Transform.updateMarkersRotation","flixel/system/debug/interaction/tools/Transform.hx",254,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_271_update,"flixel.system.debug.interaction.tools.Transform","update",0xdb183c42,"flixel.system.debug.interaction.tools.Transform.update","flixel/system/debug/interaction/tools/Transform.hx",271,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_292_drawTargetAreaOutline,"flixel.system.debug.interaction.tools.Transform","drawTargetAreaOutline",0x781824e7,"flixel.system.debug.interaction.tools.Transform.drawTargetAreaOutline","flixel/system/debug/interaction/tools/Transform.hx",292,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_303_drawMarkers,"flixel.system.debug.interaction.tools.Transform","drawMarkers",0x19efecfc,"flixel.system.debug.interaction.tools.Transform.drawMarkers","flixel/system/debug/interaction/tools/Transform.hx",303,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_317_draw,"flixel.system.debug.interaction.tools.Transform","draw",0xe25ab1fd,"flixel.system.debug.interaction.tools.Transform.draw","flixel/system/debug/interaction/tools/Transform.hx",317,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_332_activate,"flixel.system.debug.interaction.tools.Transform","activate",0x6c83922c,"flixel.system.debug.interaction.tools.Transform.activate","flixel/system/debug/interaction/tools/Transform.hx",332,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_354_deactivate,"flixel.system.debug.interaction.tools.Transform","deactivate",0xc07e22ed,"flixel.system.debug.interaction.tools.Transform.deactivate","flixel/system/debug/interaction/tools/Transform.hx",354,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_43_boot,"flixel.system.debug.interaction.tools.Transform","boot",0xe1060a2b,"flixel.system.debug.interaction.tools.Transform.boot","flixel/system/debug/interaction/tools/Transform.hx",43,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_44_boot,"flixel.system.debug.interaction.tools.Transform","boot",0xe1060a2b,"flixel.system.debug.interaction.tools.Transform.boot","flixel/system/debug/interaction/tools/Transform.hx",44,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_45_boot,"flixel.system.debug.interaction.tools.Transform","boot",0xe1060a2b,"flixel.system.debug.interaction.tools.Transform.boot","flixel/system/debug/interaction/tools/Transform.hx",45,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_46_boot,"flixel.system.debug.interaction.tools.Transform","boot",0xe1060a2b,"flixel.system.debug.interaction.tools.Transform.boot","flixel/system/debug/interaction/tools/Transform.hx",46,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_48_boot,"flixel.system.debug.interaction.tools.Transform","boot",0xe1060a2b,"flixel.system.debug.interaction.tools.Transform.boot","flixel/system/debug/interaction/tools/Transform.hx",48,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_49_boot,"flixel.system.debug.interaction.tools.Transform","boot",0xe1060a2b,"flixel.system.debug.interaction.tools.Transform.boot","flixel/system/debug/interaction/tools/Transform.hx",49,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_50_boot,"flixel.system.debug.interaction.tools.Transform","boot",0xe1060a2b,"flixel.system.debug.interaction.tools.Transform.boot","flixel/system/debug/interaction/tools/Transform.hx",50,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_51_boot,"flixel.system.debug.interaction.tools.Transform","boot",0xe1060a2b,"flixel.system.debug.interaction.tools.Transform.boot","flixel/system/debug/interaction/tools/Transform.hx",51,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_53_boot,"flixel.system.debug.interaction.tools.Transform","boot",0xe1060a2b,"flixel.system.debug.interaction.tools.Transform.boot","flixel/system/debug/interaction/tools/Transform.hx",53,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_54_boot,"flixel.system.debug.interaction.tools.Transform","boot",0xe1060a2b,"flixel.system.debug.interaction.tools.Transform.boot","flixel/system/debug/interaction/tools/Transform.hx",54,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_55_boot,"flixel.system.debug.interaction.tools.Transform","boot",0xe1060a2b,"flixel.system.debug.interaction.tools.Transform.boot","flixel/system/debug/interaction/tools/Transform.hx",55,0xb006466c)
HX_LOCAL_STACK_FRAME(_hx_pos_32e1ba20177d3a98_56_boot,"flixel.system.debug.interaction.tools.Transform","boot",0xe1060a2b,"flixel.system.debug.interaction.tools.Transform.boot","flixel/system/debug/interaction/tools/Transform.hx",56,0xb006466c)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{
namespace tools{

void Transform_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_32e1ba20177d3a98_41_new)
HXLINE(  68)		this->_mouseCursor =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  67)		this->_targetArea =  ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  65)		this->_markers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  63)		this->_actionScaleDirection =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  60)		this->_actionStartPoint =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  58)		this->_actionTargetStartScale =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  41)		super::__construct();
            	}

Dynamic Transform_obj::__CreateEmpty() { return new Transform_obj; }

void *Transform_obj::_hx_vtable = 0;

Dynamic Transform_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Transform_obj > _hx_result = new Transform_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Transform_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1361d5a9 || inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x5020ad7b) {
			return inClassId==(int)0x4af7dd8e || inClassId==(int)0x5020ad7b;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

 ::flixel::_hx_system::debug::interaction::tools::Tool Transform_obj::init( ::flixel::_hx_system::debug::interaction::Interaction brain){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::flixel::_hx_system::debug::interaction::tools::Transform,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_32e1ba20177d3a98_91_init)
HXLINE(  91)			_gthis->_target = null();
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_32e1ba20177d3a98_71_init)
HXDLIN(  71)		 ::flixel::_hx_system::debug::interaction::tools::Transform _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  72)		this->super::init(brain);
HXLINE(  74)		this->_name = HX_("Transform",4c,0d,66,e7);
HXLINE(  75)		this->setButton(::hx::ClassOf< ::flixel::_hx_system::debug::interaction::tools::_Transform::GraphicTransformTool >());
HXLINE(  76)		this->setCursor( ::flixel::_hx_system::debug::interaction::tools::_Transform::GraphicTransformCursorDefault_obj::__alloc( HX_CTX ,0,0,null(),null()));
HXLINE(  78)		brain->registerCustomCursor(HX_("transformRotate",e7,c0,75,06), ::flixel::_hx_system::debug::interaction::tools::_Transform::GraphicTransformCursorRotate_obj::__alloc( HX_CTX ,0,0,null(),null()));
HXLINE(  79)		brain->registerCustomCursor(HX_("transformScaleX",1a,65,7b,77), ::flixel::_hx_system::debug::interaction::tools::_Transform::GraphicTransformCursorScaleX_obj::__alloc( HX_CTX ,0,0,null(),null()));
HXLINE(  80)		brain->registerCustomCursor(HX_("transformScaleY",1b,65,7b,77), ::flixel::_hx_system::debug::interaction::tools::_Transform::GraphicTransformCursorScaleY_obj::__alloc( HX_CTX ,0,0,null(),null()));
HXLINE(  81)		brain->registerCustomCursor(HX_("transformScaleXY",ff,11,7d,14), ::flixel::_hx_system::debug::interaction::tools::_Transform::GraphicTransformCursorScaleXY_obj::__alloc( HX_CTX ,0,0,null(),null()));
HXLINE(  83)		this->_tooltip = ::flixel::_hx_system::debug::Tooltip_obj::add(null(),HX_("",00,00,00,00));
HXLINE(  84)		this->_tooltip->textField->set_wordWrap(false);
HXLINE(  86)		{
HXLINE(  87)			::Array< ::Dynamic> _hx_tmp = this->_markers;
HXDLIN(  87)			_hx_tmp->push( ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN(  87)			::Array< ::Dynamic> _hx_tmp1 = this->_markers;
HXDLIN(  87)			_hx_tmp1->push( ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN(  87)			::Array< ::Dynamic> _hx_tmp2 = this->_markers;
HXDLIN(  87)			_hx_tmp2->push( ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN(  87)			::Array< ::Dynamic> _hx_tmp3 = this->_markers;
HXDLIN(  87)			_hx_tmp3->push( ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE(  89)		this->stopAction();
HXLINE(  91)		::flixel::FlxG_obj::signals->preStateSwitch->add( ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE(  92)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


void Transform_obj::updateTargetArea(){
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_97_updateTargetArea)
HXDLIN(  97)		if (::hx::IsNull( this->_target )) {
HXLINE(  99)			{
HXLINE(  99)				 ::flixel::math::FlxRect _this = this->_targetArea;
HXDLIN(  99)				_this->x = ( (Float)(0) );
HXDLIN(  99)				_this->y = ( (Float)(0) );
            			}
HXLINE( 100)			{
HXLINE( 100)				 ::flixel::math::FlxRect _this1 = this->_targetArea;
HXDLIN( 100)				_this1->width = ( (Float)(0) );
HXDLIN( 100)				_this1->height = ( (Float)(0) );
            			}
            		}
            		else {
HXLINE( 104)			{
HXLINE( 104)				 ::flixel::math::FlxRect _this = this->_targetArea;
HXDLIN( 104)				_this->x = (this->_target->x - ::flixel::FlxG_obj::camera->scroll->x);
HXDLIN( 104)				_this->y = (this->_target->y - ::flixel::FlxG_obj::camera->scroll->y);
            			}
HXLINE( 105)			{
HXLINE( 105)				 ::flixel::math::FlxRect _this1 = this->_targetArea;
HXDLIN( 105)				Float Width = this->_target->get_width();
HXDLIN( 105)				Float Height = this->_target->get_height();
HXDLIN( 105)				_this1->width = Width;
HXDLIN( 105)				_this1->height = Height;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,updateTargetArea,(void))

void Transform_obj::startAction(int whichMarker){
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_114_startAction)
HXLINE( 115)		if (this->_actionHappening) {
HXLINE( 116)			return;
            		}
HXLINE( 118)		this->_actionHappening = true;
HXLINE( 119)		this->_actionMarker = whichMarker;
HXLINE( 120)		this->_actionStartPoint->set((this->_brain->flixelPointer->x - ::flixel::FlxG_obj::camera->scroll->x),(this->_brain->flixelPointer->y - ::flixel::FlxG_obj::camera->scroll->y));
HXLINE( 121)		this->_actionTargetStartAngle = ::flixel::math::FlxAngle_obj::angleBetweenPoint(this->_target,this->_markers->__get(0).StaticCast<  ::flixel::math::FlxPoint >(),true);
HXLINE( 122)		this->_actionTargetStartScale->set(this->_target->scale->x,this->_target->scale->y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,startAction,(void))

void Transform_obj::stopAction(){
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_129_stopAction)
HXLINE( 130)		this->_actionHappening = false;
HXLINE( 131)		this->_actionMarker = -1;
HXLINE( 132)		this->_tooltip->setVisible(false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,stopAction,(void))

::String Transform_obj::getCursorNameByMarker(int marker){
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_137_getCursorNameByMarker)
HXDLIN( 137)		switch((int)(marker)){
            			case (int)0: {
HXLINE( 139)				return HX_("transformRotate",e7,c0,75,06);
            			}
            			break;
            			case (int)1: {
HXLINE( 140)				return HX_("transformScaleX",1a,65,7b,77);
            			}
            			break;
            			case (int)2: {
HXLINE( 141)				return HX_("transformScaleXY",ff,11,7d,14);
            			}
            			break;
            			case (int)3: {
HXLINE( 142)				return HX_("transformScaleY",1b,65,7b,77);
            			}
            			break;
            			default:{
HXLINE( 143)				return HX_("",00,00,00,00);
            			}
            		}
HXLINE( 137)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,getCursorNameByMarker,return )

void Transform_obj::handleInteractionsWithMarkersUI(){
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_148_handleInteractionsWithMarkersUI)
HXLINE( 149)		if (this->_actionHappening) {
HXLINE( 152)			return;
            		}
HXLINE( 154)		::String cursorName = HX_("",00,00,00,00);
HXLINE( 156)		{
HXLINE( 156)			int _g = 0;
HXDLIN( 156)			int _g1 = this->_markers->length;
HXDLIN( 156)			while((_g < _g1)){
HXLINE( 156)				_g = (_g + 1);
HXDLIN( 156)				int i = (_g - 1);
HXLINE( 158)				if ((this->_mouseCursor->distanceTo(this->_markers->__get(i).StaticCast<  ::flixel::math::FlxPoint >()) <= ((Float)5.0))) {
HXLINE( 160)					cursorName = this->getCursorNameByMarker(i);
HXLINE( 161)					if (this->_brain->pointerJustPressed) {
HXLINE( 163)						this->startAction(i);
HXLINE( 164)						goto _hx_goto_7;
            					}
            				}
            			}
            			_hx_goto_7:;
            		}
HXLINE( 169)		if ((cursorName != HX_("",00,00,00,00))) {
HXLINE( 170)			this->setCursorInUse(cursorName);
            		}
            		else {
HXLINE( 172)			this->useDefaultCursor();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,handleInteractionsWithMarkersUI,(void))

::String Transform_obj::formatFloat(Float number){
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_176_formatFloat)
HXLINE( 177)		Float value = ::flixel::math::FlxMath_obj::roundDecimal(number,::flixel::FlxG_obj::debugger->precision);
HXLINE( 178)		return ::Std_obj::string(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,formatFloat,return )

void Transform_obj::showTooltip(::String text){
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_182_showTooltip)
HXLINE( 183)		if (!(this->_tooltip->get_visible())) {
HXLINE( 184)			this->_tooltip->setVisible(true);
            		}
HXLINE( 186)		this->_tooltip->set_x((this->_target->x - ::flixel::FlxG_obj::camera->scroll->x));
HXLINE( 187)		this->_tooltip->set_y((this->_target->y - ::flixel::FlxG_obj::camera->scroll->y));
HXLINE( 188)		this->_tooltip->setText(text);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,showTooltip,(void))

void Transform_obj::updateScaleActionDirection(){
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_192_updateScaleActionDirection)
HXLINE( 193)		Float deltaX = (this->_mouseCursor->x - this->_actionStartPoint->x);
HXLINE( 194)		Float deltaY = (this->_mouseCursor->y - this->_actionStartPoint->y);
HXLINE( 196)		Float _hx_tmp;
HXDLIN( 196)		if ((deltaX >= 0)) {
HXLINE( 196)			_hx_tmp = ( (Float)(1) );
            		}
            		else {
HXLINE( 196)			_hx_tmp = ( (Float)(-1) );
            		}
HXDLIN( 196)		this->_actionScaleDirection->set_x(_hx_tmp);
HXLINE( 197)		Float _hx_tmp1;
HXDLIN( 197)		if ((deltaY >= 0)) {
HXLINE( 197)			_hx_tmp1 = ( (Float)(1) );
            		}
            		else {
HXLINE( 197)			_hx_tmp1 = ( (Float)(-1) );
            		}
HXDLIN( 197)		this->_actionScaleDirection->set_y(_hx_tmp1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,updateScaleActionDirection,(void))

void Transform_obj::updateScaleAction(){
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_201_updateScaleAction)
HXLINE( 204)		this->updateScaleActionDirection();
HXLINE( 206)		Float deltaX = ((this->_actionScaleDirection->x * ::Math_obj::abs((this->_mouseCursor->x - this->_actionStartPoint->x))) / ((Float)10.0));
HXLINE( 207)		Float deltaY = ((this->_actionScaleDirection->y * ::Math_obj::abs((this->_mouseCursor->y - this->_actionStartPoint->y))) / ((Float)10.0));
HXLINE( 209)		bool _hx_tmp;
HXDLIN( 209)		if ((this->_actionMarker != 1)) {
HXLINE( 209)			_hx_tmp = (this->_actionMarker == 2);
            		}
            		else {
HXLINE( 209)			_hx_tmp = true;
            		}
HXDLIN( 209)		if (_hx_tmp) {
HXLINE( 210)			this->_target->scale->set_x((this->_actionTargetStartScale->x + deltaX));
            		}
HXLINE( 211)		bool _hx_tmp1;
HXDLIN( 211)		if ((this->_actionMarker != 2)) {
HXLINE( 211)			_hx_tmp1 = (this->_actionMarker == 3);
            		}
            		else {
HXLINE( 211)			_hx_tmp1 = true;
            		}
HXDLIN( 211)		if (_hx_tmp1) {
HXLINE( 212)			this->_target->scale->set_y((this->_actionTargetStartScale->y + deltaY));
            		}
HXLINE( 214)		this->_target->updateHitbox();
HXLINE( 215)		{
HXLINE( 215)			 ::flixel::FlxSprite _this = this->_target;
HXDLIN( 215)			_this->origin->set((( (Float)(_this->frameWidth) ) * ((Float)0.5)),(( (Float)(_this->frameHeight) ) * ((Float)0.5)));
            		}
HXLINE( 217)		::String _hx_tmp2 = ((HX_("w: ",dd,7e,5a,00) + this->formatFloat(this->_target->get_width())) + HX_("\nh: ",44,3f,eb,06));
HXDLIN( 217)		this->showTooltip((_hx_tmp2 + this->formatFloat(this->_target->get_height())));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,updateScaleAction,(void))

void Transform_obj::updateRotateAction(){
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_221_updateRotateAction)
HXLINE( 222)		 ::flixel::FlxSprite _hx_tmp = this->_target;
HXDLIN( 222)		Float _hx_tmp1 = ::flixel::math::FlxAngle_obj::angleBetweenPoint(this->_target,this->_brain->flixelPointer,true);
HXDLIN( 222)		_hx_tmp->set_angle((_hx_tmp1 - this->_actionTargetStartAngle));
HXLINE( 223)		::String _hx_tmp2 = ((HX_("deg: ",ec,e9,22,d7) + this->formatFloat(this->_target->angle)) + HX_("\nrad: ",71,83,a9,e3));
HXDLIN( 223)		this->showTooltip((_hx_tmp2 + this->formatFloat((this->_target->angle * (::Math_obj::PI / ( (Float)(180) ))))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,updateRotateAction,(void))

void Transform_obj::updateAction(){
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_227_updateAction)
HXLINE( 228)		bool _hx_tmp;
HXDLIN( 228)		if (this->_actionHappening) {
HXLINE( 228)			_hx_tmp = (this->_actionMarker < 0);
            		}
            		else {
HXLINE( 228)			_hx_tmp = true;
            		}
HXDLIN( 228)		if (_hx_tmp) {
HXLINE( 229)			return;
            		}
HXLINE( 231)		if ((this->_actionMarker == 0)) {
HXLINE( 232)			this->updateRotateAction();
            		}
            		else {
HXLINE( 234)			this->updateScaleAction();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,updateAction,(void))

void Transform_obj::updateMarkersPosition(){
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_238_updateMarkersPosition)
HXLINE( 239)		Float topLeftX = (this->_targetArea->x - ((Float)5.0));
HXLINE( 240)		Float topLeftY = (this->_targetArea->y - ((Float)5.0));
HXLINE( 241)		Float width = (this->_targetArea->width + ((Float)10.));
HXLINE( 242)		Float height = (this->_targetArea->height + ((Float)10.));
HXLINE( 244)		this->_markers->__get(0).StaticCast<  ::flixel::math::FlxPoint >()->set(topLeftX,topLeftY);
HXLINE( 245)		this->_markers->__get(1).StaticCast<  ::flixel::math::FlxPoint >()->set((topLeftX + width),topLeftY);
HXLINE( 246)		this->_markers->__get(2).StaticCast<  ::flixel::math::FlxPoint >()->set((topLeftX + width),(topLeftY + height));
HXLINE( 247)		this->_markers->__get(3).StaticCast<  ::flixel::math::FlxPoint >()->set(topLeftX,(topLeftY + height));
HXLINE( 249)		if ((this->_target->angle != 0)) {
HXLINE( 250)			this->updateMarkersRotation(width,height);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,updateMarkersPosition,(void))

void Transform_obj::updateMarkersRotation(Float outlineWidth,Float outlineHeight){
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_254_updateMarkersRotation)
HXLINE( 255)		Float rotationAngleRad = (this->_target->angle * (::Math_obj::PI / ( (Float)(180) )));
HXLINE( 256)		Float originX = (this->_markers->__get(0).StaticCast<  ::flixel::math::FlxPoint >()->x + (outlineWidth / ( (Float)(2) )));
HXLINE( 257)		Float originY = (this->_markers->__get(0).StaticCast<  ::flixel::math::FlxPoint >()->y + (outlineHeight / ( (Float)(2) )));
HXLINE( 258)		Float n = (rotationAngleRad + ((Float)1.570796327));
HXDLIN( 258)		n = (n * ((Float)0.3183098862));
HXDLIN( 258)		if ((n > 1)) {
HXLINE( 258)			n = (n - ( (Float)(((::Math_obj::ceil(n) >> 1) << 1)) ));
            		}
            		else {
HXLINE( 258)			if ((n < -1)) {
HXLINE( 258)				n = (n + ((::Math_obj::ceil(-(n)) >> 1) << 1));
            			}
            		}
HXDLIN( 258)		Float cos;
HXDLIN( 258)		if ((n > 0)) {
HXLINE( 258)			cos = (n * (((Float)3.1) + (n * (((Float)0.5) + (n * (((Float)-7.2) + (n * ((Float)3.6))))))));
            		}
            		else {
HXLINE( 258)			cos = (n * (((Float)3.1) - (n * (((Float)0.5) + (n * (((Float)7.2) + (n * ((Float)3.6))))))));
            		}
HXLINE( 259)		Float n1 = rotationAngleRad;
HXDLIN( 259)		n1 = (n1 * ((Float)0.3183098862));
HXDLIN( 259)		if ((n1 > 1)) {
HXLINE( 259)			n1 = (n1 - ( (Float)(((::Math_obj::ceil(n1) >> 1) << 1)) ));
            		}
            		else {
HXLINE( 259)			if ((n1 < -1)) {
HXLINE( 259)				n1 = (n1 + ((::Math_obj::ceil(-(n1)) >> 1) << 1));
            			}
            		}
HXDLIN( 259)		Float sin;
HXDLIN( 259)		if ((n1 > 0)) {
HXLINE( 259)			sin = (n1 * (((Float)3.1) + (n1 * (((Float)0.5) + (n1 * (((Float)-7.2) + (n1 * ((Float)3.6))))))));
            		}
            		else {
HXLINE( 259)			sin = (n1 * (((Float)3.1) - (n1 * (((Float)0.5) + (n1 * (((Float)7.2) + (n1 * ((Float)3.6))))))));
            		}
HXLINE( 261)		{
HXLINE( 261)			int _g = 0;
HXDLIN( 261)			::Array< ::Dynamic> _g1 = this->_markers;
HXDLIN( 261)			while((_g < _g1->length)){
HXLINE( 261)				 ::flixel::math::FlxPoint marker = _g1->__get(_g).StaticCast<  ::flixel::math::FlxPoint >();
HXDLIN( 261)				_g = (_g + 1);
HXLINE( 264)				Float rotatedX = (((marker->x - originX) * cos) - ((marker->y - originY) * sin));
HXLINE( 265)				Float rotatedY = (((marker->x - originX) * sin) + ((marker->y - originY) * cos));
HXLINE( 266)				marker->set((rotatedX + originX),(rotatedY + originY));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Transform_obj,updateMarkersRotation,(void))

void Transform_obj::update(){
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_271_update)
HXLINE( 272)		bool _hx_tmp;
HXDLIN( 272)		if (this->isActive()) {
HXLINE( 272)			_hx_tmp = ::hx::IsNull( this->_target );
            		}
            		else {
HXLINE( 272)			_hx_tmp = true;
            		}
HXDLIN( 272)		if (_hx_tmp) {
HXLINE( 273)			return;
            		}
HXLINE( 276)		this->_mouseCursor->set_x((this->_brain->flixelPointer->x - ::flixel::FlxG_obj::camera->scroll->x));
HXLINE( 277)		this->_mouseCursor->set_y((this->_brain->flixelPointer->y - ::flixel::FlxG_obj::camera->scroll->y));
HXLINE( 279)		this->updateTargetArea();
HXLINE( 280)		this->updateMarkersPosition();
HXLINE( 281)		this->handleInteractionsWithMarkersUI();
HXLINE( 283)		if (this->_actionHappening) {
HXLINE( 285)			this->updateAction();
HXLINE( 286)			if (this->_brain->pointerJustReleased) {
HXLINE( 287)				this->stopAction();
            			}
            		}
            	}


void Transform_obj::drawTargetAreaOutline( ::openfl::display::Graphics gfx){
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_292_drawTargetAreaOutline)
HXLINE( 293)		gfx->lineStyle(((Float)0.9),-65281,((Float)1.0),false,2,2,null(),null());
HXLINE( 295)		gfx->moveTo(this->_markers->__get(0).StaticCast<  ::flixel::math::FlxPoint >()->x,this->_markers->__get(0).StaticCast<  ::flixel::math::FlxPoint >()->y);
HXLINE( 296)		{
HXLINE( 296)			int _g = 0;
HXDLIN( 296)			int _g1 = this->_markers->length;
HXDLIN( 296)			while((_g < _g1)){
HXLINE( 296)				_g = (_g + 1);
HXDLIN( 296)				int i = (_g - 1);
HXLINE( 297)				gfx->lineTo(this->_markers->__get(i).StaticCast<  ::flixel::math::FlxPoint >()->x,this->_markers->__get(i).StaticCast<  ::flixel::math::FlxPoint >()->y);
            			}
            		}
HXLINE( 299)		gfx->lineTo(this->_markers->__get(0).StaticCast<  ::flixel::math::FlxPoint >()->x,this->_markers->__get(0).StaticCast<  ::flixel::math::FlxPoint >()->y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,drawTargetAreaOutline,(void))

void Transform_obj::drawMarkers( ::openfl::display::Graphics gfx){
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_303_drawMarkers)
HXLINE( 304)		gfx->lineStyle(((Float)0.9),-65281,((Float)1.0),false,2,2,null(),null());
HXLINE( 305)		gfx->beginFill(-65281,null());
HXLINE( 306)		{
HXLINE( 306)			int _g = 0;
HXDLIN( 306)			int _g1 = this->_markers->length;
HXDLIN( 306)			while((_g < _g1)){
HXLINE( 306)				_g = (_g + 1);
HXDLIN( 306)				int i = (_g - 1);
HXLINE( 307)				if ((i == 0)) {
HXLINE( 309)					gfx->drawCircle(this->_markers->__get(i).StaticCast<  ::flixel::math::FlxPoint >()->x,this->_markers->__get(i).StaticCast<  ::flixel::math::FlxPoint >()->y,((Float)2.7));
            				}
            				else {
HXLINE( 312)					gfx->drawRect((this->_markers->__get(i).StaticCast<  ::flixel::math::FlxPoint >()->x - ((Float)1.5)),(this->_markers->__get(i).StaticCast<  ::flixel::math::FlxPoint >()->y - ((Float)1.5)),((Float)3.0),((Float)3.0));
            				}
            			}
            		}
HXLINE( 313)		gfx->endFill();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,drawMarkers,(void))

void Transform_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_317_draw)
HXLINE( 318)		 ::openfl::display::Graphics gfx = this->_brain->getDebugGraphics();
HXLINE( 320)		bool _hx_tmp;
HXDLIN( 320)		bool _hx_tmp1;
HXDLIN( 320)		if (::hx::IsNotNull( gfx )) {
HXLINE( 320)			_hx_tmp1 = ::hx::IsNull( this->_target );
            		}
            		else {
HXLINE( 320)			_hx_tmp1 = true;
            		}
HXDLIN( 320)		if (!(_hx_tmp1)) {
HXLINE( 320)			_hx_tmp = !(this->isActive());
            		}
            		else {
HXLINE( 320)			_hx_tmp = true;
            		}
HXDLIN( 320)		if (_hx_tmp) {
HXLINE( 321)			return;
            		}
HXLINE( 323)		this->drawTargetAreaOutline(gfx);
HXLINE( 324)		this->drawMarkers(gfx);
HXLINE( 327)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 328)			::flixel::FlxG_obj::camera->buffer->draw(::flixel::util::FlxSpriteUtil_obj::flashGfxSprite,null(),null(),null(),null(),null());
            		}
            	}


void Transform_obj::activate(){
            	HX_GC_STACKFRAME(&_hx_pos_32e1ba20177d3a98_332_activate)
HXLINE( 333)		this->_target = null();
HXLINE( 335)		if ((this->_brain->selectedItems->length == 0)) {
HXLINE( 336)			return;
            		}
HXLINE( 338)		{
HXLINE( 338)			 ::Dynamic filter = null();
HXDLIN( 338)			 ::flixel::group::FlxTypedGroupIterator member =  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->_brain->selectedItems->members,filter);
HXDLIN( 338)			while(member->hasNext()){
HXLINE( 338)				 ::flixel::FlxObject member1 = member->next().StaticCast<  ::flixel::FlxObject >();
HXLINE( 340)				bool _hx_tmp;
HXDLIN( 340)				bool _hx_tmp1;
HXDLIN( 340)				if (::hx::IsNotNull( member1 )) {
HXLINE( 340)					_hx_tmp1 = ::hx::IsNotNull( member1->scrollFactor );
            				}
            				else {
HXLINE( 340)					_hx_tmp1 = false;
            				}
HXDLIN( 340)				if (_hx_tmp1) {
HXLINE( 340)					_hx_tmp = member1->isOnScreen(null());
            				}
            				else {
HXLINE( 340)					_hx_tmp = false;
            				}
HXDLIN( 340)				if (_hx_tmp) {
HXLINE( 344)					this->_target = ( ( ::flixel::FlxSprite)(member1) );
HXLINE( 345)					goto _hx_goto_24;
            				}
            			}
            			_hx_goto_24:;
            		}
HXLINE( 349)		this->_brain->shouldDrawItemsSelection = false;
            	}


void Transform_obj::deactivate(){
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_354_deactivate)
HXDLIN( 354)		this->_brain->shouldDrawItemsSelection = true;
            	}


Float Transform_obj::OUTLINE_PADDING;

Float Transform_obj::MARKER_SIZE;

Float Transform_obj::MARKER_INTERACTION_DISTANCE;

Float Transform_obj::RESIZE_STEP;

::String Transform_obj::CURSOR_ROTATE;

::String Transform_obj::CURSOR_SCALE_X;

::String Transform_obj::CURSOR_SCALE_Y;

::String Transform_obj::CURSOR_SCALE_XY;

int Transform_obj::MARKER_ROTATE;

int Transform_obj::MARKER_SCALE_X;

int Transform_obj::MARKER_SCALE_XY;

int Transform_obj::MARKER_SCALE_Y;


::hx::ObjectPtr< Transform_obj > Transform_obj::__new() {
	::hx::ObjectPtr< Transform_obj > __this = new Transform_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Transform_obj > Transform_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Transform_obj *__this = (Transform_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Transform_obj), true, "flixel.system.debug.interaction.tools.Transform"));
	*(void **)__this = Transform_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Transform_obj::Transform_obj()
{
}

void Transform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Transform);
	HX_MARK_MEMBER_NAME(_actionTargetStartScale,"_actionTargetStartScale");
	HX_MARK_MEMBER_NAME(_actionTargetStartAngle,"_actionTargetStartAngle");
	HX_MARK_MEMBER_NAME(_actionStartPoint,"_actionStartPoint");
	HX_MARK_MEMBER_NAME(_actionHappening,"_actionHappening");
	HX_MARK_MEMBER_NAME(_actionMarker,"_actionMarker");
	HX_MARK_MEMBER_NAME(_actionScaleDirection,"_actionScaleDirection");
	HX_MARK_MEMBER_NAME(_tooltip,"_tooltip");
	HX_MARK_MEMBER_NAME(_markers,"_markers");
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(_targetArea,"_targetArea");
	HX_MARK_MEMBER_NAME(_mouseCursor,"_mouseCursor");
	 ::flixel::_hx_system::debug::interaction::tools::Tool_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Transform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_actionTargetStartScale,"_actionTargetStartScale");
	HX_VISIT_MEMBER_NAME(_actionTargetStartAngle,"_actionTargetStartAngle");
	HX_VISIT_MEMBER_NAME(_actionStartPoint,"_actionStartPoint");
	HX_VISIT_MEMBER_NAME(_actionHappening,"_actionHappening");
	HX_VISIT_MEMBER_NAME(_actionMarker,"_actionMarker");
	HX_VISIT_MEMBER_NAME(_actionScaleDirection,"_actionScaleDirection");
	HX_VISIT_MEMBER_NAME(_tooltip,"_tooltip");
	HX_VISIT_MEMBER_NAME(_markers,"_markers");
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(_targetArea,"_targetArea");
	HX_VISIT_MEMBER_NAME(_mouseCursor,"_mouseCursor");
	 ::flixel::_hx_system::debug::interaction::tools::Tool_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Transform_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { return ::hx::Val( _target ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_tooltip") ) { return ::hx::Val( _tooltip ); }
		if (HX_FIELD_EQ(inName,"_markers") ) { return ::hx::Val( _markers ); }
		if (HX_FIELD_EQ(inName,"activate") ) { return ::hx::Val( activate_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stopAction") ) { return ::hx::Val( stopAction_dyn() ); }
		if (HX_FIELD_EQ(inName,"deactivate") ) { return ::hx::Val( deactivate_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_targetArea") ) { return ::hx::Val( _targetArea ); }
		if (HX_FIELD_EQ(inName,"startAction") ) { return ::hx::Val( startAction_dyn() ); }
		if (HX_FIELD_EQ(inName,"formatFloat") ) { return ::hx::Val( formatFloat_dyn() ); }
		if (HX_FIELD_EQ(inName,"showTooltip") ) { return ::hx::Val( showTooltip_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawMarkers") ) { return ::hx::Val( drawMarkers_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_mouseCursor") ) { return ::hx::Val( _mouseCursor ); }
		if (HX_FIELD_EQ(inName,"updateAction") ) { return ::hx::Val( updateAction_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_actionMarker") ) { return ::hx::Val( _actionMarker ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_actionHappening") ) { return ::hx::Val( _actionHappening ); }
		if (HX_FIELD_EQ(inName,"updateTargetArea") ) { return ::hx::Val( updateTargetArea_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_actionStartPoint") ) { return ::hx::Val( _actionStartPoint ); }
		if (HX_FIELD_EQ(inName,"updateScaleAction") ) { return ::hx::Val( updateScaleAction_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"updateRotateAction") ) { return ::hx::Val( updateRotateAction_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_actionScaleDirection") ) { return ::hx::Val( _actionScaleDirection ); }
		if (HX_FIELD_EQ(inName,"getCursorNameByMarker") ) { return ::hx::Val( getCursorNameByMarker_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateMarkersPosition") ) { return ::hx::Val( updateMarkersPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateMarkersRotation") ) { return ::hx::Val( updateMarkersRotation_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawTargetAreaOutline") ) { return ::hx::Val( drawTargetAreaOutline_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_actionTargetStartScale") ) { return ::hx::Val( _actionTargetStartScale ); }
		if (HX_FIELD_EQ(inName,"_actionTargetStartAngle") ) { return ::hx::Val( _actionTargetStartAngle ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"updateScaleActionDirection") ) { return ::hx::Val( updateScaleActionDirection_dyn() ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"handleInteractionsWithMarkersUI") ) { return ::hx::Val( handleInteractionsWithMarkersUI_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Transform_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_tooltip") ) { _tooltip=inValue.Cast<  ::flixel::_hx_system::debug::TooltipOverlay >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_markers") ) { _markers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_targetArea") ) { _targetArea=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_mouseCursor") ) { _mouseCursor=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_actionMarker") ) { _actionMarker=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_actionHappening") ) { _actionHappening=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_actionStartPoint") ) { _actionStartPoint=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_actionScaleDirection") ) { _actionScaleDirection=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_actionTargetStartScale") ) { _actionTargetStartScale=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_actionTargetStartAngle") ) { _actionTargetStartAngle=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Transform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_actionTargetStartScale",ee,30,88,d1));
	outFields->push(HX_("_actionTargetStartAngle",37,a6,9b,7b));
	outFields->push(HX_("_actionStartPoint",43,ba,70,3c));
	outFields->push(HX_("_actionHappening",2b,20,48,24));
	outFields->push(HX_("_actionMarker",ef,64,da,e2));
	outFields->push(HX_("_actionScaleDirection",8a,fe,8a,8a));
	outFields->push(HX_("_tooltip",84,06,45,a4));
	outFields->push(HX_("_markers",fa,e6,ae,a1));
	outFields->push(HX_("_target",f0,04,64,f5));
	outFields->push(HX_("_targetArea",9d,f4,2e,6d));
	outFields->push(HX_("_mouseCursor",dc,70,7a,9a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Transform_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(Transform_obj,_actionTargetStartScale),HX_("_actionTargetStartScale",ee,30,88,d1)},
	{::hx::fsFloat,(int)offsetof(Transform_obj,_actionTargetStartAngle),HX_("_actionTargetStartAngle",37,a6,9b,7b)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(Transform_obj,_actionStartPoint),HX_("_actionStartPoint",43,ba,70,3c)},
	{::hx::fsBool,(int)offsetof(Transform_obj,_actionHappening),HX_("_actionHappening",2b,20,48,24)},
	{::hx::fsInt,(int)offsetof(Transform_obj,_actionMarker),HX_("_actionMarker",ef,64,da,e2)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(Transform_obj,_actionScaleDirection),HX_("_actionScaleDirection",8a,fe,8a,8a)},
	{::hx::fsObject /*  ::flixel::_hx_system::debug::TooltipOverlay */ ,(int)offsetof(Transform_obj,_tooltip),HX_("_tooltip",84,06,45,a4)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Transform_obj,_markers),HX_("_markers",fa,e6,ae,a1)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(Transform_obj,_target),HX_("_target",f0,04,64,f5)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(Transform_obj,_targetArea),HX_("_targetArea",9d,f4,2e,6d)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(Transform_obj,_mouseCursor),HX_("_mouseCursor",dc,70,7a,9a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Transform_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Transform_obj::OUTLINE_PADDING,HX_("OUTLINE_PADDING",94,a4,68,c0)},
	{::hx::fsFloat,(void *) &Transform_obj::MARKER_SIZE,HX_("MARKER_SIZE",a6,e0,9b,d1)},
	{::hx::fsFloat,(void *) &Transform_obj::MARKER_INTERACTION_DISTANCE,HX_("MARKER_INTERACTION_DISTANCE",87,22,47,84)},
	{::hx::fsFloat,(void *) &Transform_obj::RESIZE_STEP,HX_("RESIZE_STEP",b7,b0,51,ee)},
	{::hx::fsString,(void *) &Transform_obj::CURSOR_ROTATE,HX_("CURSOR_ROTATE",e4,6f,15,0c)},
	{::hx::fsString,(void *) &Transform_obj::CURSOR_SCALE_X,HX_("CURSOR_SCALE_X",5a,a2,96,fa)},
	{::hx::fsString,(void *) &Transform_obj::CURSOR_SCALE_Y,HX_("CURSOR_SCALE_Y",5b,a2,96,fa)},
	{::hx::fsString,(void *) &Transform_obj::CURSOR_SCALE_XY,HX_("CURSOR_SCALE_XY",bf,6c,37,49)},
	{::hx::fsInt,(void *) &Transform_obj::MARKER_ROTATE,HX_("MARKER_ROTATE",80,ed,e3,62)},
	{::hx::fsInt,(void *) &Transform_obj::MARKER_SCALE_X,HX_("MARKER_SCALE_X",3e,0d,76,98)},
	{::hx::fsInt,(void *) &Transform_obj::MARKER_SCALE_XY,HX_("MARKER_SCALE_XY",5b,89,d5,ce)},
	{::hx::fsInt,(void *) &Transform_obj::MARKER_SCALE_Y,HX_("MARKER_SCALE_Y",3f,0d,76,98)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Transform_obj_sMemberFields[] = {
	HX_("_actionTargetStartScale",ee,30,88,d1),
	HX_("_actionTargetStartAngle",37,a6,9b,7b),
	HX_("_actionStartPoint",43,ba,70,3c),
	HX_("_actionHappening",2b,20,48,24),
	HX_("_actionMarker",ef,64,da,e2),
	HX_("_actionScaleDirection",8a,fe,8a,8a),
	HX_("_tooltip",84,06,45,a4),
	HX_("_markers",fa,e6,ae,a1),
	HX_("_target",f0,04,64,f5),
	HX_("_targetArea",9d,f4,2e,6d),
	HX_("_mouseCursor",dc,70,7a,9a),
	HX_("init",10,3b,bb,45),
	HX_("updateTargetArea",e7,f6,90,e4),
	HX_("startAction",b8,99,2c,8e),
	HX_("stopAction",58,8d,f5,3f),
	HX_("getCursorNameByMarker",88,f2,c1,b9),
	HX_("handleInteractionsWithMarkersUI",3e,3f,0b,d5),
	HX_("formatFloat",e5,1e,b0,bb),
	HX_("showTooltip",86,49,28,47),
	HX_("updateScaleActionDirection",e8,90,c8,53),
	HX_("updateScaleAction",57,ae,b3,66),
	HX_("updateRotateAction",1a,e8,a1,4c),
	HX_("updateAction",9f,e2,09,16),
	HX_("updateMarkersPosition",39,3f,f1,5a),
	HX_("updateMarkersRotation",ce,db,7c,98),
	HX_("update",09,86,05,87),
	HX_("drawTargetAreaOutline",00,f3,f4,d0),
	HX_("drawMarkers",d5,d1,3e,b1),
	HX_("draw",04,2c,70,42),
	HX_("activate",b3,1b,ac,e5),
	HX_("deactivate",34,5c,01,3c),
	::String(null()) };

static void Transform_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Transform_obj::OUTLINE_PADDING,"OUTLINE_PADDING");
	HX_MARK_MEMBER_NAME(Transform_obj::MARKER_SIZE,"MARKER_SIZE");
	HX_MARK_MEMBER_NAME(Transform_obj::MARKER_INTERACTION_DISTANCE,"MARKER_INTERACTION_DISTANCE");
	HX_MARK_MEMBER_NAME(Transform_obj::RESIZE_STEP,"RESIZE_STEP");
	HX_MARK_MEMBER_NAME(Transform_obj::CURSOR_ROTATE,"CURSOR_ROTATE");
	HX_MARK_MEMBER_NAME(Transform_obj::CURSOR_SCALE_X,"CURSOR_SCALE_X");
	HX_MARK_MEMBER_NAME(Transform_obj::CURSOR_SCALE_Y,"CURSOR_SCALE_Y");
	HX_MARK_MEMBER_NAME(Transform_obj::CURSOR_SCALE_XY,"CURSOR_SCALE_XY");
	HX_MARK_MEMBER_NAME(Transform_obj::MARKER_ROTATE,"MARKER_ROTATE");
	HX_MARK_MEMBER_NAME(Transform_obj::MARKER_SCALE_X,"MARKER_SCALE_X");
	HX_MARK_MEMBER_NAME(Transform_obj::MARKER_SCALE_XY,"MARKER_SCALE_XY");
	HX_MARK_MEMBER_NAME(Transform_obj::MARKER_SCALE_Y,"MARKER_SCALE_Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Transform_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Transform_obj::OUTLINE_PADDING,"OUTLINE_PADDING");
	HX_VISIT_MEMBER_NAME(Transform_obj::MARKER_SIZE,"MARKER_SIZE");
	HX_VISIT_MEMBER_NAME(Transform_obj::MARKER_INTERACTION_DISTANCE,"MARKER_INTERACTION_DISTANCE");
	HX_VISIT_MEMBER_NAME(Transform_obj::RESIZE_STEP,"RESIZE_STEP");
	HX_VISIT_MEMBER_NAME(Transform_obj::CURSOR_ROTATE,"CURSOR_ROTATE");
	HX_VISIT_MEMBER_NAME(Transform_obj::CURSOR_SCALE_X,"CURSOR_SCALE_X");
	HX_VISIT_MEMBER_NAME(Transform_obj::CURSOR_SCALE_Y,"CURSOR_SCALE_Y");
	HX_VISIT_MEMBER_NAME(Transform_obj::CURSOR_SCALE_XY,"CURSOR_SCALE_XY");
	HX_VISIT_MEMBER_NAME(Transform_obj::MARKER_ROTATE,"MARKER_ROTATE");
	HX_VISIT_MEMBER_NAME(Transform_obj::MARKER_SCALE_X,"MARKER_SCALE_X");
	HX_VISIT_MEMBER_NAME(Transform_obj::MARKER_SCALE_XY,"MARKER_SCALE_XY");
	HX_VISIT_MEMBER_NAME(Transform_obj::MARKER_SCALE_Y,"MARKER_SCALE_Y");
};

#endif

::hx::Class Transform_obj::__mClass;

static ::String Transform_obj_sStaticFields[] = {
	HX_("OUTLINE_PADDING",94,a4,68,c0),
	HX_("MARKER_SIZE",a6,e0,9b,d1),
	HX_("MARKER_INTERACTION_DISTANCE",87,22,47,84),
	HX_("RESIZE_STEP",b7,b0,51,ee),
	HX_("CURSOR_ROTATE",e4,6f,15,0c),
	HX_("CURSOR_SCALE_X",5a,a2,96,fa),
	HX_("CURSOR_SCALE_Y",5b,a2,96,fa),
	HX_("CURSOR_SCALE_XY",bf,6c,37,49),
	HX_("MARKER_ROTATE",80,ed,e3,62),
	HX_("MARKER_SCALE_X",3e,0d,76,98),
	HX_("MARKER_SCALE_XY",5b,89,d5,ce),
	HX_("MARKER_SCALE_Y",3f,0d,76,98),
	::String(null())
};

void Transform_obj::__register()
{
	Transform_obj _hx_dummy;
	Transform_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.interaction.tools.Transform",15,9d,09,e9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Transform_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Transform_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Transform_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Transform_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Transform_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Transform_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Transform_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Transform_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_43_boot)
HXDLIN(  43)		OUTLINE_PADDING = ((Float)5.0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_44_boot)
HXDLIN(  44)		MARKER_SIZE = ((Float)3.0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_45_boot)
HXDLIN(  45)		MARKER_INTERACTION_DISTANCE = ((Float)5.0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_46_boot)
HXDLIN(  46)		RESIZE_STEP = ((Float)10.0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_48_boot)
HXDLIN(  48)		CURSOR_ROTATE = HX_("transformRotate",e7,c0,75,06);
            	}
{
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_49_boot)
HXDLIN(  49)		CURSOR_SCALE_X = HX_("transformScaleX",1a,65,7b,77);
            	}
{
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_50_boot)
HXDLIN(  50)		CURSOR_SCALE_Y = HX_("transformScaleY",1b,65,7b,77);
            	}
{
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_51_boot)
HXDLIN(  51)		CURSOR_SCALE_XY = HX_("transformScaleXY",ff,11,7d,14);
            	}
{
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_53_boot)
HXDLIN(  53)		MARKER_ROTATE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_54_boot)
HXDLIN(  54)		MARKER_SCALE_X = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_55_boot)
HXDLIN(  55)		MARKER_SCALE_XY = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_32e1ba20177d3a98_56_boot)
HXDLIN(  56)		MARKER_SCALE_Y = 3;
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools
