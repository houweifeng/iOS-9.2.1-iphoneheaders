/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDHint;
#import <iWorkImport/iWorkImport-Structs.h>
@interface TNHintCacheEntry : NSObject {

	id<TSDHint> mHint;
	BOOL mIsValid;
	CGPoint mOrigin;

}

@property (retain) id<TSDHint> hint; 
@property (getter=isValid) BOOL valid; 
@property (assign) CGPoint origin; 
-(id)initWithHint:(id)arg1 origin:(CGPoint)arg2 ;
-(BOOL)isValid;
-(CGPoint)origin;
-(void)setOrigin:(CGPoint)arg1 ;
-(id<TSDHint>)hint;
-(void)setValid:(BOOL)arg1 ;
-(void)setHint:(id<TSDHint>)arg1 ;
@end

