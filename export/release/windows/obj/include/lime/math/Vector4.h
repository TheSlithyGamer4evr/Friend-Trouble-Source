#ifndef INCLUDED_lime_math_Vector4
#define INCLUDED_lime_math_Vector4

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,math,Vector4)

namespace lime{
namespace math{


class HXCPP_CLASS_ATTRIBUTES Vector4_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Vector4_obj OBJ_;
		Vector4_obj();

	public:
		enum { _hx_ClassId = 0x38fae9ac };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.math.Vector4")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.math.Vector4"); }
		static ::hx::ObjectPtr< Vector4_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w);
		static ::hx::ObjectPtr< Vector4_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Vector4_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Vector4",f1,21,ee,a7); }

		static Float angleBetween( ::lime::math::Vector4 a, ::lime::math::Vector4 b);
		static ::Dynamic angleBetween_dyn();

		static Float distance( ::lime::math::Vector4 pt1, ::lime::math::Vector4 pt2);
		static ::Dynamic distance_dyn();

		static Float distanceSquared( ::lime::math::Vector4 pt1, ::lime::math::Vector4 pt2);
		static ::Dynamic distanceSquared_dyn();

		static  ::lime::math::Vector4 get_X_AXIS();
		static ::Dynamic get_X_AXIS_dyn();

		static  ::lime::math::Vector4 get_Y_AXIS();
		static ::Dynamic get_Y_AXIS_dyn();

		static  ::lime::math::Vector4 get_Z_AXIS();
		static ::Dynamic get_Z_AXIS_dyn();

		Float w;
		Float x;
		Float y;
		Float z;
		 ::lime::math::Vector4 add( ::lime::math::Vector4 a, ::lime::math::Vector4 result);
		::Dynamic add_dyn();

		 ::lime::math::Vector4 clone();
		::Dynamic clone_dyn();

		void copyFrom( ::lime::math::Vector4 sourceVector4);
		::Dynamic copyFrom_dyn();

		 ::lime::math::Vector4 crossProduct( ::lime::math::Vector4 a, ::lime::math::Vector4 result);
		::Dynamic crossProduct_dyn();

		void decrementBy( ::lime::math::Vector4 a);
		::Dynamic decrementBy_dyn();

		Float dotProduct( ::lime::math::Vector4 a);
		::Dynamic dotProduct_dyn();

		bool equals( ::lime::math::Vector4 toCompare, ::Dynamic allFour);
		::Dynamic equals_dyn();

		void incrementBy( ::lime::math::Vector4 a);
		::Dynamic incrementBy_dyn();

		bool nearEquals( ::lime::math::Vector4 toCompare,Float tolerance, ::Dynamic allFour);
		::Dynamic nearEquals_dyn();

		void negate();
		::Dynamic negate_dyn();

		Float normalize();
		::Dynamic normalize_dyn();

		void project();
		::Dynamic project_dyn();

		void scaleBy(Float s);
		::Dynamic scaleBy_dyn();

		void setTo(Float xa,Float ya,Float za);
		::Dynamic setTo_dyn();

		 ::lime::math::Vector4 subtract( ::lime::math::Vector4 a, ::lime::math::Vector4 result);
		::Dynamic subtract_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		Float get_length();
		::Dynamic get_length_dyn();

		Float get_lengthSquared();
		::Dynamic get_lengthSquared_dyn();

};

} // end namespace lime
} // end namespace math

#endif /* INCLUDED_lime_math_Vector4 */ 
