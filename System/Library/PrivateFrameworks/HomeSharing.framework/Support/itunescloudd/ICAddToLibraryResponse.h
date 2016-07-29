/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:48 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HSResponse.h>

@class NSDictionary;

@interface ICAddToLibraryResponse : HSResponse {

	BOOL _updateRequired;
	NSDictionary* _addedItems;

}

@property (nonatomic,retain) NSDictionary * addedItems;              //@synthesize addedItems=_addedItems - In the implementation block
@property (assign,nonatomic) BOOL updateRequired;                    //@synthesize updateRequired=_updateRequired - In the implementation block
-(BOOL)updateRequired;
-(void)setUpdateRequired:(BOOL)arg1 ;
-(NSDictionary *)addedItems;
-(void)setAddedItems:(NSDictionary *)arg1 ;
@end

