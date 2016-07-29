/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MusicEntityValueContext, MPUContentItemIdentifierCollection;

@interface _MusicEntityDownloadInformationRegisteredSource : NSObject <NSCopying> {

	BOOL _hasNonPurgableAsset;
	/*^block*/id _downloadInformationBlock;
	MusicEntityValueContext* _entityValueContext;
	MPUContentItemIdentifierCollection* _identifierCollection;
	long long _keepLocal;
	long long _keepLocalStatus;

}

@property (nonatomic,copy) id downloadInformationBlock;                                            //@synthesize downloadInformationBlock=_downloadInformationBlock - In the implementation block
@property (nonatomic,copy) MusicEntityValueContext * entityValueContext;                           //@synthesize entityValueContext=_entityValueContext - In the implementation block
@property (assign,nonatomic) BOOL hasNonPurgableAsset;                                             //@synthesize hasNonPurgableAsset=_hasNonPurgableAsset - In the implementation block
@property (nonatomic,copy) MPUContentItemIdentifierCollection * identifierCollection;              //@synthesize identifierCollection=_identifierCollection - In the implementation block
@property (assign,nonatomic) long long keepLocal;                                                  //@synthesize keepLocal=_keepLocal - In the implementation block
@property (assign,nonatomic) long long keepLocalStatus;                                            //@synthesize keepLocalStatus=_keepLocalStatus - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(MusicEntityValueContext *)entityValueContext;
-(MPUContentItemIdentifierCollection *)identifierCollection;
-(void)setEntityValueContext:(MusicEntityValueContext *)arg1 ;
-(id)downloadInformationBlock;
-(void)setHasNonPurgableAsset:(BOOL)arg1 ;
-(void)setDownloadInformationBlock:(id)arg1 ;
-(BOOL)hasNonPurgableAsset;
-(long long)keepLocal;
-(void)setKeepLocal:(long long)arg1 ;
-(long long)keepLocalStatus;
-(void)setKeepLocalStatus:(long long)arg1 ;
-(void)setIdentifierCollection:(MPUContentItemIdentifierCollection *)arg1 ;
@end

