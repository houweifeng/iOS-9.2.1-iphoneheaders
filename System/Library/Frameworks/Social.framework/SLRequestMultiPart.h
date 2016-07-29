/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface SLRequestMultiPart : NSObject {

	NSData* _payload;
	NSString* _name;
	NSString* _type;
	NSString* _uniqueIdentifier;
	NSString* _multiPartBoundary;
	NSString* _filename;

}

@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,retain) NSData * payload;                           //@synthesize payload=_payload - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * filename;                          //@synthesize filename=_filename - In the implementation block
@property (nonatomic,copy) NSString * multiPartBoundary;                 //@synthesize multiPartBoundary=_multiPartBoundary - In the implementation block
+(id)multiPartWithName:(id)arg1 payload:(id)arg2 type:(id)arg3 multiPartBoundary:(id)arg4 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(unsigned long long)length;
-(NSData *)payload;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)uniqueIdentifier;
-(void)setPayload:(NSData *)arg1 ;
-(void)setFilename:(NSString *)arg1 ;
-(void)setMultiPartBoundary:(NSString *)arg1 ;
-(NSString *)multiPartBoundary;
-(id)partData;
-(id)payloadPreamble;
-(id)payloadEpilogue;
-(id)multiPartHeader;
-(NSString *)filename;
@end
