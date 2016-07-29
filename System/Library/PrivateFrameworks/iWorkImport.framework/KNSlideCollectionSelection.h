/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKSelection.h>

@class NSOrderedSet, KNSlideNode;

@interface KNSlideCollectionSelection : TSKSelection {

	NSOrderedSet* mSlideNodes;
	KNSlideNode* mSlideNodeToEdit;

}

@property (nonatomic,readonly) NSOrderedSet * slideNodes; 
@property (nonatomic,readonly) KNSlideNode * slideNodeToEdit; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
+(Class)archivedSelectionClass;
-(void)saveToArchive:(SlideCollectionSelectionArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const SlideCollectionSelectionArchive*)arg1 unarchiver:(id)arg2 ;
-(NSOrderedSet *)slideNodes;
-(KNSlideNode *)slideNodeToEdit;
-(id)initWithSlideNodes:(id)arg1 slideNodeToEdit:(id)arg2 ;
-(id)initWithSlideNode:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEmpty;
@end

