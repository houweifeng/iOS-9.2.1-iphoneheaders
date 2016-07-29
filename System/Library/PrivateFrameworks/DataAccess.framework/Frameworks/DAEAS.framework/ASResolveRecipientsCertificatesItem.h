/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSNumber, NSMutableArray, NSArray;

@interface ASResolveRecipientsCertificatesItem : ASItem {

	NSNumber* _certCount;
	NSNumber* _recipientCount;
	NSNumber* _easStatus;
	NSMutableArray* _mCertificates;

}

@property (nonatomic,retain) NSNumber * certCount;                        //@synthesize certCount=_certCount - In the implementation block
@property (nonatomic,retain) NSNumber * recipientCount;                   //@synthesize recipientCount=_recipientCount - In the implementation block
@property (nonatomic,retain) NSNumber * easStatus;                        //@synthesize easStatus=_easStatus - In the implementation block
@property (nonatomic,readonly) NSArray * certificates; 
@property (nonatomic,retain) NSMutableArray * mCertificates;              //@synthesize mCertificates=_mCertificates - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)description;
-(NSNumber *)easStatus;
-(NSNumber *)certCount;
-(NSMutableArray *)mCertificates;
-(void)setMCertificates:(NSMutableArray *)arg1 ;
-(void)setCertCount:(NSNumber *)arg1 ;
-(void)setRecipientCount:(NSNumber *)arg1 ;
-(void)setEASStatus:(id)arg1 ;
-(void)addCertificateString:(id)arg1 ;
-(NSNumber *)recipientCount;
-(NSArray *)certificates;
@end
