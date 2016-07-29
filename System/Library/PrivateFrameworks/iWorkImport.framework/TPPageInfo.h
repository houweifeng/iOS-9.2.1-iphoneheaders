/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSDContainerInfo.h>

@protocol TPPageLayoutInfoProvider;
@class TPDocumentRoot, TPBodyInfo, NSString, TSDInfoGeometry;

@interface TPPageInfo : NSObject <TSDContainerInfo> {

	TPDocumentRoot* _documentRoot;
	unsigned long long _pageIndex;
	TPBodyInfo* _bodyInfo;
	id<TPPageLayoutInfoProvider> _layoutInfoProvider;

}

@property (nonatomic,readonly) unsigned long long pageIndex;                                           //@synthesize pageIndex=_pageIndex - In the implementation block
@property (nonatomic,retain,readonly) TPBodyInfo * bodyInfo;                                           //@synthesize bodyInfo=_bodyInfo - In the implementation block
@property (nonatomic,readonly) TPDocumentRoot * documentRoot;                                          //@synthesize documentRoot=_documentRoot - In the implementation block
@property (nonatomic,readonly) id<TPPageLayoutInfoProvider> layoutInfoProvider;                        //@synthesize layoutInfoProvider=_layoutInfoProvider - In the implementation block
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
-(id)copyWithContext:(id)arg1 ;
-(Class)repClass;
-(id)childInfos;
-(NSObject*<TSDContainerInfo>)parentInfo;
-(TSPObject*<TSDOwningAttachment>)owningAttachment;
-(TSPObject*<TSDOwningAttachment>)owningAttachmentNoRecurse;
-(BOOL)isFloatingAboveText;
-(BOOL)isAnchoredToText;
-(BOOL)isAttachedToBodyText;
-(BOOL)isThemeContent;
-(BOOL)isInlineWithText;
-(void)setPrimitiveGeometry:(id)arg1 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg1 ;
-(void)setParentInfo:(NSObject*<TSDContainerInfo>)arg1 ;
-(void)setOwningAttachment:(TSPObject*<TSDOwningAttachment>)arg1 ;
-(id)infoForSelectionPath:(id)arg1 ;
-(id)initWithPageIndex:(unsigned long long)arg1 documentRoot:(id)arg2 layoutInfoProvider:(id)arg3 ;
-(TPBodyInfo *)bodyInfo;
-(id<TPPageLayoutInfoProvider>)layoutInfoProvider;
-(void)dealloc;
-(TSDInfoGeometry *)geometry;
-(void)setGeometry:(TSDInfoGeometry *)arg1 ;
-(unsigned long long)pageIndex;
-(Class)layoutClass;
-(TPDocumentRoot *)documentRoot;
@end

