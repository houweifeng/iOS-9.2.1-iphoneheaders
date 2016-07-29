/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSKDocumentObject.h>
#import <iWorkImport/TSKModel.h>
#import <iWorkImport/TSKSearchTarget.h>
#import <iWorkImport/TSCEResolverContainer.h>

@class TSPLazyReference, KNSlideTree, NSMutableDictionary, NSSet, NSString, NSArray, KNAbstractSlide, NSDictionary;

@interface KNSlideNode : TSPObject <TSKDocumentObject, TSKModel, TSKSearchTarget, TSCEResolverContainer> {

	TSPLazyReference* mSlideReference;
	KNSlideTree* mSlideTree;
	NSMutableDictionary* mThumbnails;
	BOOL mThumbnailsAreDirty;
	NSSet* mDigestsForDatasThatNeedDownloadForThumbnail;
	BOOL mIsHidden;
	BOOL mIsCollapsed;
	BOOL mIsCollapsedInOutlineView;
	BOOL mHasBodyInOutlineView;
	BOOL mHasTransition;
	BOOL mHasNote;
	BOOL mSlideNumberVisible;
	unsigned long long mDepth;
	unsigned long long mSlideSpecificHyperlinksCount;
	NSString* mClassicUniqueID;
	NSString* mObsoleteUniqueIdentifier;
	NSString* mCopiedFromSlideIdentifier;
	unsigned mTableNameCounter;
	NSArray* mChildren;
	NSMutableDictionary* _slideSpecificHyperlinkMap;
	BOOL _hasExplicitBuilds;
	BOOL _hasExplicitBuildsIsUpToDate;
	unsigned long long _eventCount;
	BOOL _eventCountIsUpToDate;

}

@property (nonatomic,retain) KNAbstractSlide * slide; 
@property (assign,nonatomic) KNSlideTree * slideTree; 
@property (nonatomic,readonly) KNAbstractSlide * slideIfLoaded; 
@property (nonatomic,readonly) BOOL hasChildren; 
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,readonly) NSDictionary * thumbnails; 
@property (assign,nonatomic) BOOL thumbnailsAreDirty; 
@property (nonatomic,copy) NSSet * digestsForDatasThatNeedDownloadForThumbnail; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed; 
@property (assign,getter=isCollapsedInOutlineView,nonatomic) BOOL collapsedInOutlineView; 
@property (assign,nonatomic) BOOL hasBodyInOutlineView; 
@property (assign,nonatomic) BOOL hasTransition; 
@property (assign,nonatomic) BOOL hasNote; 
@property (assign,nonatomic) BOOL isSlideNumberVisible; 
@property (assign,nonatomic) unsigned long long depth; 
@property (nonatomic,readonly) NSDictionary * slideSpecificHyperlinkMap;                               //@synthesize slideSpecificHyperlinkMap=_slideSpecificHyperlinkMap - In the implementation block
@property (nonatomic,readonly) BOOL hasExplicitBuilds; 
@property (nonatomic,readonly) BOOL hasBuildEvents; 
@property (nonatomic,readonly) unsigned long long eventCount; 
@property (assign,nonatomic) NSString * classicUniqueID; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,retain) NSString * copiedFromSlideIdentifier; 
@property (nonatomic,readonly) KNSlideNode * next; 
@property (nonatomic,readonly) KNSlideNode * previous; 
@property (nonatomic,readonly) KNSlideNode * nextSkippingCollapsed; 
@property (nonatomic,readonly) KNSlideNode * previousSkippingCollapsed; 
@property (nonatomic,readonly) KNSlideNode * nextSkippingHidden; 
@property (nonatomic,readonly) KNSlideNode * previousSkippingHidden; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)slideNodeUUIDForObsoleteUniqueIDString:(id)arg1 inSlideNodes:(id)arg2 ;
+(BOOL)needsObjectUUID;
+(id)parentSlideNodeForInfo:(id)arg1 ;
+(id)slideNodeForSelectionPath:(id)arg1 ;
-(void)upgradeSlideSpecificHyperlinksForSlideNodes:(id)arg1 ;
-(unsigned long long)numberOfLinksToSlideNodeInStorage:(id)arg1 forSlideNodeUUIDString:(id)arg2 ;
-(void)upgradeSlideSpecificStorageHyperlinksForStorage:(id)arg1 withSlideNodes:(id)arg2 ;
-(void)removeObsoleteFieldsFor20Upgrade;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(SlideNodeArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const SlideNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(void)didLoadSlide:(id)arg1 ;
-(id)resolverMatchingName:(id)arg1 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(id)childSearchTargets;
-(BOOL)resolverNameIsUsed:(id)arg1 ;
-(unsigned)nextUntitledResolverIndex;
-(id)resolversMatchingPrefix:(id)arg1 ;
-(KNSlideTree *)slideTree;
-(KNSlideNode *)nextSkippingHidden;
-(KNSlideNode *)previousSkippingHidden;
-(BOOL)isSlideNumberVisible;
-(void)invalidateBuildEventCountCaches;
-(KNAbstractSlide *)slideIfLoaded;
-(void)setSlideTree:(KNSlideTree *)arg1 ;
-(void)setIsSlideNumberVisible:(BOOL)arg1 ;
-(void)removeHyperlinkForInfo:(id)arg1 toSlideNode:(id)arg2 ;
-(void)addHyperlinkForInfo:(id)arg1 toSlideNode:(id)arg2 ;
-(void)removeHyperlinkForStorage:(id)arg1 toSlideNode:(id)arg2 ;
-(void)addHyperlinkForStorage:(id)arg1 toSlideNode:(id)arg2 ;
-(void)p_updateHasExplicitBuilds;
-(BOOL)hasBuildEvents;
-(unsigned long long)safeEventCount;
-(unsigned long long)p_eventCount;
-(void)p_addHyperlinkForObjectReferencedByUUID:(id)arg1 toSlideNode:(id)arg2 ;
-(void)p_removeHyperlinkForObjectReferencedByUUID:(id)arg1 toSlideNode:(id)arg2 ;
-(id)descendantsOmittingSkippedSlideNodes:(BOOL)arg1 omittingCollapsedSlideNodes:(BOOL)arg2 ;
-(void)p_addOldModelDescendantsToSlideTree:(id)arg1 atDepth:(unsigned long long)arg2 ;
-(unsigned)saveNextUntitledResolverIndex;
-(void)rollbackNextUntitledResolverIndex:(unsigned)arg1 ;
-(BOOL)thumbnailsAreDirty;
-(void)setThumbnailsAreDirty:(BOOL)arg1 ;
-(NSSet *)digestsForDatasThatNeedDownloadForThumbnail;
-(void)setDigestsForDatasThatNeedDownloadForThumbnail:(NSSet *)arg1 ;
-(void)setHasTransition:(BOOL)arg1 ;
-(BOOL)hasNote;
-(void)setHasNote:(BOOL)arg1 ;
-(NSString *)classicUniqueID;
-(void)setClassicUniqueID:(NSString *)arg1 ;
-(NSString *)copiedFromSlideIdentifier;
-(void)setCopiedFromSlideIdentifier:(NSString *)arg1 ;
-(KNSlideNode *)nextSkippingCollapsed;
-(KNSlideNode *)previousSkippingCollapsed;
-(BOOL)hasExplicitBuilds;
-(BOOL)safeHasBuildEvents;
-(void)uniquifyTableNamesForUpgradeOrImport;
-(BOOL)hasSlideSpecificHyperlinks;
-(BOOL)hasSlideSpecificHyperlinkToNode:(id)arg1 ;
-(void)addHyperlinkFieldMap:(id)arg1 forStorage:(id)arg2 ;
-(void)removeHyperlinkFieldMap:(id)arg1 forStorage:(id)arg2 ;
-(void)addThumbnail:(id)arg1 atSize:(CGSize)arg2 ;
-(void)removeThumbnailAtSize:(CGSize)arg1 ;
-(void)removeAllThumbnails;
-(id)copyForPasteboard:(id)arg1 ;
-(void)addOldModelDescendantsToSlideTree:(id)arg1 ;
-(BOOL)isCollapsedInOutlineView;
-(void)setCollapsedInOutlineView:(BOOL)arg1 ;
-(BOOL)hasBodyInOutlineView;
-(void)setHasBodyInOutlineView:(BOOL)arg1 ;
-(NSDictionary *)slideSpecificHyperlinkMap;
-(void)setSlide:(KNAbstractSlide *)arg1 ;
-(KNSlideNode *)next;
-(KNSlideNode *)previous;
-(void)dealloc;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(id)descendants;
-(BOOL)isCollapsed;
-(NSString *)uniqueIdentifier;
-(unsigned long long)eventCount;
-(NSDictionary *)thumbnails;
-(BOOL)hasChildren;
-(id)childEnumerator;
-(void)setCollapsed:(BOOL)arg1 ;
-(NSArray *)children;
-(void)p_commonInit;
-(unsigned long long)depth;
-(void)setDepth:(unsigned long long)arg1 ;
-(KNAbstractSlide *)slide;
-(BOOL)hasTransition;
@end

