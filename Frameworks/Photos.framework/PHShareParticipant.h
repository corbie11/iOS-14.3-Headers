/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHShareParticipant : PHObject {
    short  _acceptanceStatus;
    NSString * _emailAddress;
    bool  _isCurrentUser;
    NSPersonNameComponents * _nameComponents;
    short  _permission;
    NSString * _phoneNumber;
    unsigned short  _role;
}

@property (nonatomic, readonly) short acceptanceStatus;
@property (nonatomic, readonly, copy) NSString *emailAddress;
@property (nonatomic, readonly) bool isCurrentUser;
@property (nonatomic, readonly, copy) NSPersonNameComponents *nameComponents;
@property (nonatomic, readonly) short permission;
@property (nonatomic, readonly, copy) NSString *phoneNumber;
@property (nonatomic, readonly) unsigned short role;

+ (id)entityKeyMap;
+ (id)fetchContributorForAsset:(id)arg1 options:(id)arg2;
+ (id)fetchParticipantsInShare:(id)arg1 options:(id)arg2;
+ (id)fetchParticipantsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (void)queryParticipantsWithEmails:(id)arg1 phoneNumbers:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;

- (void).cxx_destruct;
- (short)acceptanceStatus;
- (Class)changeRequestClass;
- (id)emailAddress;
- (unsigned long long)hash;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (bool)isCurrentUser;
- (bool)isEqual:(id)arg1;
- (id)nameComponents;
- (short)permission;
- (id)phoneNumber;
- (unsigned short)role;

@end