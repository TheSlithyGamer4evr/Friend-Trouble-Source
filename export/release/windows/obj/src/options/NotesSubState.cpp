#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_AlphaCharacter
#include <AlphaCharacter.h>
#endif
#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_ColorSwap
#include <ColorSwap.h>
#endif
#ifndef INCLUDED_ColorSwapShader
#include <ColorSwapShader.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
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
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_options_NotesSubState
#include <options/NotesSubState.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_13db6fe15635f7e3_30_new,"options.NotesSubState","new",0xf0ea0e94,"options.NotesSubState.new","options/NotesSubState.hx",30,0x2831b15d)
static const ::String _hx_array_data_0afa74a2_2[] = {
	HX_("purple0",74,7e,2d,e7),HX_("blue0",56,04,01,b5),HX_("green0",0d,dc,7f,15),HX_("red0",bf,4d,a7,4b),
};
HX_LOCAL_STACK_FRAME(_hx_pos_13db6fe15635f7e3_97_update,"options.NotesSubState","update",0xb5c92055,"options.NotesSubState.update","options/NotesSubState.hx",97,0x2831b15d)
HX_LOCAL_STACK_FRAME(_hx_pos_13db6fe15635f7e3_192_changeSelection,"options.NotesSubState","changeSelection",0x8bca54f0,"options.NotesSubState.changeSelection","options/NotesSubState.hx",192,0x2831b15d)
HX_LOCAL_STACK_FRAME(_hx_pos_13db6fe15635f7e3_223_changeType,"options.NotesSubState","changeType",0xeb5ed896,"options.NotesSubState.changeType","options/NotesSubState.hx",223,0x2831b15d)
HX_LOCAL_STACK_FRAME(_hx_pos_13db6fe15635f7e3_242_resetValue,"options.NotesSubState","resetValue",0xde61676e,"options.NotesSubState.resetValue","options/NotesSubState.hx",242,0x2831b15d)
HX_LOCAL_STACK_FRAME(_hx_pos_13db6fe15635f7e3_255_updateValue,"options.NotesSubState","updateValue",0xde5e7adc,"options.NotesSubState.updateValue","options/NotesSubState.hx",255,0x2831b15d)
HX_LOCAL_STACK_FRAME(_hx_pos_13db6fe15635f7e3_32_boot,"options.NotesSubState","boot",0xd3fbb37e,"options.NotesSubState.boot","options/NotesSubState.hx",32,0x2831b15d)
HX_LOCAL_STACK_FRAME(_hx_pos_13db6fe15635f7e3_33_boot,"options.NotesSubState","boot",0xd3fbb37e,"options.NotesSubState.boot","options/NotesSubState.hx",33,0x2831b15d)
namespace options{

void NotesSubState_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_13db6fe15635f7e3_30_new)
HXLINE(  96)		this->changingNote = false;
HXLINE(  44)		this->posX = 230;
HXLINE(  39)		this->nextAccept = 5;
HXLINE(  38)		this->holdTime = ((Float)0);
HXLINE(  37)		this->curValue = ((Float)0);
HXLINE(  36)		this->shaderArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  46)		super::__construct();
HXLINE(  48)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  48)		::String library = null();
HXDLIN(  48)		 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("menuDesat",26,91,04,72));
HXDLIN(  48)		 ::Dynamic bg1;
HXDLIN(  48)		if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  48)			bg1 = imageToReturn;
            		}
            		else {
HXLINE(  48)			bg1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuDesat",26,91,04,72)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            		}
HXDLIN(  48)		 ::flixel::FlxSprite bg2 = bg->loadGraphic(bg1,null(),null(),null(),null(),null());
HXLINE(  49)		bg2->set_color(-1412611);
HXLINE(  50)		bg2->setGraphicSize(::Std_obj::_hx_int((bg2->get_width() * ((Float)1.1))),null());
HXLINE(  51)		bg2->updateHitbox();
HXLINE(  52)		bg2->screenCenter(null());
HXLINE(  53)		bg2->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  54)		this->add(bg2);
HXLINE(  56)		this->blackBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(this->posX - 25),null(),null())->makeGraphic(870,200,-16777216,null(),null());
HXLINE(  57)		this->blackBG->set_alpha(((Float)0.4));
HXLINE(  58)		this->add(this->blackBG);
HXLINE(  60)		this->grpNotes =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  61)		this->add(this->grpNotes);
HXLINE(  62)		this->grpNumbers =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  63)		this->add(this->grpNumbers);
HXLINE(  65)		{
HXLINE(  65)			int _g = 0;
HXDLIN(  65)			int _g1 = ::ClientPrefs_obj::arrowHSV->length;
HXDLIN(  65)			while((_g < _g1)){
HXLINE(  65)				_g = (_g + 1);
HXDLIN(  65)				int i = (_g - 1);
HXLINE(  66)				Float yPos = ( (Float)(((165 * i) + 35)) );
HXLINE(  67)				{
HXLINE(  67)					{
HXLINE(  68)						 ::Alphabet optionText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),(yPos + 60),::Std_obj::string(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(0)),true,null(),null(),null());
HXLINE(  69)						optionText->set_x(( (Float)((this->posX + 250)) ));
HXLINE(  70)						this->grpNumbers->add(optionText).StaticCast<  ::Alphabet >();
            					}
HXLINE(  67)					{
HXLINE(  68)						 ::Alphabet optionText1 =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),(yPos + 60),::Std_obj::string(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(1)),true,null(),null(),null());
HXLINE(  69)						optionText1->set_x(( (Float)(((this->posX + 225) + 250)) ));
HXLINE(  70)						this->grpNumbers->add(optionText1).StaticCast<  ::Alphabet >();
            					}
HXLINE(  67)					{
HXLINE(  68)						 ::Alphabet optionText2 =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),(yPos + 60),::Std_obj::string(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(2)),true,null(),null(),null());
HXLINE(  69)						optionText2->set_x(( (Float)(((this->posX + 450) + 250)) ));
HXLINE(  70)						this->grpNumbers->add(optionText2).StaticCast<  ::Alphabet >();
            					}
            				}
HXLINE(  73)				 ::flixel::FlxSprite note =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,this->posX,yPos,null());
HXLINE(  74)				::String library = null();
HXDLIN(  74)				 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("NOTE_assets",70,3c,09,f7));
HXDLIN(  74)				bool xmlExists = false;
HXDLIN(  74)				if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  74)					xmlExists = true;
            				}
HXDLIN(  74)				 ::Dynamic _hx_tmp;
HXDLIN(  74)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  74)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE(  74)					 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("NOTE_assets",70,3c,09,f7));
HXDLIN(  74)					if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  74)						_hx_tmp = imageToReturn;
            					}
            					else {
HXLINE(  74)						_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            					}
            				}
HXDLIN(  74)				::String _hx_tmp1;
HXDLIN(  74)				if (xmlExists) {
HXLINE(  74)					_hx_tmp1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".xml",69,3e,c3,1e))));
            				}
            				else {
HXLINE(  74)					_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            				}
HXDLIN(  74)				note->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  75)				::Array< ::String > animations = ::Array_obj< ::String >::fromData( _hx_array_data_0afa74a2_2,4);
HXLINE(  76)				note->animation->addByPrefix(HX_("idle",14,a7,b3,45),animations->__get(i),null(),null(),null(),null());
HXLINE(  77)				note->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE(  78)				note->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  79)				this->grpNotes->add(note).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  81)				 ::ColorSwap newShader =  ::ColorSwap_obj::__alloc( HX_CTX );
HXLINE(  82)				note->shader = newShader->shader;
HXLINE(  83)				newShader->set_hue((( (Float)(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(0)) ) / ( (Float)(360) )));
HXLINE(  84)				newShader->set_saturation((( (Float)(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(1)) ) / ( (Float)(100) )));
HXLINE(  85)				newShader->set_brightness((( (Float)(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(2)) ) / ( (Float)(100) )));
HXLINE(  86)				this->shaderArray->push(newShader);
            			}
            		}
HXLINE(  89)		this->hsbText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_("Hue    Saturation  Brightness",7b,47,68,9c),false,false,0,((Float)0.65));
HXLINE(  90)		this->hsbText->set_x(( (Float)((this->posX + 240)) ));
HXLINE(  91)		this->add(this->hsbText);
HXLINE(  93)		this->changeSelection(null());
            	}

Dynamic NotesSubState_obj::__CreateEmpty() { return new NotesSubState_obj; }

void *NotesSubState_obj::_hx_vtable = 0;

Dynamic NotesSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NotesSubState_obj > _hx_result = new NotesSubState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NotesSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x1154fc14) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1154fc14;
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

void NotesSubState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_13db6fe15635f7e3_97_update)
HXLINE(  98)		if (this->changingNote) {
HXLINE(  99)			if ((this->holdTime < ((Float)0.5))) {
HXLINE( 100)				if (::PlayerSettings_obj::player1->controls->_ui_leftP->check()) {
HXLINE( 101)					this->updateValue(-1);
HXLINE( 102)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 102)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            				}
            				else {
HXLINE( 103)					if (::PlayerSettings_obj::player1->controls->_ui_rightP->check()) {
HXLINE( 104)						this->updateValue(1);
HXLINE( 105)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 105)						_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            					}
            					else {
HXLINE( 106)						if (::PlayerSettings_obj::player1->controls->_reset->check()) {
HXLINE( 107)							this->resetValue(::options::NotesSubState_obj::curSelected,::options::NotesSubState_obj::typeSelected);
HXLINE( 108)							 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 108)							_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            						}
            					}
            				}
HXLINE( 110)				bool _hx_tmp;
HXDLIN( 110)				if (!(::PlayerSettings_obj::player1->controls->_ui_leftR->check())) {
HXLINE( 110)					_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_rightR->check();
            				}
            				else {
HXLINE( 110)					_hx_tmp = true;
            				}
HXDLIN( 110)				if (_hx_tmp) {
HXLINE( 111)					this->holdTime = ( (Float)(0) );
            				}
            				else {
HXLINE( 112)					bool _hx_tmp;
HXDLIN( 112)					if (!(::PlayerSettings_obj::player1->controls->_ui_left->check())) {
HXLINE( 112)						_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_right->check();
            					}
            					else {
HXLINE( 112)						_hx_tmp = true;
            					}
HXDLIN( 112)					if (_hx_tmp) {
HXLINE( 113)						 ::options::NotesSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 113)						_hx_tmp->holdTime = (_hx_tmp->holdTime + elapsed);
            					}
            				}
            			}
            			else {
HXLINE( 116)				Float add = ( (Float)(90) );
HXLINE( 117)				switch((int)(::options::NotesSubState_obj::typeSelected)){
            					case (int)1: case (int)2: {
HXLINE( 118)						add = ( (Float)(50) );
            					}
            					break;
            				}
HXLINE( 120)				if (::PlayerSettings_obj::player1->controls->_ui_left->check()) {
HXLINE( 121)					this->updateValue((elapsed * -(add)));
            				}
            				else {
HXLINE( 122)					if (::PlayerSettings_obj::player1->controls->_ui_right->check()) {
HXLINE( 123)						this->updateValue((elapsed * add));
            					}
            				}
HXLINE( 125)				bool _hx_tmp;
HXDLIN( 125)				if (!(::PlayerSettings_obj::player1->controls->_ui_leftR->check())) {
HXLINE( 125)					_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_rightR->check();
            				}
            				else {
HXLINE( 125)					_hx_tmp = true;
            				}
HXDLIN( 125)				if (_hx_tmp) {
HXLINE( 126)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 126)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 127)					this->holdTime = ( (Float)(0) );
            				}
            			}
            		}
            		else {
HXLINE( 131)			if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE( 132)				this->changeSelection(-1);
HXLINE( 133)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 133)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 135)			if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE( 136)				this->changeSelection(1);
HXLINE( 137)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 137)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 139)			if (::PlayerSettings_obj::player1->controls->_ui_leftP->check()) {
HXLINE( 140)				this->changeType(-1);
HXLINE( 141)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 141)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 143)			if (::PlayerSettings_obj::player1->controls->_ui_rightP->check()) {
HXLINE( 144)				this->changeType(1);
HXLINE( 145)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 145)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 147)			if (::PlayerSettings_obj::player1->controls->_reset->check()) {
HXLINE( 148)				{
HXLINE( 149)					this->resetValue(::options::NotesSubState_obj::curSelected,0);
HXDLIN( 149)					this->resetValue(::options::NotesSubState_obj::curSelected,1);
HXDLIN( 149)					this->resetValue(::options::NotesSubState_obj::curSelected,2);
            				}
HXLINE( 151)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 151)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 153)			bool _hx_tmp;
HXDLIN( 153)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 153)				_hx_tmp = (this->nextAccept <= 0);
            			}
            			else {
HXLINE( 153)				_hx_tmp = false;
            			}
HXDLIN( 153)			if (_hx_tmp) {
HXLINE( 154)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 154)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 155)				this->changingNote = true;
HXLINE( 156)				this->holdTime = ( (Float)(0) );
HXLINE( 157)				{
HXLINE( 157)					int _g = 0;
HXDLIN( 157)					int _g1 = this->grpNumbers->length;
HXDLIN( 157)					while((_g < _g1)){
HXLINE( 157)						_g = (_g + 1);
HXDLIN( 157)						int i = (_g - 1);
HXLINE( 158)						 ::Alphabet item = Dynamic( this->grpNumbers->members->__get(i)).StaticCast<  ::Alphabet >();
HXLINE( 159)						item->set_alpha(( (Float)(0) ));
HXLINE( 160)						if ((((::options::NotesSubState_obj::curSelected * 3) + ::options::NotesSubState_obj::typeSelected) == i)) {
HXLINE( 161)							item->set_alpha(( (Float)(1) ));
            						}
            					}
            				}
HXLINE( 164)				{
HXLINE( 164)					int _g2 = 0;
HXDLIN( 164)					int _g3 = this->grpNotes->length;
HXDLIN( 164)					while((_g2 < _g3)){
HXLINE( 164)						_g2 = (_g2 + 1);
HXDLIN( 164)						int i = (_g2 - 1);
HXLINE( 165)						 ::flixel::FlxSprite item = Dynamic( this->grpNotes->members->__get(i)).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 166)						item->set_alpha(( (Float)(0) ));
HXLINE( 167)						if ((::options::NotesSubState_obj::curSelected == i)) {
HXLINE( 168)							item->set_alpha(( (Float)(1) ));
            						}
            					}
            				}
HXLINE( 171)				this->super::update(elapsed);
HXLINE( 172)				return;
            			}
            		}
HXLINE( 176)		bool _hx_tmp;
HXDLIN( 176)		if (!(::PlayerSettings_obj::player1->controls->_back->check())) {
HXLINE( 176)			if (this->changingNote) {
HXLINE( 176)				_hx_tmp = ::PlayerSettings_obj::player1->controls->_accept->check();
            			}
            			else {
HXLINE( 176)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 176)			_hx_tmp = true;
            		}
HXDLIN( 176)		if (_hx_tmp) {
HXLINE( 177)			if (!(this->changingNote)) {
HXLINE( 178)				this->close();
            			}
            			else {
HXLINE( 180)				this->changeSelection(null());
            			}
HXLINE( 182)			this->changingNote = false;
HXLINE( 183)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 183)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
            		}
HXLINE( 186)		if ((this->nextAccept > 0)) {
HXLINE( 187)			 ::options::NotesSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 187)			_hx_tmp->nextAccept = (_hx_tmp->nextAccept - 1);
            		}
HXLINE( 189)		this->super::update(elapsed);
            	}


void NotesSubState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_13db6fe15635f7e3_192_changeSelection)
HXLINE( 193)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::options::NotesSubState >();
HXDLIN( 193)		::options::NotesSubState_obj::curSelected = (::options::NotesSubState_obj::curSelected + change);
HXLINE( 194)		if ((::options::NotesSubState_obj::curSelected < 0)) {
HXLINE( 195)			::options::NotesSubState_obj::curSelected = (::ClientPrefs_obj::arrowHSV->length - 1);
            		}
HXLINE( 196)		if ((::options::NotesSubState_obj::curSelected >= ::ClientPrefs_obj::arrowHSV->length)) {
HXLINE( 197)			::options::NotesSubState_obj::curSelected = 0;
            		}
HXLINE( 199)		this->curValue = ( (Float)(::ClientPrefs_obj::arrowHSV->__get(::options::NotesSubState_obj::curSelected).StaticCast< ::Array< int > >()->__get(::options::NotesSubState_obj::typeSelected)) );
HXLINE( 200)		this->updateValue(null());
HXLINE( 202)		{
HXLINE( 202)			int _g = 0;
HXDLIN( 202)			int _g1 = this->grpNumbers->length;
HXDLIN( 202)			while((_g < _g1)){
HXLINE( 202)				_g = (_g + 1);
HXDLIN( 202)				int i = (_g - 1);
HXLINE( 203)				 ::Alphabet item = Dynamic( this->grpNumbers->members->__get(i)).StaticCast<  ::Alphabet >();
HXLINE( 204)				item->set_alpha(((Float)0.6));
HXLINE( 205)				if ((((::options::NotesSubState_obj::curSelected * 3) + ::options::NotesSubState_obj::typeSelected) == i)) {
HXLINE( 206)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 209)		{
HXLINE( 209)			int _g2 = 0;
HXDLIN( 209)			int _g3 = this->grpNotes->length;
HXDLIN( 209)			while((_g2 < _g3)){
HXLINE( 209)				_g2 = (_g2 + 1);
HXDLIN( 209)				int i = (_g2 - 1);
HXLINE( 210)				 ::flixel::FlxSprite item = Dynamic( this->grpNotes->members->__get(i)).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 211)				item->set_alpha(((Float)0.6));
HXLINE( 212)				item->scale->set(((Float)0.75),((Float)0.75));
HXLINE( 213)				if ((::options::NotesSubState_obj::curSelected == i)) {
HXLINE( 214)					item->set_alpha(( (Float)(1) ));
HXLINE( 215)					item->scale->set(1,1);
HXLINE( 216)					this->hsbText->set_y((item->y - ( (Float)(70) )));
HXLINE( 217)					this->blackBG->set_y((item->y - ( (Float)(20) )));
            				}
            			}
            		}
HXLINE( 220)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 220)		_hx_tmp1->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(NotesSubState_obj,changeSelection,(void))

void NotesSubState_obj::changeType(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_13db6fe15635f7e3_223_changeType)
HXLINE( 224)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::options::NotesSubState >();
HXDLIN( 224)		::options::NotesSubState_obj::typeSelected = (::options::NotesSubState_obj::typeSelected + change);
HXLINE( 225)		if ((::options::NotesSubState_obj::typeSelected < 0)) {
HXLINE( 226)			::options::NotesSubState_obj::typeSelected = 2;
            		}
HXLINE( 227)		if ((::options::NotesSubState_obj::typeSelected > 2)) {
HXLINE( 228)			::options::NotesSubState_obj::typeSelected = 0;
            		}
HXLINE( 230)		this->curValue = ( (Float)(::ClientPrefs_obj::arrowHSV->__get(::options::NotesSubState_obj::curSelected).StaticCast< ::Array< int > >()->__get(::options::NotesSubState_obj::typeSelected)) );
HXLINE( 231)		this->updateValue(null());
HXLINE( 233)		{
HXLINE( 233)			int _g = 0;
HXDLIN( 233)			int _g1 = this->grpNumbers->length;
HXDLIN( 233)			while((_g < _g1)){
HXLINE( 233)				_g = (_g + 1);
HXDLIN( 233)				int i = (_g - 1);
HXLINE( 234)				 ::Alphabet item = Dynamic( this->grpNumbers->members->__get(i)).StaticCast<  ::Alphabet >();
HXLINE( 235)				item->set_alpha(((Float)0.6));
HXLINE( 236)				if ((((::options::NotesSubState_obj::curSelected * 3) + ::options::NotesSubState_obj::typeSelected) == i)) {
HXLINE( 237)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(NotesSubState_obj,changeType,(void))

void NotesSubState_obj::resetValue(int selected,int type){
            	HX_STACKFRAME(&_hx_pos_13db6fe15635f7e3_242_resetValue)
HXLINE( 243)		this->curValue = ( (Float)(0) );
HXLINE( 244)		::ClientPrefs_obj::arrowHSV->__get(selected).StaticCast< ::Array< int > >()[type] = 0;
HXLINE( 245)		switch((int)(type)){
            			case (int)0: {
HXLINE( 246)				this->shaderArray->__get(selected).StaticCast<  ::ColorSwap >()->set_hue(( (Float)(0) ));
            			}
            			break;
            			case (int)1: {
HXLINE( 247)				this->shaderArray->__get(selected).StaticCast<  ::ColorSwap >()->set_saturation(( (Float)(0) ));
            			}
            			break;
            			case (int)2: {
HXLINE( 248)				this->shaderArray->__get(selected).StaticCast<  ::ColorSwap >()->set_brightness(( (Float)(0) ));
            			}
            			break;
            		}
HXLINE( 251)		 ::Alphabet item = Dynamic( this->grpNumbers->members->__get(((selected * 3) + type))).StaticCast<  ::Alphabet >();
HXLINE( 252)		item->changeText(HX_("0",30,00,00,00),null());
HXLINE( 253)		item->offset->set_x((( (Float)((40 * (item->lettersArray->length - 1))) ) / ( (Float)(2) )));
            	}


HX_DEFINE_DYNAMIC_FUNC2(NotesSubState_obj,resetValue,(void))

void NotesSubState_obj::updateValue(::hx::Null< Float >  __o_change){
            		Float change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_13db6fe15635f7e3_255_updateValue)
HXLINE( 256)		 ::options::NotesSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 256)		_hx_tmp->curValue = (_hx_tmp->curValue + change);
HXLINE( 257)		int roundedValue = ::Math_obj::round(this->curValue);
HXLINE( 258)		Float max = ( (Float)(180) );
HXLINE( 259)		switch((int)(::options::NotesSubState_obj::typeSelected)){
            			case (int)1: case (int)2: {
HXLINE( 260)				max = ( (Float)(100) );
            			}
            			break;
            		}
HXLINE( 263)		if ((roundedValue < -(max))) {
HXLINE( 264)			this->curValue = -(max);
            		}
            		else {
HXLINE( 265)			if ((roundedValue > max)) {
HXLINE( 266)				this->curValue = max;
            			}
            		}
HXLINE( 268)		roundedValue = ::Math_obj::round(this->curValue);
HXLINE( 269)		::ClientPrefs_obj::arrowHSV->__get(::options::NotesSubState_obj::curSelected).StaticCast< ::Array< int > >()[::options::NotesSubState_obj::typeSelected] = roundedValue;
HXLINE( 271)		switch((int)(::options::NotesSubState_obj::typeSelected)){
            			case (int)0: {
HXLINE( 272)				this->shaderArray->__get(::options::NotesSubState_obj::curSelected).StaticCast<  ::ColorSwap >()->set_hue((( (Float)(roundedValue) ) / ( (Float)(360) )));
            			}
            			break;
            			case (int)1: {
HXLINE( 273)				this->shaderArray->__get(::options::NotesSubState_obj::curSelected).StaticCast<  ::ColorSwap >()->set_saturation((( (Float)(roundedValue) ) / ( (Float)(100) )));
            			}
            			break;
            			case (int)2: {
HXLINE( 274)				this->shaderArray->__get(::options::NotesSubState_obj::curSelected).StaticCast<  ::ColorSwap >()->set_brightness((( (Float)(roundedValue) ) / ( (Float)(100) )));
            			}
            			break;
            		}
HXLINE( 277)		 ::Alphabet item = Dynamic( this->grpNumbers->members->__get(((::options::NotesSubState_obj::curSelected * 3) + ::options::NotesSubState_obj::typeSelected))).StaticCast<  ::Alphabet >();
HXLINE( 278)		item->changeText(::Std_obj::string(roundedValue),null());
HXLINE( 279)		item->offset->set_x((( (Float)((40 * (item->lettersArray->length - 1))) ) / ( (Float)(2) )));
HXLINE( 280)		if ((roundedValue < 0)) {
HXLINE( 280)			 ::flixel::math::FlxPoint fh = item->offset;
HXDLIN( 280)			fh->set_x((fh->x + 10));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(NotesSubState_obj,updateValue,(void))

int NotesSubState_obj::curSelected;

int NotesSubState_obj::typeSelected;


::hx::ObjectPtr< NotesSubState_obj > NotesSubState_obj::__new() {
	::hx::ObjectPtr< NotesSubState_obj > __this = new NotesSubState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< NotesSubState_obj > NotesSubState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	NotesSubState_obj *__this = (NotesSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NotesSubState_obj), true, "options.NotesSubState"));
	*(void **)__this = NotesSubState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

NotesSubState_obj::NotesSubState_obj()
{
}

void NotesSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NotesSubState);
	HX_MARK_MEMBER_NAME(grpNumbers,"grpNumbers");
	HX_MARK_MEMBER_NAME(grpNotes,"grpNotes");
	HX_MARK_MEMBER_NAME(shaderArray,"shaderArray");
	HX_MARK_MEMBER_NAME(curValue,"curValue");
	HX_MARK_MEMBER_NAME(holdTime,"holdTime");
	HX_MARK_MEMBER_NAME(nextAccept,"nextAccept");
	HX_MARK_MEMBER_NAME(blackBG,"blackBG");
	HX_MARK_MEMBER_NAME(hsbText,"hsbText");
	HX_MARK_MEMBER_NAME(posX,"posX");
	HX_MARK_MEMBER_NAME(changingNote,"changingNote");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NotesSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(grpNumbers,"grpNumbers");
	HX_VISIT_MEMBER_NAME(grpNotes,"grpNotes");
	HX_VISIT_MEMBER_NAME(shaderArray,"shaderArray");
	HX_VISIT_MEMBER_NAME(curValue,"curValue");
	HX_VISIT_MEMBER_NAME(holdTime,"holdTime");
	HX_VISIT_MEMBER_NAME(nextAccept,"nextAccept");
	HX_VISIT_MEMBER_NAME(blackBG,"blackBG");
	HX_VISIT_MEMBER_NAME(hsbText,"hsbText");
	HX_VISIT_MEMBER_NAME(posX,"posX");
	HX_VISIT_MEMBER_NAME(changingNote,"changingNote");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val NotesSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"posX") ) { return ::hx::Val( posX ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"blackBG") ) { return ::hx::Val( blackBG ); }
		if (HX_FIELD_EQ(inName,"hsbText") ) { return ::hx::Val( hsbText ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpNotes") ) { return ::hx::Val( grpNotes ); }
		if (HX_FIELD_EQ(inName,"curValue") ) { return ::hx::Val( curValue ); }
		if (HX_FIELD_EQ(inName,"holdTime") ) { return ::hx::Val( holdTime ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpNumbers") ) { return ::hx::Val( grpNumbers ); }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { return ::hx::Val( nextAccept ); }
		if (HX_FIELD_EQ(inName,"changeType") ) { return ::hx::Val( changeType_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetValue") ) { return ::hx::Val( resetValue_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shaderArray") ) { return ::hx::Val( shaderArray ); }
		if (HX_FIELD_EQ(inName,"updateValue") ) { return ::hx::Val( updateValue_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"changingNote") ) { return ::hx::Val( changingNote ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool NotesSubState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"typeSelected") ) { outValue = ( typeSelected ); return true; }
	}
	return false;
}

::hx::Val NotesSubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"posX") ) { posX=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"blackBG") ) { blackBG=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hsbText") ) { hsbText=inValue.Cast<  ::Alphabet >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpNotes") ) { grpNotes=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curValue") ) { curValue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdTime") ) { holdTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpNumbers") ) { grpNumbers=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { nextAccept=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shaderArray") ) { shaderArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"changingNote") ) { changingNote=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NotesSubState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"typeSelected") ) { typeSelected=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void NotesSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("grpNumbers",25,7c,95,ca));
	outFields->push(HX_("grpNotes",1c,82,cb,82));
	outFields->push(HX_("shaderArray",34,18,bc,fc));
	outFields->push(HX_("curValue",d1,79,66,79));
	outFields->push(HX_("holdTime",ec,cc,bf,3e));
	outFields->push(HX_("nextAccept",5b,44,38,c0));
	outFields->push(HX_("blackBG",44,3d,62,35));
	outFields->push(HX_("hsbText",44,8f,da,84));
	outFields->push(HX_("posX",44,84,5c,4a));
	outFields->push(HX_("changingNote",3f,d5,59,d6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NotesSubState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(NotesSubState_obj,grpNumbers),HX_("grpNumbers",25,7c,95,ca)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(NotesSubState_obj,grpNotes),HX_("grpNotes",1c,82,cb,82)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(NotesSubState_obj,shaderArray),HX_("shaderArray",34,18,bc,fc)},
	{::hx::fsFloat,(int)offsetof(NotesSubState_obj,curValue),HX_("curValue",d1,79,66,79)},
	{::hx::fsFloat,(int)offsetof(NotesSubState_obj,holdTime),HX_("holdTime",ec,cc,bf,3e)},
	{::hx::fsInt,(int)offsetof(NotesSubState_obj,nextAccept),HX_("nextAccept",5b,44,38,c0)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(NotesSubState_obj,blackBG),HX_("blackBG",44,3d,62,35)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(NotesSubState_obj,hsbText),HX_("hsbText",44,8f,da,84)},
	{::hx::fsInt,(int)offsetof(NotesSubState_obj,posX),HX_("posX",44,84,5c,4a)},
	{::hx::fsBool,(int)offsetof(NotesSubState_obj,changingNote),HX_("changingNote",3f,d5,59,d6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo NotesSubState_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &NotesSubState_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsInt,(void *) &NotesSubState_obj::typeSelected,HX_("typeSelected",35,23,d0,98)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String NotesSubState_obj_sMemberFields[] = {
	HX_("grpNumbers",25,7c,95,ca),
	HX_("grpNotes",1c,82,cb,82),
	HX_("shaderArray",34,18,bc,fc),
	HX_("curValue",d1,79,66,79),
	HX_("holdTime",ec,cc,bf,3e),
	HX_("nextAccept",5b,44,38,c0),
	HX_("blackBG",44,3d,62,35),
	HX_("hsbText",44,8f,da,84),
	HX_("posX",44,84,5c,4a),
	HX_("changingNote",3f,d5,59,d6),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	HX_("changeType",4a,28,52,27),
	HX_("resetValue",22,b7,54,1a),
	HX_("updateValue",a8,e8,50,17),
	::String(null()) };

static void NotesSubState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NotesSubState_obj::curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(NotesSubState_obj::typeSelected,"typeSelected");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NotesSubState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NotesSubState_obj::curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(NotesSubState_obj::typeSelected,"typeSelected");
};

#endif

::hx::Class NotesSubState_obj::__mClass;

static ::String NotesSubState_obj_sStaticFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("typeSelected",35,23,d0,98),
	::String(null())
};

void NotesSubState_obj::__register()
{
	NotesSubState_obj _hx_dummy;
	NotesSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.NotesSubState",a2,74,fa,0a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NotesSubState_obj::__GetStatic;
	__mClass->mSetStaticField = &NotesSubState_obj::__SetStatic;
	__mClass->mMarkFunc = NotesSubState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NotesSubState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NotesSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NotesSubState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NotesSubState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NotesSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NotesSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NotesSubState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_13db6fe15635f7e3_32_boot)
HXDLIN(  32)		curSelected = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_13db6fe15635f7e3_33_boot)
HXDLIN(  33)		typeSelected = 0;
            	}
}

} // end namespace options
