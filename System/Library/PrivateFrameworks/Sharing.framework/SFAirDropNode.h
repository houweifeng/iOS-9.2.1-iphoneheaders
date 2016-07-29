/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Sharing/Sharing-Structs.h>
@class NSString, UIImage;

@interface SFAirDropNode : NSObject {

	SFOperationRef _sender;
	BOOL _unknown;
	BOOL _monogram;
	BOOL _supportsPasses;
	BOOL _supportsFMF;
	BOOL _supportsMixedTypes;
	BOOL _isConversation;
	id _node;
	NSString* _realName;
	UIImage* _displayIcon;
	NSString* _displayName;
	NSString* _secondaryName;

}

@property (retain) id node;                                //@synthesize node=_node - In the implementation block
@property (retain) NSString * realName;                    //@synthesize realName=_realName - In the implementation block
@property (retain) UIImage * displayIcon;                  //@synthesize displayIcon=_displayIcon - In the implementation block
@property (retain) NSString * displayName;                 //@synthesize displayName=_displayName - In the implementation block
@property (retain) NSString * secondaryName;               //@synthesize secondaryName=_secondaryName - In the implementation block
@property (getter=isUnknown) BOOL unknown;                 //@synthesize unknown=_unknown - In the implementation block
@property (getter=isMonogram) BOOL monogram;               //@synthesize monogram=_monogram - In the implementation block
@property (readonly) BOOL supportsPasses;                  //@synthesize supportsPasses=_supportsPasses - In the implementation block
@property (readonly) BOOL supportsFMF;                     //@synthesize supportsFMF=_supportsFMF - In the implementation block
@property (readonly) BOOL supportsMixedTypes;              //@synthesize supportsMixedTypes=_supportsMixedTypes - In the implementation block
@property (readonly) BOOL isConversation;                  //@synthesize isConversation=_isConversation - In the implementation block
+(id)nodeWithSFNode:(SFNodeRef)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setMonogram:(BOOL)arg1 ;
-(id)node;
-(NSString *)displayName;
-(void)setNode:(id)arg1 ;
-(void)setUnknown:(BOOL)arg1 ;
-(void)updateWithSFNode:(SFNodeRef)arg1 ;
-(void)handleOperationCallback:(SFOperationRef)arg1 event:(long long)arg2 withResults:(id)arg3 ;
-(void)setDisplayIcon:(UIImage *)arg1 ;
-(void)setSecondaryName:(NSString *)arg1 ;
-(void)setRealName:(NSString *)arg1 ;
-(void)cancelSend;
-(void)startSendWithSessionID:(id)arg1 items:(id)arg2 description:(id)arg3 previewImage:(id)arg4 ;
-(void)simulateFakeTransferWithSessionID:(id)arg1 ;
-(NSString *)realName;
-(UIImage *)displayIcon;
-(NSString *)secondaryName;
-(BOOL)isMonogram;
-(BOOL)supportsPasses;
-(BOOL)supportsFMF;
-(BOOL)supportsMixedTypes;
-(BOOL)isConversation;
-(BOOL)isUnknown;
-(void)setDisplayName:(NSString *)arg1 ;
@end

