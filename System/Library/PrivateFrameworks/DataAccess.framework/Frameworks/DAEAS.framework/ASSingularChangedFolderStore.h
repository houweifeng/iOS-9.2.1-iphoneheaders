/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASChangedFolderStore.h>

@class NSString;

@interface ASSingularChangedFolderStore : ASChangedFolderStore {

	NSString* _serverId;

}

@property (nonatomic,retain) NSString * serverId;              //@synthesize serverId=_serverId - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)setServerId:(NSString *)arg1 ;
-(NSString *)serverId;
@end
