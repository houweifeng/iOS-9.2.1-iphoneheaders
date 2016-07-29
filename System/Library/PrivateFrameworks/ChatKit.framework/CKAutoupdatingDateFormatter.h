/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSDateFormatter.h>

@class NSString;

@interface CKAutoupdatingDateFormatter : NSDateFormatter {

	NSString* _template;

}

@property (nonatomic,copy) NSString * template;              //@synthesize template=_template - In the implementation block
-(void)dealloc;
-(id)initWithTemplate:(id)arg1 ;
-(id)notificationCenter;
-(void)setTemplate:(NSString *)arg1 ;
-(void)updateDateFormat;
-(NSString *)template;
@end

