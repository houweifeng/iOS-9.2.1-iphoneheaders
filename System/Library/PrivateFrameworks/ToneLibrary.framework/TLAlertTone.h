/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, TLSound;

@interface TLAlertTone : NSObject {

	NSString* _filePath;
	TLSound* _actualSound;
	TLSound* _previewSound;

}

@property (nonatomic,copy) NSString * filePath;                   //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,retain) TLSound * actualSound;               //@synthesize actualSound=_actualSound - In the implementation block
@property (nonatomic,retain) TLSound * previewSound;              //@synthesize previewSound=_previewSound - In the implementation block
-(void)dealloc;
-(NSString *)filePath;
-(id)initWithFilePath:(id)arg1 actualSoundID:(unsigned)arg2 previewSoundID:(unsigned)arg3 ;
-(TLSound *)actualSound;
-(TLSound *)previewSound;
-(void)_setFilePath:(id)arg1 ;
-(void)_setActualSound:(id)arg1 ;
-(void)_setPreviewSound:(id)arg1 ;
@end

