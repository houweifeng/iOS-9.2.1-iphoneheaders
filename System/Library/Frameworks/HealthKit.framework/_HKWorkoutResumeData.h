/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSMutableArray;

@interface _HKWorkoutResumeData : NSObject <NSSecureCoding> {

	BOOL _lastUUIDInJournal;
	NSUUID* _lastUUID;
	NSMutableArray* _gaps;

}

@property (nonatomic,retain) NSUUID * lastUUID;                   //@synthesize lastUUID=_lastUUID - In the implementation block
@property (assign,nonatomic) BOOL lastUUIDInJournal;              //@synthesize lastUUIDInJournal=_lastUUIDInJournal - In the implementation block
@property (nonatomic,retain) NSMutableArray * gaps;               //@synthesize gaps=_gaps - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setGaps:(NSMutableArray *)arg1 ;
-(NSMutableArray *)gaps;
-(NSUUID *)lastUUID;
-(void)setLastUUID:(NSUUID *)arg1 ;
-(void)setLastUUIDInJournal:(BOOL)arg1 ;
-(BOOL)lastUUIDInJournal;
@end

