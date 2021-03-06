/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSBoundKeyPath.h>
#import <libobjc.A.dylib/NSObservable.h>

@class NSString;

@interface NSObservableKeyPath : NSBoundKeyPath <NSObservable>

@property (readonly) id<NSObservable> changes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NSObservable>)changes;
-(BOOL)_wantsChanges;
-(NSString *)description;
-(id)addObserver:(id)arg1 ;
-(void)removeObservation:(id)arg1 ;
@end

