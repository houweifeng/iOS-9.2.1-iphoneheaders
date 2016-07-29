/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADTableStyleResolver.h>

@class OADTextListStyle;

@interface OADTableUnnecessaryOverrideRemover : OADTableStyleResolver {

	OADTextListStyle* _parentTextListStyle;

}

@property (nonatomic,readonly) OADTextListStyle * parentTextListStyle;              //@synthesize parentTextListStyle=_parentTextListStyle - In the implementation block
-(void)dealloc;
-(void)applyTextStyle:(id)arg1 toParagraph:(id)arg2 ;
-(void)applyResolvedPartStyle:(id)arg1 leftStroke:(id)arg2 rightStroke:(id)arg3 topStroke:(id)arg4 bottomStroke:(id)arg5 toCell:(id)arg6 ;
-(void)fixFill:(id)arg1 ;
-(void)applyTextBodyPropertiesToCellPropertiesInCell:(id)arg1 ;
-(void)removeUnnecessaryOverridesInCellProperties:(id)arg1 strokeType:(int)arg2 resolvedStroke:(id)arg3 ;
-(OADTextListStyle *)parentTextListStyle;
-(id)initWithTable:(id)arg1 parentTextListStyle:(id)arg2 ;
@end

