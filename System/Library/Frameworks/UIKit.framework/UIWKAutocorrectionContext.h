/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:03 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSString;

@interface UIWKAutocorrectionContext : NSObject {

	NSString* _contextBeforeSelection;
	NSString* _selectedText;
	NSString* _contextAfterSelection;
	NSString* _markedText;
	NSRange _rangeInMarkedText;

}

@property (nonatomic,copy) NSString * contextBeforeSelection;              //@synthesize contextBeforeSelection=_contextBeforeSelection - In the implementation block
@property (nonatomic,copy) NSString * selectedText;                        //@synthesize selectedText=_selectedText - In the implementation block
@property (nonatomic,copy) NSString * contextAfterSelection;               //@synthesize contextAfterSelection=_contextAfterSelection - In the implementation block
@property (nonatomic,copy) NSString * markedText;                          //@synthesize markedText=_markedText - In the implementation block
@property (assign,nonatomic) NSRange rangeInMarkedText;                    //@synthesize rangeInMarkedText=_rangeInMarkedText - In the implementation block
-(void)dealloc;
-(NSString *)selectedText;
-(NSString *)markedText;
-(NSString *)contextBeforeSelection;
-(NSString *)contextAfterSelection;
-(NSRange)rangeInMarkedText;
-(void)setSelectedText:(NSString *)arg1 ;
-(void)setContextBeforeSelection:(NSString *)arg1 ;
-(void)setContextAfterSelection:(NSString *)arg1 ;
-(void)setMarkedText:(NSString *)arg1 ;
-(void)setRangeInMarkedText:(NSRange)arg1 ;
@end

