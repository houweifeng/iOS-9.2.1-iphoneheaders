/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSKArchivedSelection.h>

@class TSDPathSelection, NSString, TSKSelection;

@interface TSDArchivedPathSelection : TSPObject <TSKArchivedSelection> {

	TSDPathSelection* mPathSelection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TSKSelection * selection; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(TSKSelection *)selection;
-(void)setSelection:(TSKSelection *)arg1 ;
@end

