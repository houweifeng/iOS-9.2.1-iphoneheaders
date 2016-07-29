/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraUI/CameraUI-Structs.h>
@class NSURL, NSString, NSDate, NSError;

@interface CAMVideoLocalPersistenceResult : NSObject {

	NSURL* _localDestinationURL;
	NSString* _localPersistenceUUID;
	NSString* _stillPersistenceUUID;
	NSDate* _creationDate;
	NSError* _error;
	SCD_Struct_CA2 _duration;
	SCD_Struct_CA2 _stillDisplayTime;

}

@property (nonatomic,copy,readonly) NSURL * localDestinationURL;                  //@synthesize localDestinationURL=_localDestinationURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * localPersistenceUUID;              //@synthesize localPersistenceUUID=_localPersistenceUUID - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA2 duration;                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) NSString * stillPersistenceUUID;              //@synthesize stillPersistenceUUID=_stillPersistenceUUID - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA2 stillDisplayTime;                   //@synthesize stillDisplayTime=_stillDisplayTime - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                             //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSError * error;                                   //@synthesize error=_error - In the implementation block
-(id)init;
-(SCD_Struct_CA2)duration;
-(NSDate *)creationDate;
-(NSError *)error;
-(NSURL *)localDestinationURL;
-(SCD_Struct_CA2)stillDisplayTime;
-(NSString *)stillPersistenceUUID;
-(id)initWithURL:(id)arg1 UUID:(id)arg2 duration:(SCD_Struct_CA2)arg3 stillPersistenceUUID:(id)arg4 stillDisplayTime:(SCD_Struct_CA2)arg5 creationDate:(id)arg6 error:(id)arg7 ;
-(NSString *)localPersistenceUUID;
@end

