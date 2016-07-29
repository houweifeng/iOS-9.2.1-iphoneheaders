/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface ML3LanguageResources : NSObject <NSSecureCoding> {

	NSDictionary* _sectionsInfo;
	NSDictionary* _sortingDetails;
	NSString* _canonicalLanguageIdentifier;

}

@property (nonatomic,readonly) NSDictionary * sectionsInfo;                         //@synthesize sectionsInfo=_sectionsInfo - In the implementation block
@property (nonatomic,readonly) NSDictionary * sortingDetails;                       //@synthesize sortingDetails=_sortingDetails - In the implementation block
@property (nonatomic,readonly) NSString * canonicalLanguageIdentifier;              //@synthesize canonicalLanguageIdentifier=_canonicalLanguageIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)sectionsInfo;
-(NSDictionary *)sortingDetails;
-(id)initWithSectionsInfo:(id)arg1 sortingDetails:(id)arg2 canonicalLanguageIdentifier:(id)arg3 ;
-(NSString *)canonicalLanguageIdentifier;
@end
