#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Note
#include <Note.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_editors_ChartingState
#include <editors/ChartingState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_13_new,"Note","new",0x1cc75604,"Note.new","Note.hx",13,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_73_set_texture,"Note","set_texture",0x04eff9a2,"Note.set_texture","Note.hx",73,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_81_set_noteType,"Note","set_noteType",0x43779525,"Note.set_noteType","Note.hx",81,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_224_reloadNote,"Note","reloadNote",0x1599eec7,"Note.reloadNote","Note.hx",224,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_284_loadNoteAnims,"Note","loadNoteAnims",0x493f5f8e,"Note.loadNoteAnims","Note.hx",284,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_308_loadPixelNoteAnims,"Note","loadPixelNoteAnims",0xefd7042c,"Note.loadPixelNoteAnims","Note.hx",308,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_327_update,"Note","update",0xca3a1ee5,"Note.update","Note.hx",327,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_41_boot,"Note","boot",0x09bcee0e,"Note.boot","Note.hx",41,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_42_boot,"Note","boot",0x09bcee0e,"Note.boot","Note.hx",42,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_43_boot,"Note","boot",0x09bcee0e,"Note.boot","Note.hx",43,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_44_boot,"Note","boot",0x09bcee0e,"Note.boot","Note.hx",44,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_45_boot,"Note","boot",0x09bcee0e,"Note.boot","Note.hx",45,0x1a8855ec)

void Note_obj::__construct(Float strumTime,int noteData, ::Note prevNote, ::Dynamic __o_sustainNote, ::Dynamic __o_inEditor){
            		 ::Dynamic sustainNote = __o_sustainNote;
            		if (::hx::IsNull(__o_sustainNote)) sustainNote = false;
            		 ::Dynamic inEditor = __o_inEditor;
            		if (::hx::IsNull(__o_inEditor)) inEditor = false;
            	HX_GC_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_13_new)
HXLINE(  71)		this->distance = ((Float)2000);
HXLINE(  70)		this->hitCausesMiss = false;
HXLINE(  69)		this->noAnimation = false;
HXLINE(  67)		this->texture = null();
HXLINE(  65)		this->missHealth = ((Float)0.0475);
HXLINE(  64)		this->hitHealth = ((Float)0.023);
HXLINE(  62)		this->copyAlpha = true;
HXLINE(  61)		this->copyAngle = true;
HXLINE(  60)		this->copyY = true;
HXLINE(  59)		this->copyX = true;
HXLINE(  57)		this->multAlpha = ((Float)1);
HXLINE(  56)		this->offsetAngle = ((Float)0);
HXLINE(  55)		this->offsetY = ((Float)0);
HXLINE(  54)		this->offsetX = ((Float)0);
HXLINE(  52)		this->noteSplashBrt = ((Float)0);
HXLINE(  51)		this->noteSplashSat = ((Float)0);
HXLINE(  50)		this->noteSplashHue = ((Float)0);
HXLINE(  49)		this->noteSplashTexture = null();
HXLINE(  48)		this->noteSplashDisabled = false;
HXLINE(  39)		this->earlyHitMult = ((Float)0.5);
HXLINE(  38)		this->gfNote = false;
HXLINE(  37)		this->inEditor = false;
HXLINE(  34)		this->eventVal2 = HX_("",00,00,00,00);
HXLINE(  33)		this->eventVal1 = HX_("",00,00,00,00);
HXLINE(  32)		this->eventLength = 0;
HXLINE(  31)		this->eventName = HX_("",00,00,00,00);
HXLINE(  29)		this->noteType = null();
HXLINE(  28)		this->isSustainNote = false;
HXLINE(  27)		this->sustainLength = ((Float)0);
HXLINE(  24)		this->noteWasHit = false;
HXLINE(  23)		this->hitByOpponent = false;
HXLINE(  22)		this->ignoreNote = false;
HXLINE(  21)		this->wasGoodHit = false;
HXLINE(  20)		this->tooLate = false;
HXLINE(  19)		this->canBeHit = false;
HXLINE(  18)		this->noteData = 0;
HXLINE(  17)		this->mustPress = false;
HXLINE(  15)		this->strumTime = ((Float)0);
HXLINE( 117)		super::__construct(null(),null(),null());
HXLINE( 119)		if (::hx::IsNull( prevNote )) {
HXLINE( 120)			prevNote = ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 122)		this->prevNote = prevNote;
HXLINE( 123)		this->isSustainNote = ( (bool)(sustainNote) );
HXLINE( 124)		this->inEditor = ( (bool)(inEditor) );
HXLINE( 126)		int _hx_tmp;
HXDLIN( 126)		if (::ClientPrefs_obj::middleScroll) {
HXLINE( 126)			_hx_tmp = ::PlayState_obj::STRUM_X_MIDDLESCROLL;
            		}
            		else {
HXLINE( 126)			_hx_tmp = ::PlayState_obj::STRUM_X;
            		}
HXDLIN( 126)		this->set_x((this->x + (_hx_tmp + 50)));
HXLINE( 128)		this->set_y((this->y - ( (Float)(2000) )));
HXLINE( 129)		this->strumTime = strumTime;
HXLINE( 130)		if (!(( (bool)(inEditor) ))) {
HXLINE( 130)			 ::Note _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 130)			_hx_tmp->strumTime = (_hx_tmp->strumTime + ::ClientPrefs_obj::noteOffset);
            		}
HXLINE( 132)		this->noteData = noteData;
HXLINE( 134)		if ((noteData > -1)) {
HXLINE( 135)			this->set_texture(HX_("",00,00,00,00));
HXLINE( 136)			this->colorSwap =  ::ColorSwap_obj::__alloc( HX_CTX );
HXLINE( 137)			this->shader = this->colorSwap->shader;
HXLINE( 139)			this->set_x((this->x + (::Note_obj::swagWidth * ( (Float)(::hx::Mod(noteData,4)) ))));
HXLINE( 140)			if (!(this->isSustainNote)) {
HXLINE( 141)				::String animToPlay = HX_("",00,00,00,00);
HXLINE( 142)				switch((int)(::hx::Mod(noteData,4))){
            					case (int)0: {
HXLINE( 145)						animToPlay = HX_("purple",3c,f6,89,71);
            					}
            					break;
            					case (int)1: {
HXLINE( 147)						animToPlay = HX_("blue",9a,42,19,41);
            					}
            					break;
            					case (int)2: {
HXLINE( 149)						animToPlay = HX_("green",c3,0e,ed,99);
            					}
            					break;
            					case (int)3: {
HXLINE( 151)						animToPlay = HX_("red",51,d9,56,00);
            					}
            					break;
            				}
HXLINE( 153)				this->animation->play((animToPlay + HX_("Scroll",2d,4c,f9,7b)),null(),null(),null());
            			}
            		}
HXLINE( 159)		bool _hx_tmp1;
HXDLIN( 159)		if (this->isSustainNote) {
HXLINE( 159)			_hx_tmp1 = ::hx::IsNotNull( prevNote );
            		}
            		else {
HXLINE( 159)			_hx_tmp1 = false;
            		}
HXDLIN( 159)		if (_hx_tmp1) {
HXLINE( 161)			this->set_alpha(((Float)0.6));
HXLINE( 162)			this->multAlpha = ((Float)0.6);
HXLINE( 163)			if (::ClientPrefs_obj::downScroll) {
HXLINE( 163)				this->set_flipY(true);
            			}
HXLINE( 165)			 ::Note _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 165)			Float _hx_tmp1 = _hx_tmp->offsetX;
HXDLIN( 165)			_hx_tmp->offsetX = (_hx_tmp1 + (this->get_width() / ( (Float)(2) )));
HXLINE( 166)			this->copyAngle = false;
HXLINE( 168)			switch((int)(noteData)){
            				case (int)0: {
HXLINE( 171)					this->animation->play(HX_("purpleholdend",40,d5,15,5b),null(),null(),null());
            				}
            				break;
            				case (int)1: {
HXLINE( 173)					this->animation->play(HX_("blueholdend",a2,f0,cd,25),null(),null(),null());
            				}
            				break;
            				case (int)2: {
HXLINE( 175)					this->animation->play(HX_("greenholdend",99,eb,5f,39),null(),null(),null());
            				}
            				break;
            				case (int)3: {
HXLINE( 177)					this->animation->play(HX_("redholdend",cb,ae,1e,ea),null(),null(),null());
            				}
            				break;
            			}
HXLINE( 180)			this->updateHitbox();
HXLINE( 182)			 ::Note _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)			Float _hx_tmp3 = _hx_tmp2->offsetX;
HXDLIN( 182)			_hx_tmp2->offsetX = (_hx_tmp3 - (this->get_width() / ( (Float)(2) )));
HXLINE( 184)			if (::PlayState_obj::isPixelStage) {
HXLINE( 185)				 ::Note _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 185)				_hx_tmp->offsetX = (_hx_tmp->offsetX + 30);
            			}
HXLINE( 187)			if (prevNote->isSustainNote) {
HXLINE( 189)				switch((int)(prevNote->noteData)){
            					case (int)0: {
HXLINE( 192)						prevNote->animation->play(HX_("purplehold",7b,8d,da,cd),null(),null(),null());
            					}
            					break;
            					case (int)1: {
HXLINE( 194)						prevNote->animation->play(HX_("bluehold",d9,60,aa,a4),null(),null(),null());
            					}
            					break;
            					case (int)2: {
HXLINE( 196)						prevNote->animation->play(HX_("greenhold",82,f5,c1,bc),null(),null(),null());
            					}
            					break;
            					case (int)3: {
HXLINE( 198)						prevNote->animation->play(HX_("redhold",10,1f,bf,bf),null(),null(),null());
            					}
            					break;
            				}
HXLINE( 201)				 ::flixel::math::FlxPoint fh = prevNote->scale;
HXDLIN( 201)				fh->set_y((fh->y * ((::Conductor_obj::stepCrochet / ( (Float)(100) )) * ((Float)1.05))));
HXLINE( 202)				if (::hx::IsNotNull( ::PlayState_obj::instance )) {
HXLINE( 204)					 ::flixel::math::FlxPoint fh = prevNote->scale;
HXDLIN( 204)					fh->set_y((fh->y * ::PlayState_obj::instance->songSpeed));
            				}
HXLINE( 207)				if (::PlayState_obj::isPixelStage) {
HXLINE( 208)					 ::flixel::math::FlxPoint fh = prevNote->scale;
HXDLIN( 208)					fh->set_y((fh->y * ((Float)1.19)));
            				}
HXLINE( 210)				prevNote->updateHitbox();
            			}
HXLINE( 214)			if (::PlayState_obj::isPixelStage) {
HXLINE( 215)				 ::flixel::math::FlxPoint fh = this->scale;
HXDLIN( 215)				fh->set_y((fh->y * ::PlayState_obj::daPixelZoom));
HXLINE( 216)				this->updateHitbox();
            			}
            		}
            		else {
HXLINE( 218)			if (!(this->isSustainNote)) {
HXLINE( 219)				this->earlyHitMult = ( (Float)(1) );
            			}
            		}
HXLINE( 221)		this->set_x((this->x + this->offsetX));
            	}

Dynamic Note_obj::__CreateEmpty() { return new Note_obj; }

void *Note_obj::_hx_vtable = 0;

Dynamic Note_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Note_obj > _hx_result = new Note_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool Note_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x08363a36) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x08363a36;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

::String Note_obj::set_texture(::String value){
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_73_set_texture)
HXLINE(  74)		if ((this->texture != value)) {
HXLINE(  75)			this->reloadNote(HX_("",00,00,00,00),value,null());
            		}
HXLINE(  77)		this->texture = value;
HXLINE(  78)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Note_obj,set_texture,return )

::String Note_obj::set_noteType(::String value){
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_81_set_noteType)
HXLINE(  82)		this->noteSplashTexture = ( (::String)(::PlayState_obj::SONG->__Field(HX_("splashSkin",84,03,e1,a1),::hx::paccDynamic)) );
HXLINE(  83)		this->colorSwap->set_hue((( (Float)(::ClientPrefs_obj::arrowHSV->__get(::hx::Mod(this->noteData,4)).StaticCast< ::Array< int > >()->__get(0)) ) / ( (Float)(360) )));
HXLINE(  84)		this->colorSwap->set_saturation((( (Float)(::ClientPrefs_obj::arrowHSV->__get(::hx::Mod(this->noteData,4)).StaticCast< ::Array< int > >()->__get(1)) ) / ( (Float)(100) )));
HXLINE(  85)		this->colorSwap->set_brightness((( (Float)(::ClientPrefs_obj::arrowHSV->__get(::hx::Mod(this->noteData,4)).StaticCast< ::Array< int > >()->__get(2)) ) / ( (Float)(100) )));
HXLINE(  87)		bool _hx_tmp;
HXDLIN(  87)		if ((this->noteData > -1)) {
HXLINE(  87)			_hx_tmp = (this->noteType != value);
            		}
            		else {
HXLINE(  87)			_hx_tmp = false;
            		}
HXDLIN(  87)		if (_hx_tmp) {
HXLINE(  88)			::String _hx_switch_0 = value;
            			if (  (_hx_switch_0==HX_("GF Sing",10,84,6e,29)) ){
HXLINE( 105)				this->gfNote = true;
HXDLIN( 105)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("Hurt Note",a3,41,9e,fe)) ){
HXLINE(  90)				this->ignoreNote = this->mustPress;
HXLINE(  91)				this->reloadNote(HX_("HURT",0f,24,d8,2f),null(),null());
HXLINE(  92)				this->noteSplashTexture = HX_("HURTnoteSplashes",36,d6,ee,48);
HXLINE(  93)				this->colorSwap->set_hue(( (Float)(0) ));
HXLINE(  94)				this->colorSwap->set_saturation(( (Float)(0) ));
HXLINE(  95)				this->colorSwap->set_brightness(( (Float)(0) ));
HXLINE(  96)				if (this->isSustainNote) {
HXLINE(  97)					this->missHealth = ((Float)0.1);
            				}
            				else {
HXLINE(  99)					this->missHealth = ((Float)0.3);
            				}
HXLINE( 101)				this->hitCausesMiss = true;
HXLINE(  89)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("No Animation",65,b2,1a,df)) ){
HXLINE( 103)				this->noAnimation = true;
HXDLIN( 103)				goto _hx_goto_2;
            			}
            			_hx_goto_2:;
HXLINE( 107)			this->noteType = value;
            		}
HXLINE( 109)		this->noteSplashHue = this->colorSwap->hue;
HXLINE( 110)		this->noteSplashSat = this->colorSwap->saturation;
HXLINE( 111)		this->noteSplashBrt = this->colorSwap->brightness;
HXLINE( 112)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Note_obj,set_noteType,return )

void Note_obj::reloadNote(::String __o_prefix,::String __o_texture,::String __o_suffix){
            		::String prefix = __o_prefix;
            		if (::hx::IsNull(__o_prefix)) prefix = HX_("",00,00,00,00);
            		::String texture = __o_texture;
            		if (::hx::IsNull(__o_texture)) texture = HX_("",00,00,00,00);
            		::String suffix = __o_suffix;
            		if (::hx::IsNull(__o_suffix)) suffix = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_224_reloadNote)
HXLINE( 225)		if (::hx::IsNull( prefix )) {
HXLINE( 225)			prefix = HX_("",00,00,00,00);
            		}
HXLINE( 226)		if (::hx::IsNull( texture )) {
HXLINE( 226)			texture = HX_("",00,00,00,00);
            		}
HXLINE( 227)		if (::hx::IsNull( suffix )) {
HXLINE( 227)			suffix = HX_("",00,00,00,00);
            		}
HXLINE( 229)		::String skin = texture;
HXLINE( 230)		if ((texture.length < 1)) {
HXLINE( 231)			skin = ( (::String)(::PlayState_obj::SONG->__Field(HX_("arrowSkin",e6,d4,f8,07),::hx::paccDynamic)) );
HXLINE( 232)			bool _hx_tmp;
HXDLIN( 232)			if (::hx::IsNotNull( skin )) {
HXLINE( 232)				_hx_tmp = (skin.length < 1);
            			}
            			else {
HXLINE( 232)				_hx_tmp = true;
            			}
HXDLIN( 232)			if (_hx_tmp) {
HXLINE( 233)				skin = HX_("NOTE_assets",70,3c,09,f7);
            			}
            		}
HXLINE( 237)		::String animName = null();
HXLINE( 238)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE( 239)			animName = this->animation->_curAnim->name;
            		}
HXLINE( 242)		::Array< ::String > arraySkin = skin.split(HX_("/",2f,00,00,00));
HXLINE( 243)		arraySkin[(arraySkin->length - 1)] = ((prefix + arraySkin->__get((arraySkin->length - 1))) + suffix);
HXLINE( 245)		Float lastScaleY = this->scale->y;
HXLINE( 246)		::String blahblah = arraySkin->join(HX_("/",2f,00,00,00));
HXLINE( 247)		if (::PlayState_obj::isPixelStage) {
HXLINE( 248)			if (this->isSustainNote) {
HXLINE( 249)				::String key = ((HX_("pixelUI/",95,50,4f,7e) + blahblah) + HX_("ENDS",38,24,d7,2d));
HXDLIN( 249)				::String library = null();
HXDLIN( 249)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(key);
HXDLIN( 249)				 ::Dynamic _hx_tmp;
HXDLIN( 249)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 249)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE( 249)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
HXDLIN( 249)				this->loadGraphic(_hx_tmp,null(),null(),null(),null(),null());
HXLINE( 250)				this->set_width((this->get_width() / ( (Float)(4) )));
HXLINE( 251)				this->set_height((this->get_height() / ( (Float)(2) )));
HXLINE( 252)				::String key1 = ((HX_("pixelUI/",95,50,4f,7e) + blahblah) + HX_("ENDS",38,24,d7,2d));
HXDLIN( 252)				::String library1 = null();
HXDLIN( 252)				 ::flixel::graphics::FlxGraphic imageToReturn1 = ::Paths_obj::addCustomGraphic(key1);
HXDLIN( 252)				 ::Dynamic _hx_tmp1;
HXDLIN( 252)				if (::hx::IsNotNull( imageToReturn1 )) {
HXLINE( 252)					_hx_tmp1 = imageToReturn1;
            				}
            				else {
HXLINE( 252)					_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key1) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
            				}
HXDLIN( 252)				int _hx_tmp2 = ::Math_obj::floor(this->get_width());
HXDLIN( 252)				this->loadGraphic(_hx_tmp1,true,_hx_tmp2,::Math_obj::floor(this->get_height()),null(),null());
            			}
            			else {
HXLINE( 254)				::String key = (HX_("pixelUI/",95,50,4f,7e) + blahblah);
HXDLIN( 254)				::String library = null();
HXDLIN( 254)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(key);
HXDLIN( 254)				 ::Dynamic _hx_tmp;
HXDLIN( 254)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 254)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE( 254)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
HXDLIN( 254)				this->loadGraphic(_hx_tmp,null(),null(),null(),null(),null());
HXLINE( 255)				this->set_width((this->get_width() / ( (Float)(4) )));
HXLINE( 256)				this->set_height((this->get_height() / ( (Float)(5) )));
HXLINE( 257)				::String key1 = (HX_("pixelUI/",95,50,4f,7e) + blahblah);
HXDLIN( 257)				::String library1 = null();
HXDLIN( 257)				 ::flixel::graphics::FlxGraphic imageToReturn1 = ::Paths_obj::addCustomGraphic(key1);
HXDLIN( 257)				 ::Dynamic _hx_tmp1;
HXDLIN( 257)				if (::hx::IsNotNull( imageToReturn1 )) {
HXLINE( 257)					_hx_tmp1 = imageToReturn1;
            				}
            				else {
HXLINE( 257)					_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key1) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
            				}
HXDLIN( 257)				int _hx_tmp2 = ::Math_obj::floor(this->get_width());
HXDLIN( 257)				this->loadGraphic(_hx_tmp1,true,_hx_tmp2,::Math_obj::floor(this->get_height()),null(),null());
            			}
HXLINE( 259)			Float _hx_tmp = this->get_width();
HXDLIN( 259)			this->setGraphicSize(::Std_obj::_hx_int((_hx_tmp * ::PlayState_obj::daPixelZoom)),null());
HXLINE( 260)			this->loadPixelNoteAnims();
HXLINE( 261)			this->set_antialiasing(false);
            		}
            		else {
HXLINE( 263)			::String library = null();
HXDLIN( 263)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(blahblah);
HXDLIN( 263)			bool xmlExists = false;
HXDLIN( 263)			if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + blahblah) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 263)				xmlExists = true;
            			}
HXDLIN( 263)			 ::Dynamic _hx_tmp;
HXDLIN( 263)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 263)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE( 263)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(blahblah);
HXDLIN( 263)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 263)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE( 263)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + blahblah) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN( 263)			::String _hx_tmp1;
HXDLIN( 263)			if (xmlExists) {
HXLINE( 263)				_hx_tmp1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + blahblah) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE( 263)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + blahblah) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN( 263)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 264)			this->loadNoteAnims();
HXLINE( 265)			this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
            		}
HXLINE( 267)		if (this->isSustainNote) {
HXLINE( 268)			this->scale->set_y(lastScaleY);
HXLINE( 269)			if (::ClientPrefs_obj::keSustains) {
HXLINE( 270)				 ::flixel::math::FlxPoint fh = this->scale;
HXDLIN( 270)				fh->set_y((fh->y * ((Float)0.75)));
            			}
            		}
HXLINE( 273)		this->updateHitbox();
HXLINE( 275)		if (::hx::IsNotNull( animName )) {
HXLINE( 276)			this->animation->play(animName,true,null(),null());
            		}
HXLINE( 278)		if (this->inEditor) {
HXLINE( 279)			this->setGraphicSize(::editors::ChartingState_obj::GRID_SIZE,::editors::ChartingState_obj::GRID_SIZE);
HXLINE( 280)			this->updateHitbox();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Note_obj,reloadNote,(void))

void Note_obj::loadNoteAnims(){
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_284_loadNoteAnims)
HXLINE( 285)		this->animation->addByPrefix(HX_("greenScroll",30,4f,fe,9e),HX_("green0",0d,dc,7f,15),null(),null(),null(),null());
HXLINE( 286)		this->animation->addByPrefix(HX_("redScroll",3e,78,c3,3a),HX_("red0",bf,4d,a7,4b),null(),null(),null(),null());
HXLINE( 287)		this->animation->addByPrefix(HX_("blueScroll",47,7e,59,a2),HX_("blue0",56,04,01,b5),null(),null(),null(),null());
HXLINE( 288)		this->animation->addByPrefix(HX_("purpleScroll",69,97,67,99),HX_("purple0",74,7e,2d,e7),null(),null(),null(),null());
HXLINE( 290)		if (this->isSustainNote) {
HXLINE( 292)			this->animation->addByPrefix(HX_("purpleholdend",40,d5,15,5b),HX_("pruple end hold",6e,7c,17,3a),null(),null(),null(),null());
HXLINE( 293)			this->animation->addByPrefix(HX_("greenholdend",99,eb,5f,39),HX_("green hold end",77,4d,45,46),null(),null(),null(),null());
HXLINE( 294)			this->animation->addByPrefix(HX_("redholdend",cb,ae,1e,ea),HX_("red hold end",29,c1,a0,b6),null(),null(),null(),null());
HXLINE( 295)			this->animation->addByPrefix(HX_("blueholdend",a2,f0,cd,25),HX_("blue hold end",c0,66,05,ae),null(),null(),null(),null());
HXLINE( 297)			this->animation->addByPrefix(HX_("purplehold",7b,8d,da,cd),HX_("purple hold piece",b1,8b,b1,d3),null(),null(),null(),null());
HXLINE( 298)			this->animation->addByPrefix(HX_("greenhold",82,f5,c1,bc),HX_("green hold piece",8a,42,68,ae),null(),null(),null(),null());
HXLINE( 299)			this->animation->addByPrefix(HX_("redhold",10,1f,bf,bf),HX_("red hold piece",bc,86,4d,83),null(),null(),null(),null());
HXLINE( 300)			this->animation->addByPrefix(HX_("bluehold",d9,60,aa,a4),HX_("blue hold piece",13,00,58,99),null(),null(),null(),null());
            		}
HXLINE( 303)		this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ((Float)0.7))),null());
HXLINE( 304)		this->updateHitbox();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Note_obj,loadNoteAnims,(void))

void Note_obj::loadPixelNoteAnims(){
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_308_loadPixelNoteAnims)
HXDLIN( 308)		if (this->isSustainNote) {
HXLINE( 309)			this->animation->add(HX_("purpleholdend",40,d5,15,5b),::Array_obj< int >::__new(1)->init(0,(::Note_obj::PURP_NOTE + 4)),null(),null(),null(),null());
HXLINE( 310)			this->animation->add(HX_("greenholdend",99,eb,5f,39),::Array_obj< int >::__new(1)->init(0,(::Note_obj::GREEN_NOTE + 4)),null(),null(),null(),null());
HXLINE( 311)			this->animation->add(HX_("redholdend",cb,ae,1e,ea),::Array_obj< int >::__new(1)->init(0,(::Note_obj::RED_NOTE + 4)),null(),null(),null(),null());
HXLINE( 312)			this->animation->add(HX_("blueholdend",a2,f0,cd,25),::Array_obj< int >::__new(1)->init(0,(::Note_obj::BLUE_NOTE + 4)),null(),null(),null(),null());
HXLINE( 314)			this->animation->add(HX_("purplehold",7b,8d,da,cd),::Array_obj< int >::__new(1)->init(0,::Note_obj::PURP_NOTE),null(),null(),null(),null());
HXLINE( 315)			this->animation->add(HX_("greenhold",82,f5,c1,bc),::Array_obj< int >::__new(1)->init(0,::Note_obj::GREEN_NOTE),null(),null(),null(),null());
HXLINE( 316)			this->animation->add(HX_("redhold",10,1f,bf,bf),::Array_obj< int >::__new(1)->init(0,::Note_obj::RED_NOTE),null(),null(),null(),null());
HXLINE( 317)			this->animation->add(HX_("bluehold",d9,60,aa,a4),::Array_obj< int >::__new(1)->init(0,::Note_obj::BLUE_NOTE),null(),null(),null(),null());
            		}
            		else {
HXLINE( 319)			this->animation->add(HX_("greenScroll",30,4f,fe,9e),::Array_obj< int >::__new(1)->init(0,(::Note_obj::GREEN_NOTE + 4)),null(),null(),null(),null());
HXLINE( 320)			this->animation->add(HX_("redScroll",3e,78,c3,3a),::Array_obj< int >::__new(1)->init(0,(::Note_obj::RED_NOTE + 4)),null(),null(),null(),null());
HXLINE( 321)			this->animation->add(HX_("blueScroll",47,7e,59,a2),::Array_obj< int >::__new(1)->init(0,(::Note_obj::BLUE_NOTE + 4)),null(),null(),null(),null());
HXLINE( 322)			this->animation->add(HX_("purpleScroll",69,97,67,99),::Array_obj< int >::__new(1)->init(0,(::Note_obj::PURP_NOTE + 4)),null(),null(),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Note_obj,loadPixelNoteAnims,(void))

void Note_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_327_update)
HXLINE( 328)		this->super::update(elapsed);
HXLINE( 330)		if (this->mustPress) {
HXLINE( 333)			bool _hx_tmp;
HXDLIN( 333)			if ((this->strumTime > (::Conductor_obj::songPosition - ::Conductor_obj::safeZoneOffset))) {
HXLINE( 333)				_hx_tmp = (this->strumTime < (::Conductor_obj::songPosition + (::Conductor_obj::safeZoneOffset * this->earlyHitMult)));
            			}
            			else {
HXLINE( 333)				_hx_tmp = false;
            			}
HXDLIN( 333)			if (_hx_tmp) {
HXLINE( 335)				this->canBeHit = true;
            			}
            			else {
HXLINE( 337)				this->canBeHit = false;
            			}
HXLINE( 339)			bool _hx_tmp1;
HXDLIN( 339)			if ((this->strumTime < (::Conductor_obj::songPosition - ::Conductor_obj::safeZoneOffset))) {
HXLINE( 339)				_hx_tmp1 = !(this->wasGoodHit);
            			}
            			else {
HXLINE( 339)				_hx_tmp1 = false;
            			}
HXDLIN( 339)			if (_hx_tmp1) {
HXLINE( 340)				this->tooLate = true;
            			}
            		}
            		else {
HXLINE( 344)			this->canBeHit = false;
HXLINE( 346)			if ((this->strumTime <= ::Conductor_obj::songPosition)) {
HXLINE( 347)				this->wasGoodHit = true;
            			}
            		}
HXLINE( 350)		bool _hx_tmp;
HXDLIN( 350)		if (this->tooLate) {
HXLINE( 350)			_hx_tmp = !(this->inEditor);
            		}
            		else {
HXLINE( 350)			_hx_tmp = false;
            		}
HXDLIN( 350)		if (_hx_tmp) {
HXLINE( 352)			if ((this->alpha > ((Float)0.3))) {
HXLINE( 353)				this->set_alpha(((Float)0.3));
            			}
            		}
            	}


Float Note_obj::swagWidth;

int Note_obj::PURP_NOTE;

int Note_obj::GREEN_NOTE;

int Note_obj::BLUE_NOTE;

int Note_obj::RED_NOTE;


::hx::ObjectPtr< Note_obj > Note_obj::__new(Float strumTime,int noteData, ::Note prevNote, ::Dynamic __o_sustainNote, ::Dynamic __o_inEditor) {
	::hx::ObjectPtr< Note_obj > __this = new Note_obj();
	__this->__construct(strumTime,noteData,prevNote,__o_sustainNote,__o_inEditor);
	return __this;
}

::hx::ObjectPtr< Note_obj > Note_obj::__alloc(::hx::Ctx *_hx_ctx,Float strumTime,int noteData, ::Note prevNote, ::Dynamic __o_sustainNote, ::Dynamic __o_inEditor) {
	Note_obj *__this = (Note_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Note_obj), true, "Note"));
	*(void **)__this = Note_obj::_hx_vtable;
	__this->__construct(strumTime,noteData,prevNote,__o_sustainNote,__o_inEditor);
	return __this;
}

Note_obj::Note_obj()
{
}

void Note_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Note);
	HX_MARK_MEMBER_NAME(strumTime,"strumTime");
	HX_MARK_MEMBER_NAME(mustPress,"mustPress");
	HX_MARK_MEMBER_NAME(noteData,"noteData");
	HX_MARK_MEMBER_NAME(canBeHit,"canBeHit");
	HX_MARK_MEMBER_NAME(tooLate,"tooLate");
	HX_MARK_MEMBER_NAME(wasGoodHit,"wasGoodHit");
	HX_MARK_MEMBER_NAME(ignoreNote,"ignoreNote");
	HX_MARK_MEMBER_NAME(hitByOpponent,"hitByOpponent");
	HX_MARK_MEMBER_NAME(noteWasHit,"noteWasHit");
	HX_MARK_MEMBER_NAME(prevNote,"prevNote");
	HX_MARK_MEMBER_NAME(sustainLength,"sustainLength");
	HX_MARK_MEMBER_NAME(isSustainNote,"isSustainNote");
	HX_MARK_MEMBER_NAME(noteType,"noteType");
	HX_MARK_MEMBER_NAME(eventName,"eventName");
	HX_MARK_MEMBER_NAME(eventLength,"eventLength");
	HX_MARK_MEMBER_NAME(eventVal1,"eventVal1");
	HX_MARK_MEMBER_NAME(eventVal2,"eventVal2");
	HX_MARK_MEMBER_NAME(colorSwap,"colorSwap");
	HX_MARK_MEMBER_NAME(inEditor,"inEditor");
	HX_MARK_MEMBER_NAME(gfNote,"gfNote");
	HX_MARK_MEMBER_NAME(earlyHitMult,"earlyHitMult");
	HX_MARK_MEMBER_NAME(noteSplashDisabled,"noteSplashDisabled");
	HX_MARK_MEMBER_NAME(noteSplashTexture,"noteSplashTexture");
	HX_MARK_MEMBER_NAME(noteSplashHue,"noteSplashHue");
	HX_MARK_MEMBER_NAME(noteSplashSat,"noteSplashSat");
	HX_MARK_MEMBER_NAME(noteSplashBrt,"noteSplashBrt");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(offsetAngle,"offsetAngle");
	HX_MARK_MEMBER_NAME(multAlpha,"multAlpha");
	HX_MARK_MEMBER_NAME(copyX,"copyX");
	HX_MARK_MEMBER_NAME(copyY,"copyY");
	HX_MARK_MEMBER_NAME(copyAngle,"copyAngle");
	HX_MARK_MEMBER_NAME(copyAlpha,"copyAlpha");
	HX_MARK_MEMBER_NAME(hitHealth,"hitHealth");
	HX_MARK_MEMBER_NAME(missHealth,"missHealth");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(noAnimation,"noAnimation");
	HX_MARK_MEMBER_NAME(hitCausesMiss,"hitCausesMiss");
	HX_MARK_MEMBER_NAME(distance,"distance");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Note_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(strumTime,"strumTime");
	HX_VISIT_MEMBER_NAME(mustPress,"mustPress");
	HX_VISIT_MEMBER_NAME(noteData,"noteData");
	HX_VISIT_MEMBER_NAME(canBeHit,"canBeHit");
	HX_VISIT_MEMBER_NAME(tooLate,"tooLate");
	HX_VISIT_MEMBER_NAME(wasGoodHit,"wasGoodHit");
	HX_VISIT_MEMBER_NAME(ignoreNote,"ignoreNote");
	HX_VISIT_MEMBER_NAME(hitByOpponent,"hitByOpponent");
	HX_VISIT_MEMBER_NAME(noteWasHit,"noteWasHit");
	HX_VISIT_MEMBER_NAME(prevNote,"prevNote");
	HX_VISIT_MEMBER_NAME(sustainLength,"sustainLength");
	HX_VISIT_MEMBER_NAME(isSustainNote,"isSustainNote");
	HX_VISIT_MEMBER_NAME(noteType,"noteType");
	HX_VISIT_MEMBER_NAME(eventName,"eventName");
	HX_VISIT_MEMBER_NAME(eventLength,"eventLength");
	HX_VISIT_MEMBER_NAME(eventVal1,"eventVal1");
	HX_VISIT_MEMBER_NAME(eventVal2,"eventVal2");
	HX_VISIT_MEMBER_NAME(colorSwap,"colorSwap");
	HX_VISIT_MEMBER_NAME(inEditor,"inEditor");
	HX_VISIT_MEMBER_NAME(gfNote,"gfNote");
	HX_VISIT_MEMBER_NAME(earlyHitMult,"earlyHitMult");
	HX_VISIT_MEMBER_NAME(noteSplashDisabled,"noteSplashDisabled");
	HX_VISIT_MEMBER_NAME(noteSplashTexture,"noteSplashTexture");
	HX_VISIT_MEMBER_NAME(noteSplashHue,"noteSplashHue");
	HX_VISIT_MEMBER_NAME(noteSplashSat,"noteSplashSat");
	HX_VISIT_MEMBER_NAME(noteSplashBrt,"noteSplashBrt");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(offsetAngle,"offsetAngle");
	HX_VISIT_MEMBER_NAME(multAlpha,"multAlpha");
	HX_VISIT_MEMBER_NAME(copyX,"copyX");
	HX_VISIT_MEMBER_NAME(copyY,"copyY");
	HX_VISIT_MEMBER_NAME(copyAngle,"copyAngle");
	HX_VISIT_MEMBER_NAME(copyAlpha,"copyAlpha");
	HX_VISIT_MEMBER_NAME(hitHealth,"hitHealth");
	HX_VISIT_MEMBER_NAME(missHealth,"missHealth");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(noAnimation,"noAnimation");
	HX_VISIT_MEMBER_NAME(hitCausesMiss,"hitCausesMiss");
	HX_VISIT_MEMBER_NAME(distance,"distance");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Note_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"copyX") ) { return ::hx::Val( copyX ); }
		if (HX_FIELD_EQ(inName,"copyY") ) { return ::hx::Val( copyY ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"gfNote") ) { return ::hx::Val( gfNote ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tooLate") ) { return ::hx::Val( tooLate ); }
		if (HX_FIELD_EQ(inName,"offsetX") ) { return ::hx::Val( offsetX ); }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return ::hx::Val( offsetY ); }
		if (HX_FIELD_EQ(inName,"texture") ) { return ::hx::Val( texture ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noteData") ) { return ::hx::Val( noteData ); }
		if (HX_FIELD_EQ(inName,"canBeHit") ) { return ::hx::Val( canBeHit ); }
		if (HX_FIELD_EQ(inName,"prevNote") ) { return ::hx::Val( prevNote ); }
		if (HX_FIELD_EQ(inName,"noteType") ) { return ::hx::Val( noteType ); }
		if (HX_FIELD_EQ(inName,"inEditor") ) { return ::hx::Val( inEditor ); }
		if (HX_FIELD_EQ(inName,"distance") ) { return ::hx::Val( distance ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"strumTime") ) { return ::hx::Val( strumTime ); }
		if (HX_FIELD_EQ(inName,"mustPress") ) { return ::hx::Val( mustPress ); }
		if (HX_FIELD_EQ(inName,"eventName") ) { return ::hx::Val( eventName ); }
		if (HX_FIELD_EQ(inName,"eventVal1") ) { return ::hx::Val( eventVal1 ); }
		if (HX_FIELD_EQ(inName,"eventVal2") ) { return ::hx::Val( eventVal2 ); }
		if (HX_FIELD_EQ(inName,"colorSwap") ) { return ::hx::Val( colorSwap ); }
		if (HX_FIELD_EQ(inName,"multAlpha") ) { return ::hx::Val( multAlpha ); }
		if (HX_FIELD_EQ(inName,"copyAngle") ) { return ::hx::Val( copyAngle ); }
		if (HX_FIELD_EQ(inName,"copyAlpha") ) { return ::hx::Val( copyAlpha ); }
		if (HX_FIELD_EQ(inName,"hitHealth") ) { return ::hx::Val( hitHealth ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wasGoodHit") ) { return ::hx::Val( wasGoodHit ); }
		if (HX_FIELD_EQ(inName,"ignoreNote") ) { return ::hx::Val( ignoreNote ); }
		if (HX_FIELD_EQ(inName,"noteWasHit") ) { return ::hx::Val( noteWasHit ); }
		if (HX_FIELD_EQ(inName,"missHealth") ) { return ::hx::Val( missHealth ); }
		if (HX_FIELD_EQ(inName,"reloadNote") ) { return ::hx::Val( reloadNote_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"eventLength") ) { return ::hx::Val( eventLength ); }
		if (HX_FIELD_EQ(inName,"offsetAngle") ) { return ::hx::Val( offsetAngle ); }
		if (HX_FIELD_EQ(inName,"noAnimation") ) { return ::hx::Val( noAnimation ); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return ::hx::Val( set_texture_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"earlyHitMult") ) { return ::hx::Val( earlyHitMult ); }
		if (HX_FIELD_EQ(inName,"set_noteType") ) { return ::hx::Val( set_noteType_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hitByOpponent") ) { return ::hx::Val( hitByOpponent ); }
		if (HX_FIELD_EQ(inName,"sustainLength") ) { return ::hx::Val( sustainLength ); }
		if (HX_FIELD_EQ(inName,"isSustainNote") ) { return ::hx::Val( isSustainNote ); }
		if (HX_FIELD_EQ(inName,"noteSplashHue") ) { return ::hx::Val( noteSplashHue ); }
		if (HX_FIELD_EQ(inName,"noteSplashSat") ) { return ::hx::Val( noteSplashSat ); }
		if (HX_FIELD_EQ(inName,"noteSplashBrt") ) { return ::hx::Val( noteSplashBrt ); }
		if (HX_FIELD_EQ(inName,"hitCausesMiss") ) { return ::hx::Val( hitCausesMiss ); }
		if (HX_FIELD_EQ(inName,"loadNoteAnims") ) { return ::hx::Val( loadNoteAnims_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"noteSplashTexture") ) { return ::hx::Val( noteSplashTexture ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"noteSplashDisabled") ) { return ::hx::Val( noteSplashDisabled ); }
		if (HX_FIELD_EQ(inName,"loadPixelNoteAnims") ) { return ::hx::Val( loadPixelNoteAnims_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Note_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"RED_NOTE") ) { outValue = ( RED_NOTE ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"swagWidth") ) { outValue = ( swagWidth ); return true; }
		if (HX_FIELD_EQ(inName,"PURP_NOTE") ) { outValue = ( PURP_NOTE ); return true; }
		if (HX_FIELD_EQ(inName,"BLUE_NOTE") ) { outValue = ( BLUE_NOTE ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"GREEN_NOTE") ) { outValue = ( GREEN_NOTE ); return true; }
	}
	return false;
}

::hx::Val Note_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"copyX") ) { copyX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"copyY") ) { copyY=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"gfNote") ) { gfNote=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tooLate") ) { tooLate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_texture(inValue.Cast< ::String >()) );texture=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noteData") ) { noteData=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canBeHit") ) { canBeHit=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prevNote") ) { prevNote=inValue.Cast<  ::Note >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noteType") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_noteType(inValue.Cast< ::String >()) );noteType=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inEditor") ) { inEditor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"distance") ) { distance=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"strumTime") ) { strumTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mustPress") ) { mustPress=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"eventName") ) { eventName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"eventVal1") ) { eventVal1=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"eventVal2") ) { eventVal2=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorSwap") ) { colorSwap=inValue.Cast<  ::ColorSwap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"multAlpha") ) { multAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"copyAngle") ) { copyAngle=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"copyAlpha") ) { copyAlpha=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hitHealth") ) { hitHealth=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wasGoodHit") ) { wasGoodHit=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ignoreNote") ) { ignoreNote=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noteWasHit") ) { noteWasHit=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"missHealth") ) { missHealth=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"eventLength") ) { eventLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetAngle") ) { offsetAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noAnimation") ) { noAnimation=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"earlyHitMult") ) { earlyHitMult=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hitByOpponent") ) { hitByOpponent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sustainLength") ) { sustainLength=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isSustainNote") ) { isSustainNote=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noteSplashHue") ) { noteSplashHue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noteSplashSat") ) { noteSplashSat=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noteSplashBrt") ) { noteSplashBrt=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hitCausesMiss") ) { hitCausesMiss=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"noteSplashTexture") ) { noteSplashTexture=inValue.Cast< ::String >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"noteSplashDisabled") ) { noteSplashDisabled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Note_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"RED_NOTE") ) { RED_NOTE=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"swagWidth") ) { swagWidth=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"PURP_NOTE") ) { PURP_NOTE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"BLUE_NOTE") ) { BLUE_NOTE=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"GREEN_NOTE") ) { GREEN_NOTE=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Note_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("strumTime",f6,2d,21,f4));
	outFields->push(HX_("mustPress",ba,d4,17,60));
	outFields->push(HX_("noteData",3c,7b,96,51));
	outFields->push(HX_("canBeHit",20,a6,d1,1e));
	outFields->push(HX_("tooLate",da,77,57,55));
	outFields->push(HX_("wasGoodHit",ed,7a,9b,17));
	outFields->push(HX_("ignoreNote",24,ee,32,49));
	outFields->push(HX_("hitByOpponent",c7,8a,37,cc));
	outFields->push(HX_("noteWasHit",3c,ca,a4,58));
	outFields->push(HX_("prevNote",85,f8,d7,11));
	outFields->push(HX_("sustainLength",e9,a1,9c,7c));
	outFields->push(HX_("isSustainNote",6b,1e,77,c3));
	outFields->push(HX_("noteType",cc,17,3c,5c));
	outFields->push(HX_("eventName",85,7b,0c,f8));
	outFields->push(HX_("eventLength",a0,e0,54,f2));
	outFields->push(HX_("eventVal1",6a,2f,56,fd));
	outFields->push(HX_("eventVal2",6b,2f,56,fd));
	outFields->push(HX_("colorSwap",96,b5,cb,27));
	outFields->push(HX_("inEditor",72,8b,5b,c4));
	outFields->push(HX_("gfNote",b1,99,84,1d));
	outFields->push(HX_("earlyHitMult",80,a9,e2,17));
	outFields->push(HX_("noteSplashDisabled",95,ad,6f,54));
	outFields->push(HX_("noteSplashTexture",e2,22,64,f9));
	outFields->push(HX_("noteSplashHue",3f,5b,ed,f6));
	outFields->push(HX_("noteSplashSat",ad,a2,f5,f6));
	outFields->push(HX_("noteSplashBrt",2b,cb,e8,f6));
	outFields->push(HX_("offsetX",65,09,65,d7));
	outFields->push(HX_("offsetY",66,09,65,d7));
	outFields->push(HX_("offsetAngle",40,c7,62,bb));
	outFields->push(HX_("multAlpha",4e,e9,0f,96));
	outFields->push(HX_("copyX",03,83,5f,4a));
	outFields->push(HX_("copyY",04,83,5f,4a));
	outFields->push(HX_("copyAngle",de,67,dd,a8));
	outFields->push(HX_("copyAlpha",69,cb,91,a7));
	outFields->push(HX_("hitHealth",4f,e3,17,31));
	outFields->push(HX_("missHealth",b8,54,21,f6));
	outFields->push(HX_("texture",db,c8,e0,9e));
	outFields->push(HX_("noAnimation",83,de,e3,ac));
	outFields->push(HX_("hitCausesMiss",39,dc,fd,91));
	outFields->push(HX_("distance",35,93,f9,6b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Note_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Note_obj,strumTime),HX_("strumTime",f6,2d,21,f4)},
	{::hx::fsBool,(int)offsetof(Note_obj,mustPress),HX_("mustPress",ba,d4,17,60)},
	{::hx::fsInt,(int)offsetof(Note_obj,noteData),HX_("noteData",3c,7b,96,51)},
	{::hx::fsBool,(int)offsetof(Note_obj,canBeHit),HX_("canBeHit",20,a6,d1,1e)},
	{::hx::fsBool,(int)offsetof(Note_obj,tooLate),HX_("tooLate",da,77,57,55)},
	{::hx::fsBool,(int)offsetof(Note_obj,wasGoodHit),HX_("wasGoodHit",ed,7a,9b,17)},
	{::hx::fsBool,(int)offsetof(Note_obj,ignoreNote),HX_("ignoreNote",24,ee,32,49)},
	{::hx::fsBool,(int)offsetof(Note_obj,hitByOpponent),HX_("hitByOpponent",c7,8a,37,cc)},
	{::hx::fsBool,(int)offsetof(Note_obj,noteWasHit),HX_("noteWasHit",3c,ca,a4,58)},
	{::hx::fsObject /*  ::Note */ ,(int)offsetof(Note_obj,prevNote),HX_("prevNote",85,f8,d7,11)},
	{::hx::fsFloat,(int)offsetof(Note_obj,sustainLength),HX_("sustainLength",e9,a1,9c,7c)},
	{::hx::fsBool,(int)offsetof(Note_obj,isSustainNote),HX_("isSustainNote",6b,1e,77,c3)},
	{::hx::fsString,(int)offsetof(Note_obj,noteType),HX_("noteType",cc,17,3c,5c)},
	{::hx::fsString,(int)offsetof(Note_obj,eventName),HX_("eventName",85,7b,0c,f8)},
	{::hx::fsInt,(int)offsetof(Note_obj,eventLength),HX_("eventLength",a0,e0,54,f2)},
	{::hx::fsString,(int)offsetof(Note_obj,eventVal1),HX_("eventVal1",6a,2f,56,fd)},
	{::hx::fsString,(int)offsetof(Note_obj,eventVal2),HX_("eventVal2",6b,2f,56,fd)},
	{::hx::fsObject /*  ::ColorSwap */ ,(int)offsetof(Note_obj,colorSwap),HX_("colorSwap",96,b5,cb,27)},
	{::hx::fsBool,(int)offsetof(Note_obj,inEditor),HX_("inEditor",72,8b,5b,c4)},
	{::hx::fsBool,(int)offsetof(Note_obj,gfNote),HX_("gfNote",b1,99,84,1d)},
	{::hx::fsFloat,(int)offsetof(Note_obj,earlyHitMult),HX_("earlyHitMult",80,a9,e2,17)},
	{::hx::fsBool,(int)offsetof(Note_obj,noteSplashDisabled),HX_("noteSplashDisabled",95,ad,6f,54)},
	{::hx::fsString,(int)offsetof(Note_obj,noteSplashTexture),HX_("noteSplashTexture",e2,22,64,f9)},
	{::hx::fsFloat,(int)offsetof(Note_obj,noteSplashHue),HX_("noteSplashHue",3f,5b,ed,f6)},
	{::hx::fsFloat,(int)offsetof(Note_obj,noteSplashSat),HX_("noteSplashSat",ad,a2,f5,f6)},
	{::hx::fsFloat,(int)offsetof(Note_obj,noteSplashBrt),HX_("noteSplashBrt",2b,cb,e8,f6)},
	{::hx::fsFloat,(int)offsetof(Note_obj,offsetX),HX_("offsetX",65,09,65,d7)},
	{::hx::fsFloat,(int)offsetof(Note_obj,offsetY),HX_("offsetY",66,09,65,d7)},
	{::hx::fsFloat,(int)offsetof(Note_obj,offsetAngle),HX_("offsetAngle",40,c7,62,bb)},
	{::hx::fsFloat,(int)offsetof(Note_obj,multAlpha),HX_("multAlpha",4e,e9,0f,96)},
	{::hx::fsBool,(int)offsetof(Note_obj,copyX),HX_("copyX",03,83,5f,4a)},
	{::hx::fsBool,(int)offsetof(Note_obj,copyY),HX_("copyY",04,83,5f,4a)},
	{::hx::fsBool,(int)offsetof(Note_obj,copyAngle),HX_("copyAngle",de,67,dd,a8)},
	{::hx::fsBool,(int)offsetof(Note_obj,copyAlpha),HX_("copyAlpha",69,cb,91,a7)},
	{::hx::fsFloat,(int)offsetof(Note_obj,hitHealth),HX_("hitHealth",4f,e3,17,31)},
	{::hx::fsFloat,(int)offsetof(Note_obj,missHealth),HX_("missHealth",b8,54,21,f6)},
	{::hx::fsString,(int)offsetof(Note_obj,texture),HX_("texture",db,c8,e0,9e)},
	{::hx::fsBool,(int)offsetof(Note_obj,noAnimation),HX_("noAnimation",83,de,e3,ac)},
	{::hx::fsBool,(int)offsetof(Note_obj,hitCausesMiss),HX_("hitCausesMiss",39,dc,fd,91)},
	{::hx::fsFloat,(int)offsetof(Note_obj,distance),HX_("distance",35,93,f9,6b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Note_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Note_obj::swagWidth,HX_("swagWidth",1c,87,d9,a6)},
	{::hx::fsInt,(void *) &Note_obj::PURP_NOTE,HX_("PURP_NOTE",ee,97,79,1e)},
	{::hx::fsInt,(void *) &Note_obj::GREEN_NOTE,HX_("GREEN_NOTE",4e,c6,8e,9c)},
	{::hx::fsInt,(void *) &Note_obj::BLUE_NOTE,HX_("BLUE_NOTE",f7,42,53,a9)},
	{::hx::fsInt,(void *) &Note_obj::RED_NOTE,HX_("RED_NOTE",00,15,92,9e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Note_obj_sMemberFields[] = {
	HX_("strumTime",f6,2d,21,f4),
	HX_("mustPress",ba,d4,17,60),
	HX_("noteData",3c,7b,96,51),
	HX_("canBeHit",20,a6,d1,1e),
	HX_("tooLate",da,77,57,55),
	HX_("wasGoodHit",ed,7a,9b,17),
	HX_("ignoreNote",24,ee,32,49),
	HX_("hitByOpponent",c7,8a,37,cc),
	HX_("noteWasHit",3c,ca,a4,58),
	HX_("prevNote",85,f8,d7,11),
	HX_("sustainLength",e9,a1,9c,7c),
	HX_("isSustainNote",6b,1e,77,c3),
	HX_("noteType",cc,17,3c,5c),
	HX_("eventName",85,7b,0c,f8),
	HX_("eventLength",a0,e0,54,f2),
	HX_("eventVal1",6a,2f,56,fd),
	HX_("eventVal2",6b,2f,56,fd),
	HX_("colorSwap",96,b5,cb,27),
	HX_("inEditor",72,8b,5b,c4),
	HX_("gfNote",b1,99,84,1d),
	HX_("earlyHitMult",80,a9,e2,17),
	HX_("noteSplashDisabled",95,ad,6f,54),
	HX_("noteSplashTexture",e2,22,64,f9),
	HX_("noteSplashHue",3f,5b,ed,f6),
	HX_("noteSplashSat",ad,a2,f5,f6),
	HX_("noteSplashBrt",2b,cb,e8,f6),
	HX_("offsetX",65,09,65,d7),
	HX_("offsetY",66,09,65,d7),
	HX_("offsetAngle",40,c7,62,bb),
	HX_("multAlpha",4e,e9,0f,96),
	HX_("copyX",03,83,5f,4a),
	HX_("copyY",04,83,5f,4a),
	HX_("copyAngle",de,67,dd,a8),
	HX_("copyAlpha",69,cb,91,a7),
	HX_("hitHealth",4f,e3,17,31),
	HX_("missHealth",b8,54,21,f6),
	HX_("texture",db,c8,e0,9e),
	HX_("noAnimation",83,de,e3,ac),
	HX_("hitCausesMiss",39,dc,fd,91),
	HX_("distance",35,93,f9,6b),
	HX_("set_texture",fe,2f,48,2f),
	HX_("set_noteType",49,ef,4e,26),
	HX_("reloadNote",eb,b7,11,94),
	HX_("loadNoteAnims",ea,e4,d6,e2),
	HX_("loadPixelNoteAnims",50,91,b2,72),
	HX_("update",09,86,05,87),
	::String(null()) };

static void Note_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Note_obj::swagWidth,"swagWidth");
	HX_MARK_MEMBER_NAME(Note_obj::PURP_NOTE,"PURP_NOTE");
	HX_MARK_MEMBER_NAME(Note_obj::GREEN_NOTE,"GREEN_NOTE");
	HX_MARK_MEMBER_NAME(Note_obj::BLUE_NOTE,"BLUE_NOTE");
	HX_MARK_MEMBER_NAME(Note_obj::RED_NOTE,"RED_NOTE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Note_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Note_obj::swagWidth,"swagWidth");
	HX_VISIT_MEMBER_NAME(Note_obj::PURP_NOTE,"PURP_NOTE");
	HX_VISIT_MEMBER_NAME(Note_obj::GREEN_NOTE,"GREEN_NOTE");
	HX_VISIT_MEMBER_NAME(Note_obj::BLUE_NOTE,"BLUE_NOTE");
	HX_VISIT_MEMBER_NAME(Note_obj::RED_NOTE,"RED_NOTE");
};

#endif

::hx::Class Note_obj::__mClass;

static ::String Note_obj_sStaticFields[] = {
	HX_("swagWidth",1c,87,d9,a6),
	HX_("PURP_NOTE",ee,97,79,1e),
	HX_("GREEN_NOTE",4e,c6,8e,9c),
	HX_("BLUE_NOTE",f7,42,53,a9),
	HX_("RED_NOTE",00,15,92,9e),
	::String(null())
};

void Note_obj::__register()
{
	Note_obj _hx_dummy;
	Note_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Note",12,44,e3,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Note_obj::__GetStatic;
	__mClass->mSetStaticField = &Note_obj::__SetStatic;
	__mClass->mMarkFunc = Note_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Note_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Note_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Note_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Note_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Note_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Note_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Note_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_41_boot)
HXDLIN(  41)		swagWidth = ((Float)112.);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_42_boot)
HXDLIN(  42)		PURP_NOTE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_43_boot)
HXDLIN(  43)		GREEN_NOTE = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_44_boot)
HXDLIN(  44)		BLUE_NOTE = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_45_boot)
HXDLIN(  45)		RED_NOTE = 3;
            	}
}

