#ifndef INCLUDED_h2d_Text
#define INCLUDED_h2d_Text

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_h2d_Drawable
#include <h2d/Drawable.h>
#endif
HX_DECLARE_CLASS1(h2d,Align)
HX_DECLARE_CLASS1(h2d,Drawable)
HX_DECLARE_CLASS1(h2d,Font)
HX_DECLARE_CLASS1(h2d,Object)
HX_DECLARE_CLASS1(h2d,RenderContext)
HX_DECLARE_CLASS1(h2d,Text)
HX_DECLARE_CLASS1(h2d,TileGroup)
HX_DECLARE_CLASS2(h2d,col,Bounds)
HX_DECLARE_CLASS2(h3d,impl,RenderContext)
HX_DECLARE_CLASS2(h3d,shader,SignedDistanceField)
HX_DECLARE_CLASS1(hxsl,Shader)

namespace h2d{


class HXCPP_CLASS_ATTRIBUTES Text_obj : public  ::h2d::Drawable_obj
{
	public:
		typedef  ::h2d::Drawable_obj super;
		typedef Text_obj OBJ_;
		Text_obj();

	public:
		enum { _hx_ClassId = 0x5c1d28c3 };

		void __construct( ::h2d::Font font, ::h2d::Object parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="h2d.Text")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"h2d.Text"); }
		static ::hx::ObjectPtr< Text_obj > __new( ::h2d::Font font, ::h2d::Object parent);
		static ::hx::ObjectPtr< Text_obj > __alloc(::hx::Ctx *_hx_ctx, ::h2d::Font font, ::h2d::Object parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Text_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Text",cd,f8,d2,37); }

		 ::h2d::Font font;
		::String text;
		int textColor;
		 ::Dynamic maxWidth;
		 ::Dynamic dropShadow;
		Float textWidth;
		Float textHeight;
		 ::h2d::Align textAlign;
		Float letterSpacing;
		Float lineSpacing;
		 ::h2d::TileGroup glyphs;
		bool needsRebuild;
		::String currentText;
		bool textChanged;
		bool calcDone;
		Float calcXMin;
		Float calcYMin;
		Float calcWidth;
		Float calcHeight;
		Float calcSizeHeight;
		Float constraintWidth;
		Float realMaxWidth;
		 ::h3d::shader::SignedDistanceField sdfShader;
		 ::h2d::Font set_font( ::h2d::Font font);
		::Dynamic set_font_dyn();

		 ::h2d::Align set_textAlign( ::h2d::Align a);
		::Dynamic set_textAlign_dyn();

		Float set_letterSpacing(Float s);
		::Dynamic set_letterSpacing_dyn();

		Float set_lineSpacing(Float s);
		::Dynamic set_lineSpacing_dyn();

		void constraintSize(Float width,Float height);

		void onAdd();

		void checkText();
		::Dynamic checkText_dyn();

		void sync( ::h2d::RenderContext ctx);

		void draw( ::h2d::RenderContext ctx);

		::String set_text(::String t);
		::Dynamic set_text_dyn();

		void validateText();
		::Dynamic validateText_dyn();

		void rebuild();
		::Dynamic rebuild_dyn();

		Float calcTextWidth(::String text);
		::Dynamic calcTextWidth_dyn();

		::String splitText(::String text);
		::Dynamic splitText_dyn();

		::String splitRawText(::String text,::hx::Null< Float >  leftMargin,::hx::Null< Float >  afterData, ::h2d::Font font,::Array< Float > sizes, ::Dynamic prevChar);
		::Dynamic splitRawText_dyn();

		::String getTextProgress(::String text,Float progress);
		::Dynamic getTextProgress_dyn();

		void initGlyphs(::String text,::hx::Null< bool >  rebuild);
		::Dynamic initGlyphs_dyn();

		void updateSize();
		::Dynamic updateSize_dyn();

		Float get_textHeight();
		::Dynamic get_textHeight_dyn();

		Float get_textWidth();
		::Dynamic get_textWidth_dyn();

		 ::Dynamic set_maxWidth( ::Dynamic w);
		::Dynamic set_maxWidth_dyn();

		void updateConstraint();
		::Dynamic updateConstraint_dyn();

		int set_textColor(int c);
		::Dynamic set_textColor_dyn();

		void getBoundsRec( ::h2d::Object relativeTo, ::h2d::col::Bounds out,bool forSize);

};

} // end namespace h2d

#endif /* INCLUDED_h2d_Text */ 
