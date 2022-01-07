#ifndef INCLUDED_openfl_display__internal_CanvasVideo
#define INCLUDED_openfl_display__internal_CanvasVideo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,CanvasRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,display,_internal,CanvasVideo)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,Video)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES CanvasVideo_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CanvasVideo_obj OBJ_;
		CanvasVideo_obj();

	public:
		enum { _hx_ClassId = 0x76405579 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.CanvasVideo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal.CanvasVideo"); }

		inline static ::hx::ObjectPtr< CanvasVideo_obj > __new() {
			::hx::ObjectPtr< CanvasVideo_obj > __this = new CanvasVideo_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CanvasVideo_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CanvasVideo_obj *__this = (CanvasVideo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CanvasVideo_obj), false, "openfl.display._internal.CanvasVideo"));
			*(void **)__this = CanvasVideo_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CanvasVideo_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CanvasVideo",63,38,3f,1e); }

		static void __boot();
		static  ::Dynamic __meta__;
		static void render( ::openfl::media::Video video, ::openfl::display::CanvasRenderer renderer);
		static ::Dynamic render_dyn();

		static void renderDrawable( ::openfl::media::Video video, ::openfl::display::CanvasRenderer renderer);
		static ::Dynamic renderDrawable_dyn();

		static void renderDrawableMask( ::openfl::media::Video video, ::openfl::display::CanvasRenderer renderer);
		static ::Dynamic renderDrawableMask_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_CanvasVideo */ 
