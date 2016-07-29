/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface ML3OrderingTerm : NSObject <NSCopying, NSCoding> {

	int _direction;
	NSString* _property;
	NSString* _collation;

}

@property (nonatomic,readonly) NSString * property;               //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) int direction;                     //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) NSString * collation;              //@synthesize collation=_collation - In the implementation block
+(id)reversedTerms:(id)arg1 ;
+(id)orderingTermWithProperty:(id)arg1 ;
+(id)orderingTermWithProperty:(id)arg1 direction:(int)arg2 ;
-(id)initWithProperty:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)direction;
-(NSString *)collation;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)initWithProperty:(id)arg1 direction:(int)arg2 ;
-(id)initWithProperty:(id)arg1 direction:(int)arg2 collation:(id)arg3 ;
-(NSString *)property;
@end
