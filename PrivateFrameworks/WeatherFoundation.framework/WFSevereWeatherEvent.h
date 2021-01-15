/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFSevereWeatherEvent : NSObject {
    NSURL * _URL;
    NSString * _areaName;
    NSString * _eventDescription;
    NSDate * _expirationDate;
    NSString * _identifier;
    unsigned long long  _importance;
    NSString * _source;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly, copy) NSString *areaName;
@property (nonatomic, readonly, copy) NSString *eventDescription;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long importance;
@property (nonatomic, readonly, copy) NSString *source;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

- (void).cxx_destruct;
- (id)URL;
- (id)areaName;
- (id)eventDescription;
- (id)expirationDate;
- (id)identifier;
- (unsigned long long)importance;
- (id)initWithIdentifier:(id)arg1 areaName:(id)arg2 eventDescription:(id)arg3 source:(id)arg4 expirationDate:(id)arg5 URL:(id)arg6 importance:(unsigned long long)arg7;
- (id)source;

// Image: /System/Library/PrivateFrameworks/Weather.framework/Weather

- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end