/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBReadingHistoryItem : PBCodable <FCKeyValueStoreCoding, FCMutableReadingHistoryItem, NSCopying> {
    NSString * _articleID;
    NSString * _deviceID;
    NTPBDate * _firstSeenDate;
    NTPBDate * _firstSeenDateOfMaxVersionSeen;
    unsigned int  _flags;
    struct { 
        unsigned int listeningProgress : 1; 
        unsigned int maxVersionRead : 1; 
        unsigned int maxVersionSeen : 1; 
        unsigned int readCount : 1; 
        unsigned int flags : 1; 
    }  _has;
    NTPBDate * _lastListened;
    NTPBDate * _lastVisitedDate;
    double  _listeningProgress;
    NTPBDate * _listeningProgressSavedDate;
    long long  _maxVersionRead;
    long long  _maxVersionSeen;
    long long  _readCount;
    NSString * _readingPosition;
    NTPBDate * _readingPositionSavedDate;
    NSString * _sourceChannelTagID;
}

@property (nonatomic, copy) NSString *articleID;
@property (nonatomic, retain) NSString *articleID;
@property (nonatomic) unsigned long long articleLikingStatus;
@property (nonatomic, readonly) CKRecord *asCKRecord;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceID;
@property (nonatomic, retain) NSString *deviceID;
@property (nonatomic, copy) NSDate *firstSeenAt;
@property (nonatomic, copy) NSDate *firstSeenAtOfMaxVersionSeen;
@property (nonatomic, retain) NTPBDate *firstSeenDate;
@property (nonatomic, retain) NTPBDate *firstSeenDateOfMaxVersionSeen;
@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic) unsigned int flags;
@property (nonatomic) bool hasArticleBeenConsumed;
@property (nonatomic) bool hasArticleBeenMarkedOffensive;
@property (nonatomic) bool hasArticleBeenRead;
@property (nonatomic) bool hasArticleBeenSeen;
@property (nonatomic) bool hasArticleCompletedListening;
@property (nonatomic, readonly) bool hasArticleID;
@property (nonatomic, readonly) bool hasDeviceID;
@property (nonatomic, readonly) bool hasFirstSeenDate;
@property (nonatomic, readonly) bool hasFirstSeenDateOfMaxVersionSeen;
@property (nonatomic) bool hasFlags;
@property (nonatomic, readonly) bool hasLastListened;
@property (nonatomic, readonly) bool hasLastVisitedDate;
@property (nonatomic) bool hasListeningProgress;
@property (nonatomic, readonly) bool hasListeningProgressSavedDate;
@property (nonatomic) bool hasMaxVersionRead;
@property (nonatomic) bool hasMaxVersionSeen;
@property (nonatomic) bool hasReadCount;
@property (nonatomic, readonly) bool hasReadingPosition;
@property (nonatomic, readonly) bool hasReadingPositionSavedDate;
@property (nonatomic, readonly) bool hasSourceChannelTagID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, retain) NTPBDate *lastListened;
@property (nonatomic, copy) NSDate *lastListenedAt;
@property (nonatomic, copy) NSDate *lastVisitedAt;
@property (nonatomic, retain) NTPBDate *lastVisitedDate;
@property (nonatomic) double listeningProgress;
@property (nonatomic, copy) NSDate *listeningProgressSavedAt;
@property (nonatomic, retain) NTPBDate *listeningProgressSavedDate;
@property (nonatomic) long long maxVersionRead;
@property (nonatomic) long long maxVersionSeen;
@property (getter=isPruningDisabled, nonatomic) bool pruningDisabled;
@property (nonatomic) long long readCount;
@property (nonatomic, copy) NSString *readingPosition;
@property (nonatomic, retain) NSString *readingPosition;
@property (nonatomic, copy) NSDate *readingPositionSavedAt;
@property (nonatomic, retain) NTPBDate *readingPositionSavedDate;
@property (nonatomic, copy) NSString *sourceChannelTagID;
@property (nonatomic, retain) NSString *sourceChannelTagID;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (id)articleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceID;
- (id)dictionaryRepresentation;
- (id)firstSeenDate;
- (id)firstSeenDateOfMaxVersionSeen;
- (unsigned int)flags;
- (bool)hasArticleID;
- (bool)hasDeviceID;
- (bool)hasFirstSeenDate;
- (bool)hasFirstSeenDateOfMaxVersionSeen;
- (bool)hasFlags;
- (bool)hasLastListened;
- (bool)hasLastVisitedDate;
- (bool)hasListeningProgress;
- (bool)hasListeningProgressSavedDate;
- (bool)hasMaxVersionRead;
- (bool)hasMaxVersionSeen;
- (bool)hasReadCount;
- (bool)hasReadingPosition;
- (bool)hasReadingPositionSavedDate;
- (bool)hasSourceChannelTagID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lastListened;
- (id)lastVisitedDate;
- (double)listeningProgress;
- (id)listeningProgressSavedDate;
- (long long)maxVersionRead;
- (long long)maxVersionSeen;
- (void)mergeFrom:(id)arg1;
- (long long)readCount;
- (bool)readFrom:(id)arg1;
- (id)readingPosition;
- (id)readingPositionSavedDate;
- (void)setArticleID:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setFirstSeenDate:(id)arg1;
- (void)setFirstSeenDateOfMaxVersionSeen:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setHasFlags:(bool)arg1;
- (void)setHasListeningProgress:(bool)arg1;
- (void)setHasMaxVersionRead:(bool)arg1;
- (void)setHasMaxVersionSeen:(bool)arg1;
- (void)setHasReadCount:(bool)arg1;
- (void)setLastListened:(id)arg1;
- (void)setLastVisitedDate:(id)arg1;
- (void)setListeningProgress:(double)arg1;
- (void)setListeningProgressSavedDate:(id)arg1;
- (void)setMaxVersionRead:(long long)arg1;
- (void)setMaxVersionSeen:(long long)arg1;
- (void)setReadCount:(long long)arg1;
- (void)setReadingPosition:(id)arg1;
- (void)setReadingPositionSavedDate:(id)arg1;
- (void)setSourceChannelTagID:(id)arg1;
- (id)sourceChannelTagID;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;
+ (id)readingHistoryItemWithCKRecord:(id)arg1;

- (unsigned long long)articleLikingStatus;
- (id)asCKRecord;
- (id)firstSeenAt;
- (id)firstSeenAtOfMaxVersionSeen;
- (bool)hasArticleBeenConsumed;
- (bool)hasArticleBeenMarkedOffensive;
- (bool)hasArticleBeenRead;
- (bool)hasArticleBeenSeen;
- (bool)hasArticleCompletedListening;
- (id)identifier;
- (bool)isPruningDisabled;
- (id)lastListenedAt;
- (id)lastVisitedAt;
- (id)listeningProgressSavedAt;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)readingPositionSavedAt;
- (void)setArticleLikingStatus:(unsigned long long)arg1;
- (void)setFirstSeenAt:(id)arg1;
- (void)setFirstSeenAtOfMaxVersionSeen:(id)arg1;
- (void)setHasArticleBeenConsumed:(bool)arg1;
- (void)setHasArticleBeenMarkedOffensive:(bool)arg1;
- (void)setHasArticleBeenRead:(bool)arg1;
- (void)setHasArticleBeenSeen:(bool)arg1;
- (void)setHasArticleCompletedListening:(bool)arg1;
- (void)setLastListenedAt:(id)arg1;
- (void)setLastVisitedAt:(id)arg1;
- (void)setListeningProgressSavedAt:(id)arg1;
- (void)setPruningDisabled:(bool)arg1;
- (void)setReadingPositionSavedAt:(id)arg1;
- (void)writeToKeyValuePair:(id)arg1;

@end