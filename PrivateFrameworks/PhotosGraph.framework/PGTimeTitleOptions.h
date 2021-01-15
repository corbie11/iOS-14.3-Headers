/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGTimeTitleOptions : NSObject {
    unsigned long long  _allowedFormats;
    bool  _filterDates;
    NSLocale * _locale;
    NSSet * _locationNodes;
    NSSet * _momentNodes;
}

@property (nonatomic) unsigned long long allowedFormats;
@property (nonatomic) bool filterDates;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, retain) NSSet *locationNodes;
@property (nonatomic, retain) NSSet *momentNodes;

- (void).cxx_destruct;
- (unsigned long long)allowedFormats;
- (bool)filterDates;
- (id)init;
- (id)locale;
- (id)locationNodes;
- (id)momentNodes;
- (void)setAllowedFormats:(unsigned long long)arg1;
- (void)setFilterDates:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setLocationNodes:(id)arg1;
- (void)setMomentNodes:(id)arg1;

@end