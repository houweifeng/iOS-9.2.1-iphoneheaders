/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3Predicate.h>

@class NSString;

@interface ML3PropertyPredicate : ML3Predicate {

	NSString* _property;

}

@property (nonatomic,copy) NSString * property;              //@synthesize property=_property - In the implementation block
+(id)predicateWithProperty:(id)arg1 ;
-(id)initWithProperty:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)SQLJoinClausesForClass:(Class)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(BOOL)isDynamicForEntityClass:(Class)arg1 ;
-(void)setProperty:(NSString *)arg1 ;
-(NSString *)property;
@end

