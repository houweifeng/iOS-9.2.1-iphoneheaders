/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>
#import <DAEAS/DAMailMessageAttachment.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSNumber;

@interface ASAttachment : ASItem <DAMailMessageAttachment, NSCoding> {

	NSString* _name;
	NSNumber* _size;
	NSNumber* _method;
	NSString* _displayName;
	NSString* _contentId;
	NSString* _contentLocation;
	NSNumber* _isInline;
	NSNumber* _hasBase64Transfer;
	NSString* _clientId;

}

@property (nonatomic,copy) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSNumber * size;                           //@synthesize size=_size - In the implementation block
@property (nonatomic,copy) NSNumber * method;                         //@synthesize method=_method - In the implementation block
@property (nonatomic,copy) NSString * displayName;                    //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * contentId;                      //@synthesize contentId=_contentId - In the implementation block
@property (nonatomic,copy) NSString * contentLocation;                //@synthesize contentLocation=_contentLocation - In the implementation block
@property (nonatomic,copy) NSNumber * isInline;                       //@synthesize isInline=_isInline - In the implementation block
@property (nonatomic,copy) NSNumber * hasBase64Transfer;              //@synthesize hasBase64Transfer=_hasBase64Transfer - In the implementation block
@property (nonatomic,copy) NSString * clientId;                       //@synthesize clientId=_clientId - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSNumber *)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setSize:(NSNumber *)arg1 ;
-(NSNumber *)method;
-(NSString *)displayName;
-(NSString *)contentLocation;
-(BOOL)isMostDefinitelyBase64ed;
-(void)setClientId:(NSString *)arg1 ;
-(NSString *)clientId;
-(NSNumber *)isInline;
-(void)setIsInline:(NSNumber *)arg1 ;
-(void)setPercentEscapedName:(id)arg1 ;
-(void)setContentId:(NSString *)arg1 ;
-(void)setContentLocation:(NSString *)arg1 ;
-(void)setHasBase64Transfer:(NSNumber *)arg1 ;
-(NSNumber *)hasBase64Transfer;
-(NSString *)contentId;
-(void)setMethod:(NSNumber *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
@end

