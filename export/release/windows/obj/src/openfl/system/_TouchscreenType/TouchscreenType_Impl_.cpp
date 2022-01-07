#include <hxcpp.h>

#ifndef INCLUDED_openfl_system__TouchscreenType_TouchscreenType_Impl_
#include <openfl/system/_TouchscreenType/TouchscreenType_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5cb370d4ac231e29_31_fromString,"openfl.system._TouchscreenType.TouchscreenType_Impl_","fromString",0x82baf24b,"openfl.system._TouchscreenType.TouchscreenType_Impl_.fromString","openfl/system/TouchscreenType.hx",31,0x3b3b711a)
HX_LOCAL_STACK_FRAME(_hx_pos_5cb370d4ac231e29_42_toString,"openfl.system._TouchscreenType.TouchscreenType_Impl_","toString",0x94de991c,"openfl.system._TouchscreenType.TouchscreenType_Impl_.toString","openfl/system/TouchscreenType.hx",42,0x3b3b711a)
HX_LOCAL_STACK_FRAME(_hx_pos_5cb370d4ac231e29_17_boot,"openfl.system._TouchscreenType.TouchscreenType_Impl_","boot",0xdd0254a2,"openfl.system._TouchscreenType.TouchscreenType_Impl_.boot","openfl/system/TouchscreenType.hx",17,0x3b3b711a)
HX_LOCAL_STACK_FRAME(_hx_pos_5cb370d4ac231e29_22_boot,"openfl.system._TouchscreenType.TouchscreenType_Impl_","boot",0xdd0254a2,"openfl.system._TouchscreenType.TouchscreenType_Impl_.boot","openfl/system/TouchscreenType.hx",22,0x3b3b711a)
HX_LOCAL_STACK_FRAME(_hx_pos_5cb370d4ac231e29_27_boot,"openfl.system._TouchscreenType.TouchscreenType_Impl_","boot",0xdd0254a2,"openfl.system._TouchscreenType.TouchscreenType_Impl_.boot","openfl/system/TouchscreenType.hx",27,0x3b3b711a)
namespace openfl{
namespace _hx_system{
namespace _TouchscreenType{

void TouchscreenType_Impl__obj::__construct() { }

Dynamic TouchscreenType_Impl__obj::__CreateEmpty() { return new TouchscreenType_Impl__obj; }

void *TouchscreenType_Impl__obj::_hx_vtable = 0;

Dynamic TouchscreenType_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TouchscreenType_Impl__obj > _hx_result = new TouchscreenType_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TouchscreenType_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3753ff40;
}

 ::Dynamic TouchscreenType_Impl__obj::FINGER;

 ::Dynamic TouchscreenType_Impl__obj::NONE;

 ::Dynamic TouchscreenType_Impl__obj::STYLUS;

 ::Dynamic TouchscreenType_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_5cb370d4ac231e29_31_fromString)
HXDLIN(  31)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("finger",a9,af,7d,86)) ){
HXLINE(  33)			return 0;
HXDLIN(  33)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("none",b8,12,0a,49)) ){
HXLINE(  34)			return 1;
HXDLIN(  34)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("stylus",12,f4,d2,15)) ){
HXLINE(  35)			return 2;
HXDLIN(  35)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  36)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  31)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TouchscreenType_Impl__obj,fromString,return )

::String TouchscreenType_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_5cb370d4ac231e29_42_toString)
HXDLIN(  42)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  44)			return HX_("finger",a9,af,7d,86);
HXDLIN(  44)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  45)			return HX_("none",b8,12,0a,49);
HXDLIN(  45)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(  46)			return HX_("stylus",12,f4,d2,15);
HXDLIN(  46)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  47)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  42)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TouchscreenType_Impl__obj,toString,return )


TouchscreenType_Impl__obj::TouchscreenType_Impl__obj()
{
}

bool TouchscreenType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TouchscreenType_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo TouchscreenType_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &TouchscreenType_Impl__obj::FINGER,HX_("FINGER",a9,5b,00,39)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &TouchscreenType_Impl__obj::NONE,HX_("NONE",b8,da,ca,33)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &TouchscreenType_Impl__obj::STYLUS,HX_("STYLUS",12,a0,55,c8)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void TouchscreenType_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TouchscreenType_Impl__obj::FINGER,"FINGER");
	HX_MARK_MEMBER_NAME(TouchscreenType_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(TouchscreenType_Impl__obj::STYLUS,"STYLUS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TouchscreenType_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TouchscreenType_Impl__obj::FINGER,"FINGER");
	HX_VISIT_MEMBER_NAME(TouchscreenType_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(TouchscreenType_Impl__obj::STYLUS,"STYLUS");
};

#endif

::hx::Class TouchscreenType_Impl__obj::__mClass;

static ::String TouchscreenType_Impl__obj_sStaticFields[] = {
	HX_("FINGER",a9,5b,00,39),
	HX_("NONE",b8,da,ca,33),
	HX_("STYLUS",12,a0,55,c8),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void TouchscreenType_Impl__obj::__register()
{
	TouchscreenType_Impl__obj _hx_dummy;
	TouchscreenType_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.system._TouchscreenType.TouchscreenType_Impl_",fe,65,3f,76);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TouchscreenType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TouchscreenType_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TouchscreenType_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TouchscreenType_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TouchscreenType_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TouchscreenType_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TouchscreenType_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TouchscreenType_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5cb370d4ac231e29_17_boot)
HXDLIN(  17)		FINGER = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_5cb370d4ac231e29_22_boot)
HXDLIN(  22)		NONE = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_5cb370d4ac231e29_27_boot)
HXDLIN(  27)		STYLUS = 2;
            	}
}

} // end namespace openfl
} // end namespace system
} // end namespace _TouchscreenType
