/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PowerlogHelperdOperators/PowerlogHelperdOperators-Structs.h>
@class NSDictionary;

@interface PLProcessNetworkSource : NSObject {

	NSDictionary* _descriptionDictionary;
	NSDictionary* _countsDictionary;
	NStatSourceRef _source;

}

@property (nonatomic,copy) NSDictionary * descriptionDictionary;              //@synthesize descriptionDictionary=_descriptionDictionary - In the implementation block
@property (nonatomic,copy) NSDictionary * countsDictionary;                   //@synthesize countsDictionary=_countsDictionary - In the implementation block
@property (assign,nonatomic) NStatSourceRef source;                           //@synthesize source=_source - In the implementation block
-(NStatSourceRef)source;
-(void)setSource:(NStatSourceRef)arg1 ;
-(id)initWithSource:(NStatSourceRef)arg1 ;
-(NSDictionary *)descriptionDictionary;
-(void)setDescriptionDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)countsDictionary;
-(void)setCountsDictionary:(NSDictionary *)arg1 ;
@end

