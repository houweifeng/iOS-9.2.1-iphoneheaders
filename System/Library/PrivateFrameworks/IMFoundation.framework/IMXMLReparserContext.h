/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary, NSError;

@interface IMXMLReparserContext : NSObject {

	NSString* _inContent;
	NSString* _outContent;
	NSArray* _attributesToPreserve;
	NSDictionary* _attributesToMerge;
	NSError* _error;

}

@property (nonatomic,retain,readonly) NSArray * attributesToPreserve;                //@synthesize attributesToPreserve=_attributesToPreserve - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * attributesToMerge;              //@synthesize attributesToMerge=_attributesToMerge - In the implementation block
@property (nonatomic,retain,readonly) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,retain,readonly) NSString * outContent;                         //@synthesize outContent=_outContent - In the implementation block
@property (retain,readonly) NSString * _inContent;                                   //@synthesize inContent=_inContent - In the implementation block
-(void)dealloc;
-(NSString *)_inContent;
-(void)_setOutContent:(id)arg1 error:(id)arg2 ;
-(NSArray *)attributesToPreserve;
-(NSDictionary *)attributesToMerge;
-(id)initWithContent:(id)arg1 attributesToPreserve:(id)arg2 attributesToMerge:(id)arg3 ;
-(NSString *)outContent;
-(NSError *)error;
@end

