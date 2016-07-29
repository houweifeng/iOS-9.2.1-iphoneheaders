/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPReplaceAction.h>

@class TSWPSelection, NSString;

@interface TSWPTextReplacement : NSObject <TSWPReplaceAction> {

	TSWPSelection* _selection;
	NSString* _string;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performWithStorage:(id)arg1 delta:(long long)arg2 actionBuilder:(TSWPStorageActionBuilderRef)arg3 withFlags:(unsigned)arg4 replaceBlock:(/*^block*/id)arg5 ;
-(NSRange)insertedRange;
-(id)initWithSelection:(id)arg1 string:(id)arg2 ;
-(unsigned long long)targetCharIndex;
-(void)dealloc;
-(long long)delta;
@end

