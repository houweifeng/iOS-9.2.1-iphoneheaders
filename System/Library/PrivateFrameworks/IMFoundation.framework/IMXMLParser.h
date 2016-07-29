/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSXMLParser, IMXMLParserContext, IMXMLParserFrame, NSMutableArray, NSString;

@interface IMXMLParser : NSObject <NSXMLParserDelegate> {

	NSXMLParser* _parser;
	IMXMLParserContext* _context;
	IMXMLParserFrame* _topFrame;
	NSMutableArray* _otherFrames;
	TidyDoc* _tidyDoc;
	CFDictionaryRef _framespace;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_teardownTidy;
-(void)_setupTidy;
-(id)_newDataByTidyingData:(id)arg1 ;
-(BOOL)parseContext:(id)arg1 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 foundIgnorableWhitespace:(id)arg2 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
@end

