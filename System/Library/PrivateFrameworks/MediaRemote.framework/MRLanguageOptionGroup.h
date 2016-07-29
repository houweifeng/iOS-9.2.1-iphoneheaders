/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MRLanguageOption, NSArray;

@interface MRLanguageOptionGroup : NSObject <NSSecureCoding> {

	BOOL _allowEmptySelection;
	MRLanguageOption* _defaultLanguageOption;
	NSArray* _languageOptions;

}

@property (nonatomic,readonly) BOOL allowEmptySelection;                              //@synthesize allowEmptySelection=_allowEmptySelection - In the implementation block
@property (nonatomic,readonly) MRLanguageOption * defaultLanguageOption;              //@synthesize defaultLanguageOption=_defaultLanguageOption - In the implementation block
@property (nonatomic,readonly) NSArray * languageOptions;                             //@synthesize languageOptions=_languageOptions - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSArray *)languageOptions;
-(id)initWithLanguageOptions:(id)arg1 defaultLanguageOption:(void*)arg2 allowEmptySelection:(BOOL)arg3 ;
-(MRLanguageOption *)defaultLanguageOption;
-(BOOL)allowEmptySelection;
@end

