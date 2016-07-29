/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSCountedSet, NSMutableDictionary;

@interface BBAttachments : NSObject <NSCopying, NSSecureCoding> {

	long long primaryType;
	NSCountedSet* _additionalAttachments;
	NSMutableDictionary* _clientSideComposedImageInfos;

}

@property (assign,nonatomic) long long primaryType; 
@property (nonatomic,retain) NSCountedSet * additionalAttachments;                            //@synthesize additionalAttachments=_additionalAttachments - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * clientSideComposedImageInfos;              //@synthesize clientSideComposedImageInfos=_clientSideComposedImageInfos - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)primaryType;
-(unsigned long long)numberOfAdditionalAttachments;
-(unsigned long long)numberOfAdditionalAttachmentsOfType:(long long)arg1 ;
-(void)setPrimaryType:(long long)arg1 ;
-(void)addAttachmentOfType:(long long)arg1 ;
-(BOOL)isEqualToAttachments:(id)arg1 ;
-(NSCountedSet *)additionalAttachments;
-(void)setAdditionalAttachments:(NSCountedSet *)arg1 ;
-(NSMutableDictionary *)clientSideComposedImageInfos;
-(void)setClientSideComposedImageInfos:(NSMutableDictionary *)arg1 ;
@end

