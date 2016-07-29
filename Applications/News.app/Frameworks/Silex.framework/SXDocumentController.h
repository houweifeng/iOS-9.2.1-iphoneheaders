/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SXDocument, SXImageController;

@interface SXDocumentController : NSObject {

	SXDocument* _document;
	SXImageController* _imageController;

}

@property (nonatomic,readonly) SXDocument * document;                          //@synthesize document=_document - In the implementation block
@property (nonatomic,retain) SXImageController * imageController;              //@synthesize imageController=_imageController - In the implementation block
-(id)imageResourceForIdentifier:(id)arg1 ;
-(id)thumbnailImageIdentifier;
-(BOOL)transparentToolbar;
-(id)componentLayoutForIdentifier:(id)arg1 ;
-(id)componentStyleForIdentifier:(id)arg1 ;
-(id)componentTextStyleForIdentifier:(id)arg1 ;
-(id)componentStyleForIdentifier:(id)arg1 andClassification:(id)arg2 ;
-(id)mergedObjectsWithIdentifier:(id)arg1 andDefaultIdentifiers:(id)arg2 fromDictionary:(id)arg3 ;
-(SXImageController *)imageController;
-(id)allImageResources;
-(id)filterImageResources;
-(id)mergeJSONObjects:(id)arg1 ;
-(id)textStyleForIdentifier:(id)arg1 ;
-(id)componentTextStyleForIdentifier:(id)arg1 andClassification:(id)arg2 ;
-(id)resourceForIdentifier:(id)arg1 ;
-(id)requiredResourceURLs;
-(void)setImageController:(SXImageController *)arg1 ;
-(SXDocument *)document;
-(id)initWithDocument:(id)arg1 ;
@end

