#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_AttachedText
#include <AttachedText.h>
#endif
#ifndef INCLUDED_CheckboxThingie
#include <CheckboxThingie.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_GameplayChangersSubstate
#include <GameplayChangersSubstate.h>
#endif
#ifndef INCLUDED_GameplayOption
#include <GameplayOption.h>
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
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_96606cf9b666a443_30_new,"GameplayChangersSubstate","new",0x5f312efa,"GameplayChangersSubstate.new","GameplayChangersSubstate.hx",30,0xb1374db6)
HX_LOCAL_STACK_FRAME(_hx_pos_96606cf9b666a443_41_getOptions,"GameplayChangersSubstate","getOptions",0x0462c20e,"GameplayChangersSubstate.getOptions","GameplayChangersSubstate.hx",41,0xb1374db6)
HX_LOCAL_STACK_FRAME(_hx_pos_96606cf9b666a443_141_update,"GameplayChangersSubstate","update",0x9821c3af,"GameplayChangersSubstate.update","GameplayChangersSubstate.hx",141,0xb1374db6)
HX_LOCAL_STACK_FRAME(_hx_pos_96606cf9b666a443_273_updateTextFrom,"GameplayChangersSubstate","updateTextFrom",0x57933f86,"GameplayChangersSubstate.updateTextFrom","GameplayChangersSubstate.hx",273,0xb1374db6)
HX_LOCAL_STACK_FRAME(_hx_pos_96606cf9b666a443_282_clearHold,"GameplayChangersSubstate","clearHold",0x00f4ff86,"GameplayChangersSubstate.clearHold","GameplayChangersSubstate.hx",282,0xb1374db6)
HX_LOCAL_STACK_FRAME(_hx_pos_96606cf9b666a443_290_changeSelection,"GameplayChangersSubstate","changeSelection",0xa2f37656,"GameplayChangersSubstate.changeSelection","GameplayChangersSubstate.hx",290,0xb1374db6)
HX_LOCAL_STACK_FRAME(_hx_pos_96606cf9b666a443_319_reloadCheckboxes,"GameplayChangersSubstate","reloadCheckboxes",0xe10eeb50,"GameplayChangersSubstate.reloadCheckboxes","GameplayChangersSubstate.hx",319,0xb1374db6)

void GameplayChangersSubstate_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_96606cf9b666a443_30_new)
HXLINE( 139)		this->holdValue = ((Float)0);
HXLINE( 138)		this->holdTime = ((Float)0);
HXLINE( 137)		this->nextAccept = 5;
HXLINE(  34)		this->optionsArray = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  33)		this->curSelected = 0;
HXLINE(  32)		this->curOption = null();
HXLINE(  86)		super::__construct();
HXLINE(  88)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  89)		bg->set_alpha(((Float)0.6));
HXLINE(  90)		this->add(bg);
HXLINE(  93)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  94)		this->add(this->grpOptions);
HXLINE(  96)		this->grpTexts =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  97)		this->add(this->grpTexts);
HXLINE(  99)		this->checkboxGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 100)		this->add(this->checkboxGroup);
HXLINE( 102)		this->getOptions();
HXLINE( 104)		{
HXLINE( 104)			int _g = 0;
HXDLIN( 104)			int _g1 = this->optionsArray->get_length();
HXDLIN( 104)			while((_g < _g1)){
HXLINE( 104)				_g = (_g + 1);
HXDLIN( 104)				int i = (_g - 1);
HXLINE( 106)				 ::Alphabet optionText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)((70 * i)) ),( (::String)(this->optionsArray->__get(i)->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ),true,false,((Float)0.05),((Float)0.8));
HXLINE( 107)				optionText->isMenuItem = true;
HXLINE( 108)				optionText->set_x((optionText->x + 300));
HXLINE( 111)				optionText->xAdd = ( (Float)(120) );
HXLINE( 112)				optionText->targetY = ( (Float)(i) );
HXLINE( 113)				this->grpOptions->add(optionText).StaticCast<  ::Alphabet >();
HXLINE( 115)				if (::hx::IsEq( this->optionsArray->__get(i)->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic),HX_("bool",2a,84,1b,41) )) {
HXLINE( 116)					Float checkbox = (optionText->x - ( (Float)(105) ));
HXDLIN( 116)					Float optionText1 = optionText->y;
HXDLIN( 116)					 ::CheckboxThingie checkbox1 =  ::CheckboxThingie_obj::__alloc( HX_CTX ,checkbox,optionText1,::hx::IsEq( this->optionsArray->__get(i)->__Field(HX_("getValue",fb,8e,8f,91),::hx::paccDynamic)(),true ));
HXLINE( 117)					checkbox1->sprTracker = optionText;
HXLINE( 118)					checkbox1->offsetY = ( (Float)(-60) );
HXLINE( 119)					checkbox1->ID = i;
HXLINE( 120)					this->checkboxGroup->add(checkbox1).StaticCast<  ::CheckboxThingie >();
HXLINE( 121)					 ::Alphabet optionText2 = optionText;
HXDLIN( 121)					optionText2->xAdd = (optionText2->xAdd + 80);
            				}
            				else {
HXLINE( 123)					::String valueText = (HX_("",00,00,00,00) + ::Std_obj::string(this->optionsArray->__get(i)->__Field(HX_("getValue",fb,8e,8f,91),::hx::paccDynamic)()));
HXDLIN( 123)					 ::AttachedText valueText1 =  ::AttachedText_obj::__alloc( HX_CTX ,valueText,(optionText->get_width() + 80),null(),true,((Float)0.8));
HXLINE( 124)					valueText1->sprTracker = optionText;
HXLINE( 125)					valueText1->copyAlpha = true;
HXLINE( 126)					valueText1->ID = i;
HXLINE( 127)					this->grpTexts->add(valueText1).StaticCast<  ::AttachedText >();
HXLINE( 128)					this->optionsArray->__get(i)->__Field(HX_("setChild",9a,12,ee,53),::hx::paccDynamic)(valueText1);
            				}
HXLINE( 130)				this->updateTextFrom(( ( ::GameplayOption)(this->optionsArray->__get(i)) ));
            			}
            		}
HXLINE( 133)		this->changeSelection(null());
HXLINE( 134)		this->reloadCheckboxes();
            	}

Dynamic GameplayChangersSubstate_obj::__CreateEmpty() { return new GameplayChangersSubstate_obj; }

void *GameplayChangersSubstate_obj::_hx_vtable = 0;

Dynamic GameplayChangersSubstate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameplayChangersSubstate_obj > _hx_result = new GameplayChangersSubstate_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GameplayChangersSubstate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x52f65cc8) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x52f65cc8;
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

void GameplayChangersSubstate_obj::getOptions(){
            	HX_GC_STACKFRAME(&_hx_pos_96606cf9b666a443_41_getOptions)
HXLINE(  42)		 ::GameplayOption option =  ::GameplayOption_obj::__alloc( HX_CTX ,HX_("Scroll Speed",34,bf,42,cb),HX_("scrollspeed",5a,70,19,38),HX_("float",9c,c5,96,02),1,null());
HXLINE(  43)		option->scrollSpeed = ((Float)1.5);
HXLINE(  44)		option->minValue = ((Float)0.5);
HXLINE(  45)		option->maxValue = 3;
HXLINE(  46)		option->changeValue = ((Float)0.1);
HXLINE(  47)		option->displayFormat = HX_("%vX",87,7a,1c,00);
HXLINE(  48)		this->optionsArray->push(option);
HXLINE(  58)		 ::GameplayOption option1 =  ::GameplayOption_obj::__alloc( HX_CTX ,HX_("Health Gain Multiplier",1e,c6,e7,2f),HX_("healthgain",1b,97,1b,16),HX_("float",9c,c5,96,02),1,null());
HXLINE(  59)		option1->scrollSpeed = ((Float)2.5);
HXLINE(  60)		option1->minValue = 0;
HXLINE(  61)		option1->maxValue = 5;
HXLINE(  62)		option1->changeValue = ((Float)0.1);
HXLINE(  63)		option1->displayFormat = HX_("%vX",87,7a,1c,00);
HXLINE(  64)		this->optionsArray->push(option1);
HXLINE(  66)		 ::GameplayOption option2 =  ::GameplayOption_obj::__alloc( HX_CTX ,HX_("Health Loss Multiplier",3a,7f,8e,c0),HX_("healthloss",7f,50,74,19),HX_("float",9c,c5,96,02),1,null());
HXLINE(  67)		option2->scrollSpeed = ((Float)2.5);
HXLINE(  68)		option2->minValue = ((Float)0.5);
HXLINE(  69)		option2->maxValue = 5;
HXLINE(  70)		option2->changeValue = ((Float)0.1);
HXLINE(  71)		option2->displayFormat = HX_("%vX",87,7a,1c,00);
HXLINE(  72)		this->optionsArray->push(option2);
HXLINE(  74)		 ::GameplayOption option3 =  ::GameplayOption_obj::__alloc( HX_CTX ,HX_("Instakill on Miss",76,d5,a0,bc),HX_("instakill",f9,72,23,49),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  75)		this->optionsArray->push(option3);
HXLINE(  77)		 ::GameplayOption option4 =  ::GameplayOption_obj::__alloc( HX_CTX ,HX_("Practice Mode",e8,58,72,66),HX_("practice",bb,00,e7,a0),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  78)		this->optionsArray->push(option4);
HXLINE(  80)		 ::GameplayOption option5 =  ::GameplayOption_obj::__alloc( HX_CTX ,HX_("Botplay",5b,23,fb,2e),HX_("botplay",7b,fb,a9,61),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  81)		this->optionsArray->push(option5);
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameplayChangersSubstate_obj,getOptions,(void))

void GameplayChangersSubstate_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_96606cf9b666a443_141_update)
HXLINE( 142)		if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE( 144)			this->changeSelection(-1);
            		}
HXLINE( 146)		if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE( 148)			this->changeSelection(1);
            		}
HXLINE( 151)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 152)			this->close();
HXLINE( 153)			::ClientPrefs_obj::saveSettings();
HXLINE( 154)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 154)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
            		}
HXLINE( 157)		if ((this->nextAccept <= 0)) {
HXLINE( 159)			bool usesCheckbox = true;
HXLINE( 160)			if ((this->curOption->get_type() != HX_("bool",2a,84,1b,41))) {
HXLINE( 162)				usesCheckbox = false;
            			}
HXLINE( 165)			if (usesCheckbox) {
HXLINE( 167)				if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 169)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 169)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 170)					 ::GameplayOption _hx_tmp1 = this->curOption;
HXDLIN( 170)					 ::Dynamic _hx_tmp2;
HXDLIN( 170)					if (::hx::IsEq( this->curOption->getValue(),true )) {
HXLINE( 170)						_hx_tmp2 = false;
            					}
            					else {
HXLINE( 170)						_hx_tmp2 = true;
            					}
HXDLIN( 170)					_hx_tmp1->setValue(_hx_tmp2);
HXLINE( 171)					this->curOption->change();
HXLINE( 172)					this->reloadCheckboxes();
            				}
            			}
            			else {
HXLINE( 175)				bool _hx_tmp;
HXDLIN( 175)				if (!(::PlayerSettings_obj::player1->controls->_ui_left->check())) {
HXLINE( 175)					_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_right->check();
            				}
            				else {
HXLINE( 175)					_hx_tmp = true;
            				}
HXDLIN( 175)				if (_hx_tmp) {
HXLINE( 176)					bool pressed;
HXDLIN( 176)					if (!(::PlayerSettings_obj::player1->controls->_ui_leftP->check())) {
HXLINE( 176)						pressed = ::PlayerSettings_obj::player1->controls->_ui_rightP->check();
            					}
            					else {
HXLINE( 176)						pressed = true;
            					}
HXLINE( 177)					bool _hx_tmp;
HXDLIN( 177)					if (!((this->holdTime > ((Float)0.5)))) {
HXLINE( 177)						_hx_tmp = pressed;
            					}
            					else {
HXLINE( 177)						_hx_tmp = true;
            					}
HXDLIN( 177)					if (_hx_tmp) {
HXLINE( 178)						if (pressed) {
HXLINE( 179)							 ::Dynamic add = null();
HXLINE( 180)							if ((this->curOption->get_type() != HX_("string",d1,28,30,11))) {
HXLINE( 181)								if (::PlayerSettings_obj::player1->controls->_ui_left->check()) {
HXLINE( 181)									add = -(this->curOption->changeValue);
            								}
            								else {
HXLINE( 181)									add = this->curOption->changeValue;
            								}
            							}
HXLINE( 184)							::String _hx_switch_0 = this->curOption->get_type();
            							if (  (_hx_switch_0==HX_("float",9c,c5,96,02)) ||  (_hx_switch_0==HX_("int",ef,0c,50,00)) ||  (_hx_switch_0==HX_("percent",c5,aa,da,78)) ){
HXLINE( 187)								this->holdValue = ( (Float)((this->curOption->getValue() + add)) );
HXLINE( 188)								if (::hx::IsLess( this->holdValue,this->curOption->minValue )) {
HXLINE( 188)									this->holdValue = ( (Float)(this->curOption->minValue) );
            								}
            								else {
HXLINE( 189)									if (::hx::IsGreater( this->holdValue,this->curOption->maxValue )) {
HXLINE( 189)										this->holdValue = ( (Float)(this->curOption->maxValue) );
            									}
            								}
HXLINE( 191)								::String _hx_switch_1 = this->curOption->get_type();
            								if (  (_hx_switch_1==HX_("int",ef,0c,50,00)) ){
HXLINE( 194)									this->holdValue = ( (Float)(::Math_obj::round(this->holdValue)) );
HXLINE( 195)									this->curOption->setValue(this->holdValue);
HXLINE( 193)									goto _hx_goto_4;
            								}
            								if (  (_hx_switch_1==HX_("float",9c,c5,96,02)) ||  (_hx_switch_1==HX_("percent",c5,aa,da,78)) ){
HXLINE( 198)									this->holdValue = ::flixel::math::FlxMath_obj::roundDecimal(this->holdValue,this->curOption->decimals);
HXLINE( 199)									this->curOption->setValue(this->holdValue);
HXLINE( 197)									goto _hx_goto_4;
            								}
            								_hx_goto_4:;
HXLINE( 186)								goto _hx_goto_3;
            							}
            							if (  (_hx_switch_0==HX_("string",d1,28,30,11)) ){
HXLINE( 203)								int num = this->curOption->curOption;
HXLINE( 204)								if (::PlayerSettings_obj::player1->controls->_ui_leftP->check()) {
HXLINE( 204)									num = (num - 1);
            								}
            								else {
HXLINE( 205)									num = (num + 1);
            								}
HXLINE( 207)								if ((num < 0)) {
HXLINE( 208)									num = (this->curOption->options->length - 1);
            								}
            								else {
HXLINE( 209)									if ((num >= this->curOption->options->length)) {
HXLINE( 210)										num = 0;
            									}
            								}
HXLINE( 213)								this->curOption->curOption = num;
HXLINE( 214)								this->curOption->setValue(this->curOption->options->__get(num));
HXLINE( 202)								goto _hx_goto_3;
            							}
            							_hx_goto_3:;
HXLINE( 217)							this->updateTextFrom(this->curOption);
HXLINE( 218)							this->curOption->change();
HXLINE( 219)							 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 219)							_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            						}
            						else {
HXLINE( 220)							if ((this->curOption->get_type() != HX_("string",d1,28,30,11))) {
HXLINE( 221)								 ::GameplayChangersSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 221)								Float _hx_tmp1 = _hx_tmp->holdValue;
HXDLIN( 221)								Float _hx_tmp2 = (this->curOption->scrollSpeed * elapsed);
HXDLIN( 221)								int _hx_tmp3;
HXDLIN( 221)								if (::PlayerSettings_obj::player1->controls->_ui_left->check()) {
HXLINE( 221)									_hx_tmp3 = -1;
            								}
            								else {
HXLINE( 221)									_hx_tmp3 = 1;
            								}
HXDLIN( 221)								_hx_tmp->holdValue = (_hx_tmp1 + (_hx_tmp2 * ( (Float)(_hx_tmp3) )));
HXLINE( 222)								if (::hx::IsLess( this->holdValue,this->curOption->minValue )) {
HXLINE( 222)									this->holdValue = ( (Float)(this->curOption->minValue) );
            								}
            								else {
HXLINE( 223)									if (::hx::IsGreater( this->holdValue,this->curOption->maxValue )) {
HXLINE( 223)										this->holdValue = ( (Float)(this->curOption->maxValue) );
            									}
            								}
HXLINE( 225)								::String _hx_switch_2 = this->curOption->get_type();
            								if (  (_hx_switch_2==HX_("int",ef,0c,50,00)) ){
HXLINE( 228)									this->curOption->setValue(::Math_obj::round(this->holdValue));
HXDLIN( 228)									goto _hx_goto_5;
            								}
            								if (  (_hx_switch_2==HX_("float",9c,c5,96,02)) ||  (_hx_switch_2==HX_("percent",c5,aa,da,78)) ){
HXLINE( 231)									 ::GameplayOption _hx_tmp = this->curOption;
HXDLIN( 231)									_hx_tmp->setValue(::flixel::math::FlxMath_obj::roundDecimal(this->holdValue,this->curOption->decimals));
HXDLIN( 231)									goto _hx_goto_5;
            								}
            								_hx_goto_5:;
HXLINE( 233)								this->updateTextFrom(this->curOption);
HXLINE( 234)								this->curOption->change();
            							}
            						}
            					}
HXLINE( 238)					if ((this->curOption->get_type() != HX_("string",d1,28,30,11))) {
HXLINE( 239)						 ::GameplayChangersSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 239)						_hx_tmp->holdTime = (_hx_tmp->holdTime + elapsed);
            					}
            				}
            				else {
HXLINE( 241)					bool _hx_tmp;
HXDLIN( 241)					if (!(::PlayerSettings_obj::player1->controls->_ui_leftR->check())) {
HXLINE( 241)						_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_rightR->check();
            					}
            					else {
HXLINE( 241)						_hx_tmp = true;
            					}
HXDLIN( 241)					if (_hx_tmp) {
HXLINE( 242)						this->clearHold();
            					}
            				}
            			}
HXLINE( 246)			if (::PlayerSettings_obj::player1->controls->_reset->check()) {
HXLINE( 248)				{
HXLINE( 248)					int _g = 0;
HXDLIN( 248)					int _g1 = this->optionsArray->get_length();
HXDLIN( 248)					while((_g < _g1)){
HXLINE( 248)						_g = (_g + 1);
HXDLIN( 248)						int i = (_g - 1);
HXLINE( 250)						 ::GameplayOption leOption = ( ( ::GameplayOption)(this->optionsArray->__get(i)) );
HXLINE( 251)						leOption->setValue(leOption->defaultValue);
HXLINE( 252)						if ((leOption->get_type() != HX_("bool",2a,84,1b,41))) {
HXLINE( 254)							if ((leOption->get_type() == HX_("string",d1,28,30,11))) {
HXLINE( 256)								::Array< ::String > leOption1 = leOption->options;
HXDLIN( 256)								leOption->curOption = leOption1->indexOf(leOption->getValue(),null());
            							}
HXLINE( 258)							this->updateTextFrom(leOption);
            						}
HXLINE( 260)						leOption->change();
            					}
            				}
HXLINE( 262)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 262)				_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 263)				this->reloadCheckboxes();
            			}
            		}
HXLINE( 267)		if ((this->nextAccept > 0)) {
HXLINE( 268)			 ::GameplayChangersSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 268)			_hx_tmp->nextAccept = (_hx_tmp->nextAccept - 1);
            		}
HXLINE( 270)		this->super::update(elapsed);
            	}


void GameplayChangersSubstate_obj::updateTextFrom( ::GameplayOption option){
            	HX_STACKFRAME(&_hx_pos_96606cf9b666a443_273_updateTextFrom)
HXLINE( 274)		::String text = option->displayFormat;
HXLINE( 275)		 ::Dynamic val = option->getValue();
HXLINE( 276)		if ((option->get_type() == HX_("percent",c5,aa,da,78))) {
HXLINE( 276)			val = (val * 100);
            		}
HXLINE( 277)		 ::Dynamic def = option->defaultValue;
HXLINE( 278)		option->set_text(::StringTools_obj::replace(::StringTools_obj::replace(text,HX_("%v",b1,20,00,00),( (::String)(val) )),HX_("%d",9f,20,00,00),( (::String)(def) )));
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameplayChangersSubstate_obj,updateTextFrom,(void))

void GameplayChangersSubstate_obj::clearHold(){
            	HX_STACKFRAME(&_hx_pos_96606cf9b666a443_282_clearHold)
HXLINE( 283)		if ((this->holdTime > ((Float)0.5))) {
HXLINE( 284)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 284)			_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            		}
HXLINE( 286)		this->holdTime = ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameplayChangersSubstate_obj,clearHold,(void))

void GameplayChangersSubstate_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_96606cf9b666a443_290_changeSelection)
HXLINE( 291)		 ::GameplayChangersSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 291)		_hx_tmp->curSelected = (_hx_tmp->curSelected + change);
HXLINE( 292)		if ((this->curSelected < 0)) {
HXLINE( 293)			this->curSelected = (this->optionsArray->get_length() - 1);
            		}
HXLINE( 294)		if ((this->curSelected >= this->optionsArray->get_length())) {
HXLINE( 295)			this->curSelected = 0;
            		}
HXLINE( 297)		int bullShit = 0;
HXLINE( 299)		{
HXLINE( 299)			int _g = 0;
HXDLIN( 299)			::Array< ::Dynamic> _g1 = this->grpOptions->members;
HXDLIN( 299)			while((_g < _g1->length)){
HXLINE( 299)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 299)				_g = (_g + 1);
HXLINE( 300)				item->targetY = ( (Float)((bullShit - this->curSelected)) );
HXLINE( 301)				bullShit = (bullShit + 1);
HXLINE( 303)				item->set_alpha(((Float)0.6));
HXLINE( 304)				if ((item->targetY == 0)) {
HXLINE( 305)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 308)		{
HXLINE( 308)			 ::Dynamic filter = null();
HXDLIN( 308)			 ::flixel::group::FlxTypedGroupIterator text =  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->grpTexts->members,filter);
HXDLIN( 308)			while(text->hasNext()){
HXLINE( 308)				 ::AttachedText text1 = text->next().StaticCast<  ::AttachedText >();
HXLINE( 309)				text1->set_alpha(((Float)0.6));
HXLINE( 310)				if ((text1->ID == this->curSelected)) {
HXLINE( 311)					text1->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 314)		this->curOption = ( ( ::GameplayOption)(this->optionsArray->__get(this->curSelected)) );
HXLINE( 315)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 315)		_hx_tmp1->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameplayChangersSubstate_obj,changeSelection,(void))

void GameplayChangersSubstate_obj::reloadCheckboxes(){
            	HX_GC_STACKFRAME(&_hx_pos_96606cf9b666a443_319_reloadCheckboxes)
HXDLIN( 319)		 ::Dynamic filter = null();
HXDLIN( 319)		 ::flixel::group::FlxTypedGroupIterator checkbox =  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->checkboxGroup->members,filter);
HXDLIN( 319)		while(checkbox->hasNext()){
HXDLIN( 319)			 ::CheckboxThingie checkbox1 = checkbox->next().StaticCast<  ::CheckboxThingie >();
HXLINE( 320)			checkbox1->set_daValue(::hx::IsEq( this->optionsArray->__get(checkbox1->ID)->__Field(HX_("getValue",fb,8e,8f,91),::hx::paccDynamic)(),true ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameplayChangersSubstate_obj,reloadCheckboxes,(void))


::hx::ObjectPtr< GameplayChangersSubstate_obj > GameplayChangersSubstate_obj::__new() {
	::hx::ObjectPtr< GameplayChangersSubstate_obj > __this = new GameplayChangersSubstate_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GameplayChangersSubstate_obj > GameplayChangersSubstate_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GameplayChangersSubstate_obj *__this = (GameplayChangersSubstate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameplayChangersSubstate_obj), true, "GameplayChangersSubstate"));
	*(void **)__this = GameplayChangersSubstate_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GameplayChangersSubstate_obj::GameplayChangersSubstate_obj()
{
}

void GameplayChangersSubstate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameplayChangersSubstate);
	HX_MARK_MEMBER_NAME(curOption,"curOption");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(optionsArray,"optionsArray");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(checkboxGroup,"checkboxGroup");
	HX_MARK_MEMBER_NAME(grpTexts,"grpTexts");
	HX_MARK_MEMBER_NAME(nextAccept,"nextAccept");
	HX_MARK_MEMBER_NAME(holdTime,"holdTime");
	HX_MARK_MEMBER_NAME(holdValue,"holdValue");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameplayChangersSubstate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(curOption,"curOption");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(optionsArray,"optionsArray");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(checkboxGroup,"checkboxGroup");
	HX_VISIT_MEMBER_NAME(grpTexts,"grpTexts");
	HX_VISIT_MEMBER_NAME(nextAccept,"nextAccept");
	HX_VISIT_MEMBER_NAME(holdTime,"holdTime");
	HX_VISIT_MEMBER_NAME(holdValue,"holdValue");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GameplayChangersSubstate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpTexts") ) { return ::hx::Val( grpTexts ); }
		if (HX_FIELD_EQ(inName,"holdTime") ) { return ::hx::Val( holdTime ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"curOption") ) { return ::hx::Val( curOption ); }
		if (HX_FIELD_EQ(inName,"holdValue") ) { return ::hx::Val( holdValue ); }
		if (HX_FIELD_EQ(inName,"clearHold") ) { return ::hx::Val( clearHold_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		if (HX_FIELD_EQ(inName,"getOptions") ) { return ::hx::Val( getOptions_dyn() ); }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { return ::hx::Val( nextAccept ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"optionsArray") ) { return ::hx::Val( optionsArray ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkboxGroup") ) { return ::hx::Val( checkboxGroup ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateTextFrom") ) { return ::hx::Val( updateTextFrom_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"reloadCheckboxes") ) { return ::hx::Val( reloadCheckboxes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GameplayChangersSubstate_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"grpTexts") ) { grpTexts=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdTime") ) { holdTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"curOption") ) { curOption=inValue.Cast<  ::GameplayOption >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdValue") ) { holdValue=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { nextAccept=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"optionsArray") ) { optionsArray=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkboxGroup") ) { checkboxGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameplayChangersSubstate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curOption",15,ed,07,9c));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("optionsArray",5b,b5,f1,e8));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("checkboxGroup",fc,3d,bc,23));
	outFields->push(HX_("grpTexts",01,f1,99,f0));
	outFields->push(HX_("nextAccept",5b,44,38,c0));
	outFields->push(HX_("holdTime",ec,cc,bf,3e));
	outFields->push(HX_("holdValue",b2,41,96,ca));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GameplayChangersSubstate_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::GameplayOption */ ,(int)offsetof(GameplayChangersSubstate_obj,curOption),HX_("curOption",15,ed,07,9c)},
	{::hx::fsInt,(int)offsetof(GameplayChangersSubstate_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(GameplayChangersSubstate_obj,optionsArray),HX_("optionsArray",5b,b5,f1,e8)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(GameplayChangersSubstate_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(GameplayChangersSubstate_obj,checkboxGroup),HX_("checkboxGroup",fc,3d,bc,23)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(GameplayChangersSubstate_obj,grpTexts),HX_("grpTexts",01,f1,99,f0)},
	{::hx::fsInt,(int)offsetof(GameplayChangersSubstate_obj,nextAccept),HX_("nextAccept",5b,44,38,c0)},
	{::hx::fsFloat,(int)offsetof(GameplayChangersSubstate_obj,holdTime),HX_("holdTime",ec,cc,bf,3e)},
	{::hx::fsFloat,(int)offsetof(GameplayChangersSubstate_obj,holdValue),HX_("holdValue",b2,41,96,ca)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GameplayChangersSubstate_obj_sStaticStorageInfo = 0;
#endif

static ::String GameplayChangersSubstate_obj_sMemberFields[] = {
	HX_("curOption",15,ed,07,9c),
	HX_("curSelected",fb,eb,ab,32),
	HX_("optionsArray",5b,b5,f1,e8),
	HX_("grpOptions",f9,45,d8,00),
	HX_("checkboxGroup",fc,3d,bc,23),
	HX_("grpTexts",01,f1,99,f0),
	HX_("getOptions",68,b9,5f,2f),
	HX_("nextAccept",5b,44,38,c0),
	HX_("holdTime",ec,cc,bf,3e),
	HX_("holdValue",b2,41,96,ca),
	HX_("update",09,86,05,87),
	HX_("updateTextFrom",e0,eb,e7,7b),
	HX_("clearHold",6c,b1,d3,b8),
	HX_("changeSelection",bc,98,b5,48),
	HX_("reloadCheckboxes",2a,e2,2a,45),
	::String(null()) };

::hx::Class GameplayChangersSubstate_obj::__mClass;

void GameplayChangersSubstate_obj::__register()
{
	GameplayChangersSubstate_obj _hx_dummy;
	GameplayChangersSubstate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("GameplayChangersSubstate",08,ea,03,24);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GameplayChangersSubstate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GameplayChangersSubstate_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameplayChangersSubstate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameplayChangersSubstate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

