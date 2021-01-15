/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLTemporaryImageTable : NSObject {
    unsigned short  _imageFormat;
    <PLThumbPersistenceManager> * _imageTable;
    NSString * _imageTablePath;
    NSMutableArray * _itemIndexToThumbEntryMapping;
    unsigned long long  _nextTableEntryIndex;
}

- (void).cxx_destruct;
- (void)_cleanup;
- (unsigned long long)_imageTableIndexForItemIndex:(unsigned long long)arg1;
- (void)_positional_setThumbnailsWithIdentifier:(id)arg1 thumbnailIndex:(unsigned long long)arg2 image:(id)arg3 assetUUID:(id)arg4;
- (void)dealloc;
- (id)imageForItemAtIndex:(unsigned long long)arg1;
- (id)initWithWithPath:(id)arg1 imageFormat:(unsigned short)arg2;
- (void)insertItemAtIndex:(unsigned long long)arg1;
- (void)removeItemAtIndex:(unsigned long long)arg1;
- (void)reset;
- (void)setImage:(id)arg1 forItemAtIndex:(unsigned long long)arg2;

@end