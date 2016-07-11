/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDDetectionController : NSObject <UIActionSheetDelegate> {
    DDActionController * _actionController;
    NSMapTable * _containerToContextsTable;
    NSMapTable * _containerToOperationsTable;
    NSMapTable * _containerToResultsTable;
    NSObject<DDDetectionControllerDelegate> * _delegate;
    NSOperationQueue * _fullScannerQueue;
    NSObject<OS_dispatch_queue> * _protectQueue;
    NSOperationQueue * _urlScannerQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property NSObject<DDDetectionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_shouldConsiderResultForCoreRecents:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg1;
+ (id)sharedController;
+ (id)tapAndHoldSchemes;

- (id)_applyBlock:(id /* block */)arg1 withResultsAtIndex:(unsigned long long)arg2 ofStorage:(id)arg3 context:(id)arg4;
- (void)_commonResetResultsForContainer:(id)arg1;
- (void)_doURLification:(id)arg1;
- (void)_enqueueOperation:(id)arg1;
- (id)_newOperationForContainer:(id)arg1;
- (id)_plainTextAugmentedContext:(id)arg1 withFrame:(id)arg2;
- (void)_resetStoredResultsForContainer:(id)arg1;
- (struct __DDResult { }*)_resultForAnchor:(id)arg1 forFrame:(id)arg2 context:(id*)arg3;
- (struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)_resultForIdentifier:(id)arg1 forContainer:(id)arg2 context:(id*)arg3;
- (struct __DDResult { }*)_resultForIdentifier:(id)arg1 withResults:(id)arg2 context:(id*)arg3;
- (id)_resultForLinkAtIndex:(unsigned long long)arg1 inTextStorage:(id)arg2 subResult:(id*)arg3 url:(id*)arg4;
- (struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)_resultForURL:(id)arg1 forContainer:(id)arg2 context:(id*)arg3;
- (struct __DDResult { }*)_resultForURL:(id)arg1 withResults:(id)arg2 context:(id*)arg3;
- (bool)_shouldImmediatelyShowActionSheetForCoreResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg1;
- (bool)_shouldImmediatelyShowActionSheetForURL:(id)arg1;
- (void)_startCoalescedURLification:(id)arg1;
- (void)_startCoalescedURLification:(id)arg1 clearPreviousResults:(bool)arg2;
- (id)_subResultAtIndex:(unsigned long long)arg1 ofResult:(id)arg2;
- (id)actionsAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 context:(id)arg3;
- (id)actionsForAnchor:(id)arg1 url:(id)arg2 forFrame:(id)arg3;
- (id)actionsForDOMNode:(id)arg1 forFrame:(id)arg2;
- (id)actionsForURL:(id)arg1;
- (id)actionsForURL:(id)arg1 identifier:(id)arg2 selectedText:(id)arg3 results:(id)arg4 context:(id)arg5;
- (void)cancelURLificationForContainer:(id)arg1;
- (void)cancelURLificationForFrame:(id)arg1;
- (void)containerWillBeRemoved:(id)arg1;
- (id)copyContextForContainer:(id)arg1;
- (void)dealloc;
- (id)defaultActionAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 context:(id)arg3;
- (id)defaultActionForAnchor:(id)arg1 url:(id)arg2 forFrame:(id)arg3;
- (id)defaultActionForDOMNode:(id)arg1 forFrame:(id)arg2;
- (id)defaultActionForURL:(id)arg1 results:(id)arg2 context:(id)arg3;
- (id)delegate;
- (void)frameWillBeRemoved:(id)arg1;
- (id)init;
- (void)performAction:(id)arg1 fromAlertController:(id)arg2 interactionDelegate:(id)arg3;
- (void)performAction:(id)arg1 fromView:(id)arg2 alertController:(id)arg3 interactionDelegate:(id)arg4;
- (void)performAction:(id)arg1 inView:(id)arg2 interactionDelegate:(id)arg3;
- (void)resetResultsForContainer:(id)arg1;
- (void)resetResultsForFrame:(id)arg1;
- (void)resetResultsForTextView:(id)arg1;
- (struct __DDResult { }*)resultForDOMNode:(id)arg1 forFrame:(id)arg2;
- (struct __DDResult { }*)resultForLinkAtIndex:(unsigned long long)arg1 inTextStorage:(id)arg2;
- (struct __DDResult { }*)resultForNode:(id)arg1 url:(id)arg2 frame:(id)arg3 contextRef:(id*)arg4;
- (struct __DDResult { }*)resultForURL:(id)arg1 identifier:(id)arg2 selectedText:(id)arg3 results:(id)arg4 context:(id)arg5 extendedContext:(id*)arg6;
- (void)setContext:(id)arg1 forContainer:(id)arg2;
- (void)setContext:(id)arg1 forFrame:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setResults:(struct __CFArray { }*)arg1 forContainer:(id)arg2;
- (void)setResults:(struct __CFArray { }*)arg1 forFrame:(id)arg2;
- (bool)shouldImmediatelyShowActionSheetForTapAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2;
- (bool)shouldImmediatelyShowActionSheetForURL:(id)arg1 forFrame:(id)arg2;
- (bool)shouldUseLightStyleAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2;
- (void)startURLificationForContainer:(id)arg1 detectedTypes:(unsigned long long)arg2;
- (void)startURLificationForContainer:(id)arg1 detectedTypes:(unsigned long long)arg2 options:(int)arg3;
- (void)startURLificationForFrame:(id)arg1 detectedTypes:(unsigned long long)arg2;
- (void)startURLificationForFrame:(id)arg1 detectedTypes:(unsigned long long)arg2 options:(int)arg3;
- (id)titleForResultAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 context:(id)arg3;
- (id)titleForURL:(id)arg1 results:(id)arg2 context:(id)arg3;

@end
