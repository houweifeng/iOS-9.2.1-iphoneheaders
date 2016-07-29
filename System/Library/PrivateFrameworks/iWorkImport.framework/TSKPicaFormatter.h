/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSString, NSNumber;

@interface TSKPicaFormatter : NSFormatter {

	NSString* mPicaSeparator;
	NSNumber* mMinimum;
	NSNumber* mMaximum;

}

@property (nonatomic,copy) NSString * picaSeparator; 
@property (nonatomic,copy) NSNumber * minimum; 
@property (nonatomic,copy) NSNumber * maximum; 
-(id)initWithPicaSeparator:(id)arg1 ;
-(void)setPicaSeparator:(NSString *)arg1 ;
-(NSString *)picaSeparator;
-(NSNumber *)minimum;
-(void)setMinimum:(NSNumber *)arg1 ;
-(NSNumber *)maximum;
-(void)setMaximum:(NSNumber *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
@end

