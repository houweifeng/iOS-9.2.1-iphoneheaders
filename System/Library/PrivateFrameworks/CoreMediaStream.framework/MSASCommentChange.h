/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MSASComment;

@interface MSASCommentChange : NSObject {

	int _deletionIndex;
	int _type;
	MSASComment* _comment;

}

@property (nonatomic,retain) MSASComment * comment;              //@synthesize comment=_comment - In the implementation block
@property (assign,nonatomic) int deletionIndex;                  //@synthesize deletionIndex=_deletionIndex - In the implementation block
@property (assign,nonatomic) int type;                           //@synthesize type=_type - In the implementation block
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(int)deletionIndex;
-(void)setDeletionIndex:(int)arg1 ;
-(void)setComment:(MSASComment *)arg1 ;
-(MSASComment *)comment;
@end

