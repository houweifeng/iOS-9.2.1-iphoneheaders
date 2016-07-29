/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebBookmarks/WebBookmarks-Structs.h>
@class NSString, TIWordTokenizer;

@interface WebBookmarkTitleWordTokenizer : NSObject {

	NSString* _string;
	unsigned long long _stringLength;
	TIWordTokenizer* _wordTokenizer;
	NSRange _rangeOfNextToken;
	unsigned long long _startOfUnclassifiedRangeBeforeNextToken;

}
+(void)initialize;
-(id)init;
-(void)setString:(id)arg1 ;
-(NSRange)advanceToNextToken;
@end

