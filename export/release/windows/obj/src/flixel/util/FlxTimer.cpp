#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_151a56598b761d13_12_new,"flixel.util.FlxTimer","new",0xb89241df,"flixel.util.FlxTimer.new","flixel/util/FlxTimer.hx",12,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_151a56598b761d13_102_destroy,"flixel.util.FlxTimer","destroy",0x3b34c9f9,"flixel.util.FlxTimer.destroy","flixel/util/FlxTimer.hx",102,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_151a56598b761d13_116_start,"flixel.util.FlxTimer","start",0x9de883a1,"flixel.util.FlxTimer.start","flixel/util/FlxTimer.hx",116,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_151a56598b761d13_143_reset,"flixel.util.FlxTimer","reset",0x00a5590e,"flixel.util.FlxTimer.reset","flixel/util/FlxTimer.hx",143,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_151a56598b761d13_155_cancel,"flixel.util.FlxTimer","cancel",0x3fc4355b,"flixel.util.FlxTimer.cancel","flixel/util/FlxTimer.hx",155,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_151a56598b761d13_173_update,"flixel.util.FlxTimer","update",0x0e95cdea,"flixel.util.FlxTimer.update","flixel/util/FlxTimer.hx",173,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_151a56598b761d13_190_onLoopFinished,"flixel.util.FlxTimer","onLoopFinished",0xd1a6ea96,"flixel.util.FlxTimer.onLoopFinished","flixel/util/FlxTimer.hx",190,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_151a56598b761d13_200_get_timeLeft,"flixel.util.FlxTimer","get_timeLeft",0x3108255e,"flixel.util.FlxTimer.get_timeLeft","flixel/util/FlxTimer.hx",200,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_151a56598b761d13_205_get_elapsedTime,"flixel.util.FlxTimer","get_elapsedTime",0x36d149ff,"flixel.util.FlxTimer.get_elapsedTime","flixel/util/FlxTimer.hx",205,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_151a56598b761d13_210_get_loopsLeft,"flixel.util.FlxTimer","get_loopsLeft",0x92ed534c,"flixel.util.FlxTimer.get_loopsLeft","flixel/util/FlxTimer.hx",210,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_151a56598b761d13_215_get_elapsedLoops,"flixel.util.FlxTimer","get_elapsedLoops",0x2913a75d,"flixel.util.FlxTimer.get_elapsedLoops","flixel/util/FlxTimer.hx",215,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_151a56598b761d13_220_get_progress,"flixel.util.FlxTimer","get_progress",0xcf219257,"flixel.util.FlxTimer.get_progress","flixel/util/FlxTimer.hx",220,0x0a681e11)
namespace flixel{
namespace util{

void FlxTimer_obj::__construct( ::flixel::util::FlxTimerManager manager){
            	HX_STACKFRAME(&_hx_pos_151a56598b761d13_12_new)
HXLINE(  87)		this->_inManager = false;
HXLINE(  85)		this->_loopsCounter = 0;
HXLINE(  80)		this->_timeCounter = ((Float)0);
HXLINE(  44)		this->finished = false;
HXLINE(  39)		this->active = false;
HXLINE(  34)		this->loops = 0;
HXLINE(  29)		this->time = ((Float)0);
HXLINE(  94)		 ::flixel::util::FlxTimerManager _hx_tmp;
HXDLIN(  94)		if (::hx::IsNotNull( manager )) {
HXLINE(  94)			_hx_tmp = manager;
            		}
            		else {
HXLINE(  94)			_hx_tmp = ::flixel::util::FlxTimer_obj::globalManager;
            		}
HXDLIN(  94)		this->manager = _hx_tmp;
            	}

Dynamic FlxTimer_obj::__CreateEmpty() { return new FlxTimer_obj; }

void *FlxTimer_obj::_hx_vtable = 0;

Dynamic FlxTimer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTimer_obj > _hx_result = new FlxTimer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxTimer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0ed56b31;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_util_FlxTimer__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::util::FlxTimer_obj::destroy,
};

void *FlxTimer_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_util_FlxTimer__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxTimer_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_151a56598b761d13_102_destroy)
HXDLIN( 102)		this->onComplete = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,destroy,(void))

 ::flixel::util::FlxTimer FlxTimer_obj::start(::hx::Null< Float >  __o_Time, ::Dynamic OnComplete,::hx::Null< int >  __o_Loops){
            		Float Time = __o_Time.Default(1);
            		int Loops = __o_Loops.Default(1);
            	HX_STACKFRAME(&_hx_pos_151a56598b761d13_116_start)
HXLINE( 117)		bool _hx_tmp;
HXDLIN( 117)		if (::hx::IsNotNull( this->manager )) {
HXLINE( 117)			_hx_tmp = !(this->_inManager);
            		}
            		else {
HXLINE( 117)			_hx_tmp = false;
            		}
HXDLIN( 117)		if (_hx_tmp) {
HXLINE( 119)			this->manager->add(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 120)			this->_inManager = true;
            		}
HXLINE( 123)		this->active = true;
HXLINE( 124)		this->finished = false;
HXLINE( 125)		this->time = ::Math_obj::abs(Time);
HXLINE( 127)		if ((Loops < 0)) {
HXLINE( 128)			Loops = (Loops * -1);
            		}
HXLINE( 130)		this->loops = Loops;
HXLINE( 131)		this->onComplete = OnComplete;
HXLINE( 132)		this->_timeCounter = ( (Float)(0) );
HXLINE( 133)		this->_loopsCounter = 0;
HXLINE( 135)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxTimer_obj,start,return )

 ::flixel::util::FlxTimer FlxTimer_obj::reset(::hx::Null< Float >  __o_NewTime){
            		Float NewTime = __o_NewTime.Default(-1);
            	HX_STACKFRAME(&_hx_pos_151a56598b761d13_143_reset)
HXLINE( 144)		if ((NewTime < 0)) {
HXLINE( 145)			NewTime = this->time;
            		}
HXLINE( 147)		this->start(NewTime,this->onComplete,this->loops);
HXLINE( 148)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTimer_obj,reset,return )

void FlxTimer_obj::cancel(){
            	HX_STACKFRAME(&_hx_pos_151a56598b761d13_155_cancel)
HXLINE( 156)		this->finished = true;
HXLINE( 157)		this->active = false;
HXLINE( 159)		bool _hx_tmp;
HXDLIN( 159)		if (::hx::IsNotNull( this->manager )) {
HXLINE( 159)			_hx_tmp = this->_inManager;
            		}
            		else {
HXLINE( 159)			_hx_tmp = false;
            		}
HXDLIN( 159)		if (_hx_tmp) {
HXLINE( 161)			this->manager->remove(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 162)			this->_inManager = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,cancel,(void))

void FlxTimer_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_151a56598b761d13_173_update)
HXLINE( 174)		 ::flixel::util::FlxTimer _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 174)		_hx_tmp->_timeCounter = (_hx_tmp->_timeCounter + elapsed);
HXLINE( 176)		while(true){
HXLINE( 176)			bool _hx_tmp;
HXDLIN( 176)			bool _hx_tmp1;
HXDLIN( 176)			if ((this->_timeCounter >= this->time)) {
HXLINE( 176)				_hx_tmp1 = this->active;
            			}
            			else {
HXLINE( 176)				_hx_tmp1 = false;
            			}
HXDLIN( 176)			if (_hx_tmp1) {
HXLINE( 176)				_hx_tmp = !(this->finished);
            			}
            			else {
HXLINE( 176)				_hx_tmp = false;
            			}
HXDLIN( 176)			if (!(_hx_tmp)) {
HXLINE( 176)				goto _hx_goto_5;
            			}
HXLINE( 178)			 ::flixel::util::FlxTimer _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 178)			_hx_tmp2->_timeCounter = (_hx_tmp2->_timeCounter - this->time);
HXLINE( 179)			this->_loopsCounter++;
HXLINE( 181)			bool _hx_tmp3;
HXDLIN( 181)			if ((this->loops > 0)) {
HXLINE( 181)				_hx_tmp3 = (this->_loopsCounter >= this->loops);
            			}
            			else {
HXLINE( 181)				_hx_tmp3 = false;
            			}
HXDLIN( 181)			if (_hx_tmp3) {
HXLINE( 183)				this->finished = true;
            			}
            		}
            		_hx_goto_5:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTimer_obj,update,(void))

void FlxTimer_obj::onLoopFinished(){
            	HX_STACKFRAME(&_hx_pos_151a56598b761d13_190_onLoopFinished)
HXLINE( 191)		if (this->finished) {
HXLINE( 192)			this->cancel();
            		}
HXLINE( 194)		if (::hx::IsNotNull( this->onComplete )) {
HXLINE( 195)			this->onComplete(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,onLoopFinished,(void))

Float FlxTimer_obj::get_timeLeft(){
            	HX_STACKFRAME(&_hx_pos_151a56598b761d13_200_get_timeLeft)
HXDLIN( 200)		return (this->time - this->_timeCounter);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,get_timeLeft,return )

Float FlxTimer_obj::get_elapsedTime(){
            	HX_STACKFRAME(&_hx_pos_151a56598b761d13_205_get_elapsedTime)
HXDLIN( 205)		return this->_timeCounter;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,get_elapsedTime,return )

int FlxTimer_obj::get_loopsLeft(){
            	HX_STACKFRAME(&_hx_pos_151a56598b761d13_210_get_loopsLeft)
HXDLIN( 210)		return (this->loops - this->_loopsCounter);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,get_loopsLeft,return )

int FlxTimer_obj::get_elapsedLoops(){
            	HX_STACKFRAME(&_hx_pos_151a56598b761d13_215_get_elapsedLoops)
HXDLIN( 215)		return this->_loopsCounter;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,get_elapsedLoops,return )

Float FlxTimer_obj::get_progress(){
            	HX_STACKFRAME(&_hx_pos_151a56598b761d13_220_get_progress)
HXDLIN( 220)		if ((this->time > 0)) {
HXDLIN( 220)			return (this->_timeCounter / this->time);
            		}
            		else {
HXDLIN( 220)			return ( (Float)(0) );
            		}
HXDLIN( 220)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,get_progress,return )

 ::flixel::util::FlxTimerManager FlxTimer_obj::globalManager;


::hx::ObjectPtr< FlxTimer_obj > FlxTimer_obj::__new( ::flixel::util::FlxTimerManager manager) {
	::hx::ObjectPtr< FlxTimer_obj > __this = new FlxTimer_obj();
	__this->__construct(manager);
	return __this;
}

::hx::ObjectPtr< FlxTimer_obj > FlxTimer_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::util::FlxTimerManager manager) {
	FlxTimer_obj *__this = (FlxTimer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTimer_obj), true, "flixel.util.FlxTimer"));
	*(void **)__this = FlxTimer_obj::_hx_vtable;
	__this->__construct(manager);
	return __this;
}

FlxTimer_obj::FlxTimer_obj()
{
}

void FlxTimer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTimer);
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(loops,"loops");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(_timeCounter,"_timeCounter");
	HX_MARK_MEMBER_NAME(_loopsCounter,"_loopsCounter");
	HX_MARK_MEMBER_NAME(_inManager,"_inManager");
	HX_MARK_END_CLASS();
}

void FlxTimer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(manager,"manager");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(loops,"loops");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(_timeCounter,"_timeCounter");
	HX_VISIT_MEMBER_NAME(_loopsCounter,"_loopsCounter");
	HX_VISIT_MEMBER_NAME(_inManager,"_inManager");
}

::hx::Val FlxTimer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return ::hx::Val( time ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { return ::hx::Val( loops ); }
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return ::hx::Val( active ); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return ::hx::Val( cancel_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return ::hx::Val( manager ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { return ::hx::Val( finished ); }
		if (HX_FIELD_EQ(inName,"timeLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_timeLeft() ); }
		if (HX_FIELD_EQ(inName,"progress") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_progress() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loopsLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_loopsLeft() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return ::hx::Val( onComplete ); }
		if (HX_FIELD_EQ(inName,"_inManager") ) { return ::hx::Val( _inManager ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"elapsedTime") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_elapsedTime() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"elapsedLoops") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_elapsedLoops() ); }
		if (HX_FIELD_EQ(inName,"_timeCounter") ) { return ::hx::Val( _timeCounter ); }
		if (HX_FIELD_EQ(inName,"get_timeLeft") ) { return ::hx::Val( get_timeLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_progress") ) { return ::hx::Val( get_progress_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_loopsCounter") ) { return ::hx::Val( _loopsCounter ); }
		if (HX_FIELD_EQ(inName,"get_loopsLeft") ) { return ::hx::Val( get_loopsLeft_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onLoopFinished") ) { return ::hx::Val( onLoopFinished_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_elapsedTime") ) { return ::hx::Val( get_elapsedTime_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_elapsedLoops") ) { return ::hx::Val( get_elapsedLoops_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxTimer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"globalManager") ) { outValue = ( globalManager ); return true; }
	}
	return false;
}

::hx::Val FlxTimer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { loops=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast<  ::flixel::util::FlxTimerManager >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inManager") ) { _inManager=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_timeCounter") ) { _timeCounter=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_loopsCounter") ) { _loopsCounter=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxTimer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"globalManager") ) { globalManager=ioValue.Cast<  ::flixel::util::FlxTimerManager >(); return true; }
	}
	return false;
}

void FlxTimer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("manager",6d,92,c1,13));
	outFields->push(HX_("time",0d,cc,fc,4c));
	outFields->push(HX_("loops",8f,f1,f9,78));
	outFields->push(HX_("active",c6,41,46,16));
	outFields->push(HX_("finished",72,93,0e,95));
	outFields->push(HX_("timeLeft",b4,8a,11,e8));
	outFields->push(HX_("elapsedTime",69,5e,cd,c6));
	outFields->push(HX_("loopsLeft",36,99,1c,04));
	outFields->push(HX_("elapsedLoops",b3,6f,a9,95));
	outFields->push(HX_("progress",ad,f7,2a,86));
	outFields->push(HX_("_timeCounter",70,04,b9,f5));
	outFields->push(HX_("_loopsCounter",0c,58,dd,c5));
	outFields->push(HX_("_inManager",c9,50,66,55));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTimer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::util::FlxTimerManager */ ,(int)offsetof(FlxTimer_obj,manager),HX_("manager",6d,92,c1,13)},
	{::hx::fsFloat,(int)offsetof(FlxTimer_obj,time),HX_("time",0d,cc,fc,4c)},
	{::hx::fsInt,(int)offsetof(FlxTimer_obj,loops),HX_("loops",8f,f1,f9,78)},
	{::hx::fsBool,(int)offsetof(FlxTimer_obj,active),HX_("active",c6,41,46,16)},
	{::hx::fsBool,(int)offsetof(FlxTimer_obj,finished),HX_("finished",72,93,0e,95)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxTimer_obj,onComplete),HX_("onComplete",f8,d4,7e,5d)},
	{::hx::fsFloat,(int)offsetof(FlxTimer_obj,_timeCounter),HX_("_timeCounter",70,04,b9,f5)},
	{::hx::fsInt,(int)offsetof(FlxTimer_obj,_loopsCounter),HX_("_loopsCounter",0c,58,dd,c5)},
	{::hx::fsBool,(int)offsetof(FlxTimer_obj,_inManager),HX_("_inManager",c9,50,66,55)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxTimer_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::util::FlxTimerManager */ ,(void *) &FlxTimer_obj::globalManager,HX_("globalManager",4a,cb,fa,39)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxTimer_obj_sMemberFields[] = {
	HX_("manager",6d,92,c1,13),
	HX_("time",0d,cc,fc,4c),
	HX_("loops",8f,f1,f9,78),
	HX_("active",c6,41,46,16),
	HX_("finished",72,93,0e,95),
	HX_("onComplete",f8,d4,7e,5d),
	HX_("_timeCounter",70,04,b9,f5),
	HX_("_loopsCounter",0c,58,dd,c5),
	HX_("_inManager",c9,50,66,55),
	HX_("destroy",fa,2c,86,24),
	HX_("start",62,74,0b,84),
	HX_("reset",cf,49,c8,e6),
	HX_("cancel",7a,ed,33,b8),
	HX_("update",09,86,05,87),
	HX_("onLoopFinished",b5,59,ca,df),
	HX_("get_timeLeft",bd,3e,2b,9d),
	HX_("get_elapsedTime",00,16,af,87),
	HX_("get_loopsLeft",0d,6d,80,c5),
	HX_("get_elapsedLoops",3c,5c,48,9a),
	HX_("get_progress",b6,ab,44,3b),
	::String(null()) };

static void FlxTimer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTimer_obj::globalManager,"globalManager");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxTimer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTimer_obj::globalManager,"globalManager");
};

#endif

::hx::Class FlxTimer_obj::__mClass;

static ::String FlxTimer_obj_sStaticFields[] = {
	HX_("globalManager",4a,cb,fa,39),
	::String(null())
};

void FlxTimer_obj::__register()
{
	FlxTimer_obj _hx_dummy;
	FlxTimer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.FlxTimer",6d,66,fe,a0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTimer_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxTimer_obj::__SetStatic;
	__mClass->mMarkFunc = FlxTimer_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxTimer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTimer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTimer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxTimer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTimer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTimer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
