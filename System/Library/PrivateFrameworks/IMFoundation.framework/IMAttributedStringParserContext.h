/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class NSAttributedString, NSString, NSArray;

@interface IMAttributedStringParserContext : NSObject {

	NSAttributedString* _inString;

}

@property (retain,readonly) NSAttributedString * inString;              //@synthesize inString=_inString - In the implementation block
@property (retain,readonly) NSString * name; 
@property (retain,readonly) NSArray * resultsForLogging; 
@property (readonly) BOOL shouldPreprocess; 
-(void)dealloc;
-(NSString *)name;
-(id)initWithAttributedString:(id)arg1 ;
-(NSArray *)resultsForLogging;
-(id)parser:(id)arg1 preprocessedAttributesForAttributes:(id)arg2 range:(NSRange)arg3 ;
-(NSAttributedString *)inString;
-(void)parserDidStart:(id)arg1 ;
-(BOOL)shouldPreprocess;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 ;
-(void)parserDidEnd:(id)arg1 ;
@end

