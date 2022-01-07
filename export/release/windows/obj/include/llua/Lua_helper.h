#ifndef INCLUDED_llua_Lua_helper
#define INCLUDED_llua_Lua_helper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(llua,Lua_helper)

namespace llua{


class HXCPP_CLASS_ATTRIBUTES Lua_helper_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Lua_helper_obj OBJ_;
		Lua_helper_obj();

	public:
		enum { _hx_ClassId = 0x7b0276d5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="llua.Lua_helper")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"llua.Lua_helper"); }

		inline static ::hx::ObjectPtr< Lua_helper_obj > __new() {
			::hx::ObjectPtr< Lua_helper_obj > __this = new Lua_helper_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Lua_helper_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Lua_helper_obj *__this = (Lua_helper_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Lua_helper_obj), false, "llua.Lua_helper"));
			*(void **)__this = Lua_helper_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Lua_helper_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Lua_helper",75,60,53,9d); }

		static void __boot();
		static int print_function(::String s);
		static ::Dynamic print_function_dyn();

		static void register_hxtrace( cpp::Reference<lua_State> l);
		static ::Dynamic register_hxtrace_dyn();

		static ::Dynamic trace;
		static inline ::Dynamic &trace_dyn() {return trace; }

		static  ::haxe::ds::StringMap callbacks;
		static bool add_callback( cpp::Reference<lua_State> l,::String fname, ::Dynamic f);
		static ::Dynamic add_callback_dyn();

		static bool remove_callback( cpp::Reference<lua_State> l,::String fname);
		static ::Dynamic remove_callback_dyn();

		static int callback_handler( cpp::Reference<lua_State> l,::String fname);
		static ::Dynamic callback_handler_dyn();

};

} // end namespace llua

#endif /* INCLUDED_llua_Lua_helper */ 
