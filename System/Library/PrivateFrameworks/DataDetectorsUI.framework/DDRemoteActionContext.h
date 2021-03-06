/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSDictionary, NSArray, NSString;

@interface DDRemoteActionContext : NSObject <NSCoding, NSSecureCoding> {

	NSURL* _URL;
	_DDResult* _result;
	NSDictionary* _context;
	NSArray* _associatedResults;
	NSString* _actionClass;

}

@property (retain) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (assign) _DDResult* result;                        //@synthesize result=_result - In the implementation block
@property (retain) NSDictionary * context;                   //@synthesize context=_context - In the implementation block
@property (retain) NSArray * associatedResults;              //@synthesize associatedResults=_associatedResults - In the implementation block
@property (retain) NSString * actionClass;                   //@synthesize actionClass=_actionClass - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isClassAllowedFromString:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSDictionary *)context;
-(NSURL *)URL;
-(void)setContext:(NSDictionary *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(_DDResult*)result;
-(void)setResult:(_DDResult*)arg1 ;
-(NSArray *)associatedResults;
-(id)initWithURL:(id)arg1 result:(_DDResult*)arg2 context:(id)arg3 associatedResults:(id)arg4 className:(id)arg5 ;
-(void)setActionClass:(NSString *)arg1 ;
-(void)setAssociatedResults:(NSArray *)arg1 ;
-(NSString *)actionClass;
@end

