#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_DialogueBoxPsych
#include <DialogueBoxPsych.h>
#endif
#ifndef INCLUDED_DialogueCharacter
#include <DialogueCharacter.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
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
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
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
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_128129519e640548_162_new,"DialogueBoxPsych","new",0x1a49b57a,"DialogueBoxPsych.new","DialogueBoxPsych.hx",162,0xf6ef1736)
static const ::String _hx_array_data_c9b73088_1[] = {
	HX_("normal",27,72,69,30),HX_("angry",21,49,e2,22),
};
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_228_spawnCharacters,"DialogueBoxPsych","spawnCharacters",0xbe2056df,"DialogueBoxPsych.spawnCharacters","DialogueBoxPsych.hx",228,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_282_update,"DialogueBoxPsych","update",0xc33c4d2f,"DialogueBoxPsych.update","DialogueBoxPsych.hx",282,0xf6ef1736)
static const ::String _hx_array_data_c9b73088_17[] = {
	HX_("",00,00,00,00),HX_("center-",b8,f4,e5,19),
};
static const ::String _hx_array_data_c9b73088_18[] = {
	HX_("",00,00,00,00),HX_("center-",b8,f4,e5,19),
};
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_445_startNextDialog,"DialogueBoxPsych","startNextDialog",0x95e56137,"DialogueBoxPsych.startNextDialog","DialogueBoxPsych.hx",445,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_514_parseDialogue,"DialogueBoxPsych","parseDialogue",0xf7806e05,"DialogueBoxPsych.parseDialogue","DialogueBoxPsych.hx",514,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_524_updateBoxOffsets,"DialogueBoxPsych","updateBoxOffsets",0xb38f5cc4,"DialogueBoxPsych.updateBoxOffsets","DialogueBoxPsych.hx",524,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_224_boot,"DialogueBoxPsych","boot",0xde4e15d8,"DialogueBoxPsych.boot","DialogueBoxPsych.hx",224,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_225_boot,"DialogueBoxPsych","boot",0xde4e15d8,"DialogueBoxPsych.boot","DialogueBoxPsych.hx",225,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_226_boot,"DialogueBoxPsych","boot",0xde4e15d8,"DialogueBoxPsych.boot","DialogueBoxPsych.hx",226,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_276_boot,"DialogueBoxPsych","boot",0xde4e15d8,"DialogueBoxPsych.boot","DialogueBoxPsych.hx",276,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_277_boot,"DialogueBoxPsych","boot",0xde4e15d8,"DialogueBoxPsych.boot","DialogueBoxPsych.hx",277,0xf6ef1736)

void DialogueBoxPsych_obj::__construct( ::Dynamic dialogueList,::String song){
            	HX_GC_STACKFRAME(&_hx_pos_128129519e640548_162_new)
HXLINE( 443)		this->lastBoxType = HX_("",00,00,00,00);
HXLINE( 442)		this->lastCharacter = -1;
HXLINE( 280)		this->ignoreThisFrame = true;
HXLINE( 279)		this->daText = null();
HXLINE( 278)		this->scrollSpeed = 4500;
HXLINE( 222)		this->dialogueEnded = false;
HXLINE( 221)		this->dialogueStarted = false;
HXLINE( 179)		this->textBoxTypes = ::Array_obj< ::String >::fromData( _hx_array_data_c9b73088_1,2);
HXLINE( 177)		this->offsetPos = ((Float)-600);
HXLINE( 176)		this->currentText = 0;
HXLINE( 174)		this->arrayCharacters = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 172)		this->textToType = HX_("",00,00,00,00);
HXLINE( 170)		this->bgFade = null();
HXLINE( 169)		this->skipDialogueThing = null();
HXLINE( 168)		this->nextDialogueThing = null();
HXLINE( 165)		this->dialogueList = null();
HXLINE( 184)		super::__construct(null(),null(),null());
HXLINE( 186)		bool _hx_tmp;
HXDLIN( 186)		if (::hx::IsNotNull( song )) {
HXLINE( 186)			_hx_tmp = (song != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 186)			_hx_tmp = false;
            		}
HXDLIN( 186)		if (_hx_tmp) {
HXLINE( 187)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 187)			::String library = null();
HXDLIN( 187)			::String file = ::Paths_obj::modFolders((((HX_("music/",ea,bf,1b,3f) + song) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
HXDLIN( 187)			 ::Dynamic _hx_tmp1;
HXDLIN( 187)			if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 187)				if (!(::Paths_obj::customSoundsLoaded->exists(file))) {
HXLINE( 187)					::Dynamic this1 = ::Paths_obj::customSoundsLoaded;
HXDLIN( 187)					( ( ::haxe::ds::StringMap)(this1) )->set(file,::openfl::media::Sound_obj::fromFile(file));
            				}
HXDLIN( 187)				_hx_tmp1 = ::Paths_obj::customSoundsLoaded->get(file);
            			}
            			else {
HXLINE( 187)				_hx_tmp1 = ::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + song) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library);
            			}
HXDLIN( 187)			_hx_tmp->playMusic(_hx_tmp1,0,null(),null());
HXLINE( 188)			{
HXLINE( 188)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 188)				 ::Dynamic onComplete = null();
HXDLIN( 188)				if (::hx::IsNull( _this->_channel )) {
HXLINE( 188)					_this->play(null(),null(),null());
            				}
HXDLIN( 188)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 188)					_this->fadeTween->cancel();
            				}
HXDLIN( 188)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),( (Float)(1) ),2, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
            		}
HXLINE( 191)		 ::flixel::FlxSprite _hx_tmp1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-500,-500,null());
HXDLIN( 191)		this->bgFade = _hx_tmp1->makeGraphic((::flixel::FlxG_obj::width * 2),(::flixel::FlxG_obj::height * 2),-1,null(),null());
HXLINE( 192)		this->bgFade->scrollFactor->set(null(),null());
HXLINE( 193)		this->bgFade->set_visible(true);
HXLINE( 194)		this->bgFade->set_alpha(( (Float)(0) ));
HXLINE( 195)		this->add(this->bgFade);
HXLINE( 197)		this->dialogueList = dialogueList;
HXLINE( 198)		this->spawnCharacters();
HXLINE( 200)		this->box =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,70,370,null());
HXLINE( 201)		 ::flixel::FlxSprite _hx_tmp2 = this->box;
HXDLIN( 201)		::String library = null();
HXDLIN( 201)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("speech_bubble",49,db,97,da));
HXDLIN( 201)		bool xmlExists = false;
HXDLIN( 201)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("speech_bubble",49,db,97,da)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 201)			xmlExists = true;
            		}
HXDLIN( 201)		 ::Dynamic _hx_tmp3;
HXDLIN( 201)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 201)			_hx_tmp3 = imageLoaded;
            		}
            		else {
HXLINE( 201)			 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("speech_bubble",49,db,97,da));
HXDLIN( 201)			if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 201)				_hx_tmp3 = imageToReturn;
            			}
            			else {
HXLINE( 201)				_hx_tmp3 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("speech_bubble",49,db,97,da)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            			}
            		}
HXDLIN( 201)		::String _hx_tmp4;
HXDLIN( 201)		if (xmlExists) {
HXLINE( 201)			_hx_tmp4 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("speech_bubble",49,db,97,da)) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE( 201)			_hx_tmp4 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("speech_bubble",49,db,97,da)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            		}
HXDLIN( 201)		_hx_tmp2->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp3,_hx_tmp4));
HXLINE( 202)		this->box->scrollFactor->set(null(),null());
HXLINE( 203)		this->box->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 204)		this->box->animation->addByPrefix(HX_("normal",27,72,69,30),HX_("speech bubble normal",bd,d5,bc,a7),24,null(),null(),null());
HXLINE( 205)		this->box->animation->addByPrefix(HX_("normalOpen",91,41,38,70),HX_("Speech Bubble Normal Open",0d,59,3f,7c),24,false,null(),null());
HXLINE( 206)		this->box->animation->addByPrefix(HX_("angry",21,49,e2,22),HX_("AHH speech bubble",eb,de,b2,20),24,null(),null(),null());
HXLINE( 207)		this->box->animation->addByPrefix(HX_("angryOpen",8b,1d,01,b1),HX_("speech bubble loud open",42,35,10,f0),24,false,null(),null());
HXLINE( 208)		this->box->animation->addByPrefix(HX_("center-normal",df,c0,ab,9c),HX_("speech bubble middle",eb,36,b2,c3),24,null(),null(),null());
HXLINE( 209)		this->box->animation->addByPrefix(HX_("center-normalOpen",49,4c,74,58),HX_("Speech Bubble Middle Open",1f,f1,94,ea),24,false,null(),null());
HXLINE( 210)		this->box->animation->addByPrefix(HX_("center-angry",69,39,92,b0),HX_("AHH Speech Bubble middle",ea,0b,3d,74),24,null(),null(),null());
HXLINE( 211)		this->box->animation->addByPrefix(HX_("center-angryOpen",d3,d1,42,e2),HX_("speech bubble Middle loud open",c3,b9,85,ee),24,false,null(),null());
HXLINE( 212)		this->box->animation->play(HX_("normal",27,72,69,30),true,null(),null());
HXLINE( 213)		this->box->set_visible(false);
HXLINE( 214)		 ::flixel::FlxSprite _hx_tmp5 = this->box;
HXDLIN( 214)		_hx_tmp5->setGraphicSize(::Std_obj::_hx_int((this->box->get_width() * ((Float)0.9))),null());
HXLINE( 215)		this->box->updateHitbox();
HXLINE( 216)		this->add(this->box);
HXLINE( 218)		this->startNextDialog();
            	}

Dynamic DialogueBoxPsych_obj::__CreateEmpty() { return new DialogueBoxPsych_obj; }

void *DialogueBoxPsych_obj::_hx_vtable = 0;

Dynamic DialogueBoxPsych_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DialogueBoxPsych_obj > _hx_result = new DialogueBoxPsych_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool DialogueBoxPsych_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7d24723c || inClassId==(int)0x7dab0655;
	}
}

void DialogueBoxPsych_obj::spawnCharacters(){
            	HX_GC_STACKFRAME(&_hx_pos_128129519e640548_228_spawnCharacters)
HXLINE( 230)		 ::haxe::ds::StringMap charsMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 234)		{
HXLINE( 234)			int _g = 0;
HXDLIN( 234)			int _g1 = ( (::Array< ::Dynamic>)(this->dialogueList->__Field(HX_("dialogue",18,2d,94,a7),::hx::paccDynamic)) )->length;
HXDLIN( 234)			while((_g < _g1)){
HXLINE( 234)				_g = (_g + 1);
HXDLIN( 234)				int i = (_g - 1);
HXLINE( 235)				if (::hx::IsNotNull(  ::Dynamic(this->dialogueList->__Field(HX_("dialogue",18,2d,94,a7),::hx::paccDynamic))->__GetItem(i) )) {
HXLINE( 236)					::String charToAdd = ( (::String)( ::Dynamic(this->dialogueList->__Field(HX_("dialogue",18,2d,94,a7),::hx::paccDynamic))->__GetItem(i)->__Field(HX_("portrait",5b,21,af,b8),::hx::paccDynamic)) );
HXLINE( 237)					bool _hx_tmp;
HXDLIN( 237)					if (charsMap->exists(charToAdd)) {
HXLINE( 237)						_hx_tmp = !(( (bool)(charsMap->get(charToAdd)) ));
            					}
            					else {
HXLINE( 237)						_hx_tmp = true;
            					}
HXDLIN( 237)					if (_hx_tmp) {
HXLINE( 238)						charsMap->set(charToAdd,true);
            					}
            				}
            			}
            		}
HXLINE( 243)		{
HXLINE( 243)			 ::Dynamic individualChar = charsMap->keys();
HXDLIN( 243)			while(( (bool)(individualChar->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 243)				::String individualChar1 = ( (::String)(individualChar->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 244)				Float x = ::DialogueBoxPsych_obj::LEFT_CHAR_X;
HXLINE( 245)				Float y = ::DialogueBoxPsych_obj::DEFAULT_CHAR_Y;
HXLINE( 246)				 ::DialogueCharacter _hx_char =  ::DialogueCharacter_obj::__alloc( HX_CTX ,(x + this->offsetPos),y,individualChar1);
HXLINE( 248)				Float _hx_tmp = _hx_char->get_width();
HXDLIN( 248)				_hx_char->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp * ::DialogueCharacter_obj::DEFAULT_SCALE) * ( (Float)(_hx_char->jsonFile->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic)) ))),null());
HXLINE( 249)				_hx_char->updateHitbox();
HXLINE( 250)				_hx_char->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 251)				_hx_char->scrollFactor->set(null(),null());
HXLINE( 252)				_hx_char->set_alpha(((Float)0.00001));
HXLINE( 253)				this->add(_hx_char);
HXLINE( 255)				bool saveY = false;
HXLINE( 256)				::String _hx_switch_0 = ( (::String)(_hx_char->jsonFile->__Field(HX_("dialogue_pos",ad,3b,6d,1a),::hx::paccDynamic)) );
            				if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 258)					_hx_char->set_x((( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )));
HXLINE( 259)					Float char1 = _hx_char->x;
HXDLIN( 259)					_hx_char->set_x((char1 - (_hx_char->get_width() / ( (Float)(2) ))));
HXLINE( 260)					y = _hx_char->y;
HXLINE( 261)					_hx_char->set_y(( (Float)((::flixel::FlxG_obj::height + 50)) ));
HXLINE( 262)					saveY = true;
HXLINE( 257)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 264)					int x1 = ::flixel::FlxG_obj::width;
HXDLIN( 264)					Float x2 = (( (Float)(x1) ) - _hx_char->get_width());
HXDLIN( 264)					x = (x2 + ::DialogueBoxPsych_obj::RIGHT_CHAR_X);
HXLINE( 265)					_hx_char->set_x((x - this->offsetPos));
HXLINE( 263)					goto _hx_goto_4;
            				}
            				_hx_goto_4:;
HXLINE( 267)				x = (x +  ::Dynamic(_hx_char->jsonFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(0));
HXLINE( 268)				y = (y +  ::Dynamic(_hx_char->jsonFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(1));
HXLINE( 269)				_hx_char->set_x((_hx_char->x +  ::Dynamic(_hx_char->jsonFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(0)));
HXLINE( 270)				_hx_char->set_y((_hx_char->y +  ::Dynamic(_hx_char->jsonFile->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic))->__GetItem(1)));
HXLINE( 271)				Float _hx_tmp1;
HXDLIN( 271)				if (saveY) {
HXLINE( 271)					_hx_tmp1 = y;
            				}
            				else {
HXLINE( 271)					_hx_tmp1 = x;
            				}
HXDLIN( 271)				_hx_char->startingPos = _hx_tmp1;
HXLINE( 272)				this->arrayCharacters->push(_hx_char);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBoxPsych_obj,spawnCharacters,(void))

void DialogueBoxPsych_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_128129519e640548_282_update)
HXLINE( 283)		if (this->ignoreThisFrame) {
HXLINE( 284)			this->ignoreThisFrame = false;
HXLINE( 285)			this->super::update(elapsed);
HXLINE( 286)			return;
            		}
HXLINE( 289)		if (!(this->dialogueEnded)) {
HXLINE( 290)			 ::flixel::FlxSprite fh = this->bgFade;
HXDLIN( 290)			fh->set_alpha((fh->alpha + (((Float)0.5) * elapsed)));
HXLINE( 291)			if ((this->bgFade->alpha > ((Float)0.5))) {
HXLINE( 291)				this->bgFade->set_alpha(((Float)0.5));
            			}
HXLINE( 293)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 294)				if (!(this->daText->finishedText)) {
HXLINE( 295)					if (::hx::IsNotNull( this->daText )) {
HXLINE( 296)						this->daText->killTheTimer();
HXLINE( 297)						this->daText->kill();
HXLINE( 298)						this->remove(this->daText,null());
HXLINE( 299)						this->daText->destroy();
            					}
HXLINE( 301)					this->daText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(::DialogueBoxPsych_obj::DEFAULT_TEXT_X) ),( (Float)(::DialogueBoxPsych_obj::DEFAULT_TEXT_Y) ),this->textToType,false,true,((Float)0.0),((Float)0.7));
HXLINE( 302)					this->add(this->daText);
HXLINE( 304)					if (::hx::IsNotNull( this->skipDialogueThing )) {
HXLINE( 305)						this->skipDialogueThing();
            					}
            				}
            				else {
HXLINE( 307)					if ((this->currentText >= ( (::Array< ::Dynamic>)(this->dialogueList->__Field(HX_("dialogue",18,2d,94,a7),::hx::paccDynamic)) )->length)) {
HXLINE( 308)						this->dialogueEnded = true;
HXLINE( 309)						{
HXLINE( 309)							int _g = 0;
HXDLIN( 309)							int _g1 = this->textBoxTypes->length;
HXDLIN( 309)							while((_g < _g1)){
HXLINE( 309)								_g = (_g + 1);
HXDLIN( 309)								int i = (_g - 1);
HXLINE( 310)								::Array< ::String > checkArray = ::Array_obj< ::String >::fromData( _hx_array_data_c9b73088_17,2);
HXLINE( 311)								::String animName = this->box->animation->_curAnim->name;
HXLINE( 312)								{
HXLINE( 312)									int _g1 = 0;
HXDLIN( 312)									int _g2 = checkArray->length;
HXDLIN( 312)									while((_g1 < _g2)){
HXLINE( 312)										_g1 = (_g1 + 1);
HXDLIN( 312)										int j = (_g1 - 1);
HXLINE( 313)										bool _hx_tmp;
HXDLIN( 313)										if ((animName != (checkArray->__get(j) + this->textBoxTypes->__get(i)))) {
HXLINE( 313)											_hx_tmp = (animName == ((checkArray->__get(j) + this->textBoxTypes->__get(i)) + HX_("Open",ea,2f,8d,34)));
            										}
            										else {
HXLINE( 313)											_hx_tmp = true;
            										}
HXDLIN( 313)										if (_hx_tmp) {
HXLINE( 314)											this->box->animation->play(((checkArray->__get(j) + this->textBoxTypes->__get(i)) + HX_("Open",ea,2f,8d,34)),true,null(),null());
            										}
            									}
            								}
            							}
            						}
HXLINE( 319)						this->box->animation->_curAnim->set_curFrame((this->box->animation->_curAnim->frames->length - 1));
HXLINE( 320)						this->box->animation->_curAnim->reverse();
HXLINE( 321)						this->daText->kill();
HXLINE( 322)						this->remove(this->daText,null());
HXLINE( 323)						this->daText->destroy();
HXLINE( 324)						this->daText = null();
HXLINE( 325)						::DialogueBoxPsych_obj::updateBoxOffsets(this->box);
HXLINE( 326)						{
HXLINE( 326)							 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 326)							 ::Dynamic To = 0;
HXDLIN( 326)							 ::Dynamic onComplete = null();
HXDLIN( 326)							if (::hx::IsNull( To )) {
HXLINE( 326)								To = 0;
            							}
HXDLIN( 326)							if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 326)								_this->fadeTween->cancel();
            							}
HXDLIN( 326)							_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(_this->_volume,( (Float)(To) ),1, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            						}
            					}
            					else {
HXLINE( 328)						this->startNextDialog();
            					}
            				}
HXLINE( 330)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 330)				_hx_tmp->play(::Paths_obj::sound(HX_("dialogueClose",80,e3,49,e3),null()),null(),null(),null(),null(),null());
            			}
            			else {
HXLINE( 331)				if (this->daText->finishedText) {
HXLINE( 332)					 ::DialogueCharacter _hx_char = this->arrayCharacters->__get(this->lastCharacter).StaticCast<  ::DialogueCharacter >();
HXLINE( 333)					bool _hx_tmp;
HXDLIN( 333)					bool _hx_tmp1;
HXDLIN( 333)					bool _hx_tmp2;
HXDLIN( 333)					if (::hx::IsNotNull( _hx_char )) {
HXLINE( 333)						_hx_tmp2 = ::hx::IsNotNull( _hx_char->animation->_curAnim );
            					}
            					else {
HXLINE( 333)						_hx_tmp2 = false;
            					}
HXDLIN( 333)					if (_hx_tmp2) {
HXLINE( 333)						_hx_tmp1 = _hx_char->animationIsLoop();
            					}
            					else {
HXLINE( 333)						_hx_tmp1 = false;
            					}
HXDLIN( 333)					if (_hx_tmp1) {
HXLINE( 333)						_hx_tmp = _hx_char->animation->get_finished();
            					}
            					else {
HXLINE( 333)						_hx_tmp = false;
            					}
HXDLIN( 333)					if (_hx_tmp) {
HXLINE( 334)						_hx_char->playAnim(_hx_char->animation->_curAnim->name,true);
            					}
            				}
            				else {
HXLINE( 337)					 ::DialogueCharacter _hx_char = this->arrayCharacters->__get(this->lastCharacter).StaticCast<  ::DialogueCharacter >();
HXLINE( 338)					bool _hx_tmp;
HXDLIN( 338)					bool _hx_tmp1;
HXDLIN( 338)					if (::hx::IsNotNull( _hx_char )) {
HXLINE( 338)						_hx_tmp1 = ::hx::IsNotNull( _hx_char->animation->_curAnim );
            					}
            					else {
HXLINE( 338)						_hx_tmp1 = false;
            					}
HXDLIN( 338)					if (_hx_tmp1) {
HXLINE( 338)						_hx_tmp = _hx_char->animation->get_finished();
            					}
            					else {
HXLINE( 338)						_hx_tmp = false;
            					}
HXDLIN( 338)					if (_hx_tmp) {
HXLINE( 339)						_hx_char->animation->_curAnim->restart();
            					}
            				}
            			}
HXLINE( 343)			if (this->box->animation->_curAnim->finished) {
HXLINE( 344)				{
HXLINE( 344)					int _g = 0;
HXDLIN( 344)					int _g1 = this->textBoxTypes->length;
HXDLIN( 344)					while((_g < _g1)){
HXLINE( 344)						_g = (_g + 1);
HXDLIN( 344)						int i = (_g - 1);
HXLINE( 345)						::Array< ::String > checkArray = ::Array_obj< ::String >::fromData( _hx_array_data_c9b73088_18,2);
HXLINE( 346)						::String animName = this->box->animation->_curAnim->name;
HXLINE( 347)						{
HXLINE( 347)							int _g1 = 0;
HXDLIN( 347)							int _g2 = checkArray->length;
HXDLIN( 347)							while((_g1 < _g2)){
HXLINE( 347)								_g1 = (_g1 + 1);
HXDLIN( 347)								int j = (_g1 - 1);
HXLINE( 348)								bool _hx_tmp;
HXDLIN( 348)								if ((animName != (checkArray->__get(j) + this->textBoxTypes->__get(i)))) {
HXLINE( 348)									_hx_tmp = (animName == ((checkArray->__get(j) + this->textBoxTypes->__get(i)) + HX_("Open",ea,2f,8d,34)));
            								}
            								else {
HXLINE( 348)									_hx_tmp = true;
            								}
HXDLIN( 348)								if (_hx_tmp) {
HXLINE( 349)									this->box->animation->play((checkArray->__get(j) + this->textBoxTypes->__get(i)),true,null(),null());
            								}
            							}
            						}
            					}
            				}
HXLINE( 353)				::DialogueBoxPsych_obj::updateBoxOffsets(this->box);
            			}
HXLINE( 356)			bool _hx_tmp;
HXDLIN( 356)			if ((this->lastCharacter != -1)) {
HXLINE( 356)				_hx_tmp = (this->arrayCharacters->length > 0);
            			}
            			else {
HXLINE( 356)				_hx_tmp = false;
            			}
HXDLIN( 356)			if (_hx_tmp) {
HXLINE( 357)				int _g = 0;
HXDLIN( 357)				int _g1 = this->arrayCharacters->length;
HXDLIN( 357)				while((_g < _g1)){
HXLINE( 357)					_g = (_g + 1);
HXDLIN( 357)					int i = (_g - 1);
HXLINE( 358)					 ::DialogueCharacter _hx_char = this->arrayCharacters->__get(i).StaticCast<  ::DialogueCharacter >();
HXLINE( 359)					if (::hx::IsNotNull( _hx_char )) {
HXLINE( 360)						if ((i != this->lastCharacter)) {
HXLINE( 361)							::String _hx_switch_0 = ( (::String)(_hx_char->jsonFile->__Field(HX_("dialogue_pos",ad,3b,6d,1a),::hx::paccDynamic)) );
            							if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 366)								_hx_char->set_y((_hx_char->y + (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 367)								if ((_hx_char->y > (_hx_char->startingPos + ::flixel::FlxG_obj::height))) {
HXLINE( 367)									_hx_char->set_y((_hx_char->startingPos + ::flixel::FlxG_obj::height));
            								}
HXLINE( 365)								goto _hx_goto_11;
            							}
            							if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE( 363)								_hx_char->set_x((_hx_char->x - (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 364)								if ((_hx_char->x < (_hx_char->startingPos + this->offsetPos))) {
HXLINE( 364)									_hx_char->set_x((_hx_char->startingPos + this->offsetPos));
            								}
HXLINE( 362)								goto _hx_goto_11;
            							}
            							if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 369)								_hx_char->set_x((_hx_char->x + (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 370)								if ((_hx_char->x > (_hx_char->startingPos - this->offsetPos))) {
HXLINE( 370)									_hx_char->set_x((_hx_char->startingPos - this->offsetPos));
            								}
HXLINE( 368)								goto _hx_goto_11;
            							}
            							_hx_goto_11:;
HXLINE( 372)							_hx_char->set_alpha((_hx_char->alpha - (( (Float)(3) ) * elapsed)));
HXLINE( 373)							if ((_hx_char->alpha < ((Float)0.00001))) {
HXLINE( 373)								_hx_char->set_alpha(((Float)0.00001));
            							}
            						}
            						else {
HXLINE( 375)							::String _hx_switch_1 = ( (::String)(_hx_char->jsonFile->__Field(HX_("dialogue_pos",ad,3b,6d,1a),::hx::paccDynamic)) );
            							if (  (_hx_switch_1==HX_("center",d5,25,db,05)) ){
HXLINE( 380)								_hx_char->set_y((_hx_char->y - (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 381)								if ((_hx_char->y < _hx_char->startingPos)) {
HXLINE( 381)									_hx_char->set_y(_hx_char->startingPos);
            								}
HXLINE( 379)								goto _hx_goto_12;
            							}
            							if (  (_hx_switch_1==HX_("left",07,08,b0,47)) ){
HXLINE( 377)								_hx_char->set_x((_hx_char->x + (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 378)								if ((_hx_char->x > _hx_char->startingPos)) {
HXLINE( 378)									_hx_char->set_x(_hx_char->startingPos);
            								}
HXLINE( 376)								goto _hx_goto_12;
            							}
            							if (  (_hx_switch_1==HX_("right",dc,0b,64,e9)) ){
HXLINE( 383)								_hx_char->set_x((_hx_char->x - (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 384)								if ((_hx_char->x < _hx_char->startingPos)) {
HXLINE( 384)									_hx_char->set_x(_hx_char->startingPos);
            								}
HXLINE( 382)								goto _hx_goto_12;
            							}
            							_hx_goto_12:;
HXLINE( 386)							_hx_char->set_alpha((_hx_char->alpha + (( (Float)(3) ) * elapsed)));
HXLINE( 387)							if ((_hx_char->alpha > 1)) {
HXLINE( 387)								_hx_char->set_alpha(( (Float)(1) ));
            							}
            						}
            					}
            				}
            			}
            		}
            		else {
HXLINE( 393)			bool _hx_tmp;
HXDLIN( 393)			if (::hx::IsNotNull( this->box )) {
HXLINE( 393)				_hx_tmp = (this->box->animation->_curAnim->curFrame <= 0);
            			}
            			else {
HXLINE( 393)				_hx_tmp = false;
            			}
HXDLIN( 393)			if (_hx_tmp) {
HXLINE( 394)				this->box->kill();
HXLINE( 395)				this->remove(this->box,null());
HXLINE( 396)				this->box->destroy();
HXLINE( 397)				this->box = null();
            			}
HXLINE( 400)			if (::hx::IsNotNull( this->bgFade )) {
HXLINE( 401)				 ::flixel::FlxSprite fh = this->bgFade;
HXDLIN( 401)				fh->set_alpha((fh->alpha - (((Float)0.5) * elapsed)));
HXLINE( 402)				if ((this->bgFade->alpha <= 0)) {
HXLINE( 403)					this->bgFade->kill();
HXLINE( 404)					this->remove(this->bgFade,null());
HXLINE( 405)					this->bgFade->destroy();
HXLINE( 406)					this->bgFade = null();
            				}
            			}
HXLINE( 410)			{
HXLINE( 410)				int _g = 0;
HXDLIN( 410)				int _g1 = this->arrayCharacters->length;
HXDLIN( 410)				while((_g < _g1)){
HXLINE( 410)					_g = (_g + 1);
HXDLIN( 410)					int i = (_g - 1);
HXLINE( 411)					 ::DialogueCharacter leChar = this->arrayCharacters->__get(i).StaticCast<  ::DialogueCharacter >();
HXLINE( 412)					if (::hx::IsNotNull( leChar )) {
HXLINE( 413)						::String _hx_switch_2 = ( (::String)(this->arrayCharacters->__get(i).StaticCast<  ::DialogueCharacter >()->jsonFile->__Field(HX_("dialogue_pos",ad,3b,6d,1a),::hx::paccDynamic)) );
            						if (  (_hx_switch_2==HX_("center",d5,25,db,05)) ){
HXLINE( 417)							leChar->set_y((leChar->y + (( (Float)(this->scrollSpeed) ) * elapsed)));
HXDLIN( 417)							goto _hx_goto_14;
            						}
            						if (  (_hx_switch_2==HX_("left",07,08,b0,47)) ){
HXLINE( 415)							leChar->set_x((leChar->x - (( (Float)(this->scrollSpeed) ) * elapsed)));
HXDLIN( 415)							goto _hx_goto_14;
            						}
            						if (  (_hx_switch_2==HX_("right",dc,0b,64,e9)) ){
HXLINE( 419)							leChar->set_x((leChar->x + (( (Float)(this->scrollSpeed) ) * elapsed)));
HXDLIN( 419)							goto _hx_goto_14;
            						}
            						_hx_goto_14:;
HXLINE( 421)						leChar->set_alpha((leChar->alpha - (elapsed * ( (Float)(10) ))));
            					}
            				}
            			}
HXLINE( 425)			bool _hx_tmp1;
HXDLIN( 425)			if (::hx::IsNull( this->box )) {
HXLINE( 425)				_hx_tmp1 = ::hx::IsNull( this->bgFade );
            			}
            			else {
HXLINE( 425)				_hx_tmp1 = false;
            			}
HXDLIN( 425)			if (_hx_tmp1) {
HXLINE( 426)				{
HXLINE( 426)					int _g = 0;
HXDLIN( 426)					int _g1 = this->arrayCharacters->length;
HXDLIN( 426)					while((_g < _g1)){
HXLINE( 426)						_g = (_g + 1);
HXDLIN( 426)						int i = (_g - 1);
HXLINE( 427)						 ::DialogueCharacter leChar = this->arrayCharacters->__get(0).StaticCast<  ::DialogueCharacter >();
HXLINE( 428)						if (::hx::IsNotNull( leChar )) {
HXLINE( 429)							this->arrayCharacters->remove(leChar);
HXLINE( 430)							leChar->kill();
HXLINE( 431)							this->remove(leChar,null());
HXLINE( 432)							leChar->destroy();
            						}
            					}
            				}
HXLINE( 435)				this->finishThing();
HXLINE( 436)				this->kill();
            			}
            		}
HXLINE( 439)		this->super::update(elapsed);
            	}


void DialogueBoxPsych_obj::startNextDialog(){
            	HX_GC_STACKFRAME(&_hx_pos_128129519e640548_445_startNextDialog)
HXLINE( 446)		 ::Dynamic curDialogue = null();
HXLINE( 447)		while(true){
HXLINE( 448)			curDialogue =  ::Dynamic(this->dialogueList->__Field(HX_("dialogue",18,2d,94,a7),::hx::paccDynamic))->__GetItem(this->currentText);
HXLINE( 447)			if (!(::hx::IsNull( curDialogue ))) {
HXLINE( 447)				goto _hx_goto_19;
            			}
            		}
            		_hx_goto_19:;
HXLINE( 451)		bool _hx_tmp;
HXDLIN( 451)		if (::hx::IsNotNull( curDialogue->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic) )) {
HXLINE( 451)			_hx_tmp = (( (::String)(curDialogue->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic)) ).length < 1);
            		}
            		else {
HXLINE( 451)			_hx_tmp = true;
            		}
HXDLIN( 451)		if (_hx_tmp) {
HXLINE( 451)			curDialogue->__SetField(HX_("text",ad,cc,f9,4c),HX_(" ",20,00,00,00),::hx::paccDynamic);
            		}
HXLINE( 452)		if (::hx::IsNull( curDialogue->__Field(HX_("boxState",06,60,2a,ff),::hx::paccDynamic) )) {
HXLINE( 452)			curDialogue->__SetField(HX_("boxState",06,60,2a,ff),HX_("normal",27,72,69,30),::hx::paccDynamic);
            		}
HXLINE( 453)		bool _hx_tmp1;
HXDLIN( 453)		if (::hx::IsNotNull( curDialogue->__Field(HX_("speed",87,97,69,81),::hx::paccDynamic) )) {
HXLINE( 453)			_hx_tmp1 = ::Math_obj::isNaN(( (Float)(curDialogue->__Field(HX_("speed",87,97,69,81),::hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 453)			_hx_tmp1 = true;
            		}
HXDLIN( 453)		if (_hx_tmp1) {
HXLINE( 453)			curDialogue->__SetField(HX_("speed",87,97,69,81),((Float)0.05),::hx::paccDynamic);
            		}
HXLINE( 455)		::String animName = ( (::String)(curDialogue->__Field(HX_("boxState",06,60,2a,ff),::hx::paccDynamic)) );
HXLINE( 456)		::String boxType = this->textBoxTypes->__get(0);
HXLINE( 457)		{
HXLINE( 457)			int _g = 0;
HXDLIN( 457)			int _g1 = this->textBoxTypes->length;
HXDLIN( 457)			while((_g < _g1)){
HXLINE( 457)				_g = (_g + 1);
HXDLIN( 457)				int i = (_g - 1);
HXLINE( 458)				if ((this->textBoxTypes->__get(i) == animName)) {
HXLINE( 459)					boxType = animName;
            				}
            			}
            		}
HXLINE( 463)		int character = 0;
HXLINE( 464)		this->box->set_visible(true);
HXLINE( 465)		{
HXLINE( 465)			int _g2 = 0;
HXDLIN( 465)			int _g3 = this->arrayCharacters->length;
HXDLIN( 465)			while((_g2 < _g3)){
HXLINE( 465)				_g2 = (_g2 + 1);
HXDLIN( 465)				int i = (_g2 - 1);
HXLINE( 466)				if (::hx::IsEq( this->arrayCharacters->__get(i).StaticCast<  ::DialogueCharacter >()->curCharacter,curDialogue->__Field(HX_("portrait",5b,21,af,b8),::hx::paccDynamic) )) {
HXLINE( 467)					character = i;
HXLINE( 468)					goto _hx_goto_21;
            				}
            			}
            			_hx_goto_21:;
            		}
HXLINE( 471)		::String centerPrefix = HX_("",00,00,00,00);
HXLINE( 472)		::String lePosition = ( (::String)(this->arrayCharacters->__get(character).StaticCast<  ::DialogueCharacter >()->jsonFile->__Field(HX_("dialogue_pos",ad,3b,6d,1a),::hx::paccDynamic)) );
HXLINE( 473)		if ((lePosition == HX_("center",d5,25,db,05))) {
HXLINE( 473)			centerPrefix = HX_("center-",b8,f4,e5,19);
            		}
HXLINE( 475)		if ((character != this->lastCharacter)) {
HXLINE( 476)			this->box->animation->play(((centerPrefix + boxType) + HX_("Open",ea,2f,8d,34)),true,null(),null());
HXLINE( 477)			::DialogueBoxPsych_obj::updateBoxOffsets(this->box);
HXLINE( 478)			this->box->set_flipX((lePosition == HX_("left",07,08,b0,47)));
            		}
            		else {
HXLINE( 479)			if ((boxType != this->lastBoxType)) {
HXLINE( 480)				this->box->animation->play((centerPrefix + boxType),true,null(),null());
HXLINE( 481)				::DialogueBoxPsych_obj::updateBoxOffsets(this->box);
            			}
            		}
HXLINE( 483)		this->lastCharacter = character;
HXLINE( 484)		this->lastBoxType = boxType;
HXLINE( 486)		if (::hx::IsNotNull( this->daText )) {
HXLINE( 487)			this->daText->killTheTimer();
HXLINE( 488)			this->daText->kill();
HXLINE( 489)			this->remove(this->daText,null());
HXLINE( 490)			this->daText->destroy();
            		}
HXLINE( 493)		this->textToType = ( (::String)(curDialogue->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic)) );
HXLINE( 494)		this->daText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(::DialogueBoxPsych_obj::DEFAULT_TEXT_X) ),( (Float)(::DialogueBoxPsych_obj::DEFAULT_TEXT_Y) ),this->textToType,false,true,curDialogue->__Field(HX_("speed",87,97,69,81),::hx::paccDynamic),((Float)0.7));
HXLINE( 495)		this->add(this->daText);
HXLINE( 497)		 ::DialogueCharacter _hx_char = this->arrayCharacters->__get(character).StaticCast<  ::DialogueCharacter >();
HXLINE( 498)		if (::hx::IsNotNull( _hx_char )) {
HXLINE( 499)			_hx_char->playAnim(( (::String)(curDialogue->__Field(HX_("expression",98,11,9f,2e),::hx::paccDynamic)) ),this->daText->finishedText);
HXLINE( 500)			if (::hx::IsNotNull( _hx_char->animation->_curAnim )) {
HXLINE( 501)				Float rate = (( (Float)(24) ) - (((( (Float)(curDialogue->__Field(HX_("speed",87,97,69,81),::hx::paccDynamic)) ) - ((Float)0.05)) / ( (Float)(5) )) * ( (Float)(480) )));
HXLINE( 502)				if ((rate < 12)) {
HXLINE( 502)					rate = ( (Float)(12) );
            				}
            				else {
HXLINE( 503)					if ((rate > 48)) {
HXLINE( 503)						rate = ( (Float)(48) );
            					}
            				}
HXLINE( 504)				_hx_char->animation->_curAnim->set_frameRate(rate);
            			}
            		}
HXLINE( 507)		this->currentText++;
HXLINE( 509)		if (::hx::IsNotNull( this->nextDialogueThing )) {
HXLINE( 510)			this->nextDialogueThing();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBoxPsych_obj,startNextDialog,(void))

Float DialogueBoxPsych_obj::LEFT_CHAR_X;

Float DialogueBoxPsych_obj::RIGHT_CHAR_X;

Float DialogueBoxPsych_obj::DEFAULT_CHAR_Y;

int DialogueBoxPsych_obj::DEFAULT_TEXT_X;

int DialogueBoxPsych_obj::DEFAULT_TEXT_Y;

 ::Dynamic DialogueBoxPsych_obj::parseDialogue(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_128129519e640548_514_parseDialogue)
HXLINE( 516)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 518)			return  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,::sys::io::File_obj::getContent(path))->doParse();
            		}
HXLINE( 521)		return  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,::openfl::utils::Assets_obj::getText(path))->doParse();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DialogueBoxPsych_obj,parseDialogue,return )

void DialogueBoxPsych_obj::updateBoxOffsets( ::flixel::FlxSprite box){
            	HX_STACKFRAME(&_hx_pos_128129519e640548_524_updateBoxOffsets)
HXLINE( 525)		box->centerOffsets(null());
HXLINE( 526)		box->updateHitbox();
HXLINE( 527)		if (::StringTools_obj::startsWith(box->animation->_curAnim->name,HX_("angry",21,49,e2,22))) {
HXLINE( 528)			box->offset->set(50,65);
            		}
            		else {
HXLINE( 529)			if (::StringTools_obj::startsWith(box->animation->_curAnim->name,HX_("center-angry",69,39,92,b0))) {
HXLINE( 530)				box->offset->set(50,30);
            			}
            			else {
HXLINE( 532)				box->offset->set(10,0);
            			}
            		}
HXLINE( 535)		if (!(box->flipX)) {
HXLINE( 535)			 ::flixel::math::FlxPoint fh = box->offset;
HXDLIN( 535)			fh->set_y((fh->y + 10));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DialogueBoxPsych_obj,updateBoxOffsets,(void))


::hx::ObjectPtr< DialogueBoxPsych_obj > DialogueBoxPsych_obj::__new( ::Dynamic dialogueList,::String song) {
	::hx::ObjectPtr< DialogueBoxPsych_obj > __this = new DialogueBoxPsych_obj();
	__this->__construct(dialogueList,song);
	return __this;
}

::hx::ObjectPtr< DialogueBoxPsych_obj > DialogueBoxPsych_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic dialogueList,::String song) {
	DialogueBoxPsych_obj *__this = (DialogueBoxPsych_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DialogueBoxPsych_obj), true, "DialogueBoxPsych"));
	*(void **)__this = DialogueBoxPsych_obj::_hx_vtable;
	__this->__construct(dialogueList,song);
	return __this;
}

DialogueBoxPsych_obj::DialogueBoxPsych_obj()
{
}

void DialogueBoxPsych_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DialogueBoxPsych);
	HX_MARK_MEMBER_NAME(dialogue,"dialogue");
	HX_MARK_MEMBER_NAME(dialogueList,"dialogueList");
	HX_MARK_MEMBER_NAME(finishThing,"finishThing");
	HX_MARK_MEMBER_NAME(nextDialogueThing,"nextDialogueThing");
	HX_MARK_MEMBER_NAME(skipDialogueThing,"skipDialogueThing");
	HX_MARK_MEMBER_NAME(bgFade,"bgFade");
	HX_MARK_MEMBER_NAME(box,"box");
	HX_MARK_MEMBER_NAME(textToType,"textToType");
	HX_MARK_MEMBER_NAME(arrayCharacters,"arrayCharacters");
	HX_MARK_MEMBER_NAME(currentText,"currentText");
	HX_MARK_MEMBER_NAME(offsetPos,"offsetPos");
	HX_MARK_MEMBER_NAME(textBoxTypes,"textBoxTypes");
	HX_MARK_MEMBER_NAME(dialogueStarted,"dialogueStarted");
	HX_MARK_MEMBER_NAME(dialogueEnded,"dialogueEnded");
	HX_MARK_MEMBER_NAME(scrollSpeed,"scrollSpeed");
	HX_MARK_MEMBER_NAME(daText,"daText");
	HX_MARK_MEMBER_NAME(ignoreThisFrame,"ignoreThisFrame");
	HX_MARK_MEMBER_NAME(lastCharacter,"lastCharacter");
	HX_MARK_MEMBER_NAME(lastBoxType,"lastBoxType");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DialogueBoxPsych_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dialogue,"dialogue");
	HX_VISIT_MEMBER_NAME(dialogueList,"dialogueList");
	HX_VISIT_MEMBER_NAME(finishThing,"finishThing");
	HX_VISIT_MEMBER_NAME(nextDialogueThing,"nextDialogueThing");
	HX_VISIT_MEMBER_NAME(skipDialogueThing,"skipDialogueThing");
	HX_VISIT_MEMBER_NAME(bgFade,"bgFade");
	HX_VISIT_MEMBER_NAME(box,"box");
	HX_VISIT_MEMBER_NAME(textToType,"textToType");
	HX_VISIT_MEMBER_NAME(arrayCharacters,"arrayCharacters");
	HX_VISIT_MEMBER_NAME(currentText,"currentText");
	HX_VISIT_MEMBER_NAME(offsetPos,"offsetPos");
	HX_VISIT_MEMBER_NAME(textBoxTypes,"textBoxTypes");
	HX_VISIT_MEMBER_NAME(dialogueStarted,"dialogueStarted");
	HX_VISIT_MEMBER_NAME(dialogueEnded,"dialogueEnded");
	HX_VISIT_MEMBER_NAME(scrollSpeed,"scrollSpeed");
	HX_VISIT_MEMBER_NAME(daText,"daText");
	HX_VISIT_MEMBER_NAME(ignoreThisFrame,"ignoreThisFrame");
	HX_VISIT_MEMBER_NAME(lastCharacter,"lastCharacter");
	HX_VISIT_MEMBER_NAME(lastBoxType,"lastBoxType");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DialogueBoxPsych_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { return ::hx::Val( box ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgFade") ) { return ::hx::Val( bgFade ); }
		if (HX_FIELD_EQ(inName,"daText") ) { return ::hx::Val( daText ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dialogue") ) { return ::hx::Val( dialogue ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"offsetPos") ) { return ::hx::Val( offsetPos ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textToType") ) { return ::hx::Val( textToType ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"finishThing") ) { return ::hx::Val( finishThing ); }
		if (HX_FIELD_EQ(inName,"currentText") ) { return ::hx::Val( currentText ); }
		if (HX_FIELD_EQ(inName,"scrollSpeed") ) { return ::hx::Val( scrollSpeed ); }
		if (HX_FIELD_EQ(inName,"lastBoxType") ) { return ::hx::Val( lastBoxType ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dialogueList") ) { return ::hx::Val( dialogueList ); }
		if (HX_FIELD_EQ(inName,"textBoxTypes") ) { return ::hx::Val( textBoxTypes ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dialogueEnded") ) { return ::hx::Val( dialogueEnded ); }
		if (HX_FIELD_EQ(inName,"lastCharacter") ) { return ::hx::Val( lastCharacter ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"arrayCharacters") ) { return ::hx::Val( arrayCharacters ); }
		if (HX_FIELD_EQ(inName,"dialogueStarted") ) { return ::hx::Val( dialogueStarted ); }
		if (HX_FIELD_EQ(inName,"spawnCharacters") ) { return ::hx::Val( spawnCharacters_dyn() ); }
		if (HX_FIELD_EQ(inName,"ignoreThisFrame") ) { return ::hx::Val( ignoreThisFrame ); }
		if (HX_FIELD_EQ(inName,"startNextDialog") ) { return ::hx::Val( startNextDialog_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nextDialogueThing") ) { return ::hx::Val( nextDialogueThing ); }
		if (HX_FIELD_EQ(inName,"skipDialogueThing") ) { return ::hx::Val( skipDialogueThing ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DialogueBoxPsych_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"LEFT_CHAR_X") ) { outValue = ( LEFT_CHAR_X ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"RIGHT_CHAR_X") ) { outValue = ( RIGHT_CHAR_X ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"parseDialogue") ) { outValue = parseDialogue_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"DEFAULT_CHAR_Y") ) { outValue = ( DEFAULT_CHAR_Y ); return true; }
		if (HX_FIELD_EQ(inName,"DEFAULT_TEXT_X") ) { outValue = ( DEFAULT_TEXT_X ); return true; }
		if (HX_FIELD_EQ(inName,"DEFAULT_TEXT_Y") ) { outValue = ( DEFAULT_TEXT_Y ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateBoxOffsets") ) { outValue = updateBoxOffsets_dyn(); return true; }
	}
	return false;
}

::hx::Val DialogueBoxPsych_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { box=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgFade") ) { bgFade=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"daText") ) { daText=inValue.Cast<  ::Alphabet >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dialogue") ) { dialogue=inValue.Cast<  ::Alphabet >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"offsetPos") ) { offsetPos=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textToType") ) { textToType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"finishThing") ) { finishThing=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentText") ) { currentText=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollSpeed") ) { scrollSpeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastBoxType") ) { lastBoxType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dialogueList") ) { dialogueList=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textBoxTypes") ) { textBoxTypes=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dialogueEnded") ) { dialogueEnded=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastCharacter") ) { lastCharacter=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"arrayCharacters") ) { arrayCharacters=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dialogueStarted") ) { dialogueStarted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ignoreThisFrame") ) { ignoreThisFrame=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nextDialogueThing") ) { nextDialogueThing=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skipDialogueThing") ) { skipDialogueThing=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DialogueBoxPsych_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"LEFT_CHAR_X") ) { LEFT_CHAR_X=ioValue.Cast< Float >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"RIGHT_CHAR_X") ) { RIGHT_CHAR_X=ioValue.Cast< Float >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"DEFAULT_CHAR_Y") ) { DEFAULT_CHAR_Y=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"DEFAULT_TEXT_X") ) { DEFAULT_TEXT_X=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"DEFAULT_TEXT_Y") ) { DEFAULT_TEXT_Y=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void DialogueBoxPsych_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("dialogue",18,2d,94,a7));
	outFields->push(HX_("dialogueList",96,e1,d8,0d));
	outFields->push(HX_("bgFade",e1,fd,cd,ab));
	outFields->push(HX_("box",0b,be,4a,00));
	outFields->push(HX_("textToType",62,de,b2,b9));
	outFields->push(HX_("arrayCharacters",a3,23,67,53));
	outFields->push(HX_("currentText",86,a5,8b,85));
	outFields->push(HX_("offsetPos",c1,3b,c0,41));
	outFields->push(HX_("textBoxTypes",3b,d8,65,ca));
	outFields->push(HX_("dialogueStarted",09,77,22,70));
	outFields->push(HX_("dialogueEnded",c2,14,61,0b));
	outFields->push(HX_("scrollSpeed",3a,e0,46,cb));
	outFields->push(HX_("daText",ca,52,61,0d));
	outFields->push(HX_("ignoreThisFrame",7d,81,d2,40));
	outFields->push(HX_("lastCharacter",73,b6,0a,40));
	outFields->push(HX_("lastBoxType",af,f2,77,51));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DialogueBoxPsych_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(DialogueBoxPsych_obj,dialogue),HX_("dialogue",18,2d,94,a7)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBoxPsych_obj,dialogueList),HX_("dialogueList",96,e1,d8,0d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBoxPsych_obj,finishThing),HX_("finishThing",9b,aa,8e,36)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBoxPsych_obj,nextDialogueThing),HX_("nextDialogueThing",c3,c2,a1,d9)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBoxPsych_obj,skipDialogueThing),HX_("skipDialogueThing",b7,29,12,4e)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBoxPsych_obj,bgFade),HX_("bgFade",e1,fd,cd,ab)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBoxPsych_obj,box),HX_("box",0b,be,4a,00)},
	{::hx::fsString,(int)offsetof(DialogueBoxPsych_obj,textToType),HX_("textToType",62,de,b2,b9)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(DialogueBoxPsych_obj,arrayCharacters),HX_("arrayCharacters",a3,23,67,53)},
	{::hx::fsInt,(int)offsetof(DialogueBoxPsych_obj,currentText),HX_("currentText",86,a5,8b,85)},
	{::hx::fsFloat,(int)offsetof(DialogueBoxPsych_obj,offsetPos),HX_("offsetPos",c1,3b,c0,41)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(DialogueBoxPsych_obj,textBoxTypes),HX_("textBoxTypes",3b,d8,65,ca)},
	{::hx::fsBool,(int)offsetof(DialogueBoxPsych_obj,dialogueStarted),HX_("dialogueStarted",09,77,22,70)},
	{::hx::fsBool,(int)offsetof(DialogueBoxPsych_obj,dialogueEnded),HX_("dialogueEnded",c2,14,61,0b)},
	{::hx::fsInt,(int)offsetof(DialogueBoxPsych_obj,scrollSpeed),HX_("scrollSpeed",3a,e0,46,cb)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(DialogueBoxPsych_obj,daText),HX_("daText",ca,52,61,0d)},
	{::hx::fsBool,(int)offsetof(DialogueBoxPsych_obj,ignoreThisFrame),HX_("ignoreThisFrame",7d,81,d2,40)},
	{::hx::fsInt,(int)offsetof(DialogueBoxPsych_obj,lastCharacter),HX_("lastCharacter",73,b6,0a,40)},
	{::hx::fsString,(int)offsetof(DialogueBoxPsych_obj,lastBoxType),HX_("lastBoxType",af,f2,77,51)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo DialogueBoxPsych_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &DialogueBoxPsych_obj::LEFT_CHAR_X,HX_("LEFT_CHAR_X",e7,bb,19,61)},
	{::hx::fsFloat,(void *) &DialogueBoxPsych_obj::RIGHT_CHAR_X,HX_("RIGHT_CHAR_X",d2,58,47,14)},
	{::hx::fsFloat,(void *) &DialogueBoxPsych_obj::DEFAULT_CHAR_Y,HX_("DEFAULT_CHAR_Y",8e,06,1f,4b)},
	{::hx::fsInt,(void *) &DialogueBoxPsych_obj::DEFAULT_TEXT_X,HX_("DEFAULT_TEXT_X",24,d8,31,6c)},
	{::hx::fsInt,(void *) &DialogueBoxPsych_obj::DEFAULT_TEXT_Y,HX_("DEFAULT_TEXT_Y",25,d8,31,6c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DialogueBoxPsych_obj_sMemberFields[] = {
	HX_("dialogue",18,2d,94,a7),
	HX_("dialogueList",96,e1,d8,0d),
	HX_("finishThing",9b,aa,8e,36),
	HX_("nextDialogueThing",c3,c2,a1,d9),
	HX_("skipDialogueThing",b7,29,12,4e),
	HX_("bgFade",e1,fd,cd,ab),
	HX_("box",0b,be,4a,00),
	HX_("textToType",62,de,b2,b9),
	HX_("arrayCharacters",a3,23,67,53),
	HX_("currentText",86,a5,8b,85),
	HX_("offsetPos",c1,3b,c0,41),
	HX_("textBoxTypes",3b,d8,65,ca),
	HX_("dialogueStarted",09,77,22,70),
	HX_("dialogueEnded",c2,14,61,0b),
	HX_("spawnCharacters",c5,32,da,c2),
	HX_("scrollSpeed",3a,e0,46,cb),
	HX_("daText",ca,52,61,0d),
	HX_("ignoreThisFrame",7d,81,d2,40),
	HX_("update",09,86,05,87),
	HX_("lastCharacter",73,b6,0a,40),
	HX_("lastBoxType",af,f2,77,51),
	HX_("startNextDialog",1d,3d,9f,9a),
	::String(null()) };

static void DialogueBoxPsych_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DialogueBoxPsych_obj::LEFT_CHAR_X,"LEFT_CHAR_X");
	HX_MARK_MEMBER_NAME(DialogueBoxPsych_obj::RIGHT_CHAR_X,"RIGHT_CHAR_X");
	HX_MARK_MEMBER_NAME(DialogueBoxPsych_obj::DEFAULT_CHAR_Y,"DEFAULT_CHAR_Y");
	HX_MARK_MEMBER_NAME(DialogueBoxPsych_obj::DEFAULT_TEXT_X,"DEFAULT_TEXT_X");
	HX_MARK_MEMBER_NAME(DialogueBoxPsych_obj::DEFAULT_TEXT_Y,"DEFAULT_TEXT_Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DialogueBoxPsych_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DialogueBoxPsych_obj::LEFT_CHAR_X,"LEFT_CHAR_X");
	HX_VISIT_MEMBER_NAME(DialogueBoxPsych_obj::RIGHT_CHAR_X,"RIGHT_CHAR_X");
	HX_VISIT_MEMBER_NAME(DialogueBoxPsych_obj::DEFAULT_CHAR_Y,"DEFAULT_CHAR_Y");
	HX_VISIT_MEMBER_NAME(DialogueBoxPsych_obj::DEFAULT_TEXT_X,"DEFAULT_TEXT_X");
	HX_VISIT_MEMBER_NAME(DialogueBoxPsych_obj::DEFAULT_TEXT_Y,"DEFAULT_TEXT_Y");
};

#endif

::hx::Class DialogueBoxPsych_obj::__mClass;

static ::String DialogueBoxPsych_obj_sStaticFields[] = {
	HX_("LEFT_CHAR_X",e7,bb,19,61),
	HX_("RIGHT_CHAR_X",d2,58,47,14),
	HX_("DEFAULT_CHAR_Y",8e,06,1f,4b),
	HX_("DEFAULT_TEXT_X",24,d8,31,6c),
	HX_("DEFAULT_TEXT_Y",25,d8,31,6c),
	HX_("parseDialogue",6b,64,c3,ec),
	HX_("updateBoxOffsets",1e,ea,75,d1),
	::String(null())
};

void DialogueBoxPsych_obj::__register()
{
	DialogueBoxPsych_obj _hx_dummy;
	DialogueBoxPsych_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("DialogueBoxPsych",88,30,b7,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DialogueBoxPsych_obj::__GetStatic;
	__mClass->mSetStaticField = &DialogueBoxPsych_obj::__SetStatic;
	__mClass->mMarkFunc = DialogueBoxPsych_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DialogueBoxPsych_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DialogueBoxPsych_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DialogueBoxPsych_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DialogueBoxPsych_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DialogueBoxPsych_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DialogueBoxPsych_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DialogueBoxPsych_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_128129519e640548_224_boot)
HXDLIN( 224)		LEFT_CHAR_X = ((Float)-60);
            	}
{
            	HX_STACKFRAME(&_hx_pos_128129519e640548_225_boot)
HXDLIN( 225)		RIGHT_CHAR_X = ((Float)-100);
            	}
{
            	HX_STACKFRAME(&_hx_pos_128129519e640548_226_boot)
HXDLIN( 226)		DEFAULT_CHAR_Y = ((Float)60);
            	}
{
            	HX_STACKFRAME(&_hx_pos_128129519e640548_276_boot)
HXDLIN( 276)		DEFAULT_TEXT_X = 90;
            	}
{
            	HX_STACKFRAME(&_hx_pos_128129519e640548_277_boot)
HXDLIN( 277)		DEFAULT_TEXT_Y = 430;
            	}
}

