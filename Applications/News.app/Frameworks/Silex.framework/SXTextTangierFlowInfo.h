/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <TSReading/TSDContainerInfo.h>
#import <Silex/SXTangierRepDirectLayerHostingInfo.h>

@protocol TSDOwningAttachment, TSDContainerInfo, TSDRepDirectLayerHosting;
@class TSDInfoGeometry, TSPObject, NSObject, TSWPStorage, NSString;

@interface SXTextTangierFlowInfo : NSObject <TSDContainerInfo, SXTangierRepDirectLayerHostingInfo> {

	BOOL floatingAboveText;
	BOOL anchoredToText;
	BOOL inlineWithText;
	BOOL attachedToBodyText;
	TSDInfoGeometry* geometry;
	TSPObject*<TSDOwningAttachment> owningAttachment;
	NSObject*<TSDContainerInfo> parentInfo;
	TSWPStorage* _storage;
	id<TSDRepDirectLayerHosting> _directLayerHost;
	NSRange _range;

}

@property (nonatomic,readonly) TSWPStorage * storage;                                                  //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) NSRange range;                                                          //@synthesize range=_range - In the implementation block
@property (assign,nonatomic,__weak) id<TSDRepDirectLayerHosting> directLayerHost;                      //@synthesize directLayerHost=_directLayerHost - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL matchesObjectPlaceholderGeometry; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDContainerInfo> parentInfo; 
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment; 
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) BOOL floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) BOOL anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) BOOL inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) BOOL attachedToBodyText; 
-(id<TSDRepDirectLayerHosting>)directLayerHost;
-(BOOL)anchoredToText;
-(BOOL)attachedToBodyText;
-(BOOL)floatingAboveText;
-(BOOL)inlineWithText;
-(void)setDirectLayerHost:(id<TSDRepDirectLayerHosting>)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg1 ;
-(Class)repClass;
-(BOOL)isThemeContent;
-(NSObject*<TSDContainerInfo>)parentInfo;
-(void)setParentInfo:(NSObject*<TSDContainerInfo>)arg1 ;
-(TSPObject*<TSDOwningAttachment>)owningAttachment;
-(void)setOwningAttachment:(TSPObject*<TSDOwningAttachment>)arg1 ;
-(TSPObject*<TSDOwningAttachment>)owningAttachmentNoRecurse;
-(BOOL)isFloatingAboveText;
-(BOOL)isAnchoredToText;
-(BOOL)isInlineWithText;
-(BOOL)isAttachedToBodyText;
-(id)childInfos;
-(id)initWithStorage:(id)arg1 range:(NSRange)arg2 ;
-(TSWPStorage *)storage;
-(NSRange)range;
-(TSDInfoGeometry *)geometry;
-(void)setGeometry:(TSDInfoGeometry *)arg1 ;
-(Class)layoutClass;
@end

