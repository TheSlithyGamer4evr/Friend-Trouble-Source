#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_addons_display_FlxMouseSpring
#include <flixel/addons/display/FlxMouseSpring.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_813bae724619fe52_6_new,"flixel.addons.display.FlxMouseSpring","new",0x7170d847,"flixel.addons.display.FlxMouseSpring.new","flixel/addons/display/FlxMouseSpring.hx",6,0xe39b05c8)
HX_LOCAL_STACK_FRAME(_hx_pos_813bae724619fe52_61_update,"flixel.addons.display.FlxMouseSpring","update",0x1f372882,"flixel.addons.display.FlxMouseSpring.update","flixel/addons/display/FlxMouseSpring.hx",61,0xe39b05c8)
HX_LOCAL_STACK_FRAME(_hx_pos_813bae724619fe52_83_reset,"flixel.addons.display.FlxMouseSpring","reset",0x9f245976,"flixel.addons.display.FlxMouseSpring.reset","flixel/addons/display/FlxMouseSpring.hx",83,0xe39b05c8)
namespace flixel{
namespace addons{
namespace display{

void FlxMouseSpring_obj::__construct( ::flixel::addons::display::FlxExtendedSprite Sprite,::hx::Null< bool >  __o_RetainVelocity,::hx::Null< Float >  __o_Tension,::hx::Null< Float >  __o_Friction,::hx::Null< Float >  __o_Gravity){
            		bool RetainVelocity = __o_RetainVelocity.Default(false);
            		Float Tension = __o_Tension.Default(((Float)0.1));
            		Float Friction = __o_Friction.Default(((Float)0.95));
            		Float Gravity = __o_Gravity.Default(0);
            	HX_STACKFRAME(&_hx_pos_813bae724619fe52_6_new)
HXLINE(  37)		this->_ay = ((Float)0);
HXLINE(  36)		this->_ax = ((Float)0);
HXLINE(  34)		this->_dy = ((Float)0);
HXLINE(  33)		this->_dx = ((Float)0);
HXLINE(  31)		this->_vy = ((Float)0);
HXLINE(  30)		this->_vx = ((Float)0);
HXLINE(  50)		this->sprite = Sprite;
HXLINE(  51)		this->_retainVelocity = RetainVelocity;
HXLINE(  52)		this->tension = Tension;
HXLINE(  53)		this->friction = Friction;
HXLINE(  54)		this->gravity = Gravity;
            	}

Dynamic FlxMouseSpring_obj::__CreateEmpty() { return new FlxMouseSpring_obj; }

void *FlxMouseSpring_obj::_hx_vtable = 0;

Dynamic FlxMouseSpring_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxMouseSpring_obj > _hx_result = new FlxMouseSpring_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool FlxMouseSpring_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4d452333;
}

void FlxMouseSpring_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_813bae724619fe52_61_update)
HXLINE(  62)		 ::flixel::addons::display::FlxExtendedSprite _this = this->sprite;
HXDLIN(  62)		this->_dx = ( (Float)((::flixel::FlxG_obj::mouse->x - ::Math_obj::floor((_this->x + _this->springOffsetX)))) );
HXLINE(  63)		 ::flixel::addons::display::FlxExtendedSprite _this1 = this->sprite;
HXDLIN(  63)		this->_dy = ( (Float)((::flixel::FlxG_obj::mouse->y - ::Math_obj::floor((_this1->y + _this1->springOffsetY)))) );
HXLINE(  65)		this->_ax = (this->_dx * this->tension);
HXLINE(  66)		this->_ay = (this->_dy * this->tension);
HXLINE(  68)		 ::flixel::addons::display::FlxMouseSpring _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  68)		_hx_tmp->_vx = (_hx_tmp->_vx + this->_ax);
HXLINE(  69)		 ::flixel::addons::display::FlxMouseSpring _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  69)		_hx_tmp1->_vy = (_hx_tmp1->_vy + this->_ay);
HXLINE(  71)		 ::flixel::addons::display::FlxMouseSpring _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  71)		_hx_tmp2->_vy = (_hx_tmp2->_vy + this->gravity);
HXLINE(  72)		 ::flixel::addons::display::FlxMouseSpring _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  72)		_hx_tmp3->_vx = (_hx_tmp3->_vx * this->friction);
HXLINE(  73)		 ::flixel::addons::display::FlxMouseSpring _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  73)		_hx_tmp4->_vy = (_hx_tmp4->_vy * this->friction);
HXLINE(  75)		 ::flixel::addons::display::FlxExtendedSprite fh = this->sprite;
HXDLIN(  75)		fh->set_x((fh->x + this->_vx));
HXLINE(  76)		 ::flixel::addons::display::FlxExtendedSprite fh1 = this->sprite;
HXDLIN(  76)		fh1->set_y((fh1->y + this->_vy));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseSpring_obj,update,(void))

void FlxMouseSpring_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_813bae724619fe52_83_reset)
HXLINE(  84)		this->_vx = ( (Float)(0) );
HXLINE(  85)		this->_vy = ( (Float)(0) );
HXLINE(  87)		this->_dx = ( (Float)(0) );
HXLINE(  88)		this->_dy = ( (Float)(0) );
HXLINE(  90)		this->_ax = ( (Float)(0) );
HXLINE(  91)		this->_ay = ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseSpring_obj,reset,(void))


::hx::ObjectPtr< FlxMouseSpring_obj > FlxMouseSpring_obj::__new( ::flixel::addons::display::FlxExtendedSprite Sprite,::hx::Null< bool >  __o_RetainVelocity,::hx::Null< Float >  __o_Tension,::hx::Null< Float >  __o_Friction,::hx::Null< Float >  __o_Gravity) {
	::hx::ObjectPtr< FlxMouseSpring_obj > __this = new FlxMouseSpring_obj();
	__this->__construct(Sprite,__o_RetainVelocity,__o_Tension,__o_Friction,__o_Gravity);
	return __this;
}

::hx::ObjectPtr< FlxMouseSpring_obj > FlxMouseSpring_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::display::FlxExtendedSprite Sprite,::hx::Null< bool >  __o_RetainVelocity,::hx::Null< Float >  __o_Tension,::hx::Null< Float >  __o_Friction,::hx::Null< Float >  __o_Gravity) {
	FlxMouseSpring_obj *__this = (FlxMouseSpring_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxMouseSpring_obj), true, "flixel.addons.display.FlxMouseSpring"));
	*(void **)__this = FlxMouseSpring_obj::_hx_vtable;
	__this->__construct(Sprite,__o_RetainVelocity,__o_Tension,__o_Friction,__o_Gravity);
	return __this;
}

FlxMouseSpring_obj::FlxMouseSpring_obj()
{
}

void FlxMouseSpring_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMouseSpring);
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(tension,"tension");
	HX_MARK_MEMBER_NAME(friction,"friction");
	HX_MARK_MEMBER_NAME(gravity,"gravity");
	HX_MARK_MEMBER_NAME(_retainVelocity,"_retainVelocity");
	HX_MARK_MEMBER_NAME(_vx,"_vx");
	HX_MARK_MEMBER_NAME(_vy,"_vy");
	HX_MARK_MEMBER_NAME(_dx,"_dx");
	HX_MARK_MEMBER_NAME(_dy,"_dy");
	HX_MARK_MEMBER_NAME(_ax,"_ax");
	HX_MARK_MEMBER_NAME(_ay,"_ay");
	HX_MARK_END_CLASS();
}

void FlxMouseSpring_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(tension,"tension");
	HX_VISIT_MEMBER_NAME(friction,"friction");
	HX_VISIT_MEMBER_NAME(gravity,"gravity");
	HX_VISIT_MEMBER_NAME(_retainVelocity,"_retainVelocity");
	HX_VISIT_MEMBER_NAME(_vx,"_vx");
	HX_VISIT_MEMBER_NAME(_vy,"_vy");
	HX_VISIT_MEMBER_NAME(_dx,"_dx");
	HX_VISIT_MEMBER_NAME(_dy,"_dy");
	HX_VISIT_MEMBER_NAME(_ax,"_ax");
	HX_VISIT_MEMBER_NAME(_ay,"_ay");
}

::hx::Val FlxMouseSpring_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_vx") ) { return ::hx::Val( _vx ); }
		if (HX_FIELD_EQ(inName,"_vy") ) { return ::hx::Val( _vy ); }
		if (HX_FIELD_EQ(inName,"_dx") ) { return ::hx::Val( _dx ); }
		if (HX_FIELD_EQ(inName,"_dy") ) { return ::hx::Val( _dy ); }
		if (HX_FIELD_EQ(inName,"_ax") ) { return ::hx::Val( _ax ); }
		if (HX_FIELD_EQ(inName,"_ay") ) { return ::hx::Val( _ay ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return ::hx::Val( sprite ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tension") ) { return ::hx::Val( tension ); }
		if (HX_FIELD_EQ(inName,"gravity") ) { return ::hx::Val( gravity ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"friction") ) { return ::hx::Val( friction ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_retainVelocity") ) { return ::hx::Val( _retainVelocity ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxMouseSpring_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_vx") ) { _vx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vy") ) { _vy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dx") ) { _dx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dy") ) { _dy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ax") ) { _ax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ay") ) { _ay=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast<  ::flixel::addons::display::FlxExtendedSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tension") ) { tension=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravity") ) { gravity=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"friction") ) { friction=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_retainVelocity") ) { _retainVelocity=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMouseSpring_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sprite",05,dc,95,c3));
	outFields->push(HX_("tension",92,a7,2c,dc));
	outFields->push(HX_("friction",fa,78,c9,97));
	outFields->push(HX_("gravity",4e,6e,ff,77));
	outFields->push(HX_("_retainVelocity",a1,43,7b,99));
	outFields->push(HX_("_vx",61,7d,48,00));
	outFields->push(HX_("_vy",62,7d,48,00));
	outFields->push(HX_("_dx",b3,6d,48,00));
	outFields->push(HX_("_dy",b4,6d,48,00));
	outFields->push(HX_("_ax",16,6b,48,00));
	outFields->push(HX_("_ay",17,6b,48,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxMouseSpring_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::addons::display::FlxExtendedSprite */ ,(int)offsetof(FlxMouseSpring_obj,sprite),HX_("sprite",05,dc,95,c3)},
	{::hx::fsFloat,(int)offsetof(FlxMouseSpring_obj,tension),HX_("tension",92,a7,2c,dc)},
	{::hx::fsFloat,(int)offsetof(FlxMouseSpring_obj,friction),HX_("friction",fa,78,c9,97)},
	{::hx::fsFloat,(int)offsetof(FlxMouseSpring_obj,gravity),HX_("gravity",4e,6e,ff,77)},
	{::hx::fsBool,(int)offsetof(FlxMouseSpring_obj,_retainVelocity),HX_("_retainVelocity",a1,43,7b,99)},
	{::hx::fsFloat,(int)offsetof(FlxMouseSpring_obj,_vx),HX_("_vx",61,7d,48,00)},
	{::hx::fsFloat,(int)offsetof(FlxMouseSpring_obj,_vy),HX_("_vy",62,7d,48,00)},
	{::hx::fsFloat,(int)offsetof(FlxMouseSpring_obj,_dx),HX_("_dx",b3,6d,48,00)},
	{::hx::fsFloat,(int)offsetof(FlxMouseSpring_obj,_dy),HX_("_dy",b4,6d,48,00)},
	{::hx::fsFloat,(int)offsetof(FlxMouseSpring_obj,_ax),HX_("_ax",16,6b,48,00)},
	{::hx::fsFloat,(int)offsetof(FlxMouseSpring_obj,_ay),HX_("_ay",17,6b,48,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxMouseSpring_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxMouseSpring_obj_sMemberFields[] = {
	HX_("sprite",05,dc,95,c3),
	HX_("tension",92,a7,2c,dc),
	HX_("friction",fa,78,c9,97),
	HX_("gravity",4e,6e,ff,77),
	HX_("_retainVelocity",a1,43,7b,99),
	HX_("_vx",61,7d,48,00),
	HX_("_vy",62,7d,48,00),
	HX_("_dx",b3,6d,48,00),
	HX_("_dy",b4,6d,48,00),
	HX_("_ax",16,6b,48,00),
	HX_("_ay",17,6b,48,00),
	HX_("update",09,86,05,87),
	HX_("reset",cf,49,c8,e6),
	::String(null()) };

::hx::Class FlxMouseSpring_obj::__mClass;

void FlxMouseSpring_obj::__register()
{
	FlxMouseSpring_obj _hx_dummy;
	FlxMouseSpring_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.display.FlxMouseSpring",d5,a8,67,1d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxMouseSpring_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxMouseSpring_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxMouseSpring_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxMouseSpring_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace display
