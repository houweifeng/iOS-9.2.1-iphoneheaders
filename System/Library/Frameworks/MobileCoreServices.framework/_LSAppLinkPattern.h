/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _LSAppLinkPattern : NSObject {

	BOOL _blocking;
	NSString* _pattern;

}

@property (copy) NSString * pattern;                      //@synthesize pattern=_pattern - In the implementation block
@property (getter=isBlocking) BOOL blocking;              //@synthesize blocking=_blocking - In the implementation block
+(id)_normalizedURLPath:(id)arg1 escapeCharacters:(BOOL)arg2 ;
-(id)initWithURLPathPattern:(id)arg1 ;
-(unsigned long long)evaluateWithURLComponents:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(void)setBlocking:(BOOL)arg1 ;
-(BOOL)isBlocking;
-(void)setPattern:(NSString *)arg1 ;
-(NSString *)pattern;
@end

