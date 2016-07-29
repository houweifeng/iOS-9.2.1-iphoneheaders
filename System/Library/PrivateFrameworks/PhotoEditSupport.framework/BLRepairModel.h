/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, BLRepairLayerStack, NSLock;

@interface BLRepairModel : NSObject {

	NSDictionary* _strokesDataDictionary;
	BLRepairLayerStack* _layerStack;
	NSLock* _lock;

}
-(void)dealloc;
-(void)setLayerStack:(id)arg1 ;
-(id)layerStack;
-(id)initWithAdjustmentsDictionary:(id)arg1 ;
-(BOOL)hasRedeye;
-(BOOL)hasRepairOrRedeye;
-(BOOL)hasRepair;
-(BOOL)hasLayerStack;
-(void)buildLayerStackWithAnalysisImage:(id)arg1 andRepairImage:(id)arg2 ;
-(id)imagePatchList;
@end

