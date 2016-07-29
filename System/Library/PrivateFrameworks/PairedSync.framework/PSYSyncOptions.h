/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, PSYTestInput;

@interface PSYSyncOptions : NSObject <NSSecureCoding> {

	BOOL _dryRun;
	BOOL _terminateDuringDryRun;
	NSUUID* _transactionID;
	PSYTestInput* _testInput;

}

@property (nonatomic,copy) NSUUID * transactionID;                    //@synthesize transactionID=_transactionID - In the implementation block
@property (assign,nonatomic) BOOL dryRun;                             //@synthesize dryRun=_dryRun - In the implementation block
@property (assign,nonatomic) BOOL terminateDuringDryRun;              //@synthesize terminateDuringDryRun=_terminateDuringDryRun - In the implementation block
@property (nonatomic,retain) PSYTestInput * testInput;                //@synthesize testInput=_testInput - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)dryRun;
-(void)setDryRun:(BOOL)arg1 ;
-(void)setTransactionID:(NSUUID *)arg1 ;
-(NSUUID *)transactionID;
-(PSYTestInput *)testInput;
-(BOOL)terminateDuringDryRun;
-(void)setTerminateDuringDryRun:(BOOL)arg1 ;
-(void)setTestInput:(PSYTestInput *)arg1 ;
@end

