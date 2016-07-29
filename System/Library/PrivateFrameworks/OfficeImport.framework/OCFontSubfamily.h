/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, OCFontMetadata;

@interface OCFontSubfamily : NSObject {

	NSString* _name;
	OCFontMetadata* _metadata;

}

@property (nonatomic,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) OCFontMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(id)fontSubfamilyWithName:(id)arg1 metadata:(id)arg2 ;
-(void)dealloc;
-(NSString *)name;
-(id)initWithName:(id)arg1 metadata:(id)arg2 ;
-(OCFontMetadata *)metadata;
@end

