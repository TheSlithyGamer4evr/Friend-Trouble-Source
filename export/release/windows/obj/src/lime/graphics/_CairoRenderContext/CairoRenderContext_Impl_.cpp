#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics__CairoRenderContext_CairoRenderContext_Impl_
#include <lime/graphics/_CairoRenderContext/CairoRenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8556288c3ba73522_24_fromRenderContext,"lime.graphics._CairoRenderContext.CairoRenderContext_Impl_","fromRenderContext",0x4c67089a,"lime.graphics._CairoRenderContext.CairoRenderContext_Impl_.fromRenderContext","lime/graphics/CairoRenderContext.hx",24,0x00243123)
namespace lime{
namespace graphics{
namespace _CairoRenderContext{

void CairoRenderContext_Impl__obj::__construct() { }

Dynamic CairoRenderContext_Impl__obj::__CreateEmpty() { return new CairoRenderContext_Impl__obj; }

void *CairoRenderContext_Impl__obj::_hx_vtable = 0;

Dynamic CairoRenderContext_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CairoRenderContext_Impl__obj > _hx_result = new CairoRenderContext_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoRenderContext_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ffd6205;
}

 ::lime::graphics::cairo::Cairo CairoRenderContext_Impl__obj::fromRenderContext( ::lime::graphics::RenderContext context){
            	HX_STACKFRAME(&_hx_pos_8556288c3ba73522_24_fromRenderContext)
HXDLIN(  24)		return context->cairo;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoRenderContext_Impl__obj,fromRenderContext,return )


CairoRenderContext_Impl__obj::CairoRenderContext_Impl__obj()
{
}

bool CairoRenderContext_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"fromRenderContext") ) { outValue = fromRenderContext_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CairoRenderContext_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CairoRenderContext_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class CairoRenderContext_Impl__obj::__mClass;

static ::String CairoRenderContext_Impl__obj_sStaticFields[] = {
	HX_("fromRenderContext",6f,19,d4,ba),
	::String(null())
};

void CairoRenderContext_Impl__obj::__register()
{
	CairoRenderContext_Impl__obj _hx_dummy;
	CairoRenderContext_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics._CairoRenderContext.CairoRenderContext_Impl_",d9,d8,31,92);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoRenderContext_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CairoRenderContext_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CairoRenderContext_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoRenderContext_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoRenderContext_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace _CairoRenderContext
