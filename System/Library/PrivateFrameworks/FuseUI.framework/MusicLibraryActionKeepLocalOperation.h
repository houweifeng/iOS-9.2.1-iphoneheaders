/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class MPUContentItemIdentifierCollection;

@interface MusicLibraryActionKeepLocalOperation : NSOperation {

	MPUContentItemIdentifierCollection* _contentItemIdentifierCollection;
	long long _keepLocalValue;

}

@property (copy,readonly) MPUContentItemIdentifierCollection * contentItemIdentifierCollection;              //@synthesize contentItemIdentifierCollection=_contentItemIdentifierCollection - In the implementation block
@property (readonly) long long keepLocalValue;                                                               //@synthesize keepLocalValue=_keepLocalValue - In the implementation block
-(void)main;
-(id)initWithContentItemIdentifierCollection:(id)arg1 keepLocalValue:(long long)arg2 ;
-(MPUContentItemIdentifierCollection *)contentItemIdentifierCollection;
-(long long)keepLocalValue;
@end
