/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TSKAnnotationAuthor, NSDate, NSString, TSDCommentStorage;


@protocol TSDAnnotationHosting <NSObject,TSKAnnotation>
@property (nonatomic,retain) TSKAnnotationAuthor * author; 
@property (nonatomic,readonly) NSDate * date; 
@property (assign,nonatomic) id<TSKModel> hostingModel; 
@property (nonatomic,readonly) NSString * changeTrackingTitleString; 
@property (nonatomic,readonly) NSString * changeTrackingContentString; 
@property (nonatomic,readonly) NSString * changeTrackingContentFormatString; 
@property (nonatomic,copy) TSDCommentStorage * storage; 
@optional
-(NSString *)changeTrackingContentString;
-(BOOL)wantsAnnotationPopover;
-(NSString *)changeTrackingTitleString;
-(NSString *)changeTrackingContentFormatString;
-(TSDCommentStorage *)storage;
-(void)setStorage:(id)arg1;

@required
-(void)commentWillBeAddedToDocumentRoot;
-(id<TSKModel>)hostingModel;
-(void)setHostingModel:(id)arg1;
-(BOOL)isEqual:(id)arg1;
-(NSDate *)date;
-(void)setAuthor:(id)arg1;
-(TSKAnnotationAuthor *)author;

@end

