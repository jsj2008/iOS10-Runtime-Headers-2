/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLayoutSpaceBezierPathCache : TSUConcurrentCache

- (id)bezierPathForGridRange:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg2 inset:(double)arg3 reoriginToZero:(bool)arg4;
- (void)insertBezierPath:(id)arg1 gridRange:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg3 inset:(double)arg4 reoriginToZero:(bool)arg5;

@end
