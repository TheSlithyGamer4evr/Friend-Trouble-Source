#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_AttachedText
#include <AttachedText.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_InputFormatter
#include <InputFormatter.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
#ifndef INCLUDED_options_ControlsSubState
#include <options/ControlsSubState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_30_new,"options.ControlsSubState","new",0xaec7b8a9,"options.ControlsSubState.new","options/ControlsSubState.hx",30,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_119_update,"options.ControlsSubState","update",0xac333160,"options.ControlsSubState.update","options/ControlsSubState.hx",119,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_190_getInputTextNum,"options.ControlsSubState","getInputTextNum",0xbe6d942e,"options.ControlsSubState.getInputTextNum","options/ControlsSubState.hx",190,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_200_changeSelection,"options.ControlsSubState","changeSelection",0xad494a85,"options.ControlsSubState.changeSelection","options/ControlsSubState.hx",200,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_247_changeAlt,"options.ControlsSubState","changeAlt",0xf3e86aa2,"options.ControlsSubState.changeAlt","options/ControlsSubState.hx",247,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_270_unselectableCheck,"options.ControlsSubState","unselectableCheck",0x9008ce22,"options.ControlsSubState.unselectableCheck","options/ControlsSubState.hx",270,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_277_addBindTexts,"options.ControlsSubState","addBindTexts",0x6d2a405f,"options.ControlsSubState.addBindTexts","options/ControlsSubState.hx",277,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_292_reloadKeys,"options.ControlsSubState","reloadKeys",0xeeca24c4,"options.ControlsSubState.reloadKeys","options/ControlsSubState.hx",292,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_31_boot,"options.ControlsSubState","boot",0x3812dbc9,"options.ControlsSubState.boot","options/ControlsSubState.hx",31,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_32_boot,"options.ControlsSubState","boot",0x3812dbc9,"options.ControlsSubState.boot","options/ControlsSubState.hx",32,0x6f367386)
HX_LOCAL_STACK_FRAME(_hx_pos_166ad3e7e51c9ebe_34_boot,"options.ControlsSubState","boot",0x3812dbc9,"options.ControlsSubState.boot","options/ControlsSubState.hx",34,0x6f367386)
namespace options{

void ControlsSubState_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_30_new)
HXLINE( 118)		this->bindingTime = ((Float)0);
HXLINE( 117)		this->leaving = false;
HXLINE(  69)		this->nextAccept = 5;
HXLINE(  68)		this->rebindingKey = false;
HXLINE(  67)		this->grpInputsAlt = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  66)		this->grpInputs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  37)		this->optionShit = ::cpp::VirtualArray_obj::__new(25)->init(0,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("NOTES",21,14,b9,1d)))->init(1,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Left",27,34,89,32))->init(1,HX_("note_left",b4,fe,20,a5)))->init(2,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Down",82,24,47,2d))->init(1,HX_("note_down",0f,ef,de,9f)))->init(3,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Up",7b,4a,00,00))->init(1,HX_("note_up",c8,67,5c,4d)))->init(4,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Right",bc,7b,91,7c))->init(1,HX_("note_right",8f,ec,ca,4e)))->init(5,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("",00,00,00,00)))->init(6,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("UI",54,4a,00,00)))->init(7,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Left",27,34,89,32))->init(1,HX_("ui_left",12,4d,89,f7)))->init(8,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Down",82,24,47,2d))->init(1,HX_("ui_down",6d,3d,47,f2)))->init(9,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Up",7b,4a,00,00))->init(1,HX_("ui_up",a6,c2,91,a3)))->init(10,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Right",bc,7b,91,7c))->init(1,HX_("ui_right",71,30,a7,17)))->init(11,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("",00,00,00,00)))->init(12,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Reset",af,b9,f5,79))->init(1,HX_("reset",cf,49,c8,e6)))->init(13,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Accept",28,07,9b,3f))->init(1,HX_("accept",08,93,06,0b)))->init(14,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Back",47,06,ea,2b))->init(1,HX_("back",27,da,10,41)))->init(15,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Pause",d6,46,85,50))->init(1,HX_("pause",f6,d6,57,bd)))->init(16,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("",00,00,00,00)))->init(17,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("VOLUME",da,d5,d5,11)))->init(18,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Mute",f9,9a,3e,33))->init(1,HX_("volume_mute",9e,6a,db,fa)))->init(19,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Up",7b,4a,00,00))->init(1,HX_("volume_up",e0,76,ad,60)))->init(20,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Down",82,24,47,2d))->init(1,HX_("volume_down",27,f4,e3,f4)))->init(21,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("",00,00,00,00)))->init(22,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("DEBUG",33,8a,0d,55)))->init(23,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Key 1",50,fb,2b,72))->init(1,HX_("debug_1",05,20,57,5b)))->init(24,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Key 2",51,fb,2b,72))->init(1,HX_("debug_2",06,20,57,5b)));
HXLINE(  35)		this->bindLength = 0;
HXLINE(  72)		super::__construct();
HXLINE(  74)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  74)		::String library = null();
HXDLIN(  74)		 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("menuDesat",26,91,04,72));
HXDLIN(  74)		 ::Dynamic bg1;
HXDLIN(  74)		if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  74)			bg1 = imageToReturn;
            		}
            		else {
HXLINE(  74)			bg1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuDesat",26,91,04,72)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            		}
HXDLIN(  74)		 ::flixel::FlxSprite bg2 = bg->loadGraphic(bg1,null(),null(),null(),null(),null());
HXLINE(  75)		bg2->set_color(-1412611);
HXLINE(  76)		bg2->setGraphicSize(::Std_obj::_hx_int((bg2->get_width() * ((Float)1.1))),null());
HXLINE(  77)		bg2->updateHitbox();
HXLINE(  78)		bg2->screenCenter(null());
HXLINE(  79)		bg2->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  80)		this->add(bg2);
HXLINE(  82)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  83)		this->add(this->grpOptions);
HXLINE(  85)		this->optionShit->push(::cpp::VirtualArray_obj::__new(1)->init(0,HX_("",00,00,00,00)));
HXLINE(  86)		this->optionShit->push(::cpp::VirtualArray_obj::__new(1)->init(0,::options::ControlsSubState_obj::defaultKey));
HXLINE(  88)		{
HXLINE(  88)			int _g = 0;
HXDLIN(  88)			int _g1 = this->optionShit->get_length();
HXDLIN(  88)			while((_g < _g1)){
HXLINE(  88)				_g = (_g + 1);
HXDLIN(  88)				int i = (_g - 1);
HXLINE(  89)				bool isCentered = false;
HXLINE(  90)				bool isDefaultKey = ::hx::IsEq( this->optionShit->__get(i)->__GetItem(0),::options::ControlsSubState_obj::defaultKey );
HXLINE(  91)				if (this->unselectableCheck(i,true)) {
HXLINE(  92)					isCentered = true;
            				}
HXLINE(  95)				bool optionText;
HXDLIN(  95)				if (isCentered) {
HXLINE(  95)					optionText = isDefaultKey;
            				}
            				else {
HXLINE(  95)					optionText = true;
            				}
HXDLIN(  95)				 ::Alphabet optionText1 =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)((10 * i)) ),( (::String)(this->optionShit->__get(i)->__GetItem(0)) ),optionText,false,null(),null());
HXLINE(  96)				optionText1->isMenuItem = true;
HXLINE(  97)				if (isCentered) {
HXLINE(  98)					optionText1->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  99)					optionText1->forceX = optionText1->x;
HXLINE( 100)					optionText1->yAdd = ( (Float)(-55) );
            				}
            				else {
HXLINE( 102)					optionText1->forceX = ( (Float)(200) );
            				}
HXLINE( 104)				optionText1->yMult = ( (Float)(60) );
HXLINE( 105)				optionText1->targetY = ( (Float)(i) );
HXLINE( 106)				this->grpOptions->add(optionText1).StaticCast<  ::Alphabet >();
HXLINE( 108)				if (!(isCentered)) {
HXLINE( 109)					this->addBindTexts(optionText1,i);
HXLINE( 110)					this->bindLength++;
HXLINE( 111)					if ((::options::ControlsSubState_obj::curSelected < 0)) {
HXLINE( 111)						::options::ControlsSubState_obj::curSelected = i;
            					}
            				}
            			}
            		}
HXLINE( 114)		this->changeSelection(null());
            	}

Dynamic ControlsSubState_obj::__CreateEmpty() { return new ControlsSubState_obj; }

void *ControlsSubState_obj::_hx_vtable = 0;

Dynamic ControlsSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ControlsSubState_obj > _hx_result = new ControlsSubState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ControlsSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x30ee2621) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x30ee2621;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void ControlsSubState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_119_update)
HXLINE( 120)		if (!(this->rebindingKey)) {
HXLINE( 121)			if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE( 122)				this->changeSelection(-1);
            			}
HXLINE( 124)			if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE( 125)				this->changeSelection(1);
            			}
HXLINE( 127)			bool _hx_tmp;
HXDLIN( 127)			if (!(::PlayerSettings_obj::player1->controls->_ui_leftP->check())) {
HXLINE( 127)				_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_rightP->check();
            			}
            			else {
HXLINE( 127)				_hx_tmp = true;
            			}
HXDLIN( 127)			if (_hx_tmp) {
HXLINE( 128)				this->changeAlt();
            			}
HXLINE( 131)			if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 132)				::ClientPrefs_obj::reloadControls();
HXLINE( 133)				this->close();
HXLINE( 134)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 134)				_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 137)			bool _hx_tmp1;
HXDLIN( 137)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 137)				_hx_tmp1 = (this->nextAccept <= 0);
            			}
            			else {
HXLINE( 137)				_hx_tmp1 = false;
            			}
HXDLIN( 137)			if (_hx_tmp1) {
HXLINE( 138)				if (::hx::IsEq( this->optionShit->__get(::options::ControlsSubState_obj::curSelected)->__GetItem(0),::options::ControlsSubState_obj::defaultKey )) {
HXLINE( 139)					::ClientPrefs_obj::keyBinds = ::ClientPrefs_obj::defaultKeys->copy();
HXLINE( 140)					this->reloadKeys();
HXLINE( 141)					this->changeSelection(null());
HXLINE( 142)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 142)					_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
            				}
            				else {
HXLINE( 143)					if (!(this->unselectableCheck(::options::ControlsSubState_obj::curSelected,null()))) {
HXLINE( 144)						this->bindingTime = ( (Float)(0) );
HXLINE( 145)						this->rebindingKey = true;
HXLINE( 146)						if (::options::ControlsSubState_obj::curAlt) {
HXLINE( 147)							this->grpInputsAlt->__get(this->getInputTextNum()).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(0) ));
            						}
            						else {
HXLINE( 149)							this->grpInputs->__get(this->getInputTextNum()).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(0) ));
            						}
HXLINE( 151)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 151)						_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            					}
            				}
            			}
            		}
            		else {
HXLINE( 155)			int keyPressed = ::flixel::FlxG_obj::keys->firstJustPressed();
HXLINE( 156)			if ((keyPressed > -1)) {
HXLINE( 157)				::Array< int > keysArray = ( (::Array< int >)(::ClientPrefs_obj::keyBinds->get(this->optionShit->__get(::options::ControlsSubState_obj::curSelected)->__GetItem(1))) );
HXLINE( 158)				int _hx_tmp;
HXDLIN( 158)				if (::options::ControlsSubState_obj::curAlt) {
HXLINE( 158)					_hx_tmp = 1;
            				}
            				else {
HXLINE( 158)					_hx_tmp = 0;
            				}
HXDLIN( 158)				keysArray[_hx_tmp] = keyPressed;
HXLINE( 160)				int opposite;
HXDLIN( 160)				if (::options::ControlsSubState_obj::curAlt) {
HXLINE( 160)					opposite = 0;
            				}
            				else {
HXLINE( 160)					opposite = 1;
            				}
HXLINE( 161)				if ((keysArray->__get(opposite) == keysArray->__get((1 - opposite)))) {
HXLINE( 162)					keysArray[opposite] = -1;
            				}
HXLINE( 164)				::ClientPrefs_obj::keyBinds->set(( (::String)(this->optionShit->__get(::options::ControlsSubState_obj::curSelected)->__GetItem(1)) ),keysArray);
HXLINE( 166)				this->reloadKeys();
HXLINE( 167)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 167)				_hx_tmp1->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 168)				this->rebindingKey = false;
            			}
HXLINE( 171)			 ::options::ControlsSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 171)			_hx_tmp->bindingTime = (_hx_tmp->bindingTime + elapsed);
HXLINE( 172)			if ((this->bindingTime > 5)) {
HXLINE( 173)				if (::options::ControlsSubState_obj::curAlt) {
HXLINE( 174)					this->grpInputsAlt->__get(::options::ControlsSubState_obj::curSelected).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            				}
            				else {
HXLINE( 176)					this->grpInputs->__get(::options::ControlsSubState_obj::curSelected).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            				}
HXLINE( 178)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 178)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 179)				this->rebindingKey = false;
HXLINE( 180)				this->bindingTime = ( (Float)(0) );
            			}
            		}
HXLINE( 184)		if ((this->nextAccept > 0)) {
HXLINE( 185)			 ::options::ControlsSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 185)			_hx_tmp->nextAccept = (_hx_tmp->nextAccept - 1);
            		}
HXLINE( 187)		this->super::update(elapsed);
            	}


int ControlsSubState_obj::getInputTextNum(){
            	HX_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_190_getInputTextNum)
HXLINE( 191)		int num = 0;
HXLINE( 192)		{
HXLINE( 192)			int _g = 0;
HXDLIN( 192)			int _g1 = ::options::ControlsSubState_obj::curSelected;
HXDLIN( 192)			while((_g < _g1)){
HXLINE( 192)				_g = (_g + 1);
HXDLIN( 192)				int i = (_g - 1);
HXLINE( 193)				if (::hx::IsGreater( this->optionShit->__get(i)->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic),1 )) {
HXLINE( 194)					num = (num + 1);
            				}
            			}
            		}
HXLINE( 197)		return num;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ControlsSubState_obj,getInputTextNum,return )

void ControlsSubState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_200_changeSelection)
HXLINE( 201)		while(true){
HXLINE( 202)			 ::Dynamic _hx_tmp = ::hx::ClassOf< ::options::ControlsSubState >();
HXDLIN( 202)			::options::ControlsSubState_obj::curSelected = (::options::ControlsSubState_obj::curSelected + change);
HXLINE( 203)			if ((::options::ControlsSubState_obj::curSelected < 0)) {
HXLINE( 204)				::options::ControlsSubState_obj::curSelected = (this->optionShit->get_length() - 1);
            			}
HXLINE( 205)			if ((::options::ControlsSubState_obj::curSelected >= this->optionShit->get_length())) {
HXLINE( 206)				::options::ControlsSubState_obj::curSelected = 0;
            			}
HXLINE( 201)			if (!(this->unselectableCheck(::options::ControlsSubState_obj::curSelected,null()))) {
HXLINE( 201)				goto _hx_goto_5;
            			}
            		}
            		_hx_goto_5:;
HXLINE( 209)		int bullShit = 0;
HXLINE( 211)		{
HXLINE( 211)			int _g = 0;
HXDLIN( 211)			int _g1 = this->grpInputs->length;
HXDLIN( 211)			while((_g < _g1)){
HXLINE( 211)				_g = (_g + 1);
HXDLIN( 211)				int i = (_g - 1);
HXLINE( 212)				this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 214)		{
HXLINE( 214)			int _g2 = 0;
HXDLIN( 214)			int _g3 = this->grpInputsAlt->length;
HXDLIN( 214)			while((_g2 < _g3)){
HXLINE( 214)				_g2 = (_g2 + 1);
HXDLIN( 214)				int i = (_g2 - 1);
HXLINE( 215)				this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 218)		{
HXLINE( 218)			int _g4 = 0;
HXDLIN( 218)			::Array< ::Dynamic> _g5 = this->grpOptions->members;
HXDLIN( 218)			while((_g4 < _g5->length)){
HXLINE( 218)				 ::Alphabet item = _g5->__get(_g4).StaticCast<  ::Alphabet >();
HXDLIN( 218)				_g4 = (_g4 + 1);
HXLINE( 219)				item->targetY = ( (Float)((bullShit - ::options::ControlsSubState_obj::curSelected)) );
HXLINE( 220)				bullShit = (bullShit + 1);
HXLINE( 222)				if (!(this->unselectableCheck((bullShit - 1),null()))) {
HXLINE( 223)					item->set_alpha(((Float)0.6));
HXLINE( 224)					if ((item->targetY == 0)) {
HXLINE( 225)						item->set_alpha(( (Float)(1) ));
HXLINE( 226)						if (::options::ControlsSubState_obj::curAlt) {
HXLINE( 227)							int _g = 0;
HXDLIN( 227)							int _g1 = this->grpInputsAlt->length;
HXDLIN( 227)							while((_g < _g1)){
HXLINE( 227)								_g = (_g + 1);
HXDLIN( 227)								int i = (_g - 1);
HXLINE( 228)								if (::hx::IsInstanceEq( this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 229)									this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
HXLINE( 230)									goto _hx_goto_9;
            								}
            							}
            							_hx_goto_9:;
            						}
            						else {
HXLINE( 234)							int _g = 0;
HXDLIN( 234)							int _g1 = this->grpInputs->length;
HXDLIN( 234)							while((_g < _g1)){
HXLINE( 234)								_g = (_g + 1);
HXDLIN( 234)								int i = (_g - 1);
HXLINE( 235)								if (::hx::IsInstanceEq( this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 236)									this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
HXLINE( 237)									goto _hx_goto_10;
            								}
            							}
            							_hx_goto_10:;
            						}
            					}
            				}
            			}
            		}
HXLINE( 244)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 244)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ControlsSubState_obj,changeSelection,(void))

void ControlsSubState_obj::changeAlt(){
            	HX_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_247_changeAlt)
HXLINE( 248)		::options::ControlsSubState_obj::curAlt = !(::options::ControlsSubState_obj::curAlt);
HXLINE( 249)		{
HXLINE( 249)			int _g = 0;
HXDLIN( 249)			int _g1 = this->grpInputs->length;
HXDLIN( 249)			while((_g < _g1)){
HXLINE( 249)				_g = (_g + 1);
HXDLIN( 249)				int i = (_g - 1);
HXLINE( 250)				if (::hx::IsInstanceEq( this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->sprTracker,Dynamic( this->grpOptions->members->__get(::options::ControlsSubState_obj::curSelected)).StaticCast<  ::Alphabet >() )) {
HXLINE( 251)					this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
HXLINE( 252)					if (!(::options::ControlsSubState_obj::curAlt)) {
HXLINE( 253)						this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            					}
HXLINE( 255)					goto _hx_goto_12;
            				}
            			}
            			_hx_goto_12:;
            		}
HXLINE( 258)		{
HXLINE( 258)			int _g2 = 0;
HXDLIN( 258)			int _g3 = this->grpInputsAlt->length;
HXDLIN( 258)			while((_g2 < _g3)){
HXLINE( 258)				_g2 = (_g2 + 1);
HXDLIN( 258)				int i = (_g2 - 1);
HXLINE( 259)				if (::hx::IsInstanceEq( this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->sprTracker,Dynamic( this->grpOptions->members->__get(::options::ControlsSubState_obj::curSelected)).StaticCast<  ::Alphabet >() )) {
HXLINE( 260)					this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
HXLINE( 261)					if (::options::ControlsSubState_obj::curAlt) {
HXLINE( 262)						this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            					}
HXLINE( 264)					goto _hx_goto_13;
            				}
            			}
            			_hx_goto_13:;
            		}
HXLINE( 267)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 267)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ControlsSubState_obj,changeAlt,(void))

bool ControlsSubState_obj::unselectableCheck(int num, ::Dynamic __o_checkDefaultKey){
            		 ::Dynamic checkDefaultKey = __o_checkDefaultKey;
            		if (::hx::IsNull(__o_checkDefaultKey)) checkDefaultKey = false;
            	HX_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_270_unselectableCheck)
HXLINE( 271)		if (::hx::IsEq( this->optionShit->__get(num)->__GetItem(0),::options::ControlsSubState_obj::defaultKey )) {
HXLINE( 272)			return ( (bool)(checkDefaultKey) );
            		}
HXLINE( 274)		if (::hx::IsLess( this->optionShit->__get(num)->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic),2 )) {
HXLINE( 274)			return ::hx::IsNotEq( this->optionShit->__get(num)->__GetItem(0),::options::ControlsSubState_obj::defaultKey );
            		}
            		else {
HXLINE( 274)			return false;
            		}
HXDLIN( 274)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ControlsSubState_obj,unselectableCheck,return )

void ControlsSubState_obj::addBindTexts( ::Alphabet optionText,int num){
            	HX_GC_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_277_addBindTexts)
HXLINE( 278)		::cpp::VirtualArray keys = ( (::cpp::VirtualArray)(::ClientPrefs_obj::keyBinds->get(this->optionShit->__get(num)->__GetItem(1))) );
HXLINE( 279)		 ::AttachedText text1 =  ::AttachedText_obj::__alloc( HX_CTX ,::InputFormatter_obj::getKeyName(( (int)(keys->__get(0)) )),400,-55,null(),null());
HXLINE( 280)		text1->setPosition((optionText->x + 400),(optionText->y - ( (Float)(55) )));
HXLINE( 281)		text1->sprTracker = optionText;
HXLINE( 282)		this->grpInputs->push(text1);
HXLINE( 283)		this->add(text1);
HXLINE( 285)		 ::AttachedText text2 =  ::AttachedText_obj::__alloc( HX_CTX ,::InputFormatter_obj::getKeyName(( (int)(keys->__get(1)) )),650,-55,null(),null());
HXLINE( 286)		text2->setPosition((optionText->x + 650),(optionText->y - ( (Float)(55) )));
HXLINE( 287)		text2->sprTracker = optionText;
HXLINE( 288)		this->grpInputsAlt->push(text2);
HXLINE( 289)		this->add(text2);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ControlsSubState_obj,addBindTexts,(void))

void ControlsSubState_obj::reloadKeys(){
            	HX_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_292_reloadKeys)
HXLINE( 293)		while((this->grpInputs->length > 0)){
HXLINE( 294)			 ::AttachedText item = this->grpInputs->__get(0).StaticCast<  ::AttachedText >();
HXLINE( 295)			item->kill();
HXLINE( 296)			this->grpInputs->remove(item);
HXLINE( 297)			item->destroy();
            		}
HXLINE( 299)		while((this->grpInputsAlt->length > 0)){
HXLINE( 300)			 ::AttachedText item = this->grpInputsAlt->__get(0).StaticCast<  ::AttachedText >();
HXLINE( 301)			item->kill();
HXLINE( 302)			this->grpInputsAlt->remove(item);
HXLINE( 303)			item->destroy();
            		}
HXLINE( 306)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 306)		::String _hx_tmp1;
HXDLIN( 306)		if (::hx::IsNull( ::ClientPrefs_obj::keyBinds )) {
HXLINE( 306)			_hx_tmp1 = HX_("null",87,9e,0e,49);
            		}
            		else {
HXLINE( 306)			_hx_tmp1 = ::ClientPrefs_obj::keyBinds->toString();
            		}
HXDLIN( 306)		_hx_tmp((HX_("Reloaded keys: ",a2,54,2a,6b) + _hx_tmp1),::hx::SourceInfo(HX_("source/options/ControlsSubState.hx",12,79,41,e8),306,HX_("options.ControlsSubState",37,30,2a,4c),HX_("reloadKeys",ed,81,0e,92)));
HXLINE( 308)		{
HXLINE( 308)			int _g = 0;
HXDLIN( 308)			int _g1 = this->grpOptions->length;
HXDLIN( 308)			while((_g < _g1)){
HXLINE( 308)				_g = (_g + 1);
HXDLIN( 308)				int i = (_g - 1);
HXLINE( 309)				if (!(this->unselectableCheck(i,true))) {
HXLINE( 310)					this->addBindTexts(Dynamic( this->grpOptions->members->__get(i)).StaticCast<  ::Alphabet >(),i);
            				}
            			}
            		}
HXLINE( 315)		int bullShit = 0;
HXLINE( 316)		{
HXLINE( 316)			int _g2 = 0;
HXDLIN( 316)			int _g3 = this->grpInputs->length;
HXDLIN( 316)			while((_g2 < _g3)){
HXLINE( 316)				_g2 = (_g2 + 1);
HXDLIN( 316)				int i = (_g2 - 1);
HXLINE( 317)				this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 319)		{
HXLINE( 319)			int _g4 = 0;
HXDLIN( 319)			int _g5 = this->grpInputsAlt->length;
HXDLIN( 319)			while((_g4 < _g5)){
HXLINE( 319)				_g4 = (_g4 + 1);
HXDLIN( 319)				int i = (_g4 - 1);
HXLINE( 320)				this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 323)		{
HXLINE( 323)			int _g6 = 0;
HXDLIN( 323)			::Array< ::Dynamic> _g7 = this->grpOptions->members;
HXDLIN( 323)			while((_g6 < _g7->length)){
HXLINE( 323)				 ::Alphabet item = _g7->__get(_g6).StaticCast<  ::Alphabet >();
HXDLIN( 323)				_g6 = (_g6 + 1);
HXLINE( 324)				item->targetY = ( (Float)((bullShit - ::options::ControlsSubState_obj::curSelected)) );
HXLINE( 325)				bullShit = (bullShit + 1);
HXLINE( 327)				if (!(this->unselectableCheck((bullShit - 1),null()))) {
HXLINE( 328)					item->set_alpha(((Float)0.6));
HXLINE( 329)					if ((item->targetY == 0)) {
HXLINE( 330)						item->set_alpha(( (Float)(1) ));
HXLINE( 331)						if (::options::ControlsSubState_obj::curAlt) {
HXLINE( 332)							int _g = 0;
HXDLIN( 332)							int _g1 = this->grpInputsAlt->length;
HXDLIN( 332)							while((_g < _g1)){
HXLINE( 332)								_g = (_g + 1);
HXDLIN( 332)								int i = (_g - 1);
HXLINE( 333)								if (::hx::IsInstanceEq( this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 334)									this->grpInputsAlt->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            								}
            							}
            						}
            						else {
HXLINE( 338)							int _g = 0;
HXDLIN( 338)							int _g1 = this->grpInputs->length;
HXDLIN( 338)							while((_g < _g1)){
HXLINE( 338)								_g = (_g + 1);
HXDLIN( 338)								int i = (_g - 1);
HXLINE( 339)								if (::hx::IsInstanceEq( this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 340)									this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ControlsSubState_obj,reloadKeys,(void))

int ControlsSubState_obj::curSelected;

bool ControlsSubState_obj::curAlt;

::String ControlsSubState_obj::defaultKey;


::hx::ObjectPtr< ControlsSubState_obj > ControlsSubState_obj::__new() {
	::hx::ObjectPtr< ControlsSubState_obj > __this = new ControlsSubState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ControlsSubState_obj > ControlsSubState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ControlsSubState_obj *__this = (ControlsSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ControlsSubState_obj), true, "options.ControlsSubState"));
	*(void **)__this = ControlsSubState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ControlsSubState_obj::ControlsSubState_obj()
{
}

void ControlsSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ControlsSubState);
	HX_MARK_MEMBER_NAME(bindLength,"bindLength");
	HX_MARK_MEMBER_NAME(optionShit,"optionShit");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(grpInputs,"grpInputs");
	HX_MARK_MEMBER_NAME(grpInputsAlt,"grpInputsAlt");
	HX_MARK_MEMBER_NAME(rebindingKey,"rebindingKey");
	HX_MARK_MEMBER_NAME(nextAccept,"nextAccept");
	HX_MARK_MEMBER_NAME(leaving,"leaving");
	HX_MARK_MEMBER_NAME(bindingTime,"bindingTime");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ControlsSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bindLength,"bindLength");
	HX_VISIT_MEMBER_NAME(optionShit,"optionShit");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(grpInputs,"grpInputs");
	HX_VISIT_MEMBER_NAME(grpInputsAlt,"grpInputsAlt");
	HX_VISIT_MEMBER_NAME(rebindingKey,"rebindingKey");
	HX_VISIT_MEMBER_NAME(nextAccept,"nextAccept");
	HX_VISIT_MEMBER_NAME(leaving,"leaving");
	HX_VISIT_MEMBER_NAME(bindingTime,"bindingTime");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ControlsSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"leaving") ) { return ::hx::Val( leaving ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"grpInputs") ) { return ::hx::Val( grpInputs ); }
		if (HX_FIELD_EQ(inName,"changeAlt") ) { return ::hx::Val( changeAlt_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bindLength") ) { return ::hx::Val( bindLength ); }
		if (HX_FIELD_EQ(inName,"optionShit") ) { return ::hx::Val( optionShit ); }
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { return ::hx::Val( nextAccept ); }
		if (HX_FIELD_EQ(inName,"reloadKeys") ) { return ::hx::Val( reloadKeys_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bindingTime") ) { return ::hx::Val( bindingTime ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"grpInputsAlt") ) { return ::hx::Val( grpInputsAlt ); }
		if (HX_FIELD_EQ(inName,"rebindingKey") ) { return ::hx::Val( rebindingKey ); }
		if (HX_FIELD_EQ(inName,"addBindTexts") ) { return ::hx::Val( addBindTexts_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getInputTextNum") ) { return ::hx::Val( getInputTextNum_dyn() ); }
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"unselectableCheck") ) { return ::hx::Val( unselectableCheck_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ControlsSubState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"curAlt") ) { outValue = ( curAlt ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"defaultKey") ) { outValue = ( defaultKey ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
	}
	return false;
}

::hx::Val ControlsSubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"leaving") ) { leaving=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"grpInputs") ) { grpInputs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bindLength") ) { bindLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"optionShit") ) { optionShit=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { nextAccept=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bindingTime") ) { bindingTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"grpInputsAlt") ) { grpInputsAlt=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rebindingKey") ) { rebindingKey=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ControlsSubState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"curAlt") ) { curAlt=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"defaultKey") ) { defaultKey=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void ControlsSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bindLength",83,6a,31,c7));
	outFields->push(HX_("optionShit",d5,2d,ee,91));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("grpInputs",ee,3e,7e,59));
	outFields->push(HX_("grpInputsAlt",db,fa,fe,c1));
	outFields->push(HX_("rebindingKey",cd,70,6f,a8));
	outFields->push(HX_("nextAccept",5b,44,38,c0));
	outFields->push(HX_("leaving",f4,09,47,15));
	outFields->push(HX_("bindingTime",f2,09,cb,be));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ControlsSubState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ControlsSubState_obj,bindLength),HX_("bindLength",83,6a,31,c7)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(ControlsSubState_obj,optionShit),HX_("optionShit",d5,2d,ee,91)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(ControlsSubState_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ControlsSubState_obj,grpInputs),HX_("grpInputs",ee,3e,7e,59)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ControlsSubState_obj,grpInputsAlt),HX_("grpInputsAlt",db,fa,fe,c1)},
	{::hx::fsBool,(int)offsetof(ControlsSubState_obj,rebindingKey),HX_("rebindingKey",cd,70,6f,a8)},
	{::hx::fsInt,(int)offsetof(ControlsSubState_obj,nextAccept),HX_("nextAccept",5b,44,38,c0)},
	{::hx::fsBool,(int)offsetof(ControlsSubState_obj,leaving),HX_("leaving",f4,09,47,15)},
	{::hx::fsFloat,(int)offsetof(ControlsSubState_obj,bindingTime),HX_("bindingTime",f2,09,cb,be)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ControlsSubState_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ControlsSubState_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsBool,(void *) &ControlsSubState_obj::curAlt,HX_("curAlt",89,9b,c2,3e)},
	{::hx::fsString,(void *) &ControlsSubState_obj::defaultKey,HX_("defaultKey",5e,97,fe,25)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ControlsSubState_obj_sMemberFields[] = {
	HX_("bindLength",83,6a,31,c7),
	HX_("optionShit",d5,2d,ee,91),
	HX_("grpOptions",f9,45,d8,00),
	HX_("grpInputs",ee,3e,7e,59),
	HX_("grpInputsAlt",db,fa,fe,c1),
	HX_("rebindingKey",cd,70,6f,a8),
	HX_("nextAccept",5b,44,38,c0),
	HX_("leaving",f4,09,47,15),
	HX_("bindingTime",f2,09,cb,be),
	HX_("update",09,86,05,87),
	HX_("getInputTextNum",65,e2,d9,59),
	HX_("changeSelection",bc,98,b5,48),
	HX_("changeAlt",99,a5,f7,1d),
	HX_("unselectableCheck",19,58,ce,19),
	HX_("addBindTexts",c8,f9,1e,b0),
	HX_("reloadKeys",ed,81,0e,92),
	::String(null()) };

static void ControlsSubState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ControlsSubState_obj::curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(ControlsSubState_obj::curAlt,"curAlt");
	HX_MARK_MEMBER_NAME(ControlsSubState_obj::defaultKey,"defaultKey");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ControlsSubState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ControlsSubState_obj::curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(ControlsSubState_obj::curAlt,"curAlt");
	HX_VISIT_MEMBER_NAME(ControlsSubState_obj::defaultKey,"defaultKey");
};

#endif

::hx::Class ControlsSubState_obj::__mClass;

static ::String ControlsSubState_obj_sStaticFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("curAlt",89,9b,c2,3e),
	HX_("defaultKey",5e,97,fe,25),
	::String(null())
};

void ControlsSubState_obj::__register()
{
	ControlsSubState_obj _hx_dummy;
	ControlsSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.ControlsSubState",37,30,2a,4c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ControlsSubState_obj::__GetStatic;
	__mClass->mSetStaticField = &ControlsSubState_obj::__SetStatic;
	__mClass->mMarkFunc = ControlsSubState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ControlsSubState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ControlsSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ControlsSubState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ControlsSubState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ControlsSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ControlsSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ControlsSubState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_31_boot)
HXDLIN(  31)		curSelected = -1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_32_boot)
HXDLIN(  32)		curAlt = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_166ad3e7e51c9ebe_34_boot)
HXDLIN(  34)		defaultKey = HX_("Reset to Default Keys",47,5b,97,3d);
            	}
}

} // end namespace options
