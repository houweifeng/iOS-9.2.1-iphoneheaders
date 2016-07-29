/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class NSString;

@interface SGDetection : NSObject {

	BOOL _hasPhoneLabel;
	unsigned _type;
	NSString* _extraction;
	NSString* _context;
	NSString* _label;
	NSRange _contextRangeOfInterest;
	NSRange _match;

}

@property (nonatomic,readonly) unsigned type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * extraction;                       //@synthesize extraction=_extraction - In the implementation block
@property (nonatomic,readonly) NSString * context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSRange contextRangeOfInterest;              //@synthesize contextRangeOfInterest=_contextRangeOfInterest - In the implementation block
@property (nonatomic,readonly) NSString * label;                            //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneLabel;                          //@synthesize hasPhoneLabel=_hasPhoneLabel - In the implementation block
@property (nonatomic,readonly) NSRange match;                               //@synthesize match=_match - In the implementation block
+(id)detectionWithType:(unsigned)arg1 text:(id)arg2 matchRange:(NSRange)arg3 matchString:(id)arg4 label:(id)arg5 hasPhoneLabel:(BOOL)arg6 ;
-(id)description;
-(unsigned)type;
-(NSString *)context;
-(NSString *)label;
-(id)initWithType:(unsigned)arg1 extraction:(id)arg2 context:(id)arg3 contextRangeOfInterest:(NSRange)arg4 label:(id)arg5 hasPhoneLabel:(BOOL)arg6 match:(NSRange)arg7 ;
-(NSRange)contextRangeOfInterest;
-(NSString *)extraction;
-(BOOL)hasPhoneLabel;
-(NSRange)match;
@end

