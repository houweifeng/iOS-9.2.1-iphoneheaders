/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSNumber;

@interface AFMetrics : NSObject <NSSecureCoding> {

	NSString* _originalCommandId;
	long long _category;
	NSDictionary* _context;
	NSNumber* _duration;

}

@property (nonatomic,copy) NSString * originalCommandId;              //@synthesize originalCommandId=_originalCommandId - In the implementation block
@property (assign,nonatomic) long long category;                      //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSDictionary * context;                    //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSNumber * duration;                     //@synthesize duration=_duration - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSNumber *)duration;
-(void)setCategory:(long long)arg1 ;
-(long long)category;
-(void)setDuration:(NSNumber *)arg1 ;
-(NSDictionary *)context;
-(void)setContext:(NSDictionary *)arg1 ;
-(NSString *)originalCommandId;
-(void)setOriginalCommandId:(NSString *)arg1 ;
-(id)initWithOriginalCommandId:(id)arg1 category:(long long)arg2 context:(id)arg3 duration:(id)arg4 ;
-(double)_roundDouble:(double)arg1 toSignificantDigits:(unsigned long long)arg2 ;
-(id)aceMetrics;
-(id)categoryString;
-(id)initWithOriginalCommandId:(id)arg1 category:(long long)arg2 duration:(id)arg3 ;
@end

