#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui_GamepadAutoConnectPreference
#include <flixel/addons/ui/GamepadAutoConnectPreference.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

::flixel::addons::ui::GamepadAutoConnectPreference GamepadAutoConnectPreference_obj::FirstActive;

::flixel::addons::ui::GamepadAutoConnectPreference GamepadAutoConnectPreference_obj::GamepadID(int i)
{
	return ::hx::CreateEnum< GamepadAutoConnectPreference_obj >(HX_("GamepadID",9c,2a,0b,01),3,1)->_hx_init(0,i);
}

::flixel::addons::ui::GamepadAutoConnectPreference GamepadAutoConnectPreference_obj::LastActive;

::flixel::addons::ui::GamepadAutoConnectPreference GamepadAutoConnectPreference_obj::Never;

bool GamepadAutoConnectPreference_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("FirstActive",f6,09,1b,df)) { outValue = GamepadAutoConnectPreference_obj::FirstActive; return true; }
	if (inName==HX_("GamepadID",9c,2a,0b,01)) { outValue = GamepadAutoConnectPreference_obj::GamepadID_dyn(); return true; }
	if (inName==HX_("LastActive",dc,28,d2,d7)) { outValue = GamepadAutoConnectPreference_obj::LastActive; return true; }
	if (inName==HX_("Never",6c,ae,5d,2c)) { outValue = GamepadAutoConnectPreference_obj::Never; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(GamepadAutoConnectPreference_obj)

int GamepadAutoConnectPreference_obj::__FindIndex(::String inName)
{
	if (inName==HX_("FirstActive",f6,09,1b,df)) return 1;
	if (inName==HX_("GamepadID",9c,2a,0b,01)) return 3;
	if (inName==HX_("LastActive",dc,28,d2,d7)) return 2;
	if (inName==HX_("Never",6c,ae,5d,2c)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(GamepadAutoConnectPreference_obj,GamepadID,return)

int GamepadAutoConnectPreference_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("FirstActive",f6,09,1b,df)) return 0;
	if (inName==HX_("GamepadID",9c,2a,0b,01)) return 1;
	if (inName==HX_("LastActive",dc,28,d2,d7)) return 0;
	if (inName==HX_("Never",6c,ae,5d,2c)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val GamepadAutoConnectPreference_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("FirstActive",f6,09,1b,df)) return FirstActive;
	if (inName==HX_("GamepadID",9c,2a,0b,01)) return GamepadID_dyn();
	if (inName==HX_("LastActive",dc,28,d2,d7)) return LastActive;
	if (inName==HX_("Never",6c,ae,5d,2c)) return Never;
	return super::__Field(inName,inCallProp);
}

static ::String GamepadAutoConnectPreference_obj_sStaticFields[] = {
	HX_("Never",6c,ae,5d,2c),
	HX_("FirstActive",f6,09,1b,df),
	HX_("LastActive",dc,28,d2,d7),
	HX_("GamepadID",9c,2a,0b,01),
	::String(null())
};

::hx::Class GamepadAutoConnectPreference_obj::__mClass;

Dynamic __Create_GamepadAutoConnectPreference_obj() { return new GamepadAutoConnectPreference_obj; }

void GamepadAutoConnectPreference_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.addons.ui.GamepadAutoConnectPreference",e6,f3,f3,18), ::hx::TCanCast< GamepadAutoConnectPreference_obj >,GamepadAutoConnectPreference_obj_sStaticFields,0,
	&__Create_GamepadAutoConnectPreference_obj, &__Create,
	&super::__SGetClass(), &CreateGamepadAutoConnectPreference_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &GamepadAutoConnectPreference_obj::__GetStatic;
}

void GamepadAutoConnectPreference_obj::__boot()
{
FirstActive = ::hx::CreateConstEnum< GamepadAutoConnectPreference_obj >(HX_("FirstActive",f6,09,1b,df),1);
LastActive = ::hx::CreateConstEnum< GamepadAutoConnectPreference_obj >(HX_("LastActive",dc,28,d2,d7),2);
Never = ::hx::CreateConstEnum< GamepadAutoConnectPreference_obj >(HX_("Never",6c,ae,5d,2c),0);
}


} // end namespace flixel
} // end namespace addons
} // end namespace ui
