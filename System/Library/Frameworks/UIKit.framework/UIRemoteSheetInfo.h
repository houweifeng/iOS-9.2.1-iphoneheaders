/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView, UISpringBoardHostedView;

@interface UIRemoteSheetInfo : NSObject {

	UIView* _sheetView;
	UISpringBoardHostedView* _remoteView;
	id _delegate;
	SEL _selector;
	void* _context;
	long long _returnCode;

}

@property (nonatomic,retain) UIView * sheetView;                                //@synthesize sheetView=_sheetView - In the implementation block
@property (nonatomic,retain) UISpringBoardHostedView * remoteView;              //@synthesize remoteView=_remoteView - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) SEL selector;                                      //@synthesize selector=_selector - In the implementation block
@property (assign,nonatomic) void* context;                                     //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) long long returnCode;                              //@synthesize returnCode=_returnCode - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setSelector:(SEL)arg1 ;
-(SEL)selector;
-(void*)context;
-(void)setContext:(void*)arg1 ;
-(UIView *)sheetView;
-(void)setSheetView:(UIView *)arg1 ;
-(UISpringBoardHostedView *)remoteView;
-(void)setRemoteView:(UISpringBoardHostedView *)arg1 ;
-(long long)returnCode;
-(void)setReturnCode:(long long)arg1 ;
@end

