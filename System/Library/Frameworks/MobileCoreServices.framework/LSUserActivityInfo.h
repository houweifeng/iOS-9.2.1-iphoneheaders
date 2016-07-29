/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/MobileCoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDictionary, NSDate, NSString, NSURL, NSData, NSSet, NSError;

@interface LSUserActivityInfo : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _uuid;
	unsigned long long _type;
	NSDictionary* _options;
	unsigned long long _changeCount;
	NSDate* _activityDate;
	NSString* _title;
	NSString* _typeIdentifier;
	NSString* _dynamicIdentifier;
	NSURL* _webpageURL;
	NSData* _streamsData;
	NSData* _activityPayload;
	NSData* _activityPayloadOld;
	NSSet* _requiredUserActivityKeys;
	NSDictionary* _userInfo;
	NSUUID* _parentUserActivityUUID;
	NSError* _error;
	BOOL eligibleForHandoff;
	BOOL eligibleForSearch;
	BOOL eligibleForPublicIndex;
	NSString* subtitle;
	NSUUID* parentUserActivityUUID;

}

@property (copy) NSUUID * uuid;                                 //@synthesize uuid=_uuid - In the implementation block
@property (assign) unsigned long long type;                     //@synthesize type=_type - In the implementation block
@property (copy) NSDictionary * options;                        //@synthesize options=_options - In the implementation block
@property (assign) unsigned long long changeCount;              //@synthesize changeCount=_changeCount - In the implementation block
@property (copy) NSDate * activityDate;                         //@synthesize activityDate=_activityDate - In the implementation block
@property (copy) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (copy) NSString * typeIdentifier;                     //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (copy) NSString * dynamicIdentifier;                  //@synthesize dynamicIdentifier=_dynamicIdentifier - In the implementation block
@property (copy) NSURL * webpageURL;                            //@synthesize webpageURL=_webpageURL - In the implementation block
@property (copy) NSDictionary * userInfo; 
@property (copy) NSData * streamsData;                          //@synthesize streamsData=_streamsData - In the implementation block
@property (copy) NSData * activityPayload;                      //@synthesize activityPayload=_activityPayload - In the implementation block
@property (copy) NSData * activityPayloadOld;                   //@synthesize activityPayloadOld=_activityPayloadOld - In the implementation block
@property (copy) NSSet * requiredUserActivityKeys;              //@synthesize requiredUserActivityKeys=_requiredUserActivityKeys - In the implementation block
@property (copy) NSString * subtitle; 
@property (copy) NSUUID * parentUserActivityUUID; 
@property (assign) BOOL eligibleForHandoff; 
@property (assign) BOOL eligibleForSearch; 
@property (assign) BOOL eligibleForPublicIndex; 
@property (copy) NSError * error;                               //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSURL *)webpageURL;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(void)setEligibleForHandoff:(BOOL)arg1 ;
-(void)setEligibleForSearch:(BOOL)arg1 ;
-(void)setParentUserActivityUUID:(NSUUID *)arg1 ;
-(NSDate *)activityDate;
-(NSData *)activityPayload;
-(NSData *)activityPayloadOld;
-(NSUUID *)parentUserActivityUUID;
-(NSSet *)requiredUserActivityKeys;
-(void)_createUserActivityStrings:(id)arg1 secondaryString:(id)arg2 optionalData:(id)arg3 ;
-(id)userActivityString;
-(id)secondaryUserActivityString;
-(id)optionalUserActivityData;
-(id)logString;
-(void)setActivityDate:(NSDate *)arg1 ;
-(BOOL)eligibleForHandoff;
-(BOOL)eligibleForSearch;
-(BOOL)eligibleForPublicIndex;
-(void)setEligibleForPublicIndex:(BOOL)arg1 ;
-(void)setRequiredUserActivityKeys:(NSSet *)arg1 ;
-(void)setActivityPayload:(NSData *)arg1 ;
-(void)setActivityPayloadOld:(NSData *)arg1 ;
-(NSString *)dynamicIdentifier;
-(void)setDynamicIdentifier:(NSString *)arg1 ;
-(NSData *)streamsData;
-(void)setStreamsData:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSString *)title;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(unsigned long long)changeCount;
-(void)setChangeCount:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(NSString *)typeIdentifier;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)statusString;
-(void)setTypeIdentifier:(NSString *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

