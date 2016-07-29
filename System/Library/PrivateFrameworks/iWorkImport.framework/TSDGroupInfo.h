/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDDrawableInfo.h>
#import <iWorkImport/TSDMutableContainerInfo.h>
#import <iWorkImport/TSDMixing.h>
#import <iWorkImport/TSKDocumentObject.h>
#import <iWorkImport/TSDSelectionStatisticsContributor.h>

@class NSMutableArray, NSString, TSDInfoGeometry;

@interface TSDGroupInfo : TSDDrawableInfo <TSDMutableContainerInfo, TSDMixing, TSKDocumentObject, TSDSelectionStatisticsContributor> {

	NSMutableArray* mChildInfos;
	BOOL mIsInDocument;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL matchesObjectPlaceholderGeometry; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDContainerInfo> parentInfo; 
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment; 
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) BOOL floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) BOOL anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) BOOL inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) BOOL attachedToBodyText; 
+(id)groupGeometryFromChildrenInfos:(id)arg1 ;
+(id)p_drawablesToInsertForGroup:(id)arg1 filteredWithTarget:(id)arg2 action:(SEL)arg3 didUngroup:(BOOL*)arg4 ;
+(id)drawablesToInsertForGroup:(id)arg1 filteredWithTarget:(id)arg2 action:(SEL)arg3 ;
-(BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 ;
-(BOOL)containsDisallowedElementKind:(unsigned)arg1 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(GroupArchive*)arg1 archiver:(id)arg2 ;
-(id)subclassInitFromUnarchiver:(id)arg1 ;
-(void)loadFromArchive:(const GroupArchive*)arg1 unarchiver:(id)arg2 upgradeDOLC:(BOOL)arg3 ;
-(BOOL)aspectRatioLocked;
-(id)copyWithContext:(id)arg1 ;
-(void)willCopyWithOtherDrawables:(id)arg1 ;
-(void)didCopy;
-(Class)repClass;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(id)childInfos;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(id)localizedChunkNameForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 chunkIndex:(unsigned long long)arg3 ;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(BOOL)canAnchor;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)setChildInfos:(id)arg1 ;
-(void)addChildInfo:(id)arg1 ;
-(void)insertChildInfo:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertChildInfo:(id)arg1 below:(id)arg2 ;
-(void)insertChildInfo:(id)arg1 above:(id)arg2 ;
-(void)moveChildren:(id)arg1 toIndexes:(id)arg2 ;
-(void)removeChildInfo:(id)arg1 ;
-(void)replaceChildInfo:(id)arg1 with:(id)arg2 ;
-(id)infoForSelectionPath:(id)arg1 ;
-(id)allNestedChildrenInfos;
-(id)allNestedChildrenInfosIncludingGroups;
-(id)groupedGeometryForChildInfo:(id)arg1 ;
-(void)removeAllChildrenInDocument:(BOOL)arg1 ;
-(void)processSelectedStoragesWithStatisticsController:(id)arg1 ;
-(id)ungroupedGeometryForChildInfo:(id)arg1 ;
-(void)makeChildGeometriesRelativeAndComputeOwnAbsoluteGeometry;
-(void)ensureGeometryFitsChildren;
-(void)dealloc;
-(TSDInfoGeometry *)geometry;
-(void)setGeometry:(TSDInfoGeometry *)arg1 ;
-(id)childEnumerator;
-(Class)layoutClass;
-(void)acceptVisitor:(id)arg1 ;
@end

