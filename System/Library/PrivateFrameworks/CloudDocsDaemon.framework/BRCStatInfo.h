/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BRFieldCKInfo, BRCItemID, NSString, NSData;

@interface BRCStatInfo : NSObject <NSCopying, NSSecureCoding> {

	BRFieldCKInfo* _ckInfo;
	BRCItemID* _parentID;
	char _state;
	char _type;
	char _mode;
	long long _birthtime;
	NSString* _filenameOrAliasTarget;
	BOOL _hiddenExt;
	NSData* _xattrSignature;
	NSData* _finderTags;
	NSData* _lazyXattr;

}

@property (nonatomic,retain) BRFieldCKInfo * ckInfo;                          //@synthesize ckInfo=_ckInfo - In the implementation block
@property (nonatomic,retain) BRCItemID * parentID;                            //@synthesize parentID=_parentID - In the implementation block
@property (assign,nonatomic) char state;                                      //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) char type;                                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char mode;                                       //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) long long birthtime;                             //@synthesize birthtime=_birthtime - In the implementation block
@property (nonatomic,retain) NSString * logicalName;                          //@synthesize filenameOrAliasTarget=_filenameOrAliasTarget - In the implementation block
@property (assign,getter=isHiddenExt,nonatomic) BOOL hiddenExt;               //@synthesize hiddenExt=_hiddenExt - In the implementation block
@property (nonatomic,retain) NSData * finderTags;                             //@synthesize finderTags=_finderTags - In the implementation block
@property (nonatomic,retain) NSData * xattrSignature;                         //@synthesize xattrSignature=_xattrSignature - In the implementation block
@property (nonatomic,retain) NSData * lazyXattr;                              //@synthesize lazyXattr=_lazyXattr - In the implementation block
@property (nonatomic,readonly) BOOL iWorkShareable; 
@property (nonatomic,readonly) NSString * _aliasTargetMangledID; 
@property (nonatomic,readonly) BRCItemID * _aliasTargetItemID; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(char)state;
-(void)setState:(char)arg1 ;
-(void)setType:(char)arg1 ;
-(char)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMode:(char)arg1 ;
-(char)mode;
-(id)displayName;
-(BOOL)isWritable;
-(BRCItemID *)parentID;
-(NSString *)logicalName;
-(NSData *)finderTags;
-(long long)birthtime;
-(BOOL)isHiddenExt;
-(NSString *)_aliasTargetMangledID;
-(BRCItemID *)_aliasTargetItemID;
-(void)_updateAliasTarget:(id)arg1 ;
-(BRFieldCKInfo *)ckInfo;
-(NSData *)xattrSignature;
-(id)_aliasTargetContainerIDAndOwner;
-(id)descriptionWithContext:(id)arg1 origName:(id)arg2 ;
-(BOOL)checkStateWithItemID:(id)arg1 logToFile:(_sFILE*)arg2 ;
-(id)initWithStatInfo:(id)arg1 ;
-(BOOL)iWorkShareable;
-(id)initFromResultSet:(id)arg1 pos:(int)arg2 ;
-(BOOL)check:(id)arg1 logToFile:(_sFILE*)arg2 ;
-(unsigned long long)diffAgainst:(id)arg1 ;
-(BOOL)isExecutable;
-(void)setCkInfo:(BRFieldCKInfo *)arg1 ;
-(void)setBirthtime:(long long)arg1 ;
-(void)setParentID:(BRCItemID *)arg1 ;
-(void)setHiddenExt:(BOOL)arg1 ;
-(void)setXattrSignature:(NSData *)arg1 ;
-(NSData *)lazyXattr;
-(void)setLazyXattr:(NSData *)arg1 ;
-(void)setFinderTags:(NSData *)arg1 ;
-(void)setLogicalName:(NSString *)arg1 ;
@end

