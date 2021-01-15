/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
 */

@interface KGDegasTraversal : NSObject <KGTraversal> {
    struct Database { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; struct sqlite3 {} *x2; struct LabelTable { int (**x_3_1_1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_6_1; unsigned long long x_1_6_2; unsigned long long x_1_6_3; } x_1_5_1; struct __short { BOOL x_2_6_1[23]; struct { unsigned char x_2_7_1; } x_2_6_2; } x_1_5_2; struct __raw { unsigned long long x_3_6_1[3]; } x_1_5_3; } x_1_4_1; } x_1_3_1; } x_2_2_1; } x_3_1_2; struct sqlite3 {} *x_3_1_3; struct shared_ptr<degas::Statement> { struct Statement {} *x_4_2_1; struct __shared_weak_count {} *x_4_2_2; } x_3_1_4; struct shared_ptr<degas::Statement> { struct Statement {} *x_5_2_1; struct __shared_weak_count {} *x_5_2_2; } x_3_1_5; struct shared_ptr<degas::Statement> { struct Statement {} *x_6_2_1; struct __shared_weak_count {} *x_6_2_2; } x_3_1_6; struct shared_ptr<degas::Statement> { struct Statement {} *x_7_2_1; struct __shared_weak_count {} *x_7_2_2; } x_3_1_7; } x3; } * _database;
    bool  _fixedStepMode;
    KGDatabase * _kgDatabase;
    struct Traversal { struct Database {} *x1; int x2; struct Bitmap { unsigned long long x_3_1_1; unsigned long long x_3_1_2; struct vector<degas::BitsetPtr, std::__1::allocator<degas::BitsetPtr> > { struct BitsetPtr {} *x_3_2_1; struct BitsetPtr {} *x_3_2_2; struct __compressed_pair<degas::BitsetPtr *, std::__1::allocator<degas::BitsetPtr> > { struct BitsetPtr {} *x_3_3_1; } x_3_2_3; } x_3_1_3; bool x_3_1_4; } x3; struct Bitmap { unsigned long long x_4_1_1; unsigned long long x_4_1_2; struct vector<degas::BitsetPtr, std::__1::allocator<degas::BitsetPtr> > { struct BitsetPtr {} *x_3_2_1; struct BitsetPtr {} *x_3_2_2; struct __compressed_pair<degas::BitsetPtr *, std::__1::allocator<degas::BitsetPtr> > { struct BitsetPtr {} *x_3_3_1; } x_3_2_3; } x_4_1_3; bool x_4_1_4; } x4; struct shared_ptr<degas::NodeFilter> { struct NodeFilter {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; struct vector<degas::StepSpecification, std::__1::allocator<degas::StepSpecification> > { struct StepSpecification {} *x_6_1_1; struct StepSpecification {} *x_6_1_2; struct __compressed_pair<degas::StepSpecification *, std::__1::allocator<degas::StepSpecification> > { struct StepSpecification {} *x_3_2_1; } x_6_1_3; } x6; } * _traversal;
}

@property (nonatomic, readonly) KGDatabase *kgDatabase;

- (void).cxx_destruct;
- (void)addStepForEdgeDirection:(unsigned long long)arg1 edgeFilter:(id)arg2 targetNodeFilter:(id)arg3;
- (void)dealloc;
- (id)distribution;
- (id)initWithDatabase:(id)arg1;
- (id)kgDatabase;
- (struct shared_ptr<degas::EdgeFilter> { struct EdgeFilter {} *x1; struct __shared_weak_count {} *x2; })makeEdgeFilter:(id)arg1;
- (struct shared_ptr<degas::NodeFilter> { struct NodeFilter {} *x1; struct __shared_weak_count {} *x2; })makeNodeFilter:(id)arg1;
- (bool)performTraversal:(id*)arg1;
- (void)setCountedPathsReportingMode;
- (void)setStartingNodeFilter:(id)arg1;
- (void)setStartingNodes:(id)arg1;
- (void)setTargetNodesOnlyReportingMode;
- (void)setTerminatingCondition:(id)arg1;
- (void)setUncountedPathsReportingMode;
- (void)setVariableStepMode;
- (id)targetNodes;

@end