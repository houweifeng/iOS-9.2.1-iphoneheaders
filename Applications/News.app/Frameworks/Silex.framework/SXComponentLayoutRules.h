/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SXComponentLayoutRules : NSObject <NSCopying> {

	BOOL _allowsIntersection;
	BOOL _shouldSpanAllColumns;
	BOOL _allowsSiblingBasedResizing;
	BOOL _shouldIgnoreDocumentMargin;
	unsigned long long _minimumColumnSpan;

}

@property (assign,nonatomic) unsigned long long minimumColumnSpan;              //@synthesize minimumColumnSpan=_minimumColumnSpan - In the implementation block
@property (assign,nonatomic) BOOL allowsIntersection;                           //@synthesize allowsIntersection=_allowsIntersection - In the implementation block
@property (assign,nonatomic) BOOL shouldSpanAllColumns;                         //@synthesize shouldSpanAllColumns=_shouldSpanAllColumns - In the implementation block
@property (assign,nonatomic) BOOL allowsSiblingBasedResizing;                   //@synthesize allowsSiblingBasedResizing=_allowsSiblingBasedResizing - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreDocumentMargin;                   //@synthesize shouldIgnoreDocumentMargin=_shouldIgnoreDocumentMargin - In the implementation block
+(id)twoColumnLayoutRules;
+(id)fullWidthLayoutRules;
+(id)bodyComponentLayoutRules;
+(id)defaultLayoutRules;
-(unsigned long long)minimumColumnSpan;
-(void)setMinimumColumnSpan:(unsigned long long)arg1 ;
-(BOOL)allowsIntersection;
-(void)setAllowsIntersection:(BOOL)arg1 ;
-(BOOL)shouldSpanAllColumns;
-(void)setShouldSpanAllColumns:(BOOL)arg1 ;
-(BOOL)shouldIgnoreDocumentMargin;
-(void)setShouldIgnoreDocumentMargin:(BOOL)arg1 ;
-(BOOL)allowsSiblingBasedResizing;
-(void)setAllowsSiblingBasedResizing:(BOOL)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

