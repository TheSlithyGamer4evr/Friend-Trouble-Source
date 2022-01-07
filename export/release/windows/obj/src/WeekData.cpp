#include <hxcpp.h>

#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
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
#ifndef INCLUDED_WeekData
#include <WeekData.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1b9a64f7c24482df_30_new,"WeekData","new",0x851ed050,"WeekData.new","WeekData.hx",30,0xa959a920)
HX_LOCAL_STACK_FRAME(_hx_pos_1b9a64f7c24482df_48_createWeekFile,"WeekData","createWeekFile",0x4a4409bc,"WeekData.createWeekFile","WeekData.hx",48,0xa959a920)
static const ::String _hx_array_data_0344a85e_2[] = {
	HX_("dad",47,36,4c,00),HX_("bf",c4,55,00,00),HX_("gf",1f,5a,00,00),
};
static const int _hx_array_data_0344a85e_3[] = {
	(int)146,(int)113,(int)253,
};
HX_LOCAL_STACK_FRAME(_hx_pos_1b9a64f7c24482df_81_reloadWeekFiles,"WeekData","reloadWeekFiles",0xb9249b3a,"WeekData.reloadWeekFiles","WeekData.hx",81,0xa959a920)
static const ::String _hx_array_data_0344a85e_12[] = {
	HX_("mods/",9e,2f,58,0c),HX_("assets/",4c,2a,dc,36),
};
HX_LOCAL_STACK_FRAME(_hx_pos_1b9a64f7c24482df_180_addWeek,"WeekData","addWeek",0x9b145aa5,"WeekData.addWeek","WeekData.hx",180,0xa959a920)
HX_LOCAL_STACK_FRAME(_hx_pos_1b9a64f7c24482df_201_getWeekFile,"WeekData","getWeekFile",0xe9939736,"WeekData.getWeekFile","WeekData.hx",201,0xa959a920)
HX_LOCAL_STACK_FRAME(_hx_pos_1b9a64f7c24482df_223_getWeekFileName,"WeekData","getWeekFileName",0x7c2708a1,"WeekData.getWeekFileName","WeekData.hx",223,0xa959a920)
HX_LOCAL_STACK_FRAME(_hx_pos_1b9a64f7c24482df_228_getCurrentWeek,"WeekData","getCurrentWeek",0xdc43b1e7,"WeekData.getCurrentWeek","WeekData.hx",228,0xa959a920)
HX_LOCAL_STACK_FRAME(_hx_pos_1b9a64f7c24482df_231_setDirectoryFromWeek,"WeekData","setDirectoryFromWeek",0xb5869219,"WeekData.setDirectoryFromWeek","WeekData.hx",231,0xa959a920)
HX_LOCAL_STACK_FRAME(_hx_pos_1b9a64f7c24482df_31_boot,"WeekData","boot",0xedf07642,"WeekData.boot","WeekData.hx",31,0xa959a920)
HX_LOCAL_STACK_FRAME(_hx_pos_1b9a64f7c24482df_32_boot,"WeekData","boot",0xedf07642,"WeekData.boot","WeekData.hx",32,0xa959a920)

void WeekData_obj::__construct( ::Dynamic weekFile){
            	HX_STACKFRAME(&_hx_pos_1b9a64f7c24482df_30_new)
HXLINE(  33)		this->folder = HX_("",00,00,00,00);
HXLINE(  67)		this->songs = ( (::cpp::VirtualArray)(weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic)) );
HXLINE(  68)		this->weekCharacters = ( (::Array< ::String >)(weekFile->__Field(HX_("weekCharacters",be,b5,7f,1d),::hx::paccDynamic)) );
HXLINE(  69)		this->weekBackground = ( (::String)(weekFile->__Field(HX_("weekBackground",02,f1,ce,ed),::hx::paccDynamic)) );
HXLINE(  70)		this->weekBefore = ( (::String)(weekFile->__Field(HX_("weekBefore",93,97,02,5d),::hx::paccDynamic)) );
HXLINE(  71)		this->storyName = ( (::String)(weekFile->__Field(HX_("storyName",e0,50,20,29),::hx::paccDynamic)) );
HXLINE(  72)		this->weekName = ( (::String)(weekFile->__Field(HX_("weekName",5f,08,2f,30),::hx::paccDynamic)) );
HXLINE(  73)		this->freeplayColor = ( (::Array< int >)(weekFile->__Field(HX_("freeplayColor",a3,0c,53,32),::hx::paccDynamic)) );
HXLINE(  74)		this->startUnlocked = ( (bool)(weekFile->__Field(HX_("startUnlocked",a5,96,c9,60),::hx::paccDynamic)) );
HXLINE(  75)		this->hideStoryMode = ( (bool)(weekFile->__Field(HX_("hideStoryMode",d6,b4,4e,4c),::hx::paccDynamic)) );
HXLINE(  76)		this->hideFreeplay = ( (bool)(weekFile->__Field(HX_("hideFreeplay",82,13,8c,e3),::hx::paccDynamic)) );
HXLINE(  77)		this->difficulties = ( (::String)(weekFile->__Field(HX_("difficulties",59,c7,5e,02),::hx::paccDynamic)) );
            	}

Dynamic WeekData_obj::__CreateEmpty() { return new WeekData_obj; }

void *WeekData_obj::_hx_vtable = 0;

Dynamic WeekData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WeekData_obj > _hx_result = new WeekData_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool WeekData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5ed59b1e;
}

 ::haxe::ds::StringMap WeekData_obj::weeksLoaded;

::Array< ::String > WeekData_obj::weeksList;

 ::Dynamic WeekData_obj::createWeekFile(){
            	HX_STACKFRAME(&_hx_pos_1b9a64f7c24482df_48_createWeekFile)
HXLINE(  49)		 ::Dynamic weekFile =  ::Dynamic(::hx::Anon_obj::Create(11)
            			->setFixed(0,HX_("songs",fe,36,c7,80),::cpp::VirtualArray_obj::__new(3)->init(0,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Bopeebo",90,29,16,da))->init(1,HX_("dad",47,36,4c,00))->init(2,::cpp::VirtualArray_obj::__new(3)->init(0,146)->init(1,113)->init(2,253)))->init(1,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Fresh",4e,f6,b3,99))->init(1,HX_("dad",47,36,4c,00))->init(2,::cpp::VirtualArray_obj::__new(3)->init(0,146)->init(1,113)->init(2,253)))->init(2,::cpp::VirtualArray_obj::__new(3)->init(0,HX_("Dad Battle",31,46,15,16))->init(1,HX_("dad",47,36,4c,00))->init(2,::cpp::VirtualArray_obj::__new(3)->init(0,146)->init(1,113)->init(2,253))))
            			->setFixed(1,HX_("hideFreeplay",82,13,8c,e3),false)
            			->setFixed(2,HX_("weekBackground",02,f1,ce,ed),HX_("stage",be,6a,0b,84))
            			->setFixed(3,HX_("difficulties",59,c7,5e,02),HX_("",00,00,00,00))
            			->setFixed(4,HX_("weekCharacters",be,b5,7f,1d),::Array_obj< ::String >::fromData( _hx_array_data_0344a85e_2,3))
            			->setFixed(5,HX_("storyName",e0,50,20,29),HX_("Your New Week",e1,5b,59,b7))
            			->setFixed(6,HX_("weekName",5f,08,2f,30),HX_("Custom Week",c3,aa,e2,8c))
            			->setFixed(7,HX_("freeplayColor",a3,0c,53,32),::Array_obj< int >::fromData( _hx_array_data_0344a85e_3,3))
            			->setFixed(8,HX_("hideStoryMode",d6,b4,4e,4c),false)
            			->setFixed(9,HX_("weekBefore",93,97,02,5d),HX_("tutorial",9e,8f,b5,82))
            			->setFixed(10,HX_("startUnlocked",a5,96,c9,60),true));
HXLINE(  62)		return weekFile;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(WeekData_obj,createWeekFile,return )

void WeekData_obj::reloadWeekFiles( ::Dynamic __o_isStoryMode){
            		 ::Dynamic isStoryMode = __o_isStoryMode;
            		if (::hx::IsNull(__o_isStoryMode)) isStoryMode = false;
            	HX_GC_STACKFRAME(&_hx_pos_1b9a64f7c24482df_81_reloadWeekFiles)
HXLINE(  82)		::WeekData_obj::weeksList = ::Array_obj< ::String >::__new(0);
HXLINE(  83)		::WeekData_obj::weeksLoaded->clear();
HXLINE(  85)		::Array< ::String > disabledMods = ::Array_obj< ::String >::__new(0);
HXLINE(  86)		::String modsListPath = HX_("modsList.txt",f1,ca,08,ac);
HXLINE(  87)		::Array< ::String > directories = ::Array_obj< ::String >::fromData( _hx_array_data_0344a85e_12,2);
HXLINE(  88)		int originalLength = directories->length;
HXLINE(  89)		if (::sys::FileSystem_obj::exists(modsListPath)) {
HXLINE(  91)			::Array< ::String > stuff = ::CoolUtil_obj::coolTextFile(modsListPath);
HXLINE(  92)			{
HXLINE(  92)				int _g = 0;
HXDLIN(  92)				int _g1 = stuff->length;
HXDLIN(  92)				while((_g < _g1)){
HXLINE(  92)					_g = (_g + 1);
HXDLIN(  92)					int i = (_g - 1);
HXLINE(  94)					::Array< ::String > splitName = ::StringTools_obj::trim(stuff->__get(i)).split(HX_("|",7c,00,00,00));
HXLINE(  95)					if ((splitName->__get(1) == HX_("0",30,00,00,00))) {
HXLINE(  97)						disabledMods->push(splitName->__get(0));
            					}
            					else {
HXLINE( 101)						::String path = ::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,HX_("mods/",9e,2f,58,0c))->init(1,splitName->__get(0)));
HXLINE( 103)						bool _hx_tmp;
HXDLIN( 103)						bool _hx_tmp1;
HXDLIN( 103)						bool _hx_tmp2;
HXDLIN( 103)						if (::sys::FileSystem_obj::isDirectory(path)) {
HXLINE( 103)							_hx_tmp2 = !(::Paths_obj::ignoreModFolders->contains(splitName->__get(0)));
            						}
            						else {
HXLINE( 103)							_hx_tmp2 = false;
            						}
HXDLIN( 103)						if (_hx_tmp2) {
HXLINE( 103)							_hx_tmp1 = !(disabledMods->contains(splitName->__get(0)));
            						}
            						else {
HXLINE( 103)							_hx_tmp1 = false;
            						}
HXDLIN( 103)						if (_hx_tmp1) {
HXLINE( 103)							_hx_tmp = !(directories->contains((path + HX_("/",2f,00,00,00))));
            						}
            						else {
HXLINE( 103)							_hx_tmp = false;
            						}
HXDLIN( 103)						if (_hx_tmp) {
HXLINE( 105)							directories->push((path + HX_("/",2f,00,00,00)));
            						}
            					}
            				}
            			}
            		}
HXLINE( 112)		::Array< ::String > modsDirectories = ::Paths_obj::getModDirectories();
HXLINE( 113)		{
HXLINE( 113)			int _g = 0;
HXDLIN( 113)			while((_g < modsDirectories->length)){
HXLINE( 113)				::String folder = modsDirectories->__get(_g);
HXDLIN( 113)				_g = (_g + 1);
HXLINE( 115)				::String pathThing = (::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,HX_("mods/",9e,2f,58,0c))->init(1,folder)) + HX_("/",2f,00,00,00));
HXLINE( 116)				bool _hx_tmp;
HXDLIN( 116)				if (!(disabledMods->contains(folder))) {
HXLINE( 116)					_hx_tmp = !(directories->contains(pathThing));
            				}
            				else {
HXLINE( 116)					_hx_tmp = false;
            				}
HXDLIN( 116)				if (_hx_tmp) {
HXLINE( 118)					directories->push(pathThing);
            				}
            			}
            		}
HXLINE( 127)		::String file = HX_("weeks/weekList.txt",c4,73,97,b1);
HXDLIN( 127)		if (::hx::IsNull( file )) {
HXLINE( 127)			file = HX_("",00,00,00,00);
            		}
HXDLIN( 127)		::Array< ::String > sexList = ::CoolUtil_obj::coolTextFile((HX_("assets/",4c,2a,dc,36) + file));
HXLINE( 128)		{
HXLINE( 128)			int _g1 = 0;
HXDLIN( 128)			int _g2 = sexList->length;
HXDLIN( 128)			while((_g1 < _g2)){
HXLINE( 128)				_g1 = (_g1 + 1);
HXDLIN( 128)				int i = (_g1 - 1);
HXLINE( 129)				{
HXLINE( 129)					int _g = 0;
HXDLIN( 129)					int _g2 = directories->length;
HXDLIN( 129)					while((_g < _g2)){
HXLINE( 129)						_g = (_g + 1);
HXDLIN( 129)						int j = (_g - 1);
HXLINE( 130)						::String fileToCheck = (((directories->__get(j) + HX_("weeks/",50,a9,04,ff)) + sexList->__get(i)) + HX_(".json",56,f1,d6,c2));
HXLINE( 131)						if (!(::WeekData_obj::weeksLoaded->exists(sexList->__get(i)))) {
HXLINE( 132)							 ::Dynamic week = ::WeekData_obj::getWeekFile(fileToCheck);
HXLINE( 133)							if (::hx::IsNotNull( week )) {
HXLINE( 134)								 ::WeekData weekFile =  ::WeekData_obj::__alloc( HX_CTX ,week);
HXLINE( 137)								if ((j >= originalLength)) {
HXLINE( 138)									weekFile->folder = directories->__get(j).substring(HX_("mods/",9e,2f,58,0c).length,(directories->__get(j).length - 1));
            								}
HXLINE( 142)								bool _hx_tmp;
HXDLIN( 142)								if (::hx::IsNotNull( weekFile )) {
HXLINE( 142)									bool _hx_tmp1;
HXDLIN( 142)									if (::hx::IsNotNull( isStoryMode )) {
HXLINE( 142)										if (( (bool)(isStoryMode) )) {
HXLINE( 142)											_hx_tmp1 = !(weekFile->hideStoryMode);
            										}
            										else {
HXLINE( 142)											_hx_tmp1 = false;
            										}
            									}
            									else {
HXLINE( 142)										_hx_tmp1 = true;
            									}
HXDLIN( 142)									if (!(_hx_tmp1)) {
HXLINE( 142)										if (!(( (bool)(isStoryMode) ))) {
HXLINE( 142)											_hx_tmp = !(weekFile->hideFreeplay);
            										}
            										else {
HXLINE( 142)											_hx_tmp = false;
            										}
            									}
            									else {
HXLINE( 142)										_hx_tmp = true;
            									}
            								}
            								else {
HXLINE( 142)									_hx_tmp = false;
            								}
HXDLIN( 142)								if (_hx_tmp) {
HXLINE( 143)									::WeekData_obj::weeksLoaded->set(sexList->__get(i),weekFile);
HXLINE( 144)									::WeekData_obj::weeksList->push(sexList->__get(i));
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 152)		{
HXLINE( 152)			int _g3 = 0;
HXDLIN( 152)			int _g4 = directories->length;
HXDLIN( 152)			while((_g3 < _g4)){
HXLINE( 152)				_g3 = (_g3 + 1);
HXDLIN( 152)				int i = (_g3 - 1);
HXLINE( 153)				::String directory = (directories->__get(i) + HX_("weeks/",50,a9,04,ff));
HXLINE( 154)				if (::sys::FileSystem_obj::exists(directory)) {
HXLINE( 155)					::Array< ::String > listOfWeeks = ::CoolUtil_obj::coolTextFile((directory + HX_("weekList.txt",74,12,92,5d)));
HXLINE( 156)					{
HXLINE( 156)						int _g = 0;
HXDLIN( 156)						while((_g < listOfWeeks->length)){
HXLINE( 156)							::String daWeek = listOfWeeks->__get(_g);
HXDLIN( 156)							_g = (_g + 1);
HXLINE( 158)							::String path = ((directory + daWeek) + HX_(".json",56,f1,d6,c2));
HXLINE( 159)							if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 161)								::WeekData_obj::addWeek(daWeek,path,directories->__get(i),i,originalLength);
            							}
            						}
            					}
HXLINE( 165)					{
HXLINE( 165)						int _g1 = 0;
HXDLIN( 165)						::Array< ::String > _g2 = ::sys::FileSystem_obj::readDirectory(directory);
HXDLIN( 165)						while((_g1 < _g2->length)){
HXLINE( 165)							::String file = _g2->__get(_g1);
HXDLIN( 165)							_g1 = (_g1 + 1);
HXLINE( 167)							::String path = ::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,directory)->init(1,file));
HXLINE( 168)							bool _hx_tmp;
HXDLIN( 168)							if (!(::sys::FileSystem_obj::isDirectory(path))) {
HXLINE( 168)								_hx_tmp = ::StringTools_obj::endsWith(file,HX_(".json",56,f1,d6,c2));
            							}
            							else {
HXLINE( 168)								_hx_tmp = false;
            							}
HXDLIN( 168)							if (_hx_tmp) {
HXLINE( 170)								::String _hx_tmp = file.substr(0,(file.length - 5));
HXDLIN( 170)								::WeekData_obj::addWeek(_hx_tmp,path,directories->__get(i),i,originalLength);
            							}
            						}
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekData_obj,reloadWeekFiles,(void))

void WeekData_obj::addWeek(::String weekToCheck,::String path,::String directory,int i,int originalLength){
            	HX_GC_STACKFRAME(&_hx_pos_1b9a64f7c24482df_180_addWeek)
HXDLIN( 180)		if (!(::WeekData_obj::weeksLoaded->exists(weekToCheck))) {
HXLINE( 182)			 ::Dynamic week = ::WeekData_obj::getWeekFile(path);
HXLINE( 183)			if (::hx::IsNotNull( week )) {
HXLINE( 185)				 ::WeekData weekFile =  ::WeekData_obj::__alloc( HX_CTX ,week);
HXLINE( 186)				if ((i >= originalLength)) {
HXLINE( 189)					weekFile->folder = directory.substring(HX_("mods/",9e,2f,58,0c).length,(directory.length - 1));
            				}
HXLINE( 192)				bool _hx_tmp;
HXDLIN( 192)				bool _hx_tmp1;
HXDLIN( 192)				if (::PlayState_obj::isStoryMode) {
HXLINE( 192)					_hx_tmp1 = !(weekFile->hideStoryMode);
            				}
            				else {
HXLINE( 192)					_hx_tmp1 = false;
            				}
HXDLIN( 192)				if (!(_hx_tmp1)) {
HXLINE( 192)					if (!(::PlayState_obj::isStoryMode)) {
HXLINE( 192)						_hx_tmp = !(weekFile->hideFreeplay);
            					}
            					else {
HXLINE( 192)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 192)					_hx_tmp = true;
            				}
HXDLIN( 192)				if (_hx_tmp) {
HXLINE( 194)					::WeekData_obj::weeksLoaded->set(weekToCheck,weekFile);
HXLINE( 195)					::WeekData_obj::weeksList->push(weekToCheck);
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(WeekData_obj,addWeek,(void))

 ::Dynamic WeekData_obj::getWeekFile(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_1b9a64f7c24482df_201_getWeekFile)
HXLINE( 202)		::String rawJson = null();
HXLINE( 204)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 205)			rawJson = ::sys::io::File_obj::getContent(path);
            		}
HXLINE( 213)		bool _hx_tmp;
HXDLIN( 213)		if (::hx::IsNotNull( rawJson )) {
HXLINE( 213)			_hx_tmp = (rawJson.length > 0);
            		}
            		else {
HXLINE( 213)			_hx_tmp = false;
            		}
HXDLIN( 213)		if (_hx_tmp) {
HXLINE( 214)			return  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,rawJson)->doParse();
            		}
HXLINE( 216)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekData_obj,getWeekFile,return )

::String WeekData_obj::getWeekFileName(){
            	HX_STACKFRAME(&_hx_pos_1b9a64f7c24482df_223_getWeekFileName)
HXDLIN( 223)		return ::WeekData_obj::weeksList->__get(::PlayState_obj::storyWeek);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(WeekData_obj,getWeekFileName,return )

 ::WeekData WeekData_obj::getCurrentWeek(){
            	HX_STACKFRAME(&_hx_pos_1b9a64f7c24482df_228_getCurrentWeek)
HXDLIN( 228)		return ( ( ::WeekData)(::WeekData_obj::weeksLoaded->get(::WeekData_obj::weeksList->__get(::PlayState_obj::storyWeek))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(WeekData_obj,getCurrentWeek,return )

void WeekData_obj::setDirectoryFromWeek( ::WeekData data){
            	HX_STACKFRAME(&_hx_pos_1b9a64f7c24482df_231_setDirectoryFromWeek)
HXLINE( 232)		::Paths_obj::currentModDirectory = HX_("",00,00,00,00);
HXLINE( 233)		bool _hx_tmp;
HXDLIN( 233)		bool _hx_tmp1;
HXDLIN( 233)		if (::hx::IsNotNull( data )) {
HXLINE( 233)			_hx_tmp1 = ::hx::IsNotNull( data->folder );
            		}
            		else {
HXLINE( 233)			_hx_tmp1 = false;
            		}
HXDLIN( 233)		if (_hx_tmp1) {
HXLINE( 233)			_hx_tmp = (data->folder.length > 0);
            		}
            		else {
HXLINE( 233)			_hx_tmp = false;
            		}
HXDLIN( 233)		if (_hx_tmp) {
HXLINE( 234)			::Paths_obj::currentModDirectory = data->folder;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekData_obj,setDirectoryFromWeek,(void))


WeekData_obj::WeekData_obj()
{
}

void WeekData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WeekData);
	HX_MARK_MEMBER_NAME(folder,"folder");
	HX_MARK_MEMBER_NAME(songs,"songs");
	HX_MARK_MEMBER_NAME(weekCharacters,"weekCharacters");
	HX_MARK_MEMBER_NAME(weekBackground,"weekBackground");
	HX_MARK_MEMBER_NAME(weekBefore,"weekBefore");
	HX_MARK_MEMBER_NAME(storyName,"storyName");
	HX_MARK_MEMBER_NAME(weekName,"weekName");
	HX_MARK_MEMBER_NAME(freeplayColor,"freeplayColor");
	HX_MARK_MEMBER_NAME(startUnlocked,"startUnlocked");
	HX_MARK_MEMBER_NAME(hideStoryMode,"hideStoryMode");
	HX_MARK_MEMBER_NAME(hideFreeplay,"hideFreeplay");
	HX_MARK_MEMBER_NAME(difficulties,"difficulties");
	HX_MARK_END_CLASS();
}

void WeekData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(folder,"folder");
	HX_VISIT_MEMBER_NAME(songs,"songs");
	HX_VISIT_MEMBER_NAME(weekCharacters,"weekCharacters");
	HX_VISIT_MEMBER_NAME(weekBackground,"weekBackground");
	HX_VISIT_MEMBER_NAME(weekBefore,"weekBefore");
	HX_VISIT_MEMBER_NAME(storyName,"storyName");
	HX_VISIT_MEMBER_NAME(weekName,"weekName");
	HX_VISIT_MEMBER_NAME(freeplayColor,"freeplayColor");
	HX_VISIT_MEMBER_NAME(startUnlocked,"startUnlocked");
	HX_VISIT_MEMBER_NAME(hideStoryMode,"hideStoryMode");
	HX_VISIT_MEMBER_NAME(hideFreeplay,"hideFreeplay");
	HX_VISIT_MEMBER_NAME(difficulties,"difficulties");
}

::hx::Val WeekData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"songs") ) { return ::hx::Val( songs ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"folder") ) { return ::hx::Val( folder ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"weekName") ) { return ::hx::Val( weekName ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"storyName") ) { return ::hx::Val( storyName ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"weekBefore") ) { return ::hx::Val( weekBefore ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hideFreeplay") ) { return ::hx::Val( hideFreeplay ); }
		if (HX_FIELD_EQ(inName,"difficulties") ) { return ::hx::Val( difficulties ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"freeplayColor") ) { return ::hx::Val( freeplayColor ); }
		if (HX_FIELD_EQ(inName,"startUnlocked") ) { return ::hx::Val( startUnlocked ); }
		if (HX_FIELD_EQ(inName,"hideStoryMode") ) { return ::hx::Val( hideStoryMode ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"weekCharacters") ) { return ::hx::Val( weekCharacters ); }
		if (HX_FIELD_EQ(inName,"weekBackground") ) { return ::hx::Val( weekBackground ); }
	}
	return super::__Field(inName,inCallProp);
}

bool WeekData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"addWeek") ) { outValue = addWeek_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"weeksList") ) { outValue = ( weeksList ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"weeksLoaded") ) { outValue = ( weeksLoaded ); return true; }
		if (HX_FIELD_EQ(inName,"getWeekFile") ) { outValue = getWeekFile_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createWeekFile") ) { outValue = createWeekFile_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getCurrentWeek") ) { outValue = getCurrentWeek_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"reloadWeekFiles") ) { outValue = reloadWeekFiles_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getWeekFileName") ) { outValue = getWeekFileName_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setDirectoryFromWeek") ) { outValue = setDirectoryFromWeek_dyn(); return true; }
	}
	return false;
}

::hx::Val WeekData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"songs") ) { songs=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"folder") ) { folder=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"weekName") ) { weekName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"storyName") ) { storyName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"weekBefore") ) { weekBefore=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hideFreeplay") ) { hideFreeplay=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"difficulties") ) { difficulties=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"freeplayColor") ) { freeplayColor=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startUnlocked") ) { startUnlocked=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hideStoryMode") ) { hideStoryMode=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"weekCharacters") ) { weekCharacters=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"weekBackground") ) { weekBackground=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool WeekData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"weeksList") ) { weeksList=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"weeksLoaded") ) { weeksLoaded=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void WeekData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("folder",ae,76,90,f9));
	outFields->push(HX_("songs",fe,36,c7,80));
	outFields->push(HX_("weekCharacters",be,b5,7f,1d));
	outFields->push(HX_("weekBackground",02,f1,ce,ed));
	outFields->push(HX_("weekBefore",93,97,02,5d));
	outFields->push(HX_("storyName",e0,50,20,29));
	outFields->push(HX_("weekName",5f,08,2f,30));
	outFields->push(HX_("freeplayColor",a3,0c,53,32));
	outFields->push(HX_("startUnlocked",a5,96,c9,60));
	outFields->push(HX_("hideStoryMode",d6,b4,4e,4c));
	outFields->push(HX_("hideFreeplay",82,13,8c,e3));
	outFields->push(HX_("difficulties",59,c7,5e,02));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WeekData_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(WeekData_obj,folder),HX_("folder",ae,76,90,f9)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(WeekData_obj,songs),HX_("songs",fe,36,c7,80)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(WeekData_obj,weekCharacters),HX_("weekCharacters",be,b5,7f,1d)},
	{::hx::fsString,(int)offsetof(WeekData_obj,weekBackground),HX_("weekBackground",02,f1,ce,ed)},
	{::hx::fsString,(int)offsetof(WeekData_obj,weekBefore),HX_("weekBefore",93,97,02,5d)},
	{::hx::fsString,(int)offsetof(WeekData_obj,storyName),HX_("storyName",e0,50,20,29)},
	{::hx::fsString,(int)offsetof(WeekData_obj,weekName),HX_("weekName",5f,08,2f,30)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(WeekData_obj,freeplayColor),HX_("freeplayColor",a3,0c,53,32)},
	{::hx::fsBool,(int)offsetof(WeekData_obj,startUnlocked),HX_("startUnlocked",a5,96,c9,60)},
	{::hx::fsBool,(int)offsetof(WeekData_obj,hideStoryMode),HX_("hideStoryMode",d6,b4,4e,4c)},
	{::hx::fsBool,(int)offsetof(WeekData_obj,hideFreeplay),HX_("hideFreeplay",82,13,8c,e3)},
	{::hx::fsString,(int)offsetof(WeekData_obj,difficulties),HX_("difficulties",59,c7,5e,02)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo WeekData_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &WeekData_obj::weeksLoaded,HX_("weeksLoaded",64,5b,41,21)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &WeekData_obj::weeksList,HX_("weeksList",fd,49,e7,38)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String WeekData_obj_sMemberFields[] = {
	HX_("folder",ae,76,90,f9),
	HX_("songs",fe,36,c7,80),
	HX_("weekCharacters",be,b5,7f,1d),
	HX_("weekBackground",02,f1,ce,ed),
	HX_("weekBefore",93,97,02,5d),
	HX_("storyName",e0,50,20,29),
	HX_("weekName",5f,08,2f,30),
	HX_("freeplayColor",a3,0c,53,32),
	HX_("startUnlocked",a5,96,c9,60),
	HX_("hideStoryMode",d6,b4,4e,4c),
	HX_("hideFreeplay",82,13,8c,e3),
	HX_("difficulties",59,c7,5e,02),
	::String(null()) };

static void WeekData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WeekData_obj::weeksLoaded,"weeksLoaded");
	HX_MARK_MEMBER_NAME(WeekData_obj::weeksList,"weeksList");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WeekData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeekData_obj::weeksLoaded,"weeksLoaded");
	HX_VISIT_MEMBER_NAME(WeekData_obj::weeksList,"weeksList");
};

#endif

::hx::Class WeekData_obj::__mClass;

static ::String WeekData_obj_sStaticFields[] = {
	HX_("weeksLoaded",64,5b,41,21),
	HX_("weeksList",fd,49,e7,38),
	HX_("createWeekFile",ac,e3,25,7d),
	HX_("reloadWeekFiles",4a,73,e1,0b),
	HX_("addWeek",b5,a2,32,8b),
	HX_("getWeekFile",46,27,df,50),
	HX_("getWeekFileName",b1,e0,e3,ce),
	HX_("getCurrentWeek",d7,8b,25,0f),
	HX_("setDirectoryFromWeek",09,80,f0,74),
	::String(null())
};

void WeekData_obj::__register()
{
	WeekData_obj _hx_dummy;
	WeekData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("WeekData",5e,a8,44,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WeekData_obj::__GetStatic;
	__mClass->mSetStaticField = &WeekData_obj::__SetStatic;
	__mClass->mMarkFunc = WeekData_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(WeekData_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WeekData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WeekData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WeekData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WeekData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WeekData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void WeekData_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_1b9a64f7c24482df_31_boot)
HXDLIN(  31)		weeksLoaded =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_1b9a64f7c24482df_32_boot)
HXDLIN(  32)		weeksList = ::Array_obj< ::String >::__new(0);
            	}
}

