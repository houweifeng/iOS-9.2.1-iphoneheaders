/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CAMDistinctPersistenceCopying.h>

@class CLLocation, NSURL, NSString, NSMutableDictionary, NSDictionary;

@interface CAMCaptureRequest : NSObject <NSCopying, CAMDistinctPersistenceCopying> {

	unsigned _assertionIdentifier;
	BOOL _capturedFromPhotoBooth;
	CLLocation* _location;
	long long _persistenceOptions;
	unsigned long long _deferredPersistenceOptions;
	NSURL* _localDestinationURL;
	NSString* _persistenceUUID;
	BOOL _shouldExtractDiagnosticsFromMetadata;
	BOOL _shouldPersistDiagnosticsToSidecar;
	BOOL _shouldDelayRemotePersistence;
	unsigned short _sessionIdentifier;
	long long _captureDevice;
	long long _captureMode;
	long long _captureOrientation;
	long long _physicalButtonType;
	NSMutableDictionary* __parameterStorage;
	long long _type;

}

@property (nonatomic,readonly) long long type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long captureOrientation;                               //@synthesize captureOrientation=_captureOrientation - In the implementation block
@property (nonatomic,readonly) long long captureDevice;                                    //@synthesize captureDevice=_captureDevice - In the implementation block
@property (nonatomic,readonly) long long captureMode;                                      //@synthesize captureMode=_captureMode - In the implementation block
@property (nonatomic,readonly) long long physicalButtonType;                               //@synthesize physicalButtonType=_physicalButtonType - In the implementation block
@property (nonatomic,readonly) unsigned short sessionIdentifier;                           //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * _customParameterStorage; 
@property (nonatomic,readonly) long long persistenceOptions;                               //@synthesize persistenceOptions=_persistenceOptions - In the implementation block
@property (nonatomic,readonly) unsigned long long deferredPersistenceOptions;              //@synthesize deferredPersistenceOptions=_deferredPersistenceOptions - In the implementation block
@property (nonatomic,copy,readonly) NSURL * localDestinationURL;                           //@synthesize localDestinationURL=_localDestinationURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * persistenceUUID;                            //@synthesize persistenceUUID=_persistenceUUID - In the implementation block
@property (nonatomic,readonly) BOOL shouldExtractDiagnosticsFromMetadata;                  //@synthesize shouldExtractDiagnosticsFromMetadata=_shouldExtractDiagnosticsFromMetadata - In the implementation block
@property (nonatomic,readonly) BOOL shouldPersistDiagnosticsToSidecar;                     //@synthesize shouldPersistDiagnosticsToSidecar=_shouldPersistDiagnosticsToSidecar - In the implementation block
@property (nonatomic,readonly) BOOL shouldDelayRemotePersistence;                          //@synthesize shouldDelayRemotePersistence=_shouldDelayRemotePersistence - In the implementation block
@property (nonatomic,readonly) CLLocation * location;                                      //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL capturedFromPhotoBooth;                                //@synthesize capturedFromPhotoBooth=_capturedFromPhotoBooth - In the implementation block
@property (nonatomic,readonly) unsigned assertionIdentifier;                               //@synthesize assertionIdentifier=_assertionIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _parameterStorage;                    //@synthesize _parameterStorage=__parameterStorage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned short)sessionIdentifier;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(CLLocation *)location;
-(long long)captureOrientation;
-(id)initWithRequest:(id)arg1 distinctPersistence:(BOOL)arg2 ;
-(long long)persistenceOptions;
-(unsigned long long)deferredPersistenceOptions;
-(NSURL *)localDestinationURL;
-(NSString *)persistenceUUID;
-(BOOL)shouldExtractDiagnosticsFromMetadata;
-(BOOL)shouldPersistDiagnosticsToSidecar;
-(BOOL)shouldDelayRemotePersistence;
-(unsigned)assertionIdentifier;
-(long long)captureDevice;
-(long long)physicalButtonType;
-(long long)captureMode;
-(BOOL)capturedFromPhotoBooth;
-(NSMutableDictionary *)_parameterStorage;
-(id)distinctPersistenceCopy;
-(id)parameterForKey:(id)arg1 ;
-(NSDictionary *)_customParameterStorage;
@end

