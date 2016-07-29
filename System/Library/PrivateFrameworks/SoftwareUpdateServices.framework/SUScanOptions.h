/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableSet, NSSet;

@interface SUScanOptions : NSObject <NSSecureCoding> {

	NSString* _identifier;
	BOOL _forced;
	NSMutableSet* _types;

}

@property (nonatomic,retain) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,getter=isForced,nonatomic) BOOL forced;              //@synthesize forced=_forced - In the implementation block
@property (nonatomic,retain) NSSet * types;                            //@synthesize types=_types - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isForced;
-(void)setForced:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSString *)identifier;
-(NSSet *)types;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)addType:(int)arg1 ;
-(BOOL)containsType:(int)arg1 ;
-(void)removeType:(int)arg1 ;
-(BOOL)findsAnyUpdate;
-(void)clearTypes;
-(void)setTypes:(NSSet *)arg1 ;
@end

