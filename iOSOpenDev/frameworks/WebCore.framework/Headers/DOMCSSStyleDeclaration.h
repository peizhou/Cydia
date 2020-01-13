/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <WebCore/WebCore-Structs.h>
#import <WebCore/DOMCSSStyleDeclaration.h>
#import <WebCore/DOMObject.h>

@class NSString, DOMCSSRule;

@interface DOMCSSStyleDeclaration : DOMObject {
}
@property(readonly, retain) DOMCSSRule *parentRule;	// G=0x2f6015; 
@property(readonly, assign) unsigned length;	// G=0x2f5109; 
@property(copy) NSString *cssText;	// G=0x24ee31; S=0x2f60d9; 
- (void)dealloc;	// 0x78f4d
- (void)finalize;	// 0x2f6221
// declared property getter: - (id)cssText;	// 0x24ee31
// declared property setter: - (void)setCssText:(id)text;	// 0x2f60d9
// declared property getter: - (unsigned)length;	// 0x2f5109
// declared property getter: - (id)parentRule;	// 0x2f6015
- (id)getPropertyValue:(id)value;	// 0x2f5e35
- (id)getPropertyCSSValue:(id)value;	// 0x2f5c69
- (id)removeProperty:(id)property;	// 0x2f5a75
- (id)getPropertyPriority:(id)priority;	// 0x2f5895
- (void)setProperty:(id)property value:(id)value priority:(id)priority;	// 0x24ea09
- (void)setProperty:(id)property :(id)arg2 :(id)arg3;	// 0x2f5639
- (id)item:(unsigned)item;	// 0x2f54e5
- (id)getPropertyShorthand:(id)shorthand;	// 0x2f5305
- (BOOL)isPropertyImplicit:(id)implicit;	// 0x2f51c9
@end

@interface DOMCSSStyleDeclaration (DOMCSS2Properties)
@property(retain) id azimuth;	// G=0x2f0aed; S=0x2f0b09; converted property
@property(retain) id background;	// G=0x2f0b3d; S=0x2f0b59; converted property
@property(retain) id backgroundAttachment;	// G=0x2f0b8d; S=0x2f0ba9; converted property
@property(retain) id backgroundColor;	// G=0x2f0bdd; S=0x2f0bf9; converted property
@property(retain) id backgroundImage;	// G=0x2f0c2d; S=0x2f0c49; converted property
@property(retain) id backgroundPosition;	// G=0x2f0c7d; S=0x2f0c99; converted property
@property(retain) id backgroundRepeat;	// G=0x2f0ccd; S=0x2f0ce9; converted property
@property(retain) id border;	// G=0x2f0d1d; S=0x2f0d39; converted property
@property(retain) id borderCollapse;	// G=0x2f0d6d; S=0x2f0d89; converted property
@property(retain) id borderColor;	// G=0x2f0dbd; S=0x2f0dd9; converted property
@property(retain) id borderSpacing;	// G=0x2f0e0d; S=0x2f0e29; converted property
@property(retain) id borderStyle;	// G=0x2f0e5d; S=0x2f0e79; converted property
@property(retain) id borderTop;	// G=0x2f0ead; S=0x2f0ec9; converted property
@property(retain) id borderRight;	// G=0x2f0efd; S=0x2f0f19; converted property
@property(retain) id borderBottom;	// G=0x2f0f4d; S=0x2f0f69; converted property
@property(retain) id borderLeft;	// G=0x2f0f9d; S=0x2f0fb9; converted property
@property(retain) id borderTopColor;	// G=0x2f0fed; S=0x2f1009; converted property
@property(retain) id borderRightColor;	// G=0x2f103d; S=0x2f1059; converted property
@property(retain) id borderBottomColor;	// G=0x2f108d; S=0x2f10a9; converted property
@property(retain) id borderLeftColor;	// G=0x2f10dd; S=0x2f10f9; converted property
@property(retain) id borderTopStyle;	// G=0x2f112d; S=0x2f1149; converted property
@property(retain) id borderRightStyle;	// G=0x2f117d; S=0x2f1199; converted property
@property(retain) id borderBottomStyle;	// G=0x2f11cd; S=0x2f11e9; converted property
@property(retain) id borderLeftStyle;	// G=0x2f121d; S=0x2f1239; converted property
@property(retain) id borderTopWidth;	// G=0x2f126d; S=0x2f1289; converted property
@property(retain) id borderRightWidth;	// G=0x2f12bd; S=0x2f12d9; converted property
@property(retain) id borderBottomWidth;	// G=0x2f130d; S=0x2f1329; converted property
@property(retain) id borderLeftWidth;	// G=0x2f135d; S=0x2f1379; converted property
@property(retain) id borderWidth;	// G=0x2f13ad; S=0x2f13c9; converted property
@property(retain) id bottom;	// G=0x2f13fd; S=0x2f1419; converted property
@property(retain) id captionSide;	// G=0x2f144d; S=0x2f1469; converted property
@property(retain) id clear;	// G=0x2f149d; S=0x2f14b9; converted property
@property(retain) id clip;	// G=0x2f14ed; S=0x2f1509; converted property
@property(retain) id color;	// G=0x2f153d; S=0x24ecf9; converted property
@property(retain) id content;	// G=0x2f1559; S=0x2f1575; converted property
@property(retain) id counterIncrement;	// G=0x2f15a9; S=0x2f15c5; converted property
@property(retain) id counterReset;	// G=0x2f15f9; S=0x2f1615; converted property
@property(retain) id cue;	// G=0x2f1649; S=0x2f1665; converted property
@property(retain) id cueAfter;	// G=0x2f1699; S=0x2f16b5; converted property
@property(retain) id cueBefore;	// G=0x2f16e9; S=0x2f1705; converted property
@property(retain) id cursor;	// G=0x2f1739; S=0x2f1755; converted property
@property(retain) id direction;	// G=0x2f1789; S=0x2f17a5; converted property
@property(retain) id display;	// G=0x2f17d9; S=0x2f17f5; converted property
@property(retain) id elevation;	// G=0x2f1829; S=0x2f1845; converted property
@property(retain) id emptyCells;	// G=0x2f1879; S=0x2f1895; converted property
@property(retain) id cssFloat;	// G=0x2f18c9; S=0x2f18e5; converted property
@property(retain) id font;	// G=0x2f1919; S=0x2f1935; converted property
@property(retain) id fontFamily;	// G=0x2f1969; S=0x24e9d5; converted property
@property(retain) id fontSize;	// G=0x2f1985; S=0x24ecc5; converted property
@property(retain) id fontSizeAdjust;	// G=0x2f19a1; S=0x2f19bd; converted property
@property(retain) id fontStretch;	// G=0x2f1a41; S=0x2f1a5d; converted property
@property(retain) id fontStyle;	// G=0x2f1a91; S=0x2f1aad; converted property
@property(retain) id fontVariant;	// G=0x2f1ae1; S=0x2f1afd; converted property
@property(retain) id fontWeight;	// G=0x2f1b31; S=0x2f1b4d; converted property
@property(retain) id height;	// G=0x2f1b81; S=0x2f1b9d; converted property
@property(retain) id left;	// G=0x2f1bd1; S=0x2f1bed; converted property
@property(retain) id letterSpacing;	// G=0x2f1c21; S=0x2f1c3d; converted property
@property(retain) id lineHeight;	// G=0x2f1c71; S=0x24edfd; converted property
@property(retain) id listStyle;	// G=0x2f1c8d; S=0x2f1ca9; converted property
@property(retain) id listStyleImage;	// G=0x2f1cdd; S=0x2f1cf9; converted property
@property(retain) id listStylePosition;	// G=0x2f1d2d; S=0x2f1d49; converted property
@property(retain) id listStyleType;	// G=0x2f1d7d; S=0x2f1d99; converted property
@property(retain) id margin;	// G=0x2f1dcd; S=0x24edc9; converted property
@property(retain) id marginTop;	// G=0x2f1de9; S=0x2f1e05; converted property
@property(retain) id marginRight;	// G=0x2f1e39; S=0x2f1e55; converted property
@property(retain) id marginBottom;	// G=0x2f1e89; S=0x2f1ea5; converted property
@property(retain) id marginLeft;	// G=0x2f1ed9; S=0x2f1ef5; converted property
@property(retain) id markerOffset;	// G=0x2f1f29; S=0x2f1f45; converted property
@property(retain) id marks;	// G=0x2f1f79; S=0x2f1f95; converted property
@property(retain) id maxHeight;	// G=0x2f1fc9; S=0x2f1fe5; converted property
@property(retain) id maxWidth;	// G=0x2f2019; S=0x2f2035; converted property
@property(retain) id minHeight;	// G=0x2f2069; S=0x2f2085; converted property
@property(retain) id minWidth;	// G=0x2f20b9; S=0x2f20d5; converted property
@property(retain) id orphans;	// G=0x2f2109; S=0x2f2125; converted property
@property(retain) id outline;	// G=0x2f2159; S=0x2f2175; converted property
@property(retain) id outlineColor;	// G=0x2f21a9; S=0x2f21c5; converted property
@property(retain) id outlineStyle;	// G=0x2f21f9; S=0x2f2215; converted property
@property(retain) id outlineWidth;	// G=0x2f2249; S=0x2f2265; converted property
@property(retain) id overflow;	// G=0x2f2299; S=0x24ed61; converted property
@property(retain) id padding;	// G=0x2f22b5; S=0x24ed95; converted property
@property(retain) id paddingTop;	// G=0x2f22d1; S=0x2f22ed; converted property
@property(retain) id paddingRight;	// G=0x2f2321; S=0x2f233d; converted property
@property(retain) id paddingBottom;	// G=0x2f2371; S=0x2f238d; converted property
@property(retain) id paddingLeft;	// G=0x2f23c1; S=0x2f23dd; converted property
@property(retain) id page;	// G=0x2f2411; S=0x2f242d; converted property
@property(retain) id pageBreakAfter;	// G=0x2f2461; S=0x2f247d; converted property
@property(retain) id pageBreakBefore;	// G=0x2f24b1; S=0x2f24cd; converted property
@property(retain) id pageBreakInside;	// G=0x2f2501; S=0x2f251d; converted property
@property(retain) id pause;	// G=0x2f2551; S=0x2f256d; converted property
@property(retain) id pauseAfter;	// G=0x2f25a1; S=0x2f25bd; converted property
@property(retain) id pauseBefore;	// G=0x2f25f1; S=0x2f260d; converted property
@property(retain) id pitch;	// G=0x2f2641; S=0x2f265d; converted property
@property(retain) id pitchRange;	// G=0x2f2691; S=0x2f26ad; converted property
@property(retain) id playDuring;	// G=0x2f26e1; S=0x2f26fd; converted property
@property(retain) id position;	// G=0x2f2731; S=0x2f274d; converted property
@property(retain) id quotes;	// G=0x2f2781; S=0x2f279d; converted property
@property(retain) id richness;	// G=0x2f27d1; S=0x2f27ed; converted property
@property(retain) id right;	// G=0x2f2821; S=0x2f283d; converted property
@property(retain) id size;	// G=0x2f2871; S=0x2f288d; converted property
@property(retain) id speak;	// G=0x2f28c1; S=0x2f28dd; converted property
@property(retain) id speakHeader;	// G=0x2f2911; S=0x2f292d; converted property
@property(retain) id speakNumeral;	// G=0x2f2961; S=0x2f297d; converted property
@property(retain) id speakPunctuation;	// G=0x2f29b1; S=0x2f29cd; converted property
@property(retain) id speechRate;	// G=0x2f2a01; S=0x2f2a1d; converted property
@property(retain) id stress;	// G=0x2f2a51; S=0x2f2a6d; converted property
@property(retain) id tableLayout;	// G=0x2f2aa1; S=0x2f2abd; converted property
@property(retain) id textAlign;	// G=0x2f2af1; S=0x2f2b0d; converted property
@property(retain) id textDecoration;	// G=0x2f2b41; S=0x2f2b5d; converted property
@property(retain) id textIndent;	// G=0x2f2b91; S=0x2f2bad; converted property
@property(retain) id textShadow;	// G=0x2f2be1; S=0x2f2bfd; converted property
@property(retain) id textTransform;	// G=0x2f2c31; S=0x2f2c4d; converted property
@property(retain) id top;	// G=0x2f2c81; S=0x2f2c9d; converted property
@property(retain) id unicodeBidi;	// G=0x2f2cd1; S=0x2f2ced; converted property
@property(retain) id verticalAlign;	// G=0x2f2d21; S=0x2f2d3d; converted property
@property(retain) id visibility;	// G=0x2f2d71; S=0x2f2d8d; converted property
@property(retain) id voiceFamily;	// G=0x2f2dc1; S=0x2f2ddd; converted property
@property(retain) id volume;	// G=0x2f2e11; S=0x2f2e2d; converted property
@property(retain) id whiteSpace;	// G=0x2f2e61; S=0x24ed2d; converted property
@property(retain) id widows;	// G=0x2f2e7d; S=0x2f2e99; converted property
@property(retain) id width;	// G=0x2f2ecd; S=0x2f2ee9; converted property
@property(retain) id wordSpacing;	// G=0x2f2f1d; S=0x2f2f39; converted property
@property(retain) id zIndex;	// G=0x2f2f6d; S=0x2f2f89; converted property
// converted property getter: - (id)azimuth;	// 0x2f0aed
// converted property setter: - (void)setAzimuth:(id)azimuth;	// 0x2f0b09
// converted property getter: - (id)background;	// 0x2f0b3d
// converted property setter: - (void)setBackground:(id)background;	// 0x2f0b59
// converted property getter: - (id)backgroundAttachment;	// 0x2f0b8d
// converted property setter: - (void)setBackgroundAttachment:(id)attachment;	// 0x2f0ba9
// converted property getter: - (id)backgroundColor;	// 0x2f0bdd
// converted property setter: - (void)setBackgroundColor:(id)color;	// 0x2f0bf9
// converted property getter: - (id)backgroundImage;	// 0x2f0c2d
// converted property setter: - (void)setBackgroundImage:(id)image;	// 0x2f0c49
// converted property getter: - (id)backgroundPosition;	// 0x2f0c7d
// converted property setter: - (void)setBackgroundPosition:(id)position;	// 0x2f0c99
// converted property getter: - (id)backgroundRepeat;	// 0x2f0ccd
// converted property setter: - (void)setBackgroundRepeat:(id)repeat;	// 0x2f0ce9
// converted property getter: - (id)border;	// 0x2f0d1d
// converted property setter: - (void)setBorder:(id)border;	// 0x2f0d39
// converted property getter: - (id)borderCollapse;	// 0x2f0d6d
// converted property setter: - (void)setBorderCollapse:(id)collapse;	// 0x2f0d89
// converted property getter: - (id)borderColor;	// 0x2f0dbd
// converted property setter: - (void)setBorderColor:(id)color;	// 0x2f0dd9
// converted property getter: - (id)borderSpacing;	// 0x2f0e0d
// converted property setter: - (void)setBorderSpacing:(id)spacing;	// 0x2f0e29
// converted property getter: - (id)borderStyle;	// 0x2f0e5d
// converted property setter: - (void)setBorderStyle:(id)style;	// 0x2f0e79
// converted property getter: - (id)borderTop;	// 0x2f0ead
// converted property setter: - (void)setBorderTop:(id)top;	// 0x2f0ec9
// converted property getter: - (id)borderRight;	// 0x2f0efd
// converted property setter: - (void)setBorderRight:(id)right;	// 0x2f0f19
// converted property getter: - (id)borderBottom;	// 0x2f0f4d
// converted property setter: - (void)setBorderBottom:(id)bottom;	// 0x2f0f69
// converted property getter: - (id)borderLeft;	// 0x2f0f9d
// converted property setter: - (void)setBorderLeft:(id)left;	// 0x2f0fb9
// converted property getter: - (id)borderTopColor;	// 0x2f0fed
// converted property setter: - (void)setBorderTopColor:(id)color;	// 0x2f1009
// converted property getter: - (id)borderRightColor;	// 0x2f103d
// converted property setter: - (void)setBorderRightColor:(id)color;	// 0x2f1059
// converted property getter: - (id)borderBottomColor;	// 0x2f108d
// converted property setter: - (void)setBorderBottomColor:(id)color;	// 0x2f10a9
// converted property getter: - (id)borderLeftColor;	// 0x2f10dd
// converted property setter: - (void)setBorderLeftColor:(id)color;	// 0x2f10f9
// converted property getter: - (id)borderTopStyle;	// 0x2f112d
// converted property setter: - (void)setBorderTopStyle:(id)style;	// 0x2f1149
// converted property getter: - (id)borderRightStyle;	// 0x2f117d
// converted property setter: - (void)setBorderRightStyle:(id)style;	// 0x2f1199
// converted property getter: - (id)borderBottomStyle;	// 0x2f11cd
// converted property setter: - (void)setBorderBottomStyle:(id)style;	// 0x2f11e9
// converted property getter: - (id)borderLeftStyle;	// 0x2f121d
// converted property setter: - (void)setBorderLeftStyle:(id)style;	// 0x2f1239
// converted property getter: - (id)borderTopWidth;	// 0x2f126d
// converted property setter: - (void)setBorderTopWidth:(id)width;	// 0x2f1289
// converted property getter: - (id)borderRightWidth;	// 0x2f12bd
// converted property setter: - (void)setBorderRightWidth:(id)width;	// 0x2f12d9
// converted property getter: - (id)borderBottomWidth;	// 0x2f130d
// converted property setter: - (void)setBorderBottomWidth:(id)width;	// 0x2f1329
// converted property getter: - (id)borderLeftWidth;	// 0x2f135d
// converted property setter: - (void)setBorderLeftWidth:(id)width;	// 0x2f1379
// converted property getter: - (id)borderWidth;	// 0x2f13ad
// converted property setter: - (void)setBorderWidth:(id)width;	// 0x2f13c9
// converted property getter: - (id)bottom;	// 0x2f13fd
// converted property setter: - (void)setBottom:(id)bottom;	// 0x2f1419
// converted property getter: - (id)captionSide;	// 0x2f144d
// converted property setter: - (void)setCaptionSide:(id)side;	// 0x2f1469
// converted property getter: - (id)clear;	// 0x2f149d
// converted property setter: - (void)setClear:(id)clear;	// 0x2f14b9
// converted property getter: - (id)clip;	// 0x2f14ed
// converted property setter: - (void)setClip:(id)clip;	// 0x2f1509
// converted property getter: - (id)color;	// 0x2f153d
// converted property setter: - (void)setColor:(id)color;	// 0x24ecf9
// converted property getter: - (id)content;	// 0x2f1559
// converted property setter: - (void)setContent:(id)content;	// 0x2f1575
// converted property getter: - (id)counterIncrement;	// 0x2f15a9
// converted property setter: - (void)setCounterIncrement:(id)increment;	// 0x2f15c5
// converted property getter: - (id)counterReset;	// 0x2f15f9
// converted property setter: - (void)setCounterReset:(id)reset;	// 0x2f1615
// converted property getter: - (id)cue;	// 0x2f1649
// converted property setter: - (void)setCue:(id)cue;	// 0x2f1665
// converted property getter: - (id)cueAfter;	// 0x2f1699
// converted property setter: - (void)setCueAfter:(id)after;	// 0x2f16b5
// converted property getter: - (id)cueBefore;	// 0x2f16e9
// converted property setter: - (void)setCueBefore:(id)before;	// 0x2f1705
// converted property getter: - (id)cursor;	// 0x2f1739
// converted property setter: - (void)setCursor:(id)cursor;	// 0x2f1755
// converted property getter: - (id)direction;	// 0x2f1789
// converted property setter: - (void)setDirection:(id)direction;	// 0x2f17a5
// converted property getter: - (id)display;	// 0x2f17d9
// converted property setter: - (void)setDisplay:(id)display;	// 0x2f17f5
// converted property getter: - (id)elevation;	// 0x2f1829
// converted property setter: - (void)setElevation:(id)elevation;	// 0x2f1845
// converted property getter: - (id)emptyCells;	// 0x2f1879
// converted property setter: - (void)setEmptyCells:(id)cells;	// 0x2f1895
// converted property getter: - (id)cssFloat;	// 0x2f18c9
// converted property setter: - (void)setCssFloat:(id)aFloat;	// 0x2f18e5
// converted property getter: - (id)font;	// 0x2f1919
// converted property setter: - (void)setFont:(id)font;	// 0x2f1935
// converted property getter: - (id)fontFamily;	// 0x2f1969
// converted property setter: - (void)setFontFamily:(id)family;	// 0x24e9d5
// converted property getter: - (id)fontSize;	// 0x2f1985
// converted property setter: - (void)setFontSize:(id)size;	// 0x24ecc5
// converted property getter: - (id)fontSizeAdjust;	// 0x2f19a1
// converted property setter: - (void)setFontSizeAdjust:(id)adjust;	// 0x2f19bd
- (id)_fontSizeDelta;	// 0x2f19f1
- (void)_setFontSizeDelta:(id)delta;	// 0x2f1a0d
// converted property getter: - (id)fontStretch;	// 0x2f1a41
// converted property setter: - (void)setFontStretch:(id)stretch;	// 0x2f1a5d
// converted property getter: - (id)fontStyle;	// 0x2f1a91
// converted property setter: - (void)setFontStyle:(id)style;	// 0x2f1aad
// converted property getter: - (id)fontVariant;	// 0x2f1ae1
// converted property setter: - (void)setFontVariant:(id)variant;	// 0x2f1afd
// converted property getter: - (id)fontWeight;	// 0x2f1b31
// converted property setter: - (void)setFontWeight:(id)weight;	// 0x2f1b4d
// converted property getter: - (id)height;	// 0x2f1b81
// converted property setter: - (void)setHeight:(id)height;	// 0x2f1b9d
// converted property getter: - (id)left;	// 0x2f1bd1
// converted property setter: - (void)setLeft:(id)left;	// 0x2f1bed
// converted property getter: - (id)letterSpacing;	// 0x2f1c21
// converted property setter: - (void)setLetterSpacing:(id)spacing;	// 0x2f1c3d
// converted property getter: - (id)lineHeight;	// 0x2f1c71
// converted property setter: - (void)setLineHeight:(id)height;	// 0x24edfd
// converted property getter: - (id)listStyle;	// 0x2f1c8d
// converted property setter: - (void)setListStyle:(id)style;	// 0x2f1ca9
// converted property getter: - (id)listStyleImage;	// 0x2f1cdd
// converted property setter: - (void)setListStyleImage:(id)image;	// 0x2f1cf9
// converted property getter: - (id)listStylePosition;	// 0x2f1d2d
// converted property setter: - (void)setListStylePosition:(id)position;	// 0x2f1d49
// converted property getter: - (id)listStyleType;	// 0x2f1d7d
// converted property setter: - (void)setListStyleType:(id)type;	// 0x2f1d99
// converted property getter: - (id)margin;	// 0x2f1dcd
// converted property setter: - (void)setMargin:(id)margin;	// 0x24edc9
// converted property getter: - (id)marginTop;	// 0x2f1de9
// converted property setter: - (void)setMarginTop:(id)top;	// 0x2f1e05
// converted property getter: - (id)marginRight;	// 0x2f1e39
// converted property setter: - (void)setMarginRight:(id)right;	// 0x2f1e55
// converted property getter: - (id)marginBottom;	// 0x2f1e89
// converted property setter: - (void)setMarginBottom:(id)bottom;	// 0x2f1ea5
// converted property getter: - (id)marginLeft;	// 0x2f1ed9
// converted property setter: - (void)setMarginLeft:(id)left;	// 0x2f1ef5
// converted property getter: - (id)markerOffset;	// 0x2f1f29
// converted property setter: - (void)setMarkerOffset:(id)offset;	// 0x2f1f45
// converted property getter: - (id)marks;	// 0x2f1f79
// converted property setter: - (void)setMarks:(id)marks;	// 0x2f1f95
// converted property getter: - (id)maxHeight;	// 0x2f1fc9
// converted property setter: - (void)setMaxHeight:(id)height;	// 0x2f1fe5
// converted property getter: - (id)maxWidth;	// 0x2f2019
// converted property setter: - (void)setMaxWidth:(id)width;	// 0x2f2035
// converted property getter: - (id)minHeight;	// 0x2f2069
// converted property setter: - (void)setMinHeight:(id)height;	// 0x2f2085
// converted property getter: - (id)minWidth;	// 0x2f20b9
// converted property setter: - (void)setMinWidth:(id)width;	// 0x2f20d5
// converted property getter: - (id)orphans;	// 0x2f2109
// converted property setter: - (void)setOrphans:(id)orphans;	// 0x2f2125
// converted property getter: - (id)outline;	// 0x2f2159
// converted property setter: - (void)setOutline:(id)outline;	// 0x2f2175
// converted property getter: - (id)outlineColor;	// 0x2f21a9
// converted property setter: - (void)setOutlineColor:(id)color;	// 0x2f21c5
// converted property getter: - (id)outlineStyle;	// 0x2f21f9
// converted property setter: - (void)setOutlineStyle:(id)style;	// 0x2f2215
// converted property getter: - (id)outlineWidth;	// 0x2f2249
// converted property setter: - (void)setOutlineWidth:(id)width;	// 0x2f2265
// converted property getter: - (id)overflow;	// 0x2f2299
// converted property setter: - (void)setOverflow:(id)overflow;	// 0x24ed61
// converted property getter: - (id)padding;	// 0x2f22b5
// converted property setter: - (void)setPadding:(id)padding;	// 0x24ed95
// converted property getter: - (id)paddingTop;	// 0x2f22d1
// converted property setter: - (void)setPaddingTop:(id)top;	// 0x2f22ed
// converted property getter: - (id)paddingRight;	// 0x2f2321
// converted property setter: - (void)setPaddingRight:(id)right;	// 0x2f233d
// converted property getter: - (id)paddingBottom;	// 0x2f2371
// converted property setter: - (void)setPaddingBottom:(id)bottom;	// 0x2f238d
// converted property getter: - (id)paddingLeft;	// 0x2f23c1
// converted property setter: - (void)setPaddingLeft:(id)left;	// 0x2f23dd
// converted property getter: - (id)page;	// 0x2f2411
// converted property setter: - (void)setPage:(id)page;	// 0x2f242d
// converted property getter: - (id)pageBreakAfter;	// 0x2f2461
// converted property setter: - (void)setPageBreakAfter:(id)after;	// 0x2f247d
// converted property getter: - (id)pageBreakBefore;	// 0x2f24b1
// converted property setter: - (void)setPageBreakBefore:(id)before;	// 0x2f24cd
// converted property getter: - (id)pageBreakInside;	// 0x2f2501
// converted property setter: - (void)setPageBreakInside:(id)inside;	// 0x2f251d
// converted property getter: - (id)pause;	// 0x2f2551
// converted property setter: - (void)setPause:(id)pause;	// 0x2f256d
// converted property getter: - (id)pauseAfter;	// 0x2f25a1
// converted property setter: - (void)setPauseAfter:(id)after;	// 0x2f25bd
// converted property getter: - (id)pauseBefore;	// 0x2f25f1
// converted property setter: - (void)setPauseBefore:(id)before;	// 0x2f260d
// converted property getter: - (id)pitch;	// 0x2f2641
// converted property setter: - (void)setPitch:(id)pitch;	// 0x2f265d
// converted property getter: - (id)pitchRange;	// 0x2f2691
// converted property setter: - (void)setPitchRange:(id)range;	// 0x2f26ad
// converted property getter: - (id)playDuring;	// 0x2f26e1
// converted property setter: - (void)setPlayDuring:(id)during;	// 0x2f26fd
// converted property getter: - (id)position;	// 0x2f2731
// converted property setter: - (void)setPosition:(id)position;	// 0x2f274d
// converted property getter: - (id)quotes;	// 0x2f2781
// converted property setter: - (void)setQuotes:(id)quotes;	// 0x2f279d
// converted property getter: - (id)richness;	// 0x2f27d1
// converted property setter: - (void)setRichness:(id)richness;	// 0x2f27ed
// converted property getter: - (id)right;	// 0x2f2821
// converted property setter: - (void)setRight:(id)right;	// 0x2f283d
// converted property getter: - (id)size;	// 0x2f2871
// converted property setter: - (void)setSize:(id)size;	// 0x2f288d
// converted property getter: - (id)speak;	// 0x2f28c1
// converted property setter: - (void)setSpeak:(id)speak;	// 0x2f28dd
// converted property getter: - (id)speakHeader;	// 0x2f2911
// converted property setter: - (void)setSpeakHeader:(id)header;	// 0x2f292d
// converted property getter: - (id)speakNumeral;	// 0x2f2961
// converted property setter: - (void)setSpeakNumeral:(id)numeral;	// 0x2f297d
// converted property getter: - (id)speakPunctuation;	// 0x2f29b1
// converted property setter: - (void)setSpeakPunctuation:(id)punctuation;	// 0x2f29cd
// converted property getter: - (id)speechRate;	// 0x2f2a01
// converted property setter: - (void)setSpeechRate:(id)rate;	// 0x2f2a1d
// converted property getter: - (id)stress;	// 0x2f2a51
// converted property setter: - (void)setStress:(id)stress;	// 0x2f2a6d
// converted property getter: - (id)tableLayout;	// 0x2f2aa1
// converted property setter: - (void)setTableLayout:(id)layout;	// 0x2f2abd
// converted property getter: - (id)textAlign;	// 0x2f2af1
// converted property setter: - (void)setTextAlign:(id)align;	// 0x2f2b0d
// converted property getter: - (id)textDecoration;	// 0x2f2b41
// converted property setter: - (void)setTextDecoration:(id)decoration;	// 0x2f2b5d
// converted property getter: - (id)textIndent;	// 0x2f2b91
// converted property setter: - (void)setTextIndent:(id)indent;	// 0x2f2bad
// converted property getter: - (id)textShadow;	// 0x2f2be1
// converted property setter: - (void)setTextShadow:(id)shadow;	// 0x2f2bfd
// converted property getter: - (id)textTransform;	// 0x2f2c31
// converted property setter: - (void)setTextTransform:(id)transform;	// 0x2f2c4d
// converted property getter: - (id)top;	// 0x2f2c81
// converted property setter: - (void)setTop:(id)top;	// 0x2f2c9d
// converted property getter: - (id)unicodeBidi;	// 0x2f2cd1
// converted property setter: - (void)setUnicodeBidi:(id)bidi;	// 0x2f2ced
// converted property getter: - (id)verticalAlign;	// 0x2f2d21
// converted property setter: - (void)setVerticalAlign:(id)align;	// 0x2f2d3d
// converted property getter: - (id)visibility;	// 0x2f2d71
// converted property setter: - (void)setVisibility:(id)visibility;	// 0x2f2d8d
// converted property getter: - (id)voiceFamily;	// 0x2f2dc1
// converted property setter: - (void)setVoiceFamily:(id)family;	// 0x2f2ddd
// converted property getter: - (id)volume;	// 0x2f2e11
// converted property setter: - (void)setVolume:(id)volume;	// 0x2f2e2d
// converted property getter: - (id)whiteSpace;	// 0x2f2e61
// converted property setter: - (void)setWhiteSpace:(id)space;	// 0x24ed2d
// converted property getter: - (id)widows;	// 0x2f2e7d
// converted property setter: - (void)setWidows:(id)widows;	// 0x2f2e99
// converted property getter: - (id)width;	// 0x2f2ecd
// converted property setter: - (void)setWidth:(id)width;	// 0x2f2ee9
// converted property getter: - (id)wordSpacing;	// 0x2f2f1d
// converted property setter: - (void)setWordSpacing:(id)spacing;	// 0x2f2f39
// converted property getter: - (id)zIndex;	// 0x2f2f6d
// converted property setter: - (void)setZIndex:(id)index;	// 0x2f2f89
@end