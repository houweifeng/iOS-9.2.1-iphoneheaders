/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessageUI/MessageUI-Structs.h>
@class NSString;

@interface MFReformattedAddress : NSObject {

	NSString* _address;
	NSRange _middleTruncationRange;

}

@property (nonatomic,readonly) NSString * localPart; 
@property (nonatomic,readonly) NSString * domainPart; 
@property (assign,nonatomic) NSRange middleTruncationRange;              //@synthesize middleTruncationRange=_middleTruncationRange - In the implementation block
-(void)dealloc;
-(id)description;
-(id)attributedStringWithFontSize:(double)arg1 maximumWidth:(double)arg2 options:(unsigned long long)arg3 ;
-(id)initWithAddress:(id)arg1 ;
-(double)widthWithFontSize:(double)arg1 maximumWidth:(double)arg2 options:(unsigned long long)arg3 ;
-(NSString *)localPart;
-(void)setMiddleTruncationRange:(NSRange)arg1 ;
-(NSRange)middleTruncationRange;
-(NSString *)domainPart;
@end

