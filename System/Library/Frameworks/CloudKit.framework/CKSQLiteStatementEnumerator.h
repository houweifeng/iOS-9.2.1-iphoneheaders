/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class CKSQLiteStatement;

@interface CKSQLiteStatementEnumerator : NSEnumerator {

	BOOL _closed;
	CKSQLiteStatement* _statement;
	/*^block*/id _block;

}

@property (nonatomic,retain) CKSQLiteStatement * statement;              //@synthesize statement=_statement - In the implementation block
@property (nonatomic,copy) id block;                                     //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) BOOL closed;                                //@synthesize closed=_closed - In the implementation block
-(void)dealloc;
-(id)nextObject;
-(void)close;
-(void)setClosed:(BOOL)arg1 ;
-(BOOL)closed;
-(void)setStatement:(CKSQLiteStatement *)arg1 ;
-(id)initWithStatement:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(CKSQLiteStatement *)statement;
@end

