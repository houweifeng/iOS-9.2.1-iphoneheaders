/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSString;

@interface TSUDurationFormatter : NSFormatter {

	NSString* mFormat;
	int mCompactStyleStartUnit;

}

@property (nonatomic,copy) NSString * format; 
@property (assign,nonatomic) int compactStyleStartUnit; 
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)stringForObjectValue:(id)arg1 ;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(void)p_commonInit;
-(int)compactStyleStartUnit;
-(void)setCompactStyleStartUnit:(int)arg1 ;
@end

