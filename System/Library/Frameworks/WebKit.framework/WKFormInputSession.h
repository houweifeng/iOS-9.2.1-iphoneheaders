/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/_WKFormInputSession.h>

@class NSString, WKContentView;

@interface WKFormInputSession : NSObject <_WKFormInputSession> {

	WKContentView* _contentView;
	RetainPtr<NSObject<NSSecureCoding> >* _userObject;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) NSObject*<NSSecureCoding> userObject; 
@property (nonatomic,copy) NSString * accessoryViewCustomButtonTitle; 
-(void)invalidate;
-(BOOL)isValid;
-(NSObject*<NSSecureCoding>)userObject;
-(NSString *)accessoryViewCustomButtonTitle;
-(void)setAccessoryViewCustomButtonTitle:(NSString *)arg1 ;
-(id)initWithContentView:(id)arg1 userObject:(id)arg2 ;
@end

