/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphSocialGroupNode : PGGraphOptimizedNode {
    NSNumber * _uuid;
    float  _weight;
}

@property (nonatomic, readonly) bool isFrequentSocialGroup;
@property (nonatomic, readonly) NSSet *momentNodes;
@property (readonly) unsigned long long numberOfMomentNodes;
@property (readonly) unsigned long long numberOfPersonNodes;
@property (nonatomic, readonly) NSSet *personNodes;
@property (nonatomic, readonly) unsigned long long rank;
@property (readonly) long long socialGroupID;
@property (nonatomic, readonly) NSString *socialGroupName;
@property (nonatomic, readonly) NSArray *sortedPersonNodes;

+ (id)weightSortDescriptors;

- (void).cxx_destruct;
- (id)UUID;
- (id)description;
- (unsigned short)domain;
- (void)enumerateMomentNodesUsingBlock:(id /* block */)arg1;
- (void)enumeratePersonNodesUsingBlock:(id /* block */)arg1;
- (bool)hasProperties:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3;
- (id)initWithWeight:(float)arg1;
- (bool)isFrequentSocialGroup;
- (id)label;
- (id)momentNodes;
- (unsigned long long)numberOfMomentNodes;
- (unsigned long long)numberOfPersonNodes;
- (id)personNodes;
- (id)propertyDictionary;
- (unsigned long long)rank;
- (void)setLocalProperties:(id)arg1;
- (void)setWeight:(float)arg1;
- (long long)socialGroupID;
- (id)socialGroupName;
- (id)sortedPersonNodes;
- (float)weight;

@end