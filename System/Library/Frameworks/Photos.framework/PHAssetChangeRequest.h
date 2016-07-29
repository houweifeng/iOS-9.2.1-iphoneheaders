/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class NSURL, CLLocation, NSString, PHChangeRequestHelper, PHContentEditingOutput, NSIndexSet, PHObjectPlaceholder, NSDate, NSManagedObjectID;

@interface PHAssetChangeRequest : NSObject <PHUpdateChangeRequest> {

	NSURL* _editorBundleURL;
	CLLocation* _updatedLocation;
	NSString* _assetDescription;
	PHChangeRequestHelper* _helper;
	BOOL _entitled;
	BOOL _didSetVisibilityState;
	NSString* _clientName;
	BOOL _didChangeAdjustments;
	unsigned short _photoIrisVisibilityState;
	int _clientProcessID;
	PHContentEditingOutput* _contentEditingOutput;
	NSString* _editorBundleID;
	NSIndexSet* _supportedEditOperations;
	NSURL* _videoURLForUpdate;
	NSString* _pairingIdentifier;
	SCD_Struct_PH1 _videoDuration;
	SCD_Struct_PH1 _imageDisplayTime;

}

@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedAsset; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) CLLocation * location; 
@property (assign,getter=isFavorite,nonatomic) BOOL favorite; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (nonatomic,retain) PHContentEditingOutput * contentEditingOutput;                   //@synthesize contentEditingOutput=_contentEditingOutput - In the implementation block
@property (assign,nonatomic) unsigned short photoIrisVisibilityState;                         //@synthesize photoIrisVisibilityState=_photoIrisVisibilityState - In the implementation block
@property (nonatomic,retain) NSString * assetDescription; 
@property (nonatomic,retain) NSDate * modificationDate; 
@property (nonatomic,readonly) BOOL didChangeAdjustments;                                     //@synthesize didChangeAdjustments=_didChangeAdjustments - In the implementation block
@property (nonatomic,copy,readonly) NSString * editorBundleID;                                //@synthesize editorBundleID=_editorBundleID - In the implementation block
@property (nonatomic,retain) NSIndexSet * supportedEditOperations;                            //@synthesize supportedEditOperations=_supportedEditOperations - In the implementation block
@property (nonatomic,retain) NSURL * videoURLForUpdate;                                       //@synthesize videoURLForUpdate=_videoURLForUpdate - In the implementation block
@property (nonatomic,retain) NSString * pairingIdentifier;                                    //@synthesize pairingIdentifier=_pairingIdentifier - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH1 videoDuration;                                    //@synthesize videoDuration=_videoDuration - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH1 imageDisplayTime;                                 //@synthesize imageDisplayTime=_imageDisplayTime - In the implementation block
@property (nonatomic,readonly) PHChangeRequestHelper * helper;                                //@synthesize helper=_helper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isEntitled,nonatomic,readonly) BOOL entitled;                               //@synthesize entitled=_entitled - In the implementation block
@property (nonatomic,readonly) NSString * clientName;                                         //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,readonly) int clientProcessID;                                           //@synthesize clientProcessID=_clientProcessID - In the implementation block
@property (getter=isMutated,readonly) BOOL mutated; 
+(id)creationRequestForAssetFromImage:(id)arg1 ;
+(id)creationRequestForAssetFromVideoAtFileURL:(id)arg1 ;
+(id)_allAssetEditOperations;
+(id)changeRequestForAssetFromVideoFileURL:(id)arg1 imageAsset:(id)arg2 displayTime:(double)arg3 ;
+(id)changeRequestForAsset:(id)arg1 ;
+(id)creationRequestForAssetFromVideoComplementBundle:(id)arg1 ;
+(void)deleteAssets:(id)arg1 ;
+(id)creationRequestForAssetFromImageAtFileURL:(id)arg1 ;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(id)init;
-(NSDate *)modificationDate;
-(BOOL)isHiding;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)uuid;
-(PHChangeRequestHelper *)helper;
-(id)initWithHelper:(id)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSString *)pairingIdentifier;
-(SCD_Struct_PH1)imageDisplayTime;
-(NSString *)editorBundleID;
-(NSString *)assetDescription;
-(void)setAssetDescription:(NSString *)arg1 ;
-(NSString *)managedEntityName;
-(BOOL)isEntitled;
-(int)clientProcessID;
-(BOOL)isRevertingContentToOriginal;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(id)initWithXPCDict:(id)arg1 entitled:(BOOL)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(id)mutations;
-(void)didMutate;
-(BOOL)isMutated;
-(BOOL)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(void)setPairingIdentifier:(NSString *)arg1 ;
-(void)setImageDisplayTime:(SCD_Struct_PH1)arg1 ;
-(BOOL)didChangeAdjustments;
-(BOOL)validateContentEditingOutput:(id)arg1 error:(id*)arg2 ;
-(void)setVideoURLForUpdate:(NSURL *)arg1 ;
-(void)setSupportedEditOperations:(NSIndexSet *)arg1 ;
-(void)markDidChangeAdjustments;
-(NSIndexSet *)supportedEditOperations;
-(BOOL)validateAssetDescription:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateAdjustmentDataForAssetMutation:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateContentURL:(id)arg1 error:(id*)arg2 writeAccessRequired:(BOOL)arg3 ;
-(BOOL)_validateImageURLForAssetMutation:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateVideoURLForAssetMutation:(id)arg1 error:(id*)arg2 ;
-(NSURL *)videoURLForUpdate;
-(SCD_Struct_PH1)videoDuration;
-(void)setFavorite:(BOOL)arg1 ;
-(BOOL)isFavorite;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setContentEditingOutput:(PHContentEditingOutput *)arg1 ;
-(NSManagedObjectID *)objectID;
-(void)revertAssetContentToOriginal;
-(void)setAdjustmentData:(id)arg1 withRenderedJPEGData:(id)arg2 orRenderedContentURL:(id)arg3 penultimateRenderedJPEGData:(id)arg4 isSubstandardRender:(BOOL)arg5 fullSizeRenderSize:(CGSize)arg6 ;
-(PHContentEditingOutput *)contentEditingOutput;
-(unsigned short)photoIrisVisibilityState;
-(void)setPhotoIrisVisibilityState:(unsigned short)arg1 ;
-(void)setVideoDuration:(SCD_Struct_PH1)arg1 ;
-(PHObjectPlaceholder *)placeholderForCreatedAsset;
-(NSString *)clientName;
@end

