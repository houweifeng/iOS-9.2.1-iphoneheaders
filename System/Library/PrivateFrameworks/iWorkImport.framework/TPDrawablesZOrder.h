/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>

@class NSMutableArray;

@interface TPDrawablesZOrder : TSPObject {

	NSMutableArray* _drawables;

}

@property (nonatomic,readonly) unsigned long long drawableCount; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)removeDrawable:(id)arg1 ;
-(void)moveDrawables:(id)arg1 toIndexes:(id)arg2 ;
-(unsigned long long)zOrderOfDrawable:(id)arg1 ;
-(unsigned long long)insertDrawable:(id)arg1 atZOrder:(unsigned long long)arg2 ;
-(void)moveDrawable:(id)arg1 toZOrder:(unsigned long long)arg2 ;
-(id)orderedDrawables:(id)arg1 ;
-(void)removeDrawableAtZOrder:(unsigned long long)arg1 ;
-(void)moveDrawableAtZOrder:(unsigned long long)arg1 toZOrder:(unsigned long long)arg2 ;
-(id)drawableAtZOrder:(unsigned long long)arg1 ;
-(void)moveDrawables:(id)arg1 toZOrder:(unsigned long long)arg2 ;
-(void)swapDrawableAtZOrder:(unsigned long long)arg1 withDrawableAtZOrder:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
-(unsigned long long)drawableCount;
-(unsigned long long)addDrawable:(id)arg1 ;
@end

