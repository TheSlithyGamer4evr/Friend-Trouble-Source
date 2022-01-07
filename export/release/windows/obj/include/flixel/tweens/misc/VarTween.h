#ifndef INCLUDED_flixel_tweens_misc_VarTween
#define INCLUDED_flixel_tweens_misc_VarTween

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,tweens,FlxTweenManager)
HX_DECLARE_CLASS3(flixel,tweens,misc,VarTween)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace tweens{
namespace misc{


class HXCPP_CLASS_ATTRIBUTES VarTween_obj : public  ::flixel::tweens::FlxTween_obj
{
	public:
		typedef  ::flixel::tweens::FlxTween_obj super;
		typedef VarTween_obj OBJ_;
		VarTween_obj();

	public:
		enum { _hx_ClassId = 0x6894b914 };

		void __construct( ::Dynamic options, ::flixel::tweens::FlxTweenManager manager);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.tweens.misc.VarTween")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.tweens.misc.VarTween"); }
		static ::hx::ObjectPtr< VarTween_obj > __new( ::Dynamic options, ::flixel::tweens::FlxTweenManager manager);
		static ::hx::ObjectPtr< VarTween_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic options, ::flixel::tweens::FlxTweenManager manager);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VarTween_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VarTween",24,92,e1,39); }

		 ::Dynamic _object;
		 ::Dynamic _properties;
		::Array< ::Dynamic> _propertyInfos;
		 ::flixel::tweens::misc::VarTween tween( ::Dynamic object, ::Dynamic properties,Float duration);
		::Dynamic tween_dyn();

		void update(Float elapsed);

		void initializeVars();
		::Dynamic initializeVars_dyn();

		void setStartValues();
		::Dynamic setStartValues_dyn();

		void destroy();

		bool isTweenOf( ::Dynamic object,::String field);

};

} // end namespace flixel
} // end namespace tweens
} // end namespace misc

#endif /* INCLUDED_flixel_tweens_misc_VarTween */ 
