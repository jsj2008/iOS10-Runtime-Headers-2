/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPColumn : NSObject <TSWPOffscreenColumn> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _anchoredAttachmentRange;
    unsigned long long  _characterCount;
    unsigned long long  _columnIndex;
    double  _contentBottom;
    double  _erasableContentBottom;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frameBounds;
    int  _layoutResultFlags;
    struct shared_ptr<TSWPLineFragmentArray> { 
        struct TSWPLineFragmentArray {} *px; 
        struct shared_count { 
            struct sp_counted_base {} *pi_; 
        } pn; 
    }  _lineFragmentArray;
    unsigned long long  _nextWidowPullsDownFromCharIndex;
    unsigned long long  _pageNumber;
    struct vector<TSWPAdornmentRect, std::__1::allocator<TSWPAdornmentRect> > { struct TSWPAdornmentRect {} *x1; struct TSWPAdornmentRect {} *x2; struct __compressed_pair<TSWPAdornmentRect *, std::__1::allocator<TSWPAdornmentRect> > { struct TSWPAdornmentRect {} *x_3_1_1; } x3; } * _paragraphAdornments;
    unsigned long long  _scaleTextPercent;
    unsigned long long  _startCharIndex;
    TSWPStorage * _storage;
    unsigned long long  _storageChangeCount;
    <TSWPStyleProvider> * _styleProvider;
    bool  _textIsVertical;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } anchoredRange;
@property (nonatomic) unsigned long long characterCount;
@property (nonatomic) unsigned long long columnIndex;
@property (nonatomic) double contentBottom;
@property (nonatomic, readonly) unsigned long long countLines;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double erasableContentBottom;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameBounds;
@property (readonly) unsigned long long hash;
@property (nonatomic) int layoutResultFlags;
@property (nonatomic) unsigned long long nextWidowPullsDownFromCharIndex;
@property (nonatomic) unsigned long long pageNumber;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic) unsigned long long scaleTextPercent;
@property (nonatomic, readonly) unsigned long long startAnchoredCharIndex;
@property (nonatomic) unsigned long long startCharIndex;
@property (nonatomic, readonly) TSWPStorage *storage;
@property (nonatomic) unsigned long long storageChangeCount;
@property (nonatomic, retain) <TSWPStyleProvider> *styleProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double textBottom;
@property (nonatomic) bool textIsVertical;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transformFromWP;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transformToWP;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } typographicBoundsForCell;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } wpBounds;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsRectForSelection:(id)arg1 columnArray:(id)arg2 includeRuby:(bool)arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForInsertionPoint:(id)arg1 withColumns:(id)arg2;
+ (unsigned long long)charIndexForPoint:(struct CGPoint { double x1; double x2; })arg1 inColumnsArray:(id)arg2 allowPastBreak:(bool)arg3 allowNotFound:(bool)arg4 isAtEndOfLine:(bool*)arg5 leadingEdge:(bool*)arg6;
+ (unsigned long long)charIndexForPoint:(struct CGPoint { double x1; double x2; })arg1 inColumnsArray:(id)arg2 allowPastBreak:(bool)arg3 allowNotFound:(bool)arg4 pastCenterGoesToNextChar:(bool)arg5 isAtEndOfLine:(bool*)arg6 leadingEdge:(bool*)arg7;
+ (id)closestColumnInColumnsArray:(id)arg1 forPoint:(struct CGPoint { double x1; double x2; })arg2 ignoreEmptyColumns:(bool)arg3 ignoreDrawableOnlyColumns:(bool)arg4;
+ (id)columnForCharIndex:(unsigned long long)arg1 allowEndOfColumn:(bool)arg2 withColumns:(id)arg3;
+ (id)commentKnobBaseOriginForHighlightAtTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withColumns:(id)arg2;
+ (struct CGPoint { double x1; double x2; })connectionLinePointForChangeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withColumns:(id)arg2 layoutTarget:(id)arg3;
+ (id)footnoteMarkAttachmentInColumnArray:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
+ (id)footnoteReferenceAttachmentInColumnArray:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
+ (struct CGSize { double x1; double x2; })layoutSizeForParagraphEnumerator:(const struct TSWPParagraphEnumerator { id x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; bool x6; struct _NSRange { unsigned long long x_7_1_1; unsigned long long x_7_1_2; } x7; }*)arg1 inColumns:(id)arg2 lineCount:(out unsigned long long*)arg3 nextLineOffset:(out double*)arg4;
+ (id)pathForHighlightWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 columnArray:(id)arg2 pathStyle:(int)arg3;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfColumns:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForSelection:(id)arg1 withColumns:(id)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForSelection:(id)arg1 withColumns:(id)arg2 useParagraphModeRects:(bool)arg3;
+ (id)smartFieldWithAttributeKind:(int)arg1 inColumnArray:(id)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addAdornmentRect:(const struct TSWPAdornmentRect { int x1; id x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; }*)arg1;
- (unsigned long long)anchoredCharCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })anchoredRange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsOfLineFragmentAtIndex:(unsigned long long)arg1;
- (struct _TSWPCharIndexAndPosition { unsigned long long x1; int x2; double x3; int x4; double x5; })calcAttachmentPositionForDrawable:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 inTextLayoutTarget:(id)arg3 tlBoundsInfluencingWrap:(struct CGPoint { double x1; double x2; })arg4 wrapOutset:(struct CGSize { double x1; double x2; })arg5 wrapMargin:(double)arg6 makeInline:(bool)arg7;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForSelection:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })changeBarRectForLineFragment:(const struct TSWPLineFragment { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; double x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; double x_8_1_6; double x_8_1_7; } x8; struct TSWPListLabel {} *x9; id x10; void x11; /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*x12; BOOL x13; void*x14; out const void*x15; void*x16; unsigned short x17; void*x18; void*x19; unsigned long x20; int x21; in void*x22; void*x23; void*x24; float x25; void*x26; void*x27; short x28; void*x29; double x30; SEL x31; SEL x32; void*x33; void*x34; void*x35; SEL x36; SEL x37; void*x38; long x39; long x40; out BOOL x41; void*x42; void*x43; out const void*x44; void*x45; unsigned short x46; void*x47; void*x48; unsigned long x49; int x50; in void*x51; void*x52; void*x53; float x54; void*x55; void*x56; void*x57; void*x58; struct TSWPLineRef {} *x59; struct TSWPLineRef {} *x60; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_61_1_1; } x61; }*)arg1 layoutTarget:(id)arg2;
- (unsigned long long)charIndexForSelectionFromPoint:(struct CGPoint { double x1; double x2; })arg1 isTail:(bool)arg2;
- (unsigned long long)charIndexFromPoint:(struct CGPoint { double x1; double x2; })arg1 allowPastBreak:(bool)arg2 pastCenterGoesToNextChar:(bool)arg3 allowNotFound:(bool)arg4 isAtEndOfLine:(bool*)arg5 leadingEdge:(bool*)arg6;
- (unsigned long long)charIndexFromPoint:(struct CGPoint { double x1; double x2; })arg1 allowPastBreak:(bool)arg2 pastCenterGoesToNextChar:(bool)arg3 allowNotFound:(bool)arg4 isAtEndOfLine:(bool*)arg5 outFragment:(const struct TSWPLineFragment {}**)arg6 leadingEdge:(bool*)arg7;
- (unsigned long long)charIndexFromWPPoint:(struct CGPoint { double x1; double x2; })arg1 pastCenterGoesToNextChar:(bool)arg2 allowNotFound:(bool)arg3 outFragment:(const struct TSWPLineFragment {}**)arg4 leadingEdge:(bool*)arg5;
- (unsigned long long)characterCount;
- (void)clearAdornments;
- (unsigned long long)columnIndex;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })columnRectForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (double)contentBottom;
- (unsigned long long)countLines;
- (void)dealloc;
- (id)drawableIntersectionRectsForSelection:(id)arg1 inTarget:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })erasableBounds:(unsigned int)arg1;
- (double)erasableContentBottom;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })erasableRectForSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForSelection:(id)arg1 includeSpaceAfter:(bool)arg2 includeSpaceBefore:(bool)arg3 includeLeading:(bool)arg4;
- (unsigned int)fontTraitsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 includingLabel:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameBounds;
- (unsigned long long)glyphCountForRubyFieldAtCharIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })glyphRectForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 includingLabel:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })glyphRectForRubyFieldAtCharIndex:(unsigned long long)arg1 glyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)hasPartitionedAttachmentAtStart:(bool)arg1;
- (double)horizontalOffsetForCharIndex:(unsigned long long)arg1 lineFragmentIndex:(unsigned long long)arg2 bumpPastHyphen:(bool)arg3 allowPastLineBounds:(bool)arg4;
- (void)incrementRanges:(long long)arg1 startingAt:(unsigned long long)arg2;
- (id)initWithStorage:(id)arg1 frameBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)isLastLineFragmentPartitioned;
- (int)layoutResultFlags;
- (const struct shared_ptr<TSWPLineFragmentArray> { struct TSWPLineFragmentArray {} *x1; struct shared_count { struct sp_counted_base {} *x_2_1_1; } x2; }*)lineFragmentArray;
- (const struct shared_ptr<TSWPLineFragmentArray> { struct TSWPLineFragmentArray {} *x1; struct shared_count { struct sp_counted_base {} *x_2_1_1; } x2; }*)lineFragmentArrayForUnitTests;
- (const struct TSWPLineFragment { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; double x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; double x_8_1_6; double x_8_1_7; } x8; struct TSWPListLabel {} *x9; id x10; void x11; /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*x12; BOOL x13; void*x14; out const void*x15; void*x16; unsigned short x17; void*x18; void*x19; unsigned long x20; int x21; in void*x22; void*x23; void*x24; float x25; void*x26; void*x27; short x28; void*x29; double x30; SEL x31; SEL x32; void*x33; void*x34; void*x35; SEL x36; SEL x37; void*x38; long x39; long x40; out BOOL x41; void*x42; void*x43; out const void*x44; void*x45; unsigned short x46; void*x47; void*x48; unsigned long x49; int x50; in void*x51; void*x52; void*x53; float x54; void*x55; void*x56; void*x57; void*x58; struct TSWPLineRef {} *x59; struct TSWPLineRef {} *x60; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_61_1_1; } x61; }*)lineFragmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)lineFragmentCountForBaseline:(double)arg1;
- (unsigned long long)lineIndexForCharIndex:(unsigned long long)arg1 eol:(bool)arg2;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; })lineMetricsAtCharIndex:(unsigned long long)arg1 allowEndOfLine:(bool)arg2;
- (id)lineSelectionsForSelection:(id)arg1;
- (double)logicalBoundsBottom;
- (double)logicalBoundsTop;
- (void)makeEmpty:(unsigned long long)arg1 anchoredRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 layoutResultFlags:(int)arg3;
- (struct CGSize { double x1; double x2; })maxSize;
- (double)minimumHeightForLayoutOnPage;
- (const struct TSWPLineFragment { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; double x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; double x_8_1_6; double x_8_1_7; } x8; struct TSWPListLabel {} *x9; id x10; void x11; /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*x12; BOOL x13; void*x14; out const void*x15; void*x16; unsigned short x17; void*x18; void*x19; unsigned long x20; int x21; in void*x22; void*x23; void*x24; float x25; void*x26; void*x27; short x28; void*x29; double x30; SEL x31; SEL x32; void*x33; void*x34; void*x35; SEL x36; SEL x37; void*x38; long x39; long x40; out BOOL x41; void*x42; void*x43; out const void*x44; void*x45; unsigned short x46; void*x47; void*x48; unsigned long x49; int x50; in void*x51; void*x52; void*x53; float x54; void*x55; void*x56; void*x57; void*x58; struct TSWPLineRef {} *x59; struct TSWPLineRef {} *x60; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_61_1_1; } x61; }*)nearestLineFragmentWithSameVerticalPositionAs:(unsigned long long)arg1 xPos:(double)arg2;
- (unsigned long long)nextWidowPullsDownFromCharIndex;
- (void)offsetLineFragmentsByPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)onlyHasAnchoredDrawable;
- (bool)onlyHasPartitionedAttachments;
- (const struct TSWPLineFragment { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; double x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; double x_8_1_6; double x_8_1_7; } x8; struct TSWPListLabel {} *x9; id x10; void x11; /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*x12; BOOL x13; void*x14; out const void*x15; void*x16; unsigned short x17; void*x18; void*x19; unsigned long x20; int x21; in void*x22; void*x23; void*x24; float x25; void*x26; void*x27; short x28; void*x29; double x30; SEL x31; SEL x32; void*x33; void*x34; void*x35; SEL x36; SEL x37; void*x38; long x39; long x40; out BOOL x41; void*x42; void*x43; out const void*x44; void*x45; unsigned short x46; void*x47; void*x48; unsigned long x49; int x50; in void*x51; void*x52; void*x53; float x54; void*x55; void*x56; void*x57; void*x58; struct TSWPLineRef {} *x59; struct TSWPLineRef {} *x60; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_61_1_1; } x61; }*)pColumnEndingPartitionedLineFragmentInSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)pInfoForCharIndex:(unsigned long long)arg1 isAtStart:(out bool*)arg2 isAtEnd:(out bool*)arg3;
- (bool)pIsRemappedCharIndexAfterBreak:(inout unsigned long long*)arg1 textSource:(out id*)arg2;
- (id)pMutableRectsForSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 selectionType:(int)arg2 includeSpaceAfter:(bool)arg3 includeSpaceBefore:(bool)arg4 includeLeading:(bool)arg5 forParagraphMode:(bool)arg6 includeRuby:(bool)arg7 inranges:(id)arg8 outranges:(id*)arg9;
- (unsigned long long)pageNumber;
- (id)partitionedLayoutForInfo:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfLineFragmentAtIndex:(unsigned long long)arg1;
- (id)rectsForSelection:(id)arg1;
- (id)rectsForSelection:(id)arg1 ranges:(id*)arg2;
- (id)rectsForSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)rectsForSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 selectionType:(int)arg2;
- (id)rectsForSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 selectionType:(int)arg2 forParagraphMode:(bool)arg3;
- (id)rectsForSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 selectionType:(int)arg2 forParagraphMode:(bool)arg3 includeRuby:(bool)arg4;
- (id)rectsForSelectionRanges:(id)arg1 selectionType:(int)arg2;
- (void)renderWithRenderer:(id)arg1 currentSelection:(id)arg2 limitSelection:(id)arg3 listRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 rubyGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 isCanvasInteractive:(bool)arg6 suppressedMisspellingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg7 blackAndWhite:(bool)arg8 dictationInterpretations:(const struct TSWPRangeVector { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)arg9 autocorrections:(const struct TSWPRangeVector { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)arg10 markedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg11 markedText:(id)arg12 renderMode:(int)arg13 pageCount:(unsigned long long)arg14 suppressInvisibles:(bool)arg15 suppressFontSmoothing:(bool)arg16 currentCanvasSelection:(id)arg17;
- (bool)requiresGlyphVectorsForHeightMeasurement;
- (unsigned long long)scaleTextPercent;
- (void)setAnchoredRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setCharacterCount:(unsigned long long)arg1;
- (void)setColumnIndex:(unsigned long long)arg1;
- (void)setContentBottom:(double)arg1;
- (void)setErasableContentBottom:(double)arg1;
- (void)setLayoutResultFlags:(int)arg1;
- (void)setLineFragmentArray:(const struct shared_ptr<TSWPLineFragmentArray> { struct TSWPLineFragmentArray {} *x1; struct shared_count { struct sp_counted_base {} *x_2_1_1; } x2; }*)arg1;
- (void)setNextWidowPullsDownFromCharIndex:(unsigned long long)arg1;
- (void)setPageNumber:(unsigned long long)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setScaleTextPercent:(unsigned long long)arg1;
- (void)setStartCharIndex:(unsigned long long)arg1;
- (void)setStorageChangeCount:(unsigned long long)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setTextIsVertical:(bool)arg1;
- (void)setTransformFromWP:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setWpBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)singleLinePartitionedInfoAtStart:(bool)arg1;
- (id)smartFieldAtCharIndex:(unsigned long long)arg1 attributeKind:(int)arg2;
- (unsigned long long)startAnchoredCharIndex;
- (unsigned long long)startCharIndex;
- (id)storage;
- (unsigned long long)storageChangeCount;
- (id)styleProvider;
- (double)textBottom;
- (double)textHeight;
- (bool)textIsVertical;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformFromWP;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformToWP;
- (void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeFootnoteReferenceCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })typographicBoundsForCell;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })wpBounds;

@end
