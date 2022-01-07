#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_CustomFadeTransition
#include <CustomFadeTransition.h>
#endif
#ifndef INCLUDED_FreeplayState
#include <FreeplayState.h>
#endif
#ifndef INCLUDED_Highscore
#include <Highscore.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PauseSubState
#include <PauseSubState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Song
#include <Song.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StoryMenuState
#include <StoryMenuState.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
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
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
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
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
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
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
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
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_17d383cbce329512_17_new,"PauseSubState","new",0x00d575d9,"PauseSubState.new","PauseSubState.hx",17,0x953dc7b7)
static const ::String _hx_array_data_08e59567_3[] = {
	HX_("Resume",cd,dd,18,3d),HX_("Restart Song",06,b6,fe,13),HX_("Change Difficulty",eb,7e,37,a6),HX_("Botplay",5b,23,fb,2e),HX_("Exit to menu",82,87,9a,a9),
};
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_129_update,"PauseSubState","update",0x6d53d230,"PauseSubState.update","PauseSubState.hx",129,0x953dc7b7)
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_220_destroy,"PauseSubState","destroy",0xc2ba82f3,"PauseSubState.destroy","PauseSubState.hx",220,0x953dc7b7)
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_227_changeSelection,"PauseSubState","changeSelection",0x8f960fb5,"PauseSubState.changeSelection","PauseSubState.hx",227,0x953dc7b7)
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_255_regenMenu,"PauseSubState","regenMenu",0xfb4cc935,"PauseSubState.regenMenu","PauseSubState.hx",255,0x953dc7b7)
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_203_restartSong,"PauseSubState","restartSong",0x7c01f1bd,"PauseSubState.restartSong","PauseSubState.hx",203,0x953dc7b7)

void PauseSubState_obj::__construct(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_17d383cbce329512_17_new)
HXLINE(  24)		this->curSelected = 0;
HXLINE(  23)		this->difficultyChoices = ::Array_obj< ::String >::__new(0);
HXLINE(  22)		this->menuItemsOG = ::Array_obj< ::String >::fromData( _hx_array_data_08e59567_3,5);
HXLINE(  21)		this->menuItems = ::Array_obj< ::String >::__new(0);
HXLINE(  34)		super::__construct();
HXLINE(  35)		if ((::CoolUtil_obj::difficulties->length < 2)) {
HXLINE(  35)			this->menuItemsOG->remove(HX_("Change Difficulty",eb,7e,37,a6));
            		}
HXLINE(  37)		if (::PlayState_obj::chartingMode) {
HXLINE(  39)			this->menuItemsOG->insert(2,HX_("Toggle Practice Mode",7c,8b,b4,6b));
HXLINE(  40)			this->menuItemsOG->insert(3,HX_("Toggle Botplay",ef,6e,ca,1a));
            		}
HXLINE(  42)		this->menuItems = this->menuItemsOG;
HXLINE(  44)		{
HXLINE(  44)			int _g = 0;
HXDLIN(  44)			int _g1 = ::CoolUtil_obj::difficulties->length;
HXDLIN(  44)			while((_g < _g1)){
HXLINE(  44)				_g = (_g + 1);
HXDLIN(  44)				int i = (_g - 1);
HXLINE(  45)				::String diff = (HX_("",00,00,00,00) + ::CoolUtil_obj::difficulties->__get(i));
HXLINE(  46)				this->difficultyChoices->push(diff);
            			}
            		}
HXLINE(  48)		this->difficultyChoices->push(HX_("BACK",27,a2,d1,2b));
HXLINE(  50)		 ::flixel::_hx_system::FlxSound _hx_tmp =  ::flixel::_hx_system::FlxSound_obj::__alloc( HX_CTX );
HXDLIN(  50)		::String library = null();
HXDLIN(  50)		::String file = ::Paths_obj::modFolders((((HX_("music/",ea,bf,1b,3f) + HX_("breakfast",db,b2,0c,49)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
HXDLIN(  50)		 ::Dynamic _hx_tmp1;
HXDLIN(  50)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  50)			if (!(::Paths_obj::customSoundsLoaded->exists(file))) {
HXLINE(  50)				::Dynamic this1 = ::Paths_obj::customSoundsLoaded;
HXDLIN(  50)				( ( ::haxe::ds::StringMap)(this1) )->set(file,::openfl::media::Sound_obj::fromFile(file));
            			}
HXDLIN(  50)			_hx_tmp1 = ::Paths_obj::customSoundsLoaded->get(file);
            		}
            		else {
HXLINE(  50)			_hx_tmp1 = ::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("breakfast",db,b2,0c,49)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library);
            		}
HXDLIN(  50)		this->pauseMusic = _hx_tmp->loadEmbedded(_hx_tmp1,true,true,null());
HXLINE(  51)		this->pauseMusic->set_volume(( (Float)(0) ));
HXLINE(  52)		 ::flixel::_hx_system::FlxSound _hx_tmp2 = this->pauseMusic;
HXDLIN(  52)		 ::flixel::math::FlxRandom _hx_tmp3 = ::flixel::FlxG_obj::random;
HXDLIN(  52)		_hx_tmp2->play(false,_hx_tmp3->_hx_int(0,::Std_obj::_hx_int((this->pauseMusic->_length / ( (Float)(2) ))),null()),null());
HXLINE(  54)		::flixel::FlxG_obj::sound->list->add(this->pauseMusic).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXLINE(  56)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  57)		bg->set_alpha(( (Float)(0) ));
HXLINE(  58)		bg->scrollFactor->set(null(),null());
HXLINE(  59)		this->add(bg);
HXLINE(  61)		 ::flixel::text::FlxText levelInfo =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,15,0,HX_("",00,00,00,00),32,null());
HXLINE(  62)		levelInfo->set_text(( (::String)((levelInfo->text + ::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic))) ));
HXLINE(  63)		levelInfo->scrollFactor->set(null(),null());
HXLINE(  64)		::String file1 = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  64)		::String _hx_tmp4;
HXDLIN(  64)		if (::sys::FileSystem_obj::exists(file1)) {
HXLINE(  64)			_hx_tmp4 = file1;
            		}
            		else {
HXLINE(  64)			_hx_tmp4 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  64)		levelInfo->setFormat(_hx_tmp4,32,null(),null(),null(),null(),null());
HXLINE(  65)		levelInfo->updateHitbox();
HXLINE(  66)		this->add(levelInfo);
HXLINE(  68)		 ::flixel::text::FlxText levelDifficulty =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,47,0,HX_("",00,00,00,00),32,null());
HXLINE(  69)		::String levelDifficulty1 = levelDifficulty->text;
HXDLIN(  69)		levelDifficulty->set_text((levelDifficulty1 + ::CoolUtil_obj::difficultyString()));
HXLINE(  70)		levelDifficulty->scrollFactor->set(null(),null());
HXLINE(  71)		::String file2 = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  71)		::String _hx_tmp5;
HXDLIN(  71)		if (::sys::FileSystem_obj::exists(file2)) {
HXLINE(  71)			_hx_tmp5 = file2;
            		}
            		else {
HXLINE(  71)			_hx_tmp5 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  71)		levelDifficulty->setFormat(_hx_tmp5,32,null(),null(),null(),null(),null());
HXLINE(  72)		levelDifficulty->updateHitbox();
HXLINE(  73)		this->add(levelDifficulty);
HXLINE(  75)		 ::flixel::text::FlxText blueballedTxt =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,79,0,HX_("",00,00,00,00),32,null());
HXLINE(  76)		blueballedTxt->set_text((HX_("Blueballed: ",fe,a6,48,b4) + ::PlayState_obj::deathCounter));
HXLINE(  77)		blueballedTxt->scrollFactor->set(null(),null());
HXLINE(  78)		::String file3 = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  78)		::String _hx_tmp6;
HXDLIN(  78)		if (::sys::FileSystem_obj::exists(file3)) {
HXLINE(  78)			_hx_tmp6 = file3;
            		}
            		else {
HXLINE(  78)			_hx_tmp6 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  78)		blueballedTxt->setFormat(_hx_tmp6,32,null(),null(),null(),null(),null());
HXLINE(  79)		blueballedTxt->updateHitbox();
HXLINE(  80)		this->add(blueballedTxt);
HXLINE(  82)		this->practiceText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,116,0,HX_("PRACTICE MODE",e8,14,ba,86),32,null());
HXLINE(  83)		this->practiceText->scrollFactor->set(null(),null());
HXLINE(  84)		 ::flixel::text::FlxText _hx_tmp7 = this->practiceText;
HXDLIN(  84)		::String file4 = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  84)		::String _hx_tmp8;
HXDLIN(  84)		if (::sys::FileSystem_obj::exists(file4)) {
HXLINE(  84)			_hx_tmp8 = file4;
            		}
            		else {
HXLINE(  84)			_hx_tmp8 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  84)		_hx_tmp7->setFormat(_hx_tmp8,32,null(),null(),null(),null(),null());
HXLINE(  85)		 ::flixel::text::FlxText _hx_tmp9 = this->practiceText;
HXDLIN(  85)		int _hx_tmp10 = ::flixel::FlxG_obj::width;
HXDLIN(  85)		_hx_tmp9->set_x((( (Float)(_hx_tmp10) ) - (this->practiceText->get_width() + 20)));
HXLINE(  86)		this->practiceText->updateHitbox();
HXLINE(  87)		this->practiceText->set_visible(::PlayState_obj::instance->practiceMode);
HXLINE(  88)		this->add(this->practiceText);
HXLINE(  90)		 ::flixel::text::FlxText chartingText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,116,0,HX_("CHARTING MODE",3f,46,f9,44),32,null());
HXLINE(  91)		chartingText->scrollFactor->set(null(),null());
HXLINE(  92)		::String file5 = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  92)		::String _hx_tmp11;
HXDLIN(  92)		if (::sys::FileSystem_obj::exists(file5)) {
HXLINE(  92)			_hx_tmp11 = file5;
            		}
            		else {
HXLINE(  92)			_hx_tmp11 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  92)		chartingText->setFormat(_hx_tmp11,32,null(),null(),null(),null(),null());
HXLINE(  93)		int _hx_tmp12 = ::flixel::FlxG_obj::width;
HXDLIN(  93)		chartingText->set_x((( (Float)(_hx_tmp12) ) - (chartingText->get_width() + 20)));
HXLINE(  94)		int _hx_tmp13 = ::flixel::FlxG_obj::height;
HXDLIN(  94)		chartingText->set_y((( (Float)(_hx_tmp13) ) - (chartingText->get_height() + 20)));
HXLINE(  95)		chartingText->updateHitbox();
HXLINE(  96)		chartingText->set_visible(::PlayState_obj::chartingMode);
HXLINE(  97)		this->add(chartingText);
HXLINE(  99)		blueballedTxt->set_alpha(( (Float)(0) ));
HXLINE( 100)		levelDifficulty->set_alpha(( (Float)(0) ));
HXLINE( 101)		levelInfo->set_alpha(( (Float)(0) ));
HXLINE( 103)		int _hx_tmp14 = ::flixel::FlxG_obj::width;
HXDLIN( 103)		levelInfo->set_x((( (Float)(_hx_tmp14) ) - (levelInfo->get_width() + 20)));
HXLINE( 104)		int _hx_tmp15 = ::flixel::FlxG_obj::width;
HXDLIN( 104)		levelDifficulty->set_x((( (Float)(_hx_tmp15) ) - (levelDifficulty->get_width() + 20)));
HXLINE( 105)		int _hx_tmp16 = ::flixel::FlxG_obj::width;
HXDLIN( 105)		blueballedTxt->set_x((( (Float)(_hx_tmp16) ) - (blueballedTxt->get_width() + 20)));
HXLINE( 107)		::flixel::tweens::FlxTween_obj::tween(bg, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),((Float)0.6))),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE( 108)		::flixel::tweens::FlxTween_obj::tween(levelInfo, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),20)
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.3))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE( 109)		::flixel::tweens::FlxTween_obj::tween(levelDifficulty, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),(levelDifficulty->y + 5))
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.5))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE( 110)		::flixel::tweens::FlxTween_obj::tween(blueballedTxt, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),(blueballedTxt->y + 5))
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.7))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE( 112)		this->grpMenuShit =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 113)		this->add(this->grpMenuShit);
HXLINE( 115)		{
HXLINE( 115)			int _g2 = 0;
HXDLIN( 115)			int _g3 = this->menuItems->length;
HXDLIN( 115)			while((_g2 < _g3)){
HXLINE( 115)				_g2 = (_g2 + 1);
HXDLIN( 115)				int i = (_g2 - 1);
HXLINE( 117)				 ::Alphabet songText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->menuItems->__get(i),true,false,null(),null());
HXLINE( 118)				songText->isMenuItem = true;
HXLINE( 119)				songText->targetY = ( (Float)(i) );
HXLINE( 120)				this->grpMenuShit->add(songText).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE( 123)		this->changeSelection(null());
HXLINE( 125)		this->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::FlxG_obj::cameras->list->__get((::flixel::FlxG_obj::cameras->list->length - 1)).StaticCast<  ::flixel::FlxCamera >()));
            	}

Dynamic PauseSubState_obj::__CreateEmpty() { return new PauseSubState_obj; }

void *PauseSubState_obj::_hx_vtable = 0;

Dynamic PauseSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PauseSubState_obj > _hx_result = new PauseSubState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool PauseSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x519cdafb) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x519cdafb;
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

void PauseSubState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_17d383cbce329512_129_update)
HXLINE( 130)		if ((this->pauseMusic->_volume < ((Float)0.5))) {
HXLINE( 131)			 ::flixel::_hx_system::FlxSound fh = this->pauseMusic;
HXDLIN( 131)			fh->set_volume((fh->_volume + (((Float)0.01) * elapsed)));
            		}
HXLINE( 133)		this->super::update(elapsed);
HXLINE( 135)		bool upP = ::PlayerSettings_obj::player1->controls->_ui_upP->check();
HXLINE( 136)		bool downP = ::PlayerSettings_obj::player1->controls->_ui_downP->check();
HXLINE( 137)		bool accepted = ::PlayerSettings_obj::player1->controls->_accept->check();
HXLINE( 139)		if (upP) {
HXLINE( 141)			this->changeSelection(-1);
            		}
HXLINE( 143)		if (downP) {
HXLINE( 145)			this->changeSelection(1);
            		}
HXLINE( 148)		if (accepted) {
HXLINE( 150)			::String daSelected = this->menuItems->__get(this->curSelected);
HXLINE( 151)			if (this->difficultyChoices->contains(daSelected)) {
HXLINE( 152)				::String name = ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase();
HXLINE( 153)				::String poop = ::Highscore_obj::formatSong(name,this->curSelected);
HXLINE( 154)				::PlayState_obj::SONG = ::Song_obj::loadFromJson(poop,name);
HXLINE( 155)				::PlayState_obj::storyDifficulty = this->curSelected;
HXLINE( 156)				::CustomFadeTransition_obj::nextCamera = ::PauseSubState_obj::transCamera;
HXLINE( 157)				::MusicBeatState_obj::resetState();
HXLINE( 158)				::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
HXLINE( 159)				::PlayState_obj::changedDifficulty = true;
HXLINE( 160)				::PlayState_obj::chartingMode = false;
HXLINE( 161)				return;
            			}
HXLINE( 164)			::String _hx_switch_0 = daSelected;
            			if (  (_hx_switch_0==HX_("BACK",27,a2,d1,2b)) ){
HXLINE( 196)				this->menuItems = this->menuItemsOG;
HXLINE( 197)				this->regenMenu();
HXLINE( 195)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("Change Difficulty",eb,7e,37,a6)) ){
HXLINE( 169)				this->menuItems = this->difficultyChoices;
HXLINE( 170)				this->regenMenu();
HXLINE( 168)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("Exit to menu",82,87,9a,a9)) ){
HXLINE( 184)				::PlayState_obj::deathCounter = 0;
HXLINE( 185)				::PlayState_obj::seenCutscene = false;
HXLINE( 186)				if (::PlayState_obj::isStoryMode) {
HXLINE( 187)					::MusicBeatState_obj::switchState( ::StoryMenuState_obj::__alloc( HX_CTX ,null(),null()));
            				}
            				else {
HXLINE( 189)					::MusicBeatState_obj::switchState( ::FreeplayState_obj::__alloc( HX_CTX ,null(),null()));
            				}
HXLINE( 191)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 191)				::String library = null();
HXDLIN( 191)				::String file = ::Paths_obj::modFolders((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
HXDLIN( 191)				 ::Dynamic _hx_tmp1;
HXDLIN( 191)				if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 191)					if (!(::Paths_obj::customSoundsLoaded->exists(file))) {
HXLINE( 191)						::Dynamic this1 = ::Paths_obj::customSoundsLoaded;
HXDLIN( 191)						( ( ::haxe::ds::StringMap)(this1) )->set(file,::openfl::media::Sound_obj::fromFile(file));
            					}
HXDLIN( 191)					_hx_tmp1 = ::Paths_obj::customSoundsLoaded->get(file);
            				}
            				else {
HXLINE( 191)					_hx_tmp1 = ::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library);
            				}
HXDLIN( 191)				_hx_tmp->playMusic(_hx_tmp1,null(),null(),null());
HXLINE( 192)				::PlayState_obj::changedDifficulty = false;
HXLINE( 193)				::PlayState_obj::chartingMode = false;
HXLINE( 183)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("Restart Song",06,b6,fe,13)) ){
HXLINE( 176)				::PauseSubState_obj::restartSong(null());
HXDLIN( 176)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("Resume",cd,dd,18,3d)) ){
HXLINE( 167)				this->close();
HXDLIN( 167)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("Toggle Botplay",ef,6e,ca,1a)) ){
HXLINE( 178)				::PlayState_obj::instance->cpuControlled = !(::PlayState_obj::instance->cpuControlled);
HXLINE( 179)				::PlayState_obj::changedDifficulty = true;
HXLINE( 180)				::PlayState_obj::instance->botplayTxt->set_visible(::PlayState_obj::instance->cpuControlled);
HXLINE( 181)				::PlayState_obj::instance->botplayTxt->set_alpha(( (Float)(1) ));
HXLINE( 182)				::PlayState_obj::instance->botplaySine = ( (Float)(0) );
HXLINE( 177)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("Toggle Practice Mode",7c,8b,b4,6b)) ){
HXLINE( 172)				::PlayState_obj::instance->practiceMode = !(::PlayState_obj::instance->practiceMode);
HXLINE( 173)				::PlayState_obj::changedDifficulty = true;
HXLINE( 174)				this->practiceText->set_visible(::PlayState_obj::instance->practiceMode);
HXLINE( 171)				goto _hx_goto_4;
            			}
            			_hx_goto_4:;
            		}
            	}


void PauseSubState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_17d383cbce329512_220_destroy)
HXLINE( 221)		this->pauseMusic->destroy();
HXLINE( 223)		this->super::destroy();
            	}


void PauseSubState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_17d383cbce329512_227_changeSelection)
HXLINE( 228)		 ::PauseSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 228)		_hx_tmp->curSelected = (_hx_tmp->curSelected + change);
HXLINE( 230)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 230)		_hx_tmp1->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 232)		if ((this->curSelected < 0)) {
HXLINE( 233)			this->curSelected = (this->menuItems->length - 1);
            		}
HXLINE( 234)		if ((this->curSelected >= this->menuItems->length)) {
HXLINE( 235)			this->curSelected = 0;
            		}
HXLINE( 237)		int bullShit = 0;
HXLINE( 239)		{
HXLINE( 239)			int _g = 0;
HXDLIN( 239)			::Array< ::Dynamic> _g1 = this->grpMenuShit->members;
HXDLIN( 239)			while((_g < _g1->length)){
HXLINE( 239)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 239)				_g = (_g + 1);
HXLINE( 241)				item->targetY = ( (Float)((bullShit - this->curSelected)) );
HXLINE( 242)				bullShit = (bullShit + 1);
HXLINE( 244)				item->set_alpha(((Float)0.6));
HXLINE( 247)				if ((item->targetY == 0)) {
HXLINE( 249)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PauseSubState_obj,changeSelection,(void))

void PauseSubState_obj::regenMenu(){
            	HX_GC_STACKFRAME(&_hx_pos_17d383cbce329512_255_regenMenu)
HXLINE( 256)		{
HXLINE( 256)			int _g = 0;
HXDLIN( 256)			int _g1 = this->grpMenuShit->members->get_length();
HXDLIN( 256)			while((_g < _g1)){
HXLINE( 256)				_g = (_g + 1);
HXDLIN( 256)				int i = (_g - 1);
HXLINE( 257)				this->grpMenuShit->remove(Dynamic( this->grpMenuShit->members->__get(0)).StaticCast<  ::Alphabet >(),true).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE( 259)		{
HXLINE( 259)			int _g2 = 0;
HXDLIN( 259)			int _g3 = this->menuItems->length;
HXDLIN( 259)			while((_g2 < _g3)){
HXLINE( 259)				_g2 = (_g2 + 1);
HXDLIN( 259)				int i = (_g2 - 1);
HXLINE( 260)				 ::Alphabet item =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->menuItems->__get(i),true,false,null(),null());
HXLINE( 261)				item->isMenuItem = true;
HXLINE( 262)				item->targetY = ( (Float)(i) );
HXLINE( 263)				this->grpMenuShit->add(item).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE( 265)		this->curSelected = 0;
HXLINE( 266)		this->changeSelection(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(PauseSubState_obj,regenMenu,(void))

 ::flixel::FlxCamera PauseSubState_obj::transCamera;

void PauseSubState_obj::restartSong(::hx::Null< bool >  __o_noTrans){
            		bool noTrans = __o_noTrans.Default(false);
            	HX_STACKFRAME(&_hx_pos_17d383cbce329512_203_restartSong)
HXLINE( 204)		::PlayState_obj::instance->paused = true;
HXLINE( 205)		::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
HXLINE( 206)		::PlayState_obj::instance->vocals->set_volume(( (Float)(0) ));
HXLINE( 208)		if (noTrans) {
HXLINE( 210)			::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransOut = true;
HXLINE( 211)			{
HXLINE( 211)				 ::flixel::FlxState nextState = ( ( ::flixel::FlxState)(::Type_obj::createInstance(::Type_obj::getClass(::flixel::FlxG_obj::game->_state),::cpp::VirtualArray_obj::__new(0))) );
HXDLIN( 211)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 211)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
            		else {
HXLINE( 215)			::MusicBeatState_obj::resetState();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PauseSubState_obj,restartSong,(void))


::hx::ObjectPtr< PauseSubState_obj > PauseSubState_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< PauseSubState_obj > __this = new PauseSubState_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< PauseSubState_obj > PauseSubState_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	PauseSubState_obj *__this = (PauseSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PauseSubState_obj), true, "PauseSubState"));
	*(void **)__this = PauseSubState_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

PauseSubState_obj::PauseSubState_obj()
{
}

void PauseSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PauseSubState);
	HX_MARK_MEMBER_NAME(grpMenuShit,"grpMenuShit");
	HX_MARK_MEMBER_NAME(menuItems,"menuItems");
	HX_MARK_MEMBER_NAME(menuItemsOG,"menuItemsOG");
	HX_MARK_MEMBER_NAME(difficultyChoices,"difficultyChoices");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(pauseMusic,"pauseMusic");
	HX_MARK_MEMBER_NAME(practiceText,"practiceText");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PauseSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(grpMenuShit,"grpMenuShit");
	HX_VISIT_MEMBER_NAME(menuItems,"menuItems");
	HX_VISIT_MEMBER_NAME(menuItemsOG,"menuItemsOG");
	HX_VISIT_MEMBER_NAME(difficultyChoices,"difficultyChoices");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(pauseMusic,"pauseMusic");
	HX_VISIT_MEMBER_NAME(practiceText,"practiceText");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PauseSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { return ::hx::Val( menuItems ); }
		if (HX_FIELD_EQ(inName,"regenMenu") ) { return ::hx::Val( regenMenu_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { return ::hx::Val( pauseMusic ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpMenuShit") ) { return ::hx::Val( grpMenuShit ); }
		if (HX_FIELD_EQ(inName,"menuItemsOG") ) { return ::hx::Val( menuItemsOG ); }
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"practiceText") ) { return ::hx::Val( practiceText ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"difficultyChoices") ) { return ::hx::Val( difficultyChoices ); }
	}
	return super::__Field(inName,inCallProp);
}

bool PauseSubState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"transCamera") ) { outValue = ( transCamera ); return true; }
		if (HX_FIELD_EQ(inName,"restartSong") ) { outValue = restartSong_dyn(); return true; }
	}
	return false;
}

::hx::Val PauseSubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { menuItems=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { pauseMusic=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpMenuShit") ) { grpMenuShit=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"menuItemsOG") ) { menuItemsOG=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"practiceText") ) { practiceText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"difficultyChoices") ) { difficultyChoices=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PauseSubState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"transCamera") ) { transCamera=ioValue.Cast<  ::flixel::FlxCamera >(); return true; }
	}
	return false;
}

void PauseSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("grpMenuShit",04,32,b8,f0));
	outFields->push(HX_("menuItems",e1,15,e5,5c));
	outFields->push(HX_("menuItemsOG",39,55,bf,30));
	outFields->push(HX_("difficultyChoices",f7,9c,00,1a));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("pauseMusic",cf,6d,d3,e5));
	outFields->push(HX_("practiceText",08,73,28,84));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PauseSubState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PauseSubState_obj,grpMenuShit),HX_("grpMenuShit",04,32,b8,f0)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PauseSubState_obj,menuItems),HX_("menuItems",e1,15,e5,5c)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PauseSubState_obj,menuItemsOG),HX_("menuItemsOG",39,55,bf,30)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PauseSubState_obj,difficultyChoices),HX_("difficultyChoices",f7,9c,00,1a)},
	{::hx::fsInt,(int)offsetof(PauseSubState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PauseSubState_obj,pauseMusic),HX_("pauseMusic",cf,6d,d3,e5)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PauseSubState_obj,practiceText),HX_("practiceText",08,73,28,84)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo PauseSubState_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxCamera */ ,(void *) &PauseSubState_obj::transCamera,HX_("transCamera",ed,e0,5c,21)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String PauseSubState_obj_sMemberFields[] = {
	HX_("grpMenuShit",04,32,b8,f0),
	HX_("menuItems",e1,15,e5,5c),
	HX_("menuItemsOG",39,55,bf,30),
	HX_("difficultyChoices",f7,9c,00,1a),
	HX_("curSelected",fb,eb,ab,32),
	HX_("pauseMusic",cf,6d,d3,e5),
	HX_("practiceText",08,73,28,84),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	HX_("changeSelection",bc,98,b5,48),
	HX_("regenMenu",fc,42,dc,26),
	::String(null()) };

static void PauseSubState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PauseSubState_obj::transCamera,"transCamera");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PauseSubState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PauseSubState_obj::transCamera,"transCamera");
};

#endif

::hx::Class PauseSubState_obj::__mClass;

static ::String PauseSubState_obj_sStaticFields[] = {
	HX_("transCamera",ed,e0,5c,21),
	HX_("restartSong",44,ab,b8,45),
	::String(null())
};

void PauseSubState_obj::__register()
{
	PauseSubState_obj _hx_dummy;
	PauseSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PauseSubState",67,95,e5,08);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PauseSubState_obj::__GetStatic;
	__mClass->mSetStaticField = &PauseSubState_obj::__SetStatic;
	__mClass->mMarkFunc = PauseSubState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PauseSubState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PauseSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PauseSubState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PauseSubState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PauseSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PauseSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

