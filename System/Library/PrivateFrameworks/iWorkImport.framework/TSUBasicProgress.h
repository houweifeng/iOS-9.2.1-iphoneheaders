/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUProgress.h>

@class TSUBasicProgressStorage;

@interface TSUBasicProgress : TSUProgress {

	TSUBasicProgressStorage* mStorage;

}

@property (assign) double value; 
@property (getter=isIndeterminate) BOOL indeterminate; 
-(void)dealloc;
-(id)init;
-(double)value;
-(void)setValue:(double)arg1 ;
-(BOOL)isIndeterminate;
-(void)setIndeterminate:(BOOL)arg1 ;
-(double)maxValue;
-(id)initWithMaxValue:(double)arg1 ;
@end

