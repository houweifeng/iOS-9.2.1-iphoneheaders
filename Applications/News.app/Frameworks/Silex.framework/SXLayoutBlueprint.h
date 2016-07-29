/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Silex/Silex-Structs.h>
@class SXColumnLayout, SXColumnStack, NSArray, NSMutableDictionary, NSMutableArray;

@interface SXLayoutBlueprint : NSObject {

	BOOL _isCurrentlyLayouting;
	SXLayoutBlueprint* _parentLayoutBlueprint;
	SXColumnLayout* _columnLayout;
	SXColumnStack* _columnStack;
	NSArray* _componentLayouts;
	NSMutableDictionary* _blueprint;
	NSMutableArray* _orderedComponentIdentifiers;
	CGPoint _offset;

}

@property (assign,nonatomic) CGPoint offset;                                                //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic,__weak) SXLayoutBlueprint * parentLayoutBlueprint;              //@synthesize parentLayoutBlueprint=_parentLayoutBlueprint - In the implementation block
@property (nonatomic,readonly) BOOL isComplete; 
@property (nonatomic,readonly) SXColumnLayout * columnLayout;                               //@synthesize columnLayout=_columnLayout - In the implementation block
@property (nonatomic,retain) SXColumnStack * columnStack;                                   //@synthesize columnStack=_columnStack - In the implementation block
@property (assign) BOOL isCurrentlyLayouting;                                               //@synthesize isCurrentlyLayouting=_isCurrentlyLayouting - In the implementation block
@property (nonatomic,retain) NSArray * componentLayouts;                                    //@synthesize componentLayouts=_componentLayouts - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * blueprint;                               //@synthesize blueprint=_blueprint - In the implementation block
@property (nonatomic,retain) NSMutableArray * orderedComponentIdentifiers;                  //@synthesize orderedComponentIdentifiers=_orderedComponentIdentifiers - In the implementation block
-(SXColumnLayout *)columnLayout;
-(id)componentIdentifiers;
-(id)componentBlueprintForComponentIdentifier:(id)arg1 ;
-(void)invalidateSizeForComponentWithIdentifier:(id)arg1 suggestedSize:(CGSize)arg2 ;
-(CGSize)blueprintSize;
-(id)componentsInRect:(CGRect)arg1 ;
-(BOOL)isCurrentlyLayouting;
-(SXColumnStack *)columnStack;
-(void)setColumnStack:(SXColumnStack *)arg1 ;
-(NSArray *)componentLayouts;
-(void)setComponentLayouts:(NSArray *)arg1 ;
-(BOOL)hasLayoutForComponentIdentifier:(id)arg1 isValid:(BOOL*)arg2 ;
-(void)setParentLayoutBlueprint:(SXLayoutBlueprint *)arg1 ;
-(id)initWithColumnLayout:(id)arg1 ;
-(void)registerLayout:(id)arg1 sizer:(id)arg2 forComponent:(id)arg3 overrideExisting:(BOOL)arg4 ;
-(SXLayoutBlueprint *)parentLayoutBlueprint;
-(void)setIsCurrentlyLayouting:(BOOL)arg1 ;
-(void)updatePosition:(CGPoint)arg1 forComponentWithIdentifier:(id)arg2 ;
-(void)updateSize:(CGSize)arg1 forComponentWithIdentifier:(id)arg2 ;
-(id)componentBlueprintForComponentIdentifier:(id)arg1 includeChildren:(BOOL)arg2 ;
-(NSMutableDictionary *)blueprint;
-(NSMutableArray *)orderedComponentIdentifiers;
-(id)containerComponentIdentifierContainingComponentWithIdentifier:(id)arg1 ;
-(void)invalidateSizeForComponentWithIdentifier:(id)arg1 ;
-(void)setBlueprint:(NSMutableDictionary *)arg1 ;
-(void)setOrderedComponentIdentifiers:(NSMutableArray *)arg1 ;
-(id)description;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(BOOL)isComplete;
@end

