/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAMStillImageCaptureResult, NSURL, NSString, NSDate, NSError;

@interface CAMStillImageLocalPersistenceResult : NSObject {

	CAMStillImageCaptureResult* _captureResult;
	NSURL* _localDestinationURL;
	NSString* _localDiagnosticsPath;
	NSString* _localFilteredPreviewPath;
	NSString* _localPersistenceUUID;
	NSDate* _creationDate;
	NSString* _uniformTypeIdentifier;
	long long _imageOrientation;
	NSError* _error;

}

@property (nonatomic,readonly) CAMStillImageCaptureResult * captureResult;              //@synthesize captureResult=_captureResult - In the implementation block
@property (nonatomic,copy,readonly) NSURL * localDestinationURL;                        //@synthesize localDestinationURL=_localDestinationURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * localDiagnosticsPath;                    //@synthesize localDiagnosticsPath=_localDiagnosticsPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * localFilteredPreviewPath;                //@synthesize localFilteredPreviewPath=_localFilteredPreviewPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * localPersistenceUUID;                    //@synthesize localPersistenceUUID=_localPersistenceUUID - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                   //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniformTypeIdentifier;                   //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
@property (nonatomic,readonly) long long imageOrientation;                              //@synthesize imageOrientation=_imageOrientation - In the implementation block
@property (nonatomic,readonly) NSError * error;                                         //@synthesize error=_error - In the implementation block
-(id)init;
-(long long)imageOrientation;
-(NSDate *)creationDate;
-(NSError *)error;
-(NSString *)uniformTypeIdentifier;
-(NSURL *)localDestinationURL;
-(NSString *)localPersistenceUUID;
-(id)initWithCaptureResult:(id)arg1 atURL:(id)arg2 diagnosticsPath:(id)arg3 filteredPreviewPath:(id)arg4 withUUID:(id)arg5 creationDate:(id)arg6 uniformTypeIdentifier:(id)arg7 orientation:(long long)arg8 error:(id)arg9 ;
-(CAMStillImageCaptureResult *)captureResult;
-(NSString *)localFilteredPreviewPath;
-(NSString *)localDiagnosticsPath;
@end

