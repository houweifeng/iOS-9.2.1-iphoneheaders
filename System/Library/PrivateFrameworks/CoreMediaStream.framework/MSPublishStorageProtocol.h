/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPublishStorageProtocol <MSStorageProtocol>
@property (assign,nonatomic) id<MSPublishStorageProtocolDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<MSPublishStorageProtocolDelegate>)delegate;
-(void)computeHashForAsset:(id)arg1;
-(void)publishAssets:(id)arg1 URL:(id)arg2;
-(void)abort;

@end

