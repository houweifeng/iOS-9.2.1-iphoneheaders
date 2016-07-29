/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PSIReusableObject.h>

@class NSMutableString, NSString;

@interface PSIGroup : PSIReusableObject {

	NSMutableString* _contentString;
	unsigned long long _compressedRanges[2];
	NSRange _tokenRanges[8];
	unsigned long long _tokenRangesCount;
	short _category;
	unsigned long long _groupId;
	unsigned long long _owningGroupId;
	CFArrayRef _assetIds;

}

@property (assign,nonatomic) unsigned long long groupId;                     //@synthesize groupId=_groupId - In the implementation block
@property (assign,nonatomic) unsigned long long owningGroupId;               //@synthesize owningGroupId=_owningGroupId - In the implementation block
@property (assign,nonatomic) short category;                                 //@synthesize category=_category - In the implementation block
@property (nonatomic,retain,readonly) NSString * contentString;              //@synthesize contentString=_contentString - In the implementation block
@property (nonatomic,retain) CFArrayRef assetIds;                            //@synthesize assetIds=_assetIds - In the implementation block
+(void)_getTokenRanges:(NSRange)arg1 fromCompressedRanges:(unsigned long long)arg2 ;
+(void)getCompressedRanges:(unsigned long long)arg1 fromTokenRanges:(SCD_Struct_PS20*)arg2 count:(long long)arg3 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setCategory:(short)arg1 ;
-(short)category;
-(void)prepareForReuse;
-(void)prepareFromStatement:(sqlite3_stmtRef)arg1 ;
-(long long)compareToGroup:(id)arg1 ;
-(unsigned long long)tokenRangesCount;
-(NSRange)tokenRangeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)owningGroupId;
-(void)setOwningGroupId:(unsigned long long)arg1 ;
-(CFArrayRef)assetIds;
-(void)setAssetIds:(CFArrayRef)arg1 ;
-(NSString *)contentString;
-(void)setGroupId:(unsigned long long)arg1 ;
-(unsigned long long)groupId;
@end

