/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface BiometricKitTemplateInfo : NSObject {

	NSArray* _topology;
	NSDictionary* _details;

}

@property (nonatomic,retain) NSArray * topology;                  //@synthesize topology=_topology - In the implementation block
@property (nonatomic,retain) NSDictionary * details;              //@synthesize details=_details - In the implementation block
-(void)dealloc;
-(id)init;
-(NSDictionary *)details;
-(void)setDetails:(NSDictionary *)arg1 ;
-(NSArray *)topology;
-(void)setTopology:(NSArray *)arg1 ;
@end

