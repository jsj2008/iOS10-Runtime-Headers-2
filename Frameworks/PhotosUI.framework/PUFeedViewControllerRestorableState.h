/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedViewControllerRestorableState : NSObject <NSCoding> {
    NSArray * _centerAssetFrames;
    NSArray * _centerAssetUUIDs;
    NSURL * _centerSectionEntryURIRepresentation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _centerSectionFrame;
    struct CGSize { 
        double width; 
        double height; 
    }  _collectionViewSize;
    NSDate * _date;
    bool  _scrolledToNewest;
}

@property (nonatomic, copy) NSArray *centerAssetFrames;
@property (nonatomic, copy) NSArray *centerAssetUUIDs;
@property (nonatomic, copy) NSURL *centerSectionEntryURIRepresentation;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } centerSectionFrame;
@property (nonatomic) struct CGSize { double x1; double x2; } collectionViewSize;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic) bool scrolledToNewest;

- (void).cxx_destruct;
- (id)centerAssetFrames;
- (id)centerAssetUUIDs;
- (id)centerSectionEntryURIRepresentation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })centerSectionFrame;
- (struct CGSize { double x1; double x2; })collectionViewSize;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)scrolledToNewest;
- (void)setCenterAssetFrames:(id)arg1;
- (void)setCenterAssetUUIDs:(id)arg1;
- (void)setCenterSectionEntryURIRepresentation:(id)arg1;
- (void)setCenterSectionFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCollectionViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDate:(id)arg1;
- (void)setScrolledToNewest:(bool)arg1;

@end
