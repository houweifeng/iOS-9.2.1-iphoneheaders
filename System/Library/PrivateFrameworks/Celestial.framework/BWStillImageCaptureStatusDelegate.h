/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:46 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWStillImageCaptureStatusDelegate <NSObject>
@required
-(void)stillImageCoordinator:(id)arg1 willBeginCaptureForSettings:(id)arg2 resolvedCaptureType:(int)arg3;
-(void)stillImageCoordinator:(id)arg1 willCapturePhotoForSettings:(id)arg2 sisActive:(BOOL)arg3;
-(void)stillImageCoordinator:(id)arg1 didCapturePreBracketedEV0ImageForSettings:(id)arg2 resolvedCaptureType:(int)arg3 pts:(SCD_Struct_BW2)arg4;
-(void)stillImageCoordinator:(id)arg1 didCapturePhotoForSettings:(id)arg2 resolvedCaptureType:(int)arg3 pts:(SCD_Struct_BW2)arg4;
-(void)stillImageCoordinator:(id)arg1 willPrepareStillImageBracketWithSettings:(id)arg2 clientInitiated:(BOOL)arg3;

@end

