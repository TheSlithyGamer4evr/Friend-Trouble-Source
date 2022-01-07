#ifndef INCLUDED_openfl_text__internal_CacheMeasurement
#define INCLUDED_openfl_text__internal_CacheMeasurement

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(openfl,text,_internal,CacheMeasurement)
HX_DECLARE_CLASS3(openfl,text,_internal,GlyphPosition)

namespace openfl{
namespace text{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES CacheMeasurement_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CacheMeasurement_obj OBJ_;
		CacheMeasurement_obj();

	public:
		enum { _hx_ClassId = 0x2d9a58f1 };

		void __construct(::String wordKey,::Array< ::Dynamic> positions);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.text._internal.CacheMeasurement")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.text._internal.CacheMeasurement"); }
		static ::hx::ObjectPtr< CacheMeasurement_obj > __new(::String wordKey,::Array< ::Dynamic> positions);
		static ::hx::ObjectPtr< CacheMeasurement_obj > __alloc(::hx::Ctx *_hx_ctx,::String wordKey,::Array< ::Dynamic> positions);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CacheMeasurement_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CacheMeasurement",fa,a4,ec,69); }

		static void __boot();
		static  ::Dynamic __meta__;
		::Array< ::String > _hx___collisions;
		 ::haxe::ds::IntMap _hx___wordMap;
		int hash;
		void set(::String wordKey,::Array< ::Dynamic> positions);
		::Dynamic set_dyn();

		::Array< ::Dynamic> get(::String wordKey);
		::Dynamic get_dyn();

		void _hx___addCollision(::String wordKey,::Array< ::Dynamic> positions);
		::Dynamic _hx___addCollision_dyn();

		bool exists(::String wordKey);
		::Dynamic exists_dyn();

};

} // end namespace openfl
} // end namespace text
} // end namespace _internal

#endif /* INCLUDED_openfl_text__internal_CacheMeasurement */ 
