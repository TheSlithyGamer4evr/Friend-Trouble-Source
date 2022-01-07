#ifndef INCLUDED_openfl_display3D__internal_Context3DState
#define INCLUDED_openfl_display3D__internal_Context3DState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS3(openfl,display,_internal,SamplerState)
HX_DECLARE_CLASS2(openfl,display3D,Program3D)
HX_DECLARE_CLASS3(openfl,display3D,_internal,Context3DState)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace display3D{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES Context3DState_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Context3DState_obj OBJ_;
		Context3DState_obj();

	public:
		enum { _hx_ClassId = 0x72ea205a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display3D._internal.Context3DState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display3D._internal.Context3DState"); }
		static ::hx::ObjectPtr< Context3DState_obj > __new();
		static ::hx::ObjectPtr< Context3DState_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Context3DState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Context3DState",b1,41,87,10); }

		static void __boot();
		static  ::Dynamic __meta__;
		bool backBufferEnableDepthAndStencil;
		 ::Dynamic blendDestinationAlphaFactor;
		 ::Dynamic blendSourceAlphaFactor;
		 ::Dynamic blendDestinationRGBFactor;
		 ::Dynamic blendSourceRGBFactor;
		bool colorMaskRed;
		bool colorMaskGreen;
		bool colorMaskBlue;
		bool colorMaskAlpha;
		 ::Dynamic culling;
		 ::Dynamic depthCompareMode;
		bool depthMask;
		 ::openfl::display3D::Program3D program;
		 ::openfl::display3D::textures::TextureBase renderToTexture;
		int renderToTextureAntiAlias;
		bool renderToTextureDepthStencil;
		int renderToTextureSurfaceSelector;
		::Array< ::Dynamic> samplerStates;
		bool scissorEnabled;
		 ::openfl::geom::Rectangle scissorRectangle;
		 ::Dynamic stencilCompareMode;
		 ::Dynamic stencilDepthFail;
		 ::Dynamic stencilFail;
		 ::Dynamic stencilPass;
		int stencilReadMask;
		int stencilReferenceValue;
		 ::Dynamic stencilTriangleFace;
		int stencilWriteMask;
		::Array< ::Dynamic> textures;
		 ::openfl::display::Shader shader;
		 ::lime::graphics::opengl::GLObject _hx___currentGLArrayBuffer;
		 ::lime::graphics::opengl::GLObject _hx___currentGLElementArrayBuffer;
		 ::lime::graphics::opengl::GLObject _hx___currentGLFramebuffer;
		 ::lime::graphics::opengl::GLObject _hx___currentGLTexture2D;
		 ::lime::graphics::opengl::GLObject _hx___currentGLTextureCubeMap;
		bool _hx___enableGLBlend;
		bool _hx___enableGLCullFace;
		bool _hx___enableGLDepthTest;
		bool _hx___enableGLScissorTest;
		bool _hx___enableGLStencilTest;
		bool _hx___frontFaceGLCCW;
		int _hx___glBlendEquation;
		 ::lime::graphics::opengl::GLObject _hx___primaryGLFramebuffer;
		 ::lime::graphics::opengl::GLObject _hx___rttDepthGLRenderbuffer;
		 ::lime::graphics::opengl::GLObject _hx___rttGLFramebuffer;
		 ::lime::graphics::opengl::GLObject _hx___rttGLRenderbuffer;
		 ::lime::graphics::opengl::GLObject _hx___rttStencilGLRenderbuffer;
};

} // end namespace openfl
} // end namespace display3D
} // end namespace _internal

#endif /* INCLUDED_openfl_display3D__internal_Context3DState */ 
