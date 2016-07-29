/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/QLPreviewItem.h>

@class NSURL, NSString, NSArray, ICAttachment;

@interface ICAttachmentModel : NSObject <QLPreviewItem> {

	NSArray* _searchStrings;
	BOOL _previewGenerationOperationCancelled;
	BOOL _mergeableDataDirty;
	BOOL _generatingPreviews;
	BOOL _hasAdditionalSearchIndexStrings;
	ICAttachment* _attachment;
	CGSize _intrinsicContentSize;

}

@property (nonatomic,__weak,readonly) ICAttachment * attachment;                               //@synthesize attachment=_attachment - In the implementation block
@property (assign,nonatomic) CGSize intrinsicContentSize;                                      //@synthesize intrinsicContentSize=_intrinsicContentSize - In the implementation block
@property (assign,getter=isMergeableDataDirty,nonatomic) BOOL mergeableDataDirty;              //@synthesize mergeableDataDirty=_mergeableDataDirty - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviews; 
@property (nonatomic,readonly) BOOL hasThumbnailImage; 
@property (nonatomic,readonly) BOOL showThumbnailInNoteList; 
@property (nonatomic,readonly) id genericListThumbnailCreator; 
@property (nonatomic,readonly) id genericBrickThumbnailCreator; 
@property (nonatomic,readonly) BOOL needToGeneratePreviews; 
@property (nonatomic,readonly) BOOL generateAsynchronousPreviews; 
@property (nonatomic,readonly) BOOL generatePreviewsDuringCloudActivity; 
@property (getter=isGeneratingPreviews) BOOL generatingPreviews;                               //@synthesize generatingPreviews=_generatingPreviews - In the implementation block
@property (copy,readonly) NSArray * searchStrings; 
@property (assign) BOOL hasAdditionalSearchIndexStrings;                                       //@synthesize hasAdditionalSearchIndexStrings=_hasAdditionalSearchIndexStrings - In the implementation block
@property (assign) BOOL previewGenerationOperationCancelled;                                   //@synthesize previewGenerationOperationCancelled=_previewGenerationOperationCancelled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * previewItemURL; 
@property (nonatomic,readonly) NSString * previewItemTitle; 
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
+(BOOL)populateLocationSearchStringsIfPossible:(id)arg1 forAttachment:(id)arg2 getLatitude:(id*)arg3 longitude:(id*)arg4 ;
+(UIImage*)fileIconForURL:(id)arg1 withPreferredSize:(CGSize)arg2 ;
+(void)populateLocationSearchStrings:(id)arg1 forLatitude:(double)arg2 longitude:(double)arg3 ;
-(CGSize)intrinsicContentSize;
-(id)initWithAttachment:(id)arg1 ;
-(NSURL *)previewItemURL;
-(NSString *)previewItemTitle;
-(id)activityItems;
-(ICAttachment *)attachment;
-(BOOL)needToGeneratePreviews;
-(BOOL)previewGenerationOperationCancelled;
-(void)didCancelPreviewGeneratorOperation;
-(BOOL)hasPreviews;
-(id)genericListThumbnailCreator;
-(id)genericBrickThumbnailCreator;
-(BOOL)generateAsynchronousPreviews;
-(void)generatePreviews;
-(void)updateFileBasedAttributes;
-(BOOL)showThumbnailInNoteList;
-(id)attachmentModelType;
-(BOOL)hasThumbnailImage;
-(CGAffineTransform)previewImageOrientationTransform;
-(long long)previewImageOrientation;
-(void)setGeneratingPreviews:(BOOL)arg1 ;
-(void)setMergeableDataDirty:(BOOL)arg1 ;
-(void)setPreviewGenerationOperationCancelled:(BOOL)arg1 ;
-(int)populateSearchStrings:(id)arg1 ;
-(void)setHasAdditionalSearchIndexStrings:(BOOL)arg1 ;
-(NSArray *)searchStrings;
-(void)updateAttachmentSize;
-(void)mergeWithMergeableData:(id)arg1 ;
-(void)writeMergeableData;
-(BOOL)generatePreviewsDuringCloudActivity;
-(void)invalidateSearchStrings;
-(id)generateSearchIndexStringsOperation;
-(UIImage*)fileIconWithPreferredSize:(CGSize)arg1 ;
-(BOOL)isReadyToPresent;
-(void)setIntrinsicContentSize:(CGSize)arg1 ;
-(BOOL)isMergeableDataDirty;
-(BOOL)isGeneratingPreviews;
-(BOOL)hasAdditionalSearchIndexStrings;
@end

