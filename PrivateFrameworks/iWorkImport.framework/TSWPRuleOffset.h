/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPRuleOffset : NSObject <NSCopying> {
    double  _dX;
    double  _dY;
}

@property (nonatomic, readonly) double dX;
@property (nonatomic, readonly) double dY;

+ (id)ruleOffset;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dX;
- (double)dY;
- (id)description;
- (id)init;
- (id)initWithArchive:(const struct Point { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; float x5; float x6; }*)arg1 unarchiver:(id)arg2;
- (id)initWithDX:(double)arg1 dY:(double)arg2;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })pointValue;
- (void)saveToArchive:(struct Point { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; float x5; float x6; }*)arg1 archiver:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeValue;

@end
