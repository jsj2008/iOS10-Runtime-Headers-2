/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKDocumentModelEnumerator : NSEnumerator {
    NSMutableArray * _enumeratorStack;
    id /* block */  _filter;
    <TSKModel> * _root;
    bool  _stop;
}

@property (nonatomic, retain) NSMutableArray *enumeratorStack;
@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, retain) <TSKModel> *root;

- (void)dealloc;
- (void)enumerateReferencedStylesUsingBlock:(id /* block */)arg1;
- (void)enumerateStyleClientsUsingBlock:(id /* block */)arg1;
- (void)enumerateUsingBlock:(id /* block */)arg1;
- (id)enumeratorStack;
- (id /* block */)filter;
- (id)initWithEnumerator:(id)arg1 filter:(id /* block */)arg2;
- (id)initWithRootModelObject:(id)arg1 filter:(id /* block */)arg2;
- (id)nextObject;
- (id)root;
- (void)setEnumeratorStack:(id)arg1;
- (void)setFilter:(id /* block */)arg1;
- (void)setRoot:(id)arg1;

@end
