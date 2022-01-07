#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_28_getDifficultyFilePath,"CoolUtil","getDifficultyFilePath",0x5ba9beaf,"CoolUtil.getDifficultyFilePath","CoolUtil.hx",28,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_45_difficultyString,"CoolUtil","difficultyString",0x7da345af,"CoolUtil.difficultyString","CoolUtil.hx",45,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_49_boundTo,"CoolUtil","boundTo",0xe1951d76,"CoolUtil.boundTo","CoolUtil.hx",49,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_53_coolTextFile,"CoolUtil","coolTextFile",0xa6086875,"CoolUtil.coolTextFile","CoolUtil.hx",53,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_69_listFromString,"CoolUtil","listFromString",0x632b855c,"CoolUtil.listFromString","CoolUtil.hx",69,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_80_dominantColor,"CoolUtil","dominantColor",0xd61f0ec0,"CoolUtil.dominantColor","CoolUtil.hx",80,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_107_numberArray,"CoolUtil","numberArray",0x9e0008ad,"CoolUtil.numberArray","CoolUtil.hx",107,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_118_precacheSound,"CoolUtil","precacheSound",0x516888ed,"CoolUtil.precacheSound","CoolUtil.hx",118,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_127_browserLoad,"CoolUtil","browserLoad",0xdac4a08b,"CoolUtil.browserLoad","CoolUtil.hx",127,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_19_boot,"CoolUtil","boot",0xb2a2e7f5,"CoolUtil.boot","CoolUtil.hx",19,0x9f143813)
static const ::String _hx_array_data_c96d938b_16[] = {
	HX_("Nino",5c,b1,de,33),HX_("Hard",0b,5b,e1,2f),
};
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_23_boot,"CoolUtil","boot",0xb2a2e7f5,"CoolUtil.boot","CoolUtil.hx",23,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_25_boot,"CoolUtil","boot",0xb2a2e7f5,"CoolUtil.boot","CoolUtil.hx",25,0x9f143813)

void CoolUtil_obj::__construct() { }

Dynamic CoolUtil_obj::__CreateEmpty() { return new CoolUtil_obj; }

void *CoolUtil_obj::_hx_vtable = 0;

Dynamic CoolUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CoolUtil_obj > _hx_result = new CoolUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CoolUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x24fe864b;
}

::Array< ::String > CoolUtil_obj::defaultDifficulties;

::String CoolUtil_obj::defaultDifficulty;

::Array< ::String > CoolUtil_obj::difficulties;

::String CoolUtil_obj::getDifficultyFilePath( ::Dynamic num){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_28_getDifficultyFilePath)
HXLINE(  29)		if (::hx::IsNull( num )) {
HXLINE(  29)			num = ::PlayState_obj::storyDifficulty;
            		}
HXLINE(  31)		::String fileSuffix = ::CoolUtil_obj::difficulties->__get(( (int)(num) ));
HXLINE(  32)		if ((fileSuffix != ::CoolUtil_obj::defaultDifficulty)) {
HXLINE(  34)			fileSuffix = (HX_("-",2d,00,00,00) + fileSuffix);
            		}
            		else {
HXLINE(  38)			fileSuffix = HX_("",00,00,00,00);
            		}
HXLINE(  40)		return ::StringTools_obj::replace(fileSuffix.toLowerCase(),HX_(" ",20,00,00,00),HX_("-",2d,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,getDifficultyFilePath,return )

::String CoolUtil_obj::difficultyString(){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_45_difficultyString)
HXDLIN(  45)		return ::CoolUtil_obj::difficulties->__get(::PlayState_obj::storyDifficulty).toUpperCase();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CoolUtil_obj,difficultyString,return )

Float CoolUtil_obj::boundTo(Float value,Float min,Float max){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_49_boundTo)
HXDLIN(  49)		return ::Math_obj::max(min,::Math_obj::min(max,value));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CoolUtil_obj,boundTo,return )

::Array< ::String > CoolUtil_obj::coolTextFile(::String path){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_53_coolTextFile)
HXLINE(  54)		::Array< ::String > daList = ::Array_obj< ::String >::__new(0);
HXLINE(  56)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  56)			daList = ::StringTools_obj::trim(::sys::io::File_obj::getContent(path)).split(HX_("\n",0a,00,00,00));
            		}
HXLINE(  61)		{
HXLINE(  61)			int _g = 0;
HXDLIN(  61)			int _g1 = daList->length;
HXDLIN(  61)			while((_g < _g1)){
HXLINE(  61)				_g = (_g + 1);
HXDLIN(  61)				int i = (_g - 1);
HXLINE(  63)				daList[i] = ::StringTools_obj::trim(daList->__get(i));
            			}
            		}
HXLINE(  66)		return daList;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,coolTextFile,return )

::Array< ::String > CoolUtil_obj::listFromString(::String string){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_69_listFromString)
HXLINE(  70)		::Array< ::String > daList = ::Array_obj< ::String >::__new(0);
HXLINE(  71)		daList = ::StringTools_obj::trim(string).split(HX_("\n",0a,00,00,00));
HXLINE(  73)		{
HXLINE(  73)			int _g = 0;
HXDLIN(  73)			int _g1 = daList->length;
HXDLIN(  73)			while((_g < _g1)){
HXLINE(  73)				_g = (_g + 1);
HXDLIN(  73)				int i = (_g - 1);
HXLINE(  75)				daList[i] = ::StringTools_obj::trim(daList->__get(i));
            			}
            		}
HXLINE(  78)		return daList;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,listFromString,return )

int CoolUtil_obj::dominantColor( ::flixel::FlxSprite sprite){
            	HX_GC_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_80_dominantColor)
HXLINE(  81)		 ::haxe::ds::IntMap countByColor =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  82)		{
HXLINE(  82)			int _g = 0;
HXDLIN(  82)			int _g1 = sprite->frameWidth;
HXDLIN(  82)			while((_g < _g1)){
HXLINE(  82)				_g = (_g + 1);
HXDLIN(  82)				int col = (_g - 1);
HXLINE(  83)				{
HXLINE(  83)					int _g1 = 0;
HXDLIN(  83)					int _g2 = sprite->frameHeight;
HXDLIN(  83)					while((_g1 < _g2)){
HXLINE(  83)						_g1 = (_g1 + 1);
HXDLIN(  83)						int row = (_g1 - 1);
HXLINE(  84)						int colorOfThisPixel = sprite->get_pixels()->getPixel32(col,row);
HXLINE(  85)						if ((colorOfThisPixel != 0)) {
HXLINE(  86)							if (countByColor->exists(colorOfThisPixel)) {
HXLINE(  87)								int v = (countByColor->get(colorOfThisPixel) + 1);
HXDLIN(  87)								countByColor->set(colorOfThisPixel,v);
            							}
            							else {
HXLINE(  88)								if (::hx::IsNotEq( countByColor->get(colorOfThisPixel),-13520687 )) {
HXLINE(  89)									countByColor->set(colorOfThisPixel,1);
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  94)		int maxCount = 0;
HXLINE(  95)		int maxKey = 0;
HXLINE(  96)		countByColor->set(-16777216,0);
HXLINE(  97)		{
HXLINE(  97)			 ::Dynamic key = countByColor->keys();
HXDLIN(  97)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  97)				int key1 = ( (int)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  98)				if (::hx::IsGreaterEq( countByColor->get(key1),maxCount )) {
HXLINE(  99)					maxCount = ( (int)(countByColor->get(key1)) );
HXLINE( 100)					maxKey = key1;
            				}
            			}
            		}
HXLINE( 103)		return maxKey;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,dominantColor,return )

::Array< int > CoolUtil_obj::numberArray(int max, ::Dynamic __o_min){
            		 ::Dynamic min = __o_min;
            		if (::hx::IsNull(__o_min)) min = 0;
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_107_numberArray)
HXLINE( 108)		::Array< int > dumbArray = ::Array_obj< int >::__new(0);
HXLINE( 109)		{
HXLINE( 109)			int _g = ( (int)(min) );
HXDLIN( 109)			int _g1 = max;
HXDLIN( 109)			while((_g < _g1)){
HXLINE( 109)				_g = (_g + 1);
HXDLIN( 109)				int i = (_g - 1);
HXLINE( 111)				dumbArray->push(i);
            			}
            		}
HXLINE( 113)		return dumbArray;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CoolUtil_obj,numberArray,return )

void CoolUtil_obj::precacheSound(::String sound,::String library){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_118_precacheSound)
HXDLIN( 118)		::Dynamic _hx_tmp = ::openfl::utils::Assets_obj::cache;
HXDLIN( 118)		if (!(::openfl::utils::IAssetCache_obj::hasSound(_hx_tmp,::Paths_obj::sound(sound,library)))) {
HXLINE( 119)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _this = ::flixel::FlxG_obj::sound;
HXDLIN( 119)			::String EmbeddedSound = ( (::String)(::Paths_obj::sound(sound,library)) );
HXDLIN( 119)			bool _hx_tmp;
HXDLIN( 119)			if (!(::openfl::utils::Assets_obj::exists(EmbeddedSound,HX_("SOUND",af,c4,ba,fe)))) {
HXLINE( 119)				_hx_tmp = ::openfl::utils::Assets_obj::exists(EmbeddedSound,HX_("MUSIC",85,08,49,8e));
            			}
            			else {
HXLINE( 119)				_hx_tmp = true;
            			}
HXDLIN( 119)			if (_hx_tmp) {
HXLINE( 119)				::openfl::utils::Assets_obj::getSound(EmbeddedSound,true);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CoolUtil_obj,precacheSound,(void))

void CoolUtil_obj::browserLoad(::String site){
            	HX_GC_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_127_browserLoad)
HXDLIN( 127)		::String prefix = HX_("",00,00,00,00);
HXDLIN( 127)		if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("^https?://",48,ee,dd,38),HX_("",00,00,00,00))->match(site))) {
HXDLIN( 127)			prefix = HX_("http://",52,75,cd,5a);
            		}
HXDLIN( 127)		::openfl::Lib_obj::getURL( ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,(prefix + site)),HX_("_blank",95,26,d9,b0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,browserLoad,(void))


CoolUtil_obj::CoolUtil_obj()
{
}

bool CoolUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"boundTo") ) { outValue = boundTo_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numberArray") ) { outValue = numberArray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"browserLoad") ) { outValue = browserLoad_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"difficulties") ) { outValue = ( difficulties ); return true; }
		if (HX_FIELD_EQ(inName,"coolTextFile") ) { outValue = coolTextFile_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dominantColor") ) { outValue = dominantColor_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"precacheSound") ) { outValue = precacheSound_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"listFromString") ) { outValue = listFromString_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"difficultyString") ) { outValue = difficultyString_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultDifficulty") ) { outValue = ( defaultDifficulty ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"defaultDifficulties") ) { outValue = ( defaultDifficulties ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getDifficultyFilePath") ) { outValue = getDifficultyFilePath_dyn(); return true; }
	}
	return false;
}

bool CoolUtil_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"difficulties") ) { difficulties=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultDifficulty") ) { defaultDifficulty=ioValue.Cast< ::String >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"defaultDifficulties") ) { defaultDifficulties=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CoolUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CoolUtil_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &CoolUtil_obj::defaultDifficulties,HX_("defaultDifficulties",ba,89,b7,7e)},
	{::hx::fsString,(void *) &CoolUtil_obj::defaultDifficulty,HX_("defaultDifficulty",5c,06,f0,1d)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &CoolUtil_obj::difficulties,HX_("difficulties",59,c7,5e,02)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CoolUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CoolUtil_obj::defaultDifficulties,"defaultDifficulties");
	HX_MARK_MEMBER_NAME(CoolUtil_obj::defaultDifficulty,"defaultDifficulty");
	HX_MARK_MEMBER_NAME(CoolUtil_obj::difficulties,"difficulties");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CoolUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CoolUtil_obj::defaultDifficulties,"defaultDifficulties");
	HX_VISIT_MEMBER_NAME(CoolUtil_obj::defaultDifficulty,"defaultDifficulty");
	HX_VISIT_MEMBER_NAME(CoolUtil_obj::difficulties,"difficulties");
};

#endif

::hx::Class CoolUtil_obj::__mClass;

static ::String CoolUtil_obj_sStaticFields[] = {
	HX_("defaultDifficulties",ba,89,b7,7e),
	HX_("defaultDifficulty",5c,06,f0,1d),
	HX_("difficulties",59,c7,5e,02),
	HX_("getDifficultyFilePath",d2,8d,91,4d),
	HX_("difficultyString",6c,c9,73,cb),
	HX_("boundTo",59,05,b8,f3),
	HX_("coolTextFile",b2,09,03,cc),
	HX_("listFromString",d9,af,fe,f5),
	HX_("dominantColor",e3,82,71,eb),
	HX_("numberArray",10,1e,18,ad),
	HX_("precacheSound",10,fd,ba,66),
	HX_("browserLoad",ee,b5,dc,e9),
	::String(null())
};

void CoolUtil_obj::__register()
{
	CoolUtil_obj _hx_dummy;
	CoolUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CoolUtil",8b,93,6d,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CoolUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &CoolUtil_obj::__SetStatic;
	__mClass->mMarkFunc = CoolUtil_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CoolUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CoolUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CoolUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CoolUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CoolUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CoolUtil_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_19_boot)
HXDLIN(  19)		defaultDifficulties = ::Array_obj< ::String >::fromData( _hx_array_data_c96d938b_16,2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_23_boot)
HXDLIN(  23)		defaultDifficulty = HX_("Normal",47,e6,fd,64);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_25_boot)
HXDLIN(  25)		difficulties = ::Array_obj< ::String >::__new(0);
            	}
}

