/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NSDictionary;

@interface BiometricKitEnrollProgressInfo : NSObject {

	int _message;
	long long _progress;
	long long _currentPrimaryComponentID;
	UIImage* _captureImage;
	UIImage* _renderedImage;
	NSDictionary* _messageDetails;

}

@property (assign,nonatomic) long long progress;                               //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) long long currentPrimaryComponentID;              //@synthesize currentPrimaryComponentID=_currentPrimaryComponentID - In the implementation block
@property (nonatomic,retain) UIImage * captureImage;                           //@synthesize captureImage=_captureImage - In the implementation block
@property (nonatomic,retain) UIImage * renderedImage;                          //@synthesize renderedImage=_renderedImage - In the implementation block
@property (assign,nonatomic) int message;                                      //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSDictionary * messageDetails;                    //@synthesize messageDetails=_messageDetails - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setProgress:(long long)arg1 ;
-(int)message;
-(void)setMessage:(int)arg1 ;
-(long long)progress;
-(UIImage *)renderedImage;
-(UIImage *)captureImage;
-(NSDictionary *)messageDetails;
-(long long)currentPrimaryComponentID;
-(void)setMessageDetails:(NSDictionary *)arg1 ;
-(void)setCaptureImage:(UIImage *)arg1 ;
-(void)setRenderedImage:(UIImage *)arg1 ;
-(void)setCurrentPrimaryComponentID:(long long)arg1 ;
@end

