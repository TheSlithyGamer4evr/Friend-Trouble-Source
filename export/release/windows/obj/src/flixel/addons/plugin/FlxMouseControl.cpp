#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_flixel_addons_display_FlxExtendedSprite
#include <flixel/addons/display/FlxExtendedSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_plugin_FlxMouseControl
#include <flixel/addons/plugin/FlxMouseControl.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
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
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_825fcb4215440681_89_new,"flixel.addons.plugin.FlxMouseControl","new",0x08bbf8ea,"flixel.addons.plugin.FlxMouseControl.new","flixel/addons/plugin/FlxMouseControl.hx",89,0x04dd2fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_825fcb4215440681_148_update,"flixel.addons.plugin.FlxMouseControl","update",0x7b5dcfbf,"flixel.addons.plugin.FlxMouseControl.update","flixel/addons/plugin/FlxMouseControl.hx",148,0x04dd2fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_825fcb4215440681_207_releaseMouse,"flixel.addons.plugin.FlxMouseControl","releaseMouse",0xc8ff2514,"flixel.addons.plugin.FlxMouseControl.releaseMouse","flixel/addons/plugin/FlxMouseControl.hx",207,0x04dd2fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_825fcb4215440681_222_assignClickedSprite,"flixel.addons.plugin.FlxMouseControl","assignClickedSprite",0x7c03b2e7,"flixel.addons.plugin.FlxMouseControl.assignClickedSprite","flixel/addons/plugin/FlxMouseControl.hx",222,0x04dd2fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_825fcb4215440681_249_sortHandler,"flixel.addons.plugin.FlxMouseControl","sortHandler",0x50aa3a96,"flixel.addons.plugin.FlxMouseControl.sortHandler","flixel/addons/plugin/FlxMouseControl.hx",249,0x04dd2fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_825fcb4215440681_270_destroy,"flixel.addons.plugin.FlxMouseControl","destroy",0xfd6e6284,"flixel.addons.plugin.FlxMouseControl.destroy","flixel/addons/plugin/FlxMouseControl.hx",270,0x04dd2fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_825fcb4215440681_102_addToStack,"flixel.addons.plugin.FlxMouseControl","addToStack",0xc3b83c62,"flixel.addons.plugin.FlxMouseControl.addToStack","flixel/addons/plugin/FlxMouseControl.hx",102,0x04dd2fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_825fcb4215440681_119_clear,"flixel.addons.plugin.FlxMouseControl","clear",0x59865097,"flixel.addons.plugin.FlxMouseControl.clear","flixel/addons/plugin/FlxMouseControl.hx",119,0x04dd2fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_825fcb4215440681_23_boot,"flixel.addons.plugin.FlxMouseControl","boot",0x93d6d468,"flixel.addons.plugin.FlxMouseControl.boot","flixel/addons/plugin/FlxMouseControl.hx",23,0x04dd2fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_825fcb4215440681_28_boot,"flixel.addons.plugin.FlxMouseControl","boot",0x93d6d468,"flixel.addons.plugin.FlxMouseControl.boot","flixel/addons/plugin/FlxMouseControl.hx",28,0x04dd2fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_825fcb4215440681_33_boot,"flixel.addons.plugin.FlxMouseControl","boot",0x93d6d468,"flixel.addons.plugin.FlxMouseControl.boot","flixel/addons/plugin/FlxMouseControl.hx",33,0x04dd2fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_825fcb4215440681_38_boot,"flixel.addons.plugin.FlxMouseControl","boot",0x93d6d468,"flixel.addons.plugin.FlxMouseControl.boot","flixel/addons/plugin/FlxMouseControl.hx",38,0x04dd2fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_825fcb4215440681_43_boot,"flixel.addons.plugin.FlxMouseControl","boot",0x93d6d468,"flixel.addons.plugin.FlxMouseControl.boot","flixel/addons/plugin/FlxMouseControl.hx",43,0x04dd2fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_825fcb4215440681_75_boot,"flixel.addons.plugin.FlxMouseControl","boot",0x93d6d468,"flixel.addons.plugin.FlxMouseControl.boot","flixel/addons/plugin/FlxMouseControl.hx",75,0x04dd2fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_825fcb4215440681_80_boot,"flixel.addons.plugin.FlxMouseControl","boot",0x93d6d468,"flixel.addons.plugin.FlxMouseControl.boot","flixel/addons/plugin/FlxMouseControl.hx",80,0x04dd2fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_825fcb4215440681_83_boot,"flixel.addons.plugin.FlxMouseControl","boot",0x93d6d468,"flixel.addons.plugin.FlxMouseControl.boot","flixel/addons/plugin/FlxMouseControl.hx",83,0x04dd2fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_825fcb4215440681_85_boot,"flixel.addons.plugin.FlxMouseControl","boot",0x93d6d468,"flixel.addons.plugin.FlxMouseControl.boot","flixel/addons/plugin/FlxMouseControl.hx",85,0x04dd2fe7)
HX_LOCAL_STACK_FRAME(_hx_pos_825fcb4215440681_86_boot,"flixel.addons.plugin.FlxMouseControl","boot",0x93d6d468,"flixel.addons.plugin.FlxMouseControl.boot","flixel/addons/plugin/FlxMouseControl.hx",86,0x04dd2fe7)
namespace flixel{
namespace addons{
namespace plugin{

void FlxMouseControl_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_825fcb4215440681_89_new)
HXLINE(  90)		super::__construct();
HXLINE(  92)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  92)		point->_inPool = false;
HXDLIN(  92)		::flixel::addons::plugin::FlxMouseControl_obj::_clickCoords = point;
            	}

Dynamic FlxMouseControl_obj::__CreateEmpty() { return new FlxMouseControl_obj; }

void *FlxMouseControl_obj::_hx_vtable = 0;

Dynamic FlxMouseControl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxMouseControl_obj > _hx_result = new FlxMouseControl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxMouseControl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x070266e8) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x070266e8;
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void FlxMouseControl_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_825fcb4215440681_148_update)
HXLINE( 150)		::flixel::addons::plugin::FlxMouseControl_obj::speedX = (::flixel::FlxG_obj::mouse->screenX - ::flixel::addons::plugin::FlxMouseControl_obj::_oldX);
HXLINE( 151)		::flixel::addons::plugin::FlxMouseControl_obj::speedY = (::flixel::FlxG_obj::mouse->screenY - ::flixel::addons::plugin::FlxMouseControl_obj::_oldY);
HXLINE( 153)		::flixel::addons::plugin::FlxMouseControl_obj::_oldX = ::flixel::FlxG_obj::mouse->screenX;
HXLINE( 154)		::flixel::addons::plugin::FlxMouseControl_obj::_oldY = ::flixel::FlxG_obj::mouse->screenY;
HXLINE( 157)		if (::flixel::addons::plugin::FlxMouseControl_obj::_hasClickTarget) {
HXLINE( 159)			 ::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;
HXDLIN( 159)			bool _hx_tmp;
HXDLIN( 159)			if ((_this->current != 1)) {
HXLINE( 159)				_hx_tmp = (_this->current == 2);
            			}
            			else {
HXLINE( 159)				_hx_tmp = true;
            			}
HXDLIN( 159)			if (_hx_tmp) {
HXLINE( 162)				bool _hx_tmp;
HXDLIN( 162)				bool _hx_tmp1;
HXDLIN( 162)				if ((::flixel::addons::plugin::FlxMouseControl_obj::isDragging == false)) {
HXLINE( 162)					_hx_tmp1 = (::flixel::addons::plugin::FlxMouseControl_obj::clickTarget->draggable == true);
            				}
            				else {
HXLINE( 162)					_hx_tmp1 = false;
            				}
HXDLIN( 162)				if (_hx_tmp1) {
HXLINE( 164)					if ((::flixel::addons::plugin::FlxMouseControl_obj::_clickCoords->x == ::flixel::FlxG_obj::mouse->x)) {
HXLINE( 162)						_hx_tmp = (::flixel::addons::plugin::FlxMouseControl_obj::_clickCoords->y != ::flixel::FlxG_obj::mouse->y);
            					}
            					else {
HXLINE( 162)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 162)					_hx_tmp = false;
            				}
HXDLIN( 162)				if (_hx_tmp) {
HXLINE( 167)					::flixel::addons::plugin::FlxMouseControl_obj::isDragging = true;
HXLINE( 169)					::flixel::addons::plugin::FlxMouseControl_obj::dragTarget = ::flixel::addons::plugin::FlxMouseControl_obj::clickTarget;
HXLINE( 171)					::flixel::addons::plugin::FlxMouseControl_obj::dragTarget->startDrag();
            				}
            			}
            			else {
HXLINE( 176)				this->releaseMouse();
            			}
HXLINE( 179)			if ((::flixel::addons::plugin::FlxMouseControl_obj::linkToDeadZone == true)) {
HXLINE( 181)				if ((::flixel::math::FlxMath_obj::mouseInFlxRect(false,::flixel::FlxG_obj::camera->deadzone) == false)) {
HXLINE( 183)					this->releaseMouse();
            				}
            			}
            			else {
HXLINE( 186)				if ((::flixel::math::FlxMath_obj::mouseInFlxRect(true,::flixel::addons::plugin::FlxMouseControl_obj::mouseZone) == false)) {
HXLINE( 189)					this->releaseMouse();
            				}
            			}
            		}
            		else {
HXLINE( 196)			bool _hx_tmp;
HXDLIN( 196)			 ::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;
HXDLIN( 196)			bool _hx_tmp1;
HXDLIN( 196)			if ((_this->current != 1)) {
HXLINE( 196)				_hx_tmp1 = (_this->current == 2);
            			}
            			else {
HXLINE( 196)				_hx_tmp1 = true;
            			}
HXDLIN( 196)			if (_hx_tmp1) {
HXLINE( 196)				_hx_tmp = (::flixel::addons::plugin::FlxMouseControl_obj::_clickStack->length > 0);
            			}
            			else {
HXLINE( 196)				_hx_tmp = false;
            			}
HXDLIN( 196)			if (_hx_tmp) {
HXLINE( 198)				this->assignClickedSprite();
            			}
            		}
            	}


void FlxMouseControl_obj::releaseMouse(){
            	HX_STACKFRAME(&_hx_pos_825fcb4215440681_207_releaseMouse)
HXLINE( 209)		::flixel::addons::plugin::FlxMouseControl_obj::clickTarget->mouseReleasedHandler();
HXLINE( 211)		::flixel::addons::plugin::FlxMouseControl_obj::_hasClickTarget = false;
HXLINE( 212)		::flixel::addons::plugin::FlxMouseControl_obj::clickTarget = null();
HXLINE( 214)		::flixel::addons::plugin::FlxMouseControl_obj::isDragging = false;
HXLINE( 215)		::flixel::addons::plugin::FlxMouseControl_obj::dragTarget = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseControl_obj,releaseMouse,(void))

void FlxMouseControl_obj::assignClickedSprite(){
            	HX_STACKFRAME(&_hx_pos_825fcb4215440681_222_assignClickedSprite)
HXLINE( 224)		if ((::flixel::addons::plugin::FlxMouseControl_obj::_clickStack->length > 1)) {
HXLINE( 226)			::flixel::addons::plugin::FlxMouseControl_obj::_clickStack->sort(this->sortHandler_dyn());
            		}
HXLINE( 229)		::flixel::addons::plugin::FlxMouseControl_obj::clickTarget = ::flixel::addons::plugin::FlxMouseControl_obj::_clickStack->pop().StaticCast<  ::flixel::addons::display::FlxExtendedSprite >();
HXLINE( 231)		::flixel::addons::plugin::FlxMouseControl_obj::_clickCoords = ::flixel::FlxG_obj::mouse->getWorldPosition(null(),::flixel::addons::plugin::FlxMouseControl_obj::_clickCoords);
HXLINE( 233)		::flixel::addons::plugin::FlxMouseControl_obj::_hasClickTarget = true;
HXLINE( 235)		::flixel::addons::plugin::FlxMouseControl_obj::clickTarget->mousePressedHandler();
HXLINE( 237)		::flixel::addons::plugin::FlxMouseControl_obj::_clickStack = ::Array_obj< ::Dynamic>::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseControl_obj,assignClickedSprite,(void))

int FlxMouseControl_obj::sortHandler( ::flixel::addons::display::FlxExtendedSprite Item1, ::flixel::addons::display::FlxExtendedSprite Item2){
            	HX_STACKFRAME(&_hx_pos_825fcb4215440681_249_sortHandler)
HXLINE( 250)		int prop1 = ( (int)(::Reflect_obj::getProperty(Item1,::flixel::addons::plugin::FlxMouseControl_obj::sortIndex)) );
HXLINE( 251)		int prop2 = ( (int)(::Reflect_obj::getProperty(Item2,::flixel::addons::plugin::FlxMouseControl_obj::sortIndex)) );
HXLINE( 253)		if ((prop1 < prop2)) {
HXLINE( 255)			return ::flixel::addons::plugin::FlxMouseControl_obj::sortOrder;
            		}
            		else {
HXLINE( 257)			if ((prop1 > prop2)) {
HXLINE( 259)				return -(::flixel::addons::plugin::FlxMouseControl_obj::sortOrder);
            			}
            		}
HXLINE( 262)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseControl_obj,sortHandler,return )

void FlxMouseControl_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_825fcb4215440681_270_destroy)
HXDLIN( 270)		::flixel::addons::plugin::FlxMouseControl_obj::clear();
            	}


int FlxMouseControl_obj::ASCENDING;

int FlxMouseControl_obj::DESCENDING;

::String FlxMouseControl_obj::sortIndex;

int FlxMouseControl_obj::sortOrder;

bool FlxMouseControl_obj::isDragging;

 ::flixel::addons::display::FlxExtendedSprite FlxMouseControl_obj::dragTarget;

 ::flixel::addons::display::FlxExtendedSprite FlxMouseControl_obj::clickTarget;

int FlxMouseControl_obj::speedX;

int FlxMouseControl_obj::speedY;

 ::flixel::math::FlxRect FlxMouseControl_obj::mouseZone;

bool FlxMouseControl_obj::linkToDeadZone;

::Array< ::Dynamic> FlxMouseControl_obj::_clickStack;

 ::flixel::math::FlxPoint FlxMouseControl_obj::_clickCoords;

bool FlxMouseControl_obj::_hasClickTarget;

int FlxMouseControl_obj::_oldX;

int FlxMouseControl_obj::_oldY;

void FlxMouseControl_obj::addToStack( ::flixel::addons::display::FlxExtendedSprite Item){
            	HX_STACKFRAME(&_hx_pos_825fcb4215440681_102_addToStack)
HXDLIN( 102)		if (::hx::IsNotNull( ::flixel::addons::plugin::FlxMouseControl_obj::mouseZone )) {
HXLINE( 104)			if ((::flixel::math::FlxMath_obj::pointInFlxRect(( (Float)(::Math_obj::floor(( (Float)(::flixel::FlxG_obj::mouse->x) ))) ),( (Float)(::Math_obj::floor(( (Float)(::flixel::FlxG_obj::mouse->y) ))) ),::flixel::addons::plugin::FlxMouseControl_obj::mouseZone) == true)) {
HXLINE( 106)				::flixel::addons::plugin::FlxMouseControl_obj::_clickStack->push(Item);
            			}
            		}
            		else {
HXLINE( 111)			::flixel::addons::plugin::FlxMouseControl_obj::_clickStack->push(Item);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMouseControl_obj,addToStack,(void))

void FlxMouseControl_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_825fcb4215440681_119_clear)
HXLINE( 120)		::flixel::addons::plugin::FlxMouseControl_obj::_clickCoords = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(::flixel::addons::plugin::FlxMouseControl_obj::_clickCoords)) );
HXLINE( 121)		::flixel::addons::plugin::FlxMouseControl_obj::_hasClickTarget = false;
HXLINE( 123)		if (::hx::IsNotNull( ::flixel::addons::plugin::FlxMouseControl_obj::clickTarget )) {
HXLINE( 125)			::flixel::addons::plugin::FlxMouseControl_obj::clickTarget->mouseReleasedHandler();
            		}
HXLINE( 128)		::flixel::addons::plugin::FlxMouseControl_obj::clickTarget = null();
HXLINE( 130)		::flixel::addons::plugin::FlxMouseControl_obj::isDragging = false;
HXLINE( 132)		if (::hx::IsNotNull( ::flixel::addons::plugin::FlxMouseControl_obj::dragTarget )) {
HXLINE( 134)			::flixel::addons::plugin::FlxMouseControl_obj::dragTarget->stopDrag();
            		}
HXLINE( 137)		::flixel::addons::plugin::FlxMouseControl_obj::speedX = 0;
HXLINE( 138)		::flixel::addons::plugin::FlxMouseControl_obj::speedY = 0;
HXLINE( 139)		::flixel::addons::plugin::FlxMouseControl_obj::dragTarget = null();
HXLINE( 140)		::flixel::addons::plugin::FlxMouseControl_obj::mouseZone = null();
HXLINE( 141)		::flixel::addons::plugin::FlxMouseControl_obj::linkToDeadZone = false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxMouseControl_obj,clear,(void))


::hx::ObjectPtr< FlxMouseControl_obj > FlxMouseControl_obj::__new() {
	::hx::ObjectPtr< FlxMouseControl_obj > __this = new FlxMouseControl_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxMouseControl_obj > FlxMouseControl_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxMouseControl_obj *__this = (FlxMouseControl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxMouseControl_obj), true, "flixel.addons.plugin.FlxMouseControl"));
	*(void **)__this = FlxMouseControl_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxMouseControl_obj::FlxMouseControl_obj()
{
}

::hx::Val FlxMouseControl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sortHandler") ) { return ::hx::Val( sortHandler_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"releaseMouse") ) { return ::hx::Val( releaseMouse_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"assignClickedSprite") ) { return ::hx::Val( assignClickedSprite_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxMouseControl_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_oldX") ) { outValue = ( _oldX ); return true; }
		if (HX_FIELD_EQ(inName,"_oldY") ) { outValue = ( _oldY ); return true; }
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"speedX") ) { outValue = ( speedX ); return true; }
		if (HX_FIELD_EQ(inName,"speedY") ) { outValue = ( speedY ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sortIndex") ) { outValue = ( sortIndex ); return true; }
		if (HX_FIELD_EQ(inName,"sortOrder") ) { outValue = ( sortOrder ); return true; }
		if (HX_FIELD_EQ(inName,"mouseZone") ) { outValue = ( mouseZone ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isDragging") ) { outValue = ( isDragging ); return true; }
		if (HX_FIELD_EQ(inName,"dragTarget") ) { outValue = ( dragTarget ); return true; }
		if (HX_FIELD_EQ(inName,"addToStack") ) { outValue = addToStack_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"clickTarget") ) { outValue = ( clickTarget ); return true; }
		if (HX_FIELD_EQ(inName,"_clickStack") ) { outValue = ( _clickStack ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_clickCoords") ) { outValue = ( _clickCoords ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"linkToDeadZone") ) { outValue = ( linkToDeadZone ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_hasClickTarget") ) { outValue = ( _hasClickTarget ); return true; }
	}
	return false;
}

bool FlxMouseControl_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_oldX") ) { _oldX=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"_oldY") ) { _oldY=ioValue.Cast< int >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"speedX") ) { speedX=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"speedY") ) { speedY=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sortIndex") ) { sortIndex=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"sortOrder") ) { sortOrder=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"mouseZone") ) { mouseZone=ioValue.Cast<  ::flixel::math::FlxRect >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isDragging") ) { isDragging=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"dragTarget") ) { dragTarget=ioValue.Cast<  ::flixel::addons::display::FlxExtendedSprite >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"clickTarget") ) { clickTarget=ioValue.Cast<  ::flixel::addons::display::FlxExtendedSprite >(); return true; }
		if (HX_FIELD_EQ(inName,"_clickStack") ) { _clickStack=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_clickCoords") ) { _clickCoords=ioValue.Cast<  ::flixel::math::FlxPoint >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"linkToDeadZone") ) { linkToDeadZone=ioValue.Cast< bool >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_hasClickTarget") ) { _hasClickTarget=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxMouseControl_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxMouseControl_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxMouseControl_obj::ASCENDING,HX_("ASCENDING",b8,0d,d0,a9)},
	{::hx::fsInt,(void *) &FlxMouseControl_obj::DESCENDING,HX_("DESCENDING",f8,88,5d,09)},
	{::hx::fsString,(void *) &FlxMouseControl_obj::sortIndex,HX_("sortIndex",d4,6e,88,c6)},
	{::hx::fsInt,(void *) &FlxMouseControl_obj::sortOrder,HX_("sortOrder",50,c4,94,3d)},
	{::hx::fsBool,(void *) &FlxMouseControl_obj::isDragging,HX_("isDragging",d9,4e,3b,b2)},
	{::hx::fsObject /*  ::flixel::addons::display::FlxExtendedSprite */ ,(void *) &FlxMouseControl_obj::dragTarget,HX_("dragTarget",65,02,59,2f)},
	{::hx::fsObject /*  ::flixel::addons::display::FlxExtendedSprite */ ,(void *) &FlxMouseControl_obj::clickTarget,HX_("clickTarget",b9,49,ee,b5)},
	{::hx::fsInt,(void *) &FlxMouseControl_obj::speedX,HX_("speedX",f1,fe,fa,ba)},
	{::hx::fsInt,(void *) &FlxMouseControl_obj::speedY,HX_("speedY",f2,fe,fa,ba)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(void *) &FlxMouseControl_obj::mouseZone,HX_("mouseZone",f1,5a,4d,fd)},
	{::hx::fsBool,(void *) &FlxMouseControl_obj::linkToDeadZone,HX_("linkToDeadZone",25,6c,46,9b)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &FlxMouseControl_obj::_clickStack,HX_("_clickStack",ff,a2,14,97)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(void *) &FlxMouseControl_obj::_clickCoords,HX_("_clickCoords",87,a8,8f,5d)},
	{::hx::fsBool,(void *) &FlxMouseControl_obj::_hasClickTarget,HX_("_hasClickTarget",1e,d5,d8,f0)},
	{::hx::fsInt,(void *) &FlxMouseControl_obj::_oldX,HX_("_oldX",b0,15,c2,fc)},
	{::hx::fsInt,(void *) &FlxMouseControl_obj::_oldY,HX_("_oldY",b1,15,c2,fc)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxMouseControl_obj_sMemberFields[] = {
	HX_("update",09,86,05,87),
	HX_("releaseMouse",de,ae,87,d3),
	HX_("assignClickedSprite",5d,56,5c,73),
	HX_("sortHandler",0c,78,b7,31),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

static void FlxMouseControl_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::ASCENDING,"ASCENDING");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::DESCENDING,"DESCENDING");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::sortIndex,"sortIndex");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::sortOrder,"sortOrder");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::isDragging,"isDragging");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::dragTarget,"dragTarget");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::clickTarget,"clickTarget");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::speedX,"speedX");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::speedY,"speedY");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::mouseZone,"mouseZone");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::linkToDeadZone,"linkToDeadZone");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::_clickStack,"_clickStack");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::_clickCoords,"_clickCoords");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::_hasClickTarget,"_hasClickTarget");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::_oldX,"_oldX");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::_oldY,"_oldY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxMouseControl_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::ASCENDING,"ASCENDING");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::DESCENDING,"DESCENDING");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::sortIndex,"sortIndex");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::sortOrder,"sortOrder");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::isDragging,"isDragging");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::dragTarget,"dragTarget");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::clickTarget,"clickTarget");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::speedX,"speedX");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::speedY,"speedY");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::mouseZone,"mouseZone");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::linkToDeadZone,"linkToDeadZone");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::_clickStack,"_clickStack");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::_clickCoords,"_clickCoords");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::_hasClickTarget,"_hasClickTarget");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::_oldX,"_oldX");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::_oldY,"_oldY");
};

#endif

::hx::Class FlxMouseControl_obj::__mClass;

static ::String FlxMouseControl_obj_sStaticFields[] = {
	HX_("ASCENDING",b8,0d,d0,a9),
	HX_("DESCENDING",f8,88,5d,09),
	HX_("sortIndex",d4,6e,88,c6),
	HX_("sortOrder",50,c4,94,3d),
	HX_("isDragging",d9,4e,3b,b2),
	HX_("dragTarget",65,02,59,2f),
	HX_("clickTarget",b9,49,ee,b5),
	HX_("speedX",f1,fe,fa,ba),
	HX_("speedY",f2,fe,fa,ba),
	HX_("mouseZone",f1,5a,4d,fd),
	HX_("linkToDeadZone",25,6c,46,9b),
	HX_("_clickStack",ff,a2,14,97),
	HX_("_clickCoords",87,a8,8f,5d),
	HX_("_hasClickTarget",1e,d5,d8,f0),
	HX_("_oldX",b0,15,c2,fc),
	HX_("_oldY",b1,15,c2,fc),
	HX_("addToStack",ac,df,19,b8),
	HX_("clear",8d,71,5b,48),
	::String(null())
};

void FlxMouseControl_obj::__register()
{
	FlxMouseControl_obj _hx_dummy;
	FlxMouseControl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.plugin.FlxMouseControl",f8,fb,06,10);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxMouseControl_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxMouseControl_obj::__SetStatic;
	__mClass->mMarkFunc = FlxMouseControl_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxMouseControl_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxMouseControl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxMouseControl_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxMouseControl_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxMouseControl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxMouseControl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxMouseControl_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_825fcb4215440681_23_boot)
HXDLIN(  23)		ASCENDING = -1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_825fcb4215440681_28_boot)
HXDLIN(  28)		DESCENDING = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_825fcb4215440681_33_boot)
HXDLIN(  33)		sortIndex = HX_("y",79,00,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_825fcb4215440681_38_boot)
HXDLIN(  38)		sortOrder = -1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_825fcb4215440681_43_boot)
HXDLIN(  43)		isDragging = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_825fcb4215440681_75_boot)
HXDLIN(  75)		linkToDeadZone = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_825fcb4215440681_80_boot)
HXDLIN(  80)		_clickStack = ::Array_obj< ::Dynamic>::__new();
            	}
{
            	HX_STACKFRAME(&_hx_pos_825fcb4215440681_83_boot)
HXDLIN(  83)		_hasClickTarget = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_825fcb4215440681_85_boot)
HXDLIN(  85)		_oldX = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_825fcb4215440681_86_boot)
HXDLIN(  86)		_oldY = 0;
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace plugin
