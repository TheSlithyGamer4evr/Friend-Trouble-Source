#include <hxcpp.h>

#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_MenuCharacter
#include <MenuCharacter.h>
#endif
#ifndef INCLUDED_MenuItem
#include <MenuItem.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_TitleState
#include <TitleState.h>
#endif
#ifndef INCLUDED_WeekData
#include <WeekData.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_editors_MasterEditorMenu
#include <editors/MasterEditorMenu.h>
#endif
#ifndef INCLUDED_editors_WeekEditorFreeplayState
#include <editors/WeekEditorFreeplayState.h>
#endif
#ifndef INCLUDED_editors_WeekEditorState
#include <editors/WeekEditorState.h>
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
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxInputText
#include <flixel/addons/ui/FlxInputText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUI
#include <flixel/addons/ui/FlxUI.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUICheckBox
#include <flixel/addons/ui/FlxUICheckBox.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIInputText
#include <flixel/addons/ui/FlxUIInputText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITabMenu
#include <flixel/addons/ui/FlxUITabMenu.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFireTongue
#include <flixel/addons/ui/interfaces/IFireTongue.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ILabeled
#include <flixel/addons/ui/interfaces/ILabeled.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
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
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_net_FileFilter
#include <openfl/net/FileFilter.h>
#endif
#ifndef INCLUDED_openfl_net_FileReference
#include <openfl/net/FileReference.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_696d4e2376313b0d_38_new,"editors.WeekEditorState","new",0x9142a81a,"editors.WeekEditorState.new","editors/WeekEditorState.hx",38,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_57_create,"editors.WeekEditorState","create",0x4bb29f82,"editors.WeekEditorState.create","editors/WeekEditorState.hx",57,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_140_addEditorBox,"editors.WeekEditorState","addEditorBox",0x571b4103,"editors.WeekEditorState.addEditorBox","editors/WeekEditorState.hx",140,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_147_addEditorBox,"editors.WeekEditorState","addEditorBox",0x571b4103,"editors.WeekEditorState.addEditorBox","editors/WeekEditorState.hx",147,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_154_addEditorBox,"editors.WeekEditorState","addEditorBox",0x571b4103,"editors.WeekEditorState.addEditorBox","editors/WeekEditorState.hx",154,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_123_addEditorBox,"editors.WeekEditorState","addEditorBox",0x571b4103,"editors.WeekEditorState.addEditorBox","editors/WeekEditorState.hx",123,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_206_addWeekUI,"editors.WeekEditorState","addWeekUI",0x6beb2383,"editors.WeekEditorState.addWeekUI","editors/WeekEditorState.hx",206,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_175_addWeekUI,"editors.WeekEditorState","addWeekUI",0x6beb2383,"editors.WeekEditorState.addWeekUI","editors/WeekEditorState.hx",175,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_239_addOtherUI,"editors.WeekEditorState","addOtherUI",0x6ad52489,"editors.WeekEditorState.addOtherUI","editors/WeekEditorState.hx",239,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_233_addOtherUI,"editors.WeekEditorState","addOtherUI",0x6ad52489,"editors.WeekEditorState.addOtherUI","editors/WeekEditorState.hx",233,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_260_reloadAllShit,"editors.WeekEditorState","reloadAllShit",0xdb96ff62,"editors.WeekEditorState.reloadAllShit","editors/WeekEditorState.hx",260,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_291_updateText,"editors.WeekEditorState","updateText",0x7affaadc,"editors.WeekEditorState.updateText","editors/WeekEditorState.hx",291,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_316_reloadBG,"editors.WeekEditorState","reloadBG",0xa224bb64,"editors.WeekEditorState.reloadBG","editors/WeekEditorState.hx",316,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_334_reloadWeekThing,"editors.WeekEditorState","reloadWeekThing",0xb002a37b,"editors.WeekEditorState.reloadWeekThing","editors/WeekEditorState.hx",334,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_362_getEvent,"editors.WeekEditorState","getEvent",0x3ee2bdaa,"editors.WeekEditorState.getEvent","editors/WeekEditorState.hx",362,0x9d3c6cd7)
static const int _hx_array_data_735a5328_22[] = {
	(int)146,(int)113,(int)253,
};
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_410_update,"editors.WeekEditorState","update",0x56a8be8f,"editors.WeekEditorState.update","editors/WeekEditorState.hx",410,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_447_recalculateStuffPosition,"editors.WeekEditorState","recalculateStuffPosition",0xac0fae70,"editors.WeekEditorState.recalculateStuffPosition","editors/WeekEditorState.hx",447,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_453_loadWeek,"editors.WeekEditorState","loadWeek",0x28dc1740,"editors.WeekEditorState.loadWeek","editors/WeekEditorState.hx",453,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_465_onLoadComplete,"editors.WeekEditorState","onLoadComplete",0x47187b44,"editors.WeekEditorState.onLoadComplete","editors/WeekEditorState.hx",465,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_503_onLoadCancel,"editors.WeekEditorState","onLoadCancel",0x67bc1f45,"editors.WeekEditorState.onLoadCancel","editors/WeekEditorState.hx",503,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_515_onLoadError,"editors.WeekEditorState","onLoadError",0xe2281c5d,"editors.WeekEditorState.onLoadError","editors/WeekEditorState.hx",515,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_523_saveWeek,"editors.WeekEditorState","saveWeek",0x6bf5dfd7,"editors.WeekEditorState.saveWeek","editors/WeekEditorState.hx",523,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_536_onSaveComplete,"editors.WeekEditorState","onSaveComplete",0xa037db5b,"editors.WeekEditorState.onSaveComplete","editors/WeekEditorState.hx",536,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_548_onSaveCancel,"editors.WeekEditorState","onSaveCancel",0xfb4a7b9c,"editors.WeekEditorState.onSaveCancel","editors/WeekEditorState.hx",548,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_559_onSaveError,"editors.WeekEditorState","onSaveError",0x559dd7e6,"editors.WeekEditorState.onSaveError","editors/WeekEditorState.hx",559,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_173_boot,"editors.WeekEditorState","boot",0x81296f38,"editors.WeekEditorState.boot","editors/WeekEditorState.hx",173,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_462_boot,"editors.WeekEditorState","boot",0x81296f38,"editors.WeekEditorState.boot","editors/WeekEditorState.hx",462,0x9d3c6cd7)
HX_LOCAL_STACK_FRAME(_hx_pos_696d4e2376313b0d_463_boot,"editors.WeekEditorState","boot",0x81296f38,"editors.WeekEditorState.boot","editors/WeekEditorState.hx",463,0x9d3c6cd7)
namespace editors{

void WeekEditorState_obj::__construct( ::Dynamic weekFile){
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_38_new)
HXLINE( 122)		this->blockPressWhileTypingOn = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  48)		this->weekFile = null();
HXLINE(  51)		super::__construct(null(),null());
HXLINE(  52)		this->weekFile = ::WeekData_obj::createWeekFile();
HXLINE(  53)		if (::hx::IsNotNull( weekFile )) {
HXLINE(  53)			this->weekFile = weekFile;
            		}
            		else {
HXLINE(  54)			::editors::WeekEditorState_obj::weekFileName = HX_("week1",bd,95,be,c7);
            		}
            	}

Dynamic WeekEditorState_obj::__CreateEmpty() { return new WeekEditorState_obj; }

void *WeekEditorState_obj::_hx_vtable = 0;

Dynamic WeekEditorState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WeekEditorState_obj > _hx_result = new WeekEditorState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool WeekEditorState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x088951ee) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x088951ee;
			} else {
				return inClassId==(int)0x23a57bae;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void WeekEditorState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_696d4e2376313b0d_57_create)
HXLINE(  58)		this->txtWeekTitle =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.7)),10,0,HX_("",00,00,00,00),32,null());
HXLINE(  59)		this->txtWeekTitle->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),32,-1,HX_("right",dc,0b,64,e9),null(),null(),null());
HXLINE(  60)		this->txtWeekTitle->set_alpha(((Float)0.7));
HXLINE(  62)		::String library = null();
HXDLIN(  62)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("campaign_menu_UI_assets",fd,f3,ba,6a));
HXDLIN(  62)		bool xmlExists = false;
HXDLIN(  62)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  62)			xmlExists = true;
            		}
HXDLIN(  62)		 ::Dynamic ui_tex;
HXDLIN(  62)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  62)			ui_tex = imageLoaded;
            		}
            		else {
HXLINE(  62)			 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("campaign_menu_UI_assets",fd,f3,ba,6a));
HXDLIN(  62)			if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  62)				ui_tex = imageToReturn;
            			}
            			else {
HXLINE(  62)				ui_tex = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            			}
            		}
HXDLIN(  62)		::String ui_tex1;
HXDLIN(  62)		if (xmlExists) {
HXLINE(  62)			ui_tex1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE(  62)			ui_tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("campaign_menu_UI_assets",fd,f3,ba,6a)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            		}
HXDLIN(  62)		 ::flixel::graphics::frames::FlxAtlasFrames ui_tex2 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(ui_tex,ui_tex1);
HXLINE(  63)		 ::flixel::FlxSprite bgYellow =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,56,null())->makeGraphic(::flixel::FlxG_obj::width,386,-405679,null(),null());
HXLINE(  64)		this->bgSprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,56,null());
HXLINE(  65)		this->bgSprite->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  67)		this->weekThing =  ::MenuItem_obj::__alloc( HX_CTX ,( (Float)(0) ),(this->bgSprite->y + 396),::editors::WeekEditorState_obj::weekFileName);
HXLINE(  68)		 ::MenuItem fh = this->weekThing;
HXDLIN(  68)		Float fh1 = fh->y;
HXDLIN(  68)		fh->set_y((fh1 + (this->weekThing->get_height() + 20)));
HXLINE(  69)		this->weekThing->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  70)		this->add(this->weekThing);
HXLINE(  72)		 ::flixel::FlxSprite blackBarThingie =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,56,-16777216,null(),null());
HXLINE(  73)		this->add(blackBarThingie);
HXLINE(  75)		this->grpWeekCharacters =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  77)		this->lock =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  78)		this->lock->set_frames(ui_tex2);
HXLINE(  79)		this->lock->animation->addByPrefix(HX_("lock",eb,9b,b7,47),HX_("lock",eb,9b,b7,47),null(),null(),null(),null());
HXLINE(  80)		this->lock->animation->play(HX_("lock",eb,9b,b7,47),null(),null(),null());
HXLINE(  81)		this->lock->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  82)		this->add(this->lock);
HXLINE(  84)		this->missingFileText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,::flixel::FlxG_obj::width,HX_("",00,00,00,00),null(),null());
HXLINE(  85)		 ::flixel::text::FlxText _hx_tmp = this->missingFileText;
HXDLIN(  85)		::String file = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  85)		::String _hx_tmp1;
HXDLIN(  85)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  85)			_hx_tmp1 = file;
            		}
            		else {
HXLINE(  85)			_hx_tmp1 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  85)		_hx_tmp->setFormat(_hx_tmp1,24,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  86)		this->missingFileText->set_borderSize(( (Float)(2) ));
HXLINE(  87)		this->missingFileText->set_visible(false);
HXLINE(  88)		this->add(this->missingFileText);
HXLINE(  90)		::Array< ::String > charArray = ( (::Array< ::String >)(this->weekFile->__Field(HX_("weekCharacters",be,b5,7f,1d),::hx::paccDynamic)) );
HXLINE(  91)		{
HXLINE(  92)			{
HXLINE(  93)				 ::MenuCharacter weekCharacterThing =  ::MenuCharacter_obj::__alloc( HX_CTX ,((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.25)) - ( (Float)(150) )),charArray->__get(0));
HXLINE(  94)				weekCharacterThing->set_y((weekCharacterThing->y + 70));
HXLINE(  95)				this->grpWeekCharacters->add(weekCharacterThing).StaticCast<  ::MenuCharacter >();
            			}
HXLINE(  92)			{
HXLINE(  93)				 ::MenuCharacter weekCharacterThing1 =  ::MenuCharacter_obj::__alloc( HX_CTX ,(((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.25)) * ( (Float)(2) )) - ( (Float)(150) )),charArray->__get(1));
HXLINE(  94)				weekCharacterThing1->set_y((weekCharacterThing1->y + 70));
HXLINE(  95)				this->grpWeekCharacters->add(weekCharacterThing1).StaticCast<  ::MenuCharacter >();
            			}
HXLINE(  92)			{
HXLINE(  93)				 ::MenuCharacter weekCharacterThing2 =  ::MenuCharacter_obj::__alloc( HX_CTX ,(((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.25)) * ( (Float)(3) )) - ( (Float)(150) )),charArray->__get(2));
HXLINE(  94)				weekCharacterThing2->set_y((weekCharacterThing2->y + 70));
HXLINE(  95)				this->grpWeekCharacters->add(weekCharacterThing2).StaticCast<  ::MenuCharacter >();
            			}
            		}
HXLINE(  98)		this->add(bgYellow);
HXLINE(  99)		this->add(this->bgSprite);
HXLINE( 100)		this->add(this->grpWeekCharacters);
HXLINE( 102)		 ::flixel::FlxSprite tracksSprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.07)),(this->bgSprite->y + 435),null());
HXDLIN( 102)		::String library1 = null();
HXDLIN( 102)		 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("Menu_Tracks",68,85,99,50));
HXDLIN( 102)		 ::Dynamic tracksSprite1;
HXDLIN( 102)		if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 102)			tracksSprite1 = imageToReturn;
            		}
            		else {
HXLINE( 102)			tracksSprite1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("Menu_Tracks",68,85,99,50)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
            		}
HXDLIN( 102)		 ::flixel::FlxSprite tracksSprite2 = tracksSprite->loadGraphic(tracksSprite1,null(),null(),null(),null(),null());
HXLINE( 103)		tracksSprite2->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 104)		this->add(tracksSprite2);
HXLINE( 106)		this->txtTracklist =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.05)),(tracksSprite2->y + 60),0,HX_("",00,00,00,00),32,null());
HXLINE( 107)		this->txtTracklist->set_alignment(HX_("center",d5,25,db,05));
HXLINE( 108)		 ::flixel::text::FlxText _hx_tmp2 = this->txtTracklist;
HXDLIN( 108)		::String file1 = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN( 108)		::String _hx_tmp3;
HXDLIN( 108)		if (::sys::FileSystem_obj::exists(file1)) {
HXLINE( 108)			_hx_tmp3 = file1;
            		}
            		else {
HXLINE( 108)			_hx_tmp3 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN( 108)		_hx_tmp2->set_font(_hx_tmp3);
HXLINE( 109)		this->txtTracklist->set_color(-1747081);
HXLINE( 110)		this->add(this->txtTracklist);
HXLINE( 111)		this->add(this->txtWeekTitle);
HXLINE( 113)		this->addEditorBox();
HXLINE( 114)		this->reloadAllShit();
HXLINE( 116)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE( 118)		this->super::create();
            	}


void WeekEditorState_obj::addEditorBox(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_696d4e2376313b0d_140_addEditorBox)
HXLINE( 140)			::editors::WeekEditorState_obj::loadWeek();
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::editors::WeekEditorState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_696d4e2376313b0d_147_addEditorBox)
HXLINE( 147)			::MusicBeatState_obj::switchState( ::editors::WeekEditorFreeplayState_obj::__alloc( HX_CTX ,_gthis->weekFile));
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::editors::WeekEditorState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_696d4e2376313b0d_154_addEditorBox)
HXLINE( 154)			::editors::WeekEditorState_obj::saveWeek(_gthis->weekFile);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_696d4e2376313b0d_123_addEditorBox)
HXDLIN( 123)		 ::editors::WeekEditorState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 124)		::Array< ::Dynamic> tabs = ::Array_obj< ::Dynamic>::__new(2)->init(0, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("name",4b,72,ff,48),HX_("Week",14,8c,ce,39))
            			->setFixed(1,HX_("label",f4,0d,af,6f),HX_("Week",14,8c,ce,39))))->init(1, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("name",4b,72,ff,48),HX_("Other",b0,d6,a3,c9))
            			->setFixed(1,HX_("label",f4,0d,af,6f),HX_("Other",b0,d6,a3,c9))));
HXLINE( 128)		this->UI_box =  ::flixel::addons::ui::FlxUITabMenu_obj::__alloc( HX_CTX ,null(),null(),tabs,null(),true,null(),null());
HXLINE( 129)		this->UI_box->resize(( (Float)(250) ),( (Float)(375) ));
HXLINE( 130)		 ::flixel::addons::ui::FlxUITabMenu _hx_tmp = this->UI_box;
HXDLIN( 130)		int _hx_tmp1 = ::flixel::FlxG_obj::width;
HXDLIN( 130)		_hx_tmp->set_x((( (Float)(_hx_tmp1) ) - this->UI_box->get_width()));
HXLINE( 131)		 ::flixel::addons::ui::FlxUITabMenu _hx_tmp2 = this->UI_box;
HXDLIN( 131)		int _hx_tmp3 = ::flixel::FlxG_obj::height;
HXDLIN( 131)		_hx_tmp2->set_y((( (Float)(_hx_tmp3) ) - this->UI_box->get_height()));
HXLINE( 132)		this->UI_box->scrollFactor->set(null(),null());
HXLINE( 133)		this->addWeekUI();
HXLINE( 134)		this->addOtherUI();
HXLINE( 136)		this->UI_box->set_selected_tab_id(HX_("Week",14,8c,ce,39));
HXLINE( 137)		this->add(this->UI_box);
HXLINE( 139)		 ::flixel::ui::FlxButton loadWeekButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,650,HX_("Load Week",2e,d8,7d,d0), ::Dynamic(new _hx_Closure_0()));
HXLINE( 142)		loadWeekButton->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 143)		loadWeekButton->set_x((loadWeekButton->x - ( (Float)(120) )));
HXLINE( 144)		this->add(loadWeekButton);
HXLINE( 146)		 ::flixel::ui::FlxButton freeplayButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,650,HX_("Freeplay",c0,4c,38,fc), ::Dynamic(new _hx_Closure_1(_gthis)));
HXLINE( 150)		freeplayButton->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 151)		this->add(freeplayButton);
HXLINE( 153)		 ::flixel::ui::FlxButton saveWeekButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,650,HX_("Save Week",b7,93,f3,43), ::Dynamic(new _hx_Closure_2(_gthis)));
HXLINE( 156)		saveWeekButton->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 157)		saveWeekButton->set_x((saveWeekButton->x + 120));
HXLINE( 158)		this->add(saveWeekButton);
            	}


HX_DEFINE_DYNAMIC_FUNC0(WeekEditorState_obj,addEditorBox,(void))

void WeekEditorState_obj::addWeekUI(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::editors::WeekEditorState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_696d4e2376313b0d_206_addWeekUI)
HXLINE( 206)			_gthis->weekFile->__SetField(HX_("hideStoryMode",d6,b4,4e,4c),_gthis->hideCheckbox->checked,::hx::paccDynamic);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_696d4e2376313b0d_175_addWeekUI)
HXDLIN( 175)		 ::editors::WeekEditorState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 176)		 ::flixel::addons::ui::FlxUI tab_group =  ::flixel::addons::ui::FlxUI_obj::__alloc( HX_CTX ,null(),this->UI_box,null(),null(),null(),null());
HXLINE( 177)		tab_group->name = HX_("Week",14,8c,ce,39);
HXLINE( 179)		this->songsInputText =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,10,30,200,HX_("",00,00,00,00),8,null(),null(),null());
HXLINE( 180)		this->blockPressWhileTypingOn->push(this->songsInputText);
HXLINE( 182)		this->opponentInputText =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,10,(this->songsInputText->y + 40),70,HX_("",00,00,00,00),8,null(),null(),null());
HXLINE( 183)		this->blockPressWhileTypingOn->push(this->opponentInputText);
HXLINE( 184)		this->boyfriendInputText =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,(this->opponentInputText->x + 75),this->opponentInputText->y,70,HX_("",00,00,00,00),8,null(),null(),null());
HXLINE( 185)		this->blockPressWhileTypingOn->push(this->boyfriendInputText);
HXLINE( 186)		this->girlfriendInputText =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,(this->boyfriendInputText->x + 75),this->opponentInputText->y,70,HX_("",00,00,00,00),8,null(),null(),null());
HXLINE( 187)		this->blockPressWhileTypingOn->push(this->girlfriendInputText);
HXLINE( 189)		this->backgroundInputText =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,10,(this->opponentInputText->y + 40),120,HX_("",00,00,00,00),8,null(),null(),null());
HXLINE( 190)		this->blockPressWhileTypingOn->push(this->backgroundInputText);
HXLINE( 193)		this->displayNameInputText =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,10,(this->backgroundInputText->y + 60),200,HX_("",00,00,00,00),8,null(),null(),null());
HXLINE( 194)		this->blockPressWhileTypingOn->push(this->backgroundInputText);
HXLINE( 196)		this->weekNameInputText =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,10,(this->displayNameInputText->y + 60),150,HX_("",00,00,00,00),8,null(),null(),null());
HXLINE( 197)		this->blockPressWhileTypingOn->push(this->weekNameInputText);
HXLINE( 199)		this->weekFileInputText =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,10,(this->weekNameInputText->y + 40),100,HX_("",00,00,00,00),8,null(),null(),null());
HXLINE( 200)		this->blockPressWhileTypingOn->push(this->weekFileInputText);
HXLINE( 201)		this->reloadWeekThing();
HXLINE( 203)		this->hideCheckbox =  ::flixel::addons::ui::FlxUICheckBox_obj::__alloc( HX_CTX ,10,(this->weekFileInputText->y + 40),null(),null(),HX_("Hide Week from Story Mode?",e9,44,47,9f),100,null(),null());
HXLINE( 204)		this->hideCheckbox->callback =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 209)		tab_group->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->songsInputText->x,(this->songsInputText->y - ( (Float)(18) )),0,HX_("Songs:",9c,5b,1d,62),null(),null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 210)		tab_group->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->opponentInputText->x,(this->opponentInputText->y - ( (Float)(18) )),0,HX_("Characters:",30,d4,f1,a2),null(),null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 211)		tab_group->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->backgroundInputText->x,(this->backgroundInputText->y - ( (Float)(18) )),0,HX_("Background Asset:",3c,3a,bd,00),null(),null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 212)		tab_group->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->displayNameInputText->x,(this->displayNameInputText->y - ( (Float)(18) )),0,HX_("Display Name:",f1,22,dc,c9),null(),null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 213)		tab_group->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->weekNameInputText->x,(this->weekNameInputText->y - ( (Float)(18) )),0,HX_("Week Name (for Reset Score Menu):",65,4b,f0,34),null(),null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 214)		tab_group->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->weekFileInputText->x,(this->weekFileInputText->y - ( (Float)(18) )),0,HX_("Week File:",12,ad,1e,e4),null(),null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 216)		tab_group->add(this->songsInputText).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 217)		tab_group->add(this->opponentInputText).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 218)		tab_group->add(this->boyfriendInputText).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 219)		tab_group->add(this->girlfriendInputText).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 220)		tab_group->add(this->backgroundInputText).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 222)		tab_group->add(this->displayNameInputText).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 223)		tab_group->add(this->weekNameInputText).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 224)		tab_group->add(this->weekFileInputText).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 225)		tab_group->add(this->hideCheckbox).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 226)		this->UI_box->addGroup(tab_group);
            	}


HX_DEFINE_DYNAMIC_FUNC0(WeekEditorState_obj,addWeekUI,(void))

void WeekEditorState_obj::addOtherUI(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::editors::WeekEditorState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_696d4e2376313b0d_239_addOtherUI)
HXLINE( 240)			_gthis->weekFile->__SetField(HX_("startUnlocked",a5,96,c9,60),!(_gthis->lockedCheckbox->checked),::hx::paccDynamic);
HXLINE( 241)			_gthis->lock->set_visible(_gthis->lockedCheckbox->checked);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_696d4e2376313b0d_233_addOtherUI)
HXDLIN( 233)		 ::editors::WeekEditorState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 234)		 ::flixel::addons::ui::FlxUI tab_group =  ::flixel::addons::ui::FlxUI_obj::__alloc( HX_CTX ,null(),this->UI_box,null(),null(),null(),null());
HXLINE( 235)		tab_group->name = HX_("Other",b0,d6,a3,c9);
HXLINE( 237)		this->lockedCheckbox =  ::flixel::addons::ui::FlxUICheckBox_obj::__alloc( HX_CTX ,10,30,null(),null(),HX_("Week starts Locked",8d,ae,bb,b8),100,null(),null());
HXLINE( 238)		this->lockedCheckbox->callback =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 244)		this->weekBeforeInputText =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,10,(this->lockedCheckbox->y + 55),100,HX_("",00,00,00,00),8,null(),null(),null());
HXLINE( 245)		this->blockPressWhileTypingOn->push(this->weekBeforeInputText);
HXLINE( 247)		this->difficultiesInputText =  ::flixel::addons::ui::FlxUIInputText_obj::__alloc( HX_CTX ,10,(this->weekBeforeInputText->y + 60),200,HX_("",00,00,00,00),8,null(),null(),null());
HXLINE( 248)		this->blockPressWhileTypingOn->push(this->difficultiesInputText);
HXLINE( 250)		tab_group->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->weekBeforeInputText->x,(this->weekBeforeInputText->y - ( (Float)(28) )),0,HX_("Week File name of the Week you have\nto finish for Unlocking:",ab,92,1d,1c),null(),null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 251)		tab_group->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->difficultiesInputText->x,(this->difficultiesInputText->y - ( (Float)(20) )),0,HX_("Difficulties:",a1,f6,7f,58),null(),null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 252)		tab_group->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->difficultiesInputText->x,(this->difficultiesInputText->y + 20),0,HX_("Default difficulties are \"Easy, Normal, Hard\"\nwithout quotes.",cd,54,6a,47),null(),null())).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 253)		tab_group->add(this->weekBeforeInputText).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 254)		tab_group->add(this->difficultiesInputText).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 255)		tab_group->add(this->lockedCheckbox).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 256)		this->UI_box->addGroup(tab_group);
            	}


HX_DEFINE_DYNAMIC_FUNC0(WeekEditorState_obj,addOtherUI,(void))

void WeekEditorState_obj::reloadAllShit(){
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_260_reloadAllShit)
HXLINE( 261)		::String weekString = ( (::String)( ::Dynamic(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic))->__GetItem(0)->__GetItem(0)) );
HXLINE( 262)		{
HXLINE( 262)			int _g = 1;
HXDLIN( 262)			int _g1 = ( (::cpp::VirtualArray)(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic)) )->get_length();
HXDLIN( 262)			while((_g < _g1)){
HXLINE( 262)				_g = (_g + 1);
HXDLIN( 262)				int i = (_g - 1);
HXLINE( 263)				weekString = (weekString + (HX_(", ",74,26,00,00) +  ::Dynamic(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic))->__GetItem(i)->__GetItem(0)));
            			}
            		}
HXLINE( 265)		this->songsInputText->set_text(weekString);
HXLINE( 266)		this->backgroundInputText->set_text(( (::String)(this->weekFile->__Field(HX_("weekBackground",02,f1,ce,ed),::hx::paccDynamic)) ));
HXLINE( 267)		this->displayNameInputText->set_text(( (::String)(this->weekFile->__Field(HX_("storyName",e0,50,20,29),::hx::paccDynamic)) ));
HXLINE( 268)		this->weekNameInputText->set_text(( (::String)(this->weekFile->__Field(HX_("weekName",5f,08,2f,30),::hx::paccDynamic)) ));
HXLINE( 269)		this->weekFileInputText->set_text(::editors::WeekEditorState_obj::weekFileName);
HXLINE( 271)		this->opponentInputText->set_text(( (::String)( ::Dynamic(this->weekFile->__Field(HX_("weekCharacters",be,b5,7f,1d),::hx::paccDynamic))->__GetItem(0)) ));
HXLINE( 272)		this->boyfriendInputText->set_text(( (::String)( ::Dynamic(this->weekFile->__Field(HX_("weekCharacters",be,b5,7f,1d),::hx::paccDynamic))->__GetItem(1)) ));
HXLINE( 273)		this->girlfriendInputText->set_text(( (::String)( ::Dynamic(this->weekFile->__Field(HX_("weekCharacters",be,b5,7f,1d),::hx::paccDynamic))->__GetItem(2)) ));
HXLINE( 275)		this->hideCheckbox->set_checked(( (bool)(this->weekFile->__Field(HX_("hideStoryMode",d6,b4,4e,4c),::hx::paccDynamic)) ));
HXLINE( 277)		this->weekBeforeInputText->set_text(( (::String)(this->weekFile->__Field(HX_("weekBefore",93,97,02,5d),::hx::paccDynamic)) ));
HXLINE( 279)		this->difficultiesInputText->set_text(HX_("",00,00,00,00));
HXLINE( 280)		if (::hx::IsNotNull( this->weekFile->__Field(HX_("difficulties",59,c7,5e,02),::hx::paccDynamic) )) {
HXLINE( 280)			this->difficultiesInputText->set_text(( (::String)(this->weekFile->__Field(HX_("difficulties",59,c7,5e,02),::hx::paccDynamic)) ));
            		}
HXLINE( 282)		this->lockedCheckbox->set_checked(!(( (bool)(this->weekFile->__Field(HX_("startUnlocked",a5,96,c9,60),::hx::paccDynamic)) )));
HXLINE( 283)		this->lock->set_visible(this->lockedCheckbox->checked);
HXLINE( 285)		this->reloadBG();
HXLINE( 286)		this->reloadWeekThing();
HXLINE( 287)		this->updateText();
            	}


HX_DEFINE_DYNAMIC_FUNC0(WeekEditorState_obj,reloadAllShit,(void))

void WeekEditorState_obj::updateText(){
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_291_updateText)
HXLINE( 292)		{
HXLINE( 292)			int _g = 0;
HXDLIN( 292)			int _g1 = this->grpWeekCharacters->length;
HXDLIN( 292)			while((_g < _g1)){
HXLINE( 292)				_g = (_g + 1);
HXDLIN( 292)				int i = (_g - 1);
HXLINE( 293)				Dynamic( this->grpWeekCharacters->members->__get(i)).StaticCast<  ::MenuCharacter >()->changeCharacter(( (::String)( ::Dynamic(this->weekFile->__Field(HX_("weekCharacters",be,b5,7f,1d),::hx::paccDynamic))->__GetItem(i)) ));
            			}
            		}
HXLINE( 296)		::Array< ::String > stringThing = ::Array_obj< ::String >::__new(0);
HXLINE( 297)		{
HXLINE( 297)			int _g2 = 0;
HXDLIN( 297)			int _g3 = ( (::cpp::VirtualArray)(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic)) )->get_length();
HXDLIN( 297)			while((_g2 < _g3)){
HXLINE( 297)				_g2 = (_g2 + 1);
HXDLIN( 297)				int i = (_g2 - 1);
HXLINE( 298)				stringThing->push( ::Dynamic(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic))->__GetItem(i)->__GetItem(0));
            			}
            		}
HXLINE( 301)		this->txtTracklist->set_text(HX_("",00,00,00,00));
HXLINE( 302)		{
HXLINE( 302)			int _g4 = 0;
HXDLIN( 302)			int _g5 = stringThing->length;
HXDLIN( 302)			while((_g4 < _g5)){
HXLINE( 302)				_g4 = (_g4 + 1);
HXDLIN( 302)				int i = (_g4 - 1);
HXLINE( 304)				 ::flixel::text::FlxText fh = this->txtTracklist;
HXDLIN( 304)				fh->set_text((fh->text + (stringThing->__get(i) + HX_("\n",0a,00,00,00))));
            			}
            		}
HXLINE( 307)		 ::flixel::text::FlxText _hx_tmp = this->txtTracklist;
HXDLIN( 307)		_hx_tmp->set_text(this->txtTracklist->text.toUpperCase());
HXLINE( 309)		this->txtTracklist->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 310)		 ::flixel::text::FlxText fh = this->txtTracklist;
HXDLIN( 310)		fh->set_x((fh->x - (( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.35))));
HXLINE( 312)		 ::flixel::text::FlxText _hx_tmp1 = this->txtWeekTitle;
HXDLIN( 312)		_hx_tmp1->set_text(( (::String)(this->weekFile->__Field(HX_("storyName",e0,50,20,29),::hx::paccDynamic)) ).toUpperCase());
HXLINE( 313)		 ::flixel::text::FlxText _hx_tmp2 = this->txtWeekTitle;
HXDLIN( 313)		int _hx_tmp3 = ::flixel::FlxG_obj::width;
HXDLIN( 313)		_hx_tmp2->set_x((( (Float)(_hx_tmp3) ) - (this->txtWeekTitle->get_width() + 10)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(WeekEditorState_obj,updateText,(void))

void WeekEditorState_obj::reloadBG(){
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_316_reloadBG)
HXLINE( 317)		this->bgSprite->set_visible(true);
HXLINE( 318)		::String assetName = ( (::String)(this->weekFile->__Field(HX_("weekBackground",02,f1,ce,ed),::hx::paccDynamic)) );
HXLINE( 320)		bool isMissing = true;
HXLINE( 321)		bool _hx_tmp;
HXDLIN( 321)		if (::hx::IsNotNull( assetName )) {
HXLINE( 321)			_hx_tmp = (assetName.length > 0);
            		}
            		else {
HXLINE( 321)			_hx_tmp = false;
            		}
HXDLIN( 321)		if (_hx_tmp) {
HXLINE( 322)			bool _hx_tmp;
HXDLIN( 322)			if (!(::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + (HX_("menubackgrounds/menu_",57,51,99,49) + assetName)) + HX_(".png",3b,2d,bd,1e)))))) {
HXLINE( 323)				::String key = (HX_("menubackgrounds/menu_",57,51,99,49) + assetName);
HXDLIN( 323)				::String library = null();
HXDLIN( 323)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(key);
HXDLIN( 323)				 ::Dynamic _hx_tmp1;
HXDLIN( 323)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 323)					_hx_tmp1 = imageToReturn;
            				}
            				else {
HXLINE( 323)					_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
HXLINE( 322)				_hx_tmp = ::openfl::utils::Assets_obj::exists(( (::String)(_hx_tmp1) ),HX_("IMAGE",3b,57,57,3b));
            			}
            			else {
HXLINE( 322)				_hx_tmp = true;
            			}
HXDLIN( 322)			if (_hx_tmp) {
HXLINE( 324)				 ::flixel::FlxSprite _hx_tmp = this->bgSprite;
HXDLIN( 324)				::String key = (HX_("menubackgrounds/menu_",57,51,99,49) + assetName);
HXDLIN( 324)				::String library = null();
HXDLIN( 324)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(key);
HXDLIN( 324)				 ::Dynamic _hx_tmp1;
HXDLIN( 324)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 324)					_hx_tmp1 = imageToReturn;
            				}
            				else {
HXLINE( 324)					_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
HXDLIN( 324)				_hx_tmp->loadGraphic(_hx_tmp1,null(),null(),null(),null(),null());
HXLINE( 325)				isMissing = false;
            			}
            		}
HXLINE( 329)		if (isMissing) {
HXLINE( 330)			this->bgSprite->set_visible(false);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(WeekEditorState_obj,reloadBG,(void))

void WeekEditorState_obj::reloadWeekThing(){
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_334_reloadWeekThing)
HXLINE( 335)		this->weekThing->set_visible(true);
HXLINE( 336)		this->missingFileText->set_visible(false);
HXLINE( 337)		::String assetName = ::StringTools_obj::trim(this->weekFileInputText->text);
HXLINE( 339)		bool isMissing = true;
HXLINE( 340)		bool _hx_tmp;
HXDLIN( 340)		if (::hx::IsNotNull( assetName )) {
HXLINE( 340)			_hx_tmp = (assetName.length > 0);
            		}
            		else {
HXLINE( 340)			_hx_tmp = false;
            		}
HXDLIN( 340)		if (_hx_tmp) {
HXLINE( 341)			bool _hx_tmp;
HXDLIN( 341)			if (!(::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + (HX_("storymenu/",9b,19,38,af) + assetName)) + HX_(".png",3b,2d,bd,1e)))))) {
HXLINE( 342)				::String key = (HX_("storymenu/",9b,19,38,af) + assetName);
HXDLIN( 342)				::String library = null();
HXDLIN( 342)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(key);
HXDLIN( 342)				 ::Dynamic _hx_tmp1;
HXDLIN( 342)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 342)					_hx_tmp1 = imageToReturn;
            				}
            				else {
HXLINE( 342)					_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
HXLINE( 341)				_hx_tmp = ::openfl::utils::Assets_obj::exists(( (::String)(_hx_tmp1) ),HX_("IMAGE",3b,57,57,3b));
            			}
            			else {
HXLINE( 341)				_hx_tmp = true;
            			}
HXDLIN( 341)			if (_hx_tmp) {
HXLINE( 343)				 ::MenuItem _hx_tmp = this->weekThing;
HXDLIN( 343)				::String key = (HX_("storymenu/",9b,19,38,af) + assetName);
HXDLIN( 343)				::String library = null();
HXDLIN( 343)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(key);
HXDLIN( 343)				 ::Dynamic _hx_tmp1;
HXDLIN( 343)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 343)					_hx_tmp1 = imageToReturn;
            				}
            				else {
HXLINE( 343)					_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
HXDLIN( 343)				_hx_tmp->loadGraphic(_hx_tmp1,null(),null(),null(),null(),null());
HXLINE( 344)				isMissing = false;
            			}
            		}
HXLINE( 348)		if (isMissing) {
HXLINE( 349)			this->weekThing->set_visible(false);
HXLINE( 350)			this->missingFileText->set_visible(true);
HXLINE( 351)			this->missingFileText->set_text(((HX_("MISSING FILE: images/storymenu/",96,57,11,26) + assetName) + HX_(".png",3b,2d,bd,1e)));
            		}
HXLINE( 353)		this->recalculateStuffPosition();
HXLINE( 357)		::DiscordClient_obj::changePresence(HX_("Week Editor",59,6c,6c,6d),(HX_("Editting: ",be,88,46,a7) + ::editors::WeekEditorState_obj::weekFileName),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(WeekEditorState_obj,reloadWeekThing,(void))

void WeekEditorState_obj::getEvent(::String id, ::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params){
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_362_getEvent)
HXDLIN( 362)		bool _hx_tmp;
HXDLIN( 362)		if ((id == HX_("change_input_text",f1,11,47,68))) {
HXDLIN( 362)			_hx_tmp = ::Std_obj::isOfType(sender,::hx::ClassOf< ::flixel::addons::ui::FlxUIInputText >());
            		}
            		else {
HXDLIN( 362)			_hx_tmp = false;
            		}
HXDLIN( 362)		if (_hx_tmp) {
HXLINE( 363)			if (::hx::IsInstanceEq( sender,this->weekFileInputText )) {
HXLINE( 364)				::editors::WeekEditorState_obj::weekFileName = ::StringTools_obj::trim(this->weekFileInputText->text);
HXLINE( 365)				this->reloadWeekThing();
            			}
            			else {
HXLINE( 366)				bool _hx_tmp;
HXDLIN( 366)				bool _hx_tmp1;
HXDLIN( 366)				if (::hx::IsInstanceNotEq( sender,this->opponentInputText )) {
HXLINE( 366)					_hx_tmp1 = ::hx::IsInstanceEq( sender,this->boyfriendInputText );
            				}
            				else {
HXLINE( 366)					_hx_tmp1 = true;
            				}
HXDLIN( 366)				if (!(_hx_tmp1)) {
HXLINE( 366)					_hx_tmp = ::hx::IsInstanceEq( sender,this->girlfriendInputText );
            				}
            				else {
HXLINE( 366)					_hx_tmp = true;
            				}
HXDLIN( 366)				if (_hx_tmp) {
HXLINE( 367)					 ::Dynamic(this->weekFile->__Field(HX_("weekCharacters",be,b5,7f,1d),::hx::paccDynamic))->__SetItem(0,::StringTools_obj::trim(this->opponentInputText->text));
HXLINE( 368)					 ::Dynamic(this->weekFile->__Field(HX_("weekCharacters",be,b5,7f,1d),::hx::paccDynamic))->__SetItem(1,::StringTools_obj::trim(this->boyfriendInputText->text));
HXLINE( 369)					 ::Dynamic(this->weekFile->__Field(HX_("weekCharacters",be,b5,7f,1d),::hx::paccDynamic))->__SetItem(2,::StringTools_obj::trim(this->girlfriendInputText->text));
HXLINE( 370)					this->updateText();
            				}
            				else {
HXLINE( 371)					if (::hx::IsInstanceEq( sender,this->backgroundInputText )) {
HXLINE( 372)						this->weekFile->__SetField(HX_("weekBackground",02,f1,ce,ed),::StringTools_obj::trim(this->backgroundInputText->text),::hx::paccDynamic);
HXLINE( 373)						this->reloadBG();
            					}
            					else {
HXLINE( 374)						if (::hx::IsInstanceEq( sender,this->displayNameInputText )) {
HXLINE( 375)							this->weekFile->__SetField(HX_("storyName",e0,50,20,29),::StringTools_obj::trim(this->displayNameInputText->text),::hx::paccDynamic);
HXLINE( 376)							this->updateText();
            						}
            						else {
HXLINE( 377)							if (::hx::IsInstanceEq( sender,this->weekNameInputText )) {
HXLINE( 378)								this->weekFile->__SetField(HX_("weekName",5f,08,2f,30),::StringTools_obj::trim(this->weekNameInputText->text),::hx::paccDynamic);
            							}
            							else {
HXLINE( 379)								if (::hx::IsInstanceEq( sender,this->songsInputText )) {
HXLINE( 380)									::Array< ::String > splittedText = ::StringTools_obj::trim(this->songsInputText->text).split(HX_(",",2c,00,00,00));
HXLINE( 381)									{
HXLINE( 381)										int _g = 0;
HXDLIN( 381)										int _g1 = splittedText->length;
HXDLIN( 381)										while((_g < _g1)){
HXLINE( 381)											_g = (_g + 1);
HXDLIN( 381)											int i = (_g - 1);
HXLINE( 382)											splittedText[i] = ::StringTools_obj::trim(splittedText->__get(i));
            										}
            									}
HXLINE( 385)									while((splittedText->length < ( (::cpp::VirtualArray)(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic)) )->get_length())){
HXLINE( 386)										( (::cpp::VirtualArray)(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic)) )->pop();
            									}
HXLINE( 389)									{
HXLINE( 389)										int _g2 = 0;
HXDLIN( 389)										int _g3 = splittedText->length;
HXDLIN( 389)										while((_g2 < _g3)){
HXLINE( 389)											_g2 = (_g2 + 1);
HXDLIN( 389)											int i = (_g2 - 1);
HXLINE( 390)											if ((i >= ( (::cpp::VirtualArray)(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic)) )->get_length())) {
HXLINE( 391)												( (::cpp::VirtualArray)(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic)) )->push(::cpp::VirtualArray_obj::__new(3)->init(0,splittedText->__get(i))->init(1,HX_("dad",47,36,4c,00))->init(2,::cpp::VirtualArray_obj::__new(3)->init(0,146)->init(1,113)->init(2,253)));
            											}
            											else {
HXLINE( 393)												 ::Dynamic(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic))->__GetItem(i)->__SetItem(0,splittedText->__get(i));
HXLINE( 394)												bool _hx_tmp;
HXDLIN( 394)												if (::hx::IsNotNull(  ::Dynamic(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic))->__GetItem(i)->__GetItem(1) )) {
HXLINE( 394)													_hx_tmp = ( (bool)( ::Dynamic(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic))->__GetItem(i)->__GetItem(1)) );
            												}
            												else {
HXLINE( 394)													_hx_tmp = true;
            												}
HXDLIN( 394)												if (_hx_tmp) {
HXLINE( 395)													 ::Dynamic(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic))->__GetItem(i)->__SetItem(1,HX_("dad",47,36,4c,00));
HXLINE( 396)													 ::Dynamic(this->weekFile->__Field(HX_("songs",fe,36,c7,80),::hx::paccDynamic))->__GetItem(i)->__SetItem(2,::Array_obj< int >::fromData( _hx_array_data_735a5328_22,3));
            												}
            											}
            										}
            									}
HXLINE( 400)									this->updateText();
            								}
            								else {
HXLINE( 401)									if (::hx::IsInstanceEq( sender,this->weekBeforeInputText )) {
HXLINE( 402)										this->weekFile->__SetField(HX_("weekBefore",93,97,02,5d),::StringTools_obj::trim(this->weekBeforeInputText->text),::hx::paccDynamic);
            									}
            									else {
HXLINE( 403)										if (::hx::IsInstanceEq( sender,this->difficultiesInputText )) {
HXLINE( 404)											this->weekFile->__SetField(HX_("difficulties",59,c7,5e,02),::StringTools_obj::trim(this->difficultiesInputText->text),::hx::paccDynamic);
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


void WeekEditorState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_696d4e2376313b0d_410_update)
HXLINE( 411)		if (::hx::IsNotNull( ::editors::WeekEditorState_obj::loadedWeek )) {
HXLINE( 412)			this->weekFile = ::editors::WeekEditorState_obj::loadedWeek;
HXLINE( 413)			::editors::WeekEditorState_obj::loadedWeek = null();
HXLINE( 415)			this->reloadAllShit();
            		}
HXLINE( 418)		bool blockInput = false;
HXLINE( 419)		{
HXLINE( 419)			int _g = 0;
HXDLIN( 419)			::Array< ::Dynamic> _g1 = this->blockPressWhileTypingOn;
HXDLIN( 419)			while((_g < _g1->length)){
HXLINE( 419)				 ::flixel::addons::ui::FlxUIInputText inputText = _g1->__get(_g).StaticCast<  ::flixel::addons::ui::FlxUIInputText >();
HXDLIN( 419)				_g = (_g + 1);
HXLINE( 420)				if (inputText->hasFocus) {
HXLINE( 421)					::flixel::FlxG_obj::sound->muteKeys = ::Array_obj< int >::__new(0);
HXLINE( 422)					::flixel::FlxG_obj::sound->volumeDownKeys = ::Array_obj< int >::__new(0);
HXLINE( 423)					::flixel::FlxG_obj::sound->volumeUpKeys = ::Array_obj< int >::__new(0);
HXLINE( 424)					blockInput = true;
HXLINE( 426)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 426)					if (_this->keyManager->checkStatus(13,_this->status)) {
HXLINE( 426)						inputText->set_hasFocus(false);
            					}
HXLINE( 427)					goto _hx_goto_23;
            				}
            			}
            			_hx_goto_23:;
            		}
HXLINE( 431)		if (!(blockInput)) {
HXLINE( 432)			::flixel::FlxG_obj::sound->muteKeys = ::TitleState_obj::muteKeys;
HXLINE( 433)			::flixel::FlxG_obj::sound->volumeDownKeys = ::TitleState_obj::volumeDownKeys;
HXLINE( 434)			::flixel::FlxG_obj::sound->volumeUpKeys = ::TitleState_obj::volumeUpKeys;
HXLINE( 435)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 435)			if (_this->keyManager->checkStatus(27,_this->status)) {
HXLINE( 436)				::MusicBeatState_obj::switchState( ::editors::MasterEditorMenu_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 437)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 437)				::String library = null();
HXDLIN( 437)				::String file = ::Paths_obj::modFolders((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
HXDLIN( 437)				 ::Dynamic _hx_tmp1;
HXDLIN( 437)				if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 437)					if (!(::Paths_obj::customSoundsLoaded->exists(file))) {
HXLINE( 437)						::Dynamic this1 = ::Paths_obj::customSoundsLoaded;
HXDLIN( 437)						( ( ::haxe::ds::StringMap)(this1) )->set(file,::openfl::media::Sound_obj::fromFile(file));
            					}
HXDLIN( 437)					_hx_tmp1 = ::Paths_obj::customSoundsLoaded->get(file);
            				}
            				else {
HXLINE( 437)					_hx_tmp1 = ::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library);
            				}
HXDLIN( 437)				_hx_tmp->playMusic(_hx_tmp1,null(),null(),null());
            			}
            		}
HXLINE( 441)		this->super::update(elapsed);
HXLINE( 443)		this->lock->set_y(this->weekThing->y);
HXLINE( 444)		this->missingFileText->set_y((this->weekThing->y + 36));
            	}


void WeekEditorState_obj::recalculateStuffPosition(){
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_447_recalculateStuffPosition)
HXLINE( 448)		this->weekThing->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 449)		 ::flixel::FlxSprite _hx_tmp = this->lock;
HXDLIN( 449)		Float _hx_tmp1 = (this->weekThing->get_width() + 10);
HXDLIN( 449)		_hx_tmp->set_x((_hx_tmp1 + this->weekThing->x));
            	}


HX_DEFINE_DYNAMIC_FUNC0(WeekEditorState_obj,recalculateStuffPosition,(void))

::String WeekEditorState_obj::weekFileName;

 ::openfl::net::FileReference WeekEditorState_obj::_file;

void WeekEditorState_obj::loadWeek(){
            	HX_GC_STACKFRAME(&_hx_pos_696d4e2376313b0d_453_loadWeek)
HXLINE( 454)		 ::openfl::net::FileFilter jsonFilter =  ::openfl::net::FileFilter_obj::__alloc( HX_CTX ,HX_("JSON",28,0a,29,31),HX_("json",28,42,68,46),null());
HXLINE( 455)		::editors::WeekEditorState_obj::_file =  ::openfl::net::FileReference_obj::__alloc( HX_CTX );
HXLINE( 456)		::editors::WeekEditorState_obj::_file->addEventListener(HX_("select",fc,1a,33,6a),::editors::WeekEditorState_obj::onLoadComplete_dyn(),null(),null(),null());
HXLINE( 457)		::editors::WeekEditorState_obj::_file->addEventListener(HX_("cancel",7a,ed,33,b8),::editors::WeekEditorState_obj::onLoadCancel_dyn(),null(),null(),null());
HXLINE( 458)		::editors::WeekEditorState_obj::_file->addEventListener(HX_("ioError",02,fe,41,76),::editors::WeekEditorState_obj::onLoadError_dyn(),null(),null(),null());
HXLINE( 459)		::editors::WeekEditorState_obj::_file->browse(::Array_obj< ::Dynamic>::__new(1)->init(0,jsonFilter));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(WeekEditorState_obj,loadWeek,(void))

 ::Dynamic WeekEditorState_obj::loadedWeek;

bool WeekEditorState_obj::loadError;

void WeekEditorState_obj::onLoadComplete( ::openfl::events::Event _){
            	HX_GC_STACKFRAME(&_hx_pos_696d4e2376313b0d_465_onLoadComplete)
HXLINE( 466)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("select",fc,1a,33,6a),::editors::WeekEditorState_obj::onLoadComplete_dyn(),null());
HXLINE( 467)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("cancel",7a,ed,33,b8),::editors::WeekEditorState_obj::onLoadCancel_dyn(),null());
HXLINE( 468)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("ioError",02,fe,41,76),::editors::WeekEditorState_obj::onLoadError_dyn(),null());
HXLINE( 471)		::String fullPath = null();
HXLINE( 473)		if (::hx::IsNotNull( ::editors::WeekEditorState_obj::_file->_hx___path )) {
HXLINE( 473)			fullPath = ::editors::WeekEditorState_obj::_file->_hx___path;
            		}
HXLINE( 475)		if (::hx::IsNotNull( fullPath )) {
HXLINE( 476)			::String rawJson = ::sys::io::File_obj::getContent(fullPath);
HXLINE( 477)			if (::hx::IsNotNull( rawJson )) {
HXLINE( 478)				::editors::WeekEditorState_obj::loadedWeek =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,rawJson)->doParse();
HXLINE( 479)				bool _hx_tmp;
HXDLIN( 479)				if (::hx::IsNotNull( ::editors::WeekEditorState_obj::loadedWeek->__Field(HX_("weekCharacters",be,b5,7f,1d),::hx::paccDynamic) )) {
HXLINE( 479)					_hx_tmp = ::hx::IsNotNull( ::editors::WeekEditorState_obj::loadedWeek->__Field(HX_("weekName",5f,08,2f,30),::hx::paccDynamic) );
            				}
            				else {
HXLINE( 479)					_hx_tmp = false;
            				}
HXDLIN( 479)				if (_hx_tmp) {
HXLINE( 481)					::String cutName = ::editors::WeekEditorState_obj::_file->name.substr(0,(::editors::WeekEditorState_obj::_file->name.length - 5));
HXLINE( 482)					::haxe::Log_obj::trace((HX_("Successfully loaded file: ",84,24,61,ed) + cutName),::hx::SourceInfo(HX_("source/editors/WeekEditorState.hx",cb,5c,43,8a),482,HX_("editors.WeekEditorState",28,53,5a,73),HX_("onLoadComplete",be,4c,20,63)));
HXLINE( 483)					::editors::WeekEditorState_obj::loadError = false;
HXLINE( 485)					::editors::WeekEditorState_obj::weekFileName = cutName;
HXLINE( 486)					::editors::WeekEditorState_obj::_file = null();
HXLINE( 487)					return;
            				}
            			}
            		}
HXLINE( 491)		::editors::WeekEditorState_obj::loadError = true;
HXLINE( 492)		::editors::WeekEditorState_obj::loadedWeek = null();
HXLINE( 493)		::editors::WeekEditorState_obj::_file = null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekEditorState_obj,onLoadComplete,(void))

void WeekEditorState_obj::onLoadCancel( ::openfl::events::Event _){
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_503_onLoadCancel)
HXLINE( 504)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("select",fc,1a,33,6a),::editors::WeekEditorState_obj::onLoadComplete_dyn(),null());
HXLINE( 505)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("cancel",7a,ed,33,b8),::editors::WeekEditorState_obj::onLoadCancel_dyn(),null());
HXLINE( 506)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("ioError",02,fe,41,76),::editors::WeekEditorState_obj::onLoadError_dyn(),null());
HXLINE( 507)		::editors::WeekEditorState_obj::_file = null();
HXLINE( 508)		::haxe::Log_obj::trace(HX_("Cancelled file loading.",67,56,c5,a3),::hx::SourceInfo(HX_("source/editors/WeekEditorState.hx",cb,5c,43,8a),508,HX_("editors.WeekEditorState",28,53,5a,73),HX_("onLoadCancel",3f,be,a2,45)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekEditorState_obj,onLoadCancel,(void))

void WeekEditorState_obj::onLoadError( ::openfl::events::IOErrorEvent _){
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_515_onLoadError)
HXLINE( 516)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("select",fc,1a,33,6a),::editors::WeekEditorState_obj::onLoadComplete_dyn(),null());
HXLINE( 517)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("cancel",7a,ed,33,b8),::editors::WeekEditorState_obj::onLoadCancel_dyn(),null());
HXLINE( 518)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("ioError",02,fe,41,76),::editors::WeekEditorState_obj::onLoadError_dyn(),null());
HXLINE( 519)		::editors::WeekEditorState_obj::_file = null();
HXLINE( 520)		::haxe::Log_obj::trace(HX_("Problem loading file",21,8c,56,d8),::hx::SourceInfo(HX_("source/editors/WeekEditorState.hx",cb,5c,43,8a),520,HX_("editors.WeekEditorState",28,53,5a,73),HX_("onLoadError",a3,fa,a3,b0)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekEditorState_obj,onLoadError,(void))

void WeekEditorState_obj::saveWeek( ::Dynamic weekFile){
            	HX_GC_STACKFRAME(&_hx_pos_696d4e2376313b0d_523_saveWeek)
HXLINE( 524)		 ::Dynamic replacer = null();
HXDLIN( 524)		::String data = ::haxe::format::JsonPrinter_obj::print(weekFile,replacer,HX_("\t",09,00,00,00));
HXLINE( 525)		if ((data.length > 0)) {
HXLINE( 527)			::editors::WeekEditorState_obj::_file =  ::openfl::net::FileReference_obj::__alloc( HX_CTX );
HXLINE( 528)			::editors::WeekEditorState_obj::_file->addEventListener(HX_("complete",b9,00,c8,7f),::editors::WeekEditorState_obj::onSaveComplete_dyn(),null(),null(),null());
HXLINE( 529)			::editors::WeekEditorState_obj::_file->addEventListener(HX_("cancel",7a,ed,33,b8),::editors::WeekEditorState_obj::onSaveCancel_dyn(),null(),null(),null());
HXLINE( 530)			::editors::WeekEditorState_obj::_file->addEventListener(HX_("ioError",02,fe,41,76),::editors::WeekEditorState_obj::onSaveError_dyn(),null(),null(),null());
HXLINE( 531)			::editors::WeekEditorState_obj::_file->save(data,(::editors::WeekEditorState_obj::weekFileName + HX_(".json",56,f1,d6,c2)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekEditorState_obj,saveWeek,(void))

void WeekEditorState_obj::onSaveComplete( ::openfl::events::Event _){
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_536_onSaveComplete)
HXLINE( 537)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("complete",b9,00,c8,7f),::editors::WeekEditorState_obj::onSaveComplete_dyn(),null());
HXLINE( 538)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("cancel",7a,ed,33,b8),::editors::WeekEditorState_obj::onSaveCancel_dyn(),null());
HXLINE( 539)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("ioError",02,fe,41,76),::editors::WeekEditorState_obj::onSaveError_dyn(),null());
HXLINE( 540)		::editors::WeekEditorState_obj::_file = null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekEditorState_obj,onSaveComplete,(void))

void WeekEditorState_obj::onSaveCancel( ::openfl::events::Event _){
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_548_onSaveCancel)
HXLINE( 549)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("complete",b9,00,c8,7f),::editors::WeekEditorState_obj::onSaveComplete_dyn(),null());
HXLINE( 550)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("cancel",7a,ed,33,b8),::editors::WeekEditorState_obj::onSaveCancel_dyn(),null());
HXLINE( 551)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("ioError",02,fe,41,76),::editors::WeekEditorState_obj::onSaveError_dyn(),null());
HXLINE( 552)		::editors::WeekEditorState_obj::_file = null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekEditorState_obj,onSaveCancel,(void))

void WeekEditorState_obj::onSaveError( ::openfl::events::IOErrorEvent _){
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_559_onSaveError)
HXLINE( 560)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("complete",b9,00,c8,7f),::editors::WeekEditorState_obj::onSaveComplete_dyn(),null());
HXLINE( 561)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("cancel",7a,ed,33,b8),::editors::WeekEditorState_obj::onSaveCancel_dyn(),null());
HXLINE( 562)		::editors::WeekEditorState_obj::_file->removeEventListener(HX_("ioError",02,fe,41,76),::editors::WeekEditorState_obj::onSaveError_dyn(),null());
HXLINE( 563)		::editors::WeekEditorState_obj::_file = null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(WeekEditorState_obj,onSaveError,(void))


::hx::ObjectPtr< WeekEditorState_obj > WeekEditorState_obj::__new( ::Dynamic weekFile) {
	::hx::ObjectPtr< WeekEditorState_obj > __this = new WeekEditorState_obj();
	__this->__construct(weekFile);
	return __this;
}

::hx::ObjectPtr< WeekEditorState_obj > WeekEditorState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic weekFile) {
	WeekEditorState_obj *__this = (WeekEditorState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WeekEditorState_obj), true, "editors.WeekEditorState"));
	*(void **)__this = WeekEditorState_obj::_hx_vtable;
	__this->__construct(weekFile);
	return __this;
}

WeekEditorState_obj::WeekEditorState_obj()
{
}

void WeekEditorState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WeekEditorState);
	HX_MARK_MEMBER_NAME(txtWeekTitle,"txtWeekTitle");
	HX_MARK_MEMBER_NAME(bgSprite,"bgSprite");
	HX_MARK_MEMBER_NAME(lock,"lock");
	HX_MARK_MEMBER_NAME(txtTracklist,"txtTracklist");
	HX_MARK_MEMBER_NAME(grpWeekCharacters,"grpWeekCharacters");
	HX_MARK_MEMBER_NAME(weekThing,"weekThing");
	HX_MARK_MEMBER_NAME(missingFileText,"missingFileText");
	HX_MARK_MEMBER_NAME(weekFile,"weekFile");
	HX_MARK_MEMBER_NAME(UI_box,"UI_box");
	HX_MARK_MEMBER_NAME(blockPressWhileTypingOn,"blockPressWhileTypingOn");
	HX_MARK_MEMBER_NAME(songsInputText,"songsInputText");
	HX_MARK_MEMBER_NAME(backgroundInputText,"backgroundInputText");
	HX_MARK_MEMBER_NAME(displayNameInputText,"displayNameInputText");
	HX_MARK_MEMBER_NAME(weekNameInputText,"weekNameInputText");
	HX_MARK_MEMBER_NAME(weekFileInputText,"weekFileInputText");
	HX_MARK_MEMBER_NAME(opponentInputText,"opponentInputText");
	HX_MARK_MEMBER_NAME(boyfriendInputText,"boyfriendInputText");
	HX_MARK_MEMBER_NAME(girlfriendInputText,"girlfriendInputText");
	HX_MARK_MEMBER_NAME(hideCheckbox,"hideCheckbox");
	HX_MARK_MEMBER_NAME(weekBeforeInputText,"weekBeforeInputText");
	HX_MARK_MEMBER_NAME(difficultiesInputText,"difficultiesInputText");
	HX_MARK_MEMBER_NAME(lockedCheckbox,"lockedCheckbox");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WeekEditorState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(txtWeekTitle,"txtWeekTitle");
	HX_VISIT_MEMBER_NAME(bgSprite,"bgSprite");
	HX_VISIT_MEMBER_NAME(lock,"lock");
	HX_VISIT_MEMBER_NAME(txtTracklist,"txtTracklist");
	HX_VISIT_MEMBER_NAME(grpWeekCharacters,"grpWeekCharacters");
	HX_VISIT_MEMBER_NAME(weekThing,"weekThing");
	HX_VISIT_MEMBER_NAME(missingFileText,"missingFileText");
	HX_VISIT_MEMBER_NAME(weekFile,"weekFile");
	HX_VISIT_MEMBER_NAME(UI_box,"UI_box");
	HX_VISIT_MEMBER_NAME(blockPressWhileTypingOn,"blockPressWhileTypingOn");
	HX_VISIT_MEMBER_NAME(songsInputText,"songsInputText");
	HX_VISIT_MEMBER_NAME(backgroundInputText,"backgroundInputText");
	HX_VISIT_MEMBER_NAME(displayNameInputText,"displayNameInputText");
	HX_VISIT_MEMBER_NAME(weekNameInputText,"weekNameInputText");
	HX_VISIT_MEMBER_NAME(weekFileInputText,"weekFileInputText");
	HX_VISIT_MEMBER_NAME(opponentInputText,"opponentInputText");
	HX_VISIT_MEMBER_NAME(boyfriendInputText,"boyfriendInputText");
	HX_VISIT_MEMBER_NAME(girlfriendInputText,"girlfriendInputText");
	HX_VISIT_MEMBER_NAME(hideCheckbox,"hideCheckbox");
	HX_VISIT_MEMBER_NAME(weekBeforeInputText,"weekBeforeInputText");
	HX_VISIT_MEMBER_NAME(difficultiesInputText,"difficultiesInputText");
	HX_VISIT_MEMBER_NAME(lockedCheckbox,"lockedCheckbox");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val WeekEditorState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lock") ) { return ::hx::Val( lock ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"UI_box") ) { return ::hx::Val( UI_box ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bgSprite") ) { return ::hx::Val( bgSprite ); }
		if (HX_FIELD_EQ(inName,"weekFile") ) { return ::hx::Val( weekFile ); }
		if (HX_FIELD_EQ(inName,"reloadBG") ) { return ::hx::Val( reloadBG_dyn() ); }
		if (HX_FIELD_EQ(inName,"getEvent") ) { return ::hx::Val( getEvent_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"weekThing") ) { return ::hx::Val( weekThing ); }
		if (HX_FIELD_EQ(inName,"addWeekUI") ) { return ::hx::Val( addWeekUI_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addOtherUI") ) { return ::hx::Val( addOtherUI_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateText") ) { return ::hx::Val( updateText_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"txtWeekTitle") ) { return ::hx::Val( txtWeekTitle ); }
		if (HX_FIELD_EQ(inName,"txtTracklist") ) { return ::hx::Val( txtTracklist ); }
		if (HX_FIELD_EQ(inName,"addEditorBox") ) { return ::hx::Val( addEditorBox_dyn() ); }
		if (HX_FIELD_EQ(inName,"hideCheckbox") ) { return ::hx::Val( hideCheckbox ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"reloadAllShit") ) { return ::hx::Val( reloadAllShit_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"songsInputText") ) { return ::hx::Val( songsInputText ); }
		if (HX_FIELD_EQ(inName,"lockedCheckbox") ) { return ::hx::Val( lockedCheckbox ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"missingFileText") ) { return ::hx::Val( missingFileText ); }
		if (HX_FIELD_EQ(inName,"reloadWeekThing") ) { return ::hx::Val( reloadWeekThing_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"grpWeekCharacters") ) { return ::hx::Val( grpWeekCharacters ); }
		if (HX_FIELD_EQ(inName,"weekNameInputText") ) { return ::hx::Val( weekNameInputText ); }
		if (HX_FIELD_EQ(inName,"weekFileInputText") ) { return ::hx::Val( weekFileInputText ); }
		if (HX_FIELD_EQ(inName,"opponentInputText") ) { return ::hx::Val( opponentInputText ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"boyfriendInputText") ) { return ::hx::Val( boyfriendInputText ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"backgroundInputText") ) { return ::hx::Val( backgroundInputText ); }
		if (HX_FIELD_EQ(inName,"girlfriendInputText") ) { return ::hx::Val( girlfriendInputText ); }
		if (HX_FIELD_EQ(inName,"weekBeforeInputText") ) { return ::hx::Val( weekBeforeInputText ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"displayNameInputText") ) { return ::hx::Val( displayNameInputText ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"difficultiesInputText") ) { return ::hx::Val( difficultiesInputText ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"blockPressWhileTypingOn") ) { return ::hx::Val( blockPressWhileTypingOn ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"recalculateStuffPosition") ) { return ::hx::Val( recalculateStuffPosition_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool WeekEditorState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_file") ) { outValue = ( _file ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loadWeek") ) { outValue = loadWeek_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"saveWeek") ) { outValue = saveWeek_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadError") ) { outValue = ( loadError ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadedWeek") ) { outValue = ( loadedWeek ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onLoadError") ) { outValue = onLoadError_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"onSaveError") ) { outValue = onSaveError_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"weekFileName") ) { outValue = ( weekFileName ); return true; }
		if (HX_FIELD_EQ(inName,"onLoadCancel") ) { outValue = onLoadCancel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"onSaveCancel") ) { outValue = onSaveCancel_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onLoadComplete") ) { outValue = onLoadComplete_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"onSaveComplete") ) { outValue = onSaveComplete_dyn(); return true; }
	}
	return false;
}

::hx::Val WeekEditorState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lock") ) { lock=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"UI_box") ) { UI_box=inValue.Cast<  ::flixel::addons::ui::FlxUITabMenu >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bgSprite") ) { bgSprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"weekFile") ) { weekFile=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"weekThing") ) { weekThing=inValue.Cast<  ::MenuItem >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"txtWeekTitle") ) { txtWeekTitle=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"txtTracklist") ) { txtTracklist=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hideCheckbox") ) { hideCheckbox=inValue.Cast<  ::flixel::addons::ui::FlxUICheckBox >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"songsInputText") ) { songsInputText=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lockedCheckbox") ) { lockedCheckbox=inValue.Cast<  ::flixel::addons::ui::FlxUICheckBox >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"missingFileText") ) { missingFileText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"grpWeekCharacters") ) { grpWeekCharacters=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"weekNameInputText") ) { weekNameInputText=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"weekFileInputText") ) { weekFileInputText=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"opponentInputText") ) { opponentInputText=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"boyfriendInputText") ) { boyfriendInputText=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"backgroundInputText") ) { backgroundInputText=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"girlfriendInputText") ) { girlfriendInputText=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"weekBeforeInputText") ) { weekBeforeInputText=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"displayNameInputText") ) { displayNameInputText=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"difficultiesInputText") ) { difficultiesInputText=inValue.Cast<  ::flixel::addons::ui::FlxUIInputText >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"blockPressWhileTypingOn") ) { blockPressWhileTypingOn=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool WeekEditorState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_file") ) { _file=ioValue.Cast<  ::openfl::net::FileReference >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadError") ) { loadError=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadedWeek") ) { loadedWeek=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"weekFileName") ) { weekFileName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void WeekEditorState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("txtWeekTitle",74,f4,3f,69));
	outFields->push(HX_("bgSprite",aa,c7,9c,98));
	outFields->push(HX_("lock",eb,9b,b7,47));
	outFields->push(HX_("txtTracklist",d9,6f,f5,3e));
	outFields->push(HX_("grpWeekCharacters",83,fc,76,59));
	outFields->push(HX_("weekThing",5a,43,fd,71));
	outFields->push(HX_("missingFileText",cf,06,fb,c0));
	outFields->push(HX_("weekFile",90,64,eb,2a));
	outFields->push(HX_("UI_box",60,07,ac,43));
	outFields->push(HX_("blockPressWhileTypingOn",71,5f,34,ba));
	outFields->push(HX_("songsInputText",f9,62,7c,e3));
	outFields->push(HX_("backgroundInputText",09,e8,4a,ec));
	outFields->push(HX_("displayNameInputText",6a,3a,0e,bb));
	outFields->push(HX_("weekNameInputText",78,dd,49,37));
	outFields->push(HX_("weekFileInputText",27,f3,62,96));
	outFields->push(HX_("opponentInputText",7a,14,8b,a4));
	outFields->push(HX_("boyfriendInputText",0d,c3,47,c4));
	outFields->push(HX_("girlfriendInputText",bd,d0,af,b8));
	outFields->push(HX_("hideCheckbox",25,55,fb,6d));
	outFields->push(HX_("weekBeforeInputText",c4,c7,2c,00));
	outFields->push(HX_("difficultiesInputText",3e,6f,eb,34));
	outFields->push(HX_("lockedCheckbox",6d,ad,e9,73));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WeekEditorState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(WeekEditorState_obj,txtWeekTitle),HX_("txtWeekTitle",74,f4,3f,69)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(WeekEditorState_obj,bgSprite),HX_("bgSprite",aa,c7,9c,98)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(WeekEditorState_obj,lock),HX_("lock",eb,9b,b7,47)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(WeekEditorState_obj,txtTracklist),HX_("txtTracklist",d9,6f,f5,3e)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(WeekEditorState_obj,grpWeekCharacters),HX_("grpWeekCharacters",83,fc,76,59)},
	{::hx::fsObject /*  ::MenuItem */ ,(int)offsetof(WeekEditorState_obj,weekThing),HX_("weekThing",5a,43,fd,71)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(WeekEditorState_obj,missingFileText),HX_("missingFileText",cf,06,fb,c0)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(WeekEditorState_obj,weekFile),HX_("weekFile",90,64,eb,2a)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUITabMenu */ ,(int)offsetof(WeekEditorState_obj,UI_box),HX_("UI_box",60,07,ac,43)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(WeekEditorState_obj,blockPressWhileTypingOn),HX_("blockPressWhileTypingOn",71,5f,34,ba)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(WeekEditorState_obj,songsInputText),HX_("songsInputText",f9,62,7c,e3)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(WeekEditorState_obj,backgroundInputText),HX_("backgroundInputText",09,e8,4a,ec)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(WeekEditorState_obj,displayNameInputText),HX_("displayNameInputText",6a,3a,0e,bb)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(WeekEditorState_obj,weekNameInputText),HX_("weekNameInputText",78,dd,49,37)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(WeekEditorState_obj,weekFileInputText),HX_("weekFileInputText",27,f3,62,96)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(WeekEditorState_obj,opponentInputText),HX_("opponentInputText",7a,14,8b,a4)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(WeekEditorState_obj,boyfriendInputText),HX_("boyfriendInputText",0d,c3,47,c4)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(WeekEditorState_obj,girlfriendInputText),HX_("girlfriendInputText",bd,d0,af,b8)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUICheckBox */ ,(int)offsetof(WeekEditorState_obj,hideCheckbox),HX_("hideCheckbox",25,55,fb,6d)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(WeekEditorState_obj,weekBeforeInputText),HX_("weekBeforeInputText",c4,c7,2c,00)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUIInputText */ ,(int)offsetof(WeekEditorState_obj,difficultiesInputText),HX_("difficultiesInputText",3e,6f,eb,34)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUICheckBox */ ,(int)offsetof(WeekEditorState_obj,lockedCheckbox),HX_("lockedCheckbox",6d,ad,e9,73)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo WeekEditorState_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &WeekEditorState_obj::weekFileName,HX_("weekFileName",fb,8a,f9,ab)},
	{::hx::fsObject /*  ::openfl::net::FileReference */ ,(void *) &WeekEditorState_obj::_file,HX_("_file",5b,ea,cc,f6)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &WeekEditorState_obj::loadedWeek,HX_("loadedWeek",99,ba,82,b0)},
	{::hx::fsBool,(void *) &WeekEditorState_obj::loadError,HX_("loadError",c2,17,61,8e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String WeekEditorState_obj_sMemberFields[] = {
	HX_("txtWeekTitle",74,f4,3f,69),
	HX_("bgSprite",aa,c7,9c,98),
	HX_("lock",eb,9b,b7,47),
	HX_("txtTracklist",d9,6f,f5,3e),
	HX_("grpWeekCharacters",83,fc,76,59),
	HX_("weekThing",5a,43,fd,71),
	HX_("missingFileText",cf,06,fb,c0),
	HX_("weekFile",90,64,eb,2a),
	HX_("create",fc,66,0f,7c),
	HX_("UI_box",60,07,ac,43),
	HX_("blockPressWhileTypingOn",71,5f,34,ba),
	HX_("addEditorBox",fd,df,01,35),
	HX_("songsInputText",f9,62,7c,e3),
	HX_("backgroundInputText",09,e8,4a,ec),
	HX_("displayNameInputText",6a,3a,0e,bb),
	HX_("weekNameInputText",78,dd,49,37),
	HX_("weekFileInputText",27,f3,62,96),
	HX_("opponentInputText",7a,14,8b,a4),
	HX_("boyfriendInputText",0d,c3,47,c4),
	HX_("girlfriendInputText",bd,d0,af,b8),
	HX_("hideCheckbox",25,55,fb,6d),
	HX_("addWeekUI",49,c4,28,b7),
	HX_("weekBeforeInputText",c4,c7,2c,00),
	HX_("difficultiesInputText",3e,6f,eb,34),
	HX_("lockedCheckbox",6d,ad,e9,73),
	HX_("addOtherUI",03,31,84,f5),
	HX_("reloadAllShit",28,7b,7b,27),
	HX_("updateText",56,b7,ae,05),
	HX_("reloadBG",5e,d5,dd,38),
	HX_("reloadWeekThing",c1,1c,d2,1a),
	HX_("getEvent",a4,d7,9b,d5),
	HX_("update",09,86,05,87),
	HX_("recalculateStuffPosition",6a,dc,65,b6),
	::String(null()) };

static void WeekEditorState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WeekEditorState_obj::weekFileName,"weekFileName");
	HX_MARK_MEMBER_NAME(WeekEditorState_obj::_file,"_file");
	HX_MARK_MEMBER_NAME(WeekEditorState_obj::loadedWeek,"loadedWeek");
	HX_MARK_MEMBER_NAME(WeekEditorState_obj::loadError,"loadError");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WeekEditorState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeekEditorState_obj::weekFileName,"weekFileName");
	HX_VISIT_MEMBER_NAME(WeekEditorState_obj::_file,"_file");
	HX_VISIT_MEMBER_NAME(WeekEditorState_obj::loadedWeek,"loadedWeek");
	HX_VISIT_MEMBER_NAME(WeekEditorState_obj::loadError,"loadError");
};

#endif

::hx::Class WeekEditorState_obj::__mClass;

static ::String WeekEditorState_obj_sStaticFields[] = {
	HX_("weekFileName",fb,8a,f9,ab),
	HX_("_file",5b,ea,cc,f6),
	HX_("loadWeek",3a,31,95,bf),
	HX_("loadedWeek",99,ba,82,b0),
	HX_("loadError",c2,17,61,8e),
	HX_("onLoadComplete",be,4c,20,63),
	HX_("onLoadCancel",3f,be,a2,45),
	HX_("onLoadError",a3,fa,a3,b0),
	HX_("saveWeek",d1,f9,ae,02),
	HX_("onSaveComplete",d5,ac,3f,bc),
	HX_("onSaveCancel",96,1a,31,d9),
	HX_("onSaveError",2c,b6,19,24),
	::String(null())
};

void WeekEditorState_obj::__register()
{
	WeekEditorState_obj _hx_dummy;
	WeekEditorState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("editors.WeekEditorState",28,53,5a,73);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WeekEditorState_obj::__GetStatic;
	__mClass->mSetStaticField = &WeekEditorState_obj::__SetStatic;
	__mClass->mMarkFunc = WeekEditorState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(WeekEditorState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WeekEditorState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WeekEditorState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WeekEditorState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WeekEditorState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WeekEditorState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void WeekEditorState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_173_boot)
HXDLIN( 173)		weekFileName = HX_("week1",bd,95,be,c7);
            	}
{
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_462_boot)
HXDLIN( 462)		loadedWeek = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_696d4e2376313b0d_463_boot)
HXDLIN( 463)		loadError = false;
            	}
}

} // end namespace editors
