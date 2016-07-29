/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSSPreset.h>
#import <iWorkImport/TSSStyleClient.h>
#import <iWorkImport/TSKModel.h>

@class TSTTableStyleNetwork, NSString;

@interface TSTTableStylePreset : TSPObject <TSSPreset, TSSStyleClient, TSKModel> {

	TSTTableStyleNetwork* _styleNetwork;
	unsigned long long _tempUpgradePresetID;

}

@property (nonatomic,readonly) unsigned long long presetID; 
@property (nonatomic,copy) TSTTableStyleNetwork * styleNetwork; 
@property (nonatomic,readonly) NSString * presetKind; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)needsObjectUUID;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(TableStylePresetArchive*)arg1 archiver:(id)arg2 ;
-(id)referencedStyles;
-(void)replaceReferencedStylesUsingBlock:(/*^block*/id)arg1 ;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(NSString *)presetKind;
-(id)swatchImage;
-(TSTTableStyleNetwork *)styleNetwork;
-(id)initWithStyleNetwork:(id)arg1 ;
-(void)setStyleNetwork:(TSTTableStyleNetwork *)arg1 ;
-(id)p_documentRoot;
-(unsigned long long)presetID;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithContext:(id)arg1 ;
@end

